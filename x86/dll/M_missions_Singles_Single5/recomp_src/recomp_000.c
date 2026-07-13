#include "recomp.h"

/* FUN_10001000 @ 0x11831000 (20 bytes, 6 insns) */
void f_11831000(void) {
  FTRACE(0x11831000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11831000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11831004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11831005 jne 0x1183100c */
  if (!C.zf) goto L_1183100c;
  /* 11831007 call 0x118311d0 */
  push32(0x1183100cu); f_118311d0();
L_1183100c:;
  /* 1183100c mov eax, 1 */
  EAX = (0x1u);
  /* 11831011 ret 0xc */
  ESPCHK(0x11831000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x118311d0 (769 bytes, 203 insns) */
void f_118311d0(void) {
  FTRACE(0x118311d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118311d0 push ebx */
  push32((uint32_t)(EBX));
  /* 118311d1 mov ebx, dword ptr [0x1183a19c] */
  EBX = (r32((uint32_t)(0x1183a19c)));
  /* 118311d7 push ebp */
  push32((uint32_t)(EBP));
  /* 118311d8 push esi */
  push32((uint32_t)(ESI));
  /* 118311d9 push edi */
  push32((uint32_t)(EDI));
  /* 118311da push 8 */
  push32((uint32_t)(0x8u));
  /* 118311dc push 0x1183c060 */
  push32((uint32_t)(0x1183c060u));
  /* 118311e1 call ebx */
  call_ind((uint32_t)(EBX), 0x118311e3u);
  /* 118311e3 mov ebp, dword ptr [0x1183a1ac] */
  EBP = (r32((uint32_t)(0x1183a1ac)));
  /* 118311e9 push 0x1183f4b0 */
  push32((uint32_t)(0x1183f4b0u));
  /* 118311ee call ebp */
  call_ind((uint32_t)(EBP), 0x118311f0u);
  /* 118311f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 118311f2 push 0x1183f4b0 */
  push32((uint32_t)(0x1183f4b0u));
  /* 118311f7 call ebx */
  call_ind((uint32_t)(EBX), 0x118311f9u);
  /* 118311f9 push 0x1183f4a8 */
  push32((uint32_t)(0x1183f4a8u));
  /* 118311fe call ebp */
  call_ind((uint32_t)(EBP), 0x11831200u);
  /* 11831200 push 8 */
  push32((uint32_t)(0x8u));
  /* 11831202 push 0x1183f4a8 */
  push32((uint32_t)(0x1183f4a8u));
  /* 11831207 call ebx */
  call_ind((uint32_t)(EBX), 0x11831209u);
  /* 11831209 mov edi, dword ptr [0x1183a1b0] */
  EDI = (r32((uint32_t)(0x1183a1b0)));
  /* 1183120f push 0x1183c1dc */
  push32((uint32_t)(0x1183c1dcu));
  /* 11831214 push 0x1183f498 */
  push32((uint32_t)(0x1183f498u));
  /* 11831219 call edi */
  call_ind((uint32_t)(EDI), 0x1183121bu);
  /* 1183121b push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 11831220 call ebp */
  call_ind((uint32_t)(EBP), 0x11831222u);
  /* 11831222 push 8 */
  push32((uint32_t)(0x8u));
  /* 11831224 push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 11831229 call ebx */
  call_ind((uint32_t)(EBX), 0x1183122bu);
  /* 1183122b add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183122e mov ecx, 0x1183f478 */
  ECX = (0x1183f478u);
  /* 11831233 call 0x118320a0 */
  push32(0x11831238u); f_118320a0();
  /* 11831238 push 0x1183c1d4 */
  push32((uint32_t)(0x1183c1d4u));
  /* 1183123d push 0x1183f468 */
  push32((uint32_t)(0x1183f468u));
  /* 11831242 call edi */
  call_ind((uint32_t)(EDI), 0x11831244u);
  /* 11831244 mov esi, dword ptr [0x1183a1a8] */
  ESI = (r32((uint32_t)(0x1183a1a8)));
  /* 1183124a push 0x1183c1cc */
  push32((uint32_t)(0x1183c1ccu));
  /* 1183124f push 0x1183f460 */
  push32((uint32_t)(0x1183f460u));
  /* 11831254 call esi */
  call_ind((uint32_t)(ESI), 0x11831256u);
  /* 11831256 push 0x1183f470 */
  push32((uint32_t)(0x1183f470u));
  /* 1183125b call ebp */
  call_ind((uint32_t)(EBP), 0x1183125du);
  /* 1183125d push 8 */
  push32((uint32_t)(0x8u));
  /* 1183125f push 0x1183f470 */
  push32((uint32_t)(0x1183f470u));
  /* 11831264 call ebx */
  call_ind((uint32_t)(EBX), 0x11831266u);
  /* 11831266 push 0x1183c1c4 */
  push32((uint32_t)(0x1183c1c4u));
  /* 1183126b push 0x1183f450 */
  push32((uint32_t)(0x1183f450u));
  /* 11831270 call edi */
  call_ind((uint32_t)(EDI), 0x11831272u);
  /* 11831272 push 0x1183c1bc */
  push32((uint32_t)(0x1183c1bcu));
  /* 11831277 push 0x1183f448 */
  push32((uint32_t)(0x1183f448u));
  /* 1183127c call esi */
  call_ind((uint32_t)(ESI), 0x1183127eu);
  /* 1183127e push 0x1183f458 */
  push32((uint32_t)(0x1183f458u));
  /* 11831283 call ebp */
  call_ind((uint32_t)(EBP), 0x11831285u);
  /* 11831285 push 8 */
  push32((uint32_t)(0x8u));
  /* 11831287 push 0x1183f458 */
  push32((uint32_t)(0x1183f458u));
  /* 1183128c call ebx */
  call_ind((uint32_t)(EBX), 0x1183128eu);
  /* 1183128e push 0x1183c1b4 */
  push32((uint32_t)(0x1183c1b4u));
  /* 11831293 push 0x1183f438 */
  push32((uint32_t)(0x1183f438u));
  /* 11831298 call edi */
  call_ind((uint32_t)(EDI), 0x1183129au);
  /* 1183129a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183129d push 0x1183c1ac */
  push32((uint32_t)(0x1183c1acu));
  /* 118312a2 push 0x1183f430 */
  push32((uint32_t)(0x1183f430u));
  /* 118312a7 call esi */
  call_ind((uint32_t)(ESI), 0x118312a9u);
  /* 118312a9 push 0x1183f440 */
  push32((uint32_t)(0x1183f440u));
  /* 118312ae call ebp */
  call_ind((uint32_t)(EBP), 0x118312b0u);
  /* 118312b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 118312b2 push 0x1183f440 */
  push32((uint32_t)(0x1183f440u));
  /* 118312b7 call ebx */
  call_ind((uint32_t)(EBX), 0x118312b9u);
  /* 118312b9 push 0x1183c1a4 */
  push32((uint32_t)(0x1183c1a4u));
  /* 118312be push 0x1183f420 */
  push32((uint32_t)(0x1183f420u));
  /* 118312c3 call edi */
  call_ind((uint32_t)(EDI), 0x118312c5u);
  /* 118312c5 push 0x1183c19c */
  push32((uint32_t)(0x1183c19cu));
  /* 118312ca push 0x1183f418 */
  push32((uint32_t)(0x1183f418u));
  /* 118312cf call esi */
  call_ind((uint32_t)(ESI), 0x118312d1u);
  /* 118312d1 push 0x1183f428 */
  push32((uint32_t)(0x1183f428u));
  /* 118312d6 call ebp */
  call_ind((uint32_t)(EBP), 0x118312d8u);
  /* 118312d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 118312da push 0x1183f428 */
  push32((uint32_t)(0x1183f428u));
  /* 118312df call ebx */
  call_ind((uint32_t)(EBX), 0x118312e1u);
  /* 118312e1 push 0x1183c194 */
  push32((uint32_t)(0x1183c194u));
  /* 118312e6 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 118312eb call dword ptr [0x1183a1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a1b8))), 0x118312f1u);
  /* 118312f1 push 0x1183c188 */
  push32((uint32_t)(0x1183c188u));
  /* 118312f6 push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 118312fb call dword ptr [0x1183a1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a1bc))), 0x11831301u);
  /* 11831301 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831304 push 0x1183c17c */
  push32((uint32_t)(0x1183c17cu));
  /* 11831309 push 0x1183f3ed */
  push32((uint32_t)(0x1183f3edu));
  /* 1183130e call esi */
  call_ind((uint32_t)(ESI), 0x11831310u);
  /* 11831310 push 0x1183c170 */
  push32((uint32_t)(0x1183c170u));
  /* 11831315 push 0x1183f3cd */
  push32((uint32_t)(0x1183f3cdu));
  /* 1183131a call esi */
  call_ind((uint32_t)(ESI), 0x1183131cu);
  /* 1183131c push 0x1183c164 */
  push32((uint32_t)(0x1183c164u));
  /* 11831321 push 0x1183f3ad */
  push32((uint32_t)(0x1183f3adu));
  /* 11831326 call esi */
  call_ind((uint32_t)(ESI), 0x11831328u);
  /* 11831328 push 0x1183c158 */
  push32((uint32_t)(0x1183c158u));
  /* 1183132d push 0x1183f38d */
  push32((uint32_t)(0x1183f38du));
  /* 11831332 call esi */
  call_ind((uint32_t)(ESI), 0x11831334u);
  /* 11831334 push 0x1183c14c */
  push32((uint32_t)(0x1183c14cu));
  /* 11831339 push 0x1183f36d */
  push32((uint32_t)(0x1183f36du));
  /* 1183133e call esi */
  call_ind((uint32_t)(ESI), 0x11831340u);
  /* 11831340 push 0x1183c140 */
  push32((uint32_t)(0x1183c140u));
  /* 11831345 push 0x1183f34d */
  push32((uint32_t)(0x1183f34du));
  /* 1183134a call esi */
  call_ind((uint32_t)(ESI), 0x1183134cu);
  /* 1183134c push 0x1183c134 */
  push32((uint32_t)(0x1183c134u));
  /* 11831351 push 0x1183f32d */
  push32((uint32_t)(0x1183f32du));
  /* 11831356 call esi */
  call_ind((uint32_t)(ESI), 0x11831358u);
  /* 11831358 push 0x1183c128 */
  push32((uint32_t)(0x1183c128u));
  /* 1183135d push 0x1183f30d */
  push32((uint32_t)(0x1183f30du));
  /* 11831362 call esi */
  call_ind((uint32_t)(ESI), 0x11831364u);
  /* 11831364 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831367 push 0x1183c11c */
  push32((uint32_t)(0x1183c11cu));
  /* 1183136c push 0x1183f2ed */
  push32((uint32_t)(0x1183f2edu));
  /* 11831371 call esi */
  call_ind((uint32_t)(ESI), 0x11831373u);
  /* 11831373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831376 mov ecx, 0x1183f3e8 */
  ECX = (0x1183f3e8u);
  /* 1183137b call 0x118322e0 */
  push32(0x11831380u); f_118322e0();
  /* 11831380 mov ecx, 0x1183f3c8 */
  ECX = (0x1183f3c8u);
  /* 11831385 call 0x118322e0 */
  push32(0x1183138au); f_118322e0();
  /* 1183138a mov ecx, 0x1183f3a8 */
  ECX = (0x1183f3a8u);
  /* 1183138f call 0x118322e0 */
  push32(0x11831394u); f_118322e0();
  /* 11831394 mov ecx, 0x1183f388 */
  ECX = (0x1183f388u);
  /* 11831399 call 0x118322e0 */
  push32(0x1183139eu); f_118322e0();
  /* 1183139e mov ecx, 0x1183f368 */
  ECX = (0x1183f368u);
  /* 118313a3 call 0x118322e0 */
  push32(0x118313a8u); f_118322e0();
  /* 118313a8 mov ecx, 0x1183f348 */
  ECX = (0x1183f348u);
  /* 118313ad call 0x118322e0 */
  push32(0x118313b2u); f_118322e0();
  /* 118313b2 mov ecx, 0x1183f328 */
  ECX = (0x1183f328u);
  /* 118313b7 call 0x118322e0 */
  push32(0x118313bcu); f_118322e0();
  /* 118313bc mov ecx, 0x1183f308 */
  ECX = (0x1183f308u);
  /* 118313c1 call 0x118322e0 */
  push32(0x118313c6u); f_118322e0();
  /* 118313c6 mov ecx, 0x1183f2e8 */
  ECX = (0x1183f2e8u);
  /* 118313cb call 0x118322e0 */
  push32(0x118313d0u); f_118322e0();
  /* 118313d0 push 0x1183c114 */
  push32((uint32_t)(0x1183c114u));
  /* 118313d5 push 0x1183f2e0 */
  push32((uint32_t)(0x1183f2e0u));
  /* 118313da call edi */
  call_ind((uint32_t)(EDI), 0x118313dcu);
  /* 118313dc push 0x1183c10c */
  push32((uint32_t)(0x1183c10cu));
  /* 118313e1 push 0x1183f2d8 */
  push32((uint32_t)(0x1183f2d8u));
  /* 118313e6 call edi */
  call_ind((uint32_t)(EDI), 0x118313e8u);
  /* 118313e8 push 0x1183c104 */
  push32((uint32_t)(0x1183c104u));
  /* 118313ed push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 118313f2 call edi */
  call_ind((uint32_t)(EDI), 0x118313f4u);
  /* 118313f4 push 0x1183c0f8 */
  push32((uint32_t)(0x1183c0f8u));
  /* 118313f9 push 0x1183f2c8 */
  push32((uint32_t)(0x1183f2c8u));
  /* 118313fe call esi */
  call_ind((uint32_t)(ESI), 0x11831400u);
  /* 11831400 push 0x1183c0ec */
  push32((uint32_t)(0x1183c0ecu));
  /* 11831405 push 0x1183f2c0 */
  push32((uint32_t)(0x1183f2c0u));
  /* 1183140a call esi */
  call_ind((uint32_t)(ESI), 0x1183140cu);
  /* 1183140c push 0x1183c0d8 */
  push32((uint32_t)(0x1183c0d8u));
  /* 11831411 push 0x1183f2b8 */
  push32((uint32_t)(0x1183f2b8u));
  /* 11831416 call dword ptr [0x1183a1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a1bc))), 0x1183141cu);
  /* 1183141c push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 11831421 call ebp */
  call_ind((uint32_t)(EBP), 0x11831423u);
  /* 11831423 push 8 */
  push32((uint32_t)(0x8u));
  /* 11831425 push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 1183142a call ebx */
  call_ind((uint32_t)(EBX), 0x1183142cu);
  /* 1183142c push 0x1183c0d0 */
  push32((uint32_t)(0x1183c0d0u));
  /* 11831431 push 0x1183f2a8 */
  push32((uint32_t)(0x1183f2a8u));
  /* 11831436 call edi */
  call_ind((uint32_t)(EDI), 0x11831438u);
  /* 11831438 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183143b push 0x1183c0c8 */
  push32((uint32_t)(0x1183c0c8u));
  /* 11831440 push 0x1183f2a0 */
  push32((uint32_t)(0x1183f2a0u));
  /* 11831445 call esi */
  call_ind((uint32_t)(ESI), 0x11831447u);
  /* 11831447 push 0x1183c0c0 */
  push32((uint32_t)(0x1183c0c0u));
  /* 1183144c push 0x1183f298 */
  push32((uint32_t)(0x1183f298u));
  /* 11831451 call esi */
  call_ind((uint32_t)(ESI), 0x11831453u);
  /* 11831453 push 0x1183c0b8 */
  push32((uint32_t)(0x1183c0b8u));
  /* 11831458 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 1183145d call edi */
  call_ind((uint32_t)(EDI), 0x1183145fu);
  /* 1183145f push 0x1183c0b0 */
  push32((uint32_t)(0x1183c0b0u));
  /* 11831464 push 0x1183f278 */
  push32((uint32_t)(0x1183f278u));
  /* 11831469 call edi */
  call_ind((uint32_t)(EDI), 0x1183146bu);
  /* 1183146b push 0x1183c0a8 */
  push32((uint32_t)(0x1183c0a8u));
  /* 11831470 push 0x1183f270 */
  push32((uint32_t)(0x1183f270u));
  /* 11831475 call edi */
  call_ind((uint32_t)(EDI), 0x11831477u);
  /* 11831477 push 0x1183c09c */
  push32((uint32_t)(0x1183c09cu));
  /* 1183147c push 0x1183f290 */
  push32((uint32_t)(0x1183f290u));
  /* 11831481 call esi */
  call_ind((uint32_t)(ESI), 0x11831483u);
  /* 11831483 push 0x1183c090 */
  push32((uint32_t)(0x1183c090u));
  /* 11831488 push 0x1183f288 */
  push32((uint32_t)(0x1183f288u));
  /* 1183148d call esi */
  call_ind((uint32_t)(ESI), 0x1183148fu);
  /* 1183148f mov esi, dword ptr [0x1183a1b4] */
  ESI = (r32((uint32_t)(0x1183a1b4)));
  /* 11831495 push 0x1183c088 */
  push32((uint32_t)(0x1183c088u));
  /* 1183149a push 1 */
  push32((uint32_t)(0x1u));
  /* 1183149c call esi */
  call_ind((uint32_t)(ESI), 0x1183149eu);
  /* 1183149e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118314a1 push 0x1183c07c */
  push32((uint32_t)(0x1183c07cu));
  /* 118314a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118314a8 call esi */
  call_ind((uint32_t)(ESI), 0x118314aau);
  /* 118314aa push 0x1183c074 */
  push32((uint32_t)(0x1183c074u));
  /* 118314af push 3 */
  push32((uint32_t)(0x3u));
  /* 118314b1 call esi */
  call_ind((uint32_t)(ESI), 0x118314b3u);
  /* 118314b3 push 0x1183c068 */
  push32((uint32_t)(0x1183c068u));
  /* 118314b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 118314ba call esi */
  call_ind((uint32_t)(ESI), 0x118314bcu);
  /* 118314bc push 0 */
  push32((uint32_t)(0x0u));
  /* 118314be call 0x1183250f */
  push32(0x118314c3u); f_1183250f();
  /* 118314c3 push eax */
  push32((uint32_t)(EAX));
  /* 118314c4 call 0x118324e0 */
  push32(0x118314c9u); f_118324e0();
  /* 118314c9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118314cc pop edi */
  EDI = (pop32());
  /* 118314cd pop esi */
  ESI = (pop32());
  /* 118314ce pop ebp */
  EBP = (pop32());
  /* 118314cf pop ebx */
  EBX = (pop32());
  /* 118314d0 ret  */
  ESPCHK(0x118311d0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x118314e0 (2275 bytes, 697 insns) */
void f_118314e0(void) {
  FTRACE(0x118314e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118314e0 push ebx */
  push32((uint32_t)(EBX));
  /* 118314e1 push ebp */
  push32((uint32_t)(EBP));
  /* 118314e2 push esi */
  push32((uint32_t)(ESI));
  /* 118314e3 push edi */
  push32((uint32_t)(EDI));
  /* 118314e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118314e6 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x118314ecu);
  /* 118314ec mov esi, dword ptr [0x1183a12c] */
  ESI = (r32((uint32_t)(0x1183a12c)));
  /* 118314f2 mov ebx, dword ptr [0x1183a124] */
  EBX = (r32((uint32_t)(0x1183a124)));
  /* 118314f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118314fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118314fd je 0x1183176e */
  if (C.zf) goto L_1183176e;
  /* 11831503 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831505 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831507 call dword ptr [0x1183a134] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a134))), 0x1183150du);
  /* 1183150d mov edi, dword ptr [0x1183a138] */
  EDI = (r32((uint32_t)(0x1183a138)));
  /* 11831513 push 3 */
  push32((uint32_t)(0x3u));
  /* 11831515 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831517 call edi */
  call_ind((uint32_t)(EDI), 0x11831519u);
  /* 11831519 push 0xa */
  push32((uint32_t)(0xau));
  /* 1183151b push 3 */
  push32((uint32_t)(0x3u));
  /* 1183151d call edi */
  call_ind((uint32_t)(EDI), 0x1183151fu);
  /* 1183151f push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11831521 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831523 call edi */
  call_ind((uint32_t)(EDI), 0x11831525u);
  /* 11831525 mov ebp, dword ptr [0x1183a130] */
  EBP = (r32((uint32_t)(0x1183a130)));
  /* 1183152b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183152e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11831530:;
  /* 11831530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831532 call dword ptr [0x1183a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a140))), 0x11831538u);
  /* 11831538 mov ecx, 6 */
  ECX = (0x6u);
  /* 1183153d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183153f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11831542 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11831545 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11831548 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1183154b push eax */
  push32((uint32_t)(EAX));
  /* 1183154c push edi */
  push32((uint32_t)(EDI));
  /* 1183154d push 0 */
  push32((uint32_t)(0x0u));
  /* 1183154f call ebp */
  call_ind((uint32_t)(EBP), 0x11831551u);
  /* 11831551 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11831556 push edi */
  push32((uint32_t)(EDI));
  /* 11831557 push 2 */
  push32((uint32_t)(0x2u));
  /* 11831559 call ebp */
  call_ind((uint32_t)(EBP), 0x1183155bu);
  /* 1183155b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183155e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1183155f cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831562 jl 0x11831530 */
  if ((C.sf!=C.of)) goto L_11831530;
  /* 11831564 mov ebp, dword ptr [0x1183a140] */
  EBP = (r32((uint32_t)(0x1183a140)));
  /* 1183156a push 0 */
  push32((uint32_t)(0x0u));
  /* 1183156c call ebp */
  call_ind((uint32_t)(EBP), 0x1183156eu);
  /* 1183156e push eax */
  push32((uint32_t)(EAX));
  /* 1183156f push 1 */
  push32((uint32_t)(0x1u));
  /* 11831571 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831573 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831575 push 0x1183c278 */
  push32((uint32_t)(0x1183c278u));
  /* 1183157a push 2 */
  push32((uint32_t)(0x2u));
  /* 1183157c call dword ptr [0x1183a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a144))), 0x11831582u);
  /* 11831582 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11831584 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831586 call esi */
  call_ind((uint32_t)(ESI), 0x11831588u);
  /* 11831588 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1183158a push 2 */
  push32((uint32_t)(0x2u));
  /* 1183158c call esi */
  call_ind((uint32_t)(ESI), 0x1183158eu);
  /* 1183158e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11831590 push 3 */
  push32((uint32_t)(0x3u));
  /* 11831592 call esi */
  call_ind((uint32_t)(ESI), 0x11831594u);
  /* 11831594 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11831596 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831598 call esi */
  call_ind((uint32_t)(ESI), 0x1183159au);
  /* 1183159a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1183159c push 5 */
  push32((uint32_t)(0x5u));
  /* 1183159e call esi */
  call_ind((uint32_t)(ESI), 0x118315a0u);
  /* 118315a0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118315a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315a5 push 6 */
  push32((uint32_t)(0x6u));
  /* 118315a7 call esi */
  call_ind((uint32_t)(ESI), 0x118315a9u);
  /* 118315a9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315ab push 7 */
  push32((uint32_t)(0x7u));
  /* 118315ad call esi */
  call_ind((uint32_t)(ESI), 0x118315afu);
  /* 118315af push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315b1 push 8 */
  push32((uint32_t)(0x8u));
  /* 118315b3 call esi */
  call_ind((uint32_t)(ESI), 0x118315b5u);
  /* 118315b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 118315b9 call esi */
  call_ind((uint32_t)(ESI), 0x118315bbu);
  /* 118315bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315bd push 0xa */
  push32((uint32_t)(0xau));
  /* 118315bf call esi */
  call_ind((uint32_t)(ESI), 0x118315c1u);
  /* 118315c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315c3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118315c5 call esi */
  call_ind((uint32_t)(ESI), 0x118315c7u);
  /* 118315c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315c9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 118315cb call esi */
  call_ind((uint32_t)(ESI), 0x118315cdu);
  /* 118315cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315cf push 0xd */
  push32((uint32_t)(0xdu));
  /* 118315d1 call esi */
  call_ind((uint32_t)(ESI), 0x118315d3u);
  /* 118315d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118315d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315d8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 118315da call esi */
  call_ind((uint32_t)(ESI), 0x118315dcu);
  /* 118315dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315de push 0xf */
  push32((uint32_t)(0xfu));
  /* 118315e0 call esi */
  call_ind((uint32_t)(ESI), 0x118315e2u);
  /* 118315e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118315e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118315e6 call esi */
  call_ind((uint32_t)(ESI), 0x118315e8u);
  /* 118315e8 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 118315ed push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118315ef call esi */
  call_ind((uint32_t)(ESI), 0x118315f1u);
  /* 118315f1 push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 118315f6 push 0x1183f460 */
  push32((uint32_t)(0x1183f460u));
  /* 118315fb call 0x118320e0 */
  push32(0x11831600u); f_118320e0();
  /* 11831600 push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 11831605 push 0x1183f448 */
  push32((uint32_t)(0x1183f448u));
  /* 1183160a call 0x118320e0 */
  push32(0x1183160fu); f_118320e0();
  /* 1183160f push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 11831614 push 0x1183f430 */
  push32((uint32_t)(0x1183f430u));
  /* 11831619 call 0x118320e0 */
  push32(0x1183161eu); f_118320e0();
  /* 1183161e push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 11831623 push 0x1183f418 */
  push32((uint32_t)(0x1183f418u));
  /* 11831628 call 0x118320e0 */
  push32(0x1183162du); f_118320e0();
  /* 1183162d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831630 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11831632 push edi */
  push32((uint32_t)(EDI));
  /* 11831633 call ebp */
  call_ind((uint32_t)(EBP), 0x11831635u);
  /* 11831635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831638 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11831639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183163b jle 0x11831706 */
  if ((C.zf||C.sf!=C.of)) goto L_11831706;
L_11831641:;
  /* 11831641 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 11831646 push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 1183164b mov ecx, 0x1183f3e8 */
  ECX = (0x1183f3e8u);
  /* 11831650 call 0x11832320 */
  push32(0x11831655u); f_11832320();
  /* 11831655 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 1183165a push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 1183165f mov ecx, 0x1183f3c8 */
  ECX = (0x1183f3c8u);
  /* 11831664 call 0x11832320 */
  push32(0x11831669u); f_11832320();
  /* 11831669 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 1183166e push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 11831673 mov ecx, 0x1183f3a8 */
  ECX = (0x1183f3a8u);
  /* 11831678 call 0x11832320 */
  push32(0x1183167du); f_11832320();
  /* 1183167d push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 11831682 push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 11831687 mov ecx, 0x1183f388 */
  ECX = (0x1183f388u);
  /* 1183168c call 0x11832320 */
  push32(0x11831691u); f_11832320();
  /* 11831691 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 11831696 push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 1183169b mov ecx, 0x1183f368 */
  ECX = (0x1183f368u);
  /* 118316a0 call 0x11832320 */
  push32(0x118316a5u); f_11832320();
  /* 118316a5 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 118316aa push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 118316af mov ecx, 0x1183f348 */
  ECX = (0x1183f348u);
  /* 118316b4 call 0x11832320 */
  push32(0x118316b9u); f_11832320();
  /* 118316b9 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 118316be push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 118316c3 mov ecx, 0x1183f328 */
  ECX = (0x1183f328u);
  /* 118316c8 call 0x11832320 */
  push32(0x118316cdu); f_11832320();
  /* 118316cd push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 118316d2 push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 118316d7 mov ecx, 0x1183f308 */
  ECX = (0x1183f308u);
  /* 118316dc call 0x11832320 */
  push32(0x118316e1u); f_11832320();
  /* 118316e1 push 0x1183f410 */
  push32((uint32_t)(0x1183f410u));
  /* 118316e6 push 0x1183f408 */
  push32((uint32_t)(0x1183f408u));
  /* 118316eb mov ecx, 0x1183f2e8 */
  ECX = (0x1183f2e8u);
  /* 118316f0 call 0x11832320 */
  push32(0x118316f5u); f_11832320();
  /* 118316f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118316f7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118316f8 call ebp */
  call_ind((uint32_t)(EBP), 0x118316fau);
  /* 118316fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118316fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118316fe cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831700 jl 0x11831641 */
  if ((C.sf!=C.of)) goto L_11831641;
L_11831706:;
  /* 11831706 push 0x1183c26c */
  push32((uint32_t)(0x1183c26cu));
  /* 1183170b call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831711u);
  /* 11831711 mov ebp, dword ptr [0x1183a14c] */
  EBP = (r32((uint32_t)(0x1183a14c)));
  /* 11831717 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11831719 call ebp */
  call_ind((uint32_t)(EBP), 0x1183171bu);
  /* 1183171b push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1183171d call ebp */
  call_ind((uint32_t)(EBP), 0x1183171fu);
  /* 1183171f push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11831721 call ebp */
  call_ind((uint32_t)(EBP), 0x11831723u);
  /* 11831723 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11831725 call ebp */
  call_ind((uint32_t)(EBP), 0x11831727u);
  /* 11831727 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11831729 call ebp */
  call_ind((uint32_t)(EBP), 0x1183172bu);
  /* 1183172b push 0 */
  push32((uint32_t)(0x0u));
  /* 1183172d push 0x1183f2e0 */
  push32((uint32_t)(0x1183f2e0u));
  /* 11831732 call ebx */
  call_ind((uint32_t)(EBX), 0x11831734u);
  /* 11831734 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831736 call dword ptr [0x1183a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a150))), 0x1183173cu);
  /* 1183173c push 0 */
  push32((uint32_t)(0x0u));
  /* 1183173e push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 11831743 call ebx */
  call_ind((uint32_t)(EBX), 0x11831745u);
  /* 11831745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831747 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 1183174c push 0x1183f2c8 */
  push32((uint32_t)(0x1183f2c8u));
  /* 11831751 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831753 call dword ptr [0x1183a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a148))), 0x11831759u);
  /* 11831759 push 0x1183f298 */
  push32((uint32_t)(0x1183f298u));
  /* 1183175e push 0x1183f2d8 */
  push32((uint32_t)(0x1183f2d8u));
  /* 11831763 call dword ptr [0x1183a158] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a158))), 0x11831769u);
  /* 11831769 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183176c jmp 0x11831774 */
  goto L_11831774;
L_1183176e:;
  /* 1183176e mov ebp, dword ptr [0x1183a14c] */
  EBP = (r32((uint32_t)(0x1183a14c)));
L_11831774:;
  /* 11831774 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11831776 call dword ptr [0x1183a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a15c))), 0x1183177cu);
  /* 1183177c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183177f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831781 je 0x118317ae */
  if (C.zf) goto L_118317ae;
  /* 11831783 push 0x1183c260 */
  push32((uint32_t)(0x1183c260u));
  /* 11831788 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x1183178eu);
  /* 1183178e push 0 */
  push32((uint32_t)(0x0u));
  /* 11831790 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831792 push 0x1183f2c0 */
  push32((uint32_t)(0x1183f2c0u));
  /* 11831797 call dword ptr [0x1183a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a154))), 0x1183179du);
  /* 1183179d mov edi, dword ptr [0x1183a164] */
  EDI = (r32((uint32_t)(0x1183a164)));
  /* 118317a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 118317a5 call edi */
  call_ind((uint32_t)(EDI), 0x118317a7u);
  /* 118317a7 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 118317a9 call edi */
  call_ind((uint32_t)(EDI), 0x118317abu);
  /* 118317ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118317ae:;
  /* 118317ae push 0 */
  push32((uint32_t)(0x0u));
  /* 118317b0 push 0x1183f4a8 */
  push32((uint32_t)(0x1183f4a8u));
  /* 118317b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118317b7 call dword ptr [0x1183a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a168))), 0x118317bdu);
  /* 118317bd push 1 */
  push32((uint32_t)(0x1u));
  /* 118317bf call dword ptr [0x1183a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a160))), 0x118317c5u);
  /* 118317c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118317c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118317ca je 0x118317f0 */
  if (C.zf) goto L_118317f0;
  /* 118317cc push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 118317d1 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 118317d6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 118317d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 118317da push 0x1183f498 */
  push32((uint32_t)(0x1183f498u));
  /* 118317df call 0x11831ed0 */
  push32(0x118317e4u); f_11831ed0();
  /* 118317e4 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 118317e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118317eb call esi */
  call_ind((uint32_t)(ESI), 0x118317edu);
  /* 118317ed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118317f0:;
  /* 118317f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 118317f2 push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 118317f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118317f9 push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 118317fe push 0x1183f460 */
  push32((uint32_t)(0x1183f460u));
  /* 11831803 push 2 */
  push32((uint32_t)(0x2u));
  /* 11831805 call 0x11831dd0 */
  push32(0x1183180au); f_11831dd0();
  /* 1183180a push 3 */
  push32((uint32_t)(0x3u));
  /* 1183180c push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 11831811 push 3 */
  push32((uint32_t)(0x3u));
  /* 11831813 push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 11831818 push 0x1183f448 */
  push32((uint32_t)(0x1183f448u));
  /* 1183181d push 3 */
  push32((uint32_t)(0x3u));
  /* 1183181f call 0x11831dd0 */
  push32(0x11831824u); f_11831dd0();
  /* 11831824 push 3 */
  push32((uint32_t)(0x3u));
  /* 11831826 push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 1183182b push 4 */
  push32((uint32_t)(0x4u));
  /* 1183182d push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 11831832 push 0x1183f430 */
  push32((uint32_t)(0x1183f430u));
  /* 11831837 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831839 call 0x11831dd0 */
  push32(0x1183183eu); f_11831dd0();
  /* 1183183e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831841 push 3 */
  push32((uint32_t)(0x3u));
  /* 11831843 push 0x1183f490 */
  push32((uint32_t)(0x1183f490u));
  /* 11831848 push 5 */
  push32((uint32_t)(0x5u));
  /* 1183184a push 0x1183f478 */
  push32((uint32_t)(0x1183f478u));
  /* 1183184f push 0x1183f418 */
  push32((uint32_t)(0x1183f418u));
  /* 11831854 push 5 */
  push32((uint32_t)(0x5u));
  /* 11831856 call 0x11831dd0 */
  push32(0x1183185bu); f_11831dd0();
  /* 1183185b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183185e mov ecx, 0x1183f3e8 */
  ECX = (0x1183f3e8u);
  /* 11831863 call 0x11832370 */
  push32(0x11831868u); f_11832370();
  /* 11831868 mov ecx, 0x1183f3c8 */
  ECX = (0x1183f3c8u);
  /* 1183186d call 0x11832370 */
  push32(0x11831872u); f_11832370();
  /* 11831872 mov ecx, 0x1183f3a8 */
  ECX = (0x1183f3a8u);
  /* 11831877 call 0x11832370 */
  push32(0x1183187cu); f_11832370();
  /* 1183187c mov ecx, 0x1183f388 */
  ECX = (0x1183f388u);
  /* 11831881 call 0x11832370 */
  push32(0x11831886u); f_11832370();
  /* 11831886 mov ecx, 0x1183f368 */
  ECX = (0x1183f368u);
  /* 1183188b call 0x11832370 */
  push32(0x11831890u); f_11832370();
  /* 11831890 mov ecx, 0x1183f348 */
  ECX = (0x1183f348u);
  /* 11831895 call 0x11832370 */
  push32(0x1183189au); f_11832370();
  /* 1183189a mov ecx, 0x1183f328 */
  ECX = (0x1183f328u);
  /* 1183189f call 0x11832370 */
  push32(0x118318a4u); f_11832370();
  /* 118318a4 mov ecx, 0x1183f308 */
  ECX = (0x1183f308u);
  /* 118318a9 call 0x11832370 */
  push32(0x118318aeu); f_11832370();
  /* 118318ae mov ecx, 0x1183f2e8 */
  ECX = (0x1183f2e8u);
  /* 118318b3 call 0x11832370 */
  push32(0x118318b8u); f_11832370();
  /* 118318b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118318ba push 0x1183f2c0 */
  push32((uint32_t)(0x1183f2c0u));
  /* 118318bf call dword ptr [0x1183a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a170))), 0x118318c5u);
  /* 118318c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118318c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118318ca je 0x118318fd */
  if (C.zf) goto L_118318fd;
  /* 118318cc push 6 */
  push32((uint32_t)(0x6u));
  /* 118318ce call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x118318d4u);
  /* 118318d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118318d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118318d9 je 0x118318fd */
  if (C.zf) goto L_118318fd;
  /* 118318db push 0x1183c254 */
  push32((uint32_t)(0x1183c254u));
  /* 118318e0 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x118318e6u);
  /* 118318e6 mov edi, dword ptr [0x1183a134] */
  EDI = (r32((uint32_t)(0x1183a134)));
  /* 118318ec push 0 */
  push32((uint32_t)(0x0u));
  /* 118318ee push 6 */
  push32((uint32_t)(0x6u));
  /* 118318f0 call edi */
  call_ind((uint32_t)(EDI), 0x118318f2u);
  /* 118318f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118318f4 push 7 */
  push32((uint32_t)(0x7u));
  /* 118318f6 call edi */
  call_ind((uint32_t)(EDI), 0x118318f8u);
  /* 118318f8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118318fb jmp 0x11831903 */
  goto L_11831903;
L_118318fd:;
  /* 118318fd mov edi, dword ptr [0x1183a134] */
  EDI = (r32((uint32_t)(0x1183a134)));
L_11831903:;
  /* 11831903 push 7 */
  push32((uint32_t)(0x7u));
  /* 11831905 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x1183190bu);
  /* 1183190b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183190e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831910 jne 0x1183193c */
  if (!C.zf) goto L_1183193c;
  /* 11831912 push 0x1183f2d8 */
  push32((uint32_t)(0x1183f2d8u));
  /* 11831917 call dword ptr [0x1183a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a174))), 0x1183191du);
  /* 1183191d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831920 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831922 je 0x1183193c */
  if (C.zf) goto L_1183193c;
  /* 11831924 push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 11831929 push 0x1183f2b8 */
  push32((uint32_t)(0x1183f2b8u));
  /* 1183192e push 0x1183f2d8 */
  push32((uint32_t)(0x1183f2d8u));
  /* 11831933 call dword ptr [0x1183a16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a16c))), 0x11831939u);
  /* 11831939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1183193c:;
  /* 1183193c push 7 */
  push32((uint32_t)(0x7u));
  /* 1183193e call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831944u);
  /* 11831944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831947 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831949 jne 0x11831970 */
  if (!C.zf) goto L_11831970;
  /* 1183194b push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 11831950 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11831956u);
  /* 11831956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831959 cmp eax, 0x4b */
  { uint32_t _a=(EAX),_b=(0x4bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183195c jne 0x11831970 */
  if (!C.zf) goto L_11831970;
  /* 1183195e push 1 */
  push32((uint32_t)(0x1u));
  /* 11831960 push 7 */
  push32((uint32_t)(0x7u));
  /* 11831962 call edi */
  call_ind((uint32_t)(EDI), 0x11831964u);
  /* 11831964 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11831969 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1183196b call esi */
  call_ind((uint32_t)(ESI), 0x1183196du);
  /* 1183196d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831970:;
  /* 11831970 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11831972 call dword ptr [0x1183a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a15c))), 0x11831978u);
  /* 11831978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183197b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1183197d je 0x118319c0 */
  if (C.zf) goto L_118319c0;
  /* 1183197f push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 11831984 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x1183198au);
  /* 1183198a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183198d cmp eax, 0x4b */
  { uint32_t _a=(EAX),_b=(0x4bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831990 jl 0x118319c0 */
  if ((C.sf!=C.of)) goto L_118319c0;
  /* 11831992 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831994 call dword ptr [0x1183a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a180))), 0x1183199au);
  /* 1183199a push 0 */
  push32((uint32_t)(0x0u));
  /* 1183199c push 0x1183f2a8 */
  push32((uint32_t)(0x1183f2a8u));
  /* 118319a1 call ebx */
  call_ind((uint32_t)(EBX), 0x118319a3u);
  /* 118319a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118319a5 push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 118319aa call ebx */
  call_ind((uint32_t)(EBX), 0x118319acu);
  /* 118319ac push 1 */
  push32((uint32_t)(0x1u));
  /* 118319ae push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 118319b3 call ebx */
  call_ind((uint32_t)(EBX), 0x118319b5u);
  /* 118319b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118319b7 call dword ptr [0x1183a178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a178))), 0x118319bdu);
  /* 118319bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118319c0:;
  /* 118319c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118319c2 push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 118319c7 call ebx */
  call_ind((uint32_t)(EBX), 0x118319c9u);
  /* 118319c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 118319cb call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x118319d1u);
  /* 118319d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118319d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118319d6 je 0x11831a3a */
  if (C.zf) goto L_11831a3a;
  /* 118319d8 push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 118319dd call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x118319e3u);
  /* 118319e3 mov ebp, eax */
  EBP = (EAX);
  /* 118319e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118319e7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118319e8 call dword ptr [0x1183a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a188))), 0x118319eeu);
  /* 118319ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118319f1 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118319f3 jne 0x11831a34 */
  if (!C.zf) goto L_11831a34;
  /* 118319f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118319f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 118319f9 call edi */
  call_ind((uint32_t)(EDI), 0x118319fbu);
  /* 118319fb push 0 */
  push32((uint32_t)(0x0u));
  /* 118319fd push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 11831a02 call ebx */
  call_ind((uint32_t)(EBX), 0x11831a04u);
  /* 11831a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831a06 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11831a0b push 0x1183f2a0 */
  push32((uint32_t)(0x1183f2a0u));
  /* 11831a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831a12 call dword ptr [0x1183a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a148))), 0x11831a18u);
  /* 11831a18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11831a1a push 3 */
  push32((uint32_t)(0x3u));
  /* 11831a1c call dword ptr [0x1183a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a138))), 0x11831a22u);
  /* 11831a22 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11831a27 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11831a29 call esi */
  call_ind((uint32_t)(ESI), 0x11831a2bu);
  /* 11831a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11831a2d push 0xa */
  push32((uint32_t)(0xau));
  /* 11831a2f call edi */
  call_ind((uint32_t)(EDI), 0x11831a31u);
  /* 11831a31 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831a34:;
  /* 11831a34 mov ebp, dword ptr [0x1183a14c] */
  EBP = (r32((uint32_t)(0x1183a14c)));
L_11831a3a:;
  /* 11831a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11831a3c push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 11831a41 call ebx */
  call_ind((uint32_t)(EBX), 0x11831a43u);
  /* 11831a43 mov esi, dword ptr [0x1183a128] */
  ESI = (r32((uint32_t)(0x1183a128)));
  /* 11831a49 push 0xa */
  push32((uint32_t)(0xau));
  /* 11831a4b call esi */
  call_ind((uint32_t)(ESI), 0x11831a4du);
  /* 11831a4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831a50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831a52 jne 0x11831a89 */
  if (!C.zf) goto L_11831a89;
  /* 11831a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831a56 call dword ptr [0x1183a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a18c))), 0x11831a5cu);
  /* 11831a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831a5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831a61 je 0x11831a89 */
  if (C.zf) goto L_11831a89;
  /* 11831a63 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11831a65 call dword ptr [0x1183a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a160))), 0x11831a6bu);
  /* 11831a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831a6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831a70 je 0x11831a89 */
  if (C.zf) goto L_11831a89;
  /* 11831a72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831a74 call dword ptr [0x1183a184] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a184))), 0x11831a7au);
  /* 11831a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11831a7c push 9 */
  push32((uint32_t)(0x9u));
  /* 11831a7e call edi */
  call_ind((uint32_t)(EDI), 0x11831a80u);
  /* 11831a80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831a82 push 0xa */
  push32((uint32_t)(0xau));
  /* 11831a84 call edi */
  call_ind((uint32_t)(EDI), 0x11831a86u);
  /* 11831a86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831a89:;
  /* 11831a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831a8b push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 11831a90 call ebx */
  call_ind((uint32_t)(EBX), 0x11831a92u);
  /* 11831a92 push 9 */
  push32((uint32_t)(0x9u));
  /* 11831a94 call esi */
  call_ind((uint32_t)(ESI), 0x11831a96u);
  /* 11831a96 mov esi, dword ptr [0x1183a194] */
  ESI = (r32((uint32_t)(0x1183a194)));
  /* 11831a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831a9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831aa1 jne 0x11831b08 */
  if (!C.zf) goto L_11831b08;
  /* 11831aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831aa5 call dword ptr [0x1183a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a188))), 0x11831aabu);
  /* 11831aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831ab0 jne 0x11831b08 */
  if (!C.zf) goto L_11831b08;
  /* 11831ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831ab4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11831ab6 call edi */
  call_ind((uint32_t)(EDI), 0x11831ab8u);
  /* 11831ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831aba push 0x1183f2a8 */
  push32((uint32_t)(0x1183f2a8u));
  /* 11831abf call ebx */
  call_ind((uint32_t)(EBX), 0x11831ac1u);
  /* 11831ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831ac3 push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 11831ac8 call ebx */
  call_ind((uint32_t)(EBX), 0x11831acau);
  /* 11831aca push 1 */
  push32((uint32_t)(0x1u));
  /* 11831acc push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 11831ad1 call ebx */
  call_ind((uint32_t)(EBX), 0x11831ad3u);
  /* 11831ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831ad7 call esi */
  call_ind((uint32_t)(ESI), 0x11831ad9u);
  /* 11831ad9 push 0x1183c248 */
  push32((uint32_t)(0x1183c248u));
  /* 11831ade call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831ae4u);
  /* 11831ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831ae6 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11831ae8 call edi */
  call_ind((uint32_t)(EDI), 0x11831aeau);
  /* 11831aea push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11831aec call ebp */
  call_ind((uint32_t)(EBP), 0x11831aeeu);
  /* 11831aee push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11831af0 call ebp */
  call_ind((uint32_t)(EBP), 0x11831af2u);
  /* 11831af2 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11831af4 call dword ptr [0x1183a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a164))), 0x11831afau);
  /* 11831afa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831afd push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11831aff call dword ptr [0x1183a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a164))), 0x11831b05u);
  /* 11831b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831b08:;
  /* 11831b08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11831b0a call dword ptr [0x1183a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a180))), 0x11831b10u);
  /* 11831b10 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11831b12 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831b18u);
  /* 11831b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831b1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831b1d je 0x11831b47 */
  if (C.zf) goto L_11831b47;
  /* 11831b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11831b21 push 0x1183f288 */
  push32((uint32_t)(0x1183f288u));
  /* 11831b26 call dword ptr [0x1183a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a170))), 0x11831b2cu);
  /* 11831b2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831b31 je 0x11831b47 */
  if (C.zf) goto L_11831b47;
  /* 11831b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831b35 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11831b37 call edi */
  call_ind((uint32_t)(EDI), 0x11831b39u);
  /* 11831b39 push 0x1183c23c */
  push32((uint32_t)(0x1183c23cu));
  /* 11831b3e call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831b44u);
  /* 11831b44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831b47:;
  /* 11831b47 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11831b49 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831b4fu);
  /* 11831b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831b52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831b54 jne 0x11831b9c */
  if (!C.zf) goto L_11831b9c;
  /* 11831b56 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11831b58 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831b5eu);
  /* 11831b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831b61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831b63 je 0x11831b9c */
  if (C.zf) goto L_11831b9c;
  /* 11831b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831b67 push 0x1183f290 */
  push32((uint32_t)(0x1183f290u));
  /* 11831b6c call dword ptr [0x1183a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a170))), 0x11831b72u);
  /* 11831b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831b77 je 0x11831b9c */
  if (C.zf) goto L_11831b9c;
  /* 11831b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831b7b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11831b7d call edi */
  call_ind((uint32_t)(EDI), 0x11831b7fu);
  /* 11831b7f push 0x1183c230 */
  push32((uint32_t)(0x1183c230u));
  /* 11831b84 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831b8au);
  /* 11831b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11831b8c push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831b91 call ebx */
  call_ind((uint32_t)(EBX), 0x11831b93u);
  /* 11831b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831b95 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831b97 call esi */
  call_ind((uint32_t)(ESI), 0x11831b99u);
  /* 11831b99 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831b9c:;
  /* 11831b9c push 0xc */
  push32((uint32_t)(0xcu));
  /* 11831b9e call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831ba4u);
  /* 11831ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831ba7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831ba9 jne 0x11831cfc */
  if (!C.zf) goto L_11831cfc;
  /* 11831baf push 0xd */
  push32((uint32_t)(0xdu));
  /* 11831bb1 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831bb7u);
  /* 11831bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831bba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831bbc je 0x11831cfc */
  if (C.zf) goto L_11831cfc;
  /* 11831bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831bc4 push 0x1183f288 */
  push32((uint32_t)(0x1183f288u));
  /* 11831bc9 call dword ptr [0x1183a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a170))), 0x11831bcfu);
  /* 11831bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831bd4 je 0x11831cfc */
  if (C.zf) goto L_11831cfc;
  /* 11831bda push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831bdf push 0x1183f288 */
  push32((uint32_t)(0x1183f288u));
  /* 11831be4 call dword ptr [0x1183a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a198))), 0x11831beau);
  /* 11831bea push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831bef mov ebp, eax */
  EBP = (EAX);
  /* 11831bf1 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11831bf7u);
  /* 11831bf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831bfa cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831bfc jne 0x11831cf6 */
  if (!C.zf) goto L_11831cf6;
  /* 11831c02 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831c07 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11831c0du);
  /* 11831c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c0f mov ebp, eax */
  EBP = (EAX);
  /* 11831c11 call dword ptr [0x1183a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a140))), 0x11831c17u);
  /* 11831c17 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11831c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831c1d cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831c1f jg 0x11831c35 */
  if ((!C.zf&&C.sf==C.of)) goto L_11831c35;
  /* 11831c21 push 0x1183c224 */
  push32((uint32_t)(0x1183c224u));
  /* 11831c26 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831c2cu);
  /* 11831c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c2e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11831c30 call edi */
  call_ind((uint32_t)(EDI), 0x11831c32u);
  /* 11831c32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831c35:;
  /* 11831c35 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831c3a call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11831c40u);
  /* 11831c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c42 mov ebp, eax */
  EBP = (EAX);
  /* 11831c44 call dword ptr [0x1183a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a140))), 0x11831c4au);
  /* 11831c4a add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11831c4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831c50 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831c52 jle 0x11831ca5 */
  if ((C.zf||C.sf!=C.of)) goto L_11831ca5;
  /* 11831c54 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831c59 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11831c5fu);
  /* 11831c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c61 mov ebp, eax */
  EBP = (EAX);
  /* 11831c63 call dword ptr [0x1183a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a140))), 0x11831c69u);
  /* 11831c69 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11831c6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831c6f cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831c71 jg 0x11831ca5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11831ca5;
  /* 11831c73 push 0x1183c218 */
  push32((uint32_t)(0x1183c218u));
  /* 11831c78 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831c7eu);
  /* 11831c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c80 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831c85 call ebx */
  call_ind((uint32_t)(EBX), 0x11831c87u);
  /* 11831c87 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c8b call esi */
  call_ind((uint32_t)(ESI), 0x11831c8du);
  /* 11831c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c8f push 0x1183f270 */
  push32((uint32_t)(0x1183f270u));
  /* 11831c94 call ebx */
  call_ind((uint32_t)(EBX), 0x11831c96u);
  /* 11831c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c98 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831c9a call esi */
  call_ind((uint32_t)(ESI), 0x11831c9cu);
  /* 11831c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11831c9e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11831ca0 call edi */
  call_ind((uint32_t)(EDI), 0x11831ca2u);
  /* 11831ca2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831ca5:;
  /* 11831ca5 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831caa call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11831cb0u);
  /* 11831cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831cb2 mov ebp, eax */
  EBP = (EAX);
  /* 11831cb4 call dword ptr [0x1183a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a140))), 0x11831cbau);
  /* 11831cba add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11831cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831cc0 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831cc2 jle 0x11831cf6 */
  if ((C.zf||C.sf!=C.of)) goto L_11831cf6;
  /* 11831cc4 push 0x1183c20c */
  push32((uint32_t)(0x1183c20cu));
  /* 11831cc9 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831ccfu);
  /* 11831ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 11831cd1 push 0x1183f278 */
  push32((uint32_t)(0x1183f278u));
  /* 11831cd6 call ebx */
  call_ind((uint32_t)(EBX), 0x11831cd8u);
  /* 11831cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831cda push 4 */
  push32((uint32_t)(0x4u));
  /* 11831cdc call esi */
  call_ind((uint32_t)(ESI), 0x11831cdeu);
  /* 11831cde push 0 */
  push32((uint32_t)(0x0u));
  /* 11831ce0 push 0x1183f280 */
  push32((uint32_t)(0x1183f280u));
  /* 11831ce5 call ebx */
  call_ind((uint32_t)(EBX), 0x11831ce7u);
  /* 11831ce7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11831ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831ceb call esi */
  call_ind((uint32_t)(ESI), 0x11831cedu);
  /* 11831ced push 0 */
  push32((uint32_t)(0x0u));
  /* 11831cef push 0xd */
  push32((uint32_t)(0xdu));
  /* 11831cf1 call edi */
  call_ind((uint32_t)(EDI), 0x11831cf3u);
  /* 11831cf3 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831cf6:;
  /* 11831cf6 mov ebp, dword ptr [0x1183a14c] */
  EBP = (r32((uint32_t)(0x1183a14c)));
L_11831cfc:;
  /* 11831cfc mov edi, dword ptr [0x1183a128] */
  EDI = (r32((uint32_t)(0x1183a128)));
  /* 11831d02 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11831d04 call edi */
  call_ind((uint32_t)(EDI), 0x11831d06u);
  /* 11831d06 mov esi, dword ptr [0x1183a190] */
  ESI = (r32((uint32_t)(0x1183a190)));
  /* 11831d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831d11 jne 0x11831d32 */
  if (!C.zf) goto L_11831d32;
  /* 11831d13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11831d15 call esi */
  call_ind((uint32_t)(ESI), 0x11831d17u);
  /* 11831d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831d1c je 0x11831d32 */
  if (C.zf) goto L_11831d32;
  /* 11831d1e push 0x1183c200 */
  push32((uint32_t)(0x1183c200u));
  /* 11831d23 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831d29u);
  /* 11831d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d2c call dword ptr [0x1183a1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a1a0))), 0x11831d32u);
L_11831d32:;
  /* 11831d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11831d34 call esi */
  call_ind((uint32_t)(ESI), 0x11831d36u);
  /* 11831d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831d3b je 0x11831d4c */
  if (C.zf) goto L_11831d4c;
  /* 11831d3d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11831d3f call ebp */
  call_ind((uint32_t)(EBP), 0x11831d41u);
  /* 11831d41 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11831d43 call dword ptr [0x1183a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a164))), 0x11831d49u);
  /* 11831d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831d4c:;
  /* 11831d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11831d4e call esi */
  call_ind((uint32_t)(ESI), 0x11831d50u);
  /* 11831d50 mov ebp, dword ptr [0x1183a1a4] */
  EBP = (r32((uint32_t)(0x1183a1a4)));
  /* 11831d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831d5b je 0x11831d6d */
  if (C.zf) goto L_11831d6d;
  /* 11831d5d push 0x1183c1f4 */
  push32((uint32_t)(0x1183c1f4u));
  /* 11831d62 call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831d68u);
  /* 11831d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d6b call ebp */
  call_ind((uint32_t)(EBP), 0x11831d6du);
L_11831d6d:;
  /* 11831d6d mov esi, dword ptr [0x1183a17c] */
  ESI = (r32((uint32_t)(0x1183a17c)));
  /* 11831d73 push 0x1183f2b0 */
  push32((uint32_t)(0x1183f2b0u));
  /* 11831d78 call esi */
  call_ind((uint32_t)(ESI), 0x11831d7au);
  /* 11831d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831d7f jne 0x11831daa */
  if (!C.zf) goto L_11831daa;
  /* 11831d81 push 0x1183f2d0 */
  push32((uint32_t)(0x1183f2d0u));
  /* 11831d86 call esi */
  call_ind((uint32_t)(ESI), 0x11831d88u);
  /* 11831d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831d8d jne 0x11831daa */
  if (!C.zf) goto L_11831daa;
  /* 11831d8f push 0xe */
  push32((uint32_t)(0xeu));
  /* 11831d91 call edi */
  call_ind((uint32_t)(EDI), 0x11831d93u);
  /* 11831d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831d96 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831d98 je 0x11831daa */
  if (C.zf) goto L_11831daa;
  /* 11831d9a push 0x1183c1e8 */
  push32((uint32_t)(0x1183c1e8u));
  /* 11831d9f call dword ptr [0x1183a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a13c))), 0x11831da5u);
  /* 11831da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831da8 call ebp */
  call_ind((uint32_t)(EBP), 0x11831daau);
L_11831daa:;
  /* 11831daa push 0 */
  push32((uint32_t)(0x0u));
  /* 11831dac call dword ptr [0x1183a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a180))), 0x11831db2u);
  /* 11831db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831db4 push 0x1183f4a8 */
  push32((uint32_t)(0x1183f4a8u));
  /* 11831db9 call ebx */
  call_ind((uint32_t)(EBX), 0x11831dbbu);
  /* 11831dbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831dbe pop edi */
  EDI = (pop32());
  /* 11831dbf pop esi */
  ESI = (pop32());
  /* 11831dc0 pop ebp */
  EBP = (pop32());
  /* 11831dc1 pop ebx */
  EBX = (pop32());
  /* 11831dc2 ret  */
  ESPCHK(0x118314e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x11831dd0 (187 bytes, 66 insns) */
void f_11831dd0(void) {
  FTRACE(0x11831dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11831dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11831dd1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11831dd5 push esi */
  push32((uint32_t)(ESI));
  /* 11831dd6 push edi */
  push32((uint32_t)(EDI));
  /* 11831dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11831dd8 call dword ptr [0x1183a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a128))), 0x11831ddeu);
  /* 11831dde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831de1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831de3 je 0x11831e87 */
  if (C.zf) goto L_11831e87;
  /* 11831de9 mov esi, dword ptr [0x1183a140] */
  ESI = (r32((uint32_t)(0x1183a140)));
  /* 11831def push 0 */
  push32((uint32_t)(0x0u));
  /* 11831df1 call esi */
  call_ind((uint32_t)(ESI), 0x11831df3u);
  /* 11831df3 mov ecx, 5 */
  ECX = (0x5u);
  /* 11831df8 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11831dfc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11831dfe lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11831e01 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11831e05 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11831e08 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11831e0b shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11831e0e push eax */
  push32((uint32_t)(EAX));
  /* 11831e0f push ecx */
  push32((uint32_t)(ECX));
  /* 11831e10 push edi */
  push32((uint32_t)(EDI));
  /* 11831e11 call 0x11832100 */
  push32(0x11831e16u); f_11832100();
  /* 11831e16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831e19 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831e1c jge 0x11831e56 */
  if ((C.sf==C.of)) goto L_11831e56;
  /* 11831e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831e20 jne 0x11831e4a */
  if (!C.zf) goto L_11831e4a;
  /* 11831e22 push eax */
  push32((uint32_t)(EAX));
  /* 11831e23 call esi */
  call_ind((uint32_t)(ESI), 0x11831e25u);
  /* 11831e25 mov ecx, 5 */
  ECX = (0x5u);
  /* 11831e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831e2d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11831e2f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11831e32 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11831e35 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11831e38 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11831e3b push edx */
  push32((uint32_t)(EDX));
  /* 11831e3c push 0x1183c284 */
  push32((uint32_t)(0x1183c284u));
  /* 11831e41 call dword ptr [0x1183a118] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a118))), 0x11831e47u);
  /* 11831e47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831e4a:;
  /* 11831e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11831e4c push ebx */
  push32((uint32_t)(EBX));
  /* 11831e4d call dword ptr [0x1183a134] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a134))), 0x11831e53u);
  /* 11831e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831e56:;
  /* 11831e56 mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11831e5a push esi */
  push32((uint32_t)(ESI));
  /* 11831e5b call dword ptr [0x1183a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a160))), 0x11831e61u);
  /* 11831e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831e64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11831e66 je 0x11831e87 */
  if (C.zf) goto L_11831e87;
  /* 11831e68 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11831e6c mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11831e70 push eax */
  push32((uint32_t)(EAX));
  /* 11831e71 push ecx */
  push32((uint32_t)(ECX));
  /* 11831e72 push edi */
  push32((uint32_t)(EDI));
  /* 11831e73 call 0x11832190 */
  push32(0x11831e78u); f_11832190();
  /* 11831e78 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11831e7d push esi */
  push32((uint32_t)(ESI));
  /* 11831e7e call dword ptr [0x1183a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a12c))), 0x11831e84u);
  /* 11831e84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11831e87:;
  /* 11831e87 pop edi */
  EDI = (pop32());
  /* 11831e88 pop esi */
  ESI = (pop32());
  /* 11831e89 pop ebx */
  EBX = (pop32());
  /* 11831e8a ret  */
  ESPCHK(0x11831dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e90 @ 0x11831e90 (59 bytes, 29 insns) */
void f_11831e90(void) {
  FTRACE(0x11831e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11831e90 push esi */
  push32((uint32_t)(ESI));
  /* 11831e91 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11831e95 push edi */
  push32((uint32_t)(EDI));
  /* 11831e96 mov edi, dword ptr [0x1183a17c] */
  EDI = (r32((uint32_t)(0x1183a17c)));
  /* 11831e9c push esi */
  push32((uint32_t)(ESI));
  /* 11831e9d call edi */
  call_ind((uint32_t)(EDI), 0x11831e9fu);
  /* 11831e9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831ea4 je 0x11831ebd */
  if (C.zf) goto L_11831ebd;
  /* 11831ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11831ea7 mov ebx, dword ptr [0x1183a114] */
  EBX = (r32((uint32_t)(0x1183a114)));
L_11831ead:;
  /* 11831ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11831eaf push esi */
  push32((uint32_t)(ESI));
  /* 11831eb0 call ebx */
  call_ind((uint32_t)(EBX), 0x11831eb2u);
  /* 11831eb2 push esi */
  push32((uint32_t)(ESI));
  /* 11831eb3 call edi */
  call_ind((uint32_t)(EDI), 0x11831eb5u);
  /* 11831eb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11831eba jne 0x11831ead */
  if (!C.zf) goto L_11831ead;
  /* 11831ebc pop ebx */
  EBX = (pop32());
L_11831ebd:;
  /* 11831ebd push esi */
  push32((uint32_t)(ESI));
  /* 11831ebe call edi */
  call_ind((uint32_t)(EDI), 0x11831ec0u);
  /* 11831ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831ec3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11831ec5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11831ec7 pop edi */
  EDI = (pop32());
  /* 11831ec8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11831ec9 pop esi */
  ESI = (pop32());
  /* 11831eca ret  */
  ESPCHK(0x11831e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ed0 @ 0x11831ed0 (449 bytes, 151 insns) */
void f_11831ed0(void) {
  FTRACE(0x11831ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11831ed0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11831ed4 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11831ed7 push ebx */
  push32((uint32_t)(EBX));
  /* 11831ed8 mov ebx, dword ptr [0x1183a17c] */
  EBX = (r32((uint32_t)(0x1183a17c)));
  /* 11831ede push ebp */
  push32((uint32_t)(EBP));
  /* 11831edf push esi */
  push32((uint32_t)(ESI));
  /* 11831ee0 push edi */
  push32((uint32_t)(EDI));
  /* 11831ee1 push eax */
  push32((uint32_t)(EAX));
  /* 11831ee2 call ebx */
  call_ind((uint32_t)(EBX), 0x11831ee4u);
  /* 11831ee4 mov ecx, dword ptr [esp + 0x54] */
  ECX = (r32((uint32_t)(ESP + 0x54)));
  /* 11831ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831eeb cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831eed jge 0x11831ef5 */
  if ((C.sf==C.of)) goto L_11831ef5;
  /* 11831eef sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11831ef1 mov edi, eax */
  EDI = (EAX);
  /* 11831ef3 jmp 0x11831ef7 */
  goto L_11831ef7;
L_11831ef5:;
  /* 11831ef5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11831ef7:;
  /* 11831ef7 mov esi, dword ptr [esp + 0x58] */
  ESI = (r32((uint32_t)(ESP + 0x58)));
  /* 11831efb mov ebp, dword ptr [esp + 0x4c] */
  EBP = (r32((uint32_t)(ESP + 0x4c)));
  /* 11831eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11831f01 mov dword ptr [esp + 0x14], 0x4000000a */
  w32((uint32_t)(ESP + 0x14), (0x4000000au));
  /* 11831f09 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831f0b mov word ptr [esp + 0x10], ax */
  w16((uint32_t)(ESP + 0x10), (AX));
  /* 11831f10 mov word ptr [esp + 0x12], ax */
  w16((uint32_t)(ESP + 0x12), (AX));
  /* 11831f15 je 0x11831f63 */
  if (C.zf) goto L_11831f63;
  /* 11831f17 push ebp */
  push32((uint32_t)(EBP));
  /* 11831f18 call dword ptr [0x1183a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a180))), 0x11831f1eu);
  /* 11831f1e mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 11831f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831f24 push ecx */
  push32((uint32_t)(ECX));
  /* 11831f25 call dword ptr [0x1183a124] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a124))), 0x11831f2bu);
  /* 11831f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11831f2d push esi */
  push32((uint32_t)(ESI));
  /* 11831f2e push ebp */
  push32((uint32_t)(EBP));
  /* 11831f2f call dword ptr [0x1183a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a168))), 0x11831f35u);
  /* 11831f35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831f38 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11831f3a jle 0x11831f63 */
  if ((C.zf||C.sf!=C.of)) goto L_11831f63;
  /* 11831f3c mov dword ptr [esp + 0x48], edi */
  w32((uint32_t)(ESP + 0x48), (EDI));
L_11831f40:;
  /* 11831f40 push esi */
  push32((uint32_t)(ESI));
  /* 11831f41 call ebx */
  call_ind((uint32_t)(EBX), 0x11831f43u);
  /* 11831f43 mov edi, eax */
  EDI = (EAX);
  /* 11831f45 call 0x118324ed */
  push32(0x11831f4au); f_118324ed();
  /* 11831f4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11831f4b idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11831f4d push edx */
  push32((uint32_t)(EDX));
  /* 11831f4e push esi */
  push32((uint32_t)(ESI));
  /* 11831f4f call dword ptr [0x1183a114] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a114))), 0x11831f55u);
  /* 11831f55 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 11831f59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831f5c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11831f5d mov dword ptr [esp + 0x48], eax */
  w32((uint32_t)(ESP + 0x48), (EAX));
  /* 11831f61 jne 0x11831f40 */
  if (!C.zf) goto L_11831f40;
L_11831f63:;
  /* 11831f63 push esi */
  push32((uint32_t)(ESI));
  /* 11831f64 call ebx */
  call_ind((uint32_t)(EBX), 0x11831f66u);
  /* 11831f66 mov ebx, eax */
  EBX = (EAX);
  /* 11831f68 lea edx, [ebx*4] */
  EDX = ((uint32_t)(EBX*4));
  /* 11831f6f push edx */
  push32((uint32_t)(EDX));
  /* 11831f70 call 0x118326e6 */
  push32(0x11831f75u); f_118326e6();
  /* 11831f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831f78 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11831f7a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11831f7c mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 11831f80 jle 0x11831fb2 */
  if ((C.zf||C.sf!=C.of)) goto L_11831fb2;
  /* 11831f82 mov dword ptr [esp + 0x48], eax */
  w32((uint32_t)(ESP + 0x48), (EAX));
L_11831f86:;
  /* 11831f86 lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 11831f8a push eax */
  push32((uint32_t)(EAX));
  /* 11831f8b push edi */
  push32((uint32_t)(EDI));
  /* 11831f8c push esi */
  push32((uint32_t)(ESI));
  /* 11831f8d call dword ptr [0x1183a11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a11c))), 0x11831f93u);
  /* 11831f93 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11831f97 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 11831f9b and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11831fa1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831fa4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11831fa6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11831fa7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11831faa cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11831fac mov dword ptr [esp + 0x48], eax */
  w32((uint32_t)(ESP + 0x48), (EAX));
  /* 11831fb0 jl 0x11831f86 */
  if ((C.sf!=C.of)) goto L_11831f86;
L_11831fb2:;
  /* 11831fb2 push esi */
  push32((uint32_t)(ESI));
  /* 11831fb3 call 0x11831e90 */
  push32(0x11831fb8u); f_11831e90();
  /* 11831fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11831fbb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11831fbd jle 0x1183207c */
  if ((C.zf||C.sf!=C.of)) goto L_1183207c;
  /* 11831fc3 fild dword ptr [esp + 0x54] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x54)));
  /* 11831fc7 mov edi, dword ptr [esp + 0x50] */
  EDI = (r32((uint32_t)(ESP + 0x50)));
  /* 11831fcb fstp dword ptr [esp + 0x48] */
  wf32((uint32_t)(ESP + 0x48), (float)FPU_ST(0));
  (void)fpu_pop();
L_11831fcf:;
  /* 11831fcf mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 11831fd1 push edx */
  push32((uint32_t)(EDX));
  /* 11831fd2 push esi */
  push32((uint32_t)(ESI));
  /* 11831fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831fd5 call dword ptr [0x1183a110] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a110))), 0x11831fdbu);
  /* 11831fdb lea eax, [esp + 0x24] */
  EAX = ((uint32_t)(ESP + 0x24));
  /* 11831fdf push eax */
  push32((uint32_t)(EAX));
  /* 11831fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11831fe2 push esi */
  push32((uint32_t)(ESI));
  /* 11831fe3 call dword ptr [0x1183a11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a11c))), 0x11831fe9u);
  /* 11831fe9 call 0x118324ed */
  push32(0x11831feeu); f_118324ed();
  /* 11831fee and eax, 0x800000ff */
  { uint32_t _r=(EAX)&(0x800000ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11831ff3 jns 0x11831ffc */
  if (!C.sf) goto L_11831ffc;
  /* 11831ff5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11831ff6 or eax, 0xffffff00 */
  { uint32_t _r=(EAX)|(0xffffff00u); EAX = (_r); fl_logic(_r,32); }
  /* 11831ffb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11831ffc:;
  /* 11831ffc mov dword ptr [esp + 0x70], eax */
  w32((uint32_t)(ESP + 0x70), (EAX));
  /* 11832000 fild dword ptr [esp + 0x70] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x70)));
  /* 11832004 fmul qword ptr [0x1183a1d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1183a1d0)));
  /* 1183200a fmul qword ptr [0x1183a1c8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1183a1c8)));
  /* 11832010 fld st(0) */
  { double _v=FPU_ST(0); fpu_push(_v); }
  /* 11832012 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11832014 fmul dword ptr [esp + 0x60] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x60)));
  /* 11832018 fiadd dword ptr [esp + 0x44] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x44)));
  /* 1183201c call 0x11832744 */
  push32(0x11832021u); f_11832744();
  /* 11832021 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11832023 mov word ptr [esp + 0x28], ax */
  w16((uint32_t)(ESP + 0x28), (AX));
  /* 11832028 fmul dword ptr [esp + 0x60] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x60)));
  /* 1183202c fiadd dword ptr [esp + 0x48] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x48)));
  /* 11832030 call 0x11832744 */
  push32(0x11832035u); f_11832744();
  /* 11832035 push ebp */
  push32((uint32_t)(EBP));
  /* 11832036 mov word ptr [esp + 0x2e], ax */
  w16((uint32_t)(ESP + 0x2e), (AX));
  /* 1183203b call dword ptr [0x1183a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a180))), 0x11832041u);
  /* 11832041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11832043 push esi */
  push32((uint32_t)(ESI));
  /* 11832044 call dword ptr [0x1183a124] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a124))), 0x1183204au);
  /* 1183204a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183204d push 0 */
  push32((uint32_t)(0x0u));
  /* 1183204f call 0x118324ed */
  push32(0x11832054u); f_118324ed();
  /* 11832054 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11832055 mov ecx, 0xfa */
  ECX = (0xfau);
  /* 1183205a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1183205c push edx */
  push32((uint32_t)(EDX));
  /* 1183205d lea edx, [esp + 0x18] */
  EDX = ((uint32_t)(ESP + 0x18));
  /* 11832061 push edx */
  push32((uint32_t)(EDX));
  /* 11832062 push ebp */
  push32((uint32_t)(EBP));
  /* 11832063 call dword ptr [0x1183a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a120))), 0x11832069u);
  /* 11832069 push esi */
  push32((uint32_t)(ESI));
  /* 1183206a call 0x11831e90 */
  push32(0x1183206fu); f_11831e90();
  /* 1183206f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832072 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11832075 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11832076 jne 0x11831fcf */
  if (!C.zf) goto L_11831fcf;
L_1183207c:;
  /* 1183207c mov eax, dword ptr [esp + 0x50] */
  EAX = (r32((uint32_t)(ESP + 0x50)));
  /* 11832080 push eax */
  push32((uint32_t)(EAX));
  /* 11832081 call 0x118325eb */
  push32(0x11832086u); f_118325eb();
  /* 11832086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832089 pop edi */
  EDI = (pop32());
  /* 1183208a pop esi */
  ESI = (pop32());
  /* 1183208b pop ebp */
  EBP = (pop32());
  /* 1183208c pop ebx */
  EBX = (pop32());
  /* 1183208d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832090 ret  */
  ESPCHK(0x11831ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020a0 @ 0x118320a0 (50 bytes, 19 insns) */
void f_118320a0(void) {
  FTRACE(0x118320a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118320a0 push esi */
  push32((uint32_t)(ESI));
  /* 118320a1 push edi */
  push32((uint32_t)(EDI));
  /* 118320a2 mov esi, ecx */
  ESI = (ECX);
  /* 118320a4 push 0x1183c194 */
  push32((uint32_t)(0x1183c194u));
  /* 118320a9 push esi */
  push32((uint32_t)(ESI));
  /* 118320aa call dword ptr [0x1183a1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a1b8))), 0x118320b0u);
  /* 118320b0 mov edi, dword ptr [0x1183a1bc] */
  EDI = (r32((uint32_t)(0x1183a1bc)));
  /* 118320b6 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 118320b9 push 0x1183c2a0 */
  push32((uint32_t)(0x1183c2a0u));
  /* 118320be push eax */
  push32((uint32_t)(EAX));
  /* 118320bf call edi */
  call_ind((uint32_t)(EDI), 0x118320c1u);
  /* 118320c1 add esi, 0x10 */
  { uint32_t _a=(ESI),_b=(0x10u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118320c4 push 0x1183c290 */
  push32((uint32_t)(0x1183c290u));
  /* 118320c9 push esi */
  push32((uint32_t)(ESI));
  /* 118320ca call edi */
  call_ind((uint32_t)(EDI), 0x118320ccu);
  /* 118320cc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118320cf pop edi */
  EDI = (pop32());
  /* 118320d0 pop esi */
  ESI = (pop32());
  /* 118320d1 ret  */
  ESPCHK(0x118320a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e0 @ 0x118320e0 (32 bytes, 13 insns) */
void f_118320e0(void) {
  FTRACE(0x118320e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118320e0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118320e4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118320e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118320ea push eax */
  push32((uint32_t)(EAX));
  /* 118320eb lea edx, [ecx + 0x10] */
  EDX = ((uint32_t)(ECX + 0x10));
  /* 118320ee push 6 */
  push32((uint32_t)(0x6u));
  /* 118320f0 push edx */
  push32((uint32_t)(EDX));
  /* 118320f1 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118320f4 push ecx */
  push32((uint32_t)(ECX));
  /* 118320f5 push eax */
  push32((uint32_t)(EAX));
  /* 118320f6 call dword ptr [0x1183a100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a100))), 0x118320fcu);
  /* 118320fc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118320ff ret  */
  ESPCHK(0x118320e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002100 @ 0x11832100 (129 bytes, 53 insns) */
void f_11832100(void) {
  FTRACE(0x11832100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832100 push ebx */
  push32((uint32_t)(EBX));
  /* 11832101 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11832105 push ebp */
  push32((uint32_t)(EBP));
  /* 11832106 push esi */
  push32((uint32_t)(ESI));
  /* 11832107 lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 1183210a push edi */
  push32((uint32_t)(EDI));
  /* 1183210b push eax */
  push32((uint32_t)(EAX));
  /* 1183210c mov esi, 8 */
  ESI = (0x8u);
  /* 11832111 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x11832117u);
  /* 11832117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183211a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183211c jne 0x1183217a */
  if (!C.zf) goto L_1183217a;
  /* 1183211e mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
  /* 11832122 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11832124:;
  /* 11832124 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832127 jne 0x1183217a */
  if (!C.zf) goto L_1183217a;
  /* 11832129 push edi */
  push32((uint32_t)(EDI));
  /* 1183212a push ebx */
  push32((uint32_t)(EBX));
  /* 1183212b call dword ptr [0x1183a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a170))), 0x11832131u);
  /* 11832131 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832136 je 0x11832174 */
  if (C.zf) goto L_11832174;
  /* 11832138 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 1183213c mov dword ptr [esp + 0x14], edi */
  w32((uint32_t)(ESP + 0x14), (EDI));
  /* 11832140 push ecx */
  push32((uint32_t)(ECX));
  /* 11832141 push 1 */
  push32((uint32_t)(0x1u));
  /* 11832143 push edi */
  push32((uint32_t)(EDI));
  /* 11832144 call dword ptr [0x1183a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a104))), 0x1183214au);
  /* 1183214a lea esi, [ebx + 0x10] */
  ESI = ((uint32_t)(EBX + 0x10));
  /* 1183214d push 0 */
  push32((uint32_t)(0x0u));
  /* 1183214f push esi */
  push32((uint32_t)(ESI));
  /* 11832150 call dword ptr [0x1183a124] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a124))), 0x11832156u);
  /* 11832156 push 6 */
  push32((uint32_t)(0x6u));
  /* 11832158 call dword ptr [0x1183a108] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a108))), 0x1183215eu);
  /* 1183215e push 0 */
  push32((uint32_t)(0x0u));
  /* 11832160 push ebx */
  push32((uint32_t)(EBX));
  /* 11832161 lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11832164 push 6 */
  push32((uint32_t)(0x6u));
  /* 11832166 push edx */
  push32((uint32_t)(EDX));
  /* 11832167 push ebp */
  push32((uint32_t)(EBP));
  /* 11832168 push esi */
  push32((uint32_t)(ESI));
  /* 11832169 call dword ptr [0x1183a100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a100))), 0x1183216fu);
  /* 1183216f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832172 mov esi, edi */
  ESI = (EDI);
L_11832174:;
  /* 11832174 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11832175 cmp edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832178 jl 0x11832124 */
  if ((C.sf!=C.of)) goto L_11832124;
L_1183217a:;
  /* 1183217a mov eax, esi */
  EAX = (ESI);
  /* 1183217c pop edi */
  EDI = (pop32());
  /* 1183217d pop esi */
  ESI = (pop32());
  /* 1183217e pop ebp */
  EBP = (pop32());
  /* 1183217f pop ebx */
  EBX = (pop32());
  /* 11832180 ret  */
  ESPCHK(0x11832100u, _esp0);
  ESP += 4; return;
}

/* FUN_10002190 @ 0x11832190 (321 bytes, 100 insns) */
void f_11832190(void) {
  FTRACE(0x11832190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832190 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11832194 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832197 push ebx */
  push32((uint32_t)(EBX));
  /* 11832198 push ebp */
  push32((uint32_t)(EBP));
  /* 11832199 mov ebp, dword ptr [0x1183a17c] */
  EBP = (r32((uint32_t)(0x1183a17c)));
  /* 1183219f lea ebx, [eax + 8] */
  EBX = ((uint32_t)(EAX + 0x8));
  /* 118321a2 push edi */
  push32((uint32_t)(EDI));
  /* 118321a3 push ebx */
  push32((uint32_t)(EBX));
  /* 118321a4 call ebp */
  call_ind((uint32_t)(EBP), 0x118321a6u);
  /* 118321a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118321a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118321ab je 0x118322ca */
  if (C.zf) goto L_118322ca;
  /* 118321b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118321b3 push ebx */
  push32((uint32_t)(EBX));
  /* 118321b4 mov word ptr [esp + 0x1c], di */
  w16((uint32_t)(ESP + 0x1c), (DI));
  /* 118321b9 mov word ptr [esp + 0x1e], di */
  w16((uint32_t)(ESP + 0x1e), (DI));
  /* 118321be mov dword ptr [esp + 0x20], 0x4000000a */
  w32((uint32_t)(ESP + 0x20), (0x4000000au));
  /* 118321c6 call ebp */
  call_ind((uint32_t)(EBP), 0x118321c8u);
  /* 118321c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118321cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118321cd jle 0x118322ca */
  if ((C.zf||C.sf!=C.of)) goto L_118322ca;
  /* 118321d3 push esi */
  push32((uint32_t)(ESI));
  /* 118321d4 mov esi, dword ptr [esp + 0x58] */
  ESI = (r32((uint32_t)(ESP + 0x58)));
L_118321d8:;
  /* 118321d8 push esi */
  push32((uint32_t)(ESI));
  /* 118321d9 call 0x11831e90 */
  push32(0x118321deu); f_11831e90();
  /* 118321de lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 118321e2 push ecx */
  push32((uint32_t)(ECX));
  /* 118321e3 push edi */
  push32((uint32_t)(EDI));
  /* 118321e4 push ebx */
  push32((uint32_t)(EBX));
  /* 118321e5 call dword ptr [0x1183a11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a11c))), 0x118321ebu);
  /* 118321eb mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 118321ef and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118321f5 push edx */
  push32((uint32_t)(EDX));
  /* 118321f6 push esi */
  push32((uint32_t)(ESI));
  /* 118321f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118321f9 call dword ptr [0x1183a110] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a110))), 0x118321ffu);
  /* 118321ff call 0x118324ed */
  push32(0x11832204u); f_118324ed();
  /* 11832204 and eax, 0x800000ff */
  { uint32_t _r=(EAX)&(0x800000ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11832209 jns 0x11832212 */
  if (!C.sf) goto L_11832212;
  /* 1183220b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1183220c or eax, 0xffffff00 */
  { uint32_t _r=(EAX)|(0xffffff00u); EAX = (_r); fl_logic(_r,32); }
  /* 11832211 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11832212:;
  /* 11832212 mov dword ptr [esp + 0x74], eax */
  w32((uint32_t)(ESP + 0x74), (EAX));
  /* 11832216 fild dword ptr [esp + 0x74] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x74)));
  /* 1183221a fmul qword ptr [0x1183a1d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1183a1d0)));
  /* 11832220 fmul qword ptr [0x1183a1c8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1183a1c8)));
  /* 11832226 fstp dword ptr [esp + 0x74] */
  wf32((uint32_t)(ESP + 0x74), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 1183222a call 0x118324ed */
  push32(0x1183222fu); f_118324ed();
  /* 1183222f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11832230 mov ecx, 0x12c */
  ECX = (0x12cu);
  /* 11832235 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11832237 mov ecx, dword ptr [esp + 0x70] */
  ECX = (r32((uint32_t)(ESP + 0x70)));
  /* 1183223b lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 1183223f mov dword ptr [esp + 0x2c], edx */
  w32((uint32_t)(ESP + 0x2c), (EDX));
  /* 11832243 lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 11832247 fild dword ptr [esp + 0x2c] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x2c)));
  /* 1183224b push edx */
  push32((uint32_t)(EDX));
  /* 1183224c push eax */
  push32((uint32_t)(EAX));
  /* 1183224d push ecx */
  push32((uint32_t)(ECX));
  /* 1183224e fstp dword ptr [esp + 0x38] */
  wf32((uint32_t)(ESP + 0x38), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 11832252 call dword ptr [0x1183a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a10c))), 0x11832258u);
  /* 11832258 fld dword ptr [esp + 0x80] */
  fpu_push((double)rf32((uint32_t)(ESP + 0x80)));
  /* 1183225f fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11832261 fmul dword ptr [esp + 0x38] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x38)));
  /* 11832265 fiadd dword ptr [esp + 0x3c] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x3c)));
  /* 11832269 call 0x11832744 */
  push32(0x1183226eu); f_11832744();
  /* 1183226e fld dword ptr [esp + 0x80] */
  fpu_push((double)rf32((uint32_t)(ESP + 0x80)));
  /* 11832275 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11832277 mov word ptr [esp + 0x44], ax */
  w16((uint32_t)(ESP + 0x44), (AX));
  /* 1183227c fmul dword ptr [esp + 0x38] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x38)));
  /* 11832280 fiadd dword ptr [esp + 0x40] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x40)));
  /* 11832284 call 0x11832744 */
  push32(0x11832289u); f_11832744();
  /* 11832289 push 0 */
  push32((uint32_t)(0x0u));
  /* 1183228b push esi */
  push32((uint32_t)(ESI));
  /* 1183228c mov word ptr [esp + 0x4e], ax */
  w16((uint32_t)(ESP + 0x4e), (AX));
  /* 11832291 call dword ptr [0x1183a124] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a124))), 0x11832297u);
  /* 11832297 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183229a push 0 */
  push32((uint32_t)(0x0u));
  /* 1183229c call 0x118324ed */
  push32(0x118322a1u); f_118324ed();
  /* 118322a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118322a2 mov ecx, 0xff */
  ECX = (0xffu);
  /* 118322a7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118322a9 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 118322ad push edx */
  push32((uint32_t)(EDX));
  /* 118322ae lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 118322b2 push edx */
  push32((uint32_t)(EDX));
  /* 118322b3 push eax */
  push32((uint32_t)(EAX));
  /* 118322b4 call dword ptr [0x1183a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a120))), 0x118322bau);
  /* 118322ba push ebx */
  push32((uint32_t)(EBX));
  /* 118322bb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118322bc call ebp */
  call_ind((uint32_t)(EBP), 0x118322beu);
  /* 118322be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118322c1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118322c3 jl 0x118321d8 */
  if ((C.sf!=C.of)) goto L_118321d8;
  /* 118322c9 pop esi */
  ESI = (pop32());
L_118322ca:;
  /* 118322ca pop edi */
  EDI = (pop32());
  /* 118322cb pop ebp */
  EBP = (pop32());
  /* 118322cc pop ebx */
  EBX = (pop32());
  /* 118322cd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118322d0 ret  */
  ESPCHK(0x11832190u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x118322e0 (61 bytes, 32 insns) */
void f_118322e0(void) {
  FTRACE(0x118322e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118322e0 push ebx */
  push32((uint32_t)(EBX));
  /* 118322e1 push ebp */
  push32((uint32_t)(EBP));
  /* 118322e2 mov ebp, dword ptr [0x1183a1ac] */
  EBP = (r32((uint32_t)(0x1183a1ac)));
  /* 118322e8 push esi */
  push32((uint32_t)(ESI));
  /* 118322e9 mov esi, ecx */
  ESI = (ECX);
  /* 118322eb push edi */
  push32((uint32_t)(EDI));
  /* 118322ec lea edi, [esi + 0xd] */
  EDI = ((uint32_t)(ESI + 0xd));
  /* 118322ef push edi */
  push32((uint32_t)(EDI));
  /* 118322f0 call ebp */
  call_ind((uint32_t)(EBP), 0x118322f2u);
  /* 118322f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 118322f4 push edi */
  push32((uint32_t)(EDI));
  /* 118322f5 mov edi, dword ptr [0x1183a19c] */
  EDI = (r32((uint32_t)(0x1183a19c)));
  /* 118322fb call edi */
  call_ind((uint32_t)(EDI), 0x118322fdu);
  /* 118322fd lea ebx, [esi + 0x15] */
  EBX = ((uint32_t)(ESI + 0x15));
  /* 11832300 push ebx */
  push32((uint32_t)(EBX));
  /* 11832301 call ebp */
  call_ind((uint32_t)(EBP), 0x11832303u);
  /* 11832303 push 8 */
  push32((uint32_t)(0x8u));
  /* 11832305 push ebx */
  push32((uint32_t)(EBX));
  /* 11832306 call edi */
  call_ind((uint32_t)(EDI), 0x11832308u);
  /* 11832308 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1183230b push 4 */
  push32((uint32_t)(0x4u));
  /* 1183230d push eax */
  push32((uint32_t)(EAX));
  /* 1183230e call edi */
  call_ind((uint32_t)(EDI), 0x11832310u);
  /* 11832310 push 4 */
  push32((uint32_t)(0x4u));
  /* 11832312 push esi */
  push32((uint32_t)(ESI));
  /* 11832313 call edi */
  call_ind((uint32_t)(EDI), 0x11832315u);
  /* 11832315 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832318 pop edi */
  EDI = (pop32());
  /* 11832319 pop esi */
  ESI = (pop32());
  /* 1183231a pop ebp */
  EBP = (pop32());
  /* 1183231b pop ebx */
  EBX = (pop32());
  /* 1183231c ret  */
  ESPCHK(0x118322e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002320 @ 0x11832320 (71 bytes, 29 insns) */
void f_11832320(void) {
  FTRACE(0x11832320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832320 push esi */
  push32((uint32_t)(ESI));
  /* 11832321 mov esi, ecx */
  ESI = (ECX);
  /* 11832323 push edi */
  push32((uint32_t)(EDI));
  /* 11832324 lea edi, [esi + 0x15] */
  EDI = ((uint32_t)(ESI + 0x15));
  /* 11832327 push edi */
  push32((uint32_t)(EDI));
  /* 11832328 call 0x11831e90 */
  push32(0x1183232du); f_11831e90();
  /* 1183232d call 0x118324ed */
  push32(0x11832332u); f_118324ed();
  /* 11832332 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11832333 mov ecx, 0xff */
  ECX = (0xffu);
  /* 11832338 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1183233a mov al, byte ptr [esi + 4] */
  AL = (r8((uint32_t)(ESI + 0x4)));
  /* 1183233d mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11832341 push edx */
  push32((uint32_t)(EDX));
  /* 11832342 lea edx, [esi + 5] */
  EDX = ((uint32_t)(ESI + 0x5));
  /* 11832345 push edx */
  push32((uint32_t)(EDX));
  /* 11832346 mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 1183234a push eax */
  push32((uint32_t)(EAX));
  /* 1183234b push ecx */
  push32((uint32_t)(ECX));
  /* 1183234c push edx */
  push32((uint32_t)(EDX));
  /* 1183234d push edi */
  push32((uint32_t)(EDI));
  /* 1183234e call dword ptr [0x1183a100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a100))), 0x11832354u);
  /* 11832354 add esi, 0xd */
  { uint32_t _a=(ESI),_b=(0xdu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11832357 push esi */
  push32((uint32_t)(ESI));
  /* 11832358 push edi */
  push32((uint32_t)(EDI));
  /* 11832359 call dword ptr [0x1183a0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0fc))), 0x1183235fu);
  /* 1183235f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832362 pop edi */
  EDI = (pop32());
  /* 11832363 pop esi */
  ESI = (pop32());
  /* 11832364 ret 8 */
  ESPCHK(0x11832320u, _esp0);
  ESP += 12; return;
}

/* FUN_10002370 @ 0x11832370 (353 bytes, 111 insns) */
void f_11832370(void) {
  FTRACE(0x11832370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832370 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832373 push ebx */
  push32((uint32_t)(EBX));
  /* 11832374 push ebp */
  push32((uint32_t)(EBP));
  /* 11832375 mov ebp, ecx */
  EBP = (ECX);
  /* 11832377 push esi */
  push32((uint32_t)(ESI));
  /* 11832378 mov esi, dword ptr [0x1183a17c] */
  ESI = (r32((uint32_t)(0x1183a17c)));
  /* 1183237e lea ebx, [ebp + 0xd] */
  EBX = ((uint32_t)(EBP + 0xd));
  /* 11832381 push ebx */
  push32((uint32_t)(EBX));
  /* 11832382 call esi */
  call_ind((uint32_t)(ESI), 0x11832384u);
  /* 11832384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832389 je 0x118324ca */
  if (C.zf) goto L_118324ca;
  /* 1183238f mov al, byte ptr [ebp] */
  AL = (r8((uint32_t)(EBP)));
  /* 11832392 push eax */
  push32((uint32_t)(EAX));
  /* 11832393 call dword ptr [0x1183a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a160))), 0x11832399u);
  /* 11832399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183239c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1183239e je 0x118324ca */
  if (C.zf) goto L_118324ca;
  /* 118323a4 push edi */
  push32((uint32_t)(EDI));
  /* 118323a5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118323a7 push ebx */
  push32((uint32_t)(EBX));
  /* 118323a8 mov word ptr [esp + 0x24], di */
  w16((uint32_t)(ESP + 0x24), (DI));
  /* 118323ad mov word ptr [esp + 0x26], di */
  w16((uint32_t)(ESP + 0x26), (DI));
  /* 118323b2 mov dword ptr [esp + 0x28], 0x40000064 */
  w32((uint32_t)(ESP + 0x28), (0x40000064u));
  /* 118323ba call esi */
  call_ind((uint32_t)(ESI), 0x118323bcu);
  /* 118323bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118323bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118323c1 jle 0x118324b7 */
  if ((C.zf||C.sf!=C.of)) goto L_118324b7;
  /* 118323c7 lea esi, [ebp + 0x15] */
  ESI = ((uint32_t)(EBP + 0x15));
L_118323ca:;
  /* 118323ca push esi */
  push32((uint32_t)(ESI));
  /* 118323cb call 0x11831e90 */
  push32(0x118323d0u); f_11831e90();
  /* 118323d0 lea ecx, [esp + 0x2c] */
  ECX = ((uint32_t)(ESP + 0x2c));
  /* 118323d4 push ecx */
  push32((uint32_t)(ECX));
  /* 118323d5 push edi */
  push32((uint32_t)(EDI));
  /* 118323d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118323d7 call dword ptr [0x1183a11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a11c))), 0x118323ddu);
  /* 118323dd mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 118323e1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118323e7 push edx */
  push32((uint32_t)(EDX));
  /* 118323e8 push esi */
  push32((uint32_t)(ESI));
  /* 118323e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118323eb call dword ptr [0x1183a110] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a110))), 0x118323f1u);
  /* 118323f1 call 0x118324ed */
  push32(0x118323f6u); f_118324ed();
  /* 118323f6 and eax, 0x800000ff */
  { uint32_t _r=(EAX)&(0x800000ffu); EAX = (_r); fl_logic(_r,32); }
  /* 118323fb jns 0x11832404 */
  if (!C.sf) goto L_11832404;
  /* 118323fd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118323fe or eax, 0xffffff00 */
  { uint32_t _r=(EAX)|(0xffffff00u); EAX = (_r); fl_logic(_r,32); }
  /* 11832403 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11832404:;
  /* 11832404 mov dword ptr [esp + 0x30], eax */
  w32((uint32_t)(ESP + 0x30), (EAX));
  /* 11832408 fild dword ptr [esp + 0x30] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x30)));
  /* 1183240c fmul qword ptr [0x1183a1d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1183a1d0)));
  /* 11832412 fmul qword ptr [0x1183a1c8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1183a1c8)));
  /* 11832418 fstp dword ptr [esp + 0x2c] */
  wf32((uint32_t)(ESP + 0x2c), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 1183241c call 0x118324ed */
  push32(0x11832421u); f_118324ed();
  /* 11832421 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11832422 mov ecx, 0xbb8 */
  ECX = (0xbb8u);
  /* 11832427 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11832429 lea eax, [esp + 0x34] */
  EAX = ((uint32_t)(ESP + 0x34));
  /* 1183242d mov dword ptr [esp + 0x30], edx */
  w32((uint32_t)(ESP + 0x30), (EDX));
  /* 11832431 lea edx, [esp + 0x38] */
  EDX = ((uint32_t)(ESP + 0x38));
  /* 11832435 fild dword ptr [esp + 0x30] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x30)));
  /* 11832439 push edx */
  push32((uint32_t)(EDX));
  /* 1183243a push eax */
  push32((uint32_t)(EAX));
  /* 1183243b lea eax, [ebp + 5] */
  EAX = ((uint32_t)(EBP + 0x5));
  /* 1183243e fstp dword ptr [esp + 0x38] */
  wf32((uint32_t)(ESP + 0x38), (float)FPU_ST(0));
  (void)fpu_pop();
  /* 11832442 push eax */
  push32((uint32_t)(EAX));
  /* 11832443 call dword ptr [0x1183a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a10c))), 0x11832449u);
  /* 11832449 fld dword ptr [esp + 0x38] */
  fpu_push((double)rf32((uint32_t)(ESP + 0x38)));
  /* 1183244d fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 1183244f fmul dword ptr [esp + 0x3c] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x3c)));
  /* 11832453 fiadd dword ptr [esp + 0x40] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x40)));
  /* 11832457 call 0x11832744 */
  push32(0x1183245cu); f_11832744();
  /* 1183245c fld dword ptr [esp + 0x38] */
  fpu_push((double)rf32((uint32_t)(ESP + 0x38)));
  /* 11832460 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11832462 mov word ptr [esp + 0x48], ax */
  w16((uint32_t)(ESP + 0x48), (AX));
  /* 11832467 fmul dword ptr [esp + 0x3c] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x3c)));
  /* 1183246b fiadd dword ptr [esp + 0x44] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x44)));
  /* 1183246f call 0x11832744 */
  push32(0x11832474u); f_11832744();
  /* 11832474 push 0 */
  push32((uint32_t)(0x0u));
  /* 11832476 push esi */
  push32((uint32_t)(ESI));
  /* 11832477 mov word ptr [esp + 0x52], ax */
  w16((uint32_t)(ESP + 0x52), (AX));
  /* 1183247c call dword ptr [0x1183a124] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a124))), 0x11832482u);
  /* 11832482 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832485 push 0 */
  push32((uint32_t)(0x0u));
  /* 11832487 call 0x118324ed */
  push32(0x1183248cu); f_118324ed();
  /* 1183248c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1183248d mov ecx, 0xff */
  ECX = (0xffu);
  /* 11832492 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11832494 mov al, byte ptr [ebp + 4] */
  AL = (r8((uint32_t)(EBP + 0x4)));
  /* 11832497 push edx */
  push32((uint32_t)(EDX));
  /* 11832498 lea edx, [esp + 0x28] */
  EDX = ((uint32_t)(ESP + 0x28));
  /* 1183249c push edx */
  push32((uint32_t)(EDX));
  /* 1183249d push eax */
  push32((uint32_t)(EAX));
  /* 1183249e call dword ptr [0x1183a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a120))), 0x118324a4u);
  /* 118324a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118324a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118324a6 call dword ptr [0x1183a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a17c))), 0x118324acu);
  /* 118324ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118324af cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118324b1 jl 0x118323ca */
  if ((C.sf!=C.of)) goto L_118323ca;
L_118324b7:;
  /* 118324b7 mov cl, byte ptr [ebp] */
  CL = (r8((uint32_t)(EBP)));
  /* 118324ba push 0x320 */
  push32((uint32_t)(0x320u));
  /* 118324bf push ecx */
  push32((uint32_t)(ECX));
  /* 118324c0 call dword ptr [0x1183a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a12c))), 0x118324c6u);
  /* 118324c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118324c9 pop edi */
  EDI = (pop32());
L_118324ca:;
  /* 118324ca pop esi */
  ESI = (pop32());
  /* 118324cb pop ebp */
  EBP = (pop32());
  /* 118324cc pop ebx */
  EBX = (pop32());
  /* 118324cd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118324d0 ret  */
  ESPCHK(0x11832370u, _esp0);
  ESP += 4; return;
}

/* FUN_100024e0 @ 0x118324e0 (13 bytes, 4 insns) */
void f_118324e0(void) {
  FTRACE(0x118324e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118324e0 call 0x11832a16 */
  push32(0x118324e5u); f_11832a16();
  /* 118324e5 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118324e9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 118324ec ret  */
  ESPCHK(0x118324e0u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x118324ed (34 bytes, 9 insns) */
void f_118324ed(void) {
  FTRACE(0x118324edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118324ed call 0x11832a16 */
  push32(0x118324f2u); f_11832a16();
  /* 118324f2 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118324f5 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118324fb add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832501 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11832504 mov eax, ecx */
  EAX = (ECX);
  /* 11832506 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11832509 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 1183250e ret  */
  ESPCHK(0x118324edu, _esp0);
  ESP += 4; return;
}

/* FUN_1000250f @ 0x1183250f (220 bytes, 75 insns) */
void f_1183250f(void) {
  FTRACE(0x1183250fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183250f push ebp */
  push32((uint32_t)(EBP));
  /* 11832510 mov ebp, esp */
  EBP = (ESP);
  /* 11832512 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832518 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1183251b push eax */
  push32((uint32_t)(EAX));
  /* 1183251c call dword ptr [0x1183a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0a8))), 0x11832522u);
  /* 11832522 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11832525 push eax */
  push32((uint32_t)(EAX));
  /* 11832526 call dword ptr [0x1183a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0a4))), 0x1183252cu);
  /* 1183252c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11832530 cmp ax, word ptr [0x1183f4d2] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x1183f4d2))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11832537 jne 0x11832574 */
  if (!C.zf) goto L_11832574;
  /* 11832539 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 1183253d cmp ax, word ptr [0x1183f4d0] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x1183f4d0))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11832544 jne 0x11832574 */
  if (!C.zf) goto L_11832574;
  /* 11832546 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 1183254a cmp ax, word ptr [0x1183f4ce] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x1183f4ce))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11832551 jne 0x11832574 */
  if (!C.zf) goto L_11832574;
  /* 11832553 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11832557 cmp ax, word ptr [0x1183f4ca] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x1183f4ca))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183255e jne 0x11832574 */
  if (!C.zf) goto L_11832574;
  /* 11832560 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11832564 cmp ax, word ptr [0x1183f4c8] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x1183f4c8))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183256b jne 0x11832574 */
  if (!C.zf) goto L_11832574;
  /* 1183256d mov eax, dword ptr [0x1183f4c0] */
  EAX = (r32((uint32_t)(0x1183f4c0)));
  /* 11832572 jmp 0x118325b9 */
  goto L_118325b9;
L_11832574:;
  /* 11832574 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 1183257a push eax */
  push32((uint32_t)(EAX));
  /* 1183257b call dword ptr [0x1183a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0a0))), 0x11832581u);
  /* 11832581 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832584 je 0x118325a1 */
  if (C.zf) goto L_118325a1;
  /* 11832586 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832589 jne 0x1183259d */
  if (!C.zf) goto L_1183259d;
  /* 1183258b cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11832590 je 0x1183259d */
  if (C.zf) goto L_1183259d;
  /* 11832592 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832596 je 0x1183259d */
  if (C.zf) goto L_1183259d;
  /* 11832598 push 1 */
  push32((uint32_t)(0x1u));
  /* 1183259a pop eax */
  EAX = (pop32());
  /* 1183259b jmp 0x118325a4 */
  goto L_118325a4;
L_1183259d:;
  /* 1183259d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183259f jmp 0x118325a4 */
  goto L_118325a4;
L_118325a1:;
  /* 118325a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118325a4:;
  /* 118325a4 push esi */
  push32((uint32_t)(ESI));
  /* 118325a5 push edi */
  push32((uint32_t)(EDI));
  /* 118325a6 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 118325a9 mov edi, 0x1183f4c8 */
  EDI = (0x1183f4c8u);
  /* 118325ae movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118325af movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118325b0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118325b1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118325b2 pop edi */
  EDI = (pop32());
  /* 118325b3 mov dword ptr [0x1183f4c0], eax */
  w32((uint32_t)(0x1183f4c0), (EAX));
  /* 118325b8 pop esi */
  ESI = (pop32());
L_118325b9:;
  /* 118325b9 push eax */
  push32((uint32_t)(EAX));
  /* 118325ba movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 118325be push eax */
  push32((uint32_t)(EAX));
  /* 118325bf movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 118325c3 push eax */
  push32((uint32_t)(EAX));
  /* 118325c4 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 118325c8 push eax */
  push32((uint32_t)(EAX));
  /* 118325c9 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 118325cd push eax */
  push32((uint32_t)(EAX));
  /* 118325ce movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 118325d2 push eax */
  push32((uint32_t)(EAX));
  /* 118325d3 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 118325d7 push eax */
  push32((uint32_t)(EAX));
  /* 118325d8 call 0x11832b1d */
  push32(0x118325ddu); f_11832b1d();
  /* 118325dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118325e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118325e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118325e5 je 0x118325e9 */
  if (C.zf) goto L_118325e9;
  /* 118325e7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118325e9:;
  /* 118325e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118325ea ret  */
  ESPCHK(0x1183250fu, _esp0);
  ESP += 4; return;
}

/* FUN_100025eb @ 0x118325eb (11 bytes, 4 insns) */
void f_118325eb(void) {
  FTRACE(0x118325ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118325eb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118325ef call 0x11832bdf */
  push32(0x118325f4u); f_11832bdf();
  /* 118325f4 pop ecx */
  ECX = (pop32());
  /* 118325f5 ret  */
  ESPCHK(0x118325ebu, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x118325f8 (32 bytes, 18 insns) */
void f_118325f8(void) {
  FTRACE(0x118325f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118325f8 push ebp */
  push32((uint32_t)(EBP));
  /* 118325f9 mov ebp, esp */
  EBP = (ESP);
  /* 118325fb push ebx */
  push32((uint32_t)(EBX));
  /* 118325fc push esi */
  push32((uint32_t)(ESI));
  /* 118325fd push edi */
  push32((uint32_t)(EDI));
  /* 118325fe push ebp */
  push32((uint32_t)(EBP));
  /* 118325ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11832601 push 0 */
  push32((uint32_t)(0x0u));
  /* 11832603 push 0x11832610 */
  push32((uint32_t)(0x11832610u));
  /* 11832608 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1183260b call 0x11839e42 */
  push32(0x11832610u); f_11839e42();
  /* 11832610 pop ebp */
  EBP = (pop32());
  /* 11832611 pop edi */
  EDI = (pop32());
  /* 11832612 pop esi */
  ESI = (pop32());
  /* 11832613 pop ebx */
  EBX = (pop32());
  /* 11832614 mov esp, ebp */
  ESP = (EBP);
  /* 11832616 pop ebp */
  EBP = (pop32());
  /* 11832617 ret  */
  ESPCHK(0x118325f8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1183263a (104 bytes, 33 insns) */
void f_1183263a(void) {
  FTRACE(0x1183263au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183263a push ebx */
  push32((uint32_t)(EBX));
  /* 1183263b push esi */
  push32((uint32_t)(ESI));
  /* 1183263c push edi */
  push32((uint32_t)(EDI));
  /* 1183263d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11832641 push eax */
  push32((uint32_t)(EAX));
  /* 11832642 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11832644 push 0x11832618 */
  push32((uint32_t)(0x11832618u));
  /* 11832649 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11832650 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11832657:;
  /* 11832657 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1183265b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1183265e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11832661 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832664 je 0x11832694 */
  if (C.zf) goto L_11832694;
  /* 11832666 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183266a je 0x11832694 */
  if (C.zf) goto L_11832694;
  /* 1183266c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1183266f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11832672 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11832676 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11832679 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183267e jne 0x11832692 */
  if (!C.zf) goto L_11832692;
  /* 11832680 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11832685 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11832689 call 0x118326ce */
  push32(0x1183268eu); f_118326ce();
  /* 1183268e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11832692u);
L_11832692:;
  /* 11832692 jmp 0x11832657 */
  goto L_11832657;
L_11832694:;
  /* 11832694 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1183269b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183269e pop edi */
  EDI = (pop32());
  /* 1183269f pop esi */
  ESI = (pop32());
  /* 118326a0 pop ebx */
  EBX = (pop32());
  /* 118326a1 ret  */
  ESPCHK(0x1183263au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x118326c5 (9 bytes, 4 insns) */
void f_118326c5(void) {
  FTRACE(0x118326c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118326c5 push ebx */
  push32((uint32_t)(EBX));
  /* 118326c6 push ecx */
  push32((uint32_t)(ECX));
  /* 118326c7 mov ebx, 0x1183c2b4 */
  EBX = (0x1183c2b4u);
  /* 118326cc jmp 0x118326d8 */
  jmp_ind(0x118326d8u); return;
}

/* FUN_100026ce @ 0x118326ce (24 bytes, 10 insns) */
void f_118326ce(void) {
  FTRACE(0x118326ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118326ce push ebx */
  push32((uint32_t)(EBX));
  /* 118326cf push ecx */
  push32((uint32_t)(ECX));
  /* 118326d0 mov ebx, 0x1183c2b4 */
  EBX = (0x1183c2b4u);
  /* 118326d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118326d8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118326db mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 118326de mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 118326e1 pop ecx */
  ECX = (pop32());
  /* 118326e2 pop ebx */
  EBX = (pop32());
  /* 118326e3 ret 4 */
  ESPCHK(0x118326ceu, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x118326e6 (14 bytes, 6 insns) */
void f_118326e6(void) {
  FTRACE(0x118326e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118326e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118326e8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118326ec call 0x11832d8f */
  push32(0x118326f1u); f_11832d8f();
  /* 118326f1 pop ecx */
  ECX = (pop32());
  /* 118326f2 pop ecx */
  ECX = (pop32());
  /* 118326f3 ret  */
  ESPCHK(0x118326e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f4 @ 0x118326f4 (23 bytes, 6 insns) */
void f_118326f4(void) {
  FTRACE(0x118326f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118326f4 call 0x1183270c */
  push32(0x118326f9u); f_1183270c();
  /* 118326f9 call 0x11832f07 */
  push32(0x118326feu); f_11832f07();
  /* 118326fe mov dword ptr [0x1183f4dc], eax */
  w32((uint32_t)(0x1183f4dc), (EAX));
  /* 11832703 call 0x11832eb7 */
  push32(0x11832708u); f_11832eb7();
  /* 11832708 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 1183270a ret  */
  ESPCHK(0x118326f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000270c @ 0x1183270c (56 bytes, 8 insns) */
void f_1183270c(void) {
  FTRACE(0x1183270cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183270c mov eax, 0x118332e0 */
  EAX = (0x118332e0u);
  /* 11832711 mov dword ptr [0x1183c2f8], 0x11832f8a */
  w32((uint32_t)(0x1183c2f8), (0x11832f8au));
  /* 1183271b mov dword ptr [0x1183c2f4], eax */
  w32((uint32_t)(0x1183c2f4), (EAX));
  /* 11832720 mov dword ptr [0x1183c2fc], 0x11832ff0 */
  w32((uint32_t)(0x1183c2fc), (0x11832ff0u));
  /* 1183272a mov dword ptr [0x1183c300], 0x11832f30 */
  w32((uint32_t)(0x1183c300), (0x11832f30u));
  /* 11832734 mov dword ptr [0x1183c304], 0x11832fd8 */
  w32((uint32_t)(0x1183c304), (0x11832fd8u));
  /* 1183273e mov dword ptr [0x1183c308], eax */
  w32((uint32_t)(0x1183c308), (EAX));
  /* 11832743 ret  */
  ESPCHK(0x1183270cu, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11832744 (39 bytes, 16 insns) */
void f_11832744(void) {
  FTRACE(0x11832744u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832744 push ebp */
  push32((uint32_t)(EBP));
  /* 11832745 mov ebp, esp */
  EBP = (ESP);
  /* 11832747 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183274a wait  */
  /* wait (no observable integer/reg state) */
  /* 1183274b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 1183274e wait  */
  /* wait (no observable integer/reg state) */
  /* 1183274f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11832753 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11832756 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1183275a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 1183275d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11832760 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11832763 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11832766 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11832769 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183276a ret  */
  ESPCHK(0x11832744u, _esp0);
  ESP += 4; return;
}

/* FUN_1000276b @ 0x1183276b (49 bytes, 20 insns) */
void f_1183276b(void) {
  FTRACE(0x1183276bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183276b push esi */
  push32((uint32_t)(ESI));
  /* 1183276c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11832770 push edi */
  push32((uint32_t)(EDI));
  /* 11832771 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11832774 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11832778 je 0x11832780 */
  if (C.zf) goto L_11832780;
  /* 1183277a and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1183277e jmp 0x11832797 */
  goto L_11832797;
L_11832780:;
  /* 11832780 push esi */
  push32((uint32_t)(ESI));
  /* 11832781 call 0x11833412 */
  push32(0x11832786u); f_11833412();
  /* 11832786 push esi */
  push32((uint32_t)(ESI));
  /* 11832787 call 0x1183279c */
  push32(0x1183278cu); f_1183279c();
  /* 1183278c push esi */
  push32((uint32_t)(ESI));
  /* 1183278d mov edi, eax */
  EDI = (EAX);
  /* 1183278f call 0x11833464 */
  push32(0x11832794u); f_11833464();
  /* 11832794 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11832797:;
  /* 11832797 mov eax, edi */
  EAX = (EDI);
  /* 11832799 pop edi */
  EDI = (pop32());
  /* 1183279a pop esi */
  ESI = (pop32());
  /* 1183279b ret  */
  ESPCHK(0x1183276bu, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1183279c (76 bytes, 30 insns) */
void f_1183279c(void) {
  FTRACE(0x1183279cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183279c push esi */
  push32((uint32_t)(ESI));
  /* 1183279d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118327a1 push edi */
  push32((uint32_t)(EDI));
  /* 118327a2 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118327a5 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 118327a9 je 0x118327df */
  if (C.zf) goto L_118327df;
  /* 118327ab push esi */
  push32((uint32_t)(ESI));
  /* 118327ac call 0x118335ef */
  push32(0x118327b1u); f_118335ef();
  /* 118327b1 push esi */
  push32((uint32_t)(ESI));
  /* 118327b2 mov edi, eax */
  EDI = (EAX);
  /* 118327b4 call 0x11833596 */
  push32(0x118327b9u); f_11833596();
  /* 118327b9 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118327bc call 0x118334b6 */
  push32(0x118327c1u); f_118334b6();
  /* 118327c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118327c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118327c6 jge 0x118327cd */
  if ((C.sf==C.of)) goto L_118327cd;
  /* 118327c8 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118327cb jmp 0x118327df */
  goto L_118327df;
L_118327cd:;
  /* 118327cd mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118327d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118327d2 je 0x118327df */
  if (C.zf) goto L_118327df;
  /* 118327d4 push eax */
  push32((uint32_t)(EAX));
  /* 118327d5 call 0x11832bdf */
  push32(0x118327dau); f_11832bdf();
  /* 118327da and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 118327de pop ecx */
  ECX = (pop32());
L_118327df:;
  /* 118327df and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118327e3 mov eax, edi */
  EAX = (EDI);
  /* 118327e5 pop edi */
  EDI = (pop32());
  /* 118327e6 pop esi */
  ESI = (pop32());
  /* 118327e7 ret  */
  ESPCHK(0x1183279cu, _esp0);
  ESP += 4; return;
}

/* FUN_100027e8 @ 0x118327e8 (217 bytes, 57 insns) */
void f_118327e8(void) {
  FTRACE(0x118327e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118327e8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118327ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118327ef jne 0x1183287d */
  if (!C.zf) goto L_1183287d;
  /* 118327f5 call dword ptr [0x1183a0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0b4))), 0x118327fbu);
  /* 118327fb push 1 */
  push32((uint32_t)(0x1u));
  /* 118327fd mov dword ptr [0x1183f504], eax */
  w32((uint32_t)(0x1183f504), (EAX));
  /* 11832802 call 0x11833fd3 */
  push32(0x11832807u); f_11833fd3();
  /* 11832807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832809 pop ecx */
  ECX = (pop32());
  /* 1183280a je 0x11832848 */
  if (C.zf) goto L_11832848;
  /* 1183280c mov eax, dword ptr [0x1183f504] */
  EAX = (r32((uint32_t)(0x1183f504)));
  /* 11832811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11832813 mov cl, byte ptr [0x1183f505] */
  CL = (r8((uint32_t)(0x1183f505)));
  /* 11832819 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1183281e shr dword ptr [0x1183f504], 0x10 */
  w32((uint32_t)(0x1183f504), (sh_shr((uint32_t)(r32((uint32_t)(0x1183f504))), (0x10u)&0x1f, 32)));
  /* 11832825 mov dword ptr [0x1183f50c], eax */
  w32((uint32_t)(0x1183f50c), (EAX));
  /* 1183282a mov dword ptr [0x1183f510], ecx */
  w32((uint32_t)(0x1183f510), (ECX));
  /* 11832830 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11832833 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832835 mov dword ptr [0x1183f508], eax */
  w32((uint32_t)(0x1183f508), (EAX));
  /* 1183283a call 0x11832991 */
  push32(0x1183283fu); f_11832991();
  /* 1183283f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832841 jne 0x1183284c */
  if (!C.zf) goto L_1183284c;
  /* 11832843 call 0x11834030 */
  push32(0x11832848u); f_11834030();
L_11832848:;
  /* 11832848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183284a jmp 0x118328be */
  goto L_118328be;
L_1183284c:;
  /* 1183284c call dword ptr [0x1183a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0b0))), 0x11832852u);
  /* 11832852 mov dword ptr [0x11840be4], eax */
  w32((uint32_t)(0x11840be4), (EAX));
  /* 11832857 call 0x11833d2c */
  push32(0x1183285cu); f_11833d2c();
  /* 1183285c mov dword ptr [0x1183f4e4], eax */
  w32((uint32_t)(0x1183f4e4), (EAX));
  /* 11832861 call 0x11833816 */
  push32(0x11832866u); f_11833816();
  /* 11832866 call 0x11833adf */
  push32(0x1183286bu); f_11833adf();
  /* 1183286b call 0x11833a26 */
  push32(0x11832870u); f_11833a26();
  /* 11832870 call 0x118336f8 */
  push32(0x11832875u); f_118336f8();
  /* 11832875 inc dword ptr [0x1183f4e0] */
  { uint32_t _r=(r32((uint32_t)(0x1183f4e0)))+1; w32((uint32_t)(0x1183f4e0), (_r)); fl_inc(_r,32); }
  /* 1183287b jmp 0x118328bb */
  goto L_118328bb;
L_1183287d:;
  /* 1183287d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1183287f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832881 jne 0x118328af */
  if (!C.zf) goto L_118328af;
  /* 11832883 cmp dword ptr [0x1183f4e0], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1183f4e0))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832889 jle 0x11832848 */
  if ((C.zf||C.sf!=C.of)) goto L_11832848;
  /* 1183288b dec dword ptr [0x1183f4e0] */
  { uint32_t _r=(r32((uint32_t)(0x1183f4e0)))-1; w32((uint32_t)(0x1183f4e0), (_r)); fl_dec(_r,32); }
  /* 11832891 cmp dword ptr [0x1183f53c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1183f53c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832897 jne 0x1183289e */
  if (!C.zf) goto L_1183289e;
  /* 11832899 call 0x11833736 */
  push32(0x1183289eu); f_11833736();
L_1183289e:;
  /* 1183289e call 0x118339d2 */
  push32(0x118328a3u); f_118339d2();
  /* 118328a3 call 0x118329e5 */
  push32(0x118328a8u); f_118329e5();
  /* 118328a8 call 0x11834030 */
  push32(0x118328adu); f_11834030();
  /* 118328ad jmp 0x118328bb */
  goto L_118328bb;
L_118328af:;
  /* 118328af cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118328b2 jne 0x118328bb */
  if (!C.zf) goto L_118328bb;
  /* 118328b4 push ecx */
  push32((uint32_t)(ECX));
  /* 118328b5 call 0x11832a7d */
  push32(0x118328bau); f_11832a7d();
  /* 118328ba pop ecx */
  ECX = (pop32());
L_118328bb:;
  /* 118328bb push 1 */
  push32((uint32_t)(0x1u));
  /* 118328bd pop eax */
  EAX = (pop32());
L_118328be:;
  /* 118328be ret 0xc */
  ESPCHK(0x118327e8u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x118328c1 (157 bytes, 73 insns) */
void f_118328c1(void) {
  FTRACE(0x118328c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118328c1 push ebp */
  push32((uint32_t)(EBP));
  /* 118328c2 mov ebp, esp */
  EBP = (ESP);
  /* 118328c4 push ebx */
  push32((uint32_t)(EBX));
  /* 118328c5 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118328c8 push esi */
  push32((uint32_t)(ESI));
  /* 118328c9 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118328cc push edi */
  push32((uint32_t)(EDI));
  /* 118328cd mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118328d0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118328d2 jne 0x118328dd */
  if (!C.zf) goto L_118328dd;
  /* 118328d4 cmp dword ptr [0x1183f4e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f4e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118328db jmp 0x11832903 */
  goto L_11832903;
L_118328dd:;
  /* 118328dd cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118328e0 je 0x118328e7 */
  if (C.zf) goto L_118328e7;
  /* 118328e2 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118328e5 jne 0x11832909 */
  if (!C.zf) goto L_11832909;
L_118328e7:;
  /* 118328e7 mov eax, dword ptr [0x11840be8] */
  EAX = (r32((uint32_t)(0x11840be8)));
  /* 118328ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118328ee je 0x118328f9 */
  if (C.zf) goto L_118328f9;
  /* 118328f0 push edi */
  push32((uint32_t)(EDI));
  /* 118328f1 push esi */
  push32((uint32_t)(ESI));
  /* 118328f2 push ebx */
  push32((uint32_t)(EBX));
  /* 118328f3 call eax */
  call_ind((uint32_t)(EAX), 0x118328f5u);
  /* 118328f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118328f7 je 0x11832905 */
  if (C.zf) goto L_11832905;
L_118328f9:;
  /* 118328f9 push edi */
  push32((uint32_t)(EDI));
  /* 118328fa push esi */
  push32((uint32_t)(ESI));
  /* 118328fb push ebx */
  push32((uint32_t)(EBX));
  /* 118328fc call 0x118327e8 */
  push32(0x11832901u); f_118327e8();
  /* 11832901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11832903:;
  /* 11832903 jne 0x11832909 */
  if (!C.zf) goto L_11832909;
L_11832905:;
  /* 11832905 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11832907 jmp 0x11832957 */
  goto L_11832957;
L_11832909:;
  /* 11832909 push edi */
  push32((uint32_t)(EDI));
  /* 1183290a push esi */
  push32((uint32_t)(ESI));
  /* 1183290b push ebx */
  push32((uint32_t)(EBX));
  /* 1183290c call 0x11831000 */
  push32(0x11832911u); f_11831000();
  /* 11832911 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832914 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11832917 jne 0x11832925 */
  if (!C.zf) goto L_11832925;
  /* 11832919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183291b jne 0x11832954 */
  if (!C.zf) goto L_11832954;
  /* 1183291d push edi */
  push32((uint32_t)(EDI));
  /* 1183291e push eax */
  push32((uint32_t)(EAX));
  /* 1183291f push ebx */
  push32((uint32_t)(EBX));
  /* 11832920 call 0x118327e8 */
  push32(0x11832925u); f_118327e8();
L_11832925:;
  /* 11832925 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11832927 je 0x1183292e */
  if (C.zf) goto L_1183292e;
  /* 11832929 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183292c jne 0x11832954 */
  if (!C.zf) goto L_11832954;
L_1183292e:;
  /* 1183292e push edi */
  push32((uint32_t)(EDI));
  /* 1183292f push esi */
  push32((uint32_t)(ESI));
  /* 11832930 push ebx */
  push32((uint32_t)(EBX));
  /* 11832931 call 0x118327e8 */
  push32(0x11832936u); f_118327e8();
  /* 11832936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832938 jne 0x1183293d */
  if (!C.zf) goto L_1183293d;
  /* 1183293a and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_1183293d:;
  /* 1183293d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832941 je 0x11832954 */
  if (C.zf) goto L_11832954;
  /* 11832943 mov eax, dword ptr [0x11840be8] */
  EAX = (r32((uint32_t)(0x11840be8)));
  /* 11832948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183294a je 0x11832954 */
  if (C.zf) goto L_11832954;
  /* 1183294c push edi */
  push32((uint32_t)(EDI));
  /* 1183294d push esi */
  push32((uint32_t)(ESI));
  /* 1183294e push ebx */
  push32((uint32_t)(EBX));
  /* 1183294f call eax */
  call_ind((uint32_t)(EAX), 0x11832951u);
  /* 11832951 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11832954:;
  /* 11832954 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11832957:;
  /* 11832957 pop edi */
  EDI = (pop32());
  /* 11832958 pop esi */
  ESI = (pop32());
  /* 11832959 pop ebx */
  EBX = (pop32());
  /* 1183295a pop ebp */
  EBP = (pop32());
  /* 1183295b ret 0xc */
  ESPCHK(0x118328c1u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x1183295e (48 bytes, 15 insns) */
void f_1183295e(void) {
  FTRACE(0x1183295eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183295e mov eax, dword ptr [0x1183f4ec] */
  EAX = (r32((uint32_t)(0x1183f4ec)));
  /* 11832963 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832966 je 0x11832975 */
  if (C.zf) goto L_11832975;
  /* 11832968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183296a jne 0x1183297a */
  if (!C.zf) goto L_1183297a;
  /* 1183296c cmp dword ptr [0x1183f4f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183f4f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832973 jne 0x1183297a */
  if (!C.zf) goto L_1183297a;
L_11832975:;
  /* 11832975 call 0x118340d8 */
  push32(0x1183297au); f_118340d8();
L_1183297a:;
  /* 1183297a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1183297e call 0x11834111 */
  push32(0x11832983u); f_11834111();
  /* 11832983 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11832988 call dword ptr [0x1183c2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183c2d8))), 0x1183298eu);
  /* 1183298e pop ecx */
  ECX = (pop32());
  /* 1183298f pop ecx */
  ECX = (pop32());
  /* 11832990 ret  */
  ESPCHK(0x1183295eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002991 @ 0x11832991 (84 bytes, 32 insns) */
void f_11832991(void) {
  FTRACE(0x11832991u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832991 push esi */
  push32((uint32_t)(ESI));
  /* 11832992 call 0x118343a1 */
  push32(0x11832997u); f_118343a1();
  /* 11832997 call dword ptr [0x1183a0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0c0))), 0x1183299du);
  /* 1183299d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118329a0 mov dword ptr [0x1183c2dc], eax */
  w32((uint32_t)(0x1183c2dc), (EAX));
  /* 118329a5 je 0x118329e1 */
  if (C.zf) goto L_118329e1;
  /* 118329a7 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118329a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118329ab call 0x11834264 */
  push32(0x118329b0u); f_11834264();
  /* 118329b0 mov esi, eax */
  ESI = (EAX);
  /* 118329b2 pop ecx */
  ECX = (pop32());
  /* 118329b3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118329b5 pop ecx */
  ECX = (pop32());
  /* 118329b6 je 0x118329e1 */
  if (C.zf) goto L_118329e1;
  /* 118329b8 push esi */
  push32((uint32_t)(ESI));
  /* 118329b9 push dword ptr [0x1183c2dc] */
  push32((uint32_t)(r32((uint32_t)(0x1183c2dc))));
  /* 118329bf call dword ptr [0x1183a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0bc))), 0x118329c5u);
  /* 118329c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118329c7 je 0x118329e1 */
  if (C.zf) goto L_118329e1;
  /* 118329c9 push esi */
  push32((uint32_t)(ESI));
  /* 118329ca call 0x11832a03 */
  push32(0x118329cfu); f_11832a03();
  /* 118329cf pop ecx */
  ECX = (pop32());
  /* 118329d0 call dword ptr [0x1183a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0b8))), 0x118329d6u);
  /* 118329d6 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118329da push 1 */
  push32((uint32_t)(0x1u));
  /* 118329dc mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118329de pop eax */
  EAX = (pop32());
  /* 118329df pop esi */
  ESI = (pop32());
  /* 118329e0 ret  */
  ESPCHK(0x11832991u, _esp0);
  ESP += 4; return;
L_118329e1:;
  /* 118329e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118329e3 pop esi */
  ESI = (pop32());
  /* 118329e4 ret  */
  ESPCHK(0x11832991u, _esp0);
  ESP += 4; return;
}

/* FUN_100029e5 @ 0x118329e5 (30 bytes, 8 insns) */
void f_118329e5(void) {
  FTRACE(0x118329e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118329e5 call 0x118343ca */
  push32(0x118329eau); f_118343ca();
  /* 118329ea mov eax, dword ptr [0x1183c2dc] */
  EAX = (r32((uint32_t)(0x1183c2dc)));
  /* 118329ef cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118329f2 je 0x11832a02 */
  if (C.zf) goto L_11832a02;
  /* 118329f4 push eax */
  push32((uint32_t)(EAX));
  /* 118329f5 call dword ptr [0x1183a0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0c4))), 0x118329fbu);
  /* 118329fb or dword ptr [0x1183c2dc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1183c2dc)))|(0xffffffffu); w32((uint32_t)(0x1183c2dc), (_r)); fl_logic(_r,32); }
L_11832a02:;
  /* 11832a02 ret  */
  ESPCHK(0x118329e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a03 @ 0x11832a03 (19 bytes, 4 insns) */
void f_11832a03(void) {
  FTRACE(0x11832a03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832a03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11832a07 mov dword ptr [eax + 0x50], 0x1183c710 */
  w32((uint32_t)(EAX + 0x50), (0x1183c710u));
  /* 11832a0e mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11832a15 ret  */
  ESPCHK(0x11832a03u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a16 @ 0x11832a16 (103 bytes, 38 insns) */
void f_11832a16(void) {
  FTRACE(0x11832a16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832a16 push esi */
  push32((uint32_t)(ESI));
  /* 11832a17 push edi */
  push32((uint32_t)(EDI));
  /* 11832a18 call dword ptr [0x1183a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a004))), 0x11832a1eu);
  /* 11832a1e push dword ptr [0x1183c2dc] */
  push32((uint32_t)(r32((uint32_t)(0x1183c2dc))));
  /* 11832a24 mov edi, eax */
  EDI = (EAX);
  /* 11832a26 call dword ptr [0x1183a000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a000))), 0x11832a2cu);
  /* 11832a2c mov esi, eax */
  ESI = (EAX);
  /* 11832a2e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11832a30 jne 0x11832a71 */
  if (!C.zf) goto L_11832a71;
  /* 11832a32 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11832a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11832a36 call 0x11834264 */
  push32(0x11832a3bu); f_11834264();
  /* 11832a3b mov esi, eax */
  ESI = (EAX);
  /* 11832a3d pop ecx */
  ECX = (pop32());
  /* 11832a3e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11832a40 pop ecx */
  ECX = (pop32());
  /* 11832a41 je 0x11832a69 */
  if (C.zf) goto L_11832a69;
  /* 11832a43 push esi */
  push32((uint32_t)(ESI));
  /* 11832a44 push dword ptr [0x1183c2dc] */
  push32((uint32_t)(r32((uint32_t)(0x1183c2dc))));
  /* 11832a4a call dword ptr [0x1183a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0bc))), 0x11832a50u);
  /* 11832a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832a52 je 0x11832a69 */
  if (C.zf) goto L_11832a69;
  /* 11832a54 push esi */
  push32((uint32_t)(ESI));
  /* 11832a55 call 0x11832a03 */
  push32(0x11832a5au); f_11832a03();
  /* 11832a5a pop ecx */
  ECX = (pop32());
  /* 11832a5b call dword ptr [0x1183a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0b8))), 0x11832a61u);
  /* 11832a61 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11832a65 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11832a67 jmp 0x11832a71 */
  goto L_11832a71;
L_11832a69:;
  /* 11832a69 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11832a6b call 0x1183295e */
  push32(0x11832a70u); f_1183295e();
  /* 11832a70 pop ecx */
  ECX = (pop32());
L_11832a71:;
  /* 11832a71 push edi */
  push32((uint32_t)(EDI));
  /* 11832a72 call dword ptr [0x1183a0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0c8))), 0x11832a78u);
  /* 11832a78 mov eax, esi */
  EAX = (ESI);
  /* 11832a7a pop edi */
  EDI = (pop32());
  /* 11832a7b pop esi */
  ESI = (pop32());
  /* 11832a7c ret  */
  ESPCHK(0x11832a16u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a7d @ 0x11832a7d (160 bytes, 62 insns) */
void f_11832a7d(void) {
  FTRACE(0x11832a7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832a7d mov eax, dword ptr [0x1183c2dc] */
  EAX = (r32((uint32_t)(0x1183c2dc)));
  /* 11832a82 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832a85 je 0x11832b1c */
  if (C.zf) goto L_11832b1c;
  /* 11832a8b push esi */
  push32((uint32_t)(ESI));
  /* 11832a8c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11832a90 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11832a92 jne 0x11832aa1 */
  if (!C.zf) goto L_11832aa1;
  /* 11832a94 push eax */
  push32((uint32_t)(EAX));
  /* 11832a95 call dword ptr [0x1183a000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a000))), 0x11832a9bu);
  /* 11832a9b mov esi, eax */
  ESI = (EAX);
  /* 11832a9d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11832a9f je 0x11832b0d */
  if (C.zf) goto L_11832b0d;
L_11832aa1:;
  /* 11832aa1 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11832aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832aa6 je 0x11832aaf */
  if (C.zf) goto L_11832aaf;
  /* 11832aa8 push eax */
  push32((uint32_t)(EAX));
  /* 11832aa9 call 0x11832bdf */
  push32(0x11832aaeu); f_11832bdf();
  /* 11832aae pop ecx */
  ECX = (pop32());
L_11832aaf:;
  /* 11832aaf mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11832ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832ab4 je 0x11832abd */
  if (C.zf) goto L_11832abd;
  /* 11832ab6 push eax */
  push32((uint32_t)(EAX));
  /* 11832ab7 call 0x11832bdf */
  push32(0x11832abcu); f_11832bdf();
  /* 11832abc pop ecx */
  ECX = (pop32());
L_11832abd:;
  /* 11832abd mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11832ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832ac2 je 0x11832acb */
  if (C.zf) goto L_11832acb;
  /* 11832ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11832ac5 call 0x11832bdf */
  push32(0x11832acau); f_11832bdf();
  /* 11832aca pop ecx */
  ECX = (pop32());
L_11832acb:;
  /* 11832acb mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11832ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832ad0 je 0x11832ad9 */
  if (C.zf) goto L_11832ad9;
  /* 11832ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11832ad3 call 0x11832bdf */
  push32(0x11832ad8u); f_11832bdf();
  /* 11832ad8 pop ecx */
  ECX = (pop32());
L_11832ad9:;
  /* 11832ad9 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11832adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832ade je 0x11832ae7 */
  if (C.zf) goto L_11832ae7;
  /* 11832ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11832ae1 call 0x11832bdf */
  push32(0x11832ae6u); f_11832bdf();
  /* 11832ae6 pop ecx */
  ECX = (pop32());
L_11832ae7:;
  /* 11832ae7 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11832aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832aec je 0x11832af5 */
  if (C.zf) goto L_11832af5;
  /* 11832aee push eax */
  push32((uint32_t)(EAX));
  /* 11832aef call 0x11832bdf */
  push32(0x11832af4u); f_11832bdf();
  /* 11832af4 pop ecx */
  ECX = (pop32());
L_11832af5:;
  /* 11832af5 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11832af8 cmp eax, 0x1183c710 */
  { uint32_t _a=(EAX),_b=(0x1183c710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832afd je 0x11832b06 */
  if (C.zf) goto L_11832b06;
  /* 11832aff push eax */
  push32((uint32_t)(EAX));
  /* 11832b00 call 0x11832bdf */
  push32(0x11832b05u); f_11832bdf();
  /* 11832b05 pop ecx */
  ECX = (pop32());
L_11832b06:;
  /* 11832b06 push esi */
  push32((uint32_t)(ESI));
  /* 11832b07 call 0x11832bdf */
  push32(0x11832b0cu); f_11832bdf();
  /* 11832b0c pop ecx */
  ECX = (pop32());
L_11832b0d:;
  /* 11832b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11832b0f push dword ptr [0x1183c2dc] */
  push32((uint32_t)(r32((uint32_t)(0x1183c2dc))));
  /* 11832b15 call dword ptr [0x1183a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0bc))), 0x11832b1bu);
  /* 11832b1b pop esi */
  ESI = (pop32());
L_11832b1c:;
  /* 11832b1c ret  */
  ESPCHK(0x11832a7du, _esp0);
  ESP += 4; return;
}

/* FUN_10002b1d @ 0x11832b1d (194 bytes, 65 insns) */
void f_11832b1d(void) {
  FTRACE(0x11832b1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832b1d push ebp */
  push32((uint32_t)(EBP));
  /* 11832b1e mov ebp, esp */
  EBP = (ESP);
  /* 11832b20 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832b23 push ebx */
  push32((uint32_t)(EBX));
  /* 11832b24 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11832b27 sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832b2d cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832b30 jl 0x11832bd9 */
  if ((C.sf!=C.of)) goto L_11832bd9;
  /* 11832b36 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832b3c jg 0x11832bd9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11832bd9;
  /* 11832b42 push esi */
  push32((uint32_t)(ESI));
  /* 11832b43 push edi */
  push32((uint32_t)(EDI));
  /* 11832b44 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11832b47 mov esi, dword ptr [edi*4 + 0x1183c87c] */
  ESI = (r32((uint32_t)(EDI*4 + 0x1183c87c)));
  /* 11832b4e add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11832b51 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11832b54 jne 0x11832b5c */
  if (!C.zf) goto L_11832b5c;
  /* 11832b56 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832b59 jle 0x11832b5c */
  if ((C.zf||C.sf!=C.of)) goto L_11832b5c;
  /* 11832b5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11832b5c:;
  /* 11832b5c call 0x118344ac */
  push32(0x11832b61u); f_118344ac();
  /* 11832b61 mov eax, ebx */
  EAX = (EBX);
  /* 11832b63 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11832b66 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11832b6c sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11832b6f mov edx, esi */
  EDX = (ESI);
  /* 11832b71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11832b74 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832b76 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11832b79 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832b7b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11832b7e lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11832b81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11832b84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11832b87 lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11832b8a imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11832b8d add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832b90 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11832b93 add ecx, dword ptr [0x1183c798] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1183c798))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832b99 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11832b9a cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832b9e mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11832ba1 pop edi */
  EDI = (pop32());
  /* 11832ba2 pop esi */
  ESI = (pop32());
  /* 11832ba3 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11832baa mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11832bad je 0x11832bcf */
  if (C.zf) goto L_11832bcf;
  /* 11832baf cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832bb3 jne 0x11832bd5 */
  if (!C.zf) goto L_11832bd5;
  /* 11832bb5 cmp dword ptr [0x1183c79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183c79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832bbc je 0x11832bd5 */
  if (C.zf) goto L_11832bd5;
  /* 11832bbe lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11832bc1 push eax */
  push32((uint32_t)(EAX));
  /* 11832bc2 call 0x11834761 */
  push32(0x11832bc7u); f_11834761();
  /* 11832bc7 pop ecx */
  ECX = (pop32());
  /* 11832bc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11832bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832bcd je 0x11832bd5 */
  if (C.zf) goto L_11832bd5;
L_11832bcf:;
  /* 11832bcf add ecx, dword ptr [0x1183c7a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1183c7a0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11832bd5:;
  /* 11832bd5 mov eax, ecx */
  EAX = (ECX);
  /* 11832bd7 jmp 0x11832bdc */
  goto L_11832bdc;
L_11832bd9:;
  /* 11832bd9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11832bdc:;
  /* 11832bdc pop ebx */
  EBX = (pop32());
  /* 11832bdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11832bde ret  */
  ESPCHK(0x11832b1du, _esp0);
  ESP += 4; return;
}

/* FUN_10002bdf @ 0x11832bdf (215 bytes, 75 insns) */
void f_11832bdf(void) {
  FTRACE(0x11832bdfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832bdf push ebp */
  push32((uint32_t)(EBP));
  /* 11832be0 mov ebp, esp */
  EBP = (ESP);
  /* 11832be2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11832be4 push 0x1183a1d8 */
  push32((uint32_t)(0x1183a1d8u));
  /* 11832be9 push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 11832bee mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11832bf4 push eax */
  push32((uint32_t)(EAX));
  /* 11832bf5 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11832bfc sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832bff push ebx */
  push32((uint32_t)(EBX));
  /* 11832c00 push esi */
  push32((uint32_t)(ESI));
  /* 11832c01 push edi */
  push32((uint32_t)(EDI));
  /* 11832c02 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11832c05 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11832c07 je 0x11832cb9 */
  if (C.zf) { jmp_ind(0x11832cb9u); return; }
  /* 11832c0d mov eax, dword ptr [0x1183faa8] */
  EAX = (r32((uint32_t)(0x1183faa8)));
  /* 11832c12 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832c15 jne 0x11832c52 */
  if (!C.zf) goto L_11832c52;
  /* 11832c17 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832c19 call 0x11834436 */
  push32(0x11832c1eu); f_11834436();
  /* 11832c1e pop ecx */
  ECX = (pop32());
  /* 11832c1f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832c23 push esi */
  push32((uint32_t)(ESI));
  /* 11832c24 call 0x11834ab6 */
  push32(0x11832c29u); f_11834ab6();
  /* 11832c29 pop ecx */
  ECX = (pop32());
  /* 11832c2a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11832c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832c2f je 0x11832c3a */
  if (C.zf) goto L_11832c3a;
  /* 11832c31 push esi */
  push32((uint32_t)(ESI));
  /* 11832c32 push eax */
  push32((uint32_t)(EAX));
  /* 11832c33 call 0x11834ae1 */
  push32(0x11832c38u); f_11834ae1();
  /* 11832c38 pop ecx */
  ECX = (pop32());
  /* 11832c39 pop ecx */
  ECX = (pop32());
L_11832c3a:;
  /* 11832c3a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832c3e call 0x11832c49 */
  push32(0x11832c43u); f_11832c49();
  /* 11832c43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832c47 jmp 0x11832c9a */
  goto L_11832c9a;
  /* 11832c49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832c4b call 0x11834497 */
  push32(0x11832c50u); f_11834497();
  /* 11832c50 pop ecx */
  ECX = (pop32());
  /* 11832c51 ret  */
  ESPCHK(0x11832bdfu, _esp0);
  ESP += 4; return;
L_11832c52:;
  /* 11832c52 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832c55 jne 0x11832caa */
  if (!C.zf) goto L_11832caa;
  /* 11832c57 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832c59 call 0x11834436 */
  push32(0x11832c5eu); f_11834436();
  /* 11832c5e pop ecx */
  ECX = (pop32());
  /* 11832c5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11832c66 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11832c69 push eax */
  push32((uint32_t)(EAX));
  /* 11832c6a lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11832c6d push eax */
  push32((uint32_t)(EAX));
  /* 11832c6e push esi */
  push32((uint32_t)(ESI));
  /* 11832c6f call 0x11835811 */
  push32(0x11832c74u); f_11835811();
  /* 11832c74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11832c77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11832c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832c7c je 0x11832c8d */
  if (C.zf) goto L_11832c8d;
  /* 11832c7e push eax */
  push32((uint32_t)(EAX));
  /* 11832c7f push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11832c82 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11832c85 call 0x11835868 */
  push32(0x11832c8au); f_11835868();
  /* 11832c8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11832c8d:;
  /* 11832c8d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832c91 call 0x11832ca1 */
  push32(0x11832c96u); f_11832ca1();
  /* 11832c96 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11832c9a:;
  /* 11832c9a jne 0x11832cb9 */
  if (!C.zf) { jmp_ind(0x11832cb9u); return; }
  /* 11832c9c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11832c9f jmp 0x11832cab */
  goto L_11832cab;
  /* 11832ca1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832ca3 call 0x11834497 */
  push32(0x11832ca8u); f_11834497();
  /* 11832ca8 pop ecx */
  ECX = (pop32());
  /* 11832ca9 ret  */
  ESPCHK(0x11832bdfu, _esp0);
  ESP += 4; return;
L_11832caa:;
  /* 11832caa push esi */
  push32((uint32_t)(ESI));
L_11832cab:;
  /* 11832cab push 0 */
  push32((uint32_t)(0x0u));
  /* 11832cad push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
}

/* FUN_10002c49 @ 0x11832c49 (9 bytes, 4 insns) */
void f_11832c49(void) {
  FTRACE(0x11832c49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832c49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832c4b call 0x11834497 */
  push32(0x11832c50u); f_11834497();
  /* 11832c50 pop ecx */
  ECX = (pop32());
  /* 11832c51 ret  */
  ESPCHK(0x11832c49u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca1 @ 0x11832ca1 (9 bytes, 4 insns) */
void f_11832ca1(void) {
  FTRACE(0x11832ca1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832ca1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832ca3 call 0x11834497 */
  push32(0x11832ca8u); f_11834497();
  /* 11832ca8 pop ecx */
  ECX = (pop32());
  /* 11832ca9 ret  */
  ESPCHK(0x11832ca1u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11832cd0 (76 bytes, 34 insns) */
void f_11832cd0(void) {
  FTRACE(0x11832cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11832cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11832cd3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11832cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11832cd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11832cdb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832cde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11832ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11832ce4 push ebp */
  push32((uint32_t)(EBP));
  /* 11832ce5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11832ce8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11832ceb mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11832cee call 0x118326c5 */
  push32(0x11832cf3u); f_118326c5();
  /* 11832cf3 push esi */
  push32((uint32_t)(ESI));
  /* 11832cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11832cf5 call eax */
  call_ind((uint32_t)(EAX), 0x11832cf7u);
  /* 11832cf7 pop edi */
  EDI = (pop32());
  /* 11832cf8 pop esi */
  ESI = (pop32());
  /* 11832cf9 mov ebx, ebp */
  EBX = (EBP);
  /* 11832cfb pop ebp */
  EBP = (pop32());
  /* 11832cfc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11832cff push ebp */
  push32((uint32_t)(EBP));
  /* 11832d00 mov ebp, ebx */
  EBP = (EBX);
  /* 11832d02 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832d08 jne 0x11832d0f */
  if (!C.zf) goto L_11832d0f;
  /* 11832d0a mov ecx, 2 */
  ECX = (0x2u);
L_11832d0f:;
  /* 11832d0f push ecx */
  push32((uint32_t)(ECX));
  /* 11832d10 call 0x118326c5 */
  push32(0x11832d15u); f_118326c5();
  /* 11832d15 pop ebp */
  EBP = (pop32());
  /* 11832d16 pop ecx */
  ECX = (pop32());
  /* 11832d17 pop ebx */
  EBX = (pop32());
  /* 11832d18 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11832d19 ret 0xc */
  ESPCHK(0x11832cd0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002d1c @ 0x11832d1c (86 bytes, 32 insns) */
void f_11832d1c(void) {
  FTRACE(0x11832d1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832d1c push ebp */
  push32((uint32_t)(EBP));
  /* 11832d1d mov ebp, esp */
  EBP = (ESP);
  /* 11832d1f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11832d21 push 0x1183a1f0 */
  push32((uint32_t)(0x1183a1f0u));
  /* 11832d26 push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 11832d2b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11832d31 push eax */
  push32((uint32_t)(EAX));
  /* 11832d32 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11832d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11832d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11832d3b push ebx */
  push32((uint32_t)(EBX));
  /* 11832d3c push esi */
  push32((uint32_t)(ESI));
  /* 11832d3d push edi */
  push32((uint32_t)(EDI));
  /* 11832d3e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11832d41 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11832d43 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11832d46 call 0x11832a16 */
  push32(0x11832d4bu); f_11832a16();
  /* 11832d4b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832d4e je 0x11832d6f */
  if (C.zf) goto L_11832d6f;
  /* 11832d50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11832d57 call 0x11832a16 */
  push32(0x11832d5cu); f_11832a16();
  /* 11832d5c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11832d5fu);
  /* 11832d5f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11832d62 jmp 0x11832d6f */
  goto L_11832d6f;
  /* 11832d64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11832d66 pop eax */
  EAX = (pop32());
  /* 11832d67 ret  */
  ESPCHK(0x11832d1cu, _esp0);
  ESP += 4; return;
  /* 11832d68 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11832d6b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11832d6f:;
  /* 11832d6f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832d73 call 0x11832d78 */
  call_ind(0x11832d78u, 0x11832d78u);
  /* 11832d78 jmp 0x118361a5 */
  f_118361a5(); return;
}

/* _malloc @ 0x11832d7d (18 bytes, 6 insns) */
void f_11832d7d(void) {
  FTRACE(0x11832d7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832d7d push dword ptr [0x1183f774] */
  push32((uint32_t)(r32((uint32_t)(0x1183f774))));
  /* 11832d83 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11832d87 call 0x11832d8f */
  push32(0x11832d8cu); f_11832d8f();
  /* 11832d8c pop ecx */
  ECX = (pop32());
  /* 11832d8d pop ecx */
  ECX = (pop32());
  /* 11832d8e ret  */
  ESPCHK(0x11832d7du, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11832d8f (44 bytes, 16 insns) */
void f_11832d8f(void) {
  FTRACE(0x11832d8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832d8f cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832d94 ja 0x11832db8 */
  if ((!C.cf&&!C.zf)) goto L_11832db8;
L_11832d96:;
  /* 11832d96 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11832d9a call 0x11832dbb */
  push32(0x11832d9fu); f_11832dbb();
  /* 11832d9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832da1 pop ecx */
  ECX = (pop32());
  /* 11832da2 jne 0x11832dba */
  if (!C.zf) goto L_11832dba;
  /* 11832da4 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832da8 je 0x11832dba */
  if (C.zf) goto L_11832dba;
  /* 11832daa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11832dae call 0x118361bc */
  push32(0x11832db3u); f_118361bc();
  /* 11832db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832db5 pop ecx */
  ECX = (pop32());
  /* 11832db6 jne 0x11832d96 */
  if (!C.zf) goto L_11832d96;
L_11832db8:;
  /* 11832db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11832dba:;
  /* 11832dba ret  */
  ESPCHK(0x11832d8fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002dbb @ 0x11832dbb (231 bytes, 81 insns) */
void f_11832dbb(void) {
  FTRACE(0x11832dbbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832dbb push ebp */
  push32((uint32_t)(EBP));
  /* 11832dbc mov ebp, esp */
  EBP = (ESP);
  /* 11832dbe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11832dc0 push 0x1183a208 */
  push32((uint32_t)(0x1183a208u));
  /* 11832dc5 push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 11832dca mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11832dd0 push eax */
  push32((uint32_t)(EAX));
  /* 11832dd1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11832dd8 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832ddb push ebx */
  push32((uint32_t)(EBX));
  /* 11832ddc push esi */
  push32((uint32_t)(ESI));
  /* 11832ddd push edi */
  push32((uint32_t)(EDI));
  /* 11832dde mov eax, dword ptr [0x1183faa8] */
  EAX = (r32((uint32_t)(0x1183faa8)));
  /* 11832de3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832de6 jne 0x11832e2b */
  if (!C.zf) goto L_11832e2b;
  /* 11832de8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11832deb cmp esi, dword ptr [0x1183faa0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183faa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832df1 ja 0x11832e8a */
  if ((!C.cf&&!C.zf)) goto L_11832e8a;
  /* 11832df7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832df9 call 0x11834436 */
  push32(0x11832dfeu); f_11834436();
  /* 11832dfe pop ecx */
  ECX = (pop32());
  /* 11832dff and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832e03 push esi */
  push32((uint32_t)(ESI));
  /* 11832e04 call 0x11834e0a */
  push32(0x11832e09u); f_11834e0a();
  /* 11832e09 pop ecx */
  ECX = (pop32());
  /* 11832e0a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11832e0d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832e11 call 0x11832e22 */
  push32(0x11832e16u); f_11832e22();
  /* 11832e16 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11832e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832e1b je 0x11832e8a */
  if (C.zf) goto L_11832e8a;
  /* 11832e1d jmp 0x11832ea8 */
  jmp_ind(0x11832ea8u); return;
  /* 11832e22 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832e24 call 0x11834497 */
  push32(0x11832e29u); f_11834497();
  /* 11832e29 pop ecx */
  ECX = (pop32());
  /* 11832e2a ret  */
  ESPCHK(0x11832dbbu, _esp0);
  ESP += 4; return;
L_11832e2b:;
  /* 11832e2b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832e2e jne 0x11832e8a */
  if (!C.zf) goto L_11832e8a;
  /* 11832e30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11832e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832e35 je 0x11832e3f */
  if (C.zf) goto L_11832e3f;
  /* 11832e37 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11832e3a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11832e3d jmp 0x11832e42 */
  goto L_11832e42;
L_11832e3f:;
  /* 11832e3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11832e41 pop esi */
  ESI = (pop32());
L_11832e42:;
  /* 11832e42 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11832e45 cmp esi, dword ptr [0x1183e8dc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183e8dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832e4b ja 0x11832e7b */
  if ((!C.cf&&!C.zf)) goto L_11832e7b;
  /* 11832e4d push 9 */
  push32((uint32_t)(0x9u));
  /* 11832e4f call 0x11834436 */
  push32(0x11832e54u); f_11834436();
  /* 11832e54 pop ecx */
  ECX = (pop32());
  /* 11832e55 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11832e5c mov eax, esi */
  EAX = (ESI);
  /* 11832e5e shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11832e61 push eax */
  push32((uint32_t)(EAX));
  /* 11832e62 call 0x118358ad */
  push32(0x11832e67u); f_118358ad();
  /* 11832e67 pop ecx */
  ECX = (pop32());
  /* 11832e68 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11832e6b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11832e6f call 0x11832e81 */
  push32(0x11832e74u); f_11832e81();
  /* 11832e74 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11832e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832e79 jne 0x11832ea8 */
  if (!C.zf) { jmp_ind(0x11832ea8u); return; }
L_11832e7b:;
  /* 11832e7b push esi */
  push32((uint32_t)(ESI));
  /* 11832e7c jmp 0x11832e9a */
  goto L_11832e9a;
  /* 11832e7e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11832e81 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832e83 call 0x11834497 */
  push32(0x11832e88u); f_11834497();
  /* 11832e88 pop ecx */
  ECX = (pop32());
  /* 11832e89 ret  */
  ESPCHK(0x11832dbbu, _esp0);
  ESP += 4; return;
L_11832e8a:;
  /* 11832e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11832e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832e8f jne 0x11832e94 */
  if (!C.zf) goto L_11832e94;
  /* 11832e91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11832e93 pop eax */
  EAX = (pop32());
L_11832e94:;
  /* 11832e94 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11832e97 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11832e99 push eax */
  push32((uint32_t)(EAX));
L_11832e9a:;
  /* 11832e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11832e9c push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
}

/* FUN_10002e22 @ 0x11832e22 (9 bytes, 4 insns) */
void f_11832e22(void) {
  FTRACE(0x11832e22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832e22 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832e24 call 0x11834497 */
  push32(0x11832e29u); f_11834497();
  /* 11832e29 pop ecx */
  ECX = (pop32());
  /* 11832e2a ret  */
  ESPCHK(0x11832e22u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e81 @ 0x11832e81 (9 bytes, 4 insns) */
void f_11832e81(void) {
  FTRACE(0x11832e81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832e81 push 9 */
  push32((uint32_t)(0x9u));
  /* 11832e83 call 0x11834497 */
  push32(0x11832e88u); f_11834497();
  /* 11832e88 pop ecx */
  ECX = (pop32());
  /* 11832e89 ret  */
  ESPCHK(0x11832e81u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eb7 @ 0x11832eb7 (18 bytes, 6 insns) */
void f_11832eb7(void) {
  FTRACE(0x11832eb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832eb7 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11832ebc push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11832ec1 call 0x1183620c */
  push32(0x11832ec6u); f_1183620c();
  /* 11832ec6 pop ecx */
  ECX = (pop32());
  /* 11832ec7 pop ecx */
  ECX = (pop32());
  /* 11832ec8 ret  */
  ESPCHK(0x11832eb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec9 @ 0x11832ec9 (62 bytes, 24 insns) */
void f_11832ec9(void) {
  FTRACE(0x11832ec9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832ec9 push ebp */
  push32((uint32_t)(EBP));
  /* 11832eca mov ebp, esp */
  EBP = (ESP);
  /* 11832ecc sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11832ecf fld qword ptr [0x1183a230] */
  fpu_push(rf64((uint32_t)(0x1183a230)));
  /* 11832ed5 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11832ed8 fld qword ptr [0x1183a228] */
  fpu_push(rf64((uint32_t)(0x1183a228)));
  /* 11832ede fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11832ee1 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11832ee4 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11832ee7 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11832eea fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11832eed fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11832ef0 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11832ef3 fcomp qword ptr [0x1183a220] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1183a220)));
  (void)fpu_pop();
  /* 11832ef9 fnstsw ax */
  AX = fpu_status();
  /* 11832efb sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11832efc jbe 0x11832f03 */
  if ((C.cf||C.zf)) goto L_11832f03;
  /* 11832efe push 1 */
  push32((uint32_t)(0x1u));
  /* 11832f00 pop eax */
  EAX = (pop32());
  /* 11832f01 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11832f02 ret  */
  ESPCHK(0x11832ec9u, _esp0);
  ESP += 4; return;
L_11832f03:;
  /* 11832f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11832f05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11832f06 ret  */
  ESPCHK(0x11832ec9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f07 @ 0x11832f07 (41 bytes, 13 insns) */
void f_11832f07(void) {
  FTRACE(0x11832f07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832f07 push 0x1183a254 */
  push32((uint32_t)(0x1183a254u));
  /* 11832f0c call dword ptr [0x1183a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d0))), 0x11832f12u);
  /* 11832f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832f14 je 0x11832f2b */
  if (C.zf) goto L_11832f2b;
  /* 11832f16 push 0x1183a238 */
  push32((uint32_t)(0x1183a238u));
  /* 11832f1b push eax */
  push32((uint32_t)(EAX));
  /* 11832f1c call dword ptr [0x1183a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0dc))), 0x11832f22u);
  /* 11832f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832f24 je 0x11832f2b */
  if (C.zf) goto L_11832f2b;
  /* 11832f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11832f28 call eax */
  call_ind((uint32_t)(EAX), 0x11832f2au);
  /* 11832f2a ret  */
  ESPCHK(0x11832f07u, _esp0);
  ESP += 4; return;
L_11832f2b:;
  /* 11832f2b jmp 0x11832ec9 */
  f_11832ec9(); return;
}

/* FUN_10002f30 @ 0x11832f30 (90 bytes, 37 insns) */
void f_11832f30(void) {
  FTRACE(0x11832f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832f30 push esi */
  push32((uint32_t)(ESI));
  /* 11832f31 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11832f35 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11832f38 push eax */
  push32((uint32_t)(EAX));
  /* 11832f39 call 0x118363b2 */
  push32(0x11832f3eu); f_118363b2();
  /* 11832f3e cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832f41 pop ecx */
  ECX = (pop32());
  /* 11832f42 je 0x11832f70 */
  if (C.zf) goto L_11832f70;
L_11832f44:;
  /* 11832f44 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11832f45 cmp dword ptr [0x1183e8e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183e8e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832f4c jle 0x11832f5d */
  if ((C.zf||C.sf!=C.of)) goto L_11832f5d;
  /* 11832f4e movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11832f51 push 4 */
  push32((uint32_t)(0x4u));
  /* 11832f53 push eax */
  push32((uint32_t)(EAX));
  /* 11832f54 call 0x1183633d */
  push32(0x11832f59u); f_1183633d();
  /* 11832f59 pop ecx */
  ECX = (pop32());
  /* 11832f5a pop ecx */
  ECX = (pop32());
  /* 11832f5b jmp 0x11832f6c */
  goto L_11832f6c;
L_11832f5d:;
  /* 11832f5d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11832f60 mov ecx, dword ptr [0x1183e8ec] */
  ECX = (r32((uint32_t)(0x1183e8ec)));
  /* 11832f66 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11832f69 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11832f6c:;
  /* 11832f6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11832f6e jne 0x11832f44 */
  if (!C.zf) goto L_11832f44;
L_11832f70:;
  /* 11832f70 mov cl, byte ptr [0x1183e8e4] */
  CL = (r8((uint32_t)(0x1183e8e4)));
  /* 11832f76 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11832f78 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11832f7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11832f7b:;
  /* 11832f7b mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11832f7d mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11832f7f mov al, cl */
  AL = (CL);
  /* 11832f81 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11832f83 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11832f84 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11832f86 jne 0x11832f7b */
  if (!C.zf) goto L_11832f7b;
  /* 11832f88 pop esi */
  ESI = (pop32());
  /* 11832f89 ret  */
  ESPCHK(0x11832f30u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11832ff0 (62 bytes, 29 insns) */
void f_11832ff0(void) {
  FTRACE(0x11832ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11832ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11832ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11832ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11832ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11832ff5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11832ff9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11832ffc je 0x11833019 */
  if (C.zf) goto L_11833019;
  /* 11832ffe lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11833001 push eax */
  push32((uint32_t)(EAX));
  /* 11833002 call 0x1183687e */
  push32(0x11833007u); f_1183687e();
  /* 11833007 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1183300a pop ecx */
  ECX = (pop32());
  /* 1183300b pop ecx */
  ECX = (pop32());
  /* 1183300c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1183300f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11833011 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11833014 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11833017 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11833018 ret  */
  ESPCHK(0x11832ff0u, _esp0);
  ESP += 4; return;
L_11833019:;
  /* 11833019 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1183301c push eax */
  push32((uint32_t)(EAX));
  /* 1183301d call 0x118368ab */
  push32(0x11833022u); f_118368ab();
  /* 11833022 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11833025 pop ecx */
  ECX = (pop32());
  /* 11833026 pop ecx */
  ECX = (pop32());
  /* 11833027 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1183302a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1183302c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183302d ret  */
  ESPCHK(0x11832ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000302e @ 0x1183302e (97 bytes, 42 insns) */
void f_1183302e(void) {
  FTRACE(0x1183302eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183302e push ebp */
  push32((uint32_t)(EBP));
  /* 1183302f mov ebp, esp */
  EBP = (ESP);
  /* 11833031 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833034 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11833037 push esi */
  push32((uint32_t)(ESI));
  /* 11833038 push eax */
  push32((uint32_t)(EAX));
  /* 11833039 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1183303c push eax */
  push32((uint32_t)(EAX));
  /* 1183303d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11833040 push ecx */
  push32((uint32_t)(ECX));
  /* 11833041 push ecx */
  push32((uint32_t)(ECX));
  /* 11833042 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11833044 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11833047 call 0x1183694f */
  push32(0x1183304cu); f_1183694f();
  /* 1183304c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1183304f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11833052 push eax */
  push32((uint32_t)(EAX));
  /* 11833053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11833056 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11833059 push eax */
  push32((uint32_t)(EAX));
  /* 1183305a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183305c cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833060 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11833063 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11833065 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833067 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 1183306a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183306c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183306e push ecx */
  push32((uint32_t)(ECX));
  /* 1183306f call 0x118368d8 */
  push32(0x11833074u); f_118368d8();
  /* 11833074 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11833077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11833079 push eax */
  push32((uint32_t)(EAX));
  /* 1183307a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1183307d push esi */
  push32((uint32_t)(ESI));
  /* 1183307e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11833081 call 0x1183308f */
  push32(0x11833086u); f_1183308f();
  /* 11833086 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11833089 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183308c pop esi */
  ESI = (pop32());
  /* 1183308d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183308e ret  */
  ESPCHK(0x1183302eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000308f @ 0x1183308f (194 bytes, 91 insns) */
void f_1183308f(void) {
  FTRACE(0x1183308fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183308f push ebp */
  push32((uint32_t)(EBP));
  /* 11833090 mov ebp, esp */
  EBP = (ESP);
  /* 11833092 push ebx */
  push32((uint32_t)(EBX));
  /* 11833093 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11833095 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833098 push esi */
  push32((uint32_t)(ESI));
  /* 11833099 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 1183309c push edi */
  push32((uint32_t)(EDI));
  /* 1183309d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118330a0 je 0x118330bd */
  if (C.zf) goto L_118330bd;
  /* 118330a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118330a4 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118330a7 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 118330aa push eax */
  push32((uint32_t)(EAX));
  /* 118330ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118330ad cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118330b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118330b3 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118330b5 push eax */
  push32((uint32_t)(EAX));
  /* 118330b6 call 0x11833331 */
  push32(0x118330bbu); f_11833331();
  /* 118330bb pop ecx */
  ECX = (pop32());
  /* 118330bc pop ecx */
  ECX = (pop32());
L_118330bd:;
  /* 118330bd cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118330c0 mov eax, edi */
  EAX = (EDI);
  /* 118330c2 jne 0x118330ca */
  if (!C.zf) goto L_118330ca;
  /* 118330c4 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 118330c7 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_118330ca:;
  /* 118330ca cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118330cd jle 0x118330e1 */
  if ((C.zf||C.sf!=C.of)) goto L_118330e1;
  /* 118330cf mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118330d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 118330d5 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118330d7 mov eax, ecx */
  EAX = (ECX);
  /* 118330d9 mov cl, byte ptr [0x1183e8e4] */
  CL = (r8((uint32_t)(0x1183e8e4)));
  /* 118330df mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_118330e1:;
  /* 118330e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118330e3 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118330e6 push 0x1183a268 */
  push32((uint32_t)(0x1183a268u));
  /* 118330eb sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118330ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118330f0 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118330f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118330f4 call 0x11836a70 */
  push32(0x118330f9u); f_11836a70();
  /* 118330f9 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118330fc pop ecx */
  ECX = (pop32());
  /* 118330fd pop ecx */
  ECX = (pop32());
  /* 118330fe mov ecx, eax */
  ECX = (EAX);
  /* 11833100 je 0x11833105 */
  if (C.zf) goto L_11833105;
  /* 11833102 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11833105:;
  /* 11833105 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11833108 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11833109 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183310c je 0x1183314a */
  if (C.zf) goto L_1183314a;
  /* 1183310e mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11833111 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11833112 jns 0x11833119 */
  if (!C.sf) goto L_11833119;
  /* 11833114 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11833116 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11833119:;
  /* 11833119 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1183311a cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183311d jl 0x11833130 */
  if ((C.sf!=C.of)) goto L_11833130;
  /* 1183311f mov eax, ebx */
  EAX = (EBX);
  /* 11833121 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11833123 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11833124 pop esi */
  ESI = (pop32());
  /* 11833125 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11833127 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11833129 mov eax, ebx */
  EAX = (EBX);
  /* 1183312b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1183312c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1183312e mov ebx, edx */
  EBX = (EDX);
L_11833130:;
  /* 11833130 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11833131 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833134 jl 0x11833147 */
  if ((C.sf!=C.of)) goto L_11833147;
  /* 11833136 mov eax, ebx */
  EAX = (EBX);
  /* 11833138 push 0xa */
  push32((uint32_t)(0xau));
  /* 1183313a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1183313b pop esi */
  ESI = (pop32());
  /* 1183313c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1183313e add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11833140 mov eax, ebx */
  EAX = (EBX);
  /* 11833142 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11833143 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11833145 mov ebx, edx */
  EBX = (EDX);
L_11833147:;
  /* 11833147 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_1183314a:;
  /* 1183314a mov eax, edi */
  EAX = (EDI);
  /* 1183314c pop edi */
  EDI = (pop32());
  /* 1183314d pop esi */
  ESI = (pop32());
  /* 1183314e pop ebx */
  EBX = (pop32());
  /* 1183314f pop ebp */
  EBP = (pop32());
  /* 11833150 ret  */
  ESPCHK(0x1183308fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003151 @ 0x11833151 (85 bytes, 37 insns) */
void f_11833151(void) {
  FTRACE(0x11833151u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833151 push ebp */
  push32((uint32_t)(EBP));
  /* 11833152 mov ebp, esp */
  EBP = (ESP);
  /* 11833154 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833157 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1183315a push esi */
  push32((uint32_t)(ESI));
  /* 1183315b push eax */
  push32((uint32_t)(EAX));
  /* 1183315c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1183315f push eax */
  push32((uint32_t)(EAX));
  /* 11833160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11833163 push ecx */
  push32((uint32_t)(ECX));
  /* 11833164 push ecx */
  push32((uint32_t)(ECX));
  /* 11833165 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11833167 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 1183316a call 0x1183694f */
  push32(0x1183316fu); f_1183694f();
  /* 1183316f mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11833172 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11833175 push eax */
  push32((uint32_t)(EAX));
  /* 11833176 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11833179 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183317b push eax */
  push32((uint32_t)(EAX));
  /* 1183317c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183317e cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833182 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11833185 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833188 push eax */
  push32((uint32_t)(EAX));
  /* 11833189 call 0x118368d8 */
  push32(0x1183318eu); f_118368d8();
  /* 1183318e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11833191 push 0 */
  push32((uint32_t)(0x0u));
  /* 11833193 push eax */
  push32((uint32_t)(EAX));
  /* 11833194 push esi */
  push32((uint32_t)(ESI));
  /* 11833195 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11833198 call 0x118331a6 */
  push32(0x1183319du); f_118331a6();
  /* 1183319d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118331a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118331a3 pop esi */
  ESI = (pop32());
  /* 118331a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118331a5 ret  */
  ESPCHK(0x11833151u, _esp0);
  ESP += 4; return;
}

/* FUN_100031a6 @ 0x118331a6 (167 bytes, 73 insns) */
void f_118331a6(void) {
  FTRACE(0x118331a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118331a6 push ebp */
  push32((uint32_t)(EBP));
  /* 118331a7 mov ebp, esp */
  EBP = (ESP);
  /* 118331a9 push ebx */
  push32((uint32_t)(EBX));
  /* 118331aa push esi */
  push32((uint32_t)(ESI));
  /* 118331ab mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118331ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118331b1 push edi */
  push32((uint32_t)(EDI));
  /* 118331b2 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118331b5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118331b6 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118331ba je 0x118331d6 */
  if (C.zf) goto L_118331d6;
  /* 118331bc cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118331bf jne 0x118331d6 */
  if (!C.zf) goto L_118331d6;
  /* 118331c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118331c3 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118331c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118331c9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118331cb add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118331cd mov eax, ecx */
  EAX = (ECX);
  /* 118331cf mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 118331d2 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_118331d6:;
  /* 118331d6 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118331d9 mov edi, ebx */
  EDI = (EBX);
  /* 118331db jne 0x118331e3 */
  if (!C.zf) goto L_118331e3;
  /* 118331dd mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 118331e0 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_118331e3:;
  /* 118331e3 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118331e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118331e8 jg 0x118331fa */
  if ((!C.zf&&C.sf==C.of)) goto L_118331fa;
  /* 118331ea push 1 */
  push32((uint32_t)(0x1u));
  /* 118331ec push edi */
  push32((uint32_t)(EDI));
  /* 118331ed call 0x11833331 */
  push32(0x118331f2u); f_11833331();
  /* 118331f2 pop ecx */
  ECX = (pop32());
  /* 118331f3 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 118331f6 pop ecx */
  ECX = (pop32());
  /* 118331f7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118331f8 jmp 0x118331fc */
  goto L_118331fc;
L_118331fa:;
  /* 118331fa add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118331fc:;
  /* 118331fc cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833200 jle 0x11833246 */
  if ((C.zf||C.sf!=C.of)) goto L_11833246;
  /* 11833202 push 1 */
  push32((uint32_t)(0x1u));
  /* 11833204 push edi */
  push32((uint32_t)(EDI));
  /* 11833205 call 0x11833331 */
  push32(0x1183320au); f_11833331();
  /* 1183320a mov al, byte ptr [0x1183e8e4] */
  AL = (r8((uint32_t)(0x1183e8e4)));
  /* 1183320f pop ecx */
  ECX = (pop32());
  /* 11833210 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11833212 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11833215 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11833216 pop ecx */
  ECX = (pop32());
  /* 11833217 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833219 jge 0x11833246 */
  if ((C.sf==C.of)) goto L_11833246;
  /* 1183321b cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183321f je 0x11833225 */
  if (C.zf) goto L_11833225;
  /* 11833221 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11833223 jmp 0x1183322c */
  goto L_1183322c;
L_11833225:;
  /* 11833225 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11833227 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183322a jl 0x1183322f */
  if ((C.sf!=C.of)) goto L_1183322f;
L_1183322c:;
  /* 1183322c mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_1183322f:;
  /* 1183322f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11833232 push edi */
  push32((uint32_t)(EDI));
  /* 11833233 call 0x11833331 */
  push32(0x11833238u); f_11833331();
  /* 11833238 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1183323b push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1183323d push edi */
  push32((uint32_t)(EDI));
  /* 1183323e call 0x11836b60 */
  push32(0x11833243u); f_11836b60();
  /* 11833243 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11833246:;
  /* 11833246 pop edi */
  EDI = (pop32());
  /* 11833247 mov eax, ebx */
  EAX = (EBX);
  /* 11833249 pop esi */
  ESI = (pop32());
  /* 1183324a pop ebx */
  EBX = (pop32());
  /* 1183324b pop ebp */
  EBP = (pop32());
  /* 1183324c ret  */
  ESPCHK(0x118331a6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000324d @ 0x1183324d (147 bytes, 66 insns) */
void f_1183324d(void) {
  FTRACE(0x1183324du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183324d push ebp */
  push32((uint32_t)(EBP));
  /* 1183324e mov ebp, esp */
  EBP = (ESP);
  /* 11833250 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833253 push ebx */
  push32((uint32_t)(EBX));
  /* 11833254 push esi */
  push32((uint32_t)(ESI));
  /* 11833255 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11833258 push edi */
  push32((uint32_t)(EDI));
  /* 11833259 push eax */
  push32((uint32_t)(EAX));
  /* 1183325a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1183325d push eax */
  push32((uint32_t)(EAX));
  /* 1183325e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11833261 push ecx */
  push32((uint32_t)(ECX));
  /* 11833262 push ecx */
  push32((uint32_t)(ECX));
  /* 11833263 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11833265 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11833268 call 0x1183694f */
  push32(0x1183326du); f_1183694f();
  /* 1183326d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11833270 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11833273 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11833276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11833278 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183327c sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1183327f add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833282 mov edi, eax */
  EDI = (EAX);
  /* 11833284 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11833287 push eax */
  push32((uint32_t)(EAX));
  /* 11833288 push ebx */
  push32((uint32_t)(EBX));
  /* 11833289 push edi */
  push32((uint32_t)(EDI));
  /* 1183328a call 0x118368d8 */
  push32(0x1183328fu); f_118368d8();
  /* 1183328f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11833292 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833295 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11833296 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833298 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 1183329b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183329e jl 0x118332c6 */
  if ((C.sf!=C.of)) goto L_118332c6;
  /* 118332a0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118332a2 jge 0x118332c6 */
  if ((C.sf==C.of)) goto L_118332c6;
  /* 118332a4 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 118332a6 je 0x118332b2 */
  if (C.zf) goto L_118332b2;
L_118332a8:;
  /* 118332a8 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118332aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118332ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118332ad jne 0x118332a8 */
  if (!C.zf) goto L_118332a8;
  /* 118332af and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_118332b2:;
  /* 118332b2 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118332b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118332b7 push eax */
  push32((uint32_t)(EAX));
  /* 118332b8 push ebx */
  push32((uint32_t)(EBX));
  /* 118332b9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118332bc call 0x118331a6 */
  push32(0x118332c1u); f_118331a6();
  /* 118332c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118332c4 jmp 0x118332db */
  goto L_118332db;
L_118332c6:;
  /* 118332c6 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118332c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118332cb push eax */
  push32((uint32_t)(EAX));
  /* 118332cc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118332cf push ebx */
  push32((uint32_t)(EBX));
  /* 118332d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118332d3 call 0x1183308f */
  push32(0x118332d8u); f_1183308f();
  /* 118332d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118332db:;
  /* 118332db pop edi */
  EDI = (pop32());
  /* 118332dc pop esi */
  ESI = (pop32());
  /* 118332dd pop ebx */
  EBX = (pop32());
  /* 118332de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118332df ret  */
  ESPCHK(0x1183324du, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x118332e0 (81 bytes, 29 insns) */
void f_118332e0(void) {
  FTRACE(0x118332e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118332e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118332e1 mov ebp, esp */
  EBP = (ESP);
  /* 118332e3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118332e7 je 0x1183331b */
  if (C.zf) goto L_1183331b;
  /* 118332e9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118332ed je 0x1183331b */
  if (C.zf) goto L_1183331b;
  /* 118332ef cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118332f3 jne 0x11833308 */
  if (!C.zf) goto L_11833308;
  /* 118332f5 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118332f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118332fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118332fe call 0x11833151 */
  push32(0x11833303u); f_11833151();
  /* 11833303 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833306 pop ebp */
  EBP = (pop32());
  /* 11833307 ret  */
  ESPCHK(0x118332e0u, _esp0);
  ESP += 4; return;
L_11833308:;
  /* 11833308 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1183330b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1183330e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11833311 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11833314 call 0x1183324d */
  push32(0x11833319u); f_1183324d();
  /* 11833319 jmp 0x1183332c */
  goto L_1183332c;
L_1183331b:;
  /* 1183331b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1183331e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11833321 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11833324 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11833327 call 0x1183302e */
  push32(0x1183332cu); f_1183302e();
L_1183332c:;
  /* 1183332c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183332f pop ebp */
  EBP = (pop32());
  /* 11833330 ret  */
  ESPCHK(0x118332e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003331 @ 0x11833331 (37 bytes, 18 insns) */
void f_11833331(void) {
  FTRACE(0x11833331u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833331 push edi */
  push32((uint32_t)(EDI));
  /* 11833332 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11833336 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833338 je 0x11833354 */
  if (C.zf) goto L_11833354;
  /* 1183333a push esi */
  push32((uint32_t)(ESI));
  /* 1183333b mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1183333f push esi */
  push32((uint32_t)(ESI));
  /* 11833340 call 0x11836bc0 */
  push32(0x11833345u); f_11836bc0();
  /* 11833345 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833346 push eax */
  push32((uint32_t)(EAX));
  /* 11833347 push esi */
  push32((uint32_t)(ESI));
  /* 11833348 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183334a push esi */
  push32((uint32_t)(ESI));
  /* 1183334b call 0x11835e70 */
  push32(0x11833350u); f_11835e70();
  /* 11833350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833353 pop esi */
  ESI = (pop32());
L_11833354:;
  /* 11833354 pop edi */
  EDI = (pop32());
  /* 11833355 ret  */
  ESPCHK(0x11833331u, _esp0);
  ESP += 4; return;
}

/* FUN_10003412 @ 0x11833412 (47 bytes, 17 insns) */
void f_11833412(void) {
  FTRACE(0x11833412u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833412 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11833416 mov ecx, 0x1183c310 */
  ECX = (0x1183c310u);
  /* 1183341b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183341d jb 0x11833436 */
  if (C.cf) goto L_11833436;
  /* 1183341f cmp eax, 0x1183c570 */
  { uint32_t _a=(EAX),_b=(0x1183c570u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833424 ja 0x11833436 */
  if ((!C.cf&&!C.zf)) goto L_11833436;
  /* 11833426 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833428 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1183342b add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183342e push eax */
  push32((uint32_t)(EAX));
  /* 1183342f call 0x11834436 */
  push32(0x11833434u); f_11834436();
  /* 11833434 pop ecx */
  ECX = (pop32());
  /* 11833435 ret  */
  ESPCHK(0x11833412u, _esp0);
  ESP += 4; return;
L_11833436:;
  /* 11833436 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833439 push eax */
  push32((uint32_t)(EAX));
  /* 1183343a call dword ptr [0x1183a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0cc))), 0x11833440u);
  /* 11833440 ret  */
  ESPCHK(0x11833412u, _esp0);
  ESP += 4; return;
}

/* FUN_10003441 @ 0x11833441 (35 bytes, 13 insns) */
void f_11833441(void) {
  FTRACE(0x11833441u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833441 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11833445 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833448 jge 0x11833455 */
  if ((C.sf==C.of)) goto L_11833455;
  /* 1183344a add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183344d push eax */
  push32((uint32_t)(EAX));
  /* 1183344e call 0x11834436 */
  push32(0x11833453u); f_11834436();
  /* 11833453 pop ecx */
  ECX = (pop32());
  /* 11833454 ret  */
  ESPCHK(0x11833441u, _esp0);
  ESP += 4; return;
L_11833455:;
  /* 11833455 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11833459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183345c push eax */
  push32((uint32_t)(EAX));
  /* 1183345d call dword ptr [0x1183a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0cc))), 0x11833463u);
  /* 11833463 ret  */
  ESPCHK(0x11833441u, _esp0);
  ESP += 4; return;
}

/* FUN_10003464 @ 0x11833464 (47 bytes, 17 insns) */
void f_11833464(void) {
  FTRACE(0x11833464u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833464 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11833468 mov ecx, 0x1183c310 */
  ECX = (0x1183c310u);
  /* 1183346d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183346f jb 0x11833488 */
  if (C.cf) goto L_11833488;
  /* 11833471 cmp eax, 0x1183c570 */
  { uint32_t _a=(EAX),_b=(0x1183c570u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833476 ja 0x11833488 */
  if ((!C.cf&&!C.zf)) goto L_11833488;
  /* 11833478 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183347a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1183347d add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833480 push eax */
  push32((uint32_t)(EAX));
  /* 11833481 call 0x11834497 */
  push32(0x11833486u); f_11834497();
  /* 11833486 pop ecx */
  ECX = (pop32());
  /* 11833487 ret  */
  ESPCHK(0x11833464u, _esp0);
  ESP += 4; return;
L_11833488:;
  /* 11833488 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183348b push eax */
  push32((uint32_t)(EAX));
  /* 1183348c call dword ptr [0x1183a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0e8))), 0x11833492u);
  /* 11833492 ret  */
  ESPCHK(0x11833464u, _esp0);
  ESP += 4; return;
}

/* FUN_10003493 @ 0x11833493 (35 bytes, 13 insns) */
void f_11833493(void) {
  FTRACE(0x11833493u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833493 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11833497 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183349a jge 0x118334a7 */
  if ((C.sf==C.of)) goto L_118334a7;
  /* 1183349c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183349f push eax */
  push32((uint32_t)(EAX));
  /* 118334a0 call 0x11834497 */
  push32(0x118334a5u); f_11834497();
  /* 118334a5 pop ecx */
  ECX = (pop32());
  /* 118334a6 ret  */
  ESPCHK(0x11833493u, _esp0);
  ESP += 4; return;
L_118334a7:;
  /* 118334a7 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118334ab add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118334ae push eax */
  push32((uint32_t)(EAX));
  /* 118334af call dword ptr [0x1183a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0e8))), 0x118334b5u);
  /* 118334b5 ret  */
  ESPCHK(0x11833493u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b6 @ 0x118334b6 (93 bytes, 32 insns) */
void f_118334b6(void) {
  FTRACE(0x118334b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118334b6 push esi */
  push32((uint32_t)(ESI));
  /* 118334b7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118334bb cmp esi, dword ptr [0x1183fbc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183fbc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118334c1 jae 0x118334fb */
  if (!C.cf) goto L_118334fb;
  /* 118334c3 mov ecx, esi */
  ECX = (ESI);
  /* 118334c5 mov eax, esi */
  EAX = (ESI);
  /* 118334c7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118334ca and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118334cd mov ecx, dword ptr [ecx*4 + 0x1183fac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 118334d4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118334d7 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118334dc je 0x118334fb */
  if (C.zf) goto L_118334fb;
  /* 118334de push edi */
  push32((uint32_t)(EDI));
  /* 118334df push esi */
  push32((uint32_t)(ESI));
  /* 118334e0 call 0x11836e0b */
  push32(0x118334e5u); f_11836e0b();
  /* 118334e5 push esi */
  push32((uint32_t)(ESI));
  /* 118334e6 call 0x11833513 */
  push32(0x118334ebu); f_11833513();
  /* 118334eb push esi */
  push32((uint32_t)(ESI));
  /* 118334ec mov edi, eax */
  EDI = (EAX);
  /* 118334ee call 0x11836e6a */
  push32(0x118334f3u); f_11836e6a();
  /* 118334f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118334f6 mov eax, edi */
  EAX = (EDI);
  /* 118334f8 pop edi */
  EDI = (pop32());
  /* 118334f9 pop esi */
  ESI = (pop32());
  /* 118334fa ret  */
  ESPCHK(0x118334b6u, _esp0);
  ESP += 4; return;
L_118334fb:;
  /* 118334fb call 0x11836d38 */
  push32(0x11833500u); f_11836d38();
  /* 11833500 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11833506 call 0x11836d41 */
  push32(0x1183350bu); f_11836d41();
  /* 1183350b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1183350e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11833511 pop esi */
  ESI = (pop32());
  /* 11833512 ret  */
  ESPCHK(0x118334b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003513 @ 0x11833513 (131 bytes, 52 insns) */
void f_11833513(void) {
  FTRACE(0x11833513u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833513 push esi */
  push32((uint32_t)(ESI));
  /* 11833514 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11833518 push edi */
  push32((uint32_t)(EDI));
  /* 11833519 push esi */
  push32((uint32_t)(ESI));
  /* 1183351a call 0x11836dc9 */
  push32(0x1183351fu); f_11836dc9();
  /* 1183351f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833522 pop ecx */
  ECX = (pop32());
  /* 11833523 je 0x11833561 */
  if (C.zf) goto L_11833561;
  /* 11833525 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833528 je 0x1183352f */
  if (C.zf) goto L_1183352f;
  /* 1183352a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183352d jne 0x11833545 */
  if (!C.zf) goto L_11833545;
L_1183352f:;
  /* 1183352f push 2 */
  push32((uint32_t)(0x2u));
  /* 11833531 call 0x11836dc9 */
  push32(0x11833536u); f_11836dc9();
  /* 11833536 push 1 */
  push32((uint32_t)(0x1u));
  /* 11833538 mov edi, eax */
  EDI = (EAX);
  /* 1183353a call 0x11836dc9 */
  push32(0x1183353fu); f_11836dc9();
  /* 1183353f pop ecx */
  ECX = (pop32());
  /* 11833540 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833542 pop ecx */
  ECX = (pop32());
  /* 11833543 je 0x11833561 */
  if (C.zf) goto L_11833561;
L_11833545:;
  /* 11833545 push esi */
  push32((uint32_t)(ESI));
  /* 11833546 call 0x11836dc9 */
  push32(0x1183354bu); f_11836dc9();
  /* 1183354b pop ecx */
  ECX = (pop32());
  /* 1183354c push eax */
  push32((uint32_t)(EAX));
  /* 1183354d call dword ptr [0x1183a0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0ec))), 0x11833553u);
  /* 11833553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833555 jne 0x11833561 */
  if (!C.zf) goto L_11833561;
  /* 11833557 call dword ptr [0x1183a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a004))), 0x1183355du);
  /* 1183355d mov edi, eax */
  EDI = (EAX);
  /* 1183355f jmp 0x11833563 */
  goto L_11833563;
L_11833561:;
  /* 11833561 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11833563:;
  /* 11833563 push esi */
  push32((uint32_t)(ESI));
  /* 11833564 call 0x11836d4a */
  push32(0x11833569u); f_11836d4a();
  /* 11833569 mov eax, esi */
  EAX = (ESI);
  /* 1183356b and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1183356e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11833571 pop ecx */
  ECX = (pop32());
  /* 11833572 mov eax, dword ptr [eax*4 + 0x1183fac0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1183fac0)));
  /* 11833579 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1183357c and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11833581 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833583 je 0x11833591 */
  if (C.zf) goto L_11833591;
  /* 11833585 push edi */
  push32((uint32_t)(EDI));
  /* 11833586 call 0x11836cc5 */
  push32(0x1183358bu); f_11836cc5();
  /* 1183358b pop ecx */
  ECX = (pop32());
  /* 1183358c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1183358f jmp 0x11833593 */
  goto L_11833593;
L_11833591:;
  /* 11833591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11833593:;
  /* 11833593 pop edi */
  EDI = (pop32());
  /* 11833594 pop esi */
  ESI = (pop32());
  /* 11833595 ret  */
  ESPCHK(0x11833513u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11833596 (43 bytes, 17 insns) */
void f_11833596(void) {
  FTRACE(0x11833596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833596 push esi */
  push32((uint32_t)(ESI));
  /* 11833597 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1183359b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1183359e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 118335a0 je 0x118335bf */
  if (C.zf) goto L_118335bf;
  /* 118335a2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118335a4 je 0x118335bf */
  if (C.zf) goto L_118335bf;
  /* 118335a6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 118335a9 call 0x11832bdf */
  push32(0x118335aeu); f_11832bdf();
  /* 118335ae and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 118335b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118335b6 pop ecx */
  ECX = (pop32());
  /* 118335b7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118335b9 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118335bc mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_118335bf:;
  /* 118335bf pop esi */
  ESI = (pop32());
  /* 118335c0 ret  */
  ESPCHK(0x11833596u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c1 @ 0x118335c1 (46 bytes, 22 insns) */
void f_118335c1(void) {
  FTRACE(0x118335c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118335c1 push esi */
  push32((uint32_t)(ESI));
  /* 118335c2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118335c6 push esi */
  push32((uint32_t)(ESI));
  /* 118335c7 call 0x118335ef */
  push32(0x118335ccu); f_118335ef();
  /* 118335cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118335ce pop ecx */
  ECX = (pop32());
  /* 118335cf je 0x118335d6 */
  if (C.zf) goto L_118335d6;
  /* 118335d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118335d4 pop esi */
  ESI = (pop32());
  /* 118335d5 ret  */
  ESPCHK(0x118335c1u, _esp0);
  ESP += 4; return;
L_118335d6:;
  /* 118335d6 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 118335da je 0x118335eb */
  if (C.zf) goto L_118335eb;
  /* 118335dc push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118335df call 0x11836e8c */
  push32(0x118335e4u); f_11836e8c();
  /* 118335e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118335e6 pop ecx */
  ECX = (pop32());
  /* 118335e7 pop esi */
  ESI = (pop32());
  /* 118335e8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118335ea ret  */
  ESPCHK(0x118335c1u, _esp0);
  ESP += 4; return;
L_118335eb:;
  /* 118335eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118335ed pop esi */
  ESI = (pop32());
  /* 118335ee ret  */
  ESPCHK(0x118335c1u, _esp0);
  ESP += 4; return;
}

/* FUN_100035ef @ 0x118335ef (92 bytes, 40 insns) */
void f_118335ef(void) {
  FTRACE(0x118335efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118335ef push ebx */
  push32((uint32_t)(EBX));
  /* 118335f0 push esi */
  push32((uint32_t)(ESI));
  /* 118335f1 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118335f5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118335f7 push edi */
  push32((uint32_t)(EDI));
  /* 118335f8 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118335fb mov ecx, eax */
  ECX = (EAX);
  /* 118335fd and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11833600 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833603 jne 0x1183363c */
  if (!C.zf) goto L_1183363c;
  /* 11833605 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11833609 je 0x1183363c */
  if (C.zf) goto L_1183363c;
  /* 1183360b mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1183360e mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11833610 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833612 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833614 jle 0x1183363c */
  if ((C.zf||C.sf!=C.of)) goto L_1183363c;
  /* 11833616 push edi */
  push32((uint32_t)(EDI));
  /* 11833617 push eax */
  push32((uint32_t)(EAX));
  /* 11833618 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1183361b call 0x11836f1f */
  push32(0x11833620u); f_11836f1f();
  /* 11833620 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833623 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833625 jne 0x11833635 */
  if (!C.zf) goto L_11833635;
  /* 11833627 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1183362a test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1183362c je 0x1183363c */
  if (C.zf) goto L_1183363c;
  /* 1183362e and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11833630 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11833633 jmp 0x1183363c */
  goto L_1183363c;
L_11833635:;
  /* 11833635 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11833639 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1183363c:;
  /* 1183363c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1183363f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11833643 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11833645 pop edi */
  EDI = (pop32());
  /* 11833646 mov eax, ebx */
  EAX = (EBX);
  /* 11833648 pop esi */
  ESI = (pop32());
  /* 11833649 pop ebx */
  EBX = (pop32());
  /* 1183364a ret  */
  ESPCHK(0x118335efu, _esp0);
  ESP += 4; return;
}

/* FUN_10003654 @ 0x11833654 (164 bytes, 66 insns) */
void f_11833654(void) {
  FTRACE(0x11833654u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833654 push ebx */
  push32((uint32_t)(EBX));
  /* 11833655 push esi */
  push32((uint32_t)(ESI));
  /* 11833656 push edi */
  push32((uint32_t)(EDI));
  /* 11833657 push 2 */
  push32((uint32_t)(0x2u));
  /* 11833659 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1183365b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1183365d call 0x11834436 */
  push32(0x11833662u); f_11834436();
  /* 11833662 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11833664 pop ecx */
  ECX = (pop32());
  /* 11833665 cmp dword ptr [0x11840be0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11840be0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183366b jle 0x118336e1 */
  if ((C.zf||C.sf!=C.of)) goto L_118336e1;
L_1183366d:;
  /* 1183366d mov eax, dword ptr [0x1183fbd4] */
  EAX = (r32((uint32_t)(0x1183fbd4)));
  /* 11833672 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11833675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833677 je 0x118336d8 */
  if (C.zf) goto L_118336d8;
  /* 11833679 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1183367d je 0x118336d8 */
  if (C.zf) goto L_118336d8;
  /* 1183367f push eax */
  push32((uint32_t)(EAX));
  /* 11833680 push esi */
  push32((uint32_t)(ESI));
  /* 11833681 call 0x11833441 */
  push32(0x11833686u); f_11833441();
  /* 11833686 mov eax, dword ptr [0x1183fbd4] */
  EAX = (r32((uint32_t)(0x1183fbd4)));
  /* 1183368b pop ecx */
  ECX = (pop32());
  /* 1183368c pop ecx */
  ECX = (pop32());
  /* 1183368d mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11833690 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11833693 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11833696 je 0x118336c8 */
  if (C.zf) goto L_118336c8;
  /* 11833698 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183369d jne 0x118336ae */
  if (!C.zf) goto L_118336ae;
  /* 1183369f push eax */
  push32((uint32_t)(EAX));
  /* 118336a0 call 0x118335c1 */
  push32(0x118336a5u); f_118335c1();
  /* 118336a5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118336a8 pop ecx */
  ECX = (pop32());
  /* 118336a9 je 0x118336c8 */
  if (C.zf) goto L_118336c8;
  /* 118336ab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118336ac jmp 0x118336c8 */
  goto L_118336c8;
L_118336ae:;
  /* 118336ae cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118336b3 jne 0x118336c8 */
  if (!C.zf) goto L_118336c8;
  /* 118336b5 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 118336b8 je 0x118336c8 */
  if (C.zf) goto L_118336c8;
  /* 118336ba push eax */
  push32((uint32_t)(EAX));
  /* 118336bb call 0x118335c1 */
  push32(0x118336c0u); f_118335c1();
  /* 118336c0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118336c3 pop ecx */
  ECX = (pop32());
  /* 118336c4 jne 0x118336c8 */
  if (!C.zf) goto L_118336c8;
  /* 118336c6 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_118336c8:;
  /* 118336c8 mov eax, dword ptr [0x1183fbd4] */
  EAX = (r32((uint32_t)(0x1183fbd4)));
  /* 118336cd push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 118336d0 push esi */
  push32((uint32_t)(ESI));
  /* 118336d1 call 0x11833493 */
  push32(0x118336d6u); f_11833493();
  /* 118336d6 pop ecx */
  ECX = (pop32());
  /* 118336d7 pop ecx */
  ECX = (pop32());
L_118336d8:;
  /* 118336d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118336d9 cmp esi, dword ptr [0x11840be0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11840be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118336df jl 0x1183366d */
  if ((C.sf!=C.of)) goto L_1183366d;
L_118336e1:;
  /* 118336e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118336e3 call 0x11834497 */
  push32(0x118336e8u); f_11834497();
  /* 118336e8 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118336ed pop ecx */
  ECX = (pop32());
  /* 118336ee mov eax, ebx */
  EAX = (EBX);
  /* 118336f0 je 0x118336f4 */
  if (C.zf) goto L_118336f4;
  /* 118336f2 mov eax, edi */
  EAX = (EDI);
L_118336f4:;
  /* 118336f4 pop edi */
  EDI = (pop32());
  /* 118336f5 pop esi */
  ESI = (pop32());
  /* 118336f6 pop ebx */
  EBX = (pop32());
  /* 118336f7 ret  */
  ESPCHK(0x11833654u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f8 @ 0x118336f8 (45 bytes, 12 insns) */
void f_118336f8(void) {
  FTRACE(0x118336f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118336f8 mov eax, dword ptr [0x1183c2cc] */
  EAX = (r32((uint32_t)(0x1183c2cc)));
  /* 118336fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118336ff je 0x11833703 */
  if (C.zf) goto L_11833703;
  /* 11833701 call eax */
  call_ind((uint32_t)(EAX), 0x11833703u);
L_11833703:;
  /* 11833703 push 0x1183c03c */
  push32((uint32_t)(0x1183c03cu));
  /* 11833708 push 0x1183c02c */
  push32((uint32_t)(0x1183c02cu));
  /* 1183370d call 0x118337fc */
  push32(0x11833712u); f_118337fc();
  /* 11833712 push 0x1183c028 */
  push32((uint32_t)(0x1183c028u));
  /* 11833717 push 0x1183c000 */
  push32((uint32_t)(0x1183c000u));
  /* 1183371c call 0x118337fc */
  push32(0x11833721u); f_118337fc();
  /* 11833721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833724 ret  */
  ESPCHK(0x118336f8u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11833725 (17 bytes, 6 insns) */
void f_11833725(void) {
  FTRACE(0x11833725u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833725 push 0 */
  push32((uint32_t)(0x0u));
  /* 11833727 push 1 */
  push32((uint32_t)(0x1u));
  /* 11833729 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1183372d call 0x11833745 */
  push32(0x11833732u); f_11833745();
  /* 11833732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833735 ret  */
  ESPCHK(0x11833725u, _esp0);
  ESP += 4; return;
}

/* FUN_10003736 @ 0x11833736 (15 bytes, 6 insns) */
void f_11833736(void) {
  FTRACE(0x11833736u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833736 push 1 */
  push32((uint32_t)(0x1u));
  /* 11833738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1183373a push 0 */
  push32((uint32_t)(0x0u));
  /* 1183373c call 0x11833745 */
  push32(0x11833741u); f_11833745();
  /* 11833741 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833744 ret  */
  ESPCHK(0x11833736u, _esp0);
  ESP += 4; return;
}

/* FUN_10003745 @ 0x11833745 (163 bytes, 53 insns) */
void f_11833745(void) {
  FTRACE(0x11833745u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833745 push edi */
  push32((uint32_t)(EDI));
  /* 11833746 call 0x118337ea */
  push32(0x1183374bu); f_118337ea();
  /* 1183374b push 1 */
  push32((uint32_t)(0x1u));
  /* 1183374d pop edi */
  EDI = (pop32());
  /* 1183374e cmp dword ptr [0x1183f540], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f540))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833754 jne 0x11833767 */
  if (!C.zf) goto L_11833767;
  /* 11833756 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1183375a call dword ptr [0x1183a0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0e4))), 0x11833760u);
  /* 11833760 push eax */
  push32((uint32_t)(EAX));
  /* 11833761 call dword ptr [0x1183a0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0e0))), 0x11833767u);
L_11833767:;
  /* 11833767 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183376c push ebx */
  push32((uint32_t)(EBX));
  /* 1183376d mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11833771 mov dword ptr [0x1183f53c], edi */
  w32((uint32_t)(0x1183f53c), (EDI));
  /* 11833777 mov byte ptr [0x1183f538], bl */
  w8((uint32_t)(0x1183f538), (BL));
  /* 1183377d jne 0x118337bb */
  if (!C.zf) goto L_118337bb;
  /* 1183377f mov eax, dword ptr [0x1183fbd0] */
  EAX = (r32((uint32_t)(0x1183fbd0)));
  /* 11833784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833786 je 0x118337aa */
  if (C.zf) goto L_118337aa;
  /* 11833788 mov ecx, dword ptr [0x1183fbcc] */
  ECX = (r32((uint32_t)(0x1183fbcc)));
  /* 1183378e push esi */
  push32((uint32_t)(ESI));
  /* 1183378f lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11833792 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833794 jb 0x118337a9 */
  if (C.cf) goto L_118337a9;
L_11833796:;
  /* 11833796 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11833798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183379a je 0x1183379e */
  if (C.zf) goto L_1183379e;
  /* 1183379c call eax */
  call_ind((uint32_t)(EAX), 0x1183379eu);
L_1183379e:;
  /* 1183379e sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118337a1 cmp esi, dword ptr [0x1183fbd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183fbd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118337a7 jae 0x11833796 */
  if (!C.cf) goto L_11833796;
L_118337a9:;
  /* 118337a9 pop esi */
  ESI = (pop32());
L_118337aa:;
  /* 118337aa push 0x1183c048 */
  push32((uint32_t)(0x1183c048u));
  /* 118337af push 0x1183c040 */
  push32((uint32_t)(0x1183c040u));
  /* 118337b4 call 0x118337fc */
  push32(0x118337b9u); f_118337fc();
  /* 118337b9 pop ecx */
  ECX = (pop32());
  /* 118337ba pop ecx */
  ECX = (pop32());
L_118337bb:;
  /* 118337bb push 0x1183c054 */
  push32((uint32_t)(0x1183c054u));
  /* 118337c0 push 0x1183c04c */
  push32((uint32_t)(0x1183c04cu));
  /* 118337c5 call 0x118337fc */
  push32(0x118337cau); f_118337fc();
  /* 118337ca pop ecx */
  ECX = (pop32());
  /* 118337cb pop ecx */
  ECX = (pop32());
  /* 118337cc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118337ce pop ebx */
  EBX = (pop32());
  /* 118337cf je 0x118337d8 */
  if (C.zf) goto L_118337d8;
  /* 118337d1 call 0x118337f3 */
  push32(0x118337d6u); f_118337f3();
  /* 118337d6 pop edi */
  EDI = (pop32());
  /* 118337d7 ret  */
  ESPCHK(0x11833745u, _esp0);
  ESP += 4; return;
L_118337d8:;
  /* 118337d8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118337dc mov dword ptr [0x1183f540], edi */
  w32((uint32_t)(0x1183f540), (EDI));
  /* 118337e2 call dword ptr [0x1183a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0f4))), 0x118337e8u);
  /* 118337e8 pop edi */
  EDI = (pop32());
  /* 118337e9 ret  */
  ESPCHK(0x11833745u, _esp0);
  ESP += 4; return;
}

/* FUN_100037ea @ 0x118337ea (9 bytes, 4 insns) */
void f_118337ea(void) {
  FTRACE(0x118337eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118337ea push 0xd */
  push32((uint32_t)(0xdu));
  /* 118337ec call 0x11834436 */
  push32(0x118337f1u); f_11834436();
  /* 118337f1 pop ecx */
  ECX = (pop32());
  /* 118337f2 ret  */
  ESPCHK(0x118337eau, _esp0);
  ESP += 4; return;
}

/* FUN_100037f3 @ 0x118337f3 (9 bytes, 4 insns) */
void f_118337f3(void) {
  FTRACE(0x118337f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118337f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 118337f5 call 0x11834497 */
  push32(0x118337fau); f_11834497();
  /* 118337fa pop ecx */
  ECX = (pop32());
  /* 118337fb ret  */
  ESPCHK(0x118337f3u, _esp0);
  ESP += 4; return;
}

/* FUN_100037fc @ 0x118337fc (26 bytes, 12 insns) */
void f_118337fc(void) {
  FTRACE(0x118337fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118337fc push esi */
  push32((uint32_t)(ESI));
  /* 118337fd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11833801:;
  /* 11833801 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833805 jae 0x11833814 */
  if (!C.cf) goto L_11833814;
  /* 11833807 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11833809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183380b je 0x1183380f */
  if (C.zf) goto L_1183380f;
  /* 1183380d call eax */
  call_ind((uint32_t)(EAX), 0x1183380fu);
L_1183380f:;
  /* 1183380f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833812 jmp 0x11833801 */
  goto L_11833801;
L_11833814:;
  /* 11833814 pop esi */
  ESI = (pop32());
  /* 11833815 ret  */
  ESPCHK(0x118337fcu, _esp0);
  ESP += 4; return;
}

/* FUN_10003816 @ 0x11833816 (444 bytes, 150 insns) */
void f_11833816(void) {
  FTRACE(0x11833816u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833816 push ebp */
  push32((uint32_t)(EBP));
  /* 11833817 mov ebp, esp */
  EBP = (ESP);
  /* 11833819 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183381c push ebx */
  push32((uint32_t)(EBX));
  /* 1183381d push esi */
  push32((uint32_t)(ESI));
  /* 1183381e push edi */
  push32((uint32_t)(EDI));
  /* 1183381f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11833824 call 0x11832d7d */
  push32(0x11833829u); f_11832d7d();
  /* 11833829 mov esi, eax */
  ESI = (EAX);
  /* 1183382b pop ecx */
  ECX = (pop32());
  /* 1183382c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1183382e jne 0x11833838 */
  if (!C.zf) goto L_11833838;
  /* 11833830 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11833832 call 0x1183295e */
  push32(0x11833837u); f_1183295e();
  /* 11833837 pop ecx */
  ECX = (pop32());
L_11833838:;
  /* 11833838 mov dword ptr [0x1183fac0], esi */
  w32((uint32_t)(0x1183fac0), (ESI));
  /* 1183383e mov dword ptr [0x1183fbc0], 0x20 */
  w32((uint32_t)(0x1183fbc0), (0x20u));
  /* 11833848 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_1183384e:;
  /* 1183384e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833850 jae 0x11833870 */
  if (!C.cf) goto L_11833870;
  /* 11833852 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11833856 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11833859 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1183385d mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11833861 mov eax, dword ptr [0x1183fac0] */
  EAX = (r32((uint32_t)(0x1183fac0)));
  /* 11833866 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833869 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183386e jmp 0x1183384e */
  goto L_1183384e;
L_11833870:;
  /* 11833870 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11833873 push eax */
  push32((uint32_t)(EAX));
  /* 11833874 call dword ptr [0x1183a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a08c))), 0x1183387au);
  /* 1183387a cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183387f je 0x11833956 */
  if (C.zf) goto L_11833956;
  /* 11833885 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11833888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183388a je 0x11833956 */
  if (C.zf) goto L_11833956;
  /* 11833890 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11833892 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11833895 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11833898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1183389b mov eax, 0x800 */
  EAX = (0x800u);
  /* 118338a0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118338a2 jl 0x118338a6 */
  if ((C.sf!=C.of)) goto L_118338a6;
  /* 118338a4 mov edi, eax */
  EDI = (EAX);
L_118338a6:;
  /* 118338a6 cmp dword ptr [0x1183fbc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118338ac jge 0x11833904 */
  if ((C.sf==C.of)) goto L_11833904;
  /* 118338ae mov esi, 0x1183fac4 */
  ESI = (0x1183fac4u);
L_118338b3:;
  /* 118338b3 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 118338b8 call 0x11832d7d */
  push32(0x118338bdu); f_11832d7d();
  /* 118338bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118338bf pop ecx */
  ECX = (pop32());
  /* 118338c0 je 0x118338fe */
  if (C.zf) goto L_118338fe;
  /* 118338c2 add dword ptr [0x1183fbc0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1183fbc0), (_r)); fl_add(_a,_b,_r,32); }
  /* 118338c9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118338cb lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_118338d1:;
  /* 118338d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118338d3 jae 0x118338f1 */
  if (!C.cf) goto L_118338f1;
  /* 118338d5 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 118338d9 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118338dc and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118338e0 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 118338e4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118338e6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118338e9 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118338ef jmp 0x118338d1 */
  goto L_118338d1;
L_118338f1:;
  /* 118338f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118338f4 cmp dword ptr [0x1183fbc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118338fa jl 0x118338b3 */
  if ((C.sf!=C.of)) goto L_118338b3;
  /* 118338fc jmp 0x11833904 */
  goto L_11833904;
L_118338fe:;
  /* 118338fe mov edi, dword ptr [0x1183fbc0] */
  EDI = (r32((uint32_t)(0x1183fbc0)));
L_11833904:;
  /* 11833904 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11833906 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833908 jle 0x11833956 */
  if ((C.zf||C.sf!=C.of)) goto L_11833956;
L_1183390a:;
  /* 1183390a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1183390d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1183390f cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833912 je 0x1183394c */
  if (C.zf) goto L_1183394c;
  /* 11833914 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11833916 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11833918 je 0x1183394c */
  if (C.zf) goto L_1183394c;
  /* 1183391a test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1183391c jne 0x11833929 */
  if (!C.zf) goto L_11833929;
  /* 1183391e push ecx */
  push32((uint32_t)(ECX));
  /* 1183391f call dword ptr [0x1183a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a09c))), 0x11833925u);
  /* 11833925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833927 je 0x1183394c */
  if (C.zf) goto L_1183394c;
L_11833929:;
  /* 11833929 mov ecx, esi */
  ECX = (ESI);
  /* 1183392b mov eax, esi */
  EAX = (ESI);
  /* 1183392d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11833930 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11833933 mov ecx, dword ptr [ecx*4 + 0x1183fac0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1183fac0)));
  /* 1183393a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1183393d lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11833940 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11833943 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11833945 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11833947 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11833949 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_1183394c:;
  /* 1183394c add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11833950 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11833951 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11833952 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833954 jl 0x1183390a */
  if ((C.sf!=C.of)) goto L_1183390a;
L_11833956:;
  /* 11833956 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11833958:;
  /* 11833958 mov ecx, dword ptr [0x1183fac0] */
  ECX = (r32((uint32_t)(0x1183fac0)));
  /* 1183395e lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11833961 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833965 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11833968 jne 0x118339b7 */
  if (!C.zf) goto L_118339b7;
  /* 1183396a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1183396c mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11833970 jne 0x11833977 */
  if (!C.zf) goto L_11833977;
  /* 11833972 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11833974 pop eax */
  EAX = (pop32());
  /* 11833975 jmp 0x11833981 */
  goto L_11833981;
L_11833977:;
  /* 11833977 mov eax, ebx */
  EAX = (EBX);
  /* 11833979 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1183397a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1183397c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183397e add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11833981:;
  /* 11833981 push eax */
  push32((uint32_t)(EAX));
  /* 11833982 call dword ptr [0x1183a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a094))), 0x11833988u);
  /* 11833988 mov edi, eax */
  EDI = (EAX);
  /* 1183398a cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183398d je 0x118339a6 */
  if (C.zf) goto L_118339a6;
  /* 1183398f push edi */
  push32((uint32_t)(EDI));
  /* 11833990 call dword ptr [0x1183a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a09c))), 0x11833996u);
  /* 11833996 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833998 je 0x118339a6 */
  if (C.zf) goto L_118339a6;
  /* 1183399a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1183399f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118339a1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118339a4 jne 0x118339ac */
  if (!C.zf) goto L_118339ac;
L_118339a6:;
  /* 118339a6 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118339aa jmp 0x118339bb */
  goto L_118339bb;
L_118339ac:;
  /* 118339ac cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118339af jne 0x118339bb */
  if (!C.zf) goto L_118339bb;
  /* 118339b1 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 118339b5 jmp 0x118339bb */
  goto L_118339bb;
L_118339b7:;
  /* 118339b7 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_118339bb:;
  /* 118339bb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118339bc cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118339bf jl 0x11833958 */
  if ((C.sf!=C.of)) goto L_11833958;
  /* 118339c1 push dword ptr [0x1183fbc0] */
  push32((uint32_t)(r32((uint32_t)(0x1183fbc0))));
  /* 118339c7 call dword ptr [0x1183a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a098))), 0x118339cdu);
  /* 118339cd pop edi */
  EDI = (pop32());
  /* 118339ce pop esi */
  ESI = (pop32());
  /* 118339cf pop ebx */
  EBX = (pop32());
  /* 118339d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118339d1 ret  */
  ESPCHK(0x11833816u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d2 @ 0x118339d2 (84 bytes, 33 insns) */
void f_118339d2(void) {
  FTRACE(0x118339d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118339d2 push ebx */
  push32((uint32_t)(EBX));
  /* 118339d3 push esi */
  push32((uint32_t)(ESI));
  /* 118339d4 push edi */
  push32((uint32_t)(EDI));
  /* 118339d5 mov esi, 0x1183fac0 */
  ESI = (0x1183fac0u);
L_118339da:;
  /* 118339da mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118339dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118339de je 0x11833a17 */
  if (C.zf) goto L_11833a17;
  /* 118339e0 mov edi, eax */
  EDI = (EAX);
  /* 118339e2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118339e7 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118339e9 jae 0x11833a0c */
  if (!C.cf) goto L_11833a0c;
  /* 118339eb lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_118339ee:;
  /* 118339ee cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118339f2 je 0x118339fb */
  if (C.zf) goto L_118339fb;
  /* 118339f4 push ebx */
  push32((uint32_t)(EBX));
  /* 118339f5 call dword ptr [0x1183a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a088))), 0x118339fbu);
L_118339fb:;
  /* 118339fb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118339fd add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833a00 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833a05 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833a08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833a0a jb 0x118339ee */
  if (C.cf) goto L_118339ee;
L_11833a0c:;
  /* 11833a0c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11833a0e call 0x11832bdf */
  push32(0x11833a13u); f_11832bdf();
  /* 11833a13 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11833a16 pop ecx */
  ECX = (pop32());
L_11833a17:;
  /* 11833a17 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833a1a cmp esi, 0x1183fbc0 */
  { uint32_t _a=(ESI),_b=(0x1183fbc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833a20 jl 0x118339da */
  if ((C.sf!=C.of)) goto L_118339da;
  /* 11833a22 pop edi */
  EDI = (pop32());
  /* 11833a23 pop esi */
  ESI = (pop32());
  /* 11833a24 pop ebx */
  EBX = (pop32());
  /* 11833a25 ret  */
  ESPCHK(0x118339d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a26 @ 0x11833a26 (185 bytes, 71 insns) */
void f_11833a26(void) {
  FTRACE(0x11833a26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11833a27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11833a29 cmp dword ptr [0x1183fbc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833a2f push esi */
  push32((uint32_t)(ESI));
  /* 11833a30 push edi */
  push32((uint32_t)(EDI));
  /* 11833a31 jne 0x11833a38 */
  if (!C.zf) goto L_11833a38;
  /* 11833a33 call 0x118375cd */
  push32(0x11833a38u); f_118375cd();
L_11833a38:;
  /* 11833a38 mov esi, dword ptr [0x1183f4e4] */
  ESI = (r32((uint32_t)(0x1183f4e4)));
  /* 11833a3e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11833a40:;
  /* 11833a40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11833a42 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833a44 je 0x11833a58 */
  if (C.zf) goto L_11833a58;
  /* 11833a46 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833a48 je 0x11833a4b */
  if (C.zf) goto L_11833a4b;
  /* 11833a4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11833a4b:;
  /* 11833a4b push esi */
  push32((uint32_t)(ESI));
  /* 11833a4c call 0x11836bc0 */
  push32(0x11833a51u); f_11836bc0();
  /* 11833a51 pop ecx */
  ECX = (pop32());
  /* 11833a52 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11833a56 jmp 0x11833a40 */
  goto L_11833a40;
L_11833a58:;
  /* 11833a58 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11833a5f push eax */
  push32((uint32_t)(EAX));
  /* 11833a60 call 0x11832d7d */
  push32(0x11833a65u); f_11832d7d();
  /* 11833a65 mov esi, eax */
  ESI = (EAX);
  /* 11833a67 pop ecx */
  ECX = (pop32());
  /* 11833a68 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833a6a mov dword ptr [0x1183f520], esi */
  w32((uint32_t)(0x1183f520), (ESI));
  /* 11833a70 jne 0x11833a7a */
  if (!C.zf) goto L_11833a7a;
  /* 11833a72 push 9 */
  push32((uint32_t)(0x9u));
  /* 11833a74 call 0x1183295e */
  push32(0x11833a79u); f_1183295e();
  /* 11833a79 pop ecx */
  ECX = (pop32());
L_11833a7a:;
  /* 11833a7a mov edi, dword ptr [0x1183f4e4] */
  EDI = (r32((uint32_t)(0x1183f4e4)));
  /* 11833a80 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833a82 je 0x11833abd */
  if (C.zf) goto L_11833abd;
  /* 11833a84 push ebp */
  push32((uint32_t)(EBP));
L_11833a85:;
  /* 11833a85 push edi */
  push32((uint32_t)(EDI));
  /* 11833a86 call 0x11836bc0 */
  push32(0x11833a8bu); f_11836bc0();
  /* 11833a8b mov ebp, eax */
  EBP = (EAX);
  /* 11833a8d pop ecx */
  ECX = (pop32());
  /* 11833a8e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11833a8f cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833a92 je 0x11833ab6 */
  if (C.zf) goto L_11833ab6;
  /* 11833a94 push ebp */
  push32((uint32_t)(EBP));
  /* 11833a95 call 0x11832d7d */
  push32(0x11833a9au); f_11832d7d();
  /* 11833a9a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833a9c pop ecx */
  ECX = (pop32());
  /* 11833a9d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11833a9f jne 0x11833aa9 */
  if (!C.zf) goto L_11833aa9;
  /* 11833aa1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11833aa3 call 0x1183295e */
  push32(0x11833aa8u); f_1183295e();
  /* 11833aa8 pop ecx */
  ECX = (pop32());
L_11833aa9:;
  /* 11833aa9 push edi */
  push32((uint32_t)(EDI));
  /* 11833aaa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11833aac call 0x11836a70 */
  push32(0x11833ab1u); f_11836a70();
  /* 11833ab1 pop ecx */
  ECX = (pop32());
  /* 11833ab2 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833ab5 pop ecx */
  ECX = (pop32());
L_11833ab6:;
  /* 11833ab6 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833ab8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833aba jne 0x11833a85 */
  if (!C.zf) goto L_11833a85;
  /* 11833abc pop ebp */
  EBP = (pop32());
L_11833abd:;
  /* 11833abd push dword ptr [0x1183f4e4] */
  push32((uint32_t)(r32((uint32_t)(0x1183f4e4))));
  /* 11833ac3 call 0x11832bdf */
  push32(0x11833ac8u); f_11832bdf();
  /* 11833ac8 pop ecx */
  ECX = (pop32());
  /* 11833ac9 mov dword ptr [0x1183f4e4], ebx */
  w32((uint32_t)(0x1183f4e4), (EBX));
  /* 11833acf mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11833ad1 pop edi */
  EDI = (pop32());
  /* 11833ad2 pop esi */
  ESI = (pop32());
  /* 11833ad3 mov dword ptr [0x1183fbc4], 1 */
  w32((uint32_t)(0x1183fbc4), (0x1u));
  /* 11833add pop ebx */
  EBX = (pop32());
  /* 11833ade ret  */
  ESPCHK(0x11833a26u, _esp0);
  ESP += 4; return;
}

/* FUN_10003adf @ 0x11833adf (153 bytes, 62 insns) */
void f_11833adf(void) {
  FTRACE(0x11833adfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833adf push ebp */
  push32((uint32_t)(EBP));
  /* 11833ae0 mov ebp, esp */
  EBP = (ESP);
  /* 11833ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 11833ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 11833ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 11833ae5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11833ae7 cmp dword ptr [0x1183fbc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183fbc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833aed push esi */
  push32((uint32_t)(ESI));
  /* 11833aee push edi */
  push32((uint32_t)(EDI));
  /* 11833aef jne 0x11833af6 */
  if (!C.zf) goto L_11833af6;
  /* 11833af1 call 0x118375cd */
  push32(0x11833af6u); f_118375cd();
L_11833af6:;
  /* 11833af6 mov esi, 0x1183f544 */
  ESI = (0x1183f544u);
  /* 11833afb push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11833b00 push esi */
  push32((uint32_t)(ESI));
  /* 11833b01 push ebx */
  push32((uint32_t)(EBX));
  /* 11833b02 call dword ptr [0x1183a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a090))), 0x11833b08u);
  /* 11833b08 mov eax, dword ptr [0x11840be4] */
  EAX = (r32((uint32_t)(0x11840be4)));
  /* 11833b0d mov dword ptr [0x1183f530], esi */
  w32((uint32_t)(0x1183f530), (ESI));
  /* 11833b13 mov edi, esi */
  EDI = (ESI);
  /* 11833b15 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833b17 je 0x11833b1b */
  if (C.zf) goto L_11833b1b;
  /* 11833b19 mov edi, eax */
  EDI = (EAX);
L_11833b1b:;
  /* 11833b1b lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11833b1e push eax */
  push32((uint32_t)(EAX));
  /* 11833b1f lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11833b22 push eax */
  push32((uint32_t)(EAX));
  /* 11833b23 push ebx */
  push32((uint32_t)(EBX));
  /* 11833b24 push ebx */
  push32((uint32_t)(EBX));
  /* 11833b25 push edi */
  push32((uint32_t)(EDI));
  /* 11833b26 call 0x11833b78 */
  push32(0x11833b2bu); f_11833b78();
  /* 11833b2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11833b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11833b31 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11833b34 push eax */
  push32((uint32_t)(EAX));
  /* 11833b35 call 0x11832d7d */
  push32(0x11833b3au); f_11832d7d();
  /* 11833b3a mov esi, eax */
  ESI = (EAX);
  /* 11833b3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833b3f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833b41 jne 0x11833b4b */
  if (!C.zf) goto L_11833b4b;
  /* 11833b43 push 8 */
  push32((uint32_t)(0x8u));
  /* 11833b45 call 0x1183295e */
  push32(0x11833b4au); f_1183295e();
  /* 11833b4a pop ecx */
  ECX = (pop32());
L_11833b4b:;
  /* 11833b4b lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11833b4e push eax */
  push32((uint32_t)(EAX));
  /* 11833b4f lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11833b52 push eax */
  push32((uint32_t)(EAX));
  /* 11833b53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11833b56 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11833b59 push eax */
  push32((uint32_t)(EAX));
  /* 11833b5a push esi */
  push32((uint32_t)(ESI));
  /* 11833b5b push edi */
  push32((uint32_t)(EDI));
  /* 11833b5c call 0x11833b78 */
  push32(0x11833b61u); f_11833b78();
  /* 11833b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11833b64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833b67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11833b68 mov dword ptr [0x1183f518], esi */
  w32((uint32_t)(0x1183f518), (ESI));
  /* 11833b6e pop edi */
  EDI = (pop32());
  /* 11833b6f pop esi */
  ESI = (pop32());
  /* 11833b70 mov dword ptr [0x1183f514], eax */
  w32((uint32_t)(0x1183f514), (EAX));
  /* 11833b75 pop ebx */
  EBX = (pop32());
  /* 11833b76 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11833b77 ret  */
  ESPCHK(0x11833adfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b78 @ 0x11833b78 (436 bytes, 187 insns) */
void f_11833b78(void) {
  FTRACE(0x11833b78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833b78 push ebp */
  push32((uint32_t)(EBP));
  /* 11833b79 mov ebp, esp */
  EBP = (ESP);
  /* 11833b7b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11833b7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11833b81 push ebx */
  push32((uint32_t)(EBX));
  /* 11833b82 push esi */
  push32((uint32_t)(ESI));
  /* 11833b83 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11833b86 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11833b89 push edi */
  push32((uint32_t)(EDI));
  /* 11833b8a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11833b8d mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11833b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11833b96 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833b98 je 0x11833ba2 */
  if (C.zf) goto L_11833ba2;
  /* 11833b9a mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11833b9c add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833b9f mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11833ba2:;
  /* 11833ba2 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833ba5 jne 0x11833beb */
  if (!C.zf) goto L_11833beb;
L_11833ba7:;
  /* 11833ba7 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11833baa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833bab cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833bae je 0x11833bd9 */
  if (C.zf) goto L_11833bd9;
  /* 11833bb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11833bb2 je 0x11833bd9 */
  if (C.zf) goto L_11833bd9;
  /* 11833bb4 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11833bb7 test byte ptr [edx + 0x1183f981], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1183f981)))&(0x4u); fl_logic(_r,8); }
  /* 11833bbe je 0x11833bcc */
  if (C.zf) goto L_11833bcc;
  /* 11833bc0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833bc2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833bc4 je 0x11833bcc */
  if (C.zf) goto L_11833bcc;
  /* 11833bc6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833bc8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11833bca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11833bcb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11833bcc:;
  /* 11833bcc inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833bce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833bd0 je 0x11833ba7 */
  if (C.zf) goto L_11833ba7;
  /* 11833bd2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833bd4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11833bd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11833bd7 jmp 0x11833ba7 */
  goto L_11833ba7;
L_11833bd9:;
  /* 11833bd9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833bdb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833bdd je 0x11833be3 */
  if (C.zf) goto L_11833be3;
  /* 11833bdf and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11833be2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11833be3:;
  /* 11833be3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833be6 jne 0x11833c2e */
  if (!C.zf) goto L_11833c2e;
  /* 11833be8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833be9 jmp 0x11833c2e */
  goto L_11833c2e;
L_11833beb:;
  /* 11833beb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833bed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833bef je 0x11833bf6 */
  if (C.zf) goto L_11833bf6;
  /* 11833bf1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833bf3 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11833bf5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11833bf6:;
  /* 11833bf6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833bf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833bf9 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11833bfc test byte ptr [ebx + 0x1183f981], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1183f981)))&(0x4u); fl_logic(_r,8); }
  /* 11833c03 je 0x11833c11 */
  if (C.zf) goto L_11833c11;
  /* 11833c05 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833c07 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833c09 je 0x11833c10 */
  if (C.zf) goto L_11833c10;
  /* 11833c0b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11833c0d mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11833c0f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11833c10:;
  /* 11833c10 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11833c11:;
  /* 11833c11 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c14 je 0x11833c1f */
  if (C.zf) goto L_11833c1f;
  /* 11833c16 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11833c18 je 0x11833c23 */
  if (C.zf) goto L_11833c23;
  /* 11833c1a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c1d jne 0x11833beb */
  if (!C.zf) goto L_11833beb;
L_11833c1f:;
  /* 11833c1f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11833c21 jne 0x11833c26 */
  if (!C.zf) goto L_11833c26;
L_11833c23:;
  /* 11833c23 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11833c24 jmp 0x11833c2e */
  goto L_11833c2e;
L_11833c26:;
  /* 11833c26 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833c28 je 0x11833c2e */
  if (C.zf) goto L_11833c2e;
  /* 11833c2a and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11833c2e:;
  /* 11833c2e and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11833c32:;
  /* 11833c32 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c35 je 0x11833d1b */
  if (C.zf) goto L_11833d1b;
L_11833c3b:;
  /* 11833c3b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833c3d cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c40 je 0x11833c47 */
  if (C.zf) goto L_11833c47;
  /* 11833c42 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c45 jne 0x11833c4a */
  if (!C.zf) goto L_11833c4a;
L_11833c47:;
  /* 11833c47 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833c48 jmp 0x11833c3b */
  goto L_11833c3b;
L_11833c4a:;
  /* 11833c4a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c4d je 0x11833d1b */
  if (C.zf) goto L_11833d1b;
  /* 11833c53 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833c55 je 0x11833c5f */
  if (C.zf) goto L_11833c5f;
  /* 11833c57 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11833c59 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11833c5c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11833c5f:;
  /* 11833c5f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11833c62 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11833c64:;
  /* 11833c64 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11833c6b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11833c6d:;
  /* 11833c6d cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c70 jne 0x11833c76 */
  if (!C.zf) goto L_11833c76;
  /* 11833c72 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833c73 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11833c74 jmp 0x11833c6d */
  goto L_11833c6d;
L_11833c76:;
  /* 11833c76 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c79 jne 0x11833ca7 */
  if (!C.zf) goto L_11833ca7;
  /* 11833c7b test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11833c7e jne 0x11833ca5 */
  if (!C.zf) goto L_11833ca5;
  /* 11833c80 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11833c82 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833c85 je 0x11833c94 */
  if (C.zf) goto L_11833c94;
  /* 11833c87 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833c8b lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11833c8e jne 0x11833c94 */
  if (!C.zf) goto L_11833c94;
  /* 11833c90 mov eax, edx */
  EAX = (EDX);
  /* 11833c92 jmp 0x11833c97 */
  goto L_11833c97;
L_11833c94:;
  /* 11833c94 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11833c97:;
  /* 11833c97 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11833c9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11833c9c cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833c9f sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11833ca2 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11833ca5:;
  /* 11833ca5 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11833ca7:;
  /* 11833ca7 mov edx, ebx */
  EDX = (EBX);
  /* 11833ca9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11833caa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11833cac je 0x11833cbc */
  if (C.zf) goto L_11833cbc;
  /* 11833cae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11833caf:;
  /* 11833caf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833cb1 je 0x11833cb7 */
  if (C.zf) goto L_11833cb7;
  /* 11833cb3 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11833cb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11833cb7:;
  /* 11833cb7 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833cb9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11833cba jne 0x11833caf */
  if (!C.zf) goto L_11833caf;
L_11833cbc:;
  /* 11833cbc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833cbe test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11833cc0 je 0x11833d0c */
  if (C.zf) goto L_11833d0c;
  /* 11833cc2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833cc6 jne 0x11833cd2 */
  if (!C.zf) goto L_11833cd2;
  /* 11833cc8 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833ccb je 0x11833d0c */
  if (C.zf) goto L_11833d0c;
  /* 11833ccd cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833cd0 je 0x11833d0c */
  if (C.zf) goto L_11833d0c;
L_11833cd2:;
  /* 11833cd2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833cd6 je 0x11833d06 */
  if (C.zf) goto L_11833d06;
  /* 11833cd8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833cda je 0x11833cf5 */
  if (C.zf) goto L_11833cf5;
  /* 11833cdc movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11833cdf test byte ptr [ebx + 0x1183f981], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1183f981)))&(0x4u); fl_logic(_r,8); }
  /* 11833ce6 je 0x11833cee */
  if (C.zf) goto L_11833cee;
  /* 11833ce8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11833cea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11833ceb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833cec inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11833cee:;
  /* 11833cee mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11833cf0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11833cf2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11833cf3 jmp 0x11833d04 */
  goto L_11833d04;
L_11833cf5:;
  /* 11833cf5 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11833cf8 test byte ptr [edx + 0x1183f981], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1183f981)))&(0x4u); fl_logic(_r,8); }
  /* 11833cff je 0x11833d04 */
  if (C.zf) goto L_11833d04;
  /* 11833d01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833d02 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11833d04:;
  /* 11833d04 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11833d06:;
  /* 11833d06 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833d07 jmp 0x11833c64 */
  goto L_11833c64;
L_11833d0c:;
  /* 11833d0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11833d0e je 0x11833d14 */
  if (C.zf) goto L_11833d14;
  /* 11833d10 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11833d13 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11833d14:;
  /* 11833d14 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11833d16 jmp 0x11833c32 */
  goto L_11833c32;
L_11833d1b:;
  /* 11833d1b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11833d1d je 0x11833d22 */
  if (C.zf) goto L_11833d22;
  /* 11833d1f and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11833d22:;
  /* 11833d22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11833d25 pop edi */
  EDI = (pop32());
  /* 11833d26 pop esi */
  ESI = (pop32());
  /* 11833d27 pop ebx */
  EBX = (pop32());
  /* 11833d28 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11833d2a pop ebp */
  EBP = (pop32());
  /* 11833d2b ret  */
  ESPCHK(0x11833b78u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d2c @ 0x11833d2c (306 bytes, 132 insns) */
void f_11833d2c(void) {
  FTRACE(0x11833d2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833d2c push ecx */
  push32((uint32_t)(ECX));
  /* 11833d2d push ecx */
  push32((uint32_t)(ECX));
  /* 11833d2e mov eax, dword ptr [0x1183f648] */
  EAX = (r32((uint32_t)(0x1183f648)));
  /* 11833d33 push ebx */
  push32((uint32_t)(EBX));
  /* 11833d34 push ebp */
  push32((uint32_t)(EBP));
  /* 11833d35 mov ebp, dword ptr [0x1183a070] */
  EBP = (r32((uint32_t)(0x1183a070)));
  /* 11833d3b push esi */
  push32((uint32_t)(ESI));
  /* 11833d3c push edi */
  push32((uint32_t)(EDI));
  /* 11833d3d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11833d3f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11833d41 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11833d43 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833d45 jne 0x11833d7a */
  if (!C.zf) goto L_11833d7a;
  /* 11833d47 call ebp */
  call_ind((uint32_t)(EBP), 0x11833d49u);
  /* 11833d49 mov esi, eax */
  ESI = (EAX);
  /* 11833d4b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833d4d je 0x11833d5b */
  if (C.zf) goto L_11833d5b;
  /* 11833d4f mov dword ptr [0x1183f648], 1 */
  w32((uint32_t)(0x1183f648), (0x1u));
  /* 11833d59 jmp 0x11833d83 */
  goto L_11833d83;
L_11833d5b:;
  /* 11833d5b call dword ptr [0x1183a074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a074))), 0x11833d61u);
  /* 11833d61 mov edi, eax */
  EDI = (EAX);
  /* 11833d63 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833d65 je 0x11833e55 */
  if (C.zf) goto L_11833e55;
  /* 11833d6b mov dword ptr [0x1183f648], 2 */
  w32((uint32_t)(0x1183f648), (0x2u));
  /* 11833d75 jmp 0x11833e09 */
  goto L_11833e09;
L_11833d7a:;
  /* 11833d7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833d7d jne 0x11833e04 */
  if (!C.zf) goto L_11833e04;
L_11833d83:;
  /* 11833d83 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833d85 jne 0x11833d93 */
  if (!C.zf) goto L_11833d93;
  /* 11833d87 call ebp */
  call_ind((uint32_t)(EBP), 0x11833d89u);
  /* 11833d89 mov esi, eax */
  ESI = (EAX);
  /* 11833d8b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833d8d je 0x11833e55 */
  if (C.zf) goto L_11833e55;
L_11833d93:;
  /* 11833d93 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11833d96 mov eax, esi */
  EAX = (ESI);
  /* 11833d98 je 0x11833da8 */
  if (C.zf) goto L_11833da8;
L_11833d9a:;
  /* 11833d9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833d9b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833d9c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11833d9f jne 0x11833d9a */
  if (!C.zf) goto L_11833d9a;
  /* 11833da1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833da2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833da3 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11833da6 jne 0x11833d9a */
  if (!C.zf) goto L_11833d9a;
L_11833da8:;
  /* 11833da8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833daa mov edi, dword ptr [0x1183a084] */
  EDI = (r32((uint32_t)(0x1183a084)));
  /* 11833db0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11833db2 push ebx */
  push32((uint32_t)(EBX));
  /* 11833db3 push ebx */
  push32((uint32_t)(EBX));
  /* 11833db4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833db5 push ebx */
  push32((uint32_t)(EBX));
  /* 11833db6 push ebx */
  push32((uint32_t)(EBX));
  /* 11833db7 push eax */
  push32((uint32_t)(EAX));
  /* 11833db8 push esi */
  push32((uint32_t)(ESI));
  /* 11833db9 push ebx */
  push32((uint32_t)(EBX));
  /* 11833dba push ebx */
  push32((uint32_t)(EBX));
  /* 11833dbb mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11833dbf call edi */
  call_ind((uint32_t)(EDI), 0x11833dc1u);
  /* 11833dc1 mov ebp, eax */
  EBP = (EAX);
  /* 11833dc3 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833dc5 je 0x11833df9 */
  if (C.zf) goto L_11833df9;
  /* 11833dc7 push ebp */
  push32((uint32_t)(EBP));
  /* 11833dc8 call 0x11832d7d */
  push32(0x11833dcdu); f_11832d7d();
  /* 11833dcd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833dcf pop ecx */
  ECX = (pop32());
  /* 11833dd0 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11833dd4 je 0x11833df9 */
  if (C.zf) goto L_11833df9;
  /* 11833dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11833dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11833dd8 push ebp */
  push32((uint32_t)(EBP));
  /* 11833dd9 push eax */
  push32((uint32_t)(EAX));
  /* 11833dda push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11833dde push esi */
  push32((uint32_t)(ESI));
  /* 11833ddf push ebx */
  push32((uint32_t)(EBX));
  /* 11833de0 push ebx */
  push32((uint32_t)(EBX));
  /* 11833de1 call edi */
  call_ind((uint32_t)(EDI), 0x11833de3u);
  /* 11833de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833de5 jne 0x11833df5 */
  if (!C.zf) goto L_11833df5;
  /* 11833de7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11833deb call 0x11832bdf */
  push32(0x11833df0u); f_11832bdf();
  /* 11833df0 pop ecx */
  ECX = (pop32());
  /* 11833df1 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11833df5:;
  /* 11833df5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11833df9:;
  /* 11833df9 push esi */
  push32((uint32_t)(ESI));
  /* 11833dfa call dword ptr [0x1183a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a07c))), 0x11833e00u);
  /* 11833e00 mov eax, ebx */
  EAX = (EBX);
  /* 11833e02 jmp 0x11833e57 */
  goto L_11833e57;
L_11833e04:;
  /* 11833e04 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833e07 jne 0x11833e55 */
  if (!C.zf) goto L_11833e55;
L_11833e09:;
  /* 11833e09 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833e0b jne 0x11833e19 */
  if (!C.zf) goto L_11833e19;
  /* 11833e0d call dword ptr [0x1183a074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a074))), 0x11833e13u);
  /* 11833e13 mov edi, eax */
  EDI = (EAX);
  /* 11833e15 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833e17 je 0x11833e55 */
  if (C.zf) goto L_11833e55;
L_11833e19:;
  /* 11833e19 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833e1b mov eax, edi */
  EAX = (EDI);
  /* 11833e1d je 0x11833e29 */
  if (C.zf) goto L_11833e29;
L_11833e1f:;
  /* 11833e1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833e20 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833e22 jne 0x11833e1f */
  if (!C.zf) goto L_11833e1f;
  /* 11833e24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833e25 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833e27 jne 0x11833e1f */
  if (!C.zf) goto L_11833e1f;
L_11833e29:;
  /* 11833e29 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833e2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833e2c mov ebp, eax */
  EBP = (EAX);
  /* 11833e2e push ebp */
  push32((uint32_t)(EBP));
  /* 11833e2f call 0x11832d7d */
  push32(0x11833e34u); f_11832d7d();
  /* 11833e34 mov esi, eax */
  ESI = (EAX);
  /* 11833e36 pop ecx */
  ECX = (pop32());
  /* 11833e37 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833e39 jne 0x11833e3f */
  if (!C.zf) goto L_11833e3f;
  /* 11833e3b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11833e3d jmp 0x11833e4a */
  goto L_11833e4a;
L_11833e3f:;
  /* 11833e3f push ebp */
  push32((uint32_t)(EBP));
  /* 11833e40 push edi */
  push32((uint32_t)(EDI));
  /* 11833e41 push esi */
  push32((uint32_t)(ESI));
  /* 11833e42 call 0x118375f0 */
  push32(0x11833e47u); f_118375f0();
  /* 11833e47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11833e4a:;
  /* 11833e4a push edi */
  push32((uint32_t)(EDI));
  /* 11833e4b call dword ptr [0x1183a080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a080))), 0x11833e51u);
  /* 11833e51 mov eax, esi */
  EAX = (ESI);
  /* 11833e53 jmp 0x11833e57 */
  goto L_11833e57;
L_11833e55:;
  /* 11833e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11833e57:;
  /* 11833e57 pop edi */
  EDI = (pop32());
  /* 11833e58 pop esi */
  ESI = (pop32());
  /* 11833e59 pop ebp */
  EBP = (pop32());
  /* 11833e5a pop ebx */
  EBX = (pop32());
  /* 11833e5b pop ecx */
  ECX = (pop32());
  /* 11833e5c pop ecx */
  ECX = (pop32());
  /* 11833e5d ret  */
  ESPCHK(0x11833d2cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e5e @ 0x11833e5e (45 bytes, 17 insns) */
void f_11833e5e(void) {
  FTRACE(0x11833e5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833e5e push esi */
  push32((uint32_t)(ESI));
  /* 11833e5f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11833e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11833e65 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11833e68 call dword ptr [0x1183a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d0))), 0x11833e6eu);
  /* 11833e6e cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11833e73 jne 0x11833e89 */
  if (!C.zf) goto L_11833e89;
  /* 11833e75 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11833e78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11833e7a je 0x11833e89 */
  if (C.zf) goto L_11833e89;
  /* 11833e7c add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11833e7e mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11833e81 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11833e83 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11833e86 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11833e89:;
  /* 11833e89 pop esi */
  ESI = (pop32());
  /* 11833e8a ret  */
  ESPCHK(0x11833e5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e8b @ 0x11833e8b (328 bytes, 115 insns) */
void f_11833e8b(void) {
  FTRACE(0x11833e8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833e8b push ebp */
  push32((uint32_t)(EBP));
  /* 11833e8c mov ebp, esp */
  EBP = (ESP);
  /* 11833e8e mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11833e93 call 0x11837ce0 */
  push32(0x11833e98u); f_11837ce0();
  /* 11833e98 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11833e9e push ebx */
  push32((uint32_t)(EBX));
  /* 11833e9f push eax */
  push32((uint32_t)(EAX));
  /* 11833ea0 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11833eaa call dword ptr [0x1183a068] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a068))), 0x11833eb0u);
  /* 11833eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833eb2 je 0x11833ece */
  if (C.zf) goto L_11833ece;
  /* 11833eb4 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833ebb jne 0x11833ece */
  if (!C.zf) goto L_11833ece;
  /* 11833ebd cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833ec4 jb 0x11833ece */
  if (C.cf) goto L_11833ece;
  /* 11833ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11833ec8 pop eax */
  EAX = (pop32());
  /* 11833ec9 jmp 0x11833fd0 */
  goto L_11833fd0;
L_11833ece:;
  /* 11833ece lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11833ed4 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11833ed9 push eax */
  push32((uint32_t)(EAX));
  /* 11833eda push 0x1183a2fc */
  push32((uint32_t)(0x1183a2fcu));
  /* 11833edf call dword ptr [0x1183a078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a078))), 0x11833ee5u);
  /* 11833ee5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833ee7 je 0x11833fbd */
  if (C.zf) goto L_11833fbd;
  /* 11833eed xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11833eef lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11833ef5 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833efb je 0x11833f10 */
  if (C.zf) goto L_11833f10;
L_11833efd:;
  /* 11833efd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11833eff cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f01 jl 0x11833f0b */
  if ((C.sf!=C.of)) goto L_11833f0b;
  /* 11833f03 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f05 jg 0x11833f0b */
  if ((!C.zf&&C.sf==C.of)) goto L_11833f0b;
  /* 11833f07 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11833f09 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11833f0b:;
  /* 11833f0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11833f0c cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f0e jne 0x11833efd */
  if (!C.zf) goto L_11833efd;
L_11833f10:;
  /* 11833f10 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11833f16 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11833f18 push eax */
  push32((uint32_t)(EAX));
  /* 11833f19 push 0x1183a2e4 */
  push32((uint32_t)(0x1183a2e4u));
  /* 11833f1e call 0x11837ca0 */
  push32(0x11833f23u); f_11837ca0();
  /* 11833f23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833f28 jne 0x11833f32 */
  if (!C.zf) goto L_11833f32;
  /* 11833f2a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11833f30 jmp 0x11833f7b */
  goto L_11833f7b;
L_11833f32:;
  /* 11833f32 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11833f38 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11833f3d push eax */
  push32((uint32_t)(EAX));
  /* 11833f3e push ebx */
  push32((uint32_t)(EBX));
  /* 11833f3f call dword ptr [0x1183a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a090))), 0x11833f45u);
  /* 11833f45 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f4b lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11833f51 je 0x11833f66 */
  if (C.zf) goto L_11833f66;
L_11833f53:;
  /* 11833f53 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11833f55 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f57 jl 0x11833f61 */
  if ((C.sf!=C.of)) goto L_11833f61;
  /* 11833f59 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f5b jg 0x11833f61 */
  if ((!C.zf&&C.sf==C.of)) goto L_11833f61;
  /* 11833f5d sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11833f5f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11833f61:;
  /* 11833f61 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11833f62 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f64 jne 0x11833f53 */
  if (!C.zf) goto L_11833f53;
L_11833f66:;
  /* 11833f66 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11833f6c push eax */
  push32((uint32_t)(EAX));
  /* 11833f6d lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11833f73 push eax */
  push32((uint32_t)(EAX));
  /* 11833f74 call 0x11837c20 */
  push32(0x11833f79u); f_11837c20();
  /* 11833f79 pop ecx */
  ECX = (pop32());
  /* 11833f7a pop ecx */
  ECX = (pop32());
L_11833f7b:;
  /* 11833f7b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833f7d je 0x11833fbd */
  if (C.zf) goto L_11833fbd;
  /* 11833f7f push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11833f81 push eax */
  push32((uint32_t)(EAX));
  /* 11833f82 call 0x11837b60 */
  push32(0x11833f87u); f_11837b60();
  /* 11833f87 pop ecx */
  ECX = (pop32());
  /* 11833f88 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833f8a pop ecx */
  ECX = (pop32());
  /* 11833f8b je 0x11833fbd */
  if (C.zf) goto L_11833fbd;
  /* 11833f8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11833f8e mov ecx, eax */
  ECX = (EAX);
  /* 11833f90 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f92 je 0x11833fa2 */
  if (C.zf) goto L_11833fa2;
L_11833f94:;
  /* 11833f94 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833f97 jne 0x11833f9d */
  if (!C.zf) goto L_11833f9d;
  /* 11833f99 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11833f9b jmp 0x11833f9e */
  goto L_11833f9e;
L_11833f9d:;
  /* 11833f9d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11833f9e:;
  /* 11833f9e cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833fa0 jne 0x11833f94 */
  if (!C.zf) goto L_11833f94;
L_11833fa2:;
  /* 11833fa2 push 0xa */
  push32((uint32_t)(0xau));
  /* 11833fa4 push ebx */
  push32((uint32_t)(EBX));
  /* 11833fa5 push eax */
  push32((uint32_t)(EAX));
  /* 11833fa6 call 0x11837925 */
  push32(0x11833fabu); f_11837925();
  /* 11833fab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11833fae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833fb1 je 0x11833fd0 */
  if (C.zf) goto L_11833fd0;
  /* 11833fb3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833fb6 je 0x11833fd0 */
  if (C.zf) goto L_11833fd0;
  /* 11833fb8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833fbb je 0x11833fd0 */
  if (C.zf) goto L_11833fd0;
L_11833fbd:;
  /* 11833fbd lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11833fc0 push eax */
  push32((uint32_t)(EAX));
  /* 11833fc1 call 0x11833e5e */
  push32(0x11833fc6u); f_11833e5e();
  /* 11833fc6 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11833fca pop ecx */
  ECX = (pop32());
  /* 11833fcb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11833fcd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11833fd0:;
  /* 11833fd0 pop ebx */
  EBX = (pop32());
  /* 11833fd1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11833fd2 ret  */
  ESPCHK(0x11833e8bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd3 @ 0x11833fd3 (93 bytes, 30 insns) */
void f_11833fd3(void) {
  FTRACE(0x11833fd3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11833fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11833fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11833fd7 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833fdb push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11833fe0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11833fe3 push eax */
  push32((uint32_t)(EAX));
  /* 11833fe4 call dword ptr [0x1183a06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a06c))), 0x11833feau);
  /* 11833fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11833fec mov dword ptr [0x1183faa4], eax */
  w32((uint32_t)(0x1183faa4), (EAX));
  /* 11833ff1 je 0x11834029 */
  if (C.zf) goto L_11834029;
  /* 11833ff3 call 0x11833e8b */
  push32(0x11833ff8u); f_11833e8b();
  /* 11833ff8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11833ffb mov dword ptr [0x1183faa8], eax */
  w32((uint32_t)(0x1183faa8), (EAX));
  /* 11834000 jne 0x1183400f */
  if (!C.zf) goto L_1183400f;
  /* 11834002 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11834007 call 0x11834a6e */
  push32(0x1183400cu); f_11834a6e();
  /* 1183400c pop ecx */
  ECX = (pop32());
  /* 1183400d jmp 0x11834019 */
  goto L_11834019;
L_1183400f:;
  /* 1183400f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834012 jne 0x1183402c */
  if (!C.zf) goto L_1183402c;
  /* 11834014 call 0x118355b5 */
  push32(0x11834019u); f_118355b5();
L_11834019:;
  /* 11834019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183401b jne 0x1183402c */
  if (!C.zf) goto L_1183402c;
  /* 1183401d push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11834023 call dword ptr [0x1183a064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a064))), 0x11834029u);
L_11834029:;
  /* 11834029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1183402b ret  */
  ESPCHK(0x11833fd3u, _esp0);
  ESP += 4; return;
L_1183402c:;
  /* 1183402c push 1 */
  push32((uint32_t)(0x1u));
  /* 1183402e pop eax */
  EAX = (pop32());
  /* 1183402f ret  */
  ESPCHK(0x11833fd3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x11834030 (168 bytes, 56 insns) */
void f_11834030(void) {
  FTRACE(0x11834030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834030 mov eax, dword ptr [0x1183faa8] */
  EAX = (r32((uint32_t)(0x1183faa8)));
  /* 11834035 push esi */
  push32((uint32_t)(ESI));
  /* 11834036 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834039 push edi */
  push32((uint32_t)(EDI));
  /* 1183403a jne 0x118340a2 */
  if (!C.zf) goto L_118340a2;
  /* 1183403c push ebx */
  push32((uint32_t)(EBX));
  /* 1183403d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1183403f cmp dword ptr [0x1183fa98], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183fa98))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834045 push ebp */
  push32((uint32_t)(EBP));
  /* 11834046 mov ebp, dword ptr [0x1183a0d4] */
  EBP = (r32((uint32_t)(0x1183a0d4)));
  /* 1183404c jle 0x1183408e */
  if ((C.zf||C.sf!=C.of)) goto L_1183408e;
  /* 1183404e mov eax, dword ptr [0x1183fa9c] */
  EAX = (r32((uint32_t)(0x1183fa9c)));
  /* 11834053 mov edi, dword ptr [0x1183a060] */
  EDI = (r32((uint32_t)(0x1183a060)));
  /* 11834059 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_1183405c:;
  /* 1183405c push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11834061 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11834066 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11834068 call edi */
  call_ind((uint32_t)(EDI), 0x1183406au);
  /* 1183406a push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1183406f push 0 */
  push32((uint32_t)(0x0u));
  /* 11834071 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11834073 call edi */
  call_ind((uint32_t)(EDI), 0x11834075u);
  /* 11834075 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11834078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1183407a push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11834080 call ebp */
  call_ind((uint32_t)(EBP), 0x11834082u);
  /* 11834082 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11834085 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11834086 cmp ebx, dword ptr [0x1183fa98] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1183fa98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183408c jl 0x1183405c */
  if ((C.sf!=C.of)) goto L_1183405c;
L_1183408e:;
  /* 1183408e push dword ptr [0x1183fa9c] */
  push32((uint32_t)(r32((uint32_t)(0x1183fa9c))));
  /* 11834094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11834096 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 1183409c call ebp */
  call_ind((uint32_t)(EBP), 0x1183409eu);
  /* 1183409e pop ebp */
  EBP = (pop32());
  /* 1183409f pop ebx */
  EBX = (pop32());
  /* 118340a0 jmp 0x118340c9 */
  goto L_118340c9;
L_118340a2:;
  /* 118340a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118340a5 jne 0x118340c9 */
  if (!C.zf) goto L_118340c9;
  /* 118340a7 mov edi, 0x1183c8b8 */
  EDI = (0x1183c8b8u);
  /* 118340ac mov esi, edi */
  ESI = (EDI);
L_118340ae:;
  /* 118340ae mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118340b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118340b3 je 0x118340c3 */
  if (C.zf) goto L_118340c3;
  /* 118340b5 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118340ba push 0 */
  push32((uint32_t)(0x0u));
  /* 118340bc push eax */
  push32((uint32_t)(EAX));
  /* 118340bd call dword ptr [0x1183a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a060))), 0x118340c3u);
L_118340c3:;
  /* 118340c3 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 118340c5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118340c7 jne 0x118340ae */
  if (!C.zf) goto L_118340ae;
L_118340c9:;
  /* 118340c9 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 118340cf call dword ptr [0x1183a064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a064))), 0x118340d5u);
  /* 118340d5 pop edi */
  EDI = (pop32());
  /* 118340d6 pop esi */
  ESI = (pop32());
  /* 118340d7 ret  */
  ESPCHK(0x11834030u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d8 @ 0x118340d8 (57 bytes, 18 insns) */
void f_118340d8(void) {
  FTRACE(0x118340d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118340d8 mov eax, dword ptr [0x1183f4ec] */
  EAX = (r32((uint32_t)(0x1183f4ec)));
  /* 118340dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118340e0 je 0x118340ef */
  if (C.zf) goto L_118340ef;
  /* 118340e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118340e4 jne 0x11834110 */
  if (!C.zf) goto L_11834110;
  /* 118340e6 cmp dword ptr [0x1183f4f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183f4f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118340ed jne 0x11834110 */
  if (!C.zf) goto L_11834110;
L_118340ef:;
  /* 118340ef push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 118340f4 call 0x11834111 */
  push32(0x118340f9u); f_11834111();
  /* 118340f9 mov eax, dword ptr [0x1183f64c] */
  EAX = (r32((uint32_t)(0x1183f64c)));
  /* 118340fe pop ecx */
  ECX = (pop32());
  /* 118340ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834101 je 0x11834105 */
  if (C.zf) goto L_11834105;
  /* 11834103 call eax */
  call_ind((uint32_t)(EAX), 0x11834105u);
L_11834105:;
  /* 11834105 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1183410a call 0x11834111 */
  push32(0x1183410fu); f_11834111();
  /* 1183410f pop ecx */
  ECX = (pop32());
L_11834110:;
  /* 11834110 ret  */
  ESPCHK(0x118340d8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004111 @ 0x11834111 (339 bytes, 100 insns) */
void f_11834111(void) {
  FTRACE(0x11834111u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834111 push ebp */
  push32((uint32_t)(EBP));
  /* 11834112 mov ebp, esp */
  EBP = (ESP);
  /* 11834114 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183411a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183411d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1183411f mov eax, 0x1183c5c0 */
  EAX = (0x1183c5c0u);
L_11834124:;
  /* 11834124 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834126 je 0x11834133 */
  if (C.zf) goto L_11834133;
  /* 11834128 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1183412b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1183412c cmp eax, 0x1183c650 */
  { uint32_t _a=(EAX),_b=(0x1183c650u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834131 jl 0x11834124 */
  if ((C.sf!=C.of)) goto L_11834124;
L_11834133:;
  /* 11834133 push esi */
  push32((uint32_t)(ESI));
  /* 11834134 mov esi, ecx */
  ESI = (ECX);
  /* 11834136 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11834139 cmp edx, dword ptr [esi + 0x1183c5c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x1183c5c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183413f jne 0x11834261 */
  if (!C.zf) goto L_11834261;
  /* 11834145 mov eax, dword ptr [0x1183f4ec] */
  EAX = (r32((uint32_t)(0x1183f4ec)));
  /* 1183414a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183414d je 0x1183423b */
  if (C.zf) goto L_1183423b;
  /* 11834153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834155 jne 0x11834164 */
  if (!C.zf) goto L_11834164;
  /* 11834157 cmp dword ptr [0x1183f4f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1183f4f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183415e je 0x1183423b */
  if (C.zf) goto L_1183423b;
L_11834164:;
  /* 11834164 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183416a je 0x11834261 */
  if (C.zf) goto L_11834261;
  /* 11834170 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11834176 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1183417b push eax */
  push32((uint32_t)(EAX));
  /* 1183417c push 0 */
  push32((uint32_t)(0x0u));
  /* 1183417e call dword ptr [0x1183a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a090))), 0x11834184u);
  /* 11834184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834186 jne 0x1183419b */
  if (!C.zf) goto L_1183419b;
  /* 11834188 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1183418e push 0x1183a5e8 */
  push32((uint32_t)(0x1183a5e8u));
  /* 11834193 push eax */
  push32((uint32_t)(EAX));
  /* 11834194 call 0x11836a70 */
  push32(0x11834199u); f_11836a70();
  /* 11834199 pop ecx */
  ECX = (pop32());
  /* 1183419a pop ecx */
  ECX = (pop32());
L_1183419b:;
  /* 1183419b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118341a1 push edi */
  push32((uint32_t)(EDI));
  /* 118341a2 push eax */
  push32((uint32_t)(EAX));
  /* 118341a3 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 118341a9 call 0x11836bc0 */
  push32(0x118341aeu); f_11836bc0();
  /* 118341ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118341af pop ecx */
  ECX = (pop32());
  /* 118341b0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118341b3 jbe 0x118341de */
  if ((C.cf||C.zf)) goto L_118341de;
  /* 118341b5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118341bb push eax */
  push32((uint32_t)(EAX));
  /* 118341bc call 0x11836bc0 */
  push32(0x118341c1u); f_11836bc0();
  /* 118341c1 mov edi, eax */
  EDI = (EAX);
  /* 118341c3 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 118341c9 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118341cc push 3 */
  push32((uint32_t)(0x3u));
  /* 118341ce add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118341d0 push 0x1183a5e4 */
  push32((uint32_t)(0x1183a5e4u));
  /* 118341d5 push edi */
  push32((uint32_t)(EDI));
  /* 118341d6 call 0x11837da0 */
  push32(0x118341dbu); f_11837da0();
  /* 118341db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118341de:;
  /* 118341de lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118341e4 push 0x1183a5c8 */
  push32((uint32_t)(0x1183a5c8u));
  /* 118341e9 push eax */
  push32((uint32_t)(EAX));
  /* 118341ea call 0x11836a70 */
  push32(0x118341efu); f_11836a70();
  /* 118341ef lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 118341f5 push edi */
  push32((uint32_t)(EDI));
  /* 118341f6 push eax */
  push32((uint32_t)(EAX));
  /* 118341f7 call 0x11836a80 */
  push32(0x118341fcu); f_11836a80();
  /* 118341fc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11834202 push 0x1183c2b0 */
  push32((uint32_t)(0x1183c2b0u));
  /* 11834207 push eax */
  push32((uint32_t)(EAX));
  /* 11834208 call 0x11836a80 */
  push32(0x1183420du); f_11836a80();
  /* 1183420d push dword ptr [esi + 0x1183c5c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1183c5c4))));
  /* 11834213 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11834219 push eax */
  push32((uint32_t)(EAX));
  /* 1183421a call 0x11836a80 */
  push32(0x1183421fu); f_11836a80();
  /* 1183421f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11834224 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1183422a push 0x1183a5a0 */
  push32((uint32_t)(0x1183a5a0u));
  /* 1183422f push eax */
  push32((uint32_t)(EAX));
  /* 11834230 call 0x11837d0f */
  push32(0x11834235u); f_11837d0f();
  /* 11834235 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11834238 pop edi */
  EDI = (pop32());
  /* 11834239 jmp 0x11834261 */
  goto L_11834261;
L_1183423b:;
  /* 1183423b lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1183423e lea esi, [esi + 0x1183c5c4] */
  ESI = ((uint32_t)(ESI + 0x1183c5c4));
  /* 11834244 push 0 */
  push32((uint32_t)(0x0u));
  /* 11834246 push eax */
  push32((uint32_t)(EAX));
  /* 11834247 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11834249 call 0x11836bc0 */
  push32(0x1183424eu); f_11836bc0();
  /* 1183424e pop ecx */
  ECX = (pop32());
  /* 1183424f push eax */
  push32((uint32_t)(EAX));
  /* 11834250 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11834252 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11834254 call dword ptr [0x1183a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a094))), 0x1183425au);
  /* 1183425a push eax */
  push32((uint32_t)(EAX));
  /* 1183425b call dword ptr [0x1183a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a05c))), 0x11834261u);
L_11834261:;
  /* 11834261 pop esi */
  ESI = (pop32());
  /* 11834262 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11834263 ret  */
  ESPCHK(0x11834111u, _esp0);
  ESP += 4; return;
}

/* FUN_10004264 @ 0x11834264 (289 bytes, 98 insns) */
void f_11834264(void) {
  FTRACE(0x11834264u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834264 push ebp */
  push32((uint32_t)(EBP));
  /* 11834265 mov ebp, esp */
  EBP = (ESP);
  /* 11834267 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11834269 push 0x1183a600 */
  push32((uint32_t)(0x1183a600u));
  /* 1183426e push 0x11835c8c */
  push32((uint32_t)(0x11835c8cu));
  /* 11834273 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11834279 push eax */
  push32((uint32_t)(EAX));
  /* 1183427a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11834281 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834284 push ebx */
  push32((uint32_t)(EBX));
  /* 11834285 push esi */
  push32((uint32_t)(ESI));
  /* 11834286 push edi */
  push32((uint32_t)(EDI));
  /* 11834287 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1183428a imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1183428e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11834291 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11834294 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834297 ja 0x118342ad */
  if ((!C.cf&&!C.zf)) goto L_118342ad;
  /* 11834299 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1183429b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183429d jne 0x118342a2 */
  if (!C.zf) goto L_118342a2;
  /* 1183429f push 1 */
  push32((uint32_t)(0x1u));
  /* 118342a1 pop esi */
  ESI = (pop32());
L_118342a2:;
  /* 118342a2 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118342a5 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118342a8 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 118342ab jmp 0x118342af */
  goto L_118342af;
L_118342ad:;
  /* 118342ad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118342af:;
  /* 118342af mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 118342b2 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118342b5 ja 0x11834363 */
  if ((!C.cf&&!C.zf)) goto L_11834363;
  /* 118342bb mov eax, dword ptr [0x1183faa8] */
  EAX = (r32((uint32_t)(0x1183faa8)));
  /* 118342c0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118342c3 jne 0x11834306 */
  if (!C.zf) goto L_11834306;
  /* 118342c5 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 118342c8 cmp edi, dword ptr [0x1183faa0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x1183faa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118342ce ja 0x1183434c */
  if ((!C.cf&&!C.zf)) goto L_1183434c;
  /* 118342d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 118342d2 call 0x11834436 */
  push32(0x118342d7u); f_11834436();
  /* 118342d7 pop ecx */
  ECX = (pop32());
  /* 118342d8 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118342db push edi */
  push32((uint32_t)(EDI));
  /* 118342dc call 0x11834e0a */
  push32(0x118342e1u); f_11834e0a();
  /* 118342e1 pop ecx */
  ECX = (pop32());
  /* 118342e2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118342e5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118342e9 call 0x118342fd */
  push32(0x118342eeu); f_118342fd();
  /* 118342ee cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118342f1 je 0x11834351 */
  if (C.zf) goto L_11834351;
  /* 118342f3 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118342f6 jmp 0x11834340 */
  goto L_11834340;
  /* 118342f8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118342fa mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118342fd push 9 */
  push32((uint32_t)(0x9u));
  /* 118342ff call 0x11834497 */
  push32(0x11834304u); f_11834497();
  /* 11834304 pop ecx */
  ECX = (pop32());
  /* 11834305 ret  */
  ESPCHK(0x11834264u, _esp0);
  ESP += 4; return;
L_11834306:;
  /* 11834306 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834309 jne 0x1183434c */
  if (!C.zf) goto L_1183434c;
  /* 1183430b cmp esi, dword ptr [0x1183e8dc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183e8dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834311 ja 0x1183434c */
  if ((!C.cf&&!C.zf)) goto L_1183434c;
  /* 11834313 push 9 */
  push32((uint32_t)(0x9u));
  /* 11834315 call 0x11834436 */
  push32(0x1183431au); f_11834436();
  /* 1183431a pop ecx */
  ECX = (pop32());
  /* 1183431b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11834322 mov eax, esi */
  EAX = (ESI);
  /* 11834324 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11834327 push eax */
  push32((uint32_t)(EAX));
  /* 11834328 call 0x118358ad */
  push32(0x1183432du); f_118358ad();
  /* 1183432d pop ecx */
  ECX = (pop32());
  /* 1183432e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11834331 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11834335 call 0x11834386 */
  push32(0x1183433au); f_11834386();
  /* 1183433a cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183433d je 0x11834351 */
  if (C.zf) goto L_11834351;
  /* 1183433f push esi */
  push32((uint32_t)(ESI));
L_11834340:;
  /* 11834340 push ebx */
  push32((uint32_t)(EBX));
  /* 11834341 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11834344 call 0x11836b60 */
  push32(0x11834349u); f_11836b60();
  /* 11834349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1183434c:;
  /* 1183434c cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183434f jne 0x1183438f */
  if (!C.zf) { jmp_ind(0x1183438fu); return; }
L_11834351:;
  /* 11834351 push esi */
  push32((uint32_t)(ESI));
  /* 11834352 push 8 */
  push32((uint32_t)(0x8u));
  /* 11834354 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 1183435a call dword ptr [0x1183a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d8))), 0x11834360u);
  /* 11834360 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11834363:;
  /* 11834363 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834366 jne 0x1183438f */
  if (!C.zf) { jmp_ind(0x1183438fu); return; }
  /* 11834368 cmp dword ptr [0x1183f774], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1183f774))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183436e je 0x1183438f */
  if (C.zf) { jmp_ind(0x1183438fu); return; }
  /* 11834370 push esi */
  push32((uint32_t)(ESI));
  /* 11834371 call 0x118361bc */
  push32(0x11834376u); f_118361bc();
  /* 11834376 pop ecx */
  ECX = (pop32());
  /* 11834377 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834379 jne 0x118342af */
  if (!C.zf) goto L_118342af;
  /* 1183437f jmp 0x11834392 */
  jmp_ind(0x11834392u); return;
  /* 11834381 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_100042fd @ 0x118342fd (9 bytes, 4 insns) */
void f_118342fd(void) {
  FTRACE(0x118342fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118342fd push 9 */
  push32((uint32_t)(0x9u));
  /* 118342ff call 0x11834497 */
  push32(0x11834304u); f_11834497();
  /* 11834304 pop ecx */
  ECX = (pop32());
  /* 11834305 ret  */
  ESPCHK(0x118342fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10004386 @ 0x11834386 (9 bytes, 4 insns) */
void f_11834386(void) {
  FTRACE(0x11834386u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834386 push 9 */
  push32((uint32_t)(0x9u));
  /* 11834388 call 0x11834497 */
  push32(0x1183438du); f_11834497();
  /* 1183438d pop ecx */
  ECX = (pop32());
  /* 1183438e ret  */
  ESPCHK(0x11834386u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a1 @ 0x118343a1 (41 bytes, 12 insns) */
void f_118343a1(void) {
  FTRACE(0x118343a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118343a1 push esi */
  push32((uint32_t)(ESI));
  /* 118343a2 mov esi, dword ptr [0x1183a0f0] */
  ESI = (r32((uint32_t)(0x1183a0f0)));
  /* 118343a8 push dword ptr [0x1183c694] */
  push32((uint32_t)(r32((uint32_t)(0x1183c694))));
  /* 118343ae call esi */
  call_ind((uint32_t)(ESI), 0x118343b0u);
  /* 118343b0 push dword ptr [0x1183c684] */
  push32((uint32_t)(r32((uint32_t)(0x1183c684))));
  /* 118343b6 call esi */
  call_ind((uint32_t)(ESI), 0x118343b8u);
  /* 118343b8 push dword ptr [0x1183c674] */
  push32((uint32_t)(r32((uint32_t)(0x1183c674))));
  /* 118343be call esi */
  call_ind((uint32_t)(ESI), 0x118343c0u);
  /* 118343c0 push dword ptr [0x1183c654] */
  push32((uint32_t)(r32((uint32_t)(0x1183c654))));
  /* 118343c6 call esi */
  call_ind((uint32_t)(ESI), 0x118343c8u);
  /* 118343c8 pop esi */
  ESI = (pop32());
  /* 118343c9 ret  */
  ESPCHK(0x118343a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100043ca @ 0x118343ca (108 bytes, 34 insns) */
void f_118343ca(void) {
  FTRACE(0x118343cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118343ca push esi */
  push32((uint32_t)(ESI));
  /* 118343cb push edi */
  push32((uint32_t)(EDI));
  /* 118343cc mov edi, dword ptr [0x1183a088] */
  EDI = (r32((uint32_t)(0x1183a088)));
  /* 118343d2 mov esi, 0x1183c650 */
  ESI = (0x1183c650u);
L_118343d7:;
  /* 118343d7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118343d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118343db je 0x11834408 */
  if (C.zf) goto L_11834408;
  /* 118343dd cmp esi, 0x1183c694 */
  { uint32_t _a=(ESI),_b=(0x1183c694u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118343e3 je 0x11834408 */
  if (C.zf) goto L_11834408;
  /* 118343e5 cmp esi, 0x1183c684 */
  { uint32_t _a=(ESI),_b=(0x1183c684u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118343eb je 0x11834408 */
  if (C.zf) goto L_11834408;
  /* 118343ed cmp esi, 0x1183c674 */
  { uint32_t _a=(ESI),_b=(0x1183c674u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118343f3 je 0x11834408 */
  if (C.zf) goto L_11834408;
  /* 118343f5 cmp esi, 0x1183c654 */
  { uint32_t _a=(ESI),_b=(0x1183c654u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118343fb je 0x11834408 */
  if (C.zf) goto L_11834408;
  /* 118343fd push eax */
  push32((uint32_t)(EAX));
  /* 118343fe call edi */
  call_ind((uint32_t)(EDI), 0x11834400u);
  /* 11834400 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11834402 call 0x11832bdf */
  push32(0x11834407u); f_11832bdf();
  /* 11834407 pop ecx */
  ECX = (pop32());
L_11834408:;
  /* 11834408 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183440b cmp esi, 0x1183c710 */
  { uint32_t _a=(ESI),_b=(0x1183c710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834411 jl 0x118343d7 */
  if ((C.sf!=C.of)) goto L_118343d7;
  /* 11834413 push dword ptr [0x1183c674] */
  push32((uint32_t)(r32((uint32_t)(0x1183c674))));
  /* 11834419 call edi */
  call_ind((uint32_t)(EDI), 0x1183441bu);
  /* 1183441b push dword ptr [0x1183c684] */
  push32((uint32_t)(r32((uint32_t)(0x1183c684))));
  /* 11834421 call edi */
  call_ind((uint32_t)(EDI), 0x11834423u);
  /* 11834423 push dword ptr [0x1183c694] */
  push32((uint32_t)(r32((uint32_t)(0x1183c694))));
  /* 11834429 call edi */
  call_ind((uint32_t)(EDI), 0x1183442bu);
  /* 1183442b push dword ptr [0x1183c654] */
  push32((uint32_t)(r32((uint32_t)(0x1183c654))));
  /* 11834431 call edi */
  call_ind((uint32_t)(EDI), 0x11834433u);
  /* 11834433 pop edi */
  EDI = (pop32());
  /* 11834434 pop esi */
  ESI = (pop32());
  /* 11834435 ret  */
  ESPCHK(0x118343cau, _esp0);
  ESP += 4; return;
}

/* FUN_10004436 @ 0x11834436 (97 bytes, 37 insns) */
void f_11834436(void) {
  FTRACE(0x11834436u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834436 push ebp */
  push32((uint32_t)(EBP));
  /* 11834437 mov ebp, esp */
  EBP = (ESP);
  /* 11834439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183443c push esi */
  push32((uint32_t)(ESI));
  /* 1183443d cmp dword ptr [eax*4 + 0x1183c650], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1183c650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834445 lea esi, [eax*4 + 0x1183c650] */
  ESI = ((uint32_t)(EAX*4 + 0x1183c650));
  /* 1183444c jne 0x1183448c */
  if (!C.zf) goto L_1183448c;
  /* 1183444e push edi */
  push32((uint32_t)(EDI));
  /* 1183444f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11834451 call 0x11832d7d */
  push32(0x11834456u); f_11832d7d();
  /* 11834456 mov edi, eax */
  EDI = (EAX);
  /* 11834458 pop ecx */
  ECX = (pop32());
  /* 11834459 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1183445b jne 0x11834465 */
  if (!C.zf) goto L_11834465;
  /* 1183445d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1183445f call 0x1183295e */
  push32(0x11834464u); f_1183295e();
  /* 11834464 pop ecx */
  ECX = (pop32());
L_11834465:;
  /* 11834465 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11834467 call 0x11834436 */
  push32(0x1183446cu); f_11834436();
  /* 1183446c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183446f pop ecx */
  ECX = (pop32());
  /* 11834470 push edi */
  push32((uint32_t)(EDI));
  /* 11834471 jne 0x1183447d */
  if (!C.zf) goto L_1183447d;
  /* 11834473 call dword ptr [0x1183a0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0f0))), 0x11834479u);
  /* 11834479 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1183447b jmp 0x11834483 */
  goto L_11834483;
L_1183447d:;
  /* 1183447d call 0x11832bdf */
  push32(0x11834482u); f_11832bdf();
  /* 11834482 pop ecx */
  ECX = (pop32());
L_11834483:;
  /* 11834483 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11834485 call 0x11834497 */
  push32(0x1183448au); f_11834497();
  /* 1183448a pop ecx */
  ECX = (pop32());
  /* 1183448b pop edi */
  EDI = (pop32());
L_1183448c:;
  /* 1183448c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1183448e call dword ptr [0x1183a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0cc))), 0x11834494u);
  /* 11834494 pop esi */
  ESI = (pop32());
  /* 11834495 pop ebp */
  EBP = (pop32());
  /* 11834496 ret  */
  ESPCHK(0x11834436u, _esp0);
  ESP += 4; return;
}

/* FUN_10004497 @ 0x11834497 (21 bytes, 7 insns) */
void f_11834497(void) {
  FTRACE(0x11834497u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834497 push ebp */
  push32((uint32_t)(EBP));
  /* 11834498 mov ebp, esp */
  EBP = (ESP);
  /* 1183449a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183449d push dword ptr [eax*4 + 0x1183c650] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x1183c650))));
  /* 118344a4 call dword ptr [0x1183a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0e8))), 0x118344aau);
  /* 118344aa pop ebp */
  EBP = (pop32());
  /* 118344ab ret  */
  ESPCHK(0x11834497u, _esp0);
  ESP += 4; return;
}

/* FUN_100044ac @ 0x118344ac (46 bytes, 13 insns) */
void f_118344ac(void) {
  FTRACE(0x118344acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118344ac cmp dword ptr [0x1183f768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118344b3 jne 0x118344d9 */
  if (!C.zf) goto L_118344d9;
  /* 118344b5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118344b7 call 0x11834436 */
  push32(0x118344bcu); f_11834436();
  /* 118344bc cmp dword ptr [0x1183f768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183f768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118344c3 pop ecx */
  ECX = (pop32());
  /* 118344c4 jne 0x118344d1 */
  if (!C.zf) goto L_118344d1;
  /* 118344c6 call 0x118344da */
  push32(0x118344cbu); f_118344da();
  /* 118344cb inc dword ptr [0x1183f768] */
  { uint32_t _r=(r32((uint32_t)(0x1183f768)))+1; w32((uint32_t)(0x1183f768), (_r)); fl_inc(_r,32); }
L_118344d1:;
  /* 118344d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118344d3 call 0x11834497 */
  push32(0x118344d8u); f_11834497();
  /* 118344d8 pop ecx */
  ECX = (pop32());
L_118344d9:;
  /* 118344d9 ret  */
  ESPCHK(0x118344acu, _esp0);
  ESP += 4; return;
}

/* FUN_100044da @ 0x118344da (647 bytes, 207 insns) */
void f_118344da(void) {
  FTRACE(0x118344dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118344da push ebp */
  push32((uint32_t)(EBP));
  /* 118344db mov ebp, esp */
  EBP = (ESP);
  /* 118344dd push ecx */
  push32((uint32_t)(ECX));
  /* 118344de push ecx */
  push32((uint32_t)(ECX));
  /* 118344df push ebx */
  push32((uint32_t)(EBX));
  /* 118344e0 push esi */
  push32((uint32_t)(ESI));
  /* 118344e1 push edi */
  push32((uint32_t)(EDI));
  /* 118344e2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 118344e4 pop edi */
  EDI = (pop32());
  /* 118344e5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118344e7 push edi */
  push32((uint32_t)(EDI));
  /* 118344e8 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 118344eb call 0x11834436 */
  push32(0x118344f0u); f_11834436();
  /* 118344f0 or dword ptr [0x1183c840], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1183c840)))|(0xffffffffu); w32((uint32_t)(0x1183c840), (_r)); fl_logic(_r,32); }
  /* 118344f7 or dword ptr [0x1183c830], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1183c830)))|(0xffffffffu); w32((uint32_t)(0x1183c830), (_r)); fl_logic(_r,32); }
  /* 118344fe mov dword ptr [0x1183f6b0], ebx */
  w32((uint32_t)(0x1183f6b0), (EBX));
  /* 11834504 mov dword ptr [esp], 0x1183a658 */
  w32((uint32_t)(ESP), (0x1183a658u));
  /* 1183450b call 0x11837f29 */
  push32(0x11834510u); f_11837f29();
  /* 11834510 mov esi, eax */
  ESI = (EAX);
  /* 11834512 pop ecx */
  ECX = (pop32());
  /* 11834513 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834515 jne 0x11834618 */
  if (!C.zf) goto L_11834618;
  /* 1183451b push edi */
  push32((uint32_t)(EDI));
  /* 1183451c call 0x11834497 */
  push32(0x11834521u); f_11834497();
  /* 11834521 mov dword ptr [esp], 0x1183f6b8 */
  w32((uint32_t)(ESP), (0x1183f6b8u));
  /* 11834528 call dword ptr [0x1183a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0a0))), 0x1183452eu);
  /* 1183452e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834531 je 0x1183475c */
  if (C.zf) goto L_1183475c;
  /* 11834537 mov eax, dword ptr [0x1183f6b8] */
  EAX = (r32((uint32_t)(0x1183f6b8)));
  /* 1183453c mov ecx, dword ptr [0x1183f70c] */
  ECX = (r32((uint32_t)(0x1183f70c)));
  /* 11834542 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834545 cmp word ptr [0x1183f6fe], bx */
  { uint32_t _a=(r16((uint32_t)(0x1183f6fe))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183454c push 1 */
  push32((uint32_t)(0x1u));
  /* 1183454e pop edx */
  EDX = (pop32());
  /* 1183454f mov dword ptr [0x1183c798], eax */
  w32((uint32_t)(0x1183c798), (EAX));
  /* 11834554 mov dword ptr [0x1183f6b0], edx */
  w32((uint32_t)(0x1183f6b0), (EDX));
  /* 1183455a je 0x11834568 */
  if (C.zf) goto L_11834568;
  /* 1183455c mov esi, ecx */
  ESI = (ECX);
  /* 1183455e imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834561 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834563 mov dword ptr [0x1183c798], eax */
  w32((uint32_t)(0x1183c798), (EAX));
L_11834568:;
  /* 11834568 cmp word ptr [0x1183f752], bx */
  { uint32_t _a=(r16((uint32_t)(0x1183f752))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1183456f je 0x1183458c */
  if (C.zf) goto L_1183458c;
  /* 11834571 mov eax, dword ptr [0x1183f760] */
  EAX = (r32((uint32_t)(0x1183f760)));
  /* 11834576 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834578 je 0x1183458c */
  if (C.zf) goto L_1183458c;
  /* 1183457a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183457c mov dword ptr [0x1183c79c], edx */
  w32((uint32_t)(0x1183c79c), (EDX));
  /* 11834582 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834585 mov dword ptr [0x1183c7a0], eax */
  w32((uint32_t)(0x1183c7a0), (EAX));
  /* 1183458a jmp 0x11834598 */
  goto L_11834598;
L_1183458c:;
  /* 1183458c mov dword ptr [0x1183c79c], ebx */
  w32((uint32_t)(0x1183c79c), (EBX));
  /* 11834592 mov dword ptr [0x1183c7a0], ebx */
  w32((uint32_t)(0x1183c7a0), (EBX));
L_11834598:;
  /* 11834598 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1183459b mov esi, dword ptr [0x1183a084] */
  ESI = (r32((uint32_t)(0x1183a084)));
  /* 118345a1 push eax */
  push32((uint32_t)(EAX));
  /* 118345a2 push ebx */
  push32((uint32_t)(EBX));
  /* 118345a3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118345a5 mov edi, 0x220 */
  EDI = (0x220u);
  /* 118345aa push dword ptr [0x1183c824] */
  push32((uint32_t)(r32((uint32_t)(0x1183c824))));
  /* 118345b0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118345b2 push 0x1183f6bc */
  push32((uint32_t)(0x1183f6bcu));
  /* 118345b7 push edi */
  push32((uint32_t)(EDI));
  /* 118345b8 push dword ptr [0x1183f7a8] */
  push32((uint32_t)(r32((uint32_t)(0x1183f7a8))));
  /* 118345be call esi */
  call_ind((uint32_t)(ESI), 0x118345c0u);
  /* 118345c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118345c2 je 0x118345d4 */
  if (C.zf) goto L_118345d4;
  /* 118345c4 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118345c7 jne 0x118345d4 */
  if (!C.zf) goto L_118345d4;
  /* 118345c9 mov eax, dword ptr [0x1183c824] */
  EAX = (r32((uint32_t)(0x1183c824)));
  /* 118345ce and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 118345d2 jmp 0x118345dc */
  goto L_118345dc;
L_118345d4:;
  /* 118345d4 mov eax, dword ptr [0x1183c824] */
  EAX = (r32((uint32_t)(0x1183c824)));
  /* 118345d9 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_118345dc:;
  /* 118345dc lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118345df push eax */
  push32((uint32_t)(EAX));
  /* 118345e0 push ebx */
  push32((uint32_t)(EBX));
  /* 118345e1 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118345e3 push dword ptr [0x1183c828] */
  push32((uint32_t)(r32((uint32_t)(0x1183c828))));
  /* 118345e9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118345eb push 0x1183f710 */
  push32((uint32_t)(0x1183f710u));
  /* 118345f0 push edi */
  push32((uint32_t)(EDI));
  /* 118345f1 push dword ptr [0x1183f7a8] */
  push32((uint32_t)(r32((uint32_t)(0x1183f7a8))));
  /* 118345f7 call esi */
  call_ind((uint32_t)(ESI), 0x118345f9u);
  /* 118345f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118345fb je 0x1183474b */
  if (C.zf) goto L_1183474b;
  /* 11834601 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834604 jne 0x1183474b */
  if (!C.zf) goto L_1183474b;
  /* 1183460a mov eax, dword ptr [0x1183c828] */
  EAX = (r32((uint32_t)(0x1183c828)));
  /* 1183460f and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11834613 jmp 0x1183475c */
  goto L_1183475c;
L_11834618:;
  /* 11834618 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183461b je 0x11834755 */
  if (C.zf) goto L_11834755;
  /* 11834621 mov eax, dword ptr [0x1183f764] */
  EAX = (r32((uint32_t)(0x1183f764)));
  /* 11834626 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834628 je 0x1183463b */
  if (C.zf) goto L_1183463b;
  /* 1183462a push eax */
  push32((uint32_t)(EAX));
  /* 1183462b push esi */
  push32((uint32_t)(ESI));
  /* 1183462c call 0x11835de0 */
  push32(0x11834631u); f_11835de0();
  /* 11834631 pop ecx */
  ECX = (pop32());
  /* 11834632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834634 pop ecx */
  ECX = (pop32());
  /* 11834635 je 0x11834755 */
  if (C.zf) goto L_11834755;
L_1183463b:;
  /* 1183463b push dword ptr [0x1183f764] */
  push32((uint32_t)(r32((uint32_t)(0x1183f764))));
  /* 11834641 call 0x11832bdf */
  push32(0x11834646u); f_11832bdf();
  /* 11834646 push esi */
  push32((uint32_t)(ESI));
  /* 11834647 call 0x11836bc0 */
  push32(0x1183464cu); f_11836bc0();
  /* 1183464c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1183464d push eax */
  push32((uint32_t)(EAX));
  /* 1183464e call 0x11832d7d */
  push32(0x11834653u); f_11832d7d();
  /* 11834653 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11834656 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834658 mov dword ptr [0x1183f764], eax */
  w32((uint32_t)(0x1183f764), (EAX));
  /* 1183465d je 0x11834755 */
  if (C.zf) goto L_11834755;
  /* 11834663 push esi */
  push32((uint32_t)(ESI));
  /* 11834664 push eax */
  push32((uint32_t)(EAX));
  /* 11834665 call 0x11836a70 */
  push32(0x1183466au); f_11836a70();
  /* 1183466a push edi */
  push32((uint32_t)(EDI));
  /* 1183466b call 0x11834497 */
  push32(0x11834670u); f_11834497();
  /* 11834670 push 3 */
  push32((uint32_t)(0x3u));
  /* 11834672 push esi */
  push32((uint32_t)(ESI));
  /* 11834673 push dword ptr [0x1183c824] */
  push32((uint32_t)(r32((uint32_t)(0x1183c824))));
  /* 11834679 call 0x11837da0 */
  push32(0x1183467eu); f_11837da0();
  /* 1183467e mov eax, dword ptr [0x1183c824] */
  EAX = (r32((uint32_t)(0x1183c824)));
  /* 11834683 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11834686 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11834689 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 1183468d cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11834690 jne 0x1183469a */
  if (!C.zf) goto L_1183469a;
  /* 11834692 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11834699 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1183469a:;
  /* 1183469a push esi */
  push32((uint32_t)(ESI));
  /* 1183469b call 0x11837e9e */
  push32(0x118346a0u); f_11837e9e();
  /* 118346a0 pop ecx */
  ECX = (pop32());
  /* 118346a1 mov bl, 0x30 */
  BL = (0x30u);
  /* 118346a3 mov ecx, eax */
  ECX = (EAX);
  /* 118346a5 imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118346ab mov dword ptr [0x1183c798], ecx */
  w32((uint32_t)(0x1183c798), (ECX));
L_118346b1:;
  /* 118346b1 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118346b3 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346b5 je 0x118346bf */
  if (C.zf) goto L_118346bf;
  /* 118346b7 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346b9 jl 0x118346c2 */
  if ((C.sf!=C.of)) goto L_118346c2;
  /* 118346bb cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346bd jg 0x118346c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_118346c2;
L_118346bf:;
  /* 118346bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118346c0 jmp 0x118346b1 */
  goto L_118346b1;
L_118346c2:;
  /* 118346c2 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346c5 jne 0x11834715 */
  if (!C.zf) goto L_11834715;
  /* 118346c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118346c8 push esi */
  push32((uint32_t)(ESI));
  /* 118346c9 call 0x11837e9e */
  push32(0x118346ceu); f_11837e9e();
  /* 118346ce imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118346d1 pop ecx */
  ECX = (pop32());
  /* 118346d2 mov ecx, dword ptr [0x1183c798] */
  ECX = (r32((uint32_t)(0x1183c798)));
  /* 118346d8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118346da mov dword ptr [0x1183c798], ecx */
  w32((uint32_t)(0x1183c798), (ECX));
L_118346e0:;
  /* 118346e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118346e2 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346e4 jl 0x118346ed */
  if ((C.sf!=C.of)) goto L_118346ed;
  /* 118346e6 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346e8 jg 0x118346ed */
  if ((!C.zf&&C.sf==C.of)) goto L_118346ed;
  /* 118346ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118346eb jmp 0x118346e0 */
  goto L_118346e0;
L_118346ed:;
  /* 118346ed cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118346f0 jne 0x11834715 */
  if (!C.zf) goto L_11834715;
  /* 118346f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118346f3 push esi */
  push32((uint32_t)(ESI));
  /* 118346f4 call 0x11837e9e */
  push32(0x118346f9u); f_11837e9e();
  /* 118346f9 pop ecx */
  ECX = (pop32());
  /* 118346fa mov ecx, dword ptr [0x1183c798] */
  ECX = (r32((uint32_t)(0x1183c798)));
  /* 11834700 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834702 mov dword ptr [0x1183c798], ecx */
  w32((uint32_t)(0x1183c798), (ECX));
L_11834708:;
  /* 11834708 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1183470a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183470c jl 0x11834715 */
  if ((C.sf!=C.of)) goto L_11834715;
  /* 1183470e cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11834710 jg 0x11834715 */
  if ((!C.zf&&C.sf==C.of)) goto L_11834715;
  /* 11834712 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11834713 jmp 0x11834708 */
  goto L_11834708;
L_11834715:;
  /* 11834715 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834719 je 0x11834723 */
  if (C.zf) goto L_11834723;
  /* 1183471b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1183471d mov dword ptr [0x1183c798], ecx */
  w32((uint32_t)(0x1183c798), (ECX));
L_11834723:;
  /* 11834723 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11834726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834728 mov dword ptr [0x1183c79c], eax */
  w32((uint32_t)(0x1183c79c), (EAX));
  /* 1183472d je 0x1183474b */
  if (C.zf) goto L_1183474b;
  /* 1183472f push 3 */
  push32((uint32_t)(0x3u));
  /* 11834731 push esi */
  push32((uint32_t)(ESI));
  /* 11834732 push dword ptr [0x1183c828] */
  push32((uint32_t)(r32((uint32_t)(0x1183c828))));
  /* 11834738 call 0x11837da0 */
  push32(0x1183473du); f_11837da0();
  /* 1183473d mov eax, dword ptr [0x1183c828] */
  EAX = (r32((uint32_t)(0x1183c828)));
  /* 11834742 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11834745 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11834749 jmp 0x1183475c */
  goto L_1183475c;
L_1183474b:;
  /* 1183474b mov eax, dword ptr [0x1183c828] */
  EAX = (r32((uint32_t)(0x1183c828)));
  /* 11834750 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11834753 jmp 0x1183475c */
  goto L_1183475c;
L_11834755:;
  /* 11834755 push edi */
  push32((uint32_t)(EDI));
  /* 11834756 call 0x11834497 */
  push32(0x1183475bu); f_11834497();
  /* 1183475b pop ecx */
  ECX = (pop32());
L_1183475c:;
  /* 1183475c pop edi */
  EDI = (pop32());
  /* 1183475d pop esi */
  ESI = (pop32());
  /* 1183475e pop ebx */
  EBX = (pop32());
  /* 1183475f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11834760 ret  */
  ESPCHK(0x118344dau, _esp0);
  ESP += 4; return;
}

/* FUN_10004761 @ 0x11834761 (33 bytes, 12 insns) */
void f_11834761(void) {
  FTRACE(0x11834761u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834761 push esi */
  push32((uint32_t)(ESI));
  /* 11834762 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11834764 call 0x11834436 */
  push32(0x11834769u); f_11834436();
  /* 11834769 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1183476d call 0x11834782 */
  push32(0x11834772u); f_11834782();
  /* 11834772 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11834774 mov esi, eax */
  ESI = (EAX);
  /* 11834776 call 0x11834497 */
  push32(0x1183477bu); f_11834497();
  /* 1183477b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183477e mov eax, esi */
  EAX = (ESI);
  /* 11834780 pop esi */
  ESI = (pop32());
  /* 11834781 ret  */
  ESPCHK(0x11834761u, _esp0);
  ESP += 4; return;
}

/* FUN_10004782 @ 0x11834782 (428 bytes, 149 insns) */
void f_11834782(void) {
  FTRACE(0x11834782u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834782 push ebx */
  push32((uint32_t)(EBX));
  /* 11834783 push esi */
  push32((uint32_t)(ESI));
  /* 11834784 push edi */
  push32((uint32_t)(EDI));
  /* 11834785 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11834787 cmp dword ptr [0x1183c79c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183c79c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183478d jne 0x11834796 */
  if (!C.zf) goto L_11834796;
L_1183478f:;
  /* 1183478f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11834791 jmp 0x118348e2 */
  goto L_118348e2;
L_11834796:;
  /* 11834796 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1183479a push 1 */
  push32((uint32_t)(0x1u));
  /* 1183479c pop ebx */
  EBX = (pop32());
  /* 1183479d mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 118347a0 cmp eax, dword ptr [0x1183c830] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183c830))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118347a6 jne 0x118347b4 */
  if (!C.zf) goto L_118347b4;
  /* 118347a8 cmp eax, dword ptr [0x1183c840] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183c840))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118347ae je 0x118348b6 */
  if (C.zf) goto L_118348b6;
L_118347b4:;
  /* 118347b4 cmp dword ptr [0x1183f6b0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1183f6b0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118347ba je 0x1183488c */
  if (C.zf) goto L_1183488c;
  /* 118347c0 movzx ecx, word ptr [0x1183f75e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f75e))));
  /* 118347c7 push ecx */
  push32((uint32_t)(ECX));
  /* 118347c8 cmp word ptr [0x1183f750], di */
  { uint32_t _a=(r16((uint32_t)(0x1183f750))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118347cf movzx ecx, word ptr [0x1183f75c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f75c))));
  /* 118347d6 push ecx */
  push32((uint32_t)(ECX));
  /* 118347d7 movzx ecx, word ptr [0x1183f75a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f75a))));
  /* 118347de push ecx */
  push32((uint32_t)(ECX));
  /* 118347df movzx ecx, word ptr [0x1183f758] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f758))));
  /* 118347e6 push ecx */
  push32((uint32_t)(ECX));
  /* 118347e7 jne 0x11834806 */
  if (!C.zf) goto L_11834806;
  /* 118347e9 movzx ecx, word ptr [0x1183f754] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f754))));
  /* 118347f0 push edi */
  push32((uint32_t)(EDI));
  /* 118347f1 push ecx */
  push32((uint32_t)(ECX));
  /* 118347f2 movzx ecx, word ptr [0x1183f756] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f756))));
  /* 118347f9 push ecx */
  push32((uint32_t)(ECX));
  /* 118347fa movzx ecx, word ptr [0x1183f752] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f752))));
  /* 11834801 push ecx */
  push32((uint32_t)(ECX));
  /* 11834802 push eax */
  push32((uint32_t)(EAX));
  /* 11834803 push ebx */
  push32((uint32_t)(EBX));
  /* 11834804 jmp 0x1183481a */
  goto L_1183481a;
L_11834806:;
  /* 11834806 movzx ecx, word ptr [0x1183f756] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f756))));
  /* 1183480d push ecx */
  push32((uint32_t)(ECX));
  /* 1183480e push edi */
  push32((uint32_t)(EDI));
  /* 1183480f movzx ecx, word ptr [0x1183f752] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1183f752))));
  /* 11834816 push edi */
  push32((uint32_t)(EDI));
  /* 11834817 push ecx */
  push32((uint32_t)(ECX));
  /* 11834818 push eax */
  push32((uint32_t)(EAX));
  /* 11834819 push edi */
  push32((uint32_t)(EDI));
L_1183481a:;
  /* 1183481a push ebx */
  push32((uint32_t)(EBX));
  /* 1183481b call 0x1183492e */
  push32(0x11834820u); f_1183492e();
  /* 11834820 movzx eax, word ptr [0x1183f70a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f70a))));
  /* 11834827 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183482a cmp word ptr [0x1183f6fc], di */
  { uint32_t _a=(r16((uint32_t)(0x1183f6fc))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11834831 push eax */
  push32((uint32_t)(EAX));
  /* 11834832 movzx eax, word ptr [0x1183f708] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f708))));
  /* 11834839 push eax */
  push32((uint32_t)(EAX));
  /* 1183483a movzx eax, word ptr [0x1183f706] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f706))));
  /* 11834841 push eax */
  push32((uint32_t)(EAX));
  /* 11834842 movzx eax, word ptr [0x1183f704] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f704))));
  /* 11834849 push eax */
  push32((uint32_t)(EAX));
  /* 1183484a jne 0x11834874 */
  if (!C.zf) goto L_11834874;
  /* 1183484c movzx eax, word ptr [0x1183f700] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f700))));
  /* 11834853 push edi */
  push32((uint32_t)(EDI));
  /* 11834854 push eax */
  push32((uint32_t)(EAX));
  /* 11834855 movzx eax, word ptr [0x1183f702] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f702))));
  /* 1183485c push eax */
  push32((uint32_t)(EAX));
  /* 1183485d movzx eax, word ptr [0x1183f6fe] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f6fe))));
  /* 11834864 push eax */
  push32((uint32_t)(EAX));
  /* 11834865 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11834868 push ebx */
  push32((uint32_t)(EBX));
L_11834869:;
  /* 11834869 push edi */
  push32((uint32_t)(EDI));
  /* 1183486a call 0x1183492e */
  push32(0x1183486fu); f_1183492e();
  /* 1183486f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11834872 jmp 0x118348b6 */
  goto L_118348b6;
L_11834874:;
  /* 11834874 movzx eax, word ptr [0x1183f702] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f702))));
  /* 1183487b push eax */
  push32((uint32_t)(EAX));
  /* 1183487c push edi */
  push32((uint32_t)(EDI));
  /* 1183487d movzx eax, word ptr [0x1183f6fe] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1183f6fe))));
  /* 11834884 push edi */
  push32((uint32_t)(EDI));
  /* 11834885 push eax */
  push32((uint32_t)(EAX));
  /* 11834886 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11834889 push edi */
  push32((uint32_t)(EDI));
  /* 1183488a jmp 0x11834869 */
  goto L_11834869;
L_1183488c:;
  /* 1183488c push edi */
  push32((uint32_t)(EDI));
  /* 1183488d push edi */
  push32((uint32_t)(EDI));
  /* 1183488e push edi */
  push32((uint32_t)(EDI));
  /* 1183488f push 2 */
  push32((uint32_t)(0x2u));
  /* 11834891 push edi */
  push32((uint32_t)(EDI));
  /* 11834892 push edi */
  push32((uint32_t)(EDI));
  /* 11834893 push ebx */
  push32((uint32_t)(EBX));
  /* 11834894 push 4 */
  push32((uint32_t)(0x4u));
  /* 11834896 push eax */
  push32((uint32_t)(EAX));
  /* 11834897 push ebx */
  push32((uint32_t)(EBX));
  /* 11834898 push ebx */
  push32((uint32_t)(EBX));
  /* 11834899 call 0x1183492e */
  push32(0x1183489eu); f_1183492e();
  /* 1183489e push edi */
  push32((uint32_t)(EDI));
  /* 1183489f push edi */
  push32((uint32_t)(EDI));
  /* 118348a0 push edi */
  push32((uint32_t)(EDI));
  /* 118348a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118348a3 push edi */
  push32((uint32_t)(EDI));
  /* 118348a4 push edi */
  push32((uint32_t)(EDI));
  /* 118348a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 118348a7 push 0xa */
  push32((uint32_t)(0xau));
  /* 118348a9 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 118348ac push ebx */
  push32((uint32_t)(EBX));
  /* 118348ad push edi */
  push32((uint32_t)(EDI));
  /* 118348ae call 0x1183492e */
  push32(0x118348b3u); f_1183492e();
  /* 118348b3 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118348b6:;
  /* 118348b6 mov edx, dword ptr [0x1183c834] */
  EDX = (r32((uint32_t)(0x1183c834)));
  /* 118348bc mov eax, dword ptr [0x1183c844] */
  EAX = (r32((uint32_t)(0x1183c844)));
  /* 118348c1 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118348c4 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348c6 jge 0x118348e6 */
  if ((C.sf==C.of)) goto L_118348e6;
  /* 118348c8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348ca jl 0x1183478f */
  if ((C.sf!=C.of)) goto L_1183478f;
  /* 118348d0 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348d2 jg 0x1183478f */
  if ((!C.zf&&C.sf==C.of)) goto L_1183478f;
  /* 118348d8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348da jle 0x118348fa */
  if ((C.zf||C.sf!=C.of)) goto L_118348fa;
  /* 118348dc cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348de jge 0x118348fa */
  if ((C.sf==C.of)) goto L_118348fa;
L_118348e0:;
  /* 118348e0 mov eax, ebx */
  EAX = (EBX);
L_118348e2:;
  /* 118348e2 pop edi */
  EDI = (pop32());
  /* 118348e3 pop esi */
  ESI = (pop32());
  /* 118348e4 pop ebx */
  EBX = (pop32());
  /* 118348e5 ret  */
  ESPCHK(0x11834782u, _esp0);
  ESP += 4; return;
L_118348e6:;
  /* 118348e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348e8 jl 0x118348e0 */
  if ((C.sf!=C.of)) goto L_118348e0;
  /* 118348ea cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348ec jg 0x118348e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_118348e0;
  /* 118348ee cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348f0 jle 0x118348fa */
  if ((C.zf||C.sf!=C.of)) goto L_118348fa;
  /* 118348f2 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118348f4 jl 0x1183478f */
  if ((C.sf!=C.of)) goto L_1183478f;
L_118348fa:;
  /* 118348fa mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118348fd imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834900 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834903 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834906 add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834908 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1183490e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834910 jne 0x11834921 */
  if (!C.zf) goto L_11834921;
  /* 11834912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11834914 cmp eax, dword ptr [0x1183c838] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183c838))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183491a setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_1183491d:;
  /* 1183491d mov eax, ecx */
  EAX = (ECX);
  /* 1183491f jmp 0x118348e2 */
  goto L_118348e2;
L_11834921:;
  /* 11834921 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11834923 cmp eax, dword ptr [0x1183c848] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183c848))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834929 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 1183492c jmp 0x1183491d */
  goto L_1183491d;
}

/* FUN_1000492e @ 0x1183492e (320 bytes, 101 insns) */
void f_1183492e(void) {
  FTRACE(0x1183492eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183492e push ebp */
  push32((uint32_t)(EBP));
  /* 1183492f mov ebp, esp */
  EBP = (ESP);
  /* 11834931 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834935 push ebx */
  push32((uint32_t)(EBX));
  /* 11834936 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11834939 push esi */
  push32((uint32_t)(ESI));
  /* 1183493a jne 0x118349c9 */
  if (!C.zf) goto L_118349c9;
  /* 11834940 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11834943 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11834946 and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 1183494a mov esi, eax */
  ESI = (EAX);
  /* 1183494c jne 0x11834959 */
  if (!C.zf) goto L_11834959;
  /* 1183494e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11834951 mov eax, dword ptr [esi + 0x1183c848] */
  EAX = (r32((uint32_t)(ESI + 0x1183c848)));
  /* 11834957 jmp 0x11834962 */
  goto L_11834962;
L_11834959:;
  /* 11834959 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1183495c mov eax, dword ptr [esi + 0x1183c87c] */
  EAX = (r32((uint32_t)(ESI + 0x1183c87c)));
L_11834962:;
  /* 11834962 mov edx, ebx */
  EDX = (EBX);
  /* 11834964 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11834967 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1183496d lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11834970 push edi */
  push32((uint32_t)(EDI));
  /* 11834971 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11834974 mov edi, ecx */
  EDI = (ECX);
  /* 11834976 push 7 */
  push32((uint32_t)(0x7u));
  /* 11834978 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183497a lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11834981 pop edi */
  EDI = (pop32());
  /* 11834982 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11834983 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11834985 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11834988 pop edi */
  EDI = (pop32());
  /* 11834989 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183498c jg 0x1183499c */
  if ((!C.zf&&C.sf==C.of)) goto L_1183499c;
  /* 1183498e imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834991 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834993 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834996 lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 1183499a jmp 0x118349a6 */
  goto L_118349a6;
L_1183499c:;
  /* 1183499c imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1183499f sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118349a1 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118349a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_118349a6:;
  /* 118349a6 cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118349aa jne 0x118349e4 */
  if (!C.zf) goto L_118349e4;
  /* 118349ac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118349b0 jne 0x118349ba */
  if (!C.zf) goto L_118349ba;
  /* 118349b2 mov esi, dword ptr [esi + 0x1183c84c] */
  ESI = (r32((uint32_t)(ESI + 0x1183c84c)));
  /* 118349b8 jmp 0x118349c0 */
  goto L_118349c0;
L_118349ba:;
  /* 118349ba mov esi, dword ptr [esi + 0x1183c880] */
  ESI = (r32((uint32_t)(ESI + 0x1183c880)));
L_118349c0:;
  /* 118349c0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118349c2 jle 0x118349e4 */
  if ((C.zf||C.sf!=C.of)) goto L_118349e4;
  /* 118349c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118349c7 jmp 0x118349e4 */
  goto L_118349e4;
L_118349c9:;
  /* 118349c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118349cc test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 118349cf jne 0x118349da */
  if (!C.zf) goto L_118349da;
  /* 118349d1 mov ecx, dword ptr [eax*4 + 0x1183c848] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1183c848)));
  /* 118349d8 jmp 0x118349e1 */
  goto L_118349e1;
L_118349da:;
  /* 118349da mov ecx, dword ptr [eax*4 + 0x1183c87c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1183c87c)));
L_118349e1:;
  /* 118349e1 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_118349e4:;
  /* 118349e4 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118349e8 jne 0x11834a15 */
  if (!C.zf) goto L_11834a15;
  /* 118349ea mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 118349ed mov dword ptr [0x1183c834], ecx */
  w32((uint32_t)(0x1183c834), (ECX));
  /* 118349f3 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118349f6 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118349f9 mov dword ptr [0x1183c830], ebx */
  w32((uint32_t)(0x1183c830), (EBX));
  /* 118349ff imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834a02 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a05 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834a0b add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a0e mov dword ptr [0x1183c838], eax */
  w32((uint32_t)(0x1183c838), (EAX));
  /* 11834a13 jmp 0x11834a6a */
  goto L_11834a6a;
L_11834a15:;
  /* 11834a15 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11834a18 mov dword ptr [0x1183c844], ecx */
  w32((uint32_t)(0x1183c844), (ECX));
  /* 11834a1e imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834a21 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834a27 add eax, dword ptr [0x1183c7a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183c7a0))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a2d add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a30 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834a36 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a39 mov dword ptr [0x1183c848], eax */
  w32((uint32_t)(0x1183c848), (EAX));
  /* 11834a3e jns 0x11834a4d */
  if (!C.sf) goto L_11834a4d;
  /* 11834a40 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834a45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11834a46 mov dword ptr [0x1183c848], eax */
  w32((uint32_t)(0x1183c848), (EAX));
  /* 11834a4b jmp 0x11834a5e */
  goto L_11834a5e;
L_11834a4d:;
  /* 11834a4d mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11834a52 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834a54 jl 0x11834a64 */
  if ((C.sf!=C.of)) goto L_11834a64;
  /* 11834a56 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834a58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11834a59 mov dword ptr [0x1183c848], eax */
  w32((uint32_t)(0x1183c848), (EAX));
L_11834a5e:;
  /* 11834a5e mov dword ptr [0x1183c844], ecx */
  w32((uint32_t)(0x1183c844), (ECX));
L_11834a64:;
  /* 11834a64 mov dword ptr [0x1183c840], ebx */
  w32((uint32_t)(0x1183c840), (EBX));
L_11834a6a:;
  /* 11834a6a pop esi */
  ESI = (pop32());
  /* 11834a6b pop ebx */
  EBX = (pop32());
  /* 11834a6c pop ebp */
  EBP = (pop32());
  /* 11834a6d ret  */
  ESPCHK(0x1183492eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a6e @ 0x11834a6e (72 bytes, 17 insns) */
void f_11834a6e(void) {
  FTRACE(0x11834a6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834a6e push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11834a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11834a75 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11834a7b call dword ptr [0x1183a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d8))), 0x11834a81u);
  /* 11834a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834a83 mov dword ptr [0x1183fa9c], eax */
  w32((uint32_t)(0x1183fa9c), (EAX));
  /* 11834a88 jne 0x11834a8b */
  if (!C.zf) goto L_11834a8b;
  /* 11834a8a ret  */
  ESPCHK(0x11834a6eu, _esp0);
  ESP += 4; return;
L_11834a8b:;
  /* 11834a8b mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11834a8f and dword ptr [0x1183fa94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1183fa94)))&(0x0u); w32((uint32_t)(0x1183fa94), (_r)); fl_logic(_r,32); }
  /* 11834a96 and dword ptr [0x1183fa98], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1183fa98)))&(0x0u); w32((uint32_t)(0x1183fa98), (_r)); fl_logic(_r,32); }
  /* 11834a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11834a9f mov dword ptr [0x1183fa90], eax */
  w32((uint32_t)(0x1183fa90), (EAX));
  /* 11834aa4 mov dword ptr [0x1183faa0], ecx */
  w32((uint32_t)(0x1183faa0), (ECX));
  /* 11834aaa mov dword ptr [0x1183fa88], 0x10 */
  w32((uint32_t)(0x1183fa88), (0x10u));
  /* 11834ab4 pop eax */
  EAX = (pop32());
  /* 11834ab5 ret  */
  ESPCHK(0x11834a6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab6 @ 0x11834ab6 (43 bytes, 14 insns) */
void f_11834ab6(void) {
  FTRACE(0x11834ab6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834ab6 mov eax, dword ptr [0x1183fa98] */
  EAX = (r32((uint32_t)(0x1183fa98)));
  /* 11834abb lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11834abe mov eax, dword ptr [0x1183fa9c] */
  EAX = (r32((uint32_t)(0x1183fa9c)));
  /* 11834ac3 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11834ac6:;
  /* 11834ac6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ac8 jae 0x11834ade */
  if (!C.cf) goto L_11834ade;
  /* 11834aca mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11834ace sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834ad1 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ad7 jb 0x11834ae0 */
  if (C.cf) goto L_11834ae0;
  /* 11834ad9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834adc jmp 0x11834ac6 */
  goto L_11834ac6;
L_11834ade:;
  /* 11834ade xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11834ae0:;
  /* 11834ae0 ret  */
  ESPCHK(0x11834ab6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae1 @ 0x11834ae1 (809 bytes, 265 insns) */
void f_11834ae1(void) {
  FTRACE(0x11834ae1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834ae1 push ebp */
  push32((uint32_t)(EBP));
  /* 11834ae2 mov ebp, esp */
  EBP = (ESP);
  /* 11834ae4 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834ae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834aea push ebx */
  push32((uint32_t)(EBX));
  /* 11834aeb push esi */
  push32((uint32_t)(ESI));
  /* 11834aec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11834aef mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11834af2 push edi */
  push32((uint32_t)(EDI));
  /* 11834af3 mov edi, esi */
  EDI = (ESI);
  /* 11834af5 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11834af8 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834afb shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11834afe mov ecx, edi */
  ECX = (EDI);
  /* 11834b00 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834b06 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11834b0d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11834b10 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11834b12 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11834b13 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11834b16 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11834b19 jne 0x11834e05 */
  if (!C.zf) goto L_11834e05;
  /* 11834b1f mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11834b22 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11834b25 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11834b28 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11834b2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11834b2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11834b31 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11834b34 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11834b37 jne 0x11834bb7 */
  if (!C.zf) goto L_11834bb7;
  /* 11834b39 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11834b3c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11834b3d cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834b40 jbe 0x11834b45 */
  if ((C.cf||C.zf)) goto L_11834b45;
  /* 11834b42 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11834b44 pop edx */
  EDX = (pop32());
L_11834b45:;
  /* 11834b45 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11834b48 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834b4b jne 0x11834b99 */
  if (!C.zf) goto L_11834b99;
  /* 11834b4d cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834b50 jae 0x11834b70 */
  if (!C.cf) goto L_11834b70;
  /* 11834b52 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834b57 mov ecx, edx */
  ECX = (EDX);
  /* 11834b59 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834b5b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11834b5f not ebx */
  EBX = (~(EBX));
  /* 11834b61 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11834b65 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11834b67 jne 0x11834b91 */
  if (!C.zf) goto L_11834b91;
  /* 11834b69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834b6c and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11834b6e jmp 0x11834b91 */
  goto L_11834b91;
L_11834b70:;
  /* 11834b70 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11834b73 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834b78 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834b7a lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11834b7e not ebx */
  EBX = (~(EBX));
  /* 11834b80 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11834b87 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11834b89 jne 0x11834b91 */
  if (!C.zf) goto L_11834b91;
  /* 11834b8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834b8e and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11834b91:;
  /* 11834b91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11834b94 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11834b97 jmp 0x11834b9c */
  goto L_11834b9c;
L_11834b99:;
  /* 11834b99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11834b9c:;
  /* 11834b9c mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11834b9f mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11834ba2 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834ba5 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11834ba8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11834bab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11834bae mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11834bb1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11834bb4 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11834bb7:;
  /* 11834bb7 mov edx, ecx */
  EDX = (ECX);
  /* 11834bb9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11834bbc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11834bbd cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834bc0 jbe 0x11834bc5 */
  if ((C.cf||C.zf)) goto L_11834bc5;
  /* 11834bc2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11834bc4 pop edx */
  EDX = (pop32());
L_11834bc5:;
  /* 11834bc5 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11834bc8 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11834bcb mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11834bce jne 0x11834c68 */
  if (!C.zf) goto L_11834c68;
  /* 11834bd4 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834bd7 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11834bda sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11834bdd push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11834bdf mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11834be2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11834be3 pop esi */
  ESI = (pop32());
  /* 11834be4 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834be6 jbe 0x11834bea */
  if ((C.cf||C.zf)) goto L_11834bea;
  /* 11834be8 mov ebx, esi */
  EBX = (ESI);
L_11834bea:;
  /* 11834bea add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834bed mov edx, ecx */
  EDX = (ECX);
  /* 11834bef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11834bf2 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11834bf5 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11834bf6 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834bf8 jbe 0x11834bfc */
  if ((C.cf||C.zf)) goto L_11834bfc;
  /* 11834bfa mov edx, esi */
  EDX = (ESI);
L_11834bfc:;
  /* 11834bfc cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834bfe je 0x11834c63 */
  if (C.zf) goto L_11834c63;
  /* 11834c00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11834c03 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11834c06 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834c09 jne 0x11834c4b */
  if (!C.zf) goto L_11834c4b;
  /* 11834c0b cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834c0e jae 0x11834c2c */
  if (!C.cf) goto L_11834c2c;
  /* 11834c10 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11834c15 mov ecx, ebx */
  ECX = (EBX);
  /* 11834c17 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11834c19 not esi */
  ESI = (~(ESI));
  /* 11834c1b and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11834c1f dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11834c23 jne 0x11834c4b */
  if (!C.zf) goto L_11834c4b;
  /* 11834c25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834c28 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11834c2a jmp 0x11834c4b */
  goto L_11834c4b;
L_11834c2c:;
  /* 11834c2c lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11834c2f mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11834c34 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11834c36 not esi */
  ESI = (~(ESI));
  /* 11834c38 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11834c3f dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11834c43 jne 0x11834c4b */
  if (!C.zf) goto L_11834c4b;
  /* 11834c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834c48 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11834c4b:;
  /* 11834c4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11834c4e mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11834c51 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11834c54 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11834c57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11834c5a mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11834c5d mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11834c60 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11834c63:;
  /* 11834c63 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11834c66 jmp 0x11834c6b */
  goto L_11834c6b;
L_11834c68:;
  /* 11834c68 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11834c6b:;
  /* 11834c6b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834c6f jne 0x11834c79 */
  if (!C.zf) goto L_11834c79;
  /* 11834c71 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834c73 je 0x11834cfa */
  if (C.zf) goto L_11834cfa;
L_11834c79:;
  /* 11834c79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11834c7c mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11834c80 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11834c83 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11834c86 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11834c89 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11834c8c mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11834c8f mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11834c92 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11834c95 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834c98 jne 0x11834cfa */
  if (!C.zf) goto L_11834cfa;
  /* 11834c9a mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11834c9e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ca1 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11834ca4 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11834ca6 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11834caa jae 0x11834cd1 */
  if (!C.cf) goto L_11834cd1;
  /* 11834cac cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11834cb0 jne 0x11834cc0 */
  if (!C.zf) goto L_11834cc0;
  /* 11834cb2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834cb7 mov ecx, edx */
  ECX = (EDX);
  /* 11834cb9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834cbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834cbe or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11834cc0:;
  /* 11834cc0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834cc5 mov ecx, edx */
  ECX = (EDX);
  /* 11834cc7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834cc9 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11834ccd or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11834ccf jmp 0x11834cfa */
  goto L_11834cfa;
L_11834cd1:;
  /* 11834cd1 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11834cd5 jne 0x11834ce7 */
  if (!C.zf) goto L_11834ce7;
  /* 11834cd7 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11834cda mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834cdf shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834ce1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834ce4 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11834ce7:;
  /* 11834ce7 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11834cea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11834cef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11834cf1 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11834cf8 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11834cfa:;
  /* 11834cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11834cfd mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11834cff mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11834d03 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11834d06 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11834d08 jne 0x11834e05 */
  if (!C.zf) goto L_11834e05;
  /* 11834d0e mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834d13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11834d15 je 0x11834df7 */
  if (C.zf) goto L_11834df7;
  /* 11834d1b mov ecx, dword ptr [0x1183fa8c] */
  ECX = (r32((uint32_t)(0x1183fa8c)));
  /* 11834d21 mov esi, dword ptr [0x1183a060] */
  ESI = (r32((uint32_t)(0x1183a060)));
  /* 11834d27 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11834d2a add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834d2d mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11834d32 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11834d37 push ebx */
  push32((uint32_t)(EBX));
  /* 11834d38 push ecx */
  push32((uint32_t)(ECX));
  /* 11834d39 call esi */
  call_ind((uint32_t)(ESI), 0x11834d3bu);
  /* 11834d3b mov ecx, dword ptr [0x1183fa8c] */
  ECX = (r32((uint32_t)(0x1183fa8c)));
  /* 11834d41 mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834d46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11834d4b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11834d4d or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11834d50 mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834d55 mov ecx, dword ptr [0x1183fa8c] */
  ECX = (r32((uint32_t)(0x1183fa8c)));
  /* 11834d5b mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11834d5e and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11834d66 mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834d6b mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11834d6e dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11834d71 mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834d76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11834d79 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11834d7d jne 0x11834d88 */
  if (!C.zf) goto L_11834d88;
  /* 11834d7f and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11834d83 mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
L_11834d88:;
  /* 11834d88 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834d8c jne 0x11834df7 */
  if (!C.zf) goto L_11834df7;
  /* 11834d8e push ebx */
  push32((uint32_t)(EBX));
  /* 11834d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11834d91 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11834d94 call esi */
  call_ind((uint32_t)(ESI), 0x11834d96u);
  /* 11834d96 mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834d9b push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11834d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11834da0 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 11834da6 call dword ptr [0x1183a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d4))), 0x11834dacu);
  /* 11834dac mov eax, dword ptr [0x1183fa98] */
  EAX = (r32((uint32_t)(0x1183fa98)));
  /* 11834db1 mov edx, dword ptr [0x1183fa9c] */
  EDX = (r32((uint32_t)(0x1183fa9c)));
  /* 11834db7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11834dba shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11834dbd mov ecx, eax */
  ECX = (EAX);
  /* 11834dbf mov eax, dword ptr [0x1183fa94] */
  EAX = (r32((uint32_t)(0x1183fa94)));
  /* 11834dc4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834dc6 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11834dca push ecx */
  push32((uint32_t)(ECX));
  /* 11834dcb lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11834dce push ecx */
  push32((uint32_t)(ECX));
  /* 11834dcf push eax */
  push32((uint32_t)(EAX));
  /* 11834dd0 call 0x11835e70 */
  push32(0x11834dd5u); f_11835e70();
  /* 11834dd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834dd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11834ddb dec dword ptr [0x1183fa98] */
  { uint32_t _r=(r32((uint32_t)(0x1183fa98)))-1; w32((uint32_t)(0x1183fa98), (_r)); fl_dec(_r,32); }
  /* 11834de1 cmp eax, dword ptr [0x1183fa94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1183fa94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834de7 jbe 0x11834ded */
  if ((C.cf||C.zf)) goto L_11834ded;
  /* 11834de9 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11834ded:;
  /* 11834ded mov eax, dword ptr [0x1183fa9c] */
  EAX = (r32((uint32_t)(0x1183fa9c)));
  /* 11834df2 mov dword ptr [0x1183fa90], eax */
  w32((uint32_t)(0x1183fa90), (EAX));
L_11834df7:;
  /* 11834df7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834dfa mov dword ptr [0x1183fa8c], edi */
  w32((uint32_t)(0x1183fa8c), (EDI));
  /* 11834e00 mov dword ptr [0x1183fa94], eax */
  w32((uint32_t)(0x1183fa94), (EAX));
L_11834e05:;
  /* 11834e05 pop edi */
  EDI = (pop32());
  /* 11834e06 pop esi */
  ESI = (pop32());
  /* 11834e07 pop ebx */
  EBX = (pop32());
  /* 11834e08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11834e09 ret  */
  ESPCHK(0x11834ae1u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e0a @ 0x11834e0a (777 bytes, 275 insns) */
void f_11834e0a(void) {
  FTRACE(0x11834e0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11834e0a push ebp */
  push32((uint32_t)(EBP));
  /* 11834e0b mov ebp, esp */
  EBP = (ESP);
  /* 11834e0d sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834e10 mov eax, dword ptr [0x1183fa98] */
  EAX = (r32((uint32_t)(0x1183fa98)));
  /* 11834e15 mov edx, dword ptr [0x1183fa9c] */
  EDX = (r32((uint32_t)(0x1183fa9c)));
  /* 11834e1b push ebx */
  push32((uint32_t)(EBX));
  /* 11834e1c push esi */
  push32((uint32_t)(ESI));
  /* 11834e1d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11834e20 push edi */
  push32((uint32_t)(EDI));
  /* 11834e21 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11834e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834e27 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11834e2a lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11834e2d and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11834e30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11834e33 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11834e36 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11834e37 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834e3a jge 0x11834e4a */
  if ((C.sf==C.of)) goto L_11834e4a;
  /* 11834e3c or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11834e3f shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11834e41 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11834e45 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11834e48 jmp 0x11834e5a */
  goto L_11834e5a;
L_11834e4a:;
  /* 11834e4a add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834e4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11834e50 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11834e52 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11834e54 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11834e57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11834e5a:;
  /* 11834e5a mov eax, dword ptr [0x1183fa90] */
  EAX = (r32((uint32_t)(0x1183fa90)));
  /* 11834e5f mov ebx, eax */
  EBX = (EAX);
  /* 11834e61 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834e63 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11834e66 jae 0x11834e81 */
  if (!C.cf) goto L_11834e81;
L_11834e68:;
  /* 11834e68 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11834e6b mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11834e6d and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11834e70 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11834e72 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11834e74 jne 0x11834e81 */
  if (!C.zf) goto L_11834e81;
  /* 11834e76 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834e79 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834e7c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11834e7f jb 0x11834e68 */
  if (C.cf) goto L_11834e68;
L_11834e81:;
  /* 11834e81 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834e84 jne 0x11834eff */
  if (!C.zf) goto L_11834eff;
  /* 11834e86 mov ebx, edx */
  EBX = (EDX);
L_11834e88:;
  /* 11834e88 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834e8a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11834e8d jae 0x11834ea4 */
  if (!C.cf) goto L_11834ea4;
  /* 11834e8f mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11834e92 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11834e94 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11834e97 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11834e99 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11834e9b jne 0x11834ea2 */
  if (!C.zf) goto L_11834ea2;
  /* 11834e9d add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834ea0 jmp 0x11834e88 */
  goto L_11834e88;
L_11834ea2:;
  /* 11834ea2 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11834ea4:;
  /* 11834ea4 jne 0x11834eff */
  if (!C.zf) goto L_11834eff;
L_11834ea6:;
  /* 11834ea6 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ea9 jae 0x11834ebc */
  if (!C.cf) goto L_11834ebc;
  /* 11834eab cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834eaf jne 0x11834eb9 */
  if (!C.zf) goto L_11834eb9;
  /* 11834eb1 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834eb4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11834eb7 jmp 0x11834ea6 */
  goto L_11834ea6;
L_11834eb9:;
  /* 11834eb9 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11834ebc:;
  /* 11834ebc jne 0x11834ee4 */
  if (!C.zf) goto L_11834ee4;
  /* 11834ebe mov ebx, edx */
  EBX = (EDX);
L_11834ec0:;
  /* 11834ec0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ec2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11834ec5 jae 0x11834ed4 */
  if (!C.cf) goto L_11834ed4;
  /* 11834ec7 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ecb jne 0x11834ed2 */
  if (!C.zf) goto L_11834ed2;
  /* 11834ecd add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834ed0 jmp 0x11834ec0 */
  goto L_11834ec0;
L_11834ed2:;
  /* 11834ed2 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11834ed4:;
  /* 11834ed4 jne 0x11834ee4 */
  if (!C.zf) goto L_11834ee4;
  /* 11834ed6 call 0x11835113 */
  push32(0x11834edbu); f_11835113();
  /* 11834edb mov ebx, eax */
  EBX = (EAX);
  /* 11834edd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11834edf mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11834ee2 je 0x11834ef8 */
  if (C.zf) goto L_11834ef8;
L_11834ee4:;
  /* 11834ee4 push ebx */
  push32((uint32_t)(EBX));
  /* 11834ee5 call 0x118351c4 */
  push32(0x11834eeau); f_118351c4();
  /* 11834eea pop ecx */
  ECX = (pop32());
  /* 11834eeb mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11834eee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11834ef0 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11834ef3 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834ef6 jne 0x11834eff */
  if (!C.zf) goto L_11834eff;
L_11834ef8:;
  /* 11834ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11834efa jmp 0x1183510e */
  goto L_1183510e;
L_11834eff:;
  /* 11834eff mov dword ptr [0x1183fa90], ebx */
  w32((uint32_t)(0x1183fa90), (EBX));
  /* 11834f05 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11834f08 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11834f0a cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834f0d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11834f10 je 0x11834f26 */
  if (C.zf) goto L_11834f26;
  /* 11834f12 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11834f19 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11834f1d and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11834f20 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11834f22 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11834f24 jne 0x11834f5d */
  if (!C.zf) goto L_11834f5d;
L_11834f26:;
  /* 11834f26 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11834f2c mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11834f2f and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11834f32 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11834f35 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11834f39 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11834f3c or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11834f3e mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11834f41 jne 0x11834f5a */
  if (!C.zf) goto L_11834f5a;
L_11834f43:;
  /* 11834f43 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11834f49 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11834f4c and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11834f4f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11834f52 mov edi, esi */
  EDI = (ESI);
  /* 11834f54 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11834f56 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11834f58 je 0x11834f43 */
  if (C.zf) goto L_11834f43;
L_11834f5a:;
  /* 11834f5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11834f5d:;
  /* 11834f5d mov ecx, edx */
  ECX = (EDX);
  /* 11834f5f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11834f61 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11834f67 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11834f6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11834f71 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11834f75 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11834f77 jne 0x11834f86 */
  if (!C.zf) goto L_11834f86;
  /* 11834f79 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11834f80 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11834f82 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11834f85 pop edi */
  EDI = (pop32());
L_11834f86:;
  /* 11834f86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11834f88 jl 0x11834f8f */
  if ((C.sf!=C.of)) goto L_11834f8f;
  /* 11834f8a shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11834f8c inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11834f8d jmp 0x11834f86 */
  goto L_11834f86;
L_11834f8f:;
  /* 11834f8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11834f92 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11834f96 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11834f98 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11834f9b mov esi, ecx */
  ESI = (ECX);
  /* 11834f9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11834fa0 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11834fa3 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11834fa4 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834fa7 jle 0x11834fac */
  if ((C.zf||C.sf!=C.of)) goto L_11834fac;
  /* 11834fa9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11834fab pop esi */
  ESI = (pop32());
L_11834fac:;
  /* 11834fac cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834fae je 0x118350c1 */
  if (C.zf) goto L_118350c1;
  /* 11834fb4 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11834fb7 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834fba jne 0x1183501d */
  if (!C.zf) goto L_1183501d;
  /* 11834fbc cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11834fbf jge 0x11834fec */
  if ((C.sf==C.of)) goto L_11834fec;
  /* 11834fc1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834fc6 mov ecx, edi */
  ECX = (EDI);
  /* 11834fc8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11834fcd lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11834fd1 not ebx */
  EBX = (~(EBX));
  /* 11834fd3 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11834fd6 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11834fda mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11834fde dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11834fe0 jne 0x1183501a */
  if (!C.zf) goto L_1183501a;
  /* 11834fe2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11834fe5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11834fe8 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11834fea jmp 0x1183501d */
  goto L_1183501d;
L_11834fec:;
  /* 11834fec lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11834fef mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11834ff4 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11834ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11834ff9 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11834ffd lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11835004 not ebx */
  EBX = (~(EBX));
  /* 11835006 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11835008 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1183500a mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1183500d jne 0x1183501a */
  if (!C.zf) goto L_1183501a;
  /* 1183500f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835012 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11835015 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11835018 jmp 0x1183501d */
  goto L_1183501d;
L_1183501a:;
  /* 1183501a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1183501d:;
  /* 1183501d mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11835020 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11835023 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835027 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1183502a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1183502d mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11835030 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11835033 je 0x118350cd */
  if (C.zf) goto L_118350cd;
  /* 11835039 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1183503c mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11835040 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11835043 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11835046 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11835049 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1183504c mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1183504f mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11835052 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11835055 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835058 jne 0x118350be */
  if (!C.zf) goto L_118350be;
  /* 1183505a mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1183505e cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835061 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11835064 jge 0x1183508f */
  if ((C.sf==C.of)) goto L_1183508f;
  /* 11835066 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11835068 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183506c mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11835070 jne 0x1183507d */
  if (!C.zf) goto L_1183507d;
  /* 11835072 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11835077 mov ecx, esi */
  ECX = (ESI);
  /* 11835079 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1183507b or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1183507d:;
  /* 1183507d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11835082 mov ecx, esi */
  ECX = (ESI);
  /* 11835084 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11835086 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835089 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1183508d jmp 0x118350be */
  goto L_118350be;
L_1183508f:;
  /* 1183508f inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11835091 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835095 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11835099 jne 0x118350a8 */
  if (!C.zf) goto L_118350a8;
  /* 1183509b lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1183509e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 118350a3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 118350a5 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_118350a8:;
  /* 118350a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118350ab lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 118350b2 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118350b5 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118350ba shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 118350bc or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_118350be:;
  /* 118350be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_118350c1:;
  /* 118350c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118350c3 je 0x118350d0 */
  if (C.zf) goto L_118350d0;
  /* 118350c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118350c7 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 118350cb jmp 0x118350d0 */
  goto L_118350d0;
L_118350cd:;
  /* 118350cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_118350d0:;
  /* 118350d0 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 118350d3 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118350d5 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 118350d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118350da mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 118350de mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118350e1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118350e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118350e5 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 118350e8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118350ea jne 0x11835106 */
  if (!C.zf) goto L_11835106;
  /* 118350ec cmp ebx, dword ptr [0x1183fa94] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1183fa94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118350f2 jne 0x11835106 */
  if (!C.zf) goto L_11835106;
  /* 118350f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118350f7 cmp ecx, dword ptr [0x1183fa8c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1183fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118350fd jne 0x11835106 */
  if (!C.zf) goto L_11835106;
  /* 118350ff and dword ptr [0x1183fa94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1183fa94)))&(0x0u); w32((uint32_t)(0x1183fa94), (_r)); fl_logic(_r,32); }
L_11835106:;
  /* 11835106 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835109 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1183510b lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1183510e:;
  /* 1183510e pop edi */
  EDI = (pop32());
  /* 1183510f pop esi */
  ESI = (pop32());
  /* 11835110 pop ebx */
  EBX = (pop32());
  /* 11835111 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835112 ret  */
  ESPCHK(0x11834e0au, _esp0);
  ESP += 4; return;
}

/* FUN_10005113 @ 0x11835113 (177 bytes, 53 insns) */
void f_11835113(void) {
  FTRACE(0x11835113u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835113 mov eax, dword ptr [0x1183fa98] */
  EAX = (r32((uint32_t)(0x1183fa98)));
  /* 11835118 mov ecx, dword ptr [0x1183fa88] */
  ECX = (r32((uint32_t)(0x1183fa88)));
  /* 1183511e push esi */
  push32((uint32_t)(ESI));
  /* 1183511f push edi */
  push32((uint32_t)(EDI));
  /* 11835120 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11835122 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835124 jne 0x11835156 */
  if (!C.zf) goto L_11835156;
  /* 11835126 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1183512a shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1183512d push eax */
  push32((uint32_t)(EAX));
  /* 1183512e push dword ptr [0x1183fa9c] */
  push32((uint32_t)(r32((uint32_t)(0x1183fa9c))));
  /* 11835134 push edi */
  push32((uint32_t)(EDI));
  /* 11835135 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 1183513b call dword ptr [0x1183a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a058))), 0x11835141u);
  /* 11835141 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835143 je 0x118351a6 */
  if (C.zf) goto L_118351a6;
  /* 11835145 add dword ptr [0x1183fa88], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1183fa88))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1183fa88), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183514c mov dword ptr [0x1183fa9c], eax */
  w32((uint32_t)(0x1183fa9c), (EAX));
  /* 11835151 mov eax, dword ptr [0x1183fa98] */
  EAX = (r32((uint32_t)(0x1183fa98)));
L_11835156:;
  /* 11835156 mov ecx, dword ptr [0x1183fa9c] */
  ECX = (r32((uint32_t)(0x1183fa9c)));
  /* 1183515c push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11835161 push 8 */
  push32((uint32_t)(0x8u));
  /* 11835163 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11835166 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 1183516c lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1183516f call dword ptr [0x1183a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d8))), 0x11835175u);
  /* 11835175 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835177 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1183517a je 0x118351a6 */
  if (C.zf) goto L_118351a6;
  /* 1183517c push 4 */
  push32((uint32_t)(0x4u));
  /* 1183517e push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11835183 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11835188 push edi */
  push32((uint32_t)(EDI));
  /* 11835189 call dword ptr [0x1183a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a054))), 0x1183518fu);
  /* 1183518f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835191 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11835194 jne 0x118351aa */
  if (!C.zf) goto L_118351aa;
  /* 11835196 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11835199 push edi */
  push32((uint32_t)(EDI));
  /* 1183519a push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 118351a0 call dword ptr [0x1183a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d4))), 0x118351a6u);
L_118351a6:;
  /* 118351a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118351a8 jmp 0x118351c1 */
  goto L_118351c1;
L_118351aa:;
  /* 118351aa or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 118351ae mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118351b0 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 118351b3 inc dword ptr [0x1183fa98] */
  { uint32_t _r=(r32((uint32_t)(0x1183fa98)))+1; w32((uint32_t)(0x1183fa98), (_r)); fl_inc(_r,32); }
  /* 118351b9 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118351bc or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118351bf mov eax, esi */
  EAX = (ESI);
L_118351c1:;
  /* 118351c1 pop edi */
  EDI = (pop32());
  /* 118351c2 pop esi */
  ESI = (pop32());
  /* 118351c3 ret  */
  ESPCHK(0x11835113u, _esp0);
  ESP += 4; return;
}

/* FUN_100051c4 @ 0x118351c4 (251 bytes, 85 insns) */
void f_118351c4(void) {
  FTRACE(0x118351c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118351c4 push ebp */
  push32((uint32_t)(EBP));
  /* 118351c5 mov ebp, esp */
  EBP = (ESP);
  /* 118351c7 push ecx */
  push32((uint32_t)(ECX));
  /* 118351c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118351cb push ebx */
  push32((uint32_t)(EBX));
  /* 118351cc push esi */
  push32((uint32_t)(ESI));
  /* 118351cd push edi */
  push32((uint32_t)(EDI));
  /* 118351ce mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 118351d1 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 118351d4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118351d6:;
  /* 118351d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118351d8 jl 0x118351df */
  if ((C.sf!=C.of)) goto L_118351df;
  /* 118351da shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118351dc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118351dd jmp 0x118351d6 */
  goto L_118351d6;
L_118351df:;
  /* 118351df mov eax, ebx */
  EAX = (EBX);
  /* 118351e1 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118351e3 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118351e9 pop edx */
  EDX = (pop32());
  /* 118351ea lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 118351f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118351f4:;
  /* 118351f4 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 118351f7 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 118351fa add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118351fd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 118351fe jne 0x118351f4 */
  if (!C.zf) goto L_118351f4;
  /* 11835200 mov edi, ebx */
  EDI = (EBX);
  /* 11835202 push 4 */
  push32((uint32_t)(0x4u));
  /* 11835204 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11835207 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183520a push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1183520f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11835214 push edi */
  push32((uint32_t)(EDI));
  /* 11835215 call dword ptr [0x1183a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a054))), 0x1183521bu);
  /* 1183521b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1183521d jne 0x11835227 */
  if (!C.zf) goto L_11835227;
  /* 1183521f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11835222 jmp 0x118352ba */
  goto L_118352ba;
L_11835227:;
  /* 11835227 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1183522d cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183522f ja 0x1183526d */
  if ((!C.cf&&!C.zf)) goto L_1183526d;
  /* 11835231 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11835234:;
  /* 11835234 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11835238 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1183523f lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11835245 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1183524c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1183524e lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11835254 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11835257 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11835261 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835266 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11835269 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183526b jbe 0x11835234 */
  if ((C.cf||C.zf)) goto L_11835234;
L_1183526d:;
  /* 1183526d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835270 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11835273 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835278 push 1 */
  push32((uint32_t)(0x1u));
  /* 1183527a pop edi */
  EDI = (pop32());
  /* 1183527b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1183527e mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11835281 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11835284 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11835287 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1183528a and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1183528f mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11835296 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11835299 mov cl, al */
  CL = (AL);
  /* 1183529b inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1183529d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1183529f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118352a2 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 118352a5 jne 0x118352aa */
  if (!C.zf) goto L_118352aa;
  /* 118352a7 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118352aa:;
  /* 118352aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 118352af mov ecx, ebx */
  ECX = (EBX);
  /* 118352b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118352b3 not edx */
  EDX = (~(EDX));
  /* 118352b5 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 118352b8 mov eax, ebx */
  EAX = (EBX);
L_118352ba:;
  /* 118352ba pop edi */
  EDI = (pop32());
  /* 118352bb pop esi */
  ESI = (pop32());
  /* 118352bc pop ebx */
  EBX = (pop32());
  /* 118352bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118352be ret  */
  ESPCHK(0x118351c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100052bf @ 0x118352bf (758 bytes, 259 insns) */
void f_118352bf(void) {
  FTRACE(0x118352bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118352bf push ebp */
  push32((uint32_t)(EBP));
  /* 118352c0 mov ebp, esp */
  EBP = (ESP);
  /* 118352c2 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118352c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118352c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118352cb push ebx */
  push32((uint32_t)(EBX));
  /* 118352cc push esi */
  push32((uint32_t)(ESI));
  /* 118352cd push edi */
  push32((uint32_t)(EDI));
  /* 118352ce mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118352d1 mov edx, edi */
  EDX = (EDI);
  /* 118352d3 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 118352d6 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118352d9 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 118352dc and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 118352df shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 118352e2 mov ecx, edx */
  ECX = (EDX);
  /* 118352e4 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118352ea lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 118352f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118352f4 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 118352f7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118352f8 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118352fa mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118352fd mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11835301 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11835305 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11835308 jle 0x1183546d */
  if ((C.zf||C.sf!=C.of)) goto L_1183546d;
  /* 1183530e test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11835311 jne 0x11835466 */
  if (!C.zf) goto L_11835466;
  /* 11835317 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835319 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183531b jg 0x11835466 */
  if ((!C.zf&&C.sf==C.of)) goto L_11835466;
  /* 11835321 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835324 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11835327 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11835328 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183532b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1183532e jbe 0x11835336 */
  if ((C.cf||C.zf)) goto L_11835336;
  /* 11835330 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11835332 pop ecx */
  ECX = (pop32());
  /* 11835333 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11835336:;
  /* 11835336 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11835339 cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183533c jne 0x11835386 */
  if (!C.zf) goto L_11835386;
  /* 1183533e cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835341 jae 0x11835362 */
  if (!C.cf) goto L_11835362;
  /* 11835343 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11835348 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1183534a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1183534d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11835351 not ebx */
  EBX = (~(EBX));
  /* 11835353 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11835357 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11835359 jne 0x11835386 */
  if (!C.zf) goto L_11835386;
  /* 1183535b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183535e and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11835360 jmp 0x11835386 */
  goto L_11835386;
L_11835362:;
  /* 11835362 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835365 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1183536a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1183536c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1183536f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11835373 not ebx */
  EBX = (~(EBX));
  /* 11835375 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1183537c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1183537e jne 0x11835386 */
  if (!C.zf) goto L_11835386;
  /* 11835380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835383 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11835386:;
  /* 11835386 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11835389 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 1183538c mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 1183538f mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11835392 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11835395 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11835398 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1183539b sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183539d add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118353a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118353a4 jle 0x11835454 */
  if ((C.zf||C.sf!=C.of)) goto L_11835454;
  /* 118353aa mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 118353ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118353b0 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 118353b3 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118353b4 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 118353b8 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118353bb jbe 0x118353c0 */
  if ((C.cf||C.zf)) goto L_118353c0;
  /* 118353bd push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118353bf pop edi */
  EDI = (pop32());
L_118353c0:;
  /* 118353c0 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 118353c3 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 118353c6 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 118353c9 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 118353cc mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 118353cf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118353d2 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 118353d5 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 118353d8 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 118353db mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118353de mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 118353e1 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118353e4 jne 0x11835442 */
  if (!C.zf) goto L_11835442;
  /* 118353e6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 118353ea cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118353ed mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 118353f0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 118353f2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 118353f6 jae 0x11835419 */
  if (!C.cf) goto L_11835419;
  /* 118353f8 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118353fc jne 0x1183540c */
  if (!C.zf) goto L_1183540c;
  /* 118353fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11835403 mov ecx, edi */
  ECX = (EDI);
  /* 11835405 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11835407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183540a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1183540c:;
  /* 1183540c lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11835410 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11835415 mov ecx, edi */
  ECX = (EDI);
  /* 11835417 jmp 0x1183543e */
  goto L_1183543e;
L_11835419:;
  /* 11835419 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183541d jne 0x1183542f */
  if (!C.zf) goto L_1183542f;
  /* 1183541f lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11835422 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11835427 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11835429 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183542c or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1183542f:;
  /* 1183542f lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11835436 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11835439 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_1183543e:;
  /* 1183543e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11835440 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11835442:;
  /* 11835442 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11835445 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835448 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 1183544c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1183544e mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11835452 jmp 0x11835457 */
  goto L_11835457;
L_11835454:;
  /* 11835454 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11835457:;
  /* 11835457 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 1183545a mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 1183545d mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11835461 jmp 0x118355ad */
  goto L_118355ad;
L_11835466:;
  /* 11835466 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11835468 jmp 0x118355b0 */
  goto L_118355b0;
L_1183546d:;
  /* 1183546d jge 0x118355ad */
  if ((C.sf==C.of)) goto L_118355ad;
  /* 11835473 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11835476 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835479 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1183547c mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 1183547f lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11835483 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11835486 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11835489 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1183548c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1183548d mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11835490 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835493 jbe 0x11835498 */
  if ((C.cf||C.zf)) goto L_11835498;
  /* 11835495 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11835497 pop esi */
  ESI = (pop32());
L_11835498:;
  /* 11835498 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1183549c jne 0x11835527 */
  if (!C.zf) goto L_11835527;
  /* 118354a2 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 118354a5 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 118354a8 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118354a9 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118354ac jbe 0x118354b1 */
  if ((C.cf||C.zf)) goto L_118354b1;
  /* 118354ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118354b0 pop esi */
  ESI = (pop32());
L_118354b1:;
  /* 118354b1 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 118354b4 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118354b7 jne 0x11835500 */
  if (!C.zf) goto L_11835500;
  /* 118354b9 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118354bc jae 0x118354dc */
  if (!C.cf) goto L_118354dc;
  /* 118354be mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118354c3 mov ecx, esi */
  ECX = (ESI);
  /* 118354c5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118354c7 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 118354cb not ebx */
  EBX = (~(EBX));
  /* 118354cd and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 118354d1 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 118354d3 jne 0x118354fd */
  if (!C.zf) goto L_118354fd;
  /* 118354d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118354d8 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 118354da jmp 0x118354fd */
  goto L_118354fd;
L_118354dc:;
  /* 118354dc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 118354df mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 118354e4 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 118354e6 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 118354ea not ebx */
  EBX = (~(EBX));
  /* 118354ec and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 118354f3 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 118354f5 jne 0x118354fd */
  if (!C.zf) goto L_118354fd;
  /* 118354f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118354fa and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_118354fd:;
  /* 118354fd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11835500:;
  /* 11835500 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11835503 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11835506 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11835509 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 1183550c mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 1183550f mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11835512 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11835515 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835518 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 1183551b sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1183551e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1183551f cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835522 jbe 0x11835527 */
  if ((C.cf||C.zf)) goto L_11835527;
  /* 11835524 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11835526 pop esi */
  ESI = (pop32());
L_11835527:;
  /* 11835527 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1183552a mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1183552e lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11835531 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11835534 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11835537 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 1183553a mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1183553d mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11835540 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11835543 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835546 jne 0x118355a4 */
  if (!C.zf) goto L_118355a4;
  /* 11835548 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1183554c cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183554f mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11835552 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11835554 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11835558 jae 0x1183557b */
  if (!C.cf) goto L_1183557b;
  /* 1183555a cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183555e jne 0x1183556e */
  if (!C.zf) goto L_1183556e;
  /* 11835560 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11835565 mov ecx, esi */
  ECX = (ESI);
  /* 11835567 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11835569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183556c or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1183556e:;
  /* 1183556e lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11835572 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11835577 mov ecx, esi */
  ECX = (ESI);
  /* 11835579 jmp 0x118355a0 */
  goto L_118355a0;
L_1183557b:;
  /* 1183557b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1183557f jne 0x11835591 */
  if (!C.zf) goto L_11835591;
  /* 11835581 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11835584 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11835589 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1183558b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1183558e or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11835591:;
  /* 11835591 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11835598 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1183559b mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_118355a0:;
  /* 118355a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 118355a2 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_118355a4:;
  /* 118355a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118355a7 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 118355a9 mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_118355ad:;
  /* 118355ad push 1 */
  push32((uint32_t)(0x1u));
  /* 118355af pop eax */
  EAX = (pop32());
L_118355b0:;
  /* 118355b0 pop edi */
  EDI = (pop32());
  /* 118355b1 pop esi */
  ESI = (pop32());
  /* 118355b2 pop ebx */
  EBX = (pop32());
  /* 118355b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118355b4 ret  */
  ESPCHK(0x118352bfu, _esp0);
  ESP += 4; return;
}

/* FUN_100055b5 @ 0x118355b5 (324 bytes, 102 insns) */
void f_118355b5(void) {
  FTRACE(0x118355b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118355b5 cmp dword ptr [0x1183c8c8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1183c8c8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118355bc push ebx */
  push32((uint32_t)(EBX));
  /* 118355bd push ebp */
  push32((uint32_t)(EBP));
  /* 118355be push esi */
  push32((uint32_t)(ESI));
  /* 118355bf push edi */
  push32((uint32_t)(EDI));
  /* 118355c0 jne 0x118355c9 */
  if (!C.zf) goto L_118355c9;
  /* 118355c2 mov esi, 0x1183c8b8 */
  ESI = (0x1183c8b8u);
  /* 118355c7 jmp 0x118355e6 */
  goto L_118355e6;
L_118355c9:;
  /* 118355c9 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 118355ce push 0 */
  push32((uint32_t)(0x0u));
  /* 118355d0 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 118355d6 call dword ptr [0x1183a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d8))), 0x118355dcu);
  /* 118355dc mov esi, eax */
  ESI = (EAX);
  /* 118355de test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118355e0 je 0x118356f2 */
  if (C.zf) goto L_118356f2;
L_118355e6:;
  /* 118355e6 mov ebp, dword ptr [0x1183a054] */
  EBP = (r32((uint32_t)(0x1183a054)));
  /* 118355ec push 4 */
  push32((uint32_t)(0x4u));
  /* 118355ee push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 118355f3 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 118355f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 118355fa call ebp */
  call_ind((uint32_t)(EBP), 0x118355fcu);
  /* 118355fc mov edi, eax */
  EDI = (EAX);
  /* 118355fe test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11835600 je 0x118356db */
  if (C.zf) goto L_118356db;
  /* 11835606 push 4 */
  push32((uint32_t)(0x4u));
  /* 11835608 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1183560d push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11835612 push ebx */
  push32((uint32_t)(EBX));
  /* 11835613 push edi */
  push32((uint32_t)(EDI));
  /* 11835614 call ebp */
  call_ind((uint32_t)(EBP), 0x11835616u);
  /* 11835616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835618 je 0x118356cd */
  if (C.zf) goto L_118356cd;
  /* 1183561e mov eax, 0x1183c8b8 */
  EAX = (0x1183c8b8u);
  /* 11835623 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835625 jne 0x11835645 */
  if (!C.zf) goto L_11835645;
  /* 11835627 cmp dword ptr [0x1183c8b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183c8b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183562e jne 0x11835635 */
  if (!C.zf) goto L_11835635;
  /* 11835630 mov dword ptr [0x1183c8b8], eax */
  w32((uint32_t)(0x1183c8b8), (EAX));
L_11835635:;
  /* 11835635 cmp dword ptr [0x1183c8bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1183c8bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183563c jne 0x1183565a */
  if (!C.zf) goto L_1183565a;
  /* 1183563e mov dword ptr [0x1183c8bc], eax */
  w32((uint32_t)(0x1183c8bc), (EAX));
  /* 11835643 jmp 0x1183565a */
  goto L_1183565a;
L_11835645:;
  /* 11835645 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11835647 mov eax, dword ptr [0x1183c8bc] */
  EAX = (r32((uint32_t)(0x1183c8bc)));
  /* 1183564c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1183564f mov dword ptr [0x1183c8bc], esi */
  w32((uint32_t)(0x1183c8bc), (ESI));
  /* 11835655 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11835658 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1183565a:;
  /* 1183565a lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11835660 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11835666 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11835669 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1183566c mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1183566f mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11835672 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11835675 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11835677 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1183567c:;
  /* 1183567c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1183567e cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835681 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11835684 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11835685 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11835687 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11835688 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11835689 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1183568b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1183568e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835691 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835697 jl 0x1183567c */
  if ((C.sf!=C.of)) goto L_1183567c;
  /* 11835699 push ebx */
  push32((uint32_t)(EBX));
  /* 1183569a push 0 */
  push32((uint32_t)(0x0u));
  /* 1183569c push edi */
  push32((uint32_t)(EDI));
  /* 1183569d call 0x11836b60 */
  push32(0x118356a2u); f_11836b60();
  /* 118356a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118356a5:;
  /* 118356a5 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118356a8 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118356aa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118356ac jae 0x118356c9 */
  if (!C.cf) goto L_118356c9;
  /* 118356ae or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 118356b5 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 118356b8 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118356ba mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 118356c1 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118356c7 jmp 0x118356a5 */
  goto L_118356a5;
L_118356c9:;
  /* 118356c9 mov eax, esi */
  EAX = (ESI);
  /* 118356cb jmp 0x118356f4 */
  goto L_118356f4;
L_118356cd:;
  /* 118356cd push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 118356d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118356d4 push edi */
  push32((uint32_t)(EDI));
  /* 118356d5 call dword ptr [0x1183a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a060))), 0x118356dbu);
L_118356db:;
  /* 118356db cmp esi, 0x1183c8b8 */
  { uint32_t _a=(ESI),_b=(0x1183c8b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118356e1 je 0x118356f2 */
  if (C.zf) goto L_118356f2;
  /* 118356e3 push esi */
  push32((uint32_t)(ESI));
  /* 118356e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118356e6 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 118356ec call dword ptr [0x1183a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d4))), 0x118356f2u);
L_118356f2:;
  /* 118356f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118356f4:;
  /* 118356f4 pop edi */
  EDI = (pop32());
  /* 118356f5 pop esi */
  ESI = (pop32());
  /* 118356f6 pop ebp */
  EBP = (pop32());
  /* 118356f7 pop ebx */
  EBX = (pop32());
  /* 118356f8 ret  */
  ESPCHK(0x118355b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f9 @ 0x118356f9 (86 bytes, 27 insns) */
void f_118356f9(void) {
  FTRACE(0x118356f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118356f9 push esi */
  push32((uint32_t)(ESI));
  /* 118356fa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118356fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11835703 push 0 */
  push32((uint32_t)(0x0u));
  /* 11835705 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11835708 call dword ptr [0x1183a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a060))), 0x1183570eu);
  /* 1183570e cmp dword ptr [0x1183e8d8], esi */
  { uint32_t _a=(r32((uint32_t)(0x1183e8d8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835714 jne 0x1183571e */
  if (!C.zf) goto L_1183571e;
  /* 11835716 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11835719 mov dword ptr [0x1183e8d8], eax */
  w32((uint32_t)(0x1183e8d8), (EAX));
L_1183571e:;
  /* 1183571e cmp esi, 0x1183c8b8 */
  { uint32_t _a=(ESI),_b=(0x1183c8b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835724 je 0x11835746 */
  if (C.zf) goto L_11835746;
  /* 11835726 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11835729 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1183572b push esi */
  push32((uint32_t)(ESI));
  /* 1183572c push 0 */
  push32((uint32_t)(0x0u));
  /* 1183572e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11835730 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11835732 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11835735 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11835738 push dword ptr [0x1183faa4] */
  push32((uint32_t)(r32((uint32_t)(0x1183faa4))));
  /* 1183573e call dword ptr [0x1183a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a0d4))), 0x11835744u);
  /* 11835744 pop esi */
  ESI = (pop32());
  /* 11835745 ret  */
  ESPCHK(0x118356f9u, _esp0);
  ESP += 4; return;
L_11835746:;
  /* 11835746 or dword ptr [0x1183c8c8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1183c8c8)))|(0xffffffffu); w32((uint32_t)(0x1183c8c8), (_r)); fl_logic(_r,32); }
  /* 1183574d pop esi */
  ESI = (pop32());
  /* 1183574e ret  */
  ESPCHK(0x118356f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000574f @ 0x1183574f (194 bytes, 66 insns) */
void f_1183574f(void) {
  FTRACE(0x1183574fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1183574f push ebp */
  push32((uint32_t)(EBP));
  /* 11835750 mov ebp, esp */
  EBP = (ESP);
  /* 11835752 push ecx */
  push32((uint32_t)(ECX));
  /* 11835753 push ebx */
  push32((uint32_t)(EBX));
  /* 11835754 push esi */
  push32((uint32_t)(ESI));
  /* 11835755 mov esi, dword ptr [0x1183c8bc] */
  ESI = (r32((uint32_t)(0x1183c8bc)));
  /* 1183575b push edi */
  push32((uint32_t)(EDI));
L_1183575c:;
  /* 1183575c cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835760 je 0x118357fa */
  if (C.zf) goto L_118357fa;
  /* 11835766 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1183576a lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11835770 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11835775:;
  /* 11835775 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183577b jne 0x118357b6 */
  if (!C.zf) goto L_118357b6;
  /* 1183577d mov eax, ebx */
  EAX = (EBX);
  /* 1183577f push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11835784 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835787 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1183578c push eax */
  push32((uint32_t)(EAX));
  /* 1183578d call dword ptr [0x1183a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a060))), 0x11835793u);
  /* 11835793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835795 je 0x118357b6 */
  if (C.zf) goto L_118357b6;
  /* 11835797 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1183579a dec dword ptr [0x1183f76c] */
  { uint32_t _r=(r32((uint32_t)(0x1183f76c)))-1; w32((uint32_t)(0x1183f76c), (_r)); fl_dec(_r,32); }
  /* 118357a0 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118357a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118357a5 je 0x118357ab */
  if (C.zf) goto L_118357ab;
  /* 118357a7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118357a9 jbe 0x118357ae */
  if ((C.cf||C.zf)) goto L_118357ae;
L_118357ab:;
  /* 118357ab mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_118357ae:;
  /* 118357ae inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118357b1 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 118357b4 je 0x118357c3 */
  if (C.zf) goto L_118357c3;
L_118357b6:;
  /* 118357b6 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118357bc sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118357bf test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118357c1 jge 0x11835775 */
  if ((C.sf==C.of)) goto L_11835775;
L_118357c3:;
  /* 118357c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118357c7 mov ecx, esi */
  ECX = (ESI);
  /* 118357c9 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 118357cc je 0x118357fa */
  if (C.zf) goto L_118357fa;
  /* 118357ce cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118357d2 jne 0x118357fa */
  if (!C.zf) goto L_118357fa;
  /* 118357d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118357d6 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 118357d9 pop edx */
  EDX = (pop32());
L_118357da:;
  /* 118357da cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118357dd jne 0x118357eb */
  if (!C.zf) goto L_118357eb;
  /* 118357df inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118357e0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118357e3 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118357e9 jl 0x118357da */
  if ((C.sf!=C.of)) goto L_118357da;
L_118357eb:;
  /* 118357eb cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118357f1 jne 0x118357fa */
  if (!C.zf) goto L_118357fa;
  /* 118357f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118357f4 call 0x118356f9 */
  push32(0x118357f9u); f_118356f9();
  /* 118357f9 pop ecx */
  ECX = (pop32());
L_118357fa:;
  /* 118357fa cmp esi, dword ptr [0x1183c8bc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183c8bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835800 je 0x1183580c */
  if (C.zf) goto L_1183580c;
  /* 11835802 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835806 jg 0x1183575c */
  if ((!C.zf&&C.sf==C.of)) goto L_1183575c;
L_1183580c:;
  /* 1183580c pop edi */
  EDI = (pop32());
  /* 1183580d pop esi */
  ESI = (pop32());
  /* 1183580e pop ebx */
  EBX = (pop32());
  /* 1183580f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835810 ret  */
  ESPCHK(0x1183574fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005811 @ 0x11835811 (87 bytes, 34 insns) */
void f_11835811(void) {
  FTRACE(0x11835811u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835811 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11835815 mov edx, 0x1183c8b8 */
  EDX = (0x1183c8b8u);
  /* 1183581a push esi */
  push32((uint32_t)(ESI));
  /* 1183581b mov ecx, edx */
  ECX = (EDX);
L_1183581d:;
  /* 1183581d cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835820 jbe 0x11835827 */
  if ((C.cf||C.zf)) goto L_11835827;
  /* 11835822 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835825 jb 0x1183582f */
  if (C.cf) goto L_1183582f;
L_11835827:;
  /* 11835827 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11835829 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183582b je 0x11835864 */
  if (C.zf) goto L_11835864;
  /* 1183582d jmp 0x1183581d */
  goto L_1183581d;
L_1183582f:;
  /* 1183582f test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11835831 jne 0x11835864 */
  if (!C.zf) goto L_11835864;
  /* 11835833 mov esi, eax */
  ESI = (EAX);
  /* 11835835 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1183583a and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11835840 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835842 jb 0x11835864 */
  if (C.cf) goto L_11835864;
  /* 11835844 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11835848 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1183584a mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1183584e mov ecx, eax */
  ECX = (EAX);
  /* 11835850 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11835855 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835857 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11835859 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183585b pop esi */
  ESI = (pop32());
  /* 1183585c sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1183585f lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11835863 ret  */
  ESPCHK(0x11835811u, _esp0);
  ESP += 4; return;
L_11835864:;
  /* 11835864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11835866 pop esi */
  ESI = (pop32());
  /* 11835867 ret  */
  ESPCHK(0x11835811u, _esp0);
  ESP += 4; return;
}

/* FUN_10005868 @ 0x11835868 (69 bytes, 19 insns) */
void f_11835868(void) {
  FTRACE(0x11835868u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835868 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1183586c mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11835870 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835873 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11835876 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1183587a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1183587e movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11835881 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11835883 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11835886 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183588c mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11835893 jne 0x118358ac */
  if (!C.zf) goto L_118358ac;
  /* 11835895 inc dword ptr [0x1183f76c] */
  { uint32_t _r=(r32((uint32_t)(0x1183f76c)))+1; w32((uint32_t)(0x1183f76c), (_r)); fl_inc(_r,32); }
  /* 1183589b cmp dword ptr [0x1183f76c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1183f76c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118358a2 jne 0x118358ac */
  if (!C.zf) goto L_118358ac;
  /* 118358a4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118358a6 call 0x1183574f */
  push32(0x118358abu); f_1183574f();
  /* 118358ab pop ecx */
  ECX = (pop32());
L_118358ac:;
  /* 118358ac ret  */
  ESPCHK(0x11835868u, _esp0);
  ESP += 4; return;
}

/* FUN_100058ad @ 0x118358ad (520 bytes, 180 insns) */
void f_118358ad(void) {
  FTRACE(0x118358adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118358ad push ebp */
  push32((uint32_t)(EBP));
  /* 118358ae mov ebp, esp */
  EBP = (ESP);
  /* 118358b0 push ecx */
  push32((uint32_t)(ECX));
  /* 118358b1 push ecx */
  push32((uint32_t)(ECX));
  /* 118358b2 push ebx */
  push32((uint32_t)(EBX));
  /* 118358b3 push esi */
  push32((uint32_t)(ESI));
  /* 118358b4 mov esi, dword ptr [0x1183e8d8] */
  ESI = (r32((uint32_t)(0x1183e8d8)));
  /* 118358ba push edi */
  push32((uint32_t)(EDI));
L_118358bb:;
  /* 118358bb mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 118358be cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118358c1 je 0x11835966 */
  if (C.zf) goto L_11835966;
  /* 118358c7 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 118358ca lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 118358d0 mov eax, edi */
  EAX = (EDI);
  /* 118358d2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118358d4 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118358d7 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 118358da shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118358dd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118358df cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118358e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118358e4 jae 0x11835920 */
  if (!C.cf) goto L_11835920;
L_118358e6:;
  /* 118358e6 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 118358e8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118358eb cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118358ed jl 0x11835909 */
  if ((C.sf!=C.of)) goto L_11835909;
  /* 118358ef cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118358f2 jbe 0x11835909 */
  if ((C.cf||C.zf)) goto L_11835909;
  /* 118358f4 push ebx */
  push32((uint32_t)(EBX));
  /* 118358f5 push ecx */
  push32((uint32_t)(ECX));
  /* 118358f6 push eax */
  push32((uint32_t)(EAX));
  /* 118358f7 call 0x11835ab5 */
  push32(0x118358fcu); f_11835ab5();
  /* 118358fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118358ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835901 jne 0x11835978 */
  if (!C.zf) goto L_11835978;
  /* 11835903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835906 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11835909:;
  /* 11835909 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183590c lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11835912 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835917 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1183591c jb 0x118358e6 */
  if (C.cf) goto L_118358e6;
  /* 1183591e jmp 0x11835923 */
  goto L_11835923;
L_11835920:;
  /* 11835920 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11835923:;
  /* 11835923 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11835926 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11835929 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1183592c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1183592f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835931 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11835934 jae 0x11835969 */
  if (!C.cf) goto L_11835969;
L_11835936:;
  /* 11835936 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11835938 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183593a jl 0x11835955 */
  if ((C.sf!=C.of)) goto L_11835955;
  /* 1183593c cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183593f jbe 0x11835955 */
  if ((C.cf||C.zf)) goto L_11835955;
  /* 11835941 push ebx */
  push32((uint32_t)(EBX));
  /* 11835942 push eax */
  push32((uint32_t)(EAX));
  /* 11835943 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11835946 call 0x11835ab5 */
  push32(0x1183594bu); f_11835ab5();
  /* 1183594b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1183594e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835950 jne 0x11835978 */
  if (!C.zf) goto L_11835978;
  /* 11835952 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11835955:;
  /* 11835955 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1183595c add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1183595f cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835962 jb 0x11835936 */
  if (C.cf) goto L_11835936;
  /* 11835964 jmp 0x11835969 */
  goto L_11835969;
L_11835966:;
  /* 11835966 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11835969:;
  /* 11835969 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1183596b cmp esi, dword ptr [0x1183e8d8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1183e8d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835971 je 0x11835988 */
  if (C.zf) goto L_11835988;
  /* 11835973 jmp 0x118358bb */
  goto L_118358bb;
L_11835978:;
  /* 11835978 mov dword ptr [0x1183e8d8], esi */
  w32((uint32_t)(0x1183e8d8), (ESI));
  /* 1183597e sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835980 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11835983 jmp 0x11835ab0 */
  goto L_11835ab0;
L_11835988:;
  /* 11835988 mov eax, 0x1183c8b8 */
  EAX = (0x1183c8b8u);
  /* 1183598d mov edi, eax */
  EDI = (EAX);
L_1183598f:;
  /* 1183598f cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835993 je 0x1183599b */
  if (C.zf) goto L_1183599b;
  /* 11835995 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835999 jne 0x118359a7 */
  if (!C.zf) goto L_118359a7;
L_1183599b:;
  /* 1183599b mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1183599d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1183599f je 0x11835a7c */
  if (C.zf) goto L_11835a7c;
  /* 118359a5 jmp 0x1183598f */
  goto L_1183598f;
L_118359a7:;
  /* 118359a7 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 118359aa and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118359ae mov esi, ebx */
  ESI = (EBX);
  /* 118359b0 mov eax, ebx */
  EAX = (EBX);
  /* 118359b2 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118359b4 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118359b7 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 118359ba shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 118359bd add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118359c0 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118359c3 jne 0x118359d6 */
  if (!C.zf) goto L_118359d6;
L_118359c5:;
  /* 118359c5 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118359c9 jge 0x118359d6 */
  if ((C.sf==C.of)) goto L_118359d6;
  /* 118359cb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118359ce inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118359d1 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118359d4 je 0x118359c5 */
  if (C.zf) goto L_118359c5;
L_118359d6:;
  /* 118359d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118359d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 118359db shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 118359de push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118359e3 push eax */
  push32((uint32_t)(EAX));
  /* 118359e4 push esi */
  push32((uint32_t)(ESI));
  /* 118359e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118359e8 call dword ptr [0x1183a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a054))), 0x118359eeu);
  /* 118359ee cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118359f0 jne 0x11835aae */
  if (!C.zf) goto L_11835aae;
  /* 118359f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118359f8 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 118359fb push esi */
  push32((uint32_t)(ESI));
  /* 118359fc call 0x11836b60 */
  push32(0x11835a01u); f_11836b60();
  /* 11835a01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835a04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11835a07 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11835a09 mov ecx, ebx */
  ECX = (EBX);
  /* 11835a0b jle 0x11835a3d */
  if ((C.zf||C.sf!=C.of)) goto L_11835a3d;
  /* 11835a0d lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11835a10 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11835a13:;
  /* 11835a13 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11835a1a lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11835a1d mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11835a20 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11835a25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11835a27 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11835a29 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11835a30 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835a35 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835a38 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11835a3b jne 0x11835a13 */
  if (!C.zf) goto L_11835a13;
L_11835a3d:;
  /* 11835a3d mov dword ptr [0x1183e8d8], edi */
  w32((uint32_t)(0x1183e8d8), (EDI));
  /* 11835a43 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11835a49:;
  /* 11835a49 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835a4b jae 0x11835a59 */
  if (!C.cf) goto L_11835a59;
  /* 11835a4d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835a50 je 0x11835a57 */
  if (C.zf) goto L_11835a57;
  /* 11835a52 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835a55 jmp 0x11835a49 */
  goto L_11835a49;
L_11835a57:;
  /* 11835a57 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11835a59:;
  /* 11835a59 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835a5b and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11835a5d mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11835a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835a63 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11835a66 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11835a69 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835a6b sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835a6e lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11835a72 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11835a78 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11835a7a jmp 0x11835ab0 */
  goto L_11835ab0;
L_11835a7c:;
  /* 11835a7c call 0x118355b5 */
  push32(0x11835a81u); f_118355b5();
  /* 11835a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835a83 je 0x11835aae */
  if (C.zf) goto L_11835aae;
  /* 11835a85 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11835a88 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11835a8b lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11835a8f mov dword ptr [0x1183e8d8], eax */
  w32((uint32_t)(0x1183e8d8), (EAX));
  /* 11835a94 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11835a96 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11835a9b sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835a9d mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11835aa0 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11835aa3 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835aa6 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11835aac jmp 0x11835ab0 */
  goto L_11835ab0;
L_11835aae:;
  /* 11835aae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11835ab0:;
  /* 11835ab0 pop edi */
  EDI = (pop32());
  /* 11835ab1 pop esi */
  ESI = (pop32());
  /* 11835ab2 pop ebx */
  EBX = (pop32());
  /* 11835ab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835ab4 ret  */
  ESPCHK(0x118358adu, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab5 @ 0x11835ab5 (292 bytes, 125 insns) */
void f_11835ab5(void) {
  FTRACE(0x11835ab5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835ab5 push ebp */
  push32((uint32_t)(EBP));
  /* 11835ab6 mov ebp, esp */
  EBP = (ESP);
  /* 11835ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11835ab9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835abc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11835abf push ebx */
  push32((uint32_t)(EBX));
  /* 11835ac0 push esi */
  push32((uint32_t)(ESI));
  /* 11835ac1 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11835ac4 push edi */
  push32((uint32_t)(EDI));
  /* 11835ac5 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11835ac7 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11835acd cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835acf mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11835ad2 mov eax, edi */
  EAX = (EDI);
  /* 11835ad4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11835ad7 jb 0x11835afa */
  if (C.cf) goto L_11835afa;
  /* 11835ad9 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11835adc mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11835ade cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835ae0 jae 0x11835ae9 */
  if (!C.cf) goto L_11835ae9;
  /* 11835ae2 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11835ae4 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835ae7 jmp 0x11835af2 */
  goto L_11835af2;
L_11835ae9:;
  /* 11835ae9 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11835aed lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11835af0 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11835af2:;
  /* 11835af2 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11835af5 jmp 0x11835bc8 */
  goto L_11835bc8;
L_11835afa:;
  /* 11835afa add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835afc cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835aff je 0x11835b03 */
  if (C.zf) goto L_11835b03;
  /* 11835b01 mov eax, esi */
  EAX = (ESI);
L_11835b03:;
  /* 11835b03 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11835b06 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b08 jae 0x11835b4d */
  if (!C.cf) goto L_11835b4d;
L_11835b0a:;
  /* 11835b0a mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11835b0c test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11835b0e jne 0x11835b40 */
  if (!C.zf) goto L_11835b40;
  /* 11835b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11835b12 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11835b15 pop esi */
  ESI = (pop32());
L_11835b16:;
  /* 11835b16 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835b19 jne 0x11835b1f */
  if (!C.zf) goto L_11835b1f;
  /* 11835b1b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11835b1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11835b1d jmp 0x11835b16 */
  goto L_11835b16;
L_11835b1f:;
  /* 11835b1f cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b21 jae 0x11835b71 */
  if (!C.cf) goto L_11835b71;
  /* 11835b23 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b26 jne 0x11835b2d */
  if (!C.zf) goto L_11835b2d;
  /* 11835b28 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11835b2b jmp 0x11835b39 */
  goto L_11835b39;
L_11835b2d:;
  /* 11835b2d sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835b30 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b33 jb 0x11835bd2 */
  if (C.cf) goto L_11835bd2;
L_11835b39:;
  /* 11835b39 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11835b3c mov eax, ebx */
  EAX = (EBX);
  /* 11835b3e jmp 0x11835b45 */
  goto L_11835b45;
L_11835b40:;
  /* 11835b40 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11835b43 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11835b45:;
  /* 11835b45 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11835b48 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b4b jb 0x11835b0a */
  if (C.cf) goto L_11835b0a;
L_11835b4d:;
  /* 11835b4d lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11835b50:;
  /* 11835b50 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b52 jae 0x11835bd2 */
  if (!C.cf) goto L_11835bd2;
  /* 11835b54 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11835b57 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b5a jae 0x11835bd2 */
  if (!C.cf) goto L_11835bd2;
  /* 11835b5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835b5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11835b60 jne 0x11835ba2 */
  if (!C.zf) goto L_11835ba2;
  /* 11835b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11835b64 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11835b67 pop eax */
  EAX = (pop32());
L_11835b68:;
  /* 11835b68 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835b6b jne 0x11835b92 */
  if (!C.zf) goto L_11835b92;
  /* 11835b6d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11835b6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11835b6f jmp 0x11835b68 */
  goto L_11835b68;
L_11835b71:;
  /* 11835b71 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11835b74 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b77 jae 0x11835b82 */
  if (!C.cf) goto L_11835b82;
  /* 11835b79 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835b7b mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11835b7d mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11835b80 jmp 0x11835b8b */
  goto L_11835b8b;
L_11835b82:;
  /* 11835b82 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11835b86 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11835b89 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11835b8b:;
  /* 11835b8b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11835b8d add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835b90 jmp 0x11835bc8 */
  goto L_11835bc8;
L_11835b92:;
  /* 11835b92 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b94 jae 0x11835ba9 */
  if (!C.cf) goto L_11835ba9;
  /* 11835b96 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11835b99 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835b9c jb 0x11835bd2 */
  if (C.cf) goto L_11835bd2;
  /* 11835b9e mov esi, ebx */
  ESI = (EBX);
  /* 11835ba0 jmp 0x11835b50 */
  goto L_11835b50;
L_11835ba2:;
  /* 11835ba2 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11835ba5 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835ba7 jmp 0x11835b50 */
  goto L_11835b50;
L_11835ba9:;
  /* 11835ba9 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11835bac cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835baf jae 0x11835bba */
  if (!C.cf) goto L_11835bba;
  /* 11835bb1 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835bb3 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11835bb5 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11835bb8 jmp 0x11835bc3 */
  goto L_11835bc3;
L_11835bba:;
  /* 11835bba and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11835bbe lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11835bc1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11835bc3:;
  /* 11835bc3 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11835bc5 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11835bc8:;
  /* 11835bc8 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11835bcb shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11835bce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835bd0 jmp 0x11835bd4 */
  goto L_11835bd4;
L_11835bd2:;
  /* 11835bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11835bd4:;
  /* 11835bd4 pop edi */
  EDI = (pop32());
  /* 11835bd5 pop esi */
  ESI = (pop32());
  /* 11835bd6 pop ebx */
  EBX = (pop32());
  /* 11835bd7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835bd8 ret  */
  ESPCHK(0x11835ab5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd9 @ 0x11835bd9 (169 bytes, 69 insns) */
void f_11835bd9(void) {
  FTRACE(0x11835bd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835bd9 push ebp */
  push32((uint32_t)(EBP));
  /* 11835bda mov ebp, esp */
  EBP = (ESP);
  /* 11835bdc push ecx */
  push32((uint32_t)(ECX));
  /* 11835bdd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11835be0 push ebx */
  push32((uint32_t)(EBX));
  /* 11835be1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11835be4 push esi */
  push32((uint32_t)(ESI));
  /* 11835be5 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11835be8 push edi */
  push32((uint32_t)(EDI));
  /* 11835be9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11835bec and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11835bf0 mov eax, ebx */
  EAX = (EBX);
  /* 11835bf2 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835bf5 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11835bf8 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835bfb lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11835bff jbe 0x11835c13 */
  if ((C.cf||C.zf)) goto L_11835c13;
  /* 11835c01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11835c04 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835c06 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11835c08 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11835c0a mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11835c11 jmp 0x11835c73 */
  goto L_11835c73;
L_11835c13:;
  /* 11835c13 jae 0x11835c7a */
  if (!C.cf) goto L_11835c7a;
  /* 11835c15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11835c18 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11835c1b lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11835c21 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835c23 jb 0x11835c7a */
  if (C.cf) goto L_11835c7a;
  /* 11835c25 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11835c28:;
  /* 11835c28 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835c2a jae 0x11835c36 */
  if (!C.cf) goto L_11835c36;
  /* 11835c2c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835c2f jne 0x11835c34 */
  if (!C.zf) goto L_11835c34;
  /* 11835c31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11835c32 jmp 0x11835c28 */
  goto L_11835c28;
L_11835c34:;
  /* 11835c34 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11835c36:;
  /* 11835c36 jne 0x11835c7a */
  if (!C.zf) goto L_11835c7a;
  /* 11835c38 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11835c3b mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11835c3d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11835c3f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835c41 ja 0x11835c6e */
  if ((!C.cf&&!C.zf)) goto L_11835c6e;
  /* 11835c43 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835c45 jbe 0x11835c6e */
  if ((C.cf||C.zf)) goto L_11835c6e;
  /* 11835c47 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11835c4d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835c4f jae 0x11835c65 */
  if (!C.cf) goto L_11835c65;
  /* 11835c51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11835c53 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11835c55 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835c57 jne 0x11835c60 */
  if (!C.zf) goto L_11835c60;
L_11835c59:;
  /* 11835c59 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11835c5a cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835c5e je 0x11835c59 */
  if (C.zf) goto L_11835c59;
L_11835c60:;
  /* 11835c60 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11835c63 jmp 0x11835c6e */
  goto L_11835c6e;
L_11835c65:;
  /* 11835c65 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11835c69 lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11835c6c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11835c6e:;
  /* 11835c6e sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835c71 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11835c73:;
  /* 11835c73 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11835c7a:;
  /* 11835c7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11835c7d pop edi */
  EDI = (pop32());
  /* 11835c7e pop esi */
  ESI = (pop32());
  /* 11835c7f pop ebx */
  EBX = (pop32());
  /* 11835c80 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835c81 ret  */
  ESPCHK(0x11835bd9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d49 @ 0x11835d49 (27 bytes, 11 insns) */
void f_11835d49(void) {
  FTRACE(0x11835d49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835d49 push ebp */
  push32((uint32_t)(EBP));
  /* 11835d4a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11835d4e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11835d50 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11835d53 push eax */
  push32((uint32_t)(EAX));
  /* 11835d54 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11835d57 push eax */
  push32((uint32_t)(EAX));
  /* 11835d58 call 0x1183263a */
  push32(0x11835d5du); f_1183263a();
  /* 11835d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11835d60 pop ebp */
  EBP = (pop32());
  /* 11835d61 ret 4 */
  ESPCHK(0x11835d49u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d64 @ 0x11835d64 (70 bytes, 24 insns) */
void f_11835d64(void) {
  FTRACE(0x11835d64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835d64 push esi */
  push32((uint32_t)(ESI));
  /* 11835d65 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11835d69 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11835d6b cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835d71 jne 0x11835d87 */
  if (!C.zf) goto L_11835d87;
  /* 11835d73 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835d77 jne 0x11835d87 */
  if (!C.zf) goto L_11835d87;
  /* 11835d79 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835d80 jne 0x11835d87 */
  if (!C.zf) goto L_11835d87;
  /* 11835d82 jmp 0x11832d1c */
  f_11832d1c(); return;
L_11835d87:;
  /* 11835d87 mov eax, dword ptr [0x1183f770] */
  EAX = (r32((uint32_t)(0x1183f770)));
  /* 11835d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835d8e je 0x11835da4 */
  if (C.zf) goto L_11835da4;
  /* 11835d90 push eax */
  push32((uint32_t)(EAX));
  /* 11835d91 call 0x11835dc8 */
  push32(0x11835d96u); f_11835dc8();
  /* 11835d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835d98 pop ecx */
  ECX = (pop32());
  /* 11835d99 je 0x11835da4 */
  if (C.zf) goto L_11835da4;
  /* 11835d9b push esi */
  push32((uint32_t)(ESI));
  /* 11835d9c call dword ptr [0x1183f770] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183f770))), 0x11835da2u);
  /* 11835da2 jmp 0x11835da6 */
  goto L_11835da6;
L_11835da4:;
  /* 11835da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11835da6:;
  /* 11835da6 pop esi */
  ESI = (pop32());
  /* 11835da7 ret 4 */
  ESPCHK(0x11835d64u, _esp0);
  ESP += 8; return;
}

/* FUN_10005dc8 @ 0x11835dc8 (24 bytes, 11 insns) */
void f_11835dc8(void) {
  FTRACE(0x11835dc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835dc8 push esi */
  push32((uint32_t)(ESI));
  /* 11835dc9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11835dcb pop esi */
  ESI = (pop32());
  /* 11835dcc push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11835dd0 call dword ptr [0x1183a048] */
  call_ind((uint32_t)(r32((uint32_t)(0x1183a048))), 0x11835dd6u);
  /* 11835dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11835dd8 je 0x11835ddc */
  if (C.zf) goto L_11835ddc;
  /* 11835dda xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11835ddc:;
  /* 11835ddc mov eax, esi */
  EAX = (ESI);
  /* 11835dde pop esi */
  ESI = (pop32());
  /* 11835ddf ret  */
  ESPCHK(0x11835dc8u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11835de0 (129 bytes, 56 insns) */
void f_11835de0(void) {
  FTRACE(0x11835de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835de0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11835de4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11835de8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11835dee jne 0x11835e2c */
  if (!C.zf) goto L_11835e2c;
L_11835df0:;
  /* 11835df0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11835df2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835df4 jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835df6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11835df8 je 0x11835e20 */
  if (C.zf) goto L_11835e20;
  /* 11835dfa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835dfd jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835dff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11835e01 je 0x11835e20 */
  if (C.zf) goto L_11835e20;
  /* 11835e03 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11835e06 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835e09 jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835e0b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11835e0d je 0x11835e20 */
  if (C.zf) goto L_11835e20;
  /* 11835e0f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835e12 jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835e14 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835e17 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835e1a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11835e1c jne 0x11835df0 */
  if (!C.zf) goto L_11835df0;
  /* 11835e1e mov edi, edi */
  EDI = (EDI);
L_11835e20:;
  /* 11835e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11835e22 ret  */
  ESPCHK(0x11835de0u, _esp0);
  ESP += 4; return;
  /* 11835e23 nop  */
  /* nop */
L_11835e24:;
  /* 11835e24 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835e26 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11835e28 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11835e29 ret  */
  ESPCHK(0x11835de0u, _esp0);
  ESP += 4; return;
  /* 11835e2a mov edi, edi */
  EDI = (EDI);
L_11835e2c:;
  /* 11835e2c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11835e32 je 0x11835e48 */
  if (C.zf) goto L_11835e48;
  /* 11835e34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11835e36 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11835e37 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835e39 jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835e3b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11835e3c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11835e3e je 0x11835e20 */
  if (C.zf) goto L_11835e20;
  /* 11835e40 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11835e46 je 0x11835df0 */
  if (C.zf) goto L_11835df0;
L_11835e48:;
  /* 11835e48 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11835e4b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835e4e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835e50 jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835e52 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11835e54 je 0x11835e20 */
  if (C.zf) goto L_11835e20;
  /* 11835e56 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11835e59 jne 0x11835e24 */
  if (!C.zf) goto L_11835e24;
  /* 11835e5b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11835e5d je 0x11835e20 */
  if (C.zf) goto L_11835e20;
  /* 11835e5f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835e62 jmp 0x11835df0 */
  goto L_11835df0;
}

/* FUN_10005e70 @ 0x11835e70 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11835e70(void) {
  FTRACE(0x11835e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11835e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11835e71 mov ebp, esp */
  EBP = (ESP);
  /* 11835e73 push edi */
  push32((uint32_t)(EDI));
  /* 11835e74 push esi */
  push32((uint32_t)(ESI));
  /* 11835e75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11835e78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11835e7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11835e7e mov eax, ecx */
  EAX = (ECX);
  /* 11835e80 mov edx, ecx */
  EDX = (ECX);
  /* 11835e82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835e84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835e86 jbe 0x11835e90 */
  if ((C.cf||C.zf)) goto L_11835e90;
  /* 11835e88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835e8a jb 0x11836008 */
  if (C.cf) goto L_11836008;
L_11835e90:;
  /* 11835e90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11835e96 jne 0x11835eac */
  if (!C.zf) goto L_11835eac;
  /* 11835e98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11835e9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11835e9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835ea1 jb 0x11835ecc */
  if (C.cf) goto L_11835ecc;
  /* 11835ea3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11835ea5 jmp dword ptr [edx*4 + 0x11835fb8] */
  switch (EDX) {
    case 0: goto L_11835fc8;
    case 1: goto L_11835fd0;
    case 2: goto L_11835fdc;
    case 3: goto L_11835ff0;
    default: x86_unimpl("switch@0x11835ea5 out of table"); return;
  }
L_11835eac:;
  /* 11835eac mov eax, edi */
  EAX = (EDI);
  /* 11835eae mov edx, 3 */
  EDX = (0x3u);
  /* 11835eb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11835eb6 jb 0x11835ec4 */
  if (C.cf) goto L_11835ec4;
  /* 11835eb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11835ebb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11835ebd jmp dword ptr [eax*4 + 0x11835ed0] */
  switch (EAX) {
    case 1: goto L_11835ee0;
    case 2: goto L_11835f0c;
    case 3: goto L_11835f30;
    default: x86_unimpl("switch@0x11835ebd out of table"); return;
  }
L_11835ec4:;
  /* 11835ec4 jmp dword ptr [ecx*4 + 0x11835fc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11835fc8)))); return;
  /* 11835ecb nop  */
  /* nop */
L_11835ecc:;
  /* 11835ecc jmp dword ptr [ecx*4 + 0x11835f4c] */
  switch (ECX) {
    case 0: goto L_11835faf;
    case 1: goto L_11835f9c;
    case 2: goto L_11835f94;
    case 3: goto L_11835f8c;
    case 4: goto L_11835f84;
    case 5: goto L_11835f7c;
    case 6: goto L_11835f74;
    case 7: goto L_11835f6c;
    default: x86_unimpl("switch@0x11835ecc out of table"); return;
  }
  /* 11835ed3 nop  */
  /* nop */
L_11835ee0:;
  /* 11835ee0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11835ee2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835ee4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11835ee6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11835ee9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11835eec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11835eef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11835ef2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11835ef5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835ef8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835efb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835efe jb 0x11835ecc */
  if (C.cf) goto L_11835ecc;
  /* 11835f00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11835f02 jmp dword ptr [edx*4 + 0x11835fb8] */
  switch (EDX) {
    case 0: goto L_11835fc8;
    case 1: goto L_11835fd0;
    case 2: goto L_11835fdc;
    case 3: goto L_11835ff0;
    default: x86_unimpl("switch@0x11835f02 out of table"); return;
  }
  /* 11835f09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11835f0c:;
  /* 11835f0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11835f0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835f10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11835f12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11835f15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11835f18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11835f1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835f1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835f21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835f24 jb 0x11835ecc */
  if (C.cf) goto L_11835ecc;
  /* 11835f26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11835f28 jmp dword ptr [edx*4 + 0x11835fb8] */
  switch (EDX) {
    case 0: goto L_11835fc8;
    case 1: goto L_11835fd0;
    case 2: goto L_11835fdc;
    case 3: goto L_11835ff0;
    default: x86_unimpl("switch@0x11835f28 out of table"); return;
  }
  /* 11835f2f nop  */
  /* nop */
L_11835f30:;
  /* 11835f30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11835f32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835f34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11835f36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11835f37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11835f3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11835f3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11835f3e jb 0x11835ecc */
  if (C.cf) goto L_11835ecc;
  /* 11835f40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11835f42 jmp dword ptr [edx*4 + 0x11835fb8] */
  switch (EDX) {
    case 0: goto L_11835fc8;
    case 1: goto L_11835fd0;
    case 2: goto L_11835fdc;
    case 3: goto L_11835ff0;
    default: x86_unimpl("switch@0x11835f42 out of table"); return;
  }
  /* 11835f49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11835f6c:;
  /* 11835f6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11835f70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11835f74:;
  /* 11835f74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11835f78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11835f7c:;
  /* 11835f7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11835f80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11835f84:;
  /* 11835f84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11835f88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11835f8c:;
  /* 11835f8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11835f90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11835f94:;
  /* 11835f94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11835f98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11835f9c:;
  /* 11835f9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11835fa0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11835fa4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11835fab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11835fad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11835faf:;
  /* 11835faf jmp dword ptr [edx*4 + 0x11835fb8] */
  switch (EDX) {
    case 0: goto L_11835fc8;
    case 1: goto L_11835fd0;
    case 2: goto L_11835fdc;
    case 3: goto L_11835ff0;
    default: x86_unimpl("switch@0x11835faf out of table"); return;
  }
  /* 11835fb6 mov edi, edi */
  EDI = (EDI);
L_11835fc8:;
  /* 11835fc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835fcb pop esi */
  ESI = (pop32());
  /* 11835fcc pop edi */
  EDI = (pop32());
  /* 11835fcd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835fce ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 11835fcf nop  */
  /* nop */
L_11835fd0:;
  /* 11835fd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835fd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11835fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835fd7 pop esi */
  ESI = (pop32());
  /* 11835fd8 pop edi */
  EDI = (pop32());
  /* 11835fd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835fda ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 11835fdb nop  */
  /* nop */
L_11835fdc:;
  /* 11835fdc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835fde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11835fe0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11835fe3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11835fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11835fe9 pop esi */
  ESI = (pop32());
  /* 11835fea pop edi */
  EDI = (pop32());
  /* 11835feb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11835fec ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 11835fed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11835ff0:;
  /* 11835ff0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11835ff2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11835ff4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11835ff7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11835ffa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11835ffd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11836000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836003 pop esi */
  ESI = (pop32());
  /* 11836004 pop edi */
  EDI = (pop32());
  /* 11836005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11836006 ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 11836007 nop  */
  /* nop */
L_11836008:;
  /* 11836008 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1183600c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11836010 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11836016 jne 0x1183603c */
  if (!C.zf) goto L_1183603c;
  /* 11836018 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1183601b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1183601e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836021 jb 0x11836030 */
  if (C.cf) goto L_11836030;
  /* 11836023 std  */
  C.df=1;
  /* 11836024 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11836026 cld  */
  C.df=0;
  /* 11836027 jmp dword ptr [edx*4 + 0x11836150] */
  switch (EDX) {
    case 0: goto L_11836160;
    case 1: goto L_11836168;
    case 2: goto L_11836178;
    case 3: goto L_1183618c;
    default: x86_unimpl("switch@0x11836027 out of table"); return;
  }
  /* 1183602e mov edi, edi */
  EDI = (EDI);
L_11836030:;
  /* 11836030 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11836032 jmp dword ptr [ecx*4 + 0x11836100] */
  switch (ECX) {
    case 0: goto L_11836147;
    default: x86_unimpl("switch@0x11836032 out of table"); return;
  }
  /* 11836039 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1183603c:;
  /* 1183603c mov eax, edi */
  EAX = (EDI);
  /* 1183603e mov edx, 3 */
  EDX = (0x3u);
  /* 11836043 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836046 jb 0x11836054 */
  if (C.cf) goto L_11836054;
  /* 11836048 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1183604b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183604d jmp dword ptr [eax*4 + 0x11836058] */
  switch (EAX) {
    case 1: goto L_11836068;
    case 2: goto L_11836088;
    case 3: goto L_118360b0;
    default: x86_unimpl("switch@0x1183604d out of table"); return;
  }
L_11836054:;
  /* 11836054 jmp dword ptr [ecx*4 + 0x11836150] */
  switch (ECX) {
    case 0: goto L_11836160;
    case 1: goto L_11836168;
    case 2: goto L_11836178;
    case 3: goto L_1183618c;
    default: x86_unimpl("switch@0x11836054 out of table"); return;
  }
  /* 1183605b nop  */
  /* nop */
L_11836068:;
  /* 11836068 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183606b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1183606d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11836070 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11836071 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11836074 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11836075 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11836078 jb 0x11836030 */
  if (C.cf) goto L_11836030;
  /* 1183607a std  */
  C.df=1;
  /* 1183607b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1183607d cld  */
  C.df=0;
  /* 1183607e jmp dword ptr [edx*4 + 0x11836150] */
  switch (EDX) {
    case 0: goto L_11836160;
    case 1: goto L_11836168;
    case 2: goto L_11836178;
    case 3: goto L_1183618c;
    default: x86_unimpl("switch@0x1183607e out of table"); return;
  }
  /* 11836085 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11836088:;
  /* 11836088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183608b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1183608d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11836090 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11836093 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11836096 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11836099 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183609c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1183609f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118360a2 jb 0x11836030 */
  if (C.cf) goto L_11836030;
  /* 118360a4 std  */
  C.df=1;
  /* 118360a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118360a7 cld  */
  C.df=0;
  /* 118360a8 jmp dword ptr [edx*4 + 0x11836150] */
  switch (EDX) {
    case 0: goto L_11836160;
    case 1: goto L_11836168;
    case 2: goto L_11836178;
    case 3: goto L_1183618c;
    default: x86_unimpl("switch@0x118360a8 out of table"); return;
  }
  /* 118360af nop  */
  /* nop */
L_118360b0:;
  /* 118360b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118360b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118360b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118360b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118360bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118360be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118360c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118360c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118360c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118360ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118360cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118360d0 jb 0x11836030 */
  if (C.cf) goto L_11836030;
  /* 118360d6 std  */
  C.df=1;
  /* 118360d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118360d9 cld  */
  C.df=0;
  /* 118360da jmp dword ptr [edx*4 + 0x11836150] */
  switch (EDX) {
    case 0: goto L_11836160;
    case 1: goto L_11836168;
    case 2: goto L_11836178;
    case 3: goto L_1183618c;
    default: x86_unimpl("switch@0x118360da out of table"); return;
  }
  /* 118360e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 118360e4 add al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118360e6 adc dword ptr [ecx], 0xc */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xcu),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118360e9 popal  */
  x86_unimpl("popal @ 0x118360e9");
  /* 118360ea adc dword ptr [ecx], 0x14 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x14u),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118360ed popal  */
  x86_unimpl("popal @ 0x118360ed");
  /* 118360ee adc dword ptr [ecx], 0x1c */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1cu),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118360f1 popal  */
  x86_unimpl("popal @ 0x118360f1");
  /* 118360f2 adc dword ptr [ecx], 0x24 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x24u),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118360f5 popal  */
  x86_unimpl("popal @ 0x118360f5");
  /* 118360f6 adc dword ptr [ecx], 0x2c */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2cu),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118360f9 popal  */
  x86_unimpl("popal @ 0x118360f9");
  /* 118360fa adc dword ptr [ecx], 0x34 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x34u),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 118360fd popal  */
  x86_unimpl("popal @ 0x118360fd");
  /* 11836104 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11836108 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1183610c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11836110 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11836114 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11836118 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1183611c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11836120 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11836124 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11836128 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1183612c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11836130 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11836134 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11836138 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1183613c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11836143 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11836145 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11836147:;
  /* 11836147 jmp dword ptr [edx*4 + 0x11836150] */
  switch (EDX) {
    case 0: goto L_11836160;
    case 1: goto L_11836168;
    case 2: goto L_11836178;
    case 3: goto L_1183618c;
    default: x86_unimpl("switch@0x11836147 out of table"); return;
  }
  /* 1183614e mov edi, edi */
  EDI = (EDI);
L_11836160:;
  /* 11836160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836163 pop esi */
  ESI = (pop32());
  /* 11836164 pop edi */
  EDI = (pop32());
  /* 11836165 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11836166 ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 11836167 nop  */
  /* nop */
L_11836168:;
  /* 11836168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183616b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1183616e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836171 pop esi */
  ESI = (pop32());
  /* 11836172 pop edi */
  EDI = (pop32());
  /* 11836173 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11836174 ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 11836175 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11836178:;
  /* 11836178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183617b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1183617e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11836181 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11836184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11836187 pop esi */
  ESI = (pop32());
  /* 11836188 pop edi */
  EDI = (pop32());
  /* 11836189 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1183618a ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
  /* 1183618b nop  */
  /* nop */
L_1183618c:;
  /* 1183618c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1183618f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11836192 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11836195 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11836198 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1183619b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1183619e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118361a1 pop esi */
  ESI = (pop32());
  /* 118361a2 pop edi */
  EDI = (pop32());
  /* 118361a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118361a4 ret  */
  ESPCHK(0x11835e70u, _esp0);
  ESP += 4; return;
}

/* FUN_100061a5 @ 0x118361a5 (23 bytes, 8 insns) */
void f_118361a5(void) {
  FTRACE(0x118361a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118361a5 push 0xa */
  push32((uint32_t)(0xau));
  /* 118361a7 call 0x11834111 */
  push32(0x118361acu); f_11834111();
  /* 118361ac push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118361ae call 0x11837fa6 */
  push32(0x118361b3u); f_11837fa6();
  /* 118361b3 pop ecx */
  ECX = (pop32());
  /* 118361b4 pop ecx */
  ECX = (pop32());
  /* 118361b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 118361b7 call 0x11833725 */
  push32(0x118361bcu); f_11833725();
}

