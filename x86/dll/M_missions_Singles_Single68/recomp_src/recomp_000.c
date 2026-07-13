#include "recomp.h"

/* FUN_10001000 @ 0x11b11000 (20 bytes, 6 insns) */
void f_11b11000(void) {
  FTRACE(0x11b11000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b11000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b11004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b11005 jne 0x11b1100c */
  if (!C.zf) goto L_11b1100c;
  /* 11b11007 call 0x11b11160 */
  push32(0x11b1100cu); f_11b11160();
L_11b1100c:;
  /* 11b1100c mov eax, 1 */
  EAX = (0x1u);
  /* 11b11011 ret 0xc */
  ESPCHK(0x11b11000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11b11160 (2196 bytes, 586 insns) */
void f_11b11160(void) {
  FTRACE(0x11b11160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b11160 push ecx */
  push32((uint32_t)(ECX));
  /* 11b11161 push ebx */
  push32((uint32_t)(EBX));
  /* 11b11162 push ebp */
  push32((uint32_t)(EBP));
  /* 11b11163 push esi */
  push32((uint32_t)(ESI));
  /* 11b11164 mov esi, dword ptr [0x11b1918c] */
  ESI = (r32((uint32_t)(0x11b1918c)));
  /* 11b1116a push edi */
  push32((uint32_t)(EDI));
  /* 11b1116b push 0x11b1b4cc */
  push32((uint32_t)(0x11b1b4ccu));
  /* 11b11170 push 0x11b1e928 */
  push32((uint32_t)(0x11b1e928u));
  /* 11b11175 call esi */
  call_ind((uint32_t)(ESI), 0x11b11177u);
  /* 11b11177 push 0x11b1b4bc */
  push32((uint32_t)(0x11b1b4bcu));
  /* 11b1117c push 0x11b1e940 */
  push32((uint32_t)(0x11b1e940u));
  /* 11b11181 call esi */
  call_ind((uint32_t)(ESI), 0x11b11183u);
  /* 11b11183 push 0x11b1b4ac */
  push32((uint32_t)(0x11b1b4acu));
  /* 11b11188 push 0x11b1ea18 */
  push32((uint32_t)(0x11b1ea18u));
  /* 11b1118d call esi */
  call_ind((uint32_t)(ESI), 0x11b1118fu);
  /* 11b1118f push 0x11b1b498 */
  push32((uint32_t)(0x11b1b498u));
  /* 11b11194 push 0x11b1ea68 */
  push32((uint32_t)(0x11b1ea68u));
  /* 11b11199 call esi */
  call_ind((uint32_t)(ESI), 0x11b1119bu);
  /* 11b1119b mov edi, dword ptr [0x11b19190] */
  EDI = (r32((uint32_t)(0x11b19190)));
  /* 11b111a1 push 0x11b1b490 */
  push32((uint32_t)(0x11b1b490u));
  /* 11b111a6 push 0x11b1e388 */
  push32((uint32_t)(0x11b1e388u));
  /* 11b111ab call edi */
  call_ind((uint32_t)(EDI), 0x11b111adu);
  /* 11b111ad push 0x11b1b488 */
  push32((uint32_t)(0x11b1b488u));
  /* 11b111b2 push 0x11b1e380 */
  push32((uint32_t)(0x11b1e380u));
  /* 11b111b7 call edi */
  call_ind((uint32_t)(EDI), 0x11b111b9u);
  /* 11b111b9 push 0x11b1b480 */
  push32((uint32_t)(0x11b1b480u));
  /* 11b111be push 0x11b1e398 */
  push32((uint32_t)(0x11b1e398u));
  /* 11b111c3 call edi */
  call_ind((uint32_t)(EDI), 0x11b111c5u);
  /* 11b111c5 push 0x11b1b478 */
  push32((uint32_t)(0x11b1b478u));
  /* 11b111ca push 0x11b1e390 */
  push32((uint32_t)(0x11b1e390u));
  /* 11b111cf call edi */
  call_ind((uint32_t)(EDI), 0x11b111d1u);
  /* 11b111d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b111d4 push 0x11b1b470 */
  push32((uint32_t)(0x11b1b470u));
  /* 11b111d9 push 0x11b1e3a8 */
  push32((uint32_t)(0x11b1e3a8u));
  /* 11b111de call edi */
  call_ind((uint32_t)(EDI), 0x11b111e0u);
  /* 11b111e0 push 0x11b1b468 */
  push32((uint32_t)(0x11b1b468u));
  /* 11b111e5 push 0x11b1e3a0 */
  push32((uint32_t)(0x11b1e3a0u));
  /* 11b111ea call edi */
  call_ind((uint32_t)(EDI), 0x11b111ecu);
  /* 11b111ec push 0x11b1b460 */
  push32((uint32_t)(0x11b1b460u));
  /* 11b111f1 push 0x11b1e3b8 */
  push32((uint32_t)(0x11b1e3b8u));
  /* 11b111f6 call edi */
  call_ind((uint32_t)(EDI), 0x11b111f8u);
  /* 11b111f8 push 0x11b1b458 */
  push32((uint32_t)(0x11b1b458u));
  /* 11b111fd push 0x11b1e3b0 */
  push32((uint32_t)(0x11b1e3b0u));
  /* 11b11202 call edi */
  call_ind((uint32_t)(EDI), 0x11b11204u);
  /* 11b11204 push 0x11b1b44c */
  push32((uint32_t)(0x11b1b44cu));
  /* 11b11209 push 0x11b1ea78 */
  push32((uint32_t)(0x11b1ea78u));
  /* 11b1120e call edi */
  call_ind((uint32_t)(EDI), 0x11b11210u);
  /* 11b11210 mov esi, dword ptr [0x11b19188] */
  ESI = (r32((uint32_t)(0x11b19188)));
  /* 11b11216 push 0x11b1b444 */
  push32((uint32_t)(0x11b1b444u));
  /* 11b1121b push 0x11b1e930 */
  push32((uint32_t)(0x11b1e930u));
  /* 11b11220 call esi */
  call_ind((uint32_t)(ESI), 0x11b11222u);
  /* 11b11222 push 0x11b1b43c */
  push32((uint32_t)(0x11b1b43cu));
  /* 11b11227 push 0x11b1e960 */
  push32((uint32_t)(0x11b1e960u));
  /* 11b1122c call esi */
  call_ind((uint32_t)(ESI), 0x11b1122eu);
  /* 11b1122e push 0x11b1b434 */
  push32((uint32_t)(0x11b1b434u));
  /* 11b11233 push 0x11b1ea08 */
  push32((uint32_t)(0x11b1ea08u));
  /* 11b11238 call esi */
  call_ind((uint32_t)(ESI), 0x11b1123au);
  /* 11b1123a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1123d push 0x11b1b42c */
  push32((uint32_t)(0x11b1b42cu));
  /* 11b11242 push 0x11b1e468 */
  push32((uint32_t)(0x11b1e468u));
  /* 11b11247 call esi */
  call_ind((uint32_t)(ESI), 0x11b11249u);
  /* 11b11249 push 0x11b1b424 */
  push32((uint32_t)(0x11b1b424u));
  /* 11b1124e push 0x11b1ea10 */
  push32((uint32_t)(0x11b1ea10u));
  /* 11b11253 call esi */
  call_ind((uint32_t)(ESI), 0x11b11255u);
  /* 11b11255 push 0x11b1b41c */
  push32((uint32_t)(0x11b1b41cu));
  /* 11b1125a push 0x11b1e430 */
  push32((uint32_t)(0x11b1e430u));
  /* 11b1125f call esi */
  call_ind((uint32_t)(ESI), 0x11b11261u);
  /* 11b11261 push 0x11b1b414 */
  push32((uint32_t)(0x11b1b414u));
  /* 11b11266 push 0x11b1e750 */
  push32((uint32_t)(0x11b1e750u));
  /* 11b1126b call esi */
  call_ind((uint32_t)(ESI), 0x11b1126du);
  /* 11b1126d push 0x11b1b40c */
  push32((uint32_t)(0x11b1b40cu));
  /* 11b11272 push 0x11b1ea60 */
  push32((uint32_t)(0x11b1ea60u));
  /* 11b11277 call esi */
  call_ind((uint32_t)(ESI), 0x11b11279u);
  /* 11b11279 push 0x11b1b404 */
  push32((uint32_t)(0x11b1b404u));
  /* 11b1127e push 0x11b1e980 */
  push32((uint32_t)(0x11b1e980u));
  /* 11b11283 call esi */
  call_ind((uint32_t)(ESI), 0x11b11285u);
  /* 11b11285 push 0x11b1b3fc */
  push32((uint32_t)(0x11b1b3fcu));
  /* 11b1128a push 0x11b1e770 */
  push32((uint32_t)(0x11b1e770u));
  /* 11b1128f call esi */
  call_ind((uint32_t)(ESI), 0x11b11291u);
  /* 11b11291 push 0x11b1b3f4 */
  push32((uint32_t)(0x11b1b3f4u));
  /* 11b11296 push 0x11b1e478 */
  push32((uint32_t)(0x11b1e478u));
  /* 11b1129b call esi */
  call_ind((uint32_t)(ESI), 0x11b1129du);
  /* 11b1129d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b112a0 push 0x11b1b3ec */
  push32((uint32_t)(0x11b1b3ecu));
  /* 11b112a5 push 0x11b1e470 */
  push32((uint32_t)(0x11b1e470u));
  /* 11b112aa call esi */
  call_ind((uint32_t)(ESI), 0x11b112acu);
  /* 11b112ac push 0x11b1b3e4 */
  push32((uint32_t)(0x11b1b3e4u));
  /* 11b112b1 push 0x11b1e480 */
  push32((uint32_t)(0x11b1e480u));
  /* 11b112b6 call esi */
  call_ind((uint32_t)(ESI), 0x11b112b8u);
  /* 11b112b8 push 0x11b1b3dc */
  push32((uint32_t)(0x11b1b3dcu));
  /* 11b112bd push 0x11b1e488 */
  push32((uint32_t)(0x11b1e488u));
  /* 11b112c2 call esi */
  call_ind((uint32_t)(ESI), 0x11b112c4u);
  /* 11b112c4 push 0x11b1b3d4 */
  push32((uint32_t)(0x11b1b3d4u));
  /* 11b112c9 push 0x11b1e790 */
  push32((uint32_t)(0x11b1e790u));
  /* 11b112ce call esi */
  call_ind((uint32_t)(ESI), 0x11b112d0u);
  /* 11b112d0 push 0x11b1b3cc */
  push32((uint32_t)(0x11b1b3ccu));
  /* 11b112d5 push 0x11b1e810 */
  push32((uint32_t)(0x11b1e810u));
  /* 11b112da call esi */
  call_ind((uint32_t)(ESI), 0x11b112dcu);
  /* 11b112dc push 0x11b1b3c4 */
  push32((uint32_t)(0x11b1b3c4u));
  /* 11b112e1 push 0x11b1e798 */
  push32((uint32_t)(0x11b1e798u));
  /* 11b112e6 call esi */
  call_ind((uint32_t)(ESI), 0x11b112e8u);
  /* 11b112e8 push 0x11b1b3bc */
  push32((uint32_t)(0x11b1b3bcu));
  /* 11b112ed push 0x11b1e820 */
  push32((uint32_t)(0x11b1e820u));
  /* 11b112f2 call esi */
  call_ind((uint32_t)(ESI), 0x11b112f4u);
  /* 11b112f4 push 0x11b1b3b4 */
  push32((uint32_t)(0x11b1b3b4u));
  /* 11b112f9 push 0x11b1e7a0 */
  push32((uint32_t)(0x11b1e7a0u));
  /* 11b112fe call esi */
  call_ind((uint32_t)(ESI), 0x11b11300u);
  /* 11b11300 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11303 push 0x11b1b3ac */
  push32((uint32_t)(0x11b1b3acu));
  /* 11b11308 push 0x11b1e830 */
  push32((uint32_t)(0x11b1e830u));
  /* 11b1130d call esi */
  call_ind((uint32_t)(ESI), 0x11b1130fu);
  /* 11b1130f push 0x11b1b3a4 */
  push32((uint32_t)(0x11b1b3a4u));
  /* 11b11314 push 0x11b1e7b0 */
  push32((uint32_t)(0x11b1e7b0u));
  /* 11b11319 call esi */
  call_ind((uint32_t)(ESI), 0x11b1131bu);
  /* 11b1131b push 0x11b1b39c */
  push32((uint32_t)(0x11b1b39cu));
  /* 11b11320 push 0x11b1e848 */
  push32((uint32_t)(0x11b1e848u));
  /* 11b11325 call esi */
  call_ind((uint32_t)(ESI), 0x11b11327u);
  /* 11b11327 push 0x11b1b394 */
  push32((uint32_t)(0x11b1b394u));
  /* 11b1132c push 0x11b1e7b8 */
  push32((uint32_t)(0x11b1e7b8u));
  /* 11b11331 call esi */
  call_ind((uint32_t)(ESI), 0x11b11333u);
  /* 11b11333 push 0x11b1b38c */
  push32((uint32_t)(0x11b1b38cu));
  /* 11b11338 push 0x11b1e858 */
  push32((uint32_t)(0x11b1e858u));
  /* 11b1133d call esi */
  call_ind((uint32_t)(ESI), 0x11b1133fu);
  /* 11b1133f push 0x11b1b384 */
  push32((uint32_t)(0x11b1b384u));
  /* 11b11344 push 0x11b1e7c8 */
  push32((uint32_t)(0x11b1e7c8u));
  /* 11b11349 call esi */
  call_ind((uint32_t)(ESI), 0x11b1134bu);
  /* 11b1134b push 0x11b1b37c */
  push32((uint32_t)(0x11b1b37cu));
  /* 11b11350 push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b11355 call esi */
  call_ind((uint32_t)(ESI), 0x11b11357u);
  /* 11b11357 push 0x11b1b374 */
  push32((uint32_t)(0x11b1b374u));
  /* 11b1135c push 0x11b1e7d8 */
  push32((uint32_t)(0x11b1e7d8u));
  /* 11b11361 call esi */
  call_ind((uint32_t)(ESI), 0x11b11363u);
  /* 11b11363 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11366 push 0x11b1b36c */
  push32((uint32_t)(0x11b1b36cu));
  /* 11b1136b push 0x11b1e878 */
  push32((uint32_t)(0x11b1e878u));
  /* 11b11370 call esi */
  call_ind((uint32_t)(ESI), 0x11b11372u);
  /* 11b11372 push 0x11b1b364 */
  push32((uint32_t)(0x11b1b364u));
  /* 11b11377 push 0x11b1e7f0 */
  push32((uint32_t)(0x11b1e7f0u));
  /* 11b1137c call esi */
  call_ind((uint32_t)(ESI), 0x11b1137eu);
  /* 11b1137e push 0x11b1b35c */
  push32((uint32_t)(0x11b1b35cu));
  /* 11b11383 push 0x11b1e888 */
  push32((uint32_t)(0x11b1e888u));
  /* 11b11388 call esi */
  call_ind((uint32_t)(ESI), 0x11b1138au);
  /* 11b1138a push 0x11b1b354 */
  push32((uint32_t)(0x11b1b354u));
  /* 11b1138f push 0x11b1e800 */
  push32((uint32_t)(0x11b1e800u));
  /* 11b11394 call esi */
  call_ind((uint32_t)(ESI), 0x11b11396u);
  /* 11b11396 push 0x11b1b34c */
  push32((uint32_t)(0x11b1b34cu));
  /* 11b1139b push 0x11b1e8a0 */
  push32((uint32_t)(0x11b1e8a0u));
  /* 11b113a0 call esi */
  call_ind((uint32_t)(ESI), 0x11b113a2u);
  /* 11b113a2 push 0x11b1b344 */
  push32((uint32_t)(0x11b1b344u));
  /* 11b113a7 push 0x11b1e7a8 */
  push32((uint32_t)(0x11b1e7a8u));
  /* 11b113ac call esi */
  call_ind((uint32_t)(ESI), 0x11b113aeu);
  /* 11b113ae push 0x11b1b33c */
  push32((uint32_t)(0x11b1b33cu));
  /* 11b113b3 push 0x11b1e838 */
  push32((uint32_t)(0x11b1e838u));
  /* 11b113b8 call esi */
  call_ind((uint32_t)(ESI), 0x11b113bau);
  /* 11b113ba push 0x11b1b334 */
  push32((uint32_t)(0x11b1b334u));
  /* 11b113bf push 0x11b1e7c0 */
  push32((uint32_t)(0x11b1e7c0u));
  /* 11b113c4 call esi */
  call_ind((uint32_t)(ESI), 0x11b113c6u);
  /* 11b113c6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b113c9 push 0x11b1b32c */
  push32((uint32_t)(0x11b1b32cu));
  /* 11b113ce push 0x11b1e860 */
  push32((uint32_t)(0x11b1e860u));
  /* 11b113d3 call esi */
  call_ind((uint32_t)(ESI), 0x11b113d5u);
  /* 11b113d5 push 0x11b1b324 */
  push32((uint32_t)(0x11b1b324u));
  /* 11b113da push 0x11b1e7d0 */
  push32((uint32_t)(0x11b1e7d0u));
  /* 11b113df call esi */
  call_ind((uint32_t)(ESI), 0x11b113e1u);
  /* 11b113e1 push 0x11b1b31c */
  push32((uint32_t)(0x11b1b31cu));
  /* 11b113e6 push 0x11b1e870 */
  push32((uint32_t)(0x11b1e870u));
  /* 11b113eb call esi */
  call_ind((uint32_t)(ESI), 0x11b113edu);
  /* 11b113ed push 0x11b1b314 */
  push32((uint32_t)(0x11b1b314u));
  /* 11b113f2 push 0x11b1e7e0 */
  push32((uint32_t)(0x11b1e7e0u));
  /* 11b113f7 call esi */
  call_ind((uint32_t)(ESI), 0x11b113f9u);
  /* 11b113f9 push 0x11b1b30c */
  push32((uint32_t)(0x11b1b30cu));
  /* 11b113fe push 0x11b1e880 */
  push32((uint32_t)(0x11b1e880u));
  /* 11b11403 call esi */
  call_ind((uint32_t)(ESI), 0x11b11405u);
  /* 11b11405 push 0x11b1b304 */
  push32((uint32_t)(0x11b1b304u));
  /* 11b1140a push 0x11b1e7f8 */
  push32((uint32_t)(0x11b1e7f8u));
  /* 11b1140f call esi */
  call_ind((uint32_t)(ESI), 0x11b11411u);
  /* 11b11411 push 0x11b1b2fc */
  push32((uint32_t)(0x11b1b2fcu));
  /* 11b11416 push 0x11b1e890 */
  push32((uint32_t)(0x11b1e890u));
  /* 11b1141b call esi */
  call_ind((uint32_t)(ESI), 0x11b1141du);
  /* 11b1141d push 0x11b1b2f4 */
  push32((uint32_t)(0x11b1b2f4u));
  /* 11b11422 push 0x11b1e808 */
  push32((uint32_t)(0x11b1e808u));
  /* 11b11427 call esi */
  call_ind((uint32_t)(ESI), 0x11b11429u);
  /* 11b11429 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1142c push 0x11b1b2ec */
  push32((uint32_t)(0x11b1b2ecu));
  /* 11b11431 push 0x11b1e8a8 */
  push32((uint32_t)(0x11b1e8a8u));
  /* 11b11436 call esi */
  call_ind((uint32_t)(ESI), 0x11b11438u);
  /* 11b11438 push 0x11b1b2e4 */
  push32((uint32_t)(0x11b1b2e4u));
  /* 11b1143d push 0x11b1e818 */
  push32((uint32_t)(0x11b1e818u));
  /* 11b11442 call esi */
  call_ind((uint32_t)(ESI), 0x11b11444u);
  /* 11b11444 push 0x11b1b2dc */
  push32((uint32_t)(0x11b1b2dcu));
  /* 11b11449 push 0x11b1e8b0 */
  push32((uint32_t)(0x11b1e8b0u));
  /* 11b1144e call esi */
  call_ind((uint32_t)(ESI), 0x11b11450u);
  /* 11b11450 push 0x11b1b2d4 */
  push32((uint32_t)(0x11b1b2d4u));
  /* 11b11455 push 0x11b1e828 */
  push32((uint32_t)(0x11b1e828u));
  /* 11b1145a call esi */
  call_ind((uint32_t)(ESI), 0x11b1145cu);
  /* 11b1145c push 0x11b1b2cc */
  push32((uint32_t)(0x11b1b2ccu));
  /* 11b11461 push 0x11b1e8c0 */
  push32((uint32_t)(0x11b1e8c0u));
  /* 11b11466 call esi */
  call_ind((uint32_t)(ESI), 0x11b11468u);
  /* 11b11468 push 0x11b1b2c4 */
  push32((uint32_t)(0x11b1b2c4u));
  /* 11b1146d push 0x11b1e840 */
  push32((uint32_t)(0x11b1e840u));
  /* 11b11472 call esi */
  call_ind((uint32_t)(ESI), 0x11b11474u);
  /* 11b11474 push 0x11b1b2bc */
  push32((uint32_t)(0x11b1b2bcu));
  /* 11b11479 push 0x11b1e8c8 */
  push32((uint32_t)(0x11b1e8c8u));
  /* 11b1147e call esi */
  call_ind((uint32_t)(ESI), 0x11b11480u);
  /* 11b11480 push 0x11b1b2b4 */
  push32((uint32_t)(0x11b1b2b4u));
  /* 11b11485 push 0x11b1e850 */
  push32((uint32_t)(0x11b1e850u));
  /* 11b1148a call esi */
  call_ind((uint32_t)(ESI), 0x11b1148cu);
  /* 11b1148c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1148f push 0x11b1b2ac */
  push32((uint32_t)(0x11b1b2acu));
  /* 11b11494 push 0x11b1e8d0 */
  push32((uint32_t)(0x11b1e8d0u));
  /* 11b11499 call esi */
  call_ind((uint32_t)(ESI), 0x11b1149bu);
  /* 11b1149b push 0x11b1b2a4 */
  push32((uint32_t)(0x11b1b2a4u));
  /* 11b114a0 push 0x11b1e7e8 */
  push32((uint32_t)(0x11b1e7e8u));
  /* 11b114a5 call esi */
  call_ind((uint32_t)(ESI), 0x11b114a7u);
  /* 11b114a7 push 0x11b1b29c */
  push32((uint32_t)(0x11b1b29cu));
  /* 11b114ac push 0x11b1e898 */
  push32((uint32_t)(0x11b1e898u));
  /* 11b114b1 call esi */
  call_ind((uint32_t)(ESI), 0x11b114b3u);
  /* 11b114b3 push 0x11b1b294 */
  push32((uint32_t)(0x11b1b294u));
  /* 11b114b8 push 0x11b1e8b8 */
  push32((uint32_t)(0x11b1e8b8u));
  /* 11b114bd call esi */
  call_ind((uint32_t)(ESI), 0x11b114bfu);
  /* 11b114bf push 0x11b1b28c */
  push32((uint32_t)(0x11b1b28cu));
  /* 11b114c4 push 0x11b1ea80 */
  push32((uint32_t)(0x11b1ea80u));
  /* 11b114c9 call dword ptr [0x11b19198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19198))), 0x11b114cfu);
  /* 11b114cf mov ebp, dword ptr [0x11b1919c] */
  EBP = (r32((uint32_t)(0x11b1919c)));
  /* 11b114d5 push 0x11b1b280 */
  push32((uint32_t)(0x11b1b280u));
  /* 11b114da push 0x11b1e3d8 */
  push32((uint32_t)(0x11b1e3d8u));
  /* 11b114df call ebp */
  call_ind((uint32_t)(EBP), 0x11b114e1u);
  /* 11b114e1 push 0x11b1b274 */
  push32((uint32_t)(0x11b1b274u));
  /* 11b114e6 push 0x11b1e768 */
  push32((uint32_t)(0x11b1e768u));
  /* 11b114eb call ebp */
  call_ind((uint32_t)(EBP), 0x11b114edu);
  /* 11b114ed add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b114f0 mov ebx, 0x11b1df60 */
  EBX = (0x11b1df60u);
L_11b114f5:;
  /* 11b114f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b114f6 call dword ptr [0x11b19194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19194))), 0x11b114fcu);
  /* 11b114fc add ebx, 0xe */
  { uint32_t _a=(EBX),_b=(0xeu),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b114ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11502 cmp ebx, 0x11b1e334 */
  { uint32_t _a=(EBX),_b=(0x11b1e334u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11508 jl 0x11b114f5 */
  if ((C.sf!=C.of)) goto L_11b114f5;
  /* 11b1150a mov ebx, dword ptr [0x11b191a4] */
  EBX = (r32((uint32_t)(0x11b191a4)));
  /* 11b11510 push 0x3d4 */
  push32((uint32_t)(0x3d4u));
  /* 11b11515 push 0x11b1df60 */
  push32((uint32_t)(0x11b1df60u));
  /* 11b1151a call ebx */
  call_ind((uint32_t)(EBX), 0x11b1151cu);
  /* 11b1151c push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b1151e push 0x11b1e358 */
  push32((uint32_t)(0x11b1e358u));
  /* 11b11523 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11525u);
  /* 11b11525 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11527 push 0x11b1e728 */
  push32((uint32_t)(0x11b1e728u));
  /* 11b1152c call ebx */
  call_ind((uint32_t)(EBX), 0x11b1152eu);
  /* 11b1152e push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11530 push 0x11b1e3e0 */
  push32((uint32_t)(0x11b1e3e0u));
  /* 11b11535 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11537u);
  /* 11b11537 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11539 push 0x11b1ea88 */
  push32((uint32_t)(0x11b1ea88u));
  /* 11b1153e call ebx */
  call_ind((uint32_t)(EBX), 0x11b11540u);
  /* 11b11540 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11542 push 0x11b1e408 */
  push32((uint32_t)(0x11b1e408u));
  /* 11b11547 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11549u);
  /* 11b11549 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b1154b push 0x11b1ea30 */
  push32((uint32_t)(0x11b1ea30u));
  /* 11b11550 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11552u);
  /* 11b11552 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11554 push 0x11b1e900 */
  push32((uint32_t)(0x11b1e900u));
  /* 11b11559 call ebx */
  call_ind((uint32_t)(EBX), 0x11b1155bu);
  /* 11b1155b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1155e push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11560 push 0x11b1e8d8 */
  push32((uint32_t)(0x11b1e8d8u));
  /* 11b11565 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11567u);
  /* 11b11567 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11569 push 0x11b1e440 */
  push32((uint32_t)(0x11b1e440u));
  /* 11b1156e call ebx */
  call_ind((uint32_t)(EBX), 0x11b11570u);
  /* 11b11570 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b11572 push 0x11b1e9d8 */
  push32((uint32_t)(0x11b1e9d8u));
  /* 11b11577 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11579u);
  /* 11b11579 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1157c mov ecx, 0x11b1e358 */
  ECX = (0x11b1e358u);
  /* 11b11581 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11583 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11585 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11587 push 0x11b1b3f4 */
  push32((uint32_t)(0x11b1b3f4u));
  /* 11b1158c push 0x11b1b444 */
  push32((uint32_t)(0x11b1b444u));
  /* 11b11591 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11593 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11595 call 0x11b126f0 */
  push32(0x11b1159au); f_11b126f0();
  /* 11b1159a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1159c push 6 */
  push32((uint32_t)(0x6u));
  /* 11b1159e push 5 */
  push32((uint32_t)(0x5u));
  /* 11b115a0 push 0x11b1b3dc */
  push32((uint32_t)(0x11b1b3dcu));
  /* 11b115a5 push 0x11b1b43c */
  push32((uint32_t)(0x11b1b43cu));
  /* 11b115aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b115ac push 3 */
  push32((uint32_t)(0x3u));
  /* 11b115ae mov ecx, 0x11b1e728 */
  ECX = (0x11b1e728u);
  /* 11b115b3 call 0x11b126f0 */
  push32(0x11b115b8u); f_11b126f0();
  /* 11b115b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b115ba push 8 */
  push32((uint32_t)(0x8u));
  /* 11b115bc push 7 */
  push32((uint32_t)(0x7u));
  /* 11b115be push 0x11b1b3dc */
  push32((uint32_t)(0x11b1b3dcu));
  /* 11b115c3 push 0x11b1b434 */
  push32((uint32_t)(0x11b1b434u));
  /* 11b115c8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b115ca push 3 */
  push32((uint32_t)(0x3u));
  /* 11b115cc mov ecx, 0x11b1e3e0 */
  ECX = (0x11b1e3e0u);
  /* 11b115d1 call 0x11b126f0 */
  push32(0x11b115d6u); f_11b126f0();
  /* 11b115d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b115d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b115da push 3 */
  push32((uint32_t)(0x3u));
  /* 11b115dc push 0x11b1b3f4 */
  push32((uint32_t)(0x11b1b3f4u));
  /* 11b115e1 push 0x11b1b42c */
  push32((uint32_t)(0x11b1b42cu));
  /* 11b115e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b115e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b115ea mov ecx, 0x11b1ea88 */
  ECX = (0x11b1ea88u);
  /* 11b115ef call 0x11b126f0 */
  push32(0x11b115f4u); f_11b126f0();
  /* 11b115f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b115f6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b115f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b115fa push 0x11b1b3dc */
  push32((uint32_t)(0x11b1b3dcu));
  /* 11b115ff push 0x11b1b424 */
  push32((uint32_t)(0x11b1b424u));
  /* 11b11604 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11606 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11608 mov ecx, 0x11b1e408 */
  ECX = (0x11b1e408u);
  /* 11b1160d call 0x11b126f0 */
  push32(0x11b11612u); f_11b126f0();
  /* 11b11612 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b11614 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b11616 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b11618 push 0x11b1b3ec */
  push32((uint32_t)(0x11b1b3ecu));
  /* 11b1161d push 0x11b1b41c */
  push32((uint32_t)(0x11b1b41cu));
  /* 11b11622 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11624 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11626 mov ecx, 0x11b1ea30 */
  ECX = (0x11b1ea30u);
  /* 11b1162b call 0x11b126f0 */
  push32(0x11b11630u); f_11b126f0();
  /* 11b11630 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b11632 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b11634 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b11636 push 0x11b1b3dc */
  push32((uint32_t)(0x11b1b3dcu));
  /* 11b1163b push 0x11b1b414 */
  push32((uint32_t)(0x11b1b414u));
  /* 11b11640 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11642 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11644 mov ecx, 0x11b1e900 */
  ECX = (0x11b1e900u);
  /* 11b11649 call 0x11b126f0 */
  push32(0x11b1164eu); f_11b126f0();
  /* 11b1164e push 8 */
  push32((uint32_t)(0x8u));
  /* 11b11650 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b11652 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b11654 push 0x11b1b3ec */
  push32((uint32_t)(0x11b1b3ecu));
  /* 11b11659 push 0x11b1b40c */
  push32((uint32_t)(0x11b1b40cu));
  /* 11b1165e push 4 */
  push32((uint32_t)(0x4u));
  /* 11b11660 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11662 mov ecx, 0x11b1e8d8 */
  ECX = (0x11b1e8d8u);
  /* 11b11667 call 0x11b126f0 */
  push32(0x11b1166cu); f_11b126f0();
  /* 11b1166c push 9 */
  push32((uint32_t)(0x9u));
  /* 11b1166e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b11670 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b11672 push 0x11b1b3ec */
  push32((uint32_t)(0x11b1b3ecu));
  /* 11b11677 push 0x11b1b404 */
  push32((uint32_t)(0x11b1b404u));
  /* 11b1167c push 5 */
  push32((uint32_t)(0x5u));
  /* 11b1167e push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11680 mov ecx, 0x11b1e440 */
  ECX = (0x11b1e440u);
  /* 11b11685 call 0x11b126f0 */
  push32(0x11b1168au); f_11b126f0();
  /* 11b1168a push 0xa */
  push32((uint32_t)(0xau));
  /* 11b1168c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b1168e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b11690 push 0x11b1b3e4 */
  push32((uint32_t)(0x11b1b3e4u));
  /* 11b11695 push 0x11b1b3fc */
  push32((uint32_t)(0x11b1b3fcu));
  /* 11b1169a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1169c push 3 */
  push32((uint32_t)(0x3u));
  /* 11b1169e mov ecx, 0x11b1e9d8 */
  ECX = (0x11b1e9d8u);
  /* 11b116a3 call 0x11b126f0 */
  push32(0x11b116a8u); f_11b126f0();
  /* 11b116a8 mov dword ptr [esp + 0x10], 0x11b1e538 */
  w32((uint32_t)(ESP + 0x10), (0x11b1e538u));
L_11b116b0:;
  /* 11b116b0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b116b4 push eax */
  push32((uint32_t)(EAX));
  /* 11b116b5 call dword ptr [0x11b19194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19194))), 0x11b116bbu);
  /* 11b116bb mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b116bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b116c2 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b116c5 cmp eax, 0x11b1e722 */
  { uint32_t _a=(EAX),_b=(0x11b1e722u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b116ca mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b116ce jl 0x11b116b0 */
  if ((C.sf!=C.of)) goto L_11b116b0;
  /* 11b116d0 push 0x1ea */
  push32((uint32_t)(0x1eau));
  /* 11b116d5 push 0x11b1e538 */
  push32((uint32_t)(0x11b1e538u));
  /* 11b116da call ebx */
  call_ind((uint32_t)(EBX), 0x11b116dcu);
  /* 11b116dc push 0x11b1b26c */
  push32((uint32_t)(0x11b1b26cu));
  /* 11b116e1 push 0x11b1e788 */
  push32((uint32_t)(0x11b1e788u));
  /* 11b116e6 call esi */
  call_ind((uint32_t)(ESI), 0x11b116e8u);
  /* 11b116e8 push 0x11b1b264 */
  push32((uint32_t)(0x11b1b264u));
  /* 11b116ed push 0x11b1e350 */
  push32((uint32_t)(0x11b1e350u));
  /* 11b116f2 call esi */
  call_ind((uint32_t)(ESI), 0x11b116f4u);
  /* 11b116f4 push 0x11b1b250 */
  push32((uint32_t)(0x11b1b250u));
  /* 11b116f9 push 0x11b1ea20 */
  push32((uint32_t)(0x11b1ea20u));
  /* 11b116fe call ebp */
  call_ind((uint32_t)(EBP), 0x11b11700u);
  /* 11b11700 push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b11705 call dword ptr [0x11b19194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19194))), 0x11b1170bu);
  /* 11b1170b push 8 */
  push32((uint32_t)(0x8u));
  /* 11b1170d push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b11712 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11714u);
  /* 11b11714 push 0x11b1e348 */
  push32((uint32_t)(0x11b1e348u));
  /* 11b11719 call dword ptr [0x11b19194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19194))), 0x11b1171fu);
  /* 11b1171f push 8 */
  push32((uint32_t)(0x8u));
  /* 11b11721 push 0x11b1e348 */
  push32((uint32_t)(0x11b1e348u));
  /* 11b11726 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11728u);
  /* 11b11728 push 0x11b1b248 */
  push32((uint32_t)(0x11b1b248u));
  /* 11b1172d push 0x11b1e438 */
  push32((uint32_t)(0x11b1e438u));
  /* 11b11732 call edi */
  call_ind((uint32_t)(EDI), 0x11b11734u);
  /* 11b11734 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11737 push 0x11b1b240 */
  push32((uint32_t)(0x11b1b240u));
  /* 11b1173c push 0x11b1e3d0 */
  push32((uint32_t)(0x11b1e3d0u));
  /* 11b11741 call edi */
  call_ind((uint32_t)(EDI), 0x11b11743u);
  /* 11b11743 push 0x11b1b238 */
  push32((uint32_t)(0x11b1b238u));
  /* 11b11748 push 0x11b1e950 */
  push32((uint32_t)(0x11b1e950u));
  /* 11b1174d call edi */
  call_ind((uint32_t)(EDI), 0x11b1174fu);
  /* 11b1174f push 0x11b1b230 */
  push32((uint32_t)(0x11b1b230u));
  /* 11b11754 push 0x11b1e958 */
  push32((uint32_t)(0x11b1e958u));
  /* 11b11759 call edi */
  call_ind((uint32_t)(EDI), 0x11b1175bu);
  /* 11b1175b push 0x11b1b21c */
  push32((uint32_t)(0x11b1b21cu));
  /* 11b11760 push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b11765 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11767u);
  /* 11b11767 push 0x11b1b208 */
  push32((uint32_t)(0x11b1b208u));
  /* 11b1176c push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b11771 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11773u);
  /* 11b11773 push 0x11b1b200 */
  push32((uint32_t)(0x11b1b200u));
  /* 11b11778 push 0x11b1e4c0 */
  push32((uint32_t)(0x11b1e4c0u));
  /* 11b1177d call esi */
  call_ind((uint32_t)(ESI), 0x11b1177fu);
  /* 11b1177f push 0x11b1b1f8 */
  push32((uint32_t)(0x11b1b1f8u));
  /* 11b11784 push 0x11b1e4e8 */
  push32((uint32_t)(0x11b1e4e8u));
  /* 11b11789 call esi */
  call_ind((uint32_t)(ESI), 0x11b1178bu);
  /* 11b1178b push 0x11b1b1f0 */
  push32((uint32_t)(0x11b1b1f0u));
  /* 11b11790 push 0x11b1e510 */
  push32((uint32_t)(0x11b1e510u));
  /* 11b11795 call esi */
  call_ind((uint32_t)(ESI), 0x11b11797u);
  /* 11b11797 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1179a push 0x11b1b1e8 */
  push32((uint32_t)(0x11b1b1e8u));
  /* 11b1179f push 0x11b1e4c8 */
  push32((uint32_t)(0x11b1e4c8u));
  /* 11b117a4 call esi */
  call_ind((uint32_t)(ESI), 0x11b117a6u);
  /* 11b117a6 push 0x11b1b1e0 */
  push32((uint32_t)(0x11b1b1e0u));
  /* 11b117ab push 0x11b1e4f0 */
  push32((uint32_t)(0x11b1e4f0u));
  /* 11b117b0 call esi */
  call_ind((uint32_t)(ESI), 0x11b117b2u);
  /* 11b117b2 push 0x11b1b1d8 */
  push32((uint32_t)(0x11b1b1d8u));
  /* 11b117b7 push 0x11b1e518 */
  push32((uint32_t)(0x11b1e518u));
  /* 11b117bc call esi */
  call_ind((uint32_t)(ESI), 0x11b117beu);
  /* 11b117be push 0x11b1b1d0 */
  push32((uint32_t)(0x11b1b1d0u));
  /* 11b117c3 push 0x11b1e4d0 */
  push32((uint32_t)(0x11b1e4d0u));
  /* 11b117c8 call esi */
  call_ind((uint32_t)(ESI), 0x11b117cau);
  /* 11b117ca push 0x11b1b1c8 */
  push32((uint32_t)(0x11b1b1c8u));
  /* 11b117cf push 0x11b1e4f8 */
  push32((uint32_t)(0x11b1e4f8u));
  /* 11b117d4 call esi */
  call_ind((uint32_t)(ESI), 0x11b117d6u);
  /* 11b117d6 push 0x11b1b1c0 */
  push32((uint32_t)(0x11b1b1c0u));
  /* 11b117db push 0x11b1e520 */
  push32((uint32_t)(0x11b1e520u));
  /* 11b117e0 call esi */
  call_ind((uint32_t)(ESI), 0x11b117e2u);
  /* 11b117e2 push 0x11b1b1b8 */
  push32((uint32_t)(0x11b1b1b8u));
  /* 11b117e7 push 0x11b1e4d8 */
  push32((uint32_t)(0x11b1e4d8u));
  /* 11b117ec call esi */
  call_ind((uint32_t)(ESI), 0x11b117eeu);
  /* 11b117ee push 0x11b1b1b0 */
  push32((uint32_t)(0x11b1b1b0u));
  /* 11b117f3 push 0x11b1e500 */
  push32((uint32_t)(0x11b1e500u));
  /* 11b117f8 call esi */
  call_ind((uint32_t)(ESI), 0x11b117fau);
  /* 11b117fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b117fd push 0x11b1b1a8 */
  push32((uint32_t)(0x11b1b1a8u));
  /* 11b11802 push 0x11b1e528 */
  push32((uint32_t)(0x11b1e528u));
  /* 11b11807 call esi */
  call_ind((uint32_t)(ESI), 0x11b11809u);
  /* 11b11809 push 0x11b1b1a0 */
  push32((uint32_t)(0x11b1b1a0u));
  /* 11b1180e push 0x11b1e4e0 */
  push32((uint32_t)(0x11b1e4e0u));
  /* 11b11813 call esi */
  call_ind((uint32_t)(ESI), 0x11b11815u);
  /* 11b11815 push 0x11b1b198 */
  push32((uint32_t)(0x11b1b198u));
  /* 11b1181a push 0x11b1e508 */
  push32((uint32_t)(0x11b1e508u));
  /* 11b1181f call esi */
  call_ind((uint32_t)(ESI), 0x11b11821u);
  /* 11b11821 push 0x11b1b190 */
  push32((uint32_t)(0x11b1b190u));
  /* 11b11826 push 0x11b1e530 */
  push32((uint32_t)(0x11b1e530u));
  /* 11b1182b call esi */
  call_ind((uint32_t)(ESI), 0x11b1182du);
  /* 11b1182d push 0x11b1b188 */
  push32((uint32_t)(0x11b1b188u));
  /* 11b11832 push 0x11b1df50 */
  push32((uint32_t)(0x11b1df50u));
  /* 11b11837 call edi */
  call_ind((uint32_t)(EDI), 0x11b11839u);
  /* 11b11839 push 0x11b1b180 */
  push32((uint32_t)(0x11b1b180u));
  /* 11b1183e push 0x11b1df58 */
  push32((uint32_t)(0x11b1df58u));
  /* 11b11843 call edi */
  call_ind((uint32_t)(EDI), 0x11b11845u);
  /* 11b11845 push 0x11b1b178 */
  push32((uint32_t)(0x11b1b178u));
  /* 11b1184a push 0x11b1e338 */
  push32((uint32_t)(0x11b1e338u));
  /* 11b1184f call esi */
  call_ind((uint32_t)(ESI), 0x11b11851u);
  /* 11b11851 push 0x11b1b170 */
  push32((uint32_t)(0x11b1b170u));
  /* 11b11856 push 0x11b1e340 */
  push32((uint32_t)(0x11b1e340u));
  /* 11b1185b call esi */
  call_ind((uint32_t)(ESI), 0x11b1185du);
  /* 11b1185d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11860 push 0x11b1b168 */
  push32((uint32_t)(0x11b1b168u));
  /* 11b11865 push 0x11b1ea58 */
  push32((uint32_t)(0x11b1ea58u));
  /* 11b1186a call esi */
  call_ind((uint32_t)(ESI), 0x11b1186cu);
  /* 11b1186c push 0x11b1b164 */
  push32((uint32_t)(0x11b1b164u));
  /* 11b11871 push 0x11b1e9a0 */
  push32((uint32_t)(0x11b1e9a0u));
  /* 11b11876 call esi */
  call_ind((uint32_t)(ESI), 0x11b11878u);
  /* 11b11878 push 0x11b1b160 */
  push32((uint32_t)(0x11b1b160u));
  /* 11b1187d push 0x11b1e9b0 */
  push32((uint32_t)(0x11b1e9b0u));
  /* 11b11882 call esi */
  call_ind((uint32_t)(ESI), 0x11b11884u);
  /* 11b11884 push 0x11b1b15c */
  push32((uint32_t)(0x11b1b15cu));
  /* 11b11889 push 0x11b1e9c0 */
  push32((uint32_t)(0x11b1e9c0u));
  /* 11b1188e call esi */
  call_ind((uint32_t)(ESI), 0x11b11890u);
  /* 11b11890 push 0x11b1b148 */
  push32((uint32_t)(0x11b1b148u));
  /* 11b11895 push 0x11b1e970 */
  push32((uint32_t)(0x11b1e970u));
  /* 11b1189a call ebp */
  call_ind((uint32_t)(EBP), 0x11b1189cu);
  /* 11b1189c push 0x11b1b13c */
  push32((uint32_t)(0x11b1b13cu));
  /* 11b118a1 push 0x11b1e978 */
  push32((uint32_t)(0x11b1e978u));
  /* 11b118a6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b118a8u);
  /* 11b118a8 push 0x11b1b124 */
  push32((uint32_t)(0x11b1b124u));
  /* 11b118ad push 0x11b1e988 */
  push32((uint32_t)(0x11b1e988u));
  /* 11b118b2 call ebp */
  call_ind((uint32_t)(EBP), 0x11b118b4u);
  /* 11b118b4 push 0x11b1b114 */
  push32((uint32_t)(0x11b1b114u));
  /* 11b118b9 push 0x11b1e990 */
  push32((uint32_t)(0x11b1e990u));
  /* 11b118be call ebp */
  call_ind((uint32_t)(EBP), 0x11b118c0u);
  /* 11b118c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b118c3 push 0x11b1b108 */
  push32((uint32_t)(0x11b1b108u));
  /* 11b118c8 push 0x11b1e998 */
  push32((uint32_t)(0x11b1e998u));
  /* 11b118cd call ebp */
  call_ind((uint32_t)(EBP), 0x11b118cfu);
  /* 11b118cf push 0x11b1b0f8 */
  push32((uint32_t)(0x11b1b0f8u));
  /* 11b118d4 push 0x11b1e9a8 */
  push32((uint32_t)(0x11b1e9a8u));
  /* 11b118d9 call ebp */
  call_ind((uint32_t)(EBP), 0x11b118dbu);
  /* 11b118db push 0x11b1b0ec */
  push32((uint32_t)(0x11b1b0ecu));
  /* 11b118e0 push 0x11b1e9b8 */
  push32((uint32_t)(0x11b1e9b8u));
  /* 11b118e5 call ebp */
  call_ind((uint32_t)(EBP), 0x11b118e7u);
  /* 11b118e7 push 0x11b1b0e0 */
  push32((uint32_t)(0x11b1b0e0u));
  /* 11b118ec push 0x11b1e9c8 */
  push32((uint32_t)(0x11b1e9c8u));
  /* 11b118f1 call ebp */
  call_ind((uint32_t)(EBP), 0x11b118f3u);
  /* 11b118f3 push 0x11b1b0cc */
  push32((uint32_t)(0x11b1b0ccu));
  /* 11b118f8 push 0x11b1e9d0 */
  push32((uint32_t)(0x11b1e9d0u));
  /* 11b118fd call ebp */
  call_ind((uint32_t)(EBP), 0x11b118ffu);
  /* 11b118ff push 0x11b1b0c0 */
  push32((uint32_t)(0x11b1b0c0u));
  /* 11b11904 push 0x11b1e3c0 */
  push32((uint32_t)(0x11b1e3c0u));
  /* 11b11909 call ebp */
  call_ind((uint32_t)(EBP), 0x11b1190bu);
  /* 11b1190b push 0x11b1b0b4 */
  push32((uint32_t)(0x11b1b0b4u));
  /* 11b11910 push 0x11b1e3c8 */
  push32((uint32_t)(0x11b1e3c8u));
  /* 11b11915 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11917u);
  /* 11b11917 push 0x11b1b0a8 */
  push32((uint32_t)(0x11b1b0a8u));
  /* 11b1191c push 0x11b1ea28 */
  push32((uint32_t)(0x11b1ea28u));
  /* 11b11921 call edi */
  call_ind((uint32_t)(EDI), 0x11b11923u);
  /* 11b11923 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11926 push 0x11b1b0a0 */
  push32((uint32_t)(0x11b1b0a0u));
  /* 11b1192b push 0x11b1ea00 */
  push32((uint32_t)(0x11b1ea00u));
  /* 11b11930 call edi */
  call_ind((uint32_t)(EDI), 0x11b11932u);
  /* 11b11932 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b11934 push 0x11b1eab4 */
  push32((uint32_t)(0x11b1eab4u));
  /* 11b11939 call ebx */
  call_ind((uint32_t)(EBX), 0x11b1193bu);
  /* 11b1193b push 0x11b1b09c */
  push32((uint32_t)(0x11b1b09cu));
  /* 11b11940 push 0x11b1e490 */
  push32((uint32_t)(0x11b1e490u));
  /* 11b11945 call edi */
  call_ind((uint32_t)(EDI), 0x11b11947u);
  /* 11b11947 push 0x11b1b098 */
  push32((uint32_t)(0x11b1b098u));
  /* 11b1194c push 0x11b1e498 */
  push32((uint32_t)(0x11b1e498u));
  /* 11b11951 call edi */
  call_ind((uint32_t)(EDI), 0x11b11953u);
  /* 11b11953 push 0x11b1b094 */
  push32((uint32_t)(0x11b1b094u));
  /* 11b11958 push 0x11b1e4a0 */
  push32((uint32_t)(0x11b1e4a0u));
  /* 11b1195d call edi */
  call_ind((uint32_t)(EDI), 0x11b1195fu);
  /* 11b1195f push 0x11b1b090 */
  push32((uint32_t)(0x11b1b090u));
  /* 11b11964 push 0x11b1e4a8 */
  push32((uint32_t)(0x11b1e4a8u));
  /* 11b11969 call edi */
  call_ind((uint32_t)(EDI), 0x11b1196bu);
  /* 11b1196b push 0x11b1b08c */
  push32((uint32_t)(0x11b1b08cu));
  /* 11b11970 push 0x11b1e4b0 */
  push32((uint32_t)(0x11b1e4b0u));
  /* 11b11975 call edi */
  call_ind((uint32_t)(EDI), 0x11b11977u);
  /* 11b11977 push 0x11b1b088 */
  push32((uint32_t)(0x11b1b088u));
  /* 11b1197c push 0x11b1e4b8 */
  push32((uint32_t)(0x11b1e4b8u));
  /* 11b11981 call edi */
  call_ind((uint32_t)(EDI), 0x11b11983u);
  /* 11b11983 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11986 push 0x11b1b080 */
  push32((uint32_t)(0x11b1b080u));
  /* 11b1198b push 0x11b1e760 */
  push32((uint32_t)(0x11b1e760u));
  /* 11b11990 call edi */
  call_ind((uint32_t)(EDI), 0x11b11992u);
  /* 11b11992 push 0x11b1b078 */
  push32((uint32_t)(0x11b1b078u));
  /* 11b11997 push 0x11b1e948 */
  push32((uint32_t)(0x11b1e948u));
  /* 11b1199c call edi */
  call_ind((uint32_t)(EDI), 0x11b1199eu);
  /* 11b1199e mov esi, dword ptr [0x11b191a8] */
  ESI = (r32((uint32_t)(0x11b191a8)));
  /* 11b119a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b119a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b119a8 call esi */
  call_ind((uint32_t)(ESI), 0x11b119aau);
  /* 11b119aa push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b119ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11b119ae call esi */
  call_ind((uint32_t)(ESI), 0x11b119b0u);
  /* 11b119b0 mov esi, dword ptr [0x11b191a0] */
  ESI = (r32((uint32_t)(0x11b191a0)));
  /* 11b119b6 push 0x11b1b070 */
  push32((uint32_t)(0x11b1b070u));
  /* 11b119bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b119bd call esi */
  call_ind((uint32_t)(ESI), 0x11b119bfu);
  /* 11b119bf push 0x11b1b064 */
  push32((uint32_t)(0x11b1b064u));
  /* 11b119c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b119c6 call esi */
  call_ind((uint32_t)(ESI), 0x11b119c8u);
  /* 11b119c8 push 0x11b1b05c */
  push32((uint32_t)(0x11b1b05cu));
  /* 11b119cd push 3 */
  push32((uint32_t)(0x3u));
  /* 11b119cf call esi */
  call_ind((uint32_t)(ESI), 0x11b119d1u);
  /* 11b119d1 push 0x11b1b050 */
  push32((uint32_t)(0x11b1b050u));
  /* 11b119d6 push 0x11b1e758 */
  push32((uint32_t)(0x11b1e758u));
  /* 11b119db call edi */
  call_ind((uint32_t)(EDI), 0x11b119ddu);
  /* 11b119dd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b119e0 push 0x11b1e778 */
  push32((uint32_t)(0x11b1e778u));
  /* 11b119e5 call dword ptr [0x11b19194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19194))), 0x11b119ebu);
  /* 11b119eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b119ee pop edi */
  EDI = (pop32());
  /* 11b119ef pop esi */
  ESI = (pop32());
  /* 11b119f0 pop ebp */
  EBP = (pop32());
  /* 11b119f1 pop ebx */
  EBX = (pop32());
  /* 11b119f2 pop ecx */
  ECX = (pop32());
  /* 11b119f3 ret  */
  ESPCHK(0x11b11160u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11b11a00 (3229 bytes, 1011 insns) [3 switch table(s)] */
void f_11b11a00(void) {
  FTRACE(0x11b11a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b11a00 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11a03 push ebx */
  push32((uint32_t)(EBX));
  /* 11b11a04 push ebp */
  push32((uint32_t)(EBP));
  /* 11b11a05 push esi */
  push32((uint32_t)(ESI));
  /* 11b11a06 push edi */
  push32((uint32_t)(EDI));
  /* 11b11a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11a09 call dword ptr [0x11b190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190f4))), 0x11b11a0fu);
  /* 11b11a0f mov edi, dword ptr [0x11b190ec] */
  EDI = (r32((uint32_t)(0x11b190ec)));
  /* 11b11a15 mov ebp, dword ptr [0x11b190fc] */
  EBP = (r32((uint32_t)(0x11b190fc)));
  /* 11b11a1b mov ebx, dword ptr [0x11b19100] */
  EBX = (r32((uint32_t)(0x11b19100)));
  /* 11b11a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11a24 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b11a26 je 0x11b11ee3 */
  if (C.zf) goto L_11b11ee3;
  /* 11b11a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11a30 call dword ptr [0x11b190f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190f8))), 0x11b11a36u);
  /* 11b11a36 mov esi, dword ptr [0x11b19108] */
  ESI = (r32((uint32_t)(0x11b19108)));
  /* 11b11a3c push 0x11b1b54c */
  push32((uint32_t)(0x11b1b54cu));
  /* 11b11a41 push 0x11b1b490 */
  push32((uint32_t)(0x11b1b490u));
  /* 11b11a46 call esi */
  call_ind((uint32_t)(ESI), 0x11b11a48u);
  /* 11b11a48 push 0x11b1b544 */
  push32((uint32_t)(0x11b1b544u));
  /* 11b11a4d push 0x11b1b490 */
  push32((uint32_t)(0x11b1b490u));
  /* 11b11a52 call esi */
  call_ind((uint32_t)(ESI), 0x11b11a54u);
  /* 11b11a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a56 call edi */
  call_ind((uint32_t)(EDI), 0x11b11a58u);
  /* 11b11a58 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11a5b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11a5e je 0x11b11a6c */
  if (C.zf) goto L_11b11a6c;
  /* 11b11a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a62 call edi */
  call_ind((uint32_t)(EDI), 0x11b11a64u);
  /* 11b11a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11a67 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11a6a jne 0x11b11a7b */
  if (!C.zf) goto L_11b11a7b;
L_11b11a6c:;
  /* 11b11a6c push 0x11b1b53c */
  push32((uint32_t)(0x11b1b53cu));
  /* 11b11a71 push 0x11b1b188 */
  push32((uint32_t)(0x11b1b188u));
  /* 11b11a76 call esi */
  call_ind((uint32_t)(ESI), 0x11b11a78u);
  /* 11b11a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11a7b:;
  /* 11b11a7b mov esi, dword ptr [0x11b1910c] */
  ESI = (r32((uint32_t)(0x11b1910c)));
  /* 11b11a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a83 push 0x11b1e970 */
  push32((uint32_t)(0x11b1e970u));
  /* 11b11a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a8a call esi */
  call_ind((uint32_t)(ESI), 0x11b11a8cu);
  /* 11b11a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a8e push 0x11b1e9b8 */
  push32((uint32_t)(0x11b1e9b8u));
  /* 11b11a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a95 call esi */
  call_ind((uint32_t)(ESI), 0x11b11a97u);
  /* 11b11a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11a99 push 0x11b1e978 */
  push32((uint32_t)(0x11b1e978u));
  /* 11b11a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11aa0 call esi */
  call_ind((uint32_t)(ESI), 0x11b11aa2u);
  /* 11b11aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11aa4 push 0x11b1e9c8 */
  push32((uint32_t)(0x11b1e9c8u));
  /* 11b11aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11aab call esi */
  call_ind((uint32_t)(ESI), 0x11b11aadu);
  /* 11b11aad push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11aaf push 0x11b1e988 */
  push32((uint32_t)(0x11b1e988u));
  /* 11b11ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ab6 call esi */
  call_ind((uint32_t)(ESI), 0x11b11ab8u);
  /* 11b11ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11aba push 0x11b1e9d0 */
  push32((uint32_t)(0x11b1e9d0u));
  /* 11b11abf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ac1 call esi */
  call_ind((uint32_t)(ESI), 0x11b11ac3u);
  /* 11b11ac3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ac8 push 0x11b1e990 */
  push32((uint32_t)(0x11b1e990u));
  /* 11b11acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11acf call esi */
  call_ind((uint32_t)(ESI), 0x11b11ad1u);
  /* 11b11ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ad3 push 0x11b1e3c0 */
  push32((uint32_t)(0x11b1e3c0u));
  /* 11b11ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ada call esi */
  call_ind((uint32_t)(ESI), 0x11b11adcu);
  /* 11b11adc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ade push 0x11b1e998 */
  push32((uint32_t)(0x11b1e998u));
  /* 11b11ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ae5 call esi */
  call_ind((uint32_t)(ESI), 0x11b11ae7u);
  /* 11b11ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ae9 push 0x11b1e3c8 */
  push32((uint32_t)(0x11b1e3c8u));
  /* 11b11aee push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11af0 call esi */
  call_ind((uint32_t)(ESI), 0x11b11af2u);
  /* 11b11af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11af4 push 0x11b1e9a8 */
  push32((uint32_t)(0x11b1e9a8u));
  /* 11b11af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11afb call esi */
  call_ind((uint32_t)(ESI), 0x11b11afdu);
  /* 11b11afd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11aff call edi */
  call_ind((uint32_t)(EDI), 0x11b11b01u);
  /* 11b11b01 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11b04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11b07 jne 0x11b11b25 */
  if (!C.zf) goto L_11b11b25;
  /* 11b11b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b0b push 0x11b1e760 */
  push32((uint32_t)(0x11b1e760u));
  /* 11b11b10 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11b12u);
  /* 11b11b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b14 call dword ptr [0x11b19104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19104))), 0x11b11b1au);
  /* 11b11b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b1c call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b11b22u);
  /* 11b11b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11b25:;
  /* 11b11b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b27 call edi */
  call_ind((uint32_t)(EDI), 0x11b11b29u);
  /* 11b11b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11b2c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11b2f je 0x11b11b3d */
  if (C.zf) goto L_11b11b3d;
  /* 11b11b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b33 call edi */
  call_ind((uint32_t)(EDI), 0x11b11b35u);
  /* 11b11b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11b38 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11b3b jne 0x11b11b59 */
  if (!C.zf) goto L_11b11b59;
L_11b11b3d:;
  /* 11b11b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b3f push 0x11b1e948 */
  push32((uint32_t)(0x11b1e948u));
  /* 11b11b44 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11b46u);
  /* 11b11b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b48 call dword ptr [0x11b19104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19104))), 0x11b11b4eu);
  /* 11b11b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b50 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b11b56u);
  /* 11b11b56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11b59:;
  /* 11b11b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b5b call edi */
  call_ind((uint32_t)(EDI), 0x11b11b5du);
  /* 11b11b5d mov ecx, 5 */
  ECX = (0x5u);
  /* 11b11b62 mov esi, dword ptr [0x11b19118] */
  ESI = (r32((uint32_t)(0x11b19118)));
  /* 11b11b68 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11b6a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11b6d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11b70 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11b73 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b11b76 push eax */
  push32((uint32_t)(EAX));
  /* 11b11b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b7b call esi */
  call_ind((uint32_t)(ESI), 0x11b11b7du);
  /* 11b11b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b7f call edi */
  call_ind((uint32_t)(EDI), 0x11b11b81u);
  /* 11b11b81 mov ecx, 5 */
  ECX = (0x5u);
  /* 11b11b86 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11b88 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11b8b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11b8e lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b11b91 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11b11b94 push ecx */
  push32((uint32_t)(ECX));
  /* 11b11b95 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b99 call esi */
  call_ind((uint32_t)(ESI), 0x11b11b9bu);
  /* 11b11b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11b9d call edi */
  call_ind((uint32_t)(EDI), 0x11b11b9fu);
  /* 11b11b9f mov ecx, 5 */
  ECX = (0x5u);
  /* 11b11ba4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11ba6 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11ba9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11bac lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b11baf shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11b11bb2 push edx */
  push32((uint32_t)(EDX));
  /* 11b11bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11bb7 call esi */
  call_ind((uint32_t)(ESI), 0x11b11bb9u);
  /* 11b11bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11bbb call edi */
  call_ind((uint32_t)(EDI), 0x11b11bbdu);
  /* 11b11bbd mov ecx, 5 */
  ECX = (0x5u);
  /* 11b11bc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11bc4 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11bc7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11bca lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11bcd shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b11bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11b11bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11bd5 call esi */
  call_ind((uint32_t)(ESI), 0x11b11bd7u);
  /* 11b11bd7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11bda push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11bdc call edi */
  call_ind((uint32_t)(EDI), 0x11b11bdeu);
  /* 11b11bde mov ecx, 5 */
  ECX = (0x5u);
  /* 11b11be3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11be5 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11be8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11beb lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b11bee shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11b11bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b11bf2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b11bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11bf6 call esi */
  call_ind((uint32_t)(ESI), 0x11b11bf8u);
  /* 11b11bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11bfa call edi */
  call_ind((uint32_t)(EDI), 0x11b11bfcu);
  /* 11b11bfc mov ecx, 5 */
  ECX = (0x5u);
  /* 11b11c01 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11c03 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11c06 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c09 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c0c shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11b11c0f push edx */
  push32((uint32_t)(EDX));
  /* 11b11c10 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b11c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11c14 call esi */
  call_ind((uint32_t)(ESI), 0x11b11c16u);
  /* 11b11c16 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b11c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c1f call esi */
  call_ind((uint32_t)(ESI), 0x11b11c21u);
  /* 11b11c21 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11b11c26 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11c28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c2a call esi */
  call_ind((uint32_t)(ESI), 0x11b11c2cu);
  /* 11b11c2c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 11b11c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c35 call esi */
  call_ind((uint32_t)(ESI), 0x11b11c37u);
  /* 11b11c37 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11c3c call edi */
  call_ind((uint32_t)(EDI), 0x11b11c3eu);
  /* 11b11c3e add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11c41 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c44 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c47 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c4a shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b11c4d push eax */
  push32((uint32_t)(EAX));
  /* 11b11c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c52 call esi */
  call_ind((uint32_t)(ESI), 0x11b11c54u);
  /* 11b11c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11c56 call edi */
  call_ind((uint32_t)(EDI), 0x11b11c58u);
  /* 11b11c58 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11c5b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c5e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c61 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c64 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11b11c67 push ecx */
  push32((uint32_t)(ECX));
  /* 11b11c68 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b11c6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c6c call esi */
  call_ind((uint32_t)(ESI), 0x11b11c6eu);
  /* 11b11c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11c70 call edi */
  call_ind((uint32_t)(EDI), 0x11b11c72u);
  /* 11b11c72 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11c75 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c78 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c7b lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b11c7e shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11b11c81 push edx */
  push32((uint32_t)(EDX));
  /* 11b11c82 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b11c84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11c86 call esi */
  call_ind((uint32_t)(ESI), 0x11b11c88u);
  /* 11b11c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11c8a push 0x11b1e388 */
  push32((uint32_t)(0x11b1e388u));
  /* 11b11c8f call ebp */
  call_ind((uint32_t)(EBP), 0x11b11c91u);
  /* 11b11c91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11c93 push 0x11b1e380 */
  push32((uint32_t)(0x11b1e380u));
  /* 11b11c98 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11c9au);
  /* 11b11c9a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11c9f push 0x11b1e398 */
  push32((uint32_t)(0x11b1e398u));
  /* 11b11ca4 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11ca6u);
  /* 11b11ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11ca8 push 0x11b1e390 */
  push32((uint32_t)(0x11b1e390u));
  /* 11b11cad call ebp */
  call_ind((uint32_t)(EBP), 0x11b11cafu);
  /* 11b11caf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11cb1 push 0x11b1e3a8 */
  push32((uint32_t)(0x11b1e3a8u));
  /* 11b11cb6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11cb8u);
  /* 11b11cb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11cba push 0x11b1e3a0 */
  push32((uint32_t)(0x11b1e3a0u));
  /* 11b11cbf call ebp */
  call_ind((uint32_t)(EBP), 0x11b11cc1u);
  /* 11b11cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11cc3 push 0x11b1e3b8 */
  push32((uint32_t)(0x11b1e3b8u));
  /* 11b11cc8 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11ccau);
  /* 11b11cca push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11ccc push 0x11b1e3b0 */
  push32((uint32_t)(0x11b1e3b0u));
  /* 11b11cd1 call ebp */
  call_ind((uint32_t)(EBP), 0x11b11cd3u);
  /* 11b11cd3 mov esi, dword ptr [0x11b19110] */
  ESI = (r32((uint32_t)(0x11b19110)));
  /* 11b11cd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11cdb call esi */
  call_ind((uint32_t)(ESI), 0x11b11cddu);
  /* 11b11cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11cdf call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b11ce5u);
  /* 11b11ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ce7 push 0x11b1ea78 */
  push32((uint32_t)(0x11b1ea78u));
  /* 11b11cec call ebp */
  call_ind((uint32_t)(EBP), 0x11b11ceeu);
  /* 11b11cee add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11cf3 call esi */
  call_ind((uint32_t)(ESI), 0x11b11cf5u);
  /* 11b11cf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11cf7 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b11cfdu);
  /* 11b11cfd push 0x11b1e438 */
  push32((uint32_t)(0x11b1e438u));
  /* 11b11d02 call dword ptr [0x11b19120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19120))), 0x11b11d08u);
  /* 11b11d08 push 0x11b1e3d0 */
  push32((uint32_t)(0x11b1e3d0u));
  /* 11b11d0d call dword ptr [0x11b19124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19124))), 0x11b11d13u);
  /* 11b11d13 mov esi, dword ptr [0x11b1911c] */
  ESI = (r32((uint32_t)(0x11b1911c)));
  /* 11b11d19 push 0x11b1e950 */
  push32((uint32_t)(0x11b1e950u));
  /* 11b11d1e call esi */
  call_ind((uint32_t)(ESI), 0x11b11d20u);
  /* 11b11d20 push 0x11b1e958 */
  push32((uint32_t)(0x11b1e958u));
  /* 11b11d25 call esi */
  call_ind((uint32_t)(ESI), 0x11b11d27u);
  /* 11b11d27 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11d2e call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d30u);
  /* 11b11d30 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11d37 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d39u);
  /* 11b11d39 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d3e push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11d40 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d42u);
  /* 11b11d42 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d47 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b11d49 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d4bu);
  /* 11b11d4b push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d50 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b11d52 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d54u);
  /* 11b11d54 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11d57 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d5c push 6 */
  push32((uint32_t)(0x6u));
  /* 11b11d5e call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d60u);
  /* 11b11d60 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d65 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b11d67 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d69u);
  /* 11b11d69 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d6e push 8 */
  push32((uint32_t)(0x8u));
  /* 11b11d70 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d72u);
  /* 11b11d72 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d77 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b11d79 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d7bu);
  /* 11b11d7b push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b11d80 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b11d82 call ebx */
  call_ind((uint32_t)(EBX), 0x11b11d84u);
  /* 11b11d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11d86 call edi */
  call_ind((uint32_t)(EDI), 0x11b11d88u);
  /* 11b11d88 mov ecx, 8 */
  ECX = (0x8u);
  /* 11b11d8d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b11d8f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b11d92 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11d95 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b11d98 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b11d9b push eax */
  push32((uint32_t)(EAX));
  /* 11b11d9c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b11d9e call ebx */
  call_ind((uint32_t)(EBX), 0x11b11da0u);
  /* 11b11da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11da2 call edi */
  call_ind((uint32_t)(EDI), 0x11b11da4u);
  /* 11b11da4 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11da7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b11daa ja 0x11b11e66 */
  if ((!C.cf&&!C.zf)) goto L_11b11e66;
  /* 11b11db0 mov esi, dword ptr [0x11b1912c] */
  ESI = (r32((uint32_t)(0x11b1912c)));
  /* 11b11db6 jmp dword ptr [eax*4 + 0x11b126a0] */
  switch (EAX) {
    case 0: goto L_11b11dbd;
    case 1: goto L_11b11dd6;
    case 2: goto L_11b11e29;
    case 3: goto L_11b11e4d;
    case 4: goto L_11b12343;
    case 5: goto L_11b1234e;
    case 6: goto L_11b12359;
    case 7: goto L_11b12364;
    case 8: goto L_11b123e5;
    case 9: goto L_11b123f0;
    case 10: goto L_11b123fb;
    case 11: goto L_11b12406;
    case 12: goto L_11b12411;
    default: x86_unimpl("switch@0x11b11db6 out of table"); return;
  }
L_11b11dbd:;
  /* 11b11dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11dbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11dc1 push 0x11b1e930 */
  push32((uint32_t)(0x11b1e930u));
  /* 11b11dc6 call esi */
  call_ind((uint32_t)(ESI), 0x11b11dc8u);
  /* 11b11dc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b11dca push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11dcc push 0x11b1e468 */
  push32((uint32_t)(0x11b1e468u));
  /* 11b11dd1 call esi */
  call_ind((uint32_t)(ESI), 0x11b11dd3u);
  /* 11b11dd3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11dd6:;
  /* 11b11dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b11dd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11dda push 0x11b1e960 */
  push32((uint32_t)(0x11b1e960u));
  /* 11b11ddf call esi */
  call_ind((uint32_t)(ESI), 0x11b11de1u);
  /* 11b11de1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b11de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11de5 push 0x11b1ea60 */
  push32((uint32_t)(0x11b1ea60u));
  /* 11b11dea call esi */
  call_ind((uint32_t)(ESI), 0x11b11decu);
  /* 11b11dec push 6 */
  push32((uint32_t)(0x6u));
  /* 11b11dee push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11df0 push 0x11b1e430 */
  push32((uint32_t)(0x11b1e430u));
  /* 11b11df5 call esi */
  call_ind((uint32_t)(ESI), 0x11b11df7u);
  /* 11b11df7 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b11df9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11dfb push 0x11b1e478 */
  push32((uint32_t)(0x11b1e478u));
  /* 11b11e00 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e02u);
  /* 11b11e02 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b11e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e06 push 0x11b1e470 */
  push32((uint32_t)(0x11b1e470u));
  /* 11b11e0b call esi */
  call_ind((uint32_t)(ESI), 0x11b11e0du);
  /* 11b11e0d push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b11e0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e11 push 0x11b1e480 */
  push32((uint32_t)(0x11b1e480u));
  /* 11b11e16 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e18u);
  /* 11b11e18 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11e1b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b11e1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e1f push 0x11b1e488 */
  push32((uint32_t)(0x11b1e488u));
  /* 11b11e24 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e26u);
  /* 11b11e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11e29:;
  /* 11b11e29 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b11e2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e2d push 0x11b1ea08 */
  push32((uint32_t)(0x11b1ea08u));
  /* 11b11e32 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e34u);
  /* 11b11e34 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b11e36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e38 push 0x11b1ea10 */
  push32((uint32_t)(0x11b1ea10u));
  /* 11b11e3d call esi */
  call_ind((uint32_t)(ESI), 0x11b11e3fu);
  /* 11b11e3f push 9 */
  push32((uint32_t)(0x9u));
  /* 11b11e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e43 push 0x11b1e980 */
  push32((uint32_t)(0x11b1e980u));
  /* 11b11e48 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e4au);
  /* 11b11e4a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11e4d:;
  /* 11b11e4d push 7 */
  push32((uint32_t)(0x7u));
  /* 11b11e4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e51 push 0x11b1e750 */
  push32((uint32_t)(0x11b1e750u));
  /* 11b11e56 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e58u);
  /* 11b11e58 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b11e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b11e5c push 0x11b1e770 */
  push32((uint32_t)(0x11b1e770u));
  /* 11b11e61 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e63u);
  /* 11b11e63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11e66:;
  /* 11b11e66 mov esi, dword ptr [0x11b19130] */
  ESI = (r32((uint32_t)(0x11b19130)));
  /* 11b11e6c push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11b11e6e call esi */
  call_ind((uint32_t)(ESI), 0x11b11e70u);
  /* 11b11e70 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11b11e72 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e74u);
  /* 11b11e74 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11b11e76 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e78u);
  /* 11b11e78 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11b11e7a call esi */
  call_ind((uint32_t)(ESI), 0x11b11e7cu);
  /* 11b11e7c push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11b11e7e call esi */
  call_ind((uint32_t)(ESI), 0x11b11e80u);
  /* 11b11e80 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11b11e82 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e84u);
  /* 11b11e84 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11b11e86 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e88u);
  /* 11b11e88 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11b11e8a call esi */
  call_ind((uint32_t)(ESI), 0x11b11e8cu);
  /* 11b11e8c push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11b11e8e call esi */
  call_ind((uint32_t)(ESI), 0x11b11e90u);
  /* 11b11e90 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11b11e92 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e94u);
  /* 11b11e94 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11b11e96 call esi */
  call_ind((uint32_t)(ESI), 0x11b11e98u);
  /* 11b11e98 mov esi, dword ptr [0x11b19128] */
  ESI = (r32((uint32_t)(0x11b19128)));
  /* 11b11e9e push 0x11b1b530 */
  push32((uint32_t)(0x11b1b530u));
  /* 11b11ea3 call esi */
  call_ind((uint32_t)(ESI), 0x11b11ea5u);
  /* 11b11ea5 push 0x11b1b524 */
  push32((uint32_t)(0x11b1b524u));
  /* 11b11eaa call esi */
  call_ind((uint32_t)(ESI), 0x11b11eacu);
  /* 11b11eac push 0x11b1b518 */
  push32((uint32_t)(0x11b1b518u));
  /* 11b11eb1 call esi */
  call_ind((uint32_t)(ESI), 0x11b11eb3u);
  /* 11b11eb3 mov esi, dword ptr [0x11b19138] */
  ESI = (r32((uint32_t)(0x11b19138)));
  /* 11b11eb9 push 0x11b1e928 */
  push32((uint32_t)(0x11b1e928u));
  /* 11b11ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ec0 call esi */
  call_ind((uint32_t)(ESI), 0x11b11ec2u);
  /* 11b11ec2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11ec5 push 0x11b1e940 */
  push32((uint32_t)(0x11b1e940u));
  /* 11b11eca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ecc call esi */
  call_ind((uint32_t)(ESI), 0x11b11eceu);
  /* 11b11ece push 0x11b1ea18 */
  push32((uint32_t)(0x11b1ea18u));
  /* 11b11ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ed5 call esi */
  call_ind((uint32_t)(ESI), 0x11b11ed7u);
  /* 11b11ed7 push 0x11b1ea68 */
  push32((uint32_t)(0x11b1ea68u));
  /* 11b11edc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11ede call esi */
  call_ind((uint32_t)(ESI), 0x11b11ee0u);
  /* 11b11ee0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b11ee3:;
  /* 11b11ee3 push 0x11b1e490 */
  push32((uint32_t)(0x11b1e490u));
  /* 11b11ee8 call 0x11b12bc0 */
  push32(0x11b11eedu); f_11b12bc0();
  /* 11b11eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11ef0 mov ecx, 0x11b1e358 */
  ECX = (0x11b1e358u);
  /* 11b11ef5 push eax */
  push32((uint32_t)(EAX));
  /* 11b11ef6 call 0x11b12b40 */
  push32(0x11b11efbu); f_11b12b40();
  /* 11b11efb push 0x11b1e438 */
  push32((uint32_t)(0x11b1e438u));
  /* 11b11f00 call 0x11b12bc0 */
  push32(0x11b11f05u); f_11b12bc0();
  /* 11b11f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f08 mov ecx, 0x11b1e728 */
  ECX = (0x11b1e728u);
  /* 11b11f0d push eax */
  push32((uint32_t)(EAX));
  /* 11b11f0e call 0x11b12b40 */
  push32(0x11b11f13u); f_11b12b40();
  /* 11b11f13 push 0x11b1e498 */
  push32((uint32_t)(0x11b1e498u));
  /* 11b11f18 call 0x11b12bc0 */
  push32(0x11b11f1du); f_11b12bc0();
  /* 11b11f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f20 mov ecx, 0x11b1e3e0 */
  ECX = (0x11b1e3e0u);
  /* 11b11f25 push eax */
  push32((uint32_t)(EAX));
  /* 11b11f26 call 0x11b12b40 */
  push32(0x11b11f2bu); f_11b12b40();
  /* 11b11f2b push 0x11b1e4a0 */
  push32((uint32_t)(0x11b1e4a0u));
  /* 11b11f30 call 0x11b12bc0 */
  push32(0x11b11f35u); f_11b12bc0();
  /* 11b11f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f38 mov ecx, 0x11b1ea88 */
  ECX = (0x11b1ea88u);
  /* 11b11f3d push eax */
  push32((uint32_t)(EAX));
  /* 11b11f3e call 0x11b12b40 */
  push32(0x11b11f43u); f_11b12b40();
  /* 11b11f43 push 0x11b1e950 */
  push32((uint32_t)(0x11b1e950u));
  /* 11b11f48 call 0x11b12bc0 */
  push32(0x11b11f4du); f_11b12bc0();
  /* 11b11f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f50 mov ecx, 0x11b1e408 */
  ECX = (0x11b1e408u);
  /* 11b11f55 push eax */
  push32((uint32_t)(EAX));
  /* 11b11f56 call 0x11b12b40 */
  push32(0x11b11f5bu); f_11b12b40();
  /* 11b11f5b push 0x11b1e958 */
  push32((uint32_t)(0x11b1e958u));
  /* 11b11f60 call 0x11b12bc0 */
  push32(0x11b11f65u); f_11b12bc0();
  /* 11b11f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f68 mov ecx, 0x11b1ea30 */
  ECX = (0x11b1ea30u);
  /* 11b11f6d push eax */
  push32((uint32_t)(EAX));
  /* 11b11f6e call 0x11b12b40 */
  push32(0x11b11f73u); f_11b12b40();
  /* 11b11f73 push 0x11b1e4a8 */
  push32((uint32_t)(0x11b1e4a8u));
  /* 11b11f78 call 0x11b12bc0 */
  push32(0x11b11f7du); f_11b12bc0();
  /* 11b11f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f80 mov ecx, 0x11b1e900 */
  ECX = (0x11b1e900u);
  /* 11b11f85 push eax */
  push32((uint32_t)(EAX));
  /* 11b11f86 call 0x11b12b40 */
  push32(0x11b11f8bu); f_11b12b40();
  /* 11b11f8b push 0x11b1e4b0 */
  push32((uint32_t)(0x11b1e4b0u));
  /* 11b11f90 call 0x11b12bc0 */
  push32(0x11b11f95u); f_11b12bc0();
  /* 11b11f95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11f98 mov ecx, 0x11b1e8d8 */
  ECX = (0x11b1e8d8u);
  /* 11b11f9d push eax */
  push32((uint32_t)(EAX));
  /* 11b11f9e call 0x11b12b40 */
  push32(0x11b11fa3u); f_11b12b40();
  /* 11b11fa3 push 0x11b1e4b8 */
  push32((uint32_t)(0x11b1e4b8u));
  /* 11b11fa8 call 0x11b12bc0 */
  push32(0x11b11fadu); f_11b12bc0();
  /* 11b11fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11fb0 mov ecx, 0x11b1e440 */
  ECX = (0x11b1e440u);
  /* 11b11fb5 push eax */
  push32((uint32_t)(EAX));
  /* 11b11fb6 call 0x11b12b40 */
  push32(0x11b11fbbu); f_11b12b40();
  /* 11b11fbb push 0x11b1e3d0 */
  push32((uint32_t)(0x11b1e3d0u));
  /* 11b11fc0 call 0x11b12bc0 */
  push32(0x11b11fc5u); f_11b12bc0();
  /* 11b11fc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11fc8 mov ecx, 0x11b1e9d8 */
  ECX = (0x11b1e9d8u);
  /* 11b11fcd push eax */
  push32((uint32_t)(EAX));
  /* 11b11fce call 0x11b12b40 */
  push32(0x11b11fd3u); f_11b12b40();
  /* 11b11fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b11fd5 push 0x11b1e768 */
  push32((uint32_t)(0x11b1e768u));
  /* 11b11fda push 0x11b1e788 */
  push32((uint32_t)(0x11b1e788u));
  /* 11b11fdf call dword ptr [0x11b1913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1913c))), 0x11b11fe5u);
  /* 11b11fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b11fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b11fea je 0x11b120e7 */
  if (C.zf) goto L_11b120e7;
  /* 11b11ff0 push 0x11b1e538 */
  push32((uint32_t)(0x11b1e538u));
  /* 11b11ff5 push 0x11b1e788 */
  push32((uint32_t)(0x11b1e788u));
  /* 11b11ffa mov dword ptr [esp + 0x18], 0 */
  w32((uint32_t)(ESP + 0x18), (0x0u));
  /* 11b12002 call dword ptr [0x11b19134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19134))), 0x11b12008u);
  /* 11b12008 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1200b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1200d jne 0x11b12046 */
  if (!C.zf) goto L_11b12046;
  /* 11b1200f mov esi, 0x11b1e538 */
  ESI = (0x11b1e538u);
L_11b12014:;
  /* 11b12014 cmp esi, 0x11b1e722 */
  { uint32_t _a=(ESI),_b=(0x11b1e722u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1201a jg 0x11b1203b */
  if ((!C.zf&&C.sf==C.of)) goto L_11b1203b;
  /* 11b1201c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12020 add esi, 0xe */
  { uint32_t _a=(ESI),_b=(0xeu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12023 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b12024 push esi */
  push32((uint32_t)(ESI));
  /* 11b12025 push 0x11b1e788 */
  push32((uint32_t)(0x11b1e788u));
  /* 11b1202a mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11b1202e call dword ptr [0x11b19134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19134))), 0x11b12034u);
  /* 11b12034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12039 je 0x11b12014 */
  if (C.zf) goto L_11b12014;
L_11b1203b:;
  /* 11b1203b cmp dword ptr [esp + 0x10], 0x23 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12040 jge 0x11b120e7 */
  if ((C.sf==C.of)) goto L_11b120e7;
L_11b12046:;
  /* 11b12046 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b1204a mov edx, ecx */
  EDX = (ECX);
  /* 11b1204c lea esi, [ecx*8] */
  ESI = ((uint32_t)(ECX*8));
  /* 11b12053 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b12055 shl esi, 1 */
  ESI = (sh_shl((uint32_t)(ESI), (0x1u)&0x1f, 32));
  /* 11b12057 mov al, byte ptr [esi + 0x11b1e545] */
  AL = (r8((uint32_t)(ESI + 0x11b1e545)));
  /* 11b1205d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b1205f je 0x11b12087 */
  if (C.zf) goto L_11b12087;
  /* 11b12061 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12063 call edi */
  call_ind((uint32_t)(EDI), 0x11b12065u);
  /* 11b12065 mov ecx, 0xa */
  ECX = (0xau);
  /* 11b1206a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1206c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b1206f lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b12072 mov al, byte ptr [esi + 0x11b1e540] */
  AL = (r8((uint32_t)(ESI + 0x11b1e540)));
  /* 11b12078 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b1207a push edx */
  push32((uint32_t)(EDX));
  /* 11b1207b push eax */
  push32((uint32_t)(EAX));
  /* 11b1207c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1207e call dword ptr [0x11b19144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19144))), 0x11b12084u);
  /* 11b12084 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b12087:;
  /* 11b12087 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b12089 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1208b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1208d call dword ptr [0x11b19144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19144))), 0x11b12093u);
  /* 11b12093 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12095 push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b1209a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1209c call dword ptr [0x11b19148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19148))), 0x11b120a2u);
  /* 11b120a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120a4 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b120aau);
  /* 11b120aa lea ecx, [esi + 0x11b1e538] */
  ECX = ((uint32_t)(ESI + 0x11b1e538));
  /* 11b120b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b120b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11b120b5u);
  /* 11b120b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120b9 push 0x11b1e350 */
  push32((uint32_t)(0x11b1e350u));
  /* 11b120be push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120c0 call dword ptr [0x11b19140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19140))), 0x11b120c6u);
  /* 11b120c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b120c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120ca call dword ptr [0x11b19150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19150))), 0x11b120d0u);
  /* 11b120d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120d2 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b120d8u);
  /* 11b120d8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b120db push 0 */
  push32((uint32_t)(0x0u));
  /* 11b120dd push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b120e2 call ebp */
  call_ind((uint32_t)(EBP), 0x11b120e4u);
  /* 11b120e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b120e7:;
  /* 11b120e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b120e9 push 0x11b1e350 */
  push32((uint32_t)(0x11b1e350u));
  /* 11b120ee call dword ptr [0x11b19154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19154))), 0x11b120f4u);
  /* 11b120f4 mov esi, dword ptr [0x11b1914c] */
  ESI = (r32((uint32_t)(0x11b1914c)));
  /* 11b120fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b120fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b120ff je 0x11b12134 */
  if (C.zf) goto L_11b12134;
  /* 11b12101 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12103 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b12105 push 0x11b1e768 */
  push32((uint32_t)(0x11b1e768u));
  /* 11b1210a push 0x11b1e350 */
  push32((uint32_t)(0x11b1e350u));
  /* 11b1210f call esi */
  call_ind((uint32_t)(ESI), 0x11b12111u);
  /* 11b12111 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b12113 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b12115 push 0x11b1ea20 */
  push32((uint32_t)(0x11b1ea20u));
  /* 11b1211a push 0x11b1e350 */
  push32((uint32_t)(0x11b1e350u));
  /* 11b1211f call esi */
  call_ind((uint32_t)(ESI), 0x11b12121u);
  /* 11b12121 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b12123 call dword ptr [0x11b19104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19104))), 0x11b12129u);
  /* 11b12129 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1212b call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b12131u);
  /* 11b12131 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b12134:;
  /* 11b12134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12136 push 0x11b1ea20 */
  push32((uint32_t)(0x11b1ea20u));
  /* 11b1213b push 0x11b1e788 */
  push32((uint32_t)(0x11b1e788u));
  /* 11b12140 call dword ptr [0x11b1913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1913c))), 0x11b12146u);
  /* 11b12146 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1214b je 0x11b121db */
  if (C.zf) goto L_11b121db;
  /* 11b12151 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12153 push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b12158 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1215a call dword ptr [0x11b19148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19148))), 0x11b12160u);
  /* 11b12160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12162 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b12168u);
  /* 11b12168 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1216a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1216c push 0x11b1ea20 */
  push32((uint32_t)(0x11b1ea20u));
  /* 11b12171 push 0x11b1e788 */
  push32((uint32_t)(0x11b1e788u));
  /* 11b12176 call esi */
  call_ind((uint32_t)(ESI), 0x11b12178u);
  /* 11b12178 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1217a push 0x11b1e348 */
  push32((uint32_t)(0x11b1e348u));
  /* 11b1217f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12181 call dword ptr [0x11b19148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19148))), 0x11b12187u);
  /* 11b12187 push 0x11b1e348 */
  push32((uint32_t)(0x11b1e348u));
  /* 11b1218c call dword ptr [0x11b1915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1915c))), 0x11b12192u);
  /* 11b12192 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11b12195 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b12198 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b1219b shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11b1219e push edx */
  push32((uint32_t)(EDX));
  /* 11b1219f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b121a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b121a3 call dword ptr [0x11b19144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19144))), 0x11b121a9u);
  /* 11b121a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b121ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b121ad push 0x11b1e350 */
  push32((uint32_t)(0x11b1e350u));
  /* 11b121b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b121b4 call dword ptr [0x11b19140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19140))), 0x11b121bau);
  /* 11b121ba add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b121bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b121bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b121c1 call dword ptr [0x11b19150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19150))), 0x11b121c7u);
  /* 11b121c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b121c9 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b121cfu);
  /* 11b121cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b121d1 push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b121d6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b121d8u);
  /* 11b121d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b121db:;
  /* 11b121db push 0x11b1e4e8 */
  push32((uint32_t)(0x11b1e4e8u));
  /* 11b121e0 push 0x11b1e500 */
  push32((uint32_t)(0x11b1e500u));
  /* 11b121e5 push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b121ea call 0x11b12b70 */
  push32(0x11b121efu); f_11b12b70();
  /* 11b121ef push 0x11b1e520 */
  push32((uint32_t)(0x11b1e520u));
  /* 11b121f4 push 0x11b1e510 */
  push32((uint32_t)(0x11b1e510u));
  /* 11b121f9 push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b121fe call 0x11b12b70 */
  push32(0x11b12203u); f_11b12b70();
  /* 11b12203 push 0x11b1e530 */
  push32((uint32_t)(0x11b1e530u));
  /* 11b12208 push 0x11b1e518 */
  push32((uint32_t)(0x11b1e518u));
  /* 11b1220d push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b12212 call 0x11b12b70 */
  push32(0x11b12217u); f_11b12b70();
  /* 11b12217 push 0x11b1e4d0 */
  push32((uint32_t)(0x11b1e4d0u));
  /* 11b1221c push 0x11b1e4c0 */
  push32((uint32_t)(0x11b1e4c0u));
  /* 11b12221 push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b12226 call 0x11b12b70 */
  push32(0x11b1222bu); f_11b12b70();
  /* 11b1222b push 0x11b1e4f8 */
  push32((uint32_t)(0x11b1e4f8u));
  /* 11b12230 push 0x11b1e4e8 */
  push32((uint32_t)(0x11b1e4e8u));
  /* 11b12235 push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b1223a call 0x11b12b70 */
  push32(0x11b1223fu); f_11b12b70();
  /* 11b1223f push 0x11b1e508 */
  push32((uint32_t)(0x11b1e508u));
  /* 11b12244 push 0x11b1e4f0 */
  push32((uint32_t)(0x11b1e4f0u));
  /* 11b12249 push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b1224e call 0x11b12b70 */
  push32(0x11b12253u); f_11b12b70();
  /* 11b12253 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12256 push 0x11b1e528 */
  push32((uint32_t)(0x11b1e528u));
  /* 11b1225b push 0x11b1e510 */
  push32((uint32_t)(0x11b1e510u));
  /* 11b12260 push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b12265 call 0x11b12b70 */
  push32(0x11b1226au); f_11b12b70();
  /* 11b1226a push 0x11b1e4d8 */
  push32((uint32_t)(0x11b1e4d8u));
  /* 11b1226f push 0x11b1e4c0 */
  push32((uint32_t)(0x11b1e4c0u));
  /* 11b12274 push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b12279 call 0x11b12b70 */
  push32(0x11b1227eu); f_11b12b70();
  /* 11b1227e push 0x11b1e4e0 */
  push32((uint32_t)(0x11b1e4e0u));
  /* 11b12283 push 0x11b1e4c8 */
  push32((uint32_t)(0x11b1e4c8u));
  /* 11b12288 push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b1228d call 0x11b12b70 */
  push32(0x11b12292u); f_11b12b70();
  /* 11b12292 mov ebp, dword ptr [0x11b19160] */
  EBP = (r32((uint32_t)(0x11b19160)));
  /* 11b12298 push 0x11b1df50 */
  push32((uint32_t)(0x11b1df50u));
  /* 11b1229d call ebp */
  call_ind((uint32_t)(EBP), 0x11b1229fu);
  /* 11b1229f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b122a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b122a4 je 0x11b122be */
  if (C.zf) goto L_11b122be;
  /* 11b122a6 push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b122ab push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b122b0 push 0x11b1df50 */
  push32((uint32_t)(0x11b1df50u));
  /* 11b122b5 call dword ptr [0x11b19158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19158))), 0x11b122bbu);
  /* 11b122bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b122be:;
  /* 11b122be push 0x11b1df58 */
  push32((uint32_t)(0x11b1df58u));
  /* 11b122c3 call ebp */
  call_ind((uint32_t)(EBP), 0x11b122c5u);
  /* 11b122c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b122c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b122ca je 0x11b122e4 */
  if (C.zf) goto L_11b122e4;
  /* 11b122cc push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b122d1 push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b122d6 push 0x11b1df58 */
  push32((uint32_t)(0x11b1df58u));
  /* 11b122db call dword ptr [0x11b19158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19158))), 0x11b122e1u);
  /* 11b122e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b122e4:;
  /* 11b122e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b122e6 push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b122eb push 0x11b1e338 */
  push32((uint32_t)(0x11b1e338u));
  /* 11b122f0 call dword ptr [0x11b1913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1913c))), 0x11b122f6u);
  /* 11b122f6 mov ebp, dword ptr [0x11b19168] */
  EBP = (r32((uint32_t)(0x11b19168)));
  /* 11b122fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b122ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12301 je 0x11b1238a */
  if (C.zf) goto L_11b1238a;
  /* 11b12307 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12309 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1230b push 0x11b1e938 */
  push32((uint32_t)(0x11b1e938u));
  /* 11b12310 push 0x11b1e338 */
  push32((uint32_t)(0x11b1e338u));
  /* 11b12315 call esi */
  call_ind((uint32_t)(ESI), 0x11b12317u);
  /* 11b12317 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12319 call 0x11b134af */
  push32(0x11b1231eu); f_11b134af();
  /* 11b1231e push eax */
  push32((uint32_t)(EAX));
  /* 11b1231f call 0x11b13480 */
  push32(0x11b12324u); f_11b13480();
  /* 11b12324 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12327 call 0x11b1348d */
  push32(0x11b1232cu); f_11b1348d();
  /* 11b1232c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b1232d mov ecx, 6 */
  ECX = (0x6u);
  /* 11b12332 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b12334 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11b12337 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1233a ja 0x11b1236f */
  if ((!C.cf&&!C.zf)) goto L_11b1236f;
  /* 11b1233c jmp dword ptr [eax*4 + 0x11b126b0] */
  switch (EAX) {
    case 0: goto L_11b12343;
    case 1: goto L_11b1234e;
    case 2: goto L_11b12359;
    case 3: goto L_11b12364;
    case 4: goto L_11b123e5;
    case 5: goto L_11b123f0;
    case 6: goto L_11b123fb;
    case 7: goto L_11b12406;
    case 8: goto L_11b12411;
    default: x86_unimpl("switch@0x11b1233c out of table"); return;
  }
L_11b12343:;
  /* 11b12343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12345 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12347 push 0x11b1e4e8 */
  push32((uint32_t)(0x11b1e4e8u));
  /* 11b1234c jmp 0x11b12378 */
  goto L_11b12378;
L_11b1234e:;
  /* 11b1234e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12352 push 0x11b1e510 */
  push32((uint32_t)(0x11b1e510u));
  /* 11b12357 jmp 0x11b12378 */
  goto L_11b12378;
L_11b12359:;
  /* 11b12359 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1235b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1235d push 0x11b1e518 */
  push32((uint32_t)(0x11b1e518u));
  /* 11b12362 jmp 0x11b12378 */
  goto L_11b12378;
L_11b12364:;
  /* 11b12364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12366 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12368 push 0x11b1e4c0 */
  push32((uint32_t)(0x11b1e4c0u));
  /* 11b1236d jmp 0x11b12378 */
  goto L_11b12378;
L_11b1236f:;
  /* 11b1236f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12373 push 0x11b1ea58 */
  push32((uint32_t)(0x11b1ea58u));
L_11b12378:;
  /* 11b12378 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1237a call ebp */
  call_ind((uint32_t)(EBP), 0x11b1237cu);
  /* 11b1237c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1237f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12381 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b12387u);
  /* 11b12387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b1238a:;
  /* 11b1238a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1238c push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b12391 push 0x11b1e340 */
  push32((uint32_t)(0x11b1e340u));
  /* 11b12396 call dword ptr [0x11b1913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1913c))), 0x11b1239cu);
  /* 11b1239c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1239f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b123a1 je 0x11b12437 */
  if (C.zf) goto L_11b12437;
  /* 11b123a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b123ab push 0x11b1ea70 */
  push32((uint32_t)(0x11b1ea70u));
  /* 11b123b0 push 0x11b1e340 */
  push32((uint32_t)(0x11b1e340u));
  /* 11b123b5 call esi */
  call_ind((uint32_t)(ESI), 0x11b123b7u);
  /* 11b123b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123b9 call 0x11b134af */
  push32(0x11b123beu); f_11b134af();
  /* 11b123be push eax */
  push32((uint32_t)(EAX));
  /* 11b123bf call 0x11b13480 */
  push32(0x11b123c4u); f_11b13480();
  /* 11b123c4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b123c7 call 0x11b1348d */
  push32(0x11b123ccu); f_11b1348d();
  /* 11b123cc and eax, 0x80000007 */
  { uint32_t _r=(EAX)&(0x80000007u); EAX = (_r); fl_logic(_r,32); }
  /* 11b123d1 jns 0x11b123d8 */
  if (!C.sf) goto L_11b123d8;
  /* 11b123d3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b123d4 or eax, 0xfffffff8 */
  { uint32_t _r=(EAX)|(0xfffffff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b123d7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b123d8:;
  /* 11b123d8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b123d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b123dc ja 0x11b1241c */
  if ((!C.cf&&!C.zf)) goto L_11b1241c;
  /* 11b123de jmp dword ptr [eax*4 + 0x11b126c0] */
  switch (EAX) {
    case 0: goto L_11b123e5;
    case 1: goto L_11b123f0;
    case 2: goto L_11b123fb;
    case 3: goto L_11b12406;
    case 4: goto L_11b12411;
    default: x86_unimpl("switch@0x11b123de out of table"); return;
  }
L_11b123e5:;
  /* 11b123e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123e9 push 0x11b1e4e8 */
  push32((uint32_t)(0x11b1e4e8u));
  /* 11b123ee jmp 0x11b12425 */
  goto L_11b12425;
L_11b123f0:;
  /* 11b123f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123f4 push 0x11b1e510 */
  push32((uint32_t)(0x11b1e510u));
  /* 11b123f9 jmp 0x11b12425 */
  goto L_11b12425;
L_11b123fb:;
  /* 11b123fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b123ff push 0x11b1e4f0 */
  push32((uint32_t)(0x11b1e4f0u));
  /* 11b12404 jmp 0x11b12425 */
  goto L_11b12425;
L_11b12406:;
  /* 11b12406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12408 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1240a push 0x11b1e4c0 */
  push32((uint32_t)(0x11b1e4c0u));
  /* 11b1240f jmp 0x11b12425 */
  goto L_11b12425;
L_11b12411:;
  /* 11b12411 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12415 push 0x11b1e4c8 */
  push32((uint32_t)(0x11b1e4c8u));
  /* 11b1241a jmp 0x11b12425 */
  goto L_11b12425;
L_11b1241c:;
  /* 11b1241c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1241e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12420 push 0x11b1ea58 */
  push32((uint32_t)(0x11b1ea58u));
L_11b12425:;
  /* 11b12425 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12427 call ebp */
  call_ind((uint32_t)(EBP), 0x11b12429u);
  /* 11b12429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1242c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1242e call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b12434u);
  /* 11b12434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b12437:;
  /* 11b12437 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b12439 call dword ptr [0x11b1916c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1916c))), 0x11b1243fu);
  /* 11b1243f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12442 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b12444 je 0x11b124a6 */
  if (C.zf) goto L_11b124a6;
  /* 11b12446 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12448 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1244a push 0x11b1ea58 */
  push32((uint32_t)(0x11b1ea58u));
  /* 11b1244f call dword ptr [0x11b19164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19164))), 0x11b12455u);
  /* 11b12455 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12459 push 0x11b1e9a0 */
  push32((uint32_t)(0x11b1e9a0u));
  /* 11b1245e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12460 call ebp */
  call_ind((uint32_t)(EBP), 0x11b12462u);
  /* 11b12462 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12466 push 0x11b1e9b0 */
  push32((uint32_t)(0x11b1e9b0u));
  /* 11b1246b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1246d call ebp */
  call_ind((uint32_t)(EBP), 0x11b1246fu);
  /* 11b1246f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12471 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12473 push 0x11b1e9c0 */
  push32((uint32_t)(0x11b1e9c0u));
  /* 11b12478 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1247a call ebp */
  call_ind((uint32_t)(EBP), 0x11b1247cu);
  /* 11b1247c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1247e call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b12484u);
  /* 11b12484 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12487 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12489 call edi */
  call_ind((uint32_t)(EDI), 0x11b1248bu);
  /* 11b1248b mov ecx, 8 */
  ECX = (0x8u);
  /* 11b12490 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b12492 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11b12495 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11b12498 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b1249b shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11b1249e push edx */
  push32((uint32_t)(EDX));
  /* 11b1249f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b124a1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b124a3u);
  /* 11b124a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b124a6:;
  /* 11b124a6 mov ebx, dword ptr [0x11b19174] */
  EBX = (r32((uint32_t)(0x11b19174)));
  /* 11b124ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b124ae push 0x11b1ea28 */
  push32((uint32_t)(0x11b1ea28u));
  /* 11b124b3 call ebx */
  call_ind((uint32_t)(EBX), 0x11b124b5u);
  /* 11b124b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b124b7 mov esi, eax */
  ESI = (EAX);
  /* 11b124b9 call edi */
  call_ind((uint32_t)(EDI), 0x11b124bbu);
  /* 11b124bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b124be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b124bf cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b124c1 jle 0x11b124d2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b124d2;
  /* 11b124c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b124c5 call dword ptr [0x11b19178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19178))), 0x11b124cbu);
  /* 11b124cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b124ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b124d0 je 0x11b124ea */
  if (C.zf) goto L_11b124ea;
L_11b124d2:;
  /* 11b124d2 mov edi, dword ptr [0x11b19128] */
  EDI = (r32((uint32_t)(0x11b19128)));
  /* 11b124d8 push 0x11b1b50c */
  push32((uint32_t)(0x11b1b50cu));
  /* 11b124dd call edi */
  call_ind((uint32_t)(EDI), 0x11b124dfu);
  /* 11b124df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b124e2 call dword ptr [0x11b19170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19170))), 0x11b124e8u);
  /* 11b124e8 jmp 0x11b124f0 */
  goto L_11b124f0;
L_11b124ea:;
  /* 11b124ea mov edi, dword ptr [0x11b19128] */
  EDI = (r32((uint32_t)(0x11b19128)));
L_11b124f0:;
  /* 11b124f0 mov esi, dword ptr [0x11b1915c] */
  ESI = (r32((uint32_t)(0x11b1915c)));
  /* 11b124f6 push 0x11b1ea00 */
  push32((uint32_t)(0x11b1ea00u));
  /* 11b124fb call esi */
  call_ind((uint32_t)(ESI), 0x11b124fdu);
  /* 11b124fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12500 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12503 jg 0x11b1251d */
  if ((!C.zf&&C.sf==C.of)) goto L_11b1251d;
  /* 11b12505 push 0x11b1b500 */
  push32((uint32_t)(0x11b1b500u));
  /* 11b1250a call edi */
  call_ind((uint32_t)(EDI), 0x11b1250cu);
  /* 11b1250c mov ebp, dword ptr [0x11b190f8] */
  EBP = (r32((uint32_t)(0x11b190f8)));
  /* 11b12512 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12514 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b12516 call ebp */
  call_ind((uint32_t)(EBP), 0x11b12518u);
  /* 11b12518 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1251b jmp 0x11b12523 */
  goto L_11b12523;
L_11b1251d:;
  /* 11b1251d mov ebp, dword ptr [0x11b190f8] */
  EBP = (r32((uint32_t)(0x11b190f8)));
L_11b12523:;
  /* 11b12523 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12525 push 0x11b1e490 */
  push32((uint32_t)(0x11b1e490u));
  /* 11b1252a call ebx */
  call_ind((uint32_t)(EBX), 0x11b1252cu);
  /* 11b1252c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1252f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12531 jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b12537 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12539 push 0x11b1e498 */
  push32((uint32_t)(0x11b1e498u));
  /* 11b1253e call ebx */
  call_ind((uint32_t)(EBX), 0x11b12540u);
  /* 11b12540 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12545 jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b1254b push 3 */
  push32((uint32_t)(0x3u));
  /* 11b1254d push 0x11b1e4a0 */
  push32((uint32_t)(0x11b1e4a0u));
  /* 11b12552 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12554u);
  /* 11b12554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12559 jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b1255f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12561 push 0x11b1e4a8 */
  push32((uint32_t)(0x11b1e4a8u));
  /* 11b12566 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12568u);
  /* 11b12568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1256b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1256d jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b1256f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12571 push 0x11b1e4b0 */
  push32((uint32_t)(0x11b1e4b0u));
  /* 11b12576 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12578u);
  /* 11b12578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1257b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1257d jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b1257f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12581 push 0x11b1e4b8 */
  push32((uint32_t)(0x11b1e4b8u));
  /* 11b12586 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12588u);
  /* 11b12588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1258b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1258d jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b1258f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12591 push 0x11b1e438 */
  push32((uint32_t)(0x11b1e438u));
  /* 11b12596 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12598u);
  /* 11b12598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1259b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1259d jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b1259f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b125a1 push 0x11b1e3d0 */
  push32((uint32_t)(0x11b1e3d0u));
  /* 11b125a6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b125a8u);
  /* 11b125a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b125ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b125ad jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b125af push 3 */
  push32((uint32_t)(0x3u));
  /* 11b125b1 push 0x11b1e950 */
  push32((uint32_t)(0x11b1e950u));
  /* 11b125b6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b125b8u);
  /* 11b125b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b125bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b125bd jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b125bf push 3 */
  push32((uint32_t)(0x3u));
  /* 11b125c1 push 0x11b1e958 */
  push32((uint32_t)(0x11b1e958u));
  /* 11b125c6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b125c8u);
  /* 11b125c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b125cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b125cd jne 0x11b125df */
  if (!C.zf) goto L_11b125df;
  /* 11b125cf push 0x11b1b4f4 */
  push32((uint32_t)(0x11b1b4f4u));
  /* 11b125d4 call edi */
  call_ind((uint32_t)(EDI), 0x11b125d6u);
  /* 11b125d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b125d8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b125da call ebp */
  call_ind((uint32_t)(EBP), 0x11b125dcu);
  /* 11b125dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b125df:;
  /* 11b125df cmp dword ptr [0x11b1eab4], 0x1f4 */
  { uint32_t _a=(r32((uint32_t)(0x11b1eab4))),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b125e9 jl 0x11b125fb */
  if ((C.sf!=C.of)) goto L_11b125fb;
  /* 11b125eb push 0x11b1b4e8 */
  push32((uint32_t)(0x11b1b4e8u));
  /* 11b125f0 call edi */
  call_ind((uint32_t)(EDI), 0x11b125f2u);
  /* 11b125f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b125f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b125f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b125f8u);
  /* 11b125f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b125fb:;
  /* 11b125fb push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b125fd call dword ptr [0x11b190f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190f4))), 0x11b12603u);
  /* 11b12603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12606 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b12608 jne 0x11b12610 */
  if (!C.zf) goto L_11b12610;
  /* 11b1260a call dword ptr [0x11b19180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19180))), 0x11b12610u);
L_11b12610:;
  /* 11b12610 push 0x11b1e758 */
  push32((uint32_t)(0x11b1e758u));
  /* 11b12615 call esi */
  call_ind((uint32_t)(ESI), 0x11b12617u);
  /* 11b12617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1261a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1261c je 0x11b12695 */
  if (C.zf) goto L_11b12695;
  /* 11b1261e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12620 push 0x11b1e778 */
  push32((uint32_t)(0x11b1e778u));
  /* 11b12625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12627 call dword ptr [0x11b19148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19148))), 0x11b1262du);
  /* 11b1262d push 0x11b1e778 */
  push32((uint32_t)(0x11b1e778u));
  /* 11b12632 call esi */
  call_ind((uint32_t)(ESI), 0x11b12634u);
  /* 11b12634 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1263a jne 0x11b12695 */
  if (!C.zf) goto L_11b12695;
  /* 11b1263c mov ebx, dword ptr [0x11b19184] */
  EBX = (r32((uint32_t)(0x11b19184)));
  /* 11b12642 lea eax, [esp + 0x14] */
  EAX = ((uint32_t)(ESP + 0x14));
  /* 11b12646 push eax */
  push32((uint32_t)(EAX));
  /* 11b12647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12649 push 0x11b1e758 */
  push32((uint32_t)(0x11b1e758u));
  /* 11b1264e call ebx */
  call_ind((uint32_t)(EBX), 0x11b12650u);
  /* 11b12650 mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11b12654 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 11b12658 push ecx */
  push32((uint32_t)(ECX));
  /* 11b12659 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1265b push 0x11b1e778 */
  push32((uint32_t)(0x11b1e778u));
  /* 11b12660 and edi, 0xffff */
  { uint32_t _r=(EDI)&(0xffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11b12666 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12668u);
  /* 11b12668 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11b1266c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1266f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b12675 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12677 jne 0x11b12695 */
  if (!C.zf) goto L_11b12695;
  /* 11b12679 mov eax, dword ptr [0x11b1eab4] */
  EAX = (r32((uint32_t)(0x11b1eab4)));
  /* 11b1267e push eax */
  push32((uint32_t)(EAX));
  /* 11b1267f push 0x11b1b4dc */
  push32((uint32_t)(0x11b1b4dcu));
  /* 11b12684 call dword ptr [0x11b1917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1917c))), 0x11b1268au);
  /* 11b1268a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1268c call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b12692u);
  /* 11b12692 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b12695:;
  /* 11b12695 pop edi */
  EDI = (pop32());
  /* 11b12696 pop esi */
  ESI = (pop32());
  /* 11b12697 pop ebp */
  EBP = (pop32());
  /* 11b12698 pop ebx */
  EBX = (pop32());
  /* 11b12699 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1269c ret  */
  ESPCHK(0x11b11a00u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x11b126e0 (12 bytes, 4 insns) */
void f_11b126e0(void) {
  FTRACE(0x11b126e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b126e0 mov eax, ecx */
  EAX = (ECX);
  /* 11b126e2 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b126e6 mov dword ptr [eax + 0x16], ecx */
  w32((uint32_t)(EAX + 0x16), (ECX));
  /* 11b126e9 ret 4 */
  ESPCHK(0x11b126e0u, _esp0);
  ESP += 8; return;
}

/* FUN_100026f0 @ 0x11b126f0 (127 bytes, 47 insns) */
void f_11b126f0(void) {
  FTRACE(0x11b126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b126f0 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 11b126f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b126f5 mov ebx, dword ptr [0x11b19188] */
  EBX = (r32((uint32_t)(0x11b19188)));
  /* 11b126fb push esi */
  push32((uint32_t)(ESI));
  /* 11b126fc mov esi, ecx */
  ESI = (ECX);
  /* 11b126fe push edi */
  push32((uint32_t)(EDI));
  /* 11b126ff mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11b12703 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11b12707 push ecx */
  push32((uint32_t)(ECX));
  /* 11b12708 push esi */
  push32((uint32_t)(ESI));
  /* 11b12709 mov byte ptr [esi + 0x14], al */
  w8((uint32_t)(ESI + 0x14), (AL));
  /* 11b1270c mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11b1270f call ebx */
  call_ind((uint32_t)(EBX), 0x11b12711u);
  /* 11b12711 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 11b12715 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11b12718 push edx */
  push32((uint32_t)(EDX));
  /* 11b12719 push eax */
  push32((uint32_t)(EAX));
  /* 11b1271a call ebx */
  call_ind((uint32_t)(EBX), 0x11b1271cu);
  /* 11b1271c mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 11b12720 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11b12724 mov al, byte ptr [esp + 0x38] */
  AL = (r8((uint32_t)(ESP + 0x38)));
  /* 11b12728 mov dword ptr [esi + 0x1a], ecx */
  w32((uint32_t)(ESI + 0x1a), (ECX));
  /* 11b1272b mov ecx, dword ptr [esi + 0x16] */
  ECX = (r32((uint32_t)(ESI + 0x16)));
  /* 11b1272e mov dword ptr [esi + 0x1e], edx */
  w32((uint32_t)(ESI + 0x1e), (EDX));
  /* 11b12731 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12734 mov byte ptr [esi + 0x15], al */
  w8((uint32_t)(ESI + 0x15), (AL));
  /* 11b12737 lea edx, [ecx + 7] */
  EDX = ((uint32_t)(ECX + 0x7));
  /* 11b1273a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1273c jge 0x11b12769 */
  if ((C.sf==C.of)) goto L_11b12769;
  /* 11b1273e lea eax, [ecx*8] */
  EAX = ((uint32_t)(ECX*8));
  /* 11b12745 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b12747 xor dl, dl */
  { uint32_t _r=(DL)^(DL); DL = (_r); fl_logic(_r,8); }
  /* 11b12749 lea eax, [eax*2 + 0x11b1df68] */
  EAX = ((uint32_t)(EAX*2 + 0x11b1df68));
L_11b12750:;
  /* 11b12750 mov bl, byte ptr [esi + 0x14] */
  BL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b12753 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b12754 mov byte ptr [eax + 4], bl */
  w8((uint32_t)(EAX + 0x4), (BL));
  /* 11b12757 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11b12759 mov byte ptr [eax + 5], dl */
  w8((uint32_t)(EAX + 0x5), (DL));
  /* 11b1275c mov ebx, dword ptr [esi + 0x16] */
  EBX = (r32((uint32_t)(ESI + 0x16)));
  /* 11b1275f add ebx, 7 */
  { uint32_t _a=(EBX),_b=(0x7u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12762 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12765 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12767 jl 0x11b12750 */
  if ((C.sf!=C.of)) goto L_11b12750;
L_11b12769:;
  /* 11b12769 pop edi */
  EDI = (pop32());
  /* 11b1276a pop esi */
  ESI = (pop32());
  /* 11b1276b pop ebx */
  EBX = (pop32());
  /* 11b1276c ret 0x1c */
  ESPCHK(0x11b126f0u, _esp0);
  ESP += 32; return;
}

/* FUN_10002770 @ 0x11b12770 (76 bytes, 36 insns) */
void f_11b12770(void) {
  FTRACE(0x11b12770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12770 push ebx */
  push32((uint32_t)(EBX));
  /* 11b12771 mov ebx, ecx */
  EBX = (ECX);
  /* 11b12773 push ebp */
  push32((uint32_t)(EBP));
  /* 11b12774 push esi */
  push32((uint32_t)(ESI));
  /* 11b12775 mov esi, dword ptr [ebx + 0x16] */
  ESI = (r32((uint32_t)(EBX + 0x16)));
  /* 11b12778 push edi */
  push32((uint32_t)(EDI));
  /* 11b12779 lea eax, [esi + 7] */
  EAX = ((uint32_t)(ESI + 0x7));
  /* 11b1277c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1277e jge 0x11b127ae */
  if ((C.sf==C.of)) goto L_11b127ae;
  /* 11b12780 mov ebp, dword ptr [0x11b1915c] */
  EBP = (r32((uint32_t)(0x11b1915c)));
  /* 11b12786 lea ecx, [esi*8] */
  ECX = ((uint32_t)(ESI*8));
  /* 11b1278d sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1278f lea edi, [ecx*2 + 0x11b1df60] */
  EDI = ((uint32_t)(ECX*2 + 0x11b1df60));
L_11b12796:;
  /* 11b12796 push edi */
  push32((uint32_t)(EDI));
  /* 11b12797 call ebp */
  call_ind((uint32_t)(EBP), 0x11b12799u);
  /* 11b12799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1279c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1279e je 0x11b127b5 */
  if (C.zf) goto L_11b127b5;
  /* 11b127a0 mov edx, dword ptr [ebx + 0x16] */
  EDX = (r32((uint32_t)(EBX + 0x16)));
  /* 11b127a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b127a4 add edx, 7 */
  { uint32_t _a=(EDX),_b=(0x7u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b127a7 add edi, 0xe */
  { uint32_t _a=(EDI),_b=(0xeu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b127aa cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b127ac jl 0x11b12796 */
  if ((C.sf!=C.of)) goto L_11b12796;
L_11b127ae:;
  /* 11b127ae pop edi */
  EDI = (pop32());
  /* 11b127af pop esi */
  ESI = (pop32());
  /* 11b127b0 pop ebp */
  EBP = (pop32());
  /* 11b127b1 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b127b3 pop ebx */
  EBX = (pop32());
  /* 11b127b4 ret  */
  ESPCHK(0x11b12770u, _esp0);
  ESP += 4; return;
L_11b127b5:;
  /* 11b127b5 pop edi */
  EDI = (pop32());
  /* 11b127b6 pop esi */
  ESI = (pop32());
  /* 11b127b7 pop ebp */
  EBP = (pop32());
  /* 11b127b8 mov al, 1 */
  AL = (0x1u);
  /* 11b127ba pop ebx */
  EBX = (pop32());
  /* 11b127bb ret  */
  ESPCHK(0x11b12770u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x11b127c0 (179 bytes, 60 insns) */
void f_11b127c0(void) {
  FTRACE(0x11b127c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b127c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b127c1 mov ebx, ecx */
  EBX = (ECX);
  /* 11b127c3 call 0x11b12770 */
  push32(0x11b127c8u); f_11b12770();
  /* 11b127c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b127ca je 0x11b12871 */
  if (C.zf) goto L_11b12871;
  /* 11b127d0 mov al, byte ptr [ebx + 0x15] */
  AL = (r8((uint32_t)(EBX + 0x15)));
  /* 11b127d3 push eax */
  push32((uint32_t)(EAX));
  /* 11b127d4 call dword ptr [0x11b1916c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1916c))), 0x11b127dau);
  /* 11b127da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b127dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b127df je 0x11b12871 */
  if (C.zf) goto L_11b12871;
  /* 11b127e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b127e6 push esi */
  push32((uint32_t)(ESI));
  /* 11b127e7 mov esi, dword ptr [ebx + 0x16] */
  ESI = (r32((uint32_t)(EBX + 0x16)));
  /* 11b127ea mov ebp, dword ptr [0x11b1915c] */
  EBP = (r32((uint32_t)(0x11b1915c)));
  /* 11b127f0 push edi */
  push32((uint32_t)(EDI));
  /* 11b127f1 lea ecx, [esi*8] */
  ECX = ((uint32_t)(ESI*8));
  /* 11b127f8 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b127fa lea edi, [ecx*2 + 0x11b1df60] */
  EDI = ((uint32_t)(ECX*2 + 0x11b1df60));
  /* 11b12801 push edi */
  push32((uint32_t)(EDI));
  /* 11b12802 call ebp */
  call_ind((uint32_t)(EBP), 0x11b12804u);
  /* 11b12804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12809 je 0x11b12823 */
  if (C.zf) goto L_11b12823;
L_11b1280b:;
  /* 11b1280b mov edx, dword ptr [ebx + 0x16] */
  EDX = (r32((uint32_t)(EBX + 0x16)));
  /* 11b1280e add edx, 7 */
  { uint32_t _a=(EDX),_b=(0x7u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12811 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12813 jge 0x11b12823 */
  if ((C.sf==C.of)) goto L_11b12823;
  /* 11b12815 add edi, 0xe */
  { uint32_t _a=(EDI),_b=(0xeu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12818 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b12819 push edi */
  push32((uint32_t)(EDI));
  /* 11b1281a call ebp */
  call_ind((uint32_t)(EBP), 0x11b1281cu);
  /* 11b1281c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1281f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12821 jne 0x11b1280b */
  if (!C.zf) goto L_11b1280b;
L_11b12823:;
  /* 11b12823 mov al, byte ptr [ebx + 0x14] */
  AL = (r8((uint32_t)(EBX + 0x14)));
  /* 11b12826 lea edi, [esi*8] */
  EDI = ((uint32_t)(ESI*8));
  /* 11b1282d sub edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1282f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12831 shl edi, 1 */
  EDI = (sh_shl((uint32_t)(EDI), (0x1u)&0x1f, 32));
  /* 11b12833 push ebx */
  push32((uint32_t)(EBX));
  /* 11b12834 push eax */
  push32((uint32_t)(EAX));
  /* 11b12835 push 0x11b1e3d8 */
  push32((uint32_t)(0x11b1e3d8u));
  /* 11b1283a lea ecx, [edi + 0x11b1df60] */
  ECX = ((uint32_t)(EDI + 0x11b1df60));
  /* 11b12840 push 0x11b1ea80 */
  push32((uint32_t)(0x11b1ea80u));
  /* 11b12845 push ecx */
  push32((uint32_t)(ECX));
  /* 11b12846 call dword ptr [0x11b190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190f0))), 0x11b1284cu);
  /* 11b1284c mov dl, byte ptr [ebx + 0x14] */
  DL = (r8((uint32_t)(EBX + 0x14)));
  /* 11b1284f push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b12854 mov byte ptr [edi + 0x11b1df6c], dl */
  w8((uint32_t)(EDI + 0x11b1df6c), (DL));
  /* 11b1285a mov byte ptr [edi + 0x11b1df6d], 0 */
  w8((uint32_t)(EDI + 0x11b1df6d), (0x0u));
  /* 11b12861 mov al, byte ptr [ebx + 0x15] */
  AL = (r8((uint32_t)(EBX + 0x15)));
  /* 11b12864 push eax */
  push32((uint32_t)(EAX));
  /* 11b12865 call dword ptr [0x11b19100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19100))), 0x11b1286bu);
  /* 11b1286b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1286e pop edi */
  EDI = (pop32());
  /* 11b1286f pop esi */
  ESI = (pop32());
  /* 11b12870 pop ebp */
  EBP = (pop32());
L_11b12871:;
  /* 11b12871 pop ebx */
  EBX = (pop32());
  /* 11b12872 ret  */
  ESPCHK(0x11b127c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002880 @ 0x11b12880 (136 bytes, 54 insns) */
void f_11b12880(void) {
  FTRACE(0x11b12880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12880 push ebx */
  push32((uint32_t)(EBX));
  /* 11b12881 push ebp */
  push32((uint32_t)(EBP));
  /* 11b12882 push esi */
  push32((uint32_t)(ESI));
  /* 11b12883 mov esi, ecx */
  ESI = (ECX);
  /* 11b12885 push edi */
  push32((uint32_t)(EDI));
  /* 11b12886 mov al, byte ptr [esi + 0x14] */
  AL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b12889 push eax */
  push32((uint32_t)(EAX));
  /* 11b1288a push 0x11b1e3d8 */
  push32((uint32_t)(0x11b1e3d8u));
  /* 11b1288f push esi */
  push32((uint32_t)(ESI));
  /* 11b12890 call dword ptr [0x11b1913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1913c))), 0x11b12896u);
  /* 11b12896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1289b je 0x11b12903 */
  if (C.zf) goto L_11b12903;
  /* 11b1289d mov ebp, dword ptr [esi + 0x16] */
  EBP = (r32((uint32_t)(ESI + 0x16)));
  /* 11b128a0 mov bl, 1 */
  BL = (0x1u);
  /* 11b128a2 lea ecx, [ebp*8] */
  ECX = ((uint32_t)(EBP*8));
  /* 11b128a9 sub ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b128ab lea edi, [ecx*2 + 0x11b1df60] */
  EDI = ((uint32_t)(ECX*2 + 0x11b1df60));
L_11b128b2:;
  /* 11b128b2 mov edx, dword ptr [esi + 0x16] */
  EDX = (r32((uint32_t)(ESI + 0x16)));
  /* 11b128b5 add edx, 7 */
  { uint32_t _a=(EDX),_b=(0x7u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b128b8 cmp ebp, edx */
  { uint32_t _a=(EBP),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b128ba jge 0x11b12903 */
  if ((C.sf==C.of)) goto L_11b12903;
  /* 11b128bc push edi */
  push32((uint32_t)(EDI));
  /* 11b128bd push esi */
  push32((uint32_t)(ESI));
  /* 11b128be call dword ptr [0x11b19134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19134))), 0x11b128c4u);
  /* 11b128c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b128c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b128c9 je 0x11b128fb */
  if (C.zf) goto L_11b128fb;
  /* 11b128cb mov al, byte ptr [edi + 0xd] */
  AL = (r8((uint32_t)(EDI + 0xd)));
  /* 11b128ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b128d0 jne 0x11b128fb */
  if (!C.zf) goto L_11b128fb;
  /* 11b128d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b128d4 push edi */
  push32((uint32_t)(EDI));
  /* 11b128d5 mov byte ptr [edi + 0xd], 1 */
  w8((uint32_t)(EDI + 0xd), (0x1u));
  /* 11b128d9 call dword ptr [0x11b190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190fc))), 0x11b128dfu);
  /* 11b128df mov al, byte ptr [esi + 0x14] */
  AL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b128e2 mov ecx, dword ptr [esi + 0x1a] */
  ECX = (r32((uint32_t)(ESI + 0x1a)));
  /* 11b128e5 push eax */
  push32((uint32_t)(EAX));
  /* 11b128e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b128e7 call 0x11b12be0 */
  push32(0x11b128ecu); f_11b12be0();
  /* 11b128ec mov dl, byte ptr [esi + 0x14] */
  DL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b128ef push edx */
  push32((uint32_t)(EDX));
  /* 11b128f0 call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b128f6u);
  /* 11b128f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b128f9 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_11b128fb:;
  /* 11b128fb inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b128fc add edi, 0xe */
  { uint32_t _a=(EDI),_b=(0xeu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b128ff test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11b12901 jne 0x11b128b2 */
  if (!C.zf) goto L_11b128b2;
L_11b12903:;
  /* 11b12903 pop edi */
  EDI = (pop32());
  /* 11b12904 pop esi */
  ESI = (pop32());
  /* 11b12905 pop ebp */
  EBP = (pop32());
  /* 11b12906 pop ebx */
  EBX = (pop32());
  /* 11b12907 ret  */
  ESPCHK(0x11b12880u, _esp0);
  ESP += 4; return;
}

/* FUN_10002910 @ 0x11b12910 (209 bytes, 77 insns) */
void f_11b12910(void) {
  FTRACE(0x11b12910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12910 push ecx */
  push32((uint32_t)(ECX));
  /* 11b12911 push ebx */
  push32((uint32_t)(EBX));
  /* 11b12912 push ebp */
  push32((uint32_t)(EBP));
  /* 11b12913 push esi */
  push32((uint32_t)(ESI));
  /* 11b12914 mov esi, ecx */
  ESI = (ECX);
  /* 11b12916 push edi */
  push32((uint32_t)(EDI));
  /* 11b12917 mov cl, byte ptr [esi + 0x14] */
  CL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b1291a lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11b1291d push ecx */
  push32((uint32_t)(ECX));
  /* 11b1291e push 0x11b1e3d8 */
  push32((uint32_t)(0x11b1e3d8u));
  /* 11b12923 push eax */
  push32((uint32_t)(EAX));
  /* 11b12924 call dword ptr [0x11b1913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1913c))), 0x11b1292au);
  /* 11b1292a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1292d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1292f je 0x11b129db */
  if (C.zf) goto L_11b129db;
  /* 11b12935 mov eax, dword ptr [esi + 0x16] */
  EAX = (r32((uint32_t)(ESI + 0x16)));
  /* 11b12938 mov ebp, dword ptr [0x11b19144] */
  EBP = (r32((uint32_t)(0x11b19144)));
  /* 11b1293e mov bl, 1 */
  BL = (0x1u);
  /* 11b12940 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b12944 lea edx, [eax*8] */
  EDX = ((uint32_t)(EAX*8));
  /* 11b1294b sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1294d lea edi, [edx*2 + 0x11b1df60] */
  EDI = ((uint32_t)(EDX*2 + 0x11b1df60));
  /* 11b12954 jmp 0x11b1295a */
  goto L_11b1295a;
L_11b12956:;
  /* 11b12956 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
L_11b1295a:;
  /* 11b1295a mov ecx, dword ptr [esi + 0x16] */
  ECX = (r32((uint32_t)(ESI + 0x16)));
  /* 11b1295d add ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12960 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12962 jge 0x11b129db */
  if ((C.sf==C.of)) goto L_11b129db;
  /* 11b12964 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11b12967 push edi */
  push32((uint32_t)(EDI));
  /* 11b12968 push eax */
  push32((uint32_t)(EAX));
  /* 11b12969 call dword ptr [0x11b19134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19134))), 0x11b1296fu);
  /* 11b1296f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12974 je 0x11b129c7 */
  if (C.zf) goto L_11b129c7;
  /* 11b12976 mov al, byte ptr [edi + 0xd] */
  AL = (r8((uint32_t)(EDI + 0xd)));
  /* 11b12979 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b1297b je 0x11b129c7 */
  if (C.zf) goto L_11b129c7;
  /* 11b1297d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1297f mov byte ptr [edi + 0xd], 0 */
  w8((uint32_t)(EDI + 0xd), (0x0u));
  /* 11b12983 call dword ptr [0x11b190ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190ec))), 0x11b12989u);
  /* 11b12989 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1298c mov cl, byte ptr [esi + 0x14] */
  CL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b1298f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b12992 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11b12995 mov al, byte ptr [esi + 0x10] */
  AL = (r8((uint32_t)(ESI + 0x10)));
  /* 11b12998 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11b1299b push edx */
  push32((uint32_t)(EDX));
  /* 11b1299c dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11b1299e push eax */
  push32((uint32_t)(EAX));
  /* 11b1299f push ecx */
  push32((uint32_t)(ECX));
  /* 11b129a0 call ebp */
  call_ind((uint32_t)(EBP), 0x11b129a2u);
  /* 11b129a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b129a4 push edi */
  push32((uint32_t)(EDI));
  /* 11b129a5 call dword ptr [0x11b190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190fc))), 0x11b129abu);
  /* 11b129ab mov dl, byte ptr [esi + 0x14] */
  DL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b129ae mov eax, dword ptr [esi + 0x1e] */
  EAX = (r32((uint32_t)(ESI + 0x1e)));
  /* 11b129b1 push edx */
  push32((uint32_t)(EDX));
  /* 11b129b2 push eax */
  push32((uint32_t)(EAX));
  /* 11b129b3 call 0x11b12be0 */
  push32(0x11b129b8u); f_11b12be0();
  /* 11b129b8 mov cl, byte ptr [esi + 0x14] */
  CL = (r8((uint32_t)(ESI + 0x14)));
  /* 11b129bb push ecx */
  push32((uint32_t)(ECX));
  /* 11b129bc call dword ptr [0x11b19114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19114))), 0x11b129c2u);
  /* 11b129c2 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b129c5 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_11b129c7:;
  /* 11b129c7 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b129cb add edi, 0xe */
  { uint32_t _a=(EDI),_b=(0xeu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b129ce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b129cf test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11b129d1 mov dword ptr [esp + 0x10], edx */
  w32((uint32_t)(ESP + 0x10), (EDX));
  /* 11b129d5 jne 0x11b12956 */
  if (!C.zf) goto L_11b12956;
L_11b129db:;
  /* 11b129db pop edi */
  EDI = (pop32());
  /* 11b129dc pop esi */
  ESI = (pop32());
  /* 11b129dd pop ebp */
  EBP = (pop32());
  /* 11b129de pop ebx */
  EBX = (pop32());
  /* 11b129df pop ecx */
  ECX = (pop32());
  /* 11b129e0 ret  */
  ESPCHK(0x11b12910u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x11b129f0 (336 bytes, 102 insns) */
void f_11b129f0(void) {
  FTRACE(0x11b129f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b129f0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b129f3 push ebp */
  push32((uint32_t)(EBP));
  /* 11b129f4 mov ebp, ecx */
  EBP = (ECX);
  /* 11b129f6 push esi */
  push32((uint32_t)(ESI));
  /* 11b129f7 mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 11b129fb mov esi, dword ptr [ebp + 0x16] */
  ESI = (r32((uint32_t)(EBP + 0x16)));
  /* 11b129fe mov dword ptr [esp + 8], esi */
  w32((uint32_t)(ESP + 0x8), (ESI));
  /* 11b12a02 lea eax, [esi + 7] */
  EAX = ((uint32_t)(ESI + 0x7));
  /* 11b12a05 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12a07 jge 0x11b12b3a */
  if ((C.sf==C.of)) goto L_11b12b3a;
  /* 11b12a0d lea ecx, [esi*8] */
  ECX = ((uint32_t)(ESI*8));
  /* 11b12a14 push ebx */
  push32((uint32_t)(EBX));
  /* 11b12a15 mov ebx, dword ptr [0x11b190e8] */
  EBX = (r32((uint32_t)(0x11b190e8)));
  /* 11b12a1b sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b12a1d push edi */
  push32((uint32_t)(EDI));
  /* 11b12a1e lea edi, [ecx*2 + 0x11b1df60] */
  EDI = ((uint32_t)(ECX*2 + 0x11b1df60));
L_11b12a25:;
  /* 11b12a25 push edi */
  push32((uint32_t)(EDI));
  /* 11b12a26 call dword ptr [0x11b1915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1915c))), 0x11b12a2cu);
  /* 11b12a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12a31 je 0x11b12b22 */
  if (C.zf) goto L_11b12b22;
  /* 11b12a37 mov dl, byte ptr [ebp + 0x14] */
  DL = (r8((uint32_t)(EBP + 0x14)));
  /* 11b12a3a push edx */
  push32((uint32_t)(EDX));
  /* 11b12a3b push edi */
  push32((uint32_t)(EDI));
  /* 11b12a3c call dword ptr [0x11b19174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19174))), 0x11b12a42u);
  /* 11b12a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12a47 jne 0x11b12b22 */
  if (!C.zf) goto L_11b12b22;
  /* 11b12a4d push eax */
  push32((uint32_t)(EAX));
  /* 11b12a4e push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b12a53 push eax */
  push32((uint32_t)(EAX));
  /* 11b12a54 call dword ptr [0x11b19148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19148))), 0x11b12a5au);
  /* 11b12a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12a5c push edi */
  push32((uint32_t)(EDI));
  /* 11b12a5d call dword ptr [0x11b190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190fc))), 0x11b12a63u);
  /* 11b12a63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12a66 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11b12a68 mov esi, 0x11b1e538 */
  ESI = (0x11b1e538u);
L_11b12a6d:;
  /* 11b12a6d push esi */
  push32((uint32_t)(ESI));
  /* 11b12a6e call dword ptr [0x11b1915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1915c))), 0x11b12a74u);
  /* 11b12a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12a79 je 0x11b12a89 */
  if (C.zf) goto L_11b12a89;
  /* 11b12a7b cmp esi, 0x11b1e722 */
  { uint32_t _a=(ESI),_b=(0x11b1e722u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12a81 jg 0x11b12a89 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b12a89;
  /* 11b12a83 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b12a84 add esi, 0xe */
  { uint32_t _a=(ESI),_b=(0xeu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12a87 jmp 0x11b12a6d */
  goto L_11b12a6d;
L_11b12a89:;
  /* 11b12a89 cmp ebp, 0x23 */
  { uint32_t _a=(EBP),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12a8c jge 0x11b12afb */
  if ((C.sf==C.of)) goto L_11b12afb;
  /* 11b12a8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b12a90 push edi */
  push32((uint32_t)(EDI));
  /* 11b12a91 push 0x11b1e930 */
  push32((uint32_t)(0x11b1e930u));
  /* 11b12a96 push 0x11b1e780 */
  push32((uint32_t)(0x11b1e780u));
  /* 11b12a9b call ebx */
  call_ind((uint32_t)(EBX), 0x11b12a9du);
  /* 11b12a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12a9f call dword ptr [0x11b19104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19104))), 0x11b12aa5u);
  /* 11b12aa5 lea esi, [ebp*8] */
  ESI = ((uint32_t)(EBP*8));
  /* 11b12aac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12aae sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b12ab0 push 0x11b1e780 */
  push32((uint32_t)(0x11b1e780u));
  /* 11b12ab5 shl esi, 1 */
  ESI = (sh_shl((uint32_t)(ESI), (0x1u)&0x1f, 32));
  /* 11b12ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12ab9 push 0x11b1e768 */
  push32((uint32_t)(0x11b1e768u));
  /* 11b12abe lea eax, [esi + 0x11b1e538] */
  EAX = ((uint32_t)(ESI + 0x11b1e538));
  /* 11b12ac4 push 0x11b1ea80 */
  push32((uint32_t)(0x11b1ea80u));
  /* 11b12ac9 push eax */
  push32((uint32_t)(EAX));
  /* 11b12aca call dword ptr [0x11b190f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190f0))), 0x11b12ad0u);
  /* 11b12ad0 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11b12ad3 mov dl, byte ptr [edi + 0xd] */
  DL = (r8((uint32_t)(EDI + 0xd)));
  /* 11b12ad6 mov al, byte ptr [edi + 0xc] */
  AL = (r8((uint32_t)(EDI + 0xc)));
  /* 11b12ad9 mov dword ptr [esi + 0x11b1e540], ecx */
  w32((uint32_t)(ESI + 0x11b1e540), (ECX));
  /* 11b12adf mov byte ptr [esi + 0x11b1e545], dl */
  w8((uint32_t)(ESI + 0x11b1e545), (DL));
  /* 11b12ae5 mov byte ptr [esi + 0x11b1e544], al */
  w8((uint32_t)(ESI + 0x11b1e544), (AL));
  /* 11b12aeb mov eax, dword ptr [0x11b1eab4] */
  EAX = (r32((uint32_t)(0x11b1eab4)));
  /* 11b12af0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12af3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b12af4 mov dword ptr [0x11b1eab4], eax */
  w32((uint32_t)(0x11b1eab4), (EAX));
  /* 11b12af9 jmp 0x11b12b06 */
  goto L_11b12b06;
L_11b12afb:;
  /* 11b12afb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12afd call dword ptr [0x11b190e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190e4))), 0x11b12b03u);
  /* 11b12b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b12b06:;
  /* 11b12b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12b08 push 0x11b1e968 */
  push32((uint32_t)(0x11b1e968u));
  /* 11b12b0d call dword ptr [0x11b190fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190fc))), 0x11b12b13u);
  /* 11b12b13 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
  /* 11b12b17 mov ebp, dword ptr [esp + 0x1c] */
  EBP = (r32((uint32_t)(ESP + 0x1c)));
  /* 11b12b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12b1e mov byte ptr [edi + 0xc], 0 */
  w8((uint32_t)(EDI + 0xc), (0x0u));
L_11b12b22:;
  /* 11b12b22 mov ecx, dword ptr [ebp + 0x16] */
  ECX = (r32((uint32_t)(EBP + 0x16)));
  /* 11b12b25 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b12b26 add ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12b29 add edi, 0xe */
  { uint32_t _a=(EDI),_b=(0xeu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12b2c cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12b2e mov dword ptr [esp + 0x10], esi */
  w32((uint32_t)(ESP + 0x10), (ESI));
  /* 11b12b32 jl 0x11b12a25 */
  if ((C.sf!=C.of)) goto L_11b12a25;
  /* 11b12b38 pop edi */
  EDI = (pop32());
  /* 11b12b39 pop ebx */
  EBX = (pop32());
L_11b12b3a:;
  /* 11b12b3a pop esi */
  ESI = (pop32());
  /* 11b12b3b pop ebp */
  EBP = (pop32());
  /* 11b12b3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12b3f ret  */
  ESPCHK(0x11b129f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b40 @ 0x11b12b40 (41 bytes, 14 insns) */
void f_11b12b40(void) {
  FTRACE(0x11b12b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12b40 push esi */
  push32((uint32_t)(ESI));
  /* 11b12b41 mov esi, ecx */
  ESI = (ECX);
  /* 11b12b43 call 0x11b129f0 */
  push32(0x11b12b48u); f_11b129f0();
  /* 11b12b48 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b12b4c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b12b4e je 0x11b12b65 */
  if (C.zf) goto L_11b12b65;
  /* 11b12b50 mov ecx, esi */
  ECX = (ESI);
  /* 11b12b52 call 0x11b127c0 */
  push32(0x11b12b57u); f_11b127c0();
  /* 11b12b57 mov ecx, esi */
  ECX = (ESI);
  /* 11b12b59 call 0x11b12880 */
  push32(0x11b12b5eu); f_11b12880();
  /* 11b12b5e mov ecx, esi */
  ECX = (ESI);
  /* 11b12b60 call 0x11b12910 */
  push32(0x11b12b65u); f_11b12910();
L_11b12b65:;
  /* 11b12b65 pop esi */
  ESI = (pop32());
  /* 11b12b66 ret 4 */
  ESPCHK(0x11b12b40u, _esp0);
  ESP += 8; return;
}

/* FUN_10002b70 @ 0x11b12b70 (72 bytes, 34 insns) */
void f_11b12b70(void) {
  FTRACE(0x11b12b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12b70 push ebx */
  push32((uint32_t)(EBX));
  /* 11b12b71 mov ebx, dword ptr [0x11b1914c] */
  EBX = (r32((uint32_t)(0x11b1914c)));
  /* 11b12b77 push ebp */
  push32((uint32_t)(EBP));
  /* 11b12b78 push esi */
  push32((uint32_t)(ESI));
  /* 11b12b79 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12b7d push edi */
  push32((uint32_t)(EDI));
  /* 11b12b7e mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11b12b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12b84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12b86 push esi */
  push32((uint32_t)(ESI));
  /* 11b12b87 push edi */
  push32((uint32_t)(EDI));
  /* 11b12b88 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12b8au);
  /* 11b12b8a mov ebp, dword ptr [esp + 0x2c] */
  EBP = (r32((uint32_t)(ESP + 0x2c)));
  /* 11b12b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12b92 push ebp */
  push32((uint32_t)(EBP));
  /* 11b12b93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12b95 call dword ptr [0x11b19168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19168))), 0x11b12b9bu);
  /* 11b12b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12b9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12b9f push esi */
  push32((uint32_t)(ESI));
  /* 11b12ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b12ba1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b12ba3u);
  /* 11b12ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12ba7 push edi */
  push32((uint32_t)(EDI));
  /* 11b12ba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12baa call dword ptr [0x11b19168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19168))), 0x11b12bb0u);
  /* 11b12bb0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12bb3 pop edi */
  EDI = (pop32());
  /* 11b12bb4 pop esi */
  ESI = (pop32());
  /* 11b12bb5 pop ebp */
  EBP = (pop32());
  /* 11b12bb6 pop ebx */
  EBX = (pop32());
  /* 11b12bb7 ret  */
  ESPCHK(0x11b12b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc0 @ 0x11b12bc0 (22 bytes, 8 insns) */
void f_11b12bc0(void) {
  FTRACE(0x11b12bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12bc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b12bc4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b12bc6 push eax */
  push32((uint32_t)(EAX));
  /* 11b12bc7 call dword ptr [0x11b19174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19174))), 0x11b12bcdu);
  /* 11b12bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b12bd2 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11b12bd5 ret  */
  ESPCHK(0x11b12bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002be0 @ 0x11b12be0 (2125 bytes, 784 insns) [1 switch table(s)] */
void f_11b12be0(void) {
  FTRACE(0x11b12be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b12be0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b12be4 push esi */
  push32((uint32_t)(ESI));
  /* 11b12be5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b12be6 push edi */
  push32((uint32_t)(EDI));
  /* 11b12be7 cmp eax, 0x13 */
  { uint32_t _a=(EAX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b12bea ja 0x11b1342a */
  if ((!C.cf&&!C.zf)) goto L_11b1342a;
  /* 11b12bf0 jmp dword ptr [eax*4 + 0x11b13430] */
  switch (EAX) {
    case 0: goto L_11b12bf7;
    case 1: goto L_11b12c6d;
    case 2: goto L_11b12cf5;
    case 3: goto L_11b12d47;
    case 4: goto L_11b12da5;
    case 5: goto L_11b12e2a;
    case 6: goto L_11b12ebe;
    case 7: goto L_11b12f37;
    case 8: goto L_11b12fa1;
    case 9: goto L_11b12fbd;
    case 10: goto L_11b1300f;
    case 11: goto L_11b130a9;
    case 12: goto L_11b1312e;
    case 13: goto L_11b13177;
    case 14: goto L_11b131ba;
    case 15: goto L_11b131fd;
    case 16: goto L_11b13246;
    case 17: goto L_11b132a4;
    case 18: goto L_11b1330e;
    case 19: goto L_11b13393;
    default: x86_unimpl("switch@0x11b12bf0 out of table"); return;
  }
L_11b12bf7:;
  /* 11b12bf7 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12bfb mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12c03 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b12c05 push 0x11b1e830 */
  push32((uint32_t)(0x11b1e830u));
  /* 11b12c0a push esi */
  push32((uint32_t)(ESI));
  /* 11b12c0b call edi */
  call_ind((uint32_t)(EDI), 0x11b12c0du);
  /* 11b12c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c0f push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b12c11 push 0x11b1e848 */
  push32((uint32_t)(0x11b1e848u));
  /* 11b12c16 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c17 call edi */
  call_ind((uint32_t)(EDI), 0x11b12c19u);
  /* 11b12c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b12c1d push 0x11b1e858 */
  push32((uint32_t)(0x11b1e858u));
  /* 11b12c22 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c23 call edi */
  call_ind((uint32_t)(EDI), 0x11b12c25u);
  /* 11b12c25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12c29 push 0x11b1e850 */
  push32((uint32_t)(0x11b1e850u));
  /* 11b12c2e push esi */
  push32((uint32_t)(ESI));
  /* 11b12c2f call edi */
  call_ind((uint32_t)(EDI), 0x11b12c31u);
  /* 11b12c31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12c34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c36 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b12c38 push 0x11b1e7e8 */
  push32((uint32_t)(0x11b1e7e8u));
  /* 11b12c3d push esi */
  push32((uint32_t)(ESI));
  /* 11b12c3e call edi */
  call_ind((uint32_t)(EDI), 0x11b12c40u);
  /* 11b12c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c42 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b12c44 push 0x11b1e810 */
  push32((uint32_t)(0x11b1e810u));
  /* 11b12c49 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c4a call edi */
  call_ind((uint32_t)(EDI), 0x11b12c4cu);
  /* 11b12c4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c4e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b12c50 push 0x11b1e820 */
  push32((uint32_t)(0x11b1e820u));
  /* 11b12c55 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c56 call edi */
  call_ind((uint32_t)(EDI), 0x11b12c58u);
  /* 11b12c58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c5a push 0x90 */
  push32((uint32_t)(0x90u));
  /* 11b12c5f push 0x11b1e478 */
  push32((uint32_t)(0x11b1e478u));
  /* 11b12c64 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c65 call edi */
  call_ind((uint32_t)(EDI), 0x11b12c67u);
  /* 11b12c67 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12c6a pop edi */
  EDI = (pop32());
  /* 11b12c6b pop esi */
  ESI = (pop32());
  /* 11b12c6c ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12c6d:;
  /* 11b12c6d mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12c71 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12c79 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12c7e push 0x11b1e820 */
  push32((uint32_t)(0x11b1e820u));
  /* 11b12c83 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c84 call edi */
  call_ind((uint32_t)(EDI), 0x11b12c86u);
  /* 11b12c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c88 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12c8d push 0x11b1e810 */
  push32((uint32_t)(0x11b1e810u));
  /* 11b12c92 push esi */
  push32((uint32_t)(ESI));
  /* 11b12c93 call edi */
  call_ind((uint32_t)(EDI), 0x11b12c95u);
  /* 11b12c95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12c97 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12c9c push 0x11b1e7e8 */
  push32((uint32_t)(0x11b1e7e8u));
  /* 11b12ca1 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ca2 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ca4u);
  /* 11b12ca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12ca6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b12cab push 0x11b1e850 */
  push32((uint32_t)(0x11b1e850u));
  /* 11b12cb0 push esi */
  push32((uint32_t)(ESI));
  /* 11b12cb1 call edi */
  call_ind((uint32_t)(EDI), 0x11b12cb3u);
  /* 11b12cb3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12cb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12cb8 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b12cbd push 0x11b1e858 */
  push32((uint32_t)(0x11b1e858u));
  /* 11b12cc2 push esi */
  push32((uint32_t)(ESI));
  /* 11b12cc3 call edi */
  call_ind((uint32_t)(EDI), 0x11b12cc5u);
  /* 11b12cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12cc7 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b12ccc push 0x11b1e848 */
  push32((uint32_t)(0x11b1e848u));
  /* 11b12cd1 push esi */
  push32((uint32_t)(ESI));
  /* 11b12cd2 call edi */
  call_ind((uint32_t)(EDI), 0x11b12cd4u);
  /* 11b12cd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12cd6 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b12cdb push 0x11b1e830 */
  push32((uint32_t)(0x11b1e830u));
  /* 11b12ce0 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ce1 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ce3u);
  /* 11b12ce3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12ce5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12ce7 push 0x11b1e930 */
  push32((uint32_t)(0x11b1e930u));
  /* 11b12cec push esi */
  push32((uint32_t)(ESI));
  /* 11b12ced call edi */
  call_ind((uint32_t)(EDI), 0x11b12cefu);
  /* 11b12cef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12cf2 pop edi */
  EDI = (pop32());
  /* 11b12cf3 pop esi */
  ESI = (pop32());
  /* 11b12cf4 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12cf5:;
  /* 11b12cf5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12cf9 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12d03 push 0x11b1e850 */
  push32((uint32_t)(0x11b1e850u));
  /* 11b12d08 push esi */
  push32((uint32_t)(ESI));
  /* 11b12d09 call edi */
  call_ind((uint32_t)(EDI), 0x11b12d0bu);
  /* 11b12d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d0d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b12d0f push 0x11b1e7e8 */
  push32((uint32_t)(0x11b1e7e8u));
  /* 11b12d14 push esi */
  push32((uint32_t)(ESI));
  /* 11b12d15 call edi */
  call_ind((uint32_t)(EDI), 0x11b12d17u);
  /* 11b12d17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d19 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b12d1b push 0x11b1e810 */
  push32((uint32_t)(0x11b1e810u));
  /* 11b12d20 push esi */
  push32((uint32_t)(ESI));
  /* 11b12d21 call edi */
  call_ind((uint32_t)(EDI), 0x11b12d23u);
  /* 11b12d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d25 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b12d27 push 0x11b1e820 */
  push32((uint32_t)(0x11b1e820u));
  /* 11b12d2c push esi */
  push32((uint32_t)(ESI));
  /* 11b12d2d call edi */
  call_ind((uint32_t)(EDI), 0x11b12d2fu);
  /* 11b12d2f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d34 push 0x90 */
  push32((uint32_t)(0x90u));
  /* 11b12d39 push 0x11b1e478 */
  push32((uint32_t)(0x11b1e478u));
  /* 11b12d3e push esi */
  push32((uint32_t)(ESI));
  /* 11b12d3f call edi */
  call_ind((uint32_t)(EDI), 0x11b12d41u);
  /* 11b12d41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12d44 pop edi */
  EDI = (pop32());
  /* 11b12d45 pop esi */
  ESI = (pop32());
  /* 11b12d46 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12d47:;
  /* 11b12d47 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12d4b mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12d53 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12d58 push 0x11b1e820 */
  push32((uint32_t)(0x11b1e820u));
  /* 11b12d5d push esi */
  push32((uint32_t)(ESI));
  /* 11b12d5e call edi */
  call_ind((uint32_t)(EDI), 0x11b12d60u);
  /* 11b12d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d62 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12d67 push 0x11b1e810 */
  push32((uint32_t)(0x11b1e810u));
  /* 11b12d6c push esi */
  push32((uint32_t)(ESI));
  /* 11b12d6d call edi */
  call_ind((uint32_t)(EDI), 0x11b12d6fu);
  /* 11b12d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d71 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12d76 push 0x11b1e7e8 */
  push32((uint32_t)(0x11b1e7e8u));
  /* 11b12d7b push esi */
  push32((uint32_t)(ESI));
  /* 11b12d7c call edi */
  call_ind((uint32_t)(EDI), 0x11b12d7eu);
  /* 11b12d7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d80 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b12d85 push 0x11b1e850 */
  push32((uint32_t)(0x11b1e850u));
  /* 11b12d8a push esi */
  push32((uint32_t)(ESI));
  /* 11b12d8b call edi */
  call_ind((uint32_t)(EDI), 0x11b12d8du);
  /* 11b12d8d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12d90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12d92 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b12d97 push 0x11b1e468 */
  push32((uint32_t)(0x11b1e468u));
  /* 11b12d9c push esi */
  push32((uint32_t)(ESI));
  /* 11b12d9d call edi */
  call_ind((uint32_t)(EDI), 0x11b12d9fu);
  /* 11b12d9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12da2 pop edi */
  EDI = (pop32());
  /* 11b12da3 pop esi */
  ESI = (pop32());
  /* 11b12da4 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12da5:;
  /* 11b12da5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12da9 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12daf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12db1 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b12db3 push 0x11b1e7c8 */
  push32((uint32_t)(0x11b1e7c8u));
  /* 11b12db8 push esi */
  push32((uint32_t)(ESI));
  /* 11b12db9 call edi */
  call_ind((uint32_t)(EDI), 0x11b12dbbu);
  /* 11b12dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12dbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12dbf push 0x11b1e7d8 */
  push32((uint32_t)(0x11b1e7d8u));
  /* 11b12dc4 push esi */
  push32((uint32_t)(ESI));
  /* 11b12dc5 call edi */
  call_ind((uint32_t)(EDI), 0x11b12dc7u);
  /* 11b12dc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12dc9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b12dcb push 0x11b1e7f0 */
  push32((uint32_t)(0x11b1e7f0u));
  /* 11b12dd0 push esi */
  push32((uint32_t)(ESI));
  /* 11b12dd1 call edi */
  call_ind((uint32_t)(EDI), 0x11b12dd3u);
  /* 11b12dd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12dd5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11b12dd7 push 0x11b1e800 */
  push32((uint32_t)(0x11b1e800u));
  /* 11b12ddc push esi */
  push32((uint32_t)(ESI));
  /* 11b12ddd call edi */
  call_ind((uint32_t)(EDI), 0x11b12ddfu);
  /* 11b12ddf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12de2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12de4 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b12de6 push 0x11b1e7a8 */
  push32((uint32_t)(0x11b1e7a8u));
  /* 11b12deb push esi */
  push32((uint32_t)(ESI));
  /* 11b12dec call edi */
  call_ind((uint32_t)(EDI), 0x11b12deeu);
  /* 11b12dee push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12df2 push 0x11b1e7c0 */
  push32((uint32_t)(0x11b1e7c0u));
  /* 11b12df7 push esi */
  push32((uint32_t)(ESI));
  /* 11b12df8 call edi */
  call_ind((uint32_t)(EDI), 0x11b12dfau);
  /* 11b12dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12dfc push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b12e01 push 0x11b1e7d0 */
  push32((uint32_t)(0x11b1e7d0u));
  /* 11b12e06 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e07 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e09u);
  /* 11b12e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12e0d push 0x11b1e7e0 */
  push32((uint32_t)(0x11b1e7e0u));
  /* 11b12e12 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e13 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e15u);
  /* 11b12e15 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12e18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e1a push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b12e1c push 0x11b1e488 */
  push32((uint32_t)(0x11b1e488u));
  /* 11b12e21 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e22 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e24u);
  /* 11b12e24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12e27 pop edi */
  EDI = (pop32());
  /* 11b12e28 pop esi */
  ESI = (pop32());
  /* 11b12e29 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12e2a:;
  /* 11b12e2a mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12e2e mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12e36 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b12e38 push 0x11b1e7e0 */
  push32((uint32_t)(0x11b1e7e0u));
  /* 11b12e3d push esi */
  push32((uint32_t)(ESI));
  /* 11b12e3e call edi */
  call_ind((uint32_t)(EDI), 0x11b12e40u);
  /* 11b12e40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e42 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b12e44 push 0x11b1e7d0 */
  push32((uint32_t)(0x11b1e7d0u));
  /* 11b12e49 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e4a call edi */
  call_ind((uint32_t)(EDI), 0x11b12e4cu);
  /* 11b12e4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e4e push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11b12e53 push 0x11b1e7c0 */
  push32((uint32_t)(0x11b1e7c0u));
  /* 11b12e58 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e59 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e5bu);
  /* 11b12e5b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e5d push 0xbe */
  push32((uint32_t)(0xbeu));
  /* 11b12e62 push 0x11b1e7a8 */
  push32((uint32_t)(0x11b1e7a8u));
  /* 11b12e67 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e68 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e6au);
  /* 11b12e6a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12e6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e6f push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b12e74 push 0x11b1e800 */
  push32((uint32_t)(0x11b1e800u));
  /* 11b12e79 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e7a call edi */
  call_ind((uint32_t)(EDI), 0x11b12e7cu);
  /* 11b12e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e7e push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b12e83 push 0x11b1e7f0 */
  push32((uint32_t)(0x11b1e7f0u));
  /* 11b12e88 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e89 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e8bu);
  /* 11b12e8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e8d push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b12e92 push 0x11b1e7d8 */
  push32((uint32_t)(0x11b1e7d8u));
  /* 11b12e97 push esi */
  push32((uint32_t)(ESI));
  /* 11b12e98 call edi */
  call_ind((uint32_t)(EDI), 0x11b12e9au);
  /* 11b12e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12e9c push 0xbe */
  push32((uint32_t)(0xbeu));
  /* 11b12ea1 push 0x11b1e7c8 */
  push32((uint32_t)(0x11b1e7c8u));
  /* 11b12ea6 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ea7 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ea9u);
  /* 11b12ea9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12eac push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12eae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12eb0 push 0x11b1e960 */
  push32((uint32_t)(0x11b1e960u));
  /* 11b12eb5 push esi */
  push32((uint32_t)(ESI));
  /* 11b12eb6 call edi */
  call_ind((uint32_t)(EDI), 0x11b12eb8u);
  /* 11b12eb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12ebb pop edi */
  EDI = (pop32());
  /* 11b12ebc pop esi */
  ESI = (pop32());
  /* 11b12ebd ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12ebe:;
  /* 11b12ebe mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12ec2 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12eca push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b12ecf push 0x11b1e7b0 */
  push32((uint32_t)(0x11b1e7b0u));
  /* 11b12ed4 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ed5 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ed7u);
  /* 11b12ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12ed9 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b12ede push 0x11b1e7b8 */
  push32((uint32_t)(0x11b1e7b8u));
  /* 11b12ee3 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ee4 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ee6u);
  /* 11b12ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12ee8 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b12eed push 0x11b1e790 */
  push32((uint32_t)(0x11b1e790u));
  /* 11b12ef2 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ef3 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ef5u);
  /* 11b12ef5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12ef7 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b12efc push 0x11b1e798 */
  push32((uint32_t)(0x11b1e798u));
  /* 11b12f01 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f02 call edi */
  call_ind((uint32_t)(EDI), 0x11b12f04u);
  /* 11b12f04 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12f07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f09 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11b12f0e push 0x11b1e7a0 */
  push32((uint32_t)(0x11b1e7a0u));
  /* 11b12f13 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f14 call edi */
  call_ind((uint32_t)(EDI), 0x11b12f16u);
  /* 11b12f16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f18 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b12f1d push 0x11b1e8b8 */
  push32((uint32_t)(0x11b1e8b8u));
  /* 11b12f22 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f23 call edi */
  call_ind((uint32_t)(EDI), 0x11b12f25u);
  /* 11b12f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f27 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b12f29 push 0x11b1e488 */
  push32((uint32_t)(0x11b1e488u));
  /* 11b12f2e push esi */
  push32((uint32_t)(ESI));
  /* 11b12f2f call edi */
  call_ind((uint32_t)(EDI), 0x11b12f31u);
  /* 11b12f31 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12f34 pop edi */
  EDI = (pop32());
  /* 11b12f35 pop esi */
  ESI = (pop32());
  /* 11b12f36 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12f37:;
  /* 11b12f37 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12f3b mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12f43 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b12f45 push 0x11b1e8b8 */
  push32((uint32_t)(0x11b1e8b8u));
  /* 11b12f4a push esi */
  push32((uint32_t)(ESI));
  /* 11b12f4b call edi */
  call_ind((uint32_t)(EDI), 0x11b12f4du);
  /* 11b12f4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f4f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12f51 push 0x11b1e7a0 */
  push32((uint32_t)(0x11b1e7a0u));
  /* 11b12f56 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f57 call edi */
  call_ind((uint32_t)(EDI), 0x11b12f59u);
  /* 11b12f59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f5b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12f5d push 0x11b1e798 */
  push32((uint32_t)(0x11b1e798u));
  /* 11b12f62 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f63 call edi */
  call_ind((uint32_t)(EDI), 0x11b12f65u);
  /* 11b12f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f67 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b12f69 push 0x11b1e790 */
  push32((uint32_t)(0x11b1e790u));
  /* 11b12f6e push esi */
  push32((uint32_t)(ESI));
  /* 11b12f6f call edi */
  call_ind((uint32_t)(EDI), 0x11b12f71u);
  /* 11b12f71 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12f74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f76 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b12f78 push 0x11b1e7b8 */
  push32((uint32_t)(0x11b1e7b8u));
  /* 11b12f7d push esi */
  push32((uint32_t)(ESI));
  /* 11b12f7e call edi */
  call_ind((uint32_t)(EDI), 0x11b12f80u);
  /* 11b12f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f82 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b12f84 push 0x11b1e7b0 */
  push32((uint32_t)(0x11b1e7b0u));
  /* 11b12f89 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f8a call edi */
  call_ind((uint32_t)(EDI), 0x11b12f8cu);
  /* 11b12f8c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12f8e push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b12f93 push 0x11b1ea08 */
  push32((uint32_t)(0x11b1ea08u));
  /* 11b12f98 push esi */
  push32((uint32_t)(ESI));
  /* 11b12f99 call edi */
  call_ind((uint32_t)(EDI), 0x11b12f9bu);
  /* 11b12f9b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12f9e pop edi */
  EDI = (pop32());
  /* 11b12f9f pop esi */
  ESI = (pop32());
  /* 11b12fa0 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b12fa1:;
  /* 11b12fa1 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12fa5 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12fab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12fad push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b12fb2 push 0x11b1e790 */
  push32((uint32_t)(0x11b1e790u));
  /* 11b12fb7 push esi */
  push32((uint32_t)(ESI));
  /* 11b12fb8 jmp 0x11b13065 */
  goto L_11b13065;
L_11b12fbd:;
  /* 11b12fbd mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b12fc1 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b12fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b12fc9 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b12fcb push 0x11b1e8b8 */
  push32((uint32_t)(0x11b1e8b8u));
  /* 11b12fd0 push esi */
  push32((uint32_t)(ESI));
  /* 11b12fd1 call edi */
  call_ind((uint32_t)(EDI), 0x11b12fd3u);
  /* 11b12fd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12fd5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12fd7 push 0x11b1e7a0 */
  push32((uint32_t)(0x11b1e7a0u));
  /* 11b12fdc push esi */
  push32((uint32_t)(ESI));
  /* 11b12fdd call edi */
  call_ind((uint32_t)(EDI), 0x11b12fdfu);
  /* 11b12fdf push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12fe1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b12fe3 push 0x11b1e798 */
  push32((uint32_t)(0x11b1e798u));
  /* 11b12fe8 push esi */
  push32((uint32_t)(ESI));
  /* 11b12fe9 call edi */
  call_ind((uint32_t)(EDI), 0x11b12febu);
  /* 11b12feb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12fed push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b12fef push 0x11b1e790 */
  push32((uint32_t)(0x11b1e790u));
  /* 11b12ff4 push esi */
  push32((uint32_t)(ESI));
  /* 11b12ff5 call edi */
  call_ind((uint32_t)(EDI), 0x11b12ff7u);
  /* 11b12ff7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b12ffa push 2 */
  push32((uint32_t)(0x2u));
  /* 11b12ffc push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b13001 push 0x11b1ea10 */
  push32((uint32_t)(0x11b1ea10u));
  /* 11b13006 push esi */
  push32((uint32_t)(ESI));
  /* 11b13007 call edi */
  call_ind((uint32_t)(EDI), 0x11b13009u);
  /* 11b13009 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1300c pop edi */
  EDI = (pop32());
  /* 11b1300d pop esi */
  ESI = (pop32());
  /* 11b1300e ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b1300f:;
  /* 11b1300f mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b13013 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b13019 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1301b push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b13020 push 0x11b1e7f8 */
  push32((uint32_t)(0x11b1e7f8u));
  /* 11b13025 push esi */
  push32((uint32_t)(ESI));
  /* 11b13026 call edi */
  call_ind((uint32_t)(EDI), 0x11b13028u);
  /* 11b13028 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1302a push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b1302f push 0x11b1e808 */
  push32((uint32_t)(0x11b1e808u));
  /* 11b13034 push esi */
  push32((uint32_t)(ESI));
  /* 11b13035 call edi */
  call_ind((uint32_t)(EDI), 0x11b13037u);
  /* 11b13037 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13039 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b1303e push 0x11b1e818 */
  push32((uint32_t)(0x11b1e818u));
  /* 11b13043 push esi */
  push32((uint32_t)(ESI));
  /* 11b13044 call edi */
  call_ind((uint32_t)(EDI), 0x11b13046u);
  /* 11b13046 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13048 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b1304d push 0x11b1e828 */
  push32((uint32_t)(0x11b1e828u));
  /* 11b13052 push esi */
  push32((uint32_t)(ESI));
  /* 11b13053 call edi */
  call_ind((uint32_t)(EDI), 0x11b13055u);
  /* 11b13055 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13058 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1305a push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b1305f push 0x11b1e840 */
  push32((uint32_t)(0x11b1e840u));
  /* 11b13064 push esi */
  push32((uint32_t)(ESI));
L_11b13065:;
  /* 11b13065 call edi */
  call_ind((uint32_t)(EDI), 0x11b13067u);
  /* 11b13067 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13069 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b1306e push 0x11b1e798 */
  push32((uint32_t)(0x11b1e798u));
  /* 11b13073 push esi */
  push32((uint32_t)(ESI));
  /* 11b13074 call edi */
  call_ind((uint32_t)(EDI), 0x11b13076u);
  /* 11b13076 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13078 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11b1307d push 0x11b1e7a0 */
  push32((uint32_t)(0x11b1e7a0u));
  /* 11b13082 push esi */
  push32((uint32_t)(ESI));
  /* 11b13083 call edi */
  call_ind((uint32_t)(EDI), 0x11b13085u);
  /* 11b13085 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13087 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b1308c push 0x11b1e8b8 */
  push32((uint32_t)(0x11b1e8b8u));
  /* 11b13091 push esi */
  push32((uint32_t)(ESI));
  /* 11b13092 call edi */
  call_ind((uint32_t)(EDI), 0x11b13094u);
  /* 11b13094 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13097 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13099 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b1309b push 0x11b1e488 */
  push32((uint32_t)(0x11b1e488u));
  /* 11b130a0 push esi */
  push32((uint32_t)(ESI));
  /* 11b130a1 call edi */
  call_ind((uint32_t)(EDI), 0x11b130a3u);
  /* 11b130a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b130a6 pop edi */
  EDI = (pop32());
  /* 11b130a7 pop esi */
  ESI = (pop32());
  /* 11b130a8 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b130a9:;
  /* 11b130a9 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b130ad mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b130b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b130b5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b130b7 push 0x11b1e8b8 */
  push32((uint32_t)(0x11b1e8b8u));
  /* 11b130bc push esi */
  push32((uint32_t)(ESI));
  /* 11b130bd call edi */
  call_ind((uint32_t)(EDI), 0x11b130bfu);
  /* 11b130bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11b130c1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b130c3 push 0x11b1e7a0 */
  push32((uint32_t)(0x11b1e7a0u));
  /* 11b130c8 push esi */
  push32((uint32_t)(ESI));
  /* 11b130c9 call edi */
  call_ind((uint32_t)(EDI), 0x11b130cbu);
  /* 11b130cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b130cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b130cf push 0x11b1e798 */
  push32((uint32_t)(0x11b1e798u));
  /* 11b130d4 push esi */
  push32((uint32_t)(ESI));
  /* 11b130d5 call edi */
  call_ind((uint32_t)(EDI), 0x11b130d7u);
  /* 11b130d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b130d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b130db push 0x11b1e840 */
  push32((uint32_t)(0x11b1e840u));
  /* 11b130e0 push esi */
  push32((uint32_t)(ESI));
  /* 11b130e1 call edi */
  call_ind((uint32_t)(EDI), 0x11b130e3u);
  /* 11b130e3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b130e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b130e8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b130ea push 0x11b1e828 */
  push32((uint32_t)(0x11b1e828u));
  /* 11b130ef push esi */
  push32((uint32_t)(ESI));
  /* 11b130f0 call edi */
  call_ind((uint32_t)(EDI), 0x11b130f2u);
  /* 11b130f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b130f4 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b130f6 push 0x11b1e818 */
  push32((uint32_t)(0x11b1e818u));
  /* 11b130fb push esi */
  push32((uint32_t)(ESI));
  /* 11b130fc call edi */
  call_ind((uint32_t)(EDI), 0x11b130feu);
  /* 11b130fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13100 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b13102 push 0x11b1e808 */
  push32((uint32_t)(0x11b1e808u));
  /* 11b13107 push esi */
  push32((uint32_t)(ESI));
  /* 11b13108 call edi */
  call_ind((uint32_t)(EDI), 0x11b1310au);
  /* 11b1310a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1310c push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b1310e push 0x11b1e7f8 */
  push32((uint32_t)(0x11b1e7f8u));
  /* 11b13113 push esi */
  push32((uint32_t)(ESI));
  /* 11b13114 call edi */
  call_ind((uint32_t)(EDI), 0x11b13116u);
  /* 11b13116 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13119 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1311b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b13120 push 0x11b1e750 */
  push32((uint32_t)(0x11b1e750u));
  /* 11b13125 push esi */
  push32((uint32_t)(ESI));
  /* 11b13126 call edi */
  call_ind((uint32_t)(EDI), 0x11b13128u);
  /* 11b13128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1312b pop edi */
  EDI = (pop32());
  /* 11b1312c pop esi */
  ESI = (pop32());
  /* 11b1312d ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b1312e:;
  /* 11b1312e mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b13132 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b13138 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1313a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b1313c push 0x11b1e898 */
  push32((uint32_t)(0x11b1e898u));
  /* 11b13141 push esi */
  push32((uint32_t)(ESI));
  /* 11b13142 call edi */
  call_ind((uint32_t)(EDI), 0x11b13144u);
  /* 11b13144 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13146 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b1314b push 0x11b1e8d0 */
  push32((uint32_t)(0x11b1e8d0u));
  /* 11b13150 push esi */
  push32((uint32_t)(ESI));
  /* 11b13151 call edi */
  call_ind((uint32_t)(EDI), 0x11b13153u);
  /* 11b13153 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13155 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b1315a push 0x11b1e8c8 */
  push32((uint32_t)(0x11b1e8c8u));
  /* 11b1315f push esi */
  push32((uint32_t)(ESI));
  /* 11b13160 call edi */
  call_ind((uint32_t)(EDI), 0x11b13162u);
  /* 11b13162 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13164 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b13169 push 0x11b1e770 */
  push32((uint32_t)(0x11b1e770u));
  /* 11b1316e push esi */
  push32((uint32_t)(ESI));
  /* 11b1316f call edi */
  call_ind((uint32_t)(EDI), 0x11b13171u);
  /* 11b13171 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13174 pop edi */
  EDI = (pop32());
  /* 11b13175 pop esi */
  ESI = (pop32());
  /* 11b13176 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b13177:;
  /* 11b13177 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b1317b mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b13181 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b13183 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b13185 push 0x11b1e8c8 */
  push32((uint32_t)(0x11b1e8c8u));
  /* 11b1318a push esi */
  push32((uint32_t)(ESI));
  /* 11b1318b call edi */
  call_ind((uint32_t)(EDI), 0x11b1318du);
  /* 11b1318d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1318f push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b13191 push 0x11b1e8d0 */
  push32((uint32_t)(0x11b1e8d0u));
  /* 11b13196 push esi */
  push32((uint32_t)(ESI));
  /* 11b13197 call edi */
  call_ind((uint32_t)(EDI), 0x11b13199u);
  /* 11b13199 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1319b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b131a0 push 0x11b1e898 */
  push32((uint32_t)(0x11b1e898u));
  /* 11b131a5 push esi */
  push32((uint32_t)(ESI));
  /* 11b131a6 call edi */
  call_ind((uint32_t)(EDI), 0x11b131a8u);
  /* 11b131a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b131aa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b131ac push 0x11b1e480 */
  push32((uint32_t)(0x11b1e480u));
  /* 11b131b1 push esi */
  push32((uint32_t)(ESI));
  /* 11b131b2 call edi */
  call_ind((uint32_t)(EDI), 0x11b131b4u);
  /* 11b131b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b131b7 pop edi */
  EDI = (pop32());
  /* 11b131b8 pop esi */
  ESI = (pop32());
  /* 11b131b9 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b131ba:;
  /* 11b131ba mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b131be mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b131c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b131c6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b131c8 push 0x11b1e888 */
  push32((uint32_t)(0x11b1e888u));
  /* 11b131cd push esi */
  push32((uint32_t)(ESI));
  /* 11b131ce call edi */
  call_ind((uint32_t)(EDI), 0x11b131d0u);
  /* 11b131d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b131d2 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b131d4 push 0x11b1e878 */
  push32((uint32_t)(0x11b1e878u));
  /* 11b131d9 push esi */
  push32((uint32_t)(ESI));
  /* 11b131da call edi */
  call_ind((uint32_t)(EDI), 0x11b131dcu);
  /* 11b131dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b131de push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b131e0 push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b131e5 push esi */
  push32((uint32_t)(ESI));
  /* 11b131e6 call edi */
  call_ind((uint32_t)(EDI), 0x11b131e8u);
  /* 11b131e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b131ea push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b131ef push 0x11b1e470 */
  push32((uint32_t)(0x11b1e470u));
  /* 11b131f4 push esi */
  push32((uint32_t)(ESI));
  /* 11b131f5 call edi */
  call_ind((uint32_t)(EDI), 0x11b131f7u);
  /* 11b131f7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b131fa pop edi */
  EDI = (pop32());
  /* 11b131fb pop esi */
  ESI = (pop32());
  /* 11b131fc ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b131fd:;
  /* 11b131fd mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b13201 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b13207 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b13209 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b1320e push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b13213 push esi */
  push32((uint32_t)(ESI));
  /* 11b13214 call edi */
  call_ind((uint32_t)(EDI), 0x11b13216u);
  /* 11b13216 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13218 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 11b1321d push 0x11b1e878 */
  push32((uint32_t)(0x11b1e878u));
  /* 11b13222 push esi */
  push32((uint32_t)(ESI));
  /* 11b13223 call edi */
  call_ind((uint32_t)(EDI), 0x11b13225u);
  /* 11b13225 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13227 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b1322c push 0x11b1e888 */
  push32((uint32_t)(0x11b1e888u));
  /* 11b13231 push esi */
  push32((uint32_t)(ESI));
  /* 11b13232 call edi */
  call_ind((uint32_t)(EDI), 0x11b13234u);
  /* 11b13234 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13236 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b13238 push 0x11b1e430 */
  push32((uint32_t)(0x11b1e430u));
  /* 11b1323d push esi */
  push32((uint32_t)(ESI));
  /* 11b1323e call edi */
  call_ind((uint32_t)(EDI), 0x11b13240u);
  /* 11b13240 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13243 pop edi */
  EDI = (pop32());
  /* 11b13244 pop esi */
  ESI = (pop32());
  /* 11b13245 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b13246:;
  /* 11b13246 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b1324a mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b13250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b13252 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b13254 push 0x11b1e870 */
  push32((uint32_t)(0x11b1e870u));
  /* 11b13259 push esi */
  push32((uint32_t)(ESI));
  /* 11b1325a call edi */
  call_ind((uint32_t)(EDI), 0x11b1325cu);
  /* 11b1325c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1325e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b13260 push 0x11b1e860 */
  push32((uint32_t)(0x11b1e860u));
  /* 11b13265 push esi */
  push32((uint32_t)(ESI));
  /* 11b13266 call edi */
  call_ind((uint32_t)(EDI), 0x11b13268u);
  /* 11b13268 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1326a push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b1326c push 0x11b1e838 */
  push32((uint32_t)(0x11b1e838u));
  /* 11b13271 push esi */
  push32((uint32_t)(ESI));
  /* 11b13272 call edi */
  call_ind((uint32_t)(EDI), 0x11b13274u);
  /* 11b13274 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13276 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b13278 push 0x11b1e8a0 */
  push32((uint32_t)(0x11b1e8a0u));
  /* 11b1327d push esi */
  push32((uint32_t)(ESI));
  /* 11b1327e call edi */
  call_ind((uint32_t)(EDI), 0x11b13280u);
  /* 11b13280 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13283 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13285 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b13287 push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b1328c push esi */
  push32((uint32_t)(ESI));
  /* 11b1328d call edi */
  call_ind((uint32_t)(EDI), 0x11b1328fu);
  /* 11b1328f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13291 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b13296 push 0x11b1e470 */
  push32((uint32_t)(0x11b1e470u));
  /* 11b1329b push esi */
  push32((uint32_t)(ESI));
  /* 11b1329c call edi */
  call_ind((uint32_t)(EDI), 0x11b1329eu);
  /* 11b1329e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b132a1 pop edi */
  EDI = (pop32());
  /* 11b132a2 pop esi */
  ESI = (pop32());
  /* 11b132a3 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b132a4:;
  /* 11b132a4 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b132a8 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b132ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11b132b0 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b132b5 push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b132ba push esi */
  push32((uint32_t)(ESI));
  /* 11b132bb call edi */
  call_ind((uint32_t)(EDI), 0x11b132bdu);
  /* 11b132bd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b132bf push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b132c4 push 0x11b1e8a0 */
  push32((uint32_t)(0x11b1e8a0u));
  /* 11b132c9 push esi */
  push32((uint32_t)(ESI));
  /* 11b132ca call edi */
  call_ind((uint32_t)(EDI), 0x11b132ccu);
  /* 11b132cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b132ce push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b132d3 push 0x11b1e838 */
  push32((uint32_t)(0x11b1e838u));
  /* 11b132d8 push esi */
  push32((uint32_t)(ESI));
  /* 11b132d9 call edi */
  call_ind((uint32_t)(EDI), 0x11b132dbu);
  /* 11b132db push 2 */
  push32((uint32_t)(0x2u));
  /* 11b132dd push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11b132e2 push 0x11b1e860 */
  push32((uint32_t)(0x11b1e860u));
  /* 11b132e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b132e8 call edi */
  call_ind((uint32_t)(EDI), 0x11b132eau);
  /* 11b132ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b132ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11b132ef push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b132f4 push 0x11b1e870 */
  push32((uint32_t)(0x11b1e870u));
  /* 11b132f9 push esi */
  push32((uint32_t)(ESI));
  /* 11b132fa call edi */
  call_ind((uint32_t)(EDI), 0x11b132fcu);
  /* 11b132fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b132fe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b13300 push 0x11b1ea60 */
  push32((uint32_t)(0x11b1ea60u));
  /* 11b13305 push esi */
  push32((uint32_t)(ESI));
  /* 11b13306 call edi */
  call_ind((uint32_t)(EDI), 0x11b13308u);
  /* 11b13308 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1330b pop edi */
  EDI = (pop32());
  /* 11b1330c pop esi */
  ESI = (pop32());
  /* 11b1330d ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b1330e:;
  /* 11b1330e mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b13312 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b13318 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1331a push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b1331c push 0x11b1e8c0 */
  push32((uint32_t)(0x11b1e8c0u));
  /* 11b13321 push esi */
  push32((uint32_t)(ESI));
  /* 11b13322 call edi */
  call_ind((uint32_t)(EDI), 0x11b13324u);
  /* 11b13324 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13326 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b13328 push 0x11b1e8b0 */
  push32((uint32_t)(0x11b1e8b0u));
  /* 11b1332d push esi */
  push32((uint32_t)(ESI));
  /* 11b1332e call edi */
  call_ind((uint32_t)(EDI), 0x11b13330u);
  /* 11b13330 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13332 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b13334 push 0x11b1e8a8 */
  push32((uint32_t)(0x11b1e8a8u));
  /* 11b13339 push esi */
  push32((uint32_t)(ESI));
  /* 11b1333a call edi */
  call_ind((uint32_t)(EDI), 0x11b1333cu);
  /* 11b1333c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1333e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b13340 push 0x11b1e890 */
  push32((uint32_t)(0x11b1e890u));
  /* 11b13345 push esi */
  push32((uint32_t)(ESI));
  /* 11b13346 call edi */
  call_ind((uint32_t)(EDI), 0x11b13348u);
  /* 11b13348 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1334b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1334d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b1334f push 0x11b1e880 */
  push32((uint32_t)(0x11b1e880u));
  /* 11b13354 push esi */
  push32((uint32_t)(ESI));
  /* 11b13355 call edi */
  call_ind((uint32_t)(EDI), 0x11b13357u);
  /* 11b13357 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13359 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b1335b push 0x11b1e838 */
  push32((uint32_t)(0x11b1e838u));
  /* 11b13360 push esi */
  push32((uint32_t)(ESI));
  /* 11b13361 call edi */
  call_ind((uint32_t)(EDI), 0x11b13363u);
  /* 11b13363 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13365 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b13367 push 0x11b1e8a0 */
  push32((uint32_t)(0x11b1e8a0u));
  /* 11b1336c push esi */
  push32((uint32_t)(ESI));
  /* 11b1336d call edi */
  call_ind((uint32_t)(EDI), 0x11b1336fu);
  /* 11b1336f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13371 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11b13373 push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b13378 push esi */
  push32((uint32_t)(ESI));
  /* 11b13379 call edi */
  call_ind((uint32_t)(EDI), 0x11b1337bu);
  /* 11b1337b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1337e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b13380 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b13385 push 0x11b1e470 */
  push32((uint32_t)(0x11b1e470u));
  /* 11b1338a push esi */
  push32((uint32_t)(ESI));
  /* 11b1338b call edi */
  call_ind((uint32_t)(EDI), 0x11b1338du);
  /* 11b1338d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13390 pop edi */
  EDI = (pop32());
  /* 11b13391 pop esi */
  ESI = (pop32());
  /* 11b13392 ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
L_11b13393:;
  /* 11b13393 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b13397 mov edi, dword ptr [0x11b19140] */
  EDI = (r32((uint32_t)(0x11b19140)));
  /* 11b1339d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1339f push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b133a4 push 0x11b1e868 */
  push32((uint32_t)(0x11b1e868u));
  /* 11b133a9 push esi */
  push32((uint32_t)(ESI));
  /* 11b133aa call edi */
  call_ind((uint32_t)(EDI), 0x11b133acu);
  /* 11b133ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11b133ae push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b133b3 push 0x11b1e8a0 */
  push32((uint32_t)(0x11b1e8a0u));
  /* 11b133b8 push esi */
  push32((uint32_t)(ESI));
  /* 11b133b9 call edi */
  call_ind((uint32_t)(EDI), 0x11b133bbu);
  /* 11b133bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b133bd push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b133c2 push 0x11b1e838 */
  push32((uint32_t)(0x11b1e838u));
  /* 11b133c7 push esi */
  push32((uint32_t)(ESI));
  /* 11b133c8 call edi */
  call_ind((uint32_t)(EDI), 0x11b133cau);
  /* 11b133ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11b133cc push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b133d1 push 0x11b1e880 */
  push32((uint32_t)(0x11b1e880u));
  /* 11b133d6 push esi */
  push32((uint32_t)(ESI));
  /* 11b133d7 call edi */
  call_ind((uint32_t)(EDI), 0x11b133d9u);
  /* 11b133d9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b133dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b133de push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11b133e3 push 0x11b1e890 */
  push32((uint32_t)(0x11b1e890u));
  /* 11b133e8 push esi */
  push32((uint32_t)(ESI));
  /* 11b133e9 call edi */
  call_ind((uint32_t)(EDI), 0x11b133ebu);
  /* 11b133eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b133ed push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b133f2 push 0x11b1e8a8 */
  push32((uint32_t)(0x11b1e8a8u));
  /* 11b133f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b133f8 call edi */
  call_ind((uint32_t)(EDI), 0x11b133fau);
  /* 11b133fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11b133fc push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11b13401 push 0x11b1e8b0 */
  push32((uint32_t)(0x11b1e8b0u));
  /* 11b13406 push esi */
  push32((uint32_t)(ESI));
  /* 11b13407 call edi */
  call_ind((uint32_t)(EDI), 0x11b13409u);
  /* 11b13409 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1340b push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11b13410 push 0x11b1e8c0 */
  push32((uint32_t)(0x11b1e8c0u));
  /* 11b13415 push esi */
  push32((uint32_t)(ESI));
  /* 11b13416 call edi */
  call_ind((uint32_t)(EDI), 0x11b13418u);
  /* 11b13418 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1341b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1341d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b1341f push 0x11b1e980 */
  push32((uint32_t)(0x11b1e980u));
  /* 11b13424 push esi */
  push32((uint32_t)(ESI));
  /* 11b13425 call edi */
  call_ind((uint32_t)(EDI), 0x11b13427u);
  /* 11b13427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b1342a:;
  /* 11b1342a pop edi */
  EDI = (pop32());
  /* 11b1342b pop esi */
  ESI = (pop32());
  /* 11b1342c ret  */
  ESPCHK(0x11b12be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x11b13480 (13 bytes, 4 insns) */
void f_11b13480(void) {
  FTRACE(0x11b13480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13480 call 0x11b137b9 */
  push32(0x11b13485u); f_11b137b9();
  /* 11b13485 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b13489 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b1348c ret  */
  ESPCHK(0x11b13480u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11b1348d (34 bytes, 9 insns) */
void f_11b1348d(void) {
  FTRACE(0x11b1348du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1348d call 0x11b137b9 */
  push32(0x11b13492u); f_11b137b9();
  /* 11b13492 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b13495 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b1349b add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b134a1 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b134a4 mov eax, ecx */
  EAX = (ECX);
  /* 11b134a6 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b134a9 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b134ae ret  */
  ESPCHK(0x11b1348du, _esp0);
  ESP += 4; return;
}

/* FUN_100034af @ 0x11b134af (220 bytes, 75 insns) */
void f_11b134af(void) {
  FTRACE(0x11b134afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b134af push ebp */
  push32((uint32_t)(EBP));
  /* 11b134b0 mov ebp, esp */
  EBP = (ESP);
  /* 11b134b2 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b134b8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11b134bb push eax */
  push32((uint32_t)(EAX));
  /* 11b134bc call dword ptr [0x11b190a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190a8))), 0x11b134c2u);
  /* 11b134c2 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b134c5 push eax */
  push32((uint32_t)(EAX));
  /* 11b134c6 call dword ptr [0x11b190a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190a4))), 0x11b134ccu);
  /* 11b134cc mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11b134d0 cmp ax, word ptr [0x11b1eaca] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11b1eaca))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b134d7 jne 0x11b13514 */
  if (!C.zf) goto L_11b13514;
  /* 11b134d9 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11b134dd cmp ax, word ptr [0x11b1eac8] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11b1eac8))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b134e4 jne 0x11b13514 */
  if (!C.zf) goto L_11b13514;
  /* 11b134e6 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11b134ea cmp ax, word ptr [0x11b1eac6] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11b1eac6))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b134f1 jne 0x11b13514 */
  if (!C.zf) goto L_11b13514;
  /* 11b134f3 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11b134f7 cmp ax, word ptr [0x11b1eac2] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11b1eac2))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b134fe jne 0x11b13514 */
  if (!C.zf) goto L_11b13514;
  /* 11b13500 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11b13504 cmp ax, word ptr [0x11b1eac0] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11b1eac0))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b1350b jne 0x11b13514 */
  if (!C.zf) goto L_11b13514;
  /* 11b1350d mov eax, dword ptr [0x11b1eab8] */
  EAX = (r32((uint32_t)(0x11b1eab8)));
  /* 11b13512 jmp 0x11b13559 */
  goto L_11b13559;
L_11b13514:;
  /* 11b13514 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11b1351a push eax */
  push32((uint32_t)(EAX));
  /* 11b1351b call dword ptr [0x11b190a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190a0))), 0x11b13521u);
  /* 11b13521 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13524 je 0x11b13541 */
  if (C.zf) goto L_11b13541;
  /* 11b13526 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13529 jne 0x11b1353d */
  if (!C.zf) goto L_11b1353d;
  /* 11b1352b cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b13530 je 0x11b1353d */
  if (C.zf) goto L_11b1353d;
  /* 11b13532 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13536 je 0x11b1353d */
  if (C.zf) goto L_11b1353d;
  /* 11b13538 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1353a pop eax */
  EAX = (pop32());
  /* 11b1353b jmp 0x11b13544 */
  goto L_11b13544;
L_11b1353d:;
  /* 11b1353d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b1353f jmp 0x11b13544 */
  goto L_11b13544;
L_11b13541:;
  /* 11b13541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b13544:;
  /* 11b13544 push esi */
  push32((uint32_t)(ESI));
  /* 11b13545 push edi */
  push32((uint32_t)(EDI));
  /* 11b13546 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11b13549 mov edi, 0x11b1eac0 */
  EDI = (0x11b1eac0u);
  /* 11b1354e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b1354f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b13550 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b13551 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b13552 pop edi */
  EDI = (pop32());
  /* 11b13553 mov dword ptr [0x11b1eab8], eax */
  w32((uint32_t)(0x11b1eab8), (EAX));
  /* 11b13558 pop esi */
  ESI = (pop32());
L_11b13559:;
  /* 11b13559 push eax */
  push32((uint32_t)(EAX));
  /* 11b1355a movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11b1355e push eax */
  push32((uint32_t)(EAX));
  /* 11b1355f movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11b13563 push eax */
  push32((uint32_t)(EAX));
  /* 11b13564 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11b13568 push eax */
  push32((uint32_t)(EAX));
  /* 11b13569 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11b1356d push eax */
  push32((uint32_t)(EAX));
  /* 11b1356e movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11b13572 push eax */
  push32((uint32_t)(EAX));
  /* 11b13573 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11b13577 push eax */
  push32((uint32_t)(EAX));
  /* 11b13578 call 0x11b138c0 */
  push32(0x11b1357du); f_11b138c0();
  /* 11b1357d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b13580 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13583 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b13585 je 0x11b13589 */
  if (C.zf) goto L_11b13589;
  /* 11b13587 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b13589:;
  /* 11b13589 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b1358a ret  */
  ESPCHK(0x11b134afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000358b @ 0x11b1358b (217 bytes, 57 insns) */
void f_11b1358b(void) {
  FTRACE(0x11b1358bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1358b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b1358f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13592 jne 0x11b13620 */
  if (!C.zf) goto L_11b13620;
  /* 11b13598 call dword ptr [0x11b190b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190b0))), 0x11b1359eu);
  /* 11b1359e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b135a0 mov dword ptr [0x11b1eae8], eax */
  w32((uint32_t)(0x11b1eae8), (EAX));
  /* 11b135a5 call 0x11b1425d */
  push32(0x11b135aau); f_11b1425d();
  /* 11b135aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b135ac pop ecx */
  ECX = (pop32());
  /* 11b135ad je 0x11b135eb */
  if (C.zf) goto L_11b135eb;
  /* 11b135af mov eax, dword ptr [0x11b1eae8] */
  EAX = (r32((uint32_t)(0x11b1eae8)));
  /* 11b135b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b135b6 mov cl, byte ptr [0x11b1eae9] */
  CL = (r8((uint32_t)(0x11b1eae9)));
  /* 11b135bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b135c1 shr dword ptr [0x11b1eae8], 0x10 */
  w32((uint32_t)(0x11b1eae8), (sh_shr((uint32_t)(r32((uint32_t)(0x11b1eae8))), (0x10u)&0x1f, 32)));
  /* 11b135c8 mov dword ptr [0x11b1eaf0], eax */
  w32((uint32_t)(0x11b1eaf0), (EAX));
  /* 11b135cd mov dword ptr [0x11b1eaf4], ecx */
  w32((uint32_t)(0x11b1eaf4), (ECX));
  /* 11b135d3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b135d6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b135d8 mov dword ptr [0x11b1eaec], eax */
  w32((uint32_t)(0x11b1eaec), (EAX));
  /* 11b135dd call 0x11b13734 */
  push32(0x11b135e2u); f_11b13734();
  /* 11b135e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b135e4 jne 0x11b135ef */
  if (!C.zf) goto L_11b135ef;
  /* 11b135e6 call 0x11b142ba */
  push32(0x11b135ebu); f_11b142ba();
L_11b135eb:;
  /* 11b135eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b135ed jmp 0x11b13661 */
  goto L_11b13661;
L_11b135ef:;
  /* 11b135ef call dword ptr [0x11b190ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190ac))), 0x11b135f5u);
  /* 11b135f5 mov dword ptr [0x11b1f198], eax */
  w32((uint32_t)(0x11b1f198), (EAX));
  /* 11b135fa call 0x11b13fb6 */
  push32(0x11b135ffu); f_11b13fb6();
  /* 11b135ff mov dword ptr [0x11b1ead4], eax */
  w32((uint32_t)(0x11b1ead4), (EAX));
  /* 11b13604 call 0x11b13aa0 */
  push32(0x11b13609u); f_11b13aa0();
  /* 11b13609 call 0x11b13d69 */
  push32(0x11b1360eu); f_11b13d69();
  /* 11b1360e call 0x11b13cb0 */
  push32(0x11b13613u); f_11b13cb0();
  /* 11b13613 call 0x11b13982 */
  push32(0x11b13618u); f_11b13982();
  /* 11b13618 inc dword ptr [0x11b1ead0] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ead0)))+1; w32((uint32_t)(0x11b1ead0), (_r)); fl_inc(_r,32); }
  /* 11b1361e jmp 0x11b1365e */
  goto L_11b1365e;
L_11b13620:;
  /* 11b13620 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b13622 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13624 jne 0x11b13652 */
  if (!C.zf) goto L_11b13652;
  /* 11b13626 cmp dword ptr [0x11b1ead0], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11b1ead0))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1362c jle 0x11b135eb */
  if ((C.zf||C.sf!=C.of)) goto L_11b135eb;
  /* 11b1362e dec dword ptr [0x11b1ead0] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ead0)))-1; w32((uint32_t)(0x11b1ead0), (_r)); fl_dec(_r,32); }
  /* 11b13634 cmp dword ptr [0x11b1eb20], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11b1eb20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1363a jne 0x11b13641 */
  if (!C.zf) goto L_11b13641;
  /* 11b1363c call 0x11b139c0 */
  push32(0x11b13641u); f_11b139c0();
L_11b13641:;
  /* 11b13641 call 0x11b13c5c */
  push32(0x11b13646u); f_11b13c5c();
  /* 11b13646 call 0x11b13788 */
  push32(0x11b1364bu); f_11b13788();
  /* 11b1364b call 0x11b142ba */
  push32(0x11b13650u); f_11b142ba();
  /* 11b13650 jmp 0x11b1365e */
  goto L_11b1365e;
L_11b13652:;
  /* 11b13652 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13655 jne 0x11b1365e */
  if (!C.zf) goto L_11b1365e;
  /* 11b13657 push ecx */
  push32((uint32_t)(ECX));
  /* 11b13658 call 0x11b13820 */
  push32(0x11b1365du); f_11b13820();
  /* 11b1365d pop ecx */
  ECX = (pop32());
L_11b1365e:;
  /* 11b1365e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b13660 pop eax */
  EAX = (pop32());
L_11b13661:;
  /* 11b13661 ret 0xc */
  ESPCHK(0x11b1358bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11b13664 (157 bytes, 73 insns) */
void f_11b13664(void) {
  FTRACE(0x11b13664u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13664 push ebp */
  push32((uint32_t)(EBP));
  /* 11b13665 mov ebp, esp */
  EBP = (ESP);
  /* 11b13667 push ebx */
  push32((uint32_t)(EBX));
  /* 11b13668 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1366b push esi */
  push32((uint32_t)(ESI));
  /* 11b1366c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b1366f push edi */
  push32((uint32_t)(EDI));
  /* 11b13670 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b13673 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13675 jne 0x11b13680 */
  if (!C.zf) goto L_11b13680;
  /* 11b13677 cmp dword ptr [0x11b1ead0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ead0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1367e jmp 0x11b136a6 */
  goto L_11b136a6;
L_11b13680:;
  /* 11b13680 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13683 je 0x11b1368a */
  if (C.zf) goto L_11b1368a;
  /* 11b13685 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13688 jne 0x11b136ac */
  if (!C.zf) goto L_11b136ac;
L_11b1368a:;
  /* 11b1368a mov eax, dword ptr [0x11b1f19c] */
  EAX = (r32((uint32_t)(0x11b1f19c)));
  /* 11b1368f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13691 je 0x11b1369c */
  if (C.zf) goto L_11b1369c;
  /* 11b13693 push edi */
  push32((uint32_t)(EDI));
  /* 11b13694 push esi */
  push32((uint32_t)(ESI));
  /* 11b13695 push ebx */
  push32((uint32_t)(EBX));
  /* 11b13696 call eax */
  call_ind((uint32_t)(EAX), 0x11b13698u);
  /* 11b13698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1369a je 0x11b136a8 */
  if (C.zf) goto L_11b136a8;
L_11b1369c:;
  /* 11b1369c push edi */
  push32((uint32_t)(EDI));
  /* 11b1369d push esi */
  push32((uint32_t)(ESI));
  /* 11b1369e push ebx */
  push32((uint32_t)(EBX));
  /* 11b1369f call 0x11b1358b */
  push32(0x11b136a4u); f_11b1358b();
  /* 11b136a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11b136a6:;
  /* 11b136a6 jne 0x11b136ac */
  if (!C.zf) goto L_11b136ac;
L_11b136a8:;
  /* 11b136a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b136aa jmp 0x11b136fa */
  goto L_11b136fa;
L_11b136ac:;
  /* 11b136ac push edi */
  push32((uint32_t)(EDI));
  /* 11b136ad push esi */
  push32((uint32_t)(ESI));
  /* 11b136ae push ebx */
  push32((uint32_t)(EBX));
  /* 11b136af call 0x11b11000 */
  push32(0x11b136b4u); f_11b11000();
  /* 11b136b4 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b136b7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b136ba jne 0x11b136c8 */
  if (!C.zf) goto L_11b136c8;
  /* 11b136bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b136be jne 0x11b136f7 */
  if (!C.zf) goto L_11b136f7;
  /* 11b136c0 push edi */
  push32((uint32_t)(EDI));
  /* 11b136c1 push eax */
  push32((uint32_t)(EAX));
  /* 11b136c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b136c3 call 0x11b1358b */
  push32(0x11b136c8u); f_11b1358b();
L_11b136c8:;
  /* 11b136c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b136ca je 0x11b136d1 */
  if (C.zf) goto L_11b136d1;
  /* 11b136cc cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b136cf jne 0x11b136f7 */
  if (!C.zf) goto L_11b136f7;
L_11b136d1:;
  /* 11b136d1 push edi */
  push32((uint32_t)(EDI));
  /* 11b136d2 push esi */
  push32((uint32_t)(ESI));
  /* 11b136d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b136d4 call 0x11b1358b */
  push32(0x11b136d9u); f_11b1358b();
  /* 11b136d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b136db jne 0x11b136e0 */
  if (!C.zf) goto L_11b136e0;
  /* 11b136dd and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11b136e0:;
  /* 11b136e0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b136e4 je 0x11b136f7 */
  if (C.zf) goto L_11b136f7;
  /* 11b136e6 mov eax, dword ptr [0x11b1f19c] */
  EAX = (r32((uint32_t)(0x11b1f19c)));
  /* 11b136eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b136ed je 0x11b136f7 */
  if (C.zf) goto L_11b136f7;
  /* 11b136ef push edi */
  push32((uint32_t)(EDI));
  /* 11b136f0 push esi */
  push32((uint32_t)(ESI));
  /* 11b136f1 push ebx */
  push32((uint32_t)(EBX));
  /* 11b136f2 call eax */
  call_ind((uint32_t)(EAX), 0x11b136f4u);
  /* 11b136f4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11b136f7:;
  /* 11b136f7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11b136fa:;
  /* 11b136fa pop edi */
  EDI = (pop32());
  /* 11b136fb pop esi */
  ESI = (pop32());
  /* 11b136fc pop ebx */
  EBX = (pop32());
  /* 11b136fd pop ebp */
  EBP = (pop32());
  /* 11b136fe ret 0xc */
  ESPCHK(0x11b13664u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11b13701 (48 bytes, 15 insns) */
void f_11b13701(void) {
  FTRACE(0x11b13701u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13701 mov eax, dword ptr [0x11b1eadc] */
  EAX = (r32((uint32_t)(0x11b1eadc)));
  /* 11b13706 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13709 je 0x11b13718 */
  if (C.zf) goto L_11b13718;
  /* 11b1370b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1370d jne 0x11b1371d */
  if (!C.zf) goto L_11b1371d;
  /* 11b1370f cmp dword ptr [0x11b1eae0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1eae0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13716 jne 0x11b1371d */
  if (!C.zf) goto L_11b1371d;
L_11b13718:;
  /* 11b13718 call 0x11b14362 */
  push32(0x11b1371du); f_11b14362();
L_11b1371d:;
  /* 11b1371d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b13721 call 0x11b1439b */
  push32(0x11b13726u); f_11b1439b();
  /* 11b13726 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b1372b call dword ptr [0x11b1b554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1b554))), 0x11b13731u);
  /* 11b13731 pop ecx */
  ECX = (pop32());
  /* 11b13732 pop ecx */
  ECX = (pop32());
  /* 11b13733 ret  */
  ESPCHK(0x11b13701u, _esp0);
  ESP += 4; return;
}

/* FUN_10003734 @ 0x11b13734 (84 bytes, 32 insns) */
void f_11b13734(void) {
  FTRACE(0x11b13734u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13734 push esi */
  push32((uint32_t)(ESI));
  /* 11b13735 call 0x11b1462b */
  push32(0x11b1373au); f_11b1462b();
  /* 11b1373a call dword ptr [0x11b190bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190bc))), 0x11b13740u);
  /* 11b13740 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13743 mov dword ptr [0x11b1b558], eax */
  w32((uint32_t)(0x11b1b558), (EAX));
  /* 11b13748 je 0x11b13784 */
  if (C.zf) goto L_11b13784;
  /* 11b1374a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b1374c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1374e call 0x11b144ee */
  push32(0x11b13753u); f_11b144ee();
  /* 11b13753 mov esi, eax */
  ESI = (EAX);
  /* 11b13755 pop ecx */
  ECX = (pop32());
  /* 11b13756 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13758 pop ecx */
  ECX = (pop32());
  /* 11b13759 je 0x11b13784 */
  if (C.zf) goto L_11b13784;
  /* 11b1375b push esi */
  push32((uint32_t)(ESI));
  /* 11b1375c push dword ptr [0x11b1b558] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b558))));
  /* 11b13762 call dword ptr [0x11b190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190b8))), 0x11b13768u);
  /* 11b13768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1376a je 0x11b13784 */
  if (C.zf) goto L_11b13784;
  /* 11b1376c push esi */
  push32((uint32_t)(ESI));
  /* 11b1376d call 0x11b137a6 */
  push32(0x11b13772u); f_11b137a6();
  /* 11b13772 pop ecx */
  ECX = (pop32());
  /* 11b13773 call dword ptr [0x11b190b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190b4))), 0x11b13779u);
  /* 11b13779 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b1377d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1377f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b13781 pop eax */
  EAX = (pop32());
  /* 11b13782 pop esi */
  ESI = (pop32());
  /* 11b13783 ret  */
  ESPCHK(0x11b13734u, _esp0);
  ESP += 4; return;
L_11b13784:;
  /* 11b13784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b13786 pop esi */
  ESI = (pop32());
  /* 11b13787 ret  */
  ESPCHK(0x11b13734u, _esp0);
  ESP += 4; return;
}

/* FUN_10003788 @ 0x11b13788 (30 bytes, 8 insns) */
void f_11b13788(void) {
  FTRACE(0x11b13788u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13788 call 0x11b14654 */
  push32(0x11b1378du); f_11b14654();
  /* 11b1378d mov eax, dword ptr [0x11b1b558] */
  EAX = (r32((uint32_t)(0x11b1b558)));
  /* 11b13792 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13795 je 0x11b137a5 */
  if (C.zf) goto L_11b137a5;
  /* 11b13797 push eax */
  push32((uint32_t)(EAX));
  /* 11b13798 call dword ptr [0x11b19000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19000))), 0x11b1379eu);
  /* 11b1379e or dword ptr [0x11b1b558], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b1b558)))|(0xffffffffu); w32((uint32_t)(0x11b1b558), (_r)); fl_logic(_r,32); }
L_11b137a5:;
  /* 11b137a5 ret  */
  ESPCHK(0x11b13788u, _esp0);
  ESP += 4; return;
}

/* FUN_100037a6 @ 0x11b137a6 (19 bytes, 4 insns) */
void f_11b137a6(void) {
  FTRACE(0x11b137a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b137a6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b137aa mov dword ptr [eax + 0x50], 0x11b1b6d8 */
  w32((uint32_t)(EAX + 0x50), (0x11b1b6d8u));
  /* 11b137b1 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11b137b8 ret  */
  ESPCHK(0x11b137a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b9 @ 0x11b137b9 (103 bytes, 38 insns) */
void f_11b137b9(void) {
  FTRACE(0x11b137b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b137b9 push esi */
  push32((uint32_t)(ESI));
  /* 11b137ba push edi */
  push32((uint32_t)(EDI));
  /* 11b137bb call dword ptr [0x11b190cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190cc))), 0x11b137c1u);
  /* 11b137c1 push dword ptr [0x11b1b558] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b558))));
  /* 11b137c7 mov edi, eax */
  EDI = (EAX);
  /* 11b137c9 call dword ptr [0x11b190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190c8))), 0x11b137cfu);
  /* 11b137cf mov esi, eax */
  ESI = (EAX);
  /* 11b137d1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b137d3 jne 0x11b13814 */
  if (!C.zf) goto L_11b13814;
  /* 11b137d5 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b137d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b137d9 call 0x11b144ee */
  push32(0x11b137deu); f_11b144ee();
  /* 11b137de mov esi, eax */
  ESI = (EAX);
  /* 11b137e0 pop ecx */
  ECX = (pop32());
  /* 11b137e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b137e3 pop ecx */
  ECX = (pop32());
  /* 11b137e4 je 0x11b1380c */
  if (C.zf) goto L_11b1380c;
  /* 11b137e6 push esi */
  push32((uint32_t)(ESI));
  /* 11b137e7 push dword ptr [0x11b1b558] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b558))));
  /* 11b137ed call dword ptr [0x11b190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190b8))), 0x11b137f3u);
  /* 11b137f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b137f5 je 0x11b1380c */
  if (C.zf) goto L_11b1380c;
  /* 11b137f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b137f8 call 0x11b137a6 */
  push32(0x11b137fdu); f_11b137a6();
  /* 11b137fd pop ecx */
  ECX = (pop32());
  /* 11b137fe call dword ptr [0x11b190b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190b4))), 0x11b13804u);
  /* 11b13804 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b13808 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b1380a jmp 0x11b13814 */
  goto L_11b13814;
L_11b1380c:;
  /* 11b1380c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b1380e call 0x11b13701 */
  push32(0x11b13813u); f_11b13701();
  /* 11b13813 pop ecx */
  ECX = (pop32());
L_11b13814:;
  /* 11b13814 push edi */
  push32((uint32_t)(EDI));
  /* 11b13815 call dword ptr [0x11b19004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19004))), 0x11b1381bu);
  /* 11b1381b mov eax, esi */
  EAX = (ESI);
  /* 11b1381d pop edi */
  EDI = (pop32());
  /* 11b1381e pop esi */
  ESI = (pop32());
  /* 11b1381f ret  */
  ESPCHK(0x11b137b9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003820 @ 0x11b13820 (160 bytes, 62 insns) */
void f_11b13820(void) {
  FTRACE(0x11b13820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13820 mov eax, dword ptr [0x11b1b558] */
  EAX = (r32((uint32_t)(0x11b1b558)));
  /* 11b13825 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13828 je 0x11b138bf */
  if (C.zf) goto L_11b138bf;
  /* 11b1382e push esi */
  push32((uint32_t)(ESI));
  /* 11b1382f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b13833 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13835 jne 0x11b13844 */
  if (!C.zf) goto L_11b13844;
  /* 11b13837 push eax */
  push32((uint32_t)(EAX));
  /* 11b13838 call dword ptr [0x11b190c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190c8))), 0x11b1383eu);
  /* 11b1383e mov esi, eax */
  ESI = (EAX);
  /* 11b13840 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13842 je 0x11b138b0 */
  if (C.zf) goto L_11b138b0;
L_11b13844:;
  /* 11b13844 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11b13847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13849 je 0x11b13852 */
  if (C.zf) goto L_11b13852;
  /* 11b1384b push eax */
  push32((uint32_t)(EAX));
  /* 11b1384c call 0x11b14736 */
  push32(0x11b13851u); f_11b14736();
  /* 11b13851 pop ecx */
  ECX = (pop32());
L_11b13852:;
  /* 11b13852 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11b13855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13857 je 0x11b13860 */
  if (C.zf) goto L_11b13860;
  /* 11b13859 push eax */
  push32((uint32_t)(EAX));
  /* 11b1385a call 0x11b14736 */
  push32(0x11b1385fu); f_11b14736();
  /* 11b1385f pop ecx */
  ECX = (pop32());
L_11b13860:;
  /* 11b13860 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11b13863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13865 je 0x11b1386e */
  if (C.zf) goto L_11b1386e;
  /* 11b13867 push eax */
  push32((uint32_t)(EAX));
  /* 11b13868 call 0x11b14736 */
  push32(0x11b1386du); f_11b14736();
  /* 11b1386d pop ecx */
  ECX = (pop32());
L_11b1386e:;
  /* 11b1386e mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11b13871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13873 je 0x11b1387c */
  if (C.zf) goto L_11b1387c;
  /* 11b13875 push eax */
  push32((uint32_t)(EAX));
  /* 11b13876 call 0x11b14736 */
  push32(0x11b1387bu); f_11b14736();
  /* 11b1387b pop ecx */
  ECX = (pop32());
L_11b1387c:;
  /* 11b1387c mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11b1387f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13881 je 0x11b1388a */
  if (C.zf) goto L_11b1388a;
  /* 11b13883 push eax */
  push32((uint32_t)(EAX));
  /* 11b13884 call 0x11b14736 */
  push32(0x11b13889u); f_11b14736();
  /* 11b13889 pop ecx */
  ECX = (pop32());
L_11b1388a:;
  /* 11b1388a mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11b1388d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1388f je 0x11b13898 */
  if (C.zf) goto L_11b13898;
  /* 11b13891 push eax */
  push32((uint32_t)(EAX));
  /* 11b13892 call 0x11b14736 */
  push32(0x11b13897u); f_11b14736();
  /* 11b13897 pop ecx */
  ECX = (pop32());
L_11b13898:;
  /* 11b13898 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11b1389b cmp eax, 0x11b1b6d8 */
  { uint32_t _a=(EAX),_b=(0x11b1b6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b138a0 je 0x11b138a9 */
  if (C.zf) goto L_11b138a9;
  /* 11b138a2 push eax */
  push32((uint32_t)(EAX));
  /* 11b138a3 call 0x11b14736 */
  push32(0x11b138a8u); f_11b14736();
  /* 11b138a8 pop ecx */
  ECX = (pop32());
L_11b138a9:;
  /* 11b138a9 push esi */
  push32((uint32_t)(ESI));
  /* 11b138aa call 0x11b14736 */
  push32(0x11b138afu); f_11b14736();
  /* 11b138af pop ecx */
  ECX = (pop32());
L_11b138b0:;
  /* 11b138b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b138b2 push dword ptr [0x11b1b558] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b558))));
  /* 11b138b8 call dword ptr [0x11b190b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190b8))), 0x11b138beu);
  /* 11b138be pop esi */
  ESI = (pop32());
L_11b138bf:;
  /* 11b138bf ret  */
  ESPCHK(0x11b13820u, _esp0);
  ESP += 4; return;
}

/* FUN_100038c0 @ 0x11b138c0 (194 bytes, 65 insns) */
void f_11b138c0(void) {
  FTRACE(0x11b138c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b138c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b138c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b138c3 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b138c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b138c7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b138ca sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b138d0 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b138d3 jl 0x11b1397c */
  if ((C.sf!=C.of)) goto L_11b1397c;
  /* 11b138d9 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b138df jg 0x11b1397c */
  if ((!C.zf&&C.sf==C.of)) goto L_11b1397c;
  /* 11b138e5 push esi */
  push32((uint32_t)(ESI));
  /* 11b138e6 push edi */
  push32((uint32_t)(EDI));
  /* 11b138e7 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b138ea mov esi, dword ptr [edi*4 + 0x11b1b844] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11b1b844)));
  /* 11b138f1 add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b138f4 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11b138f7 jne 0x11b138ff */
  if (!C.zf) goto L_11b138ff;
  /* 11b138f9 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b138fc jle 0x11b138ff */
  if ((C.zf||C.sf!=C.of)) goto L_11b138ff;
  /* 11b138fe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b138ff:;
  /* 11b138ff call 0x11b1481f */
  push32(0x11b13904u); f_11b1481f();
  /* 11b13904 mov eax, ebx */
  EAX = (EBX);
  /* 11b13906 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11b13909 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b1390f sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b13912 mov edx, esi */
  EDX = (ESI);
  /* 11b13914 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11b13917 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13919 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11b1391c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1391e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b13921 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11b13924 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b13927 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b1392a lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11b1392d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b13930 add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13933 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b13936 add ecx, dword ptr [0x11b1b760] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b1b760))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1393c dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b1393d cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13941 mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11b13944 pop edi */
  EDI = (pop32());
  /* 11b13945 pop esi */
  ESI = (pop32());
  /* 11b13946 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11b1394d mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b13950 je 0x11b13972 */
  if (C.zf) goto L_11b13972;
  /* 11b13952 cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13956 jne 0x11b13978 */
  if (!C.zf) goto L_11b13978;
  /* 11b13958 cmp dword ptr [0x11b1b764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1b764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1395f je 0x11b13978 */
  if (C.zf) goto L_11b13978;
  /* 11b13961 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11b13964 push eax */
  push32((uint32_t)(EAX));
  /* 11b13965 call 0x11b14ad4 */
  push32(0x11b1396au); f_11b14ad4();
  /* 11b1396a pop ecx */
  ECX = (pop32());
  /* 11b1396b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1396e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13970 je 0x11b13978 */
  if (C.zf) goto L_11b13978;
L_11b13972:;
  /* 11b13972 add ecx, dword ptr [0x11b1b768] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b1b768))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11b13978:;
  /* 11b13978 mov eax, ecx */
  EAX = (ECX);
  /* 11b1397a jmp 0x11b1397f */
  goto L_11b1397f;
L_11b1397c:;
  /* 11b1397c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b1397f:;
  /* 11b1397f pop ebx */
  EBX = (pop32());
  /* 11b13980 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b13981 ret  */
  ESPCHK(0x11b138c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003982 @ 0x11b13982 (45 bytes, 12 insns) */
void f_11b13982(void) {
  FTRACE(0x11b13982u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13982 mov eax, dword ptr [0x11b1f194] */
  EAX = (r32((uint32_t)(0x11b1f194)));
  /* 11b13987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13989 je 0x11b1398d */
  if (C.zf) goto L_11b1398d;
  /* 11b1398b call eax */
  call_ind((uint32_t)(EAX), 0x11b1398du);
L_11b1398d:;
  /* 11b1398d push 0x11b1b038 */
  push32((uint32_t)(0x11b1b038u));
  /* 11b13992 push 0x11b1b030 */
  push32((uint32_t)(0x11b1b030u));
  /* 11b13997 call 0x11b13a86 */
  push32(0x11b1399cu); f_11b13a86();
  /* 11b1399c push 0x11b1b02c */
  push32((uint32_t)(0x11b1b02cu));
  /* 11b139a1 push 0x11b1b000 */
  push32((uint32_t)(0x11b1b000u));
  /* 11b139a6 call 0x11b13a86 */
  push32(0x11b139abu); f_11b13a86();
  /* 11b139ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b139ae ret  */
  ESPCHK(0x11b13982u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11b139af (17 bytes, 6 insns) */
void f_11b139af(void) {
  FTRACE(0x11b139afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b139af push 0 */
  push32((uint32_t)(0x0u));
  /* 11b139b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b139b3 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b139b7 call 0x11b139cf */
  push32(0x11b139bcu); f_11b139cf();
  /* 11b139bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b139bf ret  */
  ESPCHK(0x11b139afu, _esp0);
  ESP += 4; return;
}

/* FUN_100039c0 @ 0x11b139c0 (15 bytes, 6 insns) */
void f_11b139c0(void) {
  FTRACE(0x11b139c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b139c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b139c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b139c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b139c6 call 0x11b139cf */
  push32(0x11b139cbu); f_11b139cf();
  /* 11b139cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b139ce ret  */
  ESPCHK(0x11b139c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039cf @ 0x11b139cf (163 bytes, 53 insns) */
void f_11b139cf(void) {
  FTRACE(0x11b139cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b139cf push edi */
  push32((uint32_t)(EDI));
  /* 11b139d0 call 0x11b13a74 */
  push32(0x11b139d5u); f_11b13a74();
  /* 11b139d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b139d7 pop edi */
  EDI = (pop32());
  /* 11b139d8 cmp dword ptr [0x11b1eb24], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1eb24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b139de jne 0x11b139f1 */
  if (!C.zf) goto L_11b139f1;
  /* 11b139e0 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b139e4 call dword ptr [0x11b190d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190d8))), 0x11b139eau);
  /* 11b139ea push eax */
  push32((uint32_t)(EAX));
  /* 11b139eb call dword ptr [0x11b190d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190d4))), 0x11b139f1u);
L_11b139f1:;
  /* 11b139f1 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b139f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b139f7 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b139fb mov dword ptr [0x11b1eb20], edi */
  w32((uint32_t)(0x11b1eb20), (EDI));
  /* 11b13a01 mov byte ptr [0x11b1eb1c], bl */
  w8((uint32_t)(0x11b1eb1c), (BL));
  /* 11b13a07 jne 0x11b13a45 */
  if (!C.zf) goto L_11b13a45;
  /* 11b13a09 mov eax, dword ptr [0x11b1f190] */
  EAX = (r32((uint32_t)(0x11b1f190)));
  /* 11b13a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13a10 je 0x11b13a34 */
  if (C.zf) goto L_11b13a34;
  /* 11b13a12 mov ecx, dword ptr [0x11b1f18c] */
  ECX = (r32((uint32_t)(0x11b1f18c)));
  /* 11b13a18 push esi */
  push32((uint32_t)(ESI));
  /* 11b13a19 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11b13a1c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13a1e jb 0x11b13a33 */
  if (C.cf) goto L_11b13a33;
L_11b13a20:;
  /* 11b13a20 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b13a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13a24 je 0x11b13a28 */
  if (C.zf) goto L_11b13a28;
  /* 11b13a26 call eax */
  call_ind((uint32_t)(EAX), 0x11b13a28u);
L_11b13a28:;
  /* 11b13a28 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b13a2b cmp esi, dword ptr [0x11b1f190] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1f190))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13a31 jae 0x11b13a20 */
  if (!C.cf) goto L_11b13a20;
L_11b13a33:;
  /* 11b13a33 pop esi */
  ESI = (pop32());
L_11b13a34:;
  /* 11b13a34 push 0x11b1b040 */
  push32((uint32_t)(0x11b1b040u));
  /* 11b13a39 push 0x11b1b03c */
  push32((uint32_t)(0x11b1b03cu));
  /* 11b13a3e call 0x11b13a86 */
  push32(0x11b13a43u); f_11b13a86();
  /* 11b13a43 pop ecx */
  ECX = (pop32());
  /* 11b13a44 pop ecx */
  ECX = (pop32());
L_11b13a45:;
  /* 11b13a45 push 0x11b1b048 */
  push32((uint32_t)(0x11b1b048u));
  /* 11b13a4a push 0x11b1b044 */
  push32((uint32_t)(0x11b1b044u));
  /* 11b13a4f call 0x11b13a86 */
  push32(0x11b13a54u); f_11b13a86();
  /* 11b13a54 pop ecx */
  ECX = (pop32());
  /* 11b13a55 pop ecx */
  ECX = (pop32());
  /* 11b13a56 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b13a58 pop ebx */
  EBX = (pop32());
  /* 11b13a59 je 0x11b13a62 */
  if (C.zf) goto L_11b13a62;
  /* 11b13a5b call 0x11b13a7d */
  push32(0x11b13a60u); f_11b13a7d();
  /* 11b13a60 pop edi */
  EDI = (pop32());
  /* 11b13a61 ret  */
  ESPCHK(0x11b139cfu, _esp0);
  ESP += 4; return;
L_11b13a62:;
  /* 11b13a62 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b13a66 mov dword ptr [0x11b1eb24], edi */
  w32((uint32_t)(0x11b1eb24), (EDI));
  /* 11b13a6c call dword ptr [0x11b190d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190d0))), 0x11b13a72u);
  /* 11b13a72 pop edi */
  EDI = (pop32());
  /* 11b13a73 ret  */
  ESPCHK(0x11b139cfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003a74 @ 0x11b13a74 (9 bytes, 4 insns) */
void f_11b13a74(void) {
  FTRACE(0x11b13a74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13a74 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b13a76 call 0x11b146c0 */
  push32(0x11b13a7bu); f_11b146c0();
  /* 11b13a7b pop ecx */
  ECX = (pop32());
  /* 11b13a7c ret  */
  ESPCHK(0x11b13a74u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a7d @ 0x11b13a7d (9 bytes, 4 insns) */
void f_11b13a7d(void) {
  FTRACE(0x11b13a7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13a7d push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b13a7f call 0x11b14721 */
  push32(0x11b13a84u); f_11b14721();
  /* 11b13a84 pop ecx */
  ECX = (pop32());
  /* 11b13a85 ret  */
  ESPCHK(0x11b13a7du, _esp0);
  ESP += 4; return;
}

/* FUN_10003a86 @ 0x11b13a86 (26 bytes, 12 insns) */
void f_11b13a86(void) {
  FTRACE(0x11b13a86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13a86 push esi */
  push32((uint32_t)(ESI));
  /* 11b13a87 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11b13a8b:;
  /* 11b13a8b cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13a8f jae 0x11b13a9e */
  if (!C.cf) goto L_11b13a9e;
  /* 11b13a91 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b13a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13a95 je 0x11b13a99 */
  if (C.zf) goto L_11b13a99;
  /* 11b13a97 call eax */
  call_ind((uint32_t)(EAX), 0x11b13a99u);
L_11b13a99:;
  /* 11b13a99 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13a9c jmp 0x11b13a8b */
  goto L_11b13a8b;
L_11b13a9e:;
  /* 11b13a9e pop esi */
  ESI = (pop32());
  /* 11b13a9f ret  */
  ESPCHK(0x11b13a86u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa0 @ 0x11b13aa0 (444 bytes, 150 insns) */
void f_11b13aa0(void) {
  FTRACE(0x11b13aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b13aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11b13aa3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b13aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b13aa7 push esi */
  push32((uint32_t)(ESI));
  /* 11b13aa8 push edi */
  push32((uint32_t)(EDI));
  /* 11b13aa9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b13aae call 0x11b14de1 */
  push32(0x11b13ab3u); f_11b14de1();
  /* 11b13ab3 mov esi, eax */
  ESI = (EAX);
  /* 11b13ab5 pop ecx */
  ECX = (pop32());
  /* 11b13ab6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13ab8 jne 0x11b13ac2 */
  if (!C.zf) goto L_11b13ac2;
  /* 11b13aba push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b13abc call 0x11b13701 */
  push32(0x11b13ac1u); f_11b13701();
  /* 11b13ac1 pop ecx */
  ECX = (pop32());
L_11b13ac2:;
  /* 11b13ac2 mov dword ptr [0x11b1f080], esi */
  w32((uint32_t)(0x11b1f080), (ESI));
  /* 11b13ac8 mov dword ptr [0x11b1f180], 0x20 */
  w32((uint32_t)(0x11b1f180), (0x20u));
  /* 11b13ad2 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11b13ad8:;
  /* 11b13ad8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13ada jae 0x11b13afa */
  if (!C.cf) goto L_11b13afa;
  /* 11b13adc and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b13ae0 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b13ae3 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b13ae7 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11b13aeb mov eax, dword ptr [0x11b1f080] */
  EAX = (r32((uint32_t)(0x11b1f080)));
  /* 11b13af0 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13af3 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13af8 jmp 0x11b13ad8 */
  goto L_11b13ad8;
L_11b13afa:;
  /* 11b13afa lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11b13afd push eax */
  push32((uint32_t)(EAX));
  /* 11b13afe call dword ptr [0x11b190c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190c4))), 0x11b13b04u);
  /* 11b13b04 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b13b09 je 0x11b13be0 */
  if (C.zf) goto L_11b13be0;
  /* 11b13b0f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b13b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13b14 je 0x11b13be0 */
  if (C.zf) goto L_11b13be0;
  /* 11b13b1a mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11b13b1c lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11b13b1f lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11b13b22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b13b25 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11b13b2a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13b2c jl 0x11b13b30 */
  if ((C.sf!=C.of)) goto L_11b13b30;
  /* 11b13b2e mov edi, eax */
  EDI = (EAX);
L_11b13b30:;
  /* 11b13b30 cmp dword ptr [0x11b1f180], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1f180))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13b36 jge 0x11b13b8e */
  if ((C.sf==C.of)) goto L_11b13b8e;
  /* 11b13b38 mov esi, 0x11b1f084 */
  ESI = (0x11b1f084u);
L_11b13b3d:;
  /* 11b13b3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b13b42 call 0x11b14de1 */
  push32(0x11b13b47u); f_11b14de1();
  /* 11b13b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13b49 pop ecx */
  ECX = (pop32());
  /* 11b13b4a je 0x11b13b88 */
  if (C.zf) goto L_11b13b88;
  /* 11b13b4c add dword ptr [0x11b1f180], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11b1f180))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11b1f180), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b13b53 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b13b55 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11b13b5b:;
  /* 11b13b5b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13b5d jae 0x11b13b7b */
  if (!C.cf) goto L_11b13b7b;
  /* 11b13b5f and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b13b63 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b13b66 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b13b6a mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11b13b6e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b13b70 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13b73 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13b79 jmp 0x11b13b5b */
  goto L_11b13b5b;
L_11b13b7b:;
  /* 11b13b7b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13b7e cmp dword ptr [0x11b1f180], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1f180))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13b84 jl 0x11b13b3d */
  if ((C.sf!=C.of)) goto L_11b13b3d;
  /* 11b13b86 jmp 0x11b13b8e */
  goto L_11b13b8e;
L_11b13b88:;
  /* 11b13b88 mov edi, dword ptr [0x11b1f180] */
  EDI = (r32((uint32_t)(0x11b1f180)));
L_11b13b8e:;
  /* 11b13b8e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b13b90 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b13b92 jle 0x11b13be0 */
  if ((C.zf||C.sf!=C.of)) goto L_11b13be0;
L_11b13b94:;
  /* 11b13b94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b13b97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b13b99 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13b9c je 0x11b13bd6 */
  if (C.zf) goto L_11b13bd6;
  /* 11b13b9e mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11b13ba0 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11b13ba2 je 0x11b13bd6 */
  if (C.zf) goto L_11b13bd6;
  /* 11b13ba4 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11b13ba6 jne 0x11b13bb3 */
  if (!C.zf) goto L_11b13bb3;
  /* 11b13ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b13ba9 call dword ptr [0x11b1909c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1909c))), 0x11b13bafu);
  /* 11b13baf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13bb1 je 0x11b13bd6 */
  if (C.zf) goto L_11b13bd6;
L_11b13bb3:;
  /* 11b13bb3 mov ecx, esi */
  ECX = (ESI);
  /* 11b13bb5 mov eax, esi */
  EAX = (ESI);
  /* 11b13bb7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b13bba and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b13bbd mov ecx, dword ptr [ecx*4 + 0x11b1f080] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11b1f080)));
  /* 11b13bc4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11b13bc7 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11b13bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b13bcd mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11b13bcf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b13bd1 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11b13bd3 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11b13bd6:;
  /* 11b13bd6 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b13bda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b13bdb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b13bdc cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13bde jl 0x11b13b94 */
  if ((C.sf!=C.of)) goto L_11b13b94;
L_11b13be0:;
  /* 11b13be0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b13be2:;
  /* 11b13be2 mov ecx, dword ptr [0x11b1f080] */
  ECX = (r32((uint32_t)(0x11b1f080)));
  /* 11b13be8 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11b13beb cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13bef lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11b13bf2 jne 0x11b13c41 */
  if (!C.zf) goto L_11b13c41;
  /* 11b13bf4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b13bf6 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11b13bfa jne 0x11b13c01 */
  if (!C.zf) goto L_11b13c01;
  /* 11b13bfc push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11b13bfe pop eax */
  EAX = (pop32());
  /* 11b13bff jmp 0x11b13c0b */
  goto L_11b13c0b;
L_11b13c01:;
  /* 11b13c01 mov eax, ebx */
  EAX = (EBX);
  /* 11b13c03 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b13c04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b13c06 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b13c08 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b13c0b:;
  /* 11b13c0b push eax */
  push32((uint32_t)(EAX));
  /* 11b13c0c call dword ptr [0x11b190c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190c0))), 0x11b13c12u);
  /* 11b13c12 mov edi, eax */
  EDI = (EAX);
  /* 11b13c14 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c17 je 0x11b13c30 */
  if (C.zf) goto L_11b13c30;
  /* 11b13c19 push edi */
  push32((uint32_t)(EDI));
  /* 11b13c1a call dword ptr [0x11b1909c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1909c))), 0x11b13c20u);
  /* 11b13c20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13c22 je 0x11b13c30 */
  if (C.zf) goto L_11b13c30;
  /* 11b13c24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b13c29 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b13c2b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c2e jne 0x11b13c36 */
  if (!C.zf) goto L_11b13c36;
L_11b13c30:;
  /* 11b13c30 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b13c34 jmp 0x11b13c45 */
  goto L_11b13c45;
L_11b13c36:;
  /* 11b13c36 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c39 jne 0x11b13c45 */
  if (!C.zf) goto L_11b13c45;
  /* 11b13c3b or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b13c3f jmp 0x11b13c45 */
  goto L_11b13c45;
L_11b13c41:;
  /* 11b13c41 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11b13c45:;
  /* 11b13c45 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b13c46 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c49 jl 0x11b13be2 */
  if ((C.sf!=C.of)) goto L_11b13be2;
  /* 11b13c4b push dword ptr [0x11b1f180] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f180))));
  /* 11b13c51 call dword ptr [0x11b190dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190dc))), 0x11b13c57u);
  /* 11b13c57 pop edi */
  EDI = (pop32());
  /* 11b13c58 pop esi */
  ESI = (pop32());
  /* 11b13c59 pop ebx */
  EBX = (pop32());
  /* 11b13c5a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b13c5b ret  */
  ESPCHK(0x11b13aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c5c @ 0x11b13c5c (84 bytes, 33 insns) */
void f_11b13c5c(void) {
  FTRACE(0x11b13c5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13c5c push ebx */
  push32((uint32_t)(EBX));
  /* 11b13c5d push esi */
  push32((uint32_t)(ESI));
  /* 11b13c5e push edi */
  push32((uint32_t)(EDI));
  /* 11b13c5f mov esi, 0x11b1f080 */
  ESI = (0x11b1f080u);
L_11b13c64:;
  /* 11b13c64 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b13c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b13c68 je 0x11b13ca1 */
  if (C.zf) goto L_11b13ca1;
  /* 11b13c6a mov edi, eax */
  EDI = (EAX);
  /* 11b13c6c add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13c71 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c73 jae 0x11b13c96 */
  if (!C.cf) goto L_11b13c96;
  /* 11b13c75 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11b13c78:;
  /* 11b13c78 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c7c je 0x11b13c85 */
  if (C.zf) goto L_11b13c85;
  /* 11b13c7e push ebx */
  push32((uint32_t)(EBX));
  /* 11b13c7f call dword ptr [0x11b19094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19094))), 0x11b13c85u);
L_11b13c85:;
  /* 11b13c85 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b13c87 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13c8a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13c8f add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13c92 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13c94 jb 0x11b13c78 */
  if (C.cf) goto L_11b13c78;
L_11b13c96:;
  /* 11b13c96 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b13c98 call 0x11b14736 */
  push32(0x11b13c9du); f_11b14736();
  /* 11b13c9d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b13ca0 pop ecx */
  ECX = (pop32());
L_11b13ca1:;
  /* 11b13ca1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13ca4 cmp esi, 0x11b1f180 */
  { uint32_t _a=(ESI),_b=(0x11b1f180u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13caa jl 0x11b13c64 */
  if ((C.sf!=C.of)) goto L_11b13c64;
  /* 11b13cac pop edi */
  EDI = (pop32());
  /* 11b13cad pop esi */
  ESI = (pop32());
  /* 11b13cae pop ebx */
  EBX = (pop32());
  /* 11b13caf ret  */
  ESPCHK(0x11b13c5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb0 @ 0x11b13cb0 (185 bytes, 71 insns) */
void f_11b13cb0(void) {
  FTRACE(0x11b13cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b13cb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b13cb3 cmp dword ptr [0x11b1f188], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1f188))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13cb9 push esi */
  push32((uint32_t)(ESI));
  /* 11b13cba push edi */
  push32((uint32_t)(EDI));
  /* 11b13cbb jne 0x11b13cc2 */
  if (!C.zf) goto L_11b13cc2;
  /* 11b13cbd call 0x11b15463 */
  push32(0x11b13cc2u); f_11b15463();
L_11b13cc2:;
  /* 11b13cc2 mov esi, dword ptr [0x11b1ead4] */
  ESI = (r32((uint32_t)(0x11b1ead4)));
  /* 11b13cc8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11b13cca:;
  /* 11b13cca mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b13ccc cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13cce je 0x11b13ce2 */
  if (C.zf) goto L_11b13ce2;
  /* 11b13cd0 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13cd2 je 0x11b13cd5 */
  if (C.zf) goto L_11b13cd5;
  /* 11b13cd4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b13cd5:;
  /* 11b13cd5 push esi */
  push32((uint32_t)(ESI));
  /* 11b13cd6 call 0x11b15010 */
  push32(0x11b13cdbu); f_11b15010();
  /* 11b13cdb pop ecx */
  ECX = (pop32());
  /* 11b13cdc lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11b13ce0 jmp 0x11b13cca */
  goto L_11b13cca;
L_11b13ce2:;
  /* 11b13ce2 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11b13ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11b13cea call 0x11b14de1 */
  push32(0x11b13cefu); f_11b14de1();
  /* 11b13cef mov esi, eax */
  ESI = (EAX);
  /* 11b13cf1 pop ecx */
  ECX = (pop32());
  /* 11b13cf2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13cf4 mov dword ptr [0x11b1eb04], esi */
  w32((uint32_t)(0x11b1eb04), (ESI));
  /* 11b13cfa jne 0x11b13d04 */
  if (!C.zf) goto L_11b13d04;
  /* 11b13cfc push 9 */
  push32((uint32_t)(0x9u));
  /* 11b13cfe call 0x11b13701 */
  push32(0x11b13d03u); f_11b13701();
  /* 11b13d03 pop ecx */
  ECX = (pop32());
L_11b13d04:;
  /* 11b13d04 mov edi, dword ptr [0x11b1ead4] */
  EDI = (r32((uint32_t)(0x11b1ead4)));
  /* 11b13d0a cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13d0c je 0x11b13d47 */
  if (C.zf) goto L_11b13d47;
  /* 11b13d0e push ebp */
  push32((uint32_t)(EBP));
L_11b13d0f:;
  /* 11b13d0f push edi */
  push32((uint32_t)(EDI));
  /* 11b13d10 call 0x11b15010 */
  push32(0x11b13d15u); f_11b15010();
  /* 11b13d15 mov ebp, eax */
  EBP = (EAX);
  /* 11b13d17 pop ecx */
  ECX = (pop32());
  /* 11b13d18 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b13d19 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13d1c je 0x11b13d40 */
  if (C.zf) goto L_11b13d40;
  /* 11b13d1e push ebp */
  push32((uint32_t)(EBP));
  /* 11b13d1f call 0x11b14de1 */
  push32(0x11b13d24u); f_11b14de1();
  /* 11b13d24 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13d26 pop ecx */
  ECX = (pop32());
  /* 11b13d27 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b13d29 jne 0x11b13d33 */
  if (!C.zf) goto L_11b13d33;
  /* 11b13d2b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b13d2d call 0x11b13701 */
  push32(0x11b13d32u); f_11b13701();
  /* 11b13d32 pop ecx */
  ECX = (pop32());
L_11b13d33:;
  /* 11b13d33 push edi */
  push32((uint32_t)(EDI));
  /* 11b13d34 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b13d36 call 0x11b14f20 */
  push32(0x11b13d3bu); f_11b14f20();
  /* 11b13d3b pop ecx */
  ECX = (pop32());
  /* 11b13d3c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13d3f pop ecx */
  ECX = (pop32());
L_11b13d40:;
  /* 11b13d40 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13d42 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13d44 jne 0x11b13d0f */
  if (!C.zf) goto L_11b13d0f;
  /* 11b13d46 pop ebp */
  EBP = (pop32());
L_11b13d47:;
  /* 11b13d47 push dword ptr [0x11b1ead4] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ead4))));
  /* 11b13d4d call 0x11b14736 */
  push32(0x11b13d52u); f_11b14736();
  /* 11b13d52 pop ecx */
  ECX = (pop32());
  /* 11b13d53 mov dword ptr [0x11b1ead4], ebx */
  w32((uint32_t)(0x11b1ead4), (EBX));
  /* 11b13d59 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11b13d5b pop edi */
  EDI = (pop32());
  /* 11b13d5c pop esi */
  ESI = (pop32());
  /* 11b13d5d mov dword ptr [0x11b1f184], 1 */
  w32((uint32_t)(0x11b1f184), (0x1u));
  /* 11b13d67 pop ebx */
  EBX = (pop32());
  /* 11b13d68 ret  */
  ESPCHK(0x11b13cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d69 @ 0x11b13d69 (153 bytes, 62 insns) */
void f_11b13d69(void) {
  FTRACE(0x11b13d69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13d69 push ebp */
  push32((uint32_t)(EBP));
  /* 11b13d6a mov ebp, esp */
  EBP = (ESP);
  /* 11b13d6c push ecx */
  push32((uint32_t)(ECX));
  /* 11b13d6d push ecx */
  push32((uint32_t)(ECX));
  /* 11b13d6e push ebx */
  push32((uint32_t)(EBX));
  /* 11b13d6f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b13d71 cmp dword ptr [0x11b1f188], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1f188))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13d77 push esi */
  push32((uint32_t)(ESI));
  /* 11b13d78 push edi */
  push32((uint32_t)(EDI));
  /* 11b13d79 jne 0x11b13d80 */
  if (!C.zf) goto L_11b13d80;
  /* 11b13d7b call 0x11b15463 */
  push32(0x11b13d80u); f_11b15463();
L_11b13d80:;
  /* 11b13d80 mov esi, 0x11b1eb28 */
  ESI = (0x11b1eb28u);
  /* 11b13d85 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b13d8a push esi */
  push32((uint32_t)(ESI));
  /* 11b13d8b push ebx */
  push32((uint32_t)(EBX));
  /* 11b13d8c call dword ptr [0x11b19090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19090))), 0x11b13d92u);
  /* 11b13d92 mov eax, dword ptr [0x11b1f198] */
  EAX = (r32((uint32_t)(0x11b1f198)));
  /* 11b13d97 mov dword ptr [0x11b1eb14], esi */
  w32((uint32_t)(0x11b1eb14), (ESI));
  /* 11b13d9d mov edi, esi */
  EDI = (ESI);
  /* 11b13d9f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13da1 je 0x11b13da5 */
  if (C.zf) goto L_11b13da5;
  /* 11b13da3 mov edi, eax */
  EDI = (EAX);
L_11b13da5:;
  /* 11b13da5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b13da8 push eax */
  push32((uint32_t)(EAX));
  /* 11b13da9 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b13dac push eax */
  push32((uint32_t)(EAX));
  /* 11b13dad push ebx */
  push32((uint32_t)(EBX));
  /* 11b13dae push ebx */
  push32((uint32_t)(EBX));
  /* 11b13daf push edi */
  push32((uint32_t)(EDI));
  /* 11b13db0 call 0x11b13e02 */
  push32(0x11b13db5u); f_11b13e02();
  /* 11b13db5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b13db8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b13dbb lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11b13dbe push eax */
  push32((uint32_t)(EAX));
  /* 11b13dbf call 0x11b14de1 */
  push32(0x11b13dc4u); f_11b14de1();
  /* 11b13dc4 mov esi, eax */
  ESI = (EAX);
  /* 11b13dc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13dc9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13dcb jne 0x11b13dd5 */
  if (!C.zf) goto L_11b13dd5;
  /* 11b13dcd push 8 */
  push32((uint32_t)(0x8u));
  /* 11b13dcf call 0x11b13701 */
  push32(0x11b13dd4u); f_11b13701();
  /* 11b13dd4 pop ecx */
  ECX = (pop32());
L_11b13dd5:;
  /* 11b13dd5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b13dd8 push eax */
  push32((uint32_t)(EAX));
  /* 11b13dd9 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b13ddc push eax */
  push32((uint32_t)(EAX));
  /* 11b13ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b13de0 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11b13de3 push eax */
  push32((uint32_t)(EAX));
  /* 11b13de4 push esi */
  push32((uint32_t)(ESI));
  /* 11b13de5 push edi */
  push32((uint32_t)(EDI));
  /* 11b13de6 call 0x11b13e02 */
  push32(0x11b13debu); f_11b13e02();
  /* 11b13deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b13dee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13df1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b13df2 mov dword ptr [0x11b1eafc], esi */
  w32((uint32_t)(0x11b1eafc), (ESI));
  /* 11b13df8 pop edi */
  EDI = (pop32());
  /* 11b13df9 pop esi */
  ESI = (pop32());
  /* 11b13dfa mov dword ptr [0x11b1eaf8], eax */
  w32((uint32_t)(0x11b1eaf8), (EAX));
  /* 11b13dff pop ebx */
  EBX = (pop32());
  /* 11b13e00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b13e01 ret  */
  ESPCHK(0x11b13d69u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e02 @ 0x11b13e02 (436 bytes, 187 insns) */
void f_11b13e02(void) {
  FTRACE(0x11b13e02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13e02 push ebp */
  push32((uint32_t)(EBP));
  /* 11b13e03 mov ebp, esp */
  EBP = (ESP);
  /* 11b13e05 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b13e08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b13e0b push ebx */
  push32((uint32_t)(EBX));
  /* 11b13e0c push esi */
  push32((uint32_t)(ESI));
  /* 11b13e0d and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b13e10 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b13e13 push edi */
  push32((uint32_t)(EDI));
  /* 11b13e14 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b13e17 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11b13e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b13e20 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b13e22 je 0x11b13e2c */
  if (C.zf) goto L_11b13e2c;
  /* 11b13e24 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11b13e26 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13e29 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b13e2c:;
  /* 11b13e2c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13e2f jne 0x11b13e75 */
  if (!C.zf) goto L_11b13e75;
L_11b13e31:;
  /* 11b13e31 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b13e34 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13e35 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13e38 je 0x11b13e63 */
  if (C.zf) goto L_11b13e63;
  /* 11b13e3a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b13e3c je 0x11b13e63 */
  if (C.zf) goto L_11b13e63;
  /* 11b13e3e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11b13e41 test byte ptr [edx + 0x11b1ef61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11b1ef61)))&(0x4u); fl_logic(_r,8); }
  /* 11b13e48 je 0x11b13e56 */
  if (C.zf) goto L_11b13e56;
  /* 11b13e4a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13e4c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13e4e je 0x11b13e56 */
  if (C.zf) goto L_11b13e56;
  /* 11b13e50 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13e52 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b13e54 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b13e55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b13e56:;
  /* 11b13e56 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13e58 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13e5a je 0x11b13e31 */
  if (C.zf) goto L_11b13e31;
  /* 11b13e5c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13e5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b13e60 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b13e61 jmp 0x11b13e31 */
  goto L_11b13e31;
L_11b13e63:;
  /* 11b13e63 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13e65 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13e67 je 0x11b13e6d */
  if (C.zf) goto L_11b13e6d;
  /* 11b13e69 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11b13e6c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b13e6d:;
  /* 11b13e6d cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13e70 jne 0x11b13eb8 */
  if (!C.zf) goto L_11b13eb8;
  /* 11b13e72 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13e73 jmp 0x11b13eb8 */
  goto L_11b13eb8;
L_11b13e75:;
  /* 11b13e75 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13e77 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13e79 je 0x11b13e80 */
  if (C.zf) goto L_11b13e80;
  /* 11b13e7b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13e7d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b13e7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b13e80:;
  /* 11b13e80 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13e82 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13e83 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11b13e86 test byte ptr [ebx + 0x11b1ef61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11b1ef61)))&(0x4u); fl_logic(_r,8); }
  /* 11b13e8d je 0x11b13e9b */
  if (C.zf) goto L_11b13e9b;
  /* 11b13e8f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13e91 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13e93 je 0x11b13e9a */
  if (C.zf) goto L_11b13e9a;
  /* 11b13e95 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b13e97 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11b13e99 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b13e9a:;
  /* 11b13e9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b13e9b:;
  /* 11b13e9b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13e9e je 0x11b13ea9 */
  if (C.zf) goto L_11b13ea9;
  /* 11b13ea0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b13ea2 je 0x11b13ead */
  if (C.zf) goto L_11b13ead;
  /* 11b13ea4 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13ea7 jne 0x11b13e75 */
  if (!C.zf) goto L_11b13e75;
L_11b13ea9:;
  /* 11b13ea9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b13eab jne 0x11b13eb0 */
  if (!C.zf) goto L_11b13eb0;
L_11b13ead:;
  /* 11b13ead dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b13eae jmp 0x11b13eb8 */
  goto L_11b13eb8;
L_11b13eb0:;
  /* 11b13eb0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13eb2 je 0x11b13eb8 */
  if (C.zf) goto L_11b13eb8;
  /* 11b13eb4 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11b13eb8:;
  /* 11b13eb8 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11b13ebc:;
  /* 11b13ebc cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13ebf je 0x11b13fa5 */
  if (C.zf) goto L_11b13fa5;
L_11b13ec5:;
  /* 11b13ec5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13ec7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13eca je 0x11b13ed1 */
  if (C.zf) goto L_11b13ed1;
  /* 11b13ecc cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13ecf jne 0x11b13ed4 */
  if (!C.zf) goto L_11b13ed4;
L_11b13ed1:;
  /* 11b13ed1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13ed2 jmp 0x11b13ec5 */
  goto L_11b13ec5;
L_11b13ed4:;
  /* 11b13ed4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13ed7 je 0x11b13fa5 */
  if (C.zf) goto L_11b13fa5;
  /* 11b13edd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b13edf je 0x11b13ee9 */
  if (C.zf) goto L_11b13ee9;
  /* 11b13ee1 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11b13ee3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b13ee6 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b13ee9:;
  /* 11b13ee9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b13eec inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11b13eee:;
  /* 11b13eee mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11b13ef5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b13ef7:;
  /* 11b13ef7 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13efa jne 0x11b13f00 */
  if (!C.zf) goto L_11b13f00;
  /* 11b13efc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13efd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b13efe jmp 0x11b13ef7 */
  goto L_11b13ef7;
L_11b13f00:;
  /* 11b13f00 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13f03 jne 0x11b13f31 */
  if (!C.zf) goto L_11b13f31;
  /* 11b13f05 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11b13f08 jne 0x11b13f2f */
  if (!C.zf) goto L_11b13f2f;
  /* 11b13f0a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b13f0c cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13f0f je 0x11b13f1e */
  if (C.zf) goto L_11b13f1e;
  /* 11b13f11 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13f15 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11b13f18 jne 0x11b13f1e */
  if (!C.zf) goto L_11b13f1e;
  /* 11b13f1a mov eax, edx */
  EAX = (EDX);
  /* 11b13f1c jmp 0x11b13f21 */
  goto L_11b13f21;
L_11b13f1e:;
  /* 11b13f1e mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11b13f21:;
  /* 11b13f21 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b13f24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b13f26 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13f29 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b13f2c mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11b13f2f:;
  /* 11b13f2f shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11b13f31:;
  /* 11b13f31 mov edx, ebx */
  EDX = (EBX);
  /* 11b13f33 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b13f34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b13f36 je 0x11b13f46 */
  if (C.zf) goto L_11b13f46;
  /* 11b13f38 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11b13f39:;
  /* 11b13f39 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13f3b je 0x11b13f41 */
  if (C.zf) goto L_11b13f41;
  /* 11b13f3d mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11b13f40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b13f41:;
  /* 11b13f41 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13f43 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b13f44 jne 0x11b13f39 */
  if (!C.zf) goto L_11b13f39;
L_11b13f46:;
  /* 11b13f46 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13f48 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b13f4a je 0x11b13f96 */
  if (C.zf) goto L_11b13f96;
  /* 11b13f4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13f50 jne 0x11b13f5c */
  if (!C.zf) goto L_11b13f5c;
  /* 11b13f52 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13f55 je 0x11b13f96 */
  if (C.zf) goto L_11b13f96;
  /* 11b13f57 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b13f5a je 0x11b13f96 */
  if (C.zf) goto L_11b13f96;
L_11b13f5c:;
  /* 11b13f5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13f60 je 0x11b13f90 */
  if (C.zf) goto L_11b13f90;
  /* 11b13f62 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13f64 je 0x11b13f7f */
  if (C.zf) goto L_11b13f7f;
  /* 11b13f66 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11b13f69 test byte ptr [ebx + 0x11b1ef61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11b1ef61)))&(0x4u); fl_logic(_r,8); }
  /* 11b13f70 je 0x11b13f78 */
  if (C.zf) goto L_11b13f78;
  /* 11b13f72 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b13f74 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b13f75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13f76 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b13f78:;
  /* 11b13f78 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b13f7a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b13f7c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b13f7d jmp 0x11b13f8e */
  goto L_11b13f8e;
L_11b13f7f:;
  /* 11b13f7f movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11b13f82 test byte ptr [edx + 0x11b1ef61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11b1ef61)))&(0x4u); fl_logic(_r,8); }
  /* 11b13f89 je 0x11b13f8e */
  if (C.zf) goto L_11b13f8e;
  /* 11b13f8b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13f8c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b13f8e:;
  /* 11b13f8e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b13f90:;
  /* 11b13f90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b13f91 jmp 0x11b13eee */
  goto L_11b13eee;
L_11b13f96:;
  /* 11b13f96 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b13f98 je 0x11b13f9e */
  if (C.zf) goto L_11b13f9e;
  /* 11b13f9a and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11b13f9d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b13f9e:;
  /* 11b13f9e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b13fa0 jmp 0x11b13ebc */
  goto L_11b13ebc;
L_11b13fa5:;
  /* 11b13fa5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b13fa7 je 0x11b13fac */
  if (C.zf) goto L_11b13fac;
  /* 11b13fa9 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11b13fac:;
  /* 11b13fac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b13faf pop edi */
  EDI = (pop32());
  /* 11b13fb0 pop esi */
  ESI = (pop32());
  /* 11b13fb1 pop ebx */
  EBX = (pop32());
  /* 11b13fb2 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11b13fb4 pop ebp */
  EBP = (pop32());
  /* 11b13fb5 ret  */
  ESPCHK(0x11b13e02u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb6 @ 0x11b13fb6 (306 bytes, 132 insns) */
void f_11b13fb6(void) {
  FTRACE(0x11b13fb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b13fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b13fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b13fb8 mov eax, dword ptr [0x11b1ec2c] */
  EAX = (r32((uint32_t)(0x11b1ec2c)));
  /* 11b13fbd push ebx */
  push32((uint32_t)(EBX));
  /* 11b13fbe push ebp */
  push32((uint32_t)(EBP));
  /* 11b13fbf mov ebp, dword ptr [0x11b1907c] */
  EBP = (r32((uint32_t)(0x11b1907c)));
  /* 11b13fc5 push esi */
  push32((uint32_t)(ESI));
  /* 11b13fc6 push edi */
  push32((uint32_t)(EDI));
  /* 11b13fc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b13fc9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b13fcb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b13fcd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13fcf jne 0x11b14004 */
  if (!C.zf) goto L_11b14004;
  /* 11b13fd1 call ebp */
  call_ind((uint32_t)(EBP), 0x11b13fd3u);
  /* 11b13fd3 mov esi, eax */
  ESI = (EAX);
  /* 11b13fd5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13fd7 je 0x11b13fe5 */
  if (C.zf) goto L_11b13fe5;
  /* 11b13fd9 mov dword ptr [0x11b1ec2c], 1 */
  w32((uint32_t)(0x11b1ec2c), (0x1u));
  /* 11b13fe3 jmp 0x11b1400d */
  goto L_11b1400d;
L_11b13fe5:;
  /* 11b13fe5 call dword ptr [0x11b1908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1908c))), 0x11b13febu);
  /* 11b13feb mov edi, eax */
  EDI = (EAX);
  /* 11b13fed cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b13fef je 0x11b140df */
  if (C.zf) goto L_11b140df;
  /* 11b13ff5 mov dword ptr [0x11b1ec2c], 2 */
  w32((uint32_t)(0x11b1ec2c), (0x2u));
  /* 11b13fff jmp 0x11b14093 */
  goto L_11b14093;
L_11b14004:;
  /* 11b14004 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14007 jne 0x11b1408e */
  if (!C.zf) goto L_11b1408e;
L_11b1400d:;
  /* 11b1400d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1400f jne 0x11b1401d */
  if (!C.zf) goto L_11b1401d;
  /* 11b14011 call ebp */
  call_ind((uint32_t)(EBP), 0x11b14013u);
  /* 11b14013 mov esi, eax */
  ESI = (EAX);
  /* 11b14015 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14017 je 0x11b140df */
  if (C.zf) goto L_11b140df;
L_11b1401d:;
  /* 11b1401d cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b14020 mov eax, esi */
  EAX = (ESI);
  /* 11b14022 je 0x11b14032 */
  if (C.zf) goto L_11b14032;
L_11b14024:;
  /* 11b14024 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b14025 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b14026 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b14029 jne 0x11b14024 */
  if (!C.zf) goto L_11b14024;
  /* 11b1402b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1402c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1402d cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b14030 jne 0x11b14024 */
  if (!C.zf) goto L_11b14024;
L_11b14032:;
  /* 11b14032 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14034 mov edi, dword ptr [0x11b19084] */
  EDI = (r32((uint32_t)(0x11b19084)));
  /* 11b1403a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b1403c push ebx */
  push32((uint32_t)(EBX));
  /* 11b1403d push ebx */
  push32((uint32_t)(EBX));
  /* 11b1403e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1403f push ebx */
  push32((uint32_t)(EBX));
  /* 11b14040 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14041 push eax */
  push32((uint32_t)(EAX));
  /* 11b14042 push esi */
  push32((uint32_t)(ESI));
  /* 11b14043 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14044 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14045 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11b14049 call edi */
  call_ind((uint32_t)(EDI), 0x11b1404bu);
  /* 11b1404b mov ebp, eax */
  EBP = (EAX);
  /* 11b1404d cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1404f je 0x11b14083 */
  if (C.zf) goto L_11b14083;
  /* 11b14051 push ebp */
  push32((uint32_t)(EBP));
  /* 11b14052 call 0x11b14de1 */
  push32(0x11b14057u); f_11b14de1();
  /* 11b14057 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14059 pop ecx */
  ECX = (pop32());
  /* 11b1405a mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b1405e je 0x11b14083 */
  if (C.zf) goto L_11b14083;
  /* 11b14060 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14061 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14062 push ebp */
  push32((uint32_t)(EBP));
  /* 11b14063 push eax */
  push32((uint32_t)(EAX));
  /* 11b14064 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11b14068 push esi */
  push32((uint32_t)(ESI));
  /* 11b14069 push ebx */
  push32((uint32_t)(EBX));
  /* 11b1406a push ebx */
  push32((uint32_t)(EBX));
  /* 11b1406b call edi */
  call_ind((uint32_t)(EDI), 0x11b1406du);
  /* 11b1406d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1406f jne 0x11b1407f */
  if (!C.zf) goto L_11b1407f;
  /* 11b14071 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b14075 call 0x11b14736 */
  push32(0x11b1407au); f_11b14736();
  /* 11b1407a pop ecx */
  ECX = (pop32());
  /* 11b1407b mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11b1407f:;
  /* 11b1407f mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11b14083:;
  /* 11b14083 push esi */
  push32((uint32_t)(ESI));
  /* 11b14084 call dword ptr [0x11b19088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19088))), 0x11b1408au);
  /* 11b1408a mov eax, ebx */
  EAX = (EBX);
  /* 11b1408c jmp 0x11b140e1 */
  goto L_11b140e1;
L_11b1408e:;
  /* 11b1408e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14091 jne 0x11b140df */
  if (!C.zf) goto L_11b140df;
L_11b14093:;
  /* 11b14093 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14095 jne 0x11b140a3 */
  if (!C.zf) goto L_11b140a3;
  /* 11b14097 call dword ptr [0x11b1908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1908c))), 0x11b1409du);
  /* 11b1409d mov edi, eax */
  EDI = (EAX);
  /* 11b1409f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b140a1 je 0x11b140df */
  if (C.zf) goto L_11b140df;
L_11b140a3:;
  /* 11b140a3 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b140a5 mov eax, edi */
  EAX = (EDI);
  /* 11b140a7 je 0x11b140b3 */
  if (C.zf) goto L_11b140b3;
L_11b140a9:;
  /* 11b140a9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b140aa cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b140ac jne 0x11b140a9 */
  if (!C.zf) goto L_11b140a9;
  /* 11b140ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b140af cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b140b1 jne 0x11b140a9 */
  if (!C.zf) goto L_11b140a9;
L_11b140b3:;
  /* 11b140b3 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b140b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b140b6 mov ebp, eax */
  EBP = (EAX);
  /* 11b140b8 push ebp */
  push32((uint32_t)(EBP));
  /* 11b140b9 call 0x11b14de1 */
  push32(0x11b140beu); f_11b14de1();
  /* 11b140be mov esi, eax */
  ESI = (EAX);
  /* 11b140c0 pop ecx */
  ECX = (pop32());
  /* 11b140c1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b140c3 jne 0x11b140c9 */
  if (!C.zf) goto L_11b140c9;
  /* 11b140c5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b140c7 jmp 0x11b140d4 */
  goto L_11b140d4;
L_11b140c9:;
  /* 11b140c9 push ebp */
  push32((uint32_t)(EBP));
  /* 11b140ca push edi */
  push32((uint32_t)(EDI));
  /* 11b140cb push esi */
  push32((uint32_t)(ESI));
  /* 11b140cc call 0x11b15480 */
  push32(0x11b140d1u); f_11b15480();
  /* 11b140d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b140d4:;
  /* 11b140d4 push edi */
  push32((uint32_t)(EDI));
  /* 11b140d5 call dword ptr [0x11b19098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19098))), 0x11b140dbu);
  /* 11b140db mov eax, esi */
  EAX = (ESI);
  /* 11b140dd jmp 0x11b140e1 */
  goto L_11b140e1;
L_11b140df:;
  /* 11b140df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b140e1:;
  /* 11b140e1 pop edi */
  EDI = (pop32());
  /* 11b140e2 pop esi */
  ESI = (pop32());
  /* 11b140e3 pop ebp */
  EBP = (pop32());
  /* 11b140e4 pop ebx */
  EBX = (pop32());
  /* 11b140e5 pop ecx */
  ECX = (pop32());
  /* 11b140e6 pop ecx */
  ECX = (pop32());
  /* 11b140e7 ret  */
  ESPCHK(0x11b13fb6u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e8 @ 0x11b140e8 (45 bytes, 17 insns) */
void f_11b140e8(void) {
  FTRACE(0x11b140e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b140e8 push esi */
  push32((uint32_t)(ESI));
  /* 11b140e9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b140ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11b140ef and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b140f2 call dword ptr [0x11b19078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19078))), 0x11b140f8u);
  /* 11b140f8 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b140fd jne 0x11b14113 */
  if (!C.zf) goto L_11b14113;
  /* 11b140ff mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11b14102 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b14104 je 0x11b14113 */
  if (C.zf) goto L_11b14113;
  /* 11b14106 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14108 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11b1410b mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11b1410d mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11b14110 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11b14113:;
  /* 11b14113 pop esi */
  ESI = (pop32());
  /* 11b14114 ret  */
  ESPCHK(0x11b140e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004115 @ 0x11b14115 (328 bytes, 115 insns) */
void f_11b14115(void) {
  FTRACE(0x11b14115u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14115 push ebp */
  push32((uint32_t)(EBP));
  /* 11b14116 mov ebp, esp */
  EBP = (ESP);
  /* 11b14118 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11b1411d call 0x11b15b70 */
  push32(0x11b14122u); f_11b15b70();
  /* 11b14122 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11b14128 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14129 push eax */
  push32((uint32_t)(EAX));
  /* 11b1412a mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11b14134 call dword ptr [0x11b19070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19070))), 0x11b1413au);
  /* 11b1413a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1413c je 0x11b14158 */
  if (C.zf) goto L_11b14158;
  /* 11b1413e cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14145 jne 0x11b14158 */
  if (!C.zf) goto L_11b14158;
  /* 11b14147 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1414e jb 0x11b14158 */
  if (C.cf) goto L_11b14158;
  /* 11b14150 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b14152 pop eax */
  EAX = (pop32());
  /* 11b14153 jmp 0x11b1425a */
  goto L_11b1425a;
L_11b14158:;
  /* 11b14158 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b1415e push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11b14163 push eax */
  push32((uint32_t)(EAX));
  /* 11b14164 push 0x11b191c8 */
  push32((uint32_t)(0x11b191c8u));
  /* 11b14169 call dword ptr [0x11b19080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19080))), 0x11b1416fu);
  /* 11b1416f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14171 je 0x11b14247 */
  if (C.zf) goto L_11b14247;
  /* 11b14177 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b14179 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11b1417f cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14185 je 0x11b1419a */
  if (C.zf) goto L_11b1419a;
L_11b14187:;
  /* 11b14187 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b14189 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1418b jl 0x11b14195 */
  if ((C.sf!=C.of)) goto L_11b14195;
  /* 11b1418d cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1418f jg 0x11b14195 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14195;
  /* 11b14191 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b14193 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11b14195:;
  /* 11b14195 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b14196 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14198 jne 0x11b14187 */
  if (!C.zf) goto L_11b14187;
L_11b1419a:;
  /* 11b1419a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b141a0 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b141a2 push eax */
  push32((uint32_t)(EAX));
  /* 11b141a3 push 0x11b191b0 */
  push32((uint32_t)(0x11b191b0u));
  /* 11b141a8 call 0x11b15b30 */
  push32(0x11b141adu); f_11b15b30();
  /* 11b141ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b141b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b141b2 jne 0x11b141bc */
  if (!C.zf) goto L_11b141bc;
  /* 11b141b4 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b141ba jmp 0x11b14205 */
  goto L_11b14205;
L_11b141bc:;
  /* 11b141bc lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11b141c2 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b141c7 push eax */
  push32((uint32_t)(EAX));
  /* 11b141c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b141c9 call dword ptr [0x11b19090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19090))), 0x11b141cfu);
  /* 11b141cf cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b141d5 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11b141db je 0x11b141f0 */
  if (C.zf) goto L_11b141f0;
L_11b141dd:;
  /* 11b141dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b141df cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b141e1 jl 0x11b141eb */
  if ((C.sf!=C.of)) goto L_11b141eb;
  /* 11b141e3 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b141e5 jg 0x11b141eb */
  if ((!C.zf&&C.sf==C.of)) goto L_11b141eb;
  /* 11b141e7 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b141e9 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11b141eb:;
  /* 11b141eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b141ec cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b141ee jne 0x11b141dd */
  if (!C.zf) goto L_11b141dd;
L_11b141f0:;
  /* 11b141f0 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11b141f6 push eax */
  push32((uint32_t)(EAX));
  /* 11b141f7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11b141fd push eax */
  push32((uint32_t)(EAX));
  /* 11b141fe call 0x11b15ab0 */
  push32(0x11b14203u); f_11b15ab0();
  /* 11b14203 pop ecx */
  ECX = (pop32());
  /* 11b14204 pop ecx */
  ECX = (pop32());
L_11b14205:;
  /* 11b14205 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14207 je 0x11b14247 */
  if (C.zf) goto L_11b14247;
  /* 11b14209 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11b1420b push eax */
  push32((uint32_t)(EAX));
  /* 11b1420c call 0x11b159f0 */
  push32(0x11b14211u); f_11b159f0();
  /* 11b14211 pop ecx */
  ECX = (pop32());
  /* 11b14212 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14214 pop ecx */
  ECX = (pop32());
  /* 11b14215 je 0x11b14247 */
  if (C.zf) goto L_11b14247;
  /* 11b14217 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b14218 mov ecx, eax */
  ECX = (EAX);
  /* 11b1421a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1421c je 0x11b1422c */
  if (C.zf) goto L_11b1422c;
L_11b1421e:;
  /* 11b1421e cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14221 jne 0x11b14227 */
  if (!C.zf) goto L_11b14227;
  /* 11b14223 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11b14225 jmp 0x11b14228 */
  goto L_11b14228;
L_11b14227:;
  /* 11b14227 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11b14228:;
  /* 11b14228 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1422a jne 0x11b1421e */
  if (!C.zf) goto L_11b1421e;
L_11b1422c:;
  /* 11b1422c push 0xa */
  push32((uint32_t)(0xau));
  /* 11b1422e push ebx */
  push32((uint32_t)(EBX));
  /* 11b1422f push eax */
  push32((uint32_t)(EAX));
  /* 11b14230 call 0x11b157b5 */
  push32(0x11b14235u); f_11b157b5();
  /* 11b14235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14238 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1423b je 0x11b1425a */
  if (C.zf) goto L_11b1425a;
  /* 11b1423d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14240 je 0x11b1425a */
  if (C.zf) goto L_11b1425a;
  /* 11b14242 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14245 je 0x11b1425a */
  if (C.zf) goto L_11b1425a;
L_11b14247:;
  /* 11b14247 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b1424a push eax */
  push32((uint32_t)(EAX));
  /* 11b1424b call 0x11b140e8 */
  push32(0x11b14250u); f_11b140e8();
  /* 11b14250 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14254 pop ecx */
  ECX = (pop32());
  /* 11b14255 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14257 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b1425a:;
  /* 11b1425a pop ebx */
  EBX = (pop32());
  /* 11b1425b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b1425c ret  */
  ESPCHK(0x11b14115u, _esp0);
  ESP += 4; return;
}

/* FUN_1000425d @ 0x11b1425d (93 bytes, 30 insns) */
void f_11b1425d(void) {
  FTRACE(0x11b1425du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1425d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b1425f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14261 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14265 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b1426a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b1426d push eax */
  push32((uint32_t)(EAX));
  /* 11b1426e call dword ptr [0x11b19074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19074))), 0x11b14274u);
  /* 11b14274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14276 mov dword ptr [0x11b1f068], eax */
  w32((uint32_t)(0x11b1f068), (EAX));
  /* 11b1427b je 0x11b142b3 */
  if (C.zf) goto L_11b142b3;
  /* 11b1427d call 0x11b14115 */
  push32(0x11b14282u); f_11b14115();
  /* 11b14282 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14285 mov dword ptr [0x11b1f06c], eax */
  w32((uint32_t)(0x11b1f06c), (EAX));
  /* 11b1428a jne 0x11b14299 */
  if (!C.zf) goto L_11b14299;
  /* 11b1428c push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11b14291 call 0x11b15b9f */
  push32(0x11b14296u); f_11b15b9f();
  /* 11b14296 pop ecx */
  ECX = (pop32());
  /* 11b14297 jmp 0x11b142a3 */
  goto L_11b142a3;
L_11b14299:;
  /* 11b14299 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1429c jne 0x11b142b6 */
  if (!C.zf) goto L_11b142b6;
  /* 11b1429e call 0x11b166e6 */
  push32(0x11b142a3u); f_11b166e6();
L_11b142a3:;
  /* 11b142a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b142a5 jne 0x11b142b6 */
  if (!C.zf) goto L_11b142b6;
  /* 11b142a7 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b142ad call dword ptr [0x11b1906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1906c))), 0x11b142b3u);
L_11b142b3:;
  /* 11b142b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b142b5 ret  */
  ESPCHK(0x11b1425du, _esp0);
  ESP += 4; return;
L_11b142b6:;
  /* 11b142b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b142b8 pop eax */
  EAX = (pop32());
  /* 11b142b9 ret  */
  ESPCHK(0x11b1425du, _esp0);
  ESP += 4; return;
}

/* FUN_100042ba @ 0x11b142ba (168 bytes, 56 insns) */
void f_11b142ba(void) {
  FTRACE(0x11b142bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b142ba mov eax, dword ptr [0x11b1f06c] */
  EAX = (r32((uint32_t)(0x11b1f06c)));
  /* 11b142bf push esi */
  push32((uint32_t)(ESI));
  /* 11b142c0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b142c3 push edi */
  push32((uint32_t)(EDI));
  /* 11b142c4 jne 0x11b1432c */
  if (!C.zf) goto L_11b1432c;
  /* 11b142c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b142c7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b142c9 cmp dword ptr [0x11b1ee3c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1ee3c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b142cf push ebp */
  push32((uint32_t)(EBP));
  /* 11b142d0 mov ebp, dword ptr [0x11b19060] */
  EBP = (r32((uint32_t)(0x11b19060)));
  /* 11b142d6 jle 0x11b14318 */
  if ((C.zf||C.sf!=C.of)) goto L_11b14318;
  /* 11b142d8 mov eax, dword ptr [0x11b1ee40] */
  EAX = (r32((uint32_t)(0x11b1ee40)));
  /* 11b142dd mov edi, dword ptr [0x11b19064] */
  EDI = (r32((uint32_t)(0x11b19064)));
  /* 11b142e3 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11b142e6:;
  /* 11b142e6 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b142eb push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b142f0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b142f2 call edi */
  call_ind((uint32_t)(EDI), 0x11b142f4u);
  /* 11b142f4 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b142f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b142fb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b142fd call edi */
  call_ind((uint32_t)(EDI), 0x11b142ffu);
  /* 11b142ff push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11b14302 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14304 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1430a call ebp */
  call_ind((uint32_t)(EBP), 0x11b1430cu);
  /* 11b1430c add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1430f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b14310 cmp ebx, dword ptr [0x11b1ee3c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b1ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14316 jl 0x11b142e6 */
  if ((C.sf!=C.of)) goto L_11b142e6;
L_11b14318:;
  /* 11b14318 push dword ptr [0x11b1ee40] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee40))));
  /* 11b1431e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14320 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b14326 call ebp */
  call_ind((uint32_t)(EBP), 0x11b14328u);
  /* 11b14328 pop ebp */
  EBP = (pop32());
  /* 11b14329 pop ebx */
  EBX = (pop32());
  /* 11b1432a jmp 0x11b14353 */
  goto L_11b14353;
L_11b1432c:;
  /* 11b1432c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1432f jne 0x11b14353 */
  if (!C.zf) goto L_11b14353;
  /* 11b14331 mov edi, 0x11b1b980 */
  EDI = (0x11b1b980u);
  /* 11b14336 mov esi, edi */
  ESI = (EDI);
L_11b14338:;
  /* 11b14338 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b1433b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1433d je 0x11b1434d */
  if (C.zf) goto L_11b1434d;
  /* 11b1433f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b14344 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14346 push eax */
  push32((uint32_t)(EAX));
  /* 11b14347 call dword ptr [0x11b19064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19064))), 0x11b1434du);
L_11b1434d:;
  /* 11b1434d mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11b1434f cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14351 jne 0x11b14338 */
  if (!C.zf) goto L_11b14338;
L_11b14353:;
  /* 11b14353 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b14359 call dword ptr [0x11b1906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1906c))), 0x11b1435fu);
  /* 11b1435f pop edi */
  EDI = (pop32());
  /* 11b14360 pop esi */
  ESI = (pop32());
  /* 11b14361 ret  */
  ESPCHK(0x11b142bau, _esp0);
  ESP += 4; return;
}

/* FUN_10004362 @ 0x11b14362 (57 bytes, 18 insns) */
void f_11b14362(void) {
  FTRACE(0x11b14362u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14362 mov eax, dword ptr [0x11b1eadc] */
  EAX = (r32((uint32_t)(0x11b1eadc)));
  /* 11b14367 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1436a je 0x11b14379 */
  if (C.zf) goto L_11b14379;
  /* 11b1436c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1436e jne 0x11b1439a */
  if (!C.zf) goto L_11b1439a;
  /* 11b14370 cmp dword ptr [0x11b1eae0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1eae0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14377 jne 0x11b1439a */
  if (!C.zf) goto L_11b1439a;
L_11b14379:;
  /* 11b14379 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11b1437e call 0x11b1439b */
  push32(0x11b14383u); f_11b1439b();
  /* 11b14383 mov eax, dword ptr [0x11b1ec30] */
  EAX = (r32((uint32_t)(0x11b1ec30)));
  /* 11b14388 pop ecx */
  ECX = (pop32());
  /* 11b14389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1438b je 0x11b1438f */
  if (C.zf) goto L_11b1438f;
  /* 11b1438d call eax */
  call_ind((uint32_t)(EAX), 0x11b1438fu);
L_11b1438f:;
  /* 11b1438f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b14394 call 0x11b1439b */
  push32(0x11b14399u); f_11b1439b();
  /* 11b14399 pop ecx */
  ECX = (pop32());
L_11b1439a:;
  /* 11b1439a ret  */
  ESPCHK(0x11b14362u, _esp0);
  ESP += 4; return;
}

/* FUN_1000439b @ 0x11b1439b (339 bytes, 100 insns) */
void f_11b1439b(void) {
  FTRACE(0x11b1439bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1439b push ebp */
  push32((uint32_t)(EBP));
  /* 11b1439c mov ebp, esp */
  EBP = (ESP);
  /* 11b1439e sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b143a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b143a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b143a9 mov eax, 0x11b1b588 */
  EAX = (0x11b1b588u);
L_11b143ae:;
  /* 11b143ae cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b143b0 je 0x11b143bd */
  if (C.zf) goto L_11b143bd;
  /* 11b143b2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b143b5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b143b6 cmp eax, 0x11b1b618 */
  { uint32_t _a=(EAX),_b=(0x11b1b618u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b143bb jl 0x11b143ae */
  if ((C.sf!=C.of)) goto L_11b143ae;
L_11b143bd:;
  /* 11b143bd push esi */
  push32((uint32_t)(ESI));
  /* 11b143be mov esi, ecx */
  ESI = (ECX);
  /* 11b143c0 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11b143c3 cmp edx, dword ptr [esi + 0x11b1b588] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11b1b588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b143c9 jne 0x11b144eb */
  if (!C.zf) goto L_11b144eb;
  /* 11b143cf mov eax, dword ptr [0x11b1eadc] */
  EAX = (r32((uint32_t)(0x11b1eadc)));
  /* 11b143d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b143d7 je 0x11b144c5 */
  if (C.zf) goto L_11b144c5;
  /* 11b143dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b143df jne 0x11b143ee */
  if (!C.zf) goto L_11b143ee;
  /* 11b143e1 cmp dword ptr [0x11b1eae0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1eae0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b143e8 je 0x11b144c5 */
  if (C.zf) goto L_11b144c5;
L_11b143ee:;
  /* 11b143ee cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b143f4 je 0x11b144eb */
  if (C.zf) goto L_11b144eb;
  /* 11b143fa lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b14400 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b14405 push eax */
  push32((uint32_t)(EAX));
  /* 11b14406 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14408 call dword ptr [0x11b19090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19090))), 0x11b1440eu);
  /* 11b1440e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14410 jne 0x11b14425 */
  if (!C.zf) goto L_11b14425;
  /* 11b14412 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b14418 push 0x11b194b8 */
  push32((uint32_t)(0x11b194b8u));
  /* 11b1441d push eax */
  push32((uint32_t)(EAX));
  /* 11b1441e call 0x11b14f20 */
  push32(0x11b14423u); f_11b14f20();
  /* 11b14423 pop ecx */
  ECX = (pop32());
  /* 11b14424 pop ecx */
  ECX = (pop32());
L_11b14425:;
  /* 11b14425 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b1442b push edi */
  push32((uint32_t)(EDI));
  /* 11b1442c push eax */
  push32((uint32_t)(EAX));
  /* 11b1442d lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11b14433 call 0x11b15010 */
  push32(0x11b14438u); f_11b15010();
  /* 11b14438 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b14439 pop ecx */
  ECX = (pop32());
  /* 11b1443a cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1443d jbe 0x11b14468 */
  if ((C.cf||C.zf)) goto L_11b14468;
  /* 11b1443f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b14445 push eax */
  push32((uint32_t)(EAX));
  /* 11b14446 call 0x11b15010 */
  push32(0x11b1444bu); f_11b15010();
  /* 11b1444b mov edi, eax */
  EDI = (EAX);
  /* 11b1444d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b14453 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14456 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b14458 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1445a push 0x11b194b4 */
  push32((uint32_t)(0x11b194b4u));
  /* 11b1445f push edi */
  push32((uint32_t)(EDI));
  /* 11b14460 call 0x11b16e40 */
  push32(0x11b14465u); f_11b16e40();
  /* 11b14465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b14468:;
  /* 11b14468 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b1446e push 0x11b19498 */
  push32((uint32_t)(0x11b19498u));
  /* 11b14473 push eax */
  push32((uint32_t)(EAX));
  /* 11b14474 call 0x11b14f20 */
  push32(0x11b14479u); f_11b14f20();
  /* 11b14479 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b1447f push edi */
  push32((uint32_t)(EDI));
  /* 11b14480 push eax */
  push32((uint32_t)(EAX));
  /* 11b14481 call 0x11b14f30 */
  push32(0x11b14486u); f_11b14f30();
  /* 11b14486 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b1448c push 0x11b19494 */
  push32((uint32_t)(0x11b19494u));
  /* 11b14491 push eax */
  push32((uint32_t)(EAX));
  /* 11b14492 call 0x11b14f30 */
  push32(0x11b14497u); f_11b14f30();
  /* 11b14497 push dword ptr [esi + 0x11b1b58c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11b1b58c))));
  /* 11b1449d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b144a3 push eax */
  push32((uint32_t)(EAX));
  /* 11b144a4 call 0x11b14f30 */
  push32(0x11b144a9u); f_11b14f30();
  /* 11b144a9 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11b144ae lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b144b4 push 0x11b1946c */
  push32((uint32_t)(0x11b1946cu));
  /* 11b144b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b144ba call 0x11b16db3 */
  push32(0x11b144bfu); f_11b16db3();
  /* 11b144bf add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b144c2 pop edi */
  EDI = (pop32());
  /* 11b144c3 jmp 0x11b144eb */
  goto L_11b144eb;
L_11b144c5:;
  /* 11b144c5 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b144c8 lea esi, [esi + 0x11b1b58c] */
  ESI = ((uint32_t)(ESI + 0x11b1b58c));
  /* 11b144ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11b144d0 push eax */
  push32((uint32_t)(EAX));
  /* 11b144d1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b144d3 call 0x11b15010 */
  push32(0x11b144d8u); f_11b15010();
  /* 11b144d8 pop ecx */
  ECX = (pop32());
  /* 11b144d9 push eax */
  push32((uint32_t)(EAX));
  /* 11b144da push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b144dc push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b144de call dword ptr [0x11b190c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190c0))), 0x11b144e4u);
  /* 11b144e4 push eax */
  push32((uint32_t)(EAX));
  /* 11b144e5 call dword ptr [0x11b19068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19068))), 0x11b144ebu);
L_11b144eb:;
  /* 11b144eb pop esi */
  ESI = (pop32());
  /* 11b144ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b144ed ret  */
  ESPCHK(0x11b1439bu, _esp0);
  ESP += 4; return;
}

/* FUN_100044ee @ 0x11b144ee (289 bytes, 98 insns) */
void f_11b144ee(void) {
  FTRACE(0x11b144eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b144ee push ebp */
  push32((uint32_t)(EBP));
  /* 11b144ef mov ebp, esp */
  EBP = (ESP);
  /* 11b144f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b144f3 push 0x11b194d0 */
  push32((uint32_t)(0x11b194d0u));
  /* 11b144f8 push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b144fd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b14503 push eax */
  push32((uint32_t)(EAX));
  /* 11b14504 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b1450b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1450e push ebx */
  push32((uint32_t)(EBX));
  /* 11b1450f push esi */
  push32((uint32_t)(ESI));
  /* 11b14510 push edi */
  push32((uint32_t)(EDI));
  /* 11b14511 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b14514 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14518 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b1451b mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11b1451e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14521 ja 0x11b14537 */
  if ((!C.cf&&!C.zf)) goto L_11b14537;
  /* 11b14523 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b14525 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14527 jne 0x11b1452c */
  if (!C.zf) goto L_11b1452c;
  /* 11b14529 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1452b pop esi */
  ESI = (pop32());
L_11b1452c:;
  /* 11b1452c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1452f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b14532 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b14535 jmp 0x11b14539 */
  goto L_11b14539;
L_11b14537:;
  /* 11b14537 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b14539:;
  /* 11b14539 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11b1453c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1453f ja 0x11b145ed */
  if ((!C.cf&&!C.zf)) goto L_11b145ed;
  /* 11b14545 mov eax, dword ptr [0x11b1f06c] */
  EAX = (r32((uint32_t)(0x11b1f06c)));
  /* 11b1454a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1454d jne 0x11b14590 */
  if (!C.zf) goto L_11b14590;
  /* 11b1454f mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b14552 cmp edi, dword ptr [0x11b1ee44] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11b1ee44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14558 ja 0x11b145d6 */
  if ((!C.cf&&!C.zf)) goto L_11b145d6;
  /* 11b1455a push 9 */
  push32((uint32_t)(0x9u));
  /* 11b1455c call 0x11b146c0 */
  push32(0x11b14561u); f_11b146c0();
  /* 11b14561 pop ecx */
  ECX = (pop32());
  /* 11b14562 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b14565 push edi */
  push32((uint32_t)(EDI));
  /* 11b14566 call 0x11b15f3b */
  push32(0x11b1456bu); f_11b15f3b();
  /* 11b1456b pop ecx */
  ECX = (pop32());
  /* 11b1456c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b1456f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b14573 call 0x11b14587 */
  push32(0x11b14578u); f_11b14587();
  /* 11b14578 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1457b je 0x11b145db */
  if (C.zf) goto L_11b145db;
  /* 11b1457d push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b14580 jmp 0x11b145ca */
  goto L_11b145ca;
  /* 11b14582 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b14584 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b14587 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14589 call 0x11b14721 */
  push32(0x11b1458eu); f_11b14721();
  /* 11b1458e pop ecx */
  ECX = (pop32());
  /* 11b1458f ret  */
  ESPCHK(0x11b144eeu, _esp0);
  ESP += 4; return;
L_11b14590:;
  /* 11b14590 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14593 jne 0x11b145d6 */
  if (!C.zf) goto L_11b145d6;
  /* 11b14595 cmp esi, dword ptr [0x11b1d9a4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1d9a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1459b ja 0x11b145d6 */
  if ((!C.cf&&!C.zf)) goto L_11b145d6;
  /* 11b1459d push 9 */
  push32((uint32_t)(0x9u));
  /* 11b1459f call 0x11b146c0 */
  push32(0x11b145a4u); f_11b146c0();
  /* 11b145a4 pop ecx */
  ECX = (pop32());
  /* 11b145a5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b145ac mov eax, esi */
  EAX = (ESI);
  /* 11b145ae shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b145b1 push eax */
  push32((uint32_t)(EAX));
  /* 11b145b2 call 0x11b169de */
  push32(0x11b145b7u); f_11b169de();
  /* 11b145b7 pop ecx */
  ECX = (pop32());
  /* 11b145b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b145bb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b145bf call 0x11b14610 */
  push32(0x11b145c4u); f_11b14610();
  /* 11b145c4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b145c7 je 0x11b145db */
  if (C.zf) goto L_11b145db;
  /* 11b145c9 push esi */
  push32((uint32_t)(ESI));
L_11b145ca:;
  /* 11b145ca push ebx */
  push32((uint32_t)(EBX));
  /* 11b145cb push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b145ce call 0x11b16f60 */
  push32(0x11b145d3u); f_11b16f60();
  /* 11b145d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b145d6:;
  /* 11b145d6 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b145d9 jne 0x11b14619 */
  if (!C.zf) { jmp_ind(0x11b14619u); return; }
L_11b145db:;
  /* 11b145db push esi */
  push32((uint32_t)(ESI));
  /* 11b145dc push 8 */
  push32((uint32_t)(0x8u));
  /* 11b145de push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b145e4 call dword ptr [0x11b19058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19058))), 0x11b145eau);
  /* 11b145ea mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11b145ed:;
  /* 11b145ed cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b145f0 jne 0x11b14619 */
  if (!C.zf) { jmp_ind(0x11b14619u); return; }
  /* 11b145f2 cmp dword ptr [0x11b1ed6c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed6c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b145f8 je 0x11b14619 */
  if (C.zf) { jmp_ind(0x11b14619u); return; }
  /* 11b145fa push esi */
  push32((uint32_t)(ESI));
  /* 11b145fb call 0x11b16f3e */
  push32(0x11b14600u); f_11b16f3e();
  /* 11b14600 pop ecx */
  ECX = (pop32());
  /* 11b14601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14603 jne 0x11b14539 */
  if (!C.zf) goto L_11b14539;
  /* 11b14609 jmp 0x11b1461c */
  jmp_ind(0x11b1461cu); return;
  /* 11b1460b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10004587 @ 0x11b14587 (9 bytes, 4 insns) */
void f_11b14587(void) {
  FTRACE(0x11b14587u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14587 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14589 call 0x11b14721 */
  push32(0x11b1458eu); f_11b14721();
  /* 11b1458e pop ecx */
  ECX = (pop32());
  /* 11b1458f ret  */
  ESPCHK(0x11b14587u, _esp0);
  ESP += 4; return;
}

/* FUN_10004610 @ 0x11b14610 (9 bytes, 4 insns) */
void f_11b14610(void) {
  FTRACE(0x11b14610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14610 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14612 call 0x11b14721 */
  push32(0x11b14617u); f_11b14721();
  /* 11b14617 pop ecx */
  ECX = (pop32());
  /* 11b14618 ret  */
  ESPCHK(0x11b14610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000462b @ 0x11b1462b (41 bytes, 12 insns) */
void f_11b1462b(void) {
  FTRACE(0x11b1462bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1462b push esi */
  push32((uint32_t)(ESI));
  /* 11b1462c mov esi, dword ptr [0x11b19054] */
  ESI = (r32((uint32_t)(0x11b19054)));
  /* 11b14632 push dword ptr [0x11b1b65c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b65c))));
  /* 11b14638 call esi */
  call_ind((uint32_t)(ESI), 0x11b1463au);
  /* 11b1463a push dword ptr [0x11b1b64c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b64c))));
  /* 11b14640 call esi */
  call_ind((uint32_t)(ESI), 0x11b14642u);
  /* 11b14642 push dword ptr [0x11b1b63c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b63c))));
  /* 11b14648 call esi */
  call_ind((uint32_t)(ESI), 0x11b1464au);
  /* 11b1464a push dword ptr [0x11b1b61c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b61c))));
  /* 11b14650 call esi */
  call_ind((uint32_t)(ESI), 0x11b14652u);
  /* 11b14652 pop esi */
  ESI = (pop32());
  /* 11b14653 ret  */
  ESPCHK(0x11b1462bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004654 @ 0x11b14654 (108 bytes, 34 insns) */
void f_11b14654(void) {
  FTRACE(0x11b14654u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14654 push esi */
  push32((uint32_t)(ESI));
  /* 11b14655 push edi */
  push32((uint32_t)(EDI));
  /* 11b14656 mov edi, dword ptr [0x11b19094] */
  EDI = (r32((uint32_t)(0x11b19094)));
  /* 11b1465c mov esi, 0x11b1b618 */
  ESI = (0x11b1b618u);
L_11b14661:;
  /* 11b14661 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b14663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14665 je 0x11b14692 */
  if (C.zf) goto L_11b14692;
  /* 11b14667 cmp esi, 0x11b1b65c */
  { uint32_t _a=(ESI),_b=(0x11b1b65cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1466d je 0x11b14692 */
  if (C.zf) goto L_11b14692;
  /* 11b1466f cmp esi, 0x11b1b64c */
  { uint32_t _a=(ESI),_b=(0x11b1b64cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14675 je 0x11b14692 */
  if (C.zf) goto L_11b14692;
  /* 11b14677 cmp esi, 0x11b1b63c */
  { uint32_t _a=(ESI),_b=(0x11b1b63cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1467d je 0x11b14692 */
  if (C.zf) goto L_11b14692;
  /* 11b1467f cmp esi, 0x11b1b61c */
  { uint32_t _a=(ESI),_b=(0x11b1b61cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14685 je 0x11b14692 */
  if (C.zf) goto L_11b14692;
  /* 11b14687 push eax */
  push32((uint32_t)(EAX));
  /* 11b14688 call edi */
  call_ind((uint32_t)(EDI), 0x11b1468au);
  /* 11b1468a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b1468c call 0x11b14736 */
  push32(0x11b14691u); f_11b14736();
  /* 11b14691 pop ecx */
  ECX = (pop32());
L_11b14692:;
  /* 11b14692 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14695 cmp esi, 0x11b1b6d8 */
  { uint32_t _a=(ESI),_b=(0x11b1b6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1469b jl 0x11b14661 */
  if ((C.sf!=C.of)) goto L_11b14661;
  /* 11b1469d push dword ptr [0x11b1b63c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b63c))));
  /* 11b146a3 call edi */
  call_ind((uint32_t)(EDI), 0x11b146a5u);
  /* 11b146a5 push dword ptr [0x11b1b64c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b64c))));
  /* 11b146ab call edi */
  call_ind((uint32_t)(EDI), 0x11b146adu);
  /* 11b146ad push dword ptr [0x11b1b65c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b65c))));
  /* 11b146b3 call edi */
  call_ind((uint32_t)(EDI), 0x11b146b5u);
  /* 11b146b5 push dword ptr [0x11b1b61c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b61c))));
  /* 11b146bb call edi */
  call_ind((uint32_t)(EDI), 0x11b146bdu);
  /* 11b146bd pop edi */
  EDI = (pop32());
  /* 11b146be pop esi */
  ESI = (pop32());
  /* 11b146bf ret  */
  ESPCHK(0x11b14654u, _esp0);
  ESP += 4; return;
}

/* FUN_100046c0 @ 0x11b146c0 (97 bytes, 37 insns) */
void f_11b146c0(void) {
  FTRACE(0x11b146c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b146c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b146c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b146c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b146c6 push esi */
  push32((uint32_t)(ESI));
  /* 11b146c7 cmp dword ptr [eax*4 + 0x11b1b618], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11b1b618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b146cf lea esi, [eax*4 + 0x11b1b618] */
  ESI = ((uint32_t)(EAX*4 + 0x11b1b618));
  /* 11b146d6 jne 0x11b14716 */
  if (!C.zf) goto L_11b14716;
  /* 11b146d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b146d9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b146db call 0x11b14de1 */
  push32(0x11b146e0u); f_11b14de1();
  /* 11b146e0 mov edi, eax */
  EDI = (EAX);
  /* 11b146e2 pop ecx */
  ECX = (pop32());
  /* 11b146e3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b146e5 jne 0x11b146ef */
  if (!C.zf) goto L_11b146ef;
  /* 11b146e7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b146e9 call 0x11b13701 */
  push32(0x11b146eeu); f_11b13701();
  /* 11b146ee pop ecx */
  ECX = (pop32());
L_11b146ef:;
  /* 11b146ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b146f1 call 0x11b146c0 */
  push32(0x11b146f6u); f_11b146c0();
  /* 11b146f6 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b146f9 pop ecx */
  ECX = (pop32());
  /* 11b146fa push edi */
  push32((uint32_t)(EDI));
  /* 11b146fb jne 0x11b14707 */
  if (!C.zf) goto L_11b14707;
  /* 11b146fd call dword ptr [0x11b19054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19054))), 0x11b14703u);
  /* 11b14703 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b14705 jmp 0x11b1470d */
  goto L_11b1470d;
L_11b14707:;
  /* 11b14707 call 0x11b14736 */
  push32(0x11b1470cu); f_11b14736();
  /* 11b1470c pop ecx */
  ECX = (pop32());
L_11b1470d:;
  /* 11b1470d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b1470f call 0x11b14721 */
  push32(0x11b14714u); f_11b14721();
  /* 11b14714 pop ecx */
  ECX = (pop32());
  /* 11b14715 pop edi */
  EDI = (pop32());
L_11b14716:;
  /* 11b14716 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b14718 call dword ptr [0x11b1905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1905c))), 0x11b1471eu);
  /* 11b1471e pop esi */
  ESI = (pop32());
  /* 11b1471f pop ebp */
  EBP = (pop32());
  /* 11b14720 ret  */
  ESPCHK(0x11b146c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004721 @ 0x11b14721 (21 bytes, 7 insns) */
void f_11b14721(void) {
  FTRACE(0x11b14721u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14721 push ebp */
  push32((uint32_t)(EBP));
  /* 11b14722 mov ebp, esp */
  EBP = (ESP);
  /* 11b14724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b14727 push dword ptr [eax*4 + 0x11b1b618] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11b1b618))));
  /* 11b1472e call dword ptr [0x11b19050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19050))), 0x11b14734u);
  /* 11b14734 pop ebp */
  EBP = (pop32());
  /* 11b14735 ret  */
  ESPCHK(0x11b14721u, _esp0);
  ESP += 4; return;
}

/* FUN_10004736 @ 0x11b14736 (215 bytes, 76 insns) */
void f_11b14736(void) {
  FTRACE(0x11b14736u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14736 push ebp */
  push32((uint32_t)(EBP));
  /* 11b14737 mov ebp, esp */
  EBP = (ESP);
  /* 11b14739 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b1473b push 0x11b194e8 */
  push32((uint32_t)(0x11b194e8u));
  /* 11b14740 push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b14745 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b1474b push eax */
  push32((uint32_t)(EAX));
  /* 11b1474c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b14753 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14756 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14757 push esi */
  push32((uint32_t)(ESI));
  /* 11b14758 push edi */
  push32((uint32_t)(EDI));
  /* 11b14759 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1475c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b1475e je 0x11b14810 */
  if (C.zf) { jmp_ind(0x11b14810u); return; }
  /* 11b14764 mov eax, dword ptr [0x11b1f06c] */
  EAX = (r32((uint32_t)(0x11b1f06c)));
  /* 11b14769 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1476c jne 0x11b147a9 */
  if (!C.zf) goto L_11b147a9;
  /* 11b1476e push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14770 call 0x11b146c0 */
  push32(0x11b14775u); f_11b146c0();
  /* 11b14775 pop ecx */
  ECX = (pop32());
  /* 11b14776 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b1477a push esi */
  push32((uint32_t)(ESI));
  /* 11b1477b call 0x11b15be7 */
  push32(0x11b14780u); f_11b15be7();
  /* 11b14780 pop ecx */
  ECX = (pop32());
  /* 11b14781 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b14784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14786 je 0x11b14791 */
  if (C.zf) goto L_11b14791;
  /* 11b14788 push esi */
  push32((uint32_t)(ESI));
  /* 11b14789 push eax */
  push32((uint32_t)(EAX));
  /* 11b1478a call 0x11b15c12 */
  push32(0x11b1478fu); f_11b15c12();
  /* 11b1478f pop ecx */
  ECX = (pop32());
  /* 11b14790 pop ecx */
  ECX = (pop32());
L_11b14791:;
  /* 11b14791 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b14795 call 0x11b147a0 */
  push32(0x11b1479au); f_11b147a0();
  /* 11b1479a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1479e jmp 0x11b147f1 */
  goto L_11b147f1;
  /* 11b147a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b147a2 call 0x11b14721 */
  push32(0x11b147a7u); f_11b14721();
  /* 11b147a7 pop ecx */
  ECX = (pop32());
  /* 11b147a8 ret  */
  ESPCHK(0x11b14736u, _esp0);
  ESP += 4; return;
L_11b147a9:;
  /* 11b147a9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b147ac jne 0x11b14801 */
  if (!C.zf) goto L_11b14801;
  /* 11b147ae push 9 */
  push32((uint32_t)(0x9u));
  /* 11b147b0 call 0x11b146c0 */
  push32(0x11b147b5u); f_11b146c0();
  /* 11b147b5 pop ecx */
  ECX = (pop32());
  /* 11b147b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b147bd lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b147c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b147c1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b147c4 push eax */
  push32((uint32_t)(EAX));
  /* 11b147c5 push esi */
  push32((uint32_t)(ESI));
  /* 11b147c6 call 0x11b16942 */
  push32(0x11b147cbu); f_11b16942();
  /* 11b147cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b147ce mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b147d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b147d3 je 0x11b147e4 */
  if (C.zf) goto L_11b147e4;
  /* 11b147d5 push eax */
  push32((uint32_t)(EAX));
  /* 11b147d6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b147d9 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11b147dc call 0x11b16999 */
  push32(0x11b147e1u); f_11b16999();
  /* 11b147e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b147e4:;
  /* 11b147e4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b147e8 call 0x11b147f8 */
  push32(0x11b147edu); f_11b147f8();
  /* 11b147ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b147f1:;
  /* 11b147f1 jne 0x11b14810 */
  if (!C.zf) { jmp_ind(0x11b14810u); return; }
  /* 11b147f3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b147f6 jmp 0x11b14802 */
  goto L_11b14802;
  /* 11b147f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b147fa call 0x11b14721 */
  push32(0x11b147ffu); f_11b14721();
  /* 11b147ff pop ecx */
  ECX = (pop32());
  /* 11b14800 ret  */
  ESPCHK(0x11b14736u, _esp0);
  ESP += 4; return;
L_11b14801:;
  /* 11b14801 push esi */
  push32((uint32_t)(ESI));
L_11b14802:;
  /* 11b14802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14804 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1480c pushal  */
  x86_unimpl("pushal @ 0x11b1480c");
}

/* FUN_100047a0 @ 0x11b147a0 (9 bytes, 4 insns) */
void f_11b147a0(void) {
  FTRACE(0x11b147a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b147a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b147a2 call 0x11b14721 */
  push32(0x11b147a7u); f_11b14721();
  /* 11b147a7 pop ecx */
  ECX = (pop32());
  /* 11b147a8 ret  */
  ESPCHK(0x11b147a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047f8 @ 0x11b147f8 (9 bytes, 4 insns) */
void f_11b147f8(void) {
  FTRACE(0x11b147f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b147f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b147fa call 0x11b14721 */
  push32(0x11b147ffu); f_11b14721();
  /* 11b147ff pop ecx */
  ECX = (pop32());
  /* 11b14800 ret  */
  ESPCHK(0x11b147f8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000481f @ 0x11b1481f (46 bytes, 13 insns) */
void f_11b1481f(void) {
  FTRACE(0x11b1481fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1481f cmp dword ptr [0x11b1ed50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14826 jne 0x11b1484c */
  if (!C.zf) goto L_11b1484c;
  /* 11b14828 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b1482a call 0x11b146c0 */
  push32(0x11b1482fu); f_11b146c0();
  /* 11b1482f cmp dword ptr [0x11b1ed50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14836 pop ecx */
  ECX = (pop32());
  /* 11b14837 jne 0x11b14844 */
  if (!C.zf) goto L_11b14844;
  /* 11b14839 call 0x11b1484d */
  push32(0x11b1483eu); f_11b1484d();
  /* 11b1483e inc dword ptr [0x11b1ed50] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ed50)))+1; w32((uint32_t)(0x11b1ed50), (_r)); fl_inc(_r,32); }
L_11b14844:;
  /* 11b14844 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b14846 call 0x11b14721 */
  push32(0x11b1484bu); f_11b14721();
  /* 11b1484b pop ecx */
  ECX = (pop32());
L_11b1484c:;
  /* 11b1484c ret  */
  ESPCHK(0x11b1481fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000484d @ 0x11b1484d (647 bytes, 207 insns) */
void f_11b1484d(void) {
  FTRACE(0x11b1484du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1484d push ebp */
  push32((uint32_t)(EBP));
  /* 11b1484e mov ebp, esp */
  EBP = (ESP);
  /* 11b14850 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14851 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14852 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14853 push esi */
  push32((uint32_t)(ESI));
  /* 11b14854 push edi */
  push32((uint32_t)(EDI));
  /* 11b14855 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b14857 pop edi */
  EDI = (pop32());
  /* 11b14858 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b1485a push edi */
  push32((uint32_t)(EDI));
  /* 11b1485b mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11b1485e call 0x11b146c0 */
  push32(0x11b14863u); f_11b146c0();
  /* 11b14863 or dword ptr [0x11b1b808], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b1b808)))|(0xffffffffu); w32((uint32_t)(0x11b1b808), (_r)); fl_logic(_r,32); }
  /* 11b1486a or dword ptr [0x11b1b7f8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b1b7f8)))|(0xffffffffu); w32((uint32_t)(0x11b1b7f8), (_r)); fl_logic(_r,32); }
  /* 11b14871 mov dword ptr [0x11b1ec98], ebx */
  w32((uint32_t)(0x11b1ec98), (EBX));
  /* 11b14877 mov dword ptr [esp], 0x11b19540 */
  w32((uint32_t)(ESP), (0x11b19540u));
  /* 11b1487e call 0x11b172a4 */
  push32(0x11b14883u); f_11b172a4();
  /* 11b14883 mov esi, eax */
  ESI = (EAX);
  /* 11b14885 pop ecx */
  ECX = (pop32());
  /* 11b14886 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14888 jne 0x11b1498b */
  if (!C.zf) goto L_11b1498b;
  /* 11b1488e push edi */
  push32((uint32_t)(EDI));
  /* 11b1488f call 0x11b14721 */
  push32(0x11b14894u); f_11b14721();
  /* 11b14894 mov dword ptr [esp], 0x11b1eca0 */
  w32((uint32_t)(ESP), (0x11b1eca0u));
  /* 11b1489b call dword ptr [0x11b190a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b190a0))), 0x11b148a1u);
  /* 11b148a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b148a4 je 0x11b14acf */
  if (C.zf) goto L_11b14acf;
  /* 11b148aa mov eax, dword ptr [0x11b1eca0] */
  EAX = (r32((uint32_t)(0x11b1eca0)));
  /* 11b148af mov ecx, dword ptr [0x11b1ecf4] */
  ECX = (r32((uint32_t)(0x11b1ecf4)));
  /* 11b148b5 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b148b8 cmp word ptr [0x11b1ece6], bx */
  { uint32_t _a=(r16((uint32_t)(0x11b1ece6))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b148bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b148c1 pop edx */
  EDX = (pop32());
  /* 11b148c2 mov dword ptr [0x11b1b760], eax */
  w32((uint32_t)(0x11b1b760), (EAX));
  /* 11b148c7 mov dword ptr [0x11b1ec98], edx */
  w32((uint32_t)(0x11b1ec98), (EDX));
  /* 11b148cd je 0x11b148db */
  if (C.zf) goto L_11b148db;
  /* 11b148cf mov esi, ecx */
  ESI = (ECX);
  /* 11b148d1 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b148d4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b148d6 mov dword ptr [0x11b1b760], eax */
  w32((uint32_t)(0x11b1b760), (EAX));
L_11b148db:;
  /* 11b148db cmp word ptr [0x11b1ed3a], bx */
  { uint32_t _a=(r16((uint32_t)(0x11b1ed3a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b148e2 je 0x11b148ff */
  if (C.zf) goto L_11b148ff;
  /* 11b148e4 mov eax, dword ptr [0x11b1ed48] */
  EAX = (r32((uint32_t)(0x11b1ed48)));
  /* 11b148e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b148eb je 0x11b148ff */
  if (C.zf) goto L_11b148ff;
  /* 11b148ed sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b148ef mov dword ptr [0x11b1b764], edx */
  w32((uint32_t)(0x11b1b764), (EDX));
  /* 11b148f5 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b148f8 mov dword ptr [0x11b1b768], eax */
  w32((uint32_t)(0x11b1b768), (EAX));
  /* 11b148fd jmp 0x11b1490b */
  goto L_11b1490b;
L_11b148ff:;
  /* 11b148ff mov dword ptr [0x11b1b764], ebx */
  w32((uint32_t)(0x11b1b764), (EBX));
  /* 11b14905 mov dword ptr [0x11b1b768], ebx */
  w32((uint32_t)(0x11b1b768), (EBX));
L_11b1490b:;
  /* 11b1490b lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b1490e mov esi, dword ptr [0x11b19084] */
  ESI = (r32((uint32_t)(0x11b19084)));
  /* 11b14914 push eax */
  push32((uint32_t)(EAX));
  /* 11b14915 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14916 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b14918 mov edi, 0x220 */
  EDI = (0x220u);
  /* 11b1491d push dword ptr [0x11b1b7ec] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b7ec))));
  /* 11b14923 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b14925 push 0x11b1eca4 */
  push32((uint32_t)(0x11b1eca4u));
  /* 11b1492a push edi */
  push32((uint32_t)(EDI));
  /* 11b1492b push dword ptr [0x11b1ed88] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ed88))));
  /* 11b14931 call esi */
  call_ind((uint32_t)(ESI), 0x11b14933u);
  /* 11b14933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14935 je 0x11b14947 */
  if (C.zf) goto L_11b14947;
  /* 11b14937 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1493a jne 0x11b14947 */
  if (!C.zf) goto L_11b14947;
  /* 11b1493c mov eax, dword ptr [0x11b1b7ec] */
  EAX = (r32((uint32_t)(0x11b1b7ec)));
  /* 11b14941 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11b14945 jmp 0x11b1494f */
  goto L_11b1494f;
L_11b14947:;
  /* 11b14947 mov eax, dword ptr [0x11b1b7ec] */
  EAX = (r32((uint32_t)(0x11b1b7ec)));
  /* 11b1494c and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11b1494f:;
  /* 11b1494f lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b14952 push eax */
  push32((uint32_t)(EAX));
  /* 11b14953 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14954 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b14956 push dword ptr [0x11b1b7f0] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b7f0))));
  /* 11b1495c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b1495e push 0x11b1ecf8 */
  push32((uint32_t)(0x11b1ecf8u));
  /* 11b14963 push edi */
  push32((uint32_t)(EDI));
  /* 11b14964 push dword ptr [0x11b1ed88] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ed88))));
  /* 11b1496a call esi */
  call_ind((uint32_t)(ESI), 0x11b1496cu);
  /* 11b1496c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1496e je 0x11b14abe */
  if (C.zf) goto L_11b14abe;
  /* 11b14974 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14977 jne 0x11b14abe */
  if (!C.zf) goto L_11b14abe;
  /* 11b1497d mov eax, dword ptr [0x11b1b7f0] */
  EAX = (r32((uint32_t)(0x11b1b7f0)));
  /* 11b14982 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11b14986 jmp 0x11b14acf */
  goto L_11b14acf;
L_11b1498b:;
  /* 11b1498b cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1498e je 0x11b14ac8 */
  if (C.zf) goto L_11b14ac8;
  /* 11b14994 mov eax, dword ptr [0x11b1ed4c] */
  EAX = (r32((uint32_t)(0x11b1ed4c)));
  /* 11b14999 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1499b je 0x11b149ae */
  if (C.zf) goto L_11b149ae;
  /* 11b1499d push eax */
  push32((uint32_t)(EAX));
  /* 11b1499e push esi */
  push32((uint32_t)(ESI));
  /* 11b1499f call 0x11b17220 */
  push32(0x11b149a4u); f_11b17220();
  /* 11b149a4 pop ecx */
  ECX = (pop32());
  /* 11b149a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b149a7 pop ecx */
  ECX = (pop32());
  /* 11b149a8 je 0x11b14ac8 */
  if (C.zf) goto L_11b14ac8;
L_11b149ae:;
  /* 11b149ae push dword ptr [0x11b1ed4c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ed4c))));
  /* 11b149b4 call 0x11b14736 */
  push32(0x11b149b9u); f_11b14736();
  /* 11b149b9 push esi */
  push32((uint32_t)(ESI));
  /* 11b149ba call 0x11b15010 */
  push32(0x11b149bfu); f_11b15010();
  /* 11b149bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b149c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b149c1 call 0x11b14de1 */
  push32(0x11b149c6u); f_11b14de1();
  /* 11b149c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b149c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b149cb mov dword ptr [0x11b1ed4c], eax */
  w32((uint32_t)(0x11b1ed4c), (EAX));
  /* 11b149d0 je 0x11b14ac8 */
  if (C.zf) goto L_11b14ac8;
  /* 11b149d6 push esi */
  push32((uint32_t)(ESI));
  /* 11b149d7 push eax */
  push32((uint32_t)(EAX));
  /* 11b149d8 call 0x11b14f20 */
  push32(0x11b149ddu); f_11b14f20();
  /* 11b149dd push edi */
  push32((uint32_t)(EDI));
  /* 11b149de call 0x11b14721 */
  push32(0x11b149e3u); f_11b14721();
  /* 11b149e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b149e5 push esi */
  push32((uint32_t)(ESI));
  /* 11b149e6 push dword ptr [0x11b1b7ec] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b7ec))));
  /* 11b149ec call 0x11b16e40 */
  push32(0x11b149f1u); f_11b16e40();
  /* 11b149f1 mov eax, dword ptr [0x11b1b7ec] */
  EAX = (r32((uint32_t)(0x11b1b7ec)));
  /* 11b149f6 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b149f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b149fc and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11b14a00 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a03 jne 0x11b14a0d */
  if (!C.zf) goto L_11b14a0d;
  /* 11b14a05 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b14a0c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b14a0d:;
  /* 11b14a0d push esi */
  push32((uint32_t)(ESI));
  /* 11b14a0e call 0x11b17188 */
  push32(0x11b14a13u); f_11b17188();
  /* 11b14a13 pop ecx */
  ECX = (pop32());
  /* 11b14a14 mov bl, 0x30 */
  BL = (0x30u);
  /* 11b14a16 mov ecx, eax */
  ECX = (EAX);
  /* 11b14a18 imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14a1e mov dword ptr [0x11b1b760], ecx */
  w32((uint32_t)(0x11b1b760), (ECX));
L_11b14a24:;
  /* 11b14a24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b14a26 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a28 je 0x11b14a32 */
  if (C.zf) goto L_11b14a32;
  /* 11b14a2a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a2c jl 0x11b14a35 */
  if ((C.sf!=C.of)) goto L_11b14a35;
  /* 11b14a2e cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a30 jg 0x11b14a35 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14a35;
L_11b14a32:;
  /* 11b14a32 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b14a33 jmp 0x11b14a24 */
  goto L_11b14a24;
L_11b14a35:;
  /* 11b14a35 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a38 jne 0x11b14a88 */
  if (!C.zf) goto L_11b14a88;
  /* 11b14a3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b14a3b push esi */
  push32((uint32_t)(ESI));
  /* 11b14a3c call 0x11b17188 */
  push32(0x11b14a41u); f_11b17188();
  /* 11b14a41 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14a44 pop ecx */
  ECX = (pop32());
  /* 11b14a45 mov ecx, dword ptr [0x11b1b760] */
  ECX = (r32((uint32_t)(0x11b1b760)));
  /* 11b14a4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14a4d mov dword ptr [0x11b1b760], ecx */
  w32((uint32_t)(0x11b1b760), (ECX));
L_11b14a53:;
  /* 11b14a53 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b14a55 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a57 jl 0x11b14a60 */
  if ((C.sf!=C.of)) goto L_11b14a60;
  /* 11b14a59 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a5b jg 0x11b14a60 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14a60;
  /* 11b14a5d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b14a5e jmp 0x11b14a53 */
  goto L_11b14a53;
L_11b14a60:;
  /* 11b14a60 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a63 jne 0x11b14a88 */
  if (!C.zf) goto L_11b14a88;
  /* 11b14a65 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b14a66 push esi */
  push32((uint32_t)(ESI));
  /* 11b14a67 call 0x11b17188 */
  push32(0x11b14a6cu); f_11b17188();
  /* 11b14a6c pop ecx */
  ECX = (pop32());
  /* 11b14a6d mov ecx, dword ptr [0x11b1b760] */
  ECX = (r32((uint32_t)(0x11b1b760)));
  /* 11b14a73 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14a75 mov dword ptr [0x11b1b760], ecx */
  w32((uint32_t)(0x11b1b760), (ECX));
L_11b14a7b:;
  /* 11b14a7b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b14a7d cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a7f jl 0x11b14a88 */
  if ((C.sf!=C.of)) goto L_11b14a88;
  /* 11b14a81 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b14a83 jg 0x11b14a88 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14a88;
  /* 11b14a85 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b14a86 jmp 0x11b14a7b */
  goto L_11b14a7b;
L_11b14a88:;
  /* 11b14a88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14a8c je 0x11b14a96 */
  if (C.zf) goto L_11b14a96;
  /* 11b14a8e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b14a90 mov dword ptr [0x11b1b760], ecx */
  w32((uint32_t)(0x11b1b760), (ECX));
L_11b14a96:;
  /* 11b14a96 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11b14a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14a9b mov dword ptr [0x11b1b764], eax */
  w32((uint32_t)(0x11b1b764), (EAX));
  /* 11b14aa0 je 0x11b14abe */
  if (C.zf) goto L_11b14abe;
  /* 11b14aa2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b14aa4 push esi */
  push32((uint32_t)(ESI));
  /* 11b14aa5 push dword ptr [0x11b1b7f0] */
  push32((uint32_t)(r32((uint32_t)(0x11b1b7f0))));
  /* 11b14aab call 0x11b16e40 */
  push32(0x11b14ab0u); f_11b16e40();
  /* 11b14ab0 mov eax, dword ptr [0x11b1b7f0] */
  EAX = (r32((uint32_t)(0x11b1b7f0)));
  /* 11b14ab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14ab8 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11b14abc jmp 0x11b14acf */
  goto L_11b14acf;
L_11b14abe:;
  /* 11b14abe mov eax, dword ptr [0x11b1b7f0] */
  EAX = (r32((uint32_t)(0x11b1b7f0)));
  /* 11b14ac3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11b14ac6 jmp 0x11b14acf */
  goto L_11b14acf;
L_11b14ac8:;
  /* 11b14ac8 push edi */
  push32((uint32_t)(EDI));
  /* 11b14ac9 call 0x11b14721 */
  push32(0x11b14aceu); f_11b14721();
  /* 11b14ace pop ecx */
  ECX = (pop32());
L_11b14acf:;
  /* 11b14acf pop edi */
  EDI = (pop32());
  /* 11b14ad0 pop esi */
  ESI = (pop32());
  /* 11b14ad1 pop ebx */
  EBX = (pop32());
  /* 11b14ad2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b14ad3 ret  */
  ESPCHK(0x11b1484du, _esp0);
  ESP += 4; return;
}

/* FUN_10004ad4 @ 0x11b14ad4 (33 bytes, 12 insns) */
void f_11b14ad4(void) {
  FTRACE(0x11b14ad4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14ad4 push esi */
  push32((uint32_t)(ESI));
  /* 11b14ad5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b14ad7 call 0x11b146c0 */
  push32(0x11b14adcu); f_11b146c0();
  /* 11b14adc push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b14ae0 call 0x11b14af5 */
  push32(0x11b14ae5u); f_11b14af5();
  /* 11b14ae5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b14ae7 mov esi, eax */
  ESI = (EAX);
  /* 11b14ae9 call 0x11b14721 */
  push32(0x11b14aeeu); f_11b14721();
  /* 11b14aee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14af1 mov eax, esi */
  EAX = (ESI);
  /* 11b14af3 pop esi */
  ESI = (pop32());
  /* 11b14af4 ret  */
  ESPCHK(0x11b14ad4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af5 @ 0x11b14af5 (428 bytes, 149 insns) */
void f_11b14af5(void) {
  FTRACE(0x11b14af5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14af5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14af6 push esi */
  push32((uint32_t)(ESI));
  /* 11b14af7 push edi */
  push32((uint32_t)(EDI));
  /* 11b14af8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b14afa cmp dword ptr [0x11b1b764], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1b764))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14b00 jne 0x11b14b09 */
  if (!C.zf) goto L_11b14b09;
L_11b14b02:;
  /* 11b14b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b14b04 jmp 0x11b14c55 */
  goto L_11b14c55;
L_11b14b09:;
  /* 11b14b09 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b14b0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b14b0f pop ebx */
  EBX = (pop32());
  /* 11b14b10 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11b14b13 cmp eax, dword ptr [0x11b1b7f8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1b7f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14b19 jne 0x11b14b27 */
  if (!C.zf) goto L_11b14b27;
  /* 11b14b1b cmp eax, dword ptr [0x11b1b808] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1b808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14b21 je 0x11b14c29 */
  if (C.zf) goto L_11b14c29;
L_11b14b27:;
  /* 11b14b27 cmp dword ptr [0x11b1ec98], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1ec98))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14b2d je 0x11b14bff */
  if (C.zf) goto L_11b14bff;
  /* 11b14b33 movzx ecx, word ptr [0x11b1ed46] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed46))));
  /* 11b14b3a push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b3b cmp word ptr [0x11b1ed38], di */
  { uint32_t _a=(r16((uint32_t)(0x11b1ed38))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b14b42 movzx ecx, word ptr [0x11b1ed44] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed44))));
  /* 11b14b49 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b4a movzx ecx, word ptr [0x11b1ed42] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed42))));
  /* 11b14b51 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b52 movzx ecx, word ptr [0x11b1ed40] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed40))));
  /* 11b14b59 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b5a jne 0x11b14b79 */
  if (!C.zf) goto L_11b14b79;
  /* 11b14b5c movzx ecx, word ptr [0x11b1ed3c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed3c))));
  /* 11b14b63 push edi */
  push32((uint32_t)(EDI));
  /* 11b14b64 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b65 movzx ecx, word ptr [0x11b1ed3e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed3e))));
  /* 11b14b6c push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b6d movzx ecx, word ptr [0x11b1ed3a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed3a))));
  /* 11b14b74 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b75 push eax */
  push32((uint32_t)(EAX));
  /* 11b14b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14b77 jmp 0x11b14b8d */
  goto L_11b14b8d;
L_11b14b79:;
  /* 11b14b79 movzx ecx, word ptr [0x11b1ed3e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed3e))));
  /* 11b14b80 push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b81 push edi */
  push32((uint32_t)(EDI));
  /* 11b14b82 movzx ecx, word ptr [0x11b1ed3a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11b1ed3a))));
  /* 11b14b89 push edi */
  push32((uint32_t)(EDI));
  /* 11b14b8a push ecx */
  push32((uint32_t)(ECX));
  /* 11b14b8b push eax */
  push32((uint32_t)(EAX));
  /* 11b14b8c push edi */
  push32((uint32_t)(EDI));
L_11b14b8d:;
  /* 11b14b8d push ebx */
  push32((uint32_t)(EBX));
  /* 11b14b8e call 0x11b14ca1 */
  push32(0x11b14b93u); f_11b14ca1();
  /* 11b14b93 movzx eax, word ptr [0x11b1ecf2] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ecf2))));
  /* 11b14b9a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14b9d cmp word ptr [0x11b1ece4], di */
  { uint32_t _a=(r16((uint32_t)(0x11b1ece4))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b14ba4 push eax */
  push32((uint32_t)(EAX));
  /* 11b14ba5 movzx eax, word ptr [0x11b1ecf0] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ecf0))));
  /* 11b14bac push eax */
  push32((uint32_t)(EAX));
  /* 11b14bad movzx eax, word ptr [0x11b1ecee] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ecee))));
  /* 11b14bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11b14bb5 movzx eax, word ptr [0x11b1ecec] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ecec))));
  /* 11b14bbc push eax */
  push32((uint32_t)(EAX));
  /* 11b14bbd jne 0x11b14be7 */
  if (!C.zf) goto L_11b14be7;
  /* 11b14bbf movzx eax, word ptr [0x11b1ece8] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ece8))));
  /* 11b14bc6 push edi */
  push32((uint32_t)(EDI));
  /* 11b14bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11b14bc8 movzx eax, word ptr [0x11b1ecea] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ecea))));
  /* 11b14bcf push eax */
  push32((uint32_t)(EAX));
  /* 11b14bd0 movzx eax, word ptr [0x11b1ece6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ece6))));
  /* 11b14bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11b14bd8 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11b14bdb push ebx */
  push32((uint32_t)(EBX));
L_11b14bdc:;
  /* 11b14bdc push edi */
  push32((uint32_t)(EDI));
  /* 11b14bdd call 0x11b14ca1 */
  push32(0x11b14be2u); f_11b14ca1();
  /* 11b14be2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14be5 jmp 0x11b14c29 */
  goto L_11b14c29;
L_11b14be7:;
  /* 11b14be7 movzx eax, word ptr [0x11b1ecea] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ecea))));
  /* 11b14bee push eax */
  push32((uint32_t)(EAX));
  /* 11b14bef push edi */
  push32((uint32_t)(EDI));
  /* 11b14bf0 movzx eax, word ptr [0x11b1ece6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11b1ece6))));
  /* 11b14bf7 push edi */
  push32((uint32_t)(EDI));
  /* 11b14bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11b14bf9 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11b14bfc push edi */
  push32((uint32_t)(EDI));
  /* 11b14bfd jmp 0x11b14bdc */
  goto L_11b14bdc;
L_11b14bff:;
  /* 11b14bff push edi */
  push32((uint32_t)(EDI));
  /* 11b14c00 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c01 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b14c04 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c05 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14c07 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b14c09 push eax */
  push32((uint32_t)(EAX));
  /* 11b14c0a push ebx */
  push32((uint32_t)(EBX));
  /* 11b14c0b push ebx */
  push32((uint32_t)(EBX));
  /* 11b14c0c call 0x11b14ca1 */
  push32(0x11b14c11u); f_11b14ca1();
  /* 11b14c11 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c12 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c13 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b14c16 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c17 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c18 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b14c1a push 0xa */
  push32((uint32_t)(0xau));
  /* 11b14c1c push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11b14c1f push ebx */
  push32((uint32_t)(EBX));
  /* 11b14c20 push edi */
  push32((uint32_t)(EDI));
  /* 11b14c21 call 0x11b14ca1 */
  push32(0x11b14c26u); f_11b14ca1();
  /* 11b14c26 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b14c29:;
  /* 11b14c29 mov edx, dword ptr [0x11b1b7fc] */
  EDX = (r32((uint32_t)(0x11b1b7fc)));
  /* 11b14c2f mov eax, dword ptr [0x11b1b80c] */
  EAX = (r32((uint32_t)(0x11b1b80c)));
  /* 11b14c34 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11b14c37 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c39 jge 0x11b14c59 */
  if ((C.sf==C.of)) goto L_11b14c59;
  /* 11b14c3b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c3d jl 0x11b14b02 */
  if ((C.sf!=C.of)) goto L_11b14b02;
  /* 11b14c43 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c45 jg 0x11b14b02 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14b02;
  /* 11b14c4b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c4d jle 0x11b14c6d */
  if ((C.zf||C.sf!=C.of)) goto L_11b14c6d;
  /* 11b14c4f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c51 jge 0x11b14c6d */
  if ((C.sf==C.of)) goto L_11b14c6d;
L_11b14c53:;
  /* 11b14c53 mov eax, ebx */
  EAX = (EBX);
L_11b14c55:;
  /* 11b14c55 pop edi */
  EDI = (pop32());
  /* 11b14c56 pop esi */
  ESI = (pop32());
  /* 11b14c57 pop ebx */
  EBX = (pop32());
  /* 11b14c58 ret  */
  ESPCHK(0x11b14af5u, _esp0);
  ESP += 4; return;
L_11b14c59:;
  /* 11b14c59 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c5b jl 0x11b14c53 */
  if ((C.sf!=C.of)) goto L_11b14c53;
  /* 11b14c5d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c5f jg 0x11b14c53 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14c53;
  /* 11b14c61 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c63 jle 0x11b14c6d */
  if ((C.zf||C.sf!=C.of)) goto L_11b14c6d;
  /* 11b14c65 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c67 jl 0x11b14b02 */
  if ((C.sf!=C.of)) goto L_11b14b02;
L_11b14c6d:;
  /* 11b14c6d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11b14c70 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14c73 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14c76 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14c79 add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14c7b imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14c81 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c83 jne 0x11b14c94 */
  if (!C.zf) goto L_11b14c94;
  /* 11b14c85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b14c87 cmp eax, dword ptr [0x11b1b800] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1b800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c8d setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11b14c90:;
  /* 11b14c90 mov eax, ecx */
  EAX = (ECX);
  /* 11b14c92 jmp 0x11b14c55 */
  goto L_11b14c55;
L_11b14c94:;
  /* 11b14c94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b14c96 cmp eax, dword ptr [0x11b1b810] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1b810))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14c9c setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11b14c9f jmp 0x11b14c90 */
  goto L_11b14c90;
}

/* FUN_10004ca1 @ 0x11b14ca1 (320 bytes, 101 insns) */
void f_11b14ca1(void) {
  FTRACE(0x11b14ca1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14ca1 push ebp */
  push32((uint32_t)(EBP));
  /* 11b14ca2 mov ebp, esp */
  EBP = (ESP);
  /* 11b14ca4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14ca8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b14ca9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b14cac push esi */
  push32((uint32_t)(ESI));
  /* 11b14cad jne 0x11b14d3c */
  if (!C.zf) goto L_11b14d3c;
  /* 11b14cb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b14cb6 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11b14cb9 and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11b14cbd mov esi, eax */
  ESI = (EAX);
  /* 11b14cbf jne 0x11b14ccc */
  if (!C.zf) goto L_11b14ccc;
  /* 11b14cc1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11b14cc4 mov eax, dword ptr [esi + 0x11b1b810] */
  EAX = (r32((uint32_t)(ESI + 0x11b1b810)));
  /* 11b14cca jmp 0x11b14cd5 */
  goto L_11b14cd5;
L_11b14ccc:;
  /* 11b14ccc shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11b14ccf mov eax, dword ptr [esi + 0x11b1b844] */
  EAX = (r32((uint32_t)(ESI + 0x11b1b844)));
L_11b14cd5:;
  /* 11b14cd5 mov edx, ebx */
  EDX = (EBX);
  /* 11b14cd7 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11b14cda imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14ce0 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11b14ce3 push edi */
  push32((uint32_t)(EDI));
  /* 11b14ce4 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b14ce7 mov edi, ecx */
  EDI = (ECX);
  /* 11b14ce9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b14ceb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14ced lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11b14cf4 pop edi */
  EDI = (pop32());
  /* 11b14cf5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b14cf6 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b14cf8 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b14cfb pop edi */
  EDI = (pop32());
  /* 11b14cfc cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14cff jg 0x11b14d0f */
  if ((!C.zf&&C.sf==C.of)) goto L_11b14d0f;
  /* 11b14d01 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d04 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14d06 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14d09 lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11b14d0d jmp 0x11b14d19 */
  goto L_11b14d19;
L_11b14d0f:;
  /* 11b14d0f imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d12 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14d14 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14d17 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11b14d19:;
  /* 11b14d19 cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14d1d jne 0x11b14d57 */
  if (!C.zf) goto L_11b14d57;
  /* 11b14d1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14d23 jne 0x11b14d2d */
  if (!C.zf) goto L_11b14d2d;
  /* 11b14d25 mov esi, dword ptr [esi + 0x11b1b814] */
  ESI = (r32((uint32_t)(ESI + 0x11b1b814)));
  /* 11b14d2b jmp 0x11b14d33 */
  goto L_11b14d33;
L_11b14d2d:;
  /* 11b14d2d mov esi, dword ptr [esi + 0x11b1b848] */
  ESI = (r32((uint32_t)(ESI + 0x11b1b848)));
L_11b14d33:;
  /* 11b14d33 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14d35 jle 0x11b14d57 */
  if ((C.zf||C.sf!=C.of)) goto L_11b14d57;
  /* 11b14d37 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14d3a jmp 0x11b14d57 */
  goto L_11b14d57;
L_11b14d3c:;
  /* 11b14d3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b14d3f test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11b14d42 jne 0x11b14d4d */
  if (!C.zf) goto L_11b14d4d;
  /* 11b14d44 mov ecx, dword ptr [eax*4 + 0x11b1b810] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b1b810)));
  /* 11b14d4b jmp 0x11b14d54 */
  goto L_11b14d54;
L_11b14d4d:;
  /* 11b14d4d mov ecx, dword ptr [eax*4 + 0x11b1b844] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11b1b844)));
L_11b14d54:;
  /* 11b14d54 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11b14d57:;
  /* 11b14d57 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14d5b jne 0x11b14d88 */
  if (!C.zf) goto L_11b14d88;
  /* 11b14d5d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b14d60 mov dword ptr [0x11b1b7fc], ecx */
  w32((uint32_t)(0x11b1b7fc), (ECX));
  /* 11b14d66 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d69 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14d6c mov dword ptr [0x11b1b7f8], ebx */
  w32((uint32_t)(0x11b1b7f8), (EBX));
  /* 11b14d72 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d75 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14d78 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d7e add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14d81 mov dword ptr [0x11b1b800], eax */
  w32((uint32_t)(0x11b1b800), (EAX));
  /* 11b14d86 jmp 0x11b14ddd */
  goto L_11b14ddd;
L_11b14d88:;
  /* 11b14d88 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b14d8b mov dword ptr [0x11b1b80c], ecx */
  w32((uint32_t)(0x11b1b80c), (ECX));
  /* 11b14d91 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d94 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14d97 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14d9a add eax, dword ptr [0x11b1b768] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1b768))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14da0 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14da3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b14da9 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14dac mov dword ptr [0x11b1b810], eax */
  w32((uint32_t)(0x11b1b810), (EAX));
  /* 11b14db1 jns 0x11b14dc0 */
  if (!C.sf) goto L_11b14dc0;
  /* 11b14db3 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14db8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b14db9 mov dword ptr [0x11b1b810], eax */
  w32((uint32_t)(0x11b1b810), (EAX));
  /* 11b14dbe jmp 0x11b14dd1 */
  goto L_11b14dd1;
L_11b14dc0:;
  /* 11b14dc0 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11b14dc5 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14dc7 jl 0x11b14dd7 */
  if ((C.sf!=C.of)) goto L_11b14dd7;
  /* 11b14dc9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14dcb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b14dcc mov dword ptr [0x11b1b810], eax */
  w32((uint32_t)(0x11b1b810), (EAX));
L_11b14dd1:;
  /* 11b14dd1 mov dword ptr [0x11b1b80c], ecx */
  w32((uint32_t)(0x11b1b80c), (ECX));
L_11b14dd7:;
  /* 11b14dd7 mov dword ptr [0x11b1b808], ebx */
  w32((uint32_t)(0x11b1b808), (EBX));
L_11b14ddd:;
  /* 11b14ddd pop esi */
  ESI = (pop32());
  /* 11b14dde pop ebx */
  EBX = (pop32());
  /* 11b14ddf pop ebp */
  EBP = (pop32());
  /* 11b14de0 ret  */
  ESPCHK(0x11b14ca1u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11b14de1 (18 bytes, 6 insns) */
void f_11b14de1(void) {
  FTRACE(0x11b14de1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14de1 push dword ptr [0x11b1ed6c] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ed6c))));
  /* 11b14de7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b14deb call 0x11b14df3 */
  push32(0x11b14df0u); f_11b14df3();
  /* 11b14df0 pop ecx */
  ECX = (pop32());
  /* 11b14df1 pop ecx */
  ECX = (pop32());
  /* 11b14df2 ret  */
  ESPCHK(0x11b14de1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11b14df3 (44 bytes, 16 insns) */
void f_11b14df3(void) {
  FTRACE(0x11b14df3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14df3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14df8 ja 0x11b14e1c */
  if ((!C.cf&&!C.zf)) goto L_11b14e1c;
L_11b14dfa:;
  /* 11b14dfa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b14dfe call 0x11b14e1f */
  push32(0x11b14e03u); f_11b14e1f();
  /* 11b14e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14e05 pop ecx */
  ECX = (pop32());
  /* 11b14e06 jne 0x11b14e1e */
  if (!C.zf) goto L_11b14e1e;
  /* 11b14e08 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14e0c je 0x11b14e1e */
  if (C.zf) goto L_11b14e1e;
  /* 11b14e0e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b14e12 call 0x11b16f3e */
  push32(0x11b14e17u); f_11b16f3e();
  /* 11b14e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14e19 pop ecx */
  ECX = (pop32());
  /* 11b14e1a jne 0x11b14dfa */
  if (!C.zf) goto L_11b14dfa;
L_11b14e1c:;
  /* 11b14e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b14e1e:;
  /* 11b14e1e ret  */
  ESPCHK(0x11b14df3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e1f @ 0x11b14e1f (231 bytes, 81 insns) */
void f_11b14e1f(void) {
  FTRACE(0x11b14e1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14e1f push ebp */
  push32((uint32_t)(EBP));
  /* 11b14e20 mov ebp, esp */
  EBP = (ESP);
  /* 11b14e22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b14e24 push 0x11b19548 */
  push32((uint32_t)(0x11b19548u));
  /* 11b14e29 push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b14e2e mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b14e34 push eax */
  push32((uint32_t)(EAX));
  /* 11b14e35 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b14e3c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b14e3f push ebx */
  push32((uint32_t)(EBX));
  /* 11b14e40 push esi */
  push32((uint32_t)(ESI));
  /* 11b14e41 push edi */
  push32((uint32_t)(EDI));
  /* 11b14e42 mov eax, dword ptr [0x11b1f06c] */
  EAX = (r32((uint32_t)(0x11b1f06c)));
  /* 11b14e47 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14e4a jne 0x11b14e8f */
  if (!C.zf) goto L_11b14e8f;
  /* 11b14e4c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b14e4f cmp esi, dword ptr [0x11b1ee44] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1ee44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14e55 ja 0x11b14eee */
  if ((!C.cf&&!C.zf)) goto L_11b14eee;
  /* 11b14e5b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14e5d call 0x11b146c0 */
  push32(0x11b14e62u); f_11b146c0();
  /* 11b14e62 pop ecx */
  ECX = (pop32());
  /* 11b14e63 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b14e67 push esi */
  push32((uint32_t)(ESI));
  /* 11b14e68 call 0x11b15f3b */
  push32(0x11b14e6du); f_11b15f3b();
  /* 11b14e6d pop ecx */
  ECX = (pop32());
  /* 11b14e6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b14e71 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b14e75 call 0x11b14e86 */
  push32(0x11b14e7au); f_11b14e86();
  /* 11b14e7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b14e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14e7f je 0x11b14eee */
  if (C.zf) goto L_11b14eee;
  /* 11b14e81 jmp 0x11b14f0c */
  jmp_ind(0x11b14f0cu); return;
  /* 11b14e86 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14e88 call 0x11b14721 */
  push32(0x11b14e8du); f_11b14721();
  /* 11b14e8d pop ecx */
  ECX = (pop32());
  /* 11b14e8e ret  */
  ESPCHK(0x11b14e1fu, _esp0);
  ESP += 4; return;
L_11b14e8f:;
  /* 11b14e8f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14e92 jne 0x11b14eee */
  if (!C.zf) goto L_11b14eee;
  /* 11b14e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b14e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14e99 je 0x11b14ea3 */
  if (C.zf) goto L_11b14ea3;
  /* 11b14e9b lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11b14e9e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b14ea1 jmp 0x11b14ea6 */
  goto L_11b14ea6;
L_11b14ea3:;
  /* 11b14ea3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b14ea5 pop esi */
  ESI = (pop32());
L_11b14ea6:;
  /* 11b14ea6 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11b14ea9 cmp esi, dword ptr [0x11b1d9a4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1d9a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b14eaf ja 0x11b14edf */
  if ((!C.cf&&!C.zf)) goto L_11b14edf;
  /* 11b14eb1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14eb3 call 0x11b146c0 */
  push32(0x11b14eb8u); f_11b146c0();
  /* 11b14eb8 pop ecx */
  ECX = (pop32());
  /* 11b14eb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b14ec0 mov eax, esi */
  EAX = (ESI);
  /* 11b14ec2 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b14ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11b14ec6 call 0x11b169de */
  push32(0x11b14ecbu); f_11b169de();
  /* 11b14ecb pop ecx */
  ECX = (pop32());
  /* 11b14ecc mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b14ecf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b14ed3 call 0x11b14ee5 */
  push32(0x11b14ed8u); f_11b14ee5();
  /* 11b14ed8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b14edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14edd jne 0x11b14f0c */
  if (!C.zf) { jmp_ind(0x11b14f0cu); return; }
L_11b14edf:;
  /* 11b14edf push esi */
  push32((uint32_t)(ESI));
  /* 11b14ee0 jmp 0x11b14efe */
  goto L_11b14efe;
  /* 11b14ee2 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b14ee5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14ee7 call 0x11b14721 */
  push32(0x11b14eecu); f_11b14721();
  /* 11b14eec pop ecx */
  ECX = (pop32());
  /* 11b14eed ret  */
  ESPCHK(0x11b14e1fu, _esp0);
  ESP += 4; return;
L_11b14eee:;
  /* 11b14eee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b14ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b14ef3 jne 0x11b14ef8 */
  if (!C.zf) goto L_11b14ef8;
  /* 11b14ef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b14ef7 pop eax */
  EAX = (pop32());
L_11b14ef8:;
  /* 11b14ef8 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14efb and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11b14efd push eax */
  push32((uint32_t)(EAX));
L_11b14efe:;
  /* 11b14efe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b14f00 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
}

/* FUN_10004e86 @ 0x11b14e86 (9 bytes, 4 insns) */
void f_11b14e86(void) {
  FTRACE(0x11b14e86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14e86 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14e88 call 0x11b14721 */
  push32(0x11b14e8du); f_11b14721();
  /* 11b14e8d pop ecx */
  ECX = (pop32());
  /* 11b14e8e ret  */
  ESPCHK(0x11b14e86u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee5 @ 0x11b14ee5 (9 bytes, 4 insns) */
void f_11b14ee5(void) {
  FTRACE(0x11b14ee5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14ee5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b14ee7 call 0x11b14721 */
  push32(0x11b14eecu); f_11b14721();
  /* 11b14eec pop ecx */
  ECX = (pop32());
  /* 11b14eed ret  */
  ESPCHK(0x11b14ee5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x11b14f20 (7 bytes, 3 insns) */
void f_11b14f20(void) {
  FTRACE(0x11b14f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14f20 push edi */
  push32((uint32_t)(EDI));
  /* 11b14f21 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b14f25 jmp 0x11b14f91 */
  jmp_ind(0x11b14f91u); return;
}

/* FUN_10004f30 @ 0x11b14f30 (224 bytes, 84 insns) */
void f_11b14f30(void) {
  FTRACE(0x11b14f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b14f30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b14f34 push edi */
  push32((uint32_t)(EDI));
  /* 11b14f35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b14f3b je 0x11b14f4c */
  if (C.zf) goto L_11b14f4c;
L_11b14f3d:;
  /* 11b14f3d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b14f3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b14f40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b14f42 je 0x11b14f7f */
  if (C.zf) goto L_11b14f7f;
  /* 11b14f44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b14f4a jne 0x11b14f3d */
  if (!C.zf) goto L_11b14f3d;
L_11b14f4c:;
  /* 11b14f4c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b14f4e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b14f53 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14f55 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b14f58 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b14f5a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14f5d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b14f62 je 0x11b14f4c */
  if (C.zf) goto L_11b14f4c;
  /* 11b14f64 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b14f67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b14f69 je 0x11b14f8e */
  if (C.zf) goto L_11b14f8e;
  /* 11b14f6b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b14f6d je 0x11b14f89 */
  if (C.zf) goto L_11b14f89;
  /* 11b14f6f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b14f74 je 0x11b14f84 */
  if (C.zf) goto L_11b14f84;
  /* 11b14f76 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b14f7b je 0x11b14f7f */
  if (C.zf) goto L_11b14f7f;
  /* 11b14f7d jmp 0x11b14f4c */
  goto L_11b14f4c;
L_11b14f7f:;
  /* 11b14f7f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11b14f82 jmp 0x11b14f91 */
  goto L_11b14f91;
L_11b14f84:;
  /* 11b14f84 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11b14f87 jmp 0x11b14f91 */
  goto L_11b14f91;
L_11b14f89:;
  /* 11b14f89 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11b14f8c jmp 0x11b14f91 */
  goto L_11b14f91;
L_11b14f8e:;
  /* 11b14f8e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11b14f91:;
  /* 11b14f91 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b14f95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b14f9b je 0x11b14fb6 */
  if (C.zf) goto L_11b14fb6;
L_11b14f9d:;
  /* 11b14f9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b14f9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b14fa0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b14fa2 je 0x11b15008 */
  if (C.zf) goto L_11b15008;
  /* 11b14fa4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b14fa6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b14fa7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b14fad jne 0x11b14f9d */
  if (!C.zf) goto L_11b14f9d;
  /* 11b14faf jmp 0x11b14fb6 */
  goto L_11b14fb6;
L_11b14fb1:;
  /* 11b14fb1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b14fb3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b14fb6:;
  /* 11b14fb6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b14fbb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b14fbd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14fbf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b14fc2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b14fc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b14fc6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b14fc9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b14fce je 0x11b14fb1 */
  if (C.zf) goto L_11b14fb1;
  /* 11b14fd0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b14fd2 je 0x11b15008 */
  if (C.zf) goto L_11b15008;
  /* 11b14fd4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b14fd6 je 0x11b14fff */
  if (C.zf) goto L_11b14fff;
  /* 11b14fd8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b14fde je 0x11b14ff2 */
  if (C.zf) goto L_11b14ff2;
  /* 11b14fe0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b14fe6 je 0x11b14fea */
  if (C.zf) goto L_11b14fea;
  /* 11b14fe8 jmp 0x11b14fb1 */
  goto L_11b14fb1;
L_11b14fea:;
  /* 11b14fea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b14fec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b14ff0 pop edi */
  EDI = (pop32());
  /* 11b14ff1 ret  */
  ESPCHK(0x11b14f30u, _esp0);
  ESP += 4; return;
L_11b14ff2:;
  /* 11b14ff2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b14ff5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b14ff9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11b14ffd pop edi */
  EDI = (pop32());
  /* 11b14ffe ret  */
  ESPCHK(0x11b14f30u, _esp0);
  ESP += 4; return;
L_11b14fff:;
  /* 11b14fff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b15002 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b15006 pop edi */
  EDI = (pop32());
  /* 11b15007 ret  */
  ESPCHK(0x11b14f30u, _esp0);
  ESP += 4; return;
L_11b15008:;
  /* 11b15008 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b1500a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b1500e pop edi */
  EDI = (pop32());
  /* 11b1500f ret  */
  ESPCHK(0x11b14f30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11b15010 (123 bytes, 44 insns) */
void f_11b15010(void) {
  FTRACE(0x11b15010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15010 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b15014 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b1501a je 0x11b15030 */
  if (C.zf) goto L_11b15030;
L_11b1501c:;
  /* 11b1501c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b1501e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b1501f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15021 je 0x11b15063 */
  if (C.zf) goto L_11b15063;
  /* 11b15023 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b15029 jne 0x11b1501c */
  if (!C.zf) goto L_11b1501c;
  /* 11b1502b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b15030:;
  /* 11b15030 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b15032 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b15037 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15039 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b1503c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b1503e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15041 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b15046 je 0x11b15030 */
  if (C.zf) goto L_11b15030;
  /* 11b15048 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b1504b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b1504d je 0x11b15081 */
  if (C.zf) goto L_11b15081;
  /* 11b1504f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b15051 je 0x11b15077 */
  if (C.zf) goto L_11b15077;
  /* 11b15053 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b15058 je 0x11b1506d */
  if (C.zf) goto L_11b1506d;
  /* 11b1505a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b1505f je 0x11b15063 */
  if (C.zf) goto L_11b15063;
  /* 11b15061 jmp 0x11b15030 */
  goto L_11b15030;
L_11b15063:;
  /* 11b15063 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11b15066 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b1506a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1506c ret  */
  ESPCHK(0x11b15010u, _esp0);
  ESP += 4; return;
L_11b1506d:;
  /* 11b1506d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11b15070 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b15074 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15076 ret  */
  ESPCHK(0x11b15010u, _esp0);
  ESP += 4; return;
L_11b15077:;
  /* 11b15077 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11b1507a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b1507e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15080 ret  */
  ESPCHK(0x11b15010u, _esp0);
  ESP += 4; return;
L_11b15081:;
  /* 11b15081 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11b15084 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b15088 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1508a ret  */
  ESPCHK(0x11b15010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000508b @ 0x11b1508b (429 bytes, 143 insns) */
void f_11b1508b(void) {
  FTRACE(0x11b1508bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1508b push ebp */
  push32((uint32_t)(EBP));
  /* 11b1508c mov ebp, esp */
  EBP = (ESP);
  /* 11b1508e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15091 push ebx */
  push32((uint32_t)(EBX));
  /* 11b15092 push esi */
  push32((uint32_t)(ESI));
  /* 11b15093 push edi */
  push32((uint32_t)(EDI));
  /* 11b15094 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b15096 call 0x11b146c0 */
  push32(0x11b1509bu); f_11b146c0();
  /* 11b1509b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b1509e call 0x11b15238 */
  push32(0x11b150a3u); f_11b15238();
  /* 11b150a3 mov ebx, eax */
  EBX = (EAX);
  /* 11b150a5 pop ecx */
  ECX = (pop32());
  /* 11b150a6 cmp ebx, dword ptr [0x11b1ee48] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b1ee48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b150ac pop ecx */
  ECX = (pop32());
  /* 11b150ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b150b0 jne 0x11b150b9 */
  if (!C.zf) goto L_11b150b9;
L_11b150b2:;
  /* 11b150b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b150b4 jmp 0x11b15229 */
  goto L_11b15229;
L_11b150b9:;
  /* 11b150b9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b150bb je 0x11b15217 */
  if (C.zf) goto L_11b15217;
  /* 11b150c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b150c3 mov eax, 0x11b1b888 */
  EAX = (0x11b1b888u);
L_11b150c8:;
  /* 11b150c8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b150ca je 0x11b15140 */
  if (C.zf) goto L_11b15140;
  /* 11b150cc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b150cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b150d0 cmp eax, 0x11b1b978 */
  { uint32_t _a=(EAX),_b=(0x11b1b978u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b150d5 jl 0x11b150c8 */
  if ((C.sf!=C.of)) goto L_11b150c8;
  /* 11b150d7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b150da push eax */
  push32((uint32_t)(EAX));
  /* 11b150db push ebx */
  push32((uint32_t)(EBX));
  /* 11b150dc call dword ptr [0x11b19048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19048))), 0x11b150e2u);
  /* 11b150e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b150e4 pop esi */
  ESI = (pop32());
  /* 11b150e5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b150e7 jne 0x11b1520e */
  if (!C.zf) goto L_11b1520e;
  /* 11b150ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b150ef and dword ptr [0x11b1f064], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b1f064)))&(0x0u); w32((uint32_t)(0x11b1f064), (_r)); fl_logic(_r,32); }
  /* 11b150f6 pop ecx */
  ECX = (pop32());
  /* 11b150f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b150f9 mov edi, 0x11b1ef60 */
  EDI = (0x11b1ef60u);
  /* 11b150fe cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15101 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b15103 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b15104 mov dword ptr [0x11b1ee48], ebx */
  w32((uint32_t)(0x11b1ee48), (EBX));
  /* 11b1510a jbe 0x11b151fb */
  if ((C.cf||C.zf)) goto L_11b151fb;
  /* 11b15110 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15114 je 0x11b151d6 */
  if (C.zf) goto L_11b151d6;
  /* 11b1511a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11b1511d:;
  /* 11b1511d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b1511f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b15121 je 0x11b151d6 */
  if (C.zf) goto L_11b151d6;
  /* 11b15127 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11b1512b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11b1512e:;
  /* 11b1512e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15130 ja 0x11b151ca */
  if ((!C.cf&&!C.zf)) goto L_11b151ca;
  /* 11b15136 or byte ptr [eax + 0x11b1ef61], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(0x4u); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b1513d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1513e jmp 0x11b1512e */
  goto L_11b1512e;
L_11b15140:;
  /* 11b15140 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b15144 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b15146 pop ecx */
  ECX = (pop32());
  /* 11b15147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15149 mov edi, 0x11b1ef60 */
  EDI = (0x11b1ef60u);
  /* 11b1514e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11b15151 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b15153 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b15156 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b15157 lea ebx, [esi + 0x11b1b898] */
  EBX = ((uint32_t)(ESI + 0x11b1b898));
L_11b1515d:;
  /* 11b1515d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15160 mov ecx, ebx */
  ECX = (EBX);
  /* 11b15162 je 0x11b15190 */
  if (C.zf) goto L_11b15190;
L_11b15164:;
  /* 11b15164 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b15167 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b15169 je 0x11b15190 */
  if (C.zf) goto L_11b15190;
  /* 11b1516b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11b1516e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11b15171 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15173 ja 0x11b15189 */
  if ((!C.cf&&!C.zf)) goto L_11b15189;
  /* 11b15175 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b15178 mov dl, byte ptr [edx + 0x11b1b880] */
  DL = (r8((uint32_t)(EDX + 0x11b1b880)));
L_11b1517e:;
  /* 11b1517e or byte ptr [eax + 0x11b1ef61], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(DL); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b15184 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b15185 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15187 jbe 0x11b1517e */
  if ((C.cf||C.zf)) goto L_11b1517e;
L_11b15189:;
  /* 11b15189 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b1518a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b1518b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1518e jne 0x11b15164 */
  if (!C.zf) goto L_11b15164;
L_11b15190:;
  /* 11b15190 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b15193 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15196 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1519a jb 0x11b1515d */
  if (C.cf) goto L_11b1515d;
  /* 11b1519c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1519f mov dword ptr [0x11b1ee5c], 1 */
  w32((uint32_t)(0x11b1ee5c), (0x1u));
  /* 11b151a9 push eax */
  push32((uint32_t)(EAX));
  /* 11b151aa mov dword ptr [0x11b1ee48], eax */
  w32((uint32_t)(0x11b1ee48), (EAX));
  /* 11b151af call 0x11b15282 */
  push32(0x11b151b4u); f_11b15282();
  /* 11b151b4 lea esi, [esi + 0x11b1b88c] */
  ESI = ((uint32_t)(ESI + 0x11b1b88c));
  /* 11b151ba mov edi, 0x11b1ee50 */
  EDI = (0x11b1ee50u);
  /* 11b151bf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b151c0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b151c1 pop ecx */
  ECX = (pop32());
  /* 11b151c2 mov dword ptr [0x11b1f064], eax */
  w32((uint32_t)(0x11b1f064), (EAX));
  /* 11b151c7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b151c8 jmp 0x11b1521c */
  goto L_11b1521c;
L_11b151ca:;
  /* 11b151ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b151cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b151cc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b151d0 jne 0x11b1511d */
  if (!C.zf) goto L_11b1511d;
L_11b151d6:;
  /* 11b151d6 mov eax, esi */
  EAX = (ESI);
L_11b151d8:;
  /* 11b151d8 or byte ptr [eax + 0x11b1ef61], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(0x8u); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b151df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b151e0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b151e5 jb 0x11b151d8 */
  if (C.cf) goto L_11b151d8;
  /* 11b151e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b151e8 call 0x11b15282 */
  push32(0x11b151edu); f_11b15282();
  /* 11b151ed pop ecx */
  ECX = (pop32());
  /* 11b151ee mov dword ptr [0x11b1f064], eax */
  w32((uint32_t)(0x11b1f064), (EAX));
  /* 11b151f3 mov dword ptr [0x11b1ee5c], esi */
  w32((uint32_t)(0x11b1ee5c), (ESI));
  /* 11b151f9 jmp 0x11b15202 */
  goto L_11b15202;
L_11b151fb:;
  /* 11b151fb and dword ptr [0x11b1ee5c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b1ee5c)))&(0x0u); w32((uint32_t)(0x11b1ee5c), (_r)); fl_logic(_r,32); }
L_11b15202:;
  /* 11b15202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15204 mov edi, 0x11b1ee50 */
  EDI = (0x11b1ee50u);
  /* 11b15209 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b1520a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b1520b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b1520c jmp 0x11b1521c */
  goto L_11b1521c;
L_11b1520e:;
  /* 11b1520e cmp dword ptr [0x11b1ed54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15215 je 0x11b15226 */
  if (C.zf) goto L_11b15226;
L_11b15217:;
  /* 11b15217 call 0x11b152b5 */
  push32(0x11b1521cu); f_11b152b5();
L_11b1521c:;
  /* 11b1521c call 0x11b152de */
  push32(0x11b15221u); f_11b152de();
  /* 11b15221 jmp 0x11b150b2 */
  goto L_11b150b2;
L_11b15226:;
  /* 11b15226 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11b15229:;
  /* 11b15229 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b1522b call 0x11b14721 */
  push32(0x11b15230u); f_11b14721();
  /* 11b15230 pop ecx */
  ECX = (pop32());
  /* 11b15231 mov eax, esi */
  EAX = (ESI);
  /* 11b15233 pop edi */
  EDI = (pop32());
  /* 11b15234 pop esi */
  ESI = (pop32());
  /* 11b15235 pop ebx */
  EBX = (pop32());
  /* 11b15236 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15237 ret  */
  ESPCHK(0x11b1508bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005238 @ 0x11b15238 (74 bytes, 15 insns) */
void f_11b15238(void) {
  FTRACE(0x11b15238u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15238 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b1523c and dword ptr [0x11b1ed54], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b1ed54)))&(0x0u); w32((uint32_t)(0x11b1ed54), (_r)); fl_logic(_r,32); }
  /* 11b15243 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15246 jne 0x11b15258 */
  if (!C.zf) goto L_11b15258;
  /* 11b15248 mov dword ptr [0x11b1ed54], 1 */
  w32((uint32_t)(0x11b1ed54), (0x1u));
  /* 11b15252 jmp dword ptr [0x11b1904c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b1904c)))); return;
L_11b15258:;
  /* 11b15258 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1525b jne 0x11b1526d */
  if (!C.zf) goto L_11b1526d;
  /* 11b1525d mov dword ptr [0x11b1ed54], 1 */
  w32((uint32_t)(0x11b1ed54), (0x1u));
  /* 11b15267 jmp dword ptr [0x11b19044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b19044)))); return;
L_11b1526d:;
  /* 11b1526d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15270 jne 0x11b15281 */
  if (!C.zf) goto L_11b15281;
  /* 11b15272 mov eax, dword ptr [0x11b1ed88] */
  EAX = (r32((uint32_t)(0x11b1ed88)));
  /* 11b15277 mov dword ptr [0x11b1ed54], 1 */
  w32((uint32_t)(0x11b1ed54), (0x1u));
L_11b15281:;
  /* 11b15281 ret  */
  ESPCHK(0x11b15238u, _esp0);
  ESP += 4; return;
}

/* FUN_10005282 @ 0x11b15282 (51 bytes, 19 insns) */
void f_11b15282(void) {
  FTRACE(0x11b15282u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15282 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b15286 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1528b je 0x11b152af */
  if (C.zf) goto L_11b152af;
  /* 11b1528d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15290 je 0x11b152a9 */
  if (C.zf) goto L_11b152a9;
  /* 11b15292 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15295 je 0x11b152a3 */
  if (C.zf) goto L_11b152a3;
  /* 11b15297 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b15298 je 0x11b1529d */
  if (C.zf) goto L_11b1529d;
  /* 11b1529a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b1529c ret  */
  ESPCHK(0x11b15282u, _esp0);
  ESP += 4; return;
L_11b1529d:;
  /* 11b1529d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11b152a2 ret  */
  ESPCHK(0x11b15282u, _esp0);
  ESP += 4; return;
L_11b152a3:;
  /* 11b152a3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11b152a8 ret  */
  ESPCHK(0x11b15282u, _esp0);
  ESP += 4; return;
L_11b152a9:;
  /* 11b152a9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11b152ae ret  */
  ESPCHK(0x11b15282u, _esp0);
  ESP += 4; return;
L_11b152af:;
  /* 11b152af mov eax, 0x411 */
  EAX = (0x411u);
  /* 11b152b4 ret  */
  ESPCHK(0x11b15282u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b5 @ 0x11b152b5 (41 bytes, 17 insns) */
void f_11b152b5(void) {
  FTRACE(0x11b152b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b152b5 push edi */
  push32((uint32_t)(EDI));
  /* 11b152b6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b152b8 pop ecx */
  ECX = (pop32());
  /* 11b152b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b152bb mov edi, 0x11b1ef60 */
  EDI = (0x11b1ef60u);
  /* 11b152c0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b152c2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b152c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b152c5 mov edi, 0x11b1ee50 */
  EDI = (0x11b1ee50u);
  /* 11b152ca mov dword ptr [0x11b1ee48], eax */
  w32((uint32_t)(0x11b1ee48), (EAX));
  /* 11b152cf mov dword ptr [0x11b1ee5c], eax */
  w32((uint32_t)(0x11b1ee5c), (EAX));
  /* 11b152d4 mov dword ptr [0x11b1f064], eax */
  w32((uint32_t)(0x11b1f064), (EAX));
  /* 11b152d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b152da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b152db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b152dc pop edi */
  EDI = (pop32());
  /* 11b152dd ret  */
  ESPCHK(0x11b152b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100052de @ 0x11b152de (389 bytes, 124 insns) */
void f_11b152de(void) {
  FTRACE(0x11b152deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b152de push ebp */
  push32((uint32_t)(EBP));
  /* 11b152df mov ebp, esp */
  EBP = (ESP);
  /* 11b152e1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b152e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b152ea push esi */
  push32((uint32_t)(ESI));
  /* 11b152eb push eax */
  push32((uint32_t)(EAX));
  /* 11b152ec push dword ptr [0x11b1ee48] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee48))));
  /* 11b152f2 call dword ptr [0x11b19048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19048))), 0x11b152f8u);
  /* 11b152f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b152fb jne 0x11b15417 */
  if (!C.zf) goto L_11b15417;
  /* 11b15301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15303 mov esi, 0x100 */
  ESI = (0x100u);
L_11b15308:;
  /* 11b15308 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11b1530f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b15310 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15312 jb 0x11b15308 */
  if (C.cf) goto L_11b15308;
  /* 11b15314 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11b15317 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11b1531e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15320 je 0x11b15359 */
  if (C.zf) goto L_11b15359;
  /* 11b15322 push ebx */
  push32((uint32_t)(EBX));
  /* 11b15323 push edi */
  push32((uint32_t)(EDI));
  /* 11b15324 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11b15327:;
  /* 11b15327 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11b1532a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11b1532d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1532f ja 0x11b1534e */
  if ((!C.cf&&!C.zf)) goto L_11b1534e;
  /* 11b15331 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15333 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11b1533a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b1533b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11b15340 mov ebx, ecx */
  EBX = (ECX);
  /* 11b15342 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b15345 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b15347 mov ecx, ebx */
  ECX = (EBX);
  /* 11b15349 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b1534c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11b1534e:;
  /* 11b1534e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b1534f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b15350 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11b15353 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15355 jne 0x11b15327 */
  if (!C.zf) goto L_11b15327;
  /* 11b15357 pop edi */
  EDI = (pop32());
  /* 11b15358 pop ebx */
  EBX = (pop32());
L_11b15359:;
  /* 11b15359 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1535b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11b15361 push dword ptr [0x11b1f064] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f064))));
  /* 11b15367 push dword ptr [0x11b1ee48] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee48))));
  /* 11b1536d push eax */
  push32((uint32_t)(EAX));
  /* 11b1536e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b15374 push esi */
  push32((uint32_t)(ESI));
  /* 11b15375 push eax */
  push32((uint32_t)(EAX));
  /* 11b15376 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b15378 call 0x11b17570 */
  push32(0x11b1537du); f_11b17570();
  /* 11b1537d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1537f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11b15385 push dword ptr [0x11b1ee48] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee48))));
  /* 11b1538b push esi */
  push32((uint32_t)(ESI));
  /* 11b1538c push eax */
  push32((uint32_t)(EAX));
  /* 11b1538d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b15393 push esi */
  push32((uint32_t)(ESI));
  /* 11b15394 push eax */
  push32((uint32_t)(EAX));
  /* 11b15395 push esi */
  push32((uint32_t)(ESI));
  /* 11b15396 push dword ptr [0x11b1f064] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f064))));
  /* 11b1539c call 0x11b17321 */
  push32(0x11b153a1u); f_11b17321();
  /* 11b153a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b153a3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11b153a9 push dword ptr [0x11b1ee48] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee48))));
  /* 11b153af push esi */
  push32((uint32_t)(ESI));
  /* 11b153b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b153b1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b153b7 push esi */
  push32((uint32_t)(ESI));
  /* 11b153b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b153b9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11b153be push dword ptr [0x11b1f064] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f064))));
  /* 11b153c4 call 0x11b17321 */
  push32(0x11b153c9u); f_11b17321();
  /* 11b153c9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b153cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b153ce lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11b153d4:;
  /* 11b153d4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b153d7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11b153da je 0x11b153f2 */
  if (C.zf) goto L_11b153f2;
  /* 11b153dc or byte ptr [eax + 0x11b1ef61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(0x10u); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b153e3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11b153ea:;
  /* 11b153ea mov byte ptr [eax + 0x11b1ee60], dl */
  w8((uint32_t)(EAX + 0x11b1ee60), (DL));
  /* 11b153f0 jmp 0x11b1540e */
  goto L_11b1540e;
L_11b153f2:;
  /* 11b153f2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11b153f5 je 0x11b15407 */
  if (C.zf) goto L_11b15407;
  /* 11b153f7 or byte ptr [eax + 0x11b1ef61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(0x20u); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b153fe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11b15405 jmp 0x11b153ea */
  goto L_11b153ea;
L_11b15407:;
  /* 11b15407 and byte ptr [eax + 0x11b1ee60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ee60)))&(0x0u); w8((uint32_t)(EAX + 0x11b1ee60), (_r)); fl_logic(_r,8); }
L_11b1540e:;
  /* 11b1540e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1540f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b15410 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b15411 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15413 jb 0x11b153d4 */
  if (C.cf) goto L_11b153d4;
  /* 11b15415 jmp 0x11b15460 */
  goto L_11b15460;
L_11b15417:;
  /* 11b15417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15419 mov esi, 0x100 */
  ESI = (0x100u);
L_11b1541e:;
  /* 11b1541e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15421 jb 0x11b1543c */
  if (C.cf) goto L_11b1543c;
  /* 11b15423 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15426 ja 0x11b1543c */
  if ((!C.cf&&!C.zf)) goto L_11b1543c;
  /* 11b15428 or byte ptr [eax + 0x11b1ef61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(0x10u); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b1542f mov cl, al */
  CL = (AL);
  /* 11b15431 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11b15434:;
  /* 11b15434 mov byte ptr [eax + 0x11b1ee60], cl */
  w8((uint32_t)(EAX + 0x11b1ee60), (CL));
  /* 11b1543a jmp 0x11b1545b */
  goto L_11b1545b;
L_11b1543c:;
  /* 11b1543c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1543f jb 0x11b15454 */
  if (C.cf) goto L_11b15454;
  /* 11b15441 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15444 ja 0x11b15454 */
  if ((!C.cf&&!C.zf)) goto L_11b15454;
  /* 11b15446 or byte ptr [eax + 0x11b1ef61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ef61)))|(0x20u); w8((uint32_t)(EAX + 0x11b1ef61), (_r)); fl_logic(_r,8); }
  /* 11b1544d mov cl, al */
  CL = (AL);
  /* 11b1544f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b15452 jmp 0x11b15434 */
  goto L_11b15434;
L_11b15454:;
  /* 11b15454 and byte ptr [eax + 0x11b1ee60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b1ee60)))&(0x0u); w8((uint32_t)(EAX + 0x11b1ee60), (_r)); fl_logic(_r,8); }
L_11b1545b:;
  /* 11b1545b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1545c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1545e jb 0x11b1541e */
  if (C.cf) goto L_11b1541e;
L_11b15460:;
  /* 11b15460 pop esi */
  ESI = (pop32());
  /* 11b15461 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15462 ret  */
  ESPCHK(0x11b152deu, _esp0);
  ESP += 4; return;
}

/* FUN_10005463 @ 0x11b15463 (28 bytes, 7 insns) */
void f_11b15463(void) {
  FTRACE(0x11b15463u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15463 cmp dword ptr [0x11b1f188], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1f188))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1546a jne 0x11b1547e */
  if (!C.zf) goto L_11b1547e;
  /* 11b1546c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11b1546e call 0x11b1508b */
  push32(0x11b15473u); f_11b1508b();
  /* 11b15473 pop ecx */
  ECX = (pop32());
  /* 11b15474 mov dword ptr [0x11b1f188], 1 */
  w32((uint32_t)(0x11b1f188), (0x1u));
L_11b1547e:;
  /* 11b1547e ret  */
  ESPCHK(0x11b15463u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x11b15480 (664 bytes, 266 insns) [15 switch table(s)] */
void f_11b15480(void) {
  FTRACE(0x11b15480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15480 push ebp */
  push32((uint32_t)(EBP));
  /* 11b15481 mov ebp, esp */
  EBP = (ESP);
  /* 11b15483 push edi */
  push32((uint32_t)(EDI));
  /* 11b15484 push esi */
  push32((uint32_t)(ESI));
  /* 11b15485 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15488 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b1548b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1548e mov eax, ecx */
  EAX = (ECX);
  /* 11b15490 mov edx, ecx */
  EDX = (ECX);
  /* 11b15492 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15494 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15496 jbe 0x11b154a0 */
  if ((C.cf||C.zf)) goto L_11b154a0;
  /* 11b15498 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1549a jb 0x11b15618 */
  if (C.cf) goto L_11b15618;
L_11b154a0:;
  /* 11b154a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b154a6 jne 0x11b154bc */
  if (!C.zf) goto L_11b154bc;
  /* 11b154a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b154ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b154ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b154b1 jb 0x11b154dc */
  if (C.cf) goto L_11b154dc;
  /* 11b154b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b154b5 jmp dword ptr [edx*4 + 0x11b155c8] */
  switch (EDX) {
    case 0: goto L_11b155d8;
    case 1: goto L_11b155e0;
    case 2: goto L_11b155ec;
    case 3: goto L_11b15600;
    default: x86_unimpl("switch@0x11b154b5 out of table"); return;
  }
L_11b154bc:;
  /* 11b154bc mov eax, edi */
  EAX = (EDI);
  /* 11b154be mov edx, 3 */
  EDX = (0x3u);
  /* 11b154c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b154c6 jb 0x11b154d4 */
  if (C.cf) goto L_11b154d4;
  /* 11b154c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b154cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b154cd jmp dword ptr [eax*4 + 0x11b154e0] */
  switch (EAX) {
    case 1: goto L_11b154f0;
    case 2: goto L_11b1551c;
    case 3: goto L_11b15540;
    default: x86_unimpl("switch@0x11b154cd out of table"); return;
  }
L_11b154d4:;
  /* 11b154d4 jmp dword ptr [ecx*4 + 0x11b155d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b155d8)))); return;
  /* 11b154db nop  */
  /* nop */
L_11b154dc:;
  /* 11b154dc jmp dword ptr [ecx*4 + 0x11b1555c] */
  switch (ECX) {
    case 0: goto L_11b155bf;
    case 1: goto L_11b155ac;
    case 2: goto L_11b155a4;
    case 3: goto L_11b1559c;
    case 4: goto L_11b15594;
    case 5: goto L_11b1558c;
    case 6: goto L_11b15584;
    case 7: goto L_11b1557c;
    default: x86_unimpl("switch@0x11b154dc out of table"); return;
  }
  /* 11b154e3 nop  */
  /* nop */
L_11b154f0:;
  /* 11b154f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b154f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b154f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b154f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b154f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b154fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b154ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b15502 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b15505 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15508 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1550b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1550e jb 0x11b154dc */
  if (C.cf) goto L_11b154dc;
  /* 11b15510 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b15512 jmp dword ptr [edx*4 + 0x11b155c8] */
  switch (EDX) {
    case 0: goto L_11b155d8;
    case 1: goto L_11b155e0;
    case 2: goto L_11b155ec;
    case 3: goto L_11b15600;
    default: x86_unimpl("switch@0x11b15512 out of table"); return;
  }
  /* 11b15519 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b1551c:;
  /* 11b1551c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b1551e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15520 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b15522 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b15525 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b15528 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b1552b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1552e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15531 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15534 jb 0x11b154dc */
  if (C.cf) goto L_11b154dc;
  /* 11b15536 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b15538 jmp dword ptr [edx*4 + 0x11b155c8] */
  switch (EDX) {
    case 0: goto L_11b155d8;
    case 1: goto L_11b155e0;
    case 2: goto L_11b155ec;
    case 3: goto L_11b15600;
    default: x86_unimpl("switch@0x11b15538 out of table"); return;
  }
  /* 11b1553f nop  */
  /* nop */
L_11b15540:;
  /* 11b15540 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b15542 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15544 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b15546 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b15547 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b1554a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b1554b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1554e jb 0x11b154dc */
  if (C.cf) goto L_11b154dc;
  /* 11b15550 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b15552 jmp dword ptr [edx*4 + 0x11b155c8] */
  switch (EDX) {
    case 0: goto L_11b155d8;
    case 1: goto L_11b155e0;
    case 2: goto L_11b155ec;
    case 3: goto L_11b15600;
    default: x86_unimpl("switch@0x11b15552 out of table"); return;
  }
  /* 11b15559 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b1557c:;
  /* 11b1557c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b15580 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b15584:;
  /* 11b15584 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b15588 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b1558c:;
  /* 11b1558c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b15590 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b15594:;
  /* 11b15594 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b15598 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b1559c:;
  /* 11b1559c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b155a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b155a4:;
  /* 11b155a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b155a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b155ac:;
  /* 11b155ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b155b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b155b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b155bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b155bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b155bf:;
  /* 11b155bf jmp dword ptr [edx*4 + 0x11b155c8] */
  switch (EDX) {
    case 0: goto L_11b155d8;
    case 1: goto L_11b155e0;
    case 2: goto L_11b155ec;
    case 3: goto L_11b15600;
    default: x86_unimpl("switch@0x11b155bf out of table"); return;
  }
  /* 11b155c6 mov edi, edi */
  EDI = (EDI);
L_11b155d8:;
  /* 11b155d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b155db pop esi */
  ESI = (pop32());
  /* 11b155dc pop edi */
  EDI = (pop32());
  /* 11b155dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b155de ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b155df nop  */
  /* nop */
L_11b155e0:;
  /* 11b155e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b155e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b155e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b155e7 pop esi */
  ESI = (pop32());
  /* 11b155e8 pop edi */
  EDI = (pop32());
  /* 11b155e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b155ea ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b155eb nop  */
  /* nop */
L_11b155ec:;
  /* 11b155ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b155ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b155f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b155f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b155f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b155f9 pop esi */
  ESI = (pop32());
  /* 11b155fa pop edi */
  EDI = (pop32());
  /* 11b155fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b155fc ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b155fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b15600:;
  /* 11b15600 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15602 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b15604 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b15607 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b1560a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b1560d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b15610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15613 pop esi */
  ESI = (pop32());
  /* 11b15614 pop edi */
  EDI = (pop32());
  /* 11b15615 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15616 ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b15617 nop  */
  /* nop */
L_11b15618:;
  /* 11b15618 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b1561c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b15620 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b15626 jne 0x11b1564c */
  if (!C.zf) goto L_11b1564c;
  /* 11b15628 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b1562b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b1562e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15631 jb 0x11b15640 */
  if (C.cf) goto L_11b15640;
  /* 11b15633 std  */
  C.df=1;
  /* 11b15634 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b15636 cld  */
  C.df=0;
  /* 11b15637 jmp dword ptr [edx*4 + 0x11b15760] */
  switch (EDX) {
    case 0: goto L_11b15770;
    case 1: goto L_11b15778;
    case 2: goto L_11b15788;
    case 3: goto L_11b1579c;
    default: x86_unimpl("switch@0x11b15637 out of table"); return;
  }
  /* 11b1563e mov edi, edi */
  EDI = (EDI);
L_11b15640:;
  /* 11b15640 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b15642 jmp dword ptr [ecx*4 + 0x11b15710] */
  switch (ECX) {
    case 0: goto L_11b15757;
    default: x86_unimpl("switch@0x11b15642 out of table"); return;
  }
  /* 11b15649 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b1564c:;
  /* 11b1564c mov eax, edi */
  EAX = (EDI);
  /* 11b1564e mov edx, 3 */
  EDX = (0x3u);
  /* 11b15653 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15656 jb 0x11b15664 */
  if (C.cf) goto L_11b15664;
  /* 11b15658 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b1565b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1565d jmp dword ptr [eax*4 + 0x11b15668] */
  switch (EAX) {
    case 1: goto L_11b15678;
    case 2: goto L_11b15698;
    case 3: goto L_11b156c0;
    default: x86_unimpl("switch@0x11b1565d out of table"); return;
  }
L_11b15664:;
  /* 11b15664 jmp dword ptr [ecx*4 + 0x11b15760] */
  switch (ECX) {
    case 0: goto L_11b15770;
    case 1: goto L_11b15778;
    case 2: goto L_11b15788;
    case 3: goto L_11b1579c;
    default: x86_unimpl("switch@0x11b15664 out of table"); return;
  }
  /* 11b1566b nop  */
  /* nop */
L_11b15678:;
  /* 11b15678 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b1567b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b1567d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b15680 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b15681 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b15684 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b15685 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15688 jb 0x11b15640 */
  if (C.cf) goto L_11b15640;
  /* 11b1568a std  */
  C.df=1;
  /* 11b1568b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b1568d cld  */
  C.df=0;
  /* 11b1568e jmp dword ptr [edx*4 + 0x11b15760] */
  switch (EDX) {
    case 0: goto L_11b15770;
    case 1: goto L_11b15778;
    case 2: goto L_11b15788;
    case 3: goto L_11b1579c;
    default: x86_unimpl("switch@0x11b1568e out of table"); return;
  }
  /* 11b15695 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b15698:;
  /* 11b15698 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b1569b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b1569d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b156a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b156a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b156a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b156a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b156ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b156af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b156b2 jb 0x11b15640 */
  if (C.cf) goto L_11b15640;
  /* 11b156b4 std  */
  C.df=1;
  /* 11b156b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b156b7 cld  */
  C.df=0;
  /* 11b156b8 jmp dword ptr [edx*4 + 0x11b15760] */
  switch (EDX) {
    case 0: goto L_11b15770;
    case 1: goto L_11b15778;
    case 2: goto L_11b15788;
    case 3: goto L_11b1579c;
    default: x86_unimpl("switch@0x11b156b8 out of table"); return;
  }
  /* 11b156bf nop  */
  /* nop */
L_11b156c0:;
  /* 11b156c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b156c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b156c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b156c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b156cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b156ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b156d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b156d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b156d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b156da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b156dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b156e0 jb 0x11b15640 */
  if (C.cf) goto L_11b15640;
  /* 11b156e6 std  */
  C.df=1;
  /* 11b156e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b156e9 cld  */
  C.df=0;
  /* 11b156ea jmp dword ptr [edx*4 + 0x11b15760] */
  switch (EDX) {
    case 0: goto L_11b15770;
    case 1: goto L_11b15778;
    case 2: goto L_11b15788;
    case 3: goto L_11b1579c;
    default: x86_unimpl("switch@0x11b156ea out of table"); return;
  }
  /* 11b156f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b156f4 adc al, 0x57 */
  { uint32_t _a=(AL),_b=(0x57u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b156f6 mov cl, 0x11 */
  CL = (0x11u);
  /* 11b156f8 sbb al, 0x57 */
  { uint32_t _a=(AL),_b=(0x57u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b156fa mov cl, 0x11 */
  CL = (0x11u);
  /* 11b156fc and al, 0x57 */
  { uint32_t _r=(AL)&(0x57u); AL = (_r); fl_logic(_r,8); }
  /* 11b156fe mov cl, 0x11 */
  CL = (0x11u);
  /* 11b15700 sub al, 0x57 */
  { uint32_t _a=(AL),_b=(0x57u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b15702 mov cl, 0x11 */
  CL = (0x11u);
  /* 11b15704 xor al, 0x57 */
  { uint32_t _r=(AL)^(0x57u); AL = (_r); fl_logic(_r,8); }
  /* 11b15706 mov cl, 0x11 */
  CL = (0x11u);
  /* 11b15708 cmp al, 0x57 */
  { uint32_t _a=(AL),_b=(0x57u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1570a mov cl, 0x11 */
  CL = (0x11u);
  /* 11b1570c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11b1570d push edi */
  push32((uint32_t)(EDI));
  /* 11b1570e mov cl, 0x11 */
  CL = (0x11u);
  /* 11b15714 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b15718 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b1571c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b15720 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b15724 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b15728 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b1572c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b15730 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b15734 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b15738 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b1573c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b15740 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b15744 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b15748 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b1574c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b15753 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15755 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b15757:;
  /* 11b15757 jmp dword ptr [edx*4 + 0x11b15760] */
  switch (EDX) {
    case 0: goto L_11b15770;
    case 1: goto L_11b15778;
    case 2: goto L_11b15788;
    case 3: goto L_11b1579c;
    default: x86_unimpl("switch@0x11b15757 out of table"); return;
  }
  /* 11b1575e mov edi, edi */
  EDI = (EDI);
L_11b15770:;
  /* 11b15770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15773 pop esi */
  ESI = (pop32());
  /* 11b15774 pop edi */
  EDI = (pop32());
  /* 11b15775 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15776 ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b15777 nop  */
  /* nop */
L_11b15778:;
  /* 11b15778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b1577b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b1577e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15781 pop esi */
  ESI = (pop32());
  /* 11b15782 pop edi */
  EDI = (pop32());
  /* 11b15783 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15784 ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b15785 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b15788:;
  /* 11b15788 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b1578b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b1578e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b15791 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b15794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15797 pop esi */
  ESI = (pop32());
  /* 11b15798 pop edi */
  EDI = (pop32());
  /* 11b15799 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b1579a ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
  /* 11b1579b nop  */
  /* nop */
L_11b1579c:;
  /* 11b1579c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b1579f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b157a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b157a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b157a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b157ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b157ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b157b1 pop esi */
  ESI = (pop32());
  /* 11b157b2 pop edi */
  EDI = (pop32());
  /* 11b157b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b157b4 ret  */
  ESPCHK(0x11b15480u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b5 @ 0x11b157b5 (23 bytes, 7 insns) */
void f_11b157b5(void) {
  FTRACE(0x11b157b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b157b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b157b7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b157bb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b157bf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b157c3 call 0x11b157cc */
  push32(0x11b157c8u); f_11b157cc();
  /* 11b157c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b157cb ret  */
  ESPCHK(0x11b157b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100057cc @ 0x11b157cc (517 bytes, 195 insns) */
void f_11b157cc(void) {
  FTRACE(0x11b157ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b157cc push ebp */
  push32((uint32_t)(EBP));
  /* 11b157cd mov ebp, esp */
  EBP = (ESP);
  /* 11b157cf sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b157d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b157d3 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b157d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b157d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b157d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b157dc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11b157de lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11b157e1 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11b157e4:;
  /* 11b157e4 cmp dword ptr [0x11b1dd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b157eb jle 0x11b157fc */
  if ((C.zf||C.sf!=C.of)) goto L_11b157fc;
  /* 11b157ed movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b157f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b157f2 push eax */
  push32((uint32_t)(EAX));
  /* 11b157f3 call 0x11b177fd */
  push32(0x11b157f8u); f_11b177fd();
  /* 11b157f8 pop ecx */
  ECX = (pop32());
  /* 11b157f9 pop ecx */
  ECX = (pop32());
  /* 11b157fa jmp 0x11b1580b */
  goto L_11b1580b;
L_11b157fc:;
  /* 11b157fc mov ecx, dword ptr [0x11b1db28] */
  ECX = (r32((uint32_t)(0x11b1db28)));
  /* 11b15802 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11b15805 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b15808 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11b1580b:;
  /* 11b1580b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1580d je 0x11b15814 */
  if (C.zf) goto L_11b15814;
  /* 11b1580f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11b15811 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b15812 jmp 0x11b157e4 */
  goto L_11b157e4;
L_11b15814:;
  /* 11b15814 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15817 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11b1581a jne 0x11b15822 */
  if (!C.zf) goto L_11b15822;
  /* 11b1581c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11b15820 jmp 0x11b15827 */
  goto L_11b15827;
L_11b15822:;
  /* 11b15822 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15825 jne 0x11b1582d */
  if (!C.zf) goto L_11b1582d;
L_11b15827:;
  /* 11b15827 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11b15829 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b1582a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11b1582d:;
  /* 11b1582d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b15830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b15832 jl 0x11b159c1 */
  if ((C.sf!=C.of)) goto L_11b159c1;
  /* 11b15838 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1583b je 0x11b159c1 */
  if (C.zf) goto L_11b159c1;
  /* 11b15841 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15844 jg 0x11b159c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b159c1;
  /* 11b1584a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b1584c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1584e pop ecx */
  ECX = (pop32());
  /* 11b1584f jne 0x11b15875 */
  if (!C.zf) goto L_11b15875;
  /* 11b15851 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15854 je 0x11b1585f */
  if (C.zf) goto L_11b1585f;
  /* 11b15856 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11b1585d jmp 0x11b15891 */
  goto L_11b15891;
L_11b1585f:;
  /* 11b1585f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15861 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15863 je 0x11b15872 */
  if (C.zf) goto L_11b15872;
  /* 11b15865 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15867 je 0x11b15872 */
  if (C.zf) goto L_11b15872;
  /* 11b15869 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11b15870 jmp 0x11b15891 */
  goto L_11b15891;
L_11b15872:;
  /* 11b15872 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11b15875:;
  /* 11b15875 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15878 jne 0x11b15891 */
  if (!C.zf) goto L_11b15891;
  /* 11b1587a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1587d jne 0x11b15891 */
  if (!C.zf) goto L_11b15891;
  /* 11b1587f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15881 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15883 je 0x11b15889 */
  if (C.zf) goto L_11b15889;
  /* 11b15885 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15887 jne 0x11b15891 */
  if (!C.zf) goto L_11b15891;
L_11b15889:;
  /* 11b15889 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b1588c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b1588d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b1588e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11b15891:;
  /* 11b15891 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b15894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b15896 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b15899 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11b1589e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b158a1:;
  /* 11b158a1 cmp dword ptr [0x11b1dd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b158a8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11b158ab jle 0x11b158b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b158b9;
  /* 11b158ad push 4 */
  push32((uint32_t)(0x4u));
  /* 11b158af push esi */
  push32((uint32_t)(ESI));
  /* 11b158b0 call 0x11b177fd */
  push32(0x11b158b5u); f_11b177fd();
  /* 11b158b5 pop ecx */
  ECX = (pop32());
  /* 11b158b6 pop ecx */
  ECX = (pop32());
  /* 11b158b7 jmp 0x11b158c4 */
  goto L_11b158c4;
L_11b158b9:;
  /* 11b158b9 mov eax, dword ptr [0x11b1db28] */
  EAX = (r32((uint32_t)(0x11b1db28)));
  /* 11b158be mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11b158c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11b158c4:;
  /* 11b158c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b158c6 je 0x11b158d0 */
  if (C.zf) goto L_11b158d0;
  /* 11b158c8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b158cb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b158ce jmp 0x11b15902 */
  goto L_11b15902;
L_11b158d0:;
  /* 11b158d0 cmp dword ptr [0x11b1dd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b158d7 jle 0x11b158e4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b158e4;
  /* 11b158d9 push edi */
  push32((uint32_t)(EDI));
  /* 11b158da push esi */
  push32((uint32_t)(ESI));
  /* 11b158db call 0x11b177fd */
  push32(0x11b158e0u); f_11b177fd();
  /* 11b158e0 pop ecx */
  ECX = (pop32());
  /* 11b158e1 pop ecx */
  ECX = (pop32());
  /* 11b158e2 jmp 0x11b158ef */
  goto L_11b158ef;
L_11b158e4:;
  /* 11b158e4 mov eax, dword ptr [0x11b1db28] */
  EAX = (r32((uint32_t)(0x11b1db28)));
  /* 11b158e9 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11b158ed and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11b158ef:;
  /* 11b158ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b158f1 je 0x11b1593d */
  if (C.zf) goto L_11b1593d;
  /* 11b158f3 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11b158f6 push eax */
  push32((uint32_t)(EAX));
  /* 11b158f7 call 0x11b176c2 */
  push32(0x11b158fcu); f_11b176c2();
  /* 11b158fc pop ecx */
  ECX = (pop32());
  /* 11b158fd mov ecx, eax */
  ECX = (EAX);
  /* 11b158ff sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11b15902:;
  /* 11b15902 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15905 jae 0x11b1593d */
  if (!C.cf) goto L_11b1593d;
  /* 11b15907 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11b1590a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11b1590e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15911 jb 0x11b15927 */
  if (C.cf) goto L_11b15927;
  /* 11b15913 jne 0x11b15921 */
  if (!C.zf) goto L_11b15921;
  /* 11b15915 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b15918 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b1591a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b1591d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1591f jbe 0x11b15927 */
  if ((C.cf||C.zf)) goto L_11b15927;
L_11b15921:;
  /* 11b15921 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11b15925 jmp 0x11b15930 */
  goto L_11b15930;
L_11b15927:;
  /* 11b15927 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b1592b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1592d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11b15930:;
  /* 11b15930 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b15933 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b15936 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b15938 jmp 0x11b158a1 */
  goto L_11b158a1;
L_11b1593d:;
  /* 11b1593d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b15940 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11b15943 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15946 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11b15948 jne 0x11b1595a */
  if (!C.zf) goto L_11b1595a;
  /* 11b1594a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b1594c je 0x11b15954 */
  if (C.zf) goto L_11b15954;
  /* 11b1594e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b15954:;
  /* 11b15954 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b15958 jmp 0x11b159a5 */
  goto L_11b159a5;
L_11b1595a:;
  /* 11b1595a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11b1595c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11b15961 jne 0x11b1597e */
  if (!C.zf) goto L_11b1597e;
  /* 11b15963 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11b15965 jne 0x11b159a5 */
  if (!C.zf) goto L_11b159a5;
  /* 11b15967 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11b1596a je 0x11b15975 */
  if (C.zf) goto L_11b15975;
  /* 11b1596c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15973 ja 0x11b1597e */
  if ((!C.cf&&!C.zf)) goto L_11b1597e;
L_11b15975:;
  /* 11b15975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b15977 jne 0x11b159a5 */
  if (!C.zf) goto L_11b159a5;
  /* 11b15979 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1597c jbe 0x11b159a5 */
  if ((C.cf||C.zf)) goto L_11b159a5;
L_11b1597e:;
  /* 11b1597e call 0x11b176b9 */
  push32(0x11b15983u); f_11b176b9();
  /* 11b15983 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11b15987 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11b1598d je 0x11b15995 */
  if (C.zf) goto L_11b15995;
  /* 11b1598f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b15993 jmp 0x11b159a5 */
  goto L_11b159a5;
L_11b15995:;
  /* 11b15995 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b15998 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11b1599a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11b1599c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1599e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b159a0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b159a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b159a5:;
  /* 11b159a5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b159a7 je 0x11b159ae */
  if (C.zf) goto L_11b159ae;
  /* 11b159a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b159ac mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11b159ae:;
  /* 11b159ae test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11b159b2 je 0x11b159bc */
  if (C.zf) goto L_11b159bc;
  /* 11b159b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b159b7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b159b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b159bc:;
  /* 11b159bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b159bf jmp 0x11b159cc */
  goto L_11b159cc;
L_11b159c1:;
  /* 11b159c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b159c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b159c6 je 0x11b159ca */
  if (C.zf) goto L_11b159ca;
  /* 11b159c8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11b159ca:;
  /* 11b159ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b159cc:;
  /* 11b159cc pop edi */
  EDI = (pop32());
  /* 11b159cd pop esi */
  ESI = (pop32());
  /* 11b159ce pop ebx */
  EBX = (pop32());
  /* 11b159cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b159d0 ret  */
  ESPCHK(0x11b157ccu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11b159f0 (193 bytes, 90 insns) */
void f_11b159f0(void) {
  FTRACE(0x11b159f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b159f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b159f2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b159f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b159f7 mov ebx, eax */
  EBX = (EAX);
  /* 11b159f9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b159fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b15a00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b15a06 je 0x11b15a1b */
  if (C.zf) goto L_11b15a1b;
L_11b15a08:;
  /* 11b15a08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b15a0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b15a0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15a0d je 0x11b159e0 */
  if (C.zf) { jmp_ind(0x11b159e0u); return; }
  /* 11b15a0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11b15a11 je 0x11b15a64 */
  if (C.zf) goto L_11b15a64;
  /* 11b15a13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b15a19 jne 0x11b15a08 */
  if (!C.zf) goto L_11b15a08;
L_11b15a1b:;
  /* 11b15a1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11b15a1d push edi */
  push32((uint32_t)(EDI));
  /* 11b15a1e mov eax, ebx */
  EAX = (EBX);
  /* 11b15a20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11b15a23 push esi */
  push32((uint32_t)(ESI));
  /* 11b15a24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11b15a26:;
  /* 11b15a26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b15a28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11b15a2d mov eax, ecx */
  EAX = (ECX);
  /* 11b15a2f mov esi, edi */
  ESI = (EDI);
  /* 11b15a31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11b15a33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15a35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15a37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b15a3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b15a3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b15a3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11b15a41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15a44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11b15a4a jne 0x11b15a68 */
  if (!C.zf) goto L_11b15a68;
  /* 11b15a4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11b15a51 je 0x11b15a26 */
  if (C.zf) goto L_11b15a26;
  /* 11b15a53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11b15a58 jne 0x11b15a62 */
  if (!C.zf) goto L_11b15a62;
  /* 11b15a5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11b15a60 jne 0x11b15a26 */
  if (!C.zf) goto L_11b15a26;
L_11b15a62:;
  /* 11b15a62 pop esi */
  ESI = (pop32());
  /* 11b15a63 pop edi */
  EDI = (pop32());
L_11b15a64:;
  /* 11b15a64 pop ebx */
  EBX = (pop32());
  /* 11b15a65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15a67 ret  */
  ESPCHK(0x11b159f0u, _esp0);
  ESP += 4; return;
L_11b15a68:;
  /* 11b15a68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11b15a6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15a6d je 0x11b15aa5 */
  if (C.zf) goto L_11b15aa5;
  /* 11b15a6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15a71 je 0x11b15a62 */
  if (C.zf) goto L_11b15a62;
  /* 11b15a73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15a75 je 0x11b15a9e */
  if (C.zf) goto L_11b15a9e;
  /* 11b15a77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b15a79 je 0x11b15a62 */
  if (C.zf) goto L_11b15a62;
  /* 11b15a7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b15a7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15a80 je 0x11b15a97 */
  if (C.zf) goto L_11b15a97;
  /* 11b15a82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15a84 je 0x11b15a62 */
  if (C.zf) goto L_11b15a62;
  /* 11b15a86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15a88 je 0x11b15a90 */
  if (C.zf) goto L_11b15a90;
  /* 11b15a8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b15a8c je 0x11b15a62 */
  if (C.zf) goto L_11b15a62;
  /* 11b15a8e jmp 0x11b15a26 */
  goto L_11b15a26;
L_11b15a90:;
  /* 11b15a90 pop esi */
  ESI = (pop32());
  /* 11b15a91 pop edi */
  EDI = (pop32());
  /* 11b15a92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11b15a95 pop ebx */
  EBX = (pop32());
  /* 11b15a96 ret  */
  ESPCHK(0x11b159f0u, _esp0);
  ESP += 4; return;
L_11b15a97:;
  /* 11b15a97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11b15a9a pop esi */
  ESI = (pop32());
  /* 11b15a9b pop edi */
  EDI = (pop32());
  /* 11b15a9c pop ebx */
  EBX = (pop32());
  /* 11b15a9d ret  */
  ESPCHK(0x11b159f0u, _esp0);
  ESP += 4; return;
L_11b15a9e:;
  /* 11b15a9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11b15aa1 pop esi */
  ESI = (pop32());
  /* 11b15aa2 pop edi */
  EDI = (pop32());
  /* 11b15aa3 pop ebx */
  EBX = (pop32());
  /* 11b15aa4 ret  */
  ESPCHK(0x11b159f0u, _esp0);
  ESP += 4; return;
L_11b15aa5:;
  /* 11b15aa5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11b15aa8 pop esi */
  ESI = (pop32());
  /* 11b15aa9 pop edi */
  EDI = (pop32());
  /* 11b15aaa pop ebx */
  EBX = (pop32());
  /* 11b15aab ret  */
  ESPCHK(0x11b159f0u, _esp0);
  ESP += 4; return;
  /* 11b15aac int3  */
  x86_unimpl("int3 @ 0x11b15aac");
  /* 11b15aad int3  */
  x86_unimpl("int3 @ 0x11b15aad");
  /* 11b15aae int3  */
  x86_unimpl("int3 @ 0x11b15aae");
  /* 11b15aaf int3  */
  x86_unimpl("int3 @ 0x11b15aaf");
}

/* _strstr @ 0x11b15ab0 (128 bytes, 66 insns) */
void f_11b15ab0(void) {
  FTRACE(0x11b15ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15ab0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b15ab4 push edi */
  push32((uint32_t)(EDI));
  /* 11b15ab5 push ebx */
  push32((uint32_t)(EBX));
  /* 11b15ab6 push esi */
  push32((uint32_t)(ESI));
  /* 11b15ab7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b15ab9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b15abd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b15abf je 0x11b15b2a */
  if (C.zf) goto L_11b15b2a;
  /* 11b15ac1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11b15ac4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b15ac6 je 0x11b15b17 */
  if (C.zf) goto L_11b15b17;
L_11b15ac8:;
  /* 11b15ac8 mov esi, edi */
  ESI = (EDI);
  /* 11b15aca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b15ace mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11b15ad0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b15ad1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15ad3 je 0x11b15aea */
  if (C.zf) goto L_11b15aea;
  /* 11b15ad5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15ad7 je 0x11b15ae4 */
  if (C.zf) goto L_11b15ae4;
L_11b15ad9:;
  /* 11b15ad9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15adb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b15adc:;
  /* 11b15adc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15ade je 0x11b15aea */
  if (C.zf) goto L_11b15aea;
  /* 11b15ae0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15ae2 jne 0x11b15ad9 */
  if (!C.zf) goto L_11b15ad9;
L_11b15ae4:;
  /* 11b15ae4 pop esi */
  ESI = (pop32());
  /* 11b15ae5 pop ebx */
  EBX = (pop32());
  /* 11b15ae6 pop edi */
  EDI = (pop32());
  /* 11b15ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15ae9 ret  */
  ESPCHK(0x11b15ab0u, _esp0);
  ESP += 4; return;
L_11b15aea:;
  /* 11b15aea mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15aec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b15aed cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15aef jne 0x11b15adc */
  if (!C.zf) goto L_11b15adc;
  /* 11b15af1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11b15af4:;
  /* 11b15af4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11b15af7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b15af9 je 0x11b15b23 */
  if (C.zf) goto L_11b15b23;
  /* 11b15afb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b15afd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15b00 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15b02 jne 0x11b15ac8 */
  if (!C.zf) goto L_11b15ac8;
  /* 11b15b04 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11b15b07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b15b09 je 0x11b15b23 */
  if (C.zf) goto L_11b15b23;
  /* 11b15b0b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11b15b0e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15b11 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15b13 je 0x11b15af4 */
  if (C.zf) goto L_11b15af4;
  /* 11b15b15 jmp 0x11b15ac8 */
  goto L_11b15ac8;
L_11b15b17:;
  /* 11b15b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15b19 pop esi */
  ESI = (pop32());
  /* 11b15b1a pop ebx */
  EBX = (pop32());
  /* 11b15b1b pop edi */
  EDI = (pop32());
  /* 11b15b1c mov al, dl */
  AL = (DL);
  /* 11b15b1e jmp 0x11b159f6 */
  jmp_ind(0x11b159f6u); return;
L_11b15b23:;
  /* 11b15b23 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11b15b26 pop esi */
  ESI = (pop32());
  /* 11b15b27 pop ebx */
  EBX = (pop32());
  /* 11b15b28 pop edi */
  EDI = (pop32());
  /* 11b15b29 ret  */
  ESPCHK(0x11b15ab0u, _esp0);
  ESP += 4; return;
L_11b15b2a:;
  /* 11b15b2a mov eax, edi */
  EAX = (EDI);
  /* 11b15b2c pop esi */
  ESI = (pop32());
  /* 11b15b2d pop ebx */
  EBX = (pop32());
  /* 11b15b2e pop edi */
  EDI = (pop32());
  /* 11b15b2f ret  */
  ESPCHK(0x11b15ab0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11b15b30 (56 bytes, 31 insns) */
void f_11b15b30(void) {
  FTRACE(0x11b15b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b15b31 mov ebp, esp */
  EBP = (ESP);
  /* 11b15b33 push edi */
  push32((uint32_t)(EDI));
  /* 11b15b34 push esi */
  push32((uint32_t)(ESI));
  /* 11b15b35 push ebx */
  push32((uint32_t)(EBX));
  /* 11b15b36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b15b39 jecxz 0x11b15b61 */
  x86_unimpl("jecxz @ 0x11b15b39");
  /* 11b15b3b mov ebx, ecx */
  EBX = (ECX);
  /* 11b15b3d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15b40 mov esi, edi */
  ESI = (EDI);
  /* 11b15b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b15b44 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11b15b46 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b15b48 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15b4a mov edi, esi */
  EDI = (ESI);
  /* 11b15b4c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15b4f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11b15b51 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11b15b54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b15b56 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15b59 ja 0x11b15b5f */
  if ((!C.cf&&!C.zf)) goto L_11b15b5f;
  /* 11b15b5b je 0x11b15b61 */
  if (C.zf) goto L_11b15b61;
  /* 11b15b5d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b15b5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11b15b5f:;
  /* 11b15b5f not ecx */
  ECX = (~(ECX));
L_11b15b61:;
  /* 11b15b61 mov eax, ecx */
  EAX = (ECX);
  /* 11b15b63 pop ebx */
  EBX = (pop32());
  /* 11b15b64 pop esi */
  ESI = (pop32());
  /* 11b15b65 pop edi */
  EDI = (pop32());
  /* 11b15b66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15b67 ret  */
  ESPCHK(0x11b15b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b70 @ 0x11b15b70 (47 bytes, 17 insns) */
void f_11b15b70(void) {
  FTRACE(0x11b15b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15b70 push ecx */
  push32((uint32_t)(ECX));
  /* 11b15b71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15b76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11b15b7a jb 0x11b15b90 */
  if (C.cf) goto L_11b15b90;
L_11b15b7c:;
  /* 11b15b7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15b82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15b87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b15b89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15b8e jae 0x11b15b7c */
  if (!C.cf) goto L_11b15b7c;
L_11b15b90:;
  /* 11b15b90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15b92 mov eax, esp */
  EAX = (ESP);
  /* 11b15b94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b15b96 mov esp, ecx */
  ESP = (ECX);
  /* 11b15b98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b15b9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b15b9d push eax */
  push32((uint32_t)(EAX));
  /* 11b15b9e ret  */
  ESPCHK(0x11b15b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b9f @ 0x11b15b9f (72 bytes, 17 insns) */
void f_11b15b9f(void) {
  FTRACE(0x11b15b9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15b9f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11b15ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b15ba6 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b15bac call dword ptr [0x11b19058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19058))), 0x11b15bb2u);
  /* 11b15bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b15bb4 mov dword ptr [0x11b1ee40], eax */
  w32((uint32_t)(0x11b1ee40), (EAX));
  /* 11b15bb9 jne 0x11b15bbc */
  if (!C.zf) goto L_11b15bbc;
  /* 11b15bbb ret  */
  ESPCHK(0x11b15b9fu, _esp0);
  ESP += 4; return;
L_11b15bbc:;
  /* 11b15bbc mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b15bc0 and dword ptr [0x11b1ee38], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b1ee38)))&(0x0u); w32((uint32_t)(0x11b1ee38), (_r)); fl_logic(_r,32); }
  /* 11b15bc7 and dword ptr [0x11b1ee3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b1ee3c)))&(0x0u); w32((uint32_t)(0x11b1ee3c), (_r)); fl_logic(_r,32); }
  /* 11b15bce push 1 */
  push32((uint32_t)(0x1u));
  /* 11b15bd0 mov dword ptr [0x11b1ee34], eax */
  w32((uint32_t)(0x11b1ee34), (EAX));
  /* 11b15bd5 mov dword ptr [0x11b1ee44], ecx */
  w32((uint32_t)(0x11b1ee44), (ECX));
  /* 11b15bdb mov dword ptr [0x11b1ee2c], 0x10 */
  w32((uint32_t)(0x11b1ee2c), (0x10u));
  /* 11b15be5 pop eax */
  EAX = (pop32());
  /* 11b15be6 ret  */
  ESPCHK(0x11b15b9fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005be7 @ 0x11b15be7 (43 bytes, 14 insns) */
void f_11b15be7(void) {
  FTRACE(0x11b15be7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15be7 mov eax, dword ptr [0x11b1ee3c] */
  EAX = (r32((uint32_t)(0x11b1ee3c)));
  /* 11b15bec lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b15bef mov eax, dword ptr [0x11b1ee40] */
  EAX = (r32((uint32_t)(0x11b1ee40)));
  /* 11b15bf4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11b15bf7:;
  /* 11b15bf7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15bf9 jae 0x11b15c0f */
  if (!C.cf) goto L_11b15c0f;
  /* 11b15bfb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b15bff sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15c02 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15c08 jb 0x11b15c11 */
  if (C.cf) goto L_11b15c11;
  /* 11b15c0a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15c0d jmp 0x11b15bf7 */
  goto L_11b15bf7;
L_11b15c0f:;
  /* 11b15c0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b15c11:;
  /* 11b15c11 ret  */
  ESPCHK(0x11b15be7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c12 @ 0x11b15c12 (809 bytes, 265 insns) */
void f_11b15c12(void) {
  FTRACE(0x11b15c12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15c12 push ebp */
  push32((uint32_t)(EBP));
  /* 11b15c13 mov ebp, esp */
  EBP = (ESP);
  /* 11b15c15 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15c18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15c1b push ebx */
  push32((uint32_t)(EBX));
  /* 11b15c1c push esi */
  push32((uint32_t)(ESI));
  /* 11b15c1d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15c20 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b15c23 push edi */
  push32((uint32_t)(EDI));
  /* 11b15c24 mov edi, esi */
  EDI = (ESI);
  /* 11b15c26 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15c29 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15c2c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11b15c2f mov ecx, edi */
  ECX = (EDI);
  /* 11b15c31 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b15c37 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b15c3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b15c41 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b15c43 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b15c44 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11b15c47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b15c4a jne 0x11b15f36 */
  if (!C.zf) goto L_11b15f36;
  /* 11b15c50 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11b15c53 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11b15c56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b15c59 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11b15c5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b15c5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b15c62 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11b15c65 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11b15c68 jne 0x11b15ce8 */
  if (!C.zf) goto L_11b15ce8;
  /* 11b15c6a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b15c6d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b15c6e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15c71 jbe 0x11b15c76 */
  if ((C.cf||C.zf)) goto L_11b15c76;
  /* 11b15c73 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b15c75 pop edx */
  EDX = (pop32());
L_11b15c76:;
  /* 11b15c76 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b15c79 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15c7c jne 0x11b15cca */
  if (!C.zf) goto L_11b15cca;
  /* 11b15c7e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15c81 jae 0x11b15ca1 */
  if (!C.cf) goto L_11b15ca1;
  /* 11b15c83 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b15c88 mov ecx, edx */
  ECX = (EDX);
  /* 11b15c8a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b15c8c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11b15c90 not ebx */
  EBX = (~(EBX));
  /* 11b15c92 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b15c96 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b15c98 jne 0x11b15cc2 */
  if (!C.zf) goto L_11b15cc2;
  /* 11b15c9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15c9d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b15c9f jmp 0x11b15cc2 */
  goto L_11b15cc2;
L_11b15ca1:;
  /* 11b15ca1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11b15ca4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b15ca9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b15cab lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11b15caf not ebx */
  EBX = (~(EBX));
  /* 11b15cb1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b15cb8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b15cba jne 0x11b15cc2 */
  if (!C.zf) goto L_11b15cc2;
  /* 11b15cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15cbf and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b15cc2:;
  /* 11b15cc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b15cc5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15cc8 jmp 0x11b15ccd */
  goto L_11b15ccd;
L_11b15cca:;
  /* 11b15cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11b15ccd:;
  /* 11b15ccd mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11b15cd0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b15cd3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15cd6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11b15cd9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15cdc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b15cdf mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b15ce2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b15ce5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11b15ce8:;
  /* 11b15ce8 mov edx, ecx */
  EDX = (ECX);
  /* 11b15cea sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b15ced dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b15cee cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15cf1 jbe 0x11b15cf6 */
  if ((C.cf||C.zf)) goto L_11b15cf6;
  /* 11b15cf3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b15cf5 pop edx */
  EDX = (pop32());
L_11b15cf6:;
  /* 11b15cf6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b15cf9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11b15cfc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11b15cff jne 0x11b15d99 */
  if (!C.zf) goto L_11b15d99;
  /* 11b15d05 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15d08 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b15d0b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11b15d0e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b15d10 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11b15d13 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b15d14 pop esi */
  ESI = (pop32());
  /* 11b15d15 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15d17 jbe 0x11b15d1b */
  if ((C.cf||C.zf)) goto L_11b15d1b;
  /* 11b15d19 mov ebx, esi */
  EBX = (ESI);
L_11b15d1b:;
  /* 11b15d1b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15d1e mov edx, ecx */
  EDX = (ECX);
  /* 11b15d20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b15d23 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b15d26 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b15d27 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15d29 jbe 0x11b15d2d */
  if ((C.cf||C.zf)) goto L_11b15d2d;
  /* 11b15d2b mov edx, esi */
  EDX = (ESI);
L_11b15d2d:;
  /* 11b15d2d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15d2f je 0x11b15d94 */
  if (C.zf) goto L_11b15d94;
  /* 11b15d31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15d34 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11b15d37 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15d3a jne 0x11b15d7c */
  if (!C.zf) goto L_11b15d7c;
  /* 11b15d3c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15d3f jae 0x11b15d5d */
  if (!C.cf) goto L_11b15d5d;
  /* 11b15d41 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b15d46 mov ecx, ebx */
  ECX = (EBX);
  /* 11b15d48 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b15d4a not esi */
  ESI = (~(ESI));
  /* 11b15d4c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b15d50 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11b15d54 jne 0x11b15d7c */
  if (!C.zf) goto L_11b15d7c;
  /* 11b15d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15d59 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b15d5b jmp 0x11b15d7c */
  goto L_11b15d7c;
L_11b15d5d:;
  /* 11b15d5d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11b15d60 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b15d65 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b15d67 not esi */
  ESI = (~(ESI));
  /* 11b15d69 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b15d70 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11b15d74 jne 0x11b15d7c */
  if (!C.zf) goto L_11b15d7c;
  /* 11b15d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15d79 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b15d7c:;
  /* 11b15d7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15d7f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11b15d82 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b15d85 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11b15d88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15d8b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11b15d8e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b15d91 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11b15d94:;
  /* 11b15d94 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b15d97 jmp 0x11b15d9c */
  goto L_11b15d9c;
L_11b15d99:;
  /* 11b15d99 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b15d9c:;
  /* 11b15d9c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15da0 jne 0x11b15daa */
  if (!C.zf) goto L_11b15daa;
  /* 11b15da2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15da4 je 0x11b15e2b */
  if (C.zf) goto L_11b15e2b;
L_11b15daa:;
  /* 11b15daa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b15dad mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11b15db1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11b15db4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11b15db7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11b15dba mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b15dbd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b15dc0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11b15dc3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b15dc6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15dc9 jne 0x11b15e2b */
  if (!C.zf) goto L_11b15e2b;
  /* 11b15dcb mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11b15dcf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15dd2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11b15dd5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b15dd7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11b15ddb jae 0x11b15e02 */
  if (!C.cf) goto L_11b15e02;
  /* 11b15ddd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15de1 jne 0x11b15df1 */
  if (!C.zf) goto L_11b15df1;
  /* 11b15de3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b15de8 mov ecx, edx */
  ECX = (EDX);
  /* 11b15dea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b15dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15def or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11b15df1:;
  /* 11b15df1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b15df6 mov ecx, edx */
  ECX = (EDX);
  /* 11b15df8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b15dfa lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11b15dfe or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b15e00 jmp 0x11b15e2b */
  goto L_11b15e2b;
L_11b15e02:;
  /* 11b15e02 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15e06 jne 0x11b15e18 */
  if (!C.zf) goto L_11b15e18;
  /* 11b15e08 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11b15e0b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b15e10 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b15e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15e15 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b15e18:;
  /* 11b15e18 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11b15e1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b15e20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b15e22 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11b15e29 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11b15e2b:;
  /* 11b15e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b15e2e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b15e30 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11b15e34 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b15e37 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11b15e39 jne 0x11b15f36 */
  if (!C.zf) goto L_11b15f36;
  /* 11b15e3f mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b15e46 je 0x11b15f28 */
  if (C.zf) goto L_11b15f28;
  /* 11b15e4c mov ecx, dword ptr [0x11b1ee30] */
  ECX = (r32((uint32_t)(0x11b1ee30)));
  /* 11b15e52 mov esi, dword ptr [0x11b19064] */
  ESI = (r32((uint32_t)(0x11b19064)));
  /* 11b15e58 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11b15e5b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15e5e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11b15e63 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b15e68 push ebx */
  push32((uint32_t)(EBX));
  /* 11b15e69 push ecx */
  push32((uint32_t)(ECX));
  /* 11b15e6a call esi */
  call_ind((uint32_t)(ESI), 0x11b15e6cu);
  /* 11b15e6c mov ecx, dword ptr [0x11b1ee30] */
  ECX = (r32((uint32_t)(0x11b1ee30)));
  /* 11b15e72 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15e77 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b15e7c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b15e7e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b15e81 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15e86 mov ecx, dword ptr [0x11b1ee30] */
  ECX = (r32((uint32_t)(0x11b1ee30)));
  /* 11b15e8c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b15e8f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b15e97 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15e9c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b15e9f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11b15ea2 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15ea7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b15eaa cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b15eae jne 0x11b15eb9 */
  if (!C.zf) goto L_11b15eb9;
  /* 11b15eb0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b15eb4 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
L_11b15eb9:;
  /* 11b15eb9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15ebd jne 0x11b15f28 */
  if (!C.zf) goto L_11b15f28;
  /* 11b15ebf push ebx */
  push32((uint32_t)(EBX));
  /* 11b15ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b15ec2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11b15ec5 call esi */
  call_ind((uint32_t)(ESI), 0x11b15ec7u);
  /* 11b15ec7 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15ecc push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11b15ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b15ed1 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b15ed7 call dword ptr [0x11b19060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19060))), 0x11b15eddu);
  /* 11b15edd mov eax, dword ptr [0x11b1ee3c] */
  EAX = (r32((uint32_t)(0x11b1ee3c)));
  /* 11b15ee2 mov edx, dword ptr [0x11b1ee40] */
  EDX = (r32((uint32_t)(0x11b1ee40)));
  /* 11b15ee8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b15eeb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b15eee mov ecx, eax */
  ECX = (EAX);
  /* 11b15ef0 mov eax, dword ptr [0x11b1ee38] */
  EAX = (r32((uint32_t)(0x11b1ee38)));
  /* 11b15ef5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15ef7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11b15efb push ecx */
  push32((uint32_t)(ECX));
  /* 11b15efc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11b15eff push ecx */
  push32((uint32_t)(ECX));
  /* 11b15f00 push eax */
  push32((uint32_t)(EAX));
  /* 11b15f01 call 0x11b17880 */
  push32(0x11b15f06u); f_11b17880();
  /* 11b15f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15f09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15f0c dec dword ptr [0x11b1ee3c] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ee3c)))-1; w32((uint32_t)(0x11b1ee3c), (_r)); fl_dec(_r,32); }
  /* 11b15f12 cmp eax, dword ptr [0x11b1ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15f18 jbe 0x11b15f1e */
  if ((C.cf||C.zf)) goto L_11b15f1e;
  /* 11b15f1a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11b15f1e:;
  /* 11b15f1e mov eax, dword ptr [0x11b1ee40] */
  EAX = (r32((uint32_t)(0x11b1ee40)));
  /* 11b15f23 mov dword ptr [0x11b1ee34], eax */
  w32((uint32_t)(0x11b1ee34), (EAX));
L_11b15f28:;
  /* 11b15f28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15f2b mov dword ptr [0x11b1ee30], edi */
  w32((uint32_t)(0x11b1ee30), (EDI));
  /* 11b15f31 mov dword ptr [0x11b1ee38], eax */
  w32((uint32_t)(0x11b1ee38), (EAX));
L_11b15f36:;
  /* 11b15f36 pop edi */
  EDI = (pop32());
  /* 11b15f37 pop esi */
  ESI = (pop32());
  /* 11b15f38 pop ebx */
  EBX = (pop32());
  /* 11b15f39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b15f3a ret  */
  ESPCHK(0x11b15c12u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f3b @ 0x11b15f3b (777 bytes, 275 insns) */
void f_11b15f3b(void) {
  FTRACE(0x11b15f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b15f3b push ebp */
  push32((uint32_t)(EBP));
  /* 11b15f3c mov ebp, esp */
  EBP = (ESP);
  /* 11b15f3e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b15f41 mov eax, dword ptr [0x11b1ee3c] */
  EAX = (r32((uint32_t)(0x11b1ee3c)));
  /* 11b15f46 mov edx, dword ptr [0x11b1ee40] */
  EDX = (r32((uint32_t)(0x11b1ee40)));
  /* 11b15f4c push ebx */
  push32((uint32_t)(EBX));
  /* 11b15f4d push esi */
  push32((uint32_t)(ESI));
  /* 11b15f4e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b15f51 push edi */
  push32((uint32_t)(EDI));
  /* 11b15f52 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11b15f55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b15f58 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b15f5b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11b15f5e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b15f61 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b15f64 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b15f67 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b15f68 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15f6b jge 0x11b15f7b */
  if ((C.sf==C.of)) goto L_11b15f7b;
  /* 11b15f6d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b15f70 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b15f72 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b15f76 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11b15f79 jmp 0x11b15f8b */
  goto L_11b15f8b;
L_11b15f7b:;
  /* 11b15f7b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15f7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b15f81 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b15f83 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b15f85 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11b15f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b15f8b:;
  /* 11b15f8b mov eax, dword ptr [0x11b1ee34] */
  EAX = (r32((uint32_t)(0x11b1ee34)));
  /* 11b15f90 mov ebx, eax */
  EBX = (EAX);
  /* 11b15f92 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15f94 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b15f97 jae 0x11b15fb2 */
  if (!C.cf) goto L_11b15fb2;
L_11b15f99:;
  /* 11b15f99 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b15f9c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11b15f9e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b15fa1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b15fa3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b15fa5 jne 0x11b15fb2 */
  if (!C.zf) goto L_11b15fb2;
  /* 11b15fa7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15faa cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15fad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b15fb0 jb 0x11b15f99 */
  if (C.cf) goto L_11b15f99;
L_11b15fb2:;
  /* 11b15fb2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15fb5 jne 0x11b16030 */
  if (!C.zf) goto L_11b16030;
  /* 11b15fb7 mov ebx, edx */
  EBX = (EDX);
L_11b15fb9:;
  /* 11b15fb9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15fbb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b15fbe jae 0x11b15fd5 */
  if (!C.cf) goto L_11b15fd5;
  /* 11b15fc0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b15fc3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11b15fc5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b15fc8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b15fca or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b15fcc jne 0x11b15fd3 */
  if (!C.zf) goto L_11b15fd3;
  /* 11b15fce add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15fd1 jmp 0x11b15fb9 */
  goto L_11b15fb9;
L_11b15fd3:;
  /* 11b15fd3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b15fd5:;
  /* 11b15fd5 jne 0x11b16030 */
  if (!C.zf) goto L_11b16030;
L_11b15fd7:;
  /* 11b15fd7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15fda jae 0x11b15fed */
  if (!C.cf) goto L_11b15fed;
  /* 11b15fdc cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15fe0 jne 0x11b15fea */
  if (!C.zf) goto L_11b15fea;
  /* 11b15fe2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b15fe5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b15fe8 jmp 0x11b15fd7 */
  goto L_11b15fd7;
L_11b15fea:;
  /* 11b15fea cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b15fed:;
  /* 11b15fed jne 0x11b16015 */
  if (!C.zf) goto L_11b16015;
  /* 11b15fef mov ebx, edx */
  EBX = (EDX);
L_11b15ff1:;
  /* 11b15ff1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15ff3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b15ff6 jae 0x11b16005 */
  if (!C.cf) goto L_11b16005;
  /* 11b15ff8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b15ffc jne 0x11b16003 */
  if (!C.zf) goto L_11b16003;
  /* 11b15ffe add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16001 jmp 0x11b15ff1 */
  goto L_11b15ff1;
L_11b16003:;
  /* 11b16003 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b16005:;
  /* 11b16005 jne 0x11b16015 */
  if (!C.zf) goto L_11b16015;
  /* 11b16007 call 0x11b16244 */
  push32(0x11b1600cu); f_11b16244();
  /* 11b1600c mov ebx, eax */
  EBX = (EAX);
  /* 11b1600e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b16010 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b16013 je 0x11b16029 */
  if (C.zf) goto L_11b16029;
L_11b16015:;
  /* 11b16015 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16016 call 0x11b162f5 */
  push32(0x11b1601bu); f_11b162f5();
  /* 11b1601b pop ecx */
  ECX = (pop32());
  /* 11b1601c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b1601f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b16021 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b16024 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16027 jne 0x11b16030 */
  if (!C.zf) goto L_11b16030;
L_11b16029:;
  /* 11b16029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b1602b jmp 0x11b1623f */
  goto L_11b1623f;
L_11b16030:;
  /* 11b16030 mov dword ptr [0x11b1ee34], ebx */
  w32((uint32_t)(0x11b1ee34), (EBX));
  /* 11b16036 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b16039 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b1603b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1603e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b16041 je 0x11b16057 */
  if (C.zf) goto L_11b16057;
  /* 11b16043 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11b1604a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11b1604e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b16051 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b16053 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b16055 jne 0x11b1608e */
  if (!C.zf) goto L_11b1608e;
L_11b16057:;
  /* 11b16057 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11b1605d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11b16060 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b16063 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11b16066 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b1606a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11b1606d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11b1606f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b16072 jne 0x11b1608b */
  if (!C.zf) goto L_11b1608b;
L_11b16074:;
  /* 11b16074 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11b1607a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b1607d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b16080 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16083 mov edi, esi */
  EDI = (ESI);
  /* 11b16085 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11b16087 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11b16089 je 0x11b16074 */
  if (C.zf) goto L_11b16074;
L_11b1608b:;
  /* 11b1608b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11b1608e:;
  /* 11b1608e mov ecx, edx */
  ECX = (EDX);
  /* 11b16090 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b16092 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b16098 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b1609f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b160a2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11b160a6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11b160a8 jne 0x11b160b7 */
  if (!C.zf) goto L_11b160b7;
  /* 11b160aa mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11b160b1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b160b3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b160b6 pop edi */
  EDI = (pop32());
L_11b160b7:;
  /* 11b160b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b160b9 jl 0x11b160c0 */
  if ((C.sf!=C.of)) goto L_11b160c0;
  /* 11b160bb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b160bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b160be jmp 0x11b160b7 */
  goto L_11b160b7;
L_11b160c0:;
  /* 11b160c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b160c3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11b160c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b160c9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b160cc mov esi, ecx */
  ESI = (ECX);
  /* 11b160ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b160d1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b160d4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b160d5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b160d8 jle 0x11b160dd */
  if ((C.zf||C.sf!=C.of)) goto L_11b160dd;
  /* 11b160da push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b160dc pop esi */
  ESI = (pop32());
L_11b160dd:;
  /* 11b160dd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b160df je 0x11b161f2 */
  if (C.zf) goto L_11b161f2;
  /* 11b160e5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b160e8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b160eb jne 0x11b1614e */
  if (!C.zf) goto L_11b1614e;
  /* 11b160ed cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b160f0 jge 0x11b1611d */
  if ((C.sf==C.of)) goto L_11b1611d;
  /* 11b160f2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b160f7 mov ecx, edi */
  ECX = (EDI);
  /* 11b160f9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b160fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b160fe lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11b16102 not ebx */
  EBX = (~(EBX));
  /* 11b16104 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11b16107 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11b1610b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11b1610f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11b16111 jne 0x11b1614b */
  if (!C.zf) goto L_11b1614b;
  /* 11b16113 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16116 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b16119 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11b1611b jmp 0x11b1614e */
  goto L_11b1614e;
L_11b1611d:;
  /* 11b1611d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b16120 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b16125 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b16127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b1612a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11b1612e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11b16135 not ebx */
  EBX = (~(EBX));
  /* 11b16137 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b16139 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11b1613b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11b1613e jne 0x11b1614b */
  if (!C.zf) goto L_11b1614b;
  /* 11b16140 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16143 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b16146 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b16149 jmp 0x11b1614e */
  goto L_11b1614e;
L_11b1614b:;
  /* 11b1614b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b1614e:;
  /* 11b1614e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b16151 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11b16154 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16158 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11b1615b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b1615e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11b16161 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11b16164 je 0x11b161fe */
  if (C.zf) goto L_11b161fe;
  /* 11b1616a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b1616d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11b16171 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11b16174 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11b16177 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b1617a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b1617d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b16180 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b16183 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b16186 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16189 jne 0x11b161ef */
  if (!C.zf) goto L_11b161ef;
  /* 11b1618b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11b1618f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16192 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11b16195 jge 0x11b161c0 */
  if ((C.sf==C.of)) goto L_11b161c0;
  /* 11b16197 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b16199 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1619d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b161a1 jne 0x11b161ae */
  if (!C.zf) goto L_11b161ae;
  /* 11b161a3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b161a8 mov ecx, esi */
  ECX = (ESI);
  /* 11b161aa shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b161ac or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11b161ae:;
  /* 11b161ae mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b161b3 mov ecx, esi */
  ECX = (ESI);
  /* 11b161b5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b161b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b161ba or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b161be jmp 0x11b161ef */
  goto L_11b161ef;
L_11b161c0:;
  /* 11b161c0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b161c2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b161c6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b161ca jne 0x11b161d9 */
  if (!C.zf) goto L_11b161d9;
  /* 11b161cc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b161cf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b161d4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b161d6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11b161d9:;
  /* 11b161d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b161dc lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11b161e3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b161e6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b161eb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b161ed or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11b161ef:;
  /* 11b161ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11b161f2:;
  /* 11b161f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b161f4 je 0x11b16201 */
  if (C.zf) goto L_11b16201;
  /* 11b161f6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b161f8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11b161fc jmp 0x11b16201 */
  goto L_11b16201;
L_11b161fe:;
  /* 11b161fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11b16201:;
  /* 11b16201 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11b16204 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16206 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11b16209 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b1620b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11b1620f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b16212 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b16214 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b16216 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11b16219 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b1621b jne 0x11b16237 */
  if (!C.zf) goto L_11b16237;
  /* 11b1621d cmp ebx, dword ptr [0x11b1ee38] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b1ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16223 jne 0x11b16237 */
  if (!C.zf) goto L_11b16237;
  /* 11b16225 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16228 cmp ecx, dword ptr [0x11b1ee30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b1ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1622e jne 0x11b16237 */
  if (!C.zf) goto L_11b16237;
  /* 11b16230 and dword ptr [0x11b1ee38], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b1ee38)))&(0x0u); w32((uint32_t)(0x11b1ee38), (_r)); fl_logic(_r,32); }
L_11b16237:;
  /* 11b16237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b1623a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b1623c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11b1623f:;
  /* 11b1623f pop edi */
  EDI = (pop32());
  /* 11b16240 pop esi */
  ESI = (pop32());
  /* 11b16241 pop ebx */
  EBX = (pop32());
  /* 11b16242 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b16243 ret  */
  ESPCHK(0x11b15f3bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006244 @ 0x11b16244 (177 bytes, 53 insns) */
void f_11b16244(void) {
  FTRACE(0x11b16244u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16244 mov eax, dword ptr [0x11b1ee3c] */
  EAX = (r32((uint32_t)(0x11b1ee3c)));
  /* 11b16249 mov ecx, dword ptr [0x11b1ee2c] */
  ECX = (r32((uint32_t)(0x11b1ee2c)));
  /* 11b1624f push esi */
  push32((uint32_t)(ESI));
  /* 11b16250 push edi */
  push32((uint32_t)(EDI));
  /* 11b16251 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b16253 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16255 jne 0x11b16287 */
  if (!C.zf) goto L_11b16287;
  /* 11b16257 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11b1625b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b1625e push eax */
  push32((uint32_t)(EAX));
  /* 11b1625f push dword ptr [0x11b1ee40] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee40))));
  /* 11b16265 push edi */
  push32((uint32_t)(EDI));
  /* 11b16266 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1626c call dword ptr [0x11b1903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1903c))), 0x11b16272u);
  /* 11b16272 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16274 je 0x11b162d7 */
  if (C.zf) goto L_11b162d7;
  /* 11b16276 add dword ptr [0x11b1ee2c], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ee2c))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11b1ee2c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b1627d mov dword ptr [0x11b1ee40], eax */
  w32((uint32_t)(0x11b1ee40), (EAX));
  /* 11b16282 mov eax, dword ptr [0x11b1ee3c] */
  EAX = (r32((uint32_t)(0x11b1ee3c)));
L_11b16287:;
  /* 11b16287 mov ecx, dword ptr [0x11b1ee40] */
  ECX = (r32((uint32_t)(0x11b1ee40)));
  /* 11b1628d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11b16292 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b16294 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b16297 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1629d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11b162a0 call dword ptr [0x11b19058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19058))), 0x11b162a6u);
  /* 11b162a6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b162a8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11b162ab je 0x11b162d7 */
  if (C.zf) goto L_11b162d7;
  /* 11b162ad push 4 */
  push32((uint32_t)(0x4u));
  /* 11b162af push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11b162b4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b162b9 push edi */
  push32((uint32_t)(EDI));
  /* 11b162ba call dword ptr [0x11b19040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19040))), 0x11b162c0u);
  /* 11b162c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b162c2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11b162c5 jne 0x11b162db */
  if (!C.zf) goto L_11b162db;
  /* 11b162c7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11b162ca push edi */
  push32((uint32_t)(EDI));
  /* 11b162cb push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b162d1 call dword ptr [0x11b19060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19060))), 0x11b162d7u);
L_11b162d7:;
  /* 11b162d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b162d9 jmp 0x11b162f2 */
  goto L_11b162f2;
L_11b162db:;
  /* 11b162db or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b162df mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b162e1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11b162e4 inc dword ptr [0x11b1ee3c] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ee3c)))+1; w32((uint32_t)(0x11b1ee3c), (_r)); fl_inc(_r,32); }
  /* 11b162ea mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b162ed or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b162f0 mov eax, esi */
  EAX = (ESI);
L_11b162f2:;
  /* 11b162f2 pop edi */
  EDI = (pop32());
  /* 11b162f3 pop esi */
  ESI = (pop32());
  /* 11b162f4 ret  */
  ESPCHK(0x11b16244u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f5 @ 0x11b162f5 (251 bytes, 85 insns) */
void f_11b162f5(void) {
  FTRACE(0x11b162f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b162f5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b162f6 mov ebp, esp */
  EBP = (ESP);
  /* 11b162f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b162f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b162fc push ebx */
  push32((uint32_t)(EBX));
  /* 11b162fd push esi */
  push32((uint32_t)(ESI));
  /* 11b162fe push edi */
  push32((uint32_t)(EDI));
  /* 11b162ff mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11b16302 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b16305 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b16307:;
  /* 11b16307 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16309 jl 0x11b16310 */
  if ((C.sf!=C.of)) goto L_11b16310;
  /* 11b1630b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b1630d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b1630e jmp 0x11b16307 */
  goto L_11b16307;
L_11b16310:;
  /* 11b16310 mov eax, ebx */
  EAX = (EBX);
  /* 11b16312 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b16314 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b1631a pop edx */
  EDX = (pop32());
  /* 11b1631b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11b16322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b16325:;
  /* 11b16325 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11b16328 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11b1632b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1632e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b1632f jne 0x11b16325 */
  if (!C.zf) goto L_11b16325;
  /* 11b16331 mov edi, ebx */
  EDI = (EBX);
  /* 11b16333 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b16335 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11b16338 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1633b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b16340 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b16345 push edi */
  push32((uint32_t)(EDI));
  /* 11b16346 call dword ptr [0x11b19040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19040))), 0x11b1634cu);
  /* 11b1634c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1634e jne 0x11b16358 */
  if (!C.zf) goto L_11b16358;
  /* 11b16350 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b16353 jmp 0x11b163eb */
  goto L_11b163eb;
L_11b16358:;
  /* 11b16358 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11b1635e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16360 ja 0x11b1639e */
  if ((!C.cf&&!C.zf)) goto L_11b1639e;
  /* 11b16362 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11b16365:;
  /* 11b16365 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b16369 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11b16370 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11b16376 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11b1637d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b1637f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11b16385 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b16388 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11b16392 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16397 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11b1639a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1639c jbe 0x11b16365 */
  if ((C.cf||C.zf)) goto L_11b16365;
L_11b1639e:;
  /* 11b1639e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b163a1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11b163a4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b163a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b163ab pop edi */
  EDI = (pop32());
  /* 11b163ac mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b163af mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b163b2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11b163b5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b163b8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b163bb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b163c0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11b163c7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11b163ca mov cl, al */
  CL = (AL);
  /* 11b163cc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b163ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b163d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b163d3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11b163d6 jne 0x11b163db */
  if (!C.zf) goto L_11b163db;
  /* 11b163d8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11b163db:;
  /* 11b163db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b163e0 mov ecx, ebx */
  ECX = (EBX);
  /* 11b163e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b163e4 not edx */
  EDX = (~(EDX));
  /* 11b163e6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b163e9 mov eax, ebx */
  EAX = (EBX);
L_11b163eb:;
  /* 11b163eb pop edi */
  EDI = (pop32());
  /* 11b163ec pop esi */
  ESI = (pop32());
  /* 11b163ed pop ebx */
  EBX = (pop32());
  /* 11b163ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b163ef ret  */
  ESPCHK(0x11b162f5u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x11b163f0 (758 bytes, 259 insns) */
void f_11b163f0(void) {
  FTRACE(0x11b163f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b163f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b163f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b163f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b163f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b163f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b163fc push ebx */
  push32((uint32_t)(EBX));
  /* 11b163fd push esi */
  push32((uint32_t)(ESI));
  /* 11b163fe push edi */
  push32((uint32_t)(EDI));
  /* 11b163ff mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b16402 mov edx, edi */
  EDX = (EDI);
  /* 11b16404 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11b16407 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1640a mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b1640d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b16410 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11b16413 mov ecx, edx */
  ECX = (EDX);
  /* 11b16415 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b1641b lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b16422 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b16425 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11b16428 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16429 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1642b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b1642e mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11b16432 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b16436 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b16439 jle 0x11b1659e */
  if ((C.zf||C.sf!=C.of)) goto L_11b1659e;
  /* 11b1643f test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11b16442 jne 0x11b16597 */
  if (!C.zf) goto L_11b16597;
  /* 11b16448 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1644a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1644c jg 0x11b16597 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b16597;
  /* 11b16452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16455 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b16458 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16459 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1645c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b1645f jbe 0x11b16467 */
  if ((C.cf||C.zf)) goto L_11b16467;
  /* 11b16461 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b16463 pop ecx */
  ECX = (pop32());
  /* 11b16464 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b16467:;
  /* 11b16467 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b1646a cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1646d jne 0x11b164b7 */
  if (!C.zf) goto L_11b164b7;
  /* 11b1646f cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16472 jae 0x11b16493 */
  if (!C.cf) goto L_11b16493;
  /* 11b16474 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b16479 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b1647b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b1647e lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11b16482 not ebx */
  EBX = (~(EBX));
  /* 11b16484 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b16488 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b1648a jne 0x11b164b7 */
  if (!C.zf) goto L_11b164b7;
  /* 11b1648c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1648f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b16491 jmp 0x11b164b7 */
  goto L_11b164b7;
L_11b16493:;
  /* 11b16493 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16496 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b1649b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b1649d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b164a0 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11b164a4 not ebx */
  EBX = (~(EBX));
  /* 11b164a6 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b164ad dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b164af jne 0x11b164b7 */
  if (!C.zf) goto L_11b164b7;
  /* 11b164b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b164b4 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b164b7:;
  /* 11b164b7 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11b164ba mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b164bd mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11b164c0 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b164c3 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11b164c6 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11b164c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b164cc sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b164ce add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b164d1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b164d5 jle 0x11b16585 */
  if ((C.zf||C.sf!=C.of)) goto L_11b16585;
  /* 11b164db mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11b164de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b164e1 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11b164e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b164e5 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b164e9 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b164ec jbe 0x11b164f1 */
  if ((C.cf||C.zf)) goto L_11b164f1;
  /* 11b164ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b164f0 pop edi */
  EDI = (pop32());
L_11b164f1:;
  /* 11b164f1 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b164f4 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11b164f7 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11b164fa mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b164fd mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11b16500 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b16503 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11b16506 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11b16509 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b1650c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b1650f mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b16512 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16515 jne 0x11b16573 */
  if (!C.zf) goto L_11b16573;
  /* 11b16517 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11b1651b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1651e mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11b16521 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b16523 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11b16527 jae 0x11b1654a */
  if (!C.cf) goto L_11b1654a;
  /* 11b16529 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1652d jne 0x11b1653d */
  if (!C.zf) goto L_11b1653d;
  /* 11b1652f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b16534 mov ecx, edi */
  ECX = (EDI);
  /* 11b16536 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b16538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1653b or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11b1653d:;
  /* 11b1653d lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11b16541 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b16546 mov ecx, edi */
  ECX = (EDI);
  /* 11b16548 jmp 0x11b1656f */
  goto L_11b1656f;
L_11b1654a:;
  /* 11b1654a cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1654e jne 0x11b16560 */
  if (!C.zf) goto L_11b16560;
  /* 11b16550 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b16553 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b16558 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b1655a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1655d or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b16560:;
  /* 11b16560 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11b16567 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b1656a mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11b1656f:;
  /* 11b1656f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b16571 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11b16573:;
  /* 11b16573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b16576 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16579 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11b1657d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b1657f mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11b16583 jmp 0x11b16588 */
  goto L_11b16588;
L_11b16585:;
  /* 11b16585 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11b16588:;
  /* 11b16588 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11b1658b mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11b1658e mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11b16592 jmp 0x11b166de */
  goto L_11b166de;
L_11b16597:;
  /* 11b16597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16599 jmp 0x11b166e1 */
  goto L_11b166e1;
L_11b1659e:;
  /* 11b1659e jge 0x11b166de */
  if ((C.sf==C.of)) goto L_11b166de;
  /* 11b165a4 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b165a7 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b165aa lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11b165ad mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11b165b0 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11b165b4 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b165b7 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11b165ba sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b165bd dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b165be mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11b165c1 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b165c4 jbe 0x11b165c9 */
  if ((C.cf||C.zf)) goto L_11b165c9;
  /* 11b165c6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b165c8 pop esi */
  ESI = (pop32());
L_11b165c9:;
  /* 11b165c9 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11b165cd jne 0x11b16658 */
  if (!C.zf) goto L_11b16658;
  /* 11b165d3 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11b165d6 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b165d9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b165da cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b165dd jbe 0x11b165e2 */
  if ((C.cf||C.zf)) goto L_11b165e2;
  /* 11b165df push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b165e1 pop esi */
  ESI = (pop32());
L_11b165e2:;
  /* 11b165e2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b165e5 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b165e8 jne 0x11b16631 */
  if (!C.zf) goto L_11b16631;
  /* 11b165ea cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b165ed jae 0x11b1660d */
  if (!C.cf) goto L_11b1660d;
  /* 11b165ef mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b165f4 mov ecx, esi */
  ECX = (ESI);
  /* 11b165f6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b165f8 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11b165fc not ebx */
  EBX = (~(EBX));
  /* 11b165fe and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b16602 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11b16604 jne 0x11b1662e */
  if (!C.zf) goto L_11b1662e;
  /* 11b16606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16609 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b1660b jmp 0x11b1662e */
  goto L_11b1662e;
L_11b1660d:;
  /* 11b1660d lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b16610 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b16615 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b16617 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11b1661b not ebx */
  EBX = (~(EBX));
  /* 11b1661d and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b16624 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b16626 jne 0x11b1662e */
  if (!C.zf) goto L_11b1662e;
  /* 11b16628 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1662b and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b1662e:;
  /* 11b1662e mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11b16631:;
  /* 11b16631 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11b16634 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11b16637 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b1663a mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b1663d mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11b16640 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11b16643 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b16646 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16649 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11b1664c sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b1664f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b16650 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16653 jbe 0x11b16658 */
  if ((C.cf||C.zf)) goto L_11b16658;
  /* 11b16655 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b16657 pop esi */
  ESI = (pop32());
L_11b16658:;
  /* 11b16658 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b1665b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11b1665f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11b16662 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11b16665 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b16668 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11b1666b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b1666e mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11b16671 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b16674 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16677 jne 0x11b166d5 */
  if (!C.zf) goto L_11b166d5;
  /* 11b16679 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11b1667d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16680 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11b16683 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b16685 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b16689 jae 0x11b166ac */
  if (!C.cf) goto L_11b166ac;
  /* 11b1668b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1668f jne 0x11b1669f */
  if (!C.zf) goto L_11b1669f;
  /* 11b16691 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b16696 mov ecx, esi */
  ECX = (ESI);
  /* 11b16698 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b1669a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1669d or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11b1669f:;
  /* 11b1669f lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11b166a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b166a8 mov ecx, esi */
  ECX = (ESI);
  /* 11b166aa jmp 0x11b166d1 */
  goto L_11b166d1;
L_11b166ac:;
  /* 11b166ac cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b166b0 jne 0x11b166c2 */
  if (!C.zf) goto L_11b166c2;
  /* 11b166b2 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b166b5 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b166ba shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b166bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b166bf or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b166c2:;
  /* 11b166c2 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11b166c9 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b166cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11b166d1:;
  /* 11b166d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b166d3 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11b166d5:;
  /* 11b166d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b166d8 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11b166da mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11b166de:;
  /* 11b166de push 1 */
  push32((uint32_t)(0x1u));
  /* 11b166e0 pop eax */
  EAX = (pop32());
L_11b166e1:;
  /* 11b166e1 pop edi */
  EDI = (pop32());
  /* 11b166e2 pop esi */
  ESI = (pop32());
  /* 11b166e3 pop ebx */
  EBX = (pop32());
  /* 11b166e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b166e5 ret  */
  ESPCHK(0x11b163f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e6 @ 0x11b166e6 (324 bytes, 102 insns) */
void f_11b166e6(void) {
  FTRACE(0x11b166e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b166e6 cmp dword ptr [0x11b1b990], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1b990))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b166ed push ebx */
  push32((uint32_t)(EBX));
  /* 11b166ee push ebp */
  push32((uint32_t)(EBP));
  /* 11b166ef push esi */
  push32((uint32_t)(ESI));
  /* 11b166f0 push edi */
  push32((uint32_t)(EDI));
  /* 11b166f1 jne 0x11b166fa */
  if (!C.zf) goto L_11b166fa;
  /* 11b166f3 mov esi, 0x11b1b980 */
  ESI = (0x11b1b980u);
  /* 11b166f8 jmp 0x11b16717 */
  goto L_11b16717;
L_11b166fa:;
  /* 11b166fa push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11b166ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16701 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b16707 call dword ptr [0x11b19058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19058))), 0x11b1670du);
  /* 11b1670d mov esi, eax */
  ESI = (EAX);
  /* 11b1670f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b16711 je 0x11b16823 */
  if (C.zf) goto L_11b16823;
L_11b16717:;
  /* 11b16717 mov ebp, dword ptr [0x11b19040] */
  EBP = (r32((uint32_t)(0x11b19040)));
  /* 11b1671d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b1671f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11b16724 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11b16729 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1672b call ebp */
  call_ind((uint32_t)(EBP), 0x11b1672du);
  /* 11b1672d mov edi, eax */
  EDI = (EAX);
  /* 11b1672f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b16731 je 0x11b1680c */
  if (C.zf) goto L_11b1680c;
  /* 11b16737 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b16739 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11b1673e push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b16743 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16744 push edi */
  push32((uint32_t)(EDI));
  /* 11b16745 call ebp */
  call_ind((uint32_t)(EBP), 0x11b16747u);
  /* 11b16747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16749 je 0x11b167fe */
  if (C.zf) goto L_11b167fe;
  /* 11b1674f mov eax, 0x11b1b980 */
  EAX = (0x11b1b980u);
  /* 11b16754 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16756 jne 0x11b16776 */
  if (!C.zf) goto L_11b16776;
  /* 11b16758 cmp dword ptr [0x11b1b980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1b980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1675f jne 0x11b16766 */
  if (!C.zf) goto L_11b16766;
  /* 11b16761 mov dword ptr [0x11b1b980], eax */
  w32((uint32_t)(0x11b1b980), (EAX));
L_11b16766:;
  /* 11b16766 cmp dword ptr [0x11b1b984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1b984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1676d jne 0x11b1678b */
  if (!C.zf) goto L_11b1678b;
  /* 11b1676f mov dword ptr [0x11b1b984], eax */
  w32((uint32_t)(0x11b1b984), (EAX));
  /* 11b16774 jmp 0x11b1678b */
  goto L_11b1678b;
L_11b16776:;
  /* 11b16776 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b16778 mov eax, dword ptr [0x11b1b984] */
  EAX = (r32((uint32_t)(0x11b1b984)));
  /* 11b1677d mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11b16780 mov dword ptr [0x11b1b984], esi */
  w32((uint32_t)(0x11b1b984), (ESI));
  /* 11b16786 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b16789 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11b1678b:;
  /* 11b1678b lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11b16791 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11b16797 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11b1679a lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11b1679d mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11b167a0 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11b167a3 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11b167a6 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11b167a8 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11b167ad:;
  /* 11b167ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b167af cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b167b2 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11b167b5 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b167b6 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b167b8 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b167b9 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b167ba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b167bc mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b167bf add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b167c2 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b167c8 jl 0x11b167ad */
  if ((C.sf!=C.of)) goto L_11b167ad;
  /* 11b167ca push ebx */
  push32((uint32_t)(EBX));
  /* 11b167cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b167cd push edi */
  push32((uint32_t)(EDI));
  /* 11b167ce call 0x11b16f60 */
  push32(0x11b167d3u); f_11b16f60();
  /* 11b167d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b167d6:;
  /* 11b167d6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b167d9 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b167db cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b167dd jae 0x11b167fa */
  if (!C.cf) goto L_11b167fa;
  /* 11b167df or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11b167e6 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11b167e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b167eb mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11b167f2 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b167f8 jmp 0x11b167d6 */
  goto L_11b167d6;
L_11b167fa:;
  /* 11b167fa mov eax, esi */
  EAX = (ESI);
  /* 11b167fc jmp 0x11b16825 */
  goto L_11b16825;
L_11b167fe:;
  /* 11b167fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b16803 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16805 push edi */
  push32((uint32_t)(EDI));
  /* 11b16806 call dword ptr [0x11b19064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19064))), 0x11b1680cu);
L_11b1680c:;
  /* 11b1680c cmp esi, 0x11b1b980 */
  { uint32_t _a=(ESI),_b=(0x11b1b980u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16812 je 0x11b16823 */
  if (C.zf) goto L_11b16823;
  /* 11b16814 push esi */
  push32((uint32_t)(ESI));
  /* 11b16815 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16817 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1681d call dword ptr [0x11b19060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19060))), 0x11b16823u);
L_11b16823:;
  /* 11b16823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b16825:;
  /* 11b16825 pop edi */
  EDI = (pop32());
  /* 11b16826 pop esi */
  ESI = (pop32());
  /* 11b16827 pop ebp */
  EBP = (pop32());
  /* 11b16828 pop ebx */
  EBX = (pop32());
  /* 11b16829 ret  */
  ESPCHK(0x11b166e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000682a @ 0x11b1682a (86 bytes, 27 insns) */
void f_11b1682a(void) {
  FTRACE(0x11b1682au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1682a push esi */
  push32((uint32_t)(ESI));
  /* 11b1682b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b1682f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b16834 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16836 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11b16839 call dword ptr [0x11b19064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19064))), 0x11b1683fu);
  /* 11b1683f cmp dword ptr [0x11b1d9a0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11b1d9a0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16845 jne 0x11b1684f */
  if (!C.zf) goto L_11b1684f;
  /* 11b16847 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b1684a mov dword ptr [0x11b1d9a0], eax */
  w32((uint32_t)(0x11b1d9a0), (EAX));
L_11b1684f:;
  /* 11b1684f cmp esi, 0x11b1b980 */
  { uint32_t _a=(ESI),_b=(0x11b1b980u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16855 je 0x11b16877 */
  if (C.zf) goto L_11b16877;
  /* 11b16857 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b1685a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b1685c push esi */
  push32((uint32_t)(ESI));
  /* 11b1685d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b1685f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b16861 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b16863 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b16866 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b16869 push dword ptr [0x11b1f068] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f068))));
  /* 11b1686f call dword ptr [0x11b19060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19060))), 0x11b16875u);
  /* 11b16875 pop esi */
  ESI = (pop32());
  /* 11b16876 ret  */
  ESPCHK(0x11b1682au, _esp0);
  ESP += 4; return;
L_11b16877:;
  /* 11b16877 or dword ptr [0x11b1b990], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b1b990)))|(0xffffffffu); w32((uint32_t)(0x11b1b990), (_r)); fl_logic(_r,32); }
  /* 11b1687e pop esi */
  ESI = (pop32());
  /* 11b1687f ret  */
  ESPCHK(0x11b1682au, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x11b16880 (194 bytes, 66 insns) */
void f_11b16880(void) {
  FTRACE(0x11b16880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b16881 mov ebp, esp */
  EBP = (ESP);
  /* 11b16883 push ecx */
  push32((uint32_t)(ECX));
  /* 11b16884 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16885 push esi */
  push32((uint32_t)(ESI));
  /* 11b16886 mov esi, dword ptr [0x11b1b984] */
  ESI = (r32((uint32_t)(0x11b1b984)));
  /* 11b1688c push edi */
  push32((uint32_t)(EDI));
L_11b1688d:;
  /* 11b1688d cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16891 je 0x11b1692b */
  if (C.zf) goto L_11b1692b;
  /* 11b16897 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b1689b lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11b168a1 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11b168a6:;
  /* 11b168a6 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b168ac jne 0x11b168e7 */
  if (!C.zf) goto L_11b168e7;
  /* 11b168ae mov eax, ebx */
  EAX = (EBX);
  /* 11b168b0 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b168b5 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b168b8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b168bd push eax */
  push32((uint32_t)(EAX));
  /* 11b168be call dword ptr [0x11b19064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19064))), 0x11b168c4u);
  /* 11b168c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b168c6 je 0x11b168e7 */
  if (C.zf) goto L_11b168e7;
  /* 11b168c8 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11b168cb dec dword ptr [0x11b1ed58] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ed58)))-1; w32((uint32_t)(0x11b1ed58), (_r)); fl_dec(_r,32); }
  /* 11b168d1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11b168d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b168d6 je 0x11b168dc */
  if (C.zf) goto L_11b168dc;
  /* 11b168d8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b168da jbe 0x11b168df */
  if ((C.cf||C.zf)) goto L_11b168df;
L_11b168dc:;
  /* 11b168dc mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11b168df:;
  /* 11b168df inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b168e2 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11b168e5 je 0x11b168f4 */
  if (C.zf) goto L_11b168f4;
L_11b168e7:;
  /* 11b168e7 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b168ed sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b168f0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b168f2 jge 0x11b168a6 */
  if ((C.sf==C.of)) goto L_11b168a6;
L_11b168f4:;
  /* 11b168f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b168f8 mov ecx, esi */
  ECX = (ESI);
  /* 11b168fa mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11b168fd je 0x11b1692b */
  if (C.zf) goto L_11b1692b;
  /* 11b168ff cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16903 jne 0x11b1692b */
  if (!C.zf) goto L_11b1692b;
  /* 11b16905 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b16907 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11b1690a pop edx */
  EDX = (pop32());
L_11b1690b:;
  /* 11b1690b cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1690e jne 0x11b1691c */
  if (!C.zf) goto L_11b1691c;
  /* 11b16910 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b16911 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16914 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1691a jl 0x11b1690b */
  if ((C.sf!=C.of)) goto L_11b1690b;
L_11b1691c:;
  /* 11b1691c cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16922 jne 0x11b1692b */
  if (!C.zf) goto L_11b1692b;
  /* 11b16924 push ecx */
  push32((uint32_t)(ECX));
  /* 11b16925 call 0x11b1682a */
  push32(0x11b1692au); f_11b1682a();
  /* 11b1692a pop ecx */
  ECX = (pop32());
L_11b1692b:;
  /* 11b1692b cmp esi, dword ptr [0x11b1b984] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1b984))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16931 je 0x11b1693d */
  if (C.zf) goto L_11b1693d;
  /* 11b16933 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16937 jg 0x11b1688d */
  if ((!C.zf&&C.sf==C.of)) goto L_11b1688d;
L_11b1693d:;
  /* 11b1693d pop edi */
  EDI = (pop32());
  /* 11b1693e pop esi */
  ESI = (pop32());
  /* 11b1693f pop ebx */
  EBX = (pop32());
  /* 11b16940 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b16941 ret  */
  ESPCHK(0x11b16880u, _esp0);
  ESP += 4; return;
}

/* FUN_10006942 @ 0x11b16942 (87 bytes, 34 insns) */
void f_11b16942(void) {
  FTRACE(0x11b16942u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16942 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b16946 mov edx, 0x11b1b980 */
  EDX = (0x11b1b980u);
  /* 11b1694b push esi */
  push32((uint32_t)(ESI));
  /* 11b1694c mov ecx, edx */
  ECX = (EDX);
L_11b1694e:;
  /* 11b1694e cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16951 jbe 0x11b16958 */
  if ((C.cf||C.zf)) goto L_11b16958;
  /* 11b16953 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16956 jb 0x11b16960 */
  if (C.cf) goto L_11b16960;
L_11b16958:;
  /* 11b16958 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11b1695a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1695c je 0x11b16995 */
  if (C.zf) goto L_11b16995;
  /* 11b1695e jmp 0x11b1694e */
  goto L_11b1694e;
L_11b16960:;
  /* 11b16960 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11b16962 jne 0x11b16995 */
  if (!C.zf) goto L_11b16995;
  /* 11b16964 mov esi, eax */
  ESI = (EAX);
  /* 11b16966 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11b1696b and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b16971 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16973 jb 0x11b16995 */
  if (C.cf) goto L_11b16995;
  /* 11b16975 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11b16979 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11b1697b mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b1697f mov ecx, eax */
  ECX = (EAX);
  /* 11b16981 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11b16986 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16988 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11b1698a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1698c pop esi */
  ESI = (pop32());
  /* 11b1698d sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b16990 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11b16994 ret  */
  ESPCHK(0x11b16942u, _esp0);
  ESP += 4; return;
L_11b16995:;
  /* 11b16995 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16997 pop esi */
  ESI = (pop32());
  /* 11b16998 ret  */
  ESPCHK(0x11b16942u, _esp0);
  ESP += 4; return;
}

/* FUN_10006999 @ 0x11b16999 (69 bytes, 19 insns) */
void f_11b16999(void) {
  FTRACE(0x11b16999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16999 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b1699d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b169a1 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b169a4 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11b169a7 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11b169ab mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b169af movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11b169b2 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b169b4 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11b169b7 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b169bd mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11b169c4 jne 0x11b169dd */
  if (!C.zf) goto L_11b169dd;
  /* 11b169c6 inc dword ptr [0x11b1ed58] */
  { uint32_t _r=(r32((uint32_t)(0x11b1ed58)))+1; w32((uint32_t)(0x11b1ed58), (_r)); fl_inc(_r,32); }
  /* 11b169cc cmp dword ptr [0x11b1ed58], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed58))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b169d3 jne 0x11b169dd */
  if (!C.zf) goto L_11b169dd;
  /* 11b169d5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b169d7 call 0x11b16880 */
  push32(0x11b169dcu); f_11b16880();
  /* 11b169dc pop ecx */
  ECX = (pop32());
L_11b169dd:;
  /* 11b169dd ret  */
  ESPCHK(0x11b16999u, _esp0);
  ESP += 4; return;
}

/* FUN_100069de @ 0x11b169de (520 bytes, 180 insns) */
void f_11b169de(void) {
  FTRACE(0x11b169deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b169de push ebp */
  push32((uint32_t)(EBP));
  /* 11b169df mov ebp, esp */
  EBP = (ESP);
  /* 11b169e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b169e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b169e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b169e4 push esi */
  push32((uint32_t)(ESI));
  /* 11b169e5 mov esi, dword ptr [0x11b1d9a0] */
  ESI = (r32((uint32_t)(0x11b1d9a0)));
  /* 11b169eb push edi */
  push32((uint32_t)(EDI));
L_11b169ec:;
  /* 11b169ec mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b169ef cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b169f2 je 0x11b16a97 */
  if (C.zf) goto L_11b16a97;
  /* 11b169f8 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11b169fb lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11b16a01 mov eax, edi */
  EAX = (EDI);
  /* 11b16a03 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16a05 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16a08 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11b16a0b shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11b16a0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16a10 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b16a15 jae 0x11b16a51 */
  if (!C.cf) goto L_11b16a51;
L_11b16a17:;
  /* 11b16a17 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11b16a19 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16a1c cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a1e jl 0x11b16a3a */
  if ((C.sf!=C.of)) goto L_11b16a3a;
  /* 11b16a20 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a23 jbe 0x11b16a3a */
  if ((C.cf||C.zf)) goto L_11b16a3a;
  /* 11b16a25 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16a26 push ecx */
  push32((uint32_t)(ECX));
  /* 11b16a27 push eax */
  push32((uint32_t)(EAX));
  /* 11b16a28 call 0x11b16be6 */
  push32(0x11b16a2du); f_11b16be6();
  /* 11b16a2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16a32 jne 0x11b16aa9 */
  if (!C.zf) goto L_11b16aa9;
  /* 11b16a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16a37 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11b16a3a:;
  /* 11b16a3a add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16a3d lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11b16a43 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16a48 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b16a4d jb 0x11b16a17 */
  if (C.cf) goto L_11b16a17;
  /* 11b16a4f jmp 0x11b16a54 */
  goto L_11b16a54;
L_11b16a51:;
  /* 11b16a51 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b16a54:;
  /* 11b16a54 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11b16a57 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b16a5a lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11b16a5d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b16a60 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b16a65 jae 0x11b16a9a */
  if (!C.cf) goto L_11b16a9a;
L_11b16a67:;
  /* 11b16a67 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11b16a69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a6b jl 0x11b16a86 */
  if ((C.sf!=C.of)) goto L_11b16a86;
  /* 11b16a6d cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a70 jbe 0x11b16a86 */
  if ((C.cf||C.zf)) goto L_11b16a86;
  /* 11b16a72 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16a73 push eax */
  push32((uint32_t)(EAX));
  /* 11b16a74 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11b16a77 call 0x11b16be6 */
  push32(0x11b16a7cu); f_11b16be6();
  /* 11b16a7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16a81 jne 0x11b16aa9 */
  if (!C.zf) goto L_11b16aa9;
  /* 11b16a83 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11b16a86:;
  /* 11b16a86 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b16a8d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16a90 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16a93 jb 0x11b16a67 */
  if (C.cf) goto L_11b16a67;
  /* 11b16a95 jmp 0x11b16a9a */
  goto L_11b16a9a;
L_11b16a97:;
  /* 11b16a97 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b16a9a:;
  /* 11b16a9a mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11b16a9c cmp esi, dword ptr [0x11b1d9a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b1d9a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16aa2 je 0x11b16ab9 */
  if (C.zf) goto L_11b16ab9;
  /* 11b16aa4 jmp 0x11b169ec */
  goto L_11b169ec;
L_11b16aa9:;
  /* 11b16aa9 mov dword ptr [0x11b1d9a0], esi */
  w32((uint32_t)(0x11b1d9a0), (ESI));
  /* 11b16aaf sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16ab1 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11b16ab4 jmp 0x11b16be1 */
  goto L_11b16be1;
L_11b16ab9:;
  /* 11b16ab9 mov eax, 0x11b1b980 */
  EAX = (0x11b1b980u);
  /* 11b16abe mov edi, eax */
  EDI = (EAX);
L_11b16ac0:;
  /* 11b16ac0 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16ac4 je 0x11b16acc */
  if (C.zf) goto L_11b16acc;
  /* 11b16ac6 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16aca jne 0x11b16ad8 */
  if (!C.zf) goto L_11b16ad8;
L_11b16acc:;
  /* 11b16acc mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11b16ace cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16ad0 je 0x11b16bad */
  if (C.zf) goto L_11b16bad;
  /* 11b16ad6 jmp 0x11b16ac0 */
  goto L_11b16ac0;
L_11b16ad8:;
  /* 11b16ad8 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11b16adb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b16adf mov esi, ebx */
  ESI = (EBX);
  /* 11b16ae1 mov eax, ebx */
  EAX = (EBX);
  /* 11b16ae3 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16ae5 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16ae8 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11b16aeb shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11b16aee add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16af1 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16af4 jne 0x11b16b07 */
  if (!C.zf) goto L_11b16b07;
L_11b16af6:;
  /* 11b16af6 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16afa jge 0x11b16b07 */
  if ((C.sf==C.of)) goto L_11b16b07;
  /* 11b16afc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16aff inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b16b02 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16b05 je 0x11b16af6 */
  if (C.zf) goto L_11b16af6;
L_11b16b07:;
  /* 11b16b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16b0a push 4 */
  push32((uint32_t)(0x4u));
  /* 11b16b0c shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11b16b0f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b16b14 push eax */
  push32((uint32_t)(EAX));
  /* 11b16b15 push esi */
  push32((uint32_t)(ESI));
  /* 11b16b16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b16b19 call dword ptr [0x11b19040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19040))), 0x11b16b1fu);
  /* 11b16b1f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16b21 jne 0x11b16bdf */
  if (!C.zf) goto L_11b16bdf;
  /* 11b16b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16b29 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11b16b2c push esi */
  push32((uint32_t)(ESI));
  /* 11b16b2d call 0x11b16f60 */
  push32(0x11b16b32u); f_11b16f60();
  /* 11b16b32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16b38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b16b3a mov ecx, ebx */
  ECX = (EBX);
  /* 11b16b3c jle 0x11b16b6e */
  if ((C.zf||C.sf!=C.of)) goto L_11b16b6e;
  /* 11b16b3e lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11b16b41 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b16b44:;
  /* 11b16b44 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11b16b4b lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11b16b4e mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11b16b51 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11b16b56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b16b58 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b16b5a mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11b16b61 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16b66 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16b69 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11b16b6c jne 0x11b16b44 */
  if (!C.zf) goto L_11b16b44;
L_11b16b6e:;
  /* 11b16b6e mov dword ptr [0x11b1d9a0], edi */
  w32((uint32_t)(0x11b1d9a0), (EDI));
  /* 11b16b74 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11b16b7a:;
  /* 11b16b7a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16b7c jae 0x11b16b8a */
  if (!C.cf) goto L_11b16b8a;
  /* 11b16b7e cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16b81 je 0x11b16b88 */
  if (C.zf) goto L_11b16b88;
  /* 11b16b83 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16b86 jmp 0x11b16b7a */
  goto L_11b16b7a;
L_11b16b88:;
  /* 11b16b88 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b16b8a:;
  /* 11b16b8a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16b8c and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16b8e mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11b16b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16b94 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11b16b97 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11b16b9a sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16b9c sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16b9f lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11b16ba3 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11b16ba9 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11b16bab jmp 0x11b16be1 */
  goto L_11b16be1;
L_11b16bad:;
  /* 11b16bad call 0x11b166e6 */
  push32(0x11b16bb2u); f_11b166e6();
  /* 11b16bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16bb4 je 0x11b16bdf */
  if (C.zf) goto L_11b16bdf;
  /* 11b16bb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b16bb9 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11b16bbc lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11b16bc0 mov dword ptr [0x11b1d9a0], eax */
  w32((uint32_t)(0x11b1d9a0), (EAX));
  /* 11b16bc5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b16bc7 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11b16bcc sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16bce mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b16bd1 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11b16bd4 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16bd7 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11b16bdd jmp 0x11b16be1 */
  goto L_11b16be1;
L_11b16bdf:;
  /* 11b16bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b16be1:;
  /* 11b16be1 pop edi */
  EDI = (pop32());
  /* 11b16be2 pop esi */
  ESI = (pop32());
  /* 11b16be3 pop ebx */
  EBX = (pop32());
  /* 11b16be4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b16be5 ret  */
  ESPCHK(0x11b169deu, _esp0);
  ESP += 4; return;
}

/* FUN_10006be6 @ 0x11b16be6 (292 bytes, 125 insns) */
void f_11b16be6(void) {
  FTRACE(0x11b16be6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16be6 push ebp */
  push32((uint32_t)(EBP));
  /* 11b16be7 mov ebp, esp */
  EBP = (ESP);
  /* 11b16be9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b16bea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16bed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b16bf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16bf1 push esi */
  push32((uint32_t)(ESI));
  /* 11b16bf2 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11b16bf5 push edi */
  push32((uint32_t)(EDI));
  /* 11b16bf6 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11b16bf8 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11b16bfe cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c00 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b16c03 mov eax, edi */
  EAX = (EDI);
  /* 11b16c05 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b16c08 jb 0x11b16c2b */
  if (C.cf) goto L_11b16c2b;
  /* 11b16c0a lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11b16c0d mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b16c0f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c11 jae 0x11b16c1a */
  if (!C.cf) goto L_11b16c1a;
  /* 11b16c13 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b16c15 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16c18 jmp 0x11b16c23 */
  goto L_11b16c23;
L_11b16c1a:;
  /* 11b16c1a and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b16c1e lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11b16c21 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b16c23:;
  /* 11b16c23 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11b16c26 jmp 0x11b16cf9 */
  goto L_11b16cf9;
L_11b16c2b:;
  /* 11b16c2b add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16c2d cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b16c30 je 0x11b16c34 */
  if (C.zf) goto L_11b16c34;
  /* 11b16c32 mov eax, esi */
  EAX = (ESI);
L_11b16c34:;
  /* 11b16c34 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11b16c37 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c39 jae 0x11b16c7e */
  if (!C.cf) goto L_11b16c7e;
L_11b16c3b:;
  /* 11b16c3b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b16c3d test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11b16c3f jne 0x11b16c71 */
  if (!C.zf) goto L_11b16c71;
  /* 11b16c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b16c43 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11b16c46 pop esi */
  ESI = (pop32());
L_11b16c47:;
  /* 11b16c47 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b16c4a jne 0x11b16c50 */
  if (!C.zf) goto L_11b16c50;
  /* 11b16c4c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b16c4d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b16c4e jmp 0x11b16c47 */
  goto L_11b16c47;
L_11b16c50:;
  /* 11b16c50 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c52 jae 0x11b16ca2 */
  if (!C.cf) goto L_11b16ca2;
  /* 11b16c54 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c57 jne 0x11b16c5e */
  if (!C.zf) goto L_11b16c5e;
  /* 11b16c59 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b16c5c jmp 0x11b16c6a */
  goto L_11b16c6a;
L_11b16c5e:;
  /* 11b16c5e sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16c61 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c64 jb 0x11b16d03 */
  if (C.cf) goto L_11b16d03;
L_11b16c6a:;
  /* 11b16c6a mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16c6d mov eax, ebx */
  EAX = (EBX);
  /* 11b16c6f jmp 0x11b16c76 */
  goto L_11b16c76;
L_11b16c71:;
  /* 11b16c71 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11b16c74 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b16c76:;
  /* 11b16c76 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11b16c79 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c7c jb 0x11b16c3b */
  if (C.cf) goto L_11b16c3b;
L_11b16c7e:;
  /* 11b16c7e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11b16c81:;
  /* 11b16c81 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c83 jae 0x11b16d03 */
  if (!C.cf) goto L_11b16d03;
  /* 11b16c85 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11b16c88 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16c8b jae 0x11b16d03 */
  if (!C.cf) goto L_11b16d03;
  /* 11b16c8d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b16c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b16c91 jne 0x11b16cd3 */
  if (!C.zf) goto L_11b16cd3;
  /* 11b16c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b16c95 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11b16c98 pop eax */
  EAX = (pop32());
L_11b16c99:;
  /* 11b16c99 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b16c9c jne 0x11b16cc3 */
  if (!C.zf) goto L_11b16cc3;
  /* 11b16c9e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b16c9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b16ca0 jmp 0x11b16c99 */
  goto L_11b16c99;
L_11b16ca2:;
  /* 11b16ca2 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11b16ca5 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16ca8 jae 0x11b16cb3 */
  if (!C.cf) goto L_11b16cb3;
  /* 11b16caa sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16cac mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11b16cae mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11b16cb1 jmp 0x11b16cbc */
  goto L_11b16cbc;
L_11b16cb3:;
  /* 11b16cb3 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b16cb7 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11b16cba mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11b16cbc:;
  /* 11b16cbc mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b16cbe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16cc1 jmp 0x11b16cf9 */
  goto L_11b16cf9;
L_11b16cc3:;
  /* 11b16cc3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16cc5 jae 0x11b16cda */
  if (!C.cf) goto L_11b16cda;
  /* 11b16cc7 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11b16cca cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16ccd jb 0x11b16d03 */
  if (C.cf) goto L_11b16d03;
  /* 11b16ccf mov esi, ebx */
  ESI = (EBX);
  /* 11b16cd1 jmp 0x11b16c81 */
  goto L_11b16c81;
L_11b16cd3:;
  /* 11b16cd3 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11b16cd6 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16cd8 jmp 0x11b16c81 */
  goto L_11b16c81;
L_11b16cda:;
  /* 11b16cda lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11b16cdd cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16ce0 jae 0x11b16ceb */
  if (!C.cf) goto L_11b16ceb;
  /* 11b16ce2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16ce4 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11b16ce6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b16ce9 jmp 0x11b16cf4 */
  goto L_11b16cf4;
L_11b16ceb:;
  /* 11b16ceb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b16cef lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11b16cf2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b16cf4:;
  /* 11b16cf4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b16cf6 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11b16cf9:;
  /* 11b16cf9 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b16cfc shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b16cff sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16d01 jmp 0x11b16d05 */
  goto L_11b16d05;
L_11b16d03:;
  /* 11b16d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b16d05:;
  /* 11b16d05 pop edi */
  EDI = (pop32());
  /* 11b16d06 pop esi */
  ESI = (pop32());
  /* 11b16d07 pop ebx */
  EBX = (pop32());
  /* 11b16d08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b16d09 ret  */
  ESPCHK(0x11b16be6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d0a @ 0x11b16d0a (169 bytes, 69 insns) */
void f_11b16d0a(void) {
  FTRACE(0x11b16d0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16d0a push ebp */
  push32((uint32_t)(EBP));
  /* 11b16d0b mov ebp, esp */
  EBP = (ESP);
  /* 11b16d0d push ecx */
  push32((uint32_t)(ECX));
  /* 11b16d0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b16d11 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16d12 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b16d15 push esi */
  push32((uint32_t)(ESI));
  /* 11b16d16 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11b16d19 push edi */
  push32((uint32_t)(EDI));
  /* 11b16d1a mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b16d1d and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b16d21 mov eax, ebx */
  EAX = (EBX);
  /* 11b16d23 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16d26 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11b16d29 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16d2c lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11b16d30 jbe 0x11b16d44 */
  if ((C.cf||C.zf)) goto L_11b16d44;
  /* 11b16d32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b16d35 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16d37 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b16d39 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b16d3b mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11b16d42 jmp 0x11b16da4 */
  goto L_11b16da4;
L_11b16d44:;
  /* 11b16d44 jae 0x11b16dab */
  if (!C.cf) goto L_11b16dab;
  /* 11b16d46 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b16d49 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11b16d4c lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11b16d52 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16d54 jb 0x11b16dab */
  if (C.cf) goto L_11b16dab;
  /* 11b16d56 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11b16d59:;
  /* 11b16d59 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16d5b jae 0x11b16d67 */
  if (!C.cf) goto L_11b16d67;
  /* 11b16d5d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b16d60 jne 0x11b16d65 */
  if (!C.zf) goto L_11b16d65;
  /* 11b16d62 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b16d63 jmp 0x11b16d59 */
  goto L_11b16d59;
L_11b16d65:;
  /* 11b16d65 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b16d67:;
  /* 11b16d67 jne 0x11b16dab */
  if (!C.zf) goto L_11b16dab;
  /* 11b16d69 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11b16d6c mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b16d6e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11b16d70 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16d72 ja 0x11b16d9f */
  if ((!C.cf&&!C.zf)) goto L_11b16d9f;
  /* 11b16d74 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16d76 jbe 0x11b16d9f */
  if ((C.cf||C.zf)) goto L_11b16d9f;
  /* 11b16d78 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11b16d7e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16d80 jae 0x11b16d96 */
  if (!C.cf) goto L_11b16d96;
  /* 11b16d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16d84 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11b16d86 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b16d88 jne 0x11b16d91 */
  if (!C.zf) goto L_11b16d91;
L_11b16d8a:;
  /* 11b16d8a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b16d8b cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b16d8f je 0x11b16d8a */
  if (C.zf) goto L_11b16d8a;
L_11b16d91:;
  /* 11b16d91 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11b16d94 jmp 0x11b16d9f */
  goto L_11b16d9f;
L_11b16d96:;
  /* 11b16d96 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b16d9a lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11b16d9d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11b16d9f:;
  /* 11b16d9f sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b16da2 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11b16da4:;
  /* 11b16da4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11b16dab:;
  /* 11b16dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b16dae pop edi */
  EDI = (pop32());
  /* 11b16daf pop esi */
  ESI = (pop32());
  /* 11b16db0 pop ebx */
  EBX = (pop32());
  /* 11b16db1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b16db2 ret  */
  ESPCHK(0x11b16d0au, _esp0);
  ESP += 4; return;
}

/* FUN_10006db3 @ 0x11b16db3 (137 bytes, 50 insns) */
void f_11b16db3(void) {
  FTRACE(0x11b16db3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16db3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b16db4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b16db6 cmp dword ptr [0x11b1ed5c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed5c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16dbc push esi */
  push32((uint32_t)(ESI));
  /* 11b16dbd push edi */
  push32((uint32_t)(EDI));
  /* 11b16dbe jne 0x11b16e02 */
  if (!C.zf) goto L_11b16e02;
  /* 11b16dc0 push 0x11b19590 */
  push32((uint32_t)(0x11b19590u));
  /* 11b16dc5 call dword ptr [0x11b19030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19030))), 0x11b16dcbu);
  /* 11b16dcb mov edi, eax */
  EDI = (EAX);
  /* 11b16dcd cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16dcf je 0x11b16e38 */
  if (C.zf) goto L_11b16e38;
  /* 11b16dd1 mov esi, dword ptr [0x11b19034] */
  ESI = (r32((uint32_t)(0x11b19034)));
  /* 11b16dd7 push 0x11b19584 */
  push32((uint32_t)(0x11b19584u));
  /* 11b16ddc push edi */
  push32((uint32_t)(EDI));
  /* 11b16ddd call esi */
  call_ind((uint32_t)(ESI), 0x11b16ddfu);
  /* 11b16ddf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16de1 mov dword ptr [0x11b1ed5c], eax */
  w32((uint32_t)(0x11b1ed5c), (EAX));
  /* 11b16de6 je 0x11b16e38 */
  if (C.zf) goto L_11b16e38;
  /* 11b16de8 push 0x11b19574 */
  push32((uint32_t)(0x11b19574u));
  /* 11b16ded push edi */
  push32((uint32_t)(EDI));
  /* 11b16dee call esi */
  call_ind((uint32_t)(ESI), 0x11b16df0u);
  /* 11b16df0 push 0x11b19560 */
  push32((uint32_t)(0x11b19560u));
  /* 11b16df5 push edi */
  push32((uint32_t)(EDI));
  /* 11b16df6 mov dword ptr [0x11b1ed60], eax */
  w32((uint32_t)(0x11b1ed60), (EAX));
  /* 11b16dfb call esi */
  call_ind((uint32_t)(ESI), 0x11b16dfdu);
  /* 11b16dfd mov dword ptr [0x11b1ed64], eax */
  w32((uint32_t)(0x11b1ed64), (EAX));
L_11b16e02:;
  /* 11b16e02 mov eax, dword ptr [0x11b1ed60] */
  EAX = (r32((uint32_t)(0x11b1ed60)));
  /* 11b16e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16e09 je 0x11b16e21 */
  if (C.zf) goto L_11b16e21;
  /* 11b16e0b call eax */
  call_ind((uint32_t)(EAX), 0x11b16e0du);
  /* 11b16e0d mov ebx, eax */
  EBX = (EAX);
  /* 11b16e0f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b16e11 je 0x11b16e21 */
  if (C.zf) goto L_11b16e21;
  /* 11b16e13 mov eax, dword ptr [0x11b1ed64] */
  EAX = (r32((uint32_t)(0x11b1ed64)));
  /* 11b16e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16e1a je 0x11b16e21 */
  if (C.zf) goto L_11b16e21;
  /* 11b16e1c push ebx */
  push32((uint32_t)(EBX));
  /* 11b16e1d call eax */
  call_ind((uint32_t)(EAX), 0x11b16e1fu);
  /* 11b16e1f mov ebx, eax */
  EBX = (EAX);
L_11b16e21:;
  /* 11b16e21 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b16e25 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b16e29 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b16e2d push ebx */
  push32((uint32_t)(EBX));
  /* 11b16e2e call dword ptr [0x11b1ed5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1ed5c))), 0x11b16e34u);
L_11b16e34:;
  /* 11b16e34 pop edi */
  EDI = (pop32());
  /* 11b16e35 pop esi */
  ESI = (pop32());
  /* 11b16e36 pop ebx */
  EBX = (pop32());
  /* 11b16e37 ret  */
  ESPCHK(0x11b16db3u, _esp0);
  ESP += 4; return;
L_11b16e38:;
  /* 11b16e38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16e3a jmp 0x11b16e34 */
  goto L_11b16e34;
}

/* _strncpy @ 0x11b16e40 (254 bytes, 109 insns) */
void f_11b16e40(void) {
  FTRACE(0x11b16e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16e40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b16e44 push edi */
  push32((uint32_t)(EDI));
  /* 11b16e45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b16e47 je 0x11b16ec3 */
  if (C.zf) goto L_11b16ec3;
  /* 11b16e49 push esi */
  push32((uint32_t)(ESI));
  /* 11b16e4a push ebx */
  push32((uint32_t)(EBX));
  /* 11b16e4b mov ebx, ecx */
  EBX = (ECX);
  /* 11b16e4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11b16e51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b16e57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b16e5b jne 0x11b16e64 */
  if (!C.zf) goto L_11b16e64;
  /* 11b16e5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b16e60 jne 0x11b16ed1 */
  if (!C.zf) goto L_11b16ed1;
  /* 11b16e62 jmp 0x11b16e85 */
  goto L_11b16e85;
L_11b16e64:;
  /* 11b16e64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b16e66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b16e67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b16e69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b16e6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16e6b je 0x11b16e92 */
  if (C.zf) goto L_11b16e92;
  /* 11b16e6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b16e6f je 0x11b16e9a */
  if (C.zf) goto L_11b16e9a;
  /* 11b16e71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b16e77 jne 0x11b16e64 */
  if (!C.zf) goto L_11b16e64;
  /* 11b16e79 mov ebx, ecx */
  EBX = (ECX);
  /* 11b16e7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b16e7e jne 0x11b16ed1 */
  if (!C.zf) goto L_11b16ed1;
L_11b16e80:;
  /* 11b16e80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b16e83 je 0x11b16e92 */
  if (C.zf) goto L_11b16e92;
L_11b16e85:;
  /* 11b16e85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b16e87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b16e88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b16e8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b16e8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b16e8d je 0x11b16ebe */
  if (C.zf) goto L_11b16ebe;
  /* 11b16e8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b16e90 jne 0x11b16e85 */
  if (!C.zf) goto L_11b16e85;
L_11b16e92:;
  /* 11b16e92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b16e96 pop ebx */
  EBX = (pop32());
  /* 11b16e97 pop esi */
  ESI = (pop32());
  /* 11b16e98 pop edi */
  EDI = (pop32());
  /* 11b16e99 ret  */
  ESPCHK(0x11b16e40u, _esp0);
  ESP += 4; return;
L_11b16e9a:;
  /* 11b16e9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b16ea0 je 0x11b16eb4 */
  if (C.zf) goto L_11b16eb4;
L_11b16ea2:;
  /* 11b16ea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b16ea4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b16ea5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16ea6 je 0x11b16f36 */
  if (C.zf) goto L_11b16f36;
  /* 11b16eac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b16eb2 jne 0x11b16ea2 */
  if (!C.zf) goto L_11b16ea2;
L_11b16eb4:;
  /* 11b16eb4 mov ebx, ecx */
  EBX = (ECX);
  /* 11b16eb6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b16eb9 jne 0x11b16f27 */
  if (!C.zf) goto L_11b16f27;
L_11b16ebb:;
  /* 11b16ebb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b16ebd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b16ebe:;
  /* 11b16ebe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b16ebf jne 0x11b16ebb */
  if (!C.zf) goto L_11b16ebb;
  /* 11b16ec1 pop ebx */
  EBX = (pop32());
  /* 11b16ec2 pop esi */
  ESI = (pop32());
L_11b16ec3:;
  /* 11b16ec3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b16ec7 pop edi */
  EDI = (pop32());
  /* 11b16ec8 ret  */
  ESPCHK(0x11b16e40u, _esp0);
  ESP += 4; return;
L_11b16ec9:;
  /* 11b16ec9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b16ecb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16ece dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16ecf je 0x11b16e80 */
  if (C.zf) goto L_11b16e80;
L_11b16ed1:;
  /* 11b16ed1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b16ed6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b16ed8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16eda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b16edd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16edf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11b16ee1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16ee4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b16ee9 je 0x11b16ec9 */
  if (C.zf) goto L_11b16ec9;
  /* 11b16eeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b16eed je 0x11b16f1b */
  if (C.zf) goto L_11b16f1b;
  /* 11b16eef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b16ef1 je 0x11b16f11 */
  if (C.zf) goto L_11b16f11;
  /* 11b16ef3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b16ef9 je 0x11b16f07 */
  if (C.zf) goto L_11b16f07;
  /* 11b16efb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b16f01 jne 0x11b16ec9 */
  if (!C.zf) goto L_11b16ec9;
  /* 11b16f03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b16f05 jmp 0x11b16f1f */
  goto L_11b16f1f;
L_11b16f07:;
  /* 11b16f07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b16f0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b16f0f jmp 0x11b16f1f */
  goto L_11b16f1f;
L_11b16f11:;
  /* 11b16f11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b16f17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b16f19 jmp 0x11b16f1f */
  goto L_11b16f1f;
L_11b16f1b:;
  /* 11b16f1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b16f1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11b16f1f:;
  /* 11b16f1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16f24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16f25 je 0x11b16f31 */
  if (C.zf) goto L_11b16f31;
L_11b16f27:;
  /* 11b16f27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b16f29:;
  /* 11b16f29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b16f2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16f2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16f2f jne 0x11b16f29 */
  if (!C.zf) goto L_11b16f29;
L_11b16f31:;
  /* 11b16f31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b16f34 jne 0x11b16ebb */
  if (!C.zf) goto L_11b16ebb;
L_11b16f36:;
  /* 11b16f36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b16f3a pop ebx */
  EBX = (pop32());
  /* 11b16f3b pop esi */
  ESI = (pop32());
  /* 11b16f3c pop edi */
  EDI = (pop32());
  /* 11b16f3d ret  */
  ESPCHK(0x11b16e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3e @ 0x11b16f3e (27 bytes, 13 insns) */
void f_11b16f3e(void) {
  FTRACE(0x11b16f3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16f3e mov eax, dword ptr [0x11b1ed68] */
  EAX = (r32((uint32_t)(0x11b1ed68)));
  /* 11b16f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16f45 je 0x11b16f56 */
  if (C.zf) goto L_11b16f56;
  /* 11b16f47 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b16f4b call eax */
  call_ind((uint32_t)(EAX), 0x11b16f4du);
  /* 11b16f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b16f4f pop ecx */
  ECX = (pop32());
  /* 11b16f50 je 0x11b16f56 */
  if (C.zf) goto L_11b16f56;
  /* 11b16f52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b16f54 pop eax */
  EAX = (pop32());
  /* 11b16f55 ret  */
  ESPCHK(0x11b16f3eu, _esp0);
  ESP += 4; return;
L_11b16f56:;
  /* 11b16f56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16f58 ret  */
  ESPCHK(0x11b16f3eu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11b16f60 (88 bytes, 40 insns) */
void f_11b16f60(void) {
  FTRACE(0x11b16f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16f60 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b16f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b16f68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b16f6a je 0x11b16fb3 */
  if (C.zf) goto L_11b16fb3;
  /* 11b16f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b16f6e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b16f72 push edi */
  push32((uint32_t)(EDI));
  /* 11b16f73 mov edi, ecx */
  EDI = (ECX);
  /* 11b16f75 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b16f78 jb 0x11b16fa7 */
  if (C.cf) goto L_11b16fa7;
  /* 11b16f7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b16f7c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b16f7f je 0x11b16f89 */
  if (C.zf) goto L_11b16f89;
  /* 11b16f81 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11b16f83:;
  /* 11b16f83 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b16f85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b16f86 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b16f87 jne 0x11b16f83 */
  if (!C.zf) goto L_11b16f83;
L_11b16f89:;
  /* 11b16f89 mov ecx, eax */
  ECX = (EAX);
  /* 11b16f8b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b16f8e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16f90 mov ecx, eax */
  ECX = (EAX);
  /* 11b16f92 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b16f95 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b16f97 mov ecx, edx */
  ECX = (EDX);
  /* 11b16f99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b16f9c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b16f9f je 0x11b16fa7 */
  if (C.zf) goto L_11b16fa7;
  /* 11b16fa1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b16fa3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b16fa5 je 0x11b16fad */
  if (C.zf) goto L_11b16fad;
L_11b16fa7:;
  /* 11b16fa7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b16fa9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b16faa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b16fab jne 0x11b16fa7 */
  if (!C.zf) goto L_11b16fa7;
L_11b16fad:;
  /* 11b16fad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b16fb1 pop edi */
  EDI = (pop32());
  /* 11b16fb2 ret  */
  ESPCHK(0x11b16f60u, _esp0);
  ESP += 4; return;
L_11b16fb3:;
  /* 11b16fb3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b16fb7 ret  */
  ESPCHK(0x11b16f60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11b16fb8 (32 bytes, 18 insns) */
void f_11b16fb8(void) {
  FTRACE(0x11b16fb8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16fb8 push ebp */
  push32((uint32_t)(EBP));
  /* 11b16fb9 mov ebp, esp */
  EBP = (ESP);
  /* 11b16fbb push ebx */
  push32((uint32_t)(EBX));
  /* 11b16fbc push esi */
  push32((uint32_t)(ESI));
  /* 11b16fbd push edi */
  push32((uint32_t)(EDI));
  /* 11b16fbe push ebp */
  push32((uint32_t)(EBP));
  /* 11b16fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b16fc3 push 0x11b16fd0 */
  push32((uint32_t)(0x11b16fd0u));
  /* 11b16fc8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b16fcb call 0x11b18970 */
  push32(0x11b16fd0u); f_11b18970();
  /* 11b16fd0 pop ebp */
  EBP = (pop32());
  /* 11b16fd1 pop edi */
  EDI = (pop32());
  /* 11b16fd2 pop esi */
  ESI = (pop32());
  /* 11b16fd3 pop ebx */
  EBX = (pop32());
  /* 11b16fd4 mov esp, ebp */
  ESP = (EBP);
  /* 11b16fd6 pop ebp */
  EBP = (pop32());
  /* 11b16fd7 ret  */
  ESPCHK(0x11b16fb8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11b16ffa (104 bytes, 33 insns) */
void f_11b16ffa(void) {
  FTRACE(0x11b16ffau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b16ffa push ebx */
  push32((uint32_t)(EBX));
  /* 11b16ffb push esi */
  push32((uint32_t)(ESI));
  /* 11b16ffc push edi */
  push32((uint32_t)(EDI));
  /* 11b16ffd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b17001 push eax */
  push32((uint32_t)(EAX));
  /* 11b17002 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11b17004 push 0x11b16fd8 */
  push32((uint32_t)(0x11b16fd8u));
  /* 11b17009 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11b17010 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11b17017:;
  /* 11b17017 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11b1701b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b1701e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11b17021 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17024 je 0x11b17054 */
  if (C.zf) goto L_11b17054;
  /* 11b17026 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1702a je 0x11b17054 */
  if (C.zf) goto L_11b17054;
  /* 11b1702c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11b1702f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11b17032 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11b17036 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b17039 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1703e jne 0x11b17052 */
  if (!C.zf) goto L_11b17052;
  /* 11b17040 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11b17045 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11b17049 call 0x11b1708e */
  push32(0x11b1704eu); f_11b1708e();
  /* 11b1704e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11b17052u);
L_11b17052:;
  /* 11b17052 jmp 0x11b17017 */
  goto L_11b17017;
L_11b17054:;
  /* 11b17054 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11b1705b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1705e pop edi */
  EDI = (pop32());
  /* 11b1705f pop esi */
  ESI = (pop32());
  /* 11b17060 pop ebx */
  EBX = (pop32());
  /* 11b17061 ret  */
  ESPCHK(0x11b16ffau, _esp0);
  ESP += 4; return;
}

/* FUN_1000708e @ 0x11b1708e (24 bytes, 10 insns) */
void f_11b1708e(void) {
  FTRACE(0x11b1708eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1708e push ebx */
  push32((uint32_t)(EBX));
  /* 11b1708f push ecx */
  push32((uint32_t)(ECX));
  /* 11b17090 mov ebx, 0x11b1d9b0 */
  EBX = (0x11b1d9b0u);
  /* 11b17095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17098 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b1709b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11b1709e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11b170a1 pop ecx */
  ECX = (pop32());
  /* 11b170a2 pop ebx */
  EBX = (pop32());
  /* 11b170a3 ret 4 */
  ESPCHK(0x11b1708eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000716d @ 0x11b1716d (27 bytes, 11 insns) */
void f_11b1716d(void) {
  FTRACE(0x11b1716du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b1716d push ebp */
  push32((uint32_t)(EBP));
  /* 11b1716e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b17172 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11b17174 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b17177 push eax */
  push32((uint32_t)(EAX));
  /* 11b17178 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b1717b push eax */
  push32((uint32_t)(EAX));
  /* 11b1717c call 0x11b16ffa */
  push32(0x11b17181u); f_11b16ffa();
  /* 11b17181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17184 pop ebp */
  EBP = (pop32());
  /* 11b17185 ret 4 */
  ESPCHK(0x11b1716du, _esp0);
  ESP += 8; return;
}

/* FUN_10007188 @ 0x11b17188 (139 bytes, 59 insns) */
void f_11b17188(void) {
  FTRACE(0x11b17188u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17188 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17189 push ebp */
  push32((uint32_t)(EBP));
  /* 11b1718a push esi */
  push32((uint32_t)(ESI));
  /* 11b1718b push edi */
  push32((uint32_t)(EDI));
  /* 11b1718c mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11b17190:;
  /* 11b17190 cmp dword ptr [0x11b1dd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17197 jle 0x11b171a8 */
  if ((C.zf||C.sf!=C.of)) goto L_11b171a8;
  /* 11b17199 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b1719c push 8 */
  push32((uint32_t)(0x8u));
  /* 11b1719e push eax */
  push32((uint32_t)(EAX));
  /* 11b1719f call 0x11b177fd */
  push32(0x11b171a4u); f_11b177fd();
  /* 11b171a4 pop ecx */
  ECX = (pop32());
  /* 11b171a5 pop ecx */
  ECX = (pop32());
  /* 11b171a6 jmp 0x11b171b7 */
  goto L_11b171b7;
L_11b171a8:;
  /* 11b171a8 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b171ab mov ecx, dword ptr [0x11b1db28] */
  ECX = (r32((uint32_t)(0x11b1db28)));
  /* 11b171b1 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11b171b4 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11b171b7:;
  /* 11b171b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b171b9 je 0x11b171be */
  if (C.zf) goto L_11b171be;
  /* 11b171bb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b171bc jmp 0x11b17190 */
  goto L_11b17190;
L_11b171be:;
  /* 11b171be movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b171c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b171c2 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b171c5 mov ebp, esi */
  EBP = (ESI);
  /* 11b171c7 je 0x11b171ce */
  if (C.zf) goto L_11b171ce;
  /* 11b171c9 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b171cc jne 0x11b171d2 */
  if (!C.zf) goto L_11b171d2;
L_11b171ce:;
  /* 11b171ce movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b171d1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b171d2:;
  /* 11b171d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b171d4:;
  /* 11b171d4 cmp dword ptr [0x11b1dd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b171db jle 0x11b171e9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b171e9;
  /* 11b171dd push 4 */
  push32((uint32_t)(0x4u));
  /* 11b171df push esi */
  push32((uint32_t)(ESI));
  /* 11b171e0 call 0x11b177fd */
  push32(0x11b171e5u); f_11b177fd();
  /* 11b171e5 pop ecx */
  ECX = (pop32());
  /* 11b171e6 pop ecx */
  ECX = (pop32());
  /* 11b171e7 jmp 0x11b171f4 */
  goto L_11b171f4;
L_11b171e9:;
  /* 11b171e9 mov eax, dword ptr [0x11b1db28] */
  EAX = (r32((uint32_t)(0x11b1db28)));
  /* 11b171ee mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11b171f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11b171f4:;
  /* 11b171f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b171f6 je 0x11b17205 */
  if (C.zf) goto L_11b17205;
  /* 11b171f8 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11b171fb lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11b171ff movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11b17202 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b17203 jmp 0x11b171d4 */
  goto L_11b171d4;
L_11b17205:;
  /* 11b17205 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17208 mov eax, ebx */
  EAX = (EBX);
  /* 11b1720a jne 0x11b1720e */
  if (!C.zf) goto L_11b1720e;
  /* 11b1720c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11b1720e:;
  /* 11b1720e pop edi */
  EDI = (pop32());
  /* 11b1720f pop esi */
  ESI = (pop32());
  /* 11b17210 pop ebp */
  EBP = (pop32());
  /* 11b17211 pop ebx */
  EBX = (pop32());
  /* 11b17212 ret  */
  ESPCHK(0x11b17188u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11b17220 (129 bytes, 56 insns) */
void f_11b17220(void) {
  FTRACE(0x11b17220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17220 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b17224 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b17228 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b1722e jne 0x11b1726c */
  if (!C.zf) goto L_11b1726c;
L_11b17230:;
  /* 11b17230 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b17232 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17234 jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b17236 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b17238 je 0x11b17260 */
  if (C.zf) goto L_11b17260;
  /* 11b1723a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b1723d jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b1723f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b17241 je 0x11b17260 */
  if (C.zf) goto L_11b17260;
  /* 11b17243 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b17246 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17249 jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b1724b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b1724d je 0x11b17260 */
  if (C.zf) goto L_11b17260;
  /* 11b1724f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17252 jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b17254 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17257 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1725a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b1725c jne 0x11b17230 */
  if (!C.zf) goto L_11b17230;
  /* 11b1725e mov edi, edi */
  EDI = (EDI);
L_11b17260:;
  /* 11b17260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b17262 ret  */
  ESPCHK(0x11b17220u, _esp0);
  ESP += 4; return;
  /* 11b17263 nop  */
  /* nop */
L_11b17264:;
  /* 11b17264 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17266 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b17268 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b17269 ret  */
  ESPCHK(0x11b17220u, _esp0);
  ESP += 4; return;
  /* 11b1726a mov edi, edi */
  EDI = (EDI);
L_11b1726c:;
  /* 11b1726c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11b17272 je 0x11b17288 */
  if (C.zf) goto L_11b17288;
  /* 11b17274 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b17276 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b17277 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17279 jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b1727b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b1727c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b1727e je 0x11b17260 */
  if (C.zf) goto L_11b17260;
  /* 11b17280 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11b17286 je 0x11b17230 */
  if (C.zf) goto L_11b17230;
L_11b17288:;
  /* 11b17288 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b1728b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1728e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17290 jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b17292 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b17294 je 0x11b17260 */
  if (C.zf) goto L_11b17260;
  /* 11b17296 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17299 jne 0x11b17264 */
  if (!C.zf) goto L_11b17264;
  /* 11b1729b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b1729d je 0x11b17260 */
  if (C.zf) goto L_11b17260;
  /* 11b1729f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b172a2 jmp 0x11b17230 */
  goto L_11b17230;
}

/* FUN_100072a4 @ 0x11b172a4 (125 bytes, 51 insns) */
void f_11b172a4(void) {
  FTRACE(0x11b172a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b172a4 cmp dword ptr [0x11b1f184], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1f184))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b172ab push ebx */
  push32((uint32_t)(EBX));
  /* 11b172ac push esi */
  push32((uint32_t)(ESI));
  /* 11b172ad mov esi, dword ptr [0x11b1eb04] */
  ESI = (r32((uint32_t)(0x11b1eb04)));
  /* 11b172b3 push edi */
  push32((uint32_t)(EDI));
  /* 11b172b4 je 0x11b1731b */
  if (C.zf) goto L_11b1731b;
  /* 11b172b6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b172b8 jne 0x11b172d5 */
  if (!C.zf) goto L_11b172d5;
  /* 11b172ba cmp dword ptr [0x11b1eb0c], esi */
  { uint32_t _a=(r32((uint32_t)(0x11b1eb0c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b172c0 je 0x11b1731b */
  if (C.zf) goto L_11b1731b;
  /* 11b172c2 call 0x11b17c33 */
  push32(0x11b172c7u); f_11b17c33();
  /* 11b172c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b172c9 jne 0x11b1731b */
  if (!C.zf) goto L_11b1731b;
  /* 11b172cb mov esi, dword ptr [0x11b1eb04] */
  ESI = (r32((uint32_t)(0x11b1eb04)));
  /* 11b172d1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b172d3 je 0x11b1731b */
  if (C.zf) goto L_11b1731b;
L_11b172d5:;
  /* 11b172d5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b172d9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b172db je 0x11b1731b */
  if (C.zf) goto L_11b1731b;
  /* 11b172dd push ebx */
  push32((uint32_t)(EBX));
  /* 11b172de call 0x11b15010 */
  push32(0x11b172e3u); f_11b15010();
  /* 11b172e3 pop ecx */
  ECX = (pop32());
  /* 11b172e4 mov edi, eax */
  EDI = (EAX);
L_11b172e6:;
  /* 11b172e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b172e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b172ea je 0x11b1731b */
  if (C.zf) goto L_11b1731b;
  /* 11b172ec push eax */
  push32((uint32_t)(EAX));
  /* 11b172ed call 0x11b15010 */
  push32(0x11b172f2u); f_11b15010();
  /* 11b172f2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b172f4 pop ecx */
  ECX = (pop32());
  /* 11b172f5 jbe 0x11b1730e */
  if ((C.cf||C.zf)) goto L_11b1730e;
  /* 11b172f7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b172f9 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b172fd jne 0x11b1730e */
  if (!C.zf) goto L_11b1730e;
  /* 11b172ff push edi */
  push32((uint32_t)(EDI));
  /* 11b17300 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17301 push eax */
  push32((uint32_t)(EAX));
  /* 11b17302 call 0x11b17bf4 */
  push32(0x11b17307u); f_11b17bf4();
  /* 11b17307 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1730a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1730c je 0x11b17313 */
  if (C.zf) goto L_11b17313;
L_11b1730e:;
  /* 11b1730e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17311 jmp 0x11b172e6 */
  goto L_11b172e6;
L_11b17313:;
  /* 11b17313 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b17315 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11b17319 jmp 0x11b1731d */
  goto L_11b1731d;
L_11b1731b:;
  /* 11b1731b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b1731d:;
  /* 11b1731d pop edi */
  EDI = (pop32());
  /* 11b1731e pop esi */
  ESI = (pop32());
  /* 11b1731f pop ebx */
  EBX = (pop32());
  /* 11b17320 ret  */
  ESPCHK(0x11b172a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10007321 @ 0x11b17321 (511 bytes, 193 insns) */
void f_11b17321(void) {
  FTRACE(0x11b17321u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17321 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17322 mov ebp, esp */
  EBP = (ESP);
  /* 11b17324 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b17326 push 0x11b195a8 */
  push32((uint32_t)(0x11b195a8u));
  /* 11b1732b push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b17330 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b17336 push eax */
  push32((uint32_t)(EAX));
  /* 11b17337 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b1733e sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17341 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17342 push esi */
  push32((uint32_t)(ESI));
  /* 11b17343 push edi */
  push32((uint32_t)(EDI));
  /* 11b17344 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17347 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b17349 cmp dword ptr [0x11b1ed90], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed90))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1734f jne 0x11b17397 */
  if (!C.zf) goto L_11b17397;
  /* 11b17351 push edi */
  push32((uint32_t)(EDI));
  /* 11b17352 push edi */
  push32((uint32_t)(EDI));
  /* 11b17353 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17355 pop ebx */
  EBX = (pop32());
  /* 11b17356 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17357 push 0x11b195a0 */
  push32((uint32_t)(0x11b195a0u));
  /* 11b1735c mov esi, 0x100 */
  ESI = (0x100u);
  /* 11b17361 push esi */
  push32((uint32_t)(ESI));
  /* 11b17362 push edi */
  push32((uint32_t)(EDI));
  /* 11b17363 call dword ptr [0x11b1902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1902c))), 0x11b17369u);
  /* 11b17369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1736b je 0x11b17375 */
  if (C.zf) goto L_11b17375;
  /* 11b1736d mov dword ptr [0x11b1ed90], ebx */
  w32((uint32_t)(0x11b1ed90), (EBX));
  /* 11b17373 jmp 0x11b17397 */
  goto L_11b17397;
L_11b17375:;
  /* 11b17375 push edi */
  push32((uint32_t)(EDI));
  /* 11b17376 push edi */
  push32((uint32_t)(EDI));
  /* 11b17377 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17378 push 0x11b1959c */
  push32((uint32_t)(0x11b1959cu));
  /* 11b1737d push esi */
  push32((uint32_t)(ESI));
  /* 11b1737e push edi */
  push32((uint32_t)(EDI));
  /* 11b1737f call dword ptr [0x11b19024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19024))), 0x11b17385u);
  /* 11b17385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17387 je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b1738d mov dword ptr [0x11b1ed90], 2 */
  w32((uint32_t)(0x11b1ed90), (0x2u));
L_11b17397:;
  /* 11b17397 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1739a jle 0x11b173ac */
  if ((C.zf||C.sf!=C.of)) goto L_11b173ac;
  /* 11b1739c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b1739f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b173a2 call 0x11b17545 */
  push32(0x11b173a7u); f_11b17545();
  /* 11b173a7 pop ecx */
  ECX = (pop32());
  /* 11b173a8 pop ecx */
  ECX = (pop32());
  /* 11b173a9 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11b173ac:;
  /* 11b173ac mov eax, dword ptr [0x11b1ed90] */
  EAX = (r32((uint32_t)(0x11b1ed90)));
  /* 11b173b1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b173b4 jne 0x11b173d3 */
  if (!C.zf) goto L_11b173d3;
  /* 11b173b6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b173b9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b173bc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b173bf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b173c2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b173c5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b173c8 call dword ptr [0x11b19024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19024))), 0x11b173ceu);
  /* 11b173ce jmp 0x11b174b1 */
  goto L_11b174b1;
L_11b173d3:;
  /* 11b173d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b173d6 jne 0x11b174af */
  if (!C.zf) goto L_11b174af;
  /* 11b173dc cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b173df jne 0x11b173e9 */
  if (!C.zf) goto L_11b173e9;
  /* 11b173e1 mov eax, dword ptr [0x11b1ed88] */
  EAX = (r32((uint32_t)(0x11b1ed88)));
  /* 11b173e6 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11b173e9:;
  /* 11b173e9 push edi */
  push32((uint32_t)(EDI));
  /* 11b173ea push edi */
  push32((uint32_t)(EDI));
  /* 11b173eb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b173ee push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b173f1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b173f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b173f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b173f8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b173fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b173fc push eax */
  push32((uint32_t)(EAX));
  /* 11b173fd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17400 call dword ptr [0x11b19028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19028))), 0x11b17406u);
  /* 11b17406 mov ebx, eax */
  EBX = (EAX);
  /* 11b17408 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11b1740b cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1740d je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b17413 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b17416 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11b17419 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1741c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b1741e call 0x11b15b70 */
  push32(0x11b17423u); f_11b15b70();
  /* 11b17423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17426 mov eax, esp */
  EAX = (ESP);
  /* 11b17428 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b1742b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b1742f jmp 0x11b17444 */
  goto L_11b17444;
  /* 11b17431 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17433 pop eax */
  EAX = (pop32());
  /* 11b17434 ret  */
  ESPCHK(0x11b17321u, _esp0);
  ESP += 4; return;
  /* 11b17435 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b17438 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b1743a mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11b1743d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b17441 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11b17444:;
  /* 11b17444 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17447 je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b17449 push ebx */
  push32((uint32_t)(EBX));
  /* 11b1744a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b1744d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b17450 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17453 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17455 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17458 call dword ptr [0x11b19028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19028))), 0x11b1745eu);
  /* 11b1745e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17460 je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b17462 push edi */
  push32((uint32_t)(EDI));
  /* 11b17463 push edi */
  push32((uint32_t)(EDI));
  /* 11b17464 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17465 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b17468 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b1746b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b1746e call dword ptr [0x11b1902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1902c))), 0x11b17474u);
  /* 11b17474 mov esi, eax */
  ESI = (EAX);
  /* 11b17476 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11b17479 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1747b je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b1747d test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11b17481 je 0x11b174c3 */
  if (C.zf) goto L_11b174c3;
  /* 11b17483 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17486 je 0x11b1753e */
  if (C.zf) goto L_11b1753e;
  /* 11b1748c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1748f jg 0x11b174af */
  if ((!C.zf&&C.sf==C.of)) goto L_11b174af;
  /* 11b17491 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b17494 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b17497 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17498 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b1749b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b1749e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b174a1 call dword ptr [0x11b1902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1902c))), 0x11b174a7u);
  /* 11b174a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b174a9 jne 0x11b1753e */
  if (!C.zf) goto L_11b1753e;
L_11b174af:;
  /* 11b174af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b174b1:;
  /* 11b174b1 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11b174b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b174b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b174be pop edi */
  EDI = (pop32());
  /* 11b174bf pop esi */
  ESI = (pop32());
  /* 11b174c0 pop ebx */
  EBX = (pop32());
  /* 11b174c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b174c2 ret  */
  ESPCHK(0x11b17321u, _esp0);
  ESP += 4; return;
L_11b174c3:;
  /* 11b174c3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b174ca lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11b174cd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b174d0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b174d2 call 0x11b15b70 */
  push32(0x11b174d7u); f_11b15b70();
  /* 11b174d7 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b174da mov ebx, esp */
  EBX = (ESP);
  /* 11b174dc mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11b174df or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b174e3 jmp 0x11b174f7 */
  goto L_11b174f7;
  /* 11b174e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b174e7 pop eax */
  EAX = (pop32());
  /* 11b174e8 ret  */
  ESPCHK(0x11b17321u, _esp0);
  ESP += 4; return;
  /* 11b174e9 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b174ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b174ee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b174f0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b174f4 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11b174f7:;
  /* 11b174f7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b174f9 je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b174fb push esi */
  push32((uint32_t)(ESI));
  /* 11b174fc push ebx */
  push32((uint32_t)(EBX));
  /* 11b174fd push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b17500 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b17503 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b17506 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b17509 call dword ptr [0x11b1902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1902c))), 0x11b1750fu);
  /* 11b1750f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17511 je 0x11b174af */
  if (C.zf) goto L_11b174af;
  /* 11b17513 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17516 push edi */
  push32((uint32_t)(EDI));
  /* 11b17517 push edi */
  push32((uint32_t)(EDI));
  /* 11b17518 jne 0x11b1751e */
  if (!C.zf) goto L_11b1751e;
  /* 11b1751a push edi */
  push32((uint32_t)(EDI));
  /* 11b1751b push edi */
  push32((uint32_t)(EDI));
  /* 11b1751c jmp 0x11b17524 */
  goto L_11b17524;
L_11b1751e:;
  /* 11b1751e push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b17521 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11b17524:;
  /* 11b17524 push esi */
  push32((uint32_t)(ESI));
  /* 11b17525 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17526 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b1752b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b1752e call dword ptr [0x11b19084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19084))), 0x11b17534u);
  /* 11b17534 mov esi, eax */
  ESI = (EAX);
  /* 11b17536 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17538 je 0x11b174af */
  if (C.zf) goto L_11b174af;
L_11b1753e:;
  /* 11b1753e mov eax, esi */
  EAX = (ESI);
  /* 11b17540 jmp 0x11b174b1 */
  goto L_11b174b1;
}

/* FUN_10007545 @ 0x11b17545 (43 bytes, 20 insns) */
void f_11b17545(void) {
  FTRACE(0x11b17545u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17545 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b17549 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b1754d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b1754f push esi */
  push32((uint32_t)(ESI));
  /* 11b17550 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11b17553 je 0x11b17562 */
  if (C.zf) goto L_11b17562;
L_11b17555:;
  /* 11b17555 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17558 je 0x11b17562 */
  if (C.zf) goto L_11b17562;
  /* 11b1755a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b1755b mov esi, ecx */
  ESI = (ECX);
  /* 11b1755d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b1755e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b17560 jne 0x11b17555 */
  if (!C.zf) goto L_11b17555;
L_11b17562:;
  /* 11b17562 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17565 pop esi */
  ESI = (pop32());
  /* 11b17566 jne 0x11b1756d */
  if (!C.zf) goto L_11b1756d;
  /* 11b17568 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1756c ret  */
  ESPCHK(0x11b17545u, _esp0);
  ESP += 4; return;
L_11b1756d:;
  /* 11b1756d mov eax, edx */
  EAX = (EDX);
  /* 11b1756f ret  */
  ESPCHK(0x11b17545u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x11b17570 (318 bytes, 123 insns) */
void f_11b17570(void) {
  FTRACE(0x11b17570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17570 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17571 mov ebp, esp */
  EBP = (ESP);
  /* 11b17573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b17575 push 0x11b195c0 */
  push32((uint32_t)(0x11b195c0u));
  /* 11b1757a push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b1757f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b17585 push eax */
  push32((uint32_t)(EAX));
  /* 11b17586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b1758d sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17590 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17591 push esi */
  push32((uint32_t)(ESI));
  /* 11b17592 push edi */
  push32((uint32_t)(EDI));
  /* 11b17593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17596 mov eax, dword ptr [0x11b1ed94] */
  EAX = (r32((uint32_t)(0x11b1ed94)));
  /* 11b1759b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b1759d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1759f jne 0x11b175df */
  if (!C.zf) goto L_11b175df;
  /* 11b175a1 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b175a4 push eax */
  push32((uint32_t)(EAX));
  /* 11b175a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b175a7 pop esi */
  ESI = (pop32());
  /* 11b175a8 push esi */
  push32((uint32_t)(ESI));
  /* 11b175a9 push 0x11b195a0 */
  push32((uint32_t)(0x11b195a0u));
  /* 11b175ae push esi */
  push32((uint32_t)(ESI));
  /* 11b175af call dword ptr [0x11b19018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19018))), 0x11b175b5u);
  /* 11b175b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b175b7 je 0x11b175bd */
  if (C.zf) goto L_11b175bd;
  /* 11b175b9 mov eax, esi */
  EAX = (ESI);
  /* 11b175bb jmp 0x11b175da */
  goto L_11b175da;
L_11b175bd:;
  /* 11b175bd lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b175c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b175c1 push esi */
  push32((uint32_t)(ESI));
  /* 11b175c2 push 0x11b1959c */
  push32((uint32_t)(0x11b1959cu));
  /* 11b175c7 push esi */
  push32((uint32_t)(ESI));
  /* 11b175c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b175c9 call dword ptr [0x11b1901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1901c))), 0x11b175cfu);
  /* 11b175cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b175d1 je 0x11b176a5 */
  if (C.zf) goto L_11b176a5;
  /* 11b175d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b175d9 pop eax */
  EAX = (pop32());
L_11b175da:;
  /* 11b175da mov dword ptr [0x11b1ed94], eax */
  w32((uint32_t)(0x11b1ed94), (EAX));
L_11b175df:;
  /* 11b175df cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b175e2 jne 0x11b17608 */
  if (!C.zf) goto L_11b17608;
  /* 11b175e4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b175e7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b175e9 jne 0x11b175f0 */
  if (!C.zf) goto L_11b175f0;
  /* 11b175eb mov eax, dword ptr [0x11b1ed78] */
  EAX = (r32((uint32_t)(0x11b1ed78)));
L_11b175f0:;
  /* 11b175f0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b175f3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b175f6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b175f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b175fc push eax */
  push32((uint32_t)(EAX));
  /* 11b175fd call dword ptr [0x11b1901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1901c))), 0x11b17603u);
  /* 11b17603 jmp 0x11b176a7 */
  goto L_11b176a7;
L_11b17608:;
  /* 11b17608 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1760b jne 0x11b176a5 */
  if (!C.zf) goto L_11b176a5;
  /* 11b17611 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17614 jne 0x11b1761e */
  if (!C.zf) goto L_11b1761e;
  /* 11b17616 mov eax, dword ptr [0x11b1ed88] */
  EAX = (r32((uint32_t)(0x11b1ed88)));
  /* 11b1761b mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11b1761e:;
  /* 11b1761e push ebx */
  push32((uint32_t)(EBX));
  /* 11b1761f push ebx */
  push32((uint32_t)(EBX));
  /* 11b17620 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17623 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b17626 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b17629 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b1762b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1762d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b17630 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b17631 push eax */
  push32((uint32_t)(EAX));
  /* 11b17632 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b17635 call dword ptr [0x11b19028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19028))), 0x11b1763bu);
  /* 11b1763b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b1763e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17640 je 0x11b176a5 */
  if (C.zf) goto L_11b176a5;
  /* 11b17642 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b17645 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11b17648 mov eax, edi */
  EAX = (EDI);
  /* 11b1764a add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1764d and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b1764f call 0x11b15b70 */
  push32(0x11b17654u); f_11b15b70();
  /* 11b17654 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17657 mov esi, esp */
  ESI = (ESP);
  /* 11b17659 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11b1765c push edi */
  push32((uint32_t)(EDI));
  /* 11b1765d push ebx */
  push32((uint32_t)(EBX));
  /* 11b1765e push esi */
  push32((uint32_t)(ESI));
  /* 11b1765f call 0x11b16f60 */
  push32(0x11b17664u); f_11b16f60();
  /* 11b17664 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17667 jmp 0x11b17674 */
  goto L_11b17674;
  /* 11b17669 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1766b pop eax */
  EAX = (pop32());
  /* 11b1766c ret  */
  ESPCHK(0x11b17570u, _esp0);
  ESP += 4; return;
  /* 11b1766d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b17670 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b17672 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11b17674:;
  /* 11b17674 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b17678 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1767a je 0x11b176a5 */
  if (C.zf) goto L_11b176a5;
  /* 11b1767c push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b1767f push esi */
  push32((uint32_t)(ESI));
  /* 11b17680 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17683 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b17686 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17688 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b1768b call dword ptr [0x11b19028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19028))), 0x11b17691u);
  /* 11b17691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17693 je 0x11b176a5 */
  if (C.zf) goto L_11b176a5;
  /* 11b17695 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b17698 push eax */
  push32((uint32_t)(EAX));
  /* 11b17699 push esi */
  push32((uint32_t)(ESI));
  /* 11b1769a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b1769d call dword ptr [0x11b19018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19018))), 0x11b176a3u);
  /* 11b176a3 jmp 0x11b176a7 */
  goto L_11b176a7;
L_11b176a5:;
  /* 11b176a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b176a7:;
  /* 11b176a7 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11b176aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b176ad mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b176b4 pop edi */
  EDI = (pop32());
  /* 11b176b5 pop esi */
  ESI = (pop32());
  /* 11b176b6 pop ebx */
  EBX = (pop32());
  /* 11b176b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b176b8 ret  */
  ESPCHK(0x11b17570u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b9 @ 0x11b176b9 (9 bytes, 3 insns) */
void f_11b176b9(void) {
  FTRACE(0x11b176b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b176b9 call 0x11b137b9 */
  push32(0x11b176beu); f_11b137b9();
  /* 11b176be add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b176c1 ret  */
  ESPCHK(0x11b176b9u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c2 @ 0x11b176c2 (111 bytes, 44 insns) */
void f_11b176c2(void) {
  FTRACE(0x11b176c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b176c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b176c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b176c5 cmp dword ptr [0x11b1ed78], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed78))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b176cb jne 0x11b176e0 */
  if (!C.zf) goto L_11b176e0;
  /* 11b176cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b176d1 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b176d4 jl 0x11b1772f */
  if ((C.sf!=C.of)) goto L_11b1772f;
  /* 11b176d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b176d9 jg 0x11b1772f */
  if ((!C.zf&&C.sf==C.of)) goto L_11b1772f;
  /* 11b176db sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b176de pop ebx */
  EBX = (pop32());
  /* 11b176df ret  */
  ESPCHK(0x11b176c2u, _esp0);
  ESP += 4; return;
L_11b176e0:;
  /* 11b176e0 push esi */
  push32((uint32_t)(ESI));
  /* 11b176e1 mov esi, 0x11b1ee28 */
  ESI = (0x11b1ee28u);
  /* 11b176e6 push edi */
  push32((uint32_t)(EDI));
  /* 11b176e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b176e8 call dword ptr [0x11b19010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19010))), 0x11b176eeu);
  /* 11b176ee cmp dword ptr [0x11b1ee24], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1ee24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b176f4 mov edi, dword ptr [0x11b19020] */
  EDI = (r32((uint32_t)(0x11b19020)));
  /* 11b176fa je 0x11b1770a */
  if (C.zf) goto L_11b1770a;
  /* 11b176fc push esi */
  push32((uint32_t)(ESI));
  /* 11b176fd call edi */
  call_ind((uint32_t)(EDI), 0x11b176ffu);
  /* 11b176ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b17701 call 0x11b146c0 */
  push32(0x11b17706u); f_11b146c0();
  /* 11b17706 pop ecx */
  ECX = (pop32());
  /* 11b17707 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17709 pop ebx */
  EBX = (pop32());
L_11b1770a:;
  /* 11b1770a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b1770e call 0x11b17731 */
  push32(0x11b17713u); f_11b17731();
  /* 11b17713 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b17715 pop ecx */
  ECX = (pop32());
  /* 11b17716 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b1771a je 0x11b17726 */
  if (C.zf) goto L_11b17726;
  /* 11b1771c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b1771e call 0x11b14721 */
  push32(0x11b17723u); f_11b14721();
  /* 11b17723 pop ecx */
  ECX = (pop32());
  /* 11b17724 jmp 0x11b17729 */
  goto L_11b17729;
L_11b17726:;
  /* 11b17726 push esi */
  push32((uint32_t)(ESI));
  /* 11b17727 call edi */
  call_ind((uint32_t)(EDI), 0x11b17729u);
L_11b17729:;
  /* 11b17729 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b1772d pop edi */
  EDI = (pop32());
  /* 11b1772e pop esi */
  ESI = (pop32());
L_11b1772f:;
  /* 11b1772f pop ebx */
  EBX = (pop32());
  /* 11b17730 ret  */
  ESPCHK(0x11b176c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007731 @ 0x11b17731 (204 bytes, 71 insns) */
void f_11b17731(void) {
  FTRACE(0x11b17731u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17731 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17732 mov ebp, esp */
  EBP = (ESP);
  /* 11b17734 push ecx */
  push32((uint32_t)(ECX));
  /* 11b17735 cmp dword ptr [0x11b1ed78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b1ed78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1773c push ebx */
  push32((uint32_t)(EBX));
  /* 11b1773d jne 0x11b1775c */
  if (!C.zf) goto L_11b1775c;
  /* 11b1773f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17742 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17745 jl 0x11b177fa */
  if ((C.sf!=C.of)) goto L_11b177fa;
  /* 11b1774b cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1774e jg 0x11b177fa */
  if ((!C.zf&&C.sf==C.of)) goto L_11b177fa;
  /* 11b17754 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17757 jmp 0x11b177fa */
  goto L_11b177fa;
L_11b1775c:;
  /* 11b1775c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1775f cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17765 jge 0x11b1778f */
  if ((C.sf==C.of)) goto L_11b1778f;
  /* 11b17767 cmp dword ptr [0x11b1dd34], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b1dd34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1776e jle 0x11b1777c */
  if ((C.zf||C.sf!=C.of)) goto L_11b1777c;
  /* 11b17770 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b17772 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17773 call 0x11b177fd */
  push32(0x11b17778u); f_11b177fd();
  /* 11b17778 pop ecx */
  ECX = (pop32());
  /* 11b17779 pop ecx */
  ECX = (pop32());
  /* 11b1777a jmp 0x11b17787 */
  goto L_11b17787;
L_11b1777c:;
  /* 11b1777c mov eax, dword ptr [0x11b1db28] */
  EAX = (r32((uint32_t)(0x11b1db28)));
  /* 11b17781 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11b17784 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11b17787:;
  /* 11b17787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17789 jne 0x11b1778f */
  if (!C.zf) goto L_11b1778f;
L_11b1778b:;
  /* 11b1778b mov eax, ebx */
  EAX = (EBX);
  /* 11b1778d jmp 0x11b177fa */
  goto L_11b177fa;
L_11b1778f:;
  /* 11b1778f mov edx, dword ptr [0x11b1db28] */
  EDX = (r32((uint32_t)(0x11b1db28)));
  /* 11b17795 mov eax, ebx */
  EAX = (EBX);
  /* 11b17797 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b1779a movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11b1779d test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11b177a2 je 0x11b177b2 */
  if (C.zf) goto L_11b177b2;
  /* 11b177a4 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11b177a8 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11b177ab mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11b177ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11b177b0 jmp 0x11b177bb */
  goto L_11b177bb;
L_11b177b2:;
  /* 11b177b2 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11b177b6 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11b177b9 push 1 */
  push32((uint32_t)(0x1u));
L_11b177bb:;
  /* 11b177bb pop eax */
  EAX = (pop32());
  /* 11b177bc lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b177bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b177c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b177c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b177c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b177c6 push eax */
  push32((uint32_t)(EAX));
  /* 11b177c7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b177ca push eax */
  push32((uint32_t)(EAX));
  /* 11b177cb push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11b177d0 push dword ptr [0x11b1ed78] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ed78))));
  /* 11b177d6 call 0x11b17321 */
  push32(0x11b177dbu); f_11b17321();
  /* 11b177db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b177de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b177e0 je 0x11b1778b */
  if (C.zf) goto L_11b1778b;
  /* 11b177e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b177e5 jne 0x11b177ed */
  if (!C.zf) goto L_11b177ed;
  /* 11b177e7 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b177eb jmp 0x11b177fa */
  goto L_11b177fa;
L_11b177ed:;
  /* 11b177ed movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11b177f1 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11b177f5 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b177f8 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11b177fa:;
  /* 11b177fa pop ebx */
  EBX = (pop32());
  /* 11b177fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b177fc ret  */
  ESPCHK(0x11b17731u, _esp0);
  ESP += 4; return;
}

/* FUN_100077fd @ 0x11b177fd (117 bytes, 46 insns) */
void f_11b177fd(void) {
  FTRACE(0x11b177fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b177fd push ebp */
  push32((uint32_t)(EBP));
  /* 11b177fe mov ebp, esp */
  EBP = (ESP);
  /* 11b17800 push ecx */
  push32((uint32_t)(ECX));
  /* 11b17801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17804 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11b17807 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1780d ja 0x11b1781b */
  if ((!C.cf&&!C.zf)) goto L_11b1781b;
  /* 11b1780f mov ecx, dword ptr [0x11b1db28] */
  ECX = (r32((uint32_t)(0x11b1db28)));
  /* 11b17815 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11b17819 jmp 0x11b1786d */
  goto L_11b1786d;
L_11b1781b:;
  /* 11b1781b mov ecx, eax */
  ECX = (EAX);
  /* 11b1781d push esi */
  push32((uint32_t)(ESI));
  /* 11b1781e mov esi, dword ptr [0x11b1db28] */
  ESI = (r32((uint32_t)(0x11b1db28)));
  /* 11b17824 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11b17827 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11b1782a test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11b1782f pop esi */
  ESI = (pop32());
  /* 11b17830 je 0x11b17840 */
  if (C.zf) goto L_11b17840;
  /* 11b17832 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11b17836 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11b17839 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11b1783c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b1783e jmp 0x11b17849 */
  goto L_11b17849;
L_11b17840:;
  /* 11b17840 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11b17844 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11b17847 push 1 */
  push32((uint32_t)(0x1u));
L_11b17849:;
  /* 11b17849 pop eax */
  EAX = (pop32());
  /* 11b1784a lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11b1784d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1784f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b17851 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b17853 push ecx */
  push32((uint32_t)(ECX));
  /* 11b17854 push eax */
  push32((uint32_t)(EAX));
  /* 11b17855 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b17858 push eax */
  push32((uint32_t)(EAX));
  /* 11b17859 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b1785b call 0x11b17570 */
  push32(0x11b17860u); f_11b17570();
  /* 11b17860 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17865 jne 0x11b17869 */
  if (!C.zf) goto L_11b17869;
  /* 11b17867 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17868 ret  */
  ESPCHK(0x11b177fdu, _esp0);
  ESP += 4; return;
L_11b17869:;
  /* 11b17869 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11b1786d:;
  /* 11b1786d and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11b17870 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17871 ret  */
  ESPCHK(0x11b177fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x11b17880 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11b17880(void) {
  FTRACE(0x11b17880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17881 mov ebp, esp */
  EBP = (ESP);
  /* 11b17883 push edi */
  push32((uint32_t)(EDI));
  /* 11b17884 push esi */
  push32((uint32_t)(ESI));
  /* 11b17885 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b17888 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b1788b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1788e mov eax, ecx */
  EAX = (ECX);
  /* 11b17890 mov edx, ecx */
  EDX = (ECX);
  /* 11b17892 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17894 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17896 jbe 0x11b178a0 */
  if ((C.cf||C.zf)) goto L_11b178a0;
  /* 11b17898 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1789a jb 0x11b17a18 */
  if (C.cf) goto L_11b17a18;
L_11b178a0:;
  /* 11b178a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b178a6 jne 0x11b178bc */
  if (!C.zf) goto L_11b178bc;
  /* 11b178a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b178ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b178ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b178b1 jb 0x11b178dc */
  if (C.cf) goto L_11b178dc;
  /* 11b178b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b178b5 jmp dword ptr [edx*4 + 0x11b179c8] */
  switch (EDX) {
    case 0: goto L_11b179d8;
    case 1: goto L_11b179e0;
    case 2: goto L_11b179ec;
    case 3: goto L_11b17a00;
    default: x86_unimpl("switch@0x11b178b5 out of table"); return;
  }
L_11b178bc:;
  /* 11b178bc mov eax, edi */
  EAX = (EDI);
  /* 11b178be mov edx, 3 */
  EDX = (0x3u);
  /* 11b178c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b178c6 jb 0x11b178d4 */
  if (C.cf) goto L_11b178d4;
  /* 11b178c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b178cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b178cd jmp dword ptr [eax*4 + 0x11b178e0] */
  switch (EAX) {
    case 1: goto L_11b178f0;
    case 2: goto L_11b1791c;
    case 3: goto L_11b17940;
    default: x86_unimpl("switch@0x11b178cd out of table"); return;
  }
L_11b178d4:;
  /* 11b178d4 jmp dword ptr [ecx*4 + 0x11b179d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b179d8)))); return;
  /* 11b178db nop  */
  /* nop */
L_11b178dc:;
  /* 11b178dc jmp dword ptr [ecx*4 + 0x11b1795c] */
  switch (ECX) {
    case 0: goto L_11b179bf;
    case 1: goto L_11b179ac;
    case 2: goto L_11b179a4;
    case 3: goto L_11b1799c;
    case 4: goto L_11b17994;
    case 5: goto L_11b1798c;
    case 6: goto L_11b17984;
    case 7: goto L_11b1797c;
    default: x86_unimpl("switch@0x11b178dc out of table"); return;
  }
  /* 11b178e3 nop  */
  /* nop */
L_11b178f0:;
  /* 11b178f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b178f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b178f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b178f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b178f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b178fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b178ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b17902 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b17905 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17908 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1790b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1790e jb 0x11b178dc */
  if (C.cf) goto L_11b178dc;
  /* 11b17910 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17912 jmp dword ptr [edx*4 + 0x11b179c8] */
  switch (EDX) {
    case 0: goto L_11b179d8;
    case 1: goto L_11b179e0;
    case 2: goto L_11b179ec;
    case 3: goto L_11b17a00;
    default: x86_unimpl("switch@0x11b17912 out of table"); return;
  }
  /* 11b17919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b1791c:;
  /* 11b1791c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b1791e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b17920 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b17922 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b17925 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b17928 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b1792b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b1792e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17931 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17934 jb 0x11b178dc */
  if (C.cf) goto L_11b178dc;
  /* 11b17936 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17938 jmp dword ptr [edx*4 + 0x11b179c8] */
  switch (EDX) {
    case 0: goto L_11b179d8;
    case 1: goto L_11b179e0;
    case 2: goto L_11b179ec;
    case 3: goto L_11b17a00;
    default: x86_unimpl("switch@0x11b17938 out of table"); return;
  }
  /* 11b1793f nop  */
  /* nop */
L_11b17940:;
  /* 11b17940 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b17942 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b17944 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b17946 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b17947 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b1794a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b1794b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b1794e jb 0x11b178dc */
  if (C.cf) goto L_11b178dc;
  /* 11b17950 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17952 jmp dword ptr [edx*4 + 0x11b179c8] */
  switch (EDX) {
    case 0: goto L_11b179d8;
    case 1: goto L_11b179e0;
    case 2: goto L_11b179ec;
    case 3: goto L_11b17a00;
    default: x86_unimpl("switch@0x11b17952 out of table"); return;
  }
  /* 11b17959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b1797c:;
  /* 11b1797c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b17980 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b17984:;
  /* 11b17984 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b17988 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b1798c:;
  /* 11b1798c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b17990 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b17994:;
  /* 11b17994 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b17998 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b1799c:;
  /* 11b1799c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b179a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b179a4:;
  /* 11b179a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b179a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b179ac:;
  /* 11b179ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b179b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b179b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b179bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b179bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b179bf:;
  /* 11b179bf jmp dword ptr [edx*4 + 0x11b179c8] */
  switch (EDX) {
    case 0: goto L_11b179d8;
    case 1: goto L_11b179e0;
    case 2: goto L_11b179ec;
    case 3: goto L_11b17a00;
    default: x86_unimpl("switch@0x11b179bf out of table"); return;
  }
  /* 11b179c6 mov edi, edi */
  EDI = (EDI);
L_11b179d8:;
  /* 11b179d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b179db pop esi */
  ESI = (pop32());
  /* 11b179dc pop edi */
  EDI = (pop32());
  /* 11b179dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b179de ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b179df nop  */
  /* nop */
L_11b179e0:;
  /* 11b179e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b179e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b179e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b179e7 pop esi */
  ESI = (pop32());
  /* 11b179e8 pop edi */
  EDI = (pop32());
  /* 11b179e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b179ea ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b179eb nop  */
  /* nop */
L_11b179ec:;
  /* 11b179ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b179ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b179f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b179f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b179f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b179f9 pop esi */
  ESI = (pop32());
  /* 11b179fa pop edi */
  EDI = (pop32());
  /* 11b179fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b179fc ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b179fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b17a00:;
  /* 11b17a00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b17a02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b17a04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b17a07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b17a0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b17a0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b17a10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17a13 pop esi */
  ESI = (pop32());
  /* 11b17a14 pop edi */
  EDI = (pop32());
  /* 11b17a15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17a16 ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b17a17 nop  */
  /* nop */
L_11b17a18:;
  /* 11b17a18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b17a1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b17a20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b17a26 jne 0x11b17a4c */
  if (!C.zf) goto L_11b17a4c;
  /* 11b17a28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b17a2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b17a2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17a31 jb 0x11b17a40 */
  if (C.cf) goto L_11b17a40;
  /* 11b17a33 std  */
  C.df=1;
  /* 11b17a34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17a36 cld  */
  C.df=0;
  /* 11b17a37 jmp dword ptr [edx*4 + 0x11b17b60] */
  switch (EDX) {
    case 0: goto L_11b17b70;
    case 1: goto L_11b17b78;
    case 2: goto L_11b17b88;
    case 3: goto L_11b17b9c;
    default: x86_unimpl("switch@0x11b17a37 out of table"); return;
  }
  /* 11b17a3e mov edi, edi */
  EDI = (EDI);
L_11b17a40:;
  /* 11b17a40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b17a42 jmp dword ptr [ecx*4 + 0x11b17b10] */
  switch (ECX) {
    case 0: goto L_11b17b57;
    default: x86_unimpl("switch@0x11b17a42 out of table"); return;
  }
  /* 11b17a49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b17a4c:;
  /* 11b17a4c mov eax, edi */
  EAX = (EDI);
  /* 11b17a4e mov edx, 3 */
  EDX = (0x3u);
  /* 11b17a53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17a56 jb 0x11b17a64 */
  if (C.cf) goto L_11b17a64;
  /* 11b17a58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b17a5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17a5d jmp dword ptr [eax*4 + 0x11b17a68] */
  switch (EAX) {
    case 1: goto L_11b17a78;
    case 2: goto L_11b17a98;
    case 3: goto L_11b17ac0;
    default: x86_unimpl("switch@0x11b17a5d out of table"); return;
  }
L_11b17a64:;
  /* 11b17a64 jmp dword ptr [ecx*4 + 0x11b17b60] */
  switch (ECX) {
    case 0: goto L_11b17b70;
    case 1: goto L_11b17b78;
    case 2: goto L_11b17b88;
    case 3: goto L_11b17b9c;
    default: x86_unimpl("switch@0x11b17a64 out of table"); return;
  }
  /* 11b17a6b nop  */
  /* nop */
L_11b17a78:;
  /* 11b17a78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b17a7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b17a7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b17a80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b17a81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b17a84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b17a85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17a88 jb 0x11b17a40 */
  if (C.cf) goto L_11b17a40;
  /* 11b17a8a std  */
  C.df=1;
  /* 11b17a8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17a8d cld  */
  C.df=0;
  /* 11b17a8e jmp dword ptr [edx*4 + 0x11b17b60] */
  switch (EDX) {
    case 0: goto L_11b17b70;
    case 1: goto L_11b17b78;
    case 2: goto L_11b17b88;
    case 3: goto L_11b17b9c;
    default: x86_unimpl("switch@0x11b17a8e out of table"); return;
  }
  /* 11b17a95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b17a98:;
  /* 11b17a98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b17a9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b17a9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b17aa0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b17aa3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b17aa6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b17aa9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17aac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17aaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17ab2 jb 0x11b17a40 */
  if (C.cf) goto L_11b17a40;
  /* 11b17ab4 std  */
  C.df=1;
  /* 11b17ab5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17ab7 cld  */
  C.df=0;
  /* 11b17ab8 jmp dword ptr [edx*4 + 0x11b17b60] */
  switch (EDX) {
    case 0: goto L_11b17b70;
    case 1: goto L_11b17b78;
    case 2: goto L_11b17b88;
    case 3: goto L_11b17b9c;
    default: x86_unimpl("switch@0x11b17ab8 out of table"); return;
  }
  /* 11b17abf nop  */
  /* nop */
L_11b17ac0:;
  /* 11b17ac0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b17ac3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b17ac5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b17ac8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b17acb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b17ace mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b17ad1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b17ad4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b17ad7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17ada sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17add cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17ae0 jb 0x11b17a40 */
  if (C.cf) goto L_11b17a40;
  /* 11b17ae6 std  */
  C.df=1;
  /* 11b17ae7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b17ae9 cld  */
  C.df=0;
  /* 11b17aea jmp dword ptr [edx*4 + 0x11b17b60] */
  switch (EDX) {
    case 0: goto L_11b17b70;
    case 1: goto L_11b17b78;
    case 2: goto L_11b17b88;
    case 3: goto L_11b17b9c;
    default: x86_unimpl("switch@0x11b17aea out of table"); return;
  }
  /* 11b17af1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b17af4 adc al, 0x7b */
  { uint32_t _a=(AL),_b=(0x7bu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b17af6 mov cl, 0x11 */
  CL = (0x11u);
  /* 11b17af8 sbb al, 0x7b */
  { uint32_t _a=(AL),_b=(0x7bu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b17afa mov cl, 0x11 */
  CL = (0x11u);
  /* 11b17afc and al, 0x7b */
  { uint32_t _r=(AL)&(0x7bu); AL = (_r); fl_logic(_r,8); }
  /* 11b17afe mov cl, 0x11 */
  CL = (0x11u);
  /* 11b17b00 sub al, 0x7b */
  { uint32_t _a=(AL),_b=(0x7bu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b17b02 mov cl, 0x11 */
  CL = (0x11u);
  /* 11b17b04 xor al, 0x7b */
  { uint32_t _r=(AL)^(0x7bu); AL = (_r); fl_logic(_r,8); }
  /* 11b17b06 mov cl, 0x11 */
  CL = (0x11u);
  /* 11b17b08 cmp al, 0x7b */
  { uint32_t _a=(AL),_b=(0x7bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17b0a mov cl, 0x11 */
  CL = (0x11u);
  /* 11b17b0c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11b17b0d jnp 0x11b17ac0 */
  if (!C.pf) goto L_11b17ac0;
  /* 11b17b14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b17b18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b17b1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b17b20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b17b24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b17b28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b17b2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b17b30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b17b34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b17b38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b17b3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b17b40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b17b44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b17b48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b17b4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b17b53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17b55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b17b57:;
  /* 11b17b57 jmp dword ptr [edx*4 + 0x11b17b60] */
  switch (EDX) {
    case 0: goto L_11b17b70;
    case 1: goto L_11b17b78;
    case 2: goto L_11b17b88;
    case 3: goto L_11b17b9c;
    default: x86_unimpl("switch@0x11b17b57 out of table"); return;
  }
  /* 11b17b5e mov edi, edi */
  EDI = (EDI);
L_11b17b70:;
  /* 11b17b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17b73 pop esi */
  ESI = (pop32());
  /* 11b17b74 pop edi */
  EDI = (pop32());
  /* 11b17b75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17b76 ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b17b77 nop  */
  /* nop */
L_11b17b78:;
  /* 11b17b78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b17b7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b17b7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17b81 pop esi */
  ESI = (pop32());
  /* 11b17b82 pop edi */
  EDI = (pop32());
  /* 11b17b83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17b84 ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b17b85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b17b88:;
  /* 11b17b88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b17b8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b17b8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b17b91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b17b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17b97 pop esi */
  ESI = (pop32());
  /* 11b17b98 pop edi */
  EDI = (pop32());
  /* 11b17b99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17b9a ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
  /* 11b17b9b nop  */
  /* nop */
L_11b17b9c:;
  /* 11b17b9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b17b9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b17ba2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b17ba5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b17ba8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b17bab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b17bae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b17bb1 pop esi */
  ESI = (pop32());
  /* 11b17bb2 pop edi */
  EDI = (pop32());
  /* 11b17bb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17bb4 ret  */
  ESPCHK(0x11b17880u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11b17bf4 (63 bytes, 24 insns) */
void f_11b17bf4(void) {
  FTRACE(0x11b17bf4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17bf4 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17bf5 mov ebp, esp */
  EBP = (ESP);
  /* 11b17bf7 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17bfb jne 0x11b17c01 */
  if (!C.zf) goto L_11b17c01;
  /* 11b17bfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b17bff pop ebp */
  EBP = (pop32());
  /* 11b17c00 ret  */
  ESPCHK(0x11b17bf4u, _esp0);
  ESP += 4; return;
L_11b17c01:;
  /* 11b17c01 push dword ptr [0x11b1ee48] */
  push32((uint32_t)(r32((uint32_t)(0x11b1ee48))));
  /* 11b17c07 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17c0a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b17c0d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17c10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b17c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17c15 push dword ptr [0x11b1f064] */
  push32((uint32_t)(r32((uint32_t)(0x11b1f064))));
  /* 11b17c1b call 0x11b17ca1 */
  push32(0x11b17c20u); f_11b17ca1();
  /* 11b17c20 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17c25 jne 0x11b17c2e */
  if (!C.zf) goto L_11b17c2e;
  /* 11b17c27 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11b17c2c pop ebp */
  EBP = (pop32());
  /* 11b17c2d ret  */
  ESPCHK(0x11b17bf4u, _esp0);
  ESP += 4; return;
L_11b17c2e:;
  /* 11b17c2e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17c31 pop ebp */
  EBP = (pop32());
  /* 11b17c32 ret  */
  ESPCHK(0x11b17bf4u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c33 @ 0x11b17c33 (110 bytes, 58 insns) */
void f_11b17c33(void) {
  FTRACE(0x11b17c33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11b17c34 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17c35 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17c36 push esi */
  push32((uint32_t)(ESI));
  /* 11b17c37 mov esi, dword ptr [0x11b1eb0c] */
  ESI = (r32((uint32_t)(0x11b1eb0c)));
  /* 11b17c3d push edi */
  push32((uint32_t)(EDI));
  /* 11b17c3e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b17c40 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b17c42 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17c44 je 0x11b17c94 */
  if (C.zf) goto L_11b17c94;
  /* 11b17c46 mov ebx, dword ptr [0x11b19084] */
  EBX = (r32((uint32_t)(0x11b19084)));
L_11b17c4c:;
  /* 11b17c4c push edi */
  push32((uint32_t)(EDI));
  /* 11b17c4d push edi */
  push32((uint32_t)(EDI));
  /* 11b17c4e push edi */
  push32((uint32_t)(EDI));
  /* 11b17c4f push edi */
  push32((uint32_t)(EDI));
  /* 11b17c50 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b17c52 push eax */
  push32((uint32_t)(EAX));
  /* 11b17c53 push edi */
  push32((uint32_t)(EDI));
  /* 11b17c54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17c56 call ebx */
  call_ind((uint32_t)(EBX), 0x11b17c58u);
  /* 11b17c58 mov ebp, eax */
  EBP = (EAX);
  /* 11b17c5a cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17c5c je 0x11b17c9c */
  if (C.zf) goto L_11b17c9c;
  /* 11b17c5e push ebp */
  push32((uint32_t)(EBP));
  /* 11b17c5f call 0x11b14de1 */
  push32(0x11b17c64u); f_11b14de1();
  /* 11b17c64 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17c66 pop ecx */
  ECX = (pop32());
  /* 11b17c67 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b17c6b je 0x11b17c9c */
  if (C.zf) goto L_11b17c9c;
  /* 11b17c6d push edi */
  push32((uint32_t)(EDI));
  /* 11b17c6e push edi */
  push32((uint32_t)(EDI));
  /* 11b17c6f push ebp */
  push32((uint32_t)(EBP));
  /* 11b17c70 push eax */
  push32((uint32_t)(EAX));
  /* 11b17c71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b17c73 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b17c75 push edi */
  push32((uint32_t)(EDI));
  /* 11b17c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17c78 call ebx */
  call_ind((uint32_t)(EBX), 0x11b17c7au);
  /* 11b17c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17c7c je 0x11b17c9c */
  if (C.zf) goto L_11b17c9c;
  /* 11b17c7e push edi */
  push32((uint32_t)(EDI));
  /* 11b17c7f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11b17c83 call 0x11b17f1e */
  push32(0x11b17c88u); f_11b17f1e();
  /* 11b17c88 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b17c8b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17c8e pop ecx */
  ECX = (pop32());
  /* 11b17c8f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17c91 pop ecx */
  ECX = (pop32());
  /* 11b17c92 jne 0x11b17c4c */
  if (!C.zf) goto L_11b17c4c;
L_11b17c94:;
  /* 11b17c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b17c96:;
  /* 11b17c96 pop edi */
  EDI = (pop32());
  /* 11b17c97 pop esi */
  ESI = (pop32());
  /* 11b17c98 pop ebp */
  EBP = (pop32());
  /* 11b17c99 pop ebx */
  EBX = (pop32());
  /* 11b17c9a pop ecx */
  ECX = (pop32());
  /* 11b17c9b ret  */
  ESPCHK(0x11b17c33u, _esp0);
  ESP += 4; return;
L_11b17c9c:;
  /* 11b17c9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b17c9f jmp 0x11b17c96 */
  goto L_11b17c96;
}

/* FUN_10007ca1 @ 0x11b17ca1 (597 bytes, 239 insns) */
void f_11b17ca1(void) {
  FTRACE(0x11b17ca1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17ca1 push ebp */
  push32((uint32_t)(EBP));
  /* 11b17ca2 mov ebp, esp */
  EBP = (ESP);
  /* 11b17ca4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b17ca6 push 0x11b195d0 */
  push32((uint32_t)(0x11b195d0u));
  /* 11b17cab push 0x11b170b0 */
  push32((uint32_t)(0x11b170b0u));
  /* 11b17cb0 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b17cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11b17cb7 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b17cbe sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17cc1 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17cc2 push esi */
  push32((uint32_t)(ESI));
  /* 11b17cc3 push edi */
  push32((uint32_t)(EDI));
  /* 11b17cc4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17cc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b17cc9 cmp dword ptr [0x11b1eda4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b1eda4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17cd1 pop edi */
  EDI = (pop32());
  /* 11b17cd2 jne 0x11b17d14 */
  if (!C.zf) goto L_11b17d14;
  /* 11b17cd4 push edi */
  push32((uint32_t)(EDI));
  /* 11b17cd5 mov eax, 0x11b195a0 */
  EAX = (0x11b195a0u);
  /* 11b17cda push eax */
  push32((uint32_t)(EAX));
  /* 11b17cdb push edi */
  push32((uint32_t)(EDI));
  /* 11b17cdc push eax */
  push32((uint32_t)(EAX));
  /* 11b17cdd push ebx */
  push32((uint32_t)(EBX));
  /* 11b17cde push ebx */
  push32((uint32_t)(EBX));
  /* 11b17cdf call dword ptr [0x11b1900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1900c))), 0x11b17ce5u);
  /* 11b17ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17ce7 je 0x11b17cf1 */
  if (C.zf) goto L_11b17cf1;
  /* 11b17ce9 mov dword ptr [0x11b1eda4], edi */
  w32((uint32_t)(0x11b1eda4), (EDI));
  /* 11b17cef jmp 0x11b17d14 */
  goto L_11b17d14;
L_11b17cf1:;
  /* 11b17cf1 push edi */
  push32((uint32_t)(EDI));
  /* 11b17cf2 mov eax, 0x11b1959c */
  EAX = (0x11b1959cu);
  /* 11b17cf7 push eax */
  push32((uint32_t)(EAX));
  /* 11b17cf8 push edi */
  push32((uint32_t)(EDI));
  /* 11b17cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11b17cfa push ebx */
  push32((uint32_t)(EBX));
  /* 11b17cfb push ebx */
  push32((uint32_t)(EBX));
  /* 11b17cfc call dword ptr [0x11b19014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19014))), 0x11b17d02u);
  /* 11b17d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17d04 je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17d0a mov dword ptr [0x11b1eda4], 2 */
  w32((uint32_t)(0x11b1eda4), (0x2u));
L_11b17d14:;
  /* 11b17d14 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11b17d17 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d19 jle 0x11b17d2b */
  if ((C.zf||C.sf!=C.of)) goto L_11b17d2b;
  /* 11b17d1b push esi */
  push32((uint32_t)(ESI));
  /* 11b17d1c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17d1f call 0x11b17545 */
  push32(0x11b17d24u); f_11b17545();
  /* 11b17d24 pop ecx */
  ECX = (pop32());
  /* 11b17d25 pop ecx */
  ECX = (pop32());
  /* 11b17d26 mov esi, eax */
  ESI = (EAX);
  /* 11b17d28 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11b17d2b:;
  /* 11b17d2b cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d2e jle 0x11b17d40 */
  if ((C.zf||C.sf!=C.of)) goto L_11b17d40;
  /* 11b17d30 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b17d33 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b17d36 call 0x11b17545 */
  push32(0x11b17d3bu); f_11b17545();
  /* 11b17d3b pop ecx */
  ECX = (pop32());
  /* 11b17d3c pop ecx */
  ECX = (pop32());
  /* 11b17d3d mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11b17d40:;
  /* 11b17d40 mov eax, dword ptr [0x11b1eda4] */
  EAX = (r32((uint32_t)(0x11b1eda4)));
  /* 11b17d45 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d48 jne 0x11b17d65 */
  if (!C.zf) goto L_11b17d65;
  /* 11b17d4a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b17d4d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b17d50 push esi */
  push32((uint32_t)(ESI));
  /* 11b17d51 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17d54 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b17d57 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b17d5a call dword ptr [0x11b19014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19014))), 0x11b17d60u);
  /* 11b17d60 jmp 0x11b17f0c */
  goto L_11b17f0c;
L_11b17d65:;
  /* 11b17d65 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d67 jne 0x11b17f0a */
  if (!C.zf) goto L_11b17f0a;
  /* 11b17d6d cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d70 jne 0x11b17d7a */
  if (!C.zf) goto L_11b17d7a;
  /* 11b17d72 mov eax, dword ptr [0x11b1ed88] */
  EAX = (r32((uint32_t)(0x11b1ed88)));
  /* 11b17d77 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11b17d7a:;
  /* 11b17d7a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d7c je 0x11b17d87 */
  if (C.zf) goto L_11b17d87;
  /* 11b17d7e cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d81 jne 0x11b17e1f */
  if (!C.zf) goto L_11b17e1f;
L_11b17d87:;
  /* 11b17d87 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d8a jne 0x11b17d94 */
  if (!C.zf) goto L_11b17d94;
L_11b17d8c:;
  /* 11b17d8c push 2 */
  push32((uint32_t)(0x2u));
L_11b17d8e:;
  /* 11b17d8e pop eax */
  EAX = (pop32());
  /* 11b17d8f jmp 0x11b17f0c */
  goto L_11b17f0c;
L_11b17d94:;
  /* 11b17d94 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17d97 jle 0x11b17da0 */
  if ((C.zf||C.sf!=C.of)) goto L_11b17da0;
L_11b17d99:;
  /* 11b17d99 mov eax, edi */
  EAX = (EDI);
  /* 11b17d9b jmp 0x11b17f0c */
  goto L_11b17f0c;
L_11b17da0:;
  /* 11b17da0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17da2 jg 0x11b17de5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b17de5;
  /* 11b17da4 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11b17da7 push eax */
  push32((uint32_t)(EAX));
  /* 11b17da8 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17dab call dword ptr [0x11b19048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19048))), 0x11b17db1u);
  /* 11b17db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17db3 je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17db9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17dbb jle 0x11b17de9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b17de9;
  /* 11b17dbd cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17dc1 jb 0x11b17de5 */
  if (C.cf) goto L_11b17de5;
  /* 11b17dc3 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11b17dc6 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17dc9 je 0x11b17de5 */
  if (C.zf) goto L_11b17de5;
L_11b17dcb:;
  /* 11b17dcb mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b17dce cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17dd0 je 0x11b17de5 */
  if (C.zf) goto L_11b17de5;
  /* 11b17dd2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b17dd5 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11b17dd7 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17dd9 jb 0x11b17ddf */
  if (C.cf) goto L_11b17ddf;
  /* 11b17ddb cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17ddd jbe 0x11b17d8c */
  if ((C.cf||C.zf)) goto L_11b17d8c;
L_11b17ddf:;
  /* 11b17ddf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b17de0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b17de1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17de3 jne 0x11b17dcb */
  if (!C.zf) goto L_11b17dcb;
L_11b17de5:;
  /* 11b17de5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b17de7 jmp 0x11b17d8e */
  goto L_11b17d8e;
L_11b17de9:;
  /* 11b17de9 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17dec jle 0x11b17e1f */
  if ((C.zf||C.sf!=C.of)) goto L_11b17e1f;
  /* 11b17dee cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17df2 jb 0x11b17d99 */
  if (C.cf) goto L_11b17d99;
  /* 11b17df4 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11b17df7 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17dfa je 0x11b17d99 */
  if (C.zf) goto L_11b17d99;
L_11b17dfc:;
  /* 11b17dfc mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b17dff cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17e01 je 0x11b17d99 */
  if (C.zf) goto L_11b17d99;
  /* 11b17e03 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b17e06 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11b17e08 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17e0a jb 0x11b17e14 */
  if (C.cf) goto L_11b17e14;
  /* 11b17e0c cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17e0e jbe 0x11b17d8c */
  if ((C.cf||C.zf)) goto L_11b17d8c;
L_11b17e14:;
  /* 11b17e14 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b17e15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b17e16 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17e18 jne 0x11b17dfc */
  if (!C.zf) goto L_11b17dfc;
  /* 11b17e1a jmp 0x11b17d99 */
  goto L_11b17d99;
L_11b17e1f:;
  /* 11b17e1f push ebx */
  push32((uint32_t)(EBX));
  /* 11b17e20 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17e21 push esi */
  push32((uint32_t)(ESI));
  /* 11b17e22 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17e25 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b17e27 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17e2a call dword ptr [0x11b19028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19028))), 0x11b17e30u);
  /* 11b17e30 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b17e33 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17e35 je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17e3b mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b17e3e add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17e40 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17e43 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b17e45 call 0x11b15b70 */
  push32(0x11b17e4au); f_11b15b70();
  /* 11b17e4a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17e4d mov eax, esp */
  EAX = (ESP);
  /* 11b17e4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b17e52 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b17e56 jmp 0x11b17e6e */
  goto L_11b17e6e;
  /* 11b17e58 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17e5a pop eax */
  EAX = (pop32());
  /* 11b17e5b ret  */
  ESPCHK(0x11b17ca1u, _esp0);
  ESP += 4; return;
  /* 11b17e5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b17e5f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b17e61 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11b17e64 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b17e68 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11b17e6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17e6d pop edi */
  EDI = (pop32());
L_11b17e6e:;
  /* 11b17e6e cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17e71 je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17e77 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b17e7a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b17e7d push esi */
  push32((uint32_t)(ESI));
  /* 11b17e7e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b17e81 push edi */
  push32((uint32_t)(EDI));
  /* 11b17e82 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17e85 mov esi, dword ptr [0x11b19028] */
  ESI = (r32((uint32_t)(0x11b19028)));
  /* 11b17e8b call esi */
  call_ind((uint32_t)(ESI), 0x11b17e8du);
  /* 11b17e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17e8f je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17e91 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17e92 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17e93 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b17e96 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b17e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b17e9b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17e9e call esi */
  call_ind((uint32_t)(ESI), 0x11b17ea0u);
  /* 11b17ea0 mov esi, eax */
  ESI = (EAX);
  /* 11b17ea2 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11b17ea5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17ea7 je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17ea9 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b17eac lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11b17eaf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b17eb2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b17eb4 call 0x11b15b70 */
  push32(0x11b17eb9u); f_11b15b70();
  /* 11b17eb9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b17ebc mov edi, esp */
  EDI = (ESP);
  /* 11b17ebe mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11b17ec1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b17ec5 jmp 0x11b17ed9 */
  goto L_11b17ed9;
  /* 11b17ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17ec9 pop eax */
  EAX = (pop32());
  /* 11b17eca ret  */
  ESPCHK(0x11b17ca1u, _esp0);
  ESP += 4; return;
  /* 11b17ecb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b17ece xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b17ed0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b17ed2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b17ed6 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11b17ed9:;
  /* 11b17ed9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17edb je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17edd push esi */
  push32((uint32_t)(ESI));
  /* 11b17ede push edi */
  push32((uint32_t)(EDI));
  /* 11b17edf push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b17ee2 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b17ee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b17ee7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b17eea call dword ptr [0x11b19028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19028))), 0x11b17ef0u);
  /* 11b17ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17ef2 je 0x11b17f0a */
  if (C.zf) goto L_11b17f0a;
  /* 11b17ef4 push esi */
  push32((uint32_t)(ESI));
  /* 11b17ef5 push edi */
  push32((uint32_t)(EDI));
  /* 11b17ef6 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b17ef9 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b17efc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b17eff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b17f02 call dword ptr [0x11b1900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b1900c))), 0x11b17f08u);
  /* 11b17f08 jmp 0x11b17f0c */
  goto L_11b17f0c;
L_11b17f0a:;
  /* 11b17f0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b17f0c:;
  /* 11b17f0c lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11b17f0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b17f12 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b17f19 pop edi */
  EDI = (pop32());
  /* 11b17f1a pop esi */
  ESI = (pop32());
  /* 11b17f1b pop ebx */
  EBX = (pop32());
  /* 11b17f1c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17f1d ret  */
  ESPCHK(0x11b17ca1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f1e @ 0x11b17f1e (391 bytes, 155 insns) */
void f_11b17f1e(void) {
  FTRACE(0x11b17f1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b17f1e push ebp */
  push32((uint32_t)(EBP));
  /* 11b17f1f mov ebp, esp */
  EBP = (ESP);
  /* 11b17f21 push ecx */
  push32((uint32_t)(ECX));
  /* 11b17f22 push ecx */
  push32((uint32_t)(ECX));
  /* 11b17f23 push ebx */
  push32((uint32_t)(EBX));
  /* 11b17f24 push esi */
  push32((uint32_t)(ESI));
  /* 11b17f25 push edi */
  push32((uint32_t)(EDI));
  /* 11b17f26 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b17f28 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f2b je 0x11b17f82 */
  if (C.zf) goto L_11b17f82;
  /* 11b17f2d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11b17f2f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b17f32 call 0x11b18519 */
  push32(0x11b17f37u); f_11b18519();
  /* 11b17f37 mov esi, eax */
  ESI = (EAX);
  /* 11b17f39 pop ecx */
  ECX = (pop32());
  /* 11b17f3a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f3c pop ecx */
  ECX = (pop32());
  /* 11b17f3d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11b17f40 je 0x11b17f82 */
  if (C.zf) goto L_11b17f82;
  /* 11b17f42 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f45 je 0x11b17f82 */
  if (C.zf) goto L_11b17f82;
  /* 11b17f47 mov eax, dword ptr [0x11b1eb04] */
  EAX = (r32((uint32_t)(0x11b1eb04)));
  /* 11b17f4c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b17f4e cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b17f51 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11b17f54 cmp eax, dword ptr [0x11b1eb08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1eb08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f5a jne 0x11b17f68 */
  if (!C.zf) goto L_11b17f68;
  /* 11b17f5c push eax */
  push32((uint32_t)(EAX));
  /* 11b17f5d call 0x11b180fd */
  push32(0x11b17f62u); f_11b180fd();
  /* 11b17f62 pop ecx */
  ECX = (pop32());
  /* 11b17f63 mov dword ptr [0x11b1eb04], eax */
  w32((uint32_t)(0x11b1eb04), (EAX));
L_11b17f68:;
  /* 11b17f68 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f6a jne 0x11b17fc0 */
  if (!C.zf) goto L_11b17fc0;
  /* 11b17f6c cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f6f je 0x11b17f8a */
  if (C.zf) goto L_11b17f8a;
  /* 11b17f71 cmp dword ptr [0x11b1eb0c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1eb0c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f77 je 0x11b17f8a */
  if (C.zf) goto L_11b17f8a;
  /* 11b17f79 call 0x11b17c33 */
  push32(0x11b17f7eu); f_11b17c33();
  /* 11b17f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b17f80 je 0x11b17fc0 */
  if (C.zf) goto L_11b17fc0;
L_11b17f82:;
  /* 11b17f82 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b17f85:;
  /* 11b17f85 pop edi */
  EDI = (pop32());
  /* 11b17f86 pop esi */
  ESI = (pop32());
  /* 11b17f87 pop ebx */
  EBX = (pop32());
  /* 11b17f88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b17f89 ret  */
  ESPCHK(0x11b17f1eu, _esp0);
  ESP += 4; return;
L_11b17f8a:;
  /* 11b17f8a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f8c jne 0x11b1809e */
  if (!C.zf) goto L_11b1809e;
  /* 11b17f92 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b17f94 call 0x11b14de1 */
  push32(0x11b17f99u); f_11b14de1();
  /* 11b17f99 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17f9b pop ecx */
  ECX = (pop32());
  /* 11b17f9c mov dword ptr [0x11b1eb04], eax */
  w32((uint32_t)(0x11b1eb04), (EAX));
  /* 11b17fa1 je 0x11b17f82 */
  if (C.zf) goto L_11b17f82;
  /* 11b17fa3 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11b17fa5 cmp dword ptr [0x11b1eb0c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b1eb0c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17fab jne 0x11b17fc0 */
  if (!C.zf) goto L_11b17fc0;
  /* 11b17fad push 4 */
  push32((uint32_t)(0x4u));
  /* 11b17faf call 0x11b14de1 */
  push32(0x11b17fb4u); f_11b14de1();
  /* 11b17fb4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17fb6 pop ecx */
  ECX = (pop32());
  /* 11b17fb7 mov dword ptr [0x11b1eb0c], eax */
  w32((uint32_t)(0x11b1eb0c), (EAX));
  /* 11b17fbc je 0x11b17f82 */
  if (C.zf) goto L_11b17f82;
  /* 11b17fbe mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11b17fc0:;
  /* 11b17fc0 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b17fc3 mov edi, dword ptr [0x11b1eb04] */
  EDI = (r32((uint32_t)(0x11b1eb04)));
  /* 11b17fc9 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b17fcc push esi */
  push32((uint32_t)(ESI));
  /* 11b17fcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b17fd0 call 0x11b180a5 */
  push32(0x11b17fd5u); f_11b180a5();
  /* 11b17fd5 mov esi, eax */
  ESI = (EAX);
  /* 11b17fd7 pop ecx */
  ECX = (pop32());
  /* 11b17fd8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b17fda pop ecx */
  ECX = (pop32());
  /* 11b17fdb jl 0x11b18020 */
  if ((C.sf!=C.of)) goto L_11b18020;
  /* 11b17fdd cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17fe0 je 0x11b18020 */
  if (C.zf) goto L_11b18020;
  /* 11b17fe2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b17fe4 je 0x11b18018 */
  if (C.zf) goto L_11b18018;
  /* 11b17fe6 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11b17fe9 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11b17fec call 0x11b14736 */
  push32(0x11b17ff1u); f_11b14736();
  /* 11b17ff1 pop ecx */
  ECX = (pop32());
L_11b17ff2:;
  /* 11b17ff2 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b17ff5 je 0x11b18002 */
  if (C.zf) goto L_11b18002;
  /* 11b17ff7 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11b17ffa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b17ffb mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b17ffd add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18000 jmp 0x11b17ff2 */
  goto L_11b17ff2;
L_11b18002:;
  /* 11b18002 mov eax, esi */
  EAX = (ESI);
  /* 11b18004 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b18007 push eax */
  push32((uint32_t)(EAX));
  /* 11b18008 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11b1800b call 0x11b181ea */
  push32(0x11b18010u); f_11b181ea();
  /* 11b18010 pop ecx */
  ECX = (pop32());
  /* 11b18011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b18013 pop ecx */
  ECX = (pop32());
  /* 11b18014 je 0x11b18052 */
  if (C.zf) goto L_11b18052;
  /* 11b18016 jmp 0x11b1804d */
  goto L_11b1804d;
L_11b18018:;
  /* 11b18018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b1801b mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11b1801e jmp 0x11b18052 */
  goto L_11b18052;
L_11b18020:;
  /* 11b18020 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b18022 jne 0x11b1809e */
  if (!C.zf) goto L_11b1809e;
  /* 11b18024 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b18026 jge 0x11b1802a */
  if ((C.sf==C.of)) goto L_11b1802a;
  /* 11b18028 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11b1802a:;
  /* 11b1802a lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11b18031 push eax */
  push32((uint32_t)(EAX));
  /* 11b18032 push edi */
  push32((uint32_t)(EDI));
  /* 11b18033 call 0x11b181ea */
  push32(0x11b18038u); f_11b181ea();
  /* 11b18038 pop ecx */
  ECX = (pop32());
  /* 11b18039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b1803b pop ecx */
  ECX = (pop32());
  /* 11b1803c je 0x11b17f82 */
  if (C.zf) goto L_11b17f82;
  /* 11b18042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b18045 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11b18048 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11b1804d:;
  /* 11b1804d mov dword ptr [0x11b1eb04], eax */
  w32((uint32_t)(0x11b1eb04), (EAX));
L_11b18052:;
  /* 11b18052 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b18056 je 0x11b1809e */
  if (C.zf) goto L_11b1809e;
  /* 11b18058 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b1805b call 0x11b15010 */
  push32(0x11b18060u); f_11b15010();
  /* 11b18060 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b18061 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b18062 push eax */
  push32((uint32_t)(EAX));
  /* 11b18063 call 0x11b14de1 */
  push32(0x11b18068u); f_11b14de1();
  /* 11b18068 mov esi, eax */
  ESI = (EAX);
  /* 11b1806a pop ecx */
  ECX = (pop32());
  /* 11b1806b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b1806d pop ecx */
  ECX = (pop32());
  /* 11b1806e je 0x11b1809e */
  if (C.zf) goto L_11b1809e;
  /* 11b18070 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b18073 push esi */
  push32((uint32_t)(ESI));
  /* 11b18074 call 0x11b14f20 */
  push32(0x11b18079u); f_11b14f20();
  /* 11b18079 mov eax, esi */
  EAX = (ESI);
  /* 11b1807b pop ecx */
  ECX = (pop32());
  /* 11b1807c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1807f pop ecx */
  ECX = (pop32());
  /* 11b18080 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b18083 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11b18086 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b18087 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b18089 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b1808b not ebx */
  EBX = (~(EBX));
  /* 11b1808d and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11b1808f push ebx */
  push32((uint32_t)(EBX));
  /* 11b18090 push esi */
  push32((uint32_t)(ESI));
  /* 11b18091 call dword ptr [0x11b19008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b19008))), 0x11b18097u);
  /* 11b18097 push esi */
  push32((uint32_t)(ESI));
  /* 11b18098 call 0x11b14736 */
  push32(0x11b1809du); f_11b14736();
  /* 11b1809d pop ecx */
  ECX = (pop32());
L_11b1809e:;
  /* 11b1809e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b180a0 jmp 0x11b17f85 */
  goto L_11b17f85;
}

/* FUN_100080a5 @ 0x11b180a5 (88 bytes, 35 insns) */
void f_11b180a5(void) {
  FTRACE(0x11b180a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b180a5 push esi */
  push32((uint32_t)(ESI));
  /* 11b180a6 mov esi, dword ptr [0x11b1eb04] */
  ESI = (r32((uint32_t)(0x11b1eb04)));
  /* 11b180ac push edi */
  push32((uint32_t)(EDI));
  /* 11b180ad mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b180af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b180b1 je 0x11b180e0 */
  if (C.zf) goto L_11b180e0;
  /* 11b180b3 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11b180b7:;
  /* 11b180b7 push edi */
  push32((uint32_t)(EDI));
  /* 11b180b8 push eax */
  push32((uint32_t)(EAX));
  /* 11b180b9 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11b180bd call 0x11b17bf4 */
  push32(0x11b180c2u); f_11b17bf4();
  /* 11b180c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b180c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b180c7 jne 0x11b180d6 */
  if (!C.zf) goto L_11b180d6;
  /* 11b180c9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b180cb mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11b180ce cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b180d0 je 0x11b180f0 */
  if (C.zf) goto L_11b180f0;
  /* 11b180d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b180d4 je 0x11b180f0 */
  if (C.zf) goto L_11b180f0;
L_11b180d6:;
  /* 11b180d6 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11b180d9 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b180dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b180de jne 0x11b180b7 */
  if (!C.zf) goto L_11b180b7;
L_11b180e0:;
  /* 11b180e0 mov eax, esi */
  EAX = (ESI);
  /* 11b180e2 sub eax, dword ptr [0x11b1eb04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1eb04))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b180e8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b180eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11b180ed:;
  /* 11b180ed pop edi */
  EDI = (pop32());
  /* 11b180ee pop esi */
  ESI = (pop32());
  /* 11b180ef ret  */
  ESPCHK(0x11b180a5u, _esp0);
  ESP += 4; return;
L_11b180f0:;
  /* 11b180f0 mov eax, esi */
  EAX = (ESI);
  /* 11b180f2 sub eax, dword ptr [0x11b1eb04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b1eb04))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b180f8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b180fb jmp 0x11b180ed */
  goto L_11b180ed;
}

