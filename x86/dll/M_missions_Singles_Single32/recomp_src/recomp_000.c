#include "recomp.h"

/* FUN_10001000 @ 0x11511000 (18 bytes, 7 insns) */
void f_11511000(void) {
  FTRACE(0x11511000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11511000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11511004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11511005 jne 0x1151100c */
  if (!C.zf) goto L_1151100c;
  /* 11511007 call 0x11511012 */
  push32(0x1151100cu); f_11511012();
L_1151100c:;
  /* 1151100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1151100e pop eax */
  EAX = (pop32());
  /* 1151100f ret 0xc */
  ESPCHK(0x11511000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11511012 (1807 bytes, 568 insns) */
void f_11511012(void) {
  FTRACE(0x11511012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11511012 push ebx */
  push32((uint32_t)(EBX));
  /* 11511013 push ebp */
  push32((uint32_t)(EBP));
  /* 11511014 push esi */
  push32((uint32_t)(ESI));
  /* 11511015 push edi */
  push32((uint32_t)(EDI));
  /* 11511016 mov edi, dword ptr [0x11519168] */
  EDI = (r32((uint32_t)(0x11519168)));
  /* 1151101c push 4 */
  push32((uint32_t)(0x4u));
  /* 1151101e pop esi */
  ESI = (pop32());
  /* 1151101f push esi */
  push32((uint32_t)(ESI));
  /* 11511020 push 0x1151b168 */
  push32((uint32_t)(0x1151b168u));
  /* 11511025 call edi */
  call_ind((uint32_t)(EDI), 0x11511027u);
  /* 11511027 push esi */
  push32((uint32_t)(ESI));
  /* 11511028 push 0x1151b344 */
  push32((uint32_t)(0x1151b344u));
  /* 1151102d call edi */
  call_ind((uint32_t)(EDI), 0x1151102fu);
  /* 1151102f push esi */
  push32((uint32_t)(ESI));
  /* 11511030 push 0x1151b118 */
  push32((uint32_t)(0x1151b118u));
  /* 11511035 call edi */
  call_ind((uint32_t)(EDI), 0x11511037u);
  /* 11511037 push esi */
  push32((uint32_t)(ESI));
  /* 11511038 push 0x1151b320 */
  push32((uint32_t)(0x1151b320u));
  /* 1151103d call edi */
  call_ind((uint32_t)(EDI), 0x1151103fu);
  /* 1151103f push esi */
  push32((uint32_t)(ESI));
  /* 11511040 push 0x1151b340 */
  push32((uint32_t)(0x1151b340u));
  /* 11511045 call edi */
  call_ind((uint32_t)(EDI), 0x11511047u);
  /* 11511047 push esi */
  push32((uint32_t)(ESI));
  /* 11511048 push 0x1151b2f8 */
  push32((uint32_t)(0x1151b2f8u));
  /* 1151104d call edi */
  call_ind((uint32_t)(EDI), 0x1151104fu);
  /* 1151104f mov esi, dword ptr [0x1151916c] */
  ESI = (r32((uint32_t)(0x1151916c)));
  /* 11511055 mov ebx, 0x1151a2a4 */
  EBX = (0x1151a2a4u);
  /* 1151105a push ebx */
  push32((uint32_t)(EBX));
  /* 1151105b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151105d call esi */
  call_ind((uint32_t)(ESI), 0x1151105fu);
  /* 1151105f push ebx */
  push32((uint32_t)(EBX));
  /* 11511060 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511062 call esi */
  call_ind((uint32_t)(ESI), 0x11511064u);
  /* 11511064 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511067 mov ebp, 0x1151a29c */
  EBP = (0x1151a29cu);
  /* 1151106c push ebp */
  push32((uint32_t)(EBP));
  /* 1151106d push 3 */
  push32((uint32_t)(0x3u));
  /* 1151106f call esi */
  call_ind((uint32_t)(ESI), 0x11511071u);
  /* 11511071 push ebp */
  push32((uint32_t)(EBP));
  /* 11511072 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511074 call esi */
  call_ind((uint32_t)(ESI), 0x11511076u);
  /* 11511076 push ebx */
  push32((uint32_t)(EBX));
  /* 11511077 push 5 */
  push32((uint32_t)(0x5u));
  /* 11511079 call esi */
  call_ind((uint32_t)(ESI), 0x1151107bu);
  /* 1151107b push 0x1151a290 */
  push32((uint32_t)(0x1151a290u));
  /* 11511080 push 6 */
  push32((uint32_t)(0x6u));
  /* 11511082 call esi */
  call_ind((uint32_t)(ESI), 0x11511084u);
  /* 11511084 mov esi, dword ptr [0x11519164] */
  ESI = (r32((uint32_t)(0x11519164)));
  /* 1151108a push 0x1151a28c */
  push32((uint32_t)(0x1151a28cu));
  /* 1151108f push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 11511094 call esi */
  call_ind((uint32_t)(ESI), 0x11511096u);
  /* 11511096 push 0x1151a288 */
  push32((uint32_t)(0x1151a288u));
  /* 1151109b push 0x1151b458 */
  push32((uint32_t)(0x1151b458u));
  /* 115110a0 call esi */
  call_ind((uint32_t)(ESI), 0x115110a2u);
  /* 115110a2 push 0x1151a284 */
  push32((uint32_t)(0x1151a284u));
  /* 115110a7 push 0x1151b460 */
  push32((uint32_t)(0x1151b460u));
  /* 115110ac call esi */
  call_ind((uint32_t)(ESI), 0x115110aeu);
  /* 115110ae push 0x1151a27c */
  push32((uint32_t)(0x1151a27cu));
  /* 115110b3 push 0x1151b368 */
  push32((uint32_t)(0x1151b368u));
  /* 115110b8 call esi */
  call_ind((uint32_t)(ESI), 0x115110bau);
  /* 115110ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115110bd push 0x1151a274 */
  push32((uint32_t)(0x1151a274u));
  /* 115110c2 push 0x1151b328 */
  push32((uint32_t)(0x1151b328u));
  /* 115110c7 call esi */
  call_ind((uint32_t)(ESI), 0x115110c9u);
  /* 115110c9 push 0x1151a26c */
  push32((uint32_t)(0x1151a26cu));
  /* 115110ce push 0x1151b370 */
  push32((uint32_t)(0x1151b370u));
  /* 115110d3 call esi */
  call_ind((uint32_t)(ESI), 0x115110d5u);
  /* 115110d5 push 0x1151a264 */
  push32((uint32_t)(0x1151a264u));
  /* 115110da push 0x1151b330 */
  push32((uint32_t)(0x1151b330u));
  /* 115110df call esi */
  call_ind((uint32_t)(ESI), 0x115110e1u);
  /* 115110e1 push 0x1151a25c */
  push32((uint32_t)(0x1151a25cu));
  /* 115110e6 push 0x1151b378 */
  push32((uint32_t)(0x1151b378u));
  /* 115110eb call esi */
  call_ind((uint32_t)(ESI), 0x115110edu);
  /* 115110ed push 0x1151a258 */
  push32((uint32_t)(0x1151a258u));
  /* 115110f2 push 0x1151b550 */
  push32((uint32_t)(0x1151b550u));
  /* 115110f7 call esi */
  call_ind((uint32_t)(ESI), 0x115110f9u);
  /* 115110f9 push 0x1151a254 */
  push32((uint32_t)(0x1151a254u));
  /* 115110fe push 0x1151b520 */
  push32((uint32_t)(0x1151b520u));
  /* 11511103 call esi */
  call_ind((uint32_t)(ESI), 0x11511105u);
  /* 11511105 push 0x1151a250 */
  push32((uint32_t)(0x1151a250u));
  /* 1151110a push 0x1151b528 */
  push32((uint32_t)(0x1151b528u));
  /* 1151110f call esi */
  call_ind((uint32_t)(ESI), 0x11511111u);
  /* 11511111 push 0x1151a248 */
  push32((uint32_t)(0x1151a248u));
  /* 11511116 push 0x1151b380 */
  push32((uint32_t)(0x1151b380u));
  /* 1151111b call esi */
  call_ind((uint32_t)(ESI), 0x1151111du);
  /* 1151111d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511120 push 0x1151a244 */
  push32((uint32_t)(0x1151a244u));
  /* 11511125 push 0x1151b560 */
  push32((uint32_t)(0x1151b560u));
  /* 1151112a call esi */
  call_ind((uint32_t)(ESI), 0x1151112cu);
  /* 1151112c push 0x1151a240 */
  push32((uint32_t)(0x1151a240u));
  /* 11511131 push 0x1151b530 */
  push32((uint32_t)(0x1151b530u));
  /* 11511136 call esi */
  call_ind((uint32_t)(ESI), 0x11511138u);
  /* 11511138 push 0x1151a23c */
  push32((uint32_t)(0x1151a23cu));
  /* 1151113d push 0x1151b538 */
  push32((uint32_t)(0x1151b538u));
  /* 11511142 call esi */
  call_ind((uint32_t)(ESI), 0x11511144u);
  /* 11511144 push 0x1151a238 */
  push32((uint32_t)(0x1151a238u));
  /* 11511149 push 0x1151b248 */
  push32((uint32_t)(0x1151b248u));
  /* 1151114e call esi */
  call_ind((uint32_t)(ESI), 0x11511150u);
  /* 11511150 push 0x1151a234 */
  push32((uint32_t)(0x1151a234u));
  /* 11511155 push 0x1151b258 */
  push32((uint32_t)(0x1151b258u));
  /* 1151115a call esi */
  call_ind((uint32_t)(ESI), 0x1151115cu);
  /* 1151115c push 0x1151a230 */
  push32((uint32_t)(0x1151a230u));
  /* 11511161 push 0x1151b270 */
  push32((uint32_t)(0x1151b270u));
  /* 11511166 call esi */
  call_ind((uint32_t)(ESI), 0x11511168u);
  /* 11511168 push 0x1151a22c */
  push32((uint32_t)(0x1151a22cu));
  /* 1151116d push 0x1151b288 */
  push32((uint32_t)(0x1151b288u));
  /* 11511172 call esi */
  call_ind((uint32_t)(ESI), 0x11511174u);
  /* 11511174 push 0x1151a228 */
  push32((uint32_t)(0x1151a228u));
  /* 11511179 push 0x1151b448 */
  push32((uint32_t)(0x1151b448u));
  /* 1151117e call esi */
  call_ind((uint32_t)(ESI), 0x11511180u);
  /* 11511180 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511183 push 0x1151a224 */
  push32((uint32_t)(0x1151a224u));
  /* 11511188 push 0x1151b290 */
  push32((uint32_t)(0x1151b290u));
  /* 1151118d call esi */
  call_ind((uint32_t)(ESI), 0x1151118fu);
  /* 1151118f push 0x1151a220 */
  push32((uint32_t)(0x1151a220u));
  /* 11511194 push 0x1151b298 */
  push32((uint32_t)(0x1151b298u));
  /* 11511199 call esi */
  call_ind((uint32_t)(ESI), 0x1151119bu);
  /* 1151119b push 0x1151a21c */
  push32((uint32_t)(0x1151a21cu));
  /* 115111a0 push 0x1151b2a0 */
  push32((uint32_t)(0x1151b2a0u));
  /* 115111a5 call esi */
  call_ind((uint32_t)(ESI), 0x115111a7u);
  /* 115111a7 push 0x1151a218 */
  push32((uint32_t)(0x1151a218u));
  /* 115111ac push 0x1151b478 */
  push32((uint32_t)(0x1151b478u));
  /* 115111b1 call esi */
  call_ind((uint32_t)(ESI), 0x115111b3u);
  /* 115111b3 push 0x1151a214 */
  push32((uint32_t)(0x1151a214u));
  /* 115111b8 push 0x1151b4c8 */
  push32((uint32_t)(0x1151b4c8u));
  /* 115111bd call esi */
  call_ind((uint32_t)(ESI), 0x115111bfu);
  /* 115111bf push 0x1151a210 */
  push32((uint32_t)(0x1151a210u));
  /* 115111c4 push 0x1151b4d0 */
  push32((uint32_t)(0x1151b4d0u));
  /* 115111c9 call esi */
  call_ind((uint32_t)(ESI), 0x115111cbu);
  /* 115111cb push 0x1151a20c */
  push32((uint32_t)(0x1151a20cu));
  /* 115111d0 push 0x1151b4d8 */
  push32((uint32_t)(0x1151b4d8u));
  /* 115111d5 call esi */
  call_ind((uint32_t)(ESI), 0x115111d7u);
  /* 115111d7 push 0x1151a208 */
  push32((uint32_t)(0x1151a208u));
  /* 115111dc push 0x1151b480 */
  push32((uint32_t)(0x1151b480u));
  /* 115111e1 call esi */
  call_ind((uint32_t)(ESI), 0x115111e3u);
  /* 115111e3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115111e6 push 0x1151a204 */
  push32((uint32_t)(0x1151a204u));
  /* 115111eb push 0x1151b488 */
  push32((uint32_t)(0x1151b488u));
  /* 115111f0 call esi */
  call_ind((uint32_t)(ESI), 0x115111f2u);
  /* 115111f2 push 0x1151a200 */
  push32((uint32_t)(0x1151a200u));
  /* 115111f7 push 0x1151b490 */
  push32((uint32_t)(0x1151b490u));
  /* 115111fc call esi */
  call_ind((uint32_t)(ESI), 0x115111feu);
  /* 115111fe push 0x1151a1fc */
  push32((uint32_t)(0x1151a1fcu));
  /* 11511203 push 0x1151b498 */
  push32((uint32_t)(0x1151b498u));
  /* 11511208 call esi */
  call_ind((uint32_t)(ESI), 0x1151120au);
  /* 1151120a push 0x1151a1f8 */
  push32((uint32_t)(0x1151a1f8u));
  /* 1151120f push 0x1151b4a0 */
  push32((uint32_t)(0x1151b4a0u));
  /* 11511214 call esi */
  call_ind((uint32_t)(ESI), 0x11511216u);
  /* 11511216 push 0x1151a1f4 */
  push32((uint32_t)(0x1151a1f4u));
  /* 1151121b push 0x1151b4a8 */
  push32((uint32_t)(0x1151b4a8u));
  /* 11511220 call esi */
  call_ind((uint32_t)(ESI), 0x11511222u);
  /* 11511222 push 0x1151a1f0 */
  push32((uint32_t)(0x1151a1f0u));
  /* 11511227 push 0x1151b4b0 */
  push32((uint32_t)(0x1151b4b0u));
  /* 1151122c call esi */
  call_ind((uint32_t)(ESI), 0x1151122eu);
  /* 1151122e push 0x1151a1ec */
  push32((uint32_t)(0x1151a1ecu));
  /* 11511233 push 0x1151b4b8 */
  push32((uint32_t)(0x1151b4b8u));
  /* 11511238 call esi */
  call_ind((uint32_t)(ESI), 0x1151123au);
  /* 1151123a push 0x1151a1e8 */
  push32((uint32_t)(0x1151a1e8u));
  /* 1151123f push 0x1151b4c0 */
  push32((uint32_t)(0x1151b4c0u));
  /* 11511244 call esi */
  call_ind((uint32_t)(ESI), 0x11511246u);
  /* 11511246 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511249 push 0x1151a1e4 */
  push32((uint32_t)(0x1151a1e4u));
  /* 1151124e push 0x1151b2a8 */
  push32((uint32_t)(0x1151b2a8u));
  /* 11511253 call esi */
  call_ind((uint32_t)(ESI), 0x11511255u);
  /* 11511255 push 0x1151a1e0 */
  push32((uint32_t)(0x1151a1e0u));
  /* 1151125a push 0x1151b3d0 */
  push32((uint32_t)(0x1151b3d0u));
  /* 1151125f call esi */
  call_ind((uint32_t)(ESI), 0x11511261u);
  /* 11511261 push 0x1151a1d8 */
  push32((uint32_t)(0x1151a1d8u));
  /* 11511266 push 0x1151b5b0 */
  push32((uint32_t)(0x1151b5b0u));
  /* 1151126b call esi */
  call_ind((uint32_t)(ESI), 0x1151126du);
  /* 1151126d push 0x1151a1d4 */
  push32((uint32_t)(0x1151a1d4u));
  /* 11511272 push 0x1151b2b0 */
  push32((uint32_t)(0x1151b2b0u));
  /* 11511277 call esi */
  call_ind((uint32_t)(ESI), 0x11511279u);
  /* 11511279 push 0x1151a1d0 */
  push32((uint32_t)(0x1151a1d0u));
  /* 1151127e push 0x1151b4e8 */
  push32((uint32_t)(0x1151b4e8u));
  /* 11511283 call esi */
  call_ind((uint32_t)(ESI), 0x11511285u);
  /* 11511285 push 0x1151a1cc */
  push32((uint32_t)(0x1151a1ccu));
  /* 1151128a push 0x1151b3d8 */
  push32((uint32_t)(0x1151b3d8u));
  /* 1151128f call esi */
  call_ind((uint32_t)(ESI), 0x11511291u);
  /* 11511291 push 0x1151a1c8 */
  push32((uint32_t)(0x1151a1c8u));
  /* 11511296 push 0x1151b3e8 */
  push32((uint32_t)(0x1151b3e8u));
  /* 1151129b call esi */
  call_ind((uint32_t)(ESI), 0x1151129du);
  /* 1151129d push 0x1151a1c4 */
  push32((uint32_t)(0x1151a1c4u));
  /* 115112a2 push 0x1151b3f0 */
  push32((uint32_t)(0x1151b3f0u));
  /* 115112a7 call esi */
  call_ind((uint32_t)(ESI), 0x115112a9u);
  /* 115112a9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115112ac push 0x1151a1c0 */
  push32((uint32_t)(0x1151a1c0u));
  /* 115112b1 push 0x1151b410 */
  push32((uint32_t)(0x1151b410u));
  /* 115112b6 call esi */
  call_ind((uint32_t)(ESI), 0x115112b8u);
  /* 115112b8 push 0x1151a1bc */
  push32((uint32_t)(0x1151a1bcu));
  /* 115112bd push 0x1151b418 */
  push32((uint32_t)(0x1151b418u));
  /* 115112c2 call esi */
  call_ind((uint32_t)(ESI), 0x115112c4u);
  /* 115112c4 push 0x1151a1b4 */
  push32((uint32_t)(0x1151a1b4u));
  /* 115112c9 push 0x1151b5d0 */
  push32((uint32_t)(0x1151b5d0u));
  /* 115112ce call esi */
  call_ind((uint32_t)(ESI), 0x115112d0u);
  /* 115112d0 push 0x1151a1ac */
  push32((uint32_t)(0x1151a1acu));
  /* 115112d5 push 0x1151b388 */
  push32((uint32_t)(0x1151b388u));
  /* 115112da call esi */
  call_ind((uint32_t)(ESI), 0x115112dcu);
  /* 115112dc push 0x1151a1a8 */
  push32((uint32_t)(0x1151a1a8u));
  /* 115112e1 push 0x1151b3c8 */
  push32((uint32_t)(0x1151b3c8u));
  /* 115112e6 call esi */
  call_ind((uint32_t)(ESI), 0x115112e8u);
  /* 115112e8 push 0x1151a1a4 */
  push32((uint32_t)(0x1151a1a4u));
  /* 115112ed push 0x1151b3e0 */
  push32((uint32_t)(0x1151b3e0u));
  /* 115112f2 call esi */
  call_ind((uint32_t)(ESI), 0x115112f4u);
  /* 115112f4 push 0x1151a1a0 */
  push32((uint32_t)(0x1151a1a0u));
  /* 115112f9 push 0x1151b3f8 */
  push32((uint32_t)(0x1151b3f8u));
  /* 115112fe call esi */
  call_ind((uint32_t)(ESI), 0x11511300u);
  /* 11511300 push 0x1151a198 */
  push32((uint32_t)(0x1151a198u));
  /* 11511305 push 0x1151b5a8 */
  push32((uint32_t)(0x1151b5a8u));
  /* 1151130a call esi */
  call_ind((uint32_t)(ESI), 0x1151130cu);
  /* 1151130c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151130f push 0x1151a194 */
  push32((uint32_t)(0x1151a194u));
  /* 11511314 push 0x1151b408 */
  push32((uint32_t)(0x1151b408u));
  /* 11511319 call esi */
  call_ind((uint32_t)(ESI), 0x1151131bu);
  /* 1151131b push 0x1151a18c */
  push32((uint32_t)(0x1151a18cu));
  /* 11511320 push 0x1151b608 */
  push32((uint32_t)(0x1151b608u));
  /* 11511325 call esi */
  call_ind((uint32_t)(ESI), 0x11511327u);
  /* 11511327 push 0x1151a188 */
  push32((uint32_t)(0x1151a188u));
  /* 1151132c push 0x1151b420 */
  push32((uint32_t)(0x1151b420u));
  /* 11511331 call esi */
  call_ind((uint32_t)(ESI), 0x11511333u);
  /* 11511333 push 0x1151a184 */
  push32((uint32_t)(0x1151a184u));
  /* 11511338 push 0x1151b400 */
  push32((uint32_t)(0x1151b400u));
  /* 1151133d call esi */
  call_ind((uint32_t)(ESI), 0x1151133fu);
  /* 1151133f push 0x1151a180 */
  push32((uint32_t)(0x1151a180u));
  /* 11511344 push 0x1151b428 */
  push32((uint32_t)(0x1151b428u));
  /* 11511349 call esi */
  call_ind((uint32_t)(ESI), 0x1151134bu);
  /* 1151134b push 0x1151a178 */
  push32((uint32_t)(0x1151a178u));
  /* 11511350 push 0x1151b5d8 */
  push32((uint32_t)(0x1151b5d8u));
  /* 11511355 call esi */
  call_ind((uint32_t)(ESI), 0x11511357u);
  /* 11511357 push 0x1151a174 */
  push32((uint32_t)(0x1151a174u));
  /* 1151135c push 0x1151b430 */
  push32((uint32_t)(0x1151b430u));
  /* 11511361 call esi */
  call_ind((uint32_t)(ESI), 0x11511363u);
  /* 11511363 push 0x1151a16c */
  push32((uint32_t)(0x1151a16cu));
  /* 11511368 push 0x1151b5e8 */
  push32((uint32_t)(0x1151b5e8u));
  /* 1151136d call esi */
  call_ind((uint32_t)(ESI), 0x1151136fu);
  /* 1151136f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511372 push 0x1151a164 */
  push32((uint32_t)(0x1151a164u));
  /* 11511377 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 1151137c call esi */
  call_ind((uint32_t)(ESI), 0x1151137eu);
  /* 1151137e push 0x1151a15c */
  push32((uint32_t)(0x1151a15cu));
  /* 11511383 push 0x1151b610 */
  push32((uint32_t)(0x1151b610u));
  /* 11511388 call esi */
  call_ind((uint32_t)(ESI), 0x1151138au);
  /* 1151138a push 0x1151a154 */
  push32((uint32_t)(0x1151a154u));
  /* 1151138f push 0x1151b620 */
  push32((uint32_t)(0x1151b620u));
  /* 11511394 call esi */
  call_ind((uint32_t)(ESI), 0x11511396u);
  /* 11511396 push 0x1151a14c */
  push32((uint32_t)(0x1151a14cu));
  /* 1151139b push 0x1151b630 */
  push32((uint32_t)(0x1151b630u));
  /* 115113a0 call esi */
  call_ind((uint32_t)(ESI), 0x115113a2u);
  /* 115113a2 push 0x1151a144 */
  push32((uint32_t)(0x1151a144u));
  /* 115113a7 push 0x1151b640 */
  push32((uint32_t)(0x1151b640u));
  /* 115113ac call esi */
  call_ind((uint32_t)(ESI), 0x115113aeu);
  /* 115113ae push 0x1151a13c */
  push32((uint32_t)(0x1151a13cu));
  /* 115113b3 push 0x1151b218 */
  push32((uint32_t)(0x1151b218u));
  /* 115113b8 call esi */
  call_ind((uint32_t)(ESI), 0x115113bau);
  /* 115113ba push 0x1151a134 */
  push32((uint32_t)(0x1151a134u));
  /* 115113bf push 0x1151b220 */
  push32((uint32_t)(0x1151b220u));
  /* 115113c4 call esi */
  call_ind((uint32_t)(ESI), 0x115113c6u);
  /* 115113c6 push 0x1151a12c */
  push32((uint32_t)(0x1151a12cu));
  /* 115113cb push 0x1151b228 */
  push32((uint32_t)(0x1151b228u));
  /* 115113d0 call esi */
  call_ind((uint32_t)(ESI), 0x115113d2u);
  /* 115113d2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115113d5 push 0x1151a128 */
  push32((uint32_t)(0x1151a128u));
  /* 115113da push 0x1151b438 */
  push32((uint32_t)(0x1151b438u));
  /* 115113df call esi */
  call_ind((uint32_t)(ESI), 0x115113e1u);
  /* 115113e1 push 0x1151a120 */
  push32((uint32_t)(0x1151a120u));
  /* 115113e6 push 0x1151b628 */
  push32((uint32_t)(0x1151b628u));
  /* 115113eb call esi */
  call_ind((uint32_t)(ESI), 0x115113edu);
  /* 115113ed push 0x1151a118 */
  push32((uint32_t)(0x1151a118u));
  /* 115113f2 push 0x1151b638 */
  push32((uint32_t)(0x1151b638u));
  /* 115113f7 call esi */
  call_ind((uint32_t)(ESI), 0x115113f9u);
  /* 115113f9 push 0x1151a110 */
  push32((uint32_t)(0x1151a110u));
  /* 115113fe push 0x1151b648 */
  push32((uint32_t)(0x1151b648u));
  /* 11511403 call esi */
  call_ind((uint32_t)(ESI), 0x11511405u);
  /* 11511405 push 0x1151a10c */
  push32((uint32_t)(0x1151a10cu));
  /* 1151140a push 0x1151b440 */
  push32((uint32_t)(0x1151b440u));
  /* 1151140f call esi */
  call_ind((uint32_t)(ESI), 0x11511411u);
  /* 11511411 push 0x1151a104 */
  push32((uint32_t)(0x1151a104u));
  /* 11511416 push 0x1151b650 */
  push32((uint32_t)(0x1151b650u));
  /* 1151141b call esi */
  call_ind((uint32_t)(ESI), 0x1151141du);
  /* 1151141d push 0x1151a0f8 */
  push32((uint32_t)(0x1151a0f8u));
  /* 11511422 push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 11511427 call esi */
  call_ind((uint32_t)(ESI), 0x11511429u);
  /* 11511429 push 0x1151a0f4 */
  push32((uint32_t)(0x1151a0f4u));
  /* 1151142e push 0x1151b518 */
  push32((uint32_t)(0x1151b518u));
  /* 11511433 call esi */
  call_ind((uint32_t)(ESI), 0x11511435u);
  /* 11511435 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511438 push 0x1151a0ec */
  push32((uint32_t)(0x1151a0ecu));
  /* 1151143d push 0x1151b238 */
  push32((uint32_t)(0x1151b238u));
  /* 11511442 call esi */
  call_ind((uint32_t)(ESI), 0x11511444u);
  /* 11511444 push 0x1151a0e8 */
  push32((uint32_t)(0x1151a0e8u));
  /* 11511449 push 0x1151b470 */
  push32((uint32_t)(0x1151b470u));
  /* 1151144e call esi */
  call_ind((uint32_t)(ESI), 0x11511450u);
  /* 11511450 push 0x1151a0e4 */
  push32((uint32_t)(0x1151a0e4u));
  /* 11511455 push 0x1151b4f0 */
  push32((uint32_t)(0x1151b4f0u));
  /* 1151145a call esi */
  call_ind((uint32_t)(ESI), 0x1151145cu);
  /* 1151145c push 0x1151a0e0 */
  push32((uint32_t)(0x1151a0e0u));
  /* 11511461 push 0x1151b4f8 */
  push32((uint32_t)(0x1151b4f8u));
  /* 11511466 call esi */
  call_ind((uint32_t)(ESI), 0x11511468u);
  /* 11511468 mov esi, dword ptr [0x11519174] */
  ESI = (r32((uint32_t)(0x11519174)));
  /* 1151146e push 0x1151a0d8 */
  push32((uint32_t)(0x1151a0d8u));
  /* 11511473 push 0x1151b348 */
  push32((uint32_t)(0x1151b348u));
  /* 11511478 call esi */
  call_ind((uint32_t)(ESI), 0x1151147au);
  /* 1151147a push 0x1151a0d4 */
  push32((uint32_t)(0x1151a0d4u));
  /* 1151147f push 0x1151b300 */
  push32((uint32_t)(0x1151b300u));
  /* 11511484 call esi */
  call_ind((uint32_t)(ESI), 0x11511486u);
  /* 11511486 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 1151148b push 0x1151b350 */
  push32((uint32_t)(0x1151b350u));
  /* 11511490 call esi */
  call_ind((uint32_t)(ESI), 0x11511492u);
  /* 11511492 push 0x1151a0cc */
  push32((uint32_t)(0x1151a0ccu));
  /* 11511497 push 0x1151b210 */
  push32((uint32_t)(0x1151b210u));
  /* 1151149c call esi */
  call_ind((uint32_t)(ESI), 0x1151149eu);
  /* 1151149e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115114a1 push 0x1151a0c8 */
  push32((uint32_t)(0x1151a0c8u));
  /* 115114a6 push 0x1151b250 */
  push32((uint32_t)(0x1151b250u));
  /* 115114ab call esi */
  call_ind((uint32_t)(ESI), 0x115114adu);
  /* 115114ad push 0x1151a0c4 */
  push32((uint32_t)(0x1151a0c4u));
  /* 115114b2 push 0x1151b260 */
  push32((uint32_t)(0x1151b260u));
  /* 115114b7 call esi */
  call_ind((uint32_t)(ESI), 0x115114b9u);
  /* 115114b9 push 0x1151a0c0 */
  push32((uint32_t)(0x1151a0c0u));
  /* 115114be push 0x1151b278 */
  push32((uint32_t)(0x1151b278u));
  /* 115114c3 call esi */
  call_ind((uint32_t)(ESI), 0x115114c5u);
  /* 115114c5 push 0x1151a0b8 */
  push32((uint32_t)(0x1151a0b8u));
  /* 115114ca push 0x1151b1b8 */
  push32((uint32_t)(0x1151b1b8u));
  /* 115114cf call esi */
  call_ind((uint32_t)(ESI), 0x115114d1u);
  /* 115114d1 push 0x1151a0b0 */
  push32((uint32_t)(0x1151a0b0u));
  /* 115114d6 push 0x1151b1c0 */
  push32((uint32_t)(0x1151b1c0u));
  /* 115114db call esi */
  call_ind((uint32_t)(ESI), 0x115114ddu);
  /* 115114dd push 0x1151a0a8 */
  push32((uint32_t)(0x1151a0a8u));
  /* 115114e2 push 0x1151b318 */
  push32((uint32_t)(0x1151b318u));
  /* 115114e7 call esi */
  call_ind((uint32_t)(ESI), 0x115114e9u);
  /* 115114e9 push 0x1151a0a4 */
  push32((uint32_t)(0x1151a0a4u));
  /* 115114ee push 0x1151b338 */
  push32((uint32_t)(0x1151b338u));
  /* 115114f3 call esi */
  call_ind((uint32_t)(ESI), 0x115114f5u);
  /* 115114f5 mov esi, dword ptr [0x11519178] */
  ESI = (r32((uint32_t)(0x11519178)));
  /* 115114fb push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11511500 call esi */
  call_ind((uint32_t)(ESI), 0x11511502u);
  /* 11511502 push 0x1151b3a0 */
  push32((uint32_t)(0x1151b3a0u));
  /* 11511507 call esi */
  call_ind((uint32_t)(ESI), 0x11511509u);
  /* 11511509 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151150c push 0x1151b1a0 */
  push32((uint32_t)(0x1151b1a0u));
  /* 11511511 call esi */
  call_ind((uint32_t)(ESI), 0x11511513u);
  /* 11511513 mov ebp, 0x1151b160 */
  EBP = (0x1151b160u);
  /* 11511518 push ebp */
  push32((uint32_t)(EBP));
  /* 11511519 call esi */
  call_ind((uint32_t)(ESI), 0x1151151bu);
  /* 1151151b push 8 */
  push32((uint32_t)(0x8u));
  /* 1151151d pop ebx */
  EBX = (pop32());
  /* 1151151e push ebx */
  push32((uint32_t)(EBX));
  /* 1151151f push ebp */
  push32((uint32_t)(EBP));
  /* 11511520 call edi */
  call_ind((uint32_t)(EDI), 0x11511522u);
  /* 11511522 mov ebp, 0x1151b2c0 */
  EBP = (0x1151b2c0u);
  /* 11511527 push ebp */
  push32((uint32_t)(EBP));
  /* 11511528 call esi */
  call_ind((uint32_t)(ESI), 0x1151152au);
  /* 1151152a push ebx */
  push32((uint32_t)(EBX));
  /* 1151152b push ebp */
  push32((uint32_t)(EBP));
  /* 1151152c call edi */
  call_ind((uint32_t)(EDI), 0x1151152eu);
  /* 1151152e mov ebp, 0x1151b2d0 */
  EBP = (0x1151b2d0u);
  /* 11511533 push ebp */
  push32((uint32_t)(EBP));
  /* 11511534 call esi */
  call_ind((uint32_t)(ESI), 0x11511536u);
  /* 11511536 push ebx */
  push32((uint32_t)(EBX));
  /* 11511537 push ebp */
  push32((uint32_t)(EBP));
  /* 11511538 call edi */
  call_ind((uint32_t)(EDI), 0x1151153au);
  /* 1151153a mov ebp, 0x1151b2c8 */
  EBP = (0x1151b2c8u);
  /* 1151153f push ebp */
  push32((uint32_t)(EBP));
  /* 11511540 call esi */
  call_ind((uint32_t)(ESI), 0x11511542u);
  /* 11511542 push ebx */
  push32((uint32_t)(EBX));
  /* 11511543 push ebp */
  push32((uint32_t)(EBP));
  /* 11511544 call edi */
  call_ind((uint32_t)(EDI), 0x11511546u);
  /* 11511546 mov ebp, 0x1151b2d8 */
  EBP = (0x1151b2d8u);
  /* 1151154b push ebp */
  push32((uint32_t)(EBP));
  /* 1151154c call esi */
  call_ind((uint32_t)(ESI), 0x1151154eu);
  /* 1151154e push ebx */
  push32((uint32_t)(EBX));
  /* 1151154f push ebp */
  push32((uint32_t)(EBP));
  /* 11511550 call edi */
  call_ind((uint32_t)(EDI), 0x11511552u);
  /* 11511552 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511555 mov ebp, 0x1151b108 */
  EBP = (0x1151b108u);
  /* 1151155a push ebp */
  push32((uint32_t)(EBP));
  /* 1151155b call esi */
  call_ind((uint32_t)(ESI), 0x1151155du);
  /* 1151155d push ebx */
  push32((uint32_t)(EBX));
  /* 1151155e push ebp */
  push32((uint32_t)(EBP));
  /* 1151155f call edi */
  call_ind((uint32_t)(EDI), 0x11511561u);
  /* 11511561 mov ebp, 0x1151b130 */
  EBP = (0x1151b130u);
  /* 11511566 push ebp */
  push32((uint32_t)(EBP));
  /* 11511567 call esi */
  call_ind((uint32_t)(ESI), 0x11511569u);
  /* 11511569 push ebx */
  push32((uint32_t)(EBX));
  /* 1151156a push ebp */
  push32((uint32_t)(EBP));
  /* 1151156b call edi */
  call_ind((uint32_t)(EDI), 0x1151156du);
  /* 1151156d mov ebp, 0x1151b1f0 */
  EBP = (0x1151b1f0u);
  /* 11511572 push ebp */
  push32((uint32_t)(EBP));
  /* 11511573 call esi */
  call_ind((uint32_t)(ESI), 0x11511575u);
  /* 11511575 push ebx */
  push32((uint32_t)(EBX));
  /* 11511576 push ebp */
  push32((uint32_t)(EBP));
  /* 11511577 call edi */
  call_ind((uint32_t)(EDI), 0x11511579u);
  /* 11511579 mov ebp, 0x1151b1f8 */
  EBP = (0x1151b1f8u);
  /* 1151157e push ebp */
  push32((uint32_t)(EBP));
  /* 1151157f call esi */
  call_ind((uint32_t)(ESI), 0x11511581u);
  /* 11511581 push ebx */
  push32((uint32_t)(EBX));
  /* 11511582 push ebp */
  push32((uint32_t)(EBP));
  /* 11511583 call edi */
  call_ind((uint32_t)(EDI), 0x11511585u);
  /* 11511585 mov ebp, 0x1151b200 */
  EBP = (0x1151b200u);
  /* 1151158a push ebp */
  push32((uint32_t)(EBP));
  /* 1151158b call esi */
  call_ind((uint32_t)(ESI), 0x1151158du);
  /* 1151158d push ebx */
  push32((uint32_t)(EBX));
  /* 1151158e push ebp */
  push32((uint32_t)(EBP));
  /* 1151158f call edi */
  call_ind((uint32_t)(EDI), 0x11511591u);
  /* 11511591 mov ebp, 0x1151b208 */
  EBP = (0x1151b208u);
  /* 11511596 push ebp */
  push32((uint32_t)(EBP));
  /* 11511597 call esi */
  call_ind((uint32_t)(ESI), 0x11511599u);
  /* 11511599 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151159c push ebx */
  push32((uint32_t)(EBX));
  /* 1151159d push ebp */
  push32((uint32_t)(EBP));
  /* 1151159e call edi */
  call_ind((uint32_t)(EDI), 0x115115a0u);
  /* 115115a0 mov ebp, 0x1151b110 */
  EBP = (0x1151b110u);
  /* 115115a5 push ebp */
  push32((uint32_t)(EBP));
  /* 115115a6 call esi */
  call_ind((uint32_t)(ESI), 0x115115a8u);
  /* 115115a8 push ebx */
  push32((uint32_t)(EBX));
  /* 115115a9 push ebp */
  push32((uint32_t)(EBP));
  /* 115115aa call edi */
  call_ind((uint32_t)(EDI), 0x115115acu);
  /* 115115ac mov ebp, 0x1151b2f0 */
  EBP = (0x1151b2f0u);
  /* 115115b1 push ebp */
  push32((uint32_t)(EBP));
  /* 115115b2 call esi */
  call_ind((uint32_t)(ESI), 0x115115b4u);
  /* 115115b4 push ebx */
  push32((uint32_t)(EBX));
  /* 115115b5 push ebp */
  push32((uint32_t)(EBP));
  /* 115115b6 call edi */
  call_ind((uint32_t)(EDI), 0x115115b8u);
  /* 115115b8 mov ebp, 0x1151b590 */
  EBP = (0x1151b590u);
  /* 115115bd push ebp */
  push32((uint32_t)(EBP));
  /* 115115be call esi */
  call_ind((uint32_t)(ESI), 0x115115c0u);
  /* 115115c0 push ebx */
  push32((uint32_t)(EBX));
  /* 115115c1 push ebp */
  push32((uint32_t)(EBP));
  /* 115115c2 call edi */
  call_ind((uint32_t)(EDI), 0x115115c4u);
  /* 115115c4 mov ebp, 0x1151b1e0 */
  EBP = (0x1151b1e0u);
  /* 115115c9 push ebp */
  push32((uint32_t)(EBP));
  /* 115115ca call esi */
  call_ind((uint32_t)(ESI), 0x115115ccu);
  /* 115115cc push ebx */
  push32((uint32_t)(EBX));
  /* 115115cd push ebp */
  push32((uint32_t)(EBP));
  /* 115115ce call edi */
  call_ind((uint32_t)(EDI), 0x115115d0u);
  /* 115115d0 mov ebp, 0x1151b128 */
  EBP = (0x1151b128u);
  /* 115115d5 push ebp */
  push32((uint32_t)(EBP));
  /* 115115d6 call esi */
  call_ind((uint32_t)(ESI), 0x115115d8u);
  /* 115115d8 push ebx */
  push32((uint32_t)(EBX));
  /* 115115d9 push ebp */
  push32((uint32_t)(EBP));
  /* 115115da call edi */
  call_ind((uint32_t)(EDI), 0x115115dcu);
  /* 115115dc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115115df mov ebp, 0x1151b668 */
  EBP = (0x1151b668u);
  /* 115115e4 push ebp */
  push32((uint32_t)(EBP));
  /* 115115e5 call esi */
  call_ind((uint32_t)(ESI), 0x115115e7u);
  /* 115115e7 push ebx */
  push32((uint32_t)(EBX));
  /* 115115e8 push ebp */
  push32((uint32_t)(EBP));
  /* 115115e9 call edi */
  call_ind((uint32_t)(EDI), 0x115115ebu);
  /* 115115eb mov ebp, 0x1151b310 */
  EBP = (0x1151b310u);
  /* 115115f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115115f1 call esi */
  call_ind((uint32_t)(ESI), 0x115115f3u);
  /* 115115f3 push ebx */
  push32((uint32_t)(EBX));
  /* 115115f4 push ebp */
  push32((uint32_t)(EBP));
  /* 115115f5 call edi */
  call_ind((uint32_t)(EDI), 0x115115f7u);
  /* 115115f7 mov ebp, 0x1151b188 */
  EBP = (0x1151b188u);
  /* 115115fc push ebp */
  push32((uint32_t)(EBP));
  /* 115115fd call esi */
  call_ind((uint32_t)(ESI), 0x115115ffu);
  /* 115115ff push ebx */
  push32((uint32_t)(EBX));
  /* 11511600 push ebp */
  push32((uint32_t)(EBP));
  /* 11511601 call edi */
  call_ind((uint32_t)(EDI), 0x11511603u);
  /* 11511603 mov ebp, 0x1151b670 */
  EBP = (0x1151b670u);
  /* 11511608 push ebp */
  push32((uint32_t)(EBP));
  /* 11511609 call esi */
  call_ind((uint32_t)(ESI), 0x1151160bu);
  /* 1151160b push ebx */
  push32((uint32_t)(EBX));
  /* 1151160c push ebp */
  push32((uint32_t)(EBP));
  /* 1151160d call edi */
  call_ind((uint32_t)(EDI), 0x1151160fu);
  /* 1151160f mov ebp, 0x1151b5f0 */
  EBP = (0x1151b5f0u);
  /* 11511614 push ebp */
  push32((uint32_t)(EBP));
  /* 11511615 call esi */
  call_ind((uint32_t)(ESI), 0x11511617u);
  /* 11511617 push ebx */
  push32((uint32_t)(EBX));
  /* 11511618 push ebp */
  push32((uint32_t)(EBP));
  /* 11511619 call edi */
  call_ind((uint32_t)(EDI), 0x1151161bu);
  /* 1151161b mov ebp, 0x1151b170 */
  EBP = (0x1151b170u);
  /* 11511620 push ebp */
  push32((uint32_t)(EBP));
  /* 11511621 call esi */
  call_ind((uint32_t)(ESI), 0x11511623u);
  /* 11511623 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511626 push ebx */
  push32((uint32_t)(EBX));
  /* 11511627 push ebp */
  push32((uint32_t)(EBP));
  /* 11511628 call edi */
  call_ind((uint32_t)(EDI), 0x1151162au);
  /* 1151162a mov ebp, 0x1151b5e0 */
  EBP = (0x1151b5e0u);
  /* 1151162f push ebp */
  push32((uint32_t)(EBP));
  /* 11511630 call esi */
  call_ind((uint32_t)(ESI), 0x11511632u);
  /* 11511632 push ebx */
  push32((uint32_t)(EBX));
  /* 11511633 push ebp */
  push32((uint32_t)(EBP));
  /* 11511634 call edi */
  call_ind((uint32_t)(EDI), 0x11511636u);
  /* 11511636 mov ebp, 0x1151b180 */
  EBP = (0x1151b180u);
  /* 1151163b push ebp */
  push32((uint32_t)(EBP));
  /* 1151163c call esi */
  call_ind((uint32_t)(ESI), 0x1151163eu);
  /* 1151163e push ebx */
  push32((uint32_t)(EBX));
  /* 1151163f push ebp */
  push32((uint32_t)(EBP));
  /* 11511640 call edi */
  call_ind((uint32_t)(EDI), 0x11511642u);
  /* 11511642 mov ebp, 0x1151b618 */
  EBP = (0x1151b618u);
  /* 11511647 push ebp */
  push32((uint32_t)(EBP));
  /* 11511648 call esi */
  call_ind((uint32_t)(ESI), 0x1151164au);
  /* 1151164a push ebx */
  push32((uint32_t)(EBX));
  /* 1151164b push ebp */
  push32((uint32_t)(EBP));
  /* 1151164c call edi */
  call_ind((uint32_t)(EDI), 0x1151164eu);
  /* 1151164e mov ebp, 0x1151b178 */
  EBP = (0x1151b178u);
  /* 11511653 push ebp */
  push32((uint32_t)(EBP));
  /* 11511654 call esi */
  call_ind((uint32_t)(ESI), 0x11511656u);
  /* 11511656 push ebx */
  push32((uint32_t)(EBX));
  /* 11511657 push ebp */
  push32((uint32_t)(EBP));
  /* 11511658 call edi */
  call_ind((uint32_t)(EDI), 0x1151165au);
  /* 1151165a mov ebp, 0x1151b600 */
  EBP = (0x1151b600u);
  /* 1151165f push ebp */
  push32((uint32_t)(EBP));
  /* 11511660 call esi */
  call_ind((uint32_t)(ESI), 0x11511662u);
  /* 11511662 push ebx */
  push32((uint32_t)(EBX));
  /* 11511663 push ebp */
  push32((uint32_t)(EBP));
  /* 11511664 call edi */
  call_ind((uint32_t)(EDI), 0x11511666u);
  /* 11511666 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511669 mov ebp, 0x1151b190 */
  EBP = (0x1151b190u);
  /* 1151166e push ebp */
  push32((uint32_t)(EBP));
  /* 1151166f call esi */
  call_ind((uint32_t)(ESI), 0x11511671u);
  /* 11511671 push ebx */
  push32((uint32_t)(EBX));
  /* 11511672 push ebp */
  push32((uint32_t)(EBP));
  /* 11511673 call edi */
  call_ind((uint32_t)(EDI), 0x11511675u);
  /* 11511675 mov ebp, dword ptr [0x11519170] */
  EBP = (r32((uint32_t)(0x11519170)));
  /* 1151167b push 0x1151a098 */
  push32((uint32_t)(0x1151a098u));
  /* 11511680 push 0x1151b1e8 */
  push32((uint32_t)(0x1151b1e8u));
  /* 11511685 call ebp */
  call_ind((uint32_t)(EBP), 0x11511687u);
  /* 11511687 push 0x1151a08c */
  push32((uint32_t)(0x1151a08cu));
  /* 1151168c push 0x1151b390 */
  push32((uint32_t)(0x1151b390u));
  /* 11511691 call ebp */
  call_ind((uint32_t)(EBP), 0x11511693u);
  /* 11511693 push 0x1151a07c */
  push32((uint32_t)(0x1151a07cu));
  /* 11511698 push 0x1151b5b8 */
  push32((uint32_t)(0x1151b5b8u));
  /* 1151169d call ebp */
  call_ind((uint32_t)(EBP), 0x1151169fu);
  /* 1151169f push 0x1151a06c */
  push32((uint32_t)(0x1151a06cu));
  /* 115116a4 push 0x1151b3c0 */
  push32((uint32_t)(0x1151b3c0u));
  /* 115116a9 call ebp */
  call_ind((uint32_t)(EBP), 0x115116abu);
  /* 115116ab push 0x1151a058 */
  push32((uint32_t)(0x1151a058u));
  /* 115116b0 push 0x1151b100 */
  push32((uint32_t)(0x1151b100u));
  /* 115116b5 call ebp */
  call_ind((uint32_t)(EBP), 0x115116b7u);
  /* 115116b7 push 0x1151a050 */
  push32((uint32_t)(0x1151a050u));
  /* 115116bc push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115116c1 call dword ptr [0x11519180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519180))), 0x115116c7u);
  /* 115116c7 push 0x1151a03c */
  push32((uint32_t)(0x1151a03cu));
  /* 115116cc push 0x1151b280 */
  push32((uint32_t)(0x1151b280u));
  /* 115116d1 call ebp */
  call_ind((uint32_t)(EBP), 0x115116d3u);
  /* 115116d3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115116d6 push 0x1151a030 */
  push32((uint32_t)(0x1151a030u));
  /* 115116db push 0x1151b658 */
  push32((uint32_t)(0x1151b658u));
  /* 115116e0 call ebp */
  call_ind((uint32_t)(EBP), 0x115116e2u);
  /* 115116e2 push ebx */
  push32((uint32_t)(EBX));
  /* 115116e3 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 115116e8 call edi */
  call_ind((uint32_t)(EDI), 0x115116eau);
  /* 115116ea push ebx */
  push32((uint32_t)(EBX));
  /* 115116eb push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 115116f0 call edi */
  call_ind((uint32_t)(EDI), 0x115116f2u);
  /* 115116f2 push ebx */
  push32((uint32_t)(EBX));
  /* 115116f3 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 115116f8 call edi */
  call_ind((uint32_t)(EDI), 0x115116fau);
  /* 115116fa push ebx */
  push32((uint32_t)(EBX));
  /* 115116fb push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11511700 call edi */
  call_ind((uint32_t)(EDI), 0x11511702u);
  /* 11511702 push ebx */
  push32((uint32_t)(EBX));
  /* 11511703 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11511708 call edi */
  call_ind((uint32_t)(EDI), 0x1151170au);
  /* 1151170a push ebx */
  push32((uint32_t)(EBX));
  /* 1151170b push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 11511710 call edi */
  call_ind((uint32_t)(EDI), 0x11511712u);
  /* 11511712 push 0x1151b558 */
  push32((uint32_t)(0x1151b558u));
  /* 11511717 call esi */
  call_ind((uint32_t)(ESI), 0x11511719u);
  /* 11511719 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151171c pop edi */
  EDI = (pop32());
  /* 1151171d pop esi */
  ESI = (pop32());
  /* 1151171e pop ebp */
  EBP = (pop32());
  /* 1151171f pop ebx */
  EBX = (pop32());
  /* 11511720 ret  */
  ESPCHK(0x11511012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11511721 (17093 bytes, 5245 insns) */
void f_11511721(void) {
  FTRACE(0x11511721u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11511721 push ecx */
  push32((uint32_t)(ECX));
  /* 11511722 push ebx */
  push32((uint32_t)(EBX));
  /* 11511723 push ebp */
  push32((uint32_t)(EBP));
  /* 11511724 push esi */
  push32((uint32_t)(ESI));
  /* 11511725 push edi */
  push32((uint32_t)(EDI));
  /* 11511726 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11511728 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151172eu);
  /* 1151172e mov ebx, dword ptr [0x11519184] */
  EBX = (r32((uint32_t)(0x11519184)));
  /* 11511734 mov edi, dword ptr [0x1151917c] */
  EDI = (r32((uint32_t)(0x1151917c)));
  /* 1151173a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1151173c pop ecx */
  ECX = (pop32());
  /* 1151173d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151173f mov ebp, 0x1151b1f0 */
  EBP = (0x1151b1f0u);
  /* 11511744 je 0x11513405 */
  if (C.zf) goto L_11513405;
  /* 1151174a push esi */
  push32((uint32_t)(ESI));
  /* 1151174b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151174d call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11511753u);
  /* 11511753 push esi */
  push32((uint32_t)(ESI));
  /* 11511754 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11511756 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x1151175cu);
  /* 1151175c push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 11511761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511763 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11511769u);
  /* 11511769 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1151176e push 3 */
  push32((uint32_t)(0x3u));
  /* 11511770 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11511776u);
  /* 11511776 push esi */
  push32((uint32_t)(ESI));
  /* 11511777 call dword ptr [0x115190c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c0))), 0x1151177du);
  /* 1151177d push 0xa */
  push32((uint32_t)(0xau));
  /* 1151177f mov dword ptr [0x1151b168], eax */
  w32((uint32_t)(0x1151b168), (EAX));
  /* 11511784 pop ecx */
  ECX = (pop32());
  /* 11511785 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11511788 mov dword ptr [0x1151b344], ecx */
  w32((uint32_t)(0x1151b344), (ECX));
  /* 1151178e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11511790 push 0x1151b350 */
  push32((uint32_t)(0x1151b350u));
  /* 11511795 mov dword ptr [0x1151b320], 0x3e8 */
  w32((uint32_t)(0x1151b320), (0x3e8u));
  /* 1151179f mov dword ptr [0x1151b340], ecx */
  w32((uint32_t)(0x1151b340), (ECX));
  /* 115117a5 mov dword ptr [0x1151b2f8], 0x14 */
  w32((uint32_t)(0x1151b2f8), (0x14u));
  /* 115117af call dword ptr [0x115190b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b4))), 0x115117b5u);
  /* 115117b5 push 0x1151b2c0 */
  push32((uint32_t)(0x1151b2c0u));
  /* 115117ba push 0x1151b210 */
  push32((uint32_t)(0x1151b210u));
  /* 115117bf call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115117c5u);
  /* 115117c5 push esi */
  push32((uint32_t)(ESI));
  /* 115117c6 push 0x1151b2c0 */
  push32((uint32_t)(0x1151b2c0u));
  /* 115117cb call ebx */
  call_ind((uint32_t)(EBX), 0x115117cdu);
  /* 115117cd push 5 */
  push32((uint32_t)(0x5u));
  /* 115117cf call dword ptr [0x115190b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b0))), 0x115117d5u);
  /* 115117d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 115117d7 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x115117ddu);
  /* 115117dd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115117e0 push 0x1151b108 */
  push32((uint32_t)(0x1151b108u));
  /* 115117e5 push 0x1151b250 */
  push32((uint32_t)(0x1151b250u));
  /* 115117ea call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115117f0u);
  /* 115117f0 push 0x1151b108 */
  push32((uint32_t)(0x1151b108u));
  /* 115117f5 push 0x1151b260 */
  push32((uint32_t)(0x1151b260u));
  /* 115117fa call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11511800u);
  /* 11511800 push 0x1151b130 */
  push32((uint32_t)(0x1151b130u));
  /* 11511805 push 0x1151b278 */
  push32((uint32_t)(0x1151b278u));
  /* 1151180a call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11511810u);
  /* 11511810 push 0x1151adc0 */
  push32((uint32_t)(0x1151adc0u));
  /* 11511815 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 1151181a call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11511820u);
  /* 11511820 push 0x1151adb8 */
  push32((uint32_t)(0x1151adb8u));
  /* 11511825 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 1151182a call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11511830u);
  /* 11511830 push 0x1151adb0 */
  push32((uint32_t)(0x1151adb0u));
  /* 11511835 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 1151183a call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11511840u);
  /* 11511840 push 0x1151ada8 */
  push32((uint32_t)(0x1151ada8u));
  /* 11511845 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 1151184a call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11511850u);
  /* 11511850 push 0x1151ada0 */
  push32((uint32_t)(0x1151ada0u));
  /* 11511855 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 1151185a call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11511860u);
  /* 11511860 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511863 cmp dword ptr [0x1151b168], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1151b168))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151186a jle 0x115118af */
  if ((C.zf||C.sf!=C.of)) goto L_115118af;
  /* 1151186c push 0x1151ad98 */
  push32((uint32_t)(0x1151ad98u));
  /* 11511871 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 11511876 call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x1151187cu);
  /* 1151187c push 0x1151ad90 */
  push32((uint32_t)(0x1151ad90u));
  /* 11511881 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 11511886 call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x1151188cu);
  /* 1151188c push 0x1151ad88 */
  push32((uint32_t)(0x1151ad88u));
  /* 11511891 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 11511896 call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x1151189cu);
  /* 1151189c push 0x1151ad80 */
  push32((uint32_t)(0x1151ad80u));
  /* 115118a1 push 0x1151a0d0 */
  push32((uint32_t)(0x1151a0d0u));
  /* 115118a6 call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x115118acu);
  /* 115118ac add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115118af:;
  /* 115118af push 6 */
  push32((uint32_t)(0x6u));
  /* 115118b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115118b3 call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x115118b9u);
  /* 115118b9 push 6 */
  push32((uint32_t)(0x6u));
  /* 115118bb push 2 */
  push32((uint32_t)(0x2u));
  /* 115118bd call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x115118c3u);
  /* 115118c3 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 115118c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 115118c7 call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x115118cdu);
  /* 115118cd push 0x79 */
  push32((uint32_t)(0x79u));
  /* 115118cf push 4 */
  push32((uint32_t)(0x4u));
  /* 115118d1 call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x115118d7u);
  /* 115118d7 push 0xfe */
  push32((uint32_t)(0xfeu));
  /* 115118dc push 5 */
  push32((uint32_t)(0x5u));
  /* 115118de call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x115118e4u);
  /* 115118e4 push 0xff */
  push32((uint32_t)(0xffu));
  /* 115118e9 push 6 */
  push32((uint32_t)(0x6u));
  /* 115118eb call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x115118f1u);
  /* 115118f1 push esi */
  push32((uint32_t)(ESI));
  /* 115118f2 push esi */
  push32((uint32_t)(ESI));
  /* 115118f3 push esi */
  push32((uint32_t)(ESI));
  /* 115118f4 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x115118fau);
  /* 115118fa push esi */
  push32((uint32_t)(ESI));
  /* 115118fb push 2 */
  push32((uint32_t)(0x2u));
  /* 115118fd push esi */
  push32((uint32_t)(ESI));
  /* 115118fe call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511904u);
  /* 11511904 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11511909 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151190c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151190e jle 0x115119ba */
  if ((C.zf||C.sf!=C.of)) goto L_115119ba;
  /* 11511914 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1151191a mov ecx, 0x5dc */
  ECX = (0x5dcu);
  /* 1151191f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11511921 push ecx */
  push32((uint32_t)(ECX));
  /* 11511922 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511924 push esi */
  push32((uint32_t)(ESI));
  /* 11511925 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x1151192bu);
  /* 1151192b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151192d push esi */
  push32((uint32_t)(ESI));
  /* 1151192e call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511934u);
  /* 11511934 mov ecx, dword ptr [0x1151b168] */
  ECX = (r32((uint32_t)(0x1151b168)));
  /* 1151193a mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 1151193f imul ecx, ecx, 0x12c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x12cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11511945 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11511947 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11511949 push eax */
  push32((uint32_t)(EAX));
  /* 1151194a push 3 */
  push32((uint32_t)(0x3u));
  /* 1151194c push esi */
  push32((uint32_t)(ESI));
  /* 1151194d call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511953u);
  /* 11511953 push 6 */
  push32((uint32_t)(0x6u));
  /* 11511955 pop eax */
  EAX = (pop32());
  /* 11511956 sub eax, dword ptr [0x1151b168] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b168))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151195c imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11511962 push eax */
  push32((uint32_t)(EAX));
  /* 11511963 push 5 */
  push32((uint32_t)(0x5u));
  /* 11511965 push esi */
  push32((uint32_t)(ESI));
  /* 11511966 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x1151196cu);
  /* 1151196c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151196e push esi */
  push32((uint32_t)(ESI));
  /* 1151196f call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511975u);
  /* 11511975 mov ecx, dword ptr [0x1151b168] */
  ECX = (r32((uint32_t)(0x1151b168)));
  /* 1151197b mov edx, 0xfa */
  EDX = (0xfau);
  /* 11511980 imul ecx, ecx, 0x4b */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4bu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11511983 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11511985 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11511987 push eax */
  push32((uint32_t)(EAX));
  /* 11511988 push 4 */
  push32((uint32_t)(0x4u));
  /* 1151198a push esi */
  push32((uint32_t)(ESI));
  /* 1151198b call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511991u);
  /* 11511991 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511994 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511996 push esi */
  push32((uint32_t)(ESI));
  /* 11511997 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x1151199du);
  /* 1151199d push 2 */
  push32((uint32_t)(0x2u));
  /* 1151199f pop ecx */
  ECX = (pop32());
  /* 115119a0 sub ecx, dword ptr [0x1151b168] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1151b168))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115119a6 imul ecx, ecx, 0x4b */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4bu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115119a9 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115119ab push eax */
  push32((uint32_t)(EAX));
  /* 115119ac push 1 */
  push32((uint32_t)(0x1u));
  /* 115119ae push esi */
  push32((uint32_t)(ESI));
  /* 115119af call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x115119b5u);
  /* 115119b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115119b8 jmp 0x11511a10 */
  goto L_11511a10;
L_115119ba:;
  /* 115119ba push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115119bf push 1 */
  push32((uint32_t)(0x1u));
  /* 115119c1 push esi */
  push32((uint32_t)(ESI));
  /* 115119c2 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x115119c8u);
  /* 115119c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115119ca push esi */
  push32((uint32_t)(ESI));
  /* 115119cb call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x115119d1u);
  /* 115119d1 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115119d3 push eax */
  push32((uint32_t)(EAX));
  /* 115119d4 push 3 */
  push32((uint32_t)(0x3u));
  /* 115119d6 push esi */
  push32((uint32_t)(ESI));
  /* 115119d7 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x115119ddu);
  /* 115119dd push 1 */
  push32((uint32_t)(0x1u));
  /* 115119df push esi */
  push32((uint32_t)(ESI));
  /* 115119e0 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x115119e6u);
  /* 115119e6 push eax */
  push32((uint32_t)(EAX));
  /* 115119e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 115119e9 push esi */
  push32((uint32_t)(ESI));
  /* 115119ea call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x115119f0u);
  /* 115119f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115119f2 push esi */
  push32((uint32_t)(ESI));
  /* 115119f3 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x115119f9u);
  /* 115119f9 push eax */
  push32((uint32_t)(EAX));
  /* 115119fa push 4 */
  push32((uint32_t)(0x4u));
  /* 115119fc push esi */
  push32((uint32_t)(ESI));
  /* 115119fd call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a03u);
  /* 11511a03 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511a06 mov dword ptr [0x1151b320], 0x7d0 */
  w32((uint32_t)(0x1151b320), (0x7d0u));
L_11511a10:;
  /* 11511a10 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11511a15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11511a16 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11511a1c push eax */
  push32((uint32_t)(EAX));
  /* 11511a1d push esi */
  push32((uint32_t)(ESI));
  /* 11511a1e push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a20 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a26u);
  /* 11511a26 push esi */
  push32((uint32_t)(ESI));
  /* 11511a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a29 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511a2fu);
  /* 11511a2f push eax */
  push32((uint32_t)(EAX));
  /* 11511a30 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511a32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a34 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a3au);
  /* 11511a3a push esi */
  push32((uint32_t)(ESI));
  /* 11511a3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a3d call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511a43u);
  /* 11511a43 push eax */
  push32((uint32_t)(EAX));
  /* 11511a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a48 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a4eu);
  /* 11511a4e push esi */
  push32((uint32_t)(ESI));
  /* 11511a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a51 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511a57u);
  /* 11511a57 push eax */
  push32((uint32_t)(EAX));
  /* 11511a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a5c call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a62u);
  /* 11511a62 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511a65 push esi */
  push32((uint32_t)(ESI));
  /* 11511a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a68 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511a6eu);
  /* 11511a6e push eax */
  push32((uint32_t)(EAX));
  /* 11511a6f push 4 */
  push32((uint32_t)(0x4u));
  /* 11511a71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a73 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a79u);
  /* 11511a79 push esi */
  push32((uint32_t)(ESI));
  /* 11511a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a7c call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511a82u);
  /* 11511a82 push eax */
  push32((uint32_t)(EAX));
  /* 11511a83 push 5 */
  push32((uint32_t)(0x5u));
  /* 11511a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a87 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511a8du);
  /* 11511a8d push esi */
  push32((uint32_t)(ESI));
  /* 11511a8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11511a90 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511a96u);
  /* 11511a96 push eax */
  push32((uint32_t)(EAX));
  /* 11511a97 push esi */
  push32((uint32_t)(ESI));
  /* 11511a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511a9a call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511aa0u);
  /* 11511aa0 push esi */
  push32((uint32_t)(ESI));
  /* 11511aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511aa3 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511aa9u);
  /* 11511aa9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511aac push eax */
  push32((uint32_t)(EAX));
  /* 11511aad push 3 */
  push32((uint32_t)(0x3u));
  /* 11511aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 11511ab1 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511ab7u);
  /* 11511ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11511ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511aba call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511ac0u);
  /* 11511ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11511ac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511ac5 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511acbu);
  /* 11511acb push esi */
  push32((uint32_t)(ESI));
  /* 11511acc push 1 */
  push32((uint32_t)(0x1u));
  /* 11511ace call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511ad4u);
  /* 11511ad4 push eax */
  push32((uint32_t)(EAX));
  /* 11511ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511ad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511ad9 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511adfu);
  /* 11511adf push esi */
  push32((uint32_t)(ESI));
  /* 11511ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511ae2 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511ae8u);
  /* 11511ae8 push eax */
  push32((uint32_t)(EAX));
  /* 11511ae9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 11511aed call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511af3u);
  /* 11511af3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511af6 push esi */
  push32((uint32_t)(ESI));
  /* 11511af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511af9 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511affu);
  /* 11511aff push eax */
  push32((uint32_t)(EAX));
  /* 11511b00 push 5 */
  push32((uint32_t)(0x5u));
  /* 11511b02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511b04 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b0au);
  /* 11511b0a push esi */
  push32((uint32_t)(ESI));
  /* 11511b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b0d call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b13u);
  /* 11511b13 push eax */
  push32((uint32_t)(EAX));
  /* 11511b14 push esi */
  push32((uint32_t)(ESI));
  /* 11511b15 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b17 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b1du);
  /* 11511b1d push esi */
  push32((uint32_t)(ESI));
  /* 11511b1e push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b20 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b26u);
  /* 11511b26 push eax */
  push32((uint32_t)(EAX));
  /* 11511b27 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b29 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b2b call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b31u);
  /* 11511b31 push esi */
  push32((uint32_t)(ESI));
  /* 11511b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b34 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b3au);
  /* 11511b3a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511b3d push eax */
  push32((uint32_t)(EAX));
  /* 11511b3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11511b40 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b42 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b48u);
  /* 11511b48 push esi */
  push32((uint32_t)(ESI));
  /* 11511b49 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b4b call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b51u);
  /* 11511b51 push eax */
  push32((uint32_t)(EAX));
  /* 11511b52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b54 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b56 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b5cu);
  /* 11511b5c push esi */
  push32((uint32_t)(ESI));
  /* 11511b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b5f call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b65u);
  /* 11511b65 push eax */
  push32((uint32_t)(EAX));
  /* 11511b66 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511b68 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b6a call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b70u);
  /* 11511b70 push esi */
  push32((uint32_t)(ESI));
  /* 11511b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b73 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b79u);
  /* 11511b79 push eax */
  push32((uint32_t)(EAX));
  /* 11511b7a push 5 */
  push32((uint32_t)(0x5u));
  /* 11511b7c push 3 */
  push32((uint32_t)(0x3u));
  /* 11511b7e call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b84u);
  /* 11511b84 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511b87 push esi */
  push32((uint32_t)(ESI));
  /* 11511b88 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b8a call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511b90u);
  /* 11511b90 push eax */
  push32((uint32_t)(EAX));
  /* 11511b91 push esi */
  push32((uint32_t)(ESI));
  /* 11511b92 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511b94 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511b9au);
  /* 11511b9a push esi */
  push32((uint32_t)(ESI));
  /* 11511b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11511b9d call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511ba3u);
  /* 11511ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11511ba4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511ba6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511ba8 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511baeu);
  /* 11511bae push esi */
  push32((uint32_t)(ESI));
  /* 11511baf push 1 */
  push32((uint32_t)(0x1u));
  /* 11511bb1 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511bb7u);
  /* 11511bb7 push eax */
  push32((uint32_t)(EAX));
  /* 11511bb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511bba push 4 */
  push32((uint32_t)(0x4u));
  /* 11511bbc call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511bc2u);
  /* 11511bc2 push esi */
  push32((uint32_t)(ESI));
  /* 11511bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511bc5 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511bcbu);
  /* 11511bcb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511bce push eax */
  push32((uint32_t)(EAX));
  /* 11511bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 11511bd1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511bd3 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511bd9u);
  /* 11511bd9 push esi */
  push32((uint32_t)(ESI));
  /* 11511bda push 1 */
  push32((uint32_t)(0x1u));
  /* 11511bdc call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511be2u);
  /* 11511be2 push eax */
  push32((uint32_t)(EAX));
  /* 11511be3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511be5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511be7 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511bedu);
  /* 11511bed push esi */
  push32((uint32_t)(ESI));
  /* 11511bee push 1 */
  push32((uint32_t)(0x1u));
  /* 11511bf0 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11511bf6u);
  /* 11511bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11511bf7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11511bf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511bfb call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11511c01u);
  /* 11511c01 push 0x1151ad5c */
  push32((uint32_t)(0x1151ad5cu));
  /* 11511c06 push esi */
  push32((uint32_t)(ESI));
  /* 11511c07 push 0x1151ad54 */
  push32((uint32_t)(0x1151ad54u));
  /* 11511c0c push 9 */
  push32((uint32_t)(0x9u));
  /* 11511c0e call dword ptr [0x115190e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e4))), 0x11511c14u);
  /* 11511c14 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511c17 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11511c19 je 0x11512911 */
  if (C.zf) goto L_11512911;
  /* 11511c1f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11511c20 je 0x11512661 */
  if (C.zf) goto L_11512661;
  /* 11511c26 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11511c27 je 0x115123dc */
  if (C.zf) goto L_115123dc;
  /* 11511c2d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11511c2e je 0x11512161 */
  if (C.zf) goto L_11512161;
  /* 11511c34 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11511c35 je 0x11511ebd */
  if (C.zf) goto L_11511ebd;
  /* 11511c3b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11511c3c jne 0x11512bc6 */
  if (!C.zf) goto L_11512bc6;
  /* 11511c42 mov edi, 0x1151b1b0 */
  EDI = (0x1151b1b0u);
  /* 11511c47 push 0x1151ad44 */
  push32((uint32_t)(0x1151ad44u));
  /* 11511c4c push edi */
  push32((uint32_t)(EDI));
  /* 11511c4d call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x11511c53u);
  /* 11511c53 push esi */
  push32((uint32_t)(ESI));
  /* 11511c54 push edi */
  push32((uint32_t)(EDI));
  /* 11511c55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511c57 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511c5du);
  /* 11511c5d push esi */
  push32((uint32_t)(ESI));
  /* 11511c5e push edi */
  push32((uint32_t)(EDI));
  /* 11511c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11511c61 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511c67u);
  /* 11511c67 push esi */
  push32((uint32_t)(ESI));
  /* 11511c68 push edi */
  push32((uint32_t)(EDI));
  /* 11511c69 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511c6b call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511c71u);
  /* 11511c71 push esi */
  push32((uint32_t)(ESI));
  /* 11511c72 push edi */
  push32((uint32_t)(EDI));
  /* 11511c73 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511c75 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511c7bu);
  /* 11511c7b mov edi, 0x1151b1a8 */
  EDI = (0x1151b1a8u);
  /* 11511c80 push 0x1151ad34 */
  push32((uint32_t)(0x1151ad34u));
  /* 11511c85 push edi */
  push32((uint32_t)(EDI));
  /* 11511c86 call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x11511c8cu);
  /* 11511c8c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511c8f push esi */
  push32((uint32_t)(ESI));
  /* 11511c90 push edi */
  push32((uint32_t)(EDI));
  /* 11511c91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511c93 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511c99u);
  /* 11511c99 push esi */
  push32((uint32_t)(ESI));
  /* 11511c9a push edi */
  push32((uint32_t)(EDI));
  /* 11511c9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11511c9d call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511ca3u);
  /* 11511ca3 push esi */
  push32((uint32_t)(ESI));
  /* 11511ca4 push edi */
  push32((uint32_t)(EDI));
  /* 11511ca5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511ca7 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511cadu);
  /* 11511cad push esi */
  push32((uint32_t)(ESI));
  /* 11511cae push edi */
  push32((uint32_t)(EDI));
  /* 11511caf push 4 */
  push32((uint32_t)(0x4u));
  /* 11511cb1 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511cb7u);
  /* 11511cb7 mov edi, 0x1151b198 */
  EDI = (0x1151b198u);
  /* 11511cbc push 0x1151ad24 */
  push32((uint32_t)(0x1151ad24u));
  /* 11511cc1 push edi */
  push32((uint32_t)(EDI));
  /* 11511cc2 call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x11511cc8u);
  /* 11511cc8 push esi */
  push32((uint32_t)(ESI));
  /* 11511cc9 push edi */
  push32((uint32_t)(EDI));
  /* 11511cca push 1 */
  push32((uint32_t)(0x1u));
  /* 11511ccc call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511cd2u);
  /* 11511cd2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511cd5 push esi */
  push32((uint32_t)(ESI));
  /* 11511cd6 push edi */
  push32((uint32_t)(EDI));
  /* 11511cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511cd9 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511cdfu);
  /* 11511cdf push esi */
  push32((uint32_t)(ESI));
  /* 11511ce0 push edi */
  push32((uint32_t)(EDI));
  /* 11511ce1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511ce3 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511ce9u);
  /* 11511ce9 push esi */
  push32((uint32_t)(ESI));
  /* 11511cea push edi */
  push32((uint32_t)(EDI));
  /* 11511ceb push 4 */
  push32((uint32_t)(0x4u));
  /* 11511ced call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511cf3u);
  /* 11511cf3 mov edi, dword ptr [0x11519170] */
  EDI = (r32((uint32_t)(0x11519170)));
  /* 11511cf9 push 0x1151ad14 */
  push32((uint32_t)(0x1151ad14u));
  /* 11511cfe push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11511d03 mov dword ptr [0x1151b398], 0x1151ad08 */
  w32((uint32_t)(0x1151b398), (0x1151ad08u));
  /* 11511d0d mov dword ptr [0x1151b230], 0x1151ad04 */
  w32((uint32_t)(0x1151b230), (0x1151ad04u));
  /* 11511d17 mov dword ptr [0x1151b30c], 0x1151acf8 */
  w32((uint32_t)(0x1151b30c), (0x1151acf8u));
  /* 11511d21 mov dword ptr [0x1151b308], 0x1151acec */
  w32((uint32_t)(0x1151b308), (0x1151acecu));
  /* 11511d2b call edi */
  call_ind((uint32_t)(EDI), 0x11511d2du);
  /* 11511d2d push 0x1151ace0 */
  push32((uint32_t)(0x1151ace0u));
  /* 11511d32 push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11511d37 call edi */
  call_ind((uint32_t)(EDI), 0x11511d39u);
  /* 11511d39 push 0x1151accc */
  push32((uint32_t)(0x1151acccu));
  /* 11511d3e push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11511d43 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511d49u);
  /* 11511d49 push 0x1151acb8 */
  push32((uint32_t)(0x1151acb8u));
  /* 11511d4e push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11511d53 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511d59u);
  /* 11511d59 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511d5c push 0x1151aca4 */
  push32((uint32_t)(0x1151aca4u));
  /* 11511d61 push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11511d66 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511d6cu);
  /* 11511d6c push 0x1151ac90 */
  push32((uint32_t)(0x1151ac90u));
  /* 11511d71 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11511d76 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511d7cu);
  /* 11511d7c push esi */
  push32((uint32_t)(ESI));
  /* 11511d7d push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11511d82 push esi */
  push32((uint32_t)(ESI));
  /* 11511d83 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511d89u);
  /* 11511d89 push esi */
  push32((uint32_t)(ESI));
  /* 11511d8a push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11511d8f push esi */
  push32((uint32_t)(ESI));
  /* 11511d90 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511d96u);
  /* 11511d96 push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11511d9b push esi */
  push32((uint32_t)(ESI));
  /* 11511d9c call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11511da2u);
  /* 11511da2 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11511da7 push esi */
  push32((uint32_t)(ESI));
  /* 11511da8 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11511daeu);
  /* 11511dae push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11511db3 push esi */
  push32((uint32_t)(ESI));
  /* 11511db4 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11511dbau);
  /* 11511dba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511dbd push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11511dc2 push esi */
  push32((uint32_t)(ESI));
  /* 11511dc3 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11511dc9u);
  /* 11511dc9 push 0x1151ac84 */
  push32((uint32_t)(0x1151ac84u));
  /* 11511dce push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11511dd3 call edi */
  call_ind((uint32_t)(EDI), 0x11511dd5u);
  /* 11511dd5 push 0x1151ac6c */
  push32((uint32_t)(0x1151ac6cu));
  /* 11511dda push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11511ddf call edi */
  call_ind((uint32_t)(EDI), 0x11511de1u);
  /* 11511de1 push 0x1151ac6c */
  push32((uint32_t)(0x1151ac6cu));
  /* 11511de6 push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 11511deb call edi */
  call_ind((uint32_t)(EDI), 0x11511dedu);
  /* 11511ded push 0x1151ac60 */
  push32((uint32_t)(0x1151ac60u));
  /* 11511df2 push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 11511df7 call edi */
  call_ind((uint32_t)(EDI), 0x11511df9u);
  /* 11511df9 push 0x1151ac50 */
  push32((uint32_t)(0x1151ac50u));
  /* 11511dfe push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 11511e03 call edi */
  call_ind((uint32_t)(EDI), 0x11511e05u);
  /* 11511e05 push 0x1151ac40 */
  push32((uint32_t)(0x1151ac40u));
  /* 11511e0a push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11511e0f call edi */
  call_ind((uint32_t)(EDI), 0x11511e11u);
  /* 11511e11 push 0x1151ac34 */
  push32((uint32_t)(0x1151ac34u));
  /* 11511e16 push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 11511e1b call edi */
  call_ind((uint32_t)(EDI), 0x11511e1du);
  /* 11511e1d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511e20 push 0x1151ac24 */
  push32((uint32_t)(0x1151ac24u));
  /* 11511e25 push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11511e2a call edi */
  call_ind((uint32_t)(EDI), 0x11511e2cu);
  /* 11511e2c push 0x1151ac18 */
  push32((uint32_t)(0x1151ac18u));
  /* 11511e31 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11511e36 call edi */
  call_ind((uint32_t)(EDI), 0x11511e38u);
  /* 11511e38 push 0x1151ac04 */
  push32((uint32_t)(0x1151ac04u));
  /* 11511e3d push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 11511e42 call edi */
  call_ind((uint32_t)(EDI), 0x11511e44u);
  /* 11511e44 push 0x1151abf0 */
  push32((uint32_t)(0x1151abf0u));
  /* 11511e49 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 11511e4e call edi */
  call_ind((uint32_t)(EDI), 0x11511e50u);
  /* 11511e50 push 0x1151abdc */
  push32((uint32_t)(0x1151abdcu));
  /* 11511e55 push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 11511e5a call edi */
  call_ind((uint32_t)(EDI), 0x11511e5cu);
  /* 11511e5c push 0x1151abc8 */
  push32((uint32_t)(0x1151abc8u));
  /* 11511e61 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 11511e66 call edi */
  call_ind((uint32_t)(EDI), 0x11511e68u);
  /* 11511e68 push 0x1151abb4 */
  push32((uint32_t)(0x1151abb4u));
  /* 11511e6d push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 11511e72 call edi */
  call_ind((uint32_t)(EDI), 0x11511e74u);
  /* 11511e74 push 0x1151aba0 */
  push32((uint32_t)(0x1151aba0u));
  /* 11511e79 push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11511e7e call edi */
  call_ind((uint32_t)(EDI), 0x11511e80u);
  /* 11511e80 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511e83 push 0x1151ab8c */
  push32((uint32_t)(0x1151ab8cu));
  /* 11511e88 push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 11511e8d call edi */
  call_ind((uint32_t)(EDI), 0x11511e8fu);
  /* 11511e8f push 0x1151ab78 */
  push32((uint32_t)(0x1151ab78u));
  /* 11511e94 push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 11511e99 call edi */
  call_ind((uint32_t)(EDI), 0x11511e9bu);
  /* 11511e9b push 0x1151ab64 */
  push32((uint32_t)(0x1151ab64u));
  /* 11511ea0 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 11511ea5 call edi */
  call_ind((uint32_t)(EDI), 0x11511ea7u);
  /* 11511ea7 push 0x1151ab50 */
  push32((uint32_t)(0x1151ab50u));
  /* 11511eac push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 11511eb1 call edi */
  call_ind((uint32_t)(EDI), 0x11511eb3u);
  /* 11511eb3 push 0x1151ab3c */
  push32((uint32_t)(0x1151ab3cu));
  /* 11511eb8 jmp 0x11512652 */
  goto L_11512652;
L_11511ebd:;
  /* 11511ebd mov ebx, dword ptr [0x11519170] */
  EBX = (r32((uint32_t)(0x11519170)));
  /* 11511ec3 mov edi, 0x1151b1b0 */
  EDI = (0x1151b1b0u);
  /* 11511ec8 push 0x1151ad44 */
  push32((uint32_t)(0x1151ad44u));
  /* 11511ecd push edi */
  push32((uint32_t)(EDI));
  /* 11511ece call ebx */
  call_ind((uint32_t)(EBX), 0x11511ed0u);
  /* 11511ed0 push esi */
  push32((uint32_t)(ESI));
  /* 11511ed1 push edi */
  push32((uint32_t)(EDI));
  /* 11511ed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11511ed4 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511edau);
  /* 11511eda push esi */
  push32((uint32_t)(ESI));
  /* 11511edb push edi */
  push32((uint32_t)(EDI));
  /* 11511edc push 2 */
  push32((uint32_t)(0x2u));
  /* 11511ede call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511ee4u);
  /* 11511ee4 push esi */
  push32((uint32_t)(ESI));
  /* 11511ee5 push edi */
  push32((uint32_t)(EDI));
  /* 11511ee6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511ee8 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511eeeu);
  /* 11511eee push esi */
  push32((uint32_t)(ESI));
  /* 11511eef push edi */
  push32((uint32_t)(EDI));
  /* 11511ef0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511ef2 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511ef8u);
  /* 11511ef8 mov edi, 0x1151b1a8 */
  EDI = (0x1151b1a8u);
  /* 11511efd push 0x1151ab2c */
  push32((uint32_t)(0x1151ab2cu));
  /* 11511f02 push edi */
  push32((uint32_t)(EDI));
  /* 11511f03 call ebx */
  call_ind((uint32_t)(EBX), 0x11511f05u);
  /* 11511f05 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511f08 push esi */
  push32((uint32_t)(ESI));
  /* 11511f09 push edi */
  push32((uint32_t)(EDI));
  /* 11511f0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11511f0c call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f12u);
  /* 11511f12 push esi */
  push32((uint32_t)(ESI));
  /* 11511f13 push edi */
  push32((uint32_t)(EDI));
  /* 11511f14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11511f16 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f1cu);
  /* 11511f1c push esi */
  push32((uint32_t)(ESI));
  /* 11511f1d push edi */
  push32((uint32_t)(EDI));
  /* 11511f1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11511f20 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f26u);
  /* 11511f26 push esi */
  push32((uint32_t)(ESI));
  /* 11511f27 push edi */
  push32((uint32_t)(EDI));
  /* 11511f28 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511f2a call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f30u);
  /* 11511f30 mov edi, 0x1151b198 */
  EDI = (0x1151b198u);
  /* 11511f35 push 0x1151ad34 */
  push32((uint32_t)(0x1151ad34u));
  /* 11511f3a push edi */
  push32((uint32_t)(EDI));
  /* 11511f3b call ebx */
  call_ind((uint32_t)(EBX), 0x11511f3du);
  /* 11511f3d push esi */
  push32((uint32_t)(ESI));
  /* 11511f3e push edi */
  push32((uint32_t)(EDI));
  /* 11511f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11511f41 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f47u);
  /* 11511f47 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511f4a push esi */
  push32((uint32_t)(ESI));
  /* 11511f4b push edi */
  push32((uint32_t)(EDI));
  /* 11511f4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11511f4e call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f54u);
  /* 11511f54 push esi */
  push32((uint32_t)(ESI));
  /* 11511f55 push edi */
  push32((uint32_t)(EDI));
  /* 11511f56 push 3 */
  push32((uint32_t)(0x3u));
  /* 11511f58 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11511f5eu);
  /* 11511f5e push esi */
  push32((uint32_t)(ESI));
  /* 11511f5f push edi */
  push32((uint32_t)(EDI));
  /* 11511f60 mov edi, dword ptr [0x115190e8] */
  EDI = (r32((uint32_t)(0x115190e8)));
  /* 11511f66 push 4 */
  push32((uint32_t)(0x4u));
  /* 11511f68 call edi */
  call_ind((uint32_t)(EDI), 0x11511f6au);
  /* 11511f6a push 0x1151ab1c */
  push32((uint32_t)(0x1151ab1cu));
  /* 11511f6f push 0x1151b540 */
  push32((uint32_t)(0x1151b540u));
  /* 11511f74 mov dword ptr [0x1151b398], 0x1151acec */
  w32((uint32_t)(0x1151b398), (0x1151acecu));
  /* 11511f7e mov dword ptr [0x1151b230], 0x1151ab18 */
  w32((uint32_t)(0x1151b230), (0x1151ab18u));
  /* 11511f88 mov dword ptr [0x1151b30c], 0x1151acf8 */
  w32((uint32_t)(0x1151b30c), (0x1151acf8u));
  /* 11511f92 mov dword ptr [0x1151b308], 0x1151ab0c */
  w32((uint32_t)(0x1151b308), (0x1151ab0cu));
  /* 11511f9c call ebx */
  call_ind((uint32_t)(EBX), 0x11511f9eu);
  /* 11511f9e push 0x1151aafc */
  push32((uint32_t)(0x1151aafcu));
  /* 11511fa3 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11511fa8 call ebx */
  call_ind((uint32_t)(EBX), 0x11511faau);
  /* 11511faa push 0x1151aaf0 */
  push32((uint32_t)(0x1151aaf0u));
  /* 11511faf push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11511fb4 call ebx */
  call_ind((uint32_t)(EBX), 0x11511fb6u);
  /* 11511fb6 push 0x1151aad8 */
  push32((uint32_t)(0x1151aad8u));
  /* 11511fbb push 0x1151b5a0 */
  push32((uint32_t)(0x1151b5a0u));
  /* 11511fc0 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511fc6u);
  /* 11511fc6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11511fc9 push 0x1151aac0 */
  push32((uint32_t)(0x1151aac0u));
  /* 11511fce push 0x1151b580 */
  push32((uint32_t)(0x1151b580u));
  /* 11511fd3 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511fd9u);
  /* 11511fd9 push 0x1151aaac */
  push32((uint32_t)(0x1151aaacu));
  /* 11511fde push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11511fe3 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511fe9u);
  /* 11511fe9 push 0x1151aa98 */
  push32((uint32_t)(0x1151aa98u));
  /* 11511fee push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11511ff3 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11511ff9u);
  /* 11511ff9 push 0x1151aa84 */
  push32((uint32_t)(0x1151aa84u));
  /* 11511ffe push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512003 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512009u);
  /* 11512009 push 0x1151aa70 */
  push32((uint32_t)(0x1151aa70u));
  /* 1151200e push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11512013 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512019u);
  /* 11512019 push esi */
  push32((uint32_t)(ESI));
  /* 1151201a push 0x1151b540 */
  push32((uint32_t)(0x1151b540u));
  /* 1151201f push esi */
  push32((uint32_t)(ESI));
  /* 11512020 call edi */
  call_ind((uint32_t)(EDI), 0x11512022u);
  /* 11512022 push esi */
  push32((uint32_t)(ESI));
  /* 11512023 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11512028 push esi */
  push32((uint32_t)(ESI));
  /* 11512029 call edi */
  call_ind((uint32_t)(EDI), 0x1151202bu);
  /* 1151202b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151202e push esi */
  push32((uint32_t)(ESI));
  /* 1151202f push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11512034 push esi */
  push32((uint32_t)(ESI));
  /* 11512035 call edi */
  call_ind((uint32_t)(EDI), 0x11512037u);
  /* 11512037 mov edi, dword ptr [0x115190f0] */
  EDI = (r32((uint32_t)(0x115190f0)));
  /* 1151203d push 0x1151b5a0 */
  push32((uint32_t)(0x1151b5a0u));
  /* 11512042 push esi */
  push32((uint32_t)(ESI));
  /* 11512043 call edi */
  call_ind((uint32_t)(EDI), 0x11512045u);
  /* 11512045 push 0x1151b580 */
  push32((uint32_t)(0x1151b580u));
  /* 1151204a push esi */
  push32((uint32_t)(ESI));
  /* 1151204b call edi */
  call_ind((uint32_t)(EDI), 0x1151204du);
  /* 1151204d push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512052 push esi */
  push32((uint32_t)(ESI));
  /* 11512053 call edi */
  call_ind((uint32_t)(EDI), 0x11512055u);
  /* 11512055 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 1151205a push esi */
  push32((uint32_t)(ESI));
  /* 1151205b call edi */
  call_ind((uint32_t)(EDI), 0x1151205du);
  /* 1151205d push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512062 push esi */
  push32((uint32_t)(ESI));
  /* 11512063 call edi */
  call_ind((uint32_t)(EDI), 0x11512065u);
  /* 11512065 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 1151206a push esi */
  push32((uint32_t)(ESI));
  /* 1151206b call edi */
  call_ind((uint32_t)(EDI), 0x1151206du);
  /* 1151206d push 0x1151aa64 */
  push32((uint32_t)(0x1151aa64u));
  /* 11512072 push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11512077 call ebx */
  call_ind((uint32_t)(EBX), 0x11512079u);
  /* 11512079 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151207c mov edi, 0x1151aa4c */
  EDI = (0x1151aa4cu);
  /* 11512081 push edi */
  push32((uint32_t)(EDI));
  /* 11512082 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11512087 call ebx */
  call_ind((uint32_t)(EBX), 0x11512089u);
  /* 11512089 push edi */
  push32((uint32_t)(EDI));
  /* 1151208a push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 1151208f call ebx */
  call_ind((uint32_t)(EBX), 0x11512091u);
  /* 11512091 push 0x1151aa38 */
  push32((uint32_t)(0x1151aa38u));
  /* 11512096 push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 1151209b call ebx */
  call_ind((uint32_t)(EBX), 0x1151209du);
  /* 1151209d push 0x1151aa28 */
  push32((uint32_t)(0x1151aa28u));
  /* 115120a2 push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 115120a7 call ebx */
  call_ind((uint32_t)(EBX), 0x115120a9u);
  /* 115120a9 push 0x1151aa18 */
  push32((uint32_t)(0x1151aa18u));
  /* 115120ae push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115120b3 call ebx */
  call_ind((uint32_t)(EBX), 0x115120b5u);
  /* 115120b5 push 0x1151aa0c */
  push32((uint32_t)(0x1151aa0cu));
  /* 115120ba push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 115120bf call ebx */
  call_ind((uint32_t)(EBX), 0x115120c1u);
  /* 115120c1 push 0x1151a9f8 */
  push32((uint32_t)(0x1151a9f8u));
  /* 115120c6 push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 115120cb call ebx */
  call_ind((uint32_t)(EBX), 0x115120cdu);
  /* 115120cd push 0x1151a9ec */
  push32((uint32_t)(0x1151a9ecu));
  /* 115120d2 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 115120d7 call ebx */
  call_ind((uint32_t)(EBX), 0x115120d9u);
  /* 115120d9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115120dc push 0x1151a9dc */
  push32((uint32_t)(0x1151a9dcu));
  /* 115120e1 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 115120e6 call ebx */
  call_ind((uint32_t)(EBX), 0x115120e8u);
  /* 115120e8 push 0x1151ab64 */
  push32((uint32_t)(0x1151ab64u));
  /* 115120ed push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 115120f2 call ebx */
  call_ind((uint32_t)(EBX), 0x115120f4u);
  /* 115120f4 push 0x1151ab50 */
  push32((uint32_t)(0x1151ab50u));
  /* 115120f9 push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 115120fe call ebx */
  call_ind((uint32_t)(EBX), 0x11512100u);
  /* 11512100 push 0x1151ab3c */
  push32((uint32_t)(0x1151ab3cu));
  /* 11512105 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 1151210a call ebx */
  call_ind((uint32_t)(EBX), 0x1151210cu);
  /* 1151210c push 0x1151a9c8 */
  push32((uint32_t)(0x1151a9c8u));
  /* 11512111 push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 11512116 call ebx */
  call_ind((uint32_t)(EBX), 0x11512118u);
  /* 11512118 push 0x1151aba0 */
  push32((uint32_t)(0x1151aba0u));
  /* 1151211d push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11512122 call ebx */
  call_ind((uint32_t)(EBX), 0x11512124u);
  /* 11512124 push 0x1151ab8c */
  push32((uint32_t)(0x1151ab8cu));
  /* 11512129 push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 1151212e call ebx */
  call_ind((uint32_t)(EBX), 0x11512130u);
  /* 11512130 push 0x1151ab78 */
  push32((uint32_t)(0x1151ab78u));
  /* 11512135 push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 1151213a call ebx */
  call_ind((uint32_t)(EBX), 0x1151213cu);
  /* 1151213c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151213f push 0x1151a9bc */
  push32((uint32_t)(0x1151a9bcu));
  /* 11512144 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 11512149 call ebx */
  call_ind((uint32_t)(EBX), 0x1151214bu);
  /* 1151214b push 0x1151a9a8 */
  push32((uint32_t)(0x1151a9a8u));
  /* 11512150 push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 11512155 call ebx */
  call_ind((uint32_t)(EBX), 0x11512157u);
  /* 11512157 push 0x1151a994 */
  push32((uint32_t)(0x1151a994u));
  /* 1151215c jmp 0x11512bb0 */
  goto L_11512bb0;
L_11512161:;
  /* 11512161 mov edi, 0x1151b1b0 */
  EDI = (0x1151b1b0u);
  /* 11512166 push 0x1151a984 */
  push32((uint32_t)(0x1151a984u));
  /* 1151216b push edi */
  push32((uint32_t)(EDI));
  /* 1151216c call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x11512172u);
  /* 11512172 push esi */
  push32((uint32_t)(ESI));
  /* 11512173 push edi */
  push32((uint32_t)(EDI));
  /* 11512174 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512176 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151217cu);
  /* 1151217c push esi */
  push32((uint32_t)(ESI));
  /* 1151217d push edi */
  push32((uint32_t)(EDI));
  /* 1151217e push 2 */
  push32((uint32_t)(0x2u));
  /* 11512180 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512186u);
  /* 11512186 push esi */
  push32((uint32_t)(ESI));
  /* 11512187 push edi */
  push32((uint32_t)(EDI));
  /* 11512188 push 3 */
  push32((uint32_t)(0x3u));
  /* 1151218a call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512190u);
  /* 11512190 push esi */
  push32((uint32_t)(ESI));
  /* 11512191 push edi */
  push32((uint32_t)(EDI));
  /* 11512192 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512194 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151219au);
  /* 1151219a mov edi, 0x1151b1a8 */
  EDI = (0x1151b1a8u);
  /* 1151219f push 0x1151ad44 */
  push32((uint32_t)(0x1151ad44u));
  /* 115121a4 push edi */
  push32((uint32_t)(EDI));
  /* 115121a5 call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x115121abu);
  /* 115121ab add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115121ae push esi */
  push32((uint32_t)(ESI));
  /* 115121af push edi */
  push32((uint32_t)(EDI));
  /* 115121b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115121b2 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115121b8u);
  /* 115121b8 push esi */
  push32((uint32_t)(ESI));
  /* 115121b9 push edi */
  push32((uint32_t)(EDI));
  /* 115121ba push 2 */
  push32((uint32_t)(0x2u));
  /* 115121bc call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115121c2u);
  /* 115121c2 push esi */
  push32((uint32_t)(ESI));
  /* 115121c3 push edi */
  push32((uint32_t)(EDI));
  /* 115121c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 115121c6 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115121ccu);
  /* 115121cc push esi */
  push32((uint32_t)(ESI));
  /* 115121cd push edi */
  push32((uint32_t)(EDI));
  /* 115121ce push 4 */
  push32((uint32_t)(0x4u));
  /* 115121d0 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115121d6u);
  /* 115121d6 mov edi, 0x1151b198 */
  EDI = (0x1151b198u);
  /* 115121db push 0x1151a974 */
  push32((uint32_t)(0x1151a974u));
  /* 115121e0 push edi */
  push32((uint32_t)(EDI));
  /* 115121e1 call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x115121e7u);
  /* 115121e7 push esi */
  push32((uint32_t)(ESI));
  /* 115121e8 push edi */
  push32((uint32_t)(EDI));
  /* 115121e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115121eb call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115121f1u);
  /* 115121f1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115121f4 push esi */
  push32((uint32_t)(ESI));
  /* 115121f5 push edi */
  push32((uint32_t)(EDI));
  /* 115121f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115121f8 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115121feu);
  /* 115121fe push esi */
  push32((uint32_t)(ESI));
  /* 115121ff push edi */
  push32((uint32_t)(EDI));
  /* 11512200 push 3 */
  push32((uint32_t)(0x3u));
  /* 11512202 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512208u);
  /* 11512208 push esi */
  push32((uint32_t)(ESI));
  /* 11512209 push edi */
  push32((uint32_t)(EDI));
  /* 1151220a push 4 */
  push32((uint32_t)(0x4u));
  /* 1151220c call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512212u);
  /* 11512212 mov edi, dword ptr [0x11519170] */
  EDI = (r32((uint32_t)(0x11519170)));
  /* 11512218 push 0x1151a964 */
  push32((uint32_t)(0x1151a964u));
  /* 1151221d push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11512222 mov dword ptr [0x1151b398], 0x1151a958 */
  w32((uint32_t)(0x1151b398), (0x1151a958u));
  /* 1151222c mov dword ptr [0x1151b230], 0x1151a954 */
  w32((uint32_t)(0x1151b230), (0x1151a954u));
  /* 11512236 mov dword ptr [0x1151b30c], 0x1151a948 */
  w32((uint32_t)(0x1151b30c), (0x1151a948u));
  /* 11512240 mov dword ptr [0x1151b308], 0x1151acf8 */
  w32((uint32_t)(0x1151b308), (0x1151acf8u));
  /* 1151224a call edi */
  call_ind((uint32_t)(EDI), 0x1151224cu);
  /* 1151224c push 0x1151a93c */
  push32((uint32_t)(0x1151a93cu));
  /* 11512251 push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11512256 call edi */
  call_ind((uint32_t)(EDI), 0x11512258u);
  /* 11512258 push 0x1151a928 */
  push32((uint32_t)(0x1151a928u));
  /* 1151225d push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512262 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512268u);
  /* 11512268 push 0x1151a914 */
  push32((uint32_t)(0x1151a914u));
  /* 1151226d push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11512272 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512278u);
  /* 11512278 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151227b push 0x1151a900 */
  push32((uint32_t)(0x1151a900u));
  /* 11512280 push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512285 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x1151228bu);
  /* 1151228b push 0x1151a8ec */
  push32((uint32_t)(0x1151a8ecu));
  /* 11512290 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11512295 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x1151229bu);
  /* 1151229b push esi */
  push32((uint32_t)(ESI));
  /* 1151229c push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 115122a1 push esi */
  push32((uint32_t)(ESI));
  /* 115122a2 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115122a8u);
  /* 115122a8 push esi */
  push32((uint32_t)(ESI));
  /* 115122a9 push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 115122ae push esi */
  push32((uint32_t)(ESI));
  /* 115122af call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115122b5u);
  /* 115122b5 push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 115122ba push esi */
  push32((uint32_t)(ESI));
  /* 115122bb call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x115122c1u);
  /* 115122c1 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 115122c6 push esi */
  push32((uint32_t)(ESI));
  /* 115122c7 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x115122cdu);
  /* 115122cd push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 115122d2 push esi */
  push32((uint32_t)(ESI));
  /* 115122d3 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x115122d9u);
  /* 115122d9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115122dc push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 115122e1 push esi */
  push32((uint32_t)(ESI));
  /* 115122e2 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x115122e8u);
  /* 115122e8 push 0x1151a8e0 */
  push32((uint32_t)(0x1151a8e0u));
  /* 115122ed push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 115122f2 call edi */
  call_ind((uint32_t)(EDI), 0x115122f4u);
  /* 115122f4 push 0x1151a8d0 */
  push32((uint32_t)(0x1151a8d0u));
  /* 115122f9 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 115122fe call edi */
  call_ind((uint32_t)(EDI), 0x11512300u);
  /* 11512300 push 0x1151a8d0 */
  push32((uint32_t)(0x1151a8d0u));
  /* 11512305 push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 1151230a call edi */
  call_ind((uint32_t)(EDI), 0x1151230cu);
  /* 1151230c push 0x1151a8c0 */
  push32((uint32_t)(0x1151a8c0u));
  /* 11512311 push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 11512316 call edi */
  call_ind((uint32_t)(EDI), 0x11512318u);
  /* 11512318 push 0x1151a8ac */
  push32((uint32_t)(0x1151a8acu));
  /* 1151231d push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 11512322 call edi */
  call_ind((uint32_t)(EDI), 0x11512324u);
  /* 11512324 push 0x1151a898 */
  push32((uint32_t)(0x1151a898u));
  /* 11512329 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 1151232e call edi */
  call_ind((uint32_t)(EDI), 0x11512330u);
  /* 11512330 push 0x1151a88c */
  push32((uint32_t)(0x1151a88cu));
  /* 11512335 push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 1151233a call edi */
  call_ind((uint32_t)(EDI), 0x1151233cu);
  /* 1151233c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151233f push 0x1151a87c */
  push32((uint32_t)(0x1151a87cu));
  /* 11512344 push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11512349 call edi */
  call_ind((uint32_t)(EDI), 0x1151234bu);
  /* 1151234b push 0x1151a868 */
  push32((uint32_t)(0x1151a868u));
  /* 11512350 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11512355 call edi */
  call_ind((uint32_t)(EDI), 0x11512357u);
  /* 11512357 push 0x1151a850 */
  push32((uint32_t)(0x1151a850u));
  /* 1151235c push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 11512361 call edi */
  call_ind((uint32_t)(EDI), 0x11512363u);
  /* 11512363 push 0x1151a83c */
  push32((uint32_t)(0x1151a83cu));
  /* 11512368 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 1151236d call edi */
  call_ind((uint32_t)(EDI), 0x1151236fu);
  /* 1151236f push 0x1151a82c */
  push32((uint32_t)(0x1151a82cu));
  /* 11512374 push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 11512379 call edi */
  call_ind((uint32_t)(EDI), 0x1151237bu);
  /* 1151237b push 0x1151a820 */
  push32((uint32_t)(0x1151a820u));
  /* 11512380 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 11512385 call edi */
  call_ind((uint32_t)(EDI), 0x11512387u);
  /* 11512387 push 0x1151a80c */
  push32((uint32_t)(0x1151a80cu));
  /* 1151238c push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 11512391 call edi */
  call_ind((uint32_t)(EDI), 0x11512393u);
  /* 11512393 push 0x1151a7f8 */
  push32((uint32_t)(0x1151a7f8u));
  /* 11512398 push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 1151239d call edi */
  call_ind((uint32_t)(EDI), 0x1151239fu);
  /* 1151239f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115123a2 push 0x1151a7e4 */
  push32((uint32_t)(0x1151a7e4u));
  /* 115123a7 push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 115123ac call edi */
  call_ind((uint32_t)(EDI), 0x115123aeu);
  /* 115123ae push 0x1151a7d0 */
  push32((uint32_t)(0x1151a7d0u));
  /* 115123b3 push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 115123b8 call edi */
  call_ind((uint32_t)(EDI), 0x115123bau);
  /* 115123ba push 0x1151aba0 */
  push32((uint32_t)(0x1151aba0u));
  /* 115123bf push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 115123c4 call edi */
  call_ind((uint32_t)(EDI), 0x115123c6u);
  /* 115123c6 push 0x1151ab8c */
  push32((uint32_t)(0x1151ab8cu));
  /* 115123cb push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 115123d0 call edi */
  call_ind((uint32_t)(EDI), 0x115123d2u);
  /* 115123d2 push 0x1151ab78 */
  push32((uint32_t)(0x1151ab78u));
  /* 115123d7 jmp 0x11512652 */
  goto L_11512652;
L_115123dc:;
  /* 115123dc mov edi, 0x1151b1b0 */
  EDI = (0x1151b1b0u);
  /* 115123e1 push 0x1151ad44 */
  push32((uint32_t)(0x1151ad44u));
  /* 115123e6 push edi */
  push32((uint32_t)(EDI));
  /* 115123e7 call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x115123edu);
  /* 115123ed push esi */
  push32((uint32_t)(ESI));
  /* 115123ee push edi */
  push32((uint32_t)(EDI));
  /* 115123ef push 1 */
  push32((uint32_t)(0x1u));
  /* 115123f1 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115123f7u);
  /* 115123f7 push esi */
  push32((uint32_t)(ESI));
  /* 115123f8 push edi */
  push32((uint32_t)(EDI));
  /* 115123f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115123fb call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512401u);
  /* 11512401 push esi */
  push32((uint32_t)(ESI));
  /* 11512402 push edi */
  push32((uint32_t)(EDI));
  /* 11512403 push 3 */
  push32((uint32_t)(0x3u));
  /* 11512405 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151240bu);
  /* 1151240b push esi */
  push32((uint32_t)(ESI));
  /* 1151240c push edi */
  push32((uint32_t)(EDI));
  /* 1151240d push 4 */
  push32((uint32_t)(0x4u));
  /* 1151240f call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512415u);
  /* 11512415 mov edi, 0x1151b1a8 */
  EDI = (0x1151b1a8u);
  /* 1151241a push 0x1151a974 */
  push32((uint32_t)(0x1151a974u));
  /* 1151241f push edi */
  push32((uint32_t)(EDI));
  /* 11512420 call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x11512426u);
  /* 11512426 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512429 push esi */
  push32((uint32_t)(ESI));
  /* 1151242a push edi */
  push32((uint32_t)(EDI));
  /* 1151242b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151242d call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512433u);
  /* 11512433 push esi */
  push32((uint32_t)(ESI));
  /* 11512434 push edi */
  push32((uint32_t)(EDI));
  /* 11512435 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512437 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151243du);
  /* 1151243d push esi */
  push32((uint32_t)(ESI));
  /* 1151243e push edi */
  push32((uint32_t)(EDI));
  /* 1151243f push 3 */
  push32((uint32_t)(0x3u));
  /* 11512441 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512447u);
  /* 11512447 push esi */
  push32((uint32_t)(ESI));
  /* 11512448 push edi */
  push32((uint32_t)(EDI));
  /* 11512449 push 4 */
  push32((uint32_t)(0x4u));
  /* 1151244b call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512451u);
  /* 11512451 mov edi, 0x1151b198 */
  EDI = (0x1151b198u);
  /* 11512456 push 0x1151ab2c */
  push32((uint32_t)(0x1151ab2cu));
  /* 1151245b push edi */
  push32((uint32_t)(EDI));
  /* 1151245c call dword ptr [0x11519170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519170))), 0x11512462u);
  /* 11512462 push esi */
  push32((uint32_t)(ESI));
  /* 11512463 push edi */
  push32((uint32_t)(EDI));
  /* 11512464 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512466 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151246cu);
  /* 1151246c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151246f push esi */
  push32((uint32_t)(ESI));
  /* 11512470 push edi */
  push32((uint32_t)(EDI));
  /* 11512471 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512473 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512479u);
  /* 11512479 push esi */
  push32((uint32_t)(ESI));
  /* 1151247a push edi */
  push32((uint32_t)(EDI));
  /* 1151247b push 3 */
  push32((uint32_t)(0x3u));
  /* 1151247d call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512483u);
  /* 11512483 push esi */
  push32((uint32_t)(ESI));
  /* 11512484 push edi */
  push32((uint32_t)(EDI));
  /* 11512485 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512487 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151248du);
  /* 1151248d mov edi, dword ptr [0x11519170] */
  EDI = (r32((uint32_t)(0x11519170)));
  /* 11512493 push 0x1151a7c0 */
  push32((uint32_t)(0x1151a7c0u));
  /* 11512498 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 1151249d mov dword ptr [0x1151b398], 0x1151ab0c */
  w32((uint32_t)(0x1151b398), (0x1151ab0cu));
  /* 115124a7 mov dword ptr [0x1151b230], 0x1151a7bc */
  w32((uint32_t)(0x1151b230), (0x1151a7bcu));
  /* 115124b1 mov dword ptr [0x1151b30c], 0x1151acf8 */
  w32((uint32_t)(0x1151b30c), (0x1151acf8u));
  /* 115124bb mov dword ptr [0x1151b308], 0x1151a958 */
  w32((uint32_t)(0x1151b308), (0x1151a958u));
  /* 115124c5 call edi */
  call_ind((uint32_t)(EDI), 0x115124c7u);
  /* 115124c7 push 0x1151a7b0 */
  push32((uint32_t)(0x1151a7b0u));
  /* 115124cc push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 115124d1 call edi */
  call_ind((uint32_t)(EDI), 0x115124d3u);
  /* 115124d3 push 0x1151a79c */
  push32((uint32_t)(0x1151a79cu));
  /* 115124d8 push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 115124dd call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x115124e3u);
  /* 115124e3 push 0x1151a788 */
  push32((uint32_t)(0x1151a788u));
  /* 115124e8 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 115124ed call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x115124f3u);
  /* 115124f3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115124f6 push 0x1151a774 */
  push32((uint32_t)(0x1151a774u));
  /* 115124fb push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512500 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512506u);
  /* 11512506 push 0x1151a760 */
  push32((uint32_t)(0x1151a760u));
  /* 1151250b push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11512510 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512516u);
  /* 11512516 push esi */
  push32((uint32_t)(ESI));
  /* 11512517 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 1151251c push esi */
  push32((uint32_t)(ESI));
  /* 1151251d call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512523u);
  /* 11512523 push esi */
  push32((uint32_t)(ESI));
  /* 11512524 push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11512529 push esi */
  push32((uint32_t)(ESI));
  /* 1151252a call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512530u);
  /* 11512530 push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512535 push esi */
  push32((uint32_t)(ESI));
  /* 11512536 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x1151253cu);
  /* 1151253c push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11512541 push esi */
  push32((uint32_t)(ESI));
  /* 11512542 call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11512548u);
  /* 11512548 push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 1151254d push esi */
  push32((uint32_t)(ESI));
  /* 1151254e call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11512554u);
  /* 11512554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512557 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 1151255c push esi */
  push32((uint32_t)(ESI));
  /* 1151255d call dword ptr [0x115190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f0))), 0x11512563u);
  /* 11512563 push 0x1151a754 */
  push32((uint32_t)(0x1151a754u));
  /* 11512568 push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 1151256d call edi */
  call_ind((uint32_t)(EDI), 0x1151256fu);
  /* 1151256f push 0x1151a73c */
  push32((uint32_t)(0x1151a73cu));
  /* 11512574 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11512579 call edi */
  call_ind((uint32_t)(EDI), 0x1151257bu);
  /* 1151257b push 0x1151a73c */
  push32((uint32_t)(0x1151a73cu));
  /* 11512580 push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 11512585 call edi */
  call_ind((uint32_t)(EDI), 0x11512587u);
  /* 11512587 push 0x1151a728 */
  push32((uint32_t)(0x1151a728u));
  /* 1151258c push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 11512591 call edi */
  call_ind((uint32_t)(EDI), 0x11512593u);
  /* 11512593 push 0x1151a718 */
  push32((uint32_t)(0x1151a718u));
  /* 11512598 push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 1151259d call edi */
  call_ind((uint32_t)(EDI), 0x1151259fu);
  /* 1151259f push 0x1151a708 */
  push32((uint32_t)(0x1151a708u));
  /* 115125a4 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115125a9 call edi */
  call_ind((uint32_t)(EDI), 0x115125abu);
  /* 115125ab push 0x1151a6fc */
  push32((uint32_t)(0x1151a6fcu));
  /* 115125b0 push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 115125b5 call edi */
  call_ind((uint32_t)(EDI), 0x115125b7u);
  /* 115125b7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115125ba push 0x1151a07c */
  push32((uint32_t)(0x1151a07cu));
  /* 115125bf push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 115125c4 call edi */
  call_ind((uint32_t)(EDI), 0x115125c6u);
  /* 115125c6 push 0x1151a6f0 */
  push32((uint32_t)(0x1151a6f0u));
  /* 115125cb push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 115125d0 call edi */
  call_ind((uint32_t)(EDI), 0x115125d2u);
  /* 115125d2 push 0x1151a6e0 */
  push32((uint32_t)(0x1151a6e0u));
  /* 115125d7 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 115125dc call edi */
  call_ind((uint32_t)(EDI), 0x115125deu);
  /* 115125de push 0x1151a6cc */
  push32((uint32_t)(0x1151a6ccu));
  /* 115125e3 push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 115125e8 call edi */
  call_ind((uint32_t)(EDI), 0x115125eau);
  /* 115125ea push 0x1151a9bc */
  push32((uint32_t)(0x1151a9bcu));
  /* 115125ef push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 115125f4 call edi */
  call_ind((uint32_t)(EDI), 0x115125f6u);
  /* 115125f6 push 0x1151a9a8 */
  push32((uint32_t)(0x1151a9a8u));
  /* 115125fb push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 11512600 call edi */
  call_ind((uint32_t)(EDI), 0x11512602u);
  /* 11512602 push 0x1151a994 */
  push32((uint32_t)(0x1151a994u));
  /* 11512607 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 1151260c call edi */
  call_ind((uint32_t)(EDI), 0x1151260eu);
  /* 1151260e push 0x1151aba0 */
  push32((uint32_t)(0x1151aba0u));
  /* 11512613 push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11512618 call edi */
  call_ind((uint32_t)(EDI), 0x1151261au);
  /* 1151261a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151261d push 0x1151ab8c */
  push32((uint32_t)(0x1151ab8cu));
  /* 11512622 push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 11512627 call edi */
  call_ind((uint32_t)(EDI), 0x11512629u);
  /* 11512629 push 0x1151ab78 */
  push32((uint32_t)(0x1151ab78u));
  /* 1151262e push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 11512633 call edi */
  call_ind((uint32_t)(EDI), 0x11512635u);
  /* 11512635 push 0x1151a83c */
  push32((uint32_t)(0x1151a83cu));
  /* 1151263a push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 1151263f call edi */
  call_ind((uint32_t)(EDI), 0x11512641u);
  /* 11512641 push 0x1151a82c */
  push32((uint32_t)(0x1151a82cu));
  /* 11512646 push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 1151264b call edi */
  call_ind((uint32_t)(EDI), 0x1151264du);
  /* 1151264d push 0x1151a820 */
  push32((uint32_t)(0x1151a820u));
L_11512652:;
  /* 11512652 push 0x1151b570 */
  push32((uint32_t)(0x1151b570u));
  /* 11512657 call edi */
  call_ind((uint32_t)(EDI), 0x11512659u);
  /* 11512659 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151265c jmp 0x11512bc0 */
  goto L_11512bc0;
L_11512661:;
  /* 11512661 mov ebx, dword ptr [0x11519170] */
  EBX = (r32((uint32_t)(0x11519170)));
  /* 11512667 mov edi, 0x1151b1b0 */
  EDI = (0x1151b1b0u);
  /* 1151266c push 0x1151a6bc */
  push32((uint32_t)(0x1151a6bcu));
  /* 11512671 push edi */
  push32((uint32_t)(EDI));
  /* 11512672 call ebx */
  call_ind((uint32_t)(EBX), 0x11512674u);
  /* 11512674 push esi */
  push32((uint32_t)(ESI));
  /* 11512675 push edi */
  push32((uint32_t)(EDI));
  /* 11512676 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512678 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151267eu);
  /* 1151267e push esi */
  push32((uint32_t)(ESI));
  /* 1151267f push edi */
  push32((uint32_t)(EDI));
  /* 11512680 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512682 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512688u);
  /* 11512688 push esi */
  push32((uint32_t)(ESI));
  /* 11512689 push edi */
  push32((uint32_t)(EDI));
  /* 1151268a push 3 */
  push32((uint32_t)(0x3u));
  /* 1151268c call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512692u);
  /* 11512692 push esi */
  push32((uint32_t)(ESI));
  /* 11512693 push edi */
  push32((uint32_t)(EDI));
  /* 11512694 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512696 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151269cu);
  /* 1151269c mov edi, 0x1151b1a8 */
  EDI = (0x1151b1a8u);
  /* 115126a1 push 0x1151ad44 */
  push32((uint32_t)(0x1151ad44u));
  /* 115126a6 push edi */
  push32((uint32_t)(EDI));
  /* 115126a7 call ebx */
  call_ind((uint32_t)(EBX), 0x115126a9u);
  /* 115126a9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115126ac push esi */
  push32((uint32_t)(ESI));
  /* 115126ad push edi */
  push32((uint32_t)(EDI));
  /* 115126ae push 1 */
  push32((uint32_t)(0x1u));
  /* 115126b0 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115126b6u);
  /* 115126b6 push esi */
  push32((uint32_t)(ESI));
  /* 115126b7 push edi */
  push32((uint32_t)(EDI));
  /* 115126b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115126ba call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115126c0u);
  /* 115126c0 push esi */
  push32((uint32_t)(ESI));
  /* 115126c1 push edi */
  push32((uint32_t)(EDI));
  /* 115126c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 115126c4 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115126cau);
  /* 115126ca push esi */
  push32((uint32_t)(ESI));
  /* 115126cb push edi */
  push32((uint32_t)(EDI));
  /* 115126cc push 4 */
  push32((uint32_t)(0x4u));
  /* 115126ce call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115126d4u);
  /* 115126d4 mov edi, 0x1151b198 */
  EDI = (0x1151b198u);
  /* 115126d9 push 0x1151a6ac */
  push32((uint32_t)(0x1151a6acu));
  /* 115126de push edi */
  push32((uint32_t)(EDI));
  /* 115126df call ebx */
  call_ind((uint32_t)(EBX), 0x115126e1u);
  /* 115126e1 push esi */
  push32((uint32_t)(ESI));
  /* 115126e2 push edi */
  push32((uint32_t)(EDI));
  /* 115126e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115126e5 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115126ebu);
  /* 115126eb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115126ee push esi */
  push32((uint32_t)(ESI));
  /* 115126ef push edi */
  push32((uint32_t)(EDI));
  /* 115126f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115126f2 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115126f8u);
  /* 115126f8 push esi */
  push32((uint32_t)(ESI));
  /* 115126f9 push edi */
  push32((uint32_t)(EDI));
  /* 115126fa push 3 */
  push32((uint32_t)(0x3u));
  /* 115126fc call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512702u);
  /* 11512702 push esi */
  push32((uint32_t)(ESI));
  /* 11512703 push edi */
  push32((uint32_t)(EDI));
  /* 11512704 mov edi, dword ptr [0x115190e8] */
  EDI = (r32((uint32_t)(0x115190e8)));
  /* 1151270a push 4 */
  push32((uint32_t)(0x4u));
  /* 1151270c call edi */
  call_ind((uint32_t)(EDI), 0x1151270eu);
  /* 1151270e push 0x1151a69c */
  push32((uint32_t)(0x1151a69cu));
  /* 11512713 push 0x1151b540 */
  push32((uint32_t)(0x1151b540u));
  /* 11512718 mov dword ptr [0x1151b398], 0x1151a690 */
  w32((uint32_t)(0x1151b398), (0x1151a690u));
  /* 11512722 mov dword ptr [0x1151b230], 0x1151a68c */
  w32((uint32_t)(0x1151b230), (0x1151a68cu));
  /* 1151272c mov dword ptr [0x1151b30c], 0x1151a684 */
  w32((uint32_t)(0x1151b30c), (0x1151a684u));
  /* 11512736 mov dword ptr [0x1151b308], 0x1151acf8 */
  w32((uint32_t)(0x1151b308), (0x1151acf8u));
  /* 11512740 call ebx */
  call_ind((uint32_t)(EBX), 0x11512742u);
  /* 11512742 push 0x1151a678 */
  push32((uint32_t)(0x1151a678u));
  /* 11512747 push 0x1151b5c0 */
  push32((uint32_t)(0x1151b5c0u));
  /* 1151274c call ebx */
  call_ind((uint32_t)(EBX), 0x1151274eu);
  /* 1151274e push 0x1151a664 */
  push32((uint32_t)(0x1151a664u));
  /* 11512753 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11512758 call ebx */
  call_ind((uint32_t)(EBX), 0x1151275au);
  /* 1151275a push 0x1151a658 */
  push32((uint32_t)(0x1151a658u));
  /* 1151275f push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11512764 call ebx */
  call_ind((uint32_t)(EBX), 0x11512766u);
  /* 11512766 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512769 push 0x1151a644 */
  push32((uint32_t)(0x1151a644u));
  /* 1151276e push 0x1151b468 */
  push32((uint32_t)(0x1151b468u));
  /* 11512773 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512779u);
  /* 11512779 push 0x1151a630 */
  push32((uint32_t)(0x1151a630u));
  /* 1151277e push 0x1151b500 */
  push32((uint32_t)(0x1151b500u));
  /* 11512783 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512789u);
  /* 11512789 push 0x1151a618 */
  push32((uint32_t)(0x1151a618u));
  /* 1151278e push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512793 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512799u);
  /* 11512799 push 0x1151a600 */
  push32((uint32_t)(0x1151a600u));
  /* 1151279e push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 115127a3 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x115127a9u);
  /* 115127a9 push 0x1151a5ec */
  push32((uint32_t)(0x1151a5ecu));
  /* 115127ae push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 115127b3 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x115127b9u);
  /* 115127b9 push 0x1151a5d8 */
  push32((uint32_t)(0x1151a5d8u));
  /* 115127be push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 115127c3 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x115127c9u);
  /* 115127c9 push esi */
  push32((uint32_t)(ESI));
  /* 115127ca push 0x1151b5c0 */
  push32((uint32_t)(0x1151b5c0u));
  /* 115127cf push esi */
  push32((uint32_t)(ESI));
  /* 115127d0 call edi */
  call_ind((uint32_t)(EDI), 0x115127d2u);
  /* 115127d2 push esi */
  push32((uint32_t)(ESI));
  /* 115127d3 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 115127d8 push esi */
  push32((uint32_t)(ESI));
  /* 115127d9 call edi */
  call_ind((uint32_t)(EDI), 0x115127dbu);
  /* 115127db add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115127de push esi */
  push32((uint32_t)(ESI));
  /* 115127df push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 115127e4 push esi */
  push32((uint32_t)(ESI));
  /* 115127e5 call edi */
  call_ind((uint32_t)(EDI), 0x115127e7u);
  /* 115127e7 mov edi, dword ptr [0x115190f0] */
  EDI = (r32((uint32_t)(0x115190f0)));
  /* 115127ed push 0x1151b468 */
  push32((uint32_t)(0x1151b468u));
  /* 115127f2 push esi */
  push32((uint32_t)(ESI));
  /* 115127f3 call edi */
  call_ind((uint32_t)(EDI), 0x115127f5u);
  /* 115127f5 push 0x1151b500 */
  push32((uint32_t)(0x1151b500u));
  /* 115127fa push esi */
  push32((uint32_t)(ESI));
  /* 115127fb call edi */
  call_ind((uint32_t)(EDI), 0x115127fdu);
  /* 115127fd push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512802 push esi */
  push32((uint32_t)(ESI));
  /* 11512803 call edi */
  call_ind((uint32_t)(EDI), 0x11512805u);
  /* 11512805 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 1151280a push esi */
  push32((uint32_t)(ESI));
  /* 1151280b call edi */
  call_ind((uint32_t)(EDI), 0x1151280du);
  /* 1151280d push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512812 push esi */
  push32((uint32_t)(ESI));
  /* 11512813 call edi */
  call_ind((uint32_t)(EDI), 0x11512815u);
  /* 11512815 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 1151281a push esi */
  push32((uint32_t)(ESI));
  /* 1151281b call edi */
  call_ind((uint32_t)(EDI), 0x1151281du);
  /* 1151281d push 0x1151a5c8 */
  push32((uint32_t)(0x1151a5c8u));
  /* 11512822 push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11512827 call ebx */
  call_ind((uint32_t)(EBX), 0x11512829u);
  /* 11512829 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151282c mov edi, 0x1151a5b4 */
  EDI = (0x1151a5b4u);
  /* 11512831 push edi */
  push32((uint32_t)(EDI));
  /* 11512832 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11512837 call ebx */
  call_ind((uint32_t)(EBX), 0x11512839u);
  /* 11512839 push edi */
  push32((uint32_t)(EDI));
  /* 1151283a push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 1151283f call ebx */
  call_ind((uint32_t)(EBX), 0x11512841u);
  /* 11512841 push 0x1151a5a8 */
  push32((uint32_t)(0x1151a5a8u));
  /* 11512846 push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 1151284b call ebx */
  call_ind((uint32_t)(EBX), 0x1151284du);
  /* 1151284d push 0x1151a594 */
  push32((uint32_t)(0x1151a594u));
  /* 11512852 push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 11512857 call ebx */
  call_ind((uint32_t)(EBX), 0x11512859u);
  /* 11512859 push 0x1151a584 */
  push32((uint32_t)(0x1151a584u));
  /* 1151285e push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11512863 call ebx */
  call_ind((uint32_t)(EBX), 0x11512865u);
  /* 11512865 push 0x1151a578 */
  push32((uint32_t)(0x1151a578u));
  /* 1151286a push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 1151286f call ebx */
  call_ind((uint32_t)(EBX), 0x11512871u);
  /* 11512871 push 0x1151a69c */
  push32((uint32_t)(0x1151a69cu));
  /* 11512876 push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 1151287b call ebx */
  call_ind((uint32_t)(EBX), 0x1151287du);
  /* 1151287d push 0x1151a568 */
  push32((uint32_t)(0x1151a568u));
  /* 11512882 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11512887 call ebx */
  call_ind((uint32_t)(EBX), 0x11512889u);
  /* 11512889 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151288c push 0x1151a558 */
  push32((uint32_t)(0x1151a558u));
  /* 11512891 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 11512896 call ebx */
  call_ind((uint32_t)(EBX), 0x11512898u);
  /* 11512898 push 0x1151a544 */
  push32((uint32_t)(0x1151a544u));
  /* 1151289d push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 115128a2 call ebx */
  call_ind((uint32_t)(EBX), 0x115128a4u);
  /* 115128a4 push 0x1151a530 */
  push32((uint32_t)(0x1151a530u));
  /* 115128a9 push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 115128ae call ebx */
  call_ind((uint32_t)(EBX), 0x115128b0u);
  /* 115128b0 push 0x1151a51c */
  push32((uint32_t)(0x1151a51cu));
  /* 115128b5 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 115128ba call ebx */
  call_ind((uint32_t)(EBX), 0x115128bcu);
  /* 115128bc push 0x1151a508 */
  push32((uint32_t)(0x1151a508u));
  /* 115128c1 push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 115128c6 call ebx */
  call_ind((uint32_t)(EBX), 0x115128c8u);
  /* 115128c8 push 0x1151a4f4 */
  push32((uint32_t)(0x1151a4f4u));
  /* 115128cd push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 115128d2 call ebx */
  call_ind((uint32_t)(EBX), 0x115128d4u);
  /* 115128d4 push 0x1151a4dc */
  push32((uint32_t)(0x1151a4dcu));
  /* 115128d9 push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 115128de call ebx */
  call_ind((uint32_t)(EBX), 0x115128e0u);
  /* 115128e0 push 0x1151a4c8 */
  push32((uint32_t)(0x1151a4c8u));
  /* 115128e5 push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 115128ea call ebx */
  call_ind((uint32_t)(EBX), 0x115128ecu);
  /* 115128ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115128ef push 0x1151aba0 */
  push32((uint32_t)(0x1151aba0u));
  /* 115128f4 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 115128f9 call ebx */
  call_ind((uint32_t)(EBX), 0x115128fbu);
  /* 115128fb push 0x1151ab8c */
  push32((uint32_t)(0x1151ab8cu));
  /* 11512900 push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 11512905 call ebx */
  call_ind((uint32_t)(EBX), 0x11512907u);
  /* 11512907 push 0x1151ab78 */
  push32((uint32_t)(0x1151ab78u));
  /* 1151290c jmp 0x11512bb0 */
  goto L_11512bb0;
L_11512911:;
  /* 11512911 mov ebx, dword ptr [0x11519170] */
  EBX = (r32((uint32_t)(0x11519170)));
  /* 11512917 mov edi, 0x1151b1b0 */
  EDI = (0x1151b1b0u);
  /* 1151291c push 0x1151ab2c */
  push32((uint32_t)(0x1151ab2cu));
  /* 11512921 push edi */
  push32((uint32_t)(EDI));
  /* 11512922 call ebx */
  call_ind((uint32_t)(EBX), 0x11512924u);
  /* 11512924 push esi */
  push32((uint32_t)(ESI));
  /* 11512925 push edi */
  push32((uint32_t)(EDI));
  /* 11512926 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512928 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151292eu);
  /* 1151292e push esi */
  push32((uint32_t)(ESI));
  /* 1151292f push edi */
  push32((uint32_t)(EDI));
  /* 11512930 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512932 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512938u);
  /* 11512938 push esi */
  push32((uint32_t)(ESI));
  /* 11512939 push edi */
  push32((uint32_t)(EDI));
  /* 1151293a push 3 */
  push32((uint32_t)(0x3u));
  /* 1151293c call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512942u);
  /* 11512942 push esi */
  push32((uint32_t)(ESI));
  /* 11512943 push edi */
  push32((uint32_t)(EDI));
  /* 11512944 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512946 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151294cu);
  /* 1151294c mov edi, 0x1151b1a8 */
  EDI = (0x1151b1a8u);
  /* 11512951 push 0x1151ad24 */
  push32((uint32_t)(0x1151ad24u));
  /* 11512956 push edi */
  push32((uint32_t)(EDI));
  /* 11512957 call ebx */
  call_ind((uint32_t)(EBX), 0x11512959u);
  /* 11512959 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151295c push esi */
  push32((uint32_t)(ESI));
  /* 1151295d push edi */
  push32((uint32_t)(EDI));
  /* 1151295e push 1 */
  push32((uint32_t)(0x1u));
  /* 11512960 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512966u);
  /* 11512966 push esi */
  push32((uint32_t)(ESI));
  /* 11512967 push edi */
  push32((uint32_t)(EDI));
  /* 11512968 push 2 */
  push32((uint32_t)(0x2u));
  /* 1151296a call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512970u);
  /* 11512970 push esi */
  push32((uint32_t)(ESI));
  /* 11512971 push edi */
  push32((uint32_t)(EDI));
  /* 11512972 push 3 */
  push32((uint32_t)(0x3u));
  /* 11512974 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151297au);
  /* 1151297a push esi */
  push32((uint32_t)(ESI));
  /* 1151297b push edi */
  push32((uint32_t)(EDI));
  /* 1151297c push 4 */
  push32((uint32_t)(0x4u));
  /* 1151297e call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x11512984u);
  /* 11512984 mov edi, 0x1151b198 */
  EDI = (0x1151b198u);
  /* 11512989 push 0x1151ad44 */
  push32((uint32_t)(0x1151ad44u));
  /* 1151298e push edi */
  push32((uint32_t)(EDI));
  /* 1151298f call ebx */
  call_ind((uint32_t)(EBX), 0x11512991u);
  /* 11512991 push esi */
  push32((uint32_t)(ESI));
  /* 11512992 push edi */
  push32((uint32_t)(EDI));
  /* 11512993 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512995 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x1151299bu);
  /* 1151299b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151299e push esi */
  push32((uint32_t)(ESI));
  /* 1151299f push edi */
  push32((uint32_t)(EDI));
  /* 115129a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115129a2 call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115129a8u);
  /* 115129a8 push esi */
  push32((uint32_t)(ESI));
  /* 115129a9 push edi */
  push32((uint32_t)(EDI));
  /* 115129aa push 3 */
  push32((uint32_t)(0x3u));
  /* 115129ac call dword ptr [0x115190e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e8))), 0x115129b2u);
  /* 115129b2 push esi */
  push32((uint32_t)(ESI));
  /* 115129b3 push edi */
  push32((uint32_t)(EDI));
  /* 115129b4 mov edi, dword ptr [0x115190e8] */
  EDI = (r32((uint32_t)(0x115190e8)));
  /* 115129ba push 4 */
  push32((uint32_t)(0x4u));
  /* 115129bc call edi */
  call_ind((uint32_t)(EDI), 0x115129beu);
  /* 115129be push 0x1151a4b8 */
  push32((uint32_t)(0x1151a4b8u));
  /* 115129c3 push 0x1151b540 */
  push32((uint32_t)(0x1151b540u));
  /* 115129c8 mov dword ptr [0x1151b398], 0x1151acf8 */
  w32((uint32_t)(0x1151b398), (0x1151acf8u));
  /* 115129d2 mov dword ptr [0x1151b230], 0x1151a4b4 */
  w32((uint32_t)(0x1151b230), (0x1151a4b4u));
  /* 115129dc mov dword ptr [0x1151b30c], 0x1151ab0c */
  w32((uint32_t)(0x1151b30c), (0x1151ab0cu));
  /* 115129e6 mov dword ptr [0x1151b308], 0x1151ad08 */
  w32((uint32_t)(0x1151b308), (0x1151ad08u));
  /* 115129f0 call ebx */
  call_ind((uint32_t)(EBX), 0x115129f2u);
  /* 115129f2 push 0x1151a4a4 */
  push32((uint32_t)(0x1151a4a4u));
  /* 115129f7 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 115129fc call ebx */
  call_ind((uint32_t)(EBX), 0x115129feu);
  /* 115129fe push 0x1151a498 */
  push32((uint32_t)(0x1151a498u));
  /* 11512a03 push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11512a08 call ebx */
  call_ind((uint32_t)(EBX), 0x11512a0au);
  /* 11512a0a push 0x1151a480 */
  push32((uint32_t)(0x1151a480u));
  /* 11512a0f push 0x1151b5a0 */
  push32((uint32_t)(0x1151b5a0u));
  /* 11512a14 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512a1au);
  /* 11512a1a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512a1d push 0x1151a468 */
  push32((uint32_t)(0x1151a468u));
  /* 11512a22 push 0x1151b580 */
  push32((uint32_t)(0x1151b580u));
  /* 11512a27 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512a2du);
  /* 11512a2d push 0x1151a454 */
  push32((uint32_t)(0x1151a454u));
  /* 11512a32 push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512a37 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512a3du);
  /* 11512a3d push 0x1151a440 */
  push32((uint32_t)(0x1151a440u));
  /* 11512a42 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11512a47 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512a4du);
  /* 11512a4d push 0x1151a42c */
  push32((uint32_t)(0x1151a42cu));
  /* 11512a52 push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512a57 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512a5du);
  /* 11512a5d push 0x1151a418 */
  push32((uint32_t)(0x1151a418u));
  /* 11512a62 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11512a67 call dword ptr [0x115190e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190e0))), 0x11512a6du);
  /* 11512a6d push esi */
  push32((uint32_t)(ESI));
  /* 11512a6e push 0x1151b540 */
  push32((uint32_t)(0x1151b540u));
  /* 11512a73 push esi */
  push32((uint32_t)(ESI));
  /* 11512a74 call edi */
  call_ind((uint32_t)(EDI), 0x11512a76u);
  /* 11512a76 push esi */
  push32((uint32_t)(ESI));
  /* 11512a77 push 0x1151b5c8 */
  push32((uint32_t)(0x1151b5c8u));
  /* 11512a7c push esi */
  push32((uint32_t)(ESI));
  /* 11512a7d call edi */
  call_ind((uint32_t)(EDI), 0x11512a7fu);
  /* 11512a7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512a82 push esi */
  push32((uint32_t)(ESI));
  /* 11512a83 push 0x1151b1d0 */
  push32((uint32_t)(0x1151b1d0u));
  /* 11512a88 push esi */
  push32((uint32_t)(ESI));
  /* 11512a89 call edi */
  call_ind((uint32_t)(EDI), 0x11512a8bu);
  /* 11512a8b mov edi, dword ptr [0x115190f0] */
  EDI = (r32((uint32_t)(0x115190f0)));
  /* 11512a91 push 0x1151b5a0 */
  push32((uint32_t)(0x1151b5a0u));
  /* 11512a96 push esi */
  push32((uint32_t)(ESI));
  /* 11512a97 call edi */
  call_ind((uint32_t)(EDI), 0x11512a99u);
  /* 11512a99 push 0x1151b580 */
  push32((uint32_t)(0x1151b580u));
  /* 11512a9e push esi */
  push32((uint32_t)(ESI));
  /* 11512a9f call edi */
  call_ind((uint32_t)(EDI), 0x11512aa1u);
  /* 11512aa1 push 0x1151b510 */
  push32((uint32_t)(0x1151b510u));
  /* 11512aa6 push esi */
  push32((uint32_t)(ESI));
  /* 11512aa7 call edi */
  call_ind((uint32_t)(EDI), 0x11512aa9u);
  /* 11512aa9 push 0x1151b578 */
  push32((uint32_t)(0x1151b578u));
  /* 11512aae push esi */
  push32((uint32_t)(ESI));
  /* 11512aaf call edi */
  call_ind((uint32_t)(EDI), 0x11512ab1u);
  /* 11512ab1 push 0x1151b240 */
  push32((uint32_t)(0x1151b240u));
  /* 11512ab6 push esi */
  push32((uint32_t)(ESI));
  /* 11512ab7 call edi */
  call_ind((uint32_t)(EDI), 0x11512ab9u);
  /* 11512ab9 push 0x1151b2e8 */
  push32((uint32_t)(0x1151b2e8u));
  /* 11512abe push esi */
  push32((uint32_t)(ESI));
  /* 11512abf call edi */
  call_ind((uint32_t)(EDI), 0x11512ac1u);
  /* 11512ac1 push 0x1151a40c */
  push32((uint32_t)(0x1151a40cu));
  /* 11512ac6 push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11512acb call ebx */
  call_ind((uint32_t)(EBX), 0x11512acdu);
  /* 11512acd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512ad0 mov edi, 0x1151a3f4 */
  EDI = (0x1151a3f4u);
  /* 11512ad5 push edi */
  push32((uint32_t)(EDI));
  /* 11512ad6 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11512adb call ebx */
  call_ind((uint32_t)(EBX), 0x11512addu);
  /* 11512add push edi */
  push32((uint32_t)(EDI));
  /* 11512ade push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 11512ae3 call ebx */
  call_ind((uint32_t)(EBX), 0x11512ae5u);
  /* 11512ae5 push 0x1151a3e0 */
  push32((uint32_t)(0x1151a3e0u));
  /* 11512aea push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 11512aef call ebx */
  call_ind((uint32_t)(EBX), 0x11512af1u);
  /* 11512af1 push 0x1151a3d0 */
  push32((uint32_t)(0x1151a3d0u));
  /* 11512af6 push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 11512afb call ebx */
  call_ind((uint32_t)(EBX), 0x11512afdu);
  /* 11512afd push 0x1151a3c0 */
  push32((uint32_t)(0x1151a3c0u));
  /* 11512b02 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11512b07 call ebx */
  call_ind((uint32_t)(EBX), 0x11512b09u);
  /* 11512b09 push 0x1151a3b4 */
  push32((uint32_t)(0x1151a3b4u));
  /* 11512b0e push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 11512b13 call ebx */
  call_ind((uint32_t)(EBX), 0x11512b15u);
  /* 11512b15 push 0x1151a39c */
  push32((uint32_t)(0x1151a39cu));
  /* 11512b1a push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11512b1f call ebx */
  call_ind((uint32_t)(EBX), 0x11512b21u);
  /* 11512b21 push 0x1151a390 */
  push32((uint32_t)(0x1151a390u));
  /* 11512b26 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11512b2b call ebx */
  call_ind((uint32_t)(EBX), 0x11512b2du);
  /* 11512b2d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512b30 push 0x1151a380 */
  push32((uint32_t)(0x1151a380u));
  /* 11512b35 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 11512b3a call ebx */
  call_ind((uint32_t)(EBX), 0x11512b3cu);
  /* 11512b3c push 0x1151aba0 */
  push32((uint32_t)(0x1151aba0u));
  /* 11512b41 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 11512b46 call ebx */
  call_ind((uint32_t)(EBX), 0x11512b48u);
  /* 11512b48 push 0x1151ab8c */
  push32((uint32_t)(0x1151ab8cu));
  /* 11512b4d push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 11512b52 call ebx */
  call_ind((uint32_t)(EBX), 0x11512b54u);
  /* 11512b54 push 0x1151ab78 */
  push32((uint32_t)(0x1151ab78u));
  /* 11512b59 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 11512b5e call ebx */
  call_ind((uint32_t)(EBX), 0x11512b60u);
  /* 11512b60 push 0x1151a36c */
  push32((uint32_t)(0x1151a36cu));
  /* 11512b65 push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 11512b6a call ebx */
  call_ind((uint32_t)(EBX), 0x11512b6cu);
  /* 11512b6c push 0x1151a9bc */
  push32((uint32_t)(0x1151a9bcu));
  /* 11512b71 push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11512b76 call ebx */
  call_ind((uint32_t)(EBX), 0x11512b78u);
  /* 11512b78 push 0x1151a9a8 */
  push32((uint32_t)(0x1151a9a8u));
  /* 11512b7d push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 11512b82 call ebx */
  call_ind((uint32_t)(EBX), 0x11512b84u);
  /* 11512b84 push 0x1151a994 */
  push32((uint32_t)(0x1151a994u));
  /* 11512b89 push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 11512b8e call ebx */
  call_ind((uint32_t)(EBX), 0x11512b90u);
  /* 11512b90 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512b93 push 0x1151abf0 */
  push32((uint32_t)(0x1151abf0u));
  /* 11512b98 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 11512b9d call ebx */
  call_ind((uint32_t)(EBX), 0x11512b9fu);
  /* 11512b9f push 0x1151abdc */
  push32((uint32_t)(0x1151abdcu));
  /* 11512ba4 push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 11512ba9 call ebx */
  call_ind((uint32_t)(EBX), 0x11512babu);
  /* 11512bab push 0x1151abc8 */
  push32((uint32_t)(0x1151abc8u));
L_11512bb0:;
  /* 11512bb0 push 0x1151b570 */
  push32((uint32_t)(0x1151b570u));
  /* 11512bb5 call ebx */
  call_ind((uint32_t)(EBX), 0x11512bb7u);
  /* 11512bb7 mov ebx, dword ptr [0x11519184] */
  EBX = (r32((uint32_t)(0x11519184)));
  /* 11512bbd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11512bc0:;
  /* 11512bc0 mov edi, dword ptr [0x1151917c] */
  EDI = (r32((uint32_t)(0x1151917c)));
L_11512bc6:;
  /* 11512bc6 push dword ptr [0x1151b230] */
  push32((uint32_t)(r32((uint32_t)(0x1151b230))));
  /* 11512bcc push 0x1151a364 */
  push32((uint32_t)(0x1151a364u));
  /* 11512bd1 call 0x11515a00 */
  push32(0x11512bd6u); f_11515a00();
  /* 11512bd6 push eax */
  push32((uint32_t)(EAX));
  /* 11512bd7 push 0x1151a0d8 */
  push32((uint32_t)(0x1151a0d8u));
  /* 11512bdc call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11512be2u);
  /* 11512be2 push dword ptr [0x1151b230] */
  push32((uint32_t)(r32((uint32_t)(0x1151b230))));
  /* 11512be8 push 0x1151a35c */
  push32((uint32_t)(0x1151a35cu));
  /* 11512bed call 0x11515a00 */
  push32(0x11512bf2u); f_11515a00();
  /* 11512bf2 push eax */
  push32((uint32_t)(EAX));
  /* 11512bf3 push 0x1151a0d8 */
  push32((uint32_t)(0x1151a0d8u));
  /* 11512bf8 call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11512bfeu);
  /* 11512bfe push dword ptr [0x1151b230] */
  push32((uint32_t)(r32((uint32_t)(0x1151b230))));
  /* 11512c04 push 0x1151a354 */
  push32((uint32_t)(0x1151a354u));
  /* 11512c09 call 0x11515a00 */
  push32(0x11512c0eu); f_11515a00();
  /* 11512c0e push eax */
  push32((uint32_t)(EAX));
  /* 11512c0f push 0x1151a0d8 */
  push32((uint32_t)(0x1151a0d8u));
  /* 11512c14 call dword ptr [0x115190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d0))), 0x11512c1au);
  /* 11512c1a push esi */
  push32((uint32_t)(ESI));
  /* 11512c1b push 0x1151b378 */
  push32((uint32_t)(0x1151b378u));
  /* 11512c20 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512c22 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 11512c27 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512c2c push ebp */
  push32((uint32_t)(EBP));
  /* 11512c2d call edi */
  call_ind((uint32_t)(EDI), 0x11512c2fu);
  /* 11512c2f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512c32 push esi */
  push32((uint32_t)(ESI));
  /* 11512c33 push 0x1151b380 */
  push32((uint32_t)(0x1151b380u));
  /* 11512c38 push 3 */
  push32((uint32_t)(0x3u));
  /* 11512c3a push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 11512c3f push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512c44 push ebp */
  push32((uint32_t)(EBP));
  /* 11512c45 call edi */
  call_ind((uint32_t)(EDI), 0x11512c47u);
  /* 11512c47 push esi */
  push32((uint32_t)(ESI));
  /* 11512c48 push 0x1151b368 */
  push32((uint32_t)(0x1151b368u));
  /* 11512c4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11512c4f push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11512c54 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512c59 push ebp */
  push32((uint32_t)(EBP));
  /* 11512c5a call edi */
  call_ind((uint32_t)(EDI), 0x11512c5cu);
  /* 11512c5c push esi */
  push32((uint32_t)(ESI));
  /* 11512c5d push 0x1151b370 */
  push32((uint32_t)(0x1151b370u));
  /* 11512c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512c64 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 11512c69 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512c6e push ebp */
  push32((uint32_t)(EBP));
  /* 11512c6f call edi */
  call_ind((uint32_t)(EDI), 0x11512c71u);
  /* 11512c71 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11512c76 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512c79 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 11512c7f lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11512c82 mov eax, dword ptr [0x1151b2f8] */
  EAX = (r32((uint32_t)(0x1151b2f8)));
  /* 11512c87 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 11512c8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11512c8c jle 0x11512d5d */
  if ((C.zf||C.sf!=C.of)) goto L_11512d5d;
L_11512c92:;
  /* 11512c92 push esi */
  push32((uint32_t)(ESI));
  /* 11512c93 push 0x1151b2a8 */
  push32((uint32_t)(0x1151b2a8u));
  /* 11512c98 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512c9a push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 11512c9f push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512ca4 push ebp */
  push32((uint32_t)(EBP));
  /* 11512ca5 call edi */
  call_ind((uint32_t)(EDI), 0x11512ca7u);
  /* 11512ca7 push esi */
  push32((uint32_t)(ESI));
  /* 11512ca8 push ebp */
  push32((uint32_t)(EBP));
  /* 11512ca9 call ebx */
  call_ind((uint32_t)(EBX), 0x11512cabu);
  /* 11512cab push esi */
  push32((uint32_t)(ESI));
  /* 11512cac push esi */
  push32((uint32_t)(ESI));
  /* 11512cad push 0x1151b378 */
  push32((uint32_t)(0x1151b378u));
  /* 11512cb2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11512cb4 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11512cbau);
  /* 11512cba push esi */
  push32((uint32_t)(ESI));
  /* 11512cbb push 0x1151b420 */
  push32((uint32_t)(0x1151b420u));
  /* 11512cc0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11512cc2 push 0x1151b1c8 */
  push32((uint32_t)(0x1151b1c8u));
  /* 11512cc7 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512ccc push ebp */
  push32((uint32_t)(EBP));
  /* 11512ccd call edi */
  call_ind((uint32_t)(EDI), 0x11512ccfu);
  /* 11512ccf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512cd2 push esi */
  push32((uint32_t)(ESI));
  /* 11512cd3 push ebp */
  push32((uint32_t)(EBP));
  /* 11512cd4 call ebx */
  call_ind((uint32_t)(EBX), 0x11512cd6u);
  /* 11512cd6 push esi */
  push32((uint32_t)(ESI));
  /* 11512cd7 push esi */
  push32((uint32_t)(ESI));
  /* 11512cd8 push 0x1151b380 */
  push32((uint32_t)(0x1151b380u));
  /* 11512cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 11512cdf call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11512ce5u);
  /* 11512ce5 push esi */
  push32((uint32_t)(ESI));
  /* 11512ce6 push 0x1151b328 */
  push32((uint32_t)(0x1151b328u));
  /* 11512ceb push 1 */
  push32((uint32_t)(0x1u));
  /* 11512ced push 0x1151b588 */
  push32((uint32_t)(0x1151b588u));
  /* 11512cf2 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512cf7 push ebp */
  push32((uint32_t)(EBP));
  /* 11512cf8 call edi */
  call_ind((uint32_t)(EDI), 0x11512cfau);
  /* 11512cfa push esi */
  push32((uint32_t)(ESI));
  /* 11512cfb push ebp */
  push32((uint32_t)(EBP));
  /* 11512cfc call ebx */
  call_ind((uint32_t)(EBX), 0x11512cfeu);
  /* 11512cfe push esi */
  push32((uint32_t)(ESI));
  /* 11512cff push esi */
  push32((uint32_t)(ESI));
  /* 11512d00 push 0x1151b368 */
  push32((uint32_t)(0x1151b368u));
  /* 11512d05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512d07 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11512d0du);
  /* 11512d0d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512d10 push esi */
  push32((uint32_t)(ESI));
  /* 11512d11 push 0x1151b330 */
  push32((uint32_t)(0x1151b330u));
  /* 11512d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512d18 push 0x1151b570 */
  push32((uint32_t)(0x1151b570u));
  /* 11512d1d push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512d22 push ebp */
  push32((uint32_t)(EBP));
  /* 11512d23 call edi */
  call_ind((uint32_t)(EDI), 0x11512d25u);
  /* 11512d25 push esi */
  push32((uint32_t)(ESI));
  /* 11512d26 push ebp */
  push32((uint32_t)(EBP));
  /* 11512d27 call ebx */
  call_ind((uint32_t)(EBX), 0x11512d29u);
  /* 11512d29 push esi */
  push32((uint32_t)(ESI));
  /* 11512d2a push esi */
  push32((uint32_t)(ESI));
  /* 11512d2b push 0x1151b370 */
  push32((uint32_t)(0x1151b370u));
  /* 11512d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11512d32 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11512d38u);
  /* 11512d38 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11512d3d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512d40 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11512d46 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11512d49 mov eax, dword ptr [0x1151b2f8] */
  EAX = (r32((uint32_t)(0x1151b2f8)));
  /* 11512d4e lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 11512d51 cmp dword ptr [0x1151b148], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512d57 jl 0x11512c92 */
  if ((C.sf!=C.of)) goto L_11512c92;
L_11512d5d:;
  /* 11512d5d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512d5f mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 11512d65 jle 0x11512dd4 */
  if ((C.zf||C.sf!=C.of)) goto L_11512dd4;
L_11512d67:;
  /* 11512d67 push esi */
  push32((uint32_t)(ESI));
  /* 11512d68 push 0x1151b2a8 */
  push32((uint32_t)(0x1151b2a8u));
  /* 11512d6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11512d6f push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 11512d74 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512d79 push ebp */
  push32((uint32_t)(EBP));
  /* 11512d7a call edi */
  call_ind((uint32_t)(EDI), 0x11512d7cu);
  /* 11512d7c push esi */
  push32((uint32_t)(ESI));
  /* 11512d7d push 0x1151b420 */
  push32((uint32_t)(0x1151b420u));
  /* 11512d82 push 3 */
  push32((uint32_t)(0x3u));
  /* 11512d84 push 0x1151b3b0 */
  push32((uint32_t)(0x1151b3b0u));
  /* 11512d89 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512d8e push ebp */
  push32((uint32_t)(EBP));
  /* 11512d8f call edi */
  call_ind((uint32_t)(EDI), 0x11512d91u);
  /* 11512d91 push esi */
  push32((uint32_t)(ESI));
  /* 11512d92 push 0x1151b328 */
  push32((uint32_t)(0x1151b328u));
  /* 11512d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11512d99 push 0x1151b138 */
  push32((uint32_t)(0x1151b138u));
  /* 11512d9e push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512da3 push ebp */
  push32((uint32_t)(EBP));
  /* 11512da4 call edi */
  call_ind((uint32_t)(EDI), 0x11512da6u);
  /* 11512da6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512da9 push esi */
  push32((uint32_t)(ESI));
  /* 11512daa push 0x1151b330 */
  push32((uint32_t)(0x1151b330u));
  /* 11512daf push 2 */
  push32((uint32_t)(0x2u));
  /* 11512db1 push 0x1151b140 */
  push32((uint32_t)(0x1151b140u));
  /* 11512db6 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512dbb push ebp */
  push32((uint32_t)(EBP));
  /* 11512dbc call edi */
  call_ind((uint32_t)(EDI), 0x11512dbeu);
  /* 11512dbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512dc1 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11512dc7 mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 11512dcc cmp eax, dword ptr [0x1151b2f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b2f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512dd2 jl 0x11512d67 */
  if ((C.sf!=C.of)) goto L_11512d67;
L_11512dd4:;
  /* 11512dd4 push esi */
  push32((uint32_t)(ESI));
  /* 11512dd5 push 0x1151b3c8 */
  push32((uint32_t)(0x1151b3c8u));
  /* 11512dda push 6 */
  push32((uint32_t)(0x6u));
  /* 11512ddc push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11512de1 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512de6 push ebp */
  push32((uint32_t)(EBP));
  /* 11512de7 call edi */
  call_ind((uint32_t)(EDI), 0x11512de9u);
  /* 11512de9 push esi */
  push32((uint32_t)(ESI));
  /* 11512dea push 0x1151b248 */
  push32((uint32_t)(0x1151b248u));
  /* 11512def push 6 */
  push32((uint32_t)(0x6u));
  /* 11512df1 push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11512df6 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512dfb push ebp */
  push32((uint32_t)(EBP));
  /* 11512dfc call edi */
  call_ind((uint32_t)(EDI), 0x11512dfeu);
  /* 11512dfe push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11512e03 push ebp */
  push32((uint32_t)(EBP));
  /* 11512e04 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512e0au);
  /* 11512e0a push esi */
  push32((uint32_t)(ESI));
  /* 11512e0b push 0x1151b3d8 */
  push32((uint32_t)(0x1151b3d8u));
  /* 11512e10 push 6 */
  push32((uint32_t)(0x6u));
  /* 11512e12 push 0x1151b3a8 */
  push32((uint32_t)(0x1151b3a8u));
  /* 11512e17 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512e1c push ebp */
  push32((uint32_t)(EBP));
  /* 11512e1d call edi */
  call_ind((uint32_t)(EDI), 0x11512e1fu);
  /* 11512e1f add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512e22 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 11512e27 push ebp */
  push32((uint32_t)(EBP));
  /* 11512e28 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512e2eu);
  /* 11512e2e push esi */
  push32((uint32_t)(ESI));
  /* 11512e2f push 0x1151b258 */
  push32((uint32_t)(0x1151b258u));
  /* 11512e34 push 6 */
  push32((uint32_t)(0x6u));
  /* 11512e36 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11512e3b push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11512e41 call edi */
  call_ind((uint32_t)(EDI), 0x11512e43u);
  /* 11512e43 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11512e48 push ebp */
  push32((uint32_t)(EBP));
  /* 11512e49 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512e4fu);
  /* 11512e4f push esi */
  push32((uint32_t)(ESI));
  /* 11512e50 push 0x1151b3e8 */
  push32((uint32_t)(0x1151b3e8u));
  /* 11512e55 push 6 */
  push32((uint32_t)(0x6u));
  /* 11512e57 push 0x1151b660 */
  push32((uint32_t)(0x1151b660u));
  /* 11512e5c push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512e61 push ebp */
  push32((uint32_t)(EBP));
  /* 11512e62 call edi */
  call_ind((uint32_t)(EDI), 0x11512e64u);
  /* 11512e64 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512e67 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 11512e6c push ebp */
  push32((uint32_t)(EBP));
  /* 11512e6d call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512e73u);
  /* 11512e73 push esi */
  push32((uint32_t)(ESI));
  /* 11512e74 push 0x1151b270 */
  push32((uint32_t)(0x1151b270u));
  /* 11512e79 push 6 */
  push32((uint32_t)(0x6u));
  /* 11512e7b push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 11512e80 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512e85 push ebp */
  push32((uint32_t)(EBP));
  /* 11512e86 call edi */
  call_ind((uint32_t)(EDI), 0x11512e88u);
  /* 11512e88 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11512e8d push ebp */
  push32((uint32_t)(EBP));
  /* 11512e8e call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512e94u);
  /* 11512e94 push esi */
  push32((uint32_t)(ESI));
  /* 11512e95 push 0x1151b3f0 */
  push32((uint32_t)(0x1151b3f0u));
  /* 11512e9a push 6 */
  push32((uint32_t)(0x6u));
  /* 11512e9c push 0x1151b568 */
  push32((uint32_t)(0x1151b568u));
  /* 11512ea1 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512ea6 push ebp */
  push32((uint32_t)(EBP));
  /* 11512ea7 call edi */
  call_ind((uint32_t)(EDI), 0x11512ea9u);
  /* 11512ea9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512eac push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 11512eb1 push ebp */
  push32((uint32_t)(EBP));
  /* 11512eb2 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512eb8u);
  /* 11512eb8 push esi */
  push32((uint32_t)(ESI));
  /* 11512eb9 push 0x1151b288 */
  push32((uint32_t)(0x1151b288u));
  /* 11512ebe push 6 */
  push32((uint32_t)(0x6u));
  /* 11512ec0 push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 11512ec5 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512eca push ebp */
  push32((uint32_t)(EBP));
  /* 11512ecb call edi */
  call_ind((uint32_t)(EDI), 0x11512ecdu);
  /* 11512ecd push 0x1151b3a0 */
  push32((uint32_t)(0x1151b3a0u));
  /* 11512ed2 push ebp */
  push32((uint32_t)(EBP));
  /* 11512ed3 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512ed9u);
  /* 11512ed9 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512edc cmp dword ptr [0x1151b340], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b340))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512ee2 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 11512ee8 jle 0x11512f16 */
  if ((C.zf||C.sf!=C.of)) goto L_11512f16;
L_11512eea:;
  /* 11512eea push esi */
  push32((uint32_t)(ESI));
  /* 11512eeb push 0x1151b110 */
  push32((uint32_t)(0x1151b110u));
  /* 11512ef0 push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 11512ef5 push 0x1151b3a0 */
  push32((uint32_t)(0x1151b3a0u));
  /* 11512efa call dword ptr [0x115190ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190ec))), 0x11512f00u);
  /* 11512f00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512f03 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11512f09 mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 11512f0e cmp eax, dword ptr [0x1151b340] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b340))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512f14 jl 0x11512eea */
  if ((C.sf!=C.of)) goto L_11512eea;
L_11512f16:;
  /* 11512f16 push esi */
  push32((uint32_t)(ESI));
  /* 11512f17 push 0x1151b3f8 */
  push32((uint32_t)(0x1151b3f8u));
  /* 11512f1c push 6 */
  push32((uint32_t)(0x6u));
  /* 11512f1e push 0x1151b360 */
  push32((uint32_t)(0x1151b360u));
  /* 11512f23 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512f28 push ebp */
  push32((uint32_t)(EBP));
  /* 11512f29 call edi */
  call_ind((uint32_t)(EDI), 0x11512f2bu);
  /* 11512f2b push 0x1151b1a0 */
  push32((uint32_t)(0x1151b1a0u));
  /* 11512f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11512f31 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512f37u);
  /* 11512f37 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512f3a cmp dword ptr [0x1151b340], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b340))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512f40 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 11512f46 jle 0x11512f74 */
  if ((C.zf||C.sf!=C.of)) goto L_11512f74;
L_11512f48:;
  /* 11512f48 push esi */
  push32((uint32_t)(ESI));
  /* 11512f49 push 0x1151b2f0 */
  push32((uint32_t)(0x1151b2f0u));
  /* 11512f4e push 0x1151b508 */
  push32((uint32_t)(0x1151b508u));
  /* 11512f53 push 0x1151b1a0 */
  push32((uint32_t)(0x1151b1a0u));
  /* 11512f58 call dword ptr [0x115190ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190ec))), 0x11512f5eu);
  /* 11512f5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512f61 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11512f67 mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 11512f6c cmp eax, dword ptr [0x1151b340] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b340))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11512f72 jl 0x11512f48 */
  if ((C.sf!=C.of)) goto L_11512f48;
L_11512f74:;
  /* 11512f74 push esi */
  push32((uint32_t)(ESI));
  /* 11512f75 push 0x1151b408 */
  push32((uint32_t)(0x1151b408u));
  /* 11512f7a push 6 */
  push32((uint32_t)(0x6u));
  /* 11512f7c push 0x1151b2e0 */
  push32((uint32_t)(0x1151b2e0u));
  /* 11512f81 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512f86 push ebp */
  push32((uint32_t)(EBP));
  /* 11512f87 call edi */
  call_ind((uint32_t)(EDI), 0x11512f89u);
  /* 11512f89 push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 11512f8e push ebp */
  push32((uint32_t)(EBP));
  /* 11512f8f call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512f95u);
  /* 11512f95 push esi */
  push32((uint32_t)(ESI));
  /* 11512f96 push 0x1151b298 */
  push32((uint32_t)(0x1151b298u));
  /* 11512f9b push 6 */
  push32((uint32_t)(0x6u));
  /* 11512f9d push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 11512fa2 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512fa7 push ebp */
  push32((uint32_t)(EBP));
  /* 11512fa8 call edi */
  call_ind((uint32_t)(EDI), 0x11512faau);
  /* 11512faa push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11512faf push ebp */
  push32((uint32_t)(EBP));
  /* 11512fb0 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512fb6u);
  /* 11512fb6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512fb9 push esi */
  push32((uint32_t)(ESI));
  /* 11512fba push 0x1151b410 */
  push32((uint32_t)(0x1151b410u));
  /* 11512fbf push 6 */
  push32((uint32_t)(0x6u));
  /* 11512fc1 push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 11512fc6 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512fcb push ebp */
  push32((uint32_t)(EBP));
  /* 11512fcc call edi */
  call_ind((uint32_t)(EDI), 0x11512fceu);
  /* 11512fce push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 11512fd3 push ebp */
  push32((uint32_t)(EBP));
  /* 11512fd4 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512fdau);
  /* 11512fda push esi */
  push32((uint32_t)(ESI));
  /* 11512fdb push 0x1151b3e0 */
  push32((uint32_t)(0x1151b3e0u));
  /* 11512fe0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11512fe2 push 0x1151b3b8 */
  push32((uint32_t)(0x1151b3b8u));
  /* 11512fe7 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11512fec push ebp */
  push32((uint32_t)(EBP));
  /* 11512fed call edi */
  call_ind((uint32_t)(EDI), 0x11512fefu);
  /* 11512fef push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 11512ff4 push ebp */
  push32((uint32_t)(EBP));
  /* 11512ff5 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11512ffbu);
  /* 11512ffb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11512ffe push esi */
  push32((uint32_t)(ESI));
  /* 11512fff push 0x1151b388 */
  push32((uint32_t)(0x1151b388u));
  /* 11513004 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513006 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 1151300b push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513010 push ebp */
  push32((uint32_t)(EBP));
  /* 11513011 call edi */
  call_ind((uint32_t)(EDI), 0x11513013u);
  /* 11513013 push esi */
  push32((uint32_t)(ESI));
  /* 11513014 push 0x1151b2a0 */
  push32((uint32_t)(0x1151b2a0u));
  /* 11513019 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151301b push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513020 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513025 push ebp */
  push32((uint32_t)(EBP));
  /* 11513026 call edi */
  call_ind((uint32_t)(EDI), 0x11513028u);
  /* 11513028 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 1151302d push ebp */
  push32((uint32_t)(EBP));
  /* 1151302e call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513034u);
  /* 11513034 push esi */
  push32((uint32_t)(ESI));
  /* 11513035 push 0x1151b4c8 */
  push32((uint32_t)(0x1151b4c8u));
  /* 1151303a push 6 */
  push32((uint32_t)(0x6u));
  /* 1151303c push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513041 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513046 push ebp */
  push32((uint32_t)(EBP));
  /* 11513047 call edi */
  call_ind((uint32_t)(EDI), 0x11513049u);
  /* 11513049 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151304c push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513051 push ebp */
  push32((uint32_t)(EBP));
  /* 11513052 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513058u);
  /* 11513058 push esi */
  push32((uint32_t)(ESI));
  /* 11513059 push 0x1151b4d0 */
  push32((uint32_t)(0x1151b4d0u));
  /* 1151305e push 6 */
  push32((uint32_t)(0x6u));
  /* 11513060 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513065 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151306a push ebp */
  push32((uint32_t)(EBP));
  /* 1151306b call edi */
  call_ind((uint32_t)(EDI), 0x1151306du);
  /* 1151306d push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513072 push ebp */
  push32((uint32_t)(EBP));
  /* 11513073 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513079u);
  /* 11513079 push esi */
  push32((uint32_t)(ESI));
  /* 1151307a push 0x1151b4d8 */
  push32((uint32_t)(0x1151b4d8u));
  /* 1151307f push 6 */
  push32((uint32_t)(0x6u));
  /* 11513081 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513086 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151308b push ebp */
  push32((uint32_t)(EBP));
  /* 1151308c call edi */
  call_ind((uint32_t)(EDI), 0x1151308eu);
  /* 1151308e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513091 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513096 push ebp */
  push32((uint32_t)(EBP));
  /* 11513097 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151309du);
  /* 1151309d push esi */
  push32((uint32_t)(ESI));
  /* 1151309e push 0x1151b480 */
  push32((uint32_t)(0x1151b480u));
  /* 115130a3 push 6 */
  push32((uint32_t)(0x6u));
  /* 115130a5 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115130aa push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115130af push ebp */
  push32((uint32_t)(EBP));
  /* 115130b0 call edi */
  call_ind((uint32_t)(EDI), 0x115130b2u);
  /* 115130b2 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 115130b7 push ebp */
  push32((uint32_t)(EBP));
  /* 115130b8 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115130beu);
  /* 115130be push esi */
  push32((uint32_t)(ESI));
  /* 115130bf push 0x1151b488 */
  push32((uint32_t)(0x1151b488u));
  /* 115130c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 115130c6 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115130cb push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115130d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115130d1 call edi */
  call_ind((uint32_t)(EDI), 0x115130d3u);
  /* 115130d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115130d6 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 115130db push ebp */
  push32((uint32_t)(EBP));
  /* 115130dc call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115130e2u);
  /* 115130e2 push esi */
  push32((uint32_t)(ESI));
  /* 115130e3 push 0x1151b490 */
  push32((uint32_t)(0x1151b490u));
  /* 115130e8 push 6 */
  push32((uint32_t)(0x6u));
  /* 115130ea push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115130ef push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115130f4 push ebp */
  push32((uint32_t)(EBP));
  /* 115130f5 call edi */
  call_ind((uint32_t)(EDI), 0x115130f7u);
  /* 115130f7 push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 115130fc push ebp */
  push32((uint32_t)(EBP));
  /* 115130fd call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513103u);
  /* 11513103 push esi */
  push32((uint32_t)(ESI));
  /* 11513104 push 0x1151b498 */
  push32((uint32_t)(0x1151b498u));
  /* 11513109 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151310b push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513110 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513115 push ebp */
  push32((uint32_t)(EBP));
  /* 11513116 call edi */
  call_ind((uint32_t)(EDI), 0x11513118u);
  /* 11513118 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151311b push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513120 push ebp */
  push32((uint32_t)(EBP));
  /* 11513121 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513127u);
  /* 11513127 push esi */
  push32((uint32_t)(ESI));
  /* 11513128 push 0x1151b4a0 */
  push32((uint32_t)(0x1151b4a0u));
  /* 1151312d push 6 */
  push32((uint32_t)(0x6u));
  /* 1151312f push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513134 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513139 push ebp */
  push32((uint32_t)(EBP));
  /* 1151313a call edi */
  call_ind((uint32_t)(EDI), 0x1151313cu);
  /* 1151313c push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513141 push ebp */
  push32((uint32_t)(EBP));
  /* 11513142 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513148u);
  /* 11513148 push esi */
  push32((uint32_t)(ESI));
  /* 11513149 push 0x1151b4a8 */
  push32((uint32_t)(0x1151b4a8u));
  /* 1151314e push 6 */
  push32((uint32_t)(0x6u));
  /* 11513150 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513155 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151315a push ebp */
  push32((uint32_t)(EBP));
  /* 1151315b call edi */
  call_ind((uint32_t)(EDI), 0x1151315du);
  /* 1151315d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513160 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 11513165 push ebp */
  push32((uint32_t)(EBP));
  /* 11513166 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151316cu);
  /* 1151316c push esi */
  push32((uint32_t)(ESI));
  /* 1151316d push 0x1151b4b0 */
  push32((uint32_t)(0x1151b4b0u));
  /* 11513172 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513174 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513179 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151317e push ebp */
  push32((uint32_t)(EBP));
  /* 1151317f call edi */
  call_ind((uint32_t)(EDI), 0x11513181u);
  /* 11513181 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 11513186 push ebp */
  push32((uint32_t)(EBP));
  /* 11513187 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151318du);
  /* 1151318d push esi */
  push32((uint32_t)(ESI));
  /* 1151318e push 0x1151b4b8 */
  push32((uint32_t)(0x1151b4b8u));
  /* 11513193 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513195 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 1151319a push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151319f push ebp */
  push32((uint32_t)(EBP));
  /* 115131a0 call edi */
  call_ind((uint32_t)(EDI), 0x115131a2u);
  /* 115131a2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115131a5 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 115131aa push ebp */
  push32((uint32_t)(EBP));
  /* 115131ab call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115131b1u);
  /* 115131b1 push esi */
  push32((uint32_t)(ESI));
  /* 115131b2 push 0x1151b4c0 */
  push32((uint32_t)(0x1151b4c0u));
  /* 115131b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 115131b9 push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115131be push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115131c3 push ebp */
  push32((uint32_t)(EBP));
  /* 115131c4 call edi */
  call_ind((uint32_t)(EDI), 0x115131c6u);
  /* 115131c6 push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 115131cb push ebp */
  push32((uint32_t)(EBP));
  /* 115131cc call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115131d2u);
  /* 115131d2 push esi */
  push32((uint32_t)(ESI));
  /* 115131d3 push 0x1151b478 */
  push32((uint32_t)(0x1151b478u));
  /* 115131d8 push 6 */
  push32((uint32_t)(0x6u));
  /* 115131da push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 115131df push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115131e4 push ebp */
  push32((uint32_t)(EBP));
  /* 115131e5 call edi */
  call_ind((uint32_t)(EDI), 0x115131e7u);
  /* 115131e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115131ea push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 115131ef push ebp */
  push32((uint32_t)(EBP));
  /* 115131f0 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115131f6u);
  /* 115131f6 push esi */
  push32((uint32_t)(ESI));
  /* 115131f7 push 0x1151b418 */
  push32((uint32_t)(0x1151b418u));
  /* 115131fc push 6 */
  push32((uint32_t)(0x6u));
  /* 115131fe push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513203 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513208 push ebp */
  push32((uint32_t)(EBP));
  /* 11513209 call edi */
  call_ind((uint32_t)(EDI), 0x1151320bu);
  /* 1151320b push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 11513210 push ebp */
  push32((uint32_t)(EBP));
  /* 11513211 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513217u);
  /* 11513217 push esi */
  push32((uint32_t)(ESI));
  /* 11513218 push 0x1151b5d0 */
  push32((uint32_t)(0x1151b5d0u));
  /* 1151321d push 6 */
  push32((uint32_t)(0x6u));
  /* 1151321f push 0x1151b598 */
  push32((uint32_t)(0x1151b598u));
  /* 11513224 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513229 push ebp */
  push32((uint32_t)(EBP));
  /* 1151322a call edi */
  call_ind((uint32_t)(EDI), 0x1151322cu);
  /* 1151322c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151322f push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 11513234 push ebp */
  push32((uint32_t)(EBP));
  /* 11513235 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151323bu);
  /* 1151323b pop ecx */
  ECX = (pop32());
  /* 1151323c mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 11513242 pop ecx */
  ECX = (pop32());
L_11513243:;
  /* 11513243 push esi */
  push32((uint32_t)(ESI));
  /* 11513244 push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 11513249 push esi */
  push32((uint32_t)(ESI));
  /* 1151324a push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 1151324f push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11513254 push ebp */
  push32((uint32_t)(EBP));
  /* 11513255 call edi */
  call_ind((uint32_t)(EDI), 0x11513257u);
  /* 11513257 push 0x1151b1f8 */
  push32((uint32_t)(0x1151b1f8u));
  /* 1151325c push ebp */
  push32((uint32_t)(EBP));
  /* 1151325d call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513263u);
  /* 11513263 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513266 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 1151326c cmp dword ptr [0x1151b148], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513273 jl 0x11513243 */
  if ((C.sf!=C.of)) goto L_11513243;
  /* 11513275 push esi */
  push32((uint32_t)(ESI));
  /* 11513276 push 0x1151b1f8 */
  push32((uint32_t)(0x1151b1f8u));
  /* 1151327b call ebx */
  call_ind((uint32_t)(EBX), 0x1151327du);
  /* 1151327d push esi */
  push32((uint32_t)(ESI));
  /* 1151327e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11513280 push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 11513285 push esi */
  push32((uint32_t)(ESI));
  /* 11513286 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x1151328cu);
  /* 1151328c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151328f mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
L_11513295:;
  /* 11513295 push esi */
  push32((uint32_t)(ESI));
  /* 11513296 push 0x1151b458 */
  push32((uint32_t)(0x1151b458u));
  /* 1151329b push esi */
  push32((uint32_t)(ESI));
  /* 1151329c push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 115132a1 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115132a6 push ebp */
  push32((uint32_t)(EBP));
  /* 115132a7 call edi */
  call_ind((uint32_t)(EDI), 0x115132a9u);
  /* 115132a9 push 0x1151b200 */
  push32((uint32_t)(0x1151b200u));
  /* 115132ae push ebp */
  push32((uint32_t)(EBP));
  /* 115132af call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115132b5u);
  /* 115132b5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115132b8 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 115132be cmp dword ptr [0x1151b148], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115132c5 jl 0x11513295 */
  if ((C.sf!=C.of)) goto L_11513295;
  /* 115132c7 push esi */
  push32((uint32_t)(ESI));
  /* 115132c8 push 0x1151b200 */
  push32((uint32_t)(0x1151b200u));
  /* 115132cd call ebx */
  call_ind((uint32_t)(EBX), 0x115132cfu);
  /* 115132cf push esi */
  push32((uint32_t)(ESI));
  /* 115132d0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115132d2 push 0x1151b458 */
  push32((uint32_t)(0x1151b458u));
  /* 115132d7 push esi */
  push32((uint32_t)(ESI));
  /* 115132d8 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x115132deu);
  /* 115132de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115132e1 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
L_115132e7:;
  /* 115132e7 push esi */
  push32((uint32_t)(ESI));
  /* 115132e8 push 0x1151b460 */
  push32((uint32_t)(0x1151b460u));
  /* 115132ed push esi */
  push32((uint32_t)(ESI));
  /* 115132ee push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 115132f3 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115132f8 push ebp */
  push32((uint32_t)(EBP));
  /* 115132f9 call edi */
  call_ind((uint32_t)(EDI), 0x115132fbu);
  /* 115132fb push 0x1151b208 */
  push32((uint32_t)(0x1151b208u));
  /* 11513300 push ebp */
  push32((uint32_t)(EBP));
  /* 11513301 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513307u);
  /* 11513307 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151330a inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11513310 cmp dword ptr [0x1151b148], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513317 jl 0x115132e7 */
  if ((C.sf!=C.of)) goto L_115132e7;
  /* 11513319 push esi */
  push32((uint32_t)(ESI));
  /* 1151331a push 0x1151b208 */
  push32((uint32_t)(0x1151b208u));
  /* 1151331f call ebx */
  call_ind((uint32_t)(EBX), 0x11513321u);
  /* 11513321 push esi */
  push32((uint32_t)(ESI));
  /* 11513322 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11513324 push 0x1151b460 */
  push32((uint32_t)(0x1151b460u));
  /* 11513329 push esi */
  push32((uint32_t)(ESI));
  /* 1151332a call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513330u);
  /* 11513330 mov edi, dword ptr [0x115190d8] */
  EDI = (r32((uint32_t)(0x115190d8)));
  /* 11513336 push esi */
  push32((uint32_t)(ESI));
  /* 11513337 push 4 */
  push32((uint32_t)(0x4u));
  /* 11513339 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151333b call edi */
  call_ind((uint32_t)(EDI), 0x1151333du);
  /* 1151333d push esi */
  push32((uint32_t)(ESI));
  /* 1151333e push 1 */
  push32((uint32_t)(0x1u));
  /* 11513340 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513342 call edi */
  call_ind((uint32_t)(EDI), 0x11513344u);
  /* 11513344 push dword ptr [0x1151b168] */
  push32((uint32_t)(r32((uint32_t)(0x1151b168))));
  /* 1151334a mov edi, dword ptr [0x11519100] */
  EDI = (r32((uint32_t)(0x11519100)));
  /* 11513350 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513352 push esi */
  push32((uint32_t)(ESI));
  /* 11513353 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513355 push dword ptr [0x1151b30c] */
  push32((uint32_t)(r32((uint32_t)(0x1151b30c))));
  /* 1151335b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151335d call edi */
  call_ind((uint32_t)(EDI), 0x1151335fu);
  /* 1151335f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513362 push dword ptr [0x1151b168] */
  push32((uint32_t)(r32((uint32_t)(0x1151b168))));
  /* 11513368 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151336a push esi */
  push32((uint32_t)(ESI));
  /* 1151336b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151336d push dword ptr [0x1151b308] */
  push32((uint32_t)(r32((uint32_t)(0x1151b308))));
  /* 11513373 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513375 call edi */
  call_ind((uint32_t)(EDI), 0x11513377u);
  /* 11513377 push dword ptr [0x1151b168] */
  push32((uint32_t)(r32((uint32_t)(0x1151b168))));
  /* 1151337d push 1 */
  push32((uint32_t)(0x1u));
  /* 1151337f push esi */
  push32((uint32_t)(ESI));
  /* 11513380 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513382 push dword ptr [0x1151b398] */
  push32((uint32_t)(r32((uint32_t)(0x1151b398))));
  /* 11513388 push 3 */
  push32((uint32_t)(0x3u));
  /* 1151338a call edi */
  call_ind((uint32_t)(EDI), 0x1151338cu);
  /* 1151338c push dword ptr [0x1151b168] */
  push32((uint32_t)(r32((uint32_t)(0x1151b168))));
  /* 11513392 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513394 push esi */
  push32((uint32_t)(ESI));
  /* 11513395 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513397 push dword ptr [0x1151b398] */
  push32((uint32_t)(r32((uint32_t)(0x1151b398))));
  /* 1151339d push 4 */
  push32((uint32_t)(0x4u));
  /* 1151339f call edi */
  call_ind((uint32_t)(EDI), 0x115133a1u);
  /* 115133a1 mov edi, dword ptr [0x115190f8] */
  EDI = (r32((uint32_t)(0x115190f8)));
  /* 115133a7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115133aa push 3 */
  push32((uint32_t)(0x3u));
  /* 115133ac push 1 */
  push32((uint32_t)(0x1u));
  /* 115133ae push 0x1151b378 */
  push32((uint32_t)(0x1151b378u));
  /* 115133b3 call edi */
  call_ind((uint32_t)(EDI), 0x115133b5u);
  /* 115133b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 115133b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115133b9 push 0x1151b380 */
  push32((uint32_t)(0x1151b380u));
  /* 115133be call edi */
  call_ind((uint32_t)(EDI), 0x115133c0u);
  /* 115133c0 push esi */
  push32((uint32_t)(ESI));
  /* 115133c1 push 0x1151b348 */
  push32((uint32_t)(0x1151b348u));
  /* 115133c6 call ebx */
  call_ind((uint32_t)(EBX), 0x115133c8u);
  /* 115133c8 mov edi, dword ptr [0x115190b0] */
  EDI = (r32((uint32_t)(0x115190b0)));
  /* 115133ce push esi */
  push32((uint32_t)(ESI));
  /* 115133cf call edi */
  call_ind((uint32_t)(EDI), 0x115133d1u);
  /* 115133d1 push esi */
  push32((uint32_t)(ESI));
  /* 115133d2 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x115133d8u);
  /* 115133d8 push esi */
  push32((uint32_t)(ESI));
  /* 115133d9 push 0x1151b300 */
  push32((uint32_t)(0x1151b300u));
  /* 115133de call ebx */
  call_ind((uint32_t)(EBX), 0x115133e0u);
  /* 115133e0 push esi */
  push32((uint32_t)(ESI));
  /* 115133e1 call edi */
  call_ind((uint32_t)(EDI), 0x115133e3u);
  /* 115133e3 push esi */
  push32((uint32_t)(ESI));
  /* 115133e4 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x115133eau);
  /* 115133ea push 0x1151a34c */
  push32((uint32_t)(0x1151a34cu));
  /* 115133ef call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x115133f5u);
  /* 115133f5 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 115133fb push esi */
  push32((uint32_t)(ESI));
  /* 115133fc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115133fe call edi */
  call_ind((uint32_t)(EDI), 0x11513400u);
  /* 11513400 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513403 jmp 0x1151340b */
  goto L_1151340b;
L_11513405:;
  /* 11513405 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_1151340b:;
  /* 1151340b push 2 */
  push32((uint32_t)(0x2u));
  /* 1151340d call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11513413u);
  /* 11513413 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513415 pop ecx */
  ECX = (pop32());
  /* 11513416 je 0x115134f0 */
  if (C.zf) goto L_115134f0;
  /* 1151341c mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11513421 mov ecx, dword ptr [0x1151b168] */
  ECX = (r32((uint32_t)(0x1151b168)));
  /* 11513427 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11513429 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151342b mov dword ptr [0x1151b344], eax */
  w32((uint32_t)(0x1151b344), (EAX));
  /* 11513430 jle 0x1151343c */
  if ((C.zf||C.sf!=C.of)) goto L_1151343c;
  /* 11513432 imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11513435 mov dword ptr [0x1151b320], eax */
  w32((uint32_t)(0x1151b320), (EAX));
  /* 1151343a jmp 0x11513446 */
  goto L_11513446;
L_1151343c:;
  /* 1151343c add dword ptr [0x1151b320], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(0x1151b320))),_b=(0x3e8u),_r=_a+_b; w32((uint32_t)(0x1151b320), (_r)); fl_add(_a,_b,_r,32); }
L_11513446:;
  /* 11513446 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513448 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1151344a call edi */
  call_ind((uint32_t)(EDI), 0x1151344cu);
  /* 1151344c push 3 */
  push32((uint32_t)(0x3u));
  /* 1151344e push 5 */
  push32((uint32_t)(0x5u));
  /* 11513450 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11513456u);
  /* 11513456 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513459 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151345e jge 0x11513472 */
  if ((C.sf==C.of)) goto L_11513472;
  /* 11513460 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11513465 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513467 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513469 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x1151346fu);
  /* 1151346f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513472:;
  /* 11513472 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513474 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513476 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x1151347cu);
  /* 1151347c pop ecx */
  ECX = (pop32());
  /* 1151347d cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513482 pop ecx */
  ECX = (pop32());
  /* 11513483 jge 0x11513497 */
  if ((C.sf==C.of)) goto L_11513497;
  /* 11513485 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 1151348a push 1 */
  push32((uint32_t)(0x1u));
  /* 1151348c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151348e call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11513494u);
  /* 11513494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513497:;
  /* 11513497 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513499 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151349b call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x115134a1u);
  /* 115134a1 pop ecx */
  ECX = (pop32());
  /* 115134a2 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115134a7 pop ecx */
  ECX = (pop32());
  /* 115134a8 jge 0x115134bc */
  if ((C.sf==C.of)) goto L_115134bc;
  /* 115134aa push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 115134af push 3 */
  push32((uint32_t)(0x3u));
  /* 115134b1 push 6 */
  push32((uint32_t)(0x6u));
  /* 115134b3 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x115134b9u);
  /* 115134b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115134bc:;
  /* 115134bc push 1 */
  push32((uint32_t)(0x1u));
  /* 115134be push 6 */
  push32((uint32_t)(0x6u));
  /* 115134c0 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x115134c6u);
  /* 115134c6 pop ecx */
  ECX = (pop32());
  /* 115134c7 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115134cc pop ecx */
  ECX = (pop32());
  /* 115134cd jge 0x115134e1 */
  if ((C.sf==C.of)) goto L_115134e1;
  /* 115134cf push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 115134d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115134d6 push 6 */
  push32((uint32_t)(0x6u));
  /* 115134d8 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x115134deu);
  /* 115134de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115134e1:;
  /* 115134e1 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 115134e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115134e8 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x115134eeu);
  /* 115134ee pop ecx */
  ECX = (pop32());
  /* 115134ef pop ecx */
  ECX = (pop32());
L_115134f0:;
  /* 115134f0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115134f2 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115134f8u);
  /* 115134f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115134fa pop ecx */
  ECX = (pop32());
  /* 115134fb je 0x11513524 */
  if (C.zf) goto L_11513524;
  /* 115134fd mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11513502 push 0xa */
  push32((uint32_t)(0xau));
  /* 11513504 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11513505 pop ecx */
  ECX = (pop32());
  /* 11513506 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11513508 push esi */
  push32((uint32_t)(ESI));
  /* 11513509 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1151350b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1151350e mov dword ptr [0x1151b118], edx */
  w32((uint32_t)(0x1151b118), (EDX));
  /* 11513514 call edi */
  call_ind((uint32_t)(EDI), 0x11513516u);
  /* 11513516 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513518 push 0x15 */
  push32((uint32_t)(0x15u));
L_1151351a:;
  /* 1151351a call edi */
  call_ind((uint32_t)(EDI), 0x1151351cu);
  /* 1151351c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151351f jmp 0x115135cc */
  goto L_115135cc;
L_11513524:;
  /* 11513524 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11513526 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151352cu);
  /* 1151352c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151352e pop ecx */
  ECX = (pop32());
  /* 1151352f je 0x1151354e */
  if (C.zf) goto L_1151354e;
  /* 11513531 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11513536 push esi */
  push32((uint32_t)(ESI));
  /* 11513537 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11513538 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151353a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1151353c sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1151353e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11513541 mov dword ptr [0x1151b118], eax */
  w32((uint32_t)(0x1151b118), (EAX));
  /* 11513546 call edi */
  call_ind((uint32_t)(EDI), 0x11513548u);
  /* 11513548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151354a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1151354c jmp 0x1151351a */
  goto L_1151351a;
L_1151354e:;
  /* 1151354e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11513550 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513556u);
  /* 11513556 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513558 pop ecx */
  ECX = (pop32());
  /* 11513559 je 0x1151357b */
  if (C.zf) goto L_1151357b;
  /* 1151355b mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11513560 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513562 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11513563 pop ecx */
  ECX = (pop32());
  /* 11513564 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11513566 push esi */
  push32((uint32_t)(ESI));
  /* 11513567 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11513569 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1151356c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1151356e mov dword ptr [0x1151b118], eax */
  w32((uint32_t)(0x1151b118), (EAX));
  /* 11513573 call edi */
  call_ind((uint32_t)(EDI), 0x11513575u);
  /* 11513575 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513577 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11513579 jmp 0x1151351a */
  goto L_1151351a;
L_1151357b:;
  /* 1151357b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1151357d call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513583u);
  /* 11513583 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513585 pop ecx */
  ECX = (pop32());
  /* 11513586 je 0x115135a1 */
  if (C.zf) goto L_115135a1;
  /* 11513588 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 1151358d push esi */
  push32((uint32_t)(ESI));
  /* 1151358e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1151358f sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11513591 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11513593 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11513595 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11513598 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1151359a mov dword ptr [0x1151b118], eax */
  w32((uint32_t)(0x1151b118), (EAX));
  /* 1151359f jmp 0x115135c8 */
  goto L_115135c8;
L_115135a1:;
  /* 115135a1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115135a3 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115135a9u);
  /* 115135a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115135ab pop ecx */
  ECX = (pop32());
  /* 115135ac je 0x115135cc */
  if (C.zf) goto L_115135cc;
  /* 115135ae mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 115135b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115135b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115135b6 pop ecx */
  ECX = (pop32());
  /* 115135b7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115135b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115135bb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115135bd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115135c0 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115135c3 mov dword ptr [0x1151b118], eax */
  w32((uint32_t)(0x1151b118), (EAX));
L_115135c8:;
  /* 115135c8 call edi */
  call_ind((uint32_t)(EDI), 0x115135cau);
  /* 115135ca pop ecx */
  ECX = (pop32());
  /* 115135cb pop ecx */
  ECX = (pop32());
L_115135cc:;
  /* 115135cc mov edi, 0x1151b110 */
  EDI = (0x1151b110u);
  /* 115135d1 push edi */
  push32((uint32_t)(EDI));
  /* 115135d2 push 0x1151b288 */
  push32((uint32_t)(0x1151b288u));
  /* 115135d7 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x115135ddu);
  /* 115135dd mov edx, eax */
  EDX = (EAX);
  /* 115135df push edi */
  push32((uint32_t)(EDI));
  /* 115135e0 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 115135e4 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115135eau);
  /* 115135ea mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 115135ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115135f1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115135f3 jle 0x1151360c */
  if ((C.zf||C.sf!=C.of)) goto L_1151360c;
  /* 115135f5 push esi */
  push32((uint32_t)(ESI));
  /* 115135f6 push edi */
  push32((uint32_t)(EDI));
  /* 115135f7 call ebx */
  call_ind((uint32_t)(EBX), 0x115135f9u);
  /* 115135f9 push esi */
  push32((uint32_t)(ESI));
  /* 115135fa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115135fc push 0x1151b448 */
  push32((uint32_t)(0x1151b448u));
  /* 11513601 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513603 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513609u);
  /* 11513609 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151360c:;
  /* 1151360c mov edi, 0x1151b2f0 */
  EDI = (0x1151b2f0u);
  /* 11513611 push edi */
  push32((uint32_t)(EDI));
  /* 11513612 push 0x1151b3f8 */
  push32((uint32_t)(0x1151b3f8u));
  /* 11513617 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x1151361du);
  /* 1151361d mov edx, eax */
  EDX = (EAX);
  /* 1151361f push edi */
  push32((uint32_t)(EDI));
  /* 11513620 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 11513624 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x1151362au);
  /* 1151362a mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 1151362e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513631 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513633 jle 0x1151364c */
  if ((C.zf||C.sf!=C.of)) goto L_1151364c;
  /* 11513635 push esi */
  push32((uint32_t)(ESI));
  /* 11513636 push edi */
  push32((uint32_t)(EDI));
  /* 11513637 call ebx */
  call_ind((uint32_t)(EBX), 0x11513639u);
  /* 11513639 push esi */
  push32((uint32_t)(ESI));
  /* 1151363a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1151363c push 0x1151b5a8 */
  push32((uint32_t)(0x1151b5a8u));
  /* 11513641 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513643 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513649u);
  /* 11513649 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151364c:;
  /* 1151364c push 1 */
  push32((uint32_t)(0x1u));
  /* 1151364e call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11513654u);
  /* 11513654 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513656 pop ecx */
  ECX = (pop32());
  /* 11513657 je 0x11513726 */
  if (C.zf) goto L_11513726;
  /* 1151365d mov edi, dword ptr [0x115190b8] */
  EDI = (r32((uint32_t)(0x115190b8)));
  /* 11513663 push 4 */
  push32((uint32_t)(0x4u));
  /* 11513665 call edi */
  call_ind((uint32_t)(EDI), 0x11513667u);
  /* 11513667 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513669 pop ecx */
  ECX = (pop32());
  /* 1151366a je 0x11513726 */
  if (C.zf) goto L_11513726;
  /* 11513670 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513672 call edi */
  call_ind((uint32_t)(EDI), 0x11513674u);
  /* 11513674 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513676 pop ecx */
  ECX = (pop32());
  /* 11513677 je 0x11513726 */
  if (C.zf) goto L_11513726;
  /* 1151367d push esi */
  push32((uint32_t)(ESI));
  /* 1151367e push 0x1151b2a8 */
  push32((uint32_t)(0x1151b2a8u));
  /* 11513683 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513685 push 0x1151b390 */
  push32((uint32_t)(0x1151b390u));
  /* 1151368a push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151368f push ebp */
  push32((uint32_t)(EBP));
  /* 11513690 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x11513696u);
  /* 11513696 mov edi, dword ptr [0x115190c4] */
  EDI = (r32((uint32_t)(0x115190c4)));
  /* 1151369c push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 115136a1 push ebp */
  push32((uint32_t)(EBP));
  /* 115136a2 call edi */
  call_ind((uint32_t)(EDI), 0x115136a4u);
  /* 115136a4 push esi */
  push32((uint32_t)(ESI));
  /* 115136a5 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 115136aa call ebx */
  call_ind((uint32_t)(EBX), 0x115136acu);
  /* 115136ac push esi */
  push32((uint32_t)(ESI));
  /* 115136ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115136af push 0x1151b520 */
  push32((uint32_t)(0x1151b520u));
  /* 115136b4 push 6 */
  push32((uint32_t)(0x6u));
  /* 115136b6 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x115136bcu);
  /* 115136bc add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115136bf mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
L_115136c5:;
  /* 115136c5 push esi */
  push32((uint32_t)(ESI));
  /* 115136c6 push 0x1151b2a8 */
  push32((uint32_t)(0x1151b2a8u));
  /* 115136cb push 6 */
  push32((uint32_t)(0x6u));
  /* 115136cd push 0x1151b1e8 */
  push32((uint32_t)(0x1151b1e8u));
  /* 115136d2 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115136d7 push ebp */
  push32((uint32_t)(EBP));
  /* 115136d8 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x115136deu);
  /* 115136de push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 115136e3 push ebp */
  push32((uint32_t)(EBP));
  /* 115136e4 call edi */
  call_ind((uint32_t)(EDI), 0x115136e6u);
  /* 115136e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115136e9 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 115136ef cmp dword ptr [0x1151b148], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115136f6 jl 0x115136c5 */
  if ((C.sf!=C.of)) goto L_115136c5;
  /* 115136f8 push esi */
  push32((uint32_t)(ESI));
  /* 115136f9 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 115136fe call ebx */
  call_ind((uint32_t)(EBX), 0x11513700u);
  /* 11513700 push esi */
  push32((uint32_t)(ESI));
  /* 11513701 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11513703 push 0x1151b528 */
  push32((uint32_t)(0x1151b528u));
  /* 11513708 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151370a call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513710u);
  /* 11513710 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11513716 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513718 push 2 */
  push32((uint32_t)(0x2u));
  /* 1151371a call edi */
  call_ind((uint32_t)(EDI), 0x1151371cu);
  /* 1151371c push esi */
  push32((uint32_t)(ESI));
  /* 1151371d push 5 */
  push32((uint32_t)(0x5u));
  /* 1151371f call edi */
  call_ind((uint32_t)(EDI), 0x11513721u);
  /* 11513721 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513724 jmp 0x1151372c */
  goto L_1151372c;
L_11513726:;
  /* 11513726 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_1151372c:;
  /* 1151372c push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1151372e call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513734u);
  /* 11513734 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513736 pop ecx */
  ECX = (pop32());
  /* 11513737 je 0x115138e1 */
  if (C.zf) goto L_115138e1;
  /* 1151373d push 7 */
  push32((uint32_t)(0x7u));
  /* 1151373f call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513745u);
  /* 11513745 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513747 pop ecx */
  ECX = (pop32());
  /* 11513748 je 0x115138e1 */
  if (C.zf) goto L_115138e1;
  /* 1151374e cmp dword ptr [0x1151b344], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513754 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 1151375a jle 0x115137f7 */
  if ((C.zf||C.sf!=C.of)) goto L_115137f7;
L_11513760:;
  /* 11513760 push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 11513765 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x1151376bu);
  /* 1151376b cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513771 pop ecx */
  ECX = (pop32());
  /* 11513772 jge 0x115137a0 */
  if ((C.sf==C.of)) goto L_115137a0;
  /* 11513774 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11513779 push 0x1151b430 */
  push32((uint32_t)(0x1151b430u));
  /* 1151377e push 5 */
  push32((uint32_t)(0x5u));
  /* 11513780 push 0x1151b280 */
  push32((uint32_t)(0x1151b280u));
  /* 11513785 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151378a push ebp */
  push32((uint32_t)(EBP));
  /* 1151378b call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x11513791u);
  /* 11513791 push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 11513796 push ebp */
  push32((uint32_t)(EBP));
  /* 11513797 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151379du);
  /* 1151379d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115137a0:;
  /* 115137a0 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 115137a5 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115137abu);
  /* 115137ab cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115137b1 pop ecx */
  ECX = (pop32());
  /* 115137b2 jge 0x115137e0 */
  if ((C.sf==C.of)) goto L_115137e0;
  /* 115137b4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115137b9 push 0x1151b430 */
  push32((uint32_t)(0x1151b430u));
  /* 115137be push 5 */
  push32((uint32_t)(0x5u));
  /* 115137c0 push 0x1151b658 */
  push32((uint32_t)(0x1151b658u));
  /* 115137c5 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115137ca push ebp */
  push32((uint32_t)(EBP));
  /* 115137cb call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x115137d1u);
  /* 115137d1 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 115137d6 push ebp */
  push32((uint32_t)(EBP));
  /* 115137d7 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115137ddu);
  /* 115137dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115137e0:;
  /* 115137e0 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 115137e6 mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 115137eb cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115137f1 jl 0x11513760 */
  if ((C.sf!=C.of)) goto L_11513760;
L_115137f7:;
  /* 115137f7 push esi */
  push32((uint32_t)(ESI));
  /* 115137f8 push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 115137fd call ebx */
  call_ind((uint32_t)(EBX), 0x115137ffu);
  /* 115137ff mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11513804 push esi */
  push32((uint32_t)(ESI));
  /* 11513805 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11513806 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11513808 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1151380a add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1151380c push eax */
  push32((uint32_t)(EAX));
  /* 1151380d push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 11513812 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513814 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x1151381au);
  /* 1151381a push esi */
  push32((uint32_t)(ESI));
  /* 1151381b push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 11513820 call ebx */
  call_ind((uint32_t)(EBX), 0x11513822u);
  /* 11513822 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11513827 push esi */
  push32((uint32_t)(ESI));
  /* 11513828 push 3 */
  push32((uint32_t)(0x3u));
  /* 1151382a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1151382b pop ecx */
  ECX = (pop32());
  /* 1151382c idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1151382e add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11513830 push eax */
  push32((uint32_t)(EAX));
  /* 11513831 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 11513836 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513838 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x1151383eu);
  /* 1151383e push 8 */
  push32((uint32_t)(0x8u));
  /* 11513840 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513846u);
  /* 11513846 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513849 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151384b je 0x11513897 */
  if (C.zf) goto L_11513897;
  /* 1151384d push esi */
  push32((uint32_t)(ESI));
  /* 1151384e push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 11513853 call ebx */
  call_ind((uint32_t)(EBX), 0x11513855u);
  /* 11513855 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 1151385a push esi */
  push32((uint32_t)(ESI));
  /* 1151385b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1151385c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151385e sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11513860 add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11513862 push eax */
  push32((uint32_t)(EAX));
  /* 11513863 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 11513868 push 5 */
  push32((uint32_t)(0x5u));
  /* 1151386a call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513870u);
  /* 11513870 push esi */
  push32((uint32_t)(ESI));
  /* 11513871 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 11513876 call ebx */
  call_ind((uint32_t)(EBX), 0x11513878u);
  /* 11513878 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 1151387d push esi */
  push32((uint32_t)(ESI));
  /* 1151387e push 3 */
  push32((uint32_t)(0x3u));
  /* 11513880 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11513881 pop ecx */
  ECX = (pop32());
  /* 11513882 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11513884 add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11513886 push eax */
  push32((uint32_t)(EAX));
  /* 11513887 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 1151388c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151388e call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513894u);
  /* 11513894 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513897:;
  /* 11513897 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513899 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x1151389fu);
  /* 1151389f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115138a1 pop ecx */
  ECX = (pop32());
  /* 115138a2 je 0x115138af */
  if (C.zf) goto L_115138af;
  /* 115138a4 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 115138a9 add dword ptr [0x1151b344], eax */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x1151b344), (_r)); fl_add(_a,_b,_r,32); }
L_115138af:;
  /* 115138af push 3 */
  push32((uint32_t)(0x3u));
  /* 115138b1 call dword ptr [0x11519120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519120))), 0x115138b7u);
  /* 115138b7 mov dword ptr [esp], 0x3e8 */
  w32((uint32_t)(ESP), (0x3e8u));
  /* 115138be push 3 */
  push32((uint32_t)(0x3u));
  /* 115138c0 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x115138c6u);
  /* 115138c6 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 115138cb push 4 */
  push32((uint32_t)(0x4u));
  /* 115138cd call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x115138d3u);
  /* 115138d3 push esi */
  push32((uint32_t)(ESI));
  /* 115138d4 push 7 */
  push32((uint32_t)(0x7u));
  /* 115138d6 call edi */
  call_ind((uint32_t)(EDI), 0x115138d8u);
  /* 115138d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115138da push 8 */
  push32((uint32_t)(0x8u));
  /* 115138dc call edi */
  call_ind((uint32_t)(EDI), 0x115138deu);
  /* 115138de add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115138e1:;
  /* 115138e1 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115138e3 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115138e9u);
  /* 115138e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115138eb pop ecx */
  ECX = (pop32());
  /* 115138ec je 0x11513b51 */
  if (C.zf) goto L_11513b51;
  /* 115138f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115138f4 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115138fau);
  /* 115138fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115138fc pop ecx */
  ECX = (pop32());
  /* 115138fd je 0x11513b51 */
  if (C.zf) goto L_11513b51;
  /* 11513903 cmp dword ptr [0x1151b344], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513909 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 1151390f jle 0x115139ac */
  if ((C.zf||C.sf!=C.of)) goto L_115139ac;
L_11513915:;
  /* 11513915 push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 1151391a call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11513920u);
  /* 11513920 cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513926 pop ecx */
  ECX = (pop32());
  /* 11513927 jge 0x11513955 */
  if ((C.sf==C.of)) goto L_11513955;
  /* 11513929 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1151392e push 0x1151b430 */
  push32((uint32_t)(0x1151b430u));
  /* 11513933 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513935 push 0x1151b280 */
  push32((uint32_t)(0x1151b280u));
  /* 1151393a push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151393f push ebp */
  push32((uint32_t)(EBP));
  /* 11513940 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x11513946u);
  /* 11513946 push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 1151394b push ebp */
  push32((uint32_t)(EBP));
  /* 1151394c call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513952u);
  /* 11513952 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513955:;
  /* 11513955 push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 1151395a call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11513960u);
  /* 11513960 cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11513966 pop ecx */
  ECX = (pop32());
  /* 11513967 jge 0x11513995 */
  if ((C.sf==C.of)) goto L_11513995;
  /* 11513969 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1151396e push 0x1151b430 */
  push32((uint32_t)(0x1151b430u));
  /* 11513973 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513975 push 0x1151b658 */
  push32((uint32_t)(0x1151b658u));
  /* 1151397a push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151397f push ebp */
  push32((uint32_t)(EBP));
  /* 11513980 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x11513986u);
  /* 11513986 push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 1151398b push ebp */
  push32((uint32_t)(EBP));
  /* 1151398c call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513992u);
  /* 11513992 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513995:;
  /* 11513995 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 1151399b mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 115139a0 cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115139a6 jl 0x11513915 */
  if ((C.sf!=C.of)) goto L_11513915;
L_115139ac:;
  /* 115139ac push esi */
  push32((uint32_t)(ESI));
  /* 115139ad push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 115139b2 call ebx */
  call_ind((uint32_t)(EBX), 0x115139b4u);
  /* 115139b4 push esi */
  push32((uint32_t)(ESI));
  /* 115139b5 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115139b7 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 115139bc push 5 */
  push32((uint32_t)(0x5u));
  /* 115139be call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x115139c4u);
  /* 115139c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115139c6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115139c8 push 0x1151b220 */
  push32((uint32_t)(0x1151b220u));
  /* 115139cd push 5 */
  push32((uint32_t)(0x5u));
  /* 115139cf call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x115139d5u);
  /* 115139d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115139d7 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115139dc push 0x1151b228 */
  push32((uint32_t)(0x1151b228u));
  /* 115139e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 115139e3 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x115139e9u);
  /* 115139e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115139eb push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 115139f0 push 0x1151b218 */
  push32((uint32_t)(0x1151b218u));
  /* 115139f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 115139f7 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x115139fdu);
  /* 115139fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513a00 push esi */
  push32((uint32_t)(ESI));
  /* 11513a01 push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 11513a06 call ebx */
  call_ind((uint32_t)(EBX), 0x11513a08u);
  /* 11513a08 push esi */
  push32((uint32_t)(ESI));
  /* 11513a09 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11513a0b push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 11513a10 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a12 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513a18u);
  /* 11513a18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513a1a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11513a1c push 0x1151b220 */
  push32((uint32_t)(0x1151b220u));
  /* 11513a21 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a23 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513a29u);
  /* 11513a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513a2b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11513a30 push 0x1151b228 */
  push32((uint32_t)(0x1151b228u));
  /* 11513a35 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a37 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513a3du);
  /* 11513a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11513a3f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11513a44 push 0x1151b218 */
  push32((uint32_t)(0x1151b218u));
  /* 11513a49 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a4b call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513a51u);
  /* 11513a51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513a54 push 8 */
  push32((uint32_t)(0x8u));
  /* 11513a56 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513a5cu);
  /* 11513a5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513a5e pop ecx */
  ECX = (pop32());
  /* 11513a5f je 0x11513b0d */
  if (C.zf) goto L_11513b0d;
  /* 11513a65 push esi */
  push32((uint32_t)(ESI));
  /* 11513a66 push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 11513a6b call ebx */
  call_ind((uint32_t)(EBX), 0x11513a6du);
  /* 11513a6d push esi */
  push32((uint32_t)(ESI));
  /* 11513a6e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11513a70 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 11513a75 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a77 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513a7du);
  /* 11513a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11513a7f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11513a81 push 0x1151b220 */
  push32((uint32_t)(0x1151b220u));
  /* 11513a86 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a88 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513a8eu);
  /* 11513a8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11513a90 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11513a95 push 0x1151b228 */
  push32((uint32_t)(0x1151b228u));
  /* 11513a9a push 5 */
  push32((uint32_t)(0x5u));
  /* 11513a9c call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513aa2u);
  /* 11513aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513aa4 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11513aa9 push 0x1151b218 */
  push32((uint32_t)(0x1151b218u));
  /* 11513aae push 5 */
  push32((uint32_t)(0x5u));
  /* 11513ab0 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513ab6u);
  /* 11513ab6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513ab9 push esi */
  push32((uint32_t)(ESI));
  /* 11513aba push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 11513abf call ebx */
  call_ind((uint32_t)(EBX), 0x11513ac1u);
  /* 11513ac1 push esi */
  push32((uint32_t)(ESI));
  /* 11513ac2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11513ac4 push 0x1151b5f8 */
  push32((uint32_t)(0x1151b5f8u));
  /* 11513ac9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513acb call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513ad1u);
  /* 11513ad1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513ad3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11513ad5 push 0x1151b220 */
  push32((uint32_t)(0x1151b220u));
  /* 11513ada push 5 */
  push32((uint32_t)(0x5u));
  /* 11513adc call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513ae2u);
  /* 11513ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513ae4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11513ae9 push 0x1151b228 */
  push32((uint32_t)(0x1151b228u));
  /* 11513aee push 5 */
  push32((uint32_t)(0x5u));
  /* 11513af0 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513af6u);
  /* 11513af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513af8 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11513afd push 0x1151b218 */
  push32((uint32_t)(0x1151b218u));
  /* 11513b02 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513b04 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11513b0au);
  /* 11513b0a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513b0d:;
  /* 11513b0d push 3 */
  push32((uint32_t)(0x3u));
  /* 11513b0f call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11513b15u);
  /* 11513b15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513b17 pop ecx */
  ECX = (pop32());
  /* 11513b18 je 0x11513b25 */
  if (C.zf) goto L_11513b25;
  /* 11513b1a mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11513b1f add dword ptr [0x1151b344], eax */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x1151b344), (_r)); fl_add(_a,_b,_r,32); }
L_11513b25:;
  /* 11513b25 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513b27 call dword ptr [0x11519120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519120))), 0x11513b2du);
  /* 11513b2d mov dword ptr [esp], 0x3e8 */
  w32((uint32_t)(ESP), (0x3e8u));
  /* 11513b34 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513b36 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11513b3cu);
  /* 11513b3c push 0xfa */
  push32((uint32_t)(0xfau));
  /* 11513b41 push 4 */
  push32((uint32_t)(0x4u));
  /* 11513b43 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11513b49u);
  /* 11513b49 push esi */
  push32((uint32_t)(ESI));
  /* 11513b4a push 9 */
  push32((uint32_t)(0x9u));
  /* 11513b4c call edi */
  call_ind((uint32_t)(EDI), 0x11513b4eu);
  /* 11513b4e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513b51:;
  /* 11513b51 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513b53 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513b59u);
  /* 11513b59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513b5b pop ecx */
  ECX = (pop32());
  /* 11513b5c je 0x11513bbe */
  if (C.zf) goto L_11513bbe;
  /* 11513b5e push esi */
  push32((uint32_t)(ESI));
  /* 11513b5f push 0x1151b550 */
  push32((uint32_t)(0x1151b550u));
  /* 11513b64 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11513b6au);
  /* 11513b6a pop ecx */
  ECX = (pop32());
  /* 11513b6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513b6d pop ecx */
  ECX = (pop32());
  /* 11513b6e jle 0x11513bbe */
  if ((C.zf||C.sf!=C.of)) goto L_11513bbe;
  /* 11513b70 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11513b72 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513b78u);
  /* 11513b78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513b7a pop ecx */
  ECX = (pop32());
  /* 11513b7b je 0x11513b89 */
  if (C.zf) goto L_11513b89;
  /* 11513b7d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11513b7f push 5 */
  push32((uint32_t)(0x5u));
  /* 11513b81 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11513b87u);
  /* 11513b87 pop ecx */
  ECX = (pop32());
  /* 11513b88 pop ecx */
  ECX = (pop32());
L_11513b89:;
  /* 11513b89 push esi */
  push32((uint32_t)(ESI));
  /* 11513b8a push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11513b8f push esi */
  push32((uint32_t)(ESI));
  /* 11513b90 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11513b96u);
  /* 11513b96 push esi */
  push32((uint32_t)(ESI));
  /* 11513b97 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11513b9du);
  /* 11513b9d push esi */
  push32((uint32_t)(ESI));
  /* 11513b9e push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513ba3 call ebx */
  call_ind((uint32_t)(EBX), 0x11513ba5u);
  /* 11513ba5 push esi */
  push32((uint32_t)(ESI));
  /* 11513ba6 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513ba8 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11513baeu);
  /* 11513bae push esi */
  push32((uint32_t)(ESI));
  /* 11513baf push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11513bb4 call ebx */
  call_ind((uint32_t)(EBX), 0x11513bb6u);
  /* 11513bb6 push esi */
  push32((uint32_t)(ESI));
  /* 11513bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513bb9 call edi */
  call_ind((uint32_t)(EDI), 0x11513bbbu);
  /* 11513bbb add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513bbe:;
  /* 11513bbe push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11513bc0 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513bc6u);
  /* 11513bc6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513bc8 pop ecx */
  ECX = (pop32());
  /* 11513bc9 je 0x11513beb */
  if (C.zf) goto L_11513beb;
  /* 11513bcb push 5 */
  push32((uint32_t)(0x5u));
  /* 11513bcd call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11513bd3u);
  /* 11513bd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513bd5 pop ecx */
  ECX = (pop32());
  /* 11513bd6 je 0x11513beb */
  if (C.zf) goto L_11513beb;
  /* 11513bd8 push 0x1151a344 */
  push32((uint32_t)(0x1151a344u));
  /* 11513bdd call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x11513be3u);
  /* 11513be3 push esi */
  push32((uint32_t)(ESI));
  /* 11513be4 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11513be6 call edi */
  call_ind((uint32_t)(EDI), 0x11513be8u);
  /* 11513be8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513beb:;
  /* 11513beb push 1 */
  push32((uint32_t)(0x1u));
  /* 11513bed call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513bf3u);
  /* 11513bf3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513bf5 pop ecx */
  ECX = (pop32());
  /* 11513bf6 jne 0x11513c40 */
  if (!C.zf) goto L_11513c40;
  /* 11513bf8 push esi */
  push32((uint32_t)(ESI));
  /* 11513bf9 push 0x1151b550 */
  push32((uint32_t)(0x1151b550u));
  /* 11513bfe call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11513c04u);
  /* 11513c04 pop ecx */
  ECX = (pop32());
  /* 11513c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513c07 pop ecx */
  ECX = (pop32());
  /* 11513c08 jne 0x11513c40 */
  if (!C.zf) goto L_11513c40;
  /* 11513c0a push esi */
  push32((uint32_t)(ESI));
  /* 11513c0b push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11513c10 push esi */
  push32((uint32_t)(ESI));
  /* 11513c11 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11513c17u);
  /* 11513c17 push esi */
  push32((uint32_t)(ESI));
  /* 11513c18 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11513c1eu);
  /* 11513c1e push esi */
  push32((uint32_t)(ESI));
  /* 11513c1f push 0x1151b590 */
  push32((uint32_t)(0x1151b590u));
  /* 11513c24 call ebx */
  call_ind((uint32_t)(EBX), 0x11513c26u);
  /* 11513c26 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513c28 push esi */
  push32((uint32_t)(ESI));
  /* 11513c29 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11513c2fu);
  /* 11513c2f push esi */
  push32((uint32_t)(ESI));
  /* 11513c30 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11513c35 call ebx */
  call_ind((uint32_t)(EBX), 0x11513c37u);
  /* 11513c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513c39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513c3b call edi */
  call_ind((uint32_t)(EDI), 0x11513c3du);
  /* 11513c3d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513c40:;
  /* 11513c40 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11513c42 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513c48u);
  /* 11513c48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513c4a pop ecx */
  ECX = (pop32());
  /* 11513c4b je 0x11513c78 */
  if (C.zf) goto L_11513c78;
  /* 11513c4d push esi */
  push32((uint32_t)(ESI));
  /* 11513c4e push 0x1151b298 */
  push32((uint32_t)(0x1151b298u));
  /* 11513c53 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11513c59u);
  /* 11513c59 pop ecx */
  ECX = (pop32());
  /* 11513c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513c5c pop ecx */
  ECX = (pop32());
  /* 11513c5d jle 0x11513c78 */
  if ((C.zf||C.sf!=C.of)) goto L_11513c78;
  /* 11513c5f push dword ptr [0x1151b320] */
  push32((uint32_t)(r32((uint32_t)(0x1151b320))));
  /* 11513c65 push 0x1151a33c */
  push32((uint32_t)(0x1151a33cu));
  /* 11513c6a call dword ptr [0x11519130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519130))), 0x11513c70u);
  /* 11513c70 push esi */
  push32((uint32_t)(ESI));
  /* 11513c71 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11513c73 call edi */
  call_ind((uint32_t)(EDI), 0x11513c75u);
  /* 11513c75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513c78:;
  /* 11513c78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513c7a call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513c80u);
  /* 11513c80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513c82 pop ecx */
  ECX = (pop32());
  /* 11513c83 je 0x11513d11 */
  if (C.zf) goto L_11513d11;
  /* 11513c89 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513c8b call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513c91u);
  /* 11513c91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513c93 pop ecx */
  ECX = (pop32());
  /* 11513c94 jne 0x11513d11 */
  if (!C.zf) goto L_11513d11;
  /* 11513c96 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513c9b push 0x1151b298 */
  push32((uint32_t)(0x1151b298u));
  /* 11513ca0 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x11513ca6u);
  /* 11513ca6 pop ecx */
  ECX = (pop32());
  /* 11513ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513ca9 pop ecx */
  ECX = (pop32());
  /* 11513caa jle 0x11513d11 */
  if ((C.zf||C.sf!=C.of)) goto L_11513d11;
  /* 11513cac push esi */
  push32((uint32_t)(ESI));
  /* 11513cad push 0x1151b298 */
  push32((uint32_t)(0x1151b298u));
  /* 11513cb2 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11513cb8u);
  /* 11513cb8 pop ecx */
  ECX = (pop32());
  /* 11513cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513cbb pop ecx */
  ECX = (pop32());
  /* 11513cbc jle 0x11513d11 */
  if ((C.zf||C.sf!=C.of)) goto L_11513d11;
  /* 11513cbe push 0x1151a334 */
  push32((uint32_t)(0x1151a334u));
  /* 11513cc3 call dword ptr [0x11519128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519128))), 0x11513cc9u);
  /* 11513cc9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513ccb pop ecx */
  ECX = (pop32());
  /* 11513ccc je 0x11513d0a */
  if (C.zf) goto L_11513d0a;
  /* 11513cce push esi */
  push32((uint32_t)(ESI));
  /* 11513ccf push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513cd4 call ebx */
  call_ind((uint32_t)(EBX), 0x11513cd6u);
  /* 11513cd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513cd8 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513cdd call ebx */
  call_ind((uint32_t)(EBX), 0x11513cdfu);
  /* 11513cdf push esi */
  push32((uint32_t)(ESI));
  /* 11513ce0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513ce2 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11513ce8u);
  /* 11513ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513cea push 1 */
  push32((uint32_t)(0x1u));
  /* 11513cec push 0x1151b3d0 */
  push32((uint32_t)(0x1151b3d0u));
  /* 11513cf1 call dword ptr [0x115190f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f8))), 0x11513cf7u);
  /* 11513cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11513cf8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513cfa call edi */
  call_ind((uint32_t)(EDI), 0x11513cfcu);
  /* 11513cfc push esi */
  push32((uint32_t)(ESI));
  /* 11513cfd push 4 */
  push32((uint32_t)(0x4u));
  /* 11513cff call edi */
  call_ind((uint32_t)(EDI), 0x11513d01u);
  /* 11513d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513d03 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513d05 call edi */
  call_ind((uint32_t)(EDI), 0x11513d07u);
  /* 11513d07 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513d0a:;
  /* 11513d0a push esi */
  push32((uint32_t)(ESI));
  /* 11513d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11513d0d call edi */
  call_ind((uint32_t)(EDI), 0x11513d0fu);
  /* 11513d0f pop ecx */
  ECX = (pop32());
  /* 11513d10 pop ecx */
  ECX = (pop32());
L_11513d11:;
  /* 11513d11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513d13 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513d19u);
  /* 11513d19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513d1b pop ecx */
  ECX = (pop32());
  /* 11513d1c jne 0x11513d38 */
  if (!C.zf) goto L_11513d38;
  /* 11513d1e push esi */
  push32((uint32_t)(ESI));
  /* 11513d1f push 0x1151b298 */
  push32((uint32_t)(0x1151b298u));
  /* 11513d24 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11513d2au);
  /* 11513d2a pop ecx */
  ECX = (pop32());
  /* 11513d2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513d2d pop ecx */
  ECX = (pop32());
  /* 11513d2e jne 0x11513d38 */
  if (!C.zf) goto L_11513d38;
  /* 11513d30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11513d34 call edi */
  call_ind((uint32_t)(EDI), 0x11513d36u);
  /* 11513d36 pop ecx */
  ECX = (pop32());
  /* 11513d37 pop ecx */
  ECX = (pop32());
L_11513d38:;
  /* 11513d38 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513d3a call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513d40u);
  /* 11513d40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513d42 pop ecx */
  ECX = (pop32());
  /* 11513d43 jne 0x11513de9 */
  if (!C.zf) goto L_11513de9;
  /* 11513d49 mov edi, dword ptr [0x11519118] */
  EDI = (r32((uint32_t)(0x11519118)));
  /* 11513d4f push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513d54 push 0x1151b5b0 */
  push32((uint32_t)(0x1151b5b0u));
  /* 11513d59 call edi */
  call_ind((uint32_t)(EDI), 0x11513d5bu);
  /* 11513d5b mov edx, eax */
  EDX = (EAX);
  /* 11513d5d push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513d62 push 0x1151b3d0 */
  push32((uint32_t)(0x1151b3d0u));
  /* 11513d67 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11513d6b call edi */
  call_ind((uint32_t)(EDI), 0x11513d6du);
  /* 11513d6d mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11513d71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513d74 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11513d76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11513d78 jle 0x11513de3 */
  if ((C.zf||C.sf!=C.of)) goto L_11513de3;
  /* 11513d7a mov edi, 0x1151b2b8 */
  EDI = (0x1151b2b8u);
  /* 11513d7f push esi */
  push32((uint32_t)(ESI));
  /* 11513d80 push edi */
  push32((uint32_t)(EDI));
  /* 11513d81 push esi */
  push32((uint32_t)(ESI));
  /* 11513d82 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11513d88u);
  /* 11513d88 push esi */
  push32((uint32_t)(ESI));
  /* 11513d89 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11513d8fu);
  /* 11513d8f push esi */
  push32((uint32_t)(ESI));
  /* 11513d90 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513d95 call ebx */
  call_ind((uint32_t)(EBX), 0x11513d97u);
  /* 11513d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513d99 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513d9e call ebx */
  call_ind((uint32_t)(EBX), 0x11513da0u);
  /* 11513da0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513da2 push esi */
  push32((uint32_t)(ESI));
  /* 11513da3 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11513da9u);
  /* 11513da9 push esi */
  push32((uint32_t)(ESI));
  /* 11513daa push edi */
  push32((uint32_t)(EDI));
  /* 11513dab call ebx */
  call_ind((uint32_t)(EBX), 0x11513dadu);
  /* 11513dad push 1 */
  push32((uint32_t)(0x1u));
  /* 11513daf call dword ptr [0x11519138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519138))), 0x11513db5u);
  /* 11513db5 push dword ptr [0x1151b320] */
  push32((uint32_t)(r32((uint32_t)(0x1151b320))));
  /* 11513dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11513dbd push esi */
  push32((uint32_t)(ESI));
  /* 11513dbe call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11513dc4u);
  /* 11513dc4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513dc7 push 0x1151a32c */
  push32((uint32_t)(0x1151a32cu));
  /* 11513dcc call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x11513dd2u);
  /* 11513dd2 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11513dd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513dda push 3 */
  push32((uint32_t)(0x3u));
  /* 11513ddc call edi */
  call_ind((uint32_t)(EDI), 0x11513ddeu);
  /* 11513dde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513de1 jmp 0x11513de9 */
  goto L_11513de9;
L_11513de3:;
  /* 11513de3 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11513de9:;
  /* 11513de9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11513deb call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513df1u);
  /* 11513df1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513df3 pop ecx */
  ECX = (pop32());
  /* 11513df4 jne 0x11513eab */
  if (!C.zf) goto L_11513eab;
  /* 11513dfa push 3 */
  push32((uint32_t)(0x3u));
  /* 11513dfc call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513e02u);
  /* 11513e02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513e04 pop ecx */
  ECX = (pop32());
  /* 11513e05 je 0x11513eab */
  if (C.zf) goto L_11513eab;
  /* 11513e0b mov edi, dword ptr [0x11519110] */
  EDI = (r32((uint32_t)(0x11519110)));
  /* 11513e11 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513e16 call edi */
  call_ind((uint32_t)(EDI), 0x11513e18u);
  /* 11513e18 mov edx, eax */
  EDX = (EAX);
  /* 11513e1a mov dword ptr [esp], 0x1151b1e0 */
  w32((uint32_t)(ESP), (0x1151b1e0u));
  /* 11513e21 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11513e25 call edi */
  call_ind((uint32_t)(EDI), 0x11513e27u);
  /* 11513e27 pop ecx */
  ECX = (pop32());
  /* 11513e28 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11513e2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11513e2e jne 0x11513e5b */
  if (!C.zf) goto L_11513e5b;
  /* 11513e30 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11513e35 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11513e3b push eax */
  push32((uint32_t)(EAX));
  /* 11513e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11513e3e call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11513e44u);
  /* 11513e44 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11513e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11513e4c push 3 */
  push32((uint32_t)(0x3u));
  /* 11513e4e call edi */
  call_ind((uint32_t)(EDI), 0x11513e50u);
  /* 11513e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513e52 push 4 */
  push32((uint32_t)(0x4u));
  /* 11513e54 call edi */
  call_ind((uint32_t)(EDI), 0x11513e56u);
  /* 11513e56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513e59 jmp 0x11513eab */
  goto L_11513eab;
L_11513e5b:;
  /* 11513e5b mov edi, dword ptr [0x115190b8] */
  EDI = (r32((uint32_t)(0x115190b8)));
  /* 11513e61 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513e63 call edi */
  call_ind((uint32_t)(EDI), 0x11513e65u);
  /* 11513e65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513e67 pop ecx */
  ECX = (pop32());
  /* 11513e68 je 0x11513ea5 */
  if (C.zf) goto L_11513ea5;
  /* 11513e6a push esi */
  push32((uint32_t)(ESI));
  /* 11513e6b push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513e70 call ebx */
  call_ind((uint32_t)(EBX), 0x11513e72u);
  /* 11513e72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513e74 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513e79 call ebx */
  call_ind((uint32_t)(EBX), 0x11513e7bu);
  /* 11513e7b push esi */
  push32((uint32_t)(ESI));
  /* 11513e7c push esi */
  push32((uint32_t)(ESI));
  /* 11513e7d push 0x1151b2b0 */
  push32((uint32_t)(0x1151b2b0u));
  /* 11513e82 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513e84 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11513e8au);
  /* 11513e8a push 8 */
  push32((uint32_t)(0x8u));
  /* 11513e8c call edi */
  call_ind((uint32_t)(EDI), 0x11513e8eu);
  /* 11513e8e add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513e91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513e93 jne 0x11513ea5 */
  if (!C.zf) goto L_11513ea5;
  /* 11513e95 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11513e9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11513e9d push 7 */
  push32((uint32_t)(0x7u));
  /* 11513e9f call edi */
  call_ind((uint32_t)(EDI), 0x11513ea1u);
  /* 11513ea1 pop ecx */
  ECX = (pop32());
  /* 11513ea2 pop ecx */
  ECX = (pop32());
  /* 11513ea3 jmp 0x11513eab */
  goto L_11513eab;
L_11513ea5:;
  /* 11513ea5 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11513eab:;
  /* 11513eab push 4 */
  push32((uint32_t)(0x4u));
  /* 11513ead call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513eb3u);
  /* 11513eb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513eb5 pop ecx */
  ECX = (pop32());
  /* 11513eb6 jne 0x11513fc8 */
  if (!C.zf) goto L_11513fc8;
  /* 11513ebc push 3 */
  push32((uint32_t)(0x3u));
  /* 11513ebe call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513ec4u);
  /* 11513ec4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513ec6 pop ecx */
  ECX = (pop32());
  /* 11513ec7 jne 0x11513fc8 */
  if (!C.zf) goto L_11513fc8;
  /* 11513ecd push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11513ed2 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11513ed8u);
  /* 11513ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513eda pop ecx */
  ECX = (pop32());
  /* 11513edb jne 0x11513fc8 */
  if (!C.zf) goto L_11513fc8;
  /* 11513ee1 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11513ee6 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11513eec add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11513ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11513ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513ef4 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11513efau);
  /* 11513efa push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513eff call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11513f05u);
  /* 11513f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513f0a jle 0x11513f49 */
  if ((C.zf||C.sf!=C.of)) goto L_11513f49;
  /* 11513f0c push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513f11 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11513f17u);
  /* 11513f17 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11513f1d push eax */
  push32((uint32_t)(EAX));
  /* 11513f1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11513f20 push esi */
  push32((uint32_t)(ESI));
  /* 11513f21 call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11513f27u);
  /* 11513f27 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513f2c call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11513f32u);
  /* 11513f32 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11513f38 push eax */
  push32((uint32_t)(EAX));
  /* 11513f39 push 0x1151a324 */
  push32((uint32_t)(0x1151a324u));
  /* 11513f3e call dword ptr [0x11519130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519130))), 0x11513f44u);
  /* 11513f44 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513f47 jmp 0x11513f55 */
  goto L_11513f55;
L_11513f49:;
  /* 11513f49 push 0x1151a31c */
  push32((uint32_t)(0x1151a31cu));
  /* 11513f4e call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x11513f54u);
  /* 11513f54 pop ecx */
  ECX = (pop32());
L_11513f55:;
  /* 11513f55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513f57 call dword ptr [0x11519138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519138))), 0x11513f5du);
  /* 11513f5d push esi */
  push32((uint32_t)(ESI));
  /* 11513f5e push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11513f63 push esi */
  push32((uint32_t)(ESI));
  /* 11513f64 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11513f6au);
  /* 11513f6a push esi */
  push32((uint32_t)(ESI));
  /* 11513f6b call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11513f71u);
  /* 11513f71 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513f73 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11513f79u);
  /* 11513f79 push esi */
  push32((uint32_t)(ESI));
  /* 11513f7a push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513f7f call ebx */
  call_ind((uint32_t)(EBX), 0x11513f81u);
  /* 11513f81 push esi */
  push32((uint32_t)(ESI));
  /* 11513f82 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11513f88u);
  /* 11513f88 push esi */
  push32((uint32_t)(ESI));
  /* 11513f89 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513f8e call ebx */
  call_ind((uint32_t)(EBX), 0x11513f90u);
  /* 11513f90 push 5 */
  push32((uint32_t)(0x5u));
  /* 11513f92 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11513f98u);
  /* 11513f98 push 0x1151b1f8 */
  push32((uint32_t)(0x1151b1f8u));
  /* 11513f9d push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11513fa2 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11513fa8u);
  /* 11513fa8 push esi */
  push32((uint32_t)(ESI));
  /* 11513fa9 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11513fae call ebx */
  call_ind((uint32_t)(EBX), 0x11513fb0u);
  /* 11513fb0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513fb5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11513fb7 call edi */
  call_ind((uint32_t)(EDI), 0x11513fb9u);
  /* 11513fb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11513fbb push 4 */
  push32((uint32_t)(0x4u));
  /* 11513fbd call edi */
  call_ind((uint32_t)(EDI), 0x11513fbfu);
  /* 11513fbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11513fc1 push 7 */
  push32((uint32_t)(0x7u));
  /* 11513fc3 call edi */
  call_ind((uint32_t)(EDI), 0x11513fc5u);
  /* 11513fc5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11513fc8:;
  /* 11513fc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11513fca call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11513fd0u);
  /* 11513fd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11513fd2 pop ecx */
  ECX = (pop32());
  /* 11513fd3 jne 0x11514027 */
  if (!C.zf) goto L_11514027;
  /* 11513fd5 push 6 */
  push32((uint32_t)(0x6u));
  /* 11513fd7 push 0x1151b1e8 */
  push32((uint32_t)(0x1151b1e8u));
  /* 11513fdc push 0x1151b4e8 */
  push32((uint32_t)(0x1151b4e8u));
  /* 11513fe1 call dword ptr [0x1151913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151913c))), 0x11513fe7u);
  /* 11513fe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11513fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11513fec jle 0x11514027 */
  if ((C.zf||C.sf!=C.of)) goto L_11514027;
  /* 11513fee push esi */
  push32((uint32_t)(ESI));
  /* 11513fef push 6 */
  push32((uint32_t)(0x6u));
  /* 11513ff1 push 0x1151b4e8 */
  push32((uint32_t)(0x1151b4e8u));
  /* 11513ff6 call dword ptr [0x11519134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519134))), 0x11513ffcu);
  /* 11513ffc push 6 */
  push32((uint32_t)(0x6u));
  /* 11513ffe call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11514004u);
  /* 11514004 push esi */
  push32((uint32_t)(ESI));
  /* 11514005 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 1151400a call ebx */
  call_ind((uint32_t)(EBX), 0x1151400cu);
  /* 1151400c push 1 */
  push32((uint32_t)(0x1u));
  /* 1151400e push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11514013 call ebx */
  call_ind((uint32_t)(EBX), 0x11514015u);
  /* 11514015 push esi */
  push32((uint32_t)(ESI));
  /* 11514016 push esi */
  push32((uint32_t)(ESI));
  /* 11514017 push 0x1151b2b0 */
  push32((uint32_t)(0x1151b2b0u));
  /* 1151401c push 6 */
  push32((uint32_t)(0x6u));
  /* 1151401e call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514024u);
  /* 11514024 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514027:;
  /* 11514027 push 4 */
  push32((uint32_t)(0x4u));
  /* 11514029 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151402fu);
  /* 1151402f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514031 pop ecx */
  ECX = (pop32());
  /* 11514032 jne 0x1151407d */
  if (!C.zf) goto L_1151407d;
  /* 11514034 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514036 push 0x1151b390 */
  push32((uint32_t)(0x1151b390u));
  /* 1151403b push 0x1151b4e8 */
  push32((uint32_t)(0x1151b4e8u));
  /* 11514040 call dword ptr [0x1151913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151913c))), 0x11514046u);
  /* 11514046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151404b jle 0x1151407d */
  if ((C.zf||C.sf!=C.of)) goto L_1151407d;
  /* 1151404d push esi */
  push32((uint32_t)(ESI));
  /* 1151404e push 6 */
  push32((uint32_t)(0x6u));
  /* 11514050 push 0x1151b4e8 */
  push32((uint32_t)(0x1151b4e8u));
  /* 11514055 call dword ptr [0x11519134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519134))), 0x1151405bu);
  /* 1151405b push 6 */
  push32((uint32_t)(0x6u));
  /* 1151405d call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11514063u);
  /* 11514063 push esi */
  push32((uint32_t)(ESI));
  /* 11514064 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 11514069 call ebx */
  call_ind((uint32_t)(EBX), 0x1151406bu);
  /* 1151406b push esi */
  push32((uint32_t)(ESI));
  /* 1151406c push esi */
  push32((uint32_t)(ESI));
  /* 1151406d push 0x1151b2b0 */
  push32((uint32_t)(0x1151b2b0u));
  /* 11514072 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514074 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x1151407au);
  /* 1151407a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151407d:;
  /* 1151407d push 3 */
  push32((uint32_t)(0x3u));
  /* 1151407f call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514085u);
  /* 11514085 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514087 pop ecx */
  ECX = (pop32());
  /* 11514088 jne 0x11514170 */
  if (!C.zf) goto L_11514170;
  /* 1151408e push 8 */
  push32((uint32_t)(0x8u));
  /* 11514090 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514096u);
  /* 11514096 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514098 pop ecx */
  ECX = (pop32());
  /* 11514099 je 0x11514170 */
  if (C.zf) goto L_11514170;
  /* 1151409f mov edi, dword ptr [0x11519118] */
  EDI = (r32((uint32_t)(0x11519118)));
  /* 115140a5 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 115140aa push 0x1151b640 */
  push32((uint32_t)(0x1151b640u));
  /* 115140af call edi */
  call_ind((uint32_t)(EDI), 0x115140b1u);
  /* 115140b1 mov edx, eax */
  EDX = (EAX);
  /* 115140b3 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 115140b8 push 0x1151b630 */
  push32((uint32_t)(0x1151b630u));
  /* 115140bd mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115140c1 call edi */
  call_ind((uint32_t)(EDI), 0x115140c3u);
  /* 115140c3 mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 115140c7 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 115140cc push 0x1151b620 */
  push32((uint32_t)(0x1151b620u));
  /* 115140d1 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115140d3 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x115140d9u);
  /* 115140d9 push 0x1151b128 */
  push32((uint32_t)(0x1151b128u));
  /* 115140de push 0x1151b610 */
  push32((uint32_t)(0x1151b610u));
  /* 115140e3 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115140e5 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x115140ebu);
  /* 115140eb push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 115140f0 push 0x1151b640 */
  push32((uint32_t)(0x1151b640u));
  /* 115140f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115140f7 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x115140fdu);
  /* 115140fd push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11514102 push 0x1151b630 */
  push32((uint32_t)(0x1151b630u));
  /* 11514107 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11514109 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x1151410fu);
  /* 1151410f push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11514114 push 0x1151b620 */
  push32((uint32_t)(0x1151b620u));
  /* 11514119 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151411b call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x11514121u);
  /* 11514121 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 11514126 push 0x1151b610 */
  push32((uint32_t)(0x1151b610u));
  /* 1151412b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151412d call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x11514133u);
  /* 11514133 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11514135 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514138 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1151413a jle 0x1151416a */
  if ((C.zf||C.sf!=C.of)) goto L_1151416a;
  /* 1151413c mov edi, dword ptr [0x115190c4] */
  EDI = (r32((uint32_t)(0x115190c4)));
  /* 11514142 push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 11514147 push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 1151414c call edi */
  call_ind((uint32_t)(EDI), 0x1151414eu);
  /* 1151414e push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 11514153 push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 11514158 call edi */
  call_ind((uint32_t)(EDI), 0x1151415au);
  /* 1151415a mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11514160 push esi */
  push32((uint32_t)(ESI));
  /* 11514161 push 8 */
  push32((uint32_t)(0x8u));
  /* 11514163 call edi */
  call_ind((uint32_t)(EDI), 0x11514165u);
  /* 11514165 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514168 jmp 0x11514170 */
  goto L_11514170;
L_1151416a:;
  /* 1151416a mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11514170:;
  /* 11514170 push 8 */
  push32((uint32_t)(0x8u));
  /* 11514172 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514178u);
  /* 11514178 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151417a pop ecx */
  ECX = (pop32());
  /* 1151417b jne 0x115141e8 */
  if (!C.zf) goto L_115141e8;
  /* 1151417d push 7 */
  push32((uint32_t)(0x7u));
  /* 1151417f call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514185u);
  /* 11514185 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514187 pop ecx */
  ECX = (pop32());
  /* 11514188 jne 0x115141e8 */
  if (!C.zf) goto L_115141e8;
  /* 1151418a push 4 */
  push32((uint32_t)(0x4u));
  /* 1151418c call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11514192u);
  /* 11514192 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514194 pop ecx */
  ECX = (pop32());
  /* 11514195 je 0x115141e8 */
  if (C.zf) goto L_115141e8;
  /* 11514197 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11514199 push 0x1151b1e0 */
  push32((uint32_t)(0x1151b1e0u));
  /* 1151419e push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 115141a3 push 0x1151b5e8 */
  push32((uint32_t)(0x1151b5e8u));
  /* 115141a8 call dword ptr [0x11519144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519144))), 0x115141aeu);
  /* 115141ae push esi */
  push32((uint32_t)(ESI));
  /* 115141af push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 115141b4 call ebx */
  call_ind((uint32_t)(EBX), 0x115141b6u);
  /* 115141b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115141b8 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 115141bd call ebx */
  call_ind((uint32_t)(EBX), 0x115141bfu);
  /* 115141bf push esi */
  push32((uint32_t)(ESI));
  /* 115141c0 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115141c5 push 0x1151b5e8 */
  push32((uint32_t)(0x1151b5e8u));
  /* 115141ca push 5 */
  push32((uint32_t)(0x5u));
  /* 115141cc call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115141d2u);
  /* 115141d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115141d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 115141d6 call edi */
  call_ind((uint32_t)(EDI), 0x115141d8u);
  /* 115141d8 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 115141dd push 4 */
  push32((uint32_t)(0x4u));
  /* 115141df call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x115141e5u);
  /* 115141e5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115141e8:;
  /* 115141e8 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115141ea call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115141f0u);
  /* 115141f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115141f2 pop ecx */
  ECX = (pop32());
  /* 115141f3 je 0x115142c1 */
  if (C.zf) goto L_115142c1;
  /* 115141f9 push 7 */
  push32((uint32_t)(0x7u));
  /* 115141fb call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514201u);
  /* 11514201 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514203 pop ecx */
  ECX = (pop32());
  /* 11514204 jne 0x115142c1 */
  if (!C.zf) goto L_115142c1;
  /* 1151420a mov edi, dword ptr [0x11519110] */
  EDI = (r32((uint32_t)(0x11519110)));
  /* 11514210 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 11514215 call edi */
  call_ind((uint32_t)(EDI), 0x11514217u);
  /* 11514217 mov edx, eax */
  EDX = (EAX);
  /* 11514219 mov dword ptr [esp], 0x1151b5f0 */
  w32((uint32_t)(ESP), (0x1151b5f0u));
  /* 11514220 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11514224 call edi */
  call_ind((uint32_t)(EDI), 0x11514226u);
  /* 11514226 pop ecx */
  ECX = (pop32());
  /* 11514227 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1151422b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1151422d jne 0x115142bb */
  if (!C.zf) goto L_115142bb;
  /* 11514233 cmp dword ptr [0x1151b118], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b118))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11514239 jne 0x11514245 */
  if (!C.zf) goto L_11514245;
  /* 1151423b mov dword ptr [0x1151b118], 5 */
  w32((uint32_t)(0x1151b118), (0x5u));
L_11514245:;
  /* 11514245 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 1151424b mov edi, dword ptr [0x11519130] */
  EDI = (r32((uint32_t)(0x11519130)));
  /* 11514251 push 0x1151a314 */
  push32((uint32_t)(0x1151a314u));
  /* 11514256 call edi */
  call_ind((uint32_t)(EDI), 0x11514258u);
  /* 11514258 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 1151425e push 1 */
  push32((uint32_t)(0x1u));
  /* 11514260 push esi */
  push32((uint32_t)(ESI));
  /* 11514261 call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514267u);
  /* 11514267 push 8 */
  push32((uint32_t)(0x8u));
  /* 11514269 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151426fu);
  /* 1151426f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514272 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514274 je 0x115142ab */
  if (C.zf) goto L_115142ab;
  /* 11514276 mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 1151427b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1151427d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1151427e pop ecx */
  ECX = (pop32());
  /* 1151427f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514281 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11514284 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514286 push eax */
  push32((uint32_t)(EAX));
  /* 11514287 push 0x1151a30c */
  push32((uint32_t)(0x1151a30cu));
  /* 1151428c call edi */
  call_ind((uint32_t)(EDI), 0x1151428eu);
  /* 1151428e mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 11514293 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514295 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514296 pop ecx */
  ECX = (pop32());
  /* 11514297 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514299 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1151429c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1151429e push eax */
  push32((uint32_t)(EAX));
  /* 1151429f push 1 */
  push32((uint32_t)(0x1u));
  /* 115142a1 push esi */
  push32((uint32_t)(ESI));
  /* 115142a2 call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x115142a8u);
  /* 115142a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115142ab:;
  /* 115142ab mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 115142b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115142b3 push 7 */
  push32((uint32_t)(0x7u));
  /* 115142b5 call edi */
  call_ind((uint32_t)(EDI), 0x115142b7u);
  /* 115142b7 pop ecx */
  ECX = (pop32());
  /* 115142b8 pop ecx */
  ECX = (pop32());
  /* 115142b9 jmp 0x115142c1 */
  goto L_115142c1;
L_115142bb:;
  /* 115142bb mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_115142c1:;
  /* 115142c1 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115142c3 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115142c9u);
  /* 115142c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115142cb pop ecx */
  ECX = (pop32());
  /* 115142cc je 0x115143bc */
  if (C.zf) goto L_115143bc;
  /* 115142d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 115142d4 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115142dau);
  /* 115142da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115142dc pop ecx */
  ECX = (pop32());
  /* 115142dd je 0x115143bc */
  if (C.zf) goto L_115143bc;
  /* 115142e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 115142e5 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115142ebu);
  /* 115142eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115142ed pop ecx */
  ECX = (pop32());
  /* 115142ee je 0x115143bc */
  if (C.zf) goto L_115143bc;
  /* 115142f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 115142f6 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115142fcu);
  /* 115142fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115142fe pop ecx */
  ECX = (pop32());
  /* 115142ff jne 0x115143bc */
  if (!C.zf) goto L_115143bc;
  /* 11514305 mov edi, dword ptr [0x11519110] */
  EDI = (r32((uint32_t)(0x11519110)));
  /* 1151430b push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 11514310 call edi */
  call_ind((uint32_t)(EDI), 0x11514312u);
  /* 11514312 mov edx, eax */
  EDX = (EAX);
  /* 11514314 mov dword ptr [esp], 0x1151b5e0 */
  w32((uint32_t)(ESP), (0x1151b5e0u));
  /* 1151431b mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 1151431f call edi */
  call_ind((uint32_t)(EDI), 0x11514321u);
  /* 11514321 pop ecx */
  ECX = (pop32());
  /* 11514322 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11514326 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514328 jne 0x115143b6 */
  if (!C.zf) goto L_115143b6;
  /* 1151432e cmp dword ptr [0x1151b118], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b118))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11514334 jne 0x11514340 */
  if (!C.zf) goto L_11514340;
  /* 11514336 mov dword ptr [0x1151b118], 5 */
  w32((uint32_t)(0x1151b118), (0x5u));
L_11514340:;
  /* 11514340 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 11514346 mov edi, dword ptr [0x11519130] */
  EDI = (r32((uint32_t)(0x11519130)));
  /* 1151434c push 0x1151a314 */
  push32((uint32_t)(0x1151a314u));
  /* 11514351 call edi */
  call_ind((uint32_t)(EDI), 0x11514353u);
  /* 11514353 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 11514359 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151435b push esi */
  push32((uint32_t)(ESI));
  /* 1151435c call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514362u);
  /* 11514362 push 8 */
  push32((uint32_t)(0x8u));
  /* 11514364 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151436au);
  /* 1151436a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151436d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151436f je 0x115143a6 */
  if (C.zf) goto L_115143a6;
  /* 11514371 mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 11514376 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514378 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514379 pop ecx */
  ECX = (pop32());
  /* 1151437a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1151437c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1151437f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514381 push eax */
  push32((uint32_t)(EAX));
  /* 11514382 push 0x1151a30c */
  push32((uint32_t)(0x1151a30cu));
  /* 11514387 call edi */
  call_ind((uint32_t)(EDI), 0x11514389u);
  /* 11514389 mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 1151438e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514390 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514391 pop ecx */
  ECX = (pop32());
  /* 11514392 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514394 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11514397 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514399 push eax */
  push32((uint32_t)(EAX));
  /* 1151439a push 1 */
  push32((uint32_t)(0x1u));
  /* 1151439c push esi */
  push32((uint32_t)(ESI));
  /* 1151439d call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x115143a3u);
  /* 115143a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115143a6:;
  /* 115143a6 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 115143ac push 1 */
  push32((uint32_t)(0x1u));
  /* 115143ae push 9 */
  push32((uint32_t)(0x9u));
  /* 115143b0 call edi */
  call_ind((uint32_t)(EDI), 0x115143b2u);
  /* 115143b2 pop ecx */
  ECX = (pop32());
  /* 115143b3 pop ecx */
  ECX = (pop32());
  /* 115143b4 jmp 0x115143bc */
  goto L_115143bc;
L_115143b6:;
  /* 115143b6 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_115143bc:;
  /* 115143bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 115143be call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x115143c4u);
  /* 115143c4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115143c6 pop ecx */
  ECX = (pop32());
  /* 115143c7 je 0x1151448c */
  if (C.zf) goto L_1151448c;
  /* 115143cd push 0xe */
  push32((uint32_t)(0xeu));
  /* 115143cf call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115143d5u);
  /* 115143d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115143d7 pop ecx */
  ECX = (pop32());
  /* 115143d8 je 0x1151448c */
  if (C.zf) goto L_1151448c;
  /* 115143de push 0xf */
  push32((uint32_t)(0xfu));
  /* 115143e0 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115143e6u);
  /* 115143e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115143e8 pop ecx */
  ECX = (pop32());
  /* 115143e9 je 0x1151448c */
  if (C.zf) goto L_1151448c;
  /* 115143ef push esi */
  push32((uint32_t)(ESI));
  /* 115143f0 push 0x1151b420 */
  push32((uint32_t)(0x1151b420u));
  /* 115143f5 push 6 */
  push32((uint32_t)(0x6u));
  /* 115143f7 push 0x1151b390 */
  push32((uint32_t)(0x1151b390u));
  /* 115143fc push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11514401 push ebp */
  push32((uint32_t)(EBP));
  /* 11514402 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x11514408u);
  /* 11514408 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 1151440d push ebp */
  push32((uint32_t)(EBP));
  /* 1151440e call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11514414u);
  /* 11514414 push esi */
  push32((uint32_t)(ESI));
  /* 11514415 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 1151441a call ebx */
  call_ind((uint32_t)(EBX), 0x1151441cu);
  /* 1151441c push esi */
  push32((uint32_t)(ESI));
  /* 1151441d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1151441f push 0x1151b530 */
  push32((uint32_t)(0x1151b530u));
  /* 11514424 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514426 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x1151442cu);
  /* 1151442c add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151442f mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
L_11514435:;
  /* 11514435 push esi */
  push32((uint32_t)(ESI));
  /* 11514436 push 0x1151b420 */
  push32((uint32_t)(0x1151b420u));
  /* 1151443b push 6 */
  push32((uint32_t)(0x6u));
  /* 1151443d push 0x1151b1e8 */
  push32((uint32_t)(0x1151b1e8u));
  /* 11514442 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11514447 push ebp */
  push32((uint32_t)(EBP));
  /* 11514448 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x1151444eu);
  /* 1151444e push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514453 push ebp */
  push32((uint32_t)(EBP));
  /* 11514454 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151445au);
  /* 1151445a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151445d inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11514463 cmp dword ptr [0x1151b148], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151446a jl 0x11514435 */
  if ((C.sf!=C.of)) goto L_11514435;
  /* 1151446c push esi */
  push32((uint32_t)(ESI));
  /* 1151446d push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514472 call ebx */
  call_ind((uint32_t)(EBX), 0x11514474u);
  /* 11514474 push esi */
  push32((uint32_t)(ESI));
  /* 11514475 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11514477 push 0x1151b538 */
  push32((uint32_t)(0x1151b538u));
  /* 1151447c push 6 */
  push32((uint32_t)(0x6u));
  /* 1151447e call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514484u);
  /* 11514484 push esi */
  push32((uint32_t)(ESI));
  /* 11514485 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11514487 call edi */
  call_ind((uint32_t)(EDI), 0x11514489u);
  /* 11514489 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151448c:;
  /* 1151448c push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1151448e call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514494u);
  /* 11514494 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514496 pop ecx */
  ECX = (pop32());
  /* 11514497 je 0x1151463b */
  if (C.zf) goto L_1151463b;
  /* 1151449d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1151449f call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115144a5u);
  /* 115144a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115144a7 pop ecx */
  ECX = (pop32());
  /* 115144a8 je 0x1151463b */
  if (C.zf) goto L_1151463b;
  /* 115144ae cmp dword ptr [0x1151b344], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115144b4 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 115144ba jle 0x11514551 */
  if ((C.zf||C.sf!=C.of)) goto L_11514551;
L_115144c0:;
  /* 115144c0 push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 115144c5 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115144cbu);
  /* 115144cb cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115144d1 pop ecx */
  ECX = (pop32());
  /* 115144d2 jge 0x115144fd */
  if ((C.sf==C.of)) goto L_115144fd;
  /* 115144d4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 115144d6 push 0x1151b438 */
  push32((uint32_t)(0x1151b438u));
  /* 115144db push 5 */
  push32((uint32_t)(0x5u));
  /* 115144dd push 0x1151b280 */
  push32((uint32_t)(0x1151b280u));
  /* 115144e2 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115144e7 push ebp */
  push32((uint32_t)(EBP));
  /* 115144e8 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x115144eeu);
  /* 115144ee push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 115144f3 push ebp */
  push32((uint32_t)(EBP));
  /* 115144f4 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115144fau);
  /* 115144fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115144fd:;
  /* 115144fd push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 11514502 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11514508u);
  /* 11514508 cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151450e pop ecx */
  ECX = (pop32());
  /* 1151450f jge 0x1151453a */
  if ((C.sf==C.of)) goto L_1151453a;
  /* 11514511 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11514513 push 0x1151b438 */
  push32((uint32_t)(0x1151b438u));
  /* 11514518 push 5 */
  push32((uint32_t)(0x5u));
  /* 1151451a push 0x1151b658 */
  push32((uint32_t)(0x1151b658u));
  /* 1151451f push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11514524 push ebp */
  push32((uint32_t)(EBP));
  /* 11514525 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x1151452bu);
  /* 1151452b push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 11514530 push ebp */
  push32((uint32_t)(EBP));
  /* 11514531 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11514537u);
  /* 11514537 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151453a:;
  /* 1151453a inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11514540 mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 11514545 cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151454b jl 0x115144c0 */
  if ((C.sf!=C.of)) goto L_115144c0;
L_11514551:;
  /* 11514551 push esi */
  push32((uint32_t)(ESI));
  /* 11514552 push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 11514557 call ebx */
  call_ind((uint32_t)(EBX), 0x11514559u);
  /* 11514559 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 1151455e push esi */
  push32((uint32_t)(ESI));
  /* 1151455f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514560 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11514562 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514564 add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11514566 push eax */
  push32((uint32_t)(EAX));
  /* 11514567 push 0x1151b638 */
  push32((uint32_t)(0x1151b638u));
  /* 1151456c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151456e call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514574u);
  /* 11514574 push esi */
  push32((uint32_t)(ESI));
  /* 11514575 push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 1151457a call ebx */
  call_ind((uint32_t)(EBX), 0x1151457cu);
  /* 1151457c mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11514581 push esi */
  push32((uint32_t)(ESI));
  /* 11514582 push 3 */
  push32((uint32_t)(0x3u));
  /* 11514584 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514585 pop ecx */
  ECX = (pop32());
  /* 11514586 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514588 add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1151458a push eax */
  push32((uint32_t)(EAX));
  /* 1151458b push 0x1151b638 */
  push32((uint32_t)(0x1151b638u));
  /* 11514590 push 5 */
  push32((uint32_t)(0x5u));
  /* 11514592 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514598u);
  /* 11514598 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1151459a call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115145a0u);
  /* 115145a0 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115145a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115145a5 je 0x115145f1 */
  if (C.zf) goto L_115145f1;
  /* 115145a7 push esi */
  push32((uint32_t)(ESI));
  /* 115145a8 push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 115145ad call ebx */
  call_ind((uint32_t)(EBX), 0x115145afu);
  /* 115145af mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 115145b4 push esi */
  push32((uint32_t)(ESI));
  /* 115145b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115145b6 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115145b8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115145ba add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115145bc push eax */
  push32((uint32_t)(EAX));
  /* 115145bd push 0x1151b638 */
  push32((uint32_t)(0x1151b638u));
  /* 115145c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 115145c4 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115145cau);
  /* 115145ca push esi */
  push32((uint32_t)(ESI));
  /* 115145cb push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 115145d0 call ebx */
  call_ind((uint32_t)(EBX), 0x115145d2u);
  /* 115145d2 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 115145d7 push esi */
  push32((uint32_t)(ESI));
  /* 115145d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115145da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115145db pop ecx */
  ECX = (pop32());
  /* 115145dc idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115145de add al, 0x40 */
  { uint32_t _a=(AL),_b=(0x40u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 115145e0 push eax */
  push32((uint32_t)(EAX));
  /* 115145e1 push 0x1151b638 */
  push32((uint32_t)(0x1151b638u));
  /* 115145e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 115145e8 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115145eeu);
  /* 115145ee add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115145f1:;
  /* 115145f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 115145f3 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x115145f9u);
  /* 115145f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115145fb pop ecx */
  ECX = (pop32());
  /* 115145fc je 0x11514609 */
  if (C.zf) goto L_11514609;
  /* 115145fe mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11514603 add dword ptr [0x1151b344], eax */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x1151b344), (_r)); fl_add(_a,_b,_r,32); }
L_11514609:;
  /* 11514609 push 3 */
  push32((uint32_t)(0x3u));
  /* 1151460b call dword ptr [0x11519120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519120))), 0x11514611u);
  /* 11514611 mov dword ptr [esp], 0x3e8 */
  w32((uint32_t)(ESP), (0x3e8u));
  /* 11514618 push 3 */
  push32((uint32_t)(0x3u));
  /* 1151461a call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11514620u);
  /* 11514620 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 11514625 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514627 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x1151462du);
  /* 1151462d push esi */
  push32((uint32_t)(ESI));
  /* 1151462e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11514630 call edi */
  call_ind((uint32_t)(EDI), 0x11514632u);
  /* 11514632 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514634 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514636 call edi */
  call_ind((uint32_t)(EDI), 0x11514638u);
  /* 11514638 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151463b:;
  /* 1151463b push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1151463d call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514643u);
  /* 11514643 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514645 pop ecx */
  ECX = (pop32());
  /* 11514646 je 0x115147f9 */
  if (C.zf) goto L_115147f9;
  /* 1151464c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1151464e call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514654u);
  /* 11514654 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514656 pop ecx */
  ECX = (pop32());
  /* 11514657 je 0x115147f9 */
  if (C.zf) goto L_115147f9;
  /* 1151465d mov edi, dword ptr [0x11519124] */
  EDI = (r32((uint32_t)(0x11519124)));
  /* 11514663 push esi */
  push32((uint32_t)(ESI));
  /* 11514664 push 0x1151b650 */
  push32((uint32_t)(0x1151b650u));
  /* 11514669 call edi */
  call_ind((uint32_t)(EDI), 0x1151466bu);
  /* 1151466b mov edx, eax */
  EDX = (EAX);
  /* 1151466d push esi */
  push32((uint32_t)(ESI));
  /* 1151466e push 0x1151b440 */
  push32((uint32_t)(0x1151b440u));
  /* 11514673 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11514677 call edi */
  call_ind((uint32_t)(EDI), 0x11514679u);
  /* 11514679 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 1151467d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514680 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514682 mov eax, dword ptr [0x1151b344] */
  EAX = (r32((uint32_t)(0x1151b344)));
  /* 11514687 lea edx, [eax + eax + 0xa] */
  EDX = ((uint32_t)(EAX + EAX*1 + 0xa));
  /* 1151468b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151468d jge 0x115147f3 */
  if ((C.sf==C.of)) goto L_115147f3;
  /* 11514693 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11514695 mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 1151469b jle 0x11514736 */
  if ((C.zf||C.sf!=C.of)) goto L_11514736;
  /* 115146a1 mov edi, dword ptr [0x1151917c] */
  EDI = (r32((uint32_t)(0x1151917c)));
L_115146a7:;
  /* 115146a7 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 115146ac call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115146b2u);
  /* 115146b2 cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115146b8 pop ecx */
  ECX = (pop32());
  /* 115146b9 jge 0x115146e3 */
  if ((C.sf==C.of)) goto L_115146e3;
  /* 115146bb push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 115146c0 push 0x1151b440 */
  push32((uint32_t)(0x1151b440u));
  /* 115146c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 115146c7 push 0x1151b280 */
  push32((uint32_t)(0x1151b280u));
  /* 115146cc push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 115146d1 push ebp */
  push32((uint32_t)(EBP));
  /* 115146d2 call edi */
  call_ind((uint32_t)(EDI), 0x115146d4u);
  /* 115146d4 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 115146d9 push ebp */
  push32((uint32_t)(EBP));
  /* 115146da call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115146e0u);
  /* 115146e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115146e3:;
  /* 115146e3 push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 115146e8 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115146eeu);
  /* 115146ee cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115146f4 pop ecx */
  ECX = (pop32());
  /* 115146f5 jge 0x1151471f */
  if ((C.sf==C.of)) goto L_1151471f;
  /* 115146f7 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 115146fc push 0x1151b440 */
  push32((uint32_t)(0x1151b440u));
  /* 11514701 push 5 */
  push32((uint32_t)(0x5u));
  /* 11514703 push 0x1151b658 */
  push32((uint32_t)(0x1151b658u));
  /* 11514708 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 1151470d push ebp */
  push32((uint32_t)(EBP));
  /* 1151470e call edi */
  call_ind((uint32_t)(EDI), 0x11514710u);
  /* 11514710 push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 11514715 push ebp */
  push32((uint32_t)(EBP));
  /* 11514716 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151471cu);
  /* 1151471c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151471f:;
  /* 1151471f inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11514725 mov eax, dword ptr [0x1151b148] */
  EAX = (r32((uint32_t)(0x1151b148)));
  /* 1151472a cmp eax, dword ptr [0x1151b344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11514730 jl 0x115146a7 */
  if ((C.sf!=C.of)) goto L_115146a7;
L_11514736:;
  /* 11514736 push esi */
  push32((uint32_t)(ESI));
  /* 11514737 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 1151473c call ebx */
  call_ind((uint32_t)(EBX), 0x1151473eu);
  /* 1151473e mov edi, 0x80 */
  EDI = (0x80u);
  /* 11514743 push esi */
  push32((uint32_t)(ESI));
  /* 11514744 push edi */
  push32((uint32_t)(EDI));
  /* 11514745 push 0x1151b650 */
  push32((uint32_t)(0x1151b650u));
  /* 1151474a push 5 */
  push32((uint32_t)(0x5u));
  /* 1151474c call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514752u);
  /* 11514752 push esi */
  push32((uint32_t)(ESI));
  /* 11514753 push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 11514758 call ebx */
  call_ind((uint32_t)(EBX), 0x1151475au);
  /* 1151475a push esi */
  push32((uint32_t)(ESI));
  /* 1151475b push edi */
  push32((uint32_t)(EDI));
  /* 1151475c push 0x1151b650 */
  push32((uint32_t)(0x1151b650u));
  /* 11514761 push 5 */
  push32((uint32_t)(0x5u));
  /* 11514763 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514769u);
  /* 11514769 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1151476b call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514771u);
  /* 11514771 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514774 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514776 je 0x115147a9 */
  if (C.zf) goto L_115147a9;
  /* 11514778 push esi */
  push32((uint32_t)(ESI));
  /* 11514779 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 1151477e call ebx */
  call_ind((uint32_t)(EBX), 0x11514780u);
  /* 11514780 push esi */
  push32((uint32_t)(ESI));
  /* 11514781 push edi */
  push32((uint32_t)(EDI));
  /* 11514782 push 0x1151b650 */
  push32((uint32_t)(0x1151b650u));
  /* 11514787 push 5 */
  push32((uint32_t)(0x5u));
  /* 11514789 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x1151478fu);
  /* 1151478f push esi */
  push32((uint32_t)(ESI));
  /* 11514790 push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 11514795 call ebx */
  call_ind((uint32_t)(EBX), 0x11514797u);
  /* 11514797 push esi */
  push32((uint32_t)(ESI));
  /* 11514798 push edi */
  push32((uint32_t)(EDI));
  /* 11514799 push 0x1151b650 */
  push32((uint32_t)(0x1151b650u));
  /* 1151479e push 5 */
  push32((uint32_t)(0x5u));
  /* 115147a0 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115147a6u);
  /* 115147a6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115147a9:;
  /* 115147a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115147ab call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x115147b1u);
  /* 115147b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115147b3 pop ecx */
  ECX = (pop32());
  /* 115147b4 je 0x115147c1 */
  if (C.zf) goto L_115147c1;
  /* 115147b6 mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 115147bb add dword ptr [0x1151b344], eax */
  { uint32_t _a=(r32((uint32_t)(0x1151b344))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x1151b344), (_r)); fl_add(_a,_b,_r,32); }
L_115147c1:;
  /* 115147c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 115147c3 call dword ptr [0x11519120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519120))), 0x115147c9u);
  /* 115147c9 mov edi, dword ptr [0x115190bc] */
  EDI = (r32((uint32_t)(0x115190bc)));
  /* 115147cf mov dword ptr [esp], 0x3e8 */
  w32((uint32_t)(ESP), (0x3e8u));
  /* 115147d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 115147d8 call edi */
  call_ind((uint32_t)(EDI), 0x115147dau);
  /* 115147da push 0xfa */
  push32((uint32_t)(0xfau));
  /* 115147df push 0xe */
  push32((uint32_t)(0xeu));
  /* 115147e1 call edi */
  call_ind((uint32_t)(EDI), 0x115147e3u);
  /* 115147e3 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 115147e9 push esi */
  push32((uint32_t)(ESI));
  /* 115147ea push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115147ec call edi */
  call_ind((uint32_t)(EDI), 0x115147eeu);
  /* 115147ee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115147f1 jmp 0x115147f9 */
  goto L_115147f9;
L_115147f3:;
  /* 115147f3 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_115147f9:;
  /* 115147f9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115147fb call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514801u);
  /* 11514801 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514803 pop ecx */
  ECX = (pop32());
  /* 11514804 je 0x11514866 */
  if (C.zf) goto L_11514866;
  /* 11514806 push esi */
  push32((uint32_t)(ESI));
  /* 11514807 push 0x1151b560 */
  push32((uint32_t)(0x1151b560u));
  /* 1151480c call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11514812u);
  /* 11514812 pop ecx */
  ECX = (pop32());
  /* 11514813 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514815 pop ecx */
  ECX = (pop32());
  /* 11514816 jle 0x11514866 */
  if ((C.zf||C.sf!=C.of)) goto L_11514866;
  /* 11514818 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1151481a call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514820u);
  /* 11514820 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514822 pop ecx */
  ECX = (pop32());
  /* 11514823 je 0x11514831 */
  if (C.zf) goto L_11514831;
  /* 11514825 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11514827 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514829 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x1151482fu);
  /* 1151482f pop ecx */
  ECX = (pop32());
  /* 11514830 pop ecx */
  ECX = (pop32());
L_11514831:;
  /* 11514831 push esi */
  push32((uint32_t)(ESI));
  /* 11514832 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514837 push esi */
  push32((uint32_t)(ESI));
  /* 11514838 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x1151483eu);
  /* 1151483e push esi */
  push32((uint32_t)(ESI));
  /* 1151483f call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11514845u);
  /* 11514845 push esi */
  push32((uint32_t)(ESI));
  /* 11514846 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 1151484b call ebx */
  call_ind((uint32_t)(EBX), 0x1151484du);
  /* 1151484d push esi */
  push32((uint32_t)(ESI));
  /* 1151484e push 6 */
  push32((uint32_t)(0x6u));
  /* 11514850 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11514856u);
  /* 11514856 push esi */
  push32((uint32_t)(ESI));
  /* 11514857 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 1151485c call ebx */
  call_ind((uint32_t)(EBX), 0x1151485eu);
  /* 1151485e push esi */
  push32((uint32_t)(ESI));
  /* 1151485f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11514861 call edi */
  call_ind((uint32_t)(EDI), 0x11514863u);
  /* 11514863 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514866:;
  /* 11514866 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11514868 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151486eu);
  /* 1151486e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514870 pop ecx */
  ECX = (pop32());
  /* 11514871 je 0x11514893 */
  if (C.zf) goto L_11514893;
  /* 11514873 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514875 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x1151487bu);
  /* 1151487b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151487d pop ecx */
  ECX = (pop32());
  /* 1151487e je 0x11514893 */
  if (C.zf) goto L_11514893;
  /* 11514880 push 0x1151a304 */
  push32((uint32_t)(0x1151a304u));
  /* 11514885 call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x1151488bu);
  /* 1151488b push esi */
  push32((uint32_t)(ESI));
  /* 1151488c push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1151488e call edi */
  call_ind((uint32_t)(EDI), 0x11514890u);
  /* 11514890 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514893:;
  /* 11514893 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11514895 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151489bu);
  /* 1151489b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151489d pop ecx */
  ECX = (pop32());
  /* 1151489e jne 0x115148e8 */
  if (!C.zf) goto L_115148e8;
  /* 115148a0 push esi */
  push32((uint32_t)(ESI));
  /* 115148a1 push 0x1151b560 */
  push32((uint32_t)(0x1151b560u));
  /* 115148a6 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x115148acu);
  /* 115148ac pop ecx */
  ECX = (pop32());
  /* 115148ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115148af pop ecx */
  ECX = (pop32());
  /* 115148b0 jne 0x115148e8 */
  if (!C.zf) goto L_115148e8;
  /* 115148b2 push esi */
  push32((uint32_t)(ESI));
  /* 115148b3 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 115148b8 push esi */
  push32((uint32_t)(ESI));
  /* 115148b9 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x115148bfu);
  /* 115148bf push esi */
  push32((uint32_t)(ESI));
  /* 115148c0 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x115148c6u);
  /* 115148c6 push esi */
  push32((uint32_t)(ESI));
  /* 115148c7 push 0x1151b668 */
  push32((uint32_t)(0x1151b668u));
  /* 115148cc call ebx */
  call_ind((uint32_t)(EBX), 0x115148ceu);
  /* 115148ce push 6 */
  push32((uint32_t)(0x6u));
  /* 115148d0 push esi */
  push32((uint32_t)(ESI));
  /* 115148d1 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x115148d7u);
  /* 115148d7 push esi */
  push32((uint32_t)(ESI));
  /* 115148d8 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 115148dd call ebx */
  call_ind((uint32_t)(EBX), 0x115148dfu);
  /* 115148df push 1 */
  push32((uint32_t)(0x1u));
  /* 115148e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115148e3 call edi */
  call_ind((uint32_t)(EDI), 0x115148e5u);
  /* 115148e5 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115148e8:;
  /* 115148e8 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 115148ea call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115148f0u);
  /* 115148f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115148f2 pop ecx */
  ECX = (pop32());
  /* 115148f3 je 0x11514920 */
  if (C.zf) goto L_11514920;
  /* 115148f5 push esi */
  push32((uint32_t)(ESI));
  /* 115148f6 push 0x1151b410 */
  push32((uint32_t)(0x1151b410u));
  /* 115148fb call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11514901u);
  /* 11514901 pop ecx */
  ECX = (pop32());
  /* 11514902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514904 pop ecx */
  ECX = (pop32());
  /* 11514905 jle 0x11514920 */
  if ((C.zf||C.sf!=C.of)) goto L_11514920;
  /* 11514907 push dword ptr [0x1151b320] */
  push32((uint32_t)(r32((uint32_t)(0x1151b320))));
  /* 1151490d push 0x1151a33c */
  push32((uint32_t)(0x1151a33cu));
  /* 11514912 call dword ptr [0x11519130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519130))), 0x11514918u);
  /* 11514918 push esi */
  push32((uint32_t)(ESI));
  /* 11514919 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1151491b call edi */
  call_ind((uint32_t)(EDI), 0x1151491du);
  /* 1151491d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514920:;
  /* 11514920 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11514922 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514928u);
  /* 11514928 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151492a pop ecx */
  ECX = (pop32());
  /* 1151492b jne 0x115149b9 */
  if (!C.zf) goto L_115149b9;
  /* 11514931 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11514933 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514939u);
  /* 11514939 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151493b pop ecx */
  ECX = (pop32());
  /* 1151493c je 0x115149b9 */
  if (C.zf) goto L_115149b9;
  /* 1151493e push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514943 push 0x1151b410 */
  push32((uint32_t)(0x1151b410u));
  /* 11514948 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x1151494eu);
  /* 1151494e pop ecx */
  ECX = (pop32());
  /* 1151494f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514951 pop ecx */
  ECX = (pop32());
  /* 11514952 jle 0x115149b9 */
  if ((C.zf||C.sf!=C.of)) goto L_115149b9;
  /* 11514954 push esi */
  push32((uint32_t)(ESI));
  /* 11514955 push 0x1151b410 */
  push32((uint32_t)(0x1151b410u));
  /* 1151495a call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11514960u);
  /* 11514960 pop ecx */
  ECX = (pop32());
  /* 11514961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514963 pop ecx */
  ECX = (pop32());
  /* 11514964 jle 0x115149b9 */
  if ((C.zf||C.sf!=C.of)) goto L_115149b9;
  /* 11514966 push 0x1151a2fc */
  push32((uint32_t)(0x1151a2fcu));
  /* 1151496b call dword ptr [0x11519128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519128))), 0x11514971u);
  /* 11514971 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514973 pop ecx */
  ECX = (pop32());
  /* 11514974 je 0x115149b2 */
  if (C.zf) goto L_115149b2;
  /* 11514976 push esi */
  push32((uint32_t)(ESI));
  /* 11514977 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 1151497c call ebx */
  call_ind((uint32_t)(EBX), 0x1151497eu);
  /* 1151497e push 1 */
  push32((uint32_t)(0x1u));
  /* 11514980 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514985 call ebx */
  call_ind((uint32_t)(EBX), 0x11514987u);
  /* 11514987 push esi */
  push32((uint32_t)(ESI));
  /* 11514988 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151498a call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11514990u);
  /* 11514990 push 2 */
  push32((uint32_t)(0x2u));
  /* 11514992 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514994 push 0x1151b400 */
  push32((uint32_t)(0x1151b400u));
  /* 11514999 call dword ptr [0x115190f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f8))), 0x1151499fu);
  /* 1151499f push esi */
  push32((uint32_t)(ESI));
  /* 115149a0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115149a2 call edi */
  call_ind((uint32_t)(EDI), 0x115149a4u);
  /* 115149a4 push esi */
  push32((uint32_t)(ESI));
  /* 115149a5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 115149a7 call edi */
  call_ind((uint32_t)(EDI), 0x115149a9u);
  /* 115149a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115149ab push 0xf */
  push32((uint32_t)(0xfu));
  /* 115149ad call edi */
  call_ind((uint32_t)(EDI), 0x115149afu);
  /* 115149af add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115149b2:;
  /* 115149b2 push esi */
  push32((uint32_t)(ESI));
  /* 115149b3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115149b5 call edi */
  call_ind((uint32_t)(EDI), 0x115149b7u);
  /* 115149b7 pop ecx */
  ECX = (pop32());
  /* 115149b8 pop ecx */
  ECX = (pop32());
L_115149b9:;
  /* 115149b9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115149bb call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115149c1u);
  /* 115149c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115149c3 pop ecx */
  ECX = (pop32());
  /* 115149c4 jne 0x115149e0 */
  if (!C.zf) goto L_115149e0;
  /* 115149c6 push esi */
  push32((uint32_t)(ESI));
  /* 115149c7 push 0x1151b410 */
  push32((uint32_t)(0x1151b410u));
  /* 115149cc call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x115149d2u);
  /* 115149d2 pop ecx */
  ECX = (pop32());
  /* 115149d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115149d5 pop ecx */
  ECX = (pop32());
  /* 115149d6 jne 0x115149e0 */
  if (!C.zf) goto L_115149e0;
  /* 115149d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115149da push 0xc */
  push32((uint32_t)(0xcu));
  /* 115149dc call edi */
  call_ind((uint32_t)(EDI), 0x115149deu);
  /* 115149de pop ecx */
  ECX = (pop32());
  /* 115149df pop ecx */
  ECX = (pop32());
L_115149e0:;
  /* 115149e0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115149e2 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115149e8u);
  /* 115149e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115149ea pop ecx */
  ECX = (pop32());
  /* 115149eb jne 0x11514a67 */
  if (!C.zf) goto L_11514a67;
  /* 115149ed push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 115149f2 push 0x1151b400 */
  push32((uint32_t)(0x1151b400u));
  /* 115149f7 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x115149fdu);
  /* 115149fd pop ecx */
  ECX = (pop32());
  /* 115149fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514a00 pop ecx */
  ECX = (pop32());
  /* 11514a01 jle 0x11514a67 */
  if ((C.zf||C.sf!=C.of)) goto L_11514a67;
  /* 11514a03 push esi */
  push32((uint32_t)(ESI));
  /* 11514a04 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514a09 push esi */
  push32((uint32_t)(ESI));
  /* 11514a0a call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11514a10u);
  /* 11514a10 push esi */
  push32((uint32_t)(ESI));
  /* 11514a11 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11514a17u);
  /* 11514a17 push esi */
  push32((uint32_t)(ESI));
  /* 11514a18 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514a1d call ebx */
  call_ind((uint32_t)(EBX), 0x11514a1fu);
  /* 11514a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11514a21 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514a26 call ebx */
  call_ind((uint32_t)(EBX), 0x11514a28u);
  /* 11514a28 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514a2a push esi */
  push32((uint32_t)(ESI));
  /* 11514a2b call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11514a31u);
  /* 11514a31 push esi */
  push32((uint32_t)(ESI));
  /* 11514a32 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514a37 call ebx */
  call_ind((uint32_t)(EBX), 0x11514a39u);
  /* 11514a39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11514a3b call dword ptr [0x11519138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519138))), 0x11514a41u);
  /* 11514a41 push dword ptr [0x1151b320] */
  push32((uint32_t)(r32((uint32_t)(0x1151b320))));
  /* 11514a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514a49 push esi */
  push32((uint32_t)(ESI));
  /* 11514a4a call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514a50u);
  /* 11514a50 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514a53 push 0x1151a2f4 */
  push32((uint32_t)(0x1151a2f4u));
  /* 11514a58 call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x11514a5eu);
  /* 11514a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11514a60 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514a62 call edi */
  call_ind((uint32_t)(EDI), 0x11514a64u);
  /* 11514a64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514a67:;
  /* 11514a67 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514a69 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514a6fu);
  /* 11514a6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514a71 pop ecx */
  ECX = (pop32());
  /* 11514a72 jne 0x11514b29 */
  if (!C.zf) goto L_11514b29;
  /* 11514a78 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514a7a call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514a80u);
  /* 11514a80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514a82 pop ecx */
  ECX = (pop32());
  /* 11514a83 je 0x11514b29 */
  if (C.zf) goto L_11514b29;
  /* 11514a89 mov edi, dword ptr [0x11519110] */
  EDI = (r32((uint32_t)(0x11519110)));
  /* 11514a8f push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514a94 call edi */
  call_ind((uint32_t)(EDI), 0x11514a96u);
  /* 11514a96 mov edx, eax */
  EDX = (EAX);
  /* 11514a98 mov dword ptr [esp], 0x1151b310 */
  w32((uint32_t)(ESP), (0x1151b310u));
  /* 11514a9f mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11514aa3 call edi */
  call_ind((uint32_t)(EDI), 0x11514aa5u);
  /* 11514aa5 pop ecx */
  ECX = (pop32());
  /* 11514aa6 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11514aaa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514aac jne 0x11514ad9 */
  if (!C.zf) goto L_11514ad9;
  /* 11514aae mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11514ab3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11514ab9 push eax */
  push32((uint32_t)(EAX));
  /* 11514aba push 0xb */
  push32((uint32_t)(0xbu));
  /* 11514abc call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11514ac2u);
  /* 11514ac2 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11514ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514aca push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514acc call edi */
  call_ind((uint32_t)(EDI), 0x11514aceu);
  /* 11514ace push 1 */
  push32((uint32_t)(0x1u));
  /* 11514ad0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514ad2 call edi */
  call_ind((uint32_t)(EDI), 0x11514ad4u);
  /* 11514ad4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514ad7 jmp 0x11514b29 */
  goto L_11514b29;
L_11514ad9:;
  /* 11514ad9 mov edi, dword ptr [0x115190b8] */
  EDI = (r32((uint32_t)(0x115190b8)));
  /* 11514adf push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514ae1 call edi */
  call_ind((uint32_t)(EDI), 0x11514ae3u);
  /* 11514ae3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514ae5 pop ecx */
  ECX = (pop32());
  /* 11514ae6 je 0x11514b23 */
  if (C.zf) goto L_11514b23;
  /* 11514ae8 push esi */
  push32((uint32_t)(ESI));
  /* 11514ae9 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514aee call ebx */
  call_ind((uint32_t)(EBX), 0x11514af0u);
  /* 11514af0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514af2 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514af7 call ebx */
  call_ind((uint32_t)(EBX), 0x11514af9u);
  /* 11514af9 push esi */
  push32((uint32_t)(ESI));
  /* 11514afa push esi */
  push32((uint32_t)(ESI));
  /* 11514afb push 0x1151b428 */
  push32((uint32_t)(0x1151b428u));
  /* 11514b00 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514b02 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514b08u);
  /* 11514b08 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514b0a call edi */
  call_ind((uint32_t)(EDI), 0x11514b0cu);
  /* 11514b0c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514b0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514b11 jne 0x11514b23 */
  if (!C.zf) goto L_11514b23;
  /* 11514b13 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11514b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514b1b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11514b1d call edi */
  call_ind((uint32_t)(EDI), 0x11514b1fu);
  /* 11514b1f pop ecx */
  ECX = (pop32());
  /* 11514b20 pop ecx */
  ECX = (pop32());
  /* 11514b21 jmp 0x11514b29 */
  goto L_11514b29;
L_11514b23:;
  /* 11514b23 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11514b29:;
  /* 11514b29 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514b2b call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514b31u);
  /* 11514b31 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514b33 pop ecx */
  ECX = (pop32());
  /* 11514b34 jne 0x11514c46 */
  if (!C.zf) goto L_11514c46;
  /* 11514b3a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514b3c call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514b42u);
  /* 11514b42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514b44 pop ecx */
  ECX = (pop32());
  /* 11514b45 jne 0x11514c46 */
  if (!C.zf) goto L_11514c46;
  /* 11514b4b push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514b50 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11514b56u);
  /* 11514b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514b58 pop ecx */
  ECX = (pop32());
  /* 11514b59 jne 0x11514c46 */
  if (!C.zf) goto L_11514c46;
  /* 11514b5f mov eax, dword ptr [0x1151b168] */
  EAX = (r32((uint32_t)(0x1151b168)));
  /* 11514b64 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11514b6a add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514b6f push eax */
  push32((uint32_t)(EAX));
  /* 11514b70 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11514b72 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11514b78u);
  /* 11514b78 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514b7d call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11514b83u);
  /* 11514b83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514b88 jle 0x11514bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_11514bc7;
  /* 11514b8a push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514b8f call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11514b95u);
  /* 11514b95 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11514b9b push eax */
  push32((uint32_t)(EAX));
  /* 11514b9c push 3 */
  push32((uint32_t)(0x3u));
  /* 11514b9e push esi */
  push32((uint32_t)(ESI));
  /* 11514b9f call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514ba5u);
  /* 11514ba5 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514baa call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11514bb0u);
  /* 11514bb0 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11514bb6 push eax */
  push32((uint32_t)(EAX));
  /* 11514bb7 push 0x1151a324 */
  push32((uint32_t)(0x1151a324u));
  /* 11514bbc call dword ptr [0x11519130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519130))), 0x11514bc2u);
  /* 11514bc2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514bc5 jmp 0x11514bd3 */
  goto L_11514bd3;
L_11514bc7:;
  /* 11514bc7 push 0x1151a31c */
  push32((uint32_t)(0x1151a31cu));
  /* 11514bcc call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x11514bd2u);
  /* 11514bd2 pop ecx */
  ECX = (pop32());
L_11514bd3:;
  /* 11514bd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11514bd5 call dword ptr [0x11519138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519138))), 0x11514bdbu);
  /* 11514bdb push esi */
  push32((uint32_t)(ESI));
  /* 11514bdc push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514be1 push esi */
  push32((uint32_t)(ESI));
  /* 11514be2 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11514be8u);
  /* 11514be8 push esi */
  push32((uint32_t)(ESI));
  /* 11514be9 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11514befu);
  /* 11514bef push 5 */
  push32((uint32_t)(0x5u));
  /* 11514bf1 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11514bf7u);
  /* 11514bf7 push esi */
  push32((uint32_t)(ESI));
  /* 11514bf8 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514bfd call ebx */
  call_ind((uint32_t)(EBX), 0x11514bffu);
  /* 11514bff push esi */
  push32((uint32_t)(ESI));
  /* 11514c00 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11514c06u);
  /* 11514c06 push esi */
  push32((uint32_t)(ESI));
  /* 11514c07 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514c0c call ebx */
  call_ind((uint32_t)(EBX), 0x11514c0eu);
  /* 11514c0e push 5 */
  push32((uint32_t)(0x5u));
  /* 11514c10 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11514c16u);
  /* 11514c16 push 0x1151b1f8 */
  push32((uint32_t)(0x1151b1f8u));
  /* 11514c1b push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514c20 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11514c26u);
  /* 11514c26 push esi */
  push32((uint32_t)(ESI));
  /* 11514c27 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514c2c call ebx */
  call_ind((uint32_t)(EBX), 0x11514c2eu);
  /* 11514c2e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514c31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514c33 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514c35 call edi */
  call_ind((uint32_t)(EDI), 0x11514c37u);
  /* 11514c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514c39 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514c3b call edi */
  call_ind((uint32_t)(EDI), 0x11514c3du);
  /* 11514c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11514c3f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11514c41 call edi */
  call_ind((uint32_t)(EDI), 0x11514c43u);
  /* 11514c43 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514c46:;
  /* 11514c46 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514c48 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514c4eu);
  /* 11514c4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514c50 pop ecx */
  ECX = (pop32());
  /* 11514c51 jne 0x11514cc2 */
  if (!C.zf) goto L_11514cc2;
  /* 11514c53 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514c55 mov edi, 0x1151b5d8 */
  EDI = (0x1151b5d8u);
  /* 11514c5a push 0x1151b1e8 */
  push32((uint32_t)(0x1151b1e8u));
  /* 11514c5f push edi */
  push32((uint32_t)(EDI));
  /* 11514c60 call dword ptr [0x1151913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151913c))), 0x11514c66u);
  /* 11514c66 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514c68 mov edx, eax */
  EDX = (EAX);
  /* 11514c6a push 0x1151b390 */
  push32((uint32_t)(0x1151b390u));
  /* 11514c6f push edi */
  push32((uint32_t)(EDI));
  /* 11514c70 mov dword ptr [esp + 0x28], edx */
  w32((uint32_t)(ESP + 0x28), (EDX));
  /* 11514c74 call dword ptr [0x1151913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151913c))), 0x11514c7au);
  /* 11514c7a mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11514c7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514c81 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514c83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11514c85 jle 0x11514cbc */
  if ((C.zf||C.sf!=C.of)) goto L_11514cbc;
  /* 11514c87 push esi */
  push32((uint32_t)(ESI));
  /* 11514c88 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514c8a push edi */
  push32((uint32_t)(EDI));
  /* 11514c8b call dword ptr [0x11519134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519134))), 0x11514c91u);
  /* 11514c91 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514c93 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x11514c99u);
  /* 11514c99 push esi */
  push32((uint32_t)(ESI));
  /* 11514c9a push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514c9f call ebx */
  call_ind((uint32_t)(EBX), 0x11514ca1u);
  /* 11514ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514ca3 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514ca8 call ebx */
  call_ind((uint32_t)(EBX), 0x11514caau);
  /* 11514caa push esi */
  push32((uint32_t)(ESI));
  /* 11514cab push esi */
  push32((uint32_t)(ESI));
  /* 11514cac push 0x1151b428 */
  push32((uint32_t)(0x1151b428u));
  /* 11514cb1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514cb3 call dword ptr [0x115190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190fc))), 0x11514cb9u);
  /* 11514cb9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514cbc:;
  /* 11514cbc mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11514cc2:;
  /* 11514cc2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514cc4 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514ccau);
  /* 11514cca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514ccc pop ecx */
  ECX = (pop32());
  /* 11514ccd jne 0x11514d40 */
  if (!C.zf) goto L_11514d40;
  /* 11514ccf push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514cd1 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514cd7u);
  /* 11514cd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514cd9 pop ecx */
  ECX = (pop32());
  /* 11514cda je 0x11514d40 */
  if (C.zf) goto L_11514d40;
  /* 11514cdc mov edi, 0x1151b648 */
  EDI = (0x1151b648u);
  /* 11514ce1 push 0x1151b188 */
  push32((uint32_t)(0x1151b188u));
  /* 11514ce6 push edi */
  push32((uint32_t)(EDI));
  /* 11514ce7 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x11514cedu);
  /* 11514ced mov edx, eax */
  EDX = (EAX);
  /* 11514cef push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11514cf5 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11514cf9 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x11514cffu);
  /* 11514cff mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11514d03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514d06 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514d08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11514d0a jle 0x11514d3a */
  if ((C.zf||C.sf!=C.of)) goto L_11514d3a;
  /* 11514d0c mov edi, dword ptr [0x115190c4] */
  EDI = (r32((uint32_t)(0x115190c4)));
  /* 11514d12 push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 11514d17 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 11514d1c call edi */
  call_ind((uint32_t)(EDI), 0x11514d1eu);
  /* 11514d1e push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 11514d23 push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 11514d28 call edi */
  call_ind((uint32_t)(EDI), 0x11514d2au);
  /* 11514d2a mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11514d30 push esi */
  push32((uint32_t)(ESI));
  /* 11514d31 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514d33 call edi */
  call_ind((uint32_t)(EDI), 0x11514d35u);
  /* 11514d35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514d38 jmp 0x11514d40 */
  goto L_11514d40;
L_11514d3a:;
  /* 11514d3a mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11514d40:;
  /* 11514d40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514d42 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514d48u);
  /* 11514d48 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514d4a pop ecx */
  ECX = (pop32());
  /* 11514d4b jne 0x11514db8 */
  if (!C.zf) goto L_11514db8;
  /* 11514d4d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11514d4f call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514d55u);
  /* 11514d55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514d57 pop ecx */
  ECX = (pop32());
  /* 11514d58 jne 0x11514db8 */
  if (!C.zf) goto L_11514db8;
  /* 11514d5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514d5c call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11514d62u);
  /* 11514d62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514d64 pop ecx */
  ECX = (pop32());
  /* 11514d65 je 0x11514db8 */
  if (C.zf) goto L_11514db8;
  /* 11514d67 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11514d69 push 0x1151b310 */
  push32((uint32_t)(0x1151b310u));
  /* 11514d6e push 0x1151b610 */
  push32((uint32_t)(0x1151b610u));
  /* 11514d73 push 0x1151b628 */
  push32((uint32_t)(0x1151b628u));
  /* 11514d78 call dword ptr [0x11519144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519144))), 0x11514d7eu);
  /* 11514d7e push esi */
  push32((uint32_t)(ESI));
  /* 11514d7f push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 11514d84 call ebx */
  call_ind((uint32_t)(EBX), 0x11514d86u);
  /* 11514d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514d88 push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 11514d8d call ebx */
  call_ind((uint32_t)(EBX), 0x11514d8fu);
  /* 11514d8f push esi */
  push32((uint32_t)(ESI));
  /* 11514d90 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11514d95 push 0x1151b628 */
  push32((uint32_t)(0x1151b628u));
  /* 11514d9a push 5 */
  push32((uint32_t)(0x5u));
  /* 11514d9c call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x11514da2u);
  /* 11514da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514da4 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11514da6 call edi */
  call_ind((uint32_t)(EDI), 0x11514da8u);
  /* 11514da8 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 11514dad push 0xe */
  push32((uint32_t)(0xeu));
  /* 11514daf call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11514db5u);
  /* 11514db5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514db8:;
  /* 11514db8 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11514dba call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514dc0u);
  /* 11514dc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514dc2 pop ecx */
  ECX = (pop32());
  /* 11514dc3 je 0x11514e91 */
  if (C.zf) goto L_11514e91;
  /* 11514dc9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11514dcb call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514dd1u);
  /* 11514dd1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514dd3 pop ecx */
  ECX = (pop32());
  /* 11514dd4 jne 0x11514e91 */
  if (!C.zf) goto L_11514e91;
  /* 11514dda mov edi, dword ptr [0x11519110] */
  EDI = (r32((uint32_t)(0x11519110)));
  /* 11514de0 push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 11514de5 call edi */
  call_ind((uint32_t)(EDI), 0x11514de7u);
  /* 11514de7 mov edx, eax */
  EDX = (EAX);
  /* 11514de9 mov dword ptr [esp], 0x1151b618 */
  w32((uint32_t)(ESP), (0x1151b618u));
  /* 11514df0 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11514df4 call edi */
  call_ind((uint32_t)(EDI), 0x11514df6u);
  /* 11514df6 pop ecx */
  ECX = (pop32());
  /* 11514df7 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11514dfb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514dfd jne 0x11514e8b */
  if (!C.zf) goto L_11514e8b;
  /* 11514e03 cmp dword ptr [0x1151b118], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b118))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11514e09 jne 0x11514e15 */
  if (!C.zf) goto L_11514e15;
  /* 11514e0b mov dword ptr [0x1151b118], 5 */
  w32((uint32_t)(0x1151b118), (0x5u));
L_11514e15:;
  /* 11514e15 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 11514e1b mov edi, dword ptr [0x11519130] */
  EDI = (r32((uint32_t)(0x11519130)));
  /* 11514e21 push 0x1151a314 */
  push32((uint32_t)(0x1151a314u));
  /* 11514e26 call edi */
  call_ind((uint32_t)(EDI), 0x11514e28u);
  /* 11514e28 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 11514e2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11514e30 push esi */
  push32((uint32_t)(ESI));
  /* 11514e31 call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514e37u);
  /* 11514e37 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514e39 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514e3fu);
  /* 11514e3f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514e42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514e44 je 0x11514e7b */
  if (C.zf) goto L_11514e7b;
  /* 11514e46 mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 11514e4b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514e4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514e4e pop ecx */
  ECX = (pop32());
  /* 11514e4f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514e51 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11514e54 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514e56 push eax */
  push32((uint32_t)(EAX));
  /* 11514e57 push 0x1151a30c */
  push32((uint32_t)(0x1151a30cu));
  /* 11514e5c call edi */
  call_ind((uint32_t)(EDI), 0x11514e5eu);
  /* 11514e5e mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 11514e63 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514e65 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514e66 pop ecx */
  ECX = (pop32());
  /* 11514e67 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514e69 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11514e6c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514e6e push eax */
  push32((uint32_t)(EAX));
  /* 11514e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11514e71 push esi */
  push32((uint32_t)(ESI));
  /* 11514e72 call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514e78u);
  /* 11514e78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514e7b:;
  /* 11514e7b mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11514e81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514e83 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11514e85 call edi */
  call_ind((uint32_t)(EDI), 0x11514e87u);
  /* 11514e87 pop ecx */
  ECX = (pop32());
  /* 11514e88 pop ecx */
  ECX = (pop32());
  /* 11514e89 jmp 0x11514e91 */
  goto L_11514e91;
L_11514e8b:;
  /* 11514e8b mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11514e91:;
  /* 11514e91 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11514e93 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514e99u);
  /* 11514e99 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514e9b pop ecx */
  ECX = (pop32());
  /* 11514e9c je 0x11514f8c */
  if (C.zf) goto L_11514f8c;
  /* 11514ea2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11514ea4 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514eaau);
  /* 11514eaa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514eac pop ecx */
  ECX = (pop32());
  /* 11514ead je 0x11514f8c */
  if (C.zf) goto L_11514f8c;
  /* 11514eb3 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514eb5 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514ebbu);
  /* 11514ebb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514ebd pop ecx */
  ECX = (pop32());
  /* 11514ebe je 0x11514f8c */
  if (C.zf) goto L_11514f8c;
  /* 11514ec4 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11514ec6 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514eccu);
  /* 11514ecc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514ece pop ecx */
  ECX = (pop32());
  /* 11514ecf jne 0x11514f8c */
  if (!C.zf) goto L_11514f8c;
  /* 11514ed5 mov edi, dword ptr [0x11519110] */
  EDI = (r32((uint32_t)(0x11519110)));
  /* 11514edb push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 11514ee0 call edi */
  call_ind((uint32_t)(EDI), 0x11514ee2u);
  /* 11514ee2 mov edx, eax */
  EDX = (EAX);
  /* 11514ee4 mov dword ptr [esp], 0x1151b600 */
  w32((uint32_t)(ESP), (0x1151b600u));
  /* 11514eeb mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11514eef call edi */
  call_ind((uint32_t)(EDI), 0x11514ef1u);
  /* 11514ef1 pop ecx */
  ECX = (pop32());
  /* 11514ef2 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11514ef6 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11514ef8 jne 0x11514f86 */
  if (!C.zf) goto L_11514f86;
  /* 11514efe cmp dword ptr [0x1151b118], esi */
  { uint32_t _a=(r32((uint32_t)(0x1151b118))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11514f04 jne 0x11514f10 */
  if (!C.zf) goto L_11514f10;
  /* 11514f06 mov dword ptr [0x1151b118], 5 */
  w32((uint32_t)(0x1151b118), (0x5u));
L_11514f10:;
  /* 11514f10 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 11514f16 mov edi, dword ptr [0x11519130] */
  EDI = (r32((uint32_t)(0x11519130)));
  /* 11514f1c push 0x1151a314 */
  push32((uint32_t)(0x1151a314u));
  /* 11514f21 call edi */
  call_ind((uint32_t)(EDI), 0x11514f23u);
  /* 11514f23 push dword ptr [0x1151b118] */
  push32((uint32_t)(r32((uint32_t)(0x1151b118))));
  /* 11514f29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11514f2b push esi */
  push32((uint32_t)(ESI));
  /* 11514f2c call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514f32u);
  /* 11514f32 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11514f34 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514f3au);
  /* 11514f3a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11514f3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514f3f je 0x11514f76 */
  if (C.zf) goto L_11514f76;
  /* 11514f41 mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 11514f46 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514f48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514f49 pop ecx */
  ECX = (pop32());
  /* 11514f4a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514f4c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11514f4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514f51 push eax */
  push32((uint32_t)(EAX));
  /* 11514f52 push 0x1151a30c */
  push32((uint32_t)(0x1151a30cu));
  /* 11514f57 call edi */
  call_ind((uint32_t)(EDI), 0x11514f59u);
  /* 11514f59 mov eax, dword ptr [0x1151b320] */
  EAX = (r32((uint32_t)(0x1151b320)));
  /* 11514f5e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11514f60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11514f61 pop ecx */
  ECX = (pop32());
  /* 11514f62 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11514f64 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11514f67 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11514f69 push eax */
  push32((uint32_t)(EAX));
  /* 11514f6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11514f6c push esi */
  push32((uint32_t)(ESI));
  /* 11514f6d call dword ptr [0x115190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d4))), 0x11514f73u);
  /* 11514f73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514f76:;
  /* 11514f76 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11514f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11514f7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11514f80 call edi */
  call_ind((uint32_t)(EDI), 0x11514f82u);
  /* 11514f82 pop ecx */
  ECX = (pop32());
  /* 11514f83 pop ecx */
  ECX = (pop32());
  /* 11514f84 jmp 0x11514f8c */
  goto L_11514f8c;
L_11514f86:;
  /* 11514f86 mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_11514f8c:;
  /* 11514f8c push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11514f8e call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514f94u);
  /* 11514f94 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514f96 pop ecx */
  ECX = (pop32());
  /* 11514f97 je 0x11514ff9 */
  if (C.zf) goto L_11514ff9;
  /* 11514f99 push esi */
  push32((uint32_t)(ESI));
  /* 11514f9a push 0x1151b408 */
  push32((uint32_t)(0x1151b408u));
  /* 11514f9f call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11514fa5u);
  /* 11514fa5 pop ecx */
  ECX = (pop32());
  /* 11514fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11514fa8 pop ecx */
  ECX = (pop32());
  /* 11514fa9 jle 0x11514ff9 */
  if ((C.zf||C.sf!=C.of)) goto L_11514ff9;
  /* 11514fab push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11514fad call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11514fb3u);
  /* 11514fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11514fb5 pop ecx */
  ECX = (pop32());
  /* 11514fb6 je 0x11514fc4 */
  if (C.zf) goto L_11514fc4;
  /* 11514fb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11514fba push 7 */
  push32((uint32_t)(0x7u));
  /* 11514fbc call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11514fc2u);
  /* 11514fc2 pop ecx */
  ECX = (pop32());
  /* 11514fc3 pop ecx */
  ECX = (pop32());
L_11514fc4:;
  /* 11514fc4 push esi */
  push32((uint32_t)(ESI));
  /* 11514fc5 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514fca push esi */
  push32((uint32_t)(ESI));
  /* 11514fcb call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11514fd1u);
  /* 11514fd1 push esi */
  push32((uint32_t)(ESI));
  /* 11514fd2 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11514fd8u);
  /* 11514fd8 push esi */
  push32((uint32_t)(ESI));
  /* 11514fd9 push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 11514fde call ebx */
  call_ind((uint32_t)(EBX), 0x11514fe0u);
  /* 11514fe0 push esi */
  push32((uint32_t)(ESI));
  /* 11514fe1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11514fe3 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11514fe9u);
  /* 11514fe9 push esi */
  push32((uint32_t)(ESI));
  /* 11514fea push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11514fef call ebx */
  call_ind((uint32_t)(EBX), 0x11514ff1u);
  /* 11514ff1 push esi */
  push32((uint32_t)(ESI));
  /* 11514ff2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11514ff4 call edi */
  call_ind((uint32_t)(EDI), 0x11514ff6u);
  /* 11514ff6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11514ff9:;
  /* 11514ff9 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11514ffb call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11515001u);
  /* 11515001 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515003 pop ecx */
  ECX = (pop32());
  /* 11515004 je 0x11515026 */
  if (C.zf) goto L_11515026;
  /* 11515006 push 7 */
  push32((uint32_t)(0x7u));
  /* 11515008 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x1151500eu);
  /* 1151500e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515010 pop ecx */
  ECX = (pop32());
  /* 11515011 je 0x11515026 */
  if (C.zf) goto L_11515026;
  /* 11515013 push 0x1151a2ec */
  push32((uint32_t)(0x1151a2ecu));
  /* 11515018 call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x1151501eu);
  /* 1151501e push esi */
  push32((uint32_t)(ESI));
  /* 1151501f push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11515021 call edi */
  call_ind((uint32_t)(EDI), 0x11515023u);
  /* 11515023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11515026:;
  /* 11515026 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11515028 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151502eu);
  /* 1151502e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515030 pop ecx */
  ECX = (pop32());
  /* 11515031 jne 0x1151507b */
  if (!C.zf) goto L_1151507b;
  /* 11515033 push esi */
  push32((uint32_t)(ESI));
  /* 11515034 push 0x1151b408 */
  push32((uint32_t)(0x1151b408u));
  /* 11515039 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x1151503fu);
  /* 1151503f pop ecx */
  ECX = (pop32());
  /* 11515040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515042 pop ecx */
  ECX = (pop32());
  /* 11515043 jne 0x1151507b */
  if (!C.zf) goto L_1151507b;
  /* 11515045 push esi */
  push32((uint32_t)(ESI));
  /* 11515046 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 1151504b push esi */
  push32((uint32_t)(ESI));
  /* 1151504c call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x11515052u);
  /* 11515052 push esi */
  push32((uint32_t)(ESI));
  /* 11515053 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11515059u);
  /* 11515059 push esi */
  push32((uint32_t)(ESI));
  /* 1151505a push 0x1151b670 */
  push32((uint32_t)(0x1151b670u));
  /* 1151505f call ebx */
  call_ind((uint32_t)(EBX), 0x11515061u);
  /* 11515061 push 6 */
  push32((uint32_t)(0x6u));
  /* 11515063 push esi */
  push32((uint32_t)(ESI));
  /* 11515064 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x1151506au);
  /* 1151506a push esi */
  push32((uint32_t)(ESI));
  /* 1151506b push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11515070 call ebx */
  call_ind((uint32_t)(EBX), 0x11515072u);
  /* 11515072 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515074 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11515076 call edi */
  call_ind((uint32_t)(EDI), 0x11515078u);
  /* 11515078 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151507b:;
  /* 1151507b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1151507d call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11515083u);
  /* 11515083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515085 pop ecx */
  ECX = (pop32());
  /* 11515086 je 0x115153c4 */
  if (C.zf) goto L_115153c4;
  /* 1151508c push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1151508e call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11515094u);
  /* 11515094 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515096 pop ecx */
  ECX = (pop32());
  /* 11515097 je 0x115153c4 */
  if (C.zf) goto L_115153c4;
  /* 1151509d mov edi, dword ptr [0x11519148] */
  EDI = (r32((uint32_t)(0x11519148)));
  /* 115150a3 push esi */
  push32((uint32_t)(ESI));
  /* 115150a4 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 115150a9 call edi */
  call_ind((uint32_t)(EDI), 0x115150abu);
  /* 115150ab mov edx, eax */
  EDX = (EAX);
  /* 115150ad push esi */
  push32((uint32_t)(ESI));
  /* 115150ae push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 115150b3 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115150b7 call edi */
  call_ind((uint32_t)(EDI), 0x115150b9u);
  /* 115150b9 mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 115150bd push esi */
  push32((uint32_t)(ESI));
  /* 115150be push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 115150c3 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115150c5 call dword ptr [0x11519148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519148))), 0x115150cbu);
  /* 115150cb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115150cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115150d0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115150d2 jle 0x115153be */
  if ((C.zf||C.sf!=C.of)) goto L_115153be;
  /* 115150d8 push esi */
  push32((uint32_t)(ESI));
  /* 115150d9 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 115150de push esi */
  push32((uint32_t)(ESI));
  /* 115150df call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x115150e5u);
  /* 115150e5 push esi */
  push32((uint32_t)(ESI));
  /* 115150e6 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x115150ecu);
  /* 115150ec mov edi, dword ptr [0x11519148] */
  EDI = (r32((uint32_t)(0x11519148)));
  /* 115150f2 push esi */
  push32((uint32_t)(ESI));
  /* 115150f3 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 115150f8 call edi */
  call_ind((uint32_t)(EDI), 0x115150fau);
  /* 115150fa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115150fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115150ff jle 0x1151510b */
  if ((C.zf||C.sf!=C.of)) goto L_1151510b;
  /* 11515101 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11515103 push esi */
  push32((uint32_t)(ESI));
  /* 11515104 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 11515109 jmp 0x11515139 */
  goto L_11515139;
L_1151510b:;
  /* 1151510b push esi */
  push32((uint32_t)(ESI));
  /* 1151510c push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11515111 call edi */
  call_ind((uint32_t)(EDI), 0x11515113u);
  /* 11515113 pop ecx */
  ECX = (pop32());
  /* 11515114 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515116 pop ecx */
  ECX = (pop32());
  /* 11515117 jle 0x11515123 */
  if ((C.zf||C.sf!=C.of)) goto L_11515123;
  /* 11515119 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1151511b push esi */
  push32((uint32_t)(ESI));
  /* 1151511c push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 11515121 jmp 0x11515139 */
  goto L_11515139;
L_11515123:;
  /* 11515123 push esi */
  push32((uint32_t)(ESI));
  /* 11515124 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 11515129 call edi */
  call_ind((uint32_t)(EDI), 0x1151512bu);
  /* 1151512b pop ecx */
  ECX = (pop32());
  /* 1151512c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151512e pop ecx */
  ECX = (pop32());
  /* 1151512f jle 0x1151514c */
  if ((C.zf||C.sf!=C.of)) goto L_1151514c;
  /* 11515131 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11515133 push esi */
  push32((uint32_t)(ESI));
  /* 11515134 push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
L_11515139:;
  /* 11515139 push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 1151513e push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 11515143 call dword ptr [0x11519140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519140))), 0x11515149u);
  /* 11515149 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151514c:;
  /* 1151514c mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
  /* 11515152 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515154 push 7 */
  push32((uint32_t)(0x7u));
  /* 11515156 call edi */
  call_ind((uint32_t)(EDI), 0x11515158u);
  /* 11515158 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151515a push 9 */
  push32((uint32_t)(0x9u));
  /* 1151515c call edi */
  call_ind((uint32_t)(EDI), 0x1151515eu);
  /* 1151515e push 1 */
  push32((uint32_t)(0x1u));
  /* 11515160 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11515162 call edi */
  call_ind((uint32_t)(EDI), 0x11515164u);
  /* 11515164 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515166 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11515168 call edi */
  call_ind((uint32_t)(EDI), 0x1151516au);
  /* 1151516a push esi */
  push32((uint32_t)(ESI));
  /* 1151516b push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 11515170 call ebx */
  call_ind((uint32_t)(EBX), 0x11515172u);
  /* 11515172 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515174 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 11515179 call ebx */
  call_ind((uint32_t)(EBX), 0x1151517bu);
  /* 1151517b push 1 */
  push32((uint32_t)(0x1u));
  /* 1151517d push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 11515182 call ebx */
  call_ind((uint32_t)(EBX), 0x11515184u);
  /* 11515184 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515186 push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 1151518b call ebx */
  call_ind((uint32_t)(EBX), 0x1151518du);
  /* 1151518d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515190 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515192 push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 11515197 call ebx */
  call_ind((uint32_t)(EBX), 0x11515199u);
  /* 11515199 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151519b push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 115151a0 call ebx */
  call_ind((uint32_t)(EBX), 0x115151a2u);
  /* 115151a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115151a4 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 115151a9 call ebx */
  call_ind((uint32_t)(EBX), 0x115151abu);
  /* 115151ab push 1 */
  push32((uint32_t)(0x1u));
  /* 115151ad push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 115151b2 call ebx */
  call_ind((uint32_t)(EBX), 0x115151b4u);
  /* 115151b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 115151b6 call dword ptr [0x115190b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b0))), 0x115151bcu);
  /* 115151bc push 0x1151b2d0 */
  push32((uint32_t)(0x1151b2d0u));
  /* 115151c1 push 0x1151b5f0 */
  push32((uint32_t)(0x1151b5f0u));
  /* 115151c6 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115151ccu);
  /* 115151cc push 0x1151b2d8 */
  push32((uint32_t)(0x1151b2d8u));
  /* 115151d1 push 0x1151b170 */
  push32((uint32_t)(0x1151b170u));
  /* 115151d6 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115151dcu);
  /* 115151dc push 0x1151b2d0 */
  push32((uint32_t)(0x1151b2d0u));
  /* 115151e1 push 0x1151b5e0 */
  push32((uint32_t)(0x1151b5e0u));
  /* 115151e6 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115151ecu);
  /* 115151ec push 0x1151b2d8 */
  push32((uint32_t)(0x1151b2d8u));
  /* 115151f1 push 0x1151b180 */
  push32((uint32_t)(0x1151b180u));
  /* 115151f6 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x115151fcu);
  /* 115151fc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115151ff push 0x1151b2d0 */
  push32((uint32_t)(0x1151b2d0u));
  /* 11515204 push 0x1151b618 */
  push32((uint32_t)(0x1151b618u));
  /* 11515209 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151520fu);
  /* 1151520f push 0x1151b2d8 */
  push32((uint32_t)(0x1151b2d8u));
  /* 11515214 push 0x1151b178 */
  push32((uint32_t)(0x1151b178u));
  /* 11515219 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151521fu);
  /* 1151521f push 0x1151b2d0 */
  push32((uint32_t)(0x1151b2d0u));
  /* 11515224 push 0x1151b600 */
  push32((uint32_t)(0x1151b600u));
  /* 11515229 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151522fu);
  /* 1151522f push 0x1151b2d8 */
  push32((uint32_t)(0x1151b2d8u));
  /* 11515234 push 0x1151b190 */
  push32((uint32_t)(0x1151b190u));
  /* 11515239 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x1151523fu);
  /* 1151523f mov eax, dword ptr [0x1151b2f8] */
  EAX = (r32((uint32_t)(0x1151b2f8)));
  /* 11515244 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515247 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1151524a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151524c mov dword ptr [0x1151b148], esi */
  w32((uint32_t)(0x1151b148), (ESI));
  /* 11515252 jle 0x11515292 */
  if ((C.zf||C.sf!=C.of)) goto L_11515292;
L_11515254:;
  /* 11515254 push esi */
  push32((uint32_t)(ESI));
  /* 11515255 push 0x1151b518 */
  push32((uint32_t)(0x1151b518u));
  /* 1151525a push 5 */
  push32((uint32_t)(0x5u));
  /* 1151525c push 0x1151b5b8 */
  push32((uint32_t)(0x1151b5b8u));
  /* 11515261 push 0x1151b268 */
  push32((uint32_t)(0x1151b268u));
  /* 11515266 push ebp */
  push32((uint32_t)(EBP));
  /* 11515267 call dword ptr [0x1151917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151917c))), 0x1151526du);
  /* 1151526d push 0x1151b2c8 */
  push32((uint32_t)(0x1151b2c8u));
  /* 11515272 push ebp */
  push32((uint32_t)(EBP));
  /* 11515273 call dword ptr [0x115190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c4))), 0x11515279u);
  /* 11515279 mov eax, dword ptr [0x1151b2f8] */
  EAX = (r32((uint32_t)(0x1151b2f8)));
  /* 1151527e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515281 inc dword ptr [0x1151b148] */
  { uint32_t _r=(r32((uint32_t)(0x1151b148)))+1; w32((uint32_t)(0x1151b148), (_r)); fl_inc(_r,32); }
  /* 11515287 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1151528a cmp dword ptr [0x1151b148], eax */
  { uint32_t _a=(r32((uint32_t)(0x1151b148))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515290 jl 0x11515254 */
  if ((C.sf!=C.of)) goto L_11515254;
L_11515292:;
  /* 11515292 push esi */
  push32((uint32_t)(ESI));
  /* 11515293 push 0x1151b2c8 */
  push32((uint32_t)(0x1151b2c8u));
  /* 11515298 call ebx */
  call_ind((uint32_t)(EBX), 0x1151529au);
  /* 1151529a push esi */
  push32((uint32_t)(ESI));
  /* 1151529b push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1151529d push 0x1151b400 */
  push32((uint32_t)(0x1151b400u));
  /* 115152a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 115152a4 pop ebp */
  EBP = (pop32());
  /* 115152a5 push ebp */
  push32((uint32_t)(EBP));
  /* 115152a6 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115152acu);
  /* 115152ac push ebp */
  push32((uint32_t)(EBP));
  /* 115152ad call dword ptr [0x115190b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b0))), 0x115152b3u);
  /* 115152b3 push esi */
  push32((uint32_t)(ESI));
  /* 115152b4 push 0x1151b2c0 */
  push32((uint32_t)(0x1151b2c0u));
  /* 115152b9 call ebx */
  call_ind((uint32_t)(EBX), 0x115152bbu);
  /* 115152bb push esi */
  push32((uint32_t)(ESI));
  /* 115152bc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 115152be push 0x1151b400 */
  push32((uint32_t)(0x1151b400u));
  /* 115152c3 push ebp */
  push32((uint32_t)(EBP));
  /* 115152c4 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115152cau);
  /* 115152ca push 2 */
  push32((uint32_t)(0x2u));
  /* 115152cc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 115152ce push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 115152d3 push ebp */
  push32((uint32_t)(EBP));
  /* 115152d4 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115152dau);
  /* 115152da add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115152dd push ebp */
  push32((uint32_t)(EBP));
  /* 115152de call dword ptr [0x115190b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b0))), 0x115152e4u);
  /* 115152e4 push esi */
  push32((uint32_t)(ESI));
  /* 115152e5 push 0x1151b2d0 */
  push32((uint32_t)(0x1151b2d0u));
  /* 115152ea call ebx */
  call_ind((uint32_t)(EBX), 0x115152ecu);
  /* 115152ec push esi */
  push32((uint32_t)(ESI));
  /* 115152ed push 0x2d */
  push32((uint32_t)(0x2du));
  /* 115152ef push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 115152f4 push ebp */
  push32((uint32_t)(EBP));
  /* 115152f5 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115152fbu);
  /* 115152fb push ebp */
  push32((uint32_t)(EBP));
  /* 115152fc call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11515302u);
  /* 11515302 push 0x1151a2e4 */
  push32((uint32_t)(0x1151a2e4u));
  /* 11515307 call dword ptr [0x1151910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151910c))), 0x1151530du);
  /* 1151530d push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 11515312 push esi */
  push32((uint32_t)(ESI));
  /* 11515313 push ebp */
  push32((uint32_t)(EBP));
  /* 11515314 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x1151531au);
  /* 1151531a push esi */
  push32((uint32_t)(ESI));
  /* 1151531b push ebp */
  push32((uint32_t)(EBP));
  /* 1151531c call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11515322u);
  /* 11515322 push eax */
  push32((uint32_t)(EAX));
  /* 11515323 push 3 */
  push32((uint32_t)(0x3u));
  /* 11515325 push ebp */
  push32((uint32_t)(EBP));
  /* 11515326 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x1151532cu);
  /* 1151532c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151532f push esi */
  push32((uint32_t)(ESI));
  /* 11515330 push ebp */
  push32((uint32_t)(EBP));
  /* 11515331 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11515337u);
  /* 11515337 push eax */
  push32((uint32_t)(EAX));
  /* 11515338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1151533a push ebp */
  push32((uint32_t)(EBP));
  /* 1151533b call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11515341u);
  /* 11515341 push esi */
  push32((uint32_t)(ESI));
  /* 11515342 push ebp */
  push32((uint32_t)(EBP));
  /* 11515343 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x11515349u);
  /* 11515349 push eax */
  push32((uint32_t)(EAX));
  /* 1151534a push 1 */
  push32((uint32_t)(0x1u));
  /* 1151534c push ebp */
  push32((uint32_t)(EBP));
  /* 1151534d call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11515353u);
  /* 11515353 push esi */
  push32((uint32_t)(ESI));
  /* 11515354 push ebp */
  push32((uint32_t)(EBP));
  /* 11515355 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x1151535bu);
  /* 1151535b push eax */
  push32((uint32_t)(EAX));
  /* 1151535c push 4 */
  push32((uint32_t)(0x4u));
  /* 1151535e push ebp */
  push32((uint32_t)(EBP));
  /* 1151535f call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11515365u);
  /* 11515365 push esi */
  push32((uint32_t)(ESI));
  /* 11515366 push ebp */
  push32((uint32_t)(EBP));
  /* 11515367 call dword ptr [0x115190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190dc))), 0x1151536du);
  /* 1151536d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515370 push eax */
  push32((uint32_t)(EAX));
  /* 11515371 push ebp */
  push32((uint32_t)(EBP));
  /* 11515372 push ebp */
  push32((uint32_t)(EBP));
  /* 11515373 call dword ptr [0x115190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190d8))), 0x11515379u);
  /* 11515379 push 6 */
  push32((uint32_t)(0x6u));
  /* 1151537b pop eax */
  EAX = (pop32());
  /* 1151537c sub eax, dword ptr [0x1151b168] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b168))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11515382 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11515388 push eax */
  push32((uint32_t)(EAX));
  /* 11515389 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1151538b call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x11515391u);
  /* 11515391 push dword ptr [0x1151b168] */
  push32((uint32_t)(r32((uint32_t)(0x1151b168))));
  /* 11515397 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515399 push esi */
  push32((uint32_t)(ESI));
  /* 1151539a push esi */
  push32((uint32_t)(ESI));
  /* 1151539b push 0x1151ab0c */
  push32((uint32_t)(0x1151ab0cu));
  /* 115153a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115153a1 call dword ptr [0x11519100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519100))), 0x115153a7u);
  /* 115153a7 push esi */
  push32((uint32_t)(ESI));
  /* 115153a8 push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 115153ad call ebx */
  call_ind((uint32_t)(EBX), 0x115153afu);
  /* 115153af push esi */
  push32((uint32_t)(ESI));
  /* 115153b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115153b2 call edi */
  call_ind((uint32_t)(EDI), 0x115153b4u);
  /* 115153b4 push esi */
  push32((uint32_t)(ESI));
  /* 115153b5 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 115153b7 call edi */
  call_ind((uint32_t)(EDI), 0x115153b9u);
  /* 115153b9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115153bc jmp 0x115153c4 */
  goto L_115153c4;
L_115153be:;
  /* 115153be mov edi, dword ptr [0x11519104] */
  EDI = (r32((uint32_t)(0x11519104)));
L_115153c4:;
  /* 115153c4 mov ebp, dword ptr [0x115190b8] */
  EBP = (r32((uint32_t)(0x115190b8)));
  /* 115153ca push 0x38 */
  push32((uint32_t)(0x38u));
  /* 115153cc call ebp */
  call_ind((uint32_t)(EBP), 0x115153ceu);
  /* 115153ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115153d0 pop ecx */
  ECX = (pop32());
  /* 115153d1 jne 0x115153f7 */
  if (!C.zf) goto L_115153f7;
  /* 115153d3 push 0x1151b2d8 */
  push32((uint32_t)(0x1151b2d8u));
  /* 115153d8 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115153deu);
  /* 115153de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115153e0 pop ecx */
  ECX = (pop32());
  /* 115153e1 jle 0x115153f7 */
  if ((C.zf||C.sf!=C.of)) goto L_115153f7;
  /* 115153e3 push esi */
  push32((uint32_t)(ESI));
  /* 115153e4 push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 115153e9 push 0x1151b2d8 */
  push32((uint32_t)(0x1151b2d8u));
  /* 115153ee call dword ptr [0x11519150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519150))), 0x115153f4u);
  /* 115153f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115153f7:;
  /* 115153f7 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 115153f9 call ebp */
  call_ind((uint32_t)(EBP), 0x115153fbu);
  /* 115153fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115153fd pop ecx */
  ECX = (pop32());
  /* 115153fe jne 0x115155c6 */
  if (!C.zf) goto L_115155c6;
  /* 11515404 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11515406 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x1151540cu);
  /* 1151540c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151540e pop ecx */
  ECX = (pop32());
  /* 1151540f je 0x115155c6 */
  if (C.zf) goto L_115155c6;
  /* 11515415 mov ebp, dword ptr [0x11519110] */
  EBP = (r32((uint32_t)(0x11519110)));
  /* 1151541b push 0x1151b2c8 */
  push32((uint32_t)(0x1151b2c8u));
  /* 11515420 call ebp */
  call_ind((uint32_t)(EBP), 0x11515422u);
  /* 11515422 mov edx, eax */
  EDX = (EAX);
  /* 11515424 mov dword ptr [esp], 0x1151b2d8 */
  w32((uint32_t)(ESP), (0x1151b2d8u));
  /* 1151542b mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 1151542f call ebp */
  call_ind((uint32_t)(EBP), 0x11515431u);
  /* 11515431 mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
  /* 11515435 mov dword ptr [esp], 0x1151b2d0 */
  w32((uint32_t)(ESP), (0x1151b2d0u));
  /* 1151543c add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151543e call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11515444u);
  /* 11515444 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515446 mov dword ptr [esp], 0x1151b2c0 */
  w32((uint32_t)(ESP), (0x1151b2c0u));
  /* 1151544d call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x11515453u);
  /* 11515453 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515455 pop ecx */
  ECX = (pop32());
  /* 11515456 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11515458 jle 0x115155be */
  if ((C.zf||C.sf!=C.of)) goto L_115155be;
  /* 1151545e push esi */
  push32((uint32_t)(ESI));
  /* 1151545f push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 11515464 push esi */
  push32((uint32_t)(ESI));
  /* 11515465 call dword ptr [0x1151911c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151911c))), 0x1151546bu);
  /* 1151546b push esi */
  push32((uint32_t)(ESI));
  /* 1151546c call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11515472u);
  /* 11515472 mov ebp, dword ptr [0x11519148] */
  EBP = (r32((uint32_t)(0x11519148)));
  /* 11515478 push esi */
  push32((uint32_t)(ESI));
  /* 11515479 push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
  /* 1151547e call ebp */
  call_ind((uint32_t)(EBP), 0x11515480u);
  /* 11515480 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515485 jle 0x115154a4 */
  if ((C.zf||C.sf!=C.of)) goto L_115154a4;
  /* 11515487 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11515489 push esi */
  push32((uint32_t)(ESI));
  /* 1151548a push 0x1151b548 */
  push32((uint32_t)(0x1151b548u));
L_1151548f:;
  /* 1151548f push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 11515494 push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 11515499 call dword ptr [0x11519140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519140))), 0x1151549fu);
  /* 1151549f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115154a2 jmp 0x11515511 */
  goto L_11515511;
L_115154a4:;
  /* 115154a4 push esi */
  push32((uint32_t)(ESI));
  /* 115154a5 push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 115154aa call ebp */
  call_ind((uint32_t)(EBP), 0x115154acu);
  /* 115154ac pop ecx */
  ECX = (pop32());
  /* 115154ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115154af pop ecx */
  ECX = (pop32());
  /* 115154b0 jle 0x115154bc */
  if ((C.zf||C.sf!=C.of)) goto L_115154bc;
  /* 115154b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115154b4 push esi */
  push32((uint32_t)(ESI));
  /* 115154b5 push 0x1151b150 */
  push32((uint32_t)(0x1151b150u));
  /* 115154ba jmp 0x1151548f */
  goto L_1151548f;
L_115154bc:;
  /* 115154bc push esi */
  push32((uint32_t)(ESI));
  /* 115154bd push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 115154c2 call ebp */
  call_ind((uint32_t)(EBP), 0x115154c4u);
  /* 115154c4 pop ecx */
  ECX = (pop32());
  /* 115154c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115154c7 pop ecx */
  ECX = (pop32());
  /* 115154c8 jle 0x115154d4 */
  if ((C.zf||C.sf!=C.of)) goto L_115154d4;
  /* 115154ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115154cc push esi */
  push32((uint32_t)(ESI));
  /* 115154cd push 0x1151b158 */
  push32((uint32_t)(0x1151b158u));
  /* 115154d2 jmp 0x1151548f */
  goto L_1151548f;
L_115154d4:;
  /* 115154d4 mov ebp, 0x1151b2c0 */
  EBP = (0x1151b2c0u);
  /* 115154d9 push ebp */
  push32((uint32_t)(EBP));
  /* 115154da call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115154e0u);
  /* 115154e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115154e2 pop ecx */
  ECX = (pop32());
  /* 115154e3 jle 0x115154fd */
  if ((C.zf||C.sf!=C.of)) goto L_115154fd;
  /* 115154e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115154e7 push ebp */
  push32((uint32_t)(EBP));
  /* 115154e8 push 0x1151b450 */
  push32((uint32_t)(0x1151b450u));
  /* 115154ed push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 115154f2 call dword ptr [0x11519144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519144))), 0x115154f8u);
  /* 115154f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115154fb jmp 0x11515511 */
  goto L_11515511;
L_115154fd:;
  /* 115154fd mov eax, dword ptr [0x1151b450] */
  EAX = (r32((uint32_t)(0x1151b450)));
  /* 11515502 mov dword ptr [0x1151b120], eax */
  w32((uint32_t)(0x1151b120), (EAX));
  /* 11515507 mov eax, dword ptr [0x1151b454] */
  EAX = (r32((uint32_t)(0x1151b454)));
  /* 1151550c mov dword ptr [0x1151b124], eax */
  w32((uint32_t)(0x1151b124), (EAX));
L_11515511:;
  /* 11515511 push esi */
  push32((uint32_t)(ESI));
  /* 11515512 push 0x1151b2c0 */
  push32((uint32_t)(0x1151b2c0u));
  /* 11515517 call ebx */
  call_ind((uint32_t)(EBX), 0x11515519u);
  /* 11515519 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151551b push 0x1151b2d0 */
  push32((uint32_t)(0x1151b2d0u));
  /* 11515520 call ebx */
  call_ind((uint32_t)(EBX), 0x11515522u);
  /* 11515522 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515524 push 0x1151b2c8 */
  push32((uint32_t)(0x1151b2c8u));
  /* 11515529 call ebx */
  call_ind((uint32_t)(EBX), 0x1151552bu);
  /* 1151552b mov ebp, dword ptr [0x115190f4] */
  EBP = (r32((uint32_t)(0x115190f4)));
  /* 11515531 push esi */
  push32((uint32_t)(ESI));
  /* 11515532 push 0x91 */
  push32((uint32_t)(0x91u));
  /* 11515537 push 0x1151b120 */
  push32((uint32_t)(0x1151b120u));
  /* 1151553c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151553e call ebp */
  call_ind((uint32_t)(EBP), 0x11515540u);
  /* 11515540 push 2 */
  push32((uint32_t)(0x2u));
  /* 11515542 push 0x91 */
  push32((uint32_t)(0x91u));
  /* 11515547 push 0x1151b560 */
  push32((uint32_t)(0x1151b560u));
  /* 1151554c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151554e call ebp */
  call_ind((uint32_t)(EBP), 0x11515550u);
  /* 11515550 push 2 */
  push32((uint32_t)(0x2u));
  /* 11515552 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11515557 push 0x1151b550 */
  push32((uint32_t)(0x1151b550u));
  /* 1151555c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151555e call ebp */
  call_ind((uint32_t)(EBP), 0x11515560u);
  /* 11515560 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515563 push 2 */
  push32((uint32_t)(0x2u));
  /* 11515565 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11515567 push 0x1151b400 */
  push32((uint32_t)(0x1151b400u));
  /* 1151556c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151556e call ebp */
  call_ind((uint32_t)(EBP), 0x11515570u);
  /* 11515570 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515572 call dword ptr [0x115190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190cc))), 0x11515578u);
  /* 11515578 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1151557a call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11515580u);
  /* 11515580 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515583 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515585 je 0x11515599 */
  if (C.zf) goto L_11515599;
  /* 11515587 push 6 */
  push32((uint32_t)(0x6u));
  /* 11515589 push 5 */
  push32((uint32_t)(0x5u));
  /* 1151558b call dword ptr [0x115190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190c8))), 0x11515591u);
  /* 11515591 push esi */
  push32((uint32_t)(ESI));
  /* 11515592 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11515594 call edi */
  call_ind((uint32_t)(EDI), 0x11515596u);
  /* 11515596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11515599:;
  /* 11515599 push esi */
  push32((uint32_t)(ESI));
  /* 1151559a push 0x1151b2b8 */
  push32((uint32_t)(0x1151b2b8u));
  /* 1151559f call ebx */
  call_ind((uint32_t)(EBX), 0x115155a1u);
  /* 115155a1 push 6 */
  push32((uint32_t)(0x6u));
  /* 115155a3 pop eax */
  EAX = (pop32());
  /* 115155a4 sub eax, dword ptr [0x1151b168] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b168))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115155aa imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115155b0 push eax */
  push32((uint32_t)(EAX));
  /* 115155b1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115155b3 call dword ptr [0x115190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190bc))), 0x115155b9u);
  /* 115155b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115155bc jmp 0x115155c6 */
  goto L_115155c6;
L_115155be:;
  /* 115155be push 1 */
  push32((uint32_t)(0x1u));
  /* 115155c0 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 115155c2 call edi */
  call_ind((uint32_t)(EDI), 0x115155c4u);
  /* 115155c4 pop ecx */
  ECX = (pop32());
  /* 115155c5 pop ecx */
  ECX = (pop32());
L_115155c6:;
  /* 115155c6 mov ebp, dword ptr [0x115190b8] */
  EBP = (r32((uint32_t)(0x115190b8)));
  /* 115155cc push 1 */
  push32((uint32_t)(0x1u));
  /* 115155ce call ebp */
  call_ind((uint32_t)(EBP), 0x115155d0u);
  /* 115155d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115155d2 pop ecx */
  ECX = (pop32());
  /* 115155d3 jne 0x115155de */
  if (!C.zf) goto L_115155de;
  /* 115155d5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115155d7 call ebp */
  call_ind((uint32_t)(EBP), 0x115155d9u);
  /* 115155d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115155db pop ecx */
  ECX = (pop32());
  /* 115155dc je 0x1151564a */
  if (C.zf) goto L_1151564a;
L_115155de:;
  /* 115155de mov ebp, dword ptr [0x11519148] */
  EBP = (r32((uint32_t)(0x11519148)));
  /* 115155e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 115155e6 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 115155eb call ebp */
  call_ind((uint32_t)(EBP), 0x115155edu);
  /* 115155ed mov edx, eax */
  EDX = (EAX);
  /* 115155ef push 6 */
  push32((uint32_t)(0x6u));
  /* 115155f1 push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 115155f6 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 115155fa call ebp */
  call_ind((uint32_t)(EBP), 0x115155fcu);
  /* 115155fc mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11515600 push 6 */
  push32((uint32_t)(0x6u));
  /* 11515602 push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11515607 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515609 call dword ptr [0x11519148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519148))), 0x1151560fu);
  /* 1151560f add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515611 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515614 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11515616 jle 0x1151564a */
  if ((C.zf||C.sf!=C.of)) goto L_1151564a;
  /* 11515618 mov ebp, dword ptr [0x11519154] */
  EBP = (r32((uint32_t)(0x11519154)));
  /* 1151561e push esi */
  push32((uint32_t)(ESI));
  /* 1151561f push 6 */
  push32((uint32_t)(0x6u));
  /* 11515621 push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11515626 call ebp */
  call_ind((uint32_t)(EBP), 0x11515628u);
  /* 11515628 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151562a push 6 */
  push32((uint32_t)(0x6u));
  /* 1151562c push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11515631 call ebp */
  call_ind((uint32_t)(EBP), 0x11515633u);
  /* 11515633 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515635 push 6 */
  push32((uint32_t)(0x6u));
  /* 11515637 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 1151563c call ebp */
  call_ind((uint32_t)(EBP), 0x1151563eu);
  /* 1151563e push esi */
  push32((uint32_t)(ESI));
  /* 1151563f push 6 */
  push32((uint32_t)(0x6u));
  /* 11515641 call dword ptr [0x1151912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151912c))), 0x11515647u);
  /* 11515647 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151564a:;
  /* 1151564a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1151564c call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11515652u);
  /* 11515652 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515654 pop ecx */
  ECX = (pop32());
  /* 11515655 je 0x11515692 */
  if (C.zf) goto L_11515692;
  /* 11515657 mov ebp, 0x1151b608 */
  EBP = (0x1151b608u);
  /* 1151565c push 6 */
  push32((uint32_t)(0x6u));
  /* 1151565e push ebp */
  push32((uint32_t)(EBP));
  /* 1151565f call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x11515665u);
  /* 11515665 pop ecx */
  ECX = (pop32());
  /* 11515666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515668 pop ecx */
  ECX = (pop32());
  /* 11515669 jle 0x11515692 */
  if ((C.zf||C.sf!=C.of)) goto L_11515692;
  /* 1151566b push 0x1151b2f0 */
  push32((uint32_t)(0x1151b2f0u));
  /* 11515670 push ebp */
  push32((uint32_t)(EBP));
  /* 11515671 call dword ptr [0x11519118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519118))), 0x11515677u);
  /* 11515677 pop ecx */
  ECX = (pop32());
  /* 11515678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151567a pop ecx */
  ECX = (pop32());
  /* 1151567b jne 0x11515692 */
  if (!C.zf) goto L_11515692;
  /* 1151567d push esi */
  push32((uint32_t)(ESI));
  /* 1151567e push 6 */
  push32((uint32_t)(0x6u));
  /* 11515680 push ebp */
  push32((uint32_t)(EBP));
  /* 11515681 call dword ptr [0x11519134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519134))), 0x11515687u);
  /* 11515687 push 6 */
  push32((uint32_t)(0x6u));
  /* 11515689 call dword ptr [0x11519108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519108))), 0x1151568fu);
  /* 1151568f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11515692:;
  /* 11515692 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11515694 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151569au);
  /* 1151569a mov ebp, dword ptr [0x1151914c] */
  EBP = (r32((uint32_t)(0x1151914c)));
  /* 115156a0 pop ecx */
  ECX = (pop32());
  /* 115156a1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115156a3 je 0x11515715 */
  if (C.zf) goto L_11515715;
  /* 115156a5 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 115156a7 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115156adu);
  /* 115156ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115156af pop ecx */
  ECX = (pop32());
  /* 115156b0 je 0x11515715 */
  if (C.zf) goto L_11515715;
  /* 115156b2 push esi */
  push32((uint32_t)(ESI));
  /* 115156b3 push 0x1151b238 */
  push32((uint32_t)(0x1151b238u));
  /* 115156b8 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x115156beu);
  /* 115156be pop ecx */
  ECX = (pop32());
  /* 115156bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115156c1 pop ecx */
  ECX = (pop32());
  /* 115156c2 jle 0x11515715 */
  if ((C.zf||C.sf!=C.of)) goto L_11515715;
  /* 115156c4 push esi */
  push32((uint32_t)(ESI));
  /* 115156c5 push 0x1151b338 */
  push32((uint32_t)(0x1151b338u));
  /* 115156ca call ebx */
  call_ind((uint32_t)(EBX), 0x115156ccu);
  /* 115156cc push esi */
  push32((uint32_t)(ESI));
  /* 115156cd push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115156cf push 0x1151b238 */
  push32((uint32_t)(0x1151b238u));
  /* 115156d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 115156d6 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115156dcu);
  /* 115156dc push esi */
  push32((uint32_t)(ESI));
  /* 115156dd push 5 */
  push32((uint32_t)(0x5u));
  /* 115156df push 0x1151b3c0 */
  push32((uint32_t)(0x1151b3c0u));
  /* 115156e4 push 0x1151b4f0 */
  push32((uint32_t)(0x1151b4f0u));
  /* 115156e9 call ebp */
  call_ind((uint32_t)(EBP), 0x115156ebu);
  /* 115156eb push 1 */
  push32((uint32_t)(0x1u));
  /* 115156ed push 5 */
  push32((uint32_t)(0x5u));
  /* 115156ef push 0x1151b100 */
  push32((uint32_t)(0x1151b100u));
  /* 115156f4 push 0x1151b4f8 */
  push32((uint32_t)(0x1151b4f8u));
  /* 115156f9 call ebp */
  call_ind((uint32_t)(EBP), 0x115156fbu);
  /* 115156fb push esi */
  push32((uint32_t)(ESI));
  /* 115156fc push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115156fe push 0x1151b470 */
  push32((uint32_t)(0x1151b470u));
  /* 11515703 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515705 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x1151570bu);
  /* 1151570b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151570e push esi */
  push32((uint32_t)(ESI));
  /* 1151570f push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11515711 call edi */
  call_ind((uint32_t)(EDI), 0x11515713u);
  /* 11515713 pop ecx */
  ECX = (pop32());
  /* 11515714 pop ecx */
  ECX = (pop32());
L_11515715:;
  /* 11515715 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11515717 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151571du);
  /* 1151571d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151571f pop ecx */
  ECX = (pop32());
  /* 11515720 je 0x11515791 */
  if (C.zf) goto L_11515791;
  /* 11515722 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11515724 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x1151572au);
  /* 1151572a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151572c pop ecx */
  ECX = (pop32());
  /* 1151572d jne 0x11515791 */
  if (!C.zf) goto L_11515791;
  /* 1151572f push esi */
  push32((uint32_t)(ESI));
  /* 11515730 push 0x1151b238 */
  push32((uint32_t)(0x1151b238u));
  /* 11515735 call dword ptr [0x11519124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519124))), 0x1151573bu);
  /* 1151573b pop ecx */
  ECX = (pop32());
  /* 1151573c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151573e pop ecx */
  ECX = (pop32());
  /* 1151573f jne 0x11515791 */
  if (!C.zf) goto L_11515791;
  /* 11515741 push esi */
  push32((uint32_t)(ESI));
  /* 11515742 push 0x1151b338 */
  push32((uint32_t)(0x1151b338u));
  /* 11515747 call ebx */
  call_ind((uint32_t)(EBX), 0x11515749u);
  /* 11515749 mov ebx, dword ptr [0x115190f4] */
  EBX = (r32((uint32_t)(0x115190f4)));
  /* 1151574f push esi */
  push32((uint32_t)(ESI));
  /* 11515750 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11515752 push 0x1151b518 */
  push32((uint32_t)(0x1151b518u));
  /* 11515757 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515759 call ebx */
  call_ind((uint32_t)(EBX), 0x1151575bu);
  /* 1151575b push esi */
  push32((uint32_t)(ESI));
  /* 1151575c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151575e push 0x1151b3c0 */
  push32((uint32_t)(0x1151b3c0u));
  /* 11515763 push 0x1151b4f0 */
  push32((uint32_t)(0x1151b4f0u));
  /* 11515768 call ebp */
  call_ind((uint32_t)(EBP), 0x1151576au);
  /* 1151576a push 1 */
  push32((uint32_t)(0x1u));
  /* 1151576c push 5 */
  push32((uint32_t)(0x5u));
  /* 1151576e push 0x1151b100 */
  push32((uint32_t)(0x1151b100u));
  /* 11515773 push 0x1151b4f8 */
  push32((uint32_t)(0x1151b4f8u));
  /* 11515778 call ebp */
  call_ind((uint32_t)(EBP), 0x1151577au);
  /* 1151577a push esi */
  push32((uint32_t)(ESI));
  /* 1151577b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1151577d push 0x1151b470 */
  push32((uint32_t)(0x1151b470u));
  /* 11515782 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515784 call ebx */
  call_ind((uint32_t)(EBX), 0x11515786u);
  /* 11515786 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515789 push 1 */
  push32((uint32_t)(0x1u));
  /* 1151578b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1151578d call edi */
  call_ind((uint32_t)(EDI), 0x1151578fu);
  /* 1151578f pop ecx */
  ECX = (pop32());
  /* 11515790 pop ecx */
  ECX = (pop32());
L_11515791:;
  /* 11515791 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11515793 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x11515799u);
  /* 11515799 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151579b pop ecx */
  ECX = (pop32());
  /* 1151579c je 0x115157e1 */
  if (C.zf) goto L_115157e1;
  /* 1151579e mov ebx, 0x1151b108 */
  EBX = (0x1151b108u);
  /* 115157a3 push ebx */
  push32((uint32_t)(EBX));
  /* 115157a4 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115157aau);
  /* 115157aa cmp eax, 0x48 */
  { uint32_t _a=(EAX),_b=(0x48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115157ad pop ecx */
  ECX = (pop32());
  /* 115157ae jge 0x115157e1 */
  if ((C.sf==C.of)) goto L_115157e1;
  /* 115157b0 push esi */
  push32((uint32_t)(ESI));
  /* 115157b1 push ebx */
  push32((uint32_t)(EBX));
  /* 115157b2 mov ebx, 0x1151b3c0 */
  EBX = (0x1151b3c0u);
  /* 115157b7 push ebx */
  push32((uint32_t)(EBX));
  /* 115157b8 push 0x1151b1b8 */
  push32((uint32_t)(0x1151b1b8u));
  /* 115157bd call dword ptr [0x115190ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190ec))), 0x115157c3u);
  /* 115157c3 push esi */
  push32((uint32_t)(ESI));
  /* 115157c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 115157c6 push ebx */
  push32((uint32_t)(EBX));
  /* 115157c7 push 0x1151b4f0 */
  push32((uint32_t)(0x1151b4f0u));
  /* 115157cc call ebp */
  call_ind((uint32_t)(EBP), 0x115157ceu);
  /* 115157ce push esi */
  push32((uint32_t)(ESI));
  /* 115157cf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115157d1 push 0x1151b470 */
  push32((uint32_t)(0x1151b470u));
  /* 115157d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 115157d8 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x115157deu);
  /* 115157de add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115157e1:;
  /* 115157e1 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115157e3 call dword ptr [0x115190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190b8))), 0x115157e9u);
  /* 115157e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115157eb pop ecx */
  ECX = (pop32());
  /* 115157ec je 0x11515831 */
  if (C.zf) goto L_11515831;
  /* 115157ee mov ebx, 0x1151b130 */
  EBX = (0x1151b130u);
  /* 115157f3 push ebx */
  push32((uint32_t)(EBX));
  /* 115157f4 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x115157fau);
  /* 115157fa cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115157fd pop ecx */
  ECX = (pop32());
  /* 115157fe jge 0x11515831 */
  if ((C.sf==C.of)) goto L_11515831;
  /* 11515800 push esi */
  push32((uint32_t)(ESI));
  /* 11515801 push ebx */
  push32((uint32_t)(EBX));
  /* 11515802 mov ebx, 0x1151b100 */
  EBX = (0x1151b100u);
  /* 11515807 push ebx */
  push32((uint32_t)(EBX));
  /* 11515808 push 0x1151b1c0 */
  push32((uint32_t)(0x1151b1c0u));
  /* 1151580d call dword ptr [0x115190ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190ec))), 0x11515813u);
  /* 11515813 push esi */
  push32((uint32_t)(ESI));
  /* 11515814 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515816 push ebx */
  push32((uint32_t)(EBX));
  /* 11515817 push 0x1151b4f8 */
  push32((uint32_t)(0x1151b4f8u));
  /* 1151581c call ebp */
  call_ind((uint32_t)(EBP), 0x1151581eu);
  /* 1151581e push esi */
  push32((uint32_t)(ESI));
  /* 1151581f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11515821 push 0x1151b470 */
  push32((uint32_t)(0x1151b470u));
  /* 11515826 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515828 call dword ptr [0x115190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190f4))), 0x1151582eu);
  /* 1151582e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11515831:;
  /* 11515831 mov ebp, dword ptr [0x115190b8] */
  EBP = (r32((uint32_t)(0x115190b8)));
  /* 11515837 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11515839 call ebp */
  call_ind((uint32_t)(EBP), 0x1151583bu);
  /* 1151583b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151583d pop ecx */
  ECX = (pop32());
  /* 1151583e je 0x11515867 */
  if (C.zf) goto L_11515867;
  /* 11515840 mov ebx, 0x1151b338 */
  EBX = (0x1151b338u);
  /* 11515845 push ebx */
  push32((uint32_t)(EBX));
  /* 11515846 call dword ptr [0x11519110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519110))), 0x1151584cu);
  /* 1151584c cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151584f pop ecx */
  ECX = (pop32());
  /* 11515850 jge 0x11515867 */
  if ((C.sf==C.of)) goto L_11515867;
  /* 11515852 push esi */
  push32((uint32_t)(ESI));
  /* 11515853 push ebx */
  push32((uint32_t)(EBX));
  /* 11515854 push 0x1151b5b8 */
  push32((uint32_t)(0x1151b5b8u));
  /* 11515859 push 0x1151b318 */
  push32((uint32_t)(0x1151b318u));
  /* 1151585e call dword ptr [0x115190ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190ec))), 0x11515864u);
  /* 11515864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11515867:;
  /* 11515867 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11515869 call ebp */
  call_ind((uint32_t)(EBP), 0x1151586bu);
  /* 1151586b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151586d pop ecx */
  ECX = (pop32());
  /* 1151586e je 0x11515894 */
  if (C.zf) goto L_11515894;
  /* 11515870 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515872 call dword ptr [0x1151915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151915c))), 0x11515878u);
  /* 11515878 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151587a pop ecx */
  ECX = (pop32());
  /* 1151587b je 0x11515894 */
  if (C.zf) goto L_11515894;
  /* 1151587d mov ebx, dword ptr [0x1151910c] */
  EBX = (r32((uint32_t)(0x1151910c)));
  /* 11515883 push 0x1151a2dc */
  push32((uint32_t)(0x1151a2dcu));
  /* 11515888 call ebx */
  call_ind((uint32_t)(EBX), 0x1151588au);
  /* 1151588a push esi */
  push32((uint32_t)(ESI));
  /* 1151588b push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1151588d call edi */
  call_ind((uint32_t)(EDI), 0x1151588fu);
  /* 1151588f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515892 jmp 0x1151589a */
  goto L_1151589a;
L_11515894:;
  /* 11515894 mov ebx, dword ptr [0x1151910c] */
  EBX = (r32((uint32_t)(0x1151910c)));
L_1151589a:;
  /* 1151589a push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1151589c call ebp */
  call_ind((uint32_t)(EBP), 0x1151589eu);
  /* 1151589e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115158a0 pop ecx */
  ECX = (pop32());
  /* 115158a1 je 0x115158bf */
  if (C.zf) goto L_115158bf;
  /* 115158a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115158a5 call dword ptr [0x1151915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151915c))), 0x115158abu);
  /* 115158ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115158ad pop ecx */
  ECX = (pop32());
  /* 115158ae je 0x115158bf */
  if (C.zf) goto L_115158bf;
  /* 115158b0 push 0x1151a2d4 */
  push32((uint32_t)(0x1151a2d4u));
  /* 115158b5 call ebx */
  call_ind((uint32_t)(EBX), 0x115158b7u);
  /* 115158b7 push esi */
  push32((uint32_t)(ESI));
  /* 115158b8 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115158ba call edi */
  call_ind((uint32_t)(EDI), 0x115158bcu);
  /* 115158bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115158bf:;
  /* 115158bf push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115158c1 call ebp */
  call_ind((uint32_t)(EBP), 0x115158c3u);
  /* 115158c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115158c5 pop ecx */
  ECX = (pop32());
  /* 115158c6 je 0x115158e4 */
  if (C.zf) goto L_115158e4;
  /* 115158c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115158ca call dword ptr [0x1151915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151915c))), 0x115158d0u);
  /* 115158d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115158d2 pop ecx */
  ECX = (pop32());
  /* 115158d3 je 0x115158e4 */
  if (C.zf) goto L_115158e4;
  /* 115158d5 push 0x1151a2cc */
  push32((uint32_t)(0x1151a2ccu));
  /* 115158da call ebx */
  call_ind((uint32_t)(EBX), 0x115158dcu);
  /* 115158dc push esi */
  push32((uint32_t)(ESI));
  /* 115158dd push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115158df call edi */
  call_ind((uint32_t)(EDI), 0x115158e1u);
  /* 115158e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115158e4:;
  /* 115158e4 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115158e6 call ebp */
  call_ind((uint32_t)(EBP), 0x115158e8u);
  /* 115158e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115158ea pop ecx */
  ECX = (pop32());
  /* 115158eb je 0x11515909 */
  if (C.zf) goto L_11515909;
  /* 115158ed push 4 */
  push32((uint32_t)(0x4u));
  /* 115158ef call dword ptr [0x1151915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151915c))), 0x115158f5u);
  /* 115158f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115158f7 pop ecx */
  ECX = (pop32());
  /* 115158f8 je 0x11515909 */
  if (C.zf) goto L_11515909;
  /* 115158fa push 0x1151a2c4 */
  push32((uint32_t)(0x1151a2c4u));
  /* 115158ff call ebx */
  call_ind((uint32_t)(EBX), 0x11515901u);
  /* 11515901 push esi */
  push32((uint32_t)(ESI));
  /* 11515902 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11515904 call edi */
  call_ind((uint32_t)(EDI), 0x11515906u);
  /* 11515906 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11515909:;
  /* 11515909 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1151590b call ebp */
  call_ind((uint32_t)(EBP), 0x1151590du);
  /* 1151590d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151590f pop ecx */
  ECX = (pop32());
  /* 11515910 je 0x1151592e */
  if (C.zf) goto L_1151592e;
  /* 11515912 push 5 */
  push32((uint32_t)(0x5u));
  /* 11515914 call dword ptr [0x1151915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151915c))), 0x1151591au);
  /* 1151591a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151591c pop ecx */
  ECX = (pop32());
  /* 1151591d je 0x1151592e */
  if (C.zf) goto L_1151592e;
  /* 1151591f push 0x1151a2bc */
  push32((uint32_t)(0x1151a2bcu));
  /* 11515924 call ebx */
  call_ind((uint32_t)(EBX), 0x11515926u);
  /* 11515926 push esi */
  push32((uint32_t)(ESI));
  /* 11515927 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11515929 call edi */
  call_ind((uint32_t)(EDI), 0x1151592bu);
  /* 1151592b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1151592e:;
  /* 1151592e push esi */
  push32((uint32_t)(ESI));
  /* 1151592f call dword ptr [0x1151915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151915c))), 0x11515935u);
  /* 11515935 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515937 pop ecx */
  ECX = (pop32());
  /* 11515938 je 0x1151599a */
  if (C.zf) goto L_1151599a;
  /* 1151593a mov edi, dword ptr [0x11519148] */
  EDI = (r32((uint32_t)(0x11519148)));
  /* 11515940 push esi */
  push32((uint32_t)(ESI));
  /* 11515941 push 0x1151b4e0 */
  push32((uint32_t)(0x1151b4e0u));
  /* 11515946 call edi */
  call_ind((uint32_t)(EDI), 0x11515948u);
  /* 11515948 mov edx, eax */
  EDX = (EAX);
  /* 1151594a push esi */
  push32((uint32_t)(ESI));
  /* 1151594b push 0x1151b1d8 */
  push32((uint32_t)(0x1151b1d8u));
  /* 11515950 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11515954 call edi */
  call_ind((uint32_t)(EDI), 0x11515956u);
  /* 11515956 mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 1151595a push esi */
  push32((uint32_t)(ESI));
  /* 1151595b push 0x1151b358 */
  push32((uint32_t)(0x1151b358u));
  /* 11515960 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11515962 call dword ptr [0x11519148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519148))), 0x11515968u);
  /* 11515968 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151596b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151596d jne 0x1151599a */
  if (!C.zf) goto L_1151599a;
  /* 1151596f push 1 */
  push32((uint32_t)(0x1u));
  /* 11515971 pop esi */
  ESI = (pop32());
L_11515972:;
  /* 11515972 push esi */
  push32((uint32_t)(ESI));
  /* 11515973 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x11515979u);
  /* 11515979 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151597b pop ecx */
  ECX = (pop32());
  /* 1151597c jne 0x11515986 */
  if (!C.zf) goto L_11515986;
  /* 1151597e push esi */
  push32((uint32_t)(ESI));
  /* 1151597f call dword ptr [0x11519120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519120))), 0x11515985u);
  /* 11515985 pop ecx */
  ECX = (pop32());
L_11515986:;
  /* 11515986 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11515987 cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151598a jl 0x11515972 */
  if ((C.sf!=C.of)) goto L_11515972;
  /* 1151598c push 0x1151a2b4 */
  push32((uint32_t)(0x1151a2b4u));
  /* 11515991 call ebx */
  call_ind((uint32_t)(EBX), 0x11515993u);
  /* 11515993 pop ecx */
  ECX = (pop32());
  /* 11515994 call dword ptr [0x11519160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519160))), 0x1151599au);
L_1151599a:;
  /* 1151599a push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1151599c call ebp */
  call_ind((uint32_t)(EBP), 0x1151599eu);
  /* 1151599e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115159a0 pop ecx */
  ECX = (pop32());
  /* 115159a1 jne 0x115159e0 */
  if (!C.zf) goto L_115159e0;
  /* 115159a3 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 115159a5 call ebp */
  call_ind((uint32_t)(EBP), 0x115159a7u);
  /* 115159a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115159a9 pop ecx */
  ECX = (pop32());
  /* 115159aa jne 0x115159e0 */
  if (!C.zf) goto L_115159e0;
  /* 115159ac push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115159ae call ebp */
  call_ind((uint32_t)(EBP), 0x115159b0u);
  /* 115159b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115159b2 pop ecx */
  ECX = (pop32());
  /* 115159b3 jne 0x115159e0 */
  if (!C.zf) goto L_115159e0;
  /* 115159b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115159b7 pop esi */
  ESI = (pop32());
L_115159b8:;
  /* 115159b8 push esi */
  push32((uint32_t)(ESI));
  /* 115159b9 call dword ptr [0x11519114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519114))), 0x115159bfu);
  /* 115159bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115159c1 pop ecx */
  ECX = (pop32());
  /* 115159c2 jne 0x115159cc */
  if (!C.zf) goto L_115159cc;
  /* 115159c4 push esi */
  push32((uint32_t)(ESI));
  /* 115159c5 call dword ptr [0x11519120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519120))), 0x115159cbu);
  /* 115159cb pop ecx */
  ECX = (pop32());
L_115159cc:;
  /* 115159cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115159cd cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115159d0 jl 0x115159b8 */
  if ((C.sf!=C.of)) goto L_115159b8;
  /* 115159d2 push 0x1151a2ac */
  push32((uint32_t)(0x1151a2acu));
  /* 115159d7 call ebx */
  call_ind((uint32_t)(EBX), 0x115159d9u);
  /* 115159d9 pop ecx */
  ECX = (pop32());
  /* 115159da call dword ptr [0x11519158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519158))), 0x115159e0u);
L_115159e0:;
  /* 115159e0 pop edi */
  EDI = (pop32());
  /* 115159e1 pop esi */
  ESI = (pop32());
  /* 115159e2 pop ebp */
  EBP = (pop32());
  /* 115159e3 pop ebx */
  EBX = (pop32());
  /* 115159e4 pop ecx */
  ECX = (pop32());
  /* 115159e5 ret  */
  ESPCHK(0x11511721u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x115159f0 (7 bytes, 3 insns) */
void f_115159f0(void) {
  FTRACE(0x115159f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115159f0 push edi */
  push32((uint32_t)(EDI));
  /* 115159f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 115159f5 jmp 0x11515a61 */
  jmp_ind(0x11515a61u); return;
}

/* FUN_10005a00 @ 0x11515a00 (224 bytes, 84 insns) */
void f_11515a00(void) {
  FTRACE(0x11515a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515a00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11515a04 push edi */
  push32((uint32_t)(EDI));
  /* 11515a05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11515a0b je 0x11515a1c */
  if (C.zf) goto L_11515a1c;
L_11515a0d:;
  /* 11515a0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11515a0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11515a10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515a12 je 0x11515a4f */
  if (C.zf) goto L_11515a4f;
  /* 11515a14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11515a1a jne 0x11515a0d */
  if (!C.zf) goto L_11515a0d;
L_11515a1c:;
  /* 11515a1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11515a1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11515a23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515a25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11515a28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11515a2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515a2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11515a32 je 0x11515a1c */
  if (C.zf) goto L_11515a1c;
  /* 11515a34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11515a37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11515a39 je 0x11515a5e */
  if (C.zf) goto L_11515a5e;
  /* 11515a3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11515a3d je 0x11515a59 */
  if (C.zf) goto L_11515a59;
  /* 11515a3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11515a44 je 0x11515a54 */
  if (C.zf) goto L_11515a54;
  /* 11515a46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11515a4b je 0x11515a4f */
  if (C.zf) goto L_11515a4f;
  /* 11515a4d jmp 0x11515a1c */
  goto L_11515a1c;
L_11515a4f:;
  /* 11515a4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11515a52 jmp 0x11515a61 */
  goto L_11515a61;
L_11515a54:;
  /* 11515a54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11515a57 jmp 0x11515a61 */
  goto L_11515a61;
L_11515a59:;
  /* 11515a59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11515a5c jmp 0x11515a61 */
  goto L_11515a61;
L_11515a5e:;
  /* 11515a5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11515a61:;
  /* 11515a61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11515a65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11515a6b je 0x11515a86 */
  if (C.zf) goto L_11515a86;
L_11515a6d:;
  /* 11515a6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11515a6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11515a70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11515a72 je 0x11515ad8 */
  if (C.zf) goto L_11515ad8;
  /* 11515a74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11515a76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11515a77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11515a7d jne 0x11515a6d */
  if (!C.zf) goto L_11515a6d;
  /* 11515a7f jmp 0x11515a86 */
  goto L_11515a86;
L_11515a81:;
  /* 11515a81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11515a83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11515a86:;
  /* 11515a86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11515a8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11515a8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515a8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11515a92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11515a94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11515a96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515a99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11515a9e je 0x11515a81 */
  if (C.zf) goto L_11515a81;
  /* 11515aa0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11515aa2 je 0x11515ad8 */
  if (C.zf) goto L_11515ad8;
  /* 11515aa4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11515aa6 je 0x11515acf */
  if (C.zf) goto L_11515acf;
  /* 11515aa8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11515aae je 0x11515ac2 */
  if (C.zf) goto L_11515ac2;
  /* 11515ab0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11515ab6 je 0x11515aba */
  if (C.zf) goto L_11515aba;
  /* 11515ab8 jmp 0x11515a81 */
  goto L_11515a81;
L_11515aba:;
  /* 11515aba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11515abc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11515ac0 pop edi */
  EDI = (pop32());
  /* 11515ac1 ret  */
  ESPCHK(0x11515a00u, _esp0);
  ESP += 4; return;
L_11515ac2:;
  /* 11515ac2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11515ac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11515ac9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11515acd pop edi */
  EDI = (pop32());
  /* 11515ace ret  */
  ESPCHK(0x11515a00u, _esp0);
  ESP += 4; return;
L_11515acf:;
  /* 11515acf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11515ad2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11515ad6 pop edi */
  EDI = (pop32());
  /* 11515ad7 ret  */
  ESPCHK(0x11515a00u, _esp0);
  ESP += 4; return;
L_11515ad8:;
  /* 11515ad8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11515ada mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11515ade pop edi */
  EDI = (pop32());
  /* 11515adf ret  */
  ESPCHK(0x11515a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x11515ae0 (217 bytes, 57 insns) */
void f_11515ae0(void) {
  FTRACE(0x11515ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515ae0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11515ae4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515ae7 jne 0x11515b75 */
  if (!C.zf) goto L_11515b75;
  /* 11515aed call dword ptr [0x115190a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190a8))), 0x11515af3u);
  /* 11515af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515af5 mov dword ptr [0x1151b694], eax */
  w32((uint32_t)(0x1151b694), (EAX));
  /* 11515afa call 0x11516514 */
  push32(0x11515affu); f_11516514();
  /* 11515aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515b01 pop ecx */
  ECX = (pop32());
  /* 11515b02 je 0x11515b40 */
  if (C.zf) goto L_11515b40;
  /* 11515b04 mov eax, dword ptr [0x1151b694] */
  EAX = (r32((uint32_t)(0x1151b694)));
  /* 11515b09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11515b0b mov cl, byte ptr [0x1151b695] */
  CL = (r8((uint32_t)(0x1151b695)));
  /* 11515b11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11515b16 shr dword ptr [0x1151b694], 0x10 */
  w32((uint32_t)(0x1151b694), (sh_shr((uint32_t)(r32((uint32_t)(0x1151b694))), (0x10u)&0x1f, 32)));
  /* 11515b1d mov dword ptr [0x1151b69c], eax */
  w32((uint32_t)(0x1151b69c), (EAX));
  /* 11515b22 mov dword ptr [0x1151b6a0], ecx */
  w32((uint32_t)(0x1151b6a0), (ECX));
  /* 11515b28 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11515b2b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515b2d mov dword ptr [0x1151b698], eax */
  w32((uint32_t)(0x1151b698), (EAX));
  /* 11515b32 call 0x11515da7 */
  push32(0x11515b37u); f_11515da7();
  /* 11515b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515b39 jne 0x11515b44 */
  if (!C.zf) goto L_11515b44;
  /* 11515b3b call 0x11516550 */
  push32(0x11515b40u); f_11516550();
L_11515b40:;
  /* 11515b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11515b42 jmp 0x11515bb6 */
  goto L_11515bb6;
L_11515b44:;
  /* 11515b44 call dword ptr [0x115190a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190a4))), 0x11515b4au);
  /* 11515b4a mov dword ptr [0x1151bbf8], eax */
  w32((uint32_t)(0x1151bbf8), (EAX));
  /* 11515b4f call 0x115163e2 */
  push32(0x11515b54u); f_115163e2();
  /* 11515b54 mov dword ptr [0x1151b680], eax */
  w32((uint32_t)(0x1151b680), (EAX));
  /* 11515b59 call 0x11515ecc */
  push32(0x11515b5eu); f_11515ecc();
  /* 11515b5e call 0x11516195 */
  push32(0x11515b63u); f_11516195();
  /* 11515b63 call 0x115160dc */
  push32(0x11515b68u); f_115160dc();
  /* 11515b68 call 0x11515c89 */
  push32(0x11515b6du); f_11515c89();
  /* 11515b6d inc dword ptr [0x1151b67c] */
  { uint32_t _r=(r32((uint32_t)(0x1151b67c)))+1; w32((uint32_t)(0x1151b67c), (_r)); fl_inc(_r,32); }
  /* 11515b73 jmp 0x11515bb3 */
  goto L_11515bb3;
L_11515b75:;
  /* 11515b75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11515b77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515b79 jne 0x11515ba7 */
  if (!C.zf) goto L_11515ba7;
  /* 11515b7b cmp dword ptr [0x1151b67c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1151b67c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515b81 jle 0x11515b40 */
  if ((C.zf||C.sf!=C.of)) goto L_11515b40;
  /* 11515b83 dec dword ptr [0x1151b67c] */
  { uint32_t _r=(r32((uint32_t)(0x1151b67c)))-1; w32((uint32_t)(0x1151b67c), (_r)); fl_dec(_r,32); }
  /* 11515b89 cmp dword ptr [0x1151b6cc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1151b6cc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515b8f jne 0x11515b96 */
  if (!C.zf) goto L_11515b96;
  /* 11515b91 call 0x11515cc7 */
  push32(0x11515b96u); f_11515cc7();
L_11515b96:;
  /* 11515b96 call 0x11516088 */
  push32(0x11515b9bu); f_11516088();
  /* 11515b9b call 0x11515dfb */
  push32(0x11515ba0u); f_11515dfb();
  /* 11515ba0 call 0x11516550 */
  push32(0x11515ba5u); f_11516550();
  /* 11515ba5 jmp 0x11515bb3 */
  goto L_11515bb3;
L_11515ba7:;
  /* 11515ba7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515baa jne 0x11515bb3 */
  if (!C.zf) goto L_11515bb3;
  /* 11515bac push ecx */
  push32((uint32_t)(ECX));
  /* 11515bad call 0x11515e2c */
  push32(0x11515bb2u); f_11515e2c();
  /* 11515bb2 pop ecx */
  ECX = (pop32());
L_11515bb3:;
  /* 11515bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515bb5 pop eax */
  EAX = (pop32());
L_11515bb6:;
  /* 11515bb6 ret 0xc */
  ESPCHK(0x11515ae0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11515bb9 (157 bytes, 73 insns) */
void f_11515bb9(void) {
  FTRACE(0x11515bb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515bb9 push ebp */
  push32((uint32_t)(EBP));
  /* 11515bba mov ebp, esp */
  EBP = (ESP);
  /* 11515bbc push ebx */
  push32((uint32_t)(EBX));
  /* 11515bbd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11515bc0 push esi */
  push32((uint32_t)(ESI));
  /* 11515bc1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11515bc4 push edi */
  push32((uint32_t)(EDI));
  /* 11515bc5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11515bc8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11515bca jne 0x11515bd5 */
  if (!C.zf) goto L_11515bd5;
  /* 11515bcc cmp dword ptr [0x1151b67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1151b67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515bd3 jmp 0x11515bfb */
  goto L_11515bfb;
L_11515bd5:;
  /* 11515bd5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515bd8 je 0x11515bdf */
  if (C.zf) goto L_11515bdf;
  /* 11515bda cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515bdd jne 0x11515c01 */
  if (!C.zf) goto L_11515c01;
L_11515bdf:;
  /* 11515bdf mov eax, dword ptr [0x1151bbfc] */
  EAX = (r32((uint32_t)(0x1151bbfc)));
  /* 11515be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515be6 je 0x11515bf1 */
  if (C.zf) goto L_11515bf1;
  /* 11515be8 push edi */
  push32((uint32_t)(EDI));
  /* 11515be9 push esi */
  push32((uint32_t)(ESI));
  /* 11515bea push ebx */
  push32((uint32_t)(EBX));
  /* 11515beb call eax */
  call_ind((uint32_t)(EAX), 0x11515bedu);
  /* 11515bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515bef je 0x11515bfd */
  if (C.zf) goto L_11515bfd;
L_11515bf1:;
  /* 11515bf1 push edi */
  push32((uint32_t)(EDI));
  /* 11515bf2 push esi */
  push32((uint32_t)(ESI));
  /* 11515bf3 push ebx */
  push32((uint32_t)(EBX));
  /* 11515bf4 call 0x11515ae0 */
  push32(0x11515bf9u); f_11515ae0();
  /* 11515bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11515bfb:;
  /* 11515bfb jne 0x11515c01 */
  if (!C.zf) goto L_11515c01;
L_11515bfd:;
  /* 11515bfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11515bff jmp 0x11515c4f */
  goto L_11515c4f;
L_11515c01:;
  /* 11515c01 push edi */
  push32((uint32_t)(EDI));
  /* 11515c02 push esi */
  push32((uint32_t)(ESI));
  /* 11515c03 push ebx */
  push32((uint32_t)(EBX));
  /* 11515c04 call 0x11511000 */
  push32(0x11515c09u); f_11511000();
  /* 11515c09 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515c0c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11515c0f jne 0x11515c1d */
  if (!C.zf) goto L_11515c1d;
  /* 11515c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515c13 jne 0x11515c4c */
  if (!C.zf) goto L_11515c4c;
  /* 11515c15 push edi */
  push32((uint32_t)(EDI));
  /* 11515c16 push eax */
  push32((uint32_t)(EAX));
  /* 11515c17 push ebx */
  push32((uint32_t)(EBX));
  /* 11515c18 call 0x11515ae0 */
  push32(0x11515c1du); f_11515ae0();
L_11515c1d:;
  /* 11515c1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11515c1f je 0x11515c26 */
  if (C.zf) goto L_11515c26;
  /* 11515c21 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515c24 jne 0x11515c4c */
  if (!C.zf) goto L_11515c4c;
L_11515c26:;
  /* 11515c26 push edi */
  push32((uint32_t)(EDI));
  /* 11515c27 push esi */
  push32((uint32_t)(ESI));
  /* 11515c28 push ebx */
  push32((uint32_t)(EBX));
  /* 11515c29 call 0x11515ae0 */
  push32(0x11515c2eu); f_11515ae0();
  /* 11515c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515c30 jne 0x11515c35 */
  if (!C.zf) goto L_11515c35;
  /* 11515c32 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11515c35:;
  /* 11515c35 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515c39 je 0x11515c4c */
  if (C.zf) goto L_11515c4c;
  /* 11515c3b mov eax, dword ptr [0x1151bbfc] */
  EAX = (r32((uint32_t)(0x1151bbfc)));
  /* 11515c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515c42 je 0x11515c4c */
  if (C.zf) goto L_11515c4c;
  /* 11515c44 push edi */
  push32((uint32_t)(EDI));
  /* 11515c45 push esi */
  push32((uint32_t)(ESI));
  /* 11515c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11515c47 call eax */
  call_ind((uint32_t)(EAX), 0x11515c49u);
  /* 11515c49 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11515c4c:;
  /* 11515c4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11515c4f:;
  /* 11515c4f pop edi */
  EDI = (pop32());
  /* 11515c50 pop esi */
  ESI = (pop32());
  /* 11515c51 pop ebx */
  EBX = (pop32());
  /* 11515c52 pop ebp */
  EBP = (pop32());
  /* 11515c53 ret 0xc */
  ESPCHK(0x11515bb9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11515c56 (48 bytes, 15 insns) */
void f_11515c56(void) {
  FTRACE(0x11515c56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515c56 mov eax, dword ptr [0x1151b688] */
  EAX = (r32((uint32_t)(0x1151b688)));
  /* 11515c5b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515c5e je 0x11515c6d */
  if (C.zf) goto L_11515c6d;
  /* 11515c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515c62 jne 0x11515c72 */
  if (!C.zf) goto L_11515c72;
  /* 11515c64 cmp dword ptr [0x1151b68c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1151b68c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515c6b jne 0x11515c72 */
  if (!C.zf) goto L_11515c72;
L_11515c6d:;
  /* 11515c6d call 0x115165c5 */
  push32(0x11515c72u); f_115165c5();
L_11515c72:;
  /* 11515c72 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11515c76 call 0x115165fe */
  push32(0x11515c7bu); f_115165fe();
  /* 11515c7b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11515c80 call dword ptr [0x1151add0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151add0))), 0x11515c86u);
  /* 11515c86 pop ecx */
  ECX = (pop32());
  /* 11515c87 pop ecx */
  ECX = (pop32());
  /* 11515c88 ret  */
  ESPCHK(0x11515c56u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c89 @ 0x11515c89 (45 bytes, 12 insns) */
void f_11515c89(void) {
  FTRACE(0x11515c89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515c89 mov eax, dword ptr [0x1151bbf4] */
  EAX = (r32((uint32_t)(0x1151bbf4)));
  /* 11515c8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515c90 je 0x11515c94 */
  if (C.zf) goto L_11515c94;
  /* 11515c92 call eax */
  call_ind((uint32_t)(EAX), 0x11515c94u);
L_11515c94:;
  /* 11515c94 push 0x1151a010 */
  push32((uint32_t)(0x1151a010u));
  /* 11515c99 push 0x1151a008 */
  push32((uint32_t)(0x1151a008u));
  /* 11515c9e call 0x11515d8d */
  push32(0x11515ca3u); f_11515d8d();
  /* 11515ca3 push 0x1151a004 */
  push32((uint32_t)(0x1151a004u));
  /* 11515ca8 push 0x1151a000 */
  push32((uint32_t)(0x1151a000u));
  /* 11515cad call 0x11515d8d */
  push32(0x11515cb2u); f_11515d8d();
  /* 11515cb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515cb5 ret  */
  ESPCHK(0x11515c89u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11515cb6 (17 bytes, 6 insns) */
void f_11515cb6(void) {
  FTRACE(0x11515cb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11515cb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515cba push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11515cbe call 0x11515cd6 */
  push32(0x11515cc3u); f_11515cd6();
  /* 11515cc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515cc6 ret  */
  ESPCHK(0x11515cb6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc7 @ 0x11515cc7 (15 bytes, 6 insns) */
void f_11515cc7(void) {
  FTRACE(0x11515cc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515cc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11515ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 11515ccd call 0x11515cd6 */
  push32(0x11515cd2u); f_11515cd6();
  /* 11515cd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11515cd5 ret  */
  ESPCHK(0x11515cc7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd6 @ 0x11515cd6 (163 bytes, 53 insns) */
void f_11515cd6(void) {
  FTRACE(0x11515cd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515cd6 push edi */
  push32((uint32_t)(EDI));
  /* 11515cd7 call 0x11515d7b */
  push32(0x11515cdcu); f_11515d7b();
  /* 11515cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11515cde pop edi */
  EDI = (pop32());
  /* 11515cdf cmp dword ptr [0x1151b6d0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1151b6d0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515ce5 jne 0x11515cf8 */
  if (!C.zf) goto L_11515cf8;
  /* 11515ce7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11515ceb call dword ptr [0x115190a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115190a0))), 0x11515cf1u);
  /* 11515cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11515cf2 call dword ptr [0x11519098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519098))), 0x11515cf8u);
L_11515cf8:;
  /* 11515cf8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515cfd push ebx */
  push32((uint32_t)(EBX));
  /* 11515cfe mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11515d02 mov dword ptr [0x1151b6cc], edi */
  w32((uint32_t)(0x1151b6cc), (EDI));
  /* 11515d08 mov byte ptr [0x1151b6c8], bl */
  w8((uint32_t)(0x1151b6c8), (BL));
  /* 11515d0e jne 0x11515d4c */
  if (!C.zf) goto L_11515d4c;
  /* 11515d10 mov eax, dword ptr [0x1151bbf0] */
  EAX = (r32((uint32_t)(0x1151bbf0)));
  /* 11515d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515d17 je 0x11515d3b */
  if (C.zf) goto L_11515d3b;
  /* 11515d19 mov ecx, dword ptr [0x1151bbec] */
  ECX = (r32((uint32_t)(0x1151bbec)));
  /* 11515d1f push esi */
  push32((uint32_t)(ESI));
  /* 11515d20 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11515d23 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515d25 jb 0x11515d3a */
  if (C.cf) goto L_11515d3a;
L_11515d27:;
  /* 11515d27 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11515d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515d2b je 0x11515d2f */
  if (C.zf) goto L_11515d2f;
  /* 11515d2d call eax */
  call_ind((uint32_t)(EAX), 0x11515d2fu);
L_11515d2f:;
  /* 11515d2f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11515d32 cmp esi, dword ptr [0x1151bbf0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1151bbf0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515d38 jae 0x11515d27 */
  if (!C.cf) goto L_11515d27;
L_11515d3a:;
  /* 11515d3a pop esi */
  ESI = (pop32());
L_11515d3b:;
  /* 11515d3b push 0x1151a018 */
  push32((uint32_t)(0x1151a018u));
  /* 11515d40 push 0x1151a014 */
  push32((uint32_t)(0x1151a014u));
  /* 11515d45 call 0x11515d8d */
  push32(0x11515d4au); f_11515d8d();
  /* 11515d4a pop ecx */
  ECX = (pop32());
  /* 11515d4b pop ecx */
  ECX = (pop32());
L_11515d4c:;
  /* 11515d4c push 0x1151a020 */
  push32((uint32_t)(0x1151a020u));
  /* 11515d51 push 0x1151a01c */
  push32((uint32_t)(0x1151a01cu));
  /* 11515d56 call 0x11515d8d */
  push32(0x11515d5bu); f_11515d8d();
  /* 11515d5b pop ecx */
  ECX = (pop32());
  /* 11515d5c pop ecx */
  ECX = (pop32());
  /* 11515d5d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11515d5f pop ebx */
  EBX = (pop32());
  /* 11515d60 je 0x11515d69 */
  if (C.zf) goto L_11515d69;
  /* 11515d62 call 0x11515d84 */
  push32(0x11515d67u); f_11515d84();
  /* 11515d67 pop edi */
  EDI = (pop32());
  /* 11515d68 ret  */
  ESPCHK(0x11515cd6u, _esp0);
  ESP += 4; return;
L_11515d69:;
  /* 11515d69 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11515d6d mov dword ptr [0x1151b6d0], edi */
  w32((uint32_t)(0x1151b6d0), (EDI));
  /* 11515d73 call dword ptr [0x1151909c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151909c))), 0x11515d79u);
  /* 11515d79 pop edi */
  EDI = (pop32());
  /* 11515d7a ret  */
  ESPCHK(0x11515cd6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d7b @ 0x11515d7b (9 bytes, 4 insns) */
void f_11515d7b(void) {
  FTRACE(0x11515d7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515d7b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11515d7d call 0x115167e6 */
  push32(0x11515d82u); f_115167e6();
  /* 11515d82 pop ecx */
  ECX = (pop32());
  /* 11515d83 ret  */
  ESPCHK(0x11515d7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005d84 @ 0x11515d84 (9 bytes, 4 insns) */
void f_11515d84(void) {
  FTRACE(0x11515d84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515d84 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11515d86 call 0x11516847 */
  push32(0x11515d8bu); f_11516847();
  /* 11515d8b pop ecx */
  ECX = (pop32());
  /* 11515d8c ret  */
  ESPCHK(0x11515d84u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d8d @ 0x11515d8d (26 bytes, 12 insns) */
void f_11515d8d(void) {
  FTRACE(0x11515d8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515d8d push esi */
  push32((uint32_t)(ESI));
  /* 11515d8e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11515d92:;
  /* 11515d92 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515d96 jae 0x11515da5 */
  if (!C.cf) goto L_11515da5;
  /* 11515d98 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11515d9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515d9c je 0x11515da0 */
  if (C.zf) goto L_11515da0;
  /* 11515d9e call eax */
  call_ind((uint32_t)(EAX), 0x11515da0u);
L_11515da0:;
  /* 11515da0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11515da3 jmp 0x11515d92 */
  goto L_11515d92;
L_11515da5:;
  /* 11515da5 pop esi */
  ESI = (pop32());
  /* 11515da6 ret  */
  ESPCHK(0x11515d8du, _esp0);
  ESP += 4; return;
}

/* FUN_10005da7 @ 0x11515da7 (84 bytes, 32 insns) */
void f_11515da7(void) {
  FTRACE(0x11515da7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515da7 push esi */
  push32((uint32_t)(ESI));
  /* 11515da8 call 0x11516751 */
  push32(0x11515dadu); f_11516751();
  /* 11515dad call dword ptr [0x11519094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519094))), 0x11515db3u);
  /* 11515db3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515db6 mov dword ptr [0x1151add4], eax */
  w32((uint32_t)(0x1151add4), (EAX));
  /* 11515dbb je 0x11515df7 */
  if (C.zf) goto L_11515df7;
  /* 11515dbd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11515dbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11515dc1 call 0x1151685c */
  push32(0x11515dc6u); f_1151685c();
  /* 11515dc6 mov esi, eax */
  ESI = (EAX);
  /* 11515dc8 pop ecx */
  ECX = (pop32());
  /* 11515dc9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11515dcb pop ecx */
  ECX = (pop32());
  /* 11515dcc je 0x11515df7 */
  if (C.zf) goto L_11515df7;
  /* 11515dce push esi */
  push32((uint32_t)(ESI));
  /* 11515dcf push dword ptr [0x1151add4] */
  push32((uint32_t)(r32((uint32_t)(0x1151add4))));
  /* 11515dd5 call dword ptr [0x1151908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151908c))), 0x11515ddbu);
  /* 11515ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515ddd je 0x11515df7 */
  if (C.zf) goto L_11515df7;
  /* 11515ddf push esi */
  push32((uint32_t)(ESI));
  /* 11515de0 call 0x11515e19 */
  push32(0x11515de5u); f_11515e19();
  /* 11515de5 pop ecx */
  ECX = (pop32());
  /* 11515de6 call dword ptr [0x11519090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519090))), 0x11515decu);
  /* 11515dec or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11515df0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11515df2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11515df4 pop eax */
  EAX = (pop32());
  /* 11515df5 pop esi */
  ESI = (pop32());
  /* 11515df6 ret  */
  ESPCHK(0x11515da7u, _esp0);
  ESP += 4; return;
L_11515df7:;
  /* 11515df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11515df9 pop esi */
  ESI = (pop32());
  /* 11515dfa ret  */
  ESPCHK(0x11515da7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dfb @ 0x11515dfb (30 bytes, 8 insns) */
void f_11515dfb(void) {
  FTRACE(0x11515dfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515dfb call 0x1151677a */
  push32(0x11515e00u); f_1151677a();
  /* 11515e00 mov eax, dword ptr [0x1151add4] */
  EAX = (r32((uint32_t)(0x1151add4)));
  /* 11515e05 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515e08 je 0x11515e18 */
  if (C.zf) goto L_11515e18;
  /* 11515e0a push eax */
  push32((uint32_t)(EAX));
  /* 11515e0b call dword ptr [0x11519084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519084))), 0x11515e11u);
  /* 11515e11 or dword ptr [0x1151add4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1151add4)))|(0xffffffffu); w32((uint32_t)(0x1151add4), (_r)); fl_logic(_r,32); }
L_11515e18:;
  /* 11515e18 ret  */
  ESPCHK(0x11515dfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e19 @ 0x11515e19 (19 bytes, 4 insns) */
void f_11515e19(void) {
  FTRACE(0x11515e19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515e19 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11515e1d mov dword ptr [eax + 0x50], 0x1151af50 */
  w32((uint32_t)(EAX + 0x50), (0x1151af50u));
  /* 11515e24 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11515e2b ret  */
  ESPCHK(0x11515e19u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e2c @ 0x11515e2c (160 bytes, 62 insns) */
void f_11515e2c(void) {
  FTRACE(0x11515e2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515e2c mov eax, dword ptr [0x1151add4] */
  EAX = (r32((uint32_t)(0x1151add4)));
  /* 11515e31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515e34 je 0x11515ecb */
  if (C.zf) goto L_11515ecb;
  /* 11515e3a push esi */
  push32((uint32_t)(ESI));
  /* 11515e3b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11515e3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11515e41 jne 0x11515e50 */
  if (!C.zf) goto L_11515e50;
  /* 11515e43 push eax */
  push32((uint32_t)(EAX));
  /* 11515e44 call dword ptr [0x11519088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519088))), 0x11515e4au);
  /* 11515e4a mov esi, eax */
  ESI = (EAX);
  /* 11515e4c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11515e4e je 0x11515ebc */
  if (C.zf) goto L_11515ebc;
L_11515e50:;
  /* 11515e50 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11515e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515e55 je 0x11515e5e */
  if (C.zf) goto L_11515e5e;
  /* 11515e57 push eax */
  push32((uint32_t)(EAX));
  /* 11515e58 call 0x115168e9 */
  push32(0x11515e5du); f_115168e9();
  /* 11515e5d pop ecx */
  ECX = (pop32());
L_11515e5e:;
  /* 11515e5e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11515e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515e63 je 0x11515e6c */
  if (C.zf) goto L_11515e6c;
  /* 11515e65 push eax */
  push32((uint32_t)(EAX));
  /* 11515e66 call 0x115168e9 */
  push32(0x11515e6bu); f_115168e9();
  /* 11515e6b pop ecx */
  ECX = (pop32());
L_11515e6c:;
  /* 11515e6c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11515e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515e71 je 0x11515e7a */
  if (C.zf) goto L_11515e7a;
  /* 11515e73 push eax */
  push32((uint32_t)(EAX));
  /* 11515e74 call 0x115168e9 */
  push32(0x11515e79u); f_115168e9();
  /* 11515e79 pop ecx */
  ECX = (pop32());
L_11515e7a:;
  /* 11515e7a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11515e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515e7f je 0x11515e88 */
  if (C.zf) goto L_11515e88;
  /* 11515e81 push eax */
  push32((uint32_t)(EAX));
  /* 11515e82 call 0x115168e9 */
  push32(0x11515e87u); f_115168e9();
  /* 11515e87 pop ecx */
  ECX = (pop32());
L_11515e88:;
  /* 11515e88 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11515e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515e8d je 0x11515e96 */
  if (C.zf) goto L_11515e96;
  /* 11515e8f push eax */
  push32((uint32_t)(EAX));
  /* 11515e90 call 0x115168e9 */
  push32(0x11515e95u); f_115168e9();
  /* 11515e95 pop ecx */
  ECX = (pop32());
L_11515e96:;
  /* 11515e96 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11515e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515e9b je 0x11515ea4 */
  if (C.zf) goto L_11515ea4;
  /* 11515e9d push eax */
  push32((uint32_t)(EAX));
  /* 11515e9e call 0x115168e9 */
  push32(0x11515ea3u); f_115168e9();
  /* 11515ea3 pop ecx */
  ECX = (pop32());
L_11515ea4:;
  /* 11515ea4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11515ea7 cmp eax, 0x1151af50 */
  { uint32_t _a=(EAX),_b=(0x1151af50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515eac je 0x11515eb5 */
  if (C.zf) goto L_11515eb5;
  /* 11515eae push eax */
  push32((uint32_t)(EAX));
  /* 11515eaf call 0x115168e9 */
  push32(0x11515eb4u); f_115168e9();
  /* 11515eb4 pop ecx */
  ECX = (pop32());
L_11515eb5:;
  /* 11515eb5 push esi */
  push32((uint32_t)(ESI));
  /* 11515eb6 call 0x115168e9 */
  push32(0x11515ebbu); f_115168e9();
  /* 11515ebb pop ecx */
  ECX = (pop32());
L_11515ebc:;
  /* 11515ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11515ebe push dword ptr [0x1151add4] */
  push32((uint32_t)(r32((uint32_t)(0x1151add4))));
  /* 11515ec4 call dword ptr [0x1151908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151908c))), 0x11515ecau);
  /* 11515eca pop esi */
  ESI = (pop32());
L_11515ecb:;
  /* 11515ecb ret  */
  ESPCHK(0x11515e2cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005ecc @ 0x11515ecc (444 bytes, 150 insns) */
void f_11515ecc(void) {
  FTRACE(0x11515eccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11515ecc push ebp */
  push32((uint32_t)(EBP));
  /* 11515ecd mov ebp, esp */
  EBP = (ESP);
  /* 11515ecf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11515ed2 push ebx */
  push32((uint32_t)(EBX));
  /* 11515ed3 push esi */
  push32((uint32_t)(ESI));
  /* 11515ed4 push edi */
  push32((uint32_t)(EDI));
  /* 11515ed5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11515eda call 0x11516931 */
  push32(0x11515edfu); f_11516931();
  /* 11515edf mov esi, eax */
  ESI = (EAX);
  /* 11515ee1 pop ecx */
  ECX = (pop32());
  /* 11515ee2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11515ee4 jne 0x11515eee */
  if (!C.zf) goto L_11515eee;
  /* 11515ee6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11515ee8 call 0x11515c56 */
  push32(0x11515eedu); f_11515c56();
  /* 11515eed pop ecx */
  ECX = (pop32());
L_11515eee:;
  /* 11515eee mov dword ptr [0x1151bae0], esi */
  w32((uint32_t)(0x1151bae0), (ESI));
  /* 11515ef4 mov dword ptr [0x1151bbe0], 0x20 */
  w32((uint32_t)(0x1151bbe0), (0x20u));
  /* 11515efe lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11515f04:;
  /* 11515f04 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515f06 jae 0x11515f26 */
  if (!C.cf) goto L_11515f26;
  /* 11515f08 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11515f0c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11515f0f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11515f13 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11515f17 mov eax, dword ptr [0x1151bae0] */
  EAX = (r32((uint32_t)(0x1151bae0)));
  /* 11515f1c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11515f1f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515f24 jmp 0x11515f04 */
  goto L_11515f04;
L_11515f26:;
  /* 11515f26 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11515f29 push eax */
  push32((uint32_t)(EAX));
  /* 11515f2a call dword ptr [0x1151907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151907c))), 0x11515f30u);
  /* 11515f30 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11515f35 je 0x1151600c */
  if (C.zf) goto L_1151600c;
  /* 11515f3b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11515f3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515f40 je 0x1151600c */
  if (C.zf) goto L_1151600c;
  /* 11515f46 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11515f48 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11515f4b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11515f4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11515f51 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11515f56 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515f58 jl 0x11515f5c */
  if ((C.sf!=C.of)) goto L_11515f5c;
  /* 11515f5a mov edi, eax */
  EDI = (EAX);
L_11515f5c:;
  /* 11515f5c cmp dword ptr [0x1151bbe0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1151bbe0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515f62 jge 0x11515fba */
  if ((C.sf==C.of)) goto L_11515fba;
  /* 11515f64 mov esi, 0x1151bae4 */
  ESI = (0x1151bae4u);
L_11515f69:;
  /* 11515f69 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11515f6e call 0x11516931 */
  push32(0x11515f73u); f_11516931();
  /* 11515f73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515f75 pop ecx */
  ECX = (pop32());
  /* 11515f76 je 0x11515fb4 */
  if (C.zf) goto L_11515fb4;
  /* 11515f78 add dword ptr [0x1151bbe0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1151bbe0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1151bbe0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11515f7f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11515f81 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11515f87:;
  /* 11515f87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515f89 jae 0x11515fa7 */
  if (!C.cf) goto L_11515fa7;
  /* 11515f8b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11515f8f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11515f92 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11515f96 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11515f9a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11515f9c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515f9f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11515fa5 jmp 0x11515f87 */
  goto L_11515f87;
L_11515fa7:;
  /* 11515fa7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11515faa cmp dword ptr [0x1151bbe0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1151bbe0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515fb0 jl 0x11515f69 */
  if ((C.sf!=C.of)) goto L_11515f69;
  /* 11515fb2 jmp 0x11515fba */
  goto L_11515fba;
L_11515fb4:;
  /* 11515fb4 mov edi, dword ptr [0x1151bbe0] */
  EDI = (r32((uint32_t)(0x1151bbe0)));
L_11515fba:;
  /* 11515fba xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11515fbc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11515fbe jle 0x1151600c */
  if ((C.zf||C.sf!=C.of)) goto L_1151600c;
L_11515fc0:;
  /* 11515fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11515fc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11515fc5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11515fc8 je 0x11516002 */
  if (C.zf) goto L_11516002;
  /* 11515fca mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11515fcc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11515fce je 0x11516002 */
  if (C.zf) goto L_11516002;
  /* 11515fd0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11515fd2 jne 0x11515fdf */
  if (!C.zf) goto L_11515fdf;
  /* 11515fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11515fd5 call dword ptr [0x11519074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519074))), 0x11515fdbu);
  /* 11515fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11515fdd je 0x11516002 */
  if (C.zf) goto L_11516002;
L_11515fdf:;
  /* 11515fdf mov ecx, esi */
  ECX = (ESI);
  /* 11515fe1 mov eax, esi */
  EAX = (ESI);
  /* 11515fe3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11515fe6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11515fe9 mov ecx, dword ptr [ecx*4 + 0x1151bae0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1151bae0)));
  /* 11515ff0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11515ff3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11515ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11515ff9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11515ffb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11515ffd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11515fff mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11516002:;
  /* 11516002 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11516006 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11516007 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11516008 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151600a jl 0x11515fc0 */
  if ((C.sf!=C.of)) goto L_11515fc0;
L_1151600c:;
  /* 1151600c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1151600e:;
  /* 1151600e mov ecx, dword ptr [0x1151bae0] */
  ECX = (r32((uint32_t)(0x1151bae0)));
  /* 11516014 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11516017 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151601b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1151601e jne 0x1151606d */
  if (!C.zf) goto L_1151606d;
  /* 11516020 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11516022 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11516026 jne 0x1151602d */
  if (!C.zf) goto L_1151602d;
  /* 11516028 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1151602a pop eax */
  EAX = (pop32());
  /* 1151602b jmp 0x11516037 */
  goto L_11516037;
L_1151602d:;
  /* 1151602d mov eax, ebx */
  EAX = (EBX);
  /* 1151602f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11516030 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11516032 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516034 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11516037:;
  /* 11516037 push eax */
  push32((uint32_t)(EAX));
  /* 11516038 call dword ptr [0x11519078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519078))), 0x1151603eu);
  /* 1151603e mov edi, eax */
  EDI = (EAX);
  /* 11516040 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516043 je 0x1151605c */
  if (C.zf) goto L_1151605c;
  /* 11516045 push edi */
  push32((uint32_t)(EDI));
  /* 11516046 call dword ptr [0x11519074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519074))), 0x1151604cu);
  /* 1151604c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151604e je 0x1151605c */
  if (C.zf) goto L_1151605c;
  /* 11516050 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11516055 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11516057 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151605a jne 0x11516062 */
  if (!C.zf) goto L_11516062;
L_1151605c:;
  /* 1151605c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11516060 jmp 0x11516071 */
  goto L_11516071;
L_11516062:;
  /* 11516062 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516065 jne 0x11516071 */
  if (!C.zf) goto L_11516071;
  /* 11516067 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1151606b jmp 0x11516071 */
  goto L_11516071;
L_1151606d:;
  /* 1151606d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11516071:;
  /* 11516071 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11516072 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516075 jl 0x1151600e */
  if ((C.sf!=C.of)) goto L_1151600e;
  /* 11516077 push dword ptr [0x1151bbe0] */
  push32((uint32_t)(r32((uint32_t)(0x1151bbe0))));
  /* 1151607d call dword ptr [0x11519080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519080))), 0x11516083u);
  /* 11516083 pop edi */
  EDI = (pop32());
  /* 11516084 pop esi */
  ESI = (pop32());
  /* 11516085 pop ebx */
  EBX = (pop32());
  /* 11516086 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516087 ret  */
  ESPCHK(0x11515eccu, _esp0);
  ESP += 4; return;
}

/* FUN_10006088 @ 0x11516088 (84 bytes, 33 insns) */
void f_11516088(void) {
  FTRACE(0x11516088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516088 push ebx */
  push32((uint32_t)(EBX));
  /* 11516089 push esi */
  push32((uint32_t)(ESI));
  /* 1151608a push edi */
  push32((uint32_t)(EDI));
  /* 1151608b mov esi, 0x1151bae0 */
  ESI = (0x1151bae0u);
L_11516090:;
  /* 11516090 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11516092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11516094 je 0x115160cd */
  if (C.zf) goto L_115160cd;
  /* 11516096 mov edi, eax */
  EDI = (EAX);
  /* 11516098 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1151609d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151609f jae 0x115160c2 */
  if (!C.cf) goto L_115160c2;
  /* 115160a1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_115160a4:;
  /* 115160a4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115160a8 je 0x115160b1 */
  if (C.zf) goto L_115160b1;
  /* 115160aa push ebx */
  push32((uint32_t)(EBX));
  /* 115160ab call dword ptr [0x1151906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151906c))), 0x115160b1u);
L_115160b1:;
  /* 115160b1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115160b3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115160b6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115160bb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115160be cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115160c0 jb 0x115160a4 */
  if (C.cf) goto L_115160a4;
L_115160c2:;
  /* 115160c2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115160c4 call 0x115168e9 */
  push32(0x115160c9u); f_115168e9();
  /* 115160c9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 115160cc pop ecx */
  ECX = (pop32());
L_115160cd:;
  /* 115160cd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115160d0 cmp esi, 0x1151bbe0 */
  { uint32_t _a=(ESI),_b=(0x1151bbe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115160d6 jl 0x11516090 */
  if ((C.sf!=C.of)) goto L_11516090;
  /* 115160d8 pop edi */
  EDI = (pop32());
  /* 115160d9 pop esi */
  ESI = (pop32());
  /* 115160da pop ebx */
  EBX = (pop32());
  /* 115160db ret  */
  ESPCHK(0x11516088u, _esp0);
  ESP += 4; return;
}

/* FUN_100060dc @ 0x115160dc (185 bytes, 71 insns) */
void f_115160dc(void) {
  FTRACE(0x115160dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115160dc push ebx */
  push32((uint32_t)(EBX));
  /* 115160dd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115160df cmp dword ptr [0x1151bbe8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1151bbe8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115160e5 push esi */
  push32((uint32_t)(ESI));
  /* 115160e6 push edi */
  push32((uint32_t)(EDI));
  /* 115160e7 jne 0x115160ee */
  if (!C.zf) goto L_115160ee;
  /* 115160e9 call 0x11516e13 */
  push32(0x115160eeu); f_11516e13();
L_115160ee:;
  /* 115160ee mov esi, dword ptr [0x1151b680] */
  ESI = (r32((uint32_t)(0x1151b680)));
  /* 115160f4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_115160f6:;
  /* 115160f6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115160f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115160fa je 0x1151610e */
  if (C.zf) goto L_1151610e;
  /* 115160fc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115160fe je 0x11516101 */
  if (C.zf) goto L_11516101;
  /* 11516100 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11516101:;
  /* 11516101 push esi */
  push32((uint32_t)(ESI));
  /* 11516102 call 0x115169c0 */
  push32(0x11516107u); f_115169c0();
  /* 11516107 pop ecx */
  ECX = (pop32());
  /* 11516108 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1151610c jmp 0x115160f6 */
  goto L_115160f6;
L_1151610e:;
  /* 1151610e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11516115 push eax */
  push32((uint32_t)(EAX));
  /* 11516116 call 0x11516931 */
  push32(0x1151611bu); f_11516931();
  /* 1151611b mov esi, eax */
  ESI = (EAX);
  /* 1151611d pop ecx */
  ECX = (pop32());
  /* 1151611e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516120 mov dword ptr [0x1151b6b0], esi */
  w32((uint32_t)(0x1151b6b0), (ESI));
  /* 11516126 jne 0x11516130 */
  if (!C.zf) goto L_11516130;
  /* 11516128 push 9 */
  push32((uint32_t)(0x9u));
  /* 1151612a call 0x11515c56 */
  push32(0x1151612fu); f_11515c56();
  /* 1151612f pop ecx */
  ECX = (pop32());
L_11516130:;
  /* 11516130 mov edi, dword ptr [0x1151b680] */
  EDI = (r32((uint32_t)(0x1151b680)));
  /* 11516136 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516138 je 0x11516173 */
  if (C.zf) goto L_11516173;
  /* 1151613a push ebp */
  push32((uint32_t)(EBP));
L_1151613b:;
  /* 1151613b push edi */
  push32((uint32_t)(EDI));
  /* 1151613c call 0x115169c0 */
  push32(0x11516141u); f_115169c0();
  /* 11516141 mov ebp, eax */
  EBP = (EAX);
  /* 11516143 pop ecx */
  ECX = (pop32());
  /* 11516144 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11516145 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516148 je 0x1151616c */
  if (C.zf) goto L_1151616c;
  /* 1151614a push ebp */
  push32((uint32_t)(EBP));
  /* 1151614b call 0x11516931 */
  push32(0x11516150u); f_11516931();
  /* 11516150 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516152 pop ecx */
  ECX = (pop32());
  /* 11516153 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11516155 jne 0x1151615f */
  if (!C.zf) goto L_1151615f;
  /* 11516157 push 9 */
  push32((uint32_t)(0x9u));
  /* 11516159 call 0x11515c56 */
  push32(0x1151615eu); f_11515c56();
  /* 1151615e pop ecx */
  ECX = (pop32());
L_1151615f:;
  /* 1151615f push edi */
  push32((uint32_t)(EDI));
  /* 11516160 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11516162 call 0x115159f0 */
  push32(0x11516167u); f_115159f0();
  /* 11516167 pop ecx */
  ECX = (pop32());
  /* 11516168 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151616b pop ecx */
  ECX = (pop32());
L_1151616c:;
  /* 1151616c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151616e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516170 jne 0x1151613b */
  if (!C.zf) goto L_1151613b;
  /* 11516172 pop ebp */
  EBP = (pop32());
L_11516173:;
  /* 11516173 push dword ptr [0x1151b680] */
  push32((uint32_t)(r32((uint32_t)(0x1151b680))));
  /* 11516179 call 0x115168e9 */
  push32(0x1151617eu); f_115168e9();
  /* 1151617e pop ecx */
  ECX = (pop32());
  /* 1151617f mov dword ptr [0x1151b680], ebx */
  w32((uint32_t)(0x1151b680), (EBX));
  /* 11516185 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11516187 pop edi */
  EDI = (pop32());
  /* 11516188 pop esi */
  ESI = (pop32());
  /* 11516189 mov dword ptr [0x1151bbe4], 1 */
  w32((uint32_t)(0x1151bbe4), (0x1u));
  /* 11516193 pop ebx */
  EBX = (pop32());
  /* 11516194 ret  */
  ESPCHK(0x115160dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006195 @ 0x11516195 (153 bytes, 62 insns) */
void f_11516195(void) {
  FTRACE(0x11516195u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516195 push ebp */
  push32((uint32_t)(EBP));
  /* 11516196 mov ebp, esp */
  EBP = (ESP);
  /* 11516198 push ecx */
  push32((uint32_t)(ECX));
  /* 11516199 push ecx */
  push32((uint32_t)(ECX));
  /* 1151619a push ebx */
  push32((uint32_t)(EBX));
  /* 1151619b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1151619d cmp dword ptr [0x1151bbe8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1151bbe8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115161a3 push esi */
  push32((uint32_t)(ESI));
  /* 115161a4 push edi */
  push32((uint32_t)(EDI));
  /* 115161a5 jne 0x115161ac */
  if (!C.zf) goto L_115161ac;
  /* 115161a7 call 0x11516e13 */
  push32(0x115161acu); f_11516e13();
L_115161ac:;
  /* 115161ac mov esi, 0x1151b6d4 */
  ESI = (0x1151b6d4u);
  /* 115161b1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115161b6 push esi */
  push32((uint32_t)(ESI));
  /* 115161b7 push ebx */
  push32((uint32_t)(EBX));
  /* 115161b8 call dword ptr [0x11519068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519068))), 0x115161beu);
  /* 115161be mov eax, dword ptr [0x1151bbf8] */
  EAX = (r32((uint32_t)(0x1151bbf8)));
  /* 115161c3 mov dword ptr [0x1151b6c0], esi */
  w32((uint32_t)(0x1151b6c0), (ESI));
  /* 115161c9 mov edi, esi */
  EDI = (ESI);
  /* 115161cb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115161cd je 0x115161d1 */
  if (C.zf) goto L_115161d1;
  /* 115161cf mov edi, eax */
  EDI = (EAX);
L_115161d1:;
  /* 115161d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115161d4 push eax */
  push32((uint32_t)(EAX));
  /* 115161d5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 115161d8 push eax */
  push32((uint32_t)(EAX));
  /* 115161d9 push ebx */
  push32((uint32_t)(EBX));
  /* 115161da push ebx */
  push32((uint32_t)(EBX));
  /* 115161db push edi */
  push32((uint32_t)(EDI));
  /* 115161dc call 0x1151622e */
  push32(0x115161e1u); f_1151622e();
  /* 115161e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115161e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115161e7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 115161ea push eax */
  push32((uint32_t)(EAX));
  /* 115161eb call 0x11516931 */
  push32(0x115161f0u); f_11516931();
  /* 115161f0 mov esi, eax */
  ESI = (EAX);
  /* 115161f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115161f5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115161f7 jne 0x11516201 */
  if (!C.zf) goto L_11516201;
  /* 115161f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 115161fb call 0x11515c56 */
  push32(0x11516200u); f_11515c56();
  /* 11516200 pop ecx */
  ECX = (pop32());
L_11516201:;
  /* 11516201 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11516204 push eax */
  push32((uint32_t)(EAX));
  /* 11516205 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11516208 push eax */
  push32((uint32_t)(EAX));
  /* 11516209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1151620c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1151620f push eax */
  push32((uint32_t)(EAX));
  /* 11516210 push esi */
  push32((uint32_t)(ESI));
  /* 11516211 push edi */
  push32((uint32_t)(EDI));
  /* 11516212 call 0x1151622e */
  push32(0x11516217u); f_1151622e();
  /* 11516217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1151621a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151621d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1151621e mov dword ptr [0x1151b6a8], esi */
  w32((uint32_t)(0x1151b6a8), (ESI));
  /* 11516224 pop edi */
  EDI = (pop32());
  /* 11516225 pop esi */
  ESI = (pop32());
  /* 11516226 mov dword ptr [0x1151b6a4], eax */
  w32((uint32_t)(0x1151b6a4), (EAX));
  /* 1151622b pop ebx */
  EBX = (pop32());
  /* 1151622c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1151622d ret  */
  ESPCHK(0x11516195u, _esp0);
  ESP += 4; return;
}

/* FUN_1000622e @ 0x1151622e (436 bytes, 187 insns) */
void f_1151622e(void) {
  FTRACE(0x1151622eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1151622e push ebp */
  push32((uint32_t)(EBP));
  /* 1151622f mov ebp, esp */
  EBP = (ESP);
  /* 11516231 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11516234 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11516237 push ebx */
  push32((uint32_t)(EBX));
  /* 11516238 push esi */
  push32((uint32_t)(ESI));
  /* 11516239 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1151623c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1151623f push edi */
  push32((uint32_t)(EDI));
  /* 11516240 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11516243 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11516249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1151624c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1151624e je 0x11516258 */
  if (C.zf) goto L_11516258;
  /* 11516250 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11516252 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516255 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11516258:;
  /* 11516258 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1151625b jne 0x115162a1 */
  if (!C.zf) goto L_115162a1;
L_1151625d:;
  /* 1151625d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11516260 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516261 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516264 je 0x1151628f */
  if (C.zf) goto L_1151628f;
  /* 11516266 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11516268 je 0x1151628f */
  if (C.zf) goto L_1151628f;
  /* 1151626a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1151626d test byte ptr [edx + 0x1151b9c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1151b9c1)))&(0x4u); fl_logic(_r,8); }
  /* 11516274 je 0x11516282 */
  if (C.zf) goto L_11516282;
  /* 11516276 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11516278 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1151627a je 0x11516282 */
  if (C.zf) goto L_11516282;
  /* 1151627c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1151627e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11516280 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11516281 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11516282:;
  /* 11516282 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11516284 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11516286 je 0x1151625d */
  if (C.zf) goto L_1151625d;
  /* 11516288 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1151628a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1151628c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1151628d jmp 0x1151625d */
  goto L_1151625d;
L_1151628f:;
  /* 1151628f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11516291 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11516293 je 0x11516299 */
  if (C.zf) goto L_11516299;
  /* 11516295 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11516298 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11516299:;
  /* 11516299 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1151629c jne 0x115162e4 */
  if (!C.zf) goto L_115162e4;
  /* 1151629e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1151629f jmp 0x115162e4 */
  goto L_115162e4;
L_115162a1:;
  /* 115162a1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115162a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115162a5 je 0x115162ac */
  if (C.zf) goto L_115162ac;
  /* 115162a7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115162a9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115162ab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115162ac:;
  /* 115162ac mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115162ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115162af movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 115162b2 test byte ptr [ebx + 0x1151b9c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1151b9c1)))&(0x4u); fl_logic(_r,8); }
  /* 115162b9 je 0x115162c7 */
  if (C.zf) goto L_115162c7;
  /* 115162bb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115162bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115162bf je 0x115162c6 */
  if (C.zf) goto L_115162c6;
  /* 115162c1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 115162c3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 115162c5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115162c6:;
  /* 115162c6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_115162c7:;
  /* 115162c7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115162ca je 0x115162d5 */
  if (C.zf) goto L_115162d5;
  /* 115162cc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115162ce je 0x115162d9 */
  if (C.zf) goto L_115162d9;
  /* 115162d0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115162d3 jne 0x115162a1 */
  if (!C.zf) goto L_115162a1;
L_115162d5:;
  /* 115162d5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115162d7 jne 0x115162dc */
  if (!C.zf) goto L_115162dc;
L_115162d9:;
  /* 115162d9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 115162da jmp 0x115162e4 */
  goto L_115162e4;
L_115162dc:;
  /* 115162dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115162de je 0x115162e4 */
  if (C.zf) goto L_115162e4;
  /* 115162e0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_115162e4:;
  /* 115162e4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_115162e8:;
  /* 115162e8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115162eb je 0x115163d1 */
  if (C.zf) goto L_115163d1;
L_115162f1:;
  /* 115162f1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115162f3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115162f6 je 0x115162fd */
  if (C.zf) goto L_115162fd;
  /* 115162f8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115162fb jne 0x11516300 */
  if (!C.zf) goto L_11516300;
L_115162fd:;
  /* 115162fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115162fe jmp 0x115162f1 */
  goto L_115162f1;
L_11516300:;
  /* 11516300 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516303 je 0x115163d1 */
  if (C.zf) goto L_115163d1;
  /* 11516309 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1151630b je 0x11516315 */
  if (C.zf) goto L_11516315;
  /* 1151630d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1151630f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516312 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11516315:;
  /* 11516315 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11516318 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1151631a:;
  /* 1151631a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11516321 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11516323:;
  /* 11516323 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516326 jne 0x1151632c */
  if (!C.zf) goto L_1151632c;
  /* 11516328 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516329 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1151632a jmp 0x11516323 */
  goto L_11516323;
L_1151632c:;
  /* 1151632c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1151632f jne 0x1151635d */
  if (!C.zf) goto L_1151635d;
  /* 11516331 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11516334 jne 0x1151635b */
  if (!C.zf) goto L_1151635b;
  /* 11516336 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11516338 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151633b je 0x1151634a */
  if (C.zf) goto L_1151634a;
  /* 1151633d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516341 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11516344 jne 0x1151634a */
  if (!C.zf) goto L_1151634a;
  /* 11516346 mov eax, edx */
  EAX = (EDX);
  /* 11516348 jmp 0x1151634d */
  goto L_1151634d;
L_1151634a:;
  /* 1151634a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1151634d:;
  /* 1151634d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11516350 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11516352 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516355 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11516358 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1151635b:;
  /* 1151635b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1151635d:;
  /* 1151635d mov edx, ebx */
  EDX = (EBX);
  /* 1151635f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11516360 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11516362 je 0x11516372 */
  if (C.zf) goto L_11516372;
  /* 11516364 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11516365:;
  /* 11516365 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11516367 je 0x1151636d */
  if (C.zf) goto L_1151636d;
  /* 11516369 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1151636c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1151636d:;
  /* 1151636d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1151636f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11516370 jne 0x11516365 */
  if (!C.zf) goto L_11516365;
L_11516372:;
  /* 11516372 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11516374 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11516376 je 0x115163c2 */
  if (C.zf) goto L_115163c2;
  /* 11516378 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151637c jne 0x11516388 */
  if (!C.zf) goto L_11516388;
  /* 1151637e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516381 je 0x115163c2 */
  if (C.zf) goto L_115163c2;
  /* 11516383 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516386 je 0x115163c2 */
  if (C.zf) goto L_115163c2;
L_11516388:;
  /* 11516388 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151638c je 0x115163bc */
  if (C.zf) goto L_115163bc;
  /* 1151638e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11516390 je 0x115163ab */
  if (C.zf) goto L_115163ab;
  /* 11516392 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11516395 test byte ptr [ebx + 0x1151b9c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1151b9c1)))&(0x4u); fl_logic(_r,8); }
  /* 1151639c je 0x115163a4 */
  if (C.zf) goto L_115163a4;
  /* 1151639e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115163a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115163a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115163a2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115163a4:;
  /* 115163a4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 115163a6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 115163a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115163a9 jmp 0x115163ba */
  goto L_115163ba;
L_115163ab:;
  /* 115163ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 115163ae test byte ptr [edx + 0x1151b9c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1151b9c1)))&(0x4u); fl_logic(_r,8); }
  /* 115163b5 je 0x115163ba */
  if (C.zf) goto L_115163ba;
  /* 115163b7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115163b8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115163ba:;
  /* 115163ba inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_115163bc:;
  /* 115163bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115163bd jmp 0x1151631a */
  goto L_1151631a;
L_115163c2:;
  /* 115163c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115163c4 je 0x115163ca */
  if (C.zf) goto L_115163ca;
  /* 115163c6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 115163c9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_115163ca:;
  /* 115163ca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 115163cc jmp 0x115162e8 */
  goto L_115162e8;
L_115163d1:;
  /* 115163d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115163d3 je 0x115163d8 */
  if (C.zf) goto L_115163d8;
  /* 115163d5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_115163d8:;
  /* 115163d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115163db pop edi */
  EDI = (pop32());
  /* 115163dc pop esi */
  ESI = (pop32());
  /* 115163dd pop ebx */
  EBX = (pop32());
  /* 115163de inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 115163e0 pop ebp */
  EBP = (pop32());
  /* 115163e1 ret  */
  ESPCHK(0x1151622eu, _esp0);
  ESP += 4; return;
}

/* FUN_100063e2 @ 0x115163e2 (306 bytes, 132 insns) */
void f_115163e2(void) {
  FTRACE(0x115163e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115163e2 push ecx */
  push32((uint32_t)(ECX));
  /* 115163e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115163e4 mov eax, dword ptr [0x1151b7d8] */
  EAX = (r32((uint32_t)(0x1151b7d8)));
  /* 115163e9 push ebx */
  push32((uint32_t)(EBX));
  /* 115163ea push ebp */
  push32((uint32_t)(EBP));
  /* 115163eb mov ebp, dword ptr [0x11519054] */
  EBP = (r32((uint32_t)(0x11519054)));
  /* 115163f1 push esi */
  push32((uint32_t)(ESI));
  /* 115163f2 push edi */
  push32((uint32_t)(EDI));
  /* 115163f3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115163f5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115163f7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 115163f9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115163fb jne 0x11516430 */
  if (!C.zf) goto L_11516430;
  /* 115163fd call ebp */
  call_ind((uint32_t)(EBP), 0x115163ffu);
  /* 115163ff mov esi, eax */
  ESI = (EAX);
  /* 11516401 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516403 je 0x11516411 */
  if (C.zf) goto L_11516411;
  /* 11516405 mov dword ptr [0x1151b7d8], 1 */
  w32((uint32_t)(0x1151b7d8), (0x1u));
  /* 1151640f jmp 0x11516439 */
  goto L_11516439;
L_11516411:;
  /* 11516411 call dword ptr [0x11519064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519064))), 0x11516417u);
  /* 11516417 mov edi, eax */
  EDI = (EAX);
  /* 11516419 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151641b je 0x1151650b */
  if (C.zf) goto L_1151650b;
  /* 11516421 mov dword ptr [0x1151b7d8], 2 */
  w32((uint32_t)(0x1151b7d8), (0x2u));
  /* 1151642b jmp 0x115164bf */
  goto L_115164bf;
L_11516430:;
  /* 11516430 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516433 jne 0x115164ba */
  if (!C.zf) goto L_115164ba;
L_11516439:;
  /* 11516439 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151643b jne 0x11516449 */
  if (!C.zf) goto L_11516449;
  /* 1151643d call ebp */
  call_ind((uint32_t)(EBP), 0x1151643fu);
  /* 1151643f mov esi, eax */
  ESI = (EAX);
  /* 11516441 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516443 je 0x1151650b */
  if (C.zf) goto L_1151650b;
L_11516449:;
  /* 11516449 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1151644c mov eax, esi */
  EAX = (ESI);
  /* 1151644e je 0x1151645e */
  if (C.zf) goto L_1151645e;
L_11516450:;
  /* 11516450 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516451 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516452 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11516455 jne 0x11516450 */
  if (!C.zf) goto L_11516450;
  /* 11516457 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516458 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516459 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1151645c jne 0x11516450 */
  if (!C.zf) goto L_11516450;
L_1151645e:;
  /* 1151645e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516460 mov edi, dword ptr [0x1151905c] */
  EDI = (r32((uint32_t)(0x1151905c)));
  /* 11516466 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11516468 push ebx */
  push32((uint32_t)(EBX));
  /* 11516469 push ebx */
  push32((uint32_t)(EBX));
  /* 1151646a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1151646b push ebx */
  push32((uint32_t)(EBX));
  /* 1151646c push ebx */
  push32((uint32_t)(EBX));
  /* 1151646d push eax */
  push32((uint32_t)(EAX));
  /* 1151646e push esi */
  push32((uint32_t)(ESI));
  /* 1151646f push ebx */
  push32((uint32_t)(EBX));
  /* 11516470 push ebx */
  push32((uint32_t)(EBX));
  /* 11516471 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11516475 call edi */
  call_ind((uint32_t)(EDI), 0x11516477u);
  /* 11516477 mov ebp, eax */
  EBP = (EAX);
  /* 11516479 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151647b je 0x115164af */
  if (C.zf) goto L_115164af;
  /* 1151647d push ebp */
  push32((uint32_t)(EBP));
  /* 1151647e call 0x11516931 */
  push32(0x11516483u); f_11516931();
  /* 11516483 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516485 pop ecx */
  ECX = (pop32());
  /* 11516486 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1151648a je 0x115164af */
  if (C.zf) goto L_115164af;
  /* 1151648c push ebx */
  push32((uint32_t)(EBX));
  /* 1151648d push ebx */
  push32((uint32_t)(EBX));
  /* 1151648e push ebp */
  push32((uint32_t)(EBP));
  /* 1151648f push eax */
  push32((uint32_t)(EAX));
  /* 11516490 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11516494 push esi */
  push32((uint32_t)(ESI));
  /* 11516495 push ebx */
  push32((uint32_t)(EBX));
  /* 11516496 push ebx */
  push32((uint32_t)(EBX));
  /* 11516497 call edi */
  call_ind((uint32_t)(EDI), 0x11516499u);
  /* 11516499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151649b jne 0x115164ab */
  if (!C.zf) goto L_115164ab;
  /* 1151649d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 115164a1 call 0x115168e9 */
  push32(0x115164a6u); f_115168e9();
  /* 115164a6 pop ecx */
  ECX = (pop32());
  /* 115164a7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_115164ab:;
  /* 115164ab mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_115164af:;
  /* 115164af push esi */
  push32((uint32_t)(ESI));
  /* 115164b0 call dword ptr [0x11519060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519060))), 0x115164b6u);
  /* 115164b6 mov eax, ebx */
  EAX = (EBX);
  /* 115164b8 jmp 0x1151650d */
  goto L_1151650d;
L_115164ba:;
  /* 115164ba cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115164bd jne 0x1151650b */
  if (!C.zf) goto L_1151650b;
L_115164bf:;
  /* 115164bf cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115164c1 jne 0x115164cf */
  if (!C.zf) goto L_115164cf;
  /* 115164c3 call dword ptr [0x11519064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519064))), 0x115164c9u);
  /* 115164c9 mov edi, eax */
  EDI = (EAX);
  /* 115164cb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115164cd je 0x1151650b */
  if (C.zf) goto L_1151650b;
L_115164cf:;
  /* 115164cf cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115164d1 mov eax, edi */
  EAX = (EDI);
  /* 115164d3 je 0x115164df */
  if (C.zf) goto L_115164df;
L_115164d5:;
  /* 115164d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115164d6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115164d8 jne 0x115164d5 */
  if (!C.zf) goto L_115164d5;
  /* 115164da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115164db cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115164dd jne 0x115164d5 */
  if (!C.zf) goto L_115164d5;
L_115164df:;
  /* 115164df sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115164e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 115164e2 mov ebp, eax */
  EBP = (EAX);
  /* 115164e4 push ebp */
  push32((uint32_t)(EBP));
  /* 115164e5 call 0x11516931 */
  push32(0x115164eau); f_11516931();
  /* 115164ea mov esi, eax */
  ESI = (EAX);
  /* 115164ec pop ecx */
  ECX = (pop32());
  /* 115164ed cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115164ef jne 0x115164f5 */
  if (!C.zf) goto L_115164f5;
  /* 115164f1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 115164f3 jmp 0x11516500 */
  goto L_11516500;
L_115164f5:;
  /* 115164f5 push ebp */
  push32((uint32_t)(EBP));
  /* 115164f6 push edi */
  push32((uint32_t)(EDI));
  /* 115164f7 push esi */
  push32((uint32_t)(ESI));
  /* 115164f8 call 0x11516e30 */
  push32(0x115164fdu); f_11516e30();
  /* 115164fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11516500:;
  /* 11516500 push edi */
  push32((uint32_t)(EDI));
  /* 11516501 call dword ptr [0x11519070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519070))), 0x11516507u);
  /* 11516507 mov eax, esi */
  EAX = (ESI);
  /* 11516509 jmp 0x1151650d */
  goto L_1151650d;
L_1151650b:;
  /* 1151650b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1151650d:;
  /* 1151650d pop edi */
  EDI = (pop32());
  /* 1151650e pop esi */
  ESI = (pop32());
  /* 1151650f pop ebp */
  EBP = (pop32());
  /* 11516510 pop ebx */
  EBX = (pop32());
  /* 11516511 pop ecx */
  ECX = (pop32());
  /* 11516512 pop ecx */
  ECX = (pop32());
  /* 11516513 ret  */
  ESPCHK(0x115163e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006514 @ 0x11516514 (60 bytes, 20 insns) */
void f_11516514(void) {
  FTRACE(0x11516514u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516516 push 0 */
  push32((uint32_t)(0x0u));
  /* 11516518 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151651c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11516521 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11516524 push eax */
  push32((uint32_t)(EAX));
  /* 11516525 call dword ptr [0x11519058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519058))), 0x1151652bu);
  /* 1151652b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151652d mov dword ptr [0x1151bac8], eax */
  w32((uint32_t)(0x1151bac8), (EAX));
  /* 11516532 je 0x11516549 */
  if (C.zf) goto L_11516549;
  /* 11516534 call 0x11517165 */
  push32(0x11516539u); f_11517165();
  /* 11516539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151653b jne 0x1151654c */
  if (!C.zf) goto L_1151654c;
  /* 1151653d push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 11516543 call dword ptr [0x11519050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519050))), 0x11516549u);
L_11516549:;
  /* 11516549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1151654b ret  */
  ESPCHK(0x11516514u, _esp0);
  ESP += 4; return;
L_1151654c:;
  /* 1151654c push 1 */
  push32((uint32_t)(0x1u));
  /* 1151654e pop eax */
  EAX = (pop32());
  /* 1151654f ret  */
  ESPCHK(0x11516514u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x11516550 (117 bytes, 38 insns) */
void f_11516550(void) {
  FTRACE(0x11516550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516550 push ebx */
  push32((uint32_t)(EBX));
  /* 11516551 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11516553 cmp dword ptr [0x1151b890], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1151b890))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516559 push ebp */
  push32((uint32_t)(EBP));
  /* 1151655a mov ebp, dword ptr [0x11519044] */
  EBP = (r32((uint32_t)(0x11519044)));
  /* 11516560 jle 0x115165a6 */
  if ((C.zf||C.sf!=C.of)) goto L_115165a6;
  /* 11516562 mov eax, dword ptr [0x1151b894] */
  EAX = (r32((uint32_t)(0x1151b894)));
  /* 11516567 push esi */
  push32((uint32_t)(ESI));
  /* 11516568 push edi */
  push32((uint32_t)(EDI));
  /* 11516569 mov edi, dword ptr [0x11519048] */
  EDI = (r32((uint32_t)(0x11519048)));
  /* 1151656f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11516572:;
  /* 11516572 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11516577 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1151657c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1151657e call edi */
  call_ind((uint32_t)(EDI), 0x11516580u);
  /* 11516580 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11516585 push 0 */
  push32((uint32_t)(0x0u));
  /* 11516587 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11516589 call edi */
  call_ind((uint32_t)(EDI), 0x1151658bu);
  /* 1151658b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1151658e push 0 */
  push32((uint32_t)(0x0u));
  /* 11516590 push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 11516596 call ebp */
  call_ind((uint32_t)(EBP), 0x11516598u);
  /* 11516598 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151659b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1151659c cmp ebx, dword ptr [0x1151b890] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1151b890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115165a2 jl 0x11516572 */
  if ((C.sf!=C.of)) goto L_11516572;
  /* 115165a4 pop edi */
  EDI = (pop32());
  /* 115165a5 pop esi */
  ESI = (pop32());
L_115165a6:;
  /* 115165a6 push dword ptr [0x1151b894] */
  push32((uint32_t)(r32((uint32_t)(0x1151b894))));
  /* 115165ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115165ae push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 115165b4 call ebp */
  call_ind((uint32_t)(EBP), 0x115165b6u);
  /* 115165b6 push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 115165bc call dword ptr [0x11519050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519050))), 0x115165c2u);
  /* 115165c2 pop ebp */
  EBP = (pop32());
  /* 115165c3 pop ebx */
  EBX = (pop32());
  /* 115165c4 ret  */
  ESPCHK(0x11516550u, _esp0);
  ESP += 4; return;
}

/* FUN_100065c5 @ 0x115165c5 (57 bytes, 18 insns) */
void f_115165c5(void) {
  FTRACE(0x115165c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115165c5 mov eax, dword ptr [0x1151b688] */
  EAX = (r32((uint32_t)(0x1151b688)));
  /* 115165ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115165cd je 0x115165dc */
  if (C.zf) goto L_115165dc;
  /* 115165cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115165d1 jne 0x115165fd */
  if (!C.zf) goto L_115165fd;
  /* 115165d3 cmp dword ptr [0x1151b68c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1151b68c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115165da jne 0x115165fd */
  if (!C.zf) goto L_115165fd;
L_115165dc:;
  /* 115165dc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 115165e1 call 0x115165fe */
  push32(0x115165e6u); f_115165fe();
  /* 115165e6 mov eax, dword ptr [0x1151b7dc] */
  EAX = (r32((uint32_t)(0x1151b7dc)));
  /* 115165eb pop ecx */
  ECX = (pop32());
  /* 115165ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115165ee je 0x115165f2 */
  if (C.zf) goto L_115165f2;
  /* 115165f0 call eax */
  call_ind((uint32_t)(EAX), 0x115165f2u);
L_115165f2:;
  /* 115165f2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 115165f7 call 0x115165fe */
  push32(0x115165fcu); f_115165fe();
  /* 115165fc pop ecx */
  ECX = (pop32());
L_115165fd:;
  /* 115165fd ret  */
  ESPCHK(0x115165c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100065fe @ 0x115165fe (339 bytes, 100 insns) */
void f_115165fe(void) {
  FTRACE(0x115165feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115165fe push ebp */
  push32((uint32_t)(EBP));
  /* 115165ff mov ebp, esp */
  EBP = (ESP);
  /* 11516601 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1151660a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1151660c mov eax, 0x1151ae00 */
  EAX = (0x1151ae00u);
L_11516611:;
  /* 11516611 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516613 je 0x11516620 */
  if (C.zf) goto L_11516620;
  /* 11516615 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11516618 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516619 cmp eax, 0x1151ae90 */
  { uint32_t _a=(EAX),_b=(0x1151ae90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151661e jl 0x11516611 */
  if ((C.sf!=C.of)) goto L_11516611;
L_11516620:;
  /* 11516620 push esi */
  push32((uint32_t)(ESI));
  /* 11516621 mov esi, ecx */
  ESI = (ECX);
  /* 11516623 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11516626 cmp edx, dword ptr [esi + 0x1151ae00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x1151ae00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151662c jne 0x1151674e */
  if (!C.zf) goto L_1151674e;
  /* 11516632 mov eax, dword ptr [0x1151b688] */
  EAX = (r32((uint32_t)(0x1151b688)));
  /* 11516637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151663a je 0x11516728 */
  if (C.zf) goto L_11516728;
  /* 11516640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11516642 jne 0x11516651 */
  if (!C.zf) goto L_11516651;
  /* 11516644 cmp dword ptr [0x1151b68c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1151b68c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151664b je 0x11516728 */
  if (C.zf) goto L_11516728;
L_11516651:;
  /* 11516651 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516657 je 0x1151674e */
  if (C.zf) goto L_1151674e;
  /* 1151665d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11516663 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11516668 push eax */
  push32((uint32_t)(EAX));
  /* 11516669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1151666b call dword ptr [0x11519068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519068))), 0x11516671u);
  /* 11516671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11516673 jne 0x11516688 */
  if (!C.zf) goto L_11516688;
  /* 11516675 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1151667b push 0x11519468 */
  push32((uint32_t)(0x11519468u));
  /* 11516680 push eax */
  push32((uint32_t)(EAX));
  /* 11516681 call 0x115159f0 */
  push32(0x11516686u); f_115159f0();
  /* 11516686 pop ecx */
  ECX = (pop32());
  /* 11516687 pop ecx */
  ECX = (pop32());
L_11516688:;
  /* 11516688 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1151668e push edi */
  push32((uint32_t)(EDI));
  /* 1151668f push eax */
  push32((uint32_t)(EAX));
  /* 11516690 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11516696 call 0x115169c0 */
  push32(0x1151669bu); f_115169c0();
  /* 1151669b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1151669c pop ecx */
  ECX = (pop32());
  /* 1151669d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115166a0 jbe 0x115166cb */
  if ((C.cf||C.zf)) goto L_115166cb;
  /* 115166a2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115166a8 push eax */
  push32((uint32_t)(EAX));
  /* 115166a9 call 0x115169c0 */
  push32(0x115166aeu); f_115169c0();
  /* 115166ae mov edi, eax */
  EDI = (EAX);
  /* 115166b0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 115166b6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115166b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115166bb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115166bd push 0x11519464 */
  push32((uint32_t)(0x11519464u));
  /* 115166c2 push edi */
  push32((uint32_t)(EDI));
  /* 115166c3 call 0x11517a40 */
  push32(0x115166c8u); f_11517a40();
  /* 115166c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115166cb:;
  /* 115166cb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115166d1 push 0x11519448 */
  push32((uint32_t)(0x11519448u));
  /* 115166d6 push eax */
  push32((uint32_t)(EAX));
  /* 115166d7 call 0x115159f0 */
  push32(0x115166dcu); f_115159f0();
  /* 115166dc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115166e2 push edi */
  push32((uint32_t)(EDI));
  /* 115166e3 push eax */
  push32((uint32_t)(EAX));
  /* 115166e4 call 0x11515a00 */
  push32(0x115166e9u); f_11515a00();
  /* 115166e9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 115166ef push 0x11519444 */
  push32((uint32_t)(0x11519444u));
  /* 115166f4 push eax */
  push32((uint32_t)(EAX));
  /* 115166f5 call 0x11515a00 */
  push32(0x115166fau); f_11515a00();
  /* 115166fa push dword ptr [esi + 0x1151ae04] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1151ae04))));
  /* 11516700 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11516706 push eax */
  push32((uint32_t)(EAX));
  /* 11516707 call 0x11515a00 */
  push32(0x1151670cu); f_11515a00();
  /* 1151670c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11516711 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11516717 push 0x1151941c */
  push32((uint32_t)(0x1151941cu));
  /* 1151671c push eax */
  push32((uint32_t)(EAX));
  /* 1151671d call 0x115179ae */
  push32(0x11516722u); f_115179ae();
  /* 11516722 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11516725 pop edi */
  EDI = (pop32());
  /* 11516726 jmp 0x1151674e */
  goto L_1151674e;
L_11516728:;
  /* 11516728 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1151672b lea esi, [esi + 0x1151ae04] */
  ESI = ((uint32_t)(ESI + 0x1151ae04));
  /* 11516731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11516733 push eax */
  push32((uint32_t)(EAX));
  /* 11516734 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11516736 call 0x115169c0 */
  push32(0x1151673bu); f_115169c0();
  /* 1151673b pop ecx */
  ECX = (pop32());
  /* 1151673c push eax */
  push32((uint32_t)(EAX));
  /* 1151673d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1151673f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11516741 call dword ptr [0x11519078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519078))), 0x11516747u);
  /* 11516747 push eax */
  push32((uint32_t)(EAX));
  /* 11516748 call dword ptr [0x1151904c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151904c))), 0x1151674eu);
L_1151674e:;
  /* 1151674e pop esi */
  ESI = (pop32());
  /* 1151674f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516750 ret  */
  ESPCHK(0x115165feu, _esp0);
  ESP += 4; return;
}

/* FUN_10006751 @ 0x11516751 (41 bytes, 12 insns) */
void f_11516751(void) {
  FTRACE(0x11516751u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516751 push esi */
  push32((uint32_t)(ESI));
  /* 11516752 mov esi, dword ptr [0x1151903c] */
  ESI = (r32((uint32_t)(0x1151903c)));
  /* 11516758 push dword ptr [0x1151aed4] */
  push32((uint32_t)(r32((uint32_t)(0x1151aed4))));
  /* 1151675e call esi */
  call_ind((uint32_t)(ESI), 0x11516760u);
  /* 11516760 push dword ptr [0x1151aec4] */
  push32((uint32_t)(r32((uint32_t)(0x1151aec4))));
  /* 11516766 call esi */
  call_ind((uint32_t)(ESI), 0x11516768u);
  /* 11516768 push dword ptr [0x1151aeb4] */
  push32((uint32_t)(r32((uint32_t)(0x1151aeb4))));
  /* 1151676e call esi */
  call_ind((uint32_t)(ESI), 0x11516770u);
  /* 11516770 push dword ptr [0x1151ae94] */
  push32((uint32_t)(r32((uint32_t)(0x1151ae94))));
  /* 11516776 call esi */
  call_ind((uint32_t)(ESI), 0x11516778u);
  /* 11516778 pop esi */
  ESI = (pop32());
  /* 11516779 ret  */
  ESPCHK(0x11516751u, _esp0);
  ESP += 4; return;
}

/* FUN_1000677a @ 0x1151677a (108 bytes, 34 insns) */
void f_1151677a(void) {
  FTRACE(0x1151677au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1151677a push esi */
  push32((uint32_t)(ESI));
  /* 1151677b push edi */
  push32((uint32_t)(EDI));
  /* 1151677c mov edi, dword ptr [0x1151906c] */
  EDI = (r32((uint32_t)(0x1151906c)));
  /* 11516782 mov esi, 0x1151ae90 */
  ESI = (0x1151ae90u);
L_11516787:;
  /* 11516787 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11516789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151678b je 0x115167b8 */
  if (C.zf) goto L_115167b8;
  /* 1151678d cmp esi, 0x1151aed4 */
  { uint32_t _a=(ESI),_b=(0x1151aed4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516793 je 0x115167b8 */
  if (C.zf) goto L_115167b8;
  /* 11516795 cmp esi, 0x1151aec4 */
  { uint32_t _a=(ESI),_b=(0x1151aec4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151679b je 0x115167b8 */
  if (C.zf) goto L_115167b8;
  /* 1151679d cmp esi, 0x1151aeb4 */
  { uint32_t _a=(ESI),_b=(0x1151aeb4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115167a3 je 0x115167b8 */
  if (C.zf) goto L_115167b8;
  /* 115167a5 cmp esi, 0x1151ae94 */
  { uint32_t _a=(ESI),_b=(0x1151ae94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115167ab je 0x115167b8 */
  if (C.zf) goto L_115167b8;
  /* 115167ad push eax */
  push32((uint32_t)(EAX));
  /* 115167ae call edi */
  call_ind((uint32_t)(EDI), 0x115167b0u);
  /* 115167b0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 115167b2 call 0x115168e9 */
  push32(0x115167b7u); f_115168e9();
  /* 115167b7 pop ecx */
  ECX = (pop32());
L_115167b8:;
  /* 115167b8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115167bb cmp esi, 0x1151af50 */
  { uint32_t _a=(ESI),_b=(0x1151af50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115167c1 jl 0x11516787 */
  if ((C.sf!=C.of)) goto L_11516787;
  /* 115167c3 push dword ptr [0x1151aeb4] */
  push32((uint32_t)(r32((uint32_t)(0x1151aeb4))));
  /* 115167c9 call edi */
  call_ind((uint32_t)(EDI), 0x115167cbu);
  /* 115167cb push dword ptr [0x1151aec4] */
  push32((uint32_t)(r32((uint32_t)(0x1151aec4))));
  /* 115167d1 call edi */
  call_ind((uint32_t)(EDI), 0x115167d3u);
  /* 115167d3 push dword ptr [0x1151aed4] */
  push32((uint32_t)(r32((uint32_t)(0x1151aed4))));
  /* 115167d9 call edi */
  call_ind((uint32_t)(EDI), 0x115167dbu);
  /* 115167db push dword ptr [0x1151ae94] */
  push32((uint32_t)(r32((uint32_t)(0x1151ae94))));
  /* 115167e1 call edi */
  call_ind((uint32_t)(EDI), 0x115167e3u);
  /* 115167e3 pop edi */
  EDI = (pop32());
  /* 115167e4 pop esi */
  ESI = (pop32());
  /* 115167e5 ret  */
  ESPCHK(0x1151677au, _esp0);
  ESP += 4; return;
}

/* FUN_100067e6 @ 0x115167e6 (97 bytes, 37 insns) */
void f_115167e6(void) {
  FTRACE(0x115167e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115167e6 push ebp */
  push32((uint32_t)(EBP));
  /* 115167e7 mov ebp, esp */
  EBP = (ESP);
  /* 115167e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115167ec push esi */
  push32((uint32_t)(ESI));
  /* 115167ed cmp dword ptr [eax*4 + 0x1151ae90], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1151ae90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115167f5 lea esi, [eax*4 + 0x1151ae90] */
  ESI = ((uint32_t)(EAX*4 + 0x1151ae90));
  /* 115167fc jne 0x1151683c */
  if (!C.zf) goto L_1151683c;
  /* 115167fe push edi */
  push32((uint32_t)(EDI));
  /* 115167ff push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11516801 call 0x11516931 */
  push32(0x11516806u); f_11516931();
  /* 11516806 mov edi, eax */
  EDI = (EAX);
  /* 11516808 pop ecx */
  ECX = (pop32());
  /* 11516809 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1151680b jne 0x11516815 */
  if (!C.zf) goto L_11516815;
  /* 1151680d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1151680f call 0x11515c56 */
  push32(0x11516814u); f_11515c56();
  /* 11516814 pop ecx */
  ECX = (pop32());
L_11516815:;
  /* 11516815 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11516817 call 0x115167e6 */
  push32(0x1151681cu); f_115167e6();
  /* 1151681c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151681f pop ecx */
  ECX = (pop32());
  /* 11516820 push edi */
  push32((uint32_t)(EDI));
  /* 11516821 jne 0x1151682d */
  if (!C.zf) goto L_1151682d;
  /* 11516823 call dword ptr [0x1151903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151903c))), 0x11516829u);
  /* 11516829 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1151682b jmp 0x11516833 */
  goto L_11516833;
L_1151682d:;
  /* 1151682d call 0x115168e9 */
  push32(0x11516832u); f_115168e9();
  /* 11516832 pop ecx */
  ECX = (pop32());
L_11516833:;
  /* 11516833 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11516835 call 0x11516847 */
  push32(0x1151683au); f_11516847();
  /* 1151683a pop ecx */
  ECX = (pop32());
  /* 1151683b pop edi */
  EDI = (pop32());
L_1151683c:;
  /* 1151683c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1151683e call dword ptr [0x11519038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519038))), 0x11516844u);
  /* 11516844 pop esi */
  ESI = (pop32());
  /* 11516845 pop ebp */
  EBP = (pop32());
  /* 11516846 ret  */
  ESPCHK(0x115167e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006847 @ 0x11516847 (21 bytes, 7 insns) */
void f_11516847(void) {
  FTRACE(0x11516847u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516847 push ebp */
  push32((uint32_t)(EBP));
  /* 11516848 mov ebp, esp */
  EBP = (ESP);
  /* 1151684a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1151684d push dword ptr [eax*4 + 0x1151ae90] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x1151ae90))));
  /* 11516854 call dword ptr [0x11519040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519040))), 0x1151685au);
  /* 1151685a pop ebp */
  EBP = (pop32());
  /* 1151685b ret  */
  ESPCHK(0x11516847u, _esp0);
  ESP += 4; return;
}

/* FUN_1000685c @ 0x1151685c (141 bytes, 56 insns) */
void f_1151685c(void) {
  FTRACE(0x1151685cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1151685c push ebx */
  push32((uint32_t)(EBX));
  /* 1151685d push esi */
  push32((uint32_t)(ESI));
  /* 1151685e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11516862 push edi */
  push32((uint32_t)(EDI));
  /* 11516863 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11516868 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151686b mov ebx, esi */
  EBX = (ESI);
  /* 1151686d ja 0x1151687c */
  if ((!C.cf&&!C.zf)) goto L_1151687c;
  /* 1151686f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11516871 jne 0x11516876 */
  if (!C.zf) goto L_11516876;
  /* 11516873 push 1 */
  push32((uint32_t)(0x1u));
  /* 11516875 pop esi */
  ESI = (pop32());
L_11516876:;
  /* 11516876 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516879 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1151687c:;
  /* 1151687c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1151687e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516881 ja 0x115168bd */
  if ((!C.cf&&!C.zf)) goto L_115168bd;
  /* 11516883 cmp ebx, dword ptr [0x1151b0e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1151b0e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516889 ja 0x115168a8 */
  if ((!C.cf&&!C.zf)) goto L_115168a8;
  /* 1151688b push 9 */
  push32((uint32_t)(0x9u));
  /* 1151688d call 0x115167e6 */
  push32(0x11516892u); f_115167e6();
  /* 11516892 push ebx */
  push32((uint32_t)(EBX));
  /* 11516893 call 0x115174f9 */
  push32(0x11516898u); f_115174f9();
  /* 11516898 push 9 */
  push32((uint32_t)(0x9u));
  /* 1151689a mov edi, eax */
  EDI = (EAX);
  /* 1151689c call 0x11516847 */
  push32(0x115168a1u); f_11516847();
  /* 115168a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115168a4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115168a6 jne 0x115168d3 */
  if (!C.zf) goto L_115168d3;
L_115168a8:;
  /* 115168a8 push esi */
  push32((uint32_t)(ESI));
  /* 115168a9 push 8 */
  push32((uint32_t)(0x8u));
  /* 115168ab push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 115168b1 call dword ptr [0x11519034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519034))), 0x115168b7u);
  /* 115168b7 mov edi, eax */
  EDI = (EAX);
  /* 115168b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 115168bb jne 0x115168df */
  if (!C.zf) goto L_115168df;
L_115168bd:;
  /* 115168bd cmp dword ptr [0x1151b854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1151b854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115168c4 je 0x115168df */
  if (C.zf) goto L_115168df;
  /* 115168c6 push esi */
  push32((uint32_t)(ESI));
  /* 115168c7 call 0x11517b98 */
  push32(0x115168ccu); f_11517b98();
  /* 115168cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115168ce pop ecx */
  ECX = (pop32());
  /* 115168cf je 0x115168e5 */
  if (C.zf) goto L_115168e5;
  /* 115168d1 jmp 0x1151687c */
  goto L_1151687c;
L_115168d3:;
  /* 115168d3 push ebx */
  push32((uint32_t)(EBX));
  /* 115168d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115168d6 push edi */
  push32((uint32_t)(EDI));
  /* 115168d7 call 0x11517b40 */
  push32(0x115168dcu); f_11517b40();
  /* 115168dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115168df:;
  /* 115168df mov eax, edi */
  EAX = (EDI);
L_115168e1:;
  /* 115168e1 pop edi */
  EDI = (pop32());
  /* 115168e2 pop esi */
  ESI = (pop32());
  /* 115168e3 pop ebx */
  EBX = (pop32());
  /* 115168e4 ret  */
  ESPCHK(0x1151685cu, _esp0);
  ESP += 4; return;
L_115168e5:;
  /* 115168e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115168e7 jmp 0x115168e1 */
  goto L_115168e1;
}

/* FUN_100068e9 @ 0x115168e9 (72 bytes, 29 insns) */
void f_115168e9(void) {
  FTRACE(0x115168e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115168e9 push esi */
  push32((uint32_t)(ESI));
  /* 115168ea mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 115168ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115168f0 je 0x1151692f */
  if (C.zf) goto L_1151692f;
  /* 115168f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115168f4 call 0x115167e6 */
  push32(0x115168f9u); f_115167e6();
  /* 115168f9 push esi */
  push32((uint32_t)(ESI));
  /* 115168fa call 0x115171a3 */
  push32(0x115168ffu); f_115171a3();
  /* 115168ff pop ecx */
  ECX = (pop32());
  /* 11516900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11516902 pop ecx */
  ECX = (pop32());
  /* 11516903 je 0x11516918 */
  if (C.zf) goto L_11516918;
  /* 11516905 push esi */
  push32((uint32_t)(ESI));
  /* 11516906 push eax */
  push32((uint32_t)(EAX));
  /* 11516907 call 0x115171ce */
  push32(0x1151690cu); f_115171ce();
  /* 1151690c push 9 */
  push32((uint32_t)(0x9u));
  /* 1151690e call 0x11516847 */
  push32(0x11516913u); f_11516847();
  /* 11516913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11516916 pop esi */
  ESI = (pop32());
  /* 11516917 ret  */
  ESPCHK(0x115168e9u, _esp0);
  ESP += 4; return;
L_11516918:;
  /* 11516918 push 9 */
  push32((uint32_t)(0x9u));
  /* 1151691a call 0x11516847 */
  push32(0x1151691fu); f_11516847();
  /* 1151691f pop ecx */
  ECX = (pop32());
  /* 11516920 push esi */
  push32((uint32_t)(ESI));
  /* 11516921 push 0 */
  push32((uint32_t)(0x0u));
  /* 11516923 push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 11516929 call dword ptr [0x11519044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519044))), 0x1151692fu);
L_1151692f:;
  /* 1151692f pop esi */
  ESI = (pop32());
  /* 11516930 ret  */
  ESPCHK(0x115168e9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11516931 (18 bytes, 6 insns) */
void f_11516931(void) {
  FTRACE(0x11516931u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516931 push dword ptr [0x1151b854] */
  push32((uint32_t)(r32((uint32_t)(0x1151b854))));
  /* 11516937 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1151693b call 0x11516943 */
  push32(0x11516940u); f_11516943();
  /* 11516940 pop ecx */
  ECX = (pop32());
  /* 11516941 pop ecx */
  ECX = (pop32());
  /* 11516942 ret  */
  ESPCHK(0x11516931u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11516943 (44 bytes, 16 insns) */
void f_11516943(void) {
  FTRACE(0x11516943u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516943 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516948 ja 0x1151696c */
  if ((!C.cf&&!C.zf)) goto L_1151696c;
L_1151694a:;
  /* 1151694a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1151694e call 0x1151696f */
  push32(0x11516953u); f_1151696f();
  /* 11516953 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11516955 pop ecx */
  ECX = (pop32());
  /* 11516956 jne 0x1151696e */
  if (!C.zf) goto L_1151696e;
  /* 11516958 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151695c je 0x1151696e */
  if (C.zf) goto L_1151696e;
  /* 1151695e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11516962 call 0x11517b98 */
  push32(0x11516967u); f_11517b98();
  /* 11516967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11516969 pop ecx */
  ECX = (pop32());
  /* 1151696a jne 0x1151694a */
  if (!C.zf) goto L_1151694a;
L_1151696c:;
  /* 1151696c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1151696e:;
  /* 1151696e ret  */
  ESPCHK(0x11516943u, _esp0);
  ESP += 4; return;
}

/* FUN_1000696f @ 0x1151696f (78 bytes, 30 insns) */
void f_1151696f(void) {
  FTRACE(0x1151696fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1151696f push esi */
  push32((uint32_t)(ESI));
  /* 11516970 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11516974 cmp esi, dword ptr [0x1151b0e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1151b0e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151697a push edi */
  push32((uint32_t)(EDI));
  /* 1151697b ja 0x1151699e */
  if ((!C.cf&&!C.zf)) goto L_1151699e;
  /* 1151697d push 9 */
  push32((uint32_t)(0x9u));
  /* 1151697f call 0x115167e6 */
  push32(0x11516984u); f_115167e6();
  /* 11516984 push esi */
  push32((uint32_t)(ESI));
  /* 11516985 call 0x115174f9 */
  push32(0x1151698au); f_115174f9();
  /* 1151698a push 9 */
  push32((uint32_t)(0x9u));
  /* 1151698c mov edi, eax */
  EDI = (EAX);
  /* 1151698e call 0x11516847 */
  push32(0x11516993u); f_11516847();
  /* 11516993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11516996 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11516998 je 0x1151699e */
  if (C.zf) goto L_1151699e;
  /* 1151699a mov eax, edi */
  EAX = (EDI);
  /* 1151699c jmp 0x115169ba */
  goto L_115169ba;
L_1151699e:;
  /* 1151699e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 115169a0 jne 0x115169a5 */
  if (!C.zf) goto L_115169a5;
  /* 115169a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115169a4 pop esi */
  ESI = (pop32());
L_115169a5:;
  /* 115169a5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115169a8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 115169ab push esi */
  push32((uint32_t)(ESI));
  /* 115169ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115169ae push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 115169b4 call dword ptr [0x11519034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519034))), 0x115169bau);
L_115169ba:;
  /* 115169ba pop edi */
  EDI = (pop32());
  /* 115169bb pop esi */
  ESI = (pop32());
  /* 115169bc ret  */
  ESPCHK(0x1151696fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x115169c0 (123 bytes, 44 insns) */
void f_115169c0(void) {
  FTRACE(0x115169c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115169c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115169c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115169ca je 0x115169e0 */
  if (C.zf) goto L_115169e0;
L_115169cc:;
  /* 115169cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115169ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115169cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115169d1 je 0x11516a13 */
  if (C.zf) goto L_11516a13;
  /* 115169d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115169d9 jne 0x115169cc */
  if (!C.zf) goto L_115169cc;
  /* 115169db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115169e0:;
  /* 115169e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115169e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115169e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115169e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115169ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115169ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115169f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115169f6 je 0x115169e0 */
  if (C.zf) goto L_115169e0;
  /* 115169f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115169fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115169fd je 0x11516a31 */
  if (C.zf) goto L_11516a31;
  /* 115169ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11516a01 je 0x11516a27 */
  if (C.zf) goto L_11516a27;
  /* 11516a03 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11516a08 je 0x11516a1d */
  if (C.zf) goto L_11516a1d;
  /* 11516a0a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11516a0f je 0x11516a13 */
  if (C.zf) goto L_11516a13;
  /* 11516a11 jmp 0x115169e0 */
  goto L_115169e0;
L_11516a13:;
  /* 11516a13 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11516a16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11516a1a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516a1c ret  */
  ESPCHK(0x115169c0u, _esp0);
  ESP += 4; return;
L_11516a1d:;
  /* 11516a1d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11516a20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11516a24 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516a26 ret  */
  ESPCHK(0x115169c0u, _esp0);
  ESP += 4; return;
L_11516a27:;
  /* 11516a27 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11516a2a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11516a2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516a30 ret  */
  ESPCHK(0x115169c0u, _esp0);
  ESP += 4; return;
L_11516a31:;
  /* 11516a31 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11516a34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11516a38 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516a3a ret  */
  ESPCHK(0x115169c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a3b @ 0x11516a3b (429 bytes, 143 insns) */
void f_11516a3b(void) {
  FTRACE(0x11516a3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516a3b push ebp */
  push32((uint32_t)(EBP));
  /* 11516a3c mov ebp, esp */
  EBP = (ESP);
  /* 11516a3e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516a41 push ebx */
  push32((uint32_t)(EBX));
  /* 11516a42 push esi */
  push32((uint32_t)(ESI));
  /* 11516a43 push edi */
  push32((uint32_t)(EDI));
  /* 11516a44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11516a46 call 0x115167e6 */
  push32(0x11516a4bu); f_115167e6();
  /* 11516a4b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11516a4e call 0x11516be8 */
  push32(0x11516a53u); f_11516be8();
  /* 11516a53 mov ebx, eax */
  EBX = (EAX);
  /* 11516a55 pop ecx */
  ECX = (pop32());
  /* 11516a56 cmp ebx, dword ptr [0x1151b898] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1151b898))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516a5c pop ecx */
  ECX = (pop32());
  /* 11516a5d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11516a60 jne 0x11516a69 */
  if (!C.zf) goto L_11516a69;
L_11516a62:;
  /* 11516a62 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11516a64 jmp 0x11516bd9 */
  goto L_11516bd9;
L_11516a69:;
  /* 11516a69 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11516a6b je 0x11516bc7 */
  if (C.zf) goto L_11516bc7;
  /* 11516a71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11516a73 mov eax, 0x1151afe8 */
  EAX = (0x1151afe8u);
L_11516a78:;
  /* 11516a78 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516a7a je 0x11516af0 */
  if (C.zf) goto L_11516af0;
  /* 11516a7c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11516a7f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11516a80 cmp eax, 0x1151b0d8 */
  { uint32_t _a=(EAX),_b=(0x1151b0d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516a85 jl 0x11516a78 */
  if ((C.sf!=C.of)) goto L_11516a78;
  /* 11516a87 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11516a8a push eax */
  push32((uint32_t)(EAX));
  /* 11516a8b push ebx */
  push32((uint32_t)(EBX));
  /* 11516a8c call dword ptr [0x1151902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151902c))), 0x11516a92u);
  /* 11516a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11516a94 pop esi */
  ESI = (pop32());
  /* 11516a95 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516a97 jne 0x11516bbe */
  if (!C.zf) goto L_11516bbe;
  /* 11516a9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11516a9f and dword ptr [0x1151bac4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1151bac4)))&(0x0u); w32((uint32_t)(0x1151bac4), (_r)); fl_logic(_r,32); }
  /* 11516aa6 pop ecx */
  ECX = (pop32());
  /* 11516aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516aa9 mov edi, 0x1151b9c0 */
  EDI = (0x1151b9c0u);
  /* 11516aae cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516ab1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11516ab3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11516ab4 mov dword ptr [0x1151b898], ebx */
  w32((uint32_t)(0x1151b898), (EBX));
  /* 11516aba jbe 0x11516bab */
  if ((C.cf||C.zf)) goto L_11516bab;
  /* 11516ac0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516ac4 je 0x11516b86 */
  if (C.zf) goto L_11516b86;
  /* 11516aca lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11516acd:;
  /* 11516acd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11516acf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11516ad1 je 0x11516b86 */
  if (C.zf) goto L_11516b86;
  /* 11516ad7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11516adb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11516ade:;
  /* 11516ade cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516ae0 ja 0x11516b7a */
  if ((!C.cf&&!C.zf)) goto L_11516b7a;
  /* 11516ae6 or byte ptr [eax + 0x1151b9c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(0x4u); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516aed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516aee jmp 0x11516ade */
  goto L_11516ade;
L_11516af0:;
  /* 11516af0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11516af4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11516af6 pop ecx */
  ECX = (pop32());
  /* 11516af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516af9 mov edi, 0x1151b9c0 */
  EDI = (0x1151b9c0u);
  /* 11516afe lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11516b01 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11516b03 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11516b06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11516b07 lea ebx, [esi + 0x1151aff8] */
  EBX = ((uint32_t)(ESI + 0x1151aff8));
L_11516b0d:;
  /* 11516b0d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516b10 mov ecx, ebx */
  ECX = (EBX);
  /* 11516b12 je 0x11516b40 */
  if (C.zf) goto L_11516b40;
L_11516b14:;
  /* 11516b14 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11516b17 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11516b19 je 0x11516b40 */
  if (C.zf) goto L_11516b40;
  /* 11516b1b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11516b1e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11516b21 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516b23 ja 0x11516b39 */
  if ((!C.cf&&!C.zf)) goto L_11516b39;
  /* 11516b25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11516b28 mov dl, byte ptr [edx + 0x1151afe0] */
  DL = (r8((uint32_t)(EDX + 0x1151afe0)));
L_11516b2e:;
  /* 11516b2e or byte ptr [eax + 0x1151b9c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(DL); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516b34 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516b35 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516b37 jbe 0x11516b2e */
  if ((C.cf||C.zf)) goto L_11516b2e;
L_11516b39:;
  /* 11516b39 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516b3a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516b3b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516b3e jne 0x11516b14 */
  if (!C.zf) goto L_11516b14;
L_11516b40:;
  /* 11516b40 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11516b43 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11516b46 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516b4a jb 0x11516b0d */
  if (C.cf) goto L_11516b0d;
  /* 11516b4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11516b4f mov dword ptr [0x1151b8ac], 1 */
  w32((uint32_t)(0x1151b8ac), (0x1u));
  /* 11516b59 push eax */
  push32((uint32_t)(EAX));
  /* 11516b5a mov dword ptr [0x1151b898], eax */
  w32((uint32_t)(0x1151b898), (EAX));
  /* 11516b5f call 0x11516c32 */
  push32(0x11516b64u); f_11516c32();
  /* 11516b64 lea esi, [esi + 0x1151afec] */
  ESI = ((uint32_t)(ESI + 0x1151afec));
  /* 11516b6a mov edi, 0x1151b8a0 */
  EDI = (0x1151b8a0u);
  /* 11516b6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11516b70 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11516b71 pop ecx */
  ECX = (pop32());
  /* 11516b72 mov dword ptr [0x1151bac4], eax */
  w32((uint32_t)(0x1151bac4), (EAX));
  /* 11516b77 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11516b78 jmp 0x11516bcc */
  goto L_11516bcc;
L_11516b7a:;
  /* 11516b7a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516b7b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516b7c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11516b80 jne 0x11516acd */
  if (!C.zf) goto L_11516acd;
L_11516b86:;
  /* 11516b86 mov eax, esi */
  EAX = (ESI);
L_11516b88:;
  /* 11516b88 or byte ptr [eax + 0x1151b9c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(0x8u); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516b90 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516b95 jb 0x11516b88 */
  if (C.cf) goto L_11516b88;
  /* 11516b97 push ebx */
  push32((uint32_t)(EBX));
  /* 11516b98 call 0x11516c32 */
  push32(0x11516b9du); f_11516c32();
  /* 11516b9d pop ecx */
  ECX = (pop32());
  /* 11516b9e mov dword ptr [0x1151bac4], eax */
  w32((uint32_t)(0x1151bac4), (EAX));
  /* 11516ba3 mov dword ptr [0x1151b8ac], esi */
  w32((uint32_t)(0x1151b8ac), (ESI));
  /* 11516ba9 jmp 0x11516bb2 */
  goto L_11516bb2;
L_11516bab:;
  /* 11516bab and dword ptr [0x1151b8ac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1151b8ac)))&(0x0u); w32((uint32_t)(0x1151b8ac), (_r)); fl_logic(_r,32); }
L_11516bb2:;
  /* 11516bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516bb4 mov edi, 0x1151b8a0 */
  EDI = (0x1151b8a0u);
  /* 11516bb9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11516bba stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11516bbb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11516bbc jmp 0x11516bcc */
  goto L_11516bcc;
L_11516bbe:;
  /* 11516bbe cmp dword ptr [0x1151b840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1151b840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516bc5 je 0x11516bd6 */
  if (C.zf) goto L_11516bd6;
L_11516bc7:;
  /* 11516bc7 call 0x11516c65 */
  push32(0x11516bccu); f_11516c65();
L_11516bcc:;
  /* 11516bcc call 0x11516c8e */
  push32(0x11516bd1u); f_11516c8e();
  /* 11516bd1 jmp 0x11516a62 */
  goto L_11516a62;
L_11516bd6:;
  /* 11516bd6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11516bd9:;
  /* 11516bd9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11516bdb call 0x11516847 */
  push32(0x11516be0u); f_11516847();
  /* 11516be0 pop ecx */
  ECX = (pop32());
  /* 11516be1 mov eax, esi */
  EAX = (ESI);
  /* 11516be3 pop edi */
  EDI = (pop32());
  /* 11516be4 pop esi */
  ESI = (pop32());
  /* 11516be5 pop ebx */
  EBX = (pop32());
  /* 11516be6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516be7 ret  */
  ESPCHK(0x11516a3bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006be8 @ 0x11516be8 (74 bytes, 15 insns) */
void f_11516be8(void) {
  FTRACE(0x11516be8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516be8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11516bec and dword ptr [0x1151b840], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1151b840)))&(0x0u); w32((uint32_t)(0x1151b840), (_r)); fl_logic(_r,32); }
  /* 11516bf3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516bf6 jne 0x11516c08 */
  if (!C.zf) goto L_11516c08;
  /* 11516bf8 mov dword ptr [0x1151b840], 1 */
  w32((uint32_t)(0x1151b840), (0x1u));
  /* 11516c02 jmp dword ptr [0x11519030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11519030)))); return;
L_11516c08:;
  /* 11516c08 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516c0b jne 0x11516c1d */
  if (!C.zf) goto L_11516c1d;
  /* 11516c0d mov dword ptr [0x1151b840], 1 */
  w32((uint32_t)(0x1151b840), (0x1u));
  /* 11516c17 jmp dword ptr [0x11519028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11519028)))); return;
L_11516c1d:;
  /* 11516c1d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516c20 jne 0x11516c31 */
  if (!C.zf) goto L_11516c31;
  /* 11516c22 mov eax, dword ptr [0x1151b870] */
  EAX = (r32((uint32_t)(0x1151b870)));
  /* 11516c27 mov dword ptr [0x1151b840], 1 */
  w32((uint32_t)(0x1151b840), (0x1u));
L_11516c31:;
  /* 11516c31 ret  */
  ESPCHK(0x11516be8u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c32 @ 0x11516c32 (51 bytes, 19 insns) */
void f_11516c32(void) {
  FTRACE(0x11516c32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516c32 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11516c36 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516c3b je 0x11516c5f */
  if (C.zf) goto L_11516c5f;
  /* 11516c3d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516c40 je 0x11516c59 */
  if (C.zf) goto L_11516c59;
  /* 11516c42 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516c45 je 0x11516c53 */
  if (C.zf) goto L_11516c53;
  /* 11516c47 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11516c48 je 0x11516c4d */
  if (C.zf) goto L_11516c4d;
  /* 11516c4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516c4c ret  */
  ESPCHK(0x11516c32u, _esp0);
  ESP += 4; return;
L_11516c4d:;
  /* 11516c4d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11516c52 ret  */
  ESPCHK(0x11516c32u, _esp0);
  ESP += 4; return;
L_11516c53:;
  /* 11516c53 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11516c58 ret  */
  ESPCHK(0x11516c32u, _esp0);
  ESP += 4; return;
L_11516c59:;
  /* 11516c59 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11516c5e ret  */
  ESPCHK(0x11516c32u, _esp0);
  ESP += 4; return;
L_11516c5f:;
  /* 11516c5f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11516c64 ret  */
  ESPCHK(0x11516c32u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c65 @ 0x11516c65 (41 bytes, 17 insns) */
void f_11516c65(void) {
  FTRACE(0x11516c65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516c65 push edi */
  push32((uint32_t)(EDI));
  /* 11516c66 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11516c68 pop ecx */
  ECX = (pop32());
  /* 11516c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516c6b mov edi, 0x1151b9c0 */
  EDI = (0x1151b9c0u);
  /* 11516c70 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11516c72 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11516c73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516c75 mov edi, 0x1151b8a0 */
  EDI = (0x1151b8a0u);
  /* 11516c7a mov dword ptr [0x1151b898], eax */
  w32((uint32_t)(0x1151b898), (EAX));
  /* 11516c7f mov dword ptr [0x1151b8ac], eax */
  w32((uint32_t)(0x1151b8ac), (EAX));
  /* 11516c84 mov dword ptr [0x1151bac4], eax */
  w32((uint32_t)(0x1151bac4), (EAX));
  /* 11516c89 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11516c8a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11516c8b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11516c8c pop edi */
  EDI = (pop32());
  /* 11516c8d ret  */
  ESPCHK(0x11516c65u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c8e @ 0x11516c8e (389 bytes, 124 insns) */
void f_11516c8e(void) {
  FTRACE(0x11516c8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516c8e push ebp */
  push32((uint32_t)(EBP));
  /* 11516c8f mov ebp, esp */
  EBP = (ESP);
  /* 11516c91 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516c97 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11516c9a push esi */
  push32((uint32_t)(ESI));
  /* 11516c9b push eax */
  push32((uint32_t)(EAX));
  /* 11516c9c push dword ptr [0x1151b898] */
  push32((uint32_t)(r32((uint32_t)(0x1151b898))));
  /* 11516ca2 call dword ptr [0x1151902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151902c))), 0x11516ca8u);
  /* 11516ca8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516cab jne 0x11516dc7 */
  if (!C.zf) goto L_11516dc7;
  /* 11516cb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516cb3 mov esi, 0x100 */
  ESI = (0x100u);
L_11516cb8:;
  /* 11516cb8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11516cbf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516cc0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516cc2 jb 0x11516cb8 */
  if (C.cf) goto L_11516cb8;
  /* 11516cc4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11516cc7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11516cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11516cd0 je 0x11516d09 */
  if (C.zf) goto L_11516d09;
  /* 11516cd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11516cd3 push edi */
  push32((uint32_t)(EDI));
  /* 11516cd4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11516cd7:;
  /* 11516cd7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11516cda movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11516cdd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516cdf ja 0x11516cfe */
  if ((!C.cf&&!C.zf)) goto L_11516cfe;
  /* 11516ce1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516ce3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11516cea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516ceb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11516cf0 mov ebx, ecx */
  EBX = (ECX);
  /* 11516cf2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11516cf5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11516cf7 mov ecx, ebx */
  ECX = (EBX);
  /* 11516cf9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11516cfc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11516cfe:;
  /* 11516cfe inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11516cff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11516d00 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11516d03 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11516d05 jne 0x11516cd7 */
  if (!C.zf) goto L_11516cd7;
  /* 11516d07 pop edi */
  EDI = (pop32());
  /* 11516d08 pop ebx */
  EBX = (pop32());
L_11516d09:;
  /* 11516d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11516d0b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11516d11 push dword ptr [0x1151bac4] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac4))));
  /* 11516d17 push dword ptr [0x1151b898] */
  push32((uint32_t)(r32((uint32_t)(0x1151b898))));
  /* 11516d1d push eax */
  push32((uint32_t)(EAX));
  /* 11516d1e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11516d24 push esi */
  push32((uint32_t)(ESI));
  /* 11516d25 push eax */
  push32((uint32_t)(EAX));
  /* 11516d26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11516d28 call 0x11517e02 */
  push32(0x11516d2du); f_11517e02();
  /* 11516d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11516d2f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11516d35 push dword ptr [0x1151b898] */
  push32((uint32_t)(r32((uint32_t)(0x1151b898))));
  /* 11516d3b push esi */
  push32((uint32_t)(ESI));
  /* 11516d3c push eax */
  push32((uint32_t)(EAX));
  /* 11516d3d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11516d43 push esi */
  push32((uint32_t)(ESI));
  /* 11516d44 push eax */
  push32((uint32_t)(EAX));
  /* 11516d45 push esi */
  push32((uint32_t)(ESI));
  /* 11516d46 push dword ptr [0x1151bac4] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac4))));
  /* 11516d4c call 0x11517bb3 */
  push32(0x11516d51u); f_11517bb3();
  /* 11516d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11516d53 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11516d59 push dword ptr [0x1151b898] */
  push32((uint32_t)(r32((uint32_t)(0x1151b898))));
  /* 11516d5f push esi */
  push32((uint32_t)(ESI));
  /* 11516d60 push eax */
  push32((uint32_t)(EAX));
  /* 11516d61 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11516d67 push esi */
  push32((uint32_t)(ESI));
  /* 11516d68 push eax */
  push32((uint32_t)(EAX));
  /* 11516d69 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11516d6e push dword ptr [0x1151bac4] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac4))));
  /* 11516d74 call 0x11517bb3 */
  push32(0x11516d79u); f_11517bb3();
  /* 11516d79 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11516d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516d7e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11516d84:;
  /* 11516d84 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11516d87 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11516d8a je 0x11516da2 */
  if (C.zf) goto L_11516da2;
  /* 11516d8c or byte ptr [eax + 0x1151b9c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(0x10u); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516d93 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11516d9a:;
  /* 11516d9a mov byte ptr [eax + 0x1151b8c0], dl */
  w8((uint32_t)(EAX + 0x1151b8c0), (DL));
  /* 11516da0 jmp 0x11516dbe */
  goto L_11516dbe;
L_11516da2:;
  /* 11516da2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11516da5 je 0x11516db7 */
  if (C.zf) goto L_11516db7;
  /* 11516da7 or byte ptr [eax + 0x1151b9c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(0x20u); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516dae mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11516db5 jmp 0x11516d9a */
  goto L_11516d9a;
L_11516db7:;
  /* 11516db7 and byte ptr [eax + 0x1151b8c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b8c0)))&(0x0u); w8((uint32_t)(EAX + 0x1151b8c0), (_r)); fl_logic(_r,8); }
L_11516dbe:;
  /* 11516dbe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516dbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516dc0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11516dc1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516dc3 jb 0x11516d84 */
  if (C.cf) goto L_11516d84;
  /* 11516dc5 jmp 0x11516e10 */
  goto L_11516e10;
L_11516dc7:;
  /* 11516dc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11516dc9 mov esi, 0x100 */
  ESI = (0x100u);
L_11516dce:;
  /* 11516dce cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516dd1 jb 0x11516dec */
  if (C.cf) goto L_11516dec;
  /* 11516dd3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516dd6 ja 0x11516dec */
  if ((!C.cf&&!C.zf)) goto L_11516dec;
  /* 11516dd8 or byte ptr [eax + 0x1151b9c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(0x10u); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516ddf mov cl, al */
  CL = (AL);
  /* 11516de1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11516de4:;
  /* 11516de4 mov byte ptr [eax + 0x1151b8c0], cl */
  w8((uint32_t)(EAX + 0x1151b8c0), (CL));
  /* 11516dea jmp 0x11516e0b */
  goto L_11516e0b;
L_11516dec:;
  /* 11516dec cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516def jb 0x11516e04 */
  if (C.cf) goto L_11516e04;
  /* 11516df1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516df4 ja 0x11516e04 */
  if ((!C.cf&&!C.zf)) goto L_11516e04;
  /* 11516df6 or byte ptr [eax + 0x1151b9c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b9c1)))|(0x20u); w8((uint32_t)(EAX + 0x1151b9c1), (_r)); fl_logic(_r,8); }
  /* 11516dfd mov cl, al */
  CL = (AL);
  /* 11516dff sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11516e02 jmp 0x11516de4 */
  goto L_11516de4;
L_11516e04:;
  /* 11516e04 and byte ptr [eax + 0x1151b8c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1151b8c0)))&(0x0u); w8((uint32_t)(EAX + 0x1151b8c0), (_r)); fl_logic(_r,8); }
L_11516e0b:;
  /* 11516e0b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11516e0c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516e0e jb 0x11516dce */
  if (C.cf) goto L_11516dce;
L_11516e10:;
  /* 11516e10 pop esi */
  ESI = (pop32());
  /* 11516e11 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516e12 ret  */
  ESPCHK(0x11516c8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e13 @ 0x11516e13 (28 bytes, 7 insns) */
void f_11516e13(void) {
  FTRACE(0x11516e13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516e13 cmp dword ptr [0x1151bbe8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1151bbe8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516e1a jne 0x11516e2e */
  if (!C.zf) goto L_11516e2e;
  /* 11516e1c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11516e1e call 0x11516a3b */
  push32(0x11516e23u); f_11516a3b();
  /* 11516e23 pop ecx */
  ECX = (pop32());
  /* 11516e24 mov dword ptr [0x1151bbe8], 1 */
  w32((uint32_t)(0x1151bbe8), (0x1u));
L_11516e2e:;
  /* 11516e2e ret  */
  ESPCHK(0x11516e13u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x11516e30 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11516e30(void) {
  FTRACE(0x11516e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11516e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11516e31 mov ebp, esp */
  EBP = (ESP);
  /* 11516e33 push edi */
  push32((uint32_t)(EDI));
  /* 11516e34 push esi */
  push32((uint32_t)(ESI));
  /* 11516e35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11516e38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11516e3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11516e3e mov eax, ecx */
  EAX = (ECX);
  /* 11516e40 mov edx, ecx */
  EDX = (ECX);
  /* 11516e42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11516e44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516e46 jbe 0x11516e50 */
  if ((C.cf||C.zf)) goto L_11516e50;
  /* 11516e48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516e4a jb 0x11516fc8 */
  if (C.cf) goto L_11516fc8;
L_11516e50:;
  /* 11516e50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11516e56 jne 0x11516e6c */
  if (!C.zf) goto L_11516e6c;
  /* 11516e58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11516e5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11516e5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516e61 jb 0x11516e8c */
  if (C.cf) goto L_11516e8c;
  /* 11516e63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11516e65 jmp dword ptr [edx*4 + 0x11516f78] */
  switch (EDX) {
    case 0: goto L_11516f88;
    case 1: goto L_11516f90;
    case 2: goto L_11516f9c;
    case 3: goto L_11516fb0;
    default: x86_unimpl("switch@0x11516e65 out of table"); return;
  }
L_11516e6c:;
  /* 11516e6c mov eax, edi */
  EAX = (EDI);
  /* 11516e6e mov edx, 3 */
  EDX = (0x3u);
  /* 11516e73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11516e76 jb 0x11516e84 */
  if (C.cf) goto L_11516e84;
  /* 11516e78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11516e7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11516e7d jmp dword ptr [eax*4 + 0x11516e90] */
  switch (EAX) {
    case 1: goto L_11516ea0;
    case 2: goto L_11516ecc;
    case 3: goto L_11516ef0;
    default: x86_unimpl("switch@0x11516e7d out of table"); return;
  }
L_11516e84:;
  /* 11516e84 jmp dword ptr [ecx*4 + 0x11516f88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11516f88)))); return;
  /* 11516e8b nop  */
  /* nop */
L_11516e8c:;
  /* 11516e8c jmp dword ptr [ecx*4 + 0x11516f0c] */
  switch (ECX) {
    case 0: goto L_11516f6f;
    case 1: goto L_11516f5c;
    case 2: goto L_11516f54;
    case 3: goto L_11516f4c;
    case 4: goto L_11516f44;
    case 5: goto L_11516f3c;
    case 6: goto L_11516f34;
    case 7: goto L_11516f2c;
    default: x86_unimpl("switch@0x11516e8c out of table"); return;
  }
  /* 11516e93 nop  */
  /* nop */
L_11516ea0:;
  /* 11516ea0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11516ea2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11516ea4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11516ea6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11516ea9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11516eac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11516eaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11516eb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11516eb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516eb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516ebb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516ebe jb 0x11516e8c */
  if (C.cf) goto L_11516e8c;
  /* 11516ec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11516ec2 jmp dword ptr [edx*4 + 0x11516f78] */
  switch (EDX) {
    case 0: goto L_11516f88;
    case 1: goto L_11516f90;
    case 2: goto L_11516f9c;
    case 3: goto L_11516fb0;
    default: x86_unimpl("switch@0x11516ec2 out of table"); return;
  }
  /* 11516ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11516ecc:;
  /* 11516ecc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11516ece mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11516ed0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11516ed2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11516ed5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11516ed8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11516edb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516ede add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516ee1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516ee4 jb 0x11516e8c */
  if (C.cf) goto L_11516e8c;
  /* 11516ee6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11516ee8 jmp dword ptr [edx*4 + 0x11516f78] */
  switch (EDX) {
    case 0: goto L_11516f88;
    case 1: goto L_11516f90;
    case 2: goto L_11516f9c;
    case 3: goto L_11516fb0;
    default: x86_unimpl("switch@0x11516ee8 out of table"); return;
  }
  /* 11516eef nop  */
  /* nop */
L_11516ef0:;
  /* 11516ef0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11516ef2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11516ef4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11516ef6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11516ef7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11516efa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11516efb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516efe jb 0x11516e8c */
  if (C.cf) goto L_11516e8c;
  /* 11516f00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11516f02 jmp dword ptr [edx*4 + 0x11516f78] */
  switch (EDX) {
    case 0: goto L_11516f88;
    case 1: goto L_11516f90;
    case 2: goto L_11516f9c;
    case 3: goto L_11516fb0;
    default: x86_unimpl("switch@0x11516f02 out of table"); return;
  }
  /* 11516f09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11516f2c:;
  /* 11516f2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11516f30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11516f34:;
  /* 11516f34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11516f38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11516f3c:;
  /* 11516f3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11516f40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11516f44:;
  /* 11516f44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11516f48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11516f4c:;
  /* 11516f4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11516f50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11516f54:;
  /* 11516f54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11516f58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11516f5c:;
  /* 11516f5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11516f60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11516f64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11516f6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11516f6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11516f6f:;
  /* 11516f6f jmp dword ptr [edx*4 + 0x11516f78] */
  switch (EDX) {
    case 0: goto L_11516f88;
    case 1: goto L_11516f90;
    case 2: goto L_11516f9c;
    case 3: goto L_11516fb0;
    default: x86_unimpl("switch@0x11516f6f out of table"); return;
  }
  /* 11516f76 mov edi, edi */
  EDI = (EDI);
L_11516f88:;
  /* 11516f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11516f8b pop esi */
  ESI = (pop32());
  /* 11516f8c pop edi */
  EDI = (pop32());
  /* 11516f8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516f8e ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 11516f8f nop  */
  /* nop */
L_11516f90:;
  /* 11516f90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11516f92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11516f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11516f97 pop esi */
  ESI = (pop32());
  /* 11516f98 pop edi */
  EDI = (pop32());
  /* 11516f99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516f9a ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 11516f9b nop  */
  /* nop */
L_11516f9c:;
  /* 11516f9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11516f9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11516fa0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11516fa3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11516fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11516fa9 pop esi */
  ESI = (pop32());
  /* 11516faa pop edi */
  EDI = (pop32());
  /* 11516fab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516fac ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 11516fad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11516fb0:;
  /* 11516fb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11516fb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11516fb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11516fb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11516fba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11516fbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11516fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11516fc3 pop esi */
  ESI = (pop32());
  /* 11516fc4 pop edi */
  EDI = (pop32());
  /* 11516fc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11516fc6 ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 11516fc7 nop  */
  /* nop */
L_11516fc8:;
  /* 11516fc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11516fcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11516fd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11516fd6 jne 0x11516ffc */
  if (!C.zf) goto L_11516ffc;
  /* 11516fd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11516fdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11516fde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11516fe1 jb 0x11516ff0 */
  if (C.cf) goto L_11516ff0;
  /* 11516fe3 std  */
  C.df=1;
  /* 11516fe4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11516fe6 cld  */
  C.df=0;
  /* 11516fe7 jmp dword ptr [edx*4 + 0x11517110] */
  switch (EDX) {
    case 0: goto L_11517120;
    case 1: goto L_11517128;
    case 2: goto L_11517138;
    case 3: goto L_1151714c;
    default: x86_unimpl("switch@0x11516fe7 out of table"); return;
  }
  /* 11516fee mov edi, edi */
  EDI = (EDI);
L_11516ff0:;
  /* 11516ff0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11516ff2 jmp dword ptr [ecx*4 + 0x115170c0] */
  switch (ECX) {
    case 0: goto L_11517107;
    default: x86_unimpl("switch@0x11516ff2 out of table"); return;
  }
  /* 11516ff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11516ffc:;
  /* 11516ffc mov eax, edi */
  EAX = (EDI);
  /* 11516ffe mov edx, 3 */
  EDX = (0x3u);
  /* 11517003 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517006 jb 0x11517014 */
  if (C.cf) goto L_11517014;
  /* 11517008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1151700b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151700d jmp dword ptr [eax*4 + 0x11517018] */
  switch (EAX) {
    case 1: goto L_11517028;
    case 2: goto L_11517048;
    case 3: goto L_11517070;
    default: x86_unimpl("switch@0x1151700d out of table"); return;
  }
L_11517014:;
  /* 11517014 jmp dword ptr [ecx*4 + 0x11517110] */
  switch (ECX) {
    case 0: goto L_11517120;
    case 1: goto L_11517128;
    case 2: goto L_11517138;
    case 3: goto L_1151714c;
    default: x86_unimpl("switch@0x11517014 out of table"); return;
  }
  /* 1151701b nop  */
  /* nop */
L_11517028:;
  /* 11517028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151702b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1151702d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11517030 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11517031 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517034 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11517035 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517038 jb 0x11516ff0 */
  if (C.cf) goto L_11516ff0;
  /* 1151703a std  */
  C.df=1;
  /* 1151703b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1151703d cld  */
  C.df=0;
  /* 1151703e jmp dword ptr [edx*4 + 0x11517110] */
  switch (EDX) {
    case 0: goto L_11517120;
    case 1: goto L_11517128;
    case 2: goto L_11517138;
    case 3: goto L_1151714c;
    default: x86_unimpl("switch@0x1151703e out of table"); return;
  }
  /* 11517045 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11517048:;
  /* 11517048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151704b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1151704d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11517050 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11517053 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517056 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11517059 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151705c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151705f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517062 jb 0x11516ff0 */
  if (C.cf) goto L_11516ff0;
  /* 11517064 std  */
  C.df=1;
  /* 11517065 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11517067 cld  */
  C.df=0;
  /* 11517068 jmp dword ptr [edx*4 + 0x11517110] */
  switch (EDX) {
    case 0: goto L_11517120;
    case 1: goto L_11517128;
    case 2: goto L_11517138;
    case 3: goto L_1151714c;
    default: x86_unimpl("switch@0x11517068 out of table"); return;
  }
  /* 1151706f nop  */
  /* nop */
L_11517070:;
  /* 11517070 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11517073 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11517075 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11517078 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1151707b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1151707e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11517081 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517084 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11517087 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151708a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151708d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517090 jb 0x11516ff0 */
  if (C.cf) goto L_11516ff0;
  /* 11517096 std  */
  C.df=1;
  /* 11517097 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11517099 cld  */
  C.df=0;
  /* 1151709a jmp dword ptr [edx*4 + 0x11517110] */
  switch (EDX) {
    case 0: goto L_11517120;
    case 1: goto L_11517128;
    case 2: goto L_11517138;
    case 3: goto L_1151714c;
    default: x86_unimpl("switch@0x1151709a out of table"); return;
  }
  /* 115170a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115170a4 les esi, ptr [eax + 0x51] */
  x86_unimpl("les @ 0x115170a4");
  /* 115170a7 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115170a9 jo 0x115170fc */
  if (C.of) goto L_115170fc;
  /* 115170ab adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115170ad jo 0x11517100 */
  if (C.of) goto L_11517100;
  /* 115170af adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115170b1 jo 0x11517104 */
  if (C.of) goto L_11517104;
  /* 115170b3 adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115170b5 jo 0x11517108 */
  if (C.of) goto L_11517108;
  /* 115170b7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115170b9 jo 0x1151710c */
  if (C.of) goto L_1151710c;
  /* 115170bb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115170bd jo 0x11517110 */
  if (C.of) goto L_11517110;
  /* 115170c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115170c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115170cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115170d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115170d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115170d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115170dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 115170e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 115170e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 115170e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 115170ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 115170f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 115170f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 115170f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
L_115170fc:;
  /* 115170fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11517103 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517105 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11517107:;
  /* 11517107 jmp dword ptr [edx*4 + 0x11517110] */
  switch (EDX) {
    case 0: goto L_11517120;
    case 1: goto L_11517128;
    case 2: goto L_11517138;
    case 3: goto L_1151714c;
    default: x86_unimpl("switch@0x11517107 out of table"); return;
  }
  /* 1151710e mov edi, edi */
  EDI = (EDI);
L_11517120:;
  /* 11517120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517123 pop esi */
  ESI = (pop32());
  /* 11517124 pop edi */
  EDI = (pop32());
  /* 11517125 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11517126 ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 11517127 nop  */
  /* nop */
L_11517128:;
  /* 11517128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151712b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1151712e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517131 pop esi */
  ESI = (pop32());
  /* 11517132 pop edi */
  EDI = (pop32());
  /* 11517133 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11517134 ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 11517135 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11517138:;
  /* 11517138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151713b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1151713e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11517141 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11517144 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517147 pop esi */
  ESI = (pop32());
  /* 11517148 pop edi */
  EDI = (pop32());
  /* 11517149 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1151714a ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
  /* 1151714b nop  */
  /* nop */
L_1151714c:;
  /* 1151714c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151714f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11517152 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11517155 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11517158 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1151715b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1151715e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517161 pop esi */
  ESI = (pop32());
  /* 11517162 pop edi */
  EDI = (pop32());
  /* 11517163 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11517164 ret  */
  ESPCHK(0x11516e30u, _esp0);
  ESP += 4; return;
L_11517100: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11517100 (unresolved jump table)"); return;
L_11517104: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11517104 (unresolved jump table)"); return;
L_11517108: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11517108 (unresolved jump table)"); return;
L_1151710c: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1151710c (unresolved jump table)"); return;
L_11517110: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11517110 (unresolved jump table)"); return;
}

/* FUN_10007165 @ 0x11517165 (62 bytes, 15 insns) */
void f_11517165(void) {
  FTRACE(0x11517165u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517165 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1151716a push 0 */
  push32((uint32_t)(0x0u));
  /* 1151716c push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 11517172 call dword ptr [0x11519034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519034))), 0x11517178u);
  /* 11517178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151717a mov dword ptr [0x1151b894], eax */
  w32((uint32_t)(0x1151b894), (EAX));
  /* 1151717f jne 0x11517182 */
  if (!C.zf) goto L_11517182;
  /* 11517181 ret  */
  ESPCHK(0x11517165u, _esp0);
  ESP += 4; return;
L_11517182:;
  /* 11517182 and dword ptr [0x1151b88c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1151b88c)))&(0x0u); w32((uint32_t)(0x1151b88c), (_r)); fl_logic(_r,32); }
  /* 11517189 and dword ptr [0x1151b890], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1151b890)))&(0x0u); w32((uint32_t)(0x1151b890), (_r)); fl_logic(_r,32); }
  /* 11517190 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517192 mov dword ptr [0x1151b888], eax */
  w32((uint32_t)(0x1151b888), (EAX));
  /* 11517197 mov dword ptr [0x1151b880], 0x10 */
  w32((uint32_t)(0x1151b880), (0x10u));
  /* 115171a1 pop eax */
  EAX = (pop32());
  /* 115171a2 ret  */
  ESPCHK(0x11517165u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a3 @ 0x115171a3 (43 bytes, 14 insns) */
void f_115171a3(void) {
  FTRACE(0x115171a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115171a3 mov eax, dword ptr [0x1151b890] */
  EAX = (r32((uint32_t)(0x1151b890)));
  /* 115171a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 115171ab mov eax, dword ptr [0x1151b894] */
  EAX = (r32((uint32_t)(0x1151b894)));
  /* 115171b0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_115171b3:;
  /* 115171b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115171b5 jae 0x115171cb */
  if (!C.cf) goto L_115171cb;
  /* 115171b7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 115171bb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115171be cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115171c4 jb 0x115171cd */
  if (C.cf) goto L_115171cd;
  /* 115171c6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115171c9 jmp 0x115171b3 */
  goto L_115171b3;
L_115171cb:;
  /* 115171cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115171cd:;
  /* 115171cd ret  */
  ESPCHK(0x115171a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100071ce @ 0x115171ce (811 bytes, 264 insns) */
void f_115171ce(void) {
  FTRACE(0x115171ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115171ce push ebp */
  push32((uint32_t)(EBP));
  /* 115171cf mov ebp, esp */
  EBP = (ESP);
  /* 115171d1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115171d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115171d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115171da push ebx */
  push32((uint32_t)(EBX));
  /* 115171db push esi */
  push32((uint32_t)(ESI));
  /* 115171dc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 115171df mov esi, edx */
  ESI = (EDX);
  /* 115171e1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115171e4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 115171e7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115171ea push edi */
  push32((uint32_t)(EDI));
  /* 115171eb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 115171ee mov ecx, esi */
  ECX = (ESI);
  /* 115171f0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 115171f3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115171f9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115171fa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 115171fd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11517204 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11517207 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1151720a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1151720d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11517210 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11517213 jne 0x11517294 */
  if (!C.zf) goto L_11517294;
  /* 11517215 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11517218 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1151721a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1151721b pop edi */
  EDI = (pop32());
  /* 1151721c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1151721f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517221 jbe 0x11517226 */
  if ((C.cf||C.zf)) goto L_11517226;
  /* 11517223 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11517226:;
  /* 11517226 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1151722a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151722e jne 0x11517278 */
  if (!C.zf) goto L_11517278;
  /* 11517230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11517233 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517236 jae 0x11517254 */
  if (!C.cf) goto L_11517254;
  /* 11517238 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1151723d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1151723f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11517243 not edi */
  EDI = (~(EDI));
  /* 11517245 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11517249 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1151724b jne 0x11517278 */
  if (!C.zf) goto L_11517278;
  /* 1151724d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517250 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11517252 jmp 0x11517278 */
  goto L_11517278;
L_11517254:;
  /* 11517254 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517257 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1151725c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1151725e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11517261 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11517265 not edi */
  EDI = (~(EDI));
  /* 11517267 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1151726e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11517270 jne 0x11517278 */
  if (!C.zf) goto L_11517278;
  /* 11517272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517275 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11517278:;
  /* 11517278 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1151727c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11517280 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11517283 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11517287 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1151728b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1151728e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11517291 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11517294:;
  /* 11517294 mov edi, ebx */
  EDI = (EBX);
  /* 11517296 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11517299 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1151729a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151729d jbe 0x115172a2 */
  if ((C.cf||C.zf)) goto L_115172a2;
  /* 1151729f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115172a1 pop edi */
  EDI = (pop32());
L_115172a2:;
  /* 115172a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115172a5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115172a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115172ab jne 0x11517351 */
  if (!C.zf) goto L_11517351;
  /* 115172b1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115172b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115172b7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 115172ba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115172bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115172bf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115172c0 pop edx */
  EDX = (pop32());
  /* 115172c1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115172c3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115172c6 jbe 0x115172cd */
  if ((C.cf||C.zf)) goto L_115172cd;
  /* 115172c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 115172cb mov ecx, edx */
  ECX = (EDX);
L_115172cd:;
  /* 115172cd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115172d0 mov edi, ebx */
  EDI = (EBX);
  /* 115172d2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 115172d5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 115172d8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 115172d9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115172db jbe 0x115172df */
  if ((C.cf||C.zf)) goto L_115172df;
  /* 115172dd mov edi, edx */
  EDI = (EDX);
L_115172df:;
  /* 115172df cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115172e1 je 0x1151734e */
  if (C.zf) goto L_1151734e;
  /* 115172e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115172e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115172e9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115172ec jne 0x11517336 */
  if (!C.zf) goto L_11517336;
  /* 115172ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115172f1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115172f4 jae 0x11517312 */
  if (!C.cf) goto L_11517312;
  /* 115172f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 115172fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115172fd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11517301 not edx */
  EDX = (~(EDX));
  /* 11517303 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11517307 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11517309 jne 0x11517336 */
  if (!C.zf) goto L_11517336;
  /* 1151730b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1151730e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11517310 jmp 0x11517336 */
  goto L_11517336;
L_11517312:;
  /* 11517312 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517315 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1151731a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1151731c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1151731f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11517323 not edx */
  EDX = (~(EDX));
  /* 11517325 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1151732c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1151732e jne 0x11517336 */
  if (!C.zf) goto L_11517336;
  /* 11517330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517333 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11517336:;
  /* 11517336 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11517339 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1151733c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1151733f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11517342 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11517345 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11517348 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1151734b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1151734e:;
  /* 1151734e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11517351:;
  /* 11517351 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517355 jne 0x11517360 */
  if (!C.zf) goto L_11517360;
  /* 11517357 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151735a je 0x115173e9 */
  if (C.zf) goto L_115173e9;
L_11517360:;
  /* 11517360 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11517363 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11517366 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11517369 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1151736c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1151736f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11517372 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11517375 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11517378 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1151737b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1151737e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11517381 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517384 jne 0x115173e9 */
  if (!C.zf) goto L_115173e9;
  /* 11517386 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1151738a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151738d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11517390 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11517392 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11517396 jae 0x115173bd */
  if (!C.cf) goto L_115173bd;
  /* 11517398 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1151739c jne 0x115173ac */
  if (!C.zf) goto L_115173ac;
  /* 1151739e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115173a3 mov ecx, edi */
  ECX = (EDI);
  /* 115173a5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115173a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115173aa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_115173ac:;
  /* 115173ac mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115173b1 mov ecx, edi */
  ECX = (EDI);
  /* 115173b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115173b5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 115173b9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115173bb jmp 0x115173e6 */
  goto L_115173e6;
L_115173bd:;
  /* 115173bd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115173c1 jne 0x115173d3 */
  if (!C.zf) goto L_115173d3;
  /* 115173c3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115173c6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115173cb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115173cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115173d0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_115173d3:;
  /* 115173d3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115173d6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 115173db shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 115173dd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 115173e4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_115173e6:;
  /* 115173e6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_115173e9:;
  /* 115173e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115173ec mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 115173ee mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 115173f2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 115173f4 jne 0x115174f4 */
  if (!C.zf) goto L_115174f4;
  /* 115173fa mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 115173ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517401 je 0x115174e6 */
  if (C.zf) goto L_115174e6;
  /* 11517407 mov ecx, dword ptr [0x1151b884] */
  ECX = (r32((uint32_t)(0x1151b884)));
  /* 1151740d mov edi, dword ptr [0x11519048] */
  EDI = (r32((uint32_t)(0x11519048)));
  /* 11517413 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11517416 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517419 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1151741e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11517423 push ebx */
  push32((uint32_t)(EBX));
  /* 11517424 push ecx */
  push32((uint32_t)(ECX));
  /* 11517425 call edi */
  call_ind((uint32_t)(EDI), 0x11517427u);
  /* 11517427 mov ecx, dword ptr [0x1151b884] */
  ECX = (r32((uint32_t)(0x1151b884)));
  /* 1151742d mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 11517432 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11517437 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11517439 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1151743c mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 11517441 mov ecx, dword ptr [0x1151b884] */
  ECX = (r32((uint32_t)(0x1151b884)));
  /* 11517447 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1151744a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11517452 mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 11517457 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1151745a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1151745d mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 11517462 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11517465 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11517469 jne 0x11517474 */
  if (!C.zf) goto L_11517474;
  /* 1151746b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1151746f mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
L_11517474:;
  /* 11517474 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517478 jne 0x115174e6 */
  if (!C.zf) goto L_115174e6;
  /* 1151747a push ebx */
  push32((uint32_t)(EBX));
  /* 1151747b push 0 */
  push32((uint32_t)(0x0u));
  /* 1151747d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11517480 call edi */
  call_ind((uint32_t)(EDI), 0x11517482u);
  /* 11517482 mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 11517487 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1151748a push 0 */
  push32((uint32_t)(0x0u));
  /* 1151748c push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 11517492 call dword ptr [0x11519044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519044))), 0x11517498u);
  /* 11517498 mov eax, dword ptr [0x1151b890] */
  EAX = (r32((uint32_t)(0x1151b890)));
  /* 1151749d mov edx, dword ptr [0x1151b894] */
  EDX = (r32((uint32_t)(0x1151b894)));
  /* 115174a3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 115174a6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115174a9 mov ecx, eax */
  ECX = (EAX);
  /* 115174ab mov eax, dword ptr [0x1151b88c] */
  EAX = (r32((uint32_t)(0x1151b88c)));
  /* 115174b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115174b2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 115174b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115174b7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 115174ba push ecx */
  push32((uint32_t)(ECX));
  /* 115174bb push eax */
  push32((uint32_t)(EAX));
  /* 115174bc call 0x11517f50 */
  push32(0x115174c1u); f_11517f50();
  /* 115174c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115174c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115174c7 dec dword ptr [0x1151b890] */
  { uint32_t _r=(r32((uint32_t)(0x1151b890)))-1; w32((uint32_t)(0x1151b890), (_r)); fl_dec(_r,32); }
  /* 115174cd cmp eax, dword ptr [0x1151b88c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1151b88c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115174d3 jbe 0x115174d8 */
  if ((C.cf||C.zf)) goto L_115174d8;
  /* 115174d5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115174d8:;
  /* 115174d8 mov ecx, dword ptr [0x1151b894] */
  ECX = (r32((uint32_t)(0x1151b894)));
  /* 115174de mov dword ptr [0x1151b888], ecx */
  w32((uint32_t)(0x1151b888), (ECX));
  /* 115174e4 jmp 0x115174e9 */
  goto L_115174e9;
L_115174e6:;
  /* 115174e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_115174e9:;
  /* 115174e9 mov dword ptr [0x1151b88c], eax */
  w32((uint32_t)(0x1151b88c), (EAX));
  /* 115174ee mov dword ptr [0x1151b884], esi */
  w32((uint32_t)(0x1151b884), (ESI));
L_115174f4:;
  /* 115174f4 pop edi */
  EDI = (pop32());
  /* 115174f5 pop esi */
  ESI = (pop32());
  /* 115174f6 pop ebx */
  EBX = (pop32());
  /* 115174f7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115174f8 ret  */
  ESPCHK(0x115171ceu, _esp0);
  ESP += 4; return;
}

/* FUN_100074f9 @ 0x115174f9 (777 bytes, 275 insns) */
void f_115174f9(void) {
  FTRACE(0x115174f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115174f9 push ebp */
  push32((uint32_t)(EBP));
  /* 115174fa mov ebp, esp */
  EBP = (ESP);
  /* 115174fc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115174ff mov eax, dword ptr [0x1151b890] */
  EAX = (r32((uint32_t)(0x1151b890)));
  /* 11517504 mov edx, dword ptr [0x1151b894] */
  EDX = (r32((uint32_t)(0x1151b894)));
  /* 1151750a push ebx */
  push32((uint32_t)(EBX));
  /* 1151750b push esi */
  push32((uint32_t)(ESI));
  /* 1151750c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1151750f push edi */
  push32((uint32_t)(EDI));
  /* 11517510 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11517513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517516 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11517519 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1151751c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1151751f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11517522 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11517525 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517526 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517529 jge 0x11517539 */
  if ((C.sf==C.of)) goto L_11517539;
  /* 1151752b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1151752e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11517530 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11517534 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11517537 jmp 0x11517549 */
  goto L_11517549;
L_11517539:;
  /* 11517539 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1151753c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1151753f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11517541 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11517543 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11517546 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11517549:;
  /* 11517549 mov eax, dword ptr [0x1151b888] */
  EAX = (r32((uint32_t)(0x1151b888)));
  /* 1151754e mov ebx, eax */
  EBX = (EAX);
  /* 11517550 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517552 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11517555 jae 0x11517570 */
  if (!C.cf) goto L_11517570;
L_11517557:;
  /* 11517557 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1151755a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1151755c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1151755f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11517561 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11517563 jne 0x11517570 */
  if (!C.zf) goto L_11517570;
  /* 11517565 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517568 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151756b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1151756e jb 0x11517557 */
  if (C.cf) goto L_11517557;
L_11517570:;
  /* 11517570 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517573 jne 0x115175ee */
  if (!C.zf) goto L_115175ee;
  /* 11517575 mov ebx, edx */
  EBX = (EDX);
L_11517577:;
  /* 11517577 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517579 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1151757c jae 0x11517593 */
  if (!C.cf) goto L_11517593;
  /* 1151757e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11517581 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11517583 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11517586 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11517588 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1151758a jne 0x11517591 */
  if (!C.zf) goto L_11517591;
  /* 1151758c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1151758f jmp 0x11517577 */
  goto L_11517577;
L_11517591:;
  /* 11517591 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11517593:;
  /* 11517593 jne 0x115175ee */
  if (!C.zf) goto L_115175ee;
L_11517595:;
  /* 11517595 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517598 jae 0x115175ab */
  if (!C.cf) goto L_115175ab;
  /* 1151759a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151759e jne 0x115175a8 */
  if (!C.zf) goto L_115175a8;
  /* 115175a0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115175a3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115175a6 jmp 0x11517595 */
  goto L_11517595;
L_115175a8:;
  /* 115175a8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115175ab:;
  /* 115175ab jne 0x115175d3 */
  if (!C.zf) goto L_115175d3;
  /* 115175ad mov ebx, edx */
  EBX = (EDX);
L_115175af:;
  /* 115175af cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115175b1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115175b4 jae 0x115175c3 */
  if (!C.cf) goto L_115175c3;
  /* 115175b6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115175ba jne 0x115175c1 */
  if (!C.zf) goto L_115175c1;
  /* 115175bc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115175bf jmp 0x115175af */
  goto L_115175af;
L_115175c1:;
  /* 115175c1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_115175c3:;
  /* 115175c3 jne 0x115175d3 */
  if (!C.zf) goto L_115175d3;
  /* 115175c5 call 0x11517802 */
  push32(0x115175cau); f_11517802();
  /* 115175ca mov ebx, eax */
  EBX = (EAX);
  /* 115175cc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 115175ce mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 115175d1 je 0x115175e7 */
  if (C.zf) goto L_115175e7;
L_115175d3:;
  /* 115175d3 push ebx */
  push32((uint32_t)(EBX));
  /* 115175d4 call 0x115178b3 */
  push32(0x115175d9u); f_115178b3();
  /* 115175d9 pop ecx */
  ECX = (pop32());
  /* 115175da mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 115175dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115175df mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 115175e2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115175e5 jne 0x115175ee */
  if (!C.zf) goto L_115175ee;
L_115175e7:;
  /* 115175e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115175e9 jmp 0x115177fd */
  goto L_115177fd;
L_115175ee:;
  /* 115175ee mov dword ptr [0x1151b888], ebx */
  w32((uint32_t)(0x1151b888), (EBX));
  /* 115175f4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 115175f7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 115175f9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115175fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115175ff je 0x11517615 */
  if (C.zf) goto L_11517615;
  /* 11517601 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11517608 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1151760c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1151760f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11517611 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11517613 jne 0x1151764c */
  if (!C.zf) goto L_1151764c;
L_11517615:;
  /* 11517615 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1151761b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1151761e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11517621 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11517624 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11517628 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1151762b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1151762d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11517630 jne 0x11517649 */
  if (!C.zf) goto L_11517649;
L_11517632:;
  /* 11517632 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11517638 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1151763b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1151763e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517641 mov edi, esi */
  EDI = (ESI);
  /* 11517643 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11517645 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11517647 je 0x11517632 */
  if (C.zf) goto L_11517632;
L_11517649:;
  /* 11517649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1151764c:;
  /* 1151764c mov ecx, edx */
  ECX = (EDX);
  /* 1151764e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11517650 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11517656 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1151765d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11517660 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11517664 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11517666 jne 0x11517675 */
  if (!C.zf) goto L_11517675;
  /* 11517668 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1151766f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11517671 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11517674 pop edi */
  EDI = (pop32());
L_11517675:;
  /* 11517675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11517677 jl 0x1151767e */
  if ((C.sf!=C.of)) goto L_1151767e;
  /* 11517679 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1151767b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1151767c jmp 0x11517675 */
  goto L_11517675;
L_1151767e:;
  /* 1151767e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11517681 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11517685 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11517687 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151768a mov esi, ecx */
  ESI = (ECX);
  /* 1151768c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1151768f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11517692 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11517693 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517696 jle 0x1151769b */
  if ((C.zf||C.sf!=C.of)) goto L_1151769b;
  /* 11517698 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1151769a pop esi */
  ESI = (pop32());
L_1151769b:;
  /* 1151769b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151769d je 0x115177b0 */
  if (C.zf) goto L_115177b0;
  /* 115176a3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 115176a6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115176a9 jne 0x1151770c */
  if (!C.zf) goto L_1151770c;
  /* 115176ab cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115176ae jge 0x115176db */
  if ((C.sf==C.of)) goto L_115176db;
  /* 115176b0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115176b5 mov ecx, edi */
  ECX = (EDI);
  /* 115176b7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115176b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115176bc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 115176c0 not ebx */
  EBX = (~(EBX));
  /* 115176c2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 115176c5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 115176c9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 115176cd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 115176cf jne 0x11517709 */
  if (!C.zf) goto L_11517709;
  /* 115176d1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 115176d4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115176d7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 115176d9 jmp 0x1151770c */
  goto L_1151770c;
L_115176db:;
  /* 115176db lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 115176de mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 115176e3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 115176e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115176e8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 115176ec lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 115176f3 not ebx */
  EBX = (~(EBX));
  /* 115176f5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 115176f7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 115176f9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 115176fc jne 0x11517709 */
  if (!C.zf) goto L_11517709;
  /* 115176fe mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517701 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11517704 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11517707 jmp 0x1151770c */
  goto L_1151770c;
L_11517709:;
  /* 11517709 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1151770c:;
  /* 1151770c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1151770f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11517712 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517716 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11517719 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1151771c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1151771f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11517722 je 0x115177bc */
  if (C.zf) goto L_115177bc;
  /* 11517728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1151772b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1151772f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11517732 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11517735 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11517738 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1151773b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1151773e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11517741 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11517744 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517747 jne 0x115177ad */
  if (!C.zf) goto L_115177ad;
  /* 11517749 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1151774d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517750 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11517753 jge 0x1151777e */
  if ((C.sf==C.of)) goto L_1151777e;
  /* 11517755 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11517757 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1151775b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1151775f jne 0x1151776c */
  if (!C.zf) goto L_1151776c;
  /* 11517761 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11517766 mov ecx, esi */
  ECX = (ESI);
  /* 11517768 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1151776a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1151776c:;
  /* 1151776c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11517771 mov ecx, esi */
  ECX = (ESI);
  /* 11517773 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11517775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11517778 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1151777c jmp 0x115177ad */
  goto L_115177ad;
L_1151777e:;
  /* 1151777e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11517780 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11517784 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11517788 jne 0x11517797 */
  if (!C.zf) goto L_11517797;
  /* 1151778a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1151778d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11517792 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11517794 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11517797:;
  /* 11517797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1151779a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 115177a1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 115177a4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 115177a9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 115177ab or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_115177ad:;
  /* 115177ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_115177b0:;
  /* 115177b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115177b2 je 0x115177bf */
  if (C.zf) goto L_115177bf;
  /* 115177b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115177b6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 115177ba jmp 0x115177bf */
  goto L_115177bf;
L_115177bc:;
  /* 115177bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_115177bf:;
  /* 115177bf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 115177c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115177c4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 115177c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115177c9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 115177cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115177d0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 115177d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115177d4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 115177d7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 115177d9 jne 0x115177f5 */
  if (!C.zf) goto L_115177f5;
  /* 115177db cmp ebx, dword ptr [0x1151b88c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1151b88c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115177e1 jne 0x115177f5 */
  if (!C.zf) goto L_115177f5;
  /* 115177e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115177e6 cmp ecx, dword ptr [0x1151b884] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1151b884))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115177ec jne 0x115177f5 */
  if (!C.zf) goto L_115177f5;
  /* 115177ee and dword ptr [0x1151b88c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1151b88c)))&(0x0u); w32((uint32_t)(0x1151b88c), (_r)); fl_logic(_r,32); }
L_115177f5:;
  /* 115177f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115177f8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115177fa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_115177fd:;
  /* 115177fd pop edi */
  EDI = (pop32());
  /* 115177fe pop esi */
  ESI = (pop32());
  /* 115177ff pop ebx */
  EBX = (pop32());
  /* 11517800 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11517801 ret  */
  ESPCHK(0x115174f9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007802 @ 0x11517802 (177 bytes, 53 insns) */
void f_11517802(void) {
  FTRACE(0x11517802u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517802 mov eax, dword ptr [0x1151b890] */
  EAX = (r32((uint32_t)(0x1151b890)));
  /* 11517807 mov ecx, dword ptr [0x1151b880] */
  ECX = (r32((uint32_t)(0x1151b880)));
  /* 1151780d push esi */
  push32((uint32_t)(ESI));
  /* 1151780e push edi */
  push32((uint32_t)(EDI));
  /* 1151780f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11517811 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517813 jne 0x11517845 */
  if (!C.zf) goto L_11517845;
  /* 11517815 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11517819 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1151781c push eax */
  push32((uint32_t)(EAX));
  /* 1151781d push dword ptr [0x1151b894] */
  push32((uint32_t)(r32((uint32_t)(0x1151b894))));
  /* 11517823 push edi */
  push32((uint32_t)(EDI));
  /* 11517824 push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 1151782a call dword ptr [0x11519020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519020))), 0x11517830u);
  /* 11517830 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517832 je 0x11517895 */
  if (C.zf) goto L_11517895;
  /* 11517834 add dword ptr [0x1151b880], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1151b880))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1151b880), (_r)); fl_add(_a,_b,_r,32); }
  /* 1151783b mov dword ptr [0x1151b894], eax */
  w32((uint32_t)(0x1151b894), (EAX));
  /* 11517840 mov eax, dword ptr [0x1151b890] */
  EAX = (r32((uint32_t)(0x1151b890)));
L_11517845:;
  /* 11517845 mov ecx, dword ptr [0x1151b894] */
  ECX = (r32((uint32_t)(0x1151b894)));
  /* 1151784b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11517850 push 8 */
  push32((uint32_t)(0x8u));
  /* 11517852 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11517855 push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 1151785b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1151785e call dword ptr [0x11519034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519034))), 0x11517864u);
  /* 11517864 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517866 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11517869 je 0x11517895 */
  if (C.zf) goto L_11517895;
  /* 1151786b push 4 */
  push32((uint32_t)(0x4u));
  /* 1151786d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11517872 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11517877 push edi */
  push32((uint32_t)(EDI));
  /* 11517878 call dword ptr [0x11519024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519024))), 0x1151787eu);
  /* 1151787e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517880 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11517883 jne 0x11517899 */
  if (!C.zf) goto L_11517899;
  /* 11517885 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11517888 push edi */
  push32((uint32_t)(EDI));
  /* 11517889 push dword ptr [0x1151bac8] */
  push32((uint32_t)(r32((uint32_t)(0x1151bac8))));
  /* 1151788f call dword ptr [0x11519044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519044))), 0x11517895u);
L_11517895:;
  /* 11517895 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11517897 jmp 0x115178b0 */
  goto L_115178b0;
L_11517899:;
  /* 11517899 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1151789d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1151789f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 115178a2 inc dword ptr [0x1151b890] */
  { uint32_t _r=(r32((uint32_t)(0x1151b890)))+1; w32((uint32_t)(0x1151b890), (_r)); fl_inc(_r,32); }
  /* 115178a8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 115178ab or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 115178ae mov eax, esi */
  EAX = (ESI);
L_115178b0:;
  /* 115178b0 pop edi */
  EDI = (pop32());
  /* 115178b1 pop esi */
  ESI = (pop32());
  /* 115178b2 ret  */
  ESPCHK(0x11517802u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b3 @ 0x115178b3 (251 bytes, 85 insns) */
void f_115178b3(void) {
  FTRACE(0x115178b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115178b3 push ebp */
  push32((uint32_t)(EBP));
  /* 115178b4 mov ebp, esp */
  EBP = (ESP);
  /* 115178b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115178b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115178ba push ebx */
  push32((uint32_t)(EBX));
  /* 115178bb push esi */
  push32((uint32_t)(ESI));
  /* 115178bc push edi */
  push32((uint32_t)(EDI));
  /* 115178bd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 115178c0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 115178c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_115178c5:;
  /* 115178c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115178c7 jl 0x115178ce */
  if ((C.sf!=C.of)) goto L_115178ce;
  /* 115178c9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115178cb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 115178cc jmp 0x115178c5 */
  goto L_115178c5;
L_115178ce:;
  /* 115178ce mov eax, ebx */
  EAX = (EBX);
  /* 115178d0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 115178d2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115178d8 pop edx */
  EDX = (pop32());
  /* 115178d9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 115178e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115178e3:;
  /* 115178e3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 115178e6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 115178e9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115178ec dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115178ed jne 0x115178e3 */
  if (!C.zf) goto L_115178e3;
  /* 115178ef mov edi, ebx */
  EDI = (EBX);
  /* 115178f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 115178f3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 115178f6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115178f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115178fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11517903 push edi */
  push32((uint32_t)(EDI));
  /* 11517904 call dword ptr [0x11519024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519024))), 0x1151790au);
  /* 1151790a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1151790c jne 0x11517916 */
  if (!C.zf) goto L_11517916;
  /* 1151790e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11517911 jmp 0x115179a9 */
  goto L_115179a9;
L_11517916:;
  /* 11517916 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1151791c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151791e ja 0x1151795c */
  if ((!C.cf&&!C.zf)) goto L_1151795c;
  /* 11517920 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11517923:;
  /* 11517923 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11517927 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1151792e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11517934 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1151793b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1151793d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11517943 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11517946 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11517950 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517955 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11517958 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151795a jbe 0x11517923 */
  if ((C.cf||C.zf)) goto L_11517923;
L_1151795c:;
  /* 1151795c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1151795f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11517962 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517967 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517969 pop edi */
  EDI = (pop32());
  /* 1151796a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1151796d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11517970 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11517973 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11517976 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11517979 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1151797e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11517985 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11517988 mov cl, al */
  CL = (AL);
  /* 1151798a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1151798c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1151798e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11517991 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11517994 jne 0x11517999 */
  if (!C.zf) goto L_11517999;
  /* 11517996 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11517999:;
  /* 11517999 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1151799e mov ecx, ebx */
  ECX = (EBX);
  /* 115179a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 115179a2 not edx */
  EDX = (~(EDX));
  /* 115179a4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 115179a7 mov eax, ebx */
  EAX = (EBX);
L_115179a9:;
  /* 115179a9 pop edi */
  EDI = (pop32());
  /* 115179aa pop esi */
  ESI = (pop32());
  /* 115179ab pop ebx */
  EBX = (pop32());
  /* 115179ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115179ad ret  */
  ESPCHK(0x115178b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079ae @ 0x115179ae (137 bytes, 50 insns) */
void f_115179ae(void) {
  FTRACE(0x115179aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115179ae push ebx */
  push32((uint32_t)(EBX));
  /* 115179af xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 115179b1 cmp dword ptr [0x1151b844], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1151b844))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115179b7 push esi */
  push32((uint32_t)(ESI));
  /* 115179b8 push edi */
  push32((uint32_t)(EDI));
  /* 115179b9 jne 0x115179fd */
  if (!C.zf) goto L_115179fd;
  /* 115179bb push 0x115194b0 */
  push32((uint32_t)(0x115194b0u));
  /* 115179c0 call dword ptr [0x11519014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519014))), 0x115179c6u);
  /* 115179c6 mov edi, eax */
  EDI = (EAX);
  /* 115179c8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115179ca je 0x11517a33 */
  if (C.zf) goto L_11517a33;
  /* 115179cc mov esi, dword ptr [0x11519018] */
  ESI = (r32((uint32_t)(0x11519018)));
  /* 115179d2 push 0x115194a4 */
  push32((uint32_t)(0x115194a4u));
  /* 115179d7 push edi */
  push32((uint32_t)(EDI));
  /* 115179d8 call esi */
  call_ind((uint32_t)(ESI), 0x115179dau);
  /* 115179da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115179dc mov dword ptr [0x1151b844], eax */
  w32((uint32_t)(0x1151b844), (EAX));
  /* 115179e1 je 0x11517a33 */
  if (C.zf) goto L_11517a33;
  /* 115179e3 push 0x11519494 */
  push32((uint32_t)(0x11519494u));
  /* 115179e8 push edi */
  push32((uint32_t)(EDI));
  /* 115179e9 call esi */
  call_ind((uint32_t)(ESI), 0x115179ebu);
  /* 115179eb push 0x11519480 */
  push32((uint32_t)(0x11519480u));
  /* 115179f0 push edi */
  push32((uint32_t)(EDI));
  /* 115179f1 mov dword ptr [0x1151b848], eax */
  w32((uint32_t)(0x1151b848), (EAX));
  /* 115179f6 call esi */
  call_ind((uint32_t)(ESI), 0x115179f8u);
  /* 115179f8 mov dword ptr [0x1151b84c], eax */
  w32((uint32_t)(0x1151b84c), (EAX));
L_115179fd:;
  /* 115179fd mov eax, dword ptr [0x1151b848] */
  EAX = (r32((uint32_t)(0x1151b848)));
  /* 11517a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517a04 je 0x11517a1c */
  if (C.zf) goto L_11517a1c;
  /* 11517a06 call eax */
  call_ind((uint32_t)(EAX), 0x11517a08u);
  /* 11517a08 mov ebx, eax */
  EBX = (EAX);
  /* 11517a0a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11517a0c je 0x11517a1c */
  if (C.zf) goto L_11517a1c;
  /* 11517a0e mov eax, dword ptr [0x1151b84c] */
  EAX = (r32((uint32_t)(0x1151b84c)));
  /* 11517a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517a15 je 0x11517a1c */
  if (C.zf) goto L_11517a1c;
  /* 11517a17 push ebx */
  push32((uint32_t)(EBX));
  /* 11517a18 call eax */
  call_ind((uint32_t)(EAX), 0x11517a1au);
  /* 11517a1a mov ebx, eax */
  EBX = (EAX);
L_11517a1c:;
  /* 11517a1c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11517a20 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11517a24 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11517a28 push ebx */
  push32((uint32_t)(EBX));
  /* 11517a29 call dword ptr [0x1151b844] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151b844))), 0x11517a2fu);
L_11517a2f:;
  /* 11517a2f pop edi */
  EDI = (pop32());
  /* 11517a30 pop esi */
  ESI = (pop32());
  /* 11517a31 pop ebx */
  EBX = (pop32());
  /* 11517a32 ret  */
  ESPCHK(0x115179aeu, _esp0);
  ESP += 4; return;
L_11517a33:;
  /* 11517a33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11517a35 jmp 0x11517a2f */
  goto L_11517a2f;
}

/* _strncpy @ 0x11517a40 (254 bytes, 109 insns) */
void f_11517a40(void) {
  FTRACE(0x11517a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517a40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11517a44 push edi */
  push32((uint32_t)(EDI));
  /* 11517a45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11517a47 je 0x11517ac3 */
  if (C.zf) goto L_11517ac3;
  /* 11517a49 push esi */
  push32((uint32_t)(ESI));
  /* 11517a4a push ebx */
  push32((uint32_t)(EBX));
  /* 11517a4b mov ebx, ecx */
  EBX = (ECX);
  /* 11517a4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11517a51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11517a57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11517a5b jne 0x11517a64 */
  if (!C.zf) goto L_11517a64;
  /* 11517a5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517a60 jne 0x11517ad1 */
  if (!C.zf) goto L_11517ad1;
  /* 11517a62 jmp 0x11517a85 */
  goto L_11517a85;
L_11517a64:;
  /* 11517a64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11517a66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11517a67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517a69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11517a6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517a6b je 0x11517a92 */
  if (C.zf) goto L_11517a92;
  /* 11517a6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11517a6f je 0x11517a9a */
  if (C.zf) goto L_11517a9a;
  /* 11517a71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11517a77 jne 0x11517a64 */
  if (!C.zf) goto L_11517a64;
  /* 11517a79 mov ebx, ecx */
  EBX = (ECX);
  /* 11517a7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517a7e jne 0x11517ad1 */
  if (!C.zf) goto L_11517ad1;
L_11517a80:;
  /* 11517a80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11517a83 je 0x11517a92 */
  if (C.zf) goto L_11517a92;
L_11517a85:;
  /* 11517a85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11517a87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11517a88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517a8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11517a8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11517a8d je 0x11517abe */
  if (C.zf) goto L_11517abe;
  /* 11517a8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11517a90 jne 0x11517a85 */
  if (!C.zf) goto L_11517a85;
L_11517a92:;
  /* 11517a92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11517a96 pop ebx */
  EBX = (pop32());
  /* 11517a97 pop esi */
  ESI = (pop32());
  /* 11517a98 pop edi */
  EDI = (pop32());
  /* 11517a99 ret  */
  ESPCHK(0x11517a40u, _esp0);
  ESP += 4; return;
L_11517a9a:;
  /* 11517a9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11517aa0 je 0x11517ab4 */
  if (C.zf) goto L_11517ab4;
L_11517aa2:;
  /* 11517aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517aa4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11517aa5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517aa6 je 0x11517b36 */
  if (C.zf) goto L_11517b36;
  /* 11517aac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11517ab2 jne 0x11517aa2 */
  if (!C.zf) goto L_11517aa2;
L_11517ab4:;
  /* 11517ab4 mov ebx, ecx */
  EBX = (ECX);
  /* 11517ab6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517ab9 jne 0x11517b27 */
  if (!C.zf) goto L_11517b27;
L_11517abb:;
  /* 11517abb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517abd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11517abe:;
  /* 11517abe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11517abf jne 0x11517abb */
  if (!C.zf) goto L_11517abb;
  /* 11517ac1 pop ebx */
  EBX = (pop32());
  /* 11517ac2 pop esi */
  ESI = (pop32());
L_11517ac3:;
  /* 11517ac3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11517ac7 pop edi */
  EDI = (pop32());
  /* 11517ac8 ret  */
  ESPCHK(0x11517a40u, _esp0);
  ESP += 4; return;
L_11517ac9:;
  /* 11517ac9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11517acb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517ace dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517acf je 0x11517a80 */
  if (C.zf) goto L_11517a80;
L_11517ad1:;
  /* 11517ad1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11517ad6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11517ad8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517ada xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11517add xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11517adf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11517ae1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517ae4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11517ae9 je 0x11517ac9 */
  if (C.zf) goto L_11517ac9;
  /* 11517aeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11517aed je 0x11517b1b */
  if (C.zf) goto L_11517b1b;
  /* 11517aef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11517af1 je 0x11517b11 */
  if (C.zf) goto L_11517b11;
  /* 11517af3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11517af9 je 0x11517b07 */
  if (C.zf) goto L_11517b07;
  /* 11517afb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11517b01 jne 0x11517ac9 */
  if (!C.zf) goto L_11517ac9;
  /* 11517b03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11517b05 jmp 0x11517b1f */
  goto L_11517b1f;
L_11517b07:;
  /* 11517b07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11517b0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11517b0f jmp 0x11517b1f */
  goto L_11517b1f;
L_11517b11:;
  /* 11517b11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11517b17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11517b19 jmp 0x11517b1f */
  goto L_11517b1f;
L_11517b1b:;
  /* 11517b1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11517b1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11517b1f:;
  /* 11517b1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11517b24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517b25 je 0x11517b31 */
  if (C.zf) goto L_11517b31;
L_11517b27:;
  /* 11517b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11517b29:;
  /* 11517b29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11517b2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517b2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517b2f jne 0x11517b29 */
  if (!C.zf) goto L_11517b29;
L_11517b31:;
  /* 11517b31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11517b34 jne 0x11517abb */
  if (!C.zf) goto L_11517abb;
L_11517b36:;
  /* 11517b36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11517b3a pop ebx */
  EBX = (pop32());
  /* 11517b3b pop esi */
  ESI = (pop32());
  /* 11517b3c pop edi */
  EDI = (pop32());
  /* 11517b3d ret  */
  ESPCHK(0x11517a40u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11517b40 (88 bytes, 40 insns) */
void f_11517b40(void) {
  FTRACE(0x11517b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517b40 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11517b44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11517b48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11517b4a je 0x11517b93 */
  if (C.zf) goto L_11517b93;
  /* 11517b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11517b4e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11517b52 push edi */
  push32((uint32_t)(EDI));
  /* 11517b53 mov edi, ecx */
  EDI = (ECX);
  /* 11517b55 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517b58 jb 0x11517b87 */
  if (C.cf) goto L_11517b87;
  /* 11517b5a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11517b5c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11517b5f je 0x11517b69 */
  if (C.zf) goto L_11517b69;
  /* 11517b61 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11517b63:;
  /* 11517b63 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517b65 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11517b66 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517b67 jne 0x11517b63 */
  if (!C.zf) goto L_11517b63;
L_11517b69:;
  /* 11517b69 mov ecx, eax */
  ECX = (EAX);
  /* 11517b6b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11517b6e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517b70 mov ecx, eax */
  ECX = (EAX);
  /* 11517b72 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11517b75 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517b77 mov ecx, edx */
  ECX = (EDX);
  /* 11517b79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11517b7c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517b7f je 0x11517b87 */
  if (C.zf) goto L_11517b87;
  /* 11517b81 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11517b83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11517b85 je 0x11517b8d */
  if (C.zf) goto L_11517b8d;
L_11517b87:;
  /* 11517b87 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517b89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11517b8a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11517b8b jne 0x11517b87 */
  if (!C.zf) goto L_11517b87;
L_11517b8d:;
  /* 11517b8d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11517b91 pop edi */
  EDI = (pop32());
  /* 11517b92 ret  */
  ESPCHK(0x11517b40u, _esp0);
  ESP += 4; return;
L_11517b93:;
  /* 11517b93 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11517b97 ret  */
  ESPCHK(0x11517b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b98 @ 0x11517b98 (27 bytes, 13 insns) */
void f_11517b98(void) {
  FTRACE(0x11517b98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517b98 mov eax, dword ptr [0x1151b850] */
  EAX = (r32((uint32_t)(0x1151b850)));
  /* 11517b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517b9f je 0x11517bb0 */
  if (C.zf) goto L_11517bb0;
  /* 11517ba1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11517ba5 call eax */
  call_ind((uint32_t)(EAX), 0x11517ba7u);
  /* 11517ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517ba9 pop ecx */
  ECX = (pop32());
  /* 11517baa je 0x11517bb0 */
  if (C.zf) goto L_11517bb0;
  /* 11517bac push 1 */
  push32((uint32_t)(0x1u));
  /* 11517bae pop eax */
  EAX = (pop32());
  /* 11517baf ret  */
  ESPCHK(0x11517b98u, _esp0);
  ESP += 4; return;
L_11517bb0:;
  /* 11517bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11517bb2 ret  */
  ESPCHK(0x11517b98u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb3 @ 0x11517bb3 (511 bytes, 193 insns) */
void f_11517bb3(void) {
  FTRACE(0x11517bb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517bb3 push ebp */
  push32((uint32_t)(EBP));
  /* 11517bb4 mov ebp, esp */
  EBP = (ESP);
  /* 11517bb6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11517bb8 push 0x115194c8 */
  push32((uint32_t)(0x115194c8u));
  /* 11517bbd push 0x11518380 */
  push32((uint32_t)(0x11518380u));
  /* 11517bc2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11517bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11517bc9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11517bd0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11517bd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11517bd4 push esi */
  push32((uint32_t)(ESI));
  /* 11517bd5 push edi */
  push32((uint32_t)(EDI));
  /* 11517bd6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11517bd9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11517bdb cmp dword ptr [0x1151b878], edi */
  { uint32_t _a=(r32((uint32_t)(0x1151b878))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517be1 jne 0x11517c29 */
  if (!C.zf) goto L_11517c29;
  /* 11517be3 push edi */
  push32((uint32_t)(EDI));
  /* 11517be4 push edi */
  push32((uint32_t)(EDI));
  /* 11517be5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517be7 pop ebx */
  EBX = (pop32());
  /* 11517be8 push ebx */
  push32((uint32_t)(EBX));
  /* 11517be9 push 0x115194c0 */
  push32((uint32_t)(0x115194c0u));
  /* 11517bee mov esi, 0x100 */
  ESI = (0x100u);
  /* 11517bf3 push esi */
  push32((uint32_t)(ESI));
  /* 11517bf4 push edi */
  push32((uint32_t)(EDI));
  /* 11517bf5 call dword ptr [0x11519008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519008))), 0x11517bfbu);
  /* 11517bfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517bfd je 0x11517c07 */
  if (C.zf) goto L_11517c07;
  /* 11517bff mov dword ptr [0x1151b878], ebx */
  w32((uint32_t)(0x1151b878), (EBX));
  /* 11517c05 jmp 0x11517c29 */
  goto L_11517c29;
L_11517c07:;
  /* 11517c07 push edi */
  push32((uint32_t)(EDI));
  /* 11517c08 push edi */
  push32((uint32_t)(EDI));
  /* 11517c09 push ebx */
  push32((uint32_t)(EBX));
  /* 11517c0a push 0x115194bc */
  push32((uint32_t)(0x115194bcu));
  /* 11517c0f push esi */
  push32((uint32_t)(ESI));
  /* 11517c10 push edi */
  push32((uint32_t)(EDI));
  /* 11517c11 call dword ptr [0x1151900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151900c))), 0x11517c17u);
  /* 11517c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517c19 je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517c1f mov dword ptr [0x1151b878], 2 */
  w32((uint32_t)(0x1151b878), (0x2u));
L_11517c29:;
  /* 11517c29 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517c2c jle 0x11517c3e */
  if ((C.zf||C.sf!=C.of)) goto L_11517c3e;
  /* 11517c2e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11517c31 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517c34 call 0x11517dd7 */
  push32(0x11517c39u); f_11517dd7();
  /* 11517c39 pop ecx */
  ECX = (pop32());
  /* 11517c3a pop ecx */
  ECX = (pop32());
  /* 11517c3b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11517c3e:;
  /* 11517c3e mov eax, dword ptr [0x1151b878] */
  EAX = (r32((uint32_t)(0x1151b878)));
  /* 11517c43 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517c46 jne 0x11517c65 */
  if (!C.zf) goto L_11517c65;
  /* 11517c48 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11517c4b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11517c4e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11517c51 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517c54 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517c57 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11517c5a call dword ptr [0x1151900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151900c))), 0x11517c60u);
  /* 11517c60 jmp 0x11517d43 */
  goto L_11517d43;
L_11517c65:;
  /* 11517c65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517c68 jne 0x11517d41 */
  if (!C.zf) goto L_11517d41;
  /* 11517c6e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517c71 jne 0x11517c7b */
  if (!C.zf) goto L_11517c7b;
  /* 11517c73 mov eax, dword ptr [0x1151b870] */
  EAX = (r32((uint32_t)(0x1151b870)));
  /* 11517c78 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11517c7b:;
  /* 11517c7b push edi */
  push32((uint32_t)(EDI));
  /* 11517c7c push edi */
  push32((uint32_t)(EDI));
  /* 11517c7d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11517c80 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517c83 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11517c86 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11517c88 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11517c8a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11517c8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11517c8e push eax */
  push32((uint32_t)(EAX));
  /* 11517c8f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11517c92 call dword ptr [0x1151901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151901c))), 0x11517c98u);
  /* 11517c98 mov ebx, eax */
  EBX = (EAX);
  /* 11517c9a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11517c9d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517c9f je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517ca5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11517ca8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11517cab add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517cae and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11517cb0 call 0x11518460 */
  push32(0x11517cb5u); f_11518460();
  /* 11517cb5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11517cb8 mov eax, esp */
  EAX = (ESP);
  /* 11517cba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11517cbd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11517cc1 jmp 0x11517cd6 */
  goto L_11517cd6;
  /* 11517cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517cc5 pop eax */
  EAX = (pop32());
  /* 11517cc6 ret  */
  ESPCHK(0x11517bb3u, _esp0);
  ESP += 4; return;
  /* 11517cc7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11517cca xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11517ccc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11517ccf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11517cd3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11517cd6:;
  /* 11517cd6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517cd9 je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517cdb push ebx */
  push32((uint32_t)(EBX));
  /* 11517cdc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11517cdf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11517ce2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517ce5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517ce7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11517cea call dword ptr [0x1151901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151901c))), 0x11517cf0u);
  /* 11517cf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517cf2 je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11517cf5 push edi */
  push32((uint32_t)(EDI));
  /* 11517cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11517cf7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11517cfa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517cfd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11517d00 call dword ptr [0x11519008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519008))), 0x11517d06u);
  /* 11517d06 mov esi, eax */
  ESI = (EAX);
  /* 11517d08 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11517d0b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517d0d je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517d0f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11517d13 je 0x11517d55 */
  if (C.zf) goto L_11517d55;
  /* 11517d15 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517d18 je 0x11517dd0 */
  if (C.zf) goto L_11517dd0;
  /* 11517d1e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517d21 jg 0x11517d41 */
  if ((!C.zf&&C.sf==C.of)) goto L_11517d41;
  /* 11517d23 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11517d26 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11517d29 push ebx */
  push32((uint32_t)(EBX));
  /* 11517d2a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11517d2d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517d30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11517d33 call dword ptr [0x11519008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519008))), 0x11517d39u);
  /* 11517d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517d3b jne 0x11517dd0 */
  if (!C.zf) goto L_11517dd0;
L_11517d41:;
  /* 11517d41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11517d43:;
  /* 11517d43 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11517d46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11517d49 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11517d50 pop edi */
  EDI = (pop32());
  /* 11517d51 pop esi */
  ESI = (pop32());
  /* 11517d52 pop ebx */
  EBX = (pop32());
  /* 11517d53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11517d54 ret  */
  ESPCHK(0x11517bb3u, _esp0);
  ESP += 4; return;
L_11517d55:;
  /* 11517d55 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11517d5c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11517d5f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517d62 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11517d64 call 0x11518460 */
  push32(0x11517d69u); f_11518460();
  /* 11517d69 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11517d6c mov ebx, esp */
  EBX = (ESP);
  /* 11517d6e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11517d71 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11517d75 jmp 0x11517d89 */
  goto L_11517d89;
  /* 11517d77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517d79 pop eax */
  EAX = (pop32());
  /* 11517d7a ret  */
  ESPCHK(0x11517bb3u, _esp0);
  ESP += 4; return;
  /* 11517d7b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11517d7e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11517d80 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11517d82 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11517d86 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11517d89:;
  /* 11517d89 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517d8b je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517d8d push esi */
  push32((uint32_t)(ESI));
  /* 11517d8e push ebx */
  push32((uint32_t)(EBX));
  /* 11517d8f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11517d92 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11517d95 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517d98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11517d9b call dword ptr [0x11519008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519008))), 0x11517da1u);
  /* 11517da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517da3 je 0x11517d41 */
  if (C.zf) goto L_11517d41;
  /* 11517da5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517da8 push edi */
  push32((uint32_t)(EDI));
  /* 11517da9 push edi */
  push32((uint32_t)(EDI));
  /* 11517daa jne 0x11517db0 */
  if (!C.zf) goto L_11517db0;
  /* 11517dac push edi */
  push32((uint32_t)(EDI));
  /* 11517dad push edi */
  push32((uint32_t)(EDI));
  /* 11517dae jmp 0x11517db6 */
  goto L_11517db6;
L_11517db0:;
  /* 11517db0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11517db3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11517db6:;
  /* 11517db6 push esi */
  push32((uint32_t)(ESI));
  /* 11517db7 push ebx */
  push32((uint32_t)(EBX));
  /* 11517db8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11517dbd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11517dc0 call dword ptr [0x1151905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151905c))), 0x11517dc6u);
  /* 11517dc6 mov esi, eax */
  ESI = (EAX);
  /* 11517dc8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517dca je 0x11517d41 */
  if (C.zf) goto L_11517d41;
L_11517dd0:;
  /* 11517dd0 mov eax, esi */
  EAX = (ESI);
  /* 11517dd2 jmp 0x11517d43 */
  goto L_11517d43;
}

/* FUN_10007dd7 @ 0x11517dd7 (43 bytes, 20 insns) */
void f_11517dd7(void) {
  FTRACE(0x11517dd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517dd7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11517ddb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11517ddf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11517de1 push esi */
  push32((uint32_t)(ESI));
  /* 11517de2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11517de5 je 0x11517df4 */
  if (C.zf) goto L_11517df4;
L_11517de7:;
  /* 11517de7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11517dea je 0x11517df4 */
  if (C.zf) goto L_11517df4;
  /* 11517dec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11517ded mov esi, ecx */
  ESI = (ECX);
  /* 11517def dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11517df0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11517df2 jne 0x11517de7 */
  if (!C.zf) goto L_11517de7;
L_11517df4:;
  /* 11517df4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11517df7 pop esi */
  ESI = (pop32());
  /* 11517df8 jne 0x11517dff */
  if (!C.zf) goto L_11517dff;
  /* 11517dfa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11517dfe ret  */
  ESPCHK(0x11517dd7u, _esp0);
  ESP += 4; return;
L_11517dff:;
  /* 11517dff mov eax, edx */
  EAX = (EDX);
  /* 11517e01 ret  */
  ESPCHK(0x11517dd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e02 @ 0x11517e02 (318 bytes, 123 insns) */
void f_11517e02(void) {
  FTRACE(0x11517e02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517e02 push ebp */
  push32((uint32_t)(EBP));
  /* 11517e03 mov ebp, esp */
  EBP = (ESP);
  /* 11517e05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11517e07 push 0x115194e0 */
  push32((uint32_t)(0x115194e0u));
  /* 11517e0c push 0x11518380 */
  push32((uint32_t)(0x11518380u));
  /* 11517e11 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11517e17 push eax */
  push32((uint32_t)(EAX));
  /* 11517e18 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11517e1f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11517e22 push ebx */
  push32((uint32_t)(EBX));
  /* 11517e23 push esi */
  push32((uint32_t)(ESI));
  /* 11517e24 push edi */
  push32((uint32_t)(EDI));
  /* 11517e25 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11517e28 mov eax, dword ptr [0x1151b87c] */
  EAX = (r32((uint32_t)(0x1151b87c)));
  /* 11517e2d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11517e2f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517e31 jne 0x11517e71 */
  if (!C.zf) goto L_11517e71;
  /* 11517e33 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11517e36 push eax */
  push32((uint32_t)(EAX));
  /* 11517e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517e39 pop esi */
  ESI = (pop32());
  /* 11517e3a push esi */
  push32((uint32_t)(ESI));
  /* 11517e3b push 0x115194c0 */
  push32((uint32_t)(0x115194c0u));
  /* 11517e40 push esi */
  push32((uint32_t)(ESI));
  /* 11517e41 call dword ptr [0x11519004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519004))), 0x11517e47u);
  /* 11517e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517e49 je 0x11517e4f */
  if (C.zf) goto L_11517e4f;
  /* 11517e4b mov eax, esi */
  EAX = (ESI);
  /* 11517e4d jmp 0x11517e6c */
  goto L_11517e6c;
L_11517e4f:;
  /* 11517e4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11517e52 push eax */
  push32((uint32_t)(EAX));
  /* 11517e53 push esi */
  push32((uint32_t)(ESI));
  /* 11517e54 push 0x115194bc */
  push32((uint32_t)(0x115194bcu));
  /* 11517e59 push esi */
  push32((uint32_t)(ESI));
  /* 11517e5a push ebx */
  push32((uint32_t)(EBX));
  /* 11517e5b call dword ptr [0x11519010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519010))), 0x11517e61u);
  /* 11517e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11517e63 je 0x11517f37 */
  if (C.zf) goto L_11517f37;
  /* 11517e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11517e6b pop eax */
  EAX = (pop32());
L_11517e6c:;
  /* 11517e6c mov dword ptr [0x1151b87c], eax */
  w32((uint32_t)(0x1151b87c), (EAX));
L_11517e71:;
  /* 11517e71 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517e74 jne 0x11517e9a */
  if (!C.zf) goto L_11517e9a;
  /* 11517e76 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11517e79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517e7b jne 0x11517e82 */
  if (!C.zf) goto L_11517e82;
  /* 11517e7d mov eax, dword ptr [0x1151b860] */
  EAX = (r32((uint32_t)(0x1151b860)));
L_11517e82:;
  /* 11517e82 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11517e85 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517e88 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517e8b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11517e8e push eax */
  push32((uint32_t)(EAX));
  /* 11517e8f call dword ptr [0x11519010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519010))), 0x11517e95u);
  /* 11517e95 jmp 0x11517f39 */
  goto L_11517f39;
L_11517e9a:;
  /* 11517e9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517e9d jne 0x11517f37 */
  if (!C.zf) goto L_11517f37;
  /* 11517ea3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517ea6 jne 0x11517eb0 */
  if (!C.zf) goto L_11517eb0;
  /* 11517ea8 mov eax, dword ptr [0x1151b870] */
  EAX = (r32((uint32_t)(0x1151b870)));
  /* 11517ead mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11517eb0:;
  /* 11517eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11517eb1 push ebx */
  push32((uint32_t)(EBX));
  /* 11517eb2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517eb5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517eb8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11517ebb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11517ebd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11517ebf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11517ec2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11517ec3 push eax */
  push32((uint32_t)(EAX));
  /* 11517ec4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11517ec7 call dword ptr [0x1151901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151901c))), 0x11517ecdu);
  /* 11517ecd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11517ed0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517ed2 je 0x11517f37 */
  if (C.zf) goto L_11517f37;
  /* 11517ed4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11517ed7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11517eda mov eax, edi */
  EAX = (EDI);
  /* 11517edc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517edf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11517ee1 call 0x11518460 */
  push32(0x11517ee6u); f_11518460();
  /* 11517ee6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11517ee9 mov esi, esp */
  ESI = (ESP);
  /* 11517eeb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11517eee push edi */
  push32((uint32_t)(EDI));
  /* 11517eef push ebx */
  push32((uint32_t)(EBX));
  /* 11517ef0 push esi */
  push32((uint32_t)(ESI));
  /* 11517ef1 call 0x11517b40 */
  push32(0x11517ef6u); f_11517b40();
  /* 11517ef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11517ef9 jmp 0x11517f06 */
  goto L_11517f06;
  /* 11517efb push 1 */
  push32((uint32_t)(0x1u));
  /* 11517efd pop eax */
  EAX = (pop32());
  /* 11517efe ret  */
  ESPCHK(0x11517e02u, _esp0);
  ESP += 4; return;
  /* 11517eff mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11517f02 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11517f04 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11517f06:;
  /* 11517f06 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11517f0a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517f0c je 0x11517f37 */
  if (C.zf) goto L_11517f37;
  /* 11517f0e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11517f11 push esi */
  push32((uint32_t)(ESI));
  /* 11517f12 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11517f15 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11517f18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11517f1a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11517f1d call dword ptr [0x1151901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1151901c))), 0x11517f23u);
  /* 11517f23 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517f25 je 0x11517f37 */
  if (C.zf) goto L_11517f37;
  /* 11517f27 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11517f2a push eax */
  push32((uint32_t)(EAX));
  /* 11517f2b push esi */
  push32((uint32_t)(ESI));
  /* 11517f2c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11517f2f call dword ptr [0x11519004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11519004))), 0x11517f35u);
  /* 11517f35 jmp 0x11517f39 */
  goto L_11517f39;
L_11517f37:;
  /* 11517f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11517f39:;
  /* 11517f39 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11517f3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11517f3f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11517f46 pop edi */
  EDI = (pop32());
  /* 11517f47 pop esi */
  ESI = (pop32());
  /* 11517f48 pop ebx */
  EBX = (pop32());
  /* 11517f49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11517f4a ret  */
  ESPCHK(0x11517e02u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x11517f50 (664 bytes, 261 insns) [15 switch table(s)] */
void f_11517f50(void) {
  FTRACE(0x11517f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11517f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11517f51 mov ebp, esp */
  EBP = (ESP);
  /* 11517f53 push edi */
  push32((uint32_t)(EDI));
  /* 11517f54 push esi */
  push32((uint32_t)(ESI));
  /* 11517f55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11517f58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11517f5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11517f5e mov eax, ecx */
  EAX = (ECX);
  /* 11517f60 mov edx, ecx */
  EDX = (ECX);
  /* 11517f62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517f64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517f66 jbe 0x11517f70 */
  if ((C.cf||C.zf)) goto L_11517f70;
  /* 11517f68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517f6a jb 0x115180e8 */
  if (C.cf) goto L_115180e8;
L_11517f70:;
  /* 11517f70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11517f76 jne 0x11517f8c */
  if (!C.zf) goto L_11517f8c;
  /* 11517f78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517f7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11517f7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517f81 jb 0x11517fac */
  if (C.cf) goto L_11517fac;
  /* 11517f83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11517f85 jmp dword ptr [edx*4 + 0x11518098] */
  switch (EDX) {
    case 0: goto L_115180a8;
    case 1: goto L_115180b0;
    case 2: goto L_115180bc;
    case 3: goto L_115180d0;
    default: x86_unimpl("switch@0x11517f85 out of table"); return;
  }
L_11517f8c:;
  /* 11517f8c mov eax, edi */
  EAX = (EDI);
  /* 11517f8e mov edx, 3 */
  EDX = (0x3u);
  /* 11517f93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11517f96 jb 0x11517fa4 */
  if (C.cf) goto L_11517fa4;
  /* 11517f98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11517f9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11517f9d jmp dword ptr [eax*4 + 0x11517fb0] */
  switch (EAX) {
    case 1: goto L_11517fc0;
    case 2: goto L_11517fec;
    case 3: goto L_11518010;
    default: x86_unimpl("switch@0x11517f9d out of table"); return;
  }
L_11517fa4:;
  /* 11517fa4 jmp dword ptr [ecx*4 + 0x115180a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x115180a8)))); return;
  /* 11517fab nop  */
  /* nop */
L_11517fac:;
  /* 11517fac jmp dword ptr [ecx*4 + 0x1151802c] */
  switch (ECX) {
    case 0: goto L_1151808f;
    case 1: goto L_1151807c;
    case 2: goto L_11518074;
    case 3: goto L_1151806c;
    case 4: goto L_11518064;
    case 5: goto L_1151805c;
    case 6: goto L_11518054;
    case 7: goto L_1151804c;
    default: x86_unimpl("switch@0x11517fac out of table"); return;
  }
  /* 11517fb3 nop  */
  /* nop */
L_11517fc0:;
  /* 11517fc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11517fc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11517fc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517fc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11517fc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11517fcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11517fcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517fd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11517fd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517fd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517fdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11517fde jb 0x11517fac */
  if (C.cf) goto L_11517fac;
  /* 11517fe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11517fe2 jmp dword ptr [edx*4 + 0x11518098] */
  switch (EDX) {
    case 0: goto L_115180a8;
    case 1: goto L_115180b0;
    case 2: goto L_115180bc;
    case 3: goto L_115180d0;
    default: x86_unimpl("switch@0x11517fe2 out of table"); return;
  }
  /* 11517fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11517fec:;
  /* 11517fec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11517fee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11517ff0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11517ff2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11517ff5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11517ff8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11517ffb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11517ffe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11518001 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11518004 jb 0x11517fac */
  if (C.cf) goto L_11517fac;
  /* 11518006 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11518008 jmp dword ptr [edx*4 + 0x11518098] */
  switch (EDX) {
    case 0: goto L_115180a8;
    case 1: goto L_115180b0;
    case 2: goto L_115180bc;
    case 3: goto L_115180d0;
    default: x86_unimpl("switch@0x11518008 out of table"); return;
  }
  /* 1151800f nop  */
  /* nop */
L_11518010:;
  /* 11518010 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11518012 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11518014 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11518016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11518017 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1151801a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1151801b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151801e jb 0x11517fac */
  if (C.cf) goto L_11517fac;
  /* 11518020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11518022 jmp dword ptr [edx*4 + 0x11518098] */
  switch (EDX) {
    case 0: goto L_115180a8;
    case 1: goto L_115180b0;
    case 2: goto L_115180bc;
    case 3: goto L_115180d0;
    default: x86_unimpl("switch@0x11518022 out of table"); return;
  }
  /* 11518029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1151804c:;
  /* 1151804c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11518050 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11518054:;
  /* 11518054 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11518058 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1151805c:;
  /* 1151805c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11518060 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11518064:;
  /* 11518064 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11518068 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1151806c:;
  /* 1151806c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11518070 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11518074:;
  /* 11518074 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11518078 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1151807c:;
  /* 1151807c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11518080 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11518084 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1151808b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1151808d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1151808f:;
  /* 1151808f jmp dword ptr [edx*4 + 0x11518098] */
  switch (EDX) {
    case 0: goto L_115180a8;
    case 1: goto L_115180b0;
    case 2: goto L_115180bc;
    case 3: goto L_115180d0;
    default: x86_unimpl("switch@0x1151808f out of table"); return;
  }
  /* 11518096 mov edi, edi */
  EDI = (EDI);
L_115180a8:;
  /* 115180a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115180ab pop esi */
  ESI = (pop32());
  /* 115180ac pop edi */
  EDI = (pop32());
  /* 115180ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115180ae ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 115180af nop  */
  /* nop */
L_115180b0:;
  /* 115180b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115180b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115180b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115180b7 pop esi */
  ESI = (pop32());
  /* 115180b8 pop edi */
  EDI = (pop32());
  /* 115180b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115180ba ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 115180bb nop  */
  /* nop */
L_115180bc:;
  /* 115180bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115180be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115180c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115180c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115180c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115180c9 pop esi */
  ESI = (pop32());
  /* 115180ca pop edi */
  EDI = (pop32());
  /* 115180cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115180cc ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 115180cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_115180d0:;
  /* 115180d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115180d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115180d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115180d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115180da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 115180dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 115180e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115180e3 pop esi */
  ESI = (pop32());
  /* 115180e4 pop edi */
  EDI = (pop32());
  /* 115180e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115180e6 ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 115180e7 nop  */
  /* nop */
L_115180e8:;
  /* 115180e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 115180ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 115180f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115180f6 jne 0x1151811c */
  if (!C.zf) goto L_1151811c;
  /* 115180f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115180fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115180fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11518101 jb 0x11518110 */
  if (C.cf) goto L_11518110;
  /* 11518103 std  */
  C.df=1;
  /* 11518104 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11518106 cld  */
  C.df=0;
  /* 11518107 jmp dword ptr [edx*4 + 0x11518230] */
  switch (EDX) {
    case 0: goto L_11518240;
    case 1: goto L_11518248;
    case 2: goto L_11518258;
    case 3: goto L_1151826c;
    default: x86_unimpl("switch@0x11518107 out of table"); return;
  }
  /* 1151810e mov edi, edi */
  EDI = (EDI);
L_11518110:;
  /* 11518110 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11518112 jmp dword ptr [ecx*4 + 0x115181e0] */
  switch (ECX) {
    case 0: goto L_11518227;
    default: x86_unimpl("switch@0x11518112 out of table"); return;
  }
  /* 11518119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1151811c:;
  /* 1151811c mov eax, edi */
  EAX = (EDI);
  /* 1151811e mov edx, 3 */
  EDX = (0x3u);
  /* 11518123 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11518126 jb 0x11518134 */
  if (C.cf) goto L_11518134;
  /* 11518128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1151812b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151812d jmp dword ptr [eax*4 + 0x11518138] */
  switch (EAX) {
    case 1: goto L_11518148;
    case 2: goto L_11518168;
    case 3: goto L_11518190;
    default: x86_unimpl("switch@0x1151812d out of table"); return;
  }
L_11518134:;
  /* 11518134 jmp dword ptr [ecx*4 + 0x11518230] */
  switch (ECX) {
    case 0: goto L_11518240;
    case 1: goto L_11518248;
    case 2: goto L_11518258;
    case 3: goto L_1151826c;
    default: x86_unimpl("switch@0x11518134 out of table"); return;
  }
  /* 1151813b nop  */
  /* nop */
L_11518148:;
  /* 11518148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151814b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1151814d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11518150 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11518151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11518154 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11518155 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11518158 jb 0x11518110 */
  if (C.cf) goto L_11518110;
  /* 1151815a std  */
  C.df=1;
  /* 1151815b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1151815d cld  */
  C.df=0;
  /* 1151815e jmp dword ptr [edx*4 + 0x11518230] */
  switch (EDX) {
    case 0: goto L_11518240;
    case 1: goto L_11518248;
    case 2: goto L_11518258;
    case 3: goto L_1151826c;
    default: x86_unimpl("switch@0x1151815e out of table"); return;
  }
  /* 11518165 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11518168:;
  /* 11518168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151816b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1151816d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11518170 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11518173 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11518176 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11518179 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151817c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1151817f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11518182 jb 0x11518110 */
  if (C.cf) goto L_11518110;
  /* 11518184 std  */
  C.df=1;
  /* 11518185 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11518187 cld  */
  C.df=0;
  /* 11518188 jmp dword ptr [edx*4 + 0x11518230] */
  switch (EDX) {
    case 0: goto L_11518240;
    case 1: goto L_11518248;
    case 2: goto L_11518258;
    case 3: goto L_1151826c;
    default: x86_unimpl("switch@0x11518188 out of table"); return;
  }
  /* 1151818f nop  */
  /* nop */
L_11518190:;
  /* 11518190 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11518193 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11518195 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11518198 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1151819b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1151819e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 115181a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115181a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 115181a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115181aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 115181ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115181b0 jb 0x11518110 */
  if (C.cf) goto L_11518110;
  /* 115181b6 std  */
  C.df=1;
  /* 115181b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 115181b9 cld  */
  C.df=0;
  /* 115181ba jmp dword ptr [edx*4 + 0x11518230] */
  switch (EDX) {
    case 0: goto L_11518240;
    case 1: goto L_11518248;
    case 2: goto L_11518258;
    case 3: goto L_1151826c;
    default: x86_unimpl("switch@0x115181ba out of table"); return;
  }
  /* 115181c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 115181c4 in al, 0x81 */
  x86_unimpl("in @ 0x115181c4");
  /* 115181c6 push ecx */
  push32((uint32_t)(ECX));
  /* 115181c7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115181c9 adc dword ptr [ecx + 0x11], 0x115181f4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x11))),_b=(0x115181f4u),_r=_a+_b+C.cf; w32((uint32_t)(ECX + 0x11), (_r)); fl_add(_a,_b,_r,32); }
  /* 115181d0 cld  */
  C.df=0;
  /* 115181d1 adc dword ptr [ecx + 0x11], 0x11518204 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x11))),_b=(0x11518204u),_r=_a+_b+C.cf; w32((uint32_t)(ECX + 0x11), (_r)); fl_add(_a,_b,_r,32); }
  /* 115181d8 or al, 0x82 */
  { uint32_t _r=(AL)|(0x82u); AL = (_r); fl_logic(_r,8); }
  /* 115181da push ecx */
  push32((uint32_t)(ECX));
  /* 115181db adc dword ptr [edx + eax*4], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EAX*4))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EAX*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 115181de push ecx */
  push32((uint32_t)(ECX));
  /* 115181e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 115181e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 115181ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 115181f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 115181f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 115181f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 115181fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11518200 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11518204 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11518208 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1151820c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11518210 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11518214 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11518218 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1151821c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11518223 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11518225 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11518227:;
  /* 11518227 jmp dword ptr [edx*4 + 0x11518230] */
  switch (EDX) {
    case 0: goto L_11518240;
    case 1: goto L_11518248;
    case 2: goto L_11518258;
    case 3: goto L_1151826c;
    default: x86_unimpl("switch@0x11518227 out of table"); return;
  }
  /* 1151822e mov edi, edi */
  EDI = (EDI);
L_11518240:;
  /* 11518240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11518243 pop esi */
  ESI = (pop32());
  /* 11518244 pop edi */
  EDI = (pop32());
  /* 11518245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11518246 ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 11518247 nop  */
  /* nop */
L_11518248:;
  /* 11518248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151824b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1151824e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11518251 pop esi */
  ESI = (pop32());
  /* 11518252 pop edi */
  EDI = (pop32());
  /* 11518253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11518254 ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 11518255 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11518258:;
  /* 11518258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151825b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1151825e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11518261 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11518264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11518267 pop esi */
  ESI = (pop32());
  /* 11518268 pop edi */
  EDI = (pop32());
  /* 11518269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1151826a ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
  /* 1151826b nop  */
  /* nop */
L_1151826c:;
  /* 1151826c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1151826f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11518272 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11518275 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11518278 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1151827b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1151827e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11518281 pop esi */
  ESI = (pop32());
  /* 11518282 pop edi */
  EDI = (pop32());
  /* 11518283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11518284 ret  */
  ESPCHK(0x11517f50u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11518288 (32 bytes, 18 insns) */
void f_11518288(void) {
  FTRACE(0x11518288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11518288 push ebp */
  push32((uint32_t)(EBP));
  /* 11518289 mov ebp, esp */
  EBP = (ESP);
  /* 1151828b push ebx */
  push32((uint32_t)(EBX));
  /* 1151828c push esi */
  push32((uint32_t)(ESI));
  /* 1151828d push edi */
  push32((uint32_t)(EDI));
  /* 1151828e push ebp */
  push32((uint32_t)(EBP));
  /* 1151828f push 0 */
  push32((uint32_t)(0x0u));
  /* 11518291 push 0 */
  push32((uint32_t)(0x0u));
  /* 11518293 push 0x115182a0 */
  push32((uint32_t)(0x115182a0u));
  /* 11518298 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1151829b call 0x11518490 */
  push32(0x115182a0u); f_11518490();
  /* 115182a0 pop ebp */
  EBP = (pop32());
  /* 115182a1 pop edi */
  EDI = (pop32());
  /* 115182a2 pop esi */
  ESI = (pop32());
  /* 115182a3 pop ebx */
  EBX = (pop32());
  /* 115182a4 mov esp, ebp */
  ESP = (EBP);
  /* 115182a6 pop ebp */
  EBP = (pop32());
  /* 115182a7 ret  */
  ESPCHK(0x11518288u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x115182ca (104 bytes, 33 insns) */
void f_115182ca(void) {
  FTRACE(0x115182cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115182ca push ebx */
  push32((uint32_t)(EBX));
  /* 115182cb push esi */
  push32((uint32_t)(ESI));
  /* 115182cc push edi */
  push32((uint32_t)(EDI));
  /* 115182cd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115182d1 push eax */
  push32((uint32_t)(EAX));
  /* 115182d2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 115182d4 push 0x115182a8 */
  push32((uint32_t)(0x115182a8u));
  /* 115182d9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 115182e0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_115182e7:;
  /* 115182e7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 115182eb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 115182ee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 115182f1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115182f4 je 0x11518324 */
  if (C.zf) goto L_11518324;
  /* 115182f6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115182fa je 0x11518324 */
  if (C.zf) goto L_11518324;
  /* 115182fc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 115182ff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11518302 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11518306 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11518309 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151830e jne 0x11518322 */
  if (!C.zf) goto L_11518322;
  /* 11518310 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11518315 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11518319 call 0x1151835e */
  push32(0x1151831eu); f_1151835e();
  /* 1151831e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11518322u);
L_11518322:;
  /* 11518322 jmp 0x115182e7 */
  goto L_115182e7;
L_11518324:;
  /* 11518324 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1151832b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1151832e pop edi */
  EDI = (pop32());
  /* 1151832f pop esi */
  ESI = (pop32());
  /* 11518330 pop ebx */
  EBX = (pop32());
  /* 11518331 ret  */
  ESPCHK(0x115182cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000835e @ 0x1151835e (24 bytes, 10 insns) */
void f_1151835e(void) {
  FTRACE(0x1151835eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1151835e push ebx */
  push32((uint32_t)(EBX));
  /* 1151835f push ecx */
  push32((uint32_t)(ECX));
  /* 11518360 mov ebx, 0x1151b0f0 */
  EBX = (0x1151b0f0u);
  /* 11518365 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11518368 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1151836b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1151836e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11518371 pop ecx */
  ECX = (pop32());
  /* 11518372 pop ebx */
  EBX = (pop32());
  /* 11518373 ret 4 */
  ESPCHK(0x1151835eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000843d @ 0x1151843d (27 bytes, 11 insns) */
void f_1151843d(void) {
  FTRACE(0x1151843du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1151843d push ebp */
  push32((uint32_t)(EBP));
  /* 1151843e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11518442 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11518444 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11518447 push eax */
  push32((uint32_t)(EAX));
  /* 11518448 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1151844b push eax */
  push32((uint32_t)(EAX));
  /* 1151844c call 0x115182ca */
  push32(0x11518451u); f_115182ca();
  /* 11518451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11518454 pop ebp */
  EBP = (pop32());
  /* 11518455 ret 4 */
  ESPCHK(0x1151843du, _esp0);
  ESP += 8; return;
}

/* FUN_10008460 @ 0x11518460 (47 bytes, 17 insns) */
void f_11518460(void) {
  FTRACE(0x11518460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11518460 push ecx */
  push32((uint32_t)(ECX));
  /* 11518461 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11518466 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1151846a jb 0x11518480 */
  if (C.cf) goto L_11518480;
L_1151846c:;
  /* 1151846c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11518472 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11518477 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11518479 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1151847e jae 0x1151846c */
  if (!C.cf) goto L_1151846c;
L_11518480:;
  /* 11518480 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11518482 mov eax, esp */
  EAX = (ESP);
  /* 11518484 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11518486 mov esp, ecx */
  ESP = (ECX);
  /* 11518488 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1151848a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1151848d push eax */
  push32((uint32_t)(EAX));
  /* 1151848e ret  */
  ESPCHK(0x11518460u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11518490 (6 bytes, 1 insns) */
void f_11518490(void) {
  FTRACE(0x11518490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11518490 jmp dword ptr [0x11519000] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11519000)))); return;
}

