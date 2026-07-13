#include "recomp.h"

/* FUN_10001000 @ 0x11c21000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11c21000(void) {
  FTRACE(0x11c21000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21002 call dword ptr [0x11c25128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25128))), 0x11c21008u);
  /* 11c21008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2100e ja 0x11c2102f */
  if ((!C.cf&&!C.zf)) goto L_11c2102f;
  /* 11c21010 jmp dword ptr [eax*4 + 0x11c21038] */
  switch (EAX) {
    case 0: goto L_11c21017;
    case 1: goto L_11c2101d;
    case 2: goto L_11c21023;
    case 3: goto L_11c21029;
    default: x86_unimpl("switch@0x11c21010 out of table"); return;
  }
L_11c21017:;
  /* 11c21017 mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 11c2101c ret  */
  ESPCHK(0x11c21000u, _esp0);
  ESP += 4; return;
L_11c2101d:;
  /* 11c2101d mov eax, 0x1388 */
  EAX = (0x1388u);
  /* 11c21022 ret  */
  ESPCHK(0x11c21000u, _esp0);
  ESP += 4; return;
L_11c21023:;
  /* 11c21023 mov eax, 0xdac */
  EAX = (0xdacu);
  /* 11c21028 ret  */
  ESPCHK(0x11c21000u, _esp0);
  ESP += 4; return;
L_11c21029:;
  /* 11c21029 mov eax, 0xbb8 */
  EAX = (0xbb8u);
  /* 11c2102e ret  */
  ESPCHK(0x11c21000u, _esp0);
  ESP += 4; return;
L_11c2102f:;
  /* 11c2102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11c21034 ret  */
  ESPCHK(0x11c21000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11c21050 (436 bytes, 111 insns) */
void f_11c21050(void) {
  FTRACE(0x11c21050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21050 push esi */
  push32((uint32_t)(ESI));
  /* 11c21051 mov esi, dword ptr [0x11c25108] */
  ESI = (r32((uint32_t)(0x11c25108)));
  /* 11c21057 push edi */
  push32((uint32_t)(EDI));
  /* 11c21058 push 0x11c261a0 */
  push32((uint32_t)(0x11c261a0u));
  /* 11c2105d push 0x11c265c0 */
  push32((uint32_t)(0x11c265c0u));
  /* 11c21062 call esi */
  call_ind((uint32_t)(ESI), 0x11c21064u);
  /* 11c21064 push 0x11c26198 */
  push32((uint32_t)(0x11c26198u));
  /* 11c21069 push 0x11c265c8 */
  push32((uint32_t)(0x11c265c8u));
  /* 11c2106e call esi */
  call_ind((uint32_t)(ESI), 0x11c21070u);
  /* 11c21070 push 0x11c26190 */
  push32((uint32_t)(0x11c26190u));
  /* 11c21075 push 0x11c265e8 */
  push32((uint32_t)(0x11c265e8u));
  /* 11c2107a call esi */
  call_ind((uint32_t)(ESI), 0x11c2107cu);
  /* 11c2107c push 0x11c26188 */
  push32((uint32_t)(0x11c26188u));
  /* 11c21081 push 0x11c265d8 */
  push32((uint32_t)(0x11c265d8u));
  /* 11c21086 call esi */
  call_ind((uint32_t)(ESI), 0x11c21088u);
  /* 11c21088 push 0x11c26180 */
  push32((uint32_t)(0x11c26180u));
  /* 11c2108d push 0x11c265b8 */
  push32((uint32_t)(0x11c265b8u));
  /* 11c21092 call esi */
  call_ind((uint32_t)(ESI), 0x11c21094u);
  /* 11c21094 push 0x11c26178 */
  push32((uint32_t)(0x11c26178u));
  /* 11c21099 push 0x11c265d0 */
  push32((uint32_t)(0x11c265d0u));
  /* 11c2109e call esi */
  call_ind((uint32_t)(ESI), 0x11c210a0u);
  /* 11c210a0 push 0x11c2616c */
  push32((uint32_t)(0x11c2616cu));
  /* 11c210a5 push 0x11c26538 */
  push32((uint32_t)(0x11c26538u));
  /* 11c210aa call esi */
  call_ind((uint32_t)(ESI), 0x11c210acu);
  /* 11c210ac push 0x11c26164 */
  push32((uint32_t)(0x11c26164u));
  /* 11c210b1 push 0x11c26540 */
  push32((uint32_t)(0x11c26540u));
  /* 11c210b6 call esi */
  call_ind((uint32_t)(ESI), 0x11c210b8u);
  /* 11c210b8 mov esi, dword ptr [0x11c2510c] */
  ESI = (r32((uint32_t)(0x11c2510c)));
  /* 11c210be add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c210c1 push 0x11c26158 */
  push32((uint32_t)(0x11c26158u));
  /* 11c210c6 push 0x11c26520 */
  push32((uint32_t)(0x11c26520u));
  /* 11c210cb call esi */
  call_ind((uint32_t)(ESI), 0x11c210cdu);
  /* 11c210cd push 0x11c26150 */
  push32((uint32_t)(0x11c26150u));
  /* 11c210d2 push 0x11c26530 */
  push32((uint32_t)(0x11c26530u));
  /* 11c210d7 call dword ptr [0x11c25110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25110))), 0x11c210ddu);
  /* 11c210dd mov edi, dword ptr [0x11c25114] */
  EDI = (r32((uint32_t)(0x11c25114)));
  /* 11c210e3 push 0x11c26148 */
  push32((uint32_t)(0x11c26148u));
  /* 11c210e8 push 0x11c26510 */
  push32((uint32_t)(0x11c26510u));
  /* 11c210ed call edi */
  call_ind((uint32_t)(EDI), 0x11c210efu);
  /* 11c210ef push 0x11c26140 */
  push32((uint32_t)(0x11c26140u));
  /* 11c210f4 push 0x11c26548 */
  push32((uint32_t)(0x11c26548u));
  /* 11c210f9 call edi */
  call_ind((uint32_t)(EDI), 0x11c210fbu);
  /* 11c210fb push 0x11c26138 */
  push32((uint32_t)(0x11c26138u));
  /* 11c21100 push 0x11c26550 */
  push32((uint32_t)(0x11c26550u));
  /* 11c21105 call edi */
  call_ind((uint32_t)(EDI), 0x11c21107u);
  /* 11c21107 push 0x11c26130 */
  push32((uint32_t)(0x11c26130u));
  /* 11c2110c push 0x11c26518 */
  push32((uint32_t)(0x11c26518u));
  /* 11c21111 call edi */
  call_ind((uint32_t)(EDI), 0x11c21113u);
  /* 11c21113 push 0x11c26128 */
  push32((uint32_t)(0x11c26128u));
  /* 11c21118 push 0x11c265e0 */
  push32((uint32_t)(0x11c265e0u));
  /* 11c2111d call edi */
  call_ind((uint32_t)(EDI), 0x11c2111fu);
  /* 11c2111f push 0x11c26118 */
  push32((uint32_t)(0x11c26118u));
  /* 11c21124 push 0x11c26558 */
  push32((uint32_t)(0x11c26558u));
  /* 11c21129 call esi */
  call_ind((uint32_t)(ESI), 0x11c2112bu);
  /* 11c2112b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2112e push 0x11c26104 */
  push32((uint32_t)(0x11c26104u));
  /* 11c21133 push 0x11c26560 */
  push32((uint32_t)(0x11c26560u));
  /* 11c21138 call esi */
  call_ind((uint32_t)(ESI), 0x11c2113au);
  /* 11c2113a push 0x11c260f4 */
  push32((uint32_t)(0x11c260f4u));
  /* 11c2113f push 0x11c26568 */
  push32((uint32_t)(0x11c26568u));
  /* 11c21144 call esi */
  call_ind((uint32_t)(ESI), 0x11c21146u);
  /* 11c21146 push 0x11c260e0 */
  push32((uint32_t)(0x11c260e0u));
  /* 11c2114b push 0x11c26570 */
  push32((uint32_t)(0x11c26570u));
  /* 11c21150 call esi */
  call_ind((uint32_t)(ESI), 0x11c21152u);
  /* 11c21152 push 0x11c260d4 */
  push32((uint32_t)(0x11c260d4u));
  /* 11c21157 push 0x11c26578 */
  push32((uint32_t)(0x11c26578u));
  /* 11c2115c call esi */
  call_ind((uint32_t)(ESI), 0x11c2115eu);
  /* 11c2115e push 0x11c260bc */
  push32((uint32_t)(0x11c260bcu));
  /* 11c21163 push 0x11c26580 */
  push32((uint32_t)(0x11c26580u));
  /* 11c21168 call esi */
  call_ind((uint32_t)(ESI), 0x11c2116au);
  /* 11c2116a push 0x11c260a4 */
  push32((uint32_t)(0x11c260a4u));
  /* 11c2116f push 0x11c26588 */
  push32((uint32_t)(0x11c26588u));
  /* 11c21174 call esi */
  call_ind((uint32_t)(ESI), 0x11c21176u);
  /* 11c21176 push 0x11c26094 */
  push32((uint32_t)(0x11c26094u));
  /* 11c2117b push 0x11c26590 */
  push32((uint32_t)(0x11c26590u));
  /* 11c21180 call esi */
  call_ind((uint32_t)(ESI), 0x11c21182u);
  /* 11c21182 push 0x11c26084 */
  push32((uint32_t)(0x11c26084u));
  /* 11c21187 push 0x11c26598 */
  push32((uint32_t)(0x11c26598u));
  /* 11c2118c call esi */
  call_ind((uint32_t)(ESI), 0x11c2118eu);
  /* 11c2118e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21191 push 0x11c26074 */
  push32((uint32_t)(0x11c26074u));
  /* 11c21196 push 0x11c265a0 */
  push32((uint32_t)(0x11c265a0u));
  /* 11c2119b call esi */
  call_ind((uint32_t)(ESI), 0x11c2119du);
  /* 11c2119d push 0x11c26068 */
  push32((uint32_t)(0x11c26068u));
  /* 11c211a2 push 0x11c265a8 */
  push32((uint32_t)(0x11c265a8u));
  /* 11c211a7 call esi */
  call_ind((uint32_t)(ESI), 0x11c211a9u);
  /* 11c211a9 push 0x11c26058 */
  push32((uint32_t)(0x11c26058u));
  /* 11c211ae push 0x11c265b0 */
  push32((uint32_t)(0x11c265b0u));
  /* 11c211b3 call esi */
  call_ind((uint32_t)(ESI), 0x11c211b5u);
  /* 11c211b5 push 0x11c26528 */
  push32((uint32_t)(0x11c26528u));
  /* 11c211ba call dword ptr [0x11c25118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25118))), 0x11c211c0u);
  /* 11c211c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c211c2 push 0x11c26528 */
  push32((uint32_t)(0x11c26528u));
  /* 11c211c7 call dword ptr [0x11c2511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2511c))), 0x11c211cdu);
  /* 11c211cd mov esi, dword ptr [0x11c25120] */
  ESI = (r32((uint32_t)(0x11c25120)));
  /* 11c211d3 push 0x11c26050 */
  push32((uint32_t)(0x11c26050u));
  /* 11c211d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c211da call esi */
  call_ind((uint32_t)(ESI), 0x11c211dcu);
  /* 11c211dc push 0x11c26048 */
  push32((uint32_t)(0x11c26048u));
  /* 11c211e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c211e3 call esi */
  call_ind((uint32_t)(ESI), 0x11c211e5u);
  /* 11c211e5 push 0x11c26040 */
  push32((uint32_t)(0x11c26040u));
  /* 11c211ea push 5 */
  push32((uint32_t)(0x5u));
  /* 11c211ec call esi */
  call_ind((uint32_t)(ESI), 0x11c211eeu);
  /* 11c211ee push 0x11c26038 */
  push32((uint32_t)(0x11c26038u));
  /* 11c211f3 push 0x11c26030 */
  push32((uint32_t)(0x11c26030u));
  /* 11c211f8 call dword ptr [0x11c25124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25124))), 0x11c211feu);
  /* 11c211fe add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21201 pop edi */
  EDI = (pop32());
  /* 11c21202 pop esi */
  ESI = (pop32());
  /* 11c21203 ret  */
  ESPCHK(0x11c21050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11c21210 (1457 bytes, 506 insns) */
void f_11c21210(void) {
  FTRACE(0x11c21210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21210 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21211 push ebp */
  push32((uint32_t)(EBP));
  /* 11c21212 push esi */
  push32((uint32_t)(ESI));
  /* 11c21213 push edi */
  push32((uint32_t)(EDI));
  /* 11c21214 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21216 call dword ptr [0x11c250b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250b0))), 0x11c2121cu);
  /* 11c2121c mov edi, dword ptr [0x11c250b4] */
  EDI = (r32((uint32_t)(0x11c250b4)));
  /* 11c21222 mov ebx, dword ptr [0x11c250b8] */
  EBX = (r32((uint32_t)(0x11c250b8)));
  /* 11c21228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2122b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2122d je 0x11c214a0 */
  if (C.zf) goto L_11c214a0;
  /* 11c21233 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21235 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21237 call edi */
  call_ind((uint32_t)(EDI), 0x11c21239u);
  /* 11c21239 mov esi, dword ptr [0x11c250bc] */
  ESI = (r32((uint32_t)(0x11c250bc)));
  /* 11c2123f push 0x11c261dc */
  push32((uint32_t)(0x11c261dcu));
  /* 11c21244 call esi */
  call_ind((uint32_t)(ESI), 0x11c21246u);
  /* 11c21246 push 0x11c261d4 */
  push32((uint32_t)(0x11c261d4u));
  /* 11c2124b call esi */
  call_ind((uint32_t)(ESI), 0x11c2124du);
  /* 11c2124d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2124f push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21251 call edi */
  call_ind((uint32_t)(EDI), 0x11c21253u);
  /* 11c21253 call 0x11c21000 */
  push32(0x11c21258u); f_11c21000();
  /* 11c21258 mov esi, dword ptr [0x11c250c0] */
  ESI = (r32((uint32_t)(0x11c250c0)));
  /* 11c2125e push eax */
  push32((uint32_t)(EAX));
  /* 11c2125f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21261 call esi */
  call_ind((uint32_t)(ESI), 0x11c21263u);
  /* 11c21263 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11c21268 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c2126a call esi */
  call_ind((uint32_t)(ESI), 0x11c2126cu);
  /* 11c2126c mov esi, dword ptr [0x11c250c4] */
  ESI = (r32((uint32_t)(0x11c250c4)));
  /* 11c21272 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11c21274 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21276 call esi */
  call_ind((uint32_t)(ESI), 0x11c21278u);
  /* 11c21278 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11c2127a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c2127c call esi */
  call_ind((uint32_t)(ESI), 0x11c2127eu);
  /* 11c2127e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c21280 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21282 call esi */
  call_ind((uint32_t)(ESI), 0x11c21284u);
  /* 11c21284 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21287 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c21289 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c2128b call esi */
  call_ind((uint32_t)(ESI), 0x11c2128du);
  /* 11c2128d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2128f push 0x11c265c0 */
  push32((uint32_t)(0x11c265c0u));
  /* 11c21294 call ebx */
  call_ind((uint32_t)(EBX), 0x11c21296u);
  /* 11c21296 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21298 call dword ptr [0x11c250c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250c8))), 0x11c2129eu);
  /* 11c2129e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212a2 push 0x11c26510 */
  push32((uint32_t)(0x11c26510u));
  /* 11c212a7 call dword ptr [0x11c250cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250cc))), 0x11c212adu);
  /* 11c212ad mov esi, dword ptr [0x11c250d0] */
  ESI = (r32((uint32_t)(0x11c250d0)));
  /* 11c212b3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c212b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c212ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212bc call esi */
  call_ind((uint32_t)(ESI), 0x11c212beu);
  /* 11c212be push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c212c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212c7 call esi */
  call_ind((uint32_t)(ESI), 0x11c212c9u);
  /* 11c212c9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c212ce push 4 */
  push32((uint32_t)(0x4u));
  /* 11c212d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212d2 call esi */
  call_ind((uint32_t)(ESI), 0x11c212d4u);
  /* 11c212d4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c212d7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c212dc push 5 */
  push32((uint32_t)(0x5u));
  /* 11c212de push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212e0 call esi */
  call_ind((uint32_t)(ESI), 0x11c212e2u);
  /* 11c212e2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c212e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c212e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212eb call esi */
  call_ind((uint32_t)(ESI), 0x11c212edu);
  /* 11c212ed push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c212f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c212f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c212f6 call esi */
  call_ind((uint32_t)(ESI), 0x11c212f8u);
  /* 11c212f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c212fa call dword ptr [0x11c25128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25128))), 0x11c21300u);
  /* 11c21300 mov ebp, dword ptr [0x11c250d4] */
  EBP = (r32((uint32_t)(0x11c250d4)));
  /* 11c21306 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2130b jne 0x11c21366 */
  if (!C.zf) goto L_11c21366;
  /* 11c2130d push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11c21312 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c21314 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21316 call esi */
  call_ind((uint32_t)(ESI), 0x11c21318u);
  /* 11c21318 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c2131d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c2131f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21321 call esi */
  call_ind((uint32_t)(ESI), 0x11c21323u);
  /* 11c21323 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c21328 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c2132a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2132c call esi */
  call_ind((uint32_t)(ESI), 0x11c2132eu);
  /* 11c2132e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c21333 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21337 call esi */
  call_ind((uint32_t)(ESI), 0x11c21339u);
  /* 11c21339 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c2133e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21340 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21342 call esi */
  call_ind((uint32_t)(ESI), 0x11c21344u);
  /* 11c21344 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c21349 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c2134b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2134d call esi */
  call_ind((uint32_t)(ESI), 0x11c2134fu);
  /* 11c2134f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21352 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21354 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21356 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21358 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2135a push 0x11c261c8 */
  push32((uint32_t)(0x11c261c8u));
  /* 11c2135f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21361 call ebp */
  call_ind((uint32_t)(EBP), 0x11c21363u);
  /* 11c21363 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c21366:;
  /* 11c21366 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21368 call dword ptr [0x11c25128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25128))), 0x11c2136eu);
  /* 11c2136e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21371 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21374 jne 0x11c213cf */
  if (!C.zf) goto L_11c213cf;
  /* 11c21376 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11c2137b push 3 */
  push32((uint32_t)(0x3u));
  /* 11c2137d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2137f call esi */
  call_ind((uint32_t)(ESI), 0x11c21381u);
  /* 11c21381 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c21386 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21388 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2138a call esi */
  call_ind((uint32_t)(ESI), 0x11c2138cu);
  /* 11c2138c push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c21391 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21393 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21395 call esi */
  call_ind((uint32_t)(ESI), 0x11c21397u);
  /* 11c21397 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c2139c push 5 */
  push32((uint32_t)(0x5u));
  /* 11c2139e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213a0 call esi */
  call_ind((uint32_t)(ESI), 0x11c213a2u);
  /* 11c213a2 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c213a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213ab call esi */
  call_ind((uint32_t)(ESI), 0x11c213adu);
  /* 11c213ad push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c213b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c213b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213b6 call esi */
  call_ind((uint32_t)(ESI), 0x11c213b8u);
  /* 11c213b8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c213bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11c213bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c213bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11c213c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213c3 push 0x11c261c8 */
  push32((uint32_t)(0x11c261c8u));
  /* 11c213c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c213ca call ebp */
  call_ind((uint32_t)(EBP), 0x11c213ccu);
  /* 11c213cc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c213cf:;
  /* 11c213cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213d1 call dword ptr [0x11c25128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25128))), 0x11c213d7u);
  /* 11c213d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c213da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c213dd jne 0x11c21438 */
  if (!C.zf) goto L_11c21438;
  /* 11c213df push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11c213e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c213e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213e8 call esi */
  call_ind((uint32_t)(ESI), 0x11c213eau);
  /* 11c213ea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c213ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11c213f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213f3 call esi */
  call_ind((uint32_t)(ESI), 0x11c213f5u);
  /* 11c213f5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c213fa push 4 */
  push32((uint32_t)(0x4u));
  /* 11c213fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c213fe call esi */
  call_ind((uint32_t)(ESI), 0x11c21400u);
  /* 11c21400 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c21405 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21409 call esi */
  call_ind((uint32_t)(ESI), 0x11c2140bu);
  /* 11c2140b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c21410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21412 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21414 call esi */
  call_ind((uint32_t)(ESI), 0x11c21416u);
  /* 11c21416 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c2141b push 2 */
  push32((uint32_t)(0x2u));
  /* 11c2141d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2141f call esi */
  call_ind((uint32_t)(ESI), 0x11c21421u);
  /* 11c21421 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21424 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c21426 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21428 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c2142a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2142c push 0x11c261c8 */
  push32((uint32_t)(0x11c261c8u));
  /* 11c21431 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21433 call ebp */
  call_ind((uint32_t)(EBP), 0x11c21435u);
  /* 11c21435 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c21438:;
  /* 11c21438 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2143a call dword ptr [0x11c25128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25128))), 0x11c21440u);
  /* 11c21440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21443 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21446 jne 0x11c214a0 */
  if (!C.zf) goto L_11c214a0;
  /* 11c21448 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11c2144d push eax */
  push32((uint32_t)(EAX));
  /* 11c2144e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21450 call esi */
  call_ind((uint32_t)(ESI), 0x11c21452u);
  /* 11c21452 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c21457 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21459 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2145b call esi */
  call_ind((uint32_t)(ESI), 0x11c2145du);
  /* 11c2145d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c21462 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21466 call esi */
  call_ind((uint32_t)(ESI), 0x11c21468u);
  /* 11c21468 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c2146d push 5 */
  push32((uint32_t)(0x5u));
  /* 11c2146f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21471 call esi */
  call_ind((uint32_t)(ESI), 0x11c21473u);
  /* 11c21473 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c21478 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2147a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2147c call esi */
  call_ind((uint32_t)(ESI), 0x11c2147eu);
  /* 11c2147e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11c21483 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c21485 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21487 call esi */
  call_ind((uint32_t)(ESI), 0x11c21489u);
  /* 11c21489 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2148c push 3 */
  push32((uint32_t)(0x3u));
  /* 11c2148e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21490 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21492 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21494 push 0x11c261c8 */
  push32((uint32_t)(0x11c261c8u));
  /* 11c21499 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c2149b call ebp */
  call_ind((uint32_t)(EBP), 0x11c2149du);
  /* 11c2149d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c214a0:;
  /* 11c214a0 mov esi, dword ptr [0x11c250d8] */
  ESI = (r32((uint32_t)(0x11c250d8)));
  /* 11c214a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214a8 push 0x11c26558 */
  push32((uint32_t)(0x11c26558u));
  /* 11c214ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214af call esi */
  call_ind((uint32_t)(ESI), 0x11c214b1u);
  /* 11c214b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214b3 push 0x11c26560 */
  push32((uint32_t)(0x11c26560u));
  /* 11c214b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214ba call esi */
  call_ind((uint32_t)(ESI), 0x11c214bcu);
  /* 11c214bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214be push 0x11c26568 */
  push32((uint32_t)(0x11c26568u));
  /* 11c214c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214c5 call esi */
  call_ind((uint32_t)(ESI), 0x11c214c7u);
  /* 11c214c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214c9 push 0x11c26570 */
  push32((uint32_t)(0x11c26570u));
  /* 11c214ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214d0 call esi */
  call_ind((uint32_t)(ESI), 0x11c214d2u);
  /* 11c214d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214d4 push 0x11c26578 */
  push32((uint32_t)(0x11c26578u));
  /* 11c214d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214db call esi */
  call_ind((uint32_t)(ESI), 0x11c214ddu);
  /* 11c214dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214df push 0x11c26580 */
  push32((uint32_t)(0x11c26580u));
  /* 11c214e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214e6 call esi */
  call_ind((uint32_t)(ESI), 0x11c214e8u);
  /* 11c214e8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c214eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214ed push 0x11c26588 */
  push32((uint32_t)(0x11c26588u));
  /* 11c214f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214f4 call esi */
  call_ind((uint32_t)(ESI), 0x11c214f6u);
  /* 11c214f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214f8 push 0x11c26590 */
  push32((uint32_t)(0x11c26590u));
  /* 11c214fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11c214ff call esi */
  call_ind((uint32_t)(ESI), 0x11c21501u);
  /* 11c21501 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21503 push 0x11c26598 */
  push32((uint32_t)(0x11c26598u));
  /* 11c21508 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2150a call esi */
  call_ind((uint32_t)(ESI), 0x11c2150cu);
  /* 11c2150c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2150e push 0x11c265a0 */
  push32((uint32_t)(0x11c265a0u));
  /* 11c21513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21515 call esi */
  call_ind((uint32_t)(ESI), 0x11c21517u);
  /* 11c21517 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21519 push 0x11c265a8 */
  push32((uint32_t)(0x11c265a8u));
  /* 11c2151e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21520 call esi */
  call_ind((uint32_t)(ESI), 0x11c21522u);
  /* 11c21522 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21524 push 0x11c265b0 */
  push32((uint32_t)(0x11c265b0u));
  /* 11c21529 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2152b call esi */
  call_ind((uint32_t)(ESI), 0x11c2152du);
  /* 11c2152d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21530 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c21532 call dword ptr [0x11c250b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250b0))), 0x11c21538u);
  /* 11c21538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2153b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2153d je 0x11c2156c */
  if (C.zf) goto L_11c2156c;
  /* 11c2153f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21541 call dword ptr [0x11c250dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250dc))), 0x11c21547u);
  /* 11c21547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2154a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2154c je 0x11c2156c */
  if (C.zf) goto L_11c2156c;
  /* 11c2154e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21550 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c21552 call edi */
  call_ind((uint32_t)(EDI), 0x11c21554u);
  /* 11c21554 mov ebp, dword ptr [0x11c250bc] */
  EBP = (r32((uint32_t)(0x11c250bc)));
  /* 11c2155a push 0x11c261c0 */
  push32((uint32_t)(0x11c261c0u));
  /* 11c2155f call ebp */
  call_ind((uint32_t)(EBP), 0x11c21561u);
  /* 11c21561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21564 call dword ptr [0x11c250e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250e0))), 0x11c2156au);
  /* 11c2156a jmp 0x11c21572 */
  goto L_11c21572;
L_11c2156c:;
  /* 11c2156c mov ebp, dword ptr [0x11c250bc] */
  EBP = (r32((uint32_t)(0x11c250bc)));
L_11c21572:;
  /* 11c21572 mov esi, dword ptr [0x11c250b0] */
  ESI = (r32((uint32_t)(0x11c250b0)));
  /* 11c21578 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c2157a call esi */
  call_ind((uint32_t)(ESI), 0x11c2157cu);
  /* 11c2157c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2157f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c21581 je 0x11c215a8 */
  if (C.zf) goto L_11c215a8;
  /* 11c21583 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21585 call dword ptr [0x11c250dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250dc))), 0x11c2158bu);
  /* 11c2158b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2158e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c21590 je 0x11c215a8 */
  if (C.zf) goto L_11c215a8;
  /* 11c21592 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21594 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c21596 call edi */
  call_ind((uint32_t)(EDI), 0x11c21598u);
  /* 11c21598 push 0x11c261b8 */
  push32((uint32_t)(0x11c261b8u));
  /* 11c2159d call ebp */
  call_ind((uint32_t)(EBP), 0x11c2159fu);
  /* 11c2159f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c215a2 call dword ptr [0x11c250e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250e4))), 0x11c215a8u);
L_11c215a8:;
  /* 11c215a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c215aa call esi */
  call_ind((uint32_t)(ESI), 0x11c215acu);
  /* 11c215ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c215af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c215b1 je 0x11c21654 */
  if (C.zf) goto L_11c21654;
  /* 11c215b7 push 0x11c26538 */
  push32((uint32_t)(0x11c26538u));
  /* 11c215bc push 0x11c26510 */
  push32((uint32_t)(0x11c26510u));
  /* 11c215c1 call dword ptr [0x11c250e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250e8))), 0x11c215c7u);
  /* 11c215c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c215ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c215cc je 0x11c21654 */
  if (C.zf) goto L_11c21654;
  /* 11c215d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c215d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c215d6 call edi */
  call_ind((uint32_t)(EDI), 0x11c215d8u);
  /* 11c215d8 push 0x11c261b0 */
  push32((uint32_t)(0x11c261b0u));
  /* 11c215dd call ebp */
  call_ind((uint32_t)(EBP), 0x11c215dfu);
  /* 11c215df push 1 */
  push32((uint32_t)(0x1u));
  /* 11c215e1 call dword ptr [0x11c250ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250ec))), 0x11c215e7u);
  /* 11c215e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c215e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c215eb call edi */
  call_ind((uint32_t)(EDI), 0x11c215edu);
  /* 11c215ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11c215ef push 0x11c265d0 */
  push32((uint32_t)(0x11c265d0u));
  /* 11c215f4 call ebx */
  call_ind((uint32_t)(EBX), 0x11c215f6u);
  /* 11c215f6 mov esi, dword ptr [0x11c250f0] */
  ESI = (r32((uint32_t)(0x11c250f0)));
  /* 11c215fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c215fe push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21600 call esi */
  call_ind((uint32_t)(ESI), 0x11c21602u);
  /* 11c21602 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21604 push 0x11c265b8 */
  push32((uint32_t)(0x11c265b8u));
  /* 11c21609 call ebx */
  call_ind((uint32_t)(EBX), 0x11c2160bu);
  /* 11c2160b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2160d push 4 */
  push32((uint32_t)(0x4u));
  /* 11c2160f call esi */
  call_ind((uint32_t)(ESI), 0x11c21611u);
  /* 11c21611 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21613 push 0x11c265e8 */
  push32((uint32_t)(0x11c265e8u));
  /* 11c21618 call ebx */
  call_ind((uint32_t)(EBX), 0x11c2161au);
  /* 11c2161a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2161d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2161f push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21621 call esi */
  call_ind((uint32_t)(ESI), 0x11c21623u);
  /* 11c21623 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21625 push 0x11c265c0 */
  push32((uint32_t)(0x11c265c0u));
  /* 11c2162a call ebx */
  call_ind((uint32_t)(EBX), 0x11c2162cu);
  /* 11c2162c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2162e push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21630 call esi */
  call_ind((uint32_t)(ESI), 0x11c21632u);
  /* 11c21632 call 0x11c21000 */
  push32(0x11c21637u); f_11c21000();
  /* 11c21637 mov esi, dword ptr [0x11c250c0] */
  ESI = (r32((uint32_t)(0x11c250c0)));
  /* 11c2163d push eax */
  push32((uint32_t)(EAX));
  /* 11c2163e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21640 call esi */
  call_ind((uint32_t)(ESI), 0x11c21642u);
  /* 11c21642 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 11c21647 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c21649 call esi */
  call_ind((uint32_t)(ESI), 0x11c2164bu);
  /* 11c2164b mov esi, dword ptr [0x11c250b0] */
  ESI = (r32((uint32_t)(0x11c250b0)));
  /* 11c21651 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c21654:;
  /* 11c21654 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21656 call esi */
  call_ind((uint32_t)(ESI), 0x11c21658u);
  /* 11c21658 mov esi, dword ptr [0x11c250f4] */
  ESI = (r32((uint32_t)(0x11c250f4)));
  /* 11c2165e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21661 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c21663 je 0x11c216c8 */
  if (C.zf) goto L_11c216c8;
  /* 11c21665 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21667 call dword ptr [0x11c250f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250f8))), 0x11c2166du);
  /* 11c2166d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21670 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c21672 je 0x11c216c8 */
  if (C.zf) goto L_11c216c8;
  /* 11c21674 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21676 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21678 call edi */
  call_ind((uint32_t)(EDI), 0x11c2167au);
  /* 11c2167a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2167c push 0x11c26518 */
  push32((uint32_t)(0x11c26518u));
  /* 11c21681 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21683 push 0x11c26520 */
  push32((uint32_t)(0x11c26520u));
  /* 11c21688 push 0x11c26530 */
  push32((uint32_t)(0x11c26530u));
  /* 11c2168d push 0x11c26528 */
  push32((uint32_t)(0x11c26528u));
  /* 11c21692 call dword ptr [0x11c250fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250fc))), 0x11c21698u);
  /* 11c21698 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2169a push 0x11c26528 */
  push32((uint32_t)(0x11c26528u));
  /* 11c2169f call ebx */
  call_ind((uint32_t)(EBX), 0x11c216a1u);
  /* 11c216a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c216a3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c216a5 push 0x11c26548 */
  push32((uint32_t)(0x11c26548u));
  /* 11c216aa push 5 */
  push32((uint32_t)(0x5u));
  /* 11c216ac call esi */
  call_ind((uint32_t)(ESI), 0x11c216aeu);
  /* 11c216ae call 0x11c21000 */
  push32(0x11c216b3u); f_11c21000();
  /* 11c216b3 push eax */
  push32((uint32_t)(EAX));
  /* 11c216b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c216b6 call dword ptr [0x11c250c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250c0))), 0x11c216bcu);
  /* 11c216bc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c216bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11c216c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c216c3 call edi */
  call_ind((uint32_t)(EDI), 0x11c216c5u);
  /* 11c216c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c216c8:;
  /* 11c216c8 push 6 */
  push32((uint32_t)(0x6u));
  /* 11c216ca call dword ptr [0x11c250b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250b0))), 0x11c216d0u);
  /* 11c216d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c216d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c216d5 je 0x11c21700 */
  if (C.zf) goto L_11c21700;
  /* 11c216d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c216d9 push 0x11c26518 */
  push32((uint32_t)(0x11c26518u));
  /* 11c216de call dword ptr [0x11c25100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25100))), 0x11c216e4u);
  /* 11c216e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c216e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c216e9 jne 0x11c21700 */
  if (!C.zf) goto L_11c21700;
  /* 11c216eb push eax */
  push32((uint32_t)(EAX));
  /* 11c216ec push 6 */
  push32((uint32_t)(0x6u));
  /* 11c216ee call edi */
  call_ind((uint32_t)(EDI), 0x11c216f0u);
  /* 11c216f0 push 0x11c261a8 */
  push32((uint32_t)(0x11c261a8u));
  /* 11c216f5 call ebp */
  call_ind((uint32_t)(EBP), 0x11c216f7u);
  /* 11c216f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c216f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c216fb call edi */
  call_ind((uint32_t)(EDI), 0x11c216fdu);
  /* 11c216fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c21700:;
  /* 11c21700 mov ebp, dword ptr [0x11c250b0] */
  EBP = (r32((uint32_t)(0x11c250b0)));
  /* 11c21706 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c21708 call ebp */
  call_ind((uint32_t)(EBP), 0x11c2170au);
  /* 11c2170a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2170d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2170f je 0x11c2174a */
  if (C.zf) goto L_11c2174a;
  /* 11c21711 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c21713 call ebp */
  call_ind((uint32_t)(EBP), 0x11c21715u);
  /* 11c21715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21718 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2171a jne 0x11c2174a */
  if (!C.zf) goto L_11c2174a;
  /* 11c2171c push 2 */
  push32((uint32_t)(0x2u));
  /* 11c2171e call dword ptr [0x11c250f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250f8))), 0x11c21724u);
  /* 11c21724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21727 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c21729 je 0x11c2174a */
  if (C.zf) goto L_11c2174a;
  /* 11c2172b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2172d push 7 */
  push32((uint32_t)(0x7u));
  /* 11c2172f call edi */
  call_ind((uint32_t)(EDI), 0x11c21731u);
  /* 11c21731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21733 push 0x11c265d8 */
  push32((uint32_t)(0x11c265d8u));
  /* 11c21738 call ebx */
  call_ind((uint32_t)(EBX), 0x11c2173au);
  /* 11c2173a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2173c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2173e push 0x11c26550 */
  push32((uint32_t)(0x11c26550u));
  /* 11c21743 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21745 call esi */
  call_ind((uint32_t)(ESI), 0x11c21747u);
  /* 11c21747 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c2174a:;
  /* 11c2174a mov ebp, dword ptr [0x11c250e8] */
  EBP = (r32((uint32_t)(0x11c250e8)));
  /* 11c21750 push 0x11c265d8 */
  push32((uint32_t)(0x11c265d8u));
  /* 11c21755 push 0x11c26550 */
  push32((uint32_t)(0x11c26550u));
  /* 11c2175a call ebp */
  call_ind((uint32_t)(EBP), 0x11c2175cu);
  /* 11c2175c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2175f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21761 je 0x11c2177c */
  if (C.zf) goto L_11c2177c;
  /* 11c21763 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21765 push 0x11c265d8 */
  push32((uint32_t)(0x11c265d8u));
  /* 11c2176a call ebx */
  call_ind((uint32_t)(EBX), 0x11c2176cu);
  /* 11c2176c push 0x11c26540 */
  push32((uint32_t)(0x11c26540u));
  /* 11c21771 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c21773 call dword ptr [0x11c25104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25104))), 0x11c21779u);
  /* 11c21779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c2177c:;
  /* 11c2177c push 8 */
  push32((uint32_t)(0x8u));
  /* 11c2177e call dword ptr [0x11c250b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250b0))), 0x11c21784u);
  /* 11c21784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21787 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c21789 je 0x11c217bc */
  if (C.zf) goto L_11c217bc;
  /* 11c2178b push 0x11c26540 */
  push32((uint32_t)(0x11c26540u));
  /* 11c21790 push 0x11c26550 */
  push32((uint32_t)(0x11c26550u));
  /* 11c21795 call ebp */
  call_ind((uint32_t)(EBP), 0x11c21797u);
  /* 11c21797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2179a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2179c jne 0x11c217bc */
  if (!C.zf) goto L_11c217bc;
  /* 11c2179e push eax */
  push32((uint32_t)(EAX));
  /* 11c2179f push 8 */
  push32((uint32_t)(0x8u));
  /* 11c217a1 call edi */
  call_ind((uint32_t)(EDI), 0x11c217a3u);
  /* 11c217a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c217a5 push 0x11c265d8 */
  push32((uint32_t)(0x11c265d8u));
  /* 11c217aa call ebx */
  call_ind((uint32_t)(EBX), 0x11c217acu);
  /* 11c217ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11c217ae push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c217b0 push 0x11c26510 */
  push32((uint32_t)(0x11c26510u));
  /* 11c217b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c217b7 call esi */
  call_ind((uint32_t)(ESI), 0x11c217b9u);
  /* 11c217b9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c217bc:;
  /* 11c217bc pop edi */
  EDI = (pop32());
  /* 11c217bd pop esi */
  ESI = (pop32());
  /* 11c217be pop ebp */
  EBP = (pop32());
  /* 11c217bf pop ebx */
  EBX = (pop32());
  /* 11c217c0 ret  */
  ESPCHK(0x11c21210u, _esp0);
  ESP += 4; return;
}

/* FUN_100017d0 @ 0x11c217d0 (20 bytes, 6 insns) */
void f_11c217d0(void) {
  FTRACE(0x11c217d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c217d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c217d4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c217d5 jne 0x11c217dc */
  if (!C.zf) goto L_11c217dc;
  /* 11c217d7 call 0x11c21050 */
  push32(0x11c217dcu); f_11c21050();
L_11c217dc:;
  /* 11c217dc mov eax, 1 */
  EAX = (0x1u);
  /* 11c217e1 ret 0xc */
  ESPCHK(0x11c217d0u, _esp0);
  ESP += 16; return;
}

/* FUN_100017f0 @ 0x11c217f0 (217 bytes, 57 insns) */
void f_11c217f0(void) {
  FTRACE(0x11c217f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c217f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c217f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c217f7 jne 0x11c21885 */
  if (!C.zf) goto L_11c21885;
  /* 11c217fd call dword ptr [0x11c25070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25070))), 0x11c21803u);
  /* 11c21803 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21805 mov dword ptr [0x11c2660c], eax */
  w32((uint32_t)(0x11c2660c), (EAX));
  /* 11c2180a call 0x11c22224 */
  push32(0x11c2180fu); f_11c22224();
  /* 11c2180f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21811 pop ecx */
  ECX = (pop32());
  /* 11c21812 je 0x11c21850 */
  if (C.zf) goto L_11c21850;
  /* 11c21814 mov eax, dword ptr [0x11c2660c] */
  EAX = (r32((uint32_t)(0x11c2660c)));
  /* 11c21819 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c2181b mov cl, byte ptr [0x11c2660d] */
  CL = (r8((uint32_t)(0x11c2660d)));
  /* 11c21821 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c21826 shr dword ptr [0x11c2660c], 0x10 */
  w32((uint32_t)(0x11c2660c), (sh_shr((uint32_t)(r32((uint32_t)(0x11c2660c))), (0x10u)&0x1f, 32)));
  /* 11c2182d mov dword ptr [0x11c26614], eax */
  w32((uint32_t)(0x11c26614), (EAX));
  /* 11c21832 mov dword ptr [0x11c26618], ecx */
  w32((uint32_t)(0x11c26618), (ECX));
  /* 11c21838 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c2183b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2183d mov dword ptr [0x11c26610], eax */
  w32((uint32_t)(0x11c26610), (EAX));
  /* 11c21842 call 0x11c21ab7 */
  push32(0x11c21847u); f_11c21ab7();
  /* 11c21847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21849 jne 0x11c21854 */
  if (!C.zf) goto L_11c21854;
  /* 11c2184b call 0x11c22260 */
  push32(0x11c21850u); f_11c22260();
L_11c21850:;
  /* 11c21850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c21852 jmp 0x11c218c6 */
  goto L_11c218c6;
L_11c21854:;
  /* 11c21854 call dword ptr [0x11c2506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2506c))), 0x11c2185au);
  /* 11c2185a mov dword ptr [0x11c26b78], eax */
  w32((uint32_t)(0x11c26b78), (EAX));
  /* 11c2185f call 0x11c220f2 */
  push32(0x11c21864u); f_11c220f2();
  /* 11c21864 mov dword ptr [0x11c265f8], eax */
  w32((uint32_t)(0x11c265f8), (EAX));
  /* 11c21869 call 0x11c21bdc */
  push32(0x11c2186eu); f_11c21bdc();
  /* 11c2186e call 0x11c21ea5 */
  push32(0x11c21873u); f_11c21ea5();
  /* 11c21873 call 0x11c21dec */
  push32(0x11c21878u); f_11c21dec();
  /* 11c21878 call 0x11c21999 */
  push32(0x11c2187du); f_11c21999();
  /* 11c2187d inc dword ptr [0x11c265f4] */
  { uint32_t _r=(r32((uint32_t)(0x11c265f4)))+1; w32((uint32_t)(0x11c265f4), (_r)); fl_inc(_r,32); }
  /* 11c21883 jmp 0x11c218c3 */
  goto L_11c218c3;
L_11c21885:;
  /* 11c21885 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c21887 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21889 jne 0x11c218b7 */
  if (!C.zf) goto L_11c218b7;
  /* 11c2188b cmp dword ptr [0x11c265f4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c265f4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21891 jle 0x11c21850 */
  if ((C.zf||C.sf!=C.of)) goto L_11c21850;
  /* 11c21893 dec dword ptr [0x11c265f4] */
  { uint32_t _r=(r32((uint32_t)(0x11c265f4)))-1; w32((uint32_t)(0x11c265f4), (_r)); fl_dec(_r,32); }
  /* 11c21899 cmp dword ptr [0x11c26644], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11c26644))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2189f jne 0x11c218a6 */
  if (!C.zf) goto L_11c218a6;
  /* 11c218a1 call 0x11c219d7 */
  push32(0x11c218a6u); f_11c219d7();
L_11c218a6:;
  /* 11c218a6 call 0x11c21d98 */
  push32(0x11c218abu); f_11c21d98();
  /* 11c218ab call 0x11c21b0b */
  push32(0x11c218b0u); f_11c21b0b();
  /* 11c218b0 call 0x11c22260 */
  push32(0x11c218b5u); f_11c22260();
  /* 11c218b5 jmp 0x11c218c3 */
  goto L_11c218c3;
L_11c218b7:;
  /* 11c218b7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c218ba jne 0x11c218c3 */
  if (!C.zf) goto L_11c218c3;
  /* 11c218bc push ecx */
  push32((uint32_t)(ECX));
  /* 11c218bd call 0x11c21b3c */
  push32(0x11c218c2u); f_11c21b3c();
  /* 11c218c2 pop ecx */
  ECX = (pop32());
L_11c218c3:;
  /* 11c218c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c218c5 pop eax */
  EAX = (pop32());
L_11c218c6:;
  /* 11c218c6 ret 0xc */
  ESPCHK(0x11c217f0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11c218c9 (157 bytes, 73 insns) */
void f_11c218c9(void) {
  FTRACE(0x11c218c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c218c9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c218ca mov ebp, esp */
  EBP = (ESP);
  /* 11c218cc push ebx */
  push32((uint32_t)(EBX));
  /* 11c218cd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c218d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c218d1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c218d4 push edi */
  push32((uint32_t)(EDI));
  /* 11c218d5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c218d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c218da jne 0x11c218e5 */
  if (!C.zf) goto L_11c218e5;
  /* 11c218dc cmp dword ptr [0x11c265f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c265f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c218e3 jmp 0x11c2190b */
  goto L_11c2190b;
L_11c218e5:;
  /* 11c218e5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c218e8 je 0x11c218ef */
  if (C.zf) goto L_11c218ef;
  /* 11c218ea cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c218ed jne 0x11c21911 */
  if (!C.zf) goto L_11c21911;
L_11c218ef:;
  /* 11c218ef mov eax, dword ptr [0x11c26b7c] */
  EAX = (r32((uint32_t)(0x11c26b7c)));
  /* 11c218f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c218f6 je 0x11c21901 */
  if (C.zf) goto L_11c21901;
  /* 11c218f8 push edi */
  push32((uint32_t)(EDI));
  /* 11c218f9 push esi */
  push32((uint32_t)(ESI));
  /* 11c218fa push ebx */
  push32((uint32_t)(EBX));
  /* 11c218fb call eax */
  call_ind((uint32_t)(EAX), 0x11c218fdu);
  /* 11c218fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c218ff je 0x11c2190d */
  if (C.zf) goto L_11c2190d;
L_11c21901:;
  /* 11c21901 push edi */
  push32((uint32_t)(EDI));
  /* 11c21902 push esi */
  push32((uint32_t)(ESI));
  /* 11c21903 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21904 call 0x11c217f0 */
  push32(0x11c21909u); f_11c217f0();
  /* 11c21909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11c2190b:;
  /* 11c2190b jne 0x11c21911 */
  if (!C.zf) goto L_11c21911;
L_11c2190d:;
  /* 11c2190d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c2190f jmp 0x11c2195f */
  goto L_11c2195f;
L_11c21911:;
  /* 11c21911 push edi */
  push32((uint32_t)(EDI));
  /* 11c21912 push esi */
  push32((uint32_t)(ESI));
  /* 11c21913 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21914 call 0x11c217d0 */
  push32(0x11c21919u); f_11c217d0();
  /* 11c21919 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2191c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c2191f jne 0x11c2192d */
  if (!C.zf) goto L_11c2192d;
  /* 11c21921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21923 jne 0x11c2195c */
  if (!C.zf) goto L_11c2195c;
  /* 11c21925 push edi */
  push32((uint32_t)(EDI));
  /* 11c21926 push eax */
  push32((uint32_t)(EAX));
  /* 11c21927 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21928 call 0x11c217f0 */
  push32(0x11c2192du); f_11c217f0();
L_11c2192d:;
  /* 11c2192d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c2192f je 0x11c21936 */
  if (C.zf) goto L_11c21936;
  /* 11c21931 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21934 jne 0x11c2195c */
  if (!C.zf) goto L_11c2195c;
L_11c21936:;
  /* 11c21936 push edi */
  push32((uint32_t)(EDI));
  /* 11c21937 push esi */
  push32((uint32_t)(ESI));
  /* 11c21938 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21939 call 0x11c217f0 */
  push32(0x11c2193eu); f_11c217f0();
  /* 11c2193e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21940 jne 0x11c21945 */
  if (!C.zf) goto L_11c21945;
  /* 11c21942 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11c21945:;
  /* 11c21945 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21949 je 0x11c2195c */
  if (C.zf) goto L_11c2195c;
  /* 11c2194b mov eax, dword ptr [0x11c26b7c] */
  EAX = (r32((uint32_t)(0x11c26b7c)));
  /* 11c21950 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21952 je 0x11c2195c */
  if (C.zf) goto L_11c2195c;
  /* 11c21954 push edi */
  push32((uint32_t)(EDI));
  /* 11c21955 push esi */
  push32((uint32_t)(ESI));
  /* 11c21956 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21957 call eax */
  call_ind((uint32_t)(EAX), 0x11c21959u);
  /* 11c21959 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11c2195c:;
  /* 11c2195c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11c2195f:;
  /* 11c2195f pop edi */
  EDI = (pop32());
  /* 11c21960 pop esi */
  ESI = (pop32());
  /* 11c21961 pop ebx */
  EBX = (pop32());
  /* 11c21962 pop ebp */
  EBP = (pop32());
  /* 11c21963 ret 0xc */
  ESPCHK(0x11c218c9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11c21966 (48 bytes, 15 insns) */
void f_11c21966(void) {
  FTRACE(0x11c21966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21966 mov eax, dword ptr [0x11c26600] */
  EAX = (r32((uint32_t)(0x11c26600)));
  /* 11c2196b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2196e je 0x11c2197d */
  if (C.zf) goto L_11c2197d;
  /* 11c21970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21972 jne 0x11c21982 */
  if (!C.zf) goto L_11c21982;
  /* 11c21974 cmp dword ptr [0x11c26604], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c26604))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2197b jne 0x11c21982 */
  if (!C.zf) goto L_11c21982;
L_11c2197d:;
  /* 11c2197d call 0x11c222d5 */
  push32(0x11c21982u); f_11c222d5();
L_11c21982:;
  /* 11c21982 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c21986 call 0x11c2230e */
  push32(0x11c2198bu); f_11c2230e();
  /* 11c2198b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c21990 call dword ptr [0x11c261e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c261e4))), 0x11c21996u);
  /* 11c21996 pop ecx */
  ECX = (pop32());
  /* 11c21997 pop ecx */
  ECX = (pop32());
  /* 11c21998 ret  */
  ESPCHK(0x11c21966u, _esp0);
  ESP += 4; return;
}

/* FUN_10001999 @ 0x11c21999 (45 bytes, 12 insns) */
void f_11c21999(void) {
  FTRACE(0x11c21999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21999 mov eax, dword ptr [0x11c26b74] */
  EAX = (r32((uint32_t)(0x11c26b74)));
  /* 11c2199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c219a0 je 0x11c219a4 */
  if (C.zf) goto L_11c219a4;
  /* 11c219a2 call eax */
  call_ind((uint32_t)(EAX), 0x11c219a4u);
L_11c219a4:;
  /* 11c219a4 push 0x11c26010 */
  push32((uint32_t)(0x11c26010u));
  /* 11c219a9 push 0x11c26008 */
  push32((uint32_t)(0x11c26008u));
  /* 11c219ae call 0x11c21a9d */
  push32(0x11c219b3u); f_11c21a9d();
  /* 11c219b3 push 0x11c26004 */
  push32((uint32_t)(0x11c26004u));
  /* 11c219b8 push 0x11c26000 */
  push32((uint32_t)(0x11c26000u));
  /* 11c219bd call 0x11c21a9d */
  push32(0x11c219c2u); f_11c21a9d();
  /* 11c219c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c219c5 ret  */
  ESPCHK(0x11c21999u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11c219c6 (17 bytes, 6 insns) */
void f_11c219c6(void) {
  FTRACE(0x11c219c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c219c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c219c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c219ca push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c219ce call 0x11c219e6 */
  push32(0x11c219d3u); f_11c219e6();
  /* 11c219d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c219d6 ret  */
  ESPCHK(0x11c219c6u, _esp0);
  ESP += 4; return;
}

/* FUN_100019d7 @ 0x11c219d7 (15 bytes, 6 insns) */
void f_11c219d7(void) {
  FTRACE(0x11c219d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c219d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c219d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c219db push 0 */
  push32((uint32_t)(0x0u));
  /* 11c219dd call 0x11c219e6 */
  push32(0x11c219e2u); f_11c219e6();
  /* 11c219e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c219e5 ret  */
  ESPCHK(0x11c219d7u, _esp0);
  ESP += 4; return;
}

/* FUN_100019e6 @ 0x11c219e6 (163 bytes, 53 insns) */
void f_11c219e6(void) {
  FTRACE(0x11c219e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c219e6 push edi */
  push32((uint32_t)(EDI));
  /* 11c219e7 call 0x11c21a8b */
  push32(0x11c219ecu); f_11c21a8b();
  /* 11c219ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11c219ee pop edi */
  EDI = (pop32());
  /* 11c219ef cmp dword ptr [0x11c26648], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c26648))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c219f5 jne 0x11c21a08 */
  if (!C.zf) goto L_11c21a08;
  /* 11c219f7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c219fb call dword ptr [0x11c2507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2507c))), 0x11c21a01u);
  /* 11c21a01 push eax */
  push32((uint32_t)(EAX));
  /* 11c21a02 call dword ptr [0x11c25078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25078))), 0x11c21a08u);
L_11c21a08:;
  /* 11c21a08 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21a0d push ebx */
  push32((uint32_t)(EBX));
  /* 11c21a0e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c21a12 mov dword ptr [0x11c26644], edi */
  w32((uint32_t)(0x11c26644), (EDI));
  /* 11c21a18 mov byte ptr [0x11c26640], bl */
  w8((uint32_t)(0x11c26640), (BL));
  /* 11c21a1e jne 0x11c21a5c */
  if (!C.zf) goto L_11c21a5c;
  /* 11c21a20 mov eax, dword ptr [0x11c26b70] */
  EAX = (r32((uint32_t)(0x11c26b70)));
  /* 11c21a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21a27 je 0x11c21a4b */
  if (C.zf) goto L_11c21a4b;
  /* 11c21a29 mov ecx, dword ptr [0x11c26b6c] */
  ECX = (r32((uint32_t)(0x11c26b6c)));
  /* 11c21a2f push esi */
  push32((uint32_t)(ESI));
  /* 11c21a30 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11c21a33 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21a35 jb 0x11c21a4a */
  if (C.cf) goto L_11c21a4a;
L_11c21a37:;
  /* 11c21a37 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c21a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21a3b je 0x11c21a3f */
  if (C.zf) goto L_11c21a3f;
  /* 11c21a3d call eax */
  call_ind((uint32_t)(EAX), 0x11c21a3fu);
L_11c21a3f:;
  /* 11c21a3f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c21a42 cmp esi, dword ptr [0x11c26b70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c26b70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21a48 jae 0x11c21a37 */
  if (!C.cf) goto L_11c21a37;
L_11c21a4a:;
  /* 11c21a4a pop esi */
  ESI = (pop32());
L_11c21a4b:;
  /* 11c21a4b push 0x11c26018 */
  push32((uint32_t)(0x11c26018u));
  /* 11c21a50 push 0x11c26014 */
  push32((uint32_t)(0x11c26014u));
  /* 11c21a55 call 0x11c21a9d */
  push32(0x11c21a5au); f_11c21a9d();
  /* 11c21a5a pop ecx */
  ECX = (pop32());
  /* 11c21a5b pop ecx */
  ECX = (pop32());
L_11c21a5c:;
  /* 11c21a5c push 0x11c26020 */
  push32((uint32_t)(0x11c26020u));
  /* 11c21a61 push 0x11c2601c */
  push32((uint32_t)(0x11c2601cu));
  /* 11c21a66 call 0x11c21a9d */
  push32(0x11c21a6bu); f_11c21a9d();
  /* 11c21a6b pop ecx */
  ECX = (pop32());
  /* 11c21a6c pop ecx */
  ECX = (pop32());
  /* 11c21a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c21a6f pop ebx */
  EBX = (pop32());
  /* 11c21a70 je 0x11c21a79 */
  if (C.zf) goto L_11c21a79;
  /* 11c21a72 call 0x11c21a94 */
  push32(0x11c21a77u); f_11c21a94();
  /* 11c21a77 pop edi */
  EDI = (pop32());
  /* 11c21a78 ret  */
  ESPCHK(0x11c219e6u, _esp0);
  ESP += 4; return;
L_11c21a79:;
  /* 11c21a79 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c21a7d mov dword ptr [0x11c26648], edi */
  w32((uint32_t)(0x11c26648), (EDI));
  /* 11c21a83 call dword ptr [0x11c25074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25074))), 0x11c21a89u);
  /* 11c21a89 pop edi */
  EDI = (pop32());
  /* 11c21a8a ret  */
  ESPCHK(0x11c219e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a8b @ 0x11c21a8b (9 bytes, 4 insns) */
void f_11c21a8b(void) {
  FTRACE(0x11c21a8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21a8b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c21a8d call 0x11c224f6 */
  push32(0x11c21a92u); f_11c224f6();
  /* 11c21a92 pop ecx */
  ECX = (pop32());
  /* 11c21a93 ret  */
  ESPCHK(0x11c21a8bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001a94 @ 0x11c21a94 (9 bytes, 4 insns) */
void f_11c21a94(void) {
  FTRACE(0x11c21a94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21a94 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11c21a96 call 0x11c22557 */
  push32(0x11c21a9bu); f_11c22557();
  /* 11c21a9b pop ecx */
  ECX = (pop32());
  /* 11c21a9c ret  */
  ESPCHK(0x11c21a94u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a9d @ 0x11c21a9d (26 bytes, 12 insns) */
void f_11c21a9d(void) {
  FTRACE(0x11c21a9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21a9d push esi */
  push32((uint32_t)(ESI));
  /* 11c21a9e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11c21aa2:;
  /* 11c21aa2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21aa6 jae 0x11c21ab5 */
  if (!C.cf) goto L_11c21ab5;
  /* 11c21aa8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c21aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21aac je 0x11c21ab0 */
  if (C.zf) goto L_11c21ab0;
  /* 11c21aae call eax */
  call_ind((uint32_t)(EAX), 0x11c21ab0u);
L_11c21ab0:;
  /* 11c21ab0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21ab3 jmp 0x11c21aa2 */
  goto L_11c21aa2;
L_11c21ab5:;
  /* 11c21ab5 pop esi */
  ESI = (pop32());
  /* 11c21ab6 ret  */
  ESPCHK(0x11c21a9du, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab7 @ 0x11c21ab7 (84 bytes, 32 insns) */
void f_11c21ab7(void) {
  FTRACE(0x11c21ab7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11c21ab8 call 0x11c22461 */
  push32(0x11c21abdu); f_11c22461();
  /* 11c21abd call dword ptr [0x11c25088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25088))), 0x11c21ac3u);
  /* 11c21ac3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21ac6 mov dword ptr [0x11c261e8], eax */
  w32((uint32_t)(0x11c261e8), (EAX));
  /* 11c21acb je 0x11c21b07 */
  if (C.zf) goto L_11c21b07;
  /* 11c21acd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11c21acf push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21ad1 call 0x11c2256c */
  push32(0x11c21ad6u); f_11c2256c();
  /* 11c21ad6 mov esi, eax */
  ESI = (EAX);
  /* 11c21ad8 pop ecx */
  ECX = (pop32());
  /* 11c21ad9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21adb pop ecx */
  ECX = (pop32());
  /* 11c21adc je 0x11c21b07 */
  if (C.zf) goto L_11c21b07;
  /* 11c21ade push esi */
  push32((uint32_t)(ESI));
  /* 11c21adf push dword ptr [0x11c261e8] */
  push32((uint32_t)(r32((uint32_t)(0x11c261e8))));
  /* 11c21ae5 call dword ptr [0x11c25084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25084))), 0x11c21aebu);
  /* 11c21aeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21aed je 0x11c21b07 */
  if (C.zf) goto L_11c21b07;
  /* 11c21aef push esi */
  push32((uint32_t)(ESI));
  /* 11c21af0 call 0x11c21b29 */
  push32(0x11c21af5u); f_11c21b29();
  /* 11c21af5 pop ecx */
  ECX = (pop32());
  /* 11c21af6 call dword ptr [0x11c25080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25080))), 0x11c21afcu);
  /* 11c21afc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c21b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c21b02 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c21b04 pop eax */
  EAX = (pop32());
  /* 11c21b05 pop esi */
  ESI = (pop32());
  /* 11c21b06 ret  */
  ESPCHK(0x11c21ab7u, _esp0);
  ESP += 4; return;
L_11c21b07:;
  /* 11c21b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c21b09 pop esi */
  ESI = (pop32());
  /* 11c21b0a ret  */
  ESPCHK(0x11c21ab7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b0b @ 0x11c21b0b (30 bytes, 8 insns) */
void f_11c21b0b(void) {
  FTRACE(0x11c21b0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21b0b call 0x11c2248a */
  push32(0x11c21b10u); f_11c2248a();
  /* 11c21b10 mov eax, dword ptr [0x11c261e8] */
  EAX = (r32((uint32_t)(0x11c261e8)));
  /* 11c21b15 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21b18 je 0x11c21b28 */
  if (C.zf) goto L_11c21b28;
  /* 11c21b1a push eax */
  push32((uint32_t)(EAX));
  /* 11c21b1b call dword ptr [0x11c25000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25000))), 0x11c21b21u);
  /* 11c21b21 or dword ptr [0x11c261e8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c261e8)))|(0xffffffffu); w32((uint32_t)(0x11c261e8), (_r)); fl_logic(_r,32); }
L_11c21b28:;
  /* 11c21b28 ret  */
  ESPCHK(0x11c21b0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b29 @ 0x11c21b29 (19 bytes, 4 insns) */
void f_11c21b29(void) {
  FTRACE(0x11c21b29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21b29 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c21b2d mov dword ptr [eax + 0x50], 0x11c26368 */
  w32((uint32_t)(EAX + 0x50), (0x11c26368u));
  /* 11c21b34 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11c21b3b ret  */
  ESPCHK(0x11c21b29u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b3c @ 0x11c21b3c (160 bytes, 62 insns) */
void f_11c21b3c(void) {
  FTRACE(0x11c21b3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21b3c mov eax, dword ptr [0x11c261e8] */
  EAX = (r32((uint32_t)(0x11c261e8)));
  /* 11c21b41 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21b44 je 0x11c21bdb */
  if (C.zf) goto L_11c21bdb;
  /* 11c21b4a push esi */
  push32((uint32_t)(ESI));
  /* 11c21b4b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c21b4f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21b51 jne 0x11c21b60 */
  if (!C.zf) goto L_11c21b60;
  /* 11c21b53 push eax */
  push32((uint32_t)(EAX));
  /* 11c21b54 call dword ptr [0x11c25094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25094))), 0x11c21b5au);
  /* 11c21b5a mov esi, eax */
  ESI = (EAX);
  /* 11c21b5c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21b5e je 0x11c21bcc */
  if (C.zf) goto L_11c21bcc;
L_11c21b60:;
  /* 11c21b60 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c21b63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21b65 je 0x11c21b6e */
  if (C.zf) goto L_11c21b6e;
  /* 11c21b67 push eax */
  push32((uint32_t)(EAX));
  /* 11c21b68 call 0x11c225f9 */
  push32(0x11c21b6du); f_11c225f9();
  /* 11c21b6d pop ecx */
  ECX = (pop32());
L_11c21b6e:;
  /* 11c21b6e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c21b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21b73 je 0x11c21b7c */
  if (C.zf) goto L_11c21b7c;
  /* 11c21b75 push eax */
  push32((uint32_t)(EAX));
  /* 11c21b76 call 0x11c225f9 */
  push32(0x11c21b7bu); f_11c225f9();
  /* 11c21b7b pop ecx */
  ECX = (pop32());
L_11c21b7c:;
  /* 11c21b7c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11c21b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21b81 je 0x11c21b8a */
  if (C.zf) goto L_11c21b8a;
  /* 11c21b83 push eax */
  push32((uint32_t)(EAX));
  /* 11c21b84 call 0x11c225f9 */
  push32(0x11c21b89u); f_11c225f9();
  /* 11c21b89 pop ecx */
  ECX = (pop32());
L_11c21b8a:;
  /* 11c21b8a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11c21b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21b8f je 0x11c21b98 */
  if (C.zf) goto L_11c21b98;
  /* 11c21b91 push eax */
  push32((uint32_t)(EAX));
  /* 11c21b92 call 0x11c225f9 */
  push32(0x11c21b97u); f_11c225f9();
  /* 11c21b97 pop ecx */
  ECX = (pop32());
L_11c21b98:;
  /* 11c21b98 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11c21b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21b9d je 0x11c21ba6 */
  if (C.zf) goto L_11c21ba6;
  /* 11c21b9f push eax */
  push32((uint32_t)(EAX));
  /* 11c21ba0 call 0x11c225f9 */
  push32(0x11c21ba5u); f_11c225f9();
  /* 11c21ba5 pop ecx */
  ECX = (pop32());
L_11c21ba6:;
  /* 11c21ba6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11c21ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21bab je 0x11c21bb4 */
  if (C.zf) goto L_11c21bb4;
  /* 11c21bad push eax */
  push32((uint32_t)(EAX));
  /* 11c21bae call 0x11c225f9 */
  push32(0x11c21bb3u); f_11c225f9();
  /* 11c21bb3 pop ecx */
  ECX = (pop32());
L_11c21bb4:;
  /* 11c21bb4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c21bb7 cmp eax, 0x11c26368 */
  { uint32_t _a=(EAX),_b=(0x11c26368u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21bbc je 0x11c21bc5 */
  if (C.zf) goto L_11c21bc5;
  /* 11c21bbe push eax */
  push32((uint32_t)(EAX));
  /* 11c21bbf call 0x11c225f9 */
  push32(0x11c21bc4u); f_11c225f9();
  /* 11c21bc4 pop ecx */
  ECX = (pop32());
L_11c21bc5:;
  /* 11c21bc5 push esi */
  push32((uint32_t)(ESI));
  /* 11c21bc6 call 0x11c225f9 */
  push32(0x11c21bcbu); f_11c225f9();
  /* 11c21bcb pop ecx */
  ECX = (pop32());
L_11c21bcc:;
  /* 11c21bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c21bce push dword ptr [0x11c261e8] */
  push32((uint32_t)(r32((uint32_t)(0x11c261e8))));
  /* 11c21bd4 call dword ptr [0x11c25084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25084))), 0x11c21bdau);
  /* 11c21bda pop esi */
  ESI = (pop32());
L_11c21bdb:;
  /* 11c21bdb ret  */
  ESPCHK(0x11c21b3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bdc @ 0x11c21bdc (444 bytes, 150 insns) */
void f_11c21bdc(void) {
  FTRACE(0x11c21bdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21bdc push ebp */
  push32((uint32_t)(EBP));
  /* 11c21bdd mov ebp, esp */
  EBP = (ESP);
  /* 11c21bdf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c21be2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21be3 push esi */
  push32((uint32_t)(ESI));
  /* 11c21be4 push edi */
  push32((uint32_t)(EDI));
  /* 11c21be5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c21bea call 0x11c22641 */
  push32(0x11c21befu); f_11c22641();
  /* 11c21bef mov esi, eax */
  ESI = (EAX);
  /* 11c21bf1 pop ecx */
  ECX = (pop32());
  /* 11c21bf2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21bf4 jne 0x11c21bfe */
  if (!C.zf) goto L_11c21bfe;
  /* 11c21bf6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c21bf8 call 0x11c21966 */
  push32(0x11c21bfdu); f_11c21966();
  /* 11c21bfd pop ecx */
  ECX = (pop32());
L_11c21bfe:;
  /* 11c21bfe mov dword ptr [0x11c26a60], esi */
  w32((uint32_t)(0x11c26a60), (ESI));
  /* 11c21c04 mov dword ptr [0x11c26b60], 0x20 */
  w32((uint32_t)(0x11c26b60), (0x20u));
  /* 11c21c0e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11c21c14:;
  /* 11c21c14 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21c16 jae 0x11c21c36 */
  if (!C.cf) goto L_11c21c36;
  /* 11c21c18 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c21c1c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c21c1f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c21c23 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11c21c27 mov eax, dword ptr [0x11c26a60] */
  EAX = (r32((uint32_t)(0x11c26a60)));
  /* 11c21c2c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21c2f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21c34 jmp 0x11c21c14 */
  goto L_11c21c14;
L_11c21c36:;
  /* 11c21c36 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11c21c39 push eax */
  push32((uint32_t)(EAX));
  /* 11c21c3a call dword ptr [0x11c250a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250a4))), 0x11c21c40u);
  /* 11c21c40 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c21c45 je 0x11c21d1c */
  if (C.zf) goto L_11c21d1c;
  /* 11c21c4b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c21c4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21c50 je 0x11c21d1c */
  if (C.zf) goto L_11c21d1c;
  /* 11c21c56 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11c21c58 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11c21c5b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11c21c5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c21c61 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11c21c66 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21c68 jl 0x11c21c6c */
  if ((C.sf!=C.of)) goto L_11c21c6c;
  /* 11c21c6a mov edi, eax */
  EDI = (EAX);
L_11c21c6c:;
  /* 11c21c6c cmp dword ptr [0x11c26b60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c26b60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21c72 jge 0x11c21cca */
  if ((C.sf==C.of)) goto L_11c21cca;
  /* 11c21c74 mov esi, 0x11c26a64 */
  ESI = (0x11c26a64u);
L_11c21c79:;
  /* 11c21c79 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11c21c7e call 0x11c22641 */
  push32(0x11c21c83u); f_11c22641();
  /* 11c21c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21c85 pop ecx */
  ECX = (pop32());
  /* 11c21c86 je 0x11c21cc4 */
  if (C.zf) goto L_11c21cc4;
  /* 11c21c88 add dword ptr [0x11c26b60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c26b60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11c26b60), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c21c8f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c21c91 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11c21c97:;
  /* 11c21c97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21c99 jae 0x11c21cb7 */
  if (!C.cf) goto L_11c21cb7;
  /* 11c21c9b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c21c9f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c21ca2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c21ca6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11c21caa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c21cac add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21caf add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21cb5 jmp 0x11c21c97 */
  goto L_11c21c97;
L_11c21cb7:;
  /* 11c21cb7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21cba cmp dword ptr [0x11c26b60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c26b60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21cc0 jl 0x11c21c79 */
  if ((C.sf!=C.of)) goto L_11c21c79;
  /* 11c21cc2 jmp 0x11c21cca */
  goto L_11c21cca;
L_11c21cc4:;
  /* 11c21cc4 mov edi, dword ptr [0x11c26b60] */
  EDI = (r32((uint32_t)(0x11c26b60)));
L_11c21cca:;
  /* 11c21cca xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c21ccc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c21cce jle 0x11c21d1c */
  if ((C.zf||C.sf!=C.of)) goto L_11c21d1c;
L_11c21cd0:;
  /* 11c21cd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c21cd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c21cd5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21cd8 je 0x11c21d12 */
  if (C.zf) goto L_11c21d12;
  /* 11c21cda mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11c21cdc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c21cde je 0x11c21d12 */
  if (C.zf) goto L_11c21d12;
  /* 11c21ce0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c21ce2 jne 0x11c21cef */
  if (!C.zf) goto L_11c21cef;
  /* 11c21ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c21ce5 call dword ptr [0x11c250a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250a0))), 0x11c21cebu);
  /* 11c21ceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21ced je 0x11c21d12 */
  if (C.zf) goto L_11c21d12;
L_11c21cef:;
  /* 11c21cef mov ecx, esi */
  ECX = (ESI);
  /* 11c21cf1 mov eax, esi */
  EAX = (ESI);
  /* 11c21cf3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c21cf6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c21cf9 mov ecx, dword ptr [ecx*4 + 0x11c26a60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c26a60)));
  /* 11c21d00 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c21d03 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11c21d06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c21d09 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c21d0b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c21d0d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11c21d0f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11c21d12:;
  /* 11c21d12 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c21d16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c21d17 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c21d18 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21d1a jl 0x11c21cd0 */
  if ((C.sf!=C.of)) goto L_11c21cd0;
L_11c21d1c:;
  /* 11c21d1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c21d1e:;
  /* 11c21d1e mov ecx, dword ptr [0x11c26a60] */
  ECX = (r32((uint32_t)(0x11c26a60)));
  /* 11c21d24 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11c21d27 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21d2b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c21d2e jne 0x11c21d7d */
  if (!C.zf) goto L_11c21d7d;
  /* 11c21d30 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c21d32 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11c21d36 jne 0x11c21d3d */
  if (!C.zf) goto L_11c21d3d;
  /* 11c21d38 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11c21d3a pop eax */
  EAX = (pop32());
  /* 11c21d3b jmp 0x11c21d47 */
  goto L_11c21d47;
L_11c21d3d:;
  /* 11c21d3d mov eax, ebx */
  EAX = (EBX);
  /* 11c21d3f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c21d40 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c21d42 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c21d44 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c21d47:;
  /* 11c21d47 push eax */
  push32((uint32_t)(EAX));
  /* 11c21d48 call dword ptr [0x11c2509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2509c))), 0x11c21d4eu);
  /* 11c21d4e mov edi, eax */
  EDI = (EAX);
  /* 11c21d50 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21d53 je 0x11c21d6c */
  if (C.zf) goto L_11c21d6c;
  /* 11c21d55 push edi */
  push32((uint32_t)(EDI));
  /* 11c21d56 call dword ptr [0x11c250a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250a0))), 0x11c21d5cu);
  /* 11c21d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21d5e je 0x11c21d6c */
  if (C.zf) goto L_11c21d6c;
  /* 11c21d60 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c21d65 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c21d67 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21d6a jne 0x11c21d72 */
  if (!C.zf) goto L_11c21d72;
L_11c21d6c:;
  /* 11c21d6c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c21d70 jmp 0x11c21d81 */
  goto L_11c21d81;
L_11c21d72:;
  /* 11c21d72 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21d75 jne 0x11c21d81 */
  if (!C.zf) goto L_11c21d81;
  /* 11c21d77 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c21d7b jmp 0x11c21d81 */
  goto L_11c21d81;
L_11c21d7d:;
  /* 11c21d7d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11c21d81:;
  /* 11c21d81 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c21d82 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21d85 jl 0x11c21d1e */
  if ((C.sf!=C.of)) goto L_11c21d1e;
  /* 11c21d87 push dword ptr [0x11c26b60] */
  push32((uint32_t)(r32((uint32_t)(0x11c26b60))));
  /* 11c21d8d call dword ptr [0x11c25098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25098))), 0x11c21d93u);
  /* 11c21d93 pop edi */
  EDI = (pop32());
  /* 11c21d94 pop esi */
  ESI = (pop32());
  /* 11c21d95 pop ebx */
  EBX = (pop32());
  /* 11c21d96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c21d97 ret  */
  ESPCHK(0x11c21bdcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001d98 @ 0x11c21d98 (84 bytes, 33 insns) */
void f_11c21d98(void) {
  FTRACE(0x11c21d98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21d98 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21d99 push esi */
  push32((uint32_t)(ESI));
  /* 11c21d9a push edi */
  push32((uint32_t)(EDI));
  /* 11c21d9b mov esi, 0x11c26a60 */
  ESI = (0x11c26a60u);
L_11c21da0:;
  /* 11c21da0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c21da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c21da4 je 0x11c21ddd */
  if (C.zf) goto L_11c21ddd;
  /* 11c21da6 mov edi, eax */
  EDI = (EAX);
  /* 11c21da8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21dad cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21daf jae 0x11c21dd2 */
  if (!C.cf) goto L_11c21dd2;
  /* 11c21db1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11c21db4:;
  /* 11c21db4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21db8 je 0x11c21dc1 */
  if (C.zf) goto L_11c21dc1;
  /* 11c21dba push ebx */
  push32((uint32_t)(EBX));
  /* 11c21dbb call dword ptr [0x11c250a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c250a8))), 0x11c21dc1u);
L_11c21dc1:;
  /* 11c21dc1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c21dc3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21dc6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21dcb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21dce cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21dd0 jb 0x11c21db4 */
  if (C.cf) goto L_11c21db4;
L_11c21dd2:;
  /* 11c21dd2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c21dd4 call 0x11c225f9 */
  push32(0x11c21dd9u); f_11c225f9();
  /* 11c21dd9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c21ddc pop ecx */
  ECX = (pop32());
L_11c21ddd:;
  /* 11c21ddd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21de0 cmp esi, 0x11c26b60 */
  { uint32_t _a=(ESI),_b=(0x11c26b60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21de6 jl 0x11c21da0 */
  if ((C.sf!=C.of)) goto L_11c21da0;
  /* 11c21de8 pop edi */
  EDI = (pop32());
  /* 11c21de9 pop esi */
  ESI = (pop32());
  /* 11c21dea pop ebx */
  EBX = (pop32());
  /* 11c21deb ret  */
  ESPCHK(0x11c21d98u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dec @ 0x11c21dec (185 bytes, 71 insns) */
void f_11c21dec(void) {
  FTRACE(0x11c21decu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21dec push ebx */
  push32((uint32_t)(EBX));
  /* 11c21ded xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c21def cmp dword ptr [0x11c26b68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c26b68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21df5 push esi */
  push32((uint32_t)(ESI));
  /* 11c21df6 push edi */
  push32((uint32_t)(EDI));
  /* 11c21df7 jne 0x11c21dfe */
  if (!C.zf) goto L_11c21dfe;
  /* 11c21df9 call 0x11c22c13 */
  push32(0x11c21dfeu); f_11c22c13();
L_11c21dfe:;
  /* 11c21dfe mov esi, dword ptr [0x11c265f8] */
  ESI = (r32((uint32_t)(0x11c265f8)));
  /* 11c21e04 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c21e06:;
  /* 11c21e06 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c21e08 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21e0a je 0x11c21e1e */
  if (C.zf) goto L_11c21e1e;
  /* 11c21e0c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21e0e je 0x11c21e11 */
  if (C.zf) goto L_11c21e11;
  /* 11c21e10 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c21e11:;
  /* 11c21e11 push esi */
  push32((uint32_t)(ESI));
  /* 11c21e12 call 0x11c227c0 */
  push32(0x11c21e17u); f_11c227c0();
  /* 11c21e17 pop ecx */
  ECX = (pop32());
  /* 11c21e18 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11c21e1c jmp 0x11c21e06 */
  goto L_11c21e06;
L_11c21e1e:;
  /* 11c21e1e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11c21e25 push eax */
  push32((uint32_t)(EAX));
  /* 11c21e26 call 0x11c22641 */
  push32(0x11c21e2bu); f_11c22641();
  /* 11c21e2b mov esi, eax */
  ESI = (EAX);
  /* 11c21e2d pop ecx */
  ECX = (pop32());
  /* 11c21e2e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21e30 mov dword ptr [0x11c26628], esi */
  w32((uint32_t)(0x11c26628), (ESI));
  /* 11c21e36 jne 0x11c21e40 */
  if (!C.zf) goto L_11c21e40;
  /* 11c21e38 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c21e3a call 0x11c21966 */
  push32(0x11c21e3fu); f_11c21966();
  /* 11c21e3f pop ecx */
  ECX = (pop32());
L_11c21e40:;
  /* 11c21e40 mov edi, dword ptr [0x11c265f8] */
  EDI = (r32((uint32_t)(0x11c265f8)));
  /* 11c21e46 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21e48 je 0x11c21e83 */
  if (C.zf) goto L_11c21e83;
  /* 11c21e4a push ebp */
  push32((uint32_t)(EBP));
L_11c21e4b:;
  /* 11c21e4b push edi */
  push32((uint32_t)(EDI));
  /* 11c21e4c call 0x11c227c0 */
  push32(0x11c21e51u); f_11c227c0();
  /* 11c21e51 mov ebp, eax */
  EBP = (EAX);
  /* 11c21e53 pop ecx */
  ECX = (pop32());
  /* 11c21e54 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c21e55 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21e58 je 0x11c21e7c */
  if (C.zf) goto L_11c21e7c;
  /* 11c21e5a push ebp */
  push32((uint32_t)(EBP));
  /* 11c21e5b call 0x11c22641 */
  push32(0x11c21e60u); f_11c22641();
  /* 11c21e60 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21e62 pop ecx */
  ECX = (pop32());
  /* 11c21e63 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c21e65 jne 0x11c21e6f */
  if (!C.zf) goto L_11c21e6f;
  /* 11c21e67 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c21e69 call 0x11c21966 */
  push32(0x11c21e6eu); f_11c21966();
  /* 11c21e6e pop ecx */
  ECX = (pop32());
L_11c21e6f:;
  /* 11c21e6f push edi */
  push32((uint32_t)(EDI));
  /* 11c21e70 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c21e72 call 0x11c226d0 */
  push32(0x11c21e77u); f_11c226d0();
  /* 11c21e77 pop ecx */
  ECX = (pop32());
  /* 11c21e78 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21e7b pop ecx */
  ECX = (pop32());
L_11c21e7c:;
  /* 11c21e7c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21e7e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21e80 jne 0x11c21e4b */
  if (!C.zf) goto L_11c21e4b;
  /* 11c21e82 pop ebp */
  EBP = (pop32());
L_11c21e83:;
  /* 11c21e83 push dword ptr [0x11c265f8] */
  push32((uint32_t)(r32((uint32_t)(0x11c265f8))));
  /* 11c21e89 call 0x11c225f9 */
  push32(0x11c21e8eu); f_11c225f9();
  /* 11c21e8e pop ecx */
  ECX = (pop32());
  /* 11c21e8f mov dword ptr [0x11c265f8], ebx */
  w32((uint32_t)(0x11c265f8), (EBX));
  /* 11c21e95 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11c21e97 pop edi */
  EDI = (pop32());
  /* 11c21e98 pop esi */
  ESI = (pop32());
  /* 11c21e99 mov dword ptr [0x11c26b64], 1 */
  w32((uint32_t)(0x11c26b64), (0x1u));
  /* 11c21ea3 pop ebx */
  EBX = (pop32());
  /* 11c21ea4 ret  */
  ESPCHK(0x11c21decu, _esp0);
  ESP += 4; return;
}

/* FUN_10001ea5 @ 0x11c21ea5 (153 bytes, 62 insns) */
void f_11c21ea5(void) {
  FTRACE(0x11c21ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21ea5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c21ea6 mov ebp, esp */
  EBP = (ESP);
  /* 11c21ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c21ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c21eaa push ebx */
  push32((uint32_t)(EBX));
  /* 11c21eab xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c21ead cmp dword ptr [0x11c26b68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c26b68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21eb3 push esi */
  push32((uint32_t)(ESI));
  /* 11c21eb4 push edi */
  push32((uint32_t)(EDI));
  /* 11c21eb5 jne 0x11c21ebc */
  if (!C.zf) goto L_11c21ebc;
  /* 11c21eb7 call 0x11c22c13 */
  push32(0x11c21ebcu); f_11c22c13();
L_11c21ebc:;
  /* 11c21ebc mov esi, 0x11c2664c */
  ESI = (0x11c2664cu);
  /* 11c21ec1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c21ec6 push esi */
  push32((uint32_t)(ESI));
  /* 11c21ec7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21ec8 call dword ptr [0x11c2508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2508c))), 0x11c21eceu);
  /* 11c21ece mov eax, dword ptr [0x11c26b78] */
  EAX = (r32((uint32_t)(0x11c26b78)));
  /* 11c21ed3 mov dword ptr [0x11c26638], esi */
  w32((uint32_t)(0x11c26638), (ESI));
  /* 11c21ed9 mov edi, esi */
  EDI = (ESI);
  /* 11c21edb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21edd je 0x11c21ee1 */
  if (C.zf) goto L_11c21ee1;
  /* 11c21edf mov edi, eax */
  EDI = (EAX);
L_11c21ee1:;
  /* 11c21ee1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c21ee4 push eax */
  push32((uint32_t)(EAX));
  /* 11c21ee5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c21ee8 push eax */
  push32((uint32_t)(EAX));
  /* 11c21ee9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21eea push ebx */
  push32((uint32_t)(EBX));
  /* 11c21eeb push edi */
  push32((uint32_t)(EDI));
  /* 11c21eec call 0x11c21f3e */
  push32(0x11c21ef1u); f_11c21f3e();
  /* 11c21ef1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c21ef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c21ef7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11c21efa push eax */
  push32((uint32_t)(EAX));
  /* 11c21efb call 0x11c22641 */
  push32(0x11c21f00u); f_11c22641();
  /* 11c21f00 mov esi, eax */
  ESI = (EAX);
  /* 11c21f02 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21f05 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c21f07 jne 0x11c21f11 */
  if (!C.zf) goto L_11c21f11;
  /* 11c21f09 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c21f0b call 0x11c21966 */
  push32(0x11c21f10u); f_11c21966();
  /* 11c21f10 pop ecx */
  ECX = (pop32());
L_11c21f11:;
  /* 11c21f11 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c21f14 push eax */
  push32((uint32_t)(EAX));
  /* 11c21f15 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c21f18 push eax */
  push32((uint32_t)(EAX));
  /* 11c21f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c21f1c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11c21f1f push eax */
  push32((uint32_t)(EAX));
  /* 11c21f20 push esi */
  push32((uint32_t)(ESI));
  /* 11c21f21 push edi */
  push32((uint32_t)(EDI));
  /* 11c21f22 call 0x11c21f3e */
  push32(0x11c21f27u); f_11c21f3e();
  /* 11c21f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c21f2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21f2d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c21f2e mov dword ptr [0x11c26620], esi */
  w32((uint32_t)(0x11c26620), (ESI));
  /* 11c21f34 pop edi */
  EDI = (pop32());
  /* 11c21f35 pop esi */
  ESI = (pop32());
  /* 11c21f36 mov dword ptr [0x11c2661c], eax */
  w32((uint32_t)(0x11c2661c), (EAX));
  /* 11c21f3b pop ebx */
  EBX = (pop32());
  /* 11c21f3c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c21f3d ret  */
  ESPCHK(0x11c21ea5u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f3e @ 0x11c21f3e (436 bytes, 187 insns) */
void f_11c21f3e(void) {
  FTRACE(0x11c21f3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c21f3e push ebp */
  push32((uint32_t)(EBP));
  /* 11c21f3f mov ebp, esp */
  EBP = (ESP);
  /* 11c21f41 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c21f44 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c21f47 push ebx */
  push32((uint32_t)(EBX));
  /* 11c21f48 push esi */
  push32((uint32_t)(ESI));
  /* 11c21f49 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c21f4c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c21f4f push edi */
  push32((uint32_t)(EDI));
  /* 11c21f50 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c21f53 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11c21f59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c21f5c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c21f5e je 0x11c21f68 */
  if (C.zf) goto L_11c21f68;
  /* 11c21f60 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c21f62 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c21f65 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c21f68:;
  /* 11c21f68 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21f6b jne 0x11c21fb1 */
  if (!C.zf) goto L_11c21fb1;
L_11c21f6d:;
  /* 11c21f6d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c21f70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c21f71 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21f74 je 0x11c21f9f */
  if (C.zf) goto L_11c21f9f;
  /* 11c21f76 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c21f78 je 0x11c21f9f */
  if (C.zf) goto L_11c21f9f;
  /* 11c21f7a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c21f7d test byte ptr [edx + 0x11c26941], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c26941)))&(0x4u); fl_logic(_r,8); }
  /* 11c21f84 je 0x11c21f92 */
  if (C.zf) goto L_11c21f92;
  /* 11c21f86 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c21f88 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21f8a je 0x11c21f92 */
  if (C.zf) goto L_11c21f92;
  /* 11c21f8c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c21f8e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c21f90 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c21f91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c21f92:;
  /* 11c21f92 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c21f94 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21f96 je 0x11c21f6d */
  if (C.zf) goto L_11c21f6d;
  /* 11c21f98 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c21f9a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c21f9c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c21f9d jmp 0x11c21f6d */
  goto L_11c21f6d;
L_11c21f9f:;
  /* 11c21f9f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c21fa1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21fa3 je 0x11c21fa9 */
  if (C.zf) goto L_11c21fa9;
  /* 11c21fa5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c21fa8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c21fa9:;
  /* 11c21fa9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21fac jne 0x11c21ff4 */
  if (!C.zf) goto L_11c21ff4;
  /* 11c21fae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c21faf jmp 0x11c21ff4 */
  goto L_11c21ff4;
L_11c21fb1:;
  /* 11c21fb1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c21fb3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21fb5 je 0x11c21fbc */
  if (C.zf) goto L_11c21fbc;
  /* 11c21fb7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c21fb9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c21fbb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c21fbc:;
  /* 11c21fbc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c21fbe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c21fbf movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c21fc2 test byte ptr [ebx + 0x11c26941], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c26941)))&(0x4u); fl_logic(_r,8); }
  /* 11c21fc9 je 0x11c21fd7 */
  if (C.zf) goto L_11c21fd7;
  /* 11c21fcb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c21fcd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21fcf je 0x11c21fd6 */
  if (C.zf) goto L_11c21fd6;
  /* 11c21fd1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c21fd3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11c21fd5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c21fd6:;
  /* 11c21fd6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c21fd7:;
  /* 11c21fd7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21fda je 0x11c21fe5 */
  if (C.zf) goto L_11c21fe5;
  /* 11c21fdc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c21fde je 0x11c21fe9 */
  if (C.zf) goto L_11c21fe9;
  /* 11c21fe0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21fe3 jne 0x11c21fb1 */
  if (!C.zf) goto L_11c21fb1;
L_11c21fe5:;
  /* 11c21fe5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c21fe7 jne 0x11c21fec */
  if (!C.zf) goto L_11c21fec;
L_11c21fe9:;
  /* 11c21fe9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c21fea jmp 0x11c21ff4 */
  goto L_11c21ff4;
L_11c21fec:;
  /* 11c21fec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c21fee je 0x11c21ff4 */
  if (C.zf) goto L_11c21ff4;
  /* 11c21ff0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11c21ff4:;
  /* 11c21ff4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11c21ff8:;
  /* 11c21ff8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c21ffb je 0x11c220e1 */
  if (C.zf) goto L_11c220e1;
L_11c22001:;
  /* 11c22001 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c22003 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22006 je 0x11c2200d */
  if (C.zf) goto L_11c2200d;
  /* 11c22008 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c2200b jne 0x11c22010 */
  if (!C.zf) goto L_11c22010;
L_11c2200d:;
  /* 11c2200d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c2200e jmp 0x11c22001 */
  goto L_11c22001;
L_11c22010:;
  /* 11c22010 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22013 je 0x11c220e1 */
  if (C.zf) goto L_11c220e1;
  /* 11c22019 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c2201b je 0x11c22025 */
  if (C.zf) goto L_11c22025;
  /* 11c2201d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11c2201f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22022 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c22025:;
  /* 11c22025 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c22028 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11c2202a:;
  /* 11c2202a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11c22031 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c22033:;
  /* 11c22033 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22036 jne 0x11c2203c */
  if (!C.zf) goto L_11c2203c;
  /* 11c22038 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22039 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c2203a jmp 0x11c22033 */
  goto L_11c22033;
L_11c2203c:;
  /* 11c2203c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c2203f jne 0x11c2206d */
  if (!C.zf) goto L_11c2206d;
  /* 11c22041 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c22044 jne 0x11c2206b */
  if (!C.zf) goto L_11c2206b;
  /* 11c22046 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c22048 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2204b je 0x11c2205a */
  if (C.zf) goto L_11c2205a;
  /* 11c2204d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22051 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11c22054 jne 0x11c2205a */
  if (!C.zf) goto L_11c2205a;
  /* 11c22056 mov eax, edx */
  EAX = (EDX);
  /* 11c22058 jmp 0x11c2205d */
  goto L_11c2205d;
L_11c2205a:;
  /* 11c2205a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11c2205d:;
  /* 11c2205d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c22060 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22062 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22065 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11c22068 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11c2206b:;
  /* 11c2206b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11c2206d:;
  /* 11c2206d mov edx, ebx */
  EDX = (EBX);
  /* 11c2206f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c22070 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c22072 je 0x11c22082 */
  if (C.zf) goto L_11c22082;
  /* 11c22074 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c22075:;
  /* 11c22075 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c22077 je 0x11c2207d */
  if (C.zf) goto L_11c2207d;
  /* 11c22079 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11c2207c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c2207d:;
  /* 11c2207d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c2207f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c22080 jne 0x11c22075 */
  if (!C.zf) goto L_11c22075;
L_11c22082:;
  /* 11c22082 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c22084 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c22086 je 0x11c220d2 */
  if (C.zf) goto L_11c220d2;
  /* 11c22088 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2208c jne 0x11c22098 */
  if (!C.zf) goto L_11c22098;
  /* 11c2208e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22091 je 0x11c220d2 */
  if (C.zf) goto L_11c220d2;
  /* 11c22093 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22096 je 0x11c220d2 */
  if (C.zf) goto L_11c220d2;
L_11c22098:;
  /* 11c22098 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2209c je 0x11c220cc */
  if (C.zf) goto L_11c220cc;
  /* 11c2209e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c220a0 je 0x11c220bb */
  if (C.zf) goto L_11c220bb;
  /* 11c220a2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11c220a5 test byte ptr [ebx + 0x11c26941], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11c26941)))&(0x4u); fl_logic(_r,8); }
  /* 11c220ac je 0x11c220b4 */
  if (C.zf) goto L_11c220b4;
  /* 11c220ae mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c220b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c220b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c220b2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c220b4:;
  /* 11c220b4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11c220b6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c220b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c220b9 jmp 0x11c220ca */
  goto L_11c220ca;
L_11c220bb:;
  /* 11c220bb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11c220be test byte ptr [edx + 0x11c26941], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11c26941)))&(0x4u); fl_logic(_r,8); }
  /* 11c220c5 je 0x11c220ca */
  if (C.zf) goto L_11c220ca;
  /* 11c220c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c220c8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c220ca:;
  /* 11c220ca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11c220cc:;
  /* 11c220cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c220cd jmp 0x11c2202a */
  goto L_11c2202a;
L_11c220d2:;
  /* 11c220d2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c220d4 je 0x11c220da */
  if (C.zf) goto L_11c220da;
  /* 11c220d6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11c220d9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c220da:;
  /* 11c220da inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11c220dc jmp 0x11c21ff8 */
  goto L_11c21ff8;
L_11c220e1:;
  /* 11c220e1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c220e3 je 0x11c220e8 */
  if (C.zf) goto L_11c220e8;
  /* 11c220e5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c220e8:;
  /* 11c220e8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c220eb pop edi */
  EDI = (pop32());
  /* 11c220ec pop esi */
  ESI = (pop32());
  /* 11c220ed pop ebx */
  EBX = (pop32());
  /* 11c220ee inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11c220f0 pop ebp */
  EBP = (pop32());
  /* 11c220f1 ret  */
  ESPCHK(0x11c21f3eu, _esp0);
  ESP += 4; return;
}

/* FUN_100020f2 @ 0x11c220f2 (306 bytes, 132 insns) */
void f_11c220f2(void) {
  FTRACE(0x11c220f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c220f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11c220f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c220f4 mov eax, dword ptr [0x11c26750] */
  EAX = (r32((uint32_t)(0x11c26750)));
  /* 11c220f9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c220fa push ebp */
  push32((uint32_t)(EBP));
  /* 11c220fb mov ebp, dword ptr [0x11c2505c] */
  EBP = (r32((uint32_t)(0x11c2505c)));
  /* 11c22101 push esi */
  push32((uint32_t)(ESI));
  /* 11c22102 push edi */
  push32((uint32_t)(EDI));
  /* 11c22103 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c22105 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c22107 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c22109 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2210b jne 0x11c22140 */
  if (!C.zf) goto L_11c22140;
  /* 11c2210d call ebp */
  call_ind((uint32_t)(EBP), 0x11c2210fu);
  /* 11c2210f mov esi, eax */
  ESI = (EAX);
  /* 11c22111 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22113 je 0x11c22121 */
  if (C.zf) goto L_11c22121;
  /* 11c22115 mov dword ptr [0x11c26750], 1 */
  w32((uint32_t)(0x11c26750), (0x1u));
  /* 11c2211f jmp 0x11c22149 */
  goto L_11c22149;
L_11c22121:;
  /* 11c22121 call dword ptr [0x11c25060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25060))), 0x11c22127u);
  /* 11c22127 mov edi, eax */
  EDI = (EAX);
  /* 11c22129 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2212b je 0x11c2221b */
  if (C.zf) goto L_11c2221b;
  /* 11c22131 mov dword ptr [0x11c26750], 2 */
  w32((uint32_t)(0x11c26750), (0x2u));
  /* 11c2213b jmp 0x11c221cf */
  goto L_11c221cf;
L_11c22140:;
  /* 11c22140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22143 jne 0x11c221ca */
  if (!C.zf) goto L_11c221ca;
L_11c22149:;
  /* 11c22149 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2214b jne 0x11c22159 */
  if (!C.zf) goto L_11c22159;
  /* 11c2214d call ebp */
  call_ind((uint32_t)(EBP), 0x11c2214fu);
  /* 11c2214f mov esi, eax */
  ESI = (EAX);
  /* 11c22151 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22153 je 0x11c2221b */
  if (C.zf) goto L_11c2221b;
L_11c22159:;
  /* 11c22159 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c2215c mov eax, esi */
  EAX = (ESI);
  /* 11c2215e je 0x11c2216e */
  if (C.zf) goto L_11c2216e;
L_11c22160:;
  /* 11c22160 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22161 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22162 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c22165 jne 0x11c22160 */
  if (!C.zf) goto L_11c22160;
  /* 11c22167 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22168 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22169 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c2216c jne 0x11c22160 */
  if (!C.zf) goto L_11c22160;
L_11c2216e:;
  /* 11c2216e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22170 mov edi, dword ptr [0x11c25064] */
  EDI = (r32((uint32_t)(0x11c25064)));
  /* 11c22176 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c22178 push ebx */
  push32((uint32_t)(EBX));
  /* 11c22179 push ebx */
  push32((uint32_t)(EBX));
  /* 11c2217a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c2217b push ebx */
  push32((uint32_t)(EBX));
  /* 11c2217c push ebx */
  push32((uint32_t)(EBX));
  /* 11c2217d push eax */
  push32((uint32_t)(EAX));
  /* 11c2217e push esi */
  push32((uint32_t)(ESI));
  /* 11c2217f push ebx */
  push32((uint32_t)(EBX));
  /* 11c22180 push ebx */
  push32((uint32_t)(EBX));
  /* 11c22181 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11c22185 call edi */
  call_ind((uint32_t)(EDI), 0x11c22187u);
  /* 11c22187 mov ebp, eax */
  EBP = (EAX);
  /* 11c22189 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2218b je 0x11c221bf */
  if (C.zf) goto L_11c221bf;
  /* 11c2218d push ebp */
  push32((uint32_t)(EBP));
  /* 11c2218e call 0x11c22641 */
  push32(0x11c22193u); f_11c22641();
  /* 11c22193 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22195 pop ecx */
  ECX = (pop32());
  /* 11c22196 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c2219a je 0x11c221bf */
  if (C.zf) goto L_11c221bf;
  /* 11c2219c push ebx */
  push32((uint32_t)(EBX));
  /* 11c2219d push ebx */
  push32((uint32_t)(EBX));
  /* 11c2219e push ebp */
  push32((uint32_t)(EBP));
  /* 11c2219f push eax */
  push32((uint32_t)(EAX));
  /* 11c221a0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11c221a4 push esi */
  push32((uint32_t)(ESI));
  /* 11c221a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c221a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c221a7 call edi */
  call_ind((uint32_t)(EDI), 0x11c221a9u);
  /* 11c221a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c221ab jne 0x11c221bb */
  if (!C.zf) goto L_11c221bb;
  /* 11c221ad push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c221b1 call 0x11c225f9 */
  push32(0x11c221b6u); f_11c225f9();
  /* 11c221b6 pop ecx */
  ECX = (pop32());
  /* 11c221b7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11c221bb:;
  /* 11c221bb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11c221bf:;
  /* 11c221bf push esi */
  push32((uint32_t)(ESI));
  /* 11c221c0 call dword ptr [0x11c25068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25068))), 0x11c221c6u);
  /* 11c221c6 mov eax, ebx */
  EAX = (EBX);
  /* 11c221c8 jmp 0x11c2221d */
  goto L_11c2221d;
L_11c221ca:;
  /* 11c221ca cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c221cd jne 0x11c2221b */
  if (!C.zf) goto L_11c2221b;
L_11c221cf:;
  /* 11c221cf cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c221d1 jne 0x11c221df */
  if (!C.zf) goto L_11c221df;
  /* 11c221d3 call dword ptr [0x11c25060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25060))), 0x11c221d9u);
  /* 11c221d9 mov edi, eax */
  EDI = (EAX);
  /* 11c221db cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c221dd je 0x11c2221b */
  if (C.zf) goto L_11c2221b;
L_11c221df:;
  /* 11c221df cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c221e1 mov eax, edi */
  EAX = (EDI);
  /* 11c221e3 je 0x11c221ef */
  if (C.zf) goto L_11c221ef;
L_11c221e5:;
  /* 11c221e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c221e6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c221e8 jne 0x11c221e5 */
  if (!C.zf) goto L_11c221e5;
  /* 11c221ea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c221eb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c221ed jne 0x11c221e5 */
  if (!C.zf) goto L_11c221e5;
L_11c221ef:;
  /* 11c221ef sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c221f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c221f2 mov ebp, eax */
  EBP = (EAX);
  /* 11c221f4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c221f5 call 0x11c22641 */
  push32(0x11c221fau); f_11c22641();
  /* 11c221fa mov esi, eax */
  ESI = (EAX);
  /* 11c221fc pop ecx */
  ECX = (pop32());
  /* 11c221fd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c221ff jne 0x11c22205 */
  if (!C.zf) goto L_11c22205;
  /* 11c22201 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c22203 jmp 0x11c22210 */
  goto L_11c22210;
L_11c22205:;
  /* 11c22205 push ebp */
  push32((uint32_t)(EBP));
  /* 11c22206 push edi */
  push32((uint32_t)(EDI));
  /* 11c22207 push esi */
  push32((uint32_t)(ESI));
  /* 11c22208 call 0x11c22c30 */
  push32(0x11c2220du); f_11c22c30();
  /* 11c2220d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c22210:;
  /* 11c22210 push edi */
  push32((uint32_t)(EDI));
  /* 11c22211 call dword ptr [0x11c25090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25090))), 0x11c22217u);
  /* 11c22217 mov eax, esi */
  EAX = (ESI);
  /* 11c22219 jmp 0x11c2221d */
  goto L_11c2221d;
L_11c2221b:;
  /* 11c2221b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c2221d:;
  /* 11c2221d pop edi */
  EDI = (pop32());
  /* 11c2221e pop esi */
  ESI = (pop32());
  /* 11c2221f pop ebp */
  EBP = (pop32());
  /* 11c22220 pop ebx */
  EBX = (pop32());
  /* 11c22221 pop ecx */
  ECX = (pop32());
  /* 11c22222 pop ecx */
  ECX = (pop32());
  /* 11c22223 ret  */
  ESPCHK(0x11c220f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002224 @ 0x11c22224 (60 bytes, 20 insns) */
void f_11c22224(void) {
  FTRACE(0x11c22224u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22226 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22228 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2222c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c22231 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11c22234 push eax */
  push32((uint32_t)(EAX));
  /* 11c22235 call dword ptr [0x11c25054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25054))), 0x11c2223bu);
  /* 11c2223b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2223d mov dword ptr [0x11c26a48], eax */
  w32((uint32_t)(0x11c26a48), (EAX));
  /* 11c22242 je 0x11c22259 */
  if (C.zf) goto L_11c22259;
  /* 11c22244 call 0x11c22f65 */
  push32(0x11c22249u); f_11c22f65();
  /* 11c22249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2224b jne 0x11c2225c */
  if (!C.zf) goto L_11c2225c;
  /* 11c2224d push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c22253 call dword ptr [0x11c25058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25058))), 0x11c22259u);
L_11c22259:;
  /* 11c22259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c2225b ret  */
  ESPCHK(0x11c22224u, _esp0);
  ESP += 4; return;
L_11c2225c:;
  /* 11c2225c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c2225e pop eax */
  EAX = (pop32());
  /* 11c2225f ret  */
  ESPCHK(0x11c22224u, _esp0);
  ESP += 4; return;
}

/* FUN_10002260 @ 0x11c22260 (117 bytes, 38 insns) */
void f_11c22260(void) {
  FTRACE(0x11c22260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22260 push ebx */
  push32((uint32_t)(EBX));
  /* 11c22261 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c22263 cmp dword ptr [0x11c26808], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c26808))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22269 push ebp */
  push32((uint32_t)(EBP));
  /* 11c2226a mov ebp, dword ptr [0x11c2504c] */
  EBP = (r32((uint32_t)(0x11c2504c)));
  /* 11c22270 jle 0x11c222b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11c222b6;
  /* 11c22272 mov eax, dword ptr [0x11c2680c] */
  EAX = (r32((uint32_t)(0x11c2680c)));
  /* 11c22277 push esi */
  push32((uint32_t)(ESI));
  /* 11c22278 push edi */
  push32((uint32_t)(EDI));
  /* 11c22279 mov edi, dword ptr [0x11c25050] */
  EDI = (r32((uint32_t)(0x11c25050)));
  /* 11c2227f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11c22282:;
  /* 11c22282 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c22287 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c2228c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c2228e call edi */
  call_ind((uint32_t)(EDI), 0x11c22290u);
  /* 11c22290 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c22295 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22297 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c22299 call edi */
  call_ind((uint32_t)(EDI), 0x11c2229bu);
  /* 11c2229b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11c2229e push 0 */
  push32((uint32_t)(0x0u));
  /* 11c222a0 push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c222a6 call ebp */
  call_ind((uint32_t)(EBP), 0x11c222a8u);
  /* 11c222a8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c222ab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c222ac cmp ebx, dword ptr [0x11c26808] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c26808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c222b2 jl 0x11c22282 */
  if ((C.sf!=C.of)) goto L_11c22282;
  /* 11c222b4 pop edi */
  EDI = (pop32());
  /* 11c222b5 pop esi */
  ESI = (pop32());
L_11c222b6:;
  /* 11c222b6 push dword ptr [0x11c2680c] */
  push32((uint32_t)(r32((uint32_t)(0x11c2680c))));
  /* 11c222bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c222be push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c222c4 call ebp */
  call_ind((uint32_t)(EBP), 0x11c222c6u);
  /* 11c222c6 push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c222cc call dword ptr [0x11c25058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25058))), 0x11c222d2u);
  /* 11c222d2 pop ebp */
  EBP = (pop32());
  /* 11c222d3 pop ebx */
  EBX = (pop32());
  /* 11c222d4 ret  */
  ESPCHK(0x11c22260u, _esp0);
  ESP += 4; return;
}

/* FUN_100022d5 @ 0x11c222d5 (57 bytes, 18 insns) */
void f_11c222d5(void) {
  FTRACE(0x11c222d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c222d5 mov eax, dword ptr [0x11c26600] */
  EAX = (r32((uint32_t)(0x11c26600)));
  /* 11c222da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c222dd je 0x11c222ec */
  if (C.zf) goto L_11c222ec;
  /* 11c222df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c222e1 jne 0x11c2230d */
  if (!C.zf) goto L_11c2230d;
  /* 11c222e3 cmp dword ptr [0x11c26604], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c26604))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c222ea jne 0x11c2230d */
  if (!C.zf) goto L_11c2230d;
L_11c222ec:;
  /* 11c222ec push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11c222f1 call 0x11c2230e */
  push32(0x11c222f6u); f_11c2230e();
  /* 11c222f6 mov eax, dword ptr [0x11c26754] */
  EAX = (r32((uint32_t)(0x11c26754)));
  /* 11c222fb pop ecx */
  ECX = (pop32());
  /* 11c222fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c222fe je 0x11c22302 */
  if (C.zf) goto L_11c22302;
  /* 11c22300 call eax */
  call_ind((uint32_t)(EAX), 0x11c22302u);
L_11c22302:;
  /* 11c22302 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11c22307 call 0x11c2230e */
  push32(0x11c2230cu); f_11c2230e();
  /* 11c2230c pop ecx */
  ECX = (pop32());
L_11c2230d:;
  /* 11c2230d ret  */
  ESPCHK(0x11c222d5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000230e @ 0x11c2230e (339 bytes, 100 insns) */
void f_11c2230e(void) {
  FTRACE(0x11c2230eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2230e push ebp */
  push32((uint32_t)(EBP));
  /* 11c2230f mov ebp, esp */
  EBP = (ESP);
  /* 11c22311 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c2231a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c2231c mov eax, 0x11c26218 */
  EAX = (0x11c26218u);
L_11c22321:;
  /* 11c22321 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22323 je 0x11c22330 */
  if (C.zf) goto L_11c22330;
  /* 11c22325 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22328 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c22329 cmp eax, 0x11c262a8 */
  { uint32_t _a=(EAX),_b=(0x11c262a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2232e jl 0x11c22321 */
  if ((C.sf!=C.of)) goto L_11c22321;
L_11c22330:;
  /* 11c22330 push esi */
  push32((uint32_t)(ESI));
  /* 11c22331 mov esi, ecx */
  ESI = (ECX);
  /* 11c22333 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c22336 cmp edx, dword ptr [esi + 0x11c26218] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11c26218))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2233c jne 0x11c2245e */
  if (!C.zf) goto L_11c2245e;
  /* 11c22342 mov eax, dword ptr [0x11c26600] */
  EAX = (r32((uint32_t)(0x11c26600)));
  /* 11c22347 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2234a je 0x11c22438 */
  if (C.zf) goto L_11c22438;
  /* 11c22350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c22352 jne 0x11c22361 */
  if (!C.zf) goto L_11c22361;
  /* 11c22354 cmp dword ptr [0x11c26604], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c26604))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2235b je 0x11c22438 */
  if (C.zf) goto L_11c22438;
L_11c22361:;
  /* 11c22361 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22367 je 0x11c2245e */
  if (C.zf) goto L_11c2245e;
  /* 11c2236d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c22373 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11c22378 push eax */
  push32((uint32_t)(EAX));
  /* 11c22379 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2237b call dword ptr [0x11c2508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2508c))), 0x11c22381u);
  /* 11c22381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c22383 jne 0x11c22398 */
  if (!C.zf) goto L_11c22398;
  /* 11c22385 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c2238b push 0x11c25408 */
  push32((uint32_t)(0x11c25408u));
  /* 11c22390 push eax */
  push32((uint32_t)(EAX));
  /* 11c22391 call 0x11c226d0 */
  push32(0x11c22396u); f_11c226d0();
  /* 11c22396 pop ecx */
  ECX = (pop32());
  /* 11c22397 pop ecx */
  ECX = (pop32());
L_11c22398:;
  /* 11c22398 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c2239e push edi */
  push32((uint32_t)(EDI));
  /* 11c2239f push eax */
  push32((uint32_t)(EAX));
  /* 11c223a0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11c223a6 call 0x11c227c0 */
  push32(0x11c223abu); f_11c227c0();
  /* 11c223ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c223ac pop ecx */
  ECX = (pop32());
  /* 11c223ad cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c223b0 jbe 0x11c223db */
  if ((C.cf||C.zf)) goto L_11c223db;
  /* 11c223b2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c223b8 push eax */
  push32((uint32_t)(EAX));
  /* 11c223b9 call 0x11c227c0 */
  push32(0x11c223beu); f_11c227c0();
  /* 11c223be mov edi, eax */
  EDI = (EAX);
  /* 11c223c0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11c223c6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c223c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c223cb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c223cd push 0x11c25404 */
  push32((uint32_t)(0x11c25404u));
  /* 11c223d2 push edi */
  push32((uint32_t)(EDI));
  /* 11c223d3 call 0x11c23840 */
  push32(0x11c223d8u); f_11c23840();
  /* 11c223d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c223db:;
  /* 11c223db lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c223e1 push 0x11c253e8 */
  push32((uint32_t)(0x11c253e8u));
  /* 11c223e6 push eax */
  push32((uint32_t)(EAX));
  /* 11c223e7 call 0x11c226d0 */
  push32(0x11c223ecu); f_11c226d0();
  /* 11c223ec lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c223f2 push edi */
  push32((uint32_t)(EDI));
  /* 11c223f3 push eax */
  push32((uint32_t)(EAX));
  /* 11c223f4 call 0x11c226e0 */
  push32(0x11c223f9u); f_11c226e0();
  /* 11c223f9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c223ff push 0x11c253e4 */
  push32((uint32_t)(0x11c253e4u));
  /* 11c22404 push eax */
  push32((uint32_t)(EAX));
  /* 11c22405 call 0x11c226e0 */
  push32(0x11c2240au); f_11c226e0();
  /* 11c2240a push dword ptr [esi + 0x11c2621c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11c2621c))));
  /* 11c22410 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c22416 push eax */
  push32((uint32_t)(EAX));
  /* 11c22417 call 0x11c226e0 */
  push32(0x11c2241cu); f_11c226e0();
  /* 11c2241c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11c22421 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11c22427 push 0x11c253bc */
  push32((uint32_t)(0x11c253bcu));
  /* 11c2242c push eax */
  push32((uint32_t)(EAX));
  /* 11c2242d call 0x11c237ae */
  push32(0x11c22432u); f_11c237ae();
  /* 11c22432 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22435 pop edi */
  EDI = (pop32());
  /* 11c22436 jmp 0x11c2245e */
  goto L_11c2245e;
L_11c22438:;
  /* 11c22438 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c2243b lea esi, [esi + 0x11c2621c] */
  ESI = ((uint32_t)(ESI + 0x11c2621c));
  /* 11c22441 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22443 push eax */
  push32((uint32_t)(EAX));
  /* 11c22444 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c22446 call 0x11c227c0 */
  push32(0x11c2244bu); f_11c227c0();
  /* 11c2244b pop ecx */
  ECX = (pop32());
  /* 11c2244c push eax */
  push32((uint32_t)(EAX));
  /* 11c2244d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c2244f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11c22451 call dword ptr [0x11c2509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2509c))), 0x11c22457u);
  /* 11c22457 push eax */
  push32((uint32_t)(EAX));
  /* 11c22458 call dword ptr [0x11c25048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25048))), 0x11c2245eu);
L_11c2245e:;
  /* 11c2245e pop esi */
  ESI = (pop32());
  /* 11c2245f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22460 ret  */
  ESPCHK(0x11c2230eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002461 @ 0x11c22461 (41 bytes, 12 insns) */
void f_11c22461(void) {
  FTRACE(0x11c22461u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22461 push esi */
  push32((uint32_t)(ESI));
  /* 11c22462 mov esi, dword ptr [0x11c25044] */
  ESI = (r32((uint32_t)(0x11c25044)));
  /* 11c22468 push dword ptr [0x11c262ec] */
  push32((uint32_t)(r32((uint32_t)(0x11c262ec))));
  /* 11c2246e call esi */
  call_ind((uint32_t)(ESI), 0x11c22470u);
  /* 11c22470 push dword ptr [0x11c262dc] */
  push32((uint32_t)(r32((uint32_t)(0x11c262dc))));
  /* 11c22476 call esi */
  call_ind((uint32_t)(ESI), 0x11c22478u);
  /* 11c22478 push dword ptr [0x11c262cc] */
  push32((uint32_t)(r32((uint32_t)(0x11c262cc))));
  /* 11c2247e call esi */
  call_ind((uint32_t)(ESI), 0x11c22480u);
  /* 11c22480 push dword ptr [0x11c262ac] */
  push32((uint32_t)(r32((uint32_t)(0x11c262ac))));
  /* 11c22486 call esi */
  call_ind((uint32_t)(ESI), 0x11c22488u);
  /* 11c22488 pop esi */
  ESI = (pop32());
  /* 11c22489 ret  */
  ESPCHK(0x11c22461u, _esp0);
  ESP += 4; return;
}

/* FUN_1000248a @ 0x11c2248a (108 bytes, 34 insns) */
void f_11c2248a(void) {
  FTRACE(0x11c2248au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2248a push esi */
  push32((uint32_t)(ESI));
  /* 11c2248b push edi */
  push32((uint32_t)(EDI));
  /* 11c2248c mov edi, dword ptr [0x11c250a8] */
  EDI = (r32((uint32_t)(0x11c250a8)));
  /* 11c22492 mov esi, 0x11c262a8 */
  ESI = (0x11c262a8u);
L_11c22497:;
  /* 11c22497 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c22499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2249b je 0x11c224c8 */
  if (C.zf) goto L_11c224c8;
  /* 11c2249d cmp esi, 0x11c262ec */
  { uint32_t _a=(ESI),_b=(0x11c262ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c224a3 je 0x11c224c8 */
  if (C.zf) goto L_11c224c8;
  /* 11c224a5 cmp esi, 0x11c262dc */
  { uint32_t _a=(ESI),_b=(0x11c262dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c224ab je 0x11c224c8 */
  if (C.zf) goto L_11c224c8;
  /* 11c224ad cmp esi, 0x11c262cc */
  { uint32_t _a=(ESI),_b=(0x11c262ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c224b3 je 0x11c224c8 */
  if (C.zf) goto L_11c224c8;
  /* 11c224b5 cmp esi, 0x11c262ac */
  { uint32_t _a=(ESI),_b=(0x11c262acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c224bb je 0x11c224c8 */
  if (C.zf) goto L_11c224c8;
  /* 11c224bd push eax */
  push32((uint32_t)(EAX));
  /* 11c224be call edi */
  call_ind((uint32_t)(EDI), 0x11c224c0u);
  /* 11c224c0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c224c2 call 0x11c225f9 */
  push32(0x11c224c7u); f_11c225f9();
  /* 11c224c7 pop ecx */
  ECX = (pop32());
L_11c224c8:;
  /* 11c224c8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c224cb cmp esi, 0x11c26368 */
  { uint32_t _a=(ESI),_b=(0x11c26368u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c224d1 jl 0x11c22497 */
  if ((C.sf!=C.of)) goto L_11c22497;
  /* 11c224d3 push dword ptr [0x11c262cc] */
  push32((uint32_t)(r32((uint32_t)(0x11c262cc))));
  /* 11c224d9 call edi */
  call_ind((uint32_t)(EDI), 0x11c224dbu);
  /* 11c224db push dword ptr [0x11c262dc] */
  push32((uint32_t)(r32((uint32_t)(0x11c262dc))));
  /* 11c224e1 call edi */
  call_ind((uint32_t)(EDI), 0x11c224e3u);
  /* 11c224e3 push dword ptr [0x11c262ec] */
  push32((uint32_t)(r32((uint32_t)(0x11c262ec))));
  /* 11c224e9 call edi */
  call_ind((uint32_t)(EDI), 0x11c224ebu);
  /* 11c224eb push dword ptr [0x11c262ac] */
  push32((uint32_t)(r32((uint32_t)(0x11c262ac))));
  /* 11c224f1 call edi */
  call_ind((uint32_t)(EDI), 0x11c224f3u);
  /* 11c224f3 pop edi */
  EDI = (pop32());
  /* 11c224f4 pop esi */
  ESI = (pop32());
  /* 11c224f5 ret  */
  ESPCHK(0x11c2248au, _esp0);
  ESP += 4; return;
}

/* FUN_100024f6 @ 0x11c224f6 (97 bytes, 37 insns) */
void f_11c224f6(void) {
  FTRACE(0x11c224f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c224f6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c224f7 mov ebp, esp */
  EBP = (ESP);
  /* 11c224f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c224fc push esi */
  push32((uint32_t)(ESI));
  /* 11c224fd cmp dword ptr [eax*4 + 0x11c262a8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11c262a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22505 lea esi, [eax*4 + 0x11c262a8] */
  ESI = ((uint32_t)(EAX*4 + 0x11c262a8));
  /* 11c2250c jne 0x11c2254c */
  if (!C.zf) goto L_11c2254c;
  /* 11c2250e push edi */
  push32((uint32_t)(EDI));
  /* 11c2250f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11c22511 call 0x11c22641 */
  push32(0x11c22516u); f_11c22641();
  /* 11c22516 mov edi, eax */
  EDI = (EAX);
  /* 11c22518 pop ecx */
  ECX = (pop32());
  /* 11c22519 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c2251b jne 0x11c22525 */
  if (!C.zf) goto L_11c22525;
  /* 11c2251d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c2251f call 0x11c21966 */
  push32(0x11c22524u); f_11c21966();
  /* 11c22524 pop ecx */
  ECX = (pop32());
L_11c22525:;
  /* 11c22525 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c22527 call 0x11c224f6 */
  push32(0x11c2252cu); f_11c224f6();
  /* 11c2252c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2252f pop ecx */
  ECX = (pop32());
  /* 11c22530 push edi */
  push32((uint32_t)(EDI));
  /* 11c22531 jne 0x11c2253d */
  if (!C.zf) goto L_11c2253d;
  /* 11c22533 call dword ptr [0x11c25044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25044))), 0x11c22539u);
  /* 11c22539 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c2253b jmp 0x11c22543 */
  goto L_11c22543;
L_11c2253d:;
  /* 11c2253d call 0x11c225f9 */
  push32(0x11c22542u); f_11c225f9();
  /* 11c22542 pop ecx */
  ECX = (pop32());
L_11c22543:;
  /* 11c22543 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c22545 call 0x11c22557 */
  push32(0x11c2254au); f_11c22557();
  /* 11c2254a pop ecx */
  ECX = (pop32());
  /* 11c2254b pop edi */
  EDI = (pop32());
L_11c2254c:;
  /* 11c2254c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c2254e call dword ptr [0x11c25040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25040))), 0x11c22554u);
  /* 11c22554 pop esi */
  ESI = (pop32());
  /* 11c22555 pop ebp */
  EBP = (pop32());
  /* 11c22556 ret  */
  ESPCHK(0x11c224f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002557 @ 0x11c22557 (21 bytes, 7 insns) */
void f_11c22557(void) {
  FTRACE(0x11c22557u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22557 push ebp */
  push32((uint32_t)(EBP));
  /* 11c22558 mov ebp, esp */
  EBP = (ESP);
  /* 11c2255a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c2255d push dword ptr [eax*4 + 0x11c262a8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11c262a8))));
  /* 11c22564 call dword ptr [0x11c2503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2503c))), 0x11c2256au);
  /* 11c2256a pop ebp */
  EBP = (pop32());
  /* 11c2256b ret  */
  ESPCHK(0x11c22557u, _esp0);
  ESP += 4; return;
}

/* FUN_1000256c @ 0x11c2256c (141 bytes, 56 insns) */
void f_11c2256c(void) {
  FTRACE(0x11c2256cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2256c push ebx */
  push32((uint32_t)(EBX));
  /* 11c2256d push esi */
  push32((uint32_t)(ESI));
  /* 11c2256e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c22572 push edi */
  push32((uint32_t)(EDI));
  /* 11c22573 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c22578 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2257b mov ebx, esi */
  EBX = (ESI);
  /* 11c2257d ja 0x11c2258c */
  if ((!C.cf&&!C.zf)) goto L_11c2258c;
  /* 11c2257f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c22581 jne 0x11c22586 */
  if (!C.zf) goto L_11c22586;
  /* 11c22583 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c22585 pop esi */
  ESI = (pop32());
L_11c22586:;
  /* 11c22586 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22589 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11c2258c:;
  /* 11c2258c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c2258e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22591 ja 0x11c225cd */
  if ((!C.cf&&!C.zf)) goto L_11c225cd;
  /* 11c22593 cmp ebx, dword ptr [0x11c264f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c264f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22599 ja 0x11c225b8 */
  if ((!C.cf&&!C.zf)) goto L_11c225b8;
  /* 11c2259b push 9 */
  push32((uint32_t)(0x9u));
  /* 11c2259d call 0x11c224f6 */
  push32(0x11c225a2u); f_11c224f6();
  /* 11c225a2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c225a3 call 0x11c232f9 */
  push32(0x11c225a8u); f_11c232f9();
  /* 11c225a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c225aa mov edi, eax */
  EDI = (EAX);
  /* 11c225ac call 0x11c22557 */
  push32(0x11c225b1u); f_11c22557();
  /* 11c225b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c225b4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c225b6 jne 0x11c225e3 */
  if (!C.zf) goto L_11c225e3;
L_11c225b8:;
  /* 11c225b8 push esi */
  push32((uint32_t)(ESI));
  /* 11c225b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c225bb push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c225c1 call dword ptr [0x11c25038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25038))), 0x11c225c7u);
  /* 11c225c7 mov edi, eax */
  EDI = (EAX);
  /* 11c225c9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c225cb jne 0x11c225ef */
  if (!C.zf) goto L_11c225ef;
L_11c225cd:;
  /* 11c225cd cmp dword ptr [0x11c267cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c267cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c225d4 je 0x11c225ef */
  if (C.zf) goto L_11c225ef;
  /* 11c225d6 push esi */
  push32((uint32_t)(ESI));
  /* 11c225d7 call 0x11c23998 */
  push32(0x11c225dcu); f_11c23998();
  /* 11c225dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c225de pop ecx */
  ECX = (pop32());
  /* 11c225df je 0x11c225f5 */
  if (C.zf) goto L_11c225f5;
  /* 11c225e1 jmp 0x11c2258c */
  goto L_11c2258c;
L_11c225e3:;
  /* 11c225e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c225e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c225e6 push edi */
  push32((uint32_t)(EDI));
  /* 11c225e7 call 0x11c23940 */
  push32(0x11c225ecu); f_11c23940();
  /* 11c225ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c225ef:;
  /* 11c225ef mov eax, edi */
  EAX = (EDI);
L_11c225f1:;
  /* 11c225f1 pop edi */
  EDI = (pop32());
  /* 11c225f2 pop esi */
  ESI = (pop32());
  /* 11c225f3 pop ebx */
  EBX = (pop32());
  /* 11c225f4 ret  */
  ESPCHK(0x11c2256cu, _esp0);
  ESP += 4; return;
L_11c225f5:;
  /* 11c225f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c225f7 jmp 0x11c225f1 */
  goto L_11c225f1;
}

/* FUN_100025f9 @ 0x11c225f9 (72 bytes, 29 insns) */
void f_11c225f9(void) {
  FTRACE(0x11c225f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c225f9 push esi */
  push32((uint32_t)(ESI));
  /* 11c225fa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c225fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c22600 je 0x11c2263f */
  if (C.zf) goto L_11c2263f;
  /* 11c22602 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c22604 call 0x11c224f6 */
  push32(0x11c22609u); f_11c224f6();
  /* 11c22609 push esi */
  push32((uint32_t)(ESI));
  /* 11c2260a call 0x11c22fa3 */
  push32(0x11c2260fu); f_11c22fa3();
  /* 11c2260f pop ecx */
  ECX = (pop32());
  /* 11c22610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c22612 pop ecx */
  ECX = (pop32());
  /* 11c22613 je 0x11c22628 */
  if (C.zf) goto L_11c22628;
  /* 11c22615 push esi */
  push32((uint32_t)(ESI));
  /* 11c22616 push eax */
  push32((uint32_t)(EAX));
  /* 11c22617 call 0x11c22fce */
  push32(0x11c2261cu); f_11c22fce();
  /* 11c2261c push 9 */
  push32((uint32_t)(0x9u));
  /* 11c2261e call 0x11c22557 */
  push32(0x11c22623u); f_11c22557();
  /* 11c22623 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22626 pop esi */
  ESI = (pop32());
  /* 11c22627 ret  */
  ESPCHK(0x11c225f9u, _esp0);
  ESP += 4; return;
L_11c22628:;
  /* 11c22628 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c2262a call 0x11c22557 */
  push32(0x11c2262fu); f_11c22557();
  /* 11c2262f pop ecx */
  ECX = (pop32());
  /* 11c22630 push esi */
  push32((uint32_t)(ESI));
  /* 11c22631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22633 push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c22639 call dword ptr [0x11c2504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2504c))), 0x11c2263fu);
L_11c2263f:;
  /* 11c2263f pop esi */
  ESI = (pop32());
  /* 11c22640 ret  */
  ESPCHK(0x11c225f9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11c22641 (18 bytes, 6 insns) */
void f_11c22641(void) {
  FTRACE(0x11c22641u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22641 push dword ptr [0x11c267cc] */
  push32((uint32_t)(r32((uint32_t)(0x11c267cc))));
  /* 11c22647 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c2264b call 0x11c22653 */
  push32(0x11c22650u); f_11c22653();
  /* 11c22650 pop ecx */
  ECX = (pop32());
  /* 11c22651 pop ecx */
  ECX = (pop32());
  /* 11c22652 ret  */
  ESPCHK(0x11c22641u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11c22653 (44 bytes, 16 insns) */
void f_11c22653(void) {
  FTRACE(0x11c22653u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22653 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22658 ja 0x11c2267c */
  if ((!C.cf&&!C.zf)) goto L_11c2267c;
L_11c2265a:;
  /* 11c2265a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c2265e call 0x11c2267f */
  push32(0x11c22663u); f_11c2267f();
  /* 11c22663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c22665 pop ecx */
  ECX = (pop32());
  /* 11c22666 jne 0x11c2267e */
  if (!C.zf) goto L_11c2267e;
  /* 11c22668 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2266c je 0x11c2267e */
  if (C.zf) goto L_11c2267e;
  /* 11c2266e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c22672 call 0x11c23998 */
  push32(0x11c22677u); f_11c23998();
  /* 11c22677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c22679 pop ecx */
  ECX = (pop32());
  /* 11c2267a jne 0x11c2265a */
  if (!C.zf) goto L_11c2265a;
L_11c2267c:;
  /* 11c2267c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c2267e:;
  /* 11c2267e ret  */
  ESPCHK(0x11c22653u, _esp0);
  ESP += 4; return;
}

/* FUN_1000267f @ 0x11c2267f (78 bytes, 30 insns) */
void f_11c2267f(void) {
  FTRACE(0x11c2267fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2267f push esi */
  push32((uint32_t)(ESI));
  /* 11c22680 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c22684 cmp esi, dword ptr [0x11c264f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c264f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2268a push edi */
  push32((uint32_t)(EDI));
  /* 11c2268b ja 0x11c226ae */
  if ((!C.cf&&!C.zf)) goto L_11c226ae;
  /* 11c2268d push 9 */
  push32((uint32_t)(0x9u));
  /* 11c2268f call 0x11c224f6 */
  push32(0x11c22694u); f_11c224f6();
  /* 11c22694 push esi */
  push32((uint32_t)(ESI));
  /* 11c22695 call 0x11c232f9 */
  push32(0x11c2269au); f_11c232f9();
  /* 11c2269a push 9 */
  push32((uint32_t)(0x9u));
  /* 11c2269c mov edi, eax */
  EDI = (EAX);
  /* 11c2269e call 0x11c22557 */
  push32(0x11c226a3u); f_11c22557();
  /* 11c226a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c226a6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c226a8 je 0x11c226ae */
  if (C.zf) goto L_11c226ae;
  /* 11c226aa mov eax, edi */
  EAX = (EDI);
  /* 11c226ac jmp 0x11c226ca */
  goto L_11c226ca;
L_11c226ae:;
  /* 11c226ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c226b0 jne 0x11c226b5 */
  if (!C.zf) goto L_11c226b5;
  /* 11c226b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c226b4 pop esi */
  ESI = (pop32());
L_11c226b5:;
  /* 11c226b5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c226b8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c226bb push esi */
  push32((uint32_t)(ESI));
  /* 11c226bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c226be push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c226c4 call dword ptr [0x11c25038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25038))), 0x11c226cau);
L_11c226ca:;
  /* 11c226ca pop edi */
  EDI = (pop32());
  /* 11c226cb pop esi */
  ESI = (pop32());
  /* 11c226cc ret  */
  ESPCHK(0x11c2267fu, _esp0);
  ESP += 4; return;
}

/* FUN_100026d0 @ 0x11c226d0 (7 bytes, 3 insns) */
void f_11c226d0(void) {
  FTRACE(0x11c226d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c226d0 push edi */
  push32((uint32_t)(EDI));
  /* 11c226d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c226d5 jmp 0x11c22741 */
  jmp_ind(0x11c22741u); return;
}

/* FUN_100026e0 @ 0x11c226e0 (224 bytes, 84 insns) */
void f_11c226e0(void) {
  FTRACE(0x11c226e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c226e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c226e4 push edi */
  push32((uint32_t)(EDI));
  /* 11c226e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c226eb je 0x11c226fc */
  if (C.zf) goto L_11c226fc;
L_11c226ed:;
  /* 11c226ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c226ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c226f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c226f2 je 0x11c2272f */
  if (C.zf) goto L_11c2272f;
  /* 11c226f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c226fa jne 0x11c226ed */
  if (!C.zf) goto L_11c226ed;
L_11c226fc:;
  /* 11c226fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c226fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c22703 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22705 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c22708 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c2270a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2270d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c22712 je 0x11c226fc */
  if (C.zf) goto L_11c226fc;
  /* 11c22714 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c22717 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c22719 je 0x11c2273e */
  if (C.zf) goto L_11c2273e;
  /* 11c2271b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c2271d je 0x11c22739 */
  if (C.zf) goto L_11c22739;
  /* 11c2271f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c22724 je 0x11c22734 */
  if (C.zf) goto L_11c22734;
  /* 11c22726 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c2272b je 0x11c2272f */
  if (C.zf) goto L_11c2272f;
  /* 11c2272d jmp 0x11c226fc */
  goto L_11c226fc;
L_11c2272f:;
  /* 11c2272f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11c22732 jmp 0x11c22741 */
  goto L_11c22741;
L_11c22734:;
  /* 11c22734 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11c22737 jmp 0x11c22741 */
  goto L_11c22741;
L_11c22739:;
  /* 11c22739 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11c2273c jmp 0x11c22741 */
  goto L_11c22741;
L_11c2273e:;
  /* 11c2273e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11c22741:;
  /* 11c22741 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c22745 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c2274b je 0x11c22766 */
  if (C.zf) goto L_11c22766;
L_11c2274d:;
  /* 11c2274d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c2274f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c22750 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c22752 je 0x11c227b8 */
  if (C.zf) goto L_11c227b8;
  /* 11c22754 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c22756 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c22757 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c2275d jne 0x11c2274d */
  if (!C.zf) goto L_11c2274d;
  /* 11c2275f jmp 0x11c22766 */
  goto L_11c22766;
L_11c22761:;
  /* 11c22761 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c22763 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c22766:;
  /* 11c22766 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c2276b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c2276d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2276f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c22772 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22774 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11c22776 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22779 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c2277e je 0x11c22761 */
  if (C.zf) goto L_11c22761;
  /* 11c22780 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c22782 je 0x11c227b8 */
  if (C.zf) goto L_11c227b8;
  /* 11c22784 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c22786 je 0x11c227af */
  if (C.zf) goto L_11c227af;
  /* 11c22788 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c2278e je 0x11c227a2 */
  if (C.zf) goto L_11c227a2;
  /* 11c22790 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c22796 je 0x11c2279a */
  if (C.zf) goto L_11c2279a;
  /* 11c22798 jmp 0x11c22761 */
  goto L_11c22761;
L_11c2279a:;
  /* 11c2279a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c2279c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c227a0 pop edi */
  EDI = (pop32());
  /* 11c227a1 ret  */
  ESPCHK(0x11c226e0u, _esp0);
  ESP += 4; return;
L_11c227a2:;
  /* 11c227a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c227a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c227a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11c227ad pop edi */
  EDI = (pop32());
  /* 11c227ae ret  */
  ESPCHK(0x11c226e0u, _esp0);
  ESP += 4; return;
L_11c227af:;
  /* 11c227af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c227b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c227b6 pop edi */
  EDI = (pop32());
  /* 11c227b7 ret  */
  ESPCHK(0x11c226e0u, _esp0);
  ESP += 4; return;
L_11c227b8:;
  /* 11c227b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c227ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c227be pop edi */
  EDI = (pop32());
  /* 11c227bf ret  */
  ESPCHK(0x11c226e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11c227c0 (123 bytes, 44 insns) */
void f_11c227c0(void) {
  FTRACE(0x11c227c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c227c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c227c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c227ca je 0x11c227e0 */
  if (C.zf) goto L_11c227e0;
L_11c227cc:;
  /* 11c227cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c227ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c227cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c227d1 je 0x11c22813 */
  if (C.zf) goto L_11c22813;
  /* 11c227d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c227d9 jne 0x11c227cc */
  if (!C.zf) goto L_11c227cc;
  /* 11c227db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c227e0:;
  /* 11c227e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c227e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c227e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c227e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c227ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c227ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c227f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c227f6 je 0x11c227e0 */
  if (C.zf) goto L_11c227e0;
  /* 11c227f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c227fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c227fd je 0x11c22831 */
  if (C.zf) goto L_11c22831;
  /* 11c227ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c22801 je 0x11c22827 */
  if (C.zf) goto L_11c22827;
  /* 11c22803 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c22808 je 0x11c2281d */
  if (C.zf) goto L_11c2281d;
  /* 11c2280a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c2280f je 0x11c22813 */
  if (C.zf) goto L_11c22813;
  /* 11c22811 jmp 0x11c227e0 */
  goto L_11c227e0;
L_11c22813:;
  /* 11c22813 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11c22816 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c2281a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c2281c ret  */
  ESPCHK(0x11c227c0u, _esp0);
  ESP += 4; return;
L_11c2281d:;
  /* 11c2281d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11c22820 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c22824 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22826 ret  */
  ESPCHK(0x11c227c0u, _esp0);
  ESP += 4; return;
L_11c22827:;
  /* 11c22827 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11c2282a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c2282e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22830 ret  */
  ESPCHK(0x11c227c0u, _esp0);
  ESP += 4; return;
L_11c22831:;
  /* 11c22831 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11c22834 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c22838 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c2283a ret  */
  ESPCHK(0x11c227c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000283b @ 0x11c2283b (429 bytes, 143 insns) */
void f_11c2283b(void) {
  FTRACE(0x11c2283bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2283b push ebp */
  push32((uint32_t)(EBP));
  /* 11c2283c mov ebp, esp */
  EBP = (ESP);
  /* 11c2283e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22841 push ebx */
  push32((uint32_t)(EBX));
  /* 11c22842 push esi */
  push32((uint32_t)(ESI));
  /* 11c22843 push edi */
  push32((uint32_t)(EDI));
  /* 11c22844 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c22846 call 0x11c224f6 */
  push32(0x11c2284bu); f_11c224f6();
  /* 11c2284b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c2284e call 0x11c229e8 */
  push32(0x11c22853u); f_11c229e8();
  /* 11c22853 mov ebx, eax */
  EBX = (EAX);
  /* 11c22855 pop ecx */
  ECX = (pop32());
  /* 11c22856 cmp ebx, dword ptr [0x11c26810] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c26810))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2285c pop ecx */
  ECX = (pop32());
  /* 11c2285d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c22860 jne 0x11c22869 */
  if (!C.zf) goto L_11c22869;
L_11c22862:;
  /* 11c22862 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c22864 jmp 0x11c229d9 */
  goto L_11c229d9;
L_11c22869:;
  /* 11c22869 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c2286b je 0x11c229c7 */
  if (C.zf) goto L_11c229c7;
  /* 11c22871 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22873 mov eax, 0x11c263f8 */
  EAX = (0x11c263f8u);
L_11c22878:;
  /* 11c22878 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2287a je 0x11c228f0 */
  if (C.zf) goto L_11c228f0;
  /* 11c2287c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2287f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c22880 cmp eax, 0x11c264e8 */
  { uint32_t _a=(EAX),_b=(0x11c264e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22885 jl 0x11c22878 */
  if ((C.sf!=C.of)) goto L_11c22878;
  /* 11c22887 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c2288a push eax */
  push32((uint32_t)(EAX));
  /* 11c2288b push ebx */
  push32((uint32_t)(EBX));
  /* 11c2288c call dword ptr [0x11c25034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25034))), 0x11c22892u);
  /* 11c22892 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c22894 pop esi */
  ESI = (pop32());
  /* 11c22895 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22897 jne 0x11c229be */
  if (!C.zf) goto L_11c229be;
  /* 11c2289d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c2289f and dword ptr [0x11c26a44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c26a44)))&(0x0u); w32((uint32_t)(0x11c26a44), (_r)); fl_logic(_r,32); }
  /* 11c228a6 pop ecx */
  ECX = (pop32());
  /* 11c228a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c228a9 mov edi, 0x11c26940 */
  EDI = (0x11c26940u);
  /* 11c228ae cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c228b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c228b3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c228b4 mov dword ptr [0x11c26810], ebx */
  w32((uint32_t)(0x11c26810), (EBX));
  /* 11c228ba jbe 0x11c229ab */
  if ((C.cf||C.zf)) goto L_11c229ab;
  /* 11c228c0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c228c4 je 0x11c22986 */
  if (C.zf) goto L_11c22986;
  /* 11c228ca lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11c228cd:;
  /* 11c228cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c228cf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c228d1 je 0x11c22986 */
  if (C.zf) goto L_11c22986;
  /* 11c228d7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11c228db movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11c228de:;
  /* 11c228de cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c228e0 ja 0x11c2297a */
  if ((!C.cf&&!C.zf)) goto L_11c2297a;
  /* 11c228e6 or byte ptr [eax + 0x11c26941], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(0x4u); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c228ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c228ee jmp 0x11c228de */
  goto L_11c228de;
L_11c228f0:;
  /* 11c228f0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c228f4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c228f6 pop ecx */
  ECX = (pop32());
  /* 11c228f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c228f9 mov edi, 0x11c26940 */
  EDI = (0x11c26940u);
  /* 11c228fe lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11c22901 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c22903 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c22906 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c22907 lea ebx, [esi + 0x11c26408] */
  EBX = ((uint32_t)(ESI + 0x11c26408));
L_11c2290d:;
  /* 11c2290d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22910 mov ecx, ebx */
  ECX = (EBX);
  /* 11c22912 je 0x11c22940 */
  if (C.zf) goto L_11c22940;
L_11c22914:;
  /* 11c22914 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11c22917 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c22919 je 0x11c22940 */
  if (C.zf) goto L_11c22940;
  /* 11c2291b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c2291e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11c22921 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22923 ja 0x11c22939 */
  if ((!C.cf&&!C.zf)) goto L_11c22939;
  /* 11c22925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c22928 mov dl, byte ptr [edx + 0x11c263f0] */
  DL = (r8((uint32_t)(EDX + 0x11c263f0)));
L_11c2292e:;
  /* 11c2292e or byte ptr [eax + 0x11c26941], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(DL); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c22934 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22935 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22937 jbe 0x11c2292e */
  if ((C.cf||C.zf)) goto L_11c2292e;
L_11c22939:;
  /* 11c22939 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c2293a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c2293b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c2293e jne 0x11c22914 */
  if (!C.zf) goto L_11c22914;
L_11c22940:;
  /* 11c22940 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c22943 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22946 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2294a jb 0x11c2290d */
  if (C.cf) goto L_11c2290d;
  /* 11c2294c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c2294f mov dword ptr [0x11c2682c], 1 */
  w32((uint32_t)(0x11c2682c), (0x1u));
  /* 11c22959 push eax */
  push32((uint32_t)(EAX));
  /* 11c2295a mov dword ptr [0x11c26810], eax */
  w32((uint32_t)(0x11c26810), (EAX));
  /* 11c2295f call 0x11c22a32 */
  push32(0x11c22964u); f_11c22a32();
  /* 11c22964 lea esi, [esi + 0x11c263fc] */
  ESI = ((uint32_t)(ESI + 0x11c263fc));
  /* 11c2296a mov edi, 0x11c26820 */
  EDI = (0x11c26820u);
  /* 11c2296f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c22970 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c22971 pop ecx */
  ECX = (pop32());
  /* 11c22972 mov dword ptr [0x11c26a44], eax */
  w32((uint32_t)(0x11c26a44), (EAX));
  /* 11c22977 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c22978 jmp 0x11c229cc */
  goto L_11c229cc;
L_11c2297a:;
  /* 11c2297a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c2297b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c2297c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c22980 jne 0x11c228cd */
  if (!C.zf) goto L_11c228cd;
L_11c22986:;
  /* 11c22986 mov eax, esi */
  EAX = (ESI);
L_11c22988:;
  /* 11c22988 or byte ptr [eax + 0x11c26941], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(0x8u); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c2298f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22990 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22995 jb 0x11c22988 */
  if (C.cf) goto L_11c22988;
  /* 11c22997 push ebx */
  push32((uint32_t)(EBX));
  /* 11c22998 call 0x11c22a32 */
  push32(0x11c2299du); f_11c22a32();
  /* 11c2299d pop ecx */
  ECX = (pop32());
  /* 11c2299e mov dword ptr [0x11c26a44], eax */
  w32((uint32_t)(0x11c26a44), (EAX));
  /* 11c229a3 mov dword ptr [0x11c2682c], esi */
  w32((uint32_t)(0x11c2682c), (ESI));
  /* 11c229a9 jmp 0x11c229b2 */
  goto L_11c229b2;
L_11c229ab:;
  /* 11c229ab and dword ptr [0x11c2682c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c2682c)))&(0x0u); w32((uint32_t)(0x11c2682c), (_r)); fl_logic(_r,32); }
L_11c229b2:;
  /* 11c229b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c229b4 mov edi, 0x11c26820 */
  EDI = (0x11c26820u);
  /* 11c229b9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c229ba stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c229bb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c229bc jmp 0x11c229cc */
  goto L_11c229cc;
L_11c229be:;
  /* 11c229be cmp dword ptr [0x11c267b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c267b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c229c5 je 0x11c229d6 */
  if (C.zf) goto L_11c229d6;
L_11c229c7:;
  /* 11c229c7 call 0x11c22a65 */
  push32(0x11c229ccu); f_11c22a65();
L_11c229cc:;
  /* 11c229cc call 0x11c22a8e */
  push32(0x11c229d1u); f_11c22a8e();
  /* 11c229d1 jmp 0x11c22862 */
  goto L_11c22862;
L_11c229d6:;
  /* 11c229d6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11c229d9:;
  /* 11c229d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c229db call 0x11c22557 */
  push32(0x11c229e0u); f_11c22557();
  /* 11c229e0 pop ecx */
  ECX = (pop32());
  /* 11c229e1 mov eax, esi */
  EAX = (ESI);
  /* 11c229e3 pop edi */
  EDI = (pop32());
  /* 11c229e4 pop esi */
  ESI = (pop32());
  /* 11c229e5 pop ebx */
  EBX = (pop32());
  /* 11c229e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c229e7 ret  */
  ESPCHK(0x11c2283bu, _esp0);
  ESP += 4; return;
}

/* FUN_100029e8 @ 0x11c229e8 (74 bytes, 15 insns) */
void f_11c229e8(void) {
  FTRACE(0x11c229e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c229e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c229ec and dword ptr [0x11c267b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c267b8)))&(0x0u); w32((uint32_t)(0x11c267b8), (_r)); fl_logic(_r,32); }
  /* 11c229f3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c229f6 jne 0x11c22a08 */
  if (!C.zf) goto L_11c22a08;
  /* 11c229f8 mov dword ptr [0x11c267b8], 1 */
  w32((uint32_t)(0x11c267b8), (0x1u));
  /* 11c22a02 jmp dword ptr [0x11c2502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c2502c)))); return;
L_11c22a08:;
  /* 11c22a08 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22a0b jne 0x11c22a1d */
  if (!C.zf) goto L_11c22a1d;
  /* 11c22a0d mov dword ptr [0x11c267b8], 1 */
  w32((uint32_t)(0x11c267b8), (0x1u));
  /* 11c22a17 jmp dword ptr [0x11c25030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c25030)))); return;
L_11c22a1d:;
  /* 11c22a1d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22a20 jne 0x11c22a31 */
  if (!C.zf) goto L_11c22a31;
  /* 11c22a22 mov eax, dword ptr [0x11c267e8] */
  EAX = (r32((uint32_t)(0x11c267e8)));
  /* 11c22a27 mov dword ptr [0x11c267b8], 1 */
  w32((uint32_t)(0x11c267b8), (0x1u));
L_11c22a31:;
  /* 11c22a31 ret  */
  ESPCHK(0x11c229e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a32 @ 0x11c22a32 (51 bytes, 19 insns) */
void f_11c22a32(void) {
  FTRACE(0x11c22a32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22a32 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c22a36 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22a3b je 0x11c22a5f */
  if (C.zf) goto L_11c22a5f;
  /* 11c22a3d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22a40 je 0x11c22a59 */
  if (C.zf) goto L_11c22a59;
  /* 11c22a42 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22a45 je 0x11c22a53 */
  if (C.zf) goto L_11c22a53;
  /* 11c22a47 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c22a48 je 0x11c22a4d */
  if (C.zf) goto L_11c22a4d;
  /* 11c22a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22a4c ret  */
  ESPCHK(0x11c22a32u, _esp0);
  ESP += 4; return;
L_11c22a4d:;
  /* 11c22a4d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11c22a52 ret  */
  ESPCHK(0x11c22a32u, _esp0);
  ESP += 4; return;
L_11c22a53:;
  /* 11c22a53 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11c22a58 ret  */
  ESPCHK(0x11c22a32u, _esp0);
  ESP += 4; return;
L_11c22a59:;
  /* 11c22a59 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11c22a5e ret  */
  ESPCHK(0x11c22a32u, _esp0);
  ESP += 4; return;
L_11c22a5f:;
  /* 11c22a5f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11c22a64 ret  */
  ESPCHK(0x11c22a32u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a65 @ 0x11c22a65 (41 bytes, 17 insns) */
void f_11c22a65(void) {
  FTRACE(0x11c22a65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22a65 push edi */
  push32((uint32_t)(EDI));
  /* 11c22a66 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c22a68 pop ecx */
  ECX = (pop32());
  /* 11c22a69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22a6b mov edi, 0x11c26940 */
  EDI = (0x11c26940u);
  /* 11c22a70 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c22a72 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c22a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22a75 mov edi, 0x11c26820 */
  EDI = (0x11c26820u);
  /* 11c22a7a mov dword ptr [0x11c26810], eax */
  w32((uint32_t)(0x11c26810), (EAX));
  /* 11c22a7f mov dword ptr [0x11c2682c], eax */
  w32((uint32_t)(0x11c2682c), (EAX));
  /* 11c22a84 mov dword ptr [0x11c26a44], eax */
  w32((uint32_t)(0x11c26a44), (EAX));
  /* 11c22a89 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c22a8a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c22a8b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c22a8c pop edi */
  EDI = (pop32());
  /* 11c22a8d ret  */
  ESPCHK(0x11c22a65u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a8e @ 0x11c22a8e (389 bytes, 124 insns) */
void f_11c22a8e(void) {
  FTRACE(0x11c22a8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22a8e push ebp */
  push32((uint32_t)(EBP));
  /* 11c22a8f mov ebp, esp */
  EBP = (ESP);
  /* 11c22a91 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22a97 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11c22a9a push esi */
  push32((uint32_t)(ESI));
  /* 11c22a9b push eax */
  push32((uint32_t)(EAX));
  /* 11c22a9c push dword ptr [0x11c26810] */
  push32((uint32_t)(r32((uint32_t)(0x11c26810))));
  /* 11c22aa2 call dword ptr [0x11c25034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25034))), 0x11c22aa8u);
  /* 11c22aa8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22aab jne 0x11c22bc7 */
  if (!C.zf) goto L_11c22bc7;
  /* 11c22ab1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22ab3 mov esi, 0x100 */
  ESI = (0x100u);
L_11c22ab8:;
  /* 11c22ab8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11c22abf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22ac0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22ac2 jb 0x11c22ab8 */
  if (C.cf) goto L_11c22ab8;
  /* 11c22ac4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11c22ac7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11c22ace test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c22ad0 je 0x11c22b09 */
  if (C.zf) goto L_11c22b09;
  /* 11c22ad2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c22ad3 push edi */
  push32((uint32_t)(EDI));
  /* 11c22ad4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11c22ad7:;
  /* 11c22ad7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11c22ada movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c22add cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22adf ja 0x11c22afe */
  if ((!C.cf&&!C.zf)) goto L_11c22afe;
  /* 11c22ae1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22ae3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11c22aea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c22aeb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11c22af0 mov ebx, ecx */
  EBX = (ECX);
  /* 11c22af2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22af5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c22af7 mov ecx, ebx */
  ECX = (EBX);
  /* 11c22af9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c22afc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11c22afe:;
  /* 11c22afe inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c22aff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c22b00 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11c22b03 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c22b05 jne 0x11c22ad7 */
  if (!C.zf) goto L_11c22ad7;
  /* 11c22b07 pop edi */
  EDI = (pop32());
  /* 11c22b08 pop ebx */
  EBX = (pop32());
L_11c22b09:;
  /* 11c22b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22b0b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11c22b11 push dword ptr [0x11c26a44] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a44))));
  /* 11c22b17 push dword ptr [0x11c26810] */
  push32((uint32_t)(r32((uint32_t)(0x11c26810))));
  /* 11c22b1d push eax */
  push32((uint32_t)(EAX));
  /* 11c22b1e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c22b24 push esi */
  push32((uint32_t)(ESI));
  /* 11c22b25 push eax */
  push32((uint32_t)(EAX));
  /* 11c22b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c22b28 call 0x11c23c02 */
  push32(0x11c22b2du); f_11c23c02();
  /* 11c22b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22b2f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11c22b35 push dword ptr [0x11c26810] */
  push32((uint32_t)(r32((uint32_t)(0x11c26810))));
  /* 11c22b3b push esi */
  push32((uint32_t)(ESI));
  /* 11c22b3c push eax */
  push32((uint32_t)(EAX));
  /* 11c22b3d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c22b43 push esi */
  push32((uint32_t)(ESI));
  /* 11c22b44 push eax */
  push32((uint32_t)(EAX));
  /* 11c22b45 push esi */
  push32((uint32_t)(ESI));
  /* 11c22b46 push dword ptr [0x11c26a44] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a44))));
  /* 11c22b4c call 0x11c239b3 */
  push32(0x11c22b51u); f_11c239b3();
  /* 11c22b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22b53 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11c22b59 push dword ptr [0x11c26810] */
  push32((uint32_t)(r32((uint32_t)(0x11c26810))));
  /* 11c22b5f push esi */
  push32((uint32_t)(ESI));
  /* 11c22b60 push eax */
  push32((uint32_t)(EAX));
  /* 11c22b61 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c22b67 push esi */
  push32((uint32_t)(ESI));
  /* 11c22b68 push eax */
  push32((uint32_t)(EAX));
  /* 11c22b69 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c22b6e push dword ptr [0x11c26a44] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a44))));
  /* 11c22b74 call 0x11c239b3 */
  push32(0x11c22b79u); f_11c239b3();
  /* 11c22b79 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22b7e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11c22b84:;
  /* 11c22b84 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11c22b87 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c22b8a je 0x11c22ba2 */
  if (C.zf) goto L_11c22ba2;
  /* 11c22b8c or byte ptr [eax + 0x11c26941], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(0x10u); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c22b93 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11c22b9a:;
  /* 11c22b9a mov byte ptr [eax + 0x11c26840], dl */
  w8((uint32_t)(EAX + 0x11c26840), (DL));
  /* 11c22ba0 jmp 0x11c22bbe */
  goto L_11c22bbe;
L_11c22ba2:;
  /* 11c22ba2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11c22ba5 je 0x11c22bb7 */
  if (C.zf) goto L_11c22bb7;
  /* 11c22ba7 or byte ptr [eax + 0x11c26941], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(0x20u); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c22bae mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11c22bb5 jmp 0x11c22b9a */
  goto L_11c22b9a;
L_11c22bb7:;
  /* 11c22bb7 and byte ptr [eax + 0x11c26840], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26840)))&(0x0u); w8((uint32_t)(EAX + 0x11c26840), (_r)); fl_logic(_r,8); }
L_11c22bbe:;
  /* 11c22bbe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22bbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c22bc0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c22bc1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22bc3 jb 0x11c22b84 */
  if (C.cf) goto L_11c22b84;
  /* 11c22bc5 jmp 0x11c22c10 */
  goto L_11c22c10;
L_11c22bc7:;
  /* 11c22bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c22bc9 mov esi, 0x100 */
  ESI = (0x100u);
L_11c22bce:;
  /* 11c22bce cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22bd1 jb 0x11c22bec */
  if (C.cf) goto L_11c22bec;
  /* 11c22bd3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22bd6 ja 0x11c22bec */
  if ((!C.cf&&!C.zf)) goto L_11c22bec;
  /* 11c22bd8 or byte ptr [eax + 0x11c26941], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(0x10u); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c22bdf mov cl, al */
  CL = (AL);
  /* 11c22be1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11c22be4:;
  /* 11c22be4 mov byte ptr [eax + 0x11c26840], cl */
  w8((uint32_t)(EAX + 0x11c26840), (CL));
  /* 11c22bea jmp 0x11c22c0b */
  goto L_11c22c0b;
L_11c22bec:;
  /* 11c22bec cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22bef jb 0x11c22c04 */
  if (C.cf) goto L_11c22c04;
  /* 11c22bf1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22bf4 ja 0x11c22c04 */
  if ((!C.cf&&!C.zf)) goto L_11c22c04;
  /* 11c22bf6 or byte ptr [eax + 0x11c26941], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26941)))|(0x20u); w8((uint32_t)(EAX + 0x11c26941), (_r)); fl_logic(_r,8); }
  /* 11c22bfd mov cl, al */
  CL = (AL);
  /* 11c22bff sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c22c02 jmp 0x11c22be4 */
  goto L_11c22be4;
L_11c22c04:;
  /* 11c22c04 and byte ptr [eax + 0x11c26840], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c26840)))&(0x0u); w8((uint32_t)(EAX + 0x11c26840), (_r)); fl_logic(_r,8); }
L_11c22c0b:;
  /* 11c22c0b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c22c0c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22c0e jb 0x11c22bce */
  if (C.cf) goto L_11c22bce;
L_11c22c10:;
  /* 11c22c10 pop esi */
  ESI = (pop32());
  /* 11c22c11 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22c12 ret  */
  ESPCHK(0x11c22a8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c13 @ 0x11c22c13 (28 bytes, 7 insns) */
void f_11c22c13(void) {
  FTRACE(0x11c22c13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22c13 cmp dword ptr [0x11c26b68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c26b68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22c1a jne 0x11c22c2e */
  if (!C.zf) goto L_11c22c2e;
  /* 11c22c1c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11c22c1e call 0x11c2283b */
  push32(0x11c22c23u); f_11c2283b();
  /* 11c22c23 pop ecx */
  ECX = (pop32());
  /* 11c22c24 mov dword ptr [0x11c26b68], 1 */
  w32((uint32_t)(0x11c26b68), (0x1u));
L_11c22c2e:;
  /* 11c22c2e ret  */
  ESPCHK(0x11c22c13u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c30 @ 0x11c22c30 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11c22c30(void) {
  FTRACE(0x11c22c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11c22c31 mov ebp, esp */
  EBP = (ESP);
  /* 11c22c33 push edi */
  push32((uint32_t)(EDI));
  /* 11c22c34 push esi */
  push32((uint32_t)(ESI));
  /* 11c22c35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c22c38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c22c3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22c3e mov eax, ecx */
  EAX = (ECX);
  /* 11c22c40 mov edx, ecx */
  EDX = (ECX);
  /* 11c22c42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22c44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22c46 jbe 0x11c22c50 */
  if ((C.cf||C.zf)) goto L_11c22c50;
  /* 11c22c48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22c4a jb 0x11c22dc8 */
  if (C.cf) goto L_11c22dc8;
L_11c22c50:;
  /* 11c22c50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c22c56 jne 0x11c22c6c */
  if (!C.zf) goto L_11c22c6c;
  /* 11c22c58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22c5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c22c5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22c61 jb 0x11c22c8c */
  if (C.cf) goto L_11c22c8c;
  /* 11c22c63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22c65 jmp dword ptr [edx*4 + 0x11c22d78] */
  switch (EDX) {
    case 0: goto L_11c22d88;
    case 1: goto L_11c22d90;
    case 2: goto L_11c22d9c;
    case 3: goto L_11c22db0;
    default: x86_unimpl("switch@0x11c22c65 out of table"); return;
  }
L_11c22c6c:;
  /* 11c22c6c mov eax, edi */
  EAX = (EDI);
  /* 11c22c6e mov edx, 3 */
  EDX = (0x3u);
  /* 11c22c73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22c76 jb 0x11c22c84 */
  if (C.cf) goto L_11c22c84;
  /* 11c22c78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c22c7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22c7d jmp dword ptr [eax*4 + 0x11c22c90] */
  switch (EAX) {
    case 1: goto L_11c22ca0;
    case 2: goto L_11c22ccc;
    case 3: goto L_11c22cf0;
    default: x86_unimpl("switch@0x11c22c7d out of table"); return;
  }
L_11c22c84:;
  /* 11c22c84 jmp dword ptr [ecx*4 + 0x11c22d88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c22d88)))); return;
  /* 11c22c8b nop  */
  /* nop */
L_11c22c8c:;
  /* 11c22c8c jmp dword ptr [ecx*4 + 0x11c22d0c] */
  switch (ECX) {
    case 0: goto L_11c22d6f;
    case 1: goto L_11c22d5c;
    case 2: goto L_11c22d54;
    case 3: goto L_11c22d4c;
    case 4: goto L_11c22d44;
    case 5: goto L_11c22d3c;
    case 6: goto L_11c22d34;
    case 7: goto L_11c22d2c;
    default: x86_unimpl("switch@0x11c22c8c out of table"); return;
  }
  /* 11c22c93 nop  */
  /* nop */
L_11c22ca0:;
  /* 11c22ca0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22ca2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c22ca4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c22ca6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c22ca9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c22cac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c22caf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22cb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c22cb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22cb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22cbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22cbe jb 0x11c22c8c */
  if (C.cf) goto L_11c22c8c;
  /* 11c22cc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22cc2 jmp dword ptr [edx*4 + 0x11c22d78] */
  switch (EDX) {
    case 0: goto L_11c22d88;
    case 1: goto L_11c22d90;
    case 2: goto L_11c22d9c;
    case 3: goto L_11c22db0;
    default: x86_unimpl("switch@0x11c22cc2 out of table"); return;
  }
  /* 11c22cc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c22ccc:;
  /* 11c22ccc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22cce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c22cd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c22cd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c22cd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22cd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c22cdb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22cde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22ce1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22ce4 jb 0x11c22c8c */
  if (C.cf) goto L_11c22c8c;
  /* 11c22ce6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22ce8 jmp dword ptr [edx*4 + 0x11c22d78] */
  switch (EDX) {
    case 0: goto L_11c22d88;
    case 1: goto L_11c22d90;
    case 2: goto L_11c22d9c;
    case 3: goto L_11c22db0;
    default: x86_unimpl("switch@0x11c22ce8 out of table"); return;
  }
  /* 11c22cef nop  */
  /* nop */
L_11c22cf0:;
  /* 11c22cf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22cf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c22cf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c22cf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c22cf7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22cfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c22cfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22cfe jb 0x11c22c8c */
  if (C.cf) goto L_11c22c8c;
  /* 11c22d00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22d02 jmp dword ptr [edx*4 + 0x11c22d78] */
  switch (EDX) {
    case 0: goto L_11c22d88;
    case 1: goto L_11c22d90;
    case 2: goto L_11c22d9c;
    case 3: goto L_11c22db0;
    default: x86_unimpl("switch@0x11c22d02 out of table"); return;
  }
  /* 11c22d09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c22d2c:;
  /* 11c22d2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c22d30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c22d34:;
  /* 11c22d34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c22d38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c22d3c:;
  /* 11c22d3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c22d40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c22d44:;
  /* 11c22d44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c22d48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c22d4c:;
  /* 11c22d4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c22d50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c22d54:;
  /* 11c22d54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c22d58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c22d5c:;
  /* 11c22d5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c22d60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c22d64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c22d6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22d6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c22d6f:;
  /* 11c22d6f jmp dword ptr [edx*4 + 0x11c22d78] */
  switch (EDX) {
    case 0: goto L_11c22d88;
    case 1: goto L_11c22d90;
    case 2: goto L_11c22d9c;
    case 3: goto L_11c22db0;
    default: x86_unimpl("switch@0x11c22d6f out of table"); return;
  }
  /* 11c22d76 mov edi, edi */
  EDI = (EDI);
L_11c22d88:;
  /* 11c22d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22d8b pop esi */
  ESI = (pop32());
  /* 11c22d8c pop edi */
  EDI = (pop32());
  /* 11c22d8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22d8e ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22d8f nop  */
  /* nop */
L_11c22d90:;
  /* 11c22d90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c22d92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c22d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22d97 pop esi */
  ESI = (pop32());
  /* 11c22d98 pop edi */
  EDI = (pop32());
  /* 11c22d99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22d9a ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22d9b nop  */
  /* nop */
L_11c22d9c:;
  /* 11c22d9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c22d9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c22da0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c22da3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c22da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22da9 pop esi */
  ESI = (pop32());
  /* 11c22daa pop edi */
  EDI = (pop32());
  /* 11c22dab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22dac ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22dad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c22db0:;
  /* 11c22db0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c22db2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c22db4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c22db7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c22dba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c22dbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c22dc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22dc3 pop esi */
  ESI = (pop32());
  /* 11c22dc4 pop edi */
  EDI = (pop32());
  /* 11c22dc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22dc6 ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22dc7 nop  */
  /* nop */
L_11c22dc8:;
  /* 11c22dc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c22dcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c22dd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c22dd6 jne 0x11c22dfc */
  if (!C.zf) goto L_11c22dfc;
  /* 11c22dd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22ddb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c22dde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22de1 jb 0x11c22df0 */
  if (C.cf) goto L_11c22df0;
  /* 11c22de3 std  */
  C.df=1;
  /* 11c22de4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22de6 cld  */
  C.df=0;
  /* 11c22de7 jmp dword ptr [edx*4 + 0x11c22f10] */
  switch (EDX) {
    case 0: goto L_11c22f20;
    case 1: goto L_11c22f28;
    case 2: goto L_11c22f38;
    case 3: goto L_11c22f4c;
    default: x86_unimpl("switch@0x11c22de7 out of table"); return;
  }
  /* 11c22dee mov edi, edi */
  EDI = (EDI);
L_11c22df0:;
  /* 11c22df0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c22df2 jmp dword ptr [ecx*4 + 0x11c22ec0] */
  switch (ECX) {
    case 0: goto L_11c22f07;
    default: x86_unimpl("switch@0x11c22df2 out of table"); return;
  }
  /* 11c22df9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c22dfc:;
  /* 11c22dfc mov eax, edi */
  EAX = (EDI);
  /* 11c22dfe mov edx, 3 */
  EDX = (0x3u);
  /* 11c22e03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22e06 jb 0x11c22e14 */
  if (C.cf) goto L_11c22e14;
  /* 11c22e08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c22e0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22e0d jmp dword ptr [eax*4 + 0x11c22e18] */
  switch (EAX) {
    case 1: goto L_11c22e28;
    case 2: goto L_11c22e48;
    case 3: goto L_11c22e70;
    default: x86_unimpl("switch@0x11c22e0d out of table"); return;
  }
L_11c22e14:;
  /* 11c22e14 jmp dword ptr [ecx*4 + 0x11c22f10] */
  switch (ECX) {
    case 0: goto L_11c22f20;
    case 1: goto L_11c22f28;
    case 2: goto L_11c22f38;
    case 3: goto L_11c22f4c;
    default: x86_unimpl("switch@0x11c22e14 out of table"); return;
  }
  /* 11c22e1b nop  */
  /* nop */
L_11c22e28:;
  /* 11c22e28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c22e2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22e2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c22e30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c22e31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22e34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c22e35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22e38 jb 0x11c22df0 */
  if (C.cf) goto L_11c22df0;
  /* 11c22e3a std  */
  C.df=1;
  /* 11c22e3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22e3d cld  */
  C.df=0;
  /* 11c22e3e jmp dword ptr [edx*4 + 0x11c22f10] */
  switch (EDX) {
    case 0: goto L_11c22f20;
    case 1: goto L_11c22f28;
    case 2: goto L_11c22f38;
    case 3: goto L_11c22f4c;
    default: x86_unimpl("switch@0x11c22e3e out of table"); return;
  }
  /* 11c22e45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c22e48:;
  /* 11c22e48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c22e4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22e4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c22e50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c22e53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22e56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c22e59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22e5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22e5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22e62 jb 0x11c22df0 */
  if (C.cf) goto L_11c22df0;
  /* 11c22e64 std  */
  C.df=1;
  /* 11c22e65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22e67 cld  */
  C.df=0;
  /* 11c22e68 jmp dword ptr [edx*4 + 0x11c22f10] */
  switch (EDX) {
    case 0: goto L_11c22f20;
    case 1: goto L_11c22f28;
    case 2: goto L_11c22f38;
    case 3: goto L_11c22f4c;
    default: x86_unimpl("switch@0x11c22e68 out of table"); return;
  }
  /* 11c22e6f nop  */
  /* nop */
L_11c22e70:;
  /* 11c22e70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c22e73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c22e75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c22e78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c22e7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c22e7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c22e81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c22e84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c22e87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22e8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22e8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22e90 jb 0x11c22df0 */
  if (C.cf) goto L_11c22df0;
  /* 11c22e96 std  */
  C.df=1;
  /* 11c22e97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c22e99 cld  */
  C.df=0;
  /* 11c22e9a jmp dword ptr [edx*4 + 0x11c22f10] */
  switch (EDX) {
    case 0: goto L_11c22f20;
    case 1: goto L_11c22f28;
    case 2: goto L_11c22f38;
    case 3: goto L_11c22f4c;
    default: x86_unimpl("switch@0x11c22e9a out of table"); return;
  }
  /* 11c22ea1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c22ea4 les ebp, ptr [esi] */
  x86_unimpl("les @ 0x11c22ea4");
  /* 11c22ea6 ret 0xcc11 */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 52245; return;
  /* 11c22ea9 ret 0xd411 */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 54293; return;
  /* 11c22ead ret 0xdc11 */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 56341; return;
  /* 11c22eb1 ret 0xe411 */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 58389; return;
  /* 11c22eb5 ret 0xec11 */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 60437; return;
  /* 11c22eb9 ret 0xf411 */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 62485; return;
  /* 11c22ec4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c22ec8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c22ecc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c22ed0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c22ed4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c22ed8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c22edc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c22ee0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c22ee4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c22ee8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c22eec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c22ef0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c22ef4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c22ef8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c22efc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c22f03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22f05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c22f07:;
  /* 11c22f07 jmp dword ptr [edx*4 + 0x11c22f10] */
  switch (EDX) {
    case 0: goto L_11c22f20;
    case 1: goto L_11c22f28;
    case 2: goto L_11c22f38;
    case 3: goto L_11c22f4c;
    default: x86_unimpl("switch@0x11c22f07 out of table"); return;
  }
  /* 11c22f0e mov edi, edi */
  EDI = (EDI);
L_11c22f20:;
  /* 11c22f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22f23 pop esi */
  ESI = (pop32());
  /* 11c22f24 pop edi */
  EDI = (pop32());
  /* 11c22f25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22f26 ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22f27 nop  */
  /* nop */
L_11c22f28:;
  /* 11c22f28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c22f2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c22f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22f31 pop esi */
  ESI = (pop32());
  /* 11c22f32 pop edi */
  EDI = (pop32());
  /* 11c22f33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22f34 ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22f35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c22f38:;
  /* 11c22f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c22f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c22f3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c22f41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c22f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22f47 pop esi */
  ESI = (pop32());
  /* 11c22f48 pop edi */
  EDI = (pop32());
  /* 11c22f49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22f4a ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
  /* 11c22f4b nop  */
  /* nop */
L_11c22f4c:;
  /* 11c22f4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c22f4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c22f52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c22f55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c22f58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c22f5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c22f5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22f61 pop esi */
  ESI = (pop32());
  /* 11c22f62 pop edi */
  EDI = (pop32());
  /* 11c22f63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c22f64 ret  */
  ESPCHK(0x11c22c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f65 @ 0x11c22f65 (62 bytes, 15 insns) */
void f_11c22f65(void) {
  FTRACE(0x11c22f65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22f65 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11c22f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c22f6c push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c22f72 call dword ptr [0x11c25038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25038))), 0x11c22f78u);
  /* 11c22f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c22f7a mov dword ptr [0x11c2680c], eax */
  w32((uint32_t)(0x11c2680c), (EAX));
  /* 11c22f7f jne 0x11c22f82 */
  if (!C.zf) goto L_11c22f82;
  /* 11c22f81 ret  */
  ESPCHK(0x11c22f65u, _esp0);
  ESP += 4; return;
L_11c22f82:;
  /* 11c22f82 and dword ptr [0x11c26804], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c26804)))&(0x0u); w32((uint32_t)(0x11c26804), (_r)); fl_logic(_r,32); }
  /* 11c22f89 and dword ptr [0x11c26808], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c26808)))&(0x0u); w32((uint32_t)(0x11c26808), (_r)); fl_logic(_r,32); }
  /* 11c22f90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c22f92 mov dword ptr [0x11c26800], eax */
  w32((uint32_t)(0x11c26800), (EAX));
  /* 11c22f97 mov dword ptr [0x11c267f8], 0x10 */
  w32((uint32_t)(0x11c267f8), (0x10u));
  /* 11c22fa1 pop eax */
  EAX = (pop32());
  /* 11c22fa2 ret  */
  ESPCHK(0x11c22f65u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa3 @ 0x11c22fa3 (43 bytes, 14 insns) */
void f_11c22fa3(void) {
  FTRACE(0x11c22fa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22fa3 mov eax, dword ptr [0x11c26808] */
  EAX = (r32((uint32_t)(0x11c26808)));
  /* 11c22fa8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c22fab mov eax, dword ptr [0x11c2680c] */
  EAX = (r32((uint32_t)(0x11c2680c)));
  /* 11c22fb0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11c22fb3:;
  /* 11c22fb3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22fb5 jae 0x11c22fcb */
  if (!C.cf) goto L_11c22fcb;
  /* 11c22fb7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c22fbb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22fbe cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c22fc4 jb 0x11c22fcd */
  if (C.cf) goto L_11c22fcd;
  /* 11c22fc6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22fc9 jmp 0x11c22fb3 */
  goto L_11c22fb3;
L_11c22fcb:;
  /* 11c22fcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c22fcd:;
  /* 11c22fcd ret  */
  ESPCHK(0x11c22fa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fce @ 0x11c22fce (811 bytes, 264 insns) */
void f_11c22fce(void) {
  FTRACE(0x11c22fceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c22fce push ebp */
  push32((uint32_t)(EBP));
  /* 11c22fcf mov ebp, esp */
  EBP = (ESP);
  /* 11c22fd1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22fd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c22fd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c22fda push ebx */
  push32((uint32_t)(EBX));
  /* 11c22fdb push esi */
  push32((uint32_t)(ESI));
  /* 11c22fdc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11c22fdf mov esi, edx */
  ESI = (EDX);
  /* 11c22fe1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c22fe4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11c22fe7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c22fea push edi */
  push32((uint32_t)(EDI));
  /* 11c22feb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11c22fee mov ecx, esi */
  ECX = (ESI);
  /* 11c22ff0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11c22ff3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c22ff9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c22ffa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c22ffd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c23004 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11c23007 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c2300a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11c2300d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11c23010 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c23013 jne 0x11c23094 */
  if (!C.zf) goto L_11c23094;
  /* 11c23015 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c23018 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c2301a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c2301b pop edi */
  EDI = (pop32());
  /* 11c2301c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11c2301f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23021 jbe 0x11c23026 */
  if ((C.cf||C.zf)) goto L_11c23026;
  /* 11c23023 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11c23026:;
  /* 11c23026 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11c2302a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2302e jne 0x11c23078 */
  if (!C.zf) goto L_11c23078;
  /* 11c23030 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c23033 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23036 jae 0x11c23054 */
  if (!C.cf) goto L_11c23054;
  /* 11c23038 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c2303d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c2303f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c23043 not edi */
  EDI = (~(EDI));
  /* 11c23045 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c23049 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c2304b jne 0x11c23078 */
  if (!C.zf) goto L_11c23078;
  /* 11c2304d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23050 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c23052 jmp 0x11c23078 */
  goto L_11c23078;
L_11c23054:;
  /* 11c23054 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23057 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c2305c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c2305e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c23061 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c23065 not edi */
  EDI = (~(EDI));
  /* 11c23067 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c2306e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c23070 jne 0x11c23078 */
  if (!C.zf) goto L_11c23078;
  /* 11c23072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23075 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c23078:;
  /* 11c23078 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11c2307c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11c23080 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11c23083 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11c23087 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11c2308b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2308e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c23091 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11c23094:;
  /* 11c23094 mov edi, ebx */
  EDI = (EBX);
  /* 11c23096 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11c23099 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c2309a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2309d jbe 0x11c230a2 */
  if ((C.cf||C.zf)) goto L_11c230a2;
  /* 11c2309f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c230a1 pop edi */
  EDI = (pop32());
L_11c230a2:;
  /* 11c230a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c230a5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11c230a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11c230ab jne 0x11c23151 */
  if (!C.zf) goto L_11c23151;
  /* 11c230b1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c230b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c230b7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c230ba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c230bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11c230bf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c230c0 pop edx */
  EDX = (pop32());
  /* 11c230c1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c230c3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11c230c6 jbe 0x11c230cd */
  if ((C.cf||C.zf)) goto L_11c230cd;
  /* 11c230c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11c230cb mov ecx, edx */
  ECX = (EDX);
L_11c230cd:;
  /* 11c230cd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c230d0 mov edi, ebx */
  EDI = (EBX);
  /* 11c230d2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11c230d5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11c230d8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c230d9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c230db jbe 0x11c230df */
  if ((C.cf||C.zf)) goto L_11c230df;
  /* 11c230dd mov edi, edx */
  EDI = (EDX);
L_11c230df:;
  /* 11c230df cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c230e1 je 0x11c2314e */
  if (C.zf) goto L_11c2314e;
  /* 11c230e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c230e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c230e9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c230ec jne 0x11c23136 */
  if (!C.zf) goto L_11c23136;
  /* 11c230ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c230f1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c230f4 jae 0x11c23112 */
  if (!C.cf) goto L_11c23112;
  /* 11c230f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c230fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c230fd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c23101 not edx */
  EDX = (~(EDX));
  /* 11c23103 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c23107 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c23109 jne 0x11c23136 */
  if (!C.zf) goto L_11c23136;
  /* 11c2310b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c2310e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c23110 jmp 0x11c23136 */
  goto L_11c23136;
L_11c23112:;
  /* 11c23112 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23115 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c2311a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c2311c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c2311f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c23123 not edx */
  EDX = (~(EDX));
  /* 11c23125 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c2312c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c2312e jne 0x11c23136 */
  if (!C.zf) goto L_11c23136;
  /* 11c23130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23133 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c23136:;
  /* 11c23136 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c23139 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c2313c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c2313f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11c23142 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c23145 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c23148 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c2314b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11c2314e:;
  /* 11c2314e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11c23151:;
  /* 11c23151 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23155 jne 0x11c23160 */
  if (!C.zf) goto L_11c23160;
  /* 11c23157 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2315a je 0x11c231e9 */
  if (C.zf) goto L_11c231e9;
L_11c23160:;
  /* 11c23160 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c23163 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11c23166 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c23169 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11c2316c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c2316f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11c23172 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11c23175 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c23178 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c2317b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11c2317e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c23181 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23184 jne 0x11c231e9 */
  if (!C.zf) goto L_11c231e9;
  /* 11c23186 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11c2318a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2318d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11c23190 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c23192 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11c23196 jae 0x11c231bd */
  if (!C.cf) goto L_11c231bd;
  /* 11c23198 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c2319c jne 0x11c231ac */
  if (!C.zf) goto L_11c231ac;
  /* 11c2319e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c231a3 mov ecx, edi */
  ECX = (EDI);
  /* 11c231a5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c231a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c231aa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c231ac:;
  /* 11c231ac mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c231b1 mov ecx, edi */
  ECX = (EDI);
  /* 11c231b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c231b5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11c231b9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c231bb jmp 0x11c231e6 */
  goto L_11c231e6;
L_11c231bd:;
  /* 11c231bd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c231c1 jne 0x11c231d3 */
  if (!C.zf) goto L_11c231d3;
  /* 11c231c3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c231c6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c231cb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c231cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c231d0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c231d3:;
  /* 11c231d3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c231d6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c231db shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c231dd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11c231e4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c231e6:;
  /* 11c231e6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11c231e9:;
  /* 11c231e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c231ec mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11c231ee mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11c231f2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11c231f4 jne 0x11c232f4 */
  if (!C.zf) goto L_11c232f4;
  /* 11c231fa mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c231ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23201 je 0x11c232e6 */
  if (C.zf) goto L_11c232e6;
  /* 11c23207 mov ecx, dword ptr [0x11c267fc] */
  ECX = (r32((uint32_t)(0x11c267fc)));
  /* 11c2320d mov edi, dword ptr [0x11c25050] */
  EDI = (r32((uint32_t)(0x11c25050)));
  /* 11c23213 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11c23216 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23219 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11c2321e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c23223 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23224 push ecx */
  push32((uint32_t)(ECX));
  /* 11c23225 call edi */
  call_ind((uint32_t)(EDI), 0x11c23227u);
  /* 11c23227 mov ecx, dword ptr [0x11c267fc] */
  ECX = (r32((uint32_t)(0x11c267fc)));
  /* 11c2322d mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c23232 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c23237 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c23239 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c2323c mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c23241 mov ecx, dword ptr [0x11c267fc] */
  ECX = (r32((uint32_t)(0x11c267fc)));
  /* 11c23247 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c2324a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c23252 mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c23257 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c2325a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11c2325d mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c23262 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c23265 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c23269 jne 0x11c23274 */
  if (!C.zf) goto L_11c23274;
  /* 11c2326b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c2326f mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
L_11c23274:;
  /* 11c23274 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23278 jne 0x11c232e6 */
  if (!C.zf) goto L_11c232e6;
  /* 11c2327a push ebx */
  push32((uint32_t)(EBX));
  /* 11c2327b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2327d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c23280 call edi */
  call_ind((uint32_t)(EDI), 0x11c23282u);
  /* 11c23282 mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c23287 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c2328a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c2328c push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c23292 call dword ptr [0x11c2504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2504c))), 0x11c23298u);
  /* 11c23298 mov eax, dword ptr [0x11c26808] */
  EAX = (r32((uint32_t)(0x11c26808)));
  /* 11c2329d mov edx, dword ptr [0x11c2680c] */
  EDX = (r32((uint32_t)(0x11c2680c)));
  /* 11c232a3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c232a6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c232a9 mov ecx, eax */
  ECX = (EAX);
  /* 11c232ab mov eax, dword ptr [0x11c26804] */
  EAX = (r32((uint32_t)(0x11c26804)));
  /* 11c232b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c232b2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11c232b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c232b7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11c232ba push ecx */
  push32((uint32_t)(ECX));
  /* 11c232bb push eax */
  push32((uint32_t)(EAX));
  /* 11c232bc call 0x11c23d50 */
  push32(0x11c232c1u); f_11c23d50();
  /* 11c232c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c232c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c232c7 dec dword ptr [0x11c26808] */
  { uint32_t _r=(r32((uint32_t)(0x11c26808)))-1; w32((uint32_t)(0x11c26808), (_r)); fl_dec(_r,32); }
  /* 11c232cd cmp eax, dword ptr [0x11c26804] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c26804))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c232d3 jbe 0x11c232d8 */
  if ((C.cf||C.zf)) goto L_11c232d8;
  /* 11c232d5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c232d8:;
  /* 11c232d8 mov ecx, dword ptr [0x11c2680c] */
  ECX = (r32((uint32_t)(0x11c2680c)));
  /* 11c232de mov dword ptr [0x11c26800], ecx */
  w32((uint32_t)(0x11c26800), (ECX));
  /* 11c232e4 jmp 0x11c232e9 */
  goto L_11c232e9;
L_11c232e6:;
  /* 11c232e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11c232e9:;
  /* 11c232e9 mov dword ptr [0x11c26804], eax */
  w32((uint32_t)(0x11c26804), (EAX));
  /* 11c232ee mov dword ptr [0x11c267fc], esi */
  w32((uint32_t)(0x11c267fc), (ESI));
L_11c232f4:;
  /* 11c232f4 pop edi */
  EDI = (pop32());
  /* 11c232f5 pop esi */
  ESI = (pop32());
  /* 11c232f6 pop ebx */
  EBX = (pop32());
  /* 11c232f7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c232f8 ret  */
  ESPCHK(0x11c22fceu, _esp0);
  ESP += 4; return;
}

/* FUN_100032f9 @ 0x11c232f9 (777 bytes, 275 insns) */
void f_11c232f9(void) {
  FTRACE(0x11c232f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c232f9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c232fa mov ebp, esp */
  EBP = (ESP);
  /* 11c232fc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c232ff mov eax, dword ptr [0x11c26808] */
  EAX = (r32((uint32_t)(0x11c26808)));
  /* 11c23304 mov edx, dword ptr [0x11c2680c] */
  EDX = (r32((uint32_t)(0x11c2680c)));
  /* 11c2330a push ebx */
  push32((uint32_t)(EBX));
  /* 11c2330b push esi */
  push32((uint32_t)(ESI));
  /* 11c2330c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c2330f push edi */
  push32((uint32_t)(EDI));
  /* 11c23310 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11c23313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23316 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c23319 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11c2331c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11c2331f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c23322 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c23325 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c23326 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23329 jge 0x11c23339 */
  if ((C.sf==C.of)) goto L_11c23339;
  /* 11c2332b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c2332e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c23330 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c23334 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c23337 jmp 0x11c23349 */
  goto L_11c23349;
L_11c23339:;
  /* 11c23339 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2333c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c2333f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c23341 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c23343 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c23346 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c23349:;
  /* 11c23349 mov eax, dword ptr [0x11c26800] */
  EAX = (r32((uint32_t)(0x11c26800)));
  /* 11c2334e mov ebx, eax */
  EBX = (EAX);
  /* 11c23350 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23352 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c23355 jae 0x11c23370 */
  if (!C.cf) goto L_11c23370;
L_11c23357:;
  /* 11c23357 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c2335a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c2335c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c2335f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23361 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c23363 jne 0x11c23370 */
  if (!C.zf) goto L_11c23370;
  /* 11c23365 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23368 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2336b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c2336e jb 0x11c23357 */
  if (C.cf) goto L_11c23357;
L_11c23370:;
  /* 11c23370 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23373 jne 0x11c233ee */
  if (!C.zf) goto L_11c233ee;
  /* 11c23375 mov ebx, edx */
  EBX = (EDX);
L_11c23377:;
  /* 11c23377 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23379 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c2337c jae 0x11c23393 */
  if (!C.cf) goto L_11c23393;
  /* 11c2337e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c23381 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c23383 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c23386 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23388 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c2338a jne 0x11c23391 */
  if (!C.zf) goto L_11c23391;
  /* 11c2338c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2338f jmp 0x11c23377 */
  goto L_11c23377;
L_11c23391:;
  /* 11c23391 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c23393:;
  /* 11c23393 jne 0x11c233ee */
  if (!C.zf) goto L_11c233ee;
L_11c23395:;
  /* 11c23395 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23398 jae 0x11c233ab */
  if (!C.cf) goto L_11c233ab;
  /* 11c2339a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2339e jne 0x11c233a8 */
  if (!C.zf) goto L_11c233a8;
  /* 11c233a0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c233a3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c233a6 jmp 0x11c23395 */
  goto L_11c23395;
L_11c233a8:;
  /* 11c233a8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c233ab:;
  /* 11c233ab jne 0x11c233d3 */
  if (!C.zf) goto L_11c233d3;
  /* 11c233ad mov ebx, edx */
  EBX = (EDX);
L_11c233af:;
  /* 11c233af cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c233b1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c233b4 jae 0x11c233c3 */
  if (!C.cf) goto L_11c233c3;
  /* 11c233b6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c233ba jne 0x11c233c1 */
  if (!C.zf) goto L_11c233c1;
  /* 11c233bc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c233bf jmp 0x11c233af */
  goto L_11c233af;
L_11c233c1:;
  /* 11c233c1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c233c3:;
  /* 11c233c3 jne 0x11c233d3 */
  if (!C.zf) goto L_11c233d3;
  /* 11c233c5 call 0x11c23602 */
  push32(0x11c233cau); f_11c23602();
  /* 11c233ca mov ebx, eax */
  EBX = (EAX);
  /* 11c233cc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c233ce mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c233d1 je 0x11c233e7 */
  if (C.zf) goto L_11c233e7;
L_11c233d3:;
  /* 11c233d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c233d4 call 0x11c236b3 */
  push32(0x11c233d9u); f_11c236b3();
  /* 11c233d9 pop ecx */
  ECX = (pop32());
  /* 11c233da mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c233dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c233df mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c233e2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c233e5 jne 0x11c233ee */
  if (!C.zf) goto L_11c233ee;
L_11c233e7:;
  /* 11c233e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c233e9 jmp 0x11c235fd */
  goto L_11c235fd;
L_11c233ee:;
  /* 11c233ee mov dword ptr [0x11c26800], ebx */
  w32((uint32_t)(0x11c26800), (EBX));
  /* 11c233f4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c233f7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c233f9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c233fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11c233ff je 0x11c23415 */
  if (C.zf) goto L_11c23415;
  /* 11c23401 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c23408 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c2340c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c2340f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23411 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c23413 jne 0x11c2344c */
  if (!C.zf) goto L_11c2344c;
L_11c23415:;
  /* 11c23415 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11c2341b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11c2341e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c23421 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11c23424 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c23428 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11c2342b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11c2342d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c23430 jne 0x11c23449 */
  if (!C.zf) goto L_11c23449;
L_11c23432:;
  /* 11c23432 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11c23438 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c2343b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c2343e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23441 mov edi, esi */
  EDI = (ESI);
  /* 11c23443 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11c23445 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11c23447 je 0x11c23432 */
  if (C.zf) goto L_11c23432;
L_11c23449:;
  /* 11c23449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11c2344c:;
  /* 11c2344c mov ecx, edx */
  ECX = (EDX);
  /* 11c2344e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23450 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c23456 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c2345d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c23460 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c23464 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c23466 jne 0x11c23475 */
  if (!C.zf) goto L_11c23475;
  /* 11c23468 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c2346f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c23471 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c23474 pop edi */
  EDI = (pop32());
L_11c23475:;
  /* 11c23475 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c23477 jl 0x11c2347e */
  if ((C.sf!=C.of)) goto L_11c2347e;
  /* 11c23479 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c2347b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c2347c jmp 0x11c23475 */
  goto L_11c23475;
L_11c2347e:;
  /* 11c2347e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c23481 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11c23485 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c23487 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c2348a mov esi, ecx */
  ESI = (ECX);
  /* 11c2348c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c2348f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c23492 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c23493 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23496 jle 0x11c2349b */
  if ((C.zf||C.sf!=C.of)) goto L_11c2349b;
  /* 11c23498 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c2349a pop esi */
  ESI = (pop32());
L_11c2349b:;
  /* 11c2349b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2349d je 0x11c235b0 */
  if (C.zf) goto L_11c235b0;
  /* 11c234a3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c234a6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c234a9 jne 0x11c2350c */
  if (!C.zf) goto L_11c2350c;
  /* 11c234ab cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c234ae jge 0x11c234db */
  if ((C.sf==C.of)) goto L_11c234db;
  /* 11c234b0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c234b5 mov ecx, edi */
  ECX = (EDI);
  /* 11c234b7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c234b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c234bc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c234c0 not ebx */
  EBX = (~(EBX));
  /* 11c234c2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c234c5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11c234c9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11c234cd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c234cf jne 0x11c23509 */
  if (!C.zf) goto L_11c23509;
  /* 11c234d1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c234d4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c234d7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11c234d9 jmp 0x11c2350c */
  goto L_11c2350c;
L_11c234db:;
  /* 11c234db lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c234de mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c234e3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c234e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c234e8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c234ec lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c234f3 not ebx */
  EBX = (~(EBX));
  /* 11c234f5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c234f7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c234f9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c234fc jne 0x11c23509 */
  if (!C.zf) goto L_11c23509;
  /* 11c234fe mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23501 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c23504 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c23507 jmp 0x11c2350c */
  goto L_11c2350c;
L_11c23509:;
  /* 11c23509 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c2350c:;
  /* 11c2350c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c2350f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11c23512 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23516 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11c23519 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c2351c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11c2351f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c23522 je 0x11c235bc */
  if (C.zf) goto L_11c235bc;
  /* 11c23528 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c2352b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11c2352f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11c23532 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11c23535 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11c23538 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c2353b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c2353e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11c23541 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c23544 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23547 jne 0x11c235ad */
  if (!C.zf) goto L_11c235ad;
  /* 11c23549 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11c2354d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23550 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11c23553 jge 0x11c2357e */
  if ((C.sf==C.of)) goto L_11c2357e;
  /* 11c23555 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c23557 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c2355b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c2355f jne 0x11c2356c */
  if (!C.zf) goto L_11c2356c;
  /* 11c23561 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c23566 mov ecx, esi */
  ECX = (ESI);
  /* 11c23568 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c2356a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11c2356c:;
  /* 11c2356c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c23571 mov ecx, esi */
  ECX = (ESI);
  /* 11c23573 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c23575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c23578 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c2357c jmp 0x11c235ad */
  goto L_11c235ad;
L_11c2357e:;
  /* 11c2357e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c23580 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c23584 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c23588 jne 0x11c23597 */
  if (!C.zf) goto L_11c23597;
  /* 11c2358a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c2358d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c23592 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c23594 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11c23597:;
  /* 11c23597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c2359a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c235a1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c235a4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c235a9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c235ab or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c235ad:;
  /* 11c235ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c235b0:;
  /* 11c235b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c235b2 je 0x11c235bf */
  if (C.zf) goto L_11c235bf;
  /* 11c235b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c235b6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11c235ba jmp 0x11c235bf */
  goto L_11c235bf;
L_11c235bc:;
  /* 11c235bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c235bf:;
  /* 11c235bf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11c235c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c235c4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11c235c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c235c9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11c235cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c235d0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c235d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c235d4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11c235d7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c235d9 jne 0x11c235f5 */
  if (!C.zf) goto L_11c235f5;
  /* 11c235db cmp ebx, dword ptr [0x11c26804] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c26804))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c235e1 jne 0x11c235f5 */
  if (!C.zf) goto L_11c235f5;
  /* 11c235e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c235e6 cmp ecx, dword ptr [0x11c267fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c267fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c235ec jne 0x11c235f5 */
  if (!C.zf) goto L_11c235f5;
  /* 11c235ee and dword ptr [0x11c26804], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c26804)))&(0x0u); w32((uint32_t)(0x11c26804), (_r)); fl_logic(_r,32); }
L_11c235f5:;
  /* 11c235f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c235f8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c235fa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11c235fd:;
  /* 11c235fd pop edi */
  EDI = (pop32());
  /* 11c235fe pop esi */
  ESI = (pop32());
  /* 11c235ff pop ebx */
  EBX = (pop32());
  /* 11c23600 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23601 ret  */
  ESPCHK(0x11c232f9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003602 @ 0x11c23602 (177 bytes, 53 insns) */
void f_11c23602(void) {
  FTRACE(0x11c23602u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23602 mov eax, dword ptr [0x11c26808] */
  EAX = (r32((uint32_t)(0x11c26808)));
  /* 11c23607 mov ecx, dword ptr [0x11c267f8] */
  ECX = (r32((uint32_t)(0x11c267f8)));
  /* 11c2360d push esi */
  push32((uint32_t)(ESI));
  /* 11c2360e push edi */
  push32((uint32_t)(EDI));
  /* 11c2360f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23611 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23613 jne 0x11c23645 */
  if (!C.zf) goto L_11c23645;
  /* 11c23615 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11c23619 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c2361c push eax */
  push32((uint32_t)(EAX));
  /* 11c2361d push dword ptr [0x11c2680c] */
  push32((uint32_t)(r32((uint32_t)(0x11c2680c))));
  /* 11c23623 push edi */
  push32((uint32_t)(EDI));
  /* 11c23624 push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c2362a call dword ptr [0x11c25024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25024))), 0x11c23630u);
  /* 11c23630 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23632 je 0x11c23695 */
  if (C.zf) goto L_11c23695;
  /* 11c23634 add dword ptr [0x11c267f8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11c267f8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11c267f8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c2363b mov dword ptr [0x11c2680c], eax */
  w32((uint32_t)(0x11c2680c), (EAX));
  /* 11c23640 mov eax, dword ptr [0x11c26808] */
  EAX = (r32((uint32_t)(0x11c26808)));
L_11c23645:;
  /* 11c23645 mov ecx, dword ptr [0x11c2680c] */
  ECX = (r32((uint32_t)(0x11c2680c)));
  /* 11c2364b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11c23650 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c23652 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c23655 push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c2365b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c2365e call dword ptr [0x11c25038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25038))), 0x11c23664u);
  /* 11c23664 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23666 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c23669 je 0x11c23695 */
  if (C.zf) goto L_11c23695;
  /* 11c2366b push 4 */
  push32((uint32_t)(0x4u));
  /* 11c2366d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c23672 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c23677 push edi */
  push32((uint32_t)(EDI));
  /* 11c23678 call dword ptr [0x11c25028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25028))), 0x11c2367eu);
  /* 11c2367e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23680 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c23683 jne 0x11c23699 */
  if (!C.zf) goto L_11c23699;
  /* 11c23685 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c23688 push edi */
  push32((uint32_t)(EDI));
  /* 11c23689 push dword ptr [0x11c26a48] */
  push32((uint32_t)(r32((uint32_t)(0x11c26a48))));
  /* 11c2368f call dword ptr [0x11c2504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2504c))), 0x11c23695u);
L_11c23695:;
  /* 11c23695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c23697 jmp 0x11c236b0 */
  goto L_11c236b0;
L_11c23699:;
  /* 11c23699 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c2369d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c2369f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11c236a2 inc dword ptr [0x11c26808] */
  { uint32_t _r=(r32((uint32_t)(0x11c26808)))+1; w32((uint32_t)(0x11c26808), (_r)); fl_inc(_r,32); }
  /* 11c236a8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c236ab or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c236ae mov eax, esi */
  EAX = (ESI);
L_11c236b0:;
  /* 11c236b0 pop edi */
  EDI = (pop32());
  /* 11c236b1 pop esi */
  ESI = (pop32());
  /* 11c236b2 ret  */
  ESPCHK(0x11c23602u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b3 @ 0x11c236b3 (251 bytes, 85 insns) */
void f_11c236b3(void) {
  FTRACE(0x11c236b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c236b3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c236b4 mov ebp, esp */
  EBP = (ESP);
  /* 11c236b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c236b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c236ba push ebx */
  push32((uint32_t)(EBX));
  /* 11c236bb push esi */
  push32((uint32_t)(ESI));
  /* 11c236bc push edi */
  push32((uint32_t)(EDI));
  /* 11c236bd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11c236c0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c236c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c236c5:;
  /* 11c236c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c236c7 jl 0x11c236ce */
  if ((C.sf!=C.of)) goto L_11c236ce;
  /* 11c236c9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c236cb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c236cc jmp 0x11c236c5 */
  goto L_11c236c5;
L_11c236ce:;
  /* 11c236ce mov eax, ebx */
  EAX = (EBX);
  /* 11c236d0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c236d2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c236d8 pop edx */
  EDX = (pop32());
  /* 11c236d9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11c236e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c236e3:;
  /* 11c236e3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11c236e6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11c236e9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c236ec dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c236ed jne 0x11c236e3 */
  if (!C.zf) goto L_11c236e3;
  /* 11c236ef mov edi, ebx */
  EDI = (EBX);
  /* 11c236f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c236f3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c236f6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c236f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c236fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c23703 push edi */
  push32((uint32_t)(EDI));
  /* 11c23704 call dword ptr [0x11c25028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25028))), 0x11c2370au);
  /* 11c2370a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2370c jne 0x11c23716 */
  if (!C.zf) goto L_11c23716;
  /* 11c2370e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c23711 jmp 0x11c237a9 */
  goto L_11c237a9;
L_11c23716:;
  /* 11c23716 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11c2371c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2371e ja 0x11c2375c */
  if ((!C.cf&&!C.zf)) goto L_11c2375c;
  /* 11c23720 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11c23723:;
  /* 11c23723 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c23727 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11c2372e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11c23734 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11c2373b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c2373d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11c23743 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c23746 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11c23750 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23755 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11c23758 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2375a jbe 0x11c23723 */
  if ((C.cf||C.zf)) goto L_11c23723;
L_11c2375c:;
  /* 11c2375c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c2375f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11c23762 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23767 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23769 pop edi */
  EDI = (pop32());
  /* 11c2376a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c2376d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11c23770 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11c23773 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11c23776 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c23779 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c2377e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11c23785 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11c23788 mov cl, al */
  CL = (AL);
  /* 11c2378a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c2378c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2378e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23791 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11c23794 jne 0x11c23799 */
  if (!C.zf) goto L_11c23799;
  /* 11c23796 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11c23799:;
  /* 11c23799 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c2379e mov ecx, ebx */
  ECX = (EBX);
  /* 11c237a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c237a2 not edx */
  EDX = (~(EDX));
  /* 11c237a4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c237a7 mov eax, ebx */
  EAX = (EBX);
L_11c237a9:;
  /* 11c237a9 pop edi */
  EDI = (pop32());
  /* 11c237aa pop esi */
  ESI = (pop32());
  /* 11c237ab pop ebx */
  EBX = (pop32());
  /* 11c237ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c237ad ret  */
  ESPCHK(0x11c236b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100037ae @ 0x11c237ae (137 bytes, 50 insns) */
void f_11c237ae(void) {
  FTRACE(0x11c237aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c237ae push ebx */
  push32((uint32_t)(EBX));
  /* 11c237af xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c237b1 cmp dword ptr [0x11c267bc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c267bc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c237b7 push esi */
  push32((uint32_t)(ESI));
  /* 11c237b8 push edi */
  push32((uint32_t)(EDI));
  /* 11c237b9 jne 0x11c237fd */
  if (!C.zf) goto L_11c237fd;
  /* 11c237bb push 0x11c25450 */
  push32((uint32_t)(0x11c25450u));
  /* 11c237c0 call dword ptr [0x11c2501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2501c))), 0x11c237c6u);
  /* 11c237c6 mov edi, eax */
  EDI = (EAX);
  /* 11c237c8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c237ca je 0x11c23833 */
  if (C.zf) goto L_11c23833;
  /* 11c237cc mov esi, dword ptr [0x11c25020] */
  ESI = (r32((uint32_t)(0x11c25020)));
  /* 11c237d2 push 0x11c25444 */
  push32((uint32_t)(0x11c25444u));
  /* 11c237d7 push edi */
  push32((uint32_t)(EDI));
  /* 11c237d8 call esi */
  call_ind((uint32_t)(ESI), 0x11c237dau);
  /* 11c237da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c237dc mov dword ptr [0x11c267bc], eax */
  w32((uint32_t)(0x11c267bc), (EAX));
  /* 11c237e1 je 0x11c23833 */
  if (C.zf) goto L_11c23833;
  /* 11c237e3 push 0x11c25434 */
  push32((uint32_t)(0x11c25434u));
  /* 11c237e8 push edi */
  push32((uint32_t)(EDI));
  /* 11c237e9 call esi */
  call_ind((uint32_t)(ESI), 0x11c237ebu);
  /* 11c237eb push 0x11c25420 */
  push32((uint32_t)(0x11c25420u));
  /* 11c237f0 push edi */
  push32((uint32_t)(EDI));
  /* 11c237f1 mov dword ptr [0x11c267c0], eax */
  w32((uint32_t)(0x11c267c0), (EAX));
  /* 11c237f6 call esi */
  call_ind((uint32_t)(ESI), 0x11c237f8u);
  /* 11c237f8 mov dword ptr [0x11c267c4], eax */
  w32((uint32_t)(0x11c267c4), (EAX));
L_11c237fd:;
  /* 11c237fd mov eax, dword ptr [0x11c267c0] */
  EAX = (r32((uint32_t)(0x11c267c0)));
  /* 11c23802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23804 je 0x11c2381c */
  if (C.zf) goto L_11c2381c;
  /* 11c23806 call eax */
  call_ind((uint32_t)(EAX), 0x11c23808u);
  /* 11c23808 mov ebx, eax */
  EBX = (EAX);
  /* 11c2380a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c2380c je 0x11c2381c */
  if (C.zf) goto L_11c2381c;
  /* 11c2380e mov eax, dword ptr [0x11c267c4] */
  EAX = (r32((uint32_t)(0x11c267c4)));
  /* 11c23813 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23815 je 0x11c2381c */
  if (C.zf) goto L_11c2381c;
  /* 11c23817 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23818 call eax */
  call_ind((uint32_t)(EAX), 0x11c2381au);
  /* 11c2381a mov ebx, eax */
  EBX = (EAX);
L_11c2381c:;
  /* 11c2381c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c23820 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c23824 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c23828 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23829 call dword ptr [0x11c267bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c267bc))), 0x11c2382fu);
L_11c2382f:;
  /* 11c2382f pop edi */
  EDI = (pop32());
  /* 11c23830 pop esi */
  ESI = (pop32());
  /* 11c23831 pop ebx */
  EBX = (pop32());
  /* 11c23832 ret  */
  ESPCHK(0x11c237aeu, _esp0);
  ESP += 4; return;
L_11c23833:;
  /* 11c23833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c23835 jmp 0x11c2382f */
  goto L_11c2382f;
}

/* _strncpy @ 0x11c23840 (254 bytes, 109 insns) */
void f_11c23840(void) {
  FTRACE(0x11c23840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23840 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c23844 push edi */
  push32((uint32_t)(EDI));
  /* 11c23845 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c23847 je 0x11c238c3 */
  if (C.zf) goto L_11c238c3;
  /* 11c23849 push esi */
  push32((uint32_t)(ESI));
  /* 11c2384a push ebx */
  push32((uint32_t)(EBX));
  /* 11c2384b mov ebx, ecx */
  EBX = (ECX);
  /* 11c2384d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11c23851 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c23857 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c2385b jne 0x11c23864 */
  if (!C.zf) goto L_11c23864;
  /* 11c2385d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23860 jne 0x11c238d1 */
  if (!C.zf) goto L_11c238d1;
  /* 11c23862 jmp 0x11c23885 */
  goto L_11c23885;
L_11c23864:;
  /* 11c23864 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23866 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c23867 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23869 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c2386a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c2386b je 0x11c23892 */
  if (C.zf) goto L_11c23892;
  /* 11c2386d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2386f je 0x11c2389a */
  if (C.zf) goto L_11c2389a;
  /* 11c23871 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c23877 jne 0x11c23864 */
  if (!C.zf) goto L_11c23864;
  /* 11c23879 mov ebx, ecx */
  EBX = (ECX);
  /* 11c2387b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c2387e jne 0x11c238d1 */
  if (!C.zf) goto L_11c238d1;
L_11c23880:;
  /* 11c23880 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c23883 je 0x11c23892 */
  if (C.zf) goto L_11c23892;
L_11c23885:;
  /* 11c23885 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23887 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c23888 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c2388a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c2388b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c2388d je 0x11c238be */
  if (C.zf) goto L_11c238be;
  /* 11c2388f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c23890 jne 0x11c23885 */
  if (!C.zf) goto L_11c23885;
L_11c23892:;
  /* 11c23892 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c23896 pop ebx */
  EBX = (pop32());
  /* 11c23897 pop esi */
  ESI = (pop32());
  /* 11c23898 pop edi */
  EDI = (pop32());
  /* 11c23899 ret  */
  ESPCHK(0x11c23840u, _esp0);
  ESP += 4; return;
L_11c2389a:;
  /* 11c2389a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c238a0 je 0x11c238b4 */
  if (C.zf) goto L_11c238b4;
L_11c238a2:;
  /* 11c238a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c238a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c238a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c238a6 je 0x11c23936 */
  if (C.zf) goto L_11c23936;
  /* 11c238ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c238b2 jne 0x11c238a2 */
  if (!C.zf) goto L_11c238a2;
L_11c238b4:;
  /* 11c238b4 mov ebx, ecx */
  EBX = (ECX);
  /* 11c238b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c238b9 jne 0x11c23927 */
  if (!C.zf) goto L_11c23927;
L_11c238bb:;
  /* 11c238bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c238bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c238be:;
  /* 11c238be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c238bf jne 0x11c238bb */
  if (!C.zf) goto L_11c238bb;
  /* 11c238c1 pop ebx */
  EBX = (pop32());
  /* 11c238c2 pop esi */
  ESI = (pop32());
L_11c238c3:;
  /* 11c238c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c238c7 pop edi */
  EDI = (pop32());
  /* 11c238c8 ret  */
  ESPCHK(0x11c23840u, _esp0);
  ESP += 4; return;
L_11c238c9:;
  /* 11c238c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c238cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c238ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c238cf je 0x11c23880 */
  if (C.zf) goto L_11c23880;
L_11c238d1:;
  /* 11c238d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c238d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c238d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c238da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c238dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c238df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c238e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c238e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c238e9 je 0x11c238c9 */
  if (C.zf) goto L_11c238c9;
  /* 11c238eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c238ed je 0x11c2391b */
  if (C.zf) goto L_11c2391b;
  /* 11c238ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c238f1 je 0x11c23911 */
  if (C.zf) goto L_11c23911;
  /* 11c238f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c238f9 je 0x11c23907 */
  if (C.zf) goto L_11c23907;
  /* 11c238fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c23901 jne 0x11c238c9 */
  if (!C.zf) goto L_11c238c9;
  /* 11c23903 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c23905 jmp 0x11c2391f */
  goto L_11c2391f;
L_11c23907:;
  /* 11c23907 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c2390d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c2390f jmp 0x11c2391f */
  goto L_11c2391f;
L_11c23911:;
  /* 11c23911 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c23917 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c23919 jmp 0x11c2391f */
  goto L_11c2391f;
L_11c2391b:;
  /* 11c2391b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c2391d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11c2391f:;
  /* 11c2391f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c23924 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c23925 je 0x11c23931 */
  if (C.zf) goto L_11c23931;
L_11c23927:;
  /* 11c23927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c23929:;
  /* 11c23929 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c2392b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2392e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c2392f jne 0x11c23929 */
  if (!C.zf) goto L_11c23929;
L_11c23931:;
  /* 11c23931 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c23934 jne 0x11c238bb */
  if (!C.zf) goto L_11c238bb;
L_11c23936:;
  /* 11c23936 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c2393a pop ebx */
  EBX = (pop32());
  /* 11c2393b pop esi */
  ESI = (pop32());
  /* 11c2393c pop edi */
  EDI = (pop32());
  /* 11c2393d ret  */
  ESPCHK(0x11c23840u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11c23940 (88 bytes, 40 insns) */
void f_11c23940(void) {
  FTRACE(0x11c23940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23940 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c23944 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c23948 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c2394a je 0x11c23993 */
  if (C.zf) goto L_11c23993;
  /* 11c2394c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c2394e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c23952 push edi */
  push32((uint32_t)(EDI));
  /* 11c23953 mov edi, ecx */
  EDI = (ECX);
  /* 11c23955 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23958 jb 0x11c23987 */
  if (C.cf) goto L_11c23987;
  /* 11c2395a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c2395c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c2395f je 0x11c23969 */
  if (C.zf) goto L_11c23969;
  /* 11c23961 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11c23963:;
  /* 11c23963 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23965 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c23966 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c23967 jne 0x11c23963 */
  if (!C.zf) goto L_11c23963;
L_11c23969:;
  /* 11c23969 mov ecx, eax */
  ECX = (EAX);
  /* 11c2396b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c2396e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23970 mov ecx, eax */
  ECX = (EAX);
  /* 11c23972 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c23975 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23977 mov ecx, edx */
  ECX = (EDX);
  /* 11c23979 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c2397c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c2397f je 0x11c23987 */
  if (C.zf) goto L_11c23987;
  /* 11c23981 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c23983 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c23985 je 0x11c2398d */
  if (C.zf) goto L_11c2398d;
L_11c23987:;
  /* 11c23987 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c2398a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c2398b jne 0x11c23987 */
  if (!C.zf) goto L_11c23987;
L_11c2398d:;
  /* 11c2398d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c23991 pop edi */
  EDI = (pop32());
  /* 11c23992 ret  */
  ESPCHK(0x11c23940u, _esp0);
  ESP += 4; return;
L_11c23993:;
  /* 11c23993 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c23997 ret  */
  ESPCHK(0x11c23940u, _esp0);
  ESP += 4; return;
}

/* FUN_10003998 @ 0x11c23998 (27 bytes, 13 insns) */
void f_11c23998(void) {
  FTRACE(0x11c23998u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23998 mov eax, dword ptr [0x11c267c8] */
  EAX = (r32((uint32_t)(0x11c267c8)));
  /* 11c2399d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c2399f je 0x11c239b0 */
  if (C.zf) goto L_11c239b0;
  /* 11c239a1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c239a5 call eax */
  call_ind((uint32_t)(EAX), 0x11c239a7u);
  /* 11c239a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c239a9 pop ecx */
  ECX = (pop32());
  /* 11c239aa je 0x11c239b0 */
  if (C.zf) goto L_11c239b0;
  /* 11c239ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11c239ae pop eax */
  EAX = (pop32());
  /* 11c239af ret  */
  ESPCHK(0x11c23998u, _esp0);
  ESP += 4; return;
L_11c239b0:;
  /* 11c239b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c239b2 ret  */
  ESPCHK(0x11c23998u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b3 @ 0x11c239b3 (511 bytes, 193 insns) */
void f_11c239b3(void) {
  FTRACE(0x11c239b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c239b3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c239b4 mov ebp, esp */
  EBP = (ESP);
  /* 11c239b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c239b8 push 0x11c25468 */
  push32((uint32_t)(0x11c25468u));
  /* 11c239bd push 0x11c24180 */
  push32((uint32_t)(0x11c24180u));
  /* 11c239c2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c239c8 push eax */
  push32((uint32_t)(EAX));
  /* 11c239c9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c239d0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c239d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c239d4 push esi */
  push32((uint32_t)(ESI));
  /* 11c239d5 push edi */
  push32((uint32_t)(EDI));
  /* 11c239d6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c239d9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c239db cmp dword ptr [0x11c267f0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c267f0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c239e1 jne 0x11c23a29 */
  if (!C.zf) goto L_11c23a29;
  /* 11c239e3 push edi */
  push32((uint32_t)(EDI));
  /* 11c239e4 push edi */
  push32((uint32_t)(EDI));
  /* 11c239e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c239e7 pop ebx */
  EBX = (pop32());
  /* 11c239e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c239e9 push 0x11c25460 */
  push32((uint32_t)(0x11c25460u));
  /* 11c239ee mov esi, 0x100 */
  ESI = (0x100u);
  /* 11c239f3 push esi */
  push32((uint32_t)(ESI));
  /* 11c239f4 push edi */
  push32((uint32_t)(EDI));
  /* 11c239f5 call dword ptr [0x11c25010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25010))), 0x11c239fbu);
  /* 11c239fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c239fd je 0x11c23a07 */
  if (C.zf) goto L_11c23a07;
  /* 11c239ff mov dword ptr [0x11c267f0], ebx */
  w32((uint32_t)(0x11c267f0), (EBX));
  /* 11c23a05 jmp 0x11c23a29 */
  goto L_11c23a29;
L_11c23a07:;
  /* 11c23a07 push edi */
  push32((uint32_t)(EDI));
  /* 11c23a08 push edi */
  push32((uint32_t)(EDI));
  /* 11c23a09 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23a0a push 0x11c2545c */
  push32((uint32_t)(0x11c2545cu));
  /* 11c23a0f push esi */
  push32((uint32_t)(ESI));
  /* 11c23a10 push edi */
  push32((uint32_t)(EDI));
  /* 11c23a11 call dword ptr [0x11c25014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25014))), 0x11c23a17u);
  /* 11c23a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23a19 je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23a1f mov dword ptr [0x11c267f0], 2 */
  w32((uint32_t)(0x11c267f0), (0x2u));
L_11c23a29:;
  /* 11c23a29 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23a2c jle 0x11c23a3e */
  if ((C.zf||C.sf!=C.of)) goto L_11c23a3e;
  /* 11c23a2e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c23a31 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23a34 call 0x11c23bd7 */
  push32(0x11c23a39u); f_11c23bd7();
  /* 11c23a39 pop ecx */
  ECX = (pop32());
  /* 11c23a3a pop ecx */
  ECX = (pop32());
  /* 11c23a3b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11c23a3e:;
  /* 11c23a3e mov eax, dword ptr [0x11c267f0] */
  EAX = (r32((uint32_t)(0x11c267f0)));
  /* 11c23a43 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23a46 jne 0x11c23a65 */
  if (!C.zf) goto L_11c23a65;
  /* 11c23a48 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c23a4b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c23a4e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c23a51 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23a54 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23a57 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c23a5a call dword ptr [0x11c25014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25014))), 0x11c23a60u);
  /* 11c23a60 jmp 0x11c23b43 */
  goto L_11c23b43;
L_11c23a65:;
  /* 11c23a65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23a68 jne 0x11c23b41 */
  if (!C.zf) goto L_11c23b41;
  /* 11c23a6e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23a71 jne 0x11c23a7b */
  if (!C.zf) goto L_11c23a7b;
  /* 11c23a73 mov eax, dword ptr [0x11c267e8] */
  EAX = (r32((uint32_t)(0x11c267e8)));
  /* 11c23a78 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11c23a7b:;
  /* 11c23a7b push edi */
  push32((uint32_t)(EDI));
  /* 11c23a7c push edi */
  push32((uint32_t)(EDI));
  /* 11c23a7d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c23a80 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23a83 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c23a86 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c23a88 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23a8a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c23a8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c23a8e push eax */
  push32((uint32_t)(EAX));
  /* 11c23a8f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c23a92 call dword ptr [0x11c25018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25018))), 0x11c23a98u);
  /* 11c23a98 mov ebx, eax */
  EBX = (EAX);
  /* 11c23a9a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11c23a9d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23a9f je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23aa5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c23aa8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11c23aab add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23aae and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c23ab0 call 0x11c24260 */
  push32(0x11c23ab5u); f_11c24260();
  /* 11c23ab5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c23ab8 mov eax, esp */
  EAX = (ESP);
  /* 11c23aba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c23abd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c23ac1 jmp 0x11c23ad6 */
  goto L_11c23ad6;
  /* 11c23ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23ac5 pop eax */
  EAX = (pop32());
  /* 11c23ac6 ret  */
  ESPCHK(0x11c239b3u, _esp0);
  ESP += 4; return;
  /* 11c23ac7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c23aca xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23acc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c23acf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c23ad3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11c23ad6:;
  /* 11c23ad6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23ad9 je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23adb push ebx */
  push32((uint32_t)(EBX));
  /* 11c23adc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c23adf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c23ae2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23ae5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23ae7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c23aea call dword ptr [0x11c25018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25018))), 0x11c23af0u);
  /* 11c23af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23af2 je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23af4 push edi */
  push32((uint32_t)(EDI));
  /* 11c23af5 push edi */
  push32((uint32_t)(EDI));
  /* 11c23af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23af7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c23afa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23afd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c23b00 call dword ptr [0x11c25010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25010))), 0x11c23b06u);
  /* 11c23b06 mov esi, eax */
  ESI = (EAX);
  /* 11c23b08 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11c23b0b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23b0d je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23b0f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11c23b13 je 0x11c23b55 */
  if (C.zf) goto L_11c23b55;
  /* 11c23b15 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23b18 je 0x11c23bd0 */
  if (C.zf) goto L_11c23bd0;
  /* 11c23b1e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23b21 jg 0x11c23b41 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c23b41;
  /* 11c23b23 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c23b26 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c23b29 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23b2a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c23b2d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23b30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c23b33 call dword ptr [0x11c25010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25010))), 0x11c23b39u);
  /* 11c23b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23b3b jne 0x11c23bd0 */
  if (!C.zf) goto L_11c23bd0;
L_11c23b41:;
  /* 11c23b41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c23b43:;
  /* 11c23b43 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11c23b46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c23b49 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c23b50 pop edi */
  EDI = (pop32());
  /* 11c23b51 pop esi */
  ESI = (pop32());
  /* 11c23b52 pop ebx */
  EBX = (pop32());
  /* 11c23b53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23b54 ret  */
  ESPCHK(0x11c239b3u, _esp0);
  ESP += 4; return;
L_11c23b55:;
  /* 11c23b55 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c23b5c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11c23b5f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23b62 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c23b64 call 0x11c24260 */
  push32(0x11c23b69u); f_11c24260();
  /* 11c23b69 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c23b6c mov ebx, esp */
  EBX = (ESP);
  /* 11c23b6e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c23b71 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c23b75 jmp 0x11c23b89 */
  goto L_11c23b89;
  /* 11c23b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23b79 pop eax */
  EAX = (pop32());
  /* 11c23b7a ret  */
  ESPCHK(0x11c239b3u, _esp0);
  ESP += 4; return;
  /* 11c23b7b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c23b7e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c23b80 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c23b82 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c23b86 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11c23b89:;
  /* 11c23b89 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23b8b je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23b8d push esi */
  push32((uint32_t)(ESI));
  /* 11c23b8e push ebx */
  push32((uint32_t)(EBX));
  /* 11c23b8f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c23b92 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c23b95 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23b98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c23b9b call dword ptr [0x11c25010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25010))), 0x11c23ba1u);
  /* 11c23ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23ba3 je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
  /* 11c23ba5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11c23ba9 push edi */
  push32((uint32_t)(EDI));
  /* 11c23baa jne 0x11c23bb0 */
  if (!C.zf) goto L_11c23bb0;
  /* 11c23bac push edi */
  push32((uint32_t)(EDI));
  /* 11c23bad push edi */
  push32((uint32_t)(EDI));
  /* 11c23bae jmp 0x11c23bb6 */
  goto L_11c23bb6;
L_11c23bb0:;
  /* 11c23bb0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c23bb3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11c23bb6:;
  /* 11c23bb6 push esi */
  push32((uint32_t)(ESI));
  /* 11c23bb7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23bb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11c23bbd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c23bc0 call dword ptr [0x11c25064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25064))), 0x11c23bc6u);
  /* 11c23bc6 mov esi, eax */
  ESI = (EAX);
  /* 11c23bc8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23bca je 0x11c23b41 */
  if (C.zf) goto L_11c23b41;
L_11c23bd0:;
  /* 11c23bd0 mov eax, esi */
  EAX = (ESI);
  /* 11c23bd2 jmp 0x11c23b43 */
  goto L_11c23b43;
}

/* FUN_10003bd7 @ 0x11c23bd7 (43 bytes, 20 insns) */
void f_11c23bd7(void) {
  FTRACE(0x11c23bd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23bd7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c23bdb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c23bdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c23be1 push esi */
  push32((uint32_t)(ESI));
  /* 11c23be2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11c23be5 je 0x11c23bf4 */
  if (C.zf) goto L_11c23bf4;
L_11c23be7:;
  /* 11c23be7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c23bea je 0x11c23bf4 */
  if (C.zf) goto L_11c23bf4;
  /* 11c23bec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c23bed mov esi, ecx */
  ESI = (ECX);
  /* 11c23bef dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c23bf0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c23bf2 jne 0x11c23be7 */
  if (!C.zf) goto L_11c23be7;
L_11c23bf4:;
  /* 11c23bf4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c23bf7 pop esi */
  ESI = (pop32());
  /* 11c23bf8 jne 0x11c23bff */
  if (!C.zf) goto L_11c23bff;
  /* 11c23bfa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23bfe ret  */
  ESPCHK(0x11c23bd7u, _esp0);
  ESP += 4; return;
L_11c23bff:;
  /* 11c23bff mov eax, edx */
  EAX = (EDX);
  /* 11c23c01 ret  */
  ESPCHK(0x11c23bd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c02 @ 0x11c23c02 (318 bytes, 123 insns) */
void f_11c23c02(void) {
  FTRACE(0x11c23c02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23c02 push ebp */
  push32((uint32_t)(EBP));
  /* 11c23c03 mov ebp, esp */
  EBP = (ESP);
  /* 11c23c05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c23c07 push 0x11c25480 */
  push32((uint32_t)(0x11c25480u));
  /* 11c23c0c push 0x11c24180 */
  push32((uint32_t)(0x11c24180u));
  /* 11c23c11 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c23c17 push eax */
  push32((uint32_t)(EAX));
  /* 11c23c18 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c23c1f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23c22 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23c23 push esi */
  push32((uint32_t)(ESI));
  /* 11c23c24 push edi */
  push32((uint32_t)(EDI));
  /* 11c23c25 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c23c28 mov eax, dword ptr [0x11c267f4] */
  EAX = (r32((uint32_t)(0x11c267f4)));
  /* 11c23c2d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c23c2f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23c31 jne 0x11c23c71 */
  if (!C.zf) goto L_11c23c71;
  /* 11c23c33 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c23c36 push eax */
  push32((uint32_t)(EAX));
  /* 11c23c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23c39 pop esi */
  ESI = (pop32());
  /* 11c23c3a push esi */
  push32((uint32_t)(ESI));
  /* 11c23c3b push 0x11c25460 */
  push32((uint32_t)(0x11c25460u));
  /* 11c23c40 push esi */
  push32((uint32_t)(ESI));
  /* 11c23c41 call dword ptr [0x11c25008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25008))), 0x11c23c47u);
  /* 11c23c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23c49 je 0x11c23c4f */
  if (C.zf) goto L_11c23c4f;
  /* 11c23c4b mov eax, esi */
  EAX = (ESI);
  /* 11c23c4d jmp 0x11c23c6c */
  goto L_11c23c6c;
L_11c23c4f:;
  /* 11c23c4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c23c52 push eax */
  push32((uint32_t)(EAX));
  /* 11c23c53 push esi */
  push32((uint32_t)(ESI));
  /* 11c23c54 push 0x11c2545c */
  push32((uint32_t)(0x11c2545cu));
  /* 11c23c59 push esi */
  push32((uint32_t)(ESI));
  /* 11c23c5a push ebx */
  push32((uint32_t)(EBX));
  /* 11c23c5b call dword ptr [0x11c2500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2500c))), 0x11c23c61u);
  /* 11c23c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c23c63 je 0x11c23d37 */
  if (C.zf) goto L_11c23d37;
  /* 11c23c69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c23c6b pop eax */
  EAX = (pop32());
L_11c23c6c:;
  /* 11c23c6c mov dword ptr [0x11c267f4], eax */
  w32((uint32_t)(0x11c267f4), (EAX));
L_11c23c71:;
  /* 11c23c71 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23c74 jne 0x11c23c9a */
  if (!C.zf) goto L_11c23c9a;
  /* 11c23c76 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c23c79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23c7b jne 0x11c23c82 */
  if (!C.zf) goto L_11c23c82;
  /* 11c23c7d mov eax, dword ptr [0x11c267d8] */
  EAX = (r32((uint32_t)(0x11c267d8)));
L_11c23c82:;
  /* 11c23c82 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c23c85 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23c88 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23c8b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c23c8e push eax */
  push32((uint32_t)(EAX));
  /* 11c23c8f call dword ptr [0x11c2500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c2500c))), 0x11c23c95u);
  /* 11c23c95 jmp 0x11c23d39 */
  goto L_11c23d39;
L_11c23c9a:;
  /* 11c23c9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23c9d jne 0x11c23d37 */
  if (!C.zf) goto L_11c23d37;
  /* 11c23ca3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23ca6 jne 0x11c23cb0 */
  if (!C.zf) goto L_11c23cb0;
  /* 11c23ca8 mov eax, dword ptr [0x11c267e8] */
  EAX = (r32((uint32_t)(0x11c267e8)));
  /* 11c23cad mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11c23cb0:;
  /* 11c23cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23cb1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c23cb2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23cb5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23cb8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11c23cbb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c23cbd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23cbf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c23cc2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c23cc3 push eax */
  push32((uint32_t)(EAX));
  /* 11c23cc4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c23cc7 call dword ptr [0x11c25018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25018))), 0x11c23ccdu);
  /* 11c23ccd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c23cd0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23cd2 je 0x11c23d37 */
  if (C.zf) goto L_11c23d37;
  /* 11c23cd4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c23cd7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11c23cda mov eax, edi */
  EAX = (EDI);
  /* 11c23cdc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23cdf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c23ce1 call 0x11c24260 */
  push32(0x11c23ce6u); f_11c24260();
  /* 11c23ce6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c23ce9 mov esi, esp */
  ESI = (ESP);
  /* 11c23ceb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11c23cee push edi */
  push32((uint32_t)(EDI));
  /* 11c23cef push ebx */
  push32((uint32_t)(EBX));
  /* 11c23cf0 push esi */
  push32((uint32_t)(ESI));
  /* 11c23cf1 call 0x11c23940 */
  push32(0x11c23cf6u); f_11c23940();
  /* 11c23cf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23cf9 jmp 0x11c23d06 */
  goto L_11c23d06;
  /* 11c23cfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23cfd pop eax */
  EAX = (pop32());
  /* 11c23cfe ret  */
  ESPCHK(0x11c23c02u, _esp0);
  ESP += 4; return;
  /* 11c23cff mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c23d02 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c23d04 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c23d06:;
  /* 11c23d06 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c23d0a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23d0c je 0x11c23d37 */
  if (C.zf) goto L_11c23d37;
  /* 11c23d0e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c23d11 push esi */
  push32((uint32_t)(ESI));
  /* 11c23d12 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c23d15 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c23d18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c23d1a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c23d1d call dword ptr [0x11c25018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25018))), 0x11c23d23u);
  /* 11c23d23 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23d25 je 0x11c23d37 */
  if (C.zf) goto L_11c23d37;
  /* 11c23d27 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c23d2a push eax */
  push32((uint32_t)(EAX));
  /* 11c23d2b push esi */
  push32((uint32_t)(ESI));
  /* 11c23d2c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c23d2f call dword ptr [0x11c25008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c25008))), 0x11c23d35u);
  /* 11c23d35 jmp 0x11c23d39 */
  goto L_11c23d39;
L_11c23d37:;
  /* 11c23d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c23d39:;
  /* 11c23d39 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11c23d3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c23d3f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c23d46 pop edi */
  EDI = (pop32());
  /* 11c23d47 pop esi */
  ESI = (pop32());
  /* 11c23d48 pop ebx */
  EBX = (pop32());
  /* 11c23d49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23d4a ret  */
  ESPCHK(0x11c23c02u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d50 @ 0x11c23d50 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11c23d50(void) {
  FTRACE(0x11c23d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c23d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11c23d51 mov ebp, esp */
  EBP = (ESP);
  /* 11c23d53 push edi */
  push32((uint32_t)(EDI));
  /* 11c23d54 push esi */
  push32((uint32_t)(ESI));
  /* 11c23d55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c23d58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c23d5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23d5e mov eax, ecx */
  EAX = (ECX);
  /* 11c23d60 mov edx, ecx */
  EDX = (ECX);
  /* 11c23d62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23d64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23d66 jbe 0x11c23d70 */
  if ((C.cf||C.zf)) goto L_11c23d70;
  /* 11c23d68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23d6a jb 0x11c23ee8 */
  if (C.cf) goto L_11c23ee8;
L_11c23d70:;
  /* 11c23d70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c23d76 jne 0x11c23d8c */
  if (!C.zf) goto L_11c23d8c;
  /* 11c23d78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23d7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c23d7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23d81 jb 0x11c23dac */
  if (C.cf) goto L_11c23dac;
  /* 11c23d83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23d85 jmp dword ptr [edx*4 + 0x11c23e98] */
  switch (EDX) {
    case 0: goto L_11c23ea8;
    case 1: goto L_11c23eb0;
    case 2: goto L_11c23ebc;
    case 3: goto L_11c23ed0;
    default: x86_unimpl("switch@0x11c23d85 out of table"); return;
  }
L_11c23d8c:;
  /* 11c23d8c mov eax, edi */
  EAX = (EDI);
  /* 11c23d8e mov edx, 3 */
  EDX = (0x3u);
  /* 11c23d93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23d96 jb 0x11c23da4 */
  if (C.cf) goto L_11c23da4;
  /* 11c23d98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c23d9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23d9d jmp dword ptr [eax*4 + 0x11c23db0] */
  switch (EAX) {
    case 1: goto L_11c23dc0;
    case 2: goto L_11c23dec;
    case 3: goto L_11c23e10;
    default: x86_unimpl("switch@0x11c23d9d out of table"); return;
  }
L_11c23da4:;
  /* 11c23da4 jmp dword ptr [ecx*4 + 0x11c23ea8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c23ea8)))); return;
  /* 11c23dab nop  */
  /* nop */
L_11c23dac:;
  /* 11c23dac jmp dword ptr [ecx*4 + 0x11c23e2c] */
  switch (ECX) {
    case 0: goto L_11c23e8f;
    case 1: goto L_11c23e7c;
    case 2: goto L_11c23e74;
    case 3: goto L_11c23e6c;
    case 4: goto L_11c23e64;
    case 5: goto L_11c23e5c;
    case 6: goto L_11c23e54;
    case 7: goto L_11c23e4c;
    default: x86_unimpl("switch@0x11c23dac out of table"); return;
  }
  /* 11c23db3 nop  */
  /* nop */
L_11c23dc0:;
  /* 11c23dc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c23dc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23dc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23dc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c23dc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c23dcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c23dcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23dd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c23dd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23dd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23ddb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23dde jb 0x11c23dac */
  if (C.cf) goto L_11c23dac;
  /* 11c23de0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23de2 jmp dword ptr [edx*4 + 0x11c23e98] */
  switch (EDX) {
    case 0: goto L_11c23ea8;
    case 1: goto L_11c23eb0;
    case 2: goto L_11c23ebc;
    case 3: goto L_11c23ed0;
    default: x86_unimpl("switch@0x11c23de2 out of table"); return;
  }
  /* 11c23de9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c23dec:;
  /* 11c23dec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c23dee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23df0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23df2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c23df5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23df8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c23dfb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23dfe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23e01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23e04 jb 0x11c23dac */
  if (C.cf) goto L_11c23dac;
  /* 11c23e06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23e08 jmp dword ptr [edx*4 + 0x11c23e98] */
  switch (EDX) {
    case 0: goto L_11c23ea8;
    case 1: goto L_11c23eb0;
    case 2: goto L_11c23ebc;
    case 3: goto L_11c23ed0;
    default: x86_unimpl("switch@0x11c23e08 out of table"); return;
  }
  /* 11c23e0f nop  */
  /* nop */
L_11c23e10:;
  /* 11c23e10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c23e12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23e14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23e16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c23e17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23e1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c23e1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23e1e jb 0x11c23dac */
  if (C.cf) goto L_11c23dac;
  /* 11c23e20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23e22 jmp dword ptr [edx*4 + 0x11c23e98] */
  switch (EDX) {
    case 0: goto L_11c23ea8;
    case 1: goto L_11c23eb0;
    case 2: goto L_11c23ebc;
    case 3: goto L_11c23ed0;
    default: x86_unimpl("switch@0x11c23e22 out of table"); return;
  }
  /* 11c23e29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c23e4c:;
  /* 11c23e4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c23e50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c23e54:;
  /* 11c23e54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c23e58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c23e5c:;
  /* 11c23e5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c23e60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c23e64:;
  /* 11c23e64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c23e68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c23e6c:;
  /* 11c23e6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c23e70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c23e74:;
  /* 11c23e74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c23e78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c23e7c:;
  /* 11c23e7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c23e80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c23e84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c23e8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c23e8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c23e8f:;
  /* 11c23e8f jmp dword ptr [edx*4 + 0x11c23e98] */
  switch (EDX) {
    case 0: goto L_11c23ea8;
    case 1: goto L_11c23eb0;
    case 2: goto L_11c23ebc;
    case 3: goto L_11c23ed0;
    default: x86_unimpl("switch@0x11c23e8f out of table"); return;
  }
  /* 11c23e96 mov edi, edi */
  EDI = (EDI);
L_11c23ea8:;
  /* 11c23ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23eab pop esi */
  ESI = (pop32());
  /* 11c23eac pop edi */
  EDI = (pop32());
  /* 11c23ead leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23eae ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c23eaf nop  */
  /* nop */
L_11c23eb0:;
  /* 11c23eb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23eb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23eb7 pop esi */
  ESI = (pop32());
  /* 11c23eb8 pop edi */
  EDI = (pop32());
  /* 11c23eb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23eba ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c23ebb nop  */
  /* nop */
L_11c23ebc:;
  /* 11c23ebc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23ebe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23ec0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c23ec3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c23ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23ec9 pop esi */
  ESI = (pop32());
  /* 11c23eca pop edi */
  EDI = (pop32());
  /* 11c23ecb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23ecc ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c23ecd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c23ed0:;
  /* 11c23ed0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c23ed2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c23ed4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c23ed7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c23eda mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c23edd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c23ee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c23ee3 pop esi */
  ESI = (pop32());
  /* 11c23ee4 pop edi */
  EDI = (pop32());
  /* 11c23ee5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c23ee6 ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c23ee7 nop  */
  /* nop */
L_11c23ee8:;
  /* 11c23ee8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c23eec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c23ef0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c23ef6 jne 0x11c23f1c */
  if (!C.zf) goto L_11c23f1c;
  /* 11c23ef8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23efb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c23efe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23f01 jb 0x11c23f10 */
  if (C.cf) goto L_11c23f10;
  /* 11c23f03 std  */
  C.df=1;
  /* 11c23f04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23f06 cld  */
  C.df=0;
  /* 11c23f07 jmp dword ptr [edx*4 + 0x11c24030] */
  switch (EDX) {
    case 0: goto L_11c24040;
    case 1: goto L_11c24048;
    case 2: goto L_11c24058;
    case 3: goto L_11c2406c;
    default: x86_unimpl("switch@0x11c23f07 out of table"); return;
  }
  /* 11c23f0e mov edi, edi */
  EDI = (EDI);
L_11c23f10:;
  /* 11c23f10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c23f12 jmp dword ptr [ecx*4 + 0x11c23fe0] */
  switch (ECX) {
    case 0: goto L_11c24027;
    default: x86_unimpl("switch@0x11c23f12 out of table"); return;
  }
  /* 11c23f19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c23f1c:;
  /* 11c23f1c mov eax, edi */
  EAX = (EDI);
  /* 11c23f1e mov edx, 3 */
  EDX = (0x3u);
  /* 11c23f23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23f26 jb 0x11c23f34 */
  if (C.cf) goto L_11c23f34;
  /* 11c23f28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c23f2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23f2d jmp dword ptr [eax*4 + 0x11c23f38] */
  switch (EAX) {
    case 1: goto L_11c23f48;
    case 2: goto L_11c23f68;
    case 3: goto L_11c23f90;
    default: x86_unimpl("switch@0x11c23f2d out of table"); return;
  }
L_11c23f34:;
  /* 11c23f34 jmp dword ptr [ecx*4 + 0x11c24030] */
  switch (ECX) {
    case 0: goto L_11c24040;
    case 1: goto L_11c24048;
    case 2: goto L_11c24058;
    case 3: goto L_11c2406c;
    default: x86_unimpl("switch@0x11c23f34 out of table"); return;
  }
  /* 11c23f3b nop  */
  /* nop */
L_11c23f48:;
  /* 11c23f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c23f4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c23f4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c23f50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c23f51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23f54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c23f55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23f58 jb 0x11c23f10 */
  if (C.cf) goto L_11c23f10;
  /* 11c23f5a std  */
  C.df=1;
  /* 11c23f5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23f5d cld  */
  C.df=0;
  /* 11c23f5e jmp dword ptr [edx*4 + 0x11c24030] */
  switch (EDX) {
    case 0: goto L_11c24040;
    case 1: goto L_11c24048;
    case 2: goto L_11c24058;
    case 3: goto L_11c2406c;
    default: x86_unimpl("switch@0x11c23f5e out of table"); return;
  }
  /* 11c23f65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c23f68:;
  /* 11c23f68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c23f6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c23f6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c23f70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c23f73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23f76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c23f79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23f7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23f7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23f82 jb 0x11c23f10 */
  if (C.cf) goto L_11c23f10;
  /* 11c23f84 std  */
  C.df=1;
  /* 11c23f85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23f87 cld  */
  C.df=0;
  /* 11c23f88 jmp dword ptr [edx*4 + 0x11c24030] */
  switch (EDX) {
    case 0: goto L_11c24040;
    case 1: goto L_11c24048;
    case 2: goto L_11c24058;
    case 3: goto L_11c2406c;
    default: x86_unimpl("switch@0x11c23f88 out of table"); return;
  }
  /* 11c23f8f nop  */
  /* nop */
L_11c23f90:;
  /* 11c23f90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c23f93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c23f95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c23f98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c23f9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c23f9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c23fa1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c23fa4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c23fa7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23faa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c23fad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c23fb0 jb 0x11c23f10 */
  if (C.cf) goto L_11c23f10;
  /* 11c23fb6 std  */
  C.df=1;
  /* 11c23fb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c23fb9 cld  */
  C.df=0;
  /* 11c23fba jmp dword ptr [edx*4 + 0x11c24030] */
  switch (EDX) {
    case 0: goto L_11c24040;
    case 1: goto L_11c24048;
    case 2: goto L_11c24058;
    case 3: goto L_11c2406c;
    default: x86_unimpl("switch@0x11c23fba out of table"); return;
  }
  /* 11c23fc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c23fc4 in al, 0x3f */
  x86_unimpl("in @ 0x11c23fc4");
  /* 11c23fc6 ret 0xec11 */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 60437; return;
  /* 11c23fc9 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11c23fca ret 0xf411 */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 62485; return;
  /* 11c23fcd aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11c23fce ret 0xfc11 */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 64533; return;
  /* 11c23fd1 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11c23fd2 ret 0x411 */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 1045; return;
  /* 11c23fd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c23fd6 ret 0xc11 */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 3093; return;
  /* 11c23fd9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c23fda ret 0x1411 */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 5141; return;
  /* 11c23fdd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c23fe4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c23fe8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c23fec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c23ff0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c23ff4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c23ff8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c23ffc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c24000 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c24004 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c24008 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c2400c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c24010 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c24014 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c24018 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c2401c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c24023 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c24025 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c24027:;
  /* 11c24027 jmp dword ptr [edx*4 + 0x11c24030] */
  switch (EDX) {
    case 0: goto L_11c24040;
    case 1: goto L_11c24048;
    case 2: goto L_11c24058;
    case 3: goto L_11c2406c;
    default: x86_unimpl("switch@0x11c24027 out of table"); return;
  }
  /* 11c2402e mov edi, edi */
  EDI = (EDI);
L_11c24040:;
  /* 11c24040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c24043 pop esi */
  ESI = (pop32());
  /* 11c24044 pop edi */
  EDI = (pop32());
  /* 11c24045 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c24046 ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c24047 nop  */
  /* nop */
L_11c24048:;
  /* 11c24048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c2404b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c2404e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c24051 pop esi */
  ESI = (pop32());
  /* 11c24052 pop edi */
  EDI = (pop32());
  /* 11c24053 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c24054 ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c24055 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c24058:;
  /* 11c24058 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c2405b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c2405e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c24061 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c24064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c24067 pop esi */
  ESI = (pop32());
  /* 11c24068 pop edi */
  EDI = (pop32());
  /* 11c24069 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c2406a ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
  /* 11c2406b nop  */
  /* nop */
L_11c2406c:;
  /* 11c2406c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c2406f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c24072 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c24075 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c24078 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c2407b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c2407e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c24081 pop esi */
  ESI = (pop32());
  /* 11c24082 pop edi */
  EDI = (pop32());
  /* 11c24083 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c24084 ret  */
  ESPCHK(0x11c23d50u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11c24088 (32 bytes, 18 insns) */
void f_11c24088(void) {
  FTRACE(0x11c24088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c24088 push ebp */
  push32((uint32_t)(EBP));
  /* 11c24089 mov ebp, esp */
  EBP = (ESP);
  /* 11c2408b push ebx */
  push32((uint32_t)(EBX));
  /* 11c2408c push esi */
  push32((uint32_t)(ESI));
  /* 11c2408d push edi */
  push32((uint32_t)(EDI));
  /* 11c2408e push ebp */
  push32((uint32_t)(EBP));
  /* 11c2408f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c24091 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c24093 push 0x11c240a0 */
  push32((uint32_t)(0x11c240a0u));
  /* 11c24098 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c2409b call 0x11c24290 */
  push32(0x11c240a0u); f_11c24290();
  /* 11c240a0 pop ebp */
  EBP = (pop32());
  /* 11c240a1 pop edi */
  EDI = (pop32());
  /* 11c240a2 pop esi */
  ESI = (pop32());
  /* 11c240a3 pop ebx */
  EBX = (pop32());
  /* 11c240a4 mov esp, ebp */
  ESP = (EBP);
  /* 11c240a6 pop ebp */
  EBP = (pop32());
  /* 11c240a7 ret  */
  ESPCHK(0x11c24088u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11c240ca (104 bytes, 33 insns) */
void f_11c240ca(void) {
  FTRACE(0x11c240cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c240ca push ebx */
  push32((uint32_t)(EBX));
  /* 11c240cb push esi */
  push32((uint32_t)(ESI));
  /* 11c240cc push edi */
  push32((uint32_t)(EDI));
  /* 11c240cd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c240d1 push eax */
  push32((uint32_t)(EAX));
  /* 11c240d2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11c240d4 push 0x11c240a8 */
  push32((uint32_t)(0x11c240a8u));
  /* 11c240d9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11c240e0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11c240e7:;
  /* 11c240e7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c240eb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c240ee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11c240f1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c240f4 je 0x11c24124 */
  if (C.zf) goto L_11c24124;
  /* 11c240f6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c240fa je 0x11c24124 */
  if (C.zf) goto L_11c24124;
  /* 11c240fc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11c240ff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11c24102 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11c24106 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11c24109 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2410e jne 0x11c24122 */
  if (!C.zf) goto L_11c24122;
  /* 11c24110 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11c24115 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11c24119 call 0x11c2415e */
  push32(0x11c2411eu); f_11c2415e();
  /* 11c2411e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11c24122u);
L_11c24122:;
  /* 11c24122 jmp 0x11c240e7 */
  goto L_11c240e7;
L_11c24124:;
  /* 11c24124 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11c2412b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c2412e pop edi */
  EDI = (pop32());
  /* 11c2412f pop esi */
  ESI = (pop32());
  /* 11c24130 pop ebx */
  EBX = (pop32());
  /* 11c24131 ret  */
  ESPCHK(0x11c240cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000415e @ 0x11c2415e (24 bytes, 10 insns) */
void f_11c2415e(void) {
  FTRACE(0x11c2415eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2415e push ebx */
  push32((uint32_t)(EBX));
  /* 11c2415f push ecx */
  push32((uint32_t)(ECX));
  /* 11c24160 mov ebx, 0x11c26500 */
  EBX = (0x11c26500u);
  /* 11c24165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c24168 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c2416b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11c2416e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11c24171 pop ecx */
  ECX = (pop32());
  /* 11c24172 pop ebx */
  EBX = (pop32());
  /* 11c24173 ret 4 */
  ESPCHK(0x11c2415eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000423d @ 0x11c2423d (27 bytes, 11 insns) */
void f_11c2423d(void) {
  FTRACE(0x11c2423du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c2423d push ebp */
  push32((uint32_t)(EBP));
  /* 11c2423e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c24242 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11c24244 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c24247 push eax */
  push32((uint32_t)(EAX));
  /* 11c24248 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11c2424b push eax */
  push32((uint32_t)(EAX));
  /* 11c2424c call 0x11c240ca */
  push32(0x11c24251u); f_11c240ca();
  /* 11c24251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c24254 pop ebp */
  EBP = (pop32());
  /* 11c24255 ret 4 */
  ESPCHK(0x11c2423du, _esp0);
  ESP += 8; return;
}

/* FUN_10004260 @ 0x11c24260 (47 bytes, 17 insns) */
void f_11c24260(void) {
  FTRACE(0x11c24260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c24260 push ecx */
  push32((uint32_t)(ECX));
  /* 11c24261 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c24266 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11c2426a jb 0x11c24280 */
  if (C.cf) goto L_11c24280;
L_11c2426c:;
  /* 11c2426c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c24272 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c24277 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c24279 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c2427e jae 0x11c2426c */
  if (!C.cf) goto L_11c2426c;
L_11c24280:;
  /* 11c24280 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c24282 mov eax, esp */
  EAX = (ESP);
  /* 11c24284 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c24286 mov esp, ecx */
  ESP = (ECX);
  /* 11c24288 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c2428a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c2428d push eax */
  push32((uint32_t)(EAX));
  /* 11c2428e ret  */
  ESPCHK(0x11c24260u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11c24290 (6 bytes, 1 insns) */
void f_11c24290(void) {
  FTRACE(0x11c24290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c24290 jmp dword ptr [0x11c25004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c25004)))); return;
}

