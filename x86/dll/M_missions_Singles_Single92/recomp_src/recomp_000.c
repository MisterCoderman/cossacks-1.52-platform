#include "recomp.h"

/* FUN_10001000 @ 0x11f81000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11f81000(void) {
  FTRACE(0x11f81000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81002 call dword ptr [0x11f85120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85120))), 0x11f81008u);
  /* 11f81008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8100e ja 0x11f8102f */
  if ((!C.cf&&!C.zf)) goto L_11f8102f;
  /* 11f81010 jmp dword ptr [eax*4 + 0x11f81038] */
  switch (EAX) {
    case 0: goto L_11f81017;
    case 1: goto L_11f8101d;
    case 2: goto L_11f81023;
    case 3: goto L_11f81029;
    default: x86_unimpl("switch@0x11f81010 out of table"); return;
  }
L_11f81017:;
  /* 11f81017 mov eax, 0x3d090 */
  EAX = (0x3d090u);
  /* 11f8101c ret  */
  ESPCHK(0x11f81000u, _esp0);
  ESP += 4; return;
L_11f8101d:;
  /* 11f8101d mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 11f81022 ret  */
  ESPCHK(0x11f81000u, _esp0);
  ESP += 4; return;
L_11f81023:;
  /* 11f81023 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11f81028 ret  */
  ESPCHK(0x11f81000u, _esp0);
  ESP += 4; return;
L_11f81029:;
  /* 11f81029 mov eax, 0x1b58 */
  EAX = (0x1b58u);
  /* 11f8102e ret  */
  ESPCHK(0x11f81000u, _esp0);
  ESP += 4; return;
L_11f8102f:;
  /* 11f8102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11f81034 ret  */
  ESPCHK(0x11f81000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11f81050 (326 bytes, 87 insns) */
void f_11f81050(void) {
  FTRACE(0x11f81050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81050 push esi */
  push32((uint32_t)(ESI));
  /* 11f81051 mov esi, dword ptr [0x11f85104] */
  ESI = (r32((uint32_t)(0x11f85104)));
  /* 11f81057 push edi */
  push32((uint32_t)(EDI));
  /* 11f81058 push 0x11f860a8 */
  push32((uint32_t)(0x11f860a8u));
  /* 11f8105d push 0x11f86418 */
  push32((uint32_t)(0x11f86418u));
  /* 11f81062 call esi */
  call_ind((uint32_t)(ESI), 0x11f81064u);
  /* 11f81064 push 0x11f860a4 */
  push32((uint32_t)(0x11f860a4u));
  /* 11f81069 push 0x11f86430 */
  push32((uint32_t)(0x11f86430u));
  /* 11f8106e call esi */
  call_ind((uint32_t)(ESI), 0x11f81070u);
  /* 11f81070 mov esi, dword ptr [0x11f85108] */
  ESI = (r32((uint32_t)(0x11f85108)));
  /* 11f81076 push 0x11f860a0 */
  push32((uint32_t)(0x11f860a0u));
  /* 11f8107b push 0x11f86460 */
  push32((uint32_t)(0x11f86460u));
  /* 11f81080 call esi */
  call_ind((uint32_t)(ESI), 0x11f81082u);
  /* 11f81082 push 0x11f8609c */
  push32((uint32_t)(0x11f8609cu));
  /* 11f81087 push 0x11f86468 */
  push32((uint32_t)(0x11f86468u));
  /* 11f8108c call esi */
  call_ind((uint32_t)(ESI), 0x11f8108eu);
  /* 11f8108e push 0x11f86098 */
  push32((uint32_t)(0x11f86098u));
  /* 11f81093 push 0x11f86470 */
  push32((uint32_t)(0x11f86470u));
  /* 11f81098 call esi */
  call_ind((uint32_t)(ESI), 0x11f8109au);
  /* 11f8109a push 0x11f86094 */
  push32((uint32_t)(0x11f86094u));
  /* 11f8109f push 0x11f86478 */
  push32((uint32_t)(0x11f86478u));
  /* 11f810a4 call esi */
  call_ind((uint32_t)(ESI), 0x11f810a6u);
  /* 11f810a6 push 0x11f86090 */
  push32((uint32_t)(0x11f86090u));
  /* 11f810ab push 0x11f86480 */
  push32((uint32_t)(0x11f86480u));
  /* 11f810b0 call esi */
  call_ind((uint32_t)(ESI), 0x11f810b2u);
  /* 11f810b2 push 0x11f8608c */
  push32((uint32_t)(0x11f8608cu));
  /* 11f810b7 push 0x11f86488 */
  push32((uint32_t)(0x11f86488u));
  /* 11f810bc call esi */
  call_ind((uint32_t)(ESI), 0x11f810beu);
  /* 11f810be add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f810c1 push 0x11f86088 */
  push32((uint32_t)(0x11f86088u));
  /* 11f810c6 push 0x11f86490 */
  push32((uint32_t)(0x11f86490u));
  /* 11f810cb call esi */
  call_ind((uint32_t)(ESI), 0x11f810cdu);
  /* 11f810cd push 0x11f86080 */
  push32((uint32_t)(0x11f86080u));
  /* 11f810d2 push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f810d7 call esi */
  call_ind((uint32_t)(ESI), 0x11f810d9u);
  /* 11f810d9 push 0x11f8607c */
  push32((uint32_t)(0x11f8607cu));
  /* 11f810de push 0x11f86498 */
  push32((uint32_t)(0x11f86498u));
  /* 11f810e3 call esi */
  call_ind((uint32_t)(ESI), 0x11f810e5u);
  /* 11f810e5 mov esi, dword ptr [0x11f8510c] */
  ESI = (r32((uint32_t)(0x11f8510c)));
  /* 11f810eb push 0x11f86070 */
  push32((uint32_t)(0x11f86070u));
  /* 11f810f0 push 0x11f86428 */
  push32((uint32_t)(0x11f86428u));
  /* 11f810f5 call esi */
  call_ind((uint32_t)(ESI), 0x11f810f7u);
  /* 11f810f7 push 0x11f86060 */
  push32((uint32_t)(0x11f86060u));
  /* 11f810fc push 0x11f86458 */
  push32((uint32_t)(0x11f86458u));
  /* 11f81101 call esi */
  call_ind((uint32_t)(ESI), 0x11f81103u);
  /* 11f81103 push 0x11f86054 */
  push32((uint32_t)(0x11f86054u));
  /* 11f81108 push 0x11f86400 */
  push32((uint32_t)(0x11f86400u));
  /* 11f8110d call esi */
  call_ind((uint32_t)(ESI), 0x11f8110fu);
  /* 11f8110f push 0x11f86048 */
  push32((uint32_t)(0x11f86048u));
  /* 11f81114 push 0x11f86450 */
  push32((uint32_t)(0x11f86450u));
  /* 11f81119 call esi */
  call_ind((uint32_t)(ESI), 0x11f8111bu);
  /* 11f8111b mov esi, dword ptr [0x11f85110] */
  ESI = (r32((uint32_t)(0x11f85110)));
  /* 11f81121 push 0x11f86040 */
  push32((uint32_t)(0x11f86040u));
  /* 11f81126 push 0x11f86410 */
  push32((uint32_t)(0x11f86410u));
  /* 11f8112b call esi */
  call_ind((uint32_t)(ESI), 0x11f8112du);
  /* 11f8112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81130 push 0x11f86038 */
  push32((uint32_t)(0x11f86038u));
  /* 11f81135 push 0x11f86408 */
  push32((uint32_t)(0x11f86408u));
  /* 11f8113a call esi */
  call_ind((uint32_t)(ESI), 0x11f8113cu);
  /* 11f8113c mov esi, dword ptr [0x11f85114] */
  ESI = (r32((uint32_t)(0x11f85114)));
  /* 11f81142 push 0x11f86030 */
  push32((uint32_t)(0x11f86030u));
  /* 11f81147 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81149 call esi */
  call_ind((uint32_t)(ESI), 0x11f8114bu);
  /* 11f8114b push 0x11f86030 */
  push32((uint32_t)(0x11f86030u));
  /* 11f81150 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81152 call esi */
  call_ind((uint32_t)(ESI), 0x11f81154u);
  /* 11f81154 mov esi, dword ptr [0x11f85118] */
  ESI = (r32((uint32_t)(0x11f85118)));
  /* 11f8115a push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f8115f call esi */
  call_ind((uint32_t)(ESI), 0x11f81161u);
  /* 11f81161 mov edi, dword ptr [0x11f8511c] */
  EDI = (r32((uint32_t)(0x11f8511c)));
  /* 11f81167 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f81169 push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f8116e call edi */
  call_ind((uint32_t)(EDI), 0x11f81170u);
  /* 11f81170 push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f81175 call esi */
  call_ind((uint32_t)(ESI), 0x11f81177u);
  /* 11f81177 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f81179 push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f8117e call edi */
  call_ind((uint32_t)(EDI), 0x11f81180u);
  /* 11f81180 push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f81185 call esi */
  call_ind((uint32_t)(ESI), 0x11f81187u);
  /* 11f81187 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f81189 push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f8118e call edi */
  call_ind((uint32_t)(EDI), 0x11f81190u);
  /* 11f81190 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81193 pop edi */
  EDI = (pop32());
  /* 11f81194 pop esi */
  ESI = (pop32());
  /* 11f81195 ret  */
  ESPCHK(0x11f81050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11f811a0 (1930 bytes, 641 insns) */
void f_11f811a0(void) {
  FTRACE(0x11f811a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f811a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f811a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11f811a2 push esi */
  push32((uint32_t)(ESI));
  /* 11f811a3 push edi */
  push32((uint32_t)(EDI));
  /* 11f811a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f811a6 call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f811acu);
  /* 11f811ac mov edi, dword ptr [0x11f850b4] */
  EDI = (r32((uint32_t)(0x11f850b4)));
  /* 11f811b2 mov ebx, dword ptr [0x11f850b8] */
  EBX = (r32((uint32_t)(0x11f850b8)));
  /* 11f811b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f811bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f811bd je 0x11f81476 */
  if (C.zf) goto L_11f81476;
  /* 11f811c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f811c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f811c7 call edi */
  call_ind((uint32_t)(EDI), 0x11f811c9u);
  /* 11f811c9 mov esi, dword ptr [0x11f850bc] */
  ESI = (r32((uint32_t)(0x11f850bc)));
  /* 11f811cf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f811d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f811d6 call esi */
  call_ind((uint32_t)(ESI), 0x11f811d8u);
  /* 11f811d8 call 0x11f81000 */
  push32(0x11f811ddu); f_11f81000();
  /* 11f811dd add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f811e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f811e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f811e5 call esi */
  call_ind((uint32_t)(ESI), 0x11f811e7u);
  /* 11f811e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f811e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f811eb call edi */
  call_ind((uint32_t)(EDI), 0x11f811edu);
  /* 11f811ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11f811ef push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f811f1 call edi */
  call_ind((uint32_t)(EDI), 0x11f811f3u);
  /* 11f811f3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f811f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f811fa call esi */
  call_ind((uint32_t)(ESI), 0x11f811fcu);
  /* 11f811fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f811fe push 0x11f86428 */
  push32((uint32_t)(0x11f86428u));
  /* 11f81203 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81205 call dword ptr [0x11f850c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850c0))), 0x11f8120bu);
  /* 11f8120b mov esi, dword ptr [0x11f850c4] */
  ESI = (r32((uint32_t)(0x11f850c4)));
  /* 11f81211 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11f81213 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81215 call esi */
  call_ind((uint32_t)(ESI), 0x11f81217u);
  /* 11f81217 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8121a push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11f8121c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8121e call esi */
  call_ind((uint32_t)(ESI), 0x11f81220u);
  /* 11f81220 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f81222 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81224 call esi */
  call_ind((uint32_t)(ESI), 0x11f81226u);
  /* 11f81226 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f81228 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f8122a call esi */
  call_ind((uint32_t)(ESI), 0x11f8122cu);
  /* 11f8122c mov esi, dword ptr [0x11f850c8] */
  ESI = (r32((uint32_t)(0x11f850c8)));
  /* 11f81232 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81237 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f81239 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8123b call esi */
  call_ind((uint32_t)(ESI), 0x11f8123du);
  /* 11f8123d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81242 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81244 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81246 call esi */
  call_ind((uint32_t)(ESI), 0x11f81248u);
  /* 11f81248 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f8124d push 4 */
  push32((uint32_t)(0x4u));
  /* 11f8124f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81251 call esi */
  call_ind((uint32_t)(ESI), 0x11f81253u);
  /* 11f81253 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f81258 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f8125a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8125c call esi */
  call_ind((uint32_t)(ESI), 0x11f8125eu);
  /* 11f8125e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81261 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81266 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81268 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8126a call esi */
  call_ind((uint32_t)(ESI), 0x11f8126cu);
  /* 11f8126c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81271 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81275 call esi */
  call_ind((uint32_t)(ESI), 0x11f81277u);
  /* 11f81277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81279 call dword ptr [0x11f85120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85120))), 0x11f8127fu);
  /* 11f8127f mov ebp, dword ptr [0x11f850cc] */
  EBP = (r32((uint32_t)(0x11f850cc)));
  /* 11f81285 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8128a jne 0x11f812e5 */
  if (!C.zf) goto L_11f812e5;
  /* 11f8128c push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11f81291 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f81293 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81295 call esi */
  call_ind((uint32_t)(ESI), 0x11f81297u);
  /* 11f81297 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11f8129c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8129e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812a0 call esi */
  call_ind((uint32_t)(ESI), 0x11f812a2u);
  /* 11f812a2 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11f812a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f812a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812ab call esi */
  call_ind((uint32_t)(ESI), 0x11f812adu);
  /* 11f812ad push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11f812b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f812b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812b6 call esi */
  call_ind((uint32_t)(ESI), 0x11f812b8u);
  /* 11f812b8 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11f812bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812c1 call esi */
  call_ind((uint32_t)(ESI), 0x11f812c3u);
  /* 11f812c3 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 11f812c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f812ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812cc call esi */
  call_ind((uint32_t)(ESI), 0x11f812ceu);
  /* 11f812ce add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f812d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f812d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f812d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f812d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f812d9 push 0x11f860c8 */
  push32((uint32_t)(0x11f860c8u));
  /* 11f812de push 1 */
  push32((uint32_t)(0x1u));
  /* 11f812e0 call ebp */
  call_ind((uint32_t)(EBP), 0x11f812e2u);
  /* 11f812e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f812e5:;
  /* 11f812e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812e7 call dword ptr [0x11f85120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85120))), 0x11f812edu);
  /* 11f812ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f812f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f812f3 jne 0x11f8134e */
  if (!C.zf) goto L_11f8134e;
  /* 11f812f5 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f812fa push 3 */
  push32((uint32_t)(0x3u));
  /* 11f812fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f812fe call esi */
  call_ind((uint32_t)(ESI), 0x11f81300u);
  /* 11f81300 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f81305 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81307 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81309 call esi */
  call_ind((uint32_t)(ESI), 0x11f8130bu);
  /* 11f8130b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f81310 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f81312 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81314 call esi */
  call_ind((uint32_t)(ESI), 0x11f81316u);
  /* 11f81316 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f8131b push 5 */
  push32((uint32_t)(0x5u));
  /* 11f8131d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8131f call esi */
  call_ind((uint32_t)(ESI), 0x11f81321u);
  /* 11f81321 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f81326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81328 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8132a call esi */
  call_ind((uint32_t)(ESI), 0x11f8132cu);
  /* 11f8132c push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f81331 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81333 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81335 call esi */
  call_ind((uint32_t)(ESI), 0x11f81337u);
  /* 11f81337 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8133a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8133c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8133e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81340 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81342 push 0x11f860c8 */
  push32((uint32_t)(0x11f860c8u));
  /* 11f81347 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81349 call ebp */
  call_ind((uint32_t)(EBP), 0x11f8134bu);
  /* 11f8134b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8134e:;
  /* 11f8134e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81350 call dword ptr [0x11f85120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85120))), 0x11f81356u);
  /* 11f81356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81359 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8135c jne 0x11f813b7 */
  if (!C.zf) goto L_11f813b7;
  /* 11f8135e push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f81363 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f81365 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81367 call esi */
  call_ind((uint32_t)(ESI), 0x11f81369u);
  /* 11f81369 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f8136e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81370 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81372 call esi */
  call_ind((uint32_t)(ESI), 0x11f81374u);
  /* 11f81374 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f81379 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f8137b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8137d call esi */
  call_ind((uint32_t)(ESI), 0x11f8137fu);
  /* 11f8137f push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f81384 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f81386 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81388 call esi */
  call_ind((uint32_t)(ESI), 0x11f8138au);
  /* 11f8138a push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f8138f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81391 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81393 call esi */
  call_ind((uint32_t)(ESI), 0x11f81395u);
  /* 11f81395 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f8139a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8139c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8139e call esi */
  call_ind((uint32_t)(ESI), 0x11f813a0u);
  /* 11f813a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f813a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f813a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f813a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f813a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f813ab push 0x11f860c8 */
  push32((uint32_t)(0x11f860c8u));
  /* 11f813b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f813b2 call ebp */
  call_ind((uint32_t)(EBP), 0x11f813b4u);
  /* 11f813b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f813b7:;
  /* 11f813b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813b9 call dword ptr [0x11f85120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85120))), 0x11f813bfu);
  /* 11f813bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f813c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f813c5 jne 0x11f8141f */
  if (!C.zf) goto L_11f8141f;
  /* 11f813c7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f813cc push eax */
  push32((uint32_t)(EAX));
  /* 11f813cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813cf call esi */
  call_ind((uint32_t)(ESI), 0x11f813d1u);
  /* 11f813d1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f813d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f813d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813da call esi */
  call_ind((uint32_t)(ESI), 0x11f813dcu);
  /* 11f813dc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f813e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f813e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813e5 call esi */
  call_ind((uint32_t)(ESI), 0x11f813e7u);
  /* 11f813e7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f813ec push 5 */
  push32((uint32_t)(0x5u));
  /* 11f813ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813f0 call esi */
  call_ind((uint32_t)(ESI), 0x11f813f2u);
  /* 11f813f2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f813f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f813fb call esi */
  call_ind((uint32_t)(ESI), 0x11f813fdu);
  /* 11f813fd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81402 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81406 call esi */
  call_ind((uint32_t)(ESI), 0x11f81408u);
  /* 11f81408 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8140b push 3 */
  push32((uint32_t)(0x3u));
  /* 11f8140d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8140f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81411 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81413 push 0x11f860c8 */
  push32((uint32_t)(0x11f860c8u));
  /* 11f81418 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8141a call ebp */
  call_ind((uint32_t)(EBP), 0x11f8141cu);
  /* 11f8141c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8141f:;
  /* 11f8141f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81421 push 6 */
  push32((uint32_t)(0x6u));
  /* 11f81423 call edi */
  call_ind((uint32_t)(EDI), 0x11f81425u);
  /* 11f81425 mov esi, dword ptr [0x11f850d0] */
  ESI = (r32((uint32_t)(0x11f850d0)));
  /* 11f8142b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8142d push 0x11f86430 */
  push32((uint32_t)(0x11f86430u));
  /* 11f81432 call esi */
  call_ind((uint32_t)(ESI), 0x11f81434u);
  /* 11f81434 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81436 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f8143b push 0x11f86488 */
  push32((uint32_t)(0x11f86488u));
  /* 11f81440 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81442 call ebx */
  call_ind((uint32_t)(EBX), 0x11f81444u);
  /* 11f81444 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81446 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f8144b push 0x11f86480 */
  push32((uint32_t)(0x11f86480u));
  /* 11f81450 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81452 call ebx */
  call_ind((uint32_t)(EBX), 0x11f81454u);
  /* 11f81454 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81456 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f8145b push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f81460 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81462 call ebx */
  call_ind((uint32_t)(EBX), 0x11f81464u);
  /* 11f81464 mov ebp, dword ptr [0x11f850d4] */
  EBP = (r32((uint32_t)(0x11f850d4)));
  /* 11f8146a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8146d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8146f call ebp */
  call_ind((uint32_t)(EBP), 0x11f81471u);
  /* 11f81471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81474 jmp 0x11f81482 */
  goto L_11f81482;
L_11f81476:;
  /* 11f81476 mov esi, dword ptr [0x11f850d0] */
  ESI = (r32((uint32_t)(0x11f850d0)));
  /* 11f8147c mov ebp, dword ptr [0x11f850d4] */
  EBP = (r32((uint32_t)(0x11f850d4)));
L_11f81482:;
  /* 11f81482 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81484 call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f8148au);
  /* 11f8148a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8148d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f8148f je 0x11f814ba */
  if (C.zf) goto L_11f814ba;
  /* 11f81491 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81493 call dword ptr [0x11f850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850d8))), 0x11f81499u);
  /* 11f81499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8149c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f8149e je 0x11f814ba */
  if (C.zf) goto L_11f814ba;
  /* 11f814a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f814a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f814a4 call edi */
  call_ind((uint32_t)(EDI), 0x11f814a6u);
  /* 11f814a6 push 0x11f860c0 */
  push32((uint32_t)(0x11f860c0u));
  /* 11f814ab call dword ptr [0x11f850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850dc))), 0x11f814b1u);
  /* 11f814b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f814b4 call dword ptr [0x11f850e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850e0))), 0x11f814bau);
L_11f814ba:;
  /* 11f814ba push 3 */
  push32((uint32_t)(0x3u));
  /* 11f814bc call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f814c2u);
  /* 11f814c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f814c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f814c7 je 0x11f814f2 */
  if (C.zf) goto L_11f814f2;
  /* 11f814c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f814cb call dword ptr [0x11f850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850d8))), 0x11f814d1u);
  /* 11f814d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f814d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f814d6 je 0x11f814f2 */
  if (C.zf) goto L_11f814f2;
  /* 11f814d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f814da push 3 */
  push32((uint32_t)(0x3u));
  /* 11f814dc call edi */
  call_ind((uint32_t)(EDI), 0x11f814deu);
  /* 11f814de push 0x11f860b8 */
  push32((uint32_t)(0x11f860b8u));
  /* 11f814e3 call dword ptr [0x11f850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850dc))), 0x11f814e9u);
  /* 11f814e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f814ec call dword ptr [0x11f850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850e4))), 0x11f814f2u);
L_11f814f2:;
  /* 11f814f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f814f4 call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f814fau);
  /* 11f814fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f814fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f814ff je 0x11f8158a */
  if (C.zf) goto L_11f8158a;
  /* 11f81505 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81507 call dword ptr [0x11f850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850e8))), 0x11f8150du);
  /* 11f8150d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81510 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f81512 je 0x11f8158a */
  if (C.zf) goto L_11f8158a;
  /* 11f81514 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81516 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f81518 call edi */
  call_ind((uint32_t)(EDI), 0x11f8151au);
  /* 11f8151a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8151c push 5 */
  push32((uint32_t)(0x5u));
  /* 11f8151e call edi */
  call_ind((uint32_t)(EDI), 0x11f81520u);
  /* 11f81520 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81522 push 6 */
  push32((uint32_t)(0x6u));
  /* 11f81524 call edi */
  call_ind((uint32_t)(EDI), 0x11f81526u);
  /* 11f81526 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f8152b push 0x11f86478 */
  push32((uint32_t)(0x11f86478u));
  /* 11f81530 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81532 push 0x11f86458 */
  push32((uint32_t)(0x11f86458u));
  /* 11f81537 push 0x11f86410 */
  push32((uint32_t)(0x11f86410u));
  /* 11f8153c push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f81541 call dword ptr [0x11f850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850ec))), 0x11f81547u);
  /* 11f81547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81549 push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f8154e call esi */
  call_ind((uint32_t)(ESI), 0x11f81550u);
  /* 11f81550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81552 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f81557 push 0x11f86470 */
  push32((uint32_t)(0x11f86470u));
  /* 11f8155c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8155e call ebx */
  call_ind((uint32_t)(EBX), 0x11f81560u);
  /* 11f81560 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81563 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81565 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f8156a push 0x11f86468 */
  push32((uint32_t)(0x11f86468u));
  /* 11f8156f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81571 call ebx */
  call_ind((uint32_t)(EBX), 0x11f81573u);
  /* 11f81573 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81575 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f8157a push 0x11f86460 */
  push32((uint32_t)(0x11f86460u));
  /* 11f8157f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81581 call ebx */
  call_ind((uint32_t)(EBX), 0x11f81583u);
  /* 11f81583 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81585 call ebp */
  call_ind((uint32_t)(EBP), 0x11f81587u);
  /* 11f81587 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8158a:;
  /* 11f8158a push 5 */
  push32((uint32_t)(0x5u));
  /* 11f8158c call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f81592u);
  /* 11f81592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81595 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f81597 je 0x11f815dd */
  if (C.zf) goto L_11f815dd;
  /* 11f81599 push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f8159e push 0x11f86460 */
  push32((uint32_t)(0x11f86460u));
  /* 11f815a3 call dword ptr [0x11f850f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f0))), 0x11f815a9u);
  /* 11f815a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f815ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f815ae je 0x11f815dd */
  if (C.zf) goto L_11f815dd;
  /* 11f815b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f815b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f815b4 call edi */
  call_ind((uint32_t)(EDI), 0x11f815b6u);
  /* 11f815b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f815b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f815ba call edi */
  call_ind((uint32_t)(EDI), 0x11f815bcu);
  /* 11f815bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f815be push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f815c3 call esi */
  call_ind((uint32_t)(ESI), 0x11f815c5u);
  /* 11f815c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f815c7 call dword ptr [0x11f850f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f4))), 0x11f815cdu);
  /* 11f815cd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f815d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f815d4 call dword ptr [0x11f850bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850bc))), 0x11f815dau);
  /* 11f815da add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f815dd:;
  /* 11f815dd push 6 */
  push32((uint32_t)(0x6u));
  /* 11f815df call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f815e5u);
  /* 11f815e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f815e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f815ea je 0x11f81651 */
  if (C.zf) goto L_11f81651;
  /* 11f815ec push 5 */
  push32((uint32_t)(0x5u));
  /* 11f815ee call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f815f4u);
  /* 11f815f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f815f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f815f9 je 0x11f81651 */
  if (C.zf) goto L_11f81651;
  /* 11f815fb push 4 */
  push32((uint32_t)(0x4u));
  /* 11f815fd call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f81603u);
  /* 11f81603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81606 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f81608 jne 0x11f81651 */
  if (!C.zf) goto L_11f81651;
  /* 11f8160a push 0x11f86438 */
  push32((uint32_t)(0x11f86438u));
  /* 11f8160f call dword ptr [0x11f850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f8))), 0x11f81615u);
  /* 11f81615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8161a jne 0x11f81651 */
  if (!C.zf) goto L_11f81651;
  /* 11f8161c push eax */
  push32((uint32_t)(EAX));
  /* 11f8161d push 6 */
  push32((uint32_t)(0x6u));
  /* 11f8161f call edi */
  call_ind((uint32_t)(EDI), 0x11f81621u);
  /* 11f81621 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81628 call dword ptr [0x11f850bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850bc))), 0x11f8162eu);
  /* 11f8162e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81630 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f81632 call edi */
  call_ind((uint32_t)(EDI), 0x11f81634u);
  /* 11f81634 push 0x11f860b0 */
  push32((uint32_t)(0x11f860b0u));
  /* 11f81639 call dword ptr [0x11f850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850dc))), 0x11f8163fu);
  /* 11f8163f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f81644 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81646 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81648 call dword ptr [0x11f850fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850fc))), 0x11f8164eu);
  /* 11f8164e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f81651:;
  /* 11f81651 push 7 */
  push32((uint32_t)(0x7u));
  /* 11f81653 call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f81659u);
  /* 11f81659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8165c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f8165e je 0x11f816a0 */
  if (C.zf) goto L_11f816a0;
  /* 11f81660 push 0x11f86430 */
  push32((uint32_t)(0x11f86430u));
  /* 11f81665 push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f8166a call dword ptr [0x11f850f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f0))), 0x11f81670u);
  /* 11f81670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81673 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81675 je 0x11f816a0 */
  if (C.zf) goto L_11f816a0;
  /* 11f81677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81679 push 7 */
  push32((uint32_t)(0x7u));
  /* 11f8167b call edi */
  call_ind((uint32_t)(EDI), 0x11f8167du);
  /* 11f8167d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8167f push 0x11f86430 */
  push32((uint32_t)(0x11f86430u));
  /* 11f81684 call esi */
  call_ind((uint32_t)(ESI), 0x11f81686u);
  /* 11f81686 push 0x11f86418 */
  push32((uint32_t)(0x11f86418u));
  /* 11f8168b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8168d call dword ptr [0x11f85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85100))), 0x11f81693u);
  /* 11f81693 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81695 call ebp */
  call_ind((uint32_t)(EBP), 0x11f81697u);
  /* 11f81697 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81699 push 7 */
  push32((uint32_t)(0x7u));
  /* 11f8169b call edi */
  call_ind((uint32_t)(EDI), 0x11f8169du);
  /* 11f8169d add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f816a0:;
  /* 11f816a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f816a2 call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f816a8u);
  /* 11f816a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f816ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f816ad je 0x11f8172b */
  if (C.zf) goto L_11f8172b;
  /* 11f816af push 2 */
  push32((uint32_t)(0x2u));
  /* 11f816b1 call dword ptr [0x11f850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850e8))), 0x11f816b7u);
  /* 11f816b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f816ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f816bc je 0x11f8172b */
  if (C.zf) goto L_11f8172b;
  /* 11f816be push 0 */
  push32((uint32_t)(0x0u));
  /* 11f816c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f816c2 call edi */
  call_ind((uint32_t)(EDI), 0x11f816c4u);
  /* 11f816c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f816c6 push 0x11f86490 */
  push32((uint32_t)(0x11f86490u));
  /* 11f816cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f816cd push 0x11f86400 */
  push32((uint32_t)(0x11f86400u));
  /* 11f816d2 push 0x11f86408 */
  push32((uint32_t)(0x11f86408u));
  /* 11f816d7 push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f816dc call dword ptr [0x11f850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850ec))), 0x11f816e2u);
  /* 11f816e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f816e4 push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f816e9 call esi */
  call_ind((uint32_t)(ESI), 0x11f816ebu);
  /* 11f816eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11f816ed push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f816f2 push 0x11f86488 */
  push32((uint32_t)(0x11f86488u));
  /* 11f816f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f816f9 call ebx */
  call_ind((uint32_t)(EBX), 0x11f816fbu);
  /* 11f816fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f816fd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f81702 push 0x11f86480 */
  push32((uint32_t)(0x11f86480u));
  /* 11f81707 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81709 call ebx */
  call_ind((uint32_t)(EBX), 0x11f8170bu);
  /* 11f8170b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8170e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81710 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f81715 push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f8171a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8171c call ebx */
  call_ind((uint32_t)(EBX), 0x11f8171eu);
  /* 11f8171e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81720 call ebp */
  call_ind((uint32_t)(EBP), 0x11f81722u);
  /* 11f81722 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81724 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f81726 call edi */
  call_ind((uint32_t)(EDI), 0x11f81728u);
  /* 11f81728 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8172b:;
  /* 11f8172b push 9 */
  push32((uint32_t)(0x9u));
  /* 11f8172d call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f81733u);
  /* 11f81733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81736 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f81738 je 0x11f8176d */
  if (C.zf) goto L_11f8176d;
  /* 11f8173a push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f8173f call dword ptr [0x11f850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f8))), 0x11f81745u);
  /* 11f81745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8174a jne 0x11f8176d */
  if (!C.zf) goto L_11f8176d;
  /* 11f8174c push eax */
  push32((uint32_t)(EAX));
  /* 11f8174d push 9 */
  push32((uint32_t)(0x9u));
  /* 11f8174f call edi */
  call_ind((uint32_t)(EDI), 0x11f81751u);
  /* 11f81751 call 0x11f81000 */
  push32(0x11f81756u); f_11f81000();
  /* 11f81756 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8175b push eax */
  push32((uint32_t)(EAX));
  /* 11f8175c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8175e call dword ptr [0x11f850bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850bc))), 0x11f81764u);
  /* 11f81764 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81766 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f81768 call edi */
  call_ind((uint32_t)(EDI), 0x11f8176au);
  /* 11f8176a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8176d:;
  /* 11f8176d push 0xa */
  push32((uint32_t)(0xau));
  /* 11f8176f call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f81775u);
  /* 11f81775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81778 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f8177a je 0x11f817bc */
  if (C.zf) goto L_11f817bc;
  /* 11f8177c push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f81781 push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f81786 call dword ptr [0x11f850f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f0))), 0x11f8178cu);
  /* 11f8178c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8178f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81791 je 0x11f817bc */
  if (C.zf) goto L_11f817bc;
  /* 11f81793 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81795 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f81797 call edi */
  call_ind((uint32_t)(EDI), 0x11f81799u);
  /* 11f81799 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8179b push 0x11f86448 */
  push32((uint32_t)(0x11f86448u));
  /* 11f817a0 call esi */
  call_ind((uint32_t)(ESI), 0x11f817a2u);
  /* 11f817a2 push 0x11f86418 */
  push32((uint32_t)(0x11f86418u));
  /* 11f817a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f817a9 call dword ptr [0x11f85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85100))), 0x11f817afu);
  /* 11f817af push 2 */
  push32((uint32_t)(0x2u));
  /* 11f817b1 call ebp */
  call_ind((uint32_t)(EBP), 0x11f817b3u);
  /* 11f817b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f817b5 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f817b7 call edi */
  call_ind((uint32_t)(EDI), 0x11f817b9u);
  /* 11f817b9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f817bc:;
  /* 11f817bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f817be call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f817c4u);
  /* 11f817c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f817c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f817c9 je 0x11f817f6 */
  if (C.zf) goto L_11f817f6;
  /* 11f817cb push 0x11f86418 */
  push32((uint32_t)(0x11f86418u));
  /* 11f817d0 call dword ptr [0x11f850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f8))), 0x11f817d6u);
  /* 11f817d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f817d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f817db jne 0x11f817f6 */
  if (!C.zf) goto L_11f817f6;
  /* 11f817dd push eax */
  push32((uint32_t)(EAX));
  /* 11f817de push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f817e0 call edi */
  call_ind((uint32_t)(EDI), 0x11f817e2u);
  /* 11f817e2 push 0x11f860b0 */
  push32((uint32_t)(0x11f860b0u));
  /* 11f817e7 call dword ptr [0x11f850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850dc))), 0x11f817edu);
  /* 11f817ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f817f0 call dword ptr [0x11f850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850e4))), 0x11f817f6u);
L_11f817f6:;
  /* 11f817f6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f817f8 call dword ptr [0x11f850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850b0))), 0x11f817feu);
  /* 11f817fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81801 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f81803 je 0x11f8189c */
  if (C.zf) goto L_11f8189c;
  /* 11f81809 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f8180b call dword ptr [0x11f850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850e8))), 0x11f81811u);
  /* 11f81811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81814 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f81816 je 0x11f8189c */
  if (C.zf) goto L_11f8189c;
  /* 11f8181c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8181e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f81820 call edi */
  call_ind((uint32_t)(EDI), 0x11f81822u);
  /* 11f81822 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f81827 push 0x11f86498 */
  push32((uint32_t)(0x11f86498u));
  /* 11f8182c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8182e push 0x11f86450 */
  push32((uint32_t)(0x11f86450u));
  /* 11f81833 push 0x11f86410 */
  push32((uint32_t)(0x11f86410u));
  /* 11f81838 push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f8183d call dword ptr [0x11f850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850ec))), 0x11f81843u);
  /* 11f81843 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81845 push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f8184a call esi */
  call_ind((uint32_t)(ESI), 0x11f8184cu);
  /* 11f8184c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8184e push 0x90 */
  push32((uint32_t)(0x90u));
  /* 11f81853 push 0x11f86468 */
  push32((uint32_t)(0x11f86468u));
  /* 11f81858 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8185a call ebx */
  call_ind((uint32_t)(EBX), 0x11f8185cu);
  /* 11f8185c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8185e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f81863 push 0x11f86488 */
  push32((uint32_t)(0x11f86488u));
  /* 11f81868 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8186a call ebx */
  call_ind((uint32_t)(EBX), 0x11f8186cu);
  /* 11f8186c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8186f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81871 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f81876 push 0x11f86480 */
  push32((uint32_t)(0x11f86480u));
  /* 11f8187b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8187d call ebx */
  call_ind((uint32_t)(EBX), 0x11f8187fu);
  /* 11f8187f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81881 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11f81886 push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f8188b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8188d call ebx */
  call_ind((uint32_t)(EBX), 0x11f8188fu);
  /* 11f8188f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81891 call ebp */
  call_ind((uint32_t)(EBP), 0x11f81893u);
  /* 11f81893 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81895 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f81897 call edi */
  call_ind((uint32_t)(EDI), 0x11f81899u);
  /* 11f81899 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8189c:;
  /* 11f8189c mov ebx, dword ptr [0x11f850b0] */
  EBX = (r32((uint32_t)(0x11f850b0)));
  /* 11f818a2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f818a4 call ebx */
  call_ind((uint32_t)(EBX), 0x11f818a6u);
  /* 11f818a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f818a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f818ab je 0x11f818da */
  if (C.zf) goto L_11f818da;
  /* 11f818ad push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f818b2 call dword ptr [0x11f850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f8))), 0x11f818b8u);
  /* 11f818b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f818bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f818bd jne 0x11f818da */
  if (!C.zf) goto L_11f818da;
  /* 11f818bf push eax */
  push32((uint32_t)(EAX));
  /* 11f818c0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f818c2 call edi */
  call_ind((uint32_t)(EDI), 0x11f818c4u);
  /* 11f818c4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f818c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f818cb call dword ptr [0x11f850bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850bc))), 0x11f818d1u);
  /* 11f818d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f818d3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f818d5 call edi */
  call_ind((uint32_t)(EDI), 0x11f818d7u);
  /* 11f818d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f818da:;
  /* 11f818da push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f818dc call ebx */
  call_ind((uint32_t)(EBX), 0x11f818deu);
  /* 11f818de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f818e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f818e3 je 0x11f81925 */
  if (C.zf) goto L_11f81925;
  /* 11f818e5 push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f818ea push 0x11f86420 */
  push32((uint32_t)(0x11f86420u));
  /* 11f818ef call dword ptr [0x11f850f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850f0))), 0x11f818f5u);
  /* 11f818f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f818f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f818fa je 0x11f81925 */
  if (C.zf) goto L_11f81925;
  /* 11f818fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11f818fe push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f81900 call edi */
  call_ind((uint32_t)(EDI), 0x11f81902u);
  /* 11f81902 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81904 push 0x11f86440 */
  push32((uint32_t)(0x11f86440u));
  /* 11f81909 call esi */
  call_ind((uint32_t)(ESI), 0x11f8190bu);
  /* 11f8190b push 0x11f86418 */
  push32((uint32_t)(0x11f86418u));
  /* 11f81910 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f81912 call dword ptr [0x11f85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85100))), 0x11f81918u);
  /* 11f81918 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f8191a call ebp */
  call_ind((uint32_t)(EBP), 0x11f8191cu);
  /* 11f8191c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f8191e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f81920 call edi */
  call_ind((uint32_t)(EDI), 0x11f81922u);
  /* 11f81922 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f81925:;
  /* 11f81925 pop edi */
  EDI = (pop32());
  /* 11f81926 pop esi */
  ESI = (pop32());
  /* 11f81927 pop ebp */
  EBP = (pop32());
  /* 11f81928 pop ebx */
  EBX = (pop32());
  /* 11f81929 ret  */
  ESPCHK(0x11f811a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001930 @ 0x11f81930 (20 bytes, 6 insns) */
void f_11f81930(void) {
  FTRACE(0x11f81930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81930 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f81934 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f81935 jne 0x11f8193c */
  if (!C.zf) goto L_11f8193c;
  /* 11f81937 call 0x11f81050 */
  push32(0x11f8193cu); f_11f81050();
L_11f8193c:;
  /* 11f8193c mov eax, 1 */
  EAX = (0x1u);
  /* 11f81941 ret 0xc */
  ESPCHK(0x11f81930u, _esp0);
  ESP += 16; return;
}

/* FUN_10001950 @ 0x11f81950 (217 bytes, 57 insns) */
void f_11f81950(void) {
  FTRACE(0x11f81950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81950 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f81954 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81957 jne 0x11f819e5 */
  if (!C.zf) goto L_11f819e5;
  /* 11f8195d call dword ptr [0x11f85068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85068))), 0x11f81963u);
  /* 11f81963 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81965 mov dword ptr [0x11f864bc], eax */
  w32((uint32_t)(0x11f864bc), (EAX));
  /* 11f8196a call 0x11f82384 */
  push32(0x11f8196fu); f_11f82384();
  /* 11f8196f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81971 pop ecx */
  ECX = (pop32());
  /* 11f81972 je 0x11f819b0 */
  if (C.zf) goto L_11f819b0;
  /* 11f81974 mov eax, dword ptr [0x11f864bc] */
  EAX = (r32((uint32_t)(0x11f864bc)));
  /* 11f81979 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f8197b mov cl, byte ptr [0x11f864bd] */
  CL = (r8((uint32_t)(0x11f864bd)));
  /* 11f81981 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f81986 shr dword ptr [0x11f864bc], 0x10 */
  w32((uint32_t)(0x11f864bc), (sh_shr((uint32_t)(r32((uint32_t)(0x11f864bc))), (0x10u)&0x1f, 32)));
  /* 11f8198d mov dword ptr [0x11f864c4], eax */
  w32((uint32_t)(0x11f864c4), (EAX));
  /* 11f81992 mov dword ptr [0x11f864c8], ecx */
  w32((uint32_t)(0x11f864c8), (ECX));
  /* 11f81998 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f8199b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8199d mov dword ptr [0x11f864c0], eax */
  w32((uint32_t)(0x11f864c0), (EAX));
  /* 11f819a2 call 0x11f81c17 */
  push32(0x11f819a7u); f_11f81c17();
  /* 11f819a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f819a9 jne 0x11f819b4 */
  if (!C.zf) goto L_11f819b4;
  /* 11f819ab call 0x11f823c0 */
  push32(0x11f819b0u); f_11f823c0();
L_11f819b0:;
  /* 11f819b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f819b2 jmp 0x11f81a26 */
  goto L_11f81a26;
L_11f819b4:;
  /* 11f819b4 call dword ptr [0x11f85064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85064))), 0x11f819bau);
  /* 11f819ba mov dword ptr [0x11f86a18], eax */
  w32((uint32_t)(0x11f86a18), (EAX));
  /* 11f819bf call 0x11f82252 */
  push32(0x11f819c4u); f_11f82252();
  /* 11f819c4 mov dword ptr [0x11f864a8], eax */
  w32((uint32_t)(0x11f864a8), (EAX));
  /* 11f819c9 call 0x11f81d3c */
  push32(0x11f819ceu); f_11f81d3c();
  /* 11f819ce call 0x11f82005 */
  push32(0x11f819d3u); f_11f82005();
  /* 11f819d3 call 0x11f81f4c */
  push32(0x11f819d8u); f_11f81f4c();
  /* 11f819d8 call 0x11f81af9 */
  push32(0x11f819ddu); f_11f81af9();
  /* 11f819dd inc dword ptr [0x11f864a4] */
  { uint32_t _r=(r32((uint32_t)(0x11f864a4)))+1; w32((uint32_t)(0x11f864a4), (_r)); fl_inc(_r,32); }
  /* 11f819e3 jmp 0x11f81a23 */
  goto L_11f81a23;
L_11f819e5:;
  /* 11f819e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f819e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f819e9 jne 0x11f81a17 */
  if (!C.zf) goto L_11f81a17;
  /* 11f819eb cmp dword ptr [0x11f864a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f864a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f819f1 jle 0x11f819b0 */
  if ((C.zf||C.sf!=C.of)) goto L_11f819b0;
  /* 11f819f3 dec dword ptr [0x11f864a4] */
  { uint32_t _r=(r32((uint32_t)(0x11f864a4)))-1; w32((uint32_t)(0x11f864a4), (_r)); fl_dec(_r,32); }
  /* 11f819f9 cmp dword ptr [0x11f864f4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f864f4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f819ff jne 0x11f81a06 */
  if (!C.zf) goto L_11f81a06;
  /* 11f81a01 call 0x11f81b37 */
  push32(0x11f81a06u); f_11f81b37();
L_11f81a06:;
  /* 11f81a06 call 0x11f81ef8 */
  push32(0x11f81a0bu); f_11f81ef8();
  /* 11f81a0b call 0x11f81c6b */
  push32(0x11f81a10u); f_11f81c6b();
  /* 11f81a10 call 0x11f823c0 */
  push32(0x11f81a15u); f_11f823c0();
  /* 11f81a15 jmp 0x11f81a23 */
  goto L_11f81a23;
L_11f81a17:;
  /* 11f81a17 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81a1a jne 0x11f81a23 */
  if (!C.zf) goto L_11f81a23;
  /* 11f81a1c push ecx */
  push32((uint32_t)(ECX));
  /* 11f81a1d call 0x11f81c9c */
  push32(0x11f81a22u); f_11f81c9c();
  /* 11f81a22 pop ecx */
  ECX = (pop32());
L_11f81a23:;
  /* 11f81a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81a25 pop eax */
  EAX = (pop32());
L_11f81a26:;
  /* 11f81a26 ret 0xc */
  ESPCHK(0x11f81950u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11f81a29 (157 bytes, 73 insns) */
void f_11f81a29(void) {
  FTRACE(0x11f81a29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81a29 push ebp */
  push32((uint32_t)(EBP));
  /* 11f81a2a mov ebp, esp */
  EBP = (ESP);
  /* 11f81a2c push ebx */
  push32((uint32_t)(EBX));
  /* 11f81a2d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f81a30 push esi */
  push32((uint32_t)(ESI));
  /* 11f81a31 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f81a34 push edi */
  push32((uint32_t)(EDI));
  /* 11f81a35 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f81a38 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f81a3a jne 0x11f81a45 */
  if (!C.zf) goto L_11f81a45;
  /* 11f81a3c cmp dword ptr [0x11f864a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f864a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81a43 jmp 0x11f81a6b */
  goto L_11f81a6b;
L_11f81a45:;
  /* 11f81a45 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81a48 je 0x11f81a4f */
  if (C.zf) goto L_11f81a4f;
  /* 11f81a4a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81a4d jne 0x11f81a71 */
  if (!C.zf) goto L_11f81a71;
L_11f81a4f:;
  /* 11f81a4f mov eax, dword ptr [0x11f86a1c] */
  EAX = (r32((uint32_t)(0x11f86a1c)));
  /* 11f81a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81a56 je 0x11f81a61 */
  if (C.zf) goto L_11f81a61;
  /* 11f81a58 push edi */
  push32((uint32_t)(EDI));
  /* 11f81a59 push esi */
  push32((uint32_t)(ESI));
  /* 11f81a5a push ebx */
  push32((uint32_t)(EBX));
  /* 11f81a5b call eax */
  call_ind((uint32_t)(EAX), 0x11f81a5du);
  /* 11f81a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81a5f je 0x11f81a6d */
  if (C.zf) goto L_11f81a6d;
L_11f81a61:;
  /* 11f81a61 push edi */
  push32((uint32_t)(EDI));
  /* 11f81a62 push esi */
  push32((uint32_t)(ESI));
  /* 11f81a63 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81a64 call 0x11f81950 */
  push32(0x11f81a69u); f_11f81950();
  /* 11f81a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11f81a6b:;
  /* 11f81a6b jne 0x11f81a71 */
  if (!C.zf) goto L_11f81a71;
L_11f81a6d:;
  /* 11f81a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f81a6f jmp 0x11f81abf */
  goto L_11f81abf;
L_11f81a71:;
  /* 11f81a71 push edi */
  push32((uint32_t)(EDI));
  /* 11f81a72 push esi */
  push32((uint32_t)(ESI));
  /* 11f81a73 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81a74 call 0x11f81930 */
  push32(0x11f81a79u); f_11f81930();
  /* 11f81a79 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81a7c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f81a7f jne 0x11f81a8d */
  if (!C.zf) goto L_11f81a8d;
  /* 11f81a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81a83 jne 0x11f81abc */
  if (!C.zf) goto L_11f81abc;
  /* 11f81a85 push edi */
  push32((uint32_t)(EDI));
  /* 11f81a86 push eax */
  push32((uint32_t)(EAX));
  /* 11f81a87 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81a88 call 0x11f81950 */
  push32(0x11f81a8du); f_11f81950();
L_11f81a8d:;
  /* 11f81a8d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f81a8f je 0x11f81a96 */
  if (C.zf) goto L_11f81a96;
  /* 11f81a91 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81a94 jne 0x11f81abc */
  if (!C.zf) goto L_11f81abc;
L_11f81a96:;
  /* 11f81a96 push edi */
  push32((uint32_t)(EDI));
  /* 11f81a97 push esi */
  push32((uint32_t)(ESI));
  /* 11f81a98 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81a99 call 0x11f81950 */
  push32(0x11f81a9eu); f_11f81950();
  /* 11f81a9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81aa0 jne 0x11f81aa5 */
  if (!C.zf) goto L_11f81aa5;
  /* 11f81aa2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11f81aa5:;
  /* 11f81aa5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81aa9 je 0x11f81abc */
  if (C.zf) goto L_11f81abc;
  /* 11f81aab mov eax, dword ptr [0x11f86a1c] */
  EAX = (r32((uint32_t)(0x11f86a1c)));
  /* 11f81ab0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81ab2 je 0x11f81abc */
  if (C.zf) goto L_11f81abc;
  /* 11f81ab4 push edi */
  push32((uint32_t)(EDI));
  /* 11f81ab5 push esi */
  push32((uint32_t)(ESI));
  /* 11f81ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81ab7 call eax */
  call_ind((uint32_t)(EAX), 0x11f81ab9u);
  /* 11f81ab9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11f81abc:;
  /* 11f81abc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f81abf:;
  /* 11f81abf pop edi */
  EDI = (pop32());
  /* 11f81ac0 pop esi */
  ESI = (pop32());
  /* 11f81ac1 pop ebx */
  EBX = (pop32());
  /* 11f81ac2 pop ebp */
  EBP = (pop32());
  /* 11f81ac3 ret 0xc */
  ESPCHK(0x11f81a29u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11f81ac6 (48 bytes, 15 insns) */
void f_11f81ac6(void) {
  FTRACE(0x11f81ac6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81ac6 mov eax, dword ptr [0x11f864b0] */
  EAX = (r32((uint32_t)(0x11f864b0)));
  /* 11f81acb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81ace je 0x11f81add */
  if (C.zf) goto L_11f81add;
  /* 11f81ad0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81ad2 jne 0x11f81ae2 */
  if (!C.zf) goto L_11f81ae2;
  /* 11f81ad4 cmp dword ptr [0x11f864b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f864b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81adb jne 0x11f81ae2 */
  if (!C.zf) goto L_11f81ae2;
L_11f81add:;
  /* 11f81add call 0x11f82435 */
  push32(0x11f81ae2u); f_11f82435();
L_11f81ae2:;
  /* 11f81ae2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f81ae6 call 0x11f8246e */
  push32(0x11f81aebu); f_11f8246e();
  /* 11f81aeb push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f81af0 call dword ptr [0x11f860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f860d4))), 0x11f81af6u);
  /* 11f81af6 pop ecx */
  ECX = (pop32());
  /* 11f81af7 pop ecx */
  ECX = (pop32());
  /* 11f81af8 ret  */
  ESPCHK(0x11f81ac6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af9 @ 0x11f81af9 (45 bytes, 12 insns) */
void f_11f81af9(void) {
  FTRACE(0x11f81af9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81af9 mov eax, dword ptr [0x11f86a14] */
  EAX = (r32((uint32_t)(0x11f86a14)));
  /* 11f81afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81b00 je 0x11f81b04 */
  if (C.zf) goto L_11f81b04;
  /* 11f81b02 call eax */
  call_ind((uint32_t)(EAX), 0x11f81b04u);
L_11f81b04:;
  /* 11f81b04 push 0x11f86010 */
  push32((uint32_t)(0x11f86010u));
  /* 11f81b09 push 0x11f86008 */
  push32((uint32_t)(0x11f86008u));
  /* 11f81b0e call 0x11f81bfd */
  push32(0x11f81b13u); f_11f81bfd();
  /* 11f81b13 push 0x11f86004 */
  push32((uint32_t)(0x11f86004u));
  /* 11f81b18 push 0x11f86000 */
  push32((uint32_t)(0x11f86000u));
  /* 11f81b1d call 0x11f81bfd */
  push32(0x11f81b22u); f_11f81bfd();
  /* 11f81b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81b25 ret  */
  ESPCHK(0x11f81af9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11f81b26 (17 bytes, 6 insns) */
void f_11f81b26(void) {
  FTRACE(0x11f81b26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81b28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81b2a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f81b2e call 0x11f81b46 */
  push32(0x11f81b33u); f_11f81b46();
  /* 11f81b33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81b36 ret  */
  ESPCHK(0x11f81b26u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b37 @ 0x11f81b37 (15 bytes, 6 insns) */
void f_11f81b37(void) {
  FTRACE(0x11f81b37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81b3d call 0x11f81b46 */
  push32(0x11f81b42u); f_11f81b46();
  /* 11f81b42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81b45 ret  */
  ESPCHK(0x11f81b37u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b46 @ 0x11f81b46 (163 bytes, 53 insns) */
void f_11f81b46(void) {
  FTRACE(0x11f81b46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81b46 push edi */
  push32((uint32_t)(EDI));
  /* 11f81b47 call 0x11f81beb */
  push32(0x11f81b4cu); f_11f81beb();
  /* 11f81b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81b4e pop edi */
  EDI = (pop32());
  /* 11f81b4f cmp dword ptr [0x11f864f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f864f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81b55 jne 0x11f81b68 */
  if (!C.zf) goto L_11f81b68;
  /* 11f81b57 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f81b5b call dword ptr [0x11f85074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85074))), 0x11f81b61u);
  /* 11f81b61 push eax */
  push32((uint32_t)(EAX));
  /* 11f81b62 call dword ptr [0x11f85070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85070))), 0x11f81b68u);
L_11f81b68:;
  /* 11f81b68 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81b6d push ebx */
  push32((uint32_t)(EBX));
  /* 11f81b6e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f81b72 mov dword ptr [0x11f864f4], edi */
  w32((uint32_t)(0x11f864f4), (EDI));
  /* 11f81b78 mov byte ptr [0x11f864f0], bl */
  w8((uint32_t)(0x11f864f0), (BL));
  /* 11f81b7e jne 0x11f81bbc */
  if (!C.zf) goto L_11f81bbc;
  /* 11f81b80 mov eax, dword ptr [0x11f86a10] */
  EAX = (r32((uint32_t)(0x11f86a10)));
  /* 11f81b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81b87 je 0x11f81bab */
  if (C.zf) goto L_11f81bab;
  /* 11f81b89 mov ecx, dword ptr [0x11f86a0c] */
  ECX = (r32((uint32_t)(0x11f86a0c)));
  /* 11f81b8f push esi */
  push32((uint32_t)(ESI));
  /* 11f81b90 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11f81b93 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81b95 jb 0x11f81baa */
  if (C.cf) goto L_11f81baa;
L_11f81b97:;
  /* 11f81b97 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f81b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81b9b je 0x11f81b9f */
  if (C.zf) goto L_11f81b9f;
  /* 11f81b9d call eax */
  call_ind((uint32_t)(EAX), 0x11f81b9fu);
L_11f81b9f:;
  /* 11f81b9f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f81ba2 cmp esi, dword ptr [0x11f86a10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f86a10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81ba8 jae 0x11f81b97 */
  if (!C.cf) goto L_11f81b97;
L_11f81baa:;
  /* 11f81baa pop esi */
  ESI = (pop32());
L_11f81bab:;
  /* 11f81bab push 0x11f86018 */
  push32((uint32_t)(0x11f86018u));
  /* 11f81bb0 push 0x11f86014 */
  push32((uint32_t)(0x11f86014u));
  /* 11f81bb5 call 0x11f81bfd */
  push32(0x11f81bbau); f_11f81bfd();
  /* 11f81bba pop ecx */
  ECX = (pop32());
  /* 11f81bbb pop ecx */
  ECX = (pop32());
L_11f81bbc:;
  /* 11f81bbc push 0x11f86020 */
  push32((uint32_t)(0x11f86020u));
  /* 11f81bc1 push 0x11f8601c */
  push32((uint32_t)(0x11f8601cu));
  /* 11f81bc6 call 0x11f81bfd */
  push32(0x11f81bcbu); f_11f81bfd();
  /* 11f81bcb pop ecx */
  ECX = (pop32());
  /* 11f81bcc pop ecx */
  ECX = (pop32());
  /* 11f81bcd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f81bcf pop ebx */
  EBX = (pop32());
  /* 11f81bd0 je 0x11f81bd9 */
  if (C.zf) goto L_11f81bd9;
  /* 11f81bd2 call 0x11f81bf4 */
  push32(0x11f81bd7u); f_11f81bf4();
  /* 11f81bd7 pop edi */
  EDI = (pop32());
  /* 11f81bd8 ret  */
  ESPCHK(0x11f81b46u, _esp0);
  ESP += 4; return;
L_11f81bd9:;
  /* 11f81bd9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f81bdd mov dword ptr [0x11f864f8], edi */
  w32((uint32_t)(0x11f864f8), (EDI));
  /* 11f81be3 call dword ptr [0x11f8506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8506c))), 0x11f81be9u);
  /* 11f81be9 pop edi */
  EDI = (pop32());
  /* 11f81bea ret  */
  ESPCHK(0x11f81b46u, _esp0);
  ESP += 4; return;
}

/* FUN_10001beb @ 0x11f81beb (9 bytes, 4 insns) */
void f_11f81beb(void) {
  FTRACE(0x11f81bebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81beb push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f81bed call 0x11f82656 */
  push32(0x11f81bf2u); f_11f82656();
  /* 11f81bf2 pop ecx */
  ECX = (pop32());
  /* 11f81bf3 ret  */
  ESPCHK(0x11f81bebu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf4 @ 0x11f81bf4 (9 bytes, 4 insns) */
void f_11f81bf4(void) {
  FTRACE(0x11f81bf4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81bf4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f81bf6 call 0x11f826b7 */
  push32(0x11f81bfbu); f_11f826b7();
  /* 11f81bfb pop ecx */
  ECX = (pop32());
  /* 11f81bfc ret  */
  ESPCHK(0x11f81bf4u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bfd @ 0x11f81bfd (26 bytes, 12 insns) */
void f_11f81bfd(void) {
  FTRACE(0x11f81bfdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81bfd push esi */
  push32((uint32_t)(ESI));
  /* 11f81bfe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11f81c02:;
  /* 11f81c02 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81c06 jae 0x11f81c15 */
  if (!C.cf) goto L_11f81c15;
  /* 11f81c08 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f81c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81c0c je 0x11f81c10 */
  if (C.zf) goto L_11f81c10;
  /* 11f81c0e call eax */
  call_ind((uint32_t)(EAX), 0x11f81c10u);
L_11f81c10:;
  /* 11f81c10 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81c13 jmp 0x11f81c02 */
  goto L_11f81c02;
L_11f81c15:;
  /* 11f81c15 pop esi */
  ESI = (pop32());
  /* 11f81c16 ret  */
  ESPCHK(0x11f81bfdu, _esp0);
  ESP += 4; return;
}

/* FUN_10001c17 @ 0x11f81c17 (84 bytes, 32 insns) */
void f_11f81c17(void) {
  FTRACE(0x11f81c17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81c17 push esi */
  push32((uint32_t)(ESI));
  /* 11f81c18 call 0x11f825c1 */
  push32(0x11f81c1du); f_11f825c1();
  /* 11f81c1d call dword ptr [0x11f85080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85080))), 0x11f81c23u);
  /* 11f81c23 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81c26 mov dword ptr [0x11f860d8], eax */
  w32((uint32_t)(0x11f860d8), (EAX));
  /* 11f81c2b je 0x11f81c67 */
  if (C.zf) goto L_11f81c67;
  /* 11f81c2d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11f81c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81c31 call 0x11f826cc */
  push32(0x11f81c36u); f_11f826cc();
  /* 11f81c36 mov esi, eax */
  ESI = (EAX);
  /* 11f81c38 pop ecx */
  ECX = (pop32());
  /* 11f81c39 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f81c3b pop ecx */
  ECX = (pop32());
  /* 11f81c3c je 0x11f81c67 */
  if (C.zf) goto L_11f81c67;
  /* 11f81c3e push esi */
  push32((uint32_t)(ESI));
  /* 11f81c3f push dword ptr [0x11f860d8] */
  push32((uint32_t)(r32((uint32_t)(0x11f860d8))));
  /* 11f81c45 call dword ptr [0x11f8507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8507c))), 0x11f81c4bu);
  /* 11f81c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81c4d je 0x11f81c67 */
  if (C.zf) goto L_11f81c67;
  /* 11f81c4f push esi */
  push32((uint32_t)(ESI));
  /* 11f81c50 call 0x11f81c89 */
  push32(0x11f81c55u); f_11f81c89();
  /* 11f81c55 pop ecx */
  ECX = (pop32());
  /* 11f81c56 call dword ptr [0x11f85078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85078))), 0x11f81c5cu);
  /* 11f81c5c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f81c60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f81c62 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f81c64 pop eax */
  EAX = (pop32());
  /* 11f81c65 pop esi */
  ESI = (pop32());
  /* 11f81c66 ret  */
  ESPCHK(0x11f81c17u, _esp0);
  ESP += 4; return;
L_11f81c67:;
  /* 11f81c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f81c69 pop esi */
  ESI = (pop32());
  /* 11f81c6a ret  */
  ESPCHK(0x11f81c17u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c6b @ 0x11f81c6b (30 bytes, 8 insns) */
void f_11f81c6b(void) {
  FTRACE(0x11f81c6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81c6b call 0x11f825ea */
  push32(0x11f81c70u); f_11f825ea();
  /* 11f81c70 mov eax, dword ptr [0x11f860d8] */
  EAX = (r32((uint32_t)(0x11f860d8)));
  /* 11f81c75 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81c78 je 0x11f81c88 */
  if (C.zf) goto L_11f81c88;
  /* 11f81c7a push eax */
  push32((uint32_t)(EAX));
  /* 11f81c7b call dword ptr [0x11f85084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85084))), 0x11f81c81u);
  /* 11f81c81 or dword ptr [0x11f860d8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f860d8)))|(0xffffffffu); w32((uint32_t)(0x11f860d8), (_r)); fl_logic(_r,32); }
L_11f81c88:;
  /* 11f81c88 ret  */
  ESPCHK(0x11f81c6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001c89 @ 0x11f81c89 (19 bytes, 4 insns) */
void f_11f81c89(void) {
  FTRACE(0x11f81c89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81c89 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f81c8d mov dword ptr [eax + 0x50], 0x11f86258 */
  w32((uint32_t)(EAX + 0x50), (0x11f86258u));
  /* 11f81c94 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11f81c9b ret  */
  ESPCHK(0x11f81c89u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c9c @ 0x11f81c9c (160 bytes, 62 insns) */
void f_11f81c9c(void) {
  FTRACE(0x11f81c9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81c9c mov eax, dword ptr [0x11f860d8] */
  EAX = (r32((uint32_t)(0x11f860d8)));
  /* 11f81ca1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81ca4 je 0x11f81d3b */
  if (C.zf) goto L_11f81d3b;
  /* 11f81caa push esi */
  push32((uint32_t)(ESI));
  /* 11f81cab mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f81caf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f81cb1 jne 0x11f81cc0 */
  if (!C.zf) goto L_11f81cc0;
  /* 11f81cb3 push eax */
  push32((uint32_t)(EAX));
  /* 11f81cb4 call dword ptr [0x11f85000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85000))), 0x11f81cbau);
  /* 11f81cba mov esi, eax */
  ESI = (EAX);
  /* 11f81cbc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f81cbe je 0x11f81d2c */
  if (C.zf) goto L_11f81d2c;
L_11f81cc0:;
  /* 11f81cc0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11f81cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81cc5 je 0x11f81cce */
  if (C.zf) goto L_11f81cce;
  /* 11f81cc7 push eax */
  push32((uint32_t)(EAX));
  /* 11f81cc8 call 0x11f82759 */
  push32(0x11f81ccdu); f_11f82759();
  /* 11f81ccd pop ecx */
  ECX = (pop32());
L_11f81cce:;
  /* 11f81cce mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11f81cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81cd3 je 0x11f81cdc */
  if (C.zf) goto L_11f81cdc;
  /* 11f81cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11f81cd6 call 0x11f82759 */
  push32(0x11f81cdbu); f_11f82759();
  /* 11f81cdb pop ecx */
  ECX = (pop32());
L_11f81cdc:;
  /* 11f81cdc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11f81cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81ce1 je 0x11f81cea */
  if (C.zf) goto L_11f81cea;
  /* 11f81ce3 push eax */
  push32((uint32_t)(EAX));
  /* 11f81ce4 call 0x11f82759 */
  push32(0x11f81ce9u); f_11f82759();
  /* 11f81ce9 pop ecx */
  ECX = (pop32());
L_11f81cea:;
  /* 11f81cea mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11f81ced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81cef je 0x11f81cf8 */
  if (C.zf) goto L_11f81cf8;
  /* 11f81cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11f81cf2 call 0x11f82759 */
  push32(0x11f81cf7u); f_11f82759();
  /* 11f81cf7 pop ecx */
  ECX = (pop32());
L_11f81cf8:;
  /* 11f81cf8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11f81cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81cfd je 0x11f81d06 */
  if (C.zf) goto L_11f81d06;
  /* 11f81cff push eax */
  push32((uint32_t)(EAX));
  /* 11f81d00 call 0x11f82759 */
  push32(0x11f81d05u); f_11f82759();
  /* 11f81d05 pop ecx */
  ECX = (pop32());
L_11f81d06:;
  /* 11f81d06 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11f81d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81d0b je 0x11f81d14 */
  if (C.zf) goto L_11f81d14;
  /* 11f81d0d push eax */
  push32((uint32_t)(EAX));
  /* 11f81d0e call 0x11f82759 */
  push32(0x11f81d13u); f_11f82759();
  /* 11f81d13 pop ecx */
  ECX = (pop32());
L_11f81d14:;
  /* 11f81d14 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11f81d17 cmp eax, 0x11f86258 */
  { uint32_t _a=(EAX),_b=(0x11f86258u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81d1c je 0x11f81d25 */
  if (C.zf) goto L_11f81d25;
  /* 11f81d1e push eax */
  push32((uint32_t)(EAX));
  /* 11f81d1f call 0x11f82759 */
  push32(0x11f81d24u); f_11f82759();
  /* 11f81d24 pop ecx */
  ECX = (pop32());
L_11f81d25:;
  /* 11f81d25 push esi */
  push32((uint32_t)(ESI));
  /* 11f81d26 call 0x11f82759 */
  push32(0x11f81d2bu); f_11f82759();
  /* 11f81d2b pop ecx */
  ECX = (pop32());
L_11f81d2c:;
  /* 11f81d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f81d2e push dword ptr [0x11f860d8] */
  push32((uint32_t)(r32((uint32_t)(0x11f860d8))));
  /* 11f81d34 call dword ptr [0x11f8507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8507c))), 0x11f81d3au);
  /* 11f81d3a pop esi */
  ESI = (pop32());
L_11f81d3b:;
  /* 11f81d3b ret  */
  ESPCHK(0x11f81c9cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001d3c @ 0x11f81d3c (444 bytes, 150 insns) */
void f_11f81d3c(void) {
  FTRACE(0x11f81d3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81d3c push ebp */
  push32((uint32_t)(EBP));
  /* 11f81d3d mov ebp, esp */
  EBP = (ESP);
  /* 11f81d3f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f81d42 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81d43 push esi */
  push32((uint32_t)(ESI));
  /* 11f81d44 push edi */
  push32((uint32_t)(EDI));
  /* 11f81d45 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f81d4a call 0x11f827a1 */
  push32(0x11f81d4fu); f_11f827a1();
  /* 11f81d4f mov esi, eax */
  ESI = (EAX);
  /* 11f81d51 pop ecx */
  ECX = (pop32());
  /* 11f81d52 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f81d54 jne 0x11f81d5e */
  if (!C.zf) goto L_11f81d5e;
  /* 11f81d56 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11f81d58 call 0x11f81ac6 */
  push32(0x11f81d5du); f_11f81ac6();
  /* 11f81d5d pop ecx */
  ECX = (pop32());
L_11f81d5e:;
  /* 11f81d5e mov dword ptr [0x11f86900], esi */
  w32((uint32_t)(0x11f86900), (ESI));
  /* 11f81d64 mov dword ptr [0x11f86a00], 0x20 */
  w32((uint32_t)(0x11f86a00), (0x20u));
  /* 11f81d6e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11f81d74:;
  /* 11f81d74 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81d76 jae 0x11f81d96 */
  if (!C.cf) goto L_11f81d96;
  /* 11f81d78 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f81d7c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f81d7f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f81d83 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11f81d87 mov eax, dword ptr [0x11f86900] */
  EAX = (r32((uint32_t)(0x11f86900)));
  /* 11f81d8c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81d8f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81d94 jmp 0x11f81d74 */
  goto L_11f81d74;
L_11f81d96:;
  /* 11f81d96 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11f81d99 push eax */
  push32((uint32_t)(EAX));
  /* 11f81d9a call dword ptr [0x11f8509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8509c))), 0x11f81da0u);
  /* 11f81da0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f81da5 je 0x11f81e7c */
  if (C.zf) goto L_11f81e7c;
  /* 11f81dab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f81dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81db0 je 0x11f81e7c */
  if (C.zf) goto L_11f81e7c;
  /* 11f81db6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11f81db8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11f81dbb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11f81dbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f81dc1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11f81dc6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81dc8 jl 0x11f81dcc */
  if ((C.sf!=C.of)) goto L_11f81dcc;
  /* 11f81dca mov edi, eax */
  EDI = (EAX);
L_11f81dcc:;
  /* 11f81dcc cmp dword ptr [0x11f86a00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f86a00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81dd2 jge 0x11f81e2a */
  if ((C.sf==C.of)) goto L_11f81e2a;
  /* 11f81dd4 mov esi, 0x11f86904 */
  ESI = (0x11f86904u);
L_11f81dd9:;
  /* 11f81dd9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f81dde call 0x11f827a1 */
  push32(0x11f81de3u); f_11f827a1();
  /* 11f81de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81de5 pop ecx */
  ECX = (pop32());
  /* 11f81de6 je 0x11f81e24 */
  if (C.zf) goto L_11f81e24;
  /* 11f81de8 add dword ptr [0x11f86a00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11f86a00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11f86a00), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f81def mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f81df1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11f81df7:;
  /* 11f81df7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81df9 jae 0x11f81e17 */
  if (!C.cf) goto L_11f81e17;
  /* 11f81dfb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f81dff or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f81e02 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f81e06 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11f81e0a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f81e0c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81e0f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81e15 jmp 0x11f81df7 */
  goto L_11f81df7;
L_11f81e17:;
  /* 11f81e17 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81e1a cmp dword ptr [0x11f86a00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f86a00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81e20 jl 0x11f81dd9 */
  if ((C.sf!=C.of)) goto L_11f81dd9;
  /* 11f81e22 jmp 0x11f81e2a */
  goto L_11f81e2a;
L_11f81e24:;
  /* 11f81e24 mov edi, dword ptr [0x11f86a00] */
  EDI = (r32((uint32_t)(0x11f86a00)));
L_11f81e2a:;
  /* 11f81e2a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f81e2c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f81e2e jle 0x11f81e7c */
  if ((C.zf||C.sf!=C.of)) goto L_11f81e7c;
L_11f81e30:;
  /* 11f81e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f81e33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f81e35 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81e38 je 0x11f81e72 */
  if (C.zf) goto L_11f81e72;
  /* 11f81e3a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11f81e3c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11f81e3e je 0x11f81e72 */
  if (C.zf) goto L_11f81e72;
  /* 11f81e40 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11f81e42 jne 0x11f81e4f */
  if (!C.zf) goto L_11f81e4f;
  /* 11f81e44 push ecx */
  push32((uint32_t)(ECX));
  /* 11f81e45 call dword ptr [0x11f85098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85098))), 0x11f81e4bu);
  /* 11f81e4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81e4d je 0x11f81e72 */
  if (C.zf) goto L_11f81e72;
L_11f81e4f:;
  /* 11f81e4f mov ecx, esi */
  ECX = (ESI);
  /* 11f81e51 mov eax, esi */
  EAX = (ESI);
  /* 11f81e53 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f81e56 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f81e59 mov ecx, dword ptr [ecx*4 + 0x11f86900] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f86900)));
  /* 11f81e60 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f81e63 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11f81e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f81e69 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11f81e6b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f81e6d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11f81e6f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11f81e72:;
  /* 11f81e72 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f81e76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f81e77 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f81e78 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81e7a jl 0x11f81e30 */
  if ((C.sf!=C.of)) goto L_11f81e30;
L_11f81e7c:;
  /* 11f81e7c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f81e7e:;
  /* 11f81e7e mov ecx, dword ptr [0x11f86900] */
  ECX = (r32((uint32_t)(0x11f86900)));
  /* 11f81e84 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11f81e87 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81e8b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f81e8e jne 0x11f81edd */
  if (!C.zf) goto L_11f81edd;
  /* 11f81e90 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f81e92 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11f81e96 jne 0x11f81e9d */
  if (!C.zf) goto L_11f81e9d;
  /* 11f81e98 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f81e9a pop eax */
  EAX = (pop32());
  /* 11f81e9b jmp 0x11f81ea7 */
  goto L_11f81ea7;
L_11f81e9d:;
  /* 11f81e9d mov eax, ebx */
  EAX = (EBX);
  /* 11f81e9f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f81ea0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f81ea2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f81ea4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f81ea7:;
  /* 11f81ea7 push eax */
  push32((uint32_t)(EAX));
  /* 11f81ea8 call dword ptr [0x11f85094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85094))), 0x11f81eaeu);
  /* 11f81eae mov edi, eax */
  EDI = (EAX);
  /* 11f81eb0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81eb3 je 0x11f81ecc */
  if (C.zf) goto L_11f81ecc;
  /* 11f81eb5 push edi */
  push32((uint32_t)(EDI));
  /* 11f81eb6 call dword ptr [0x11f85098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85098))), 0x11f81ebcu);
  /* 11f81ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81ebe je 0x11f81ecc */
  if (C.zf) goto L_11f81ecc;
  /* 11f81ec0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f81ec5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f81ec7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81eca jne 0x11f81ed2 */
  if (!C.zf) goto L_11f81ed2;
L_11f81ecc:;
  /* 11f81ecc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f81ed0 jmp 0x11f81ee1 */
  goto L_11f81ee1;
L_11f81ed2:;
  /* 11f81ed2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81ed5 jne 0x11f81ee1 */
  if (!C.zf) goto L_11f81ee1;
  /* 11f81ed7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f81edb jmp 0x11f81ee1 */
  goto L_11f81ee1;
L_11f81edd:;
  /* 11f81edd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11f81ee1:;
  /* 11f81ee1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f81ee2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81ee5 jl 0x11f81e7e */
  if ((C.sf!=C.of)) goto L_11f81e7e;
  /* 11f81ee7 push dword ptr [0x11f86a00] */
  push32((uint32_t)(r32((uint32_t)(0x11f86a00))));
  /* 11f81eed call dword ptr [0x11f85090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85090))), 0x11f81ef3u);
  /* 11f81ef3 pop edi */
  EDI = (pop32());
  /* 11f81ef4 pop esi */
  ESI = (pop32());
  /* 11f81ef5 pop ebx */
  EBX = (pop32());
  /* 11f81ef6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f81ef7 ret  */
  ESPCHK(0x11f81d3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001ef8 @ 0x11f81ef8 (84 bytes, 33 insns) */
void f_11f81ef8(void) {
  FTRACE(0x11f81ef8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81ef8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f81ef9 push esi */
  push32((uint32_t)(ESI));
  /* 11f81efa push edi */
  push32((uint32_t)(EDI));
  /* 11f81efb mov esi, 0x11f86900 */
  ESI = (0x11f86900u);
L_11f81f00:;
  /* 11f81f00 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f81f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f81f04 je 0x11f81f3d */
  if (C.zf) goto L_11f81f3d;
  /* 11f81f06 mov edi, eax */
  EDI = (EAX);
  /* 11f81f08 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81f0d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81f0f jae 0x11f81f32 */
  if (!C.cf) goto L_11f81f32;
  /* 11f81f11 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11f81f14:;
  /* 11f81f14 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81f18 je 0x11f81f21 */
  if (C.zf) goto L_11f81f21;
  /* 11f81f1a push ebx */
  push32((uint32_t)(EBX));
  /* 11f81f1b call dword ptr [0x11f850a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850a0))), 0x11f81f21u);
L_11f81f21:;
  /* 11f81f21 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f81f23 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81f26 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81f2b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81f2e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81f30 jb 0x11f81f14 */
  if (C.cf) goto L_11f81f14;
L_11f81f32:;
  /* 11f81f32 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f81f34 call 0x11f82759 */
  push32(0x11f81f39u); f_11f82759();
  /* 11f81f39 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f81f3c pop ecx */
  ECX = (pop32());
L_11f81f3d:;
  /* 11f81f3d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81f40 cmp esi, 0x11f86a00 */
  { uint32_t _a=(ESI),_b=(0x11f86a00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81f46 jl 0x11f81f00 */
  if ((C.sf!=C.of)) goto L_11f81f00;
  /* 11f81f48 pop edi */
  EDI = (pop32());
  /* 11f81f49 pop esi */
  ESI = (pop32());
  /* 11f81f4a pop ebx */
  EBX = (pop32());
  /* 11f81f4b ret  */
  ESPCHK(0x11f81ef8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f4c @ 0x11f81f4c (185 bytes, 71 insns) */
void f_11f81f4c(void) {
  FTRACE(0x11f81f4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f81f4c push ebx */
  push32((uint32_t)(EBX));
  /* 11f81f4d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f81f4f cmp dword ptr [0x11f86a08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f86a08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81f55 push esi */
  push32((uint32_t)(ESI));
  /* 11f81f56 push edi */
  push32((uint32_t)(EDI));
  /* 11f81f57 jne 0x11f81f5e */
  if (!C.zf) goto L_11f81f5e;
  /* 11f81f59 call 0x11f82d73 */
  push32(0x11f81f5eu); f_11f82d73();
L_11f81f5e:;
  /* 11f81f5e mov esi, dword ptr [0x11f864a8] */
  ESI = (r32((uint32_t)(0x11f864a8)));
  /* 11f81f64 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11f81f66:;
  /* 11f81f66 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f81f68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f81f6a je 0x11f81f7e */
  if (C.zf) goto L_11f81f7e;
  /* 11f81f6c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f81f6e je 0x11f81f71 */
  if (C.zf) goto L_11f81f71;
  /* 11f81f70 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f81f71:;
  /* 11f81f71 push esi */
  push32((uint32_t)(ESI));
  /* 11f81f72 call 0x11f82920 */
  push32(0x11f81f77u); f_11f82920();
  /* 11f81f77 pop ecx */
  ECX = (pop32());
  /* 11f81f78 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11f81f7c jmp 0x11f81f66 */
  goto L_11f81f66;
L_11f81f7e:;
  /* 11f81f7e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11f81f85 push eax */
  push32((uint32_t)(EAX));
  /* 11f81f86 call 0x11f827a1 */
  push32(0x11f81f8bu); f_11f827a1();
  /* 11f81f8b mov esi, eax */
  ESI = (EAX);
  /* 11f81f8d pop ecx */
  ECX = (pop32());
  /* 11f81f8e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81f90 mov dword ptr [0x11f864d8], esi */
  w32((uint32_t)(0x11f864d8), (ESI));
  /* 11f81f96 jne 0x11f81fa0 */
  if (!C.zf) goto L_11f81fa0;
  /* 11f81f98 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f81f9a call 0x11f81ac6 */
  push32(0x11f81f9fu); f_11f81ac6();
  /* 11f81f9f pop ecx */
  ECX = (pop32());
L_11f81fa0:;
  /* 11f81fa0 mov edi, dword ptr [0x11f864a8] */
  EDI = (r32((uint32_t)(0x11f864a8)));
  /* 11f81fa6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f81fa8 je 0x11f81fe3 */
  if (C.zf) goto L_11f81fe3;
  /* 11f81faa push ebp */
  push32((uint32_t)(EBP));
L_11f81fab:;
  /* 11f81fab push edi */
  push32((uint32_t)(EDI));
  /* 11f81fac call 0x11f82920 */
  push32(0x11f81fb1u); f_11f82920();
  /* 11f81fb1 mov ebp, eax */
  EBP = (EAX);
  /* 11f81fb3 pop ecx */
  ECX = (pop32());
  /* 11f81fb4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11f81fb5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f81fb8 je 0x11f81fdc */
  if (C.zf) goto L_11f81fdc;
  /* 11f81fba push ebp */
  push32((uint32_t)(EBP));
  /* 11f81fbb call 0x11f827a1 */
  push32(0x11f81fc0u); f_11f827a1();
  /* 11f81fc0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f81fc2 pop ecx */
  ECX = (pop32());
  /* 11f81fc3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f81fc5 jne 0x11f81fcf */
  if (!C.zf) goto L_11f81fcf;
  /* 11f81fc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f81fc9 call 0x11f81ac6 */
  push32(0x11f81fceu); f_11f81ac6();
  /* 11f81fce pop ecx */
  ECX = (pop32());
L_11f81fcf:;
  /* 11f81fcf push edi */
  push32((uint32_t)(EDI));
  /* 11f81fd0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f81fd2 call 0x11f82830 */
  push32(0x11f81fd7u); f_11f82830();
  /* 11f81fd7 pop ecx */
  ECX = (pop32());
  /* 11f81fd8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81fdb pop ecx */
  ECX = (pop32());
L_11f81fdc:;
  /* 11f81fdc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f81fde cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f81fe0 jne 0x11f81fab */
  if (!C.zf) goto L_11f81fab;
  /* 11f81fe2 pop ebp */
  EBP = (pop32());
L_11f81fe3:;
  /* 11f81fe3 push dword ptr [0x11f864a8] */
  push32((uint32_t)(r32((uint32_t)(0x11f864a8))));
  /* 11f81fe9 call 0x11f82759 */
  push32(0x11f81feeu); f_11f82759();
  /* 11f81fee pop ecx */
  ECX = (pop32());
  /* 11f81fef mov dword ptr [0x11f864a8], ebx */
  w32((uint32_t)(0x11f864a8), (EBX));
  /* 11f81ff5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11f81ff7 pop edi */
  EDI = (pop32());
  /* 11f81ff8 pop esi */
  ESI = (pop32());
  /* 11f81ff9 mov dword ptr [0x11f86a04], 1 */
  w32((uint32_t)(0x11f86a04), (0x1u));
  /* 11f82003 pop ebx */
  EBX = (pop32());
  /* 11f82004 ret  */
  ESPCHK(0x11f81f4cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002005 @ 0x11f82005 (153 bytes, 62 insns) */
void f_11f82005(void) {
  FTRACE(0x11f82005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82005 push ebp */
  push32((uint32_t)(EBP));
  /* 11f82006 mov ebp, esp */
  EBP = (ESP);
  /* 11f82008 push ecx */
  push32((uint32_t)(ECX));
  /* 11f82009 push ecx */
  push32((uint32_t)(ECX));
  /* 11f8200a push ebx */
  push32((uint32_t)(EBX));
  /* 11f8200b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f8200d cmp dword ptr [0x11f86a08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f86a08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82013 push esi */
  push32((uint32_t)(ESI));
  /* 11f82014 push edi */
  push32((uint32_t)(EDI));
  /* 11f82015 jne 0x11f8201c */
  if (!C.zf) goto L_11f8201c;
  /* 11f82017 call 0x11f82d73 */
  push32(0x11f8201cu); f_11f82d73();
L_11f8201c:;
  /* 11f8201c mov esi, 0x11f864fc */
  ESI = (0x11f864fcu);
  /* 11f82021 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f82026 push esi */
  push32((uint32_t)(ESI));
  /* 11f82027 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82028 call dword ptr [0x11f850a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850a4))), 0x11f8202eu);
  /* 11f8202e mov eax, dword ptr [0x11f86a18] */
  EAX = (r32((uint32_t)(0x11f86a18)));
  /* 11f82033 mov dword ptr [0x11f864e8], esi */
  w32((uint32_t)(0x11f864e8), (ESI));
  /* 11f82039 mov edi, esi */
  EDI = (ESI);
  /* 11f8203b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8203d je 0x11f82041 */
  if (C.zf) goto L_11f82041;
  /* 11f8203f mov edi, eax */
  EDI = (EAX);
L_11f82041:;
  /* 11f82041 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f82044 push eax */
  push32((uint32_t)(EAX));
  /* 11f82045 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f82048 push eax */
  push32((uint32_t)(EAX));
  /* 11f82049 push ebx */
  push32((uint32_t)(EBX));
  /* 11f8204a push ebx */
  push32((uint32_t)(EBX));
  /* 11f8204b push edi */
  push32((uint32_t)(EDI));
  /* 11f8204c call 0x11f8209e */
  push32(0x11f82051u); f_11f8209e();
  /* 11f82051 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f82054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f82057 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11f8205a push eax */
  push32((uint32_t)(EAX));
  /* 11f8205b call 0x11f827a1 */
  push32(0x11f82060u); f_11f827a1();
  /* 11f82060 mov esi, eax */
  ESI = (EAX);
  /* 11f82062 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82065 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82067 jne 0x11f82071 */
  if (!C.zf) goto L_11f82071;
  /* 11f82069 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f8206b call 0x11f81ac6 */
  push32(0x11f82070u); f_11f81ac6();
  /* 11f82070 pop ecx */
  ECX = (pop32());
L_11f82071:;
  /* 11f82071 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f82074 push eax */
  push32((uint32_t)(EAX));
  /* 11f82075 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f82078 push eax */
  push32((uint32_t)(EAX));
  /* 11f82079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f8207c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11f8207f push eax */
  push32((uint32_t)(EAX));
  /* 11f82080 push esi */
  push32((uint32_t)(ESI));
  /* 11f82081 push edi */
  push32((uint32_t)(EDI));
  /* 11f82082 call 0x11f8209e */
  push32(0x11f82087u); f_11f8209e();
  /* 11f82087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f8208a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8208d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f8208e mov dword ptr [0x11f864d0], esi */
  w32((uint32_t)(0x11f864d0), (ESI));
  /* 11f82094 pop edi */
  EDI = (pop32());
  /* 11f82095 pop esi */
  ESI = (pop32());
  /* 11f82096 mov dword ptr [0x11f864cc], eax */
  w32((uint32_t)(0x11f864cc), (EAX));
  /* 11f8209b pop ebx */
  EBX = (pop32());
  /* 11f8209c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f8209d ret  */
  ESPCHK(0x11f82005u, _esp0);
  ESP += 4; return;
}

/* FUN_1000209e @ 0x11f8209e (436 bytes, 187 insns) */
void f_11f8209e(void) {
  FTRACE(0x11f8209eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8209e push ebp */
  push32((uint32_t)(EBP));
  /* 11f8209f mov ebp, esp */
  EBP = (ESP);
  /* 11f820a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f820a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f820a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f820a8 push esi */
  push32((uint32_t)(ESI));
  /* 11f820a9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f820ac mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f820af push edi */
  push32((uint32_t)(EDI));
  /* 11f820b0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f820b3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11f820b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f820bc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f820be je 0x11f820c8 */
  if (C.zf) goto L_11f820c8;
  /* 11f820c0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f820c2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f820c5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f820c8:;
  /* 11f820c8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f820cb jne 0x11f82111 */
  if (!C.zf) goto L_11f82111;
L_11f820cd:;
  /* 11f820cd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f820d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f820d1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f820d4 je 0x11f820ff */
  if (C.zf) goto L_11f820ff;
  /* 11f820d6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f820d8 je 0x11f820ff */
  if (C.zf) goto L_11f820ff;
  /* 11f820da movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f820dd test byte ptr [edx + 0x11f867e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f867e1)))&(0x4u); fl_logic(_r,8); }
  /* 11f820e4 je 0x11f820f2 */
  if (C.zf) goto L_11f820f2;
  /* 11f820e6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f820e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f820ea je 0x11f820f2 */
  if (C.zf) goto L_11f820f2;
  /* 11f820ec mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f820ee mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f820f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f820f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f820f2:;
  /* 11f820f2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f820f4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f820f6 je 0x11f820cd */
  if (C.zf) goto L_11f820cd;
  /* 11f820f8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f820fa mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f820fc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f820fd jmp 0x11f820cd */
  goto L_11f820cd;
L_11f820ff:;
  /* 11f820ff inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f82101 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f82103 je 0x11f82109 */
  if (C.zf) goto L_11f82109;
  /* 11f82105 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f82108 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f82109:;
  /* 11f82109 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8210c jne 0x11f82154 */
  if (!C.zf) goto L_11f82154;
  /* 11f8210e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f8210f jmp 0x11f82154 */
  goto L_11f82154;
L_11f82111:;
  /* 11f82111 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f82113 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f82115 je 0x11f8211c */
  if (C.zf) goto L_11f8211c;
  /* 11f82117 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f82119 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f8211b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f8211c:;
  /* 11f8211c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f8211e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f8211f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f82122 test byte ptr [ebx + 0x11f867e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f867e1)))&(0x4u); fl_logic(_r,8); }
  /* 11f82129 je 0x11f82137 */
  if (C.zf) goto L_11f82137;
  /* 11f8212b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f8212d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f8212f je 0x11f82136 */
  if (C.zf) goto L_11f82136;
  /* 11f82131 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11f82133 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11f82135 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f82136:;
  /* 11f82136 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f82137:;
  /* 11f82137 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8213a je 0x11f82145 */
  if (C.zf) goto L_11f82145;
  /* 11f8213c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f8213e je 0x11f82149 */
  if (C.zf) goto L_11f82149;
  /* 11f82140 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82143 jne 0x11f82111 */
  if (!C.zf) goto L_11f82111;
L_11f82145:;
  /* 11f82145 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f82147 jne 0x11f8214c */
  if (!C.zf) goto L_11f8214c;
L_11f82149:;
  /* 11f82149 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f8214a jmp 0x11f82154 */
  goto L_11f82154;
L_11f8214c:;
  /* 11f8214c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f8214e je 0x11f82154 */
  if (C.zf) goto L_11f82154;
  /* 11f82150 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11f82154:;
  /* 11f82154 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11f82158:;
  /* 11f82158 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8215b je 0x11f82241 */
  if (C.zf) goto L_11f82241;
L_11f82161:;
  /* 11f82161 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f82163 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82166 je 0x11f8216d */
  if (C.zf) goto L_11f8216d;
  /* 11f82168 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8216b jne 0x11f82170 */
  if (!C.zf) goto L_11f82170;
L_11f8216d:;
  /* 11f8216d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f8216e jmp 0x11f82161 */
  goto L_11f82161;
L_11f82170:;
  /* 11f82170 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82173 je 0x11f82241 */
  if (C.zf) goto L_11f82241;
  /* 11f82179 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f8217b je 0x11f82185 */
  if (C.zf) goto L_11f82185;
  /* 11f8217d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f8217f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82182 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f82185:;
  /* 11f82185 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f82188 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11f8218a:;
  /* 11f8218a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11f82191 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f82193:;
  /* 11f82193 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82196 jne 0x11f8219c */
  if (!C.zf) goto L_11f8219c;
  /* 11f82198 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82199 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f8219a jmp 0x11f82193 */
  goto L_11f82193;
L_11f8219c:;
  /* 11f8219c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8219f jne 0x11f821cd */
  if (!C.zf) goto L_11f821cd;
  /* 11f821a1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f821a4 jne 0x11f821cb */
  if (!C.zf) goto L_11f821cb;
  /* 11f821a6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f821a8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f821ab je 0x11f821ba */
  if (C.zf) goto L_11f821ba;
  /* 11f821ad cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f821b1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11f821b4 jne 0x11f821ba */
  if (!C.zf) goto L_11f821ba;
  /* 11f821b6 mov eax, edx */
  EAX = (EDX);
  /* 11f821b8 jmp 0x11f821bd */
  goto L_11f821bd;
L_11f821ba:;
  /* 11f821ba mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11f821bd:;
  /* 11f821bd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f821c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f821c2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f821c5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11f821c8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11f821cb:;
  /* 11f821cb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11f821cd:;
  /* 11f821cd mov edx, ebx */
  EDX = (EBX);
  /* 11f821cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f821d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f821d2 je 0x11f821e2 */
  if (C.zf) goto L_11f821e2;
  /* 11f821d4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11f821d5:;
  /* 11f821d5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f821d7 je 0x11f821dd */
  if (C.zf) goto L_11f821dd;
  /* 11f821d9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11f821dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f821dd:;
  /* 11f821dd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f821df dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f821e0 jne 0x11f821d5 */
  if (!C.zf) goto L_11f821d5;
L_11f821e2:;
  /* 11f821e2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f821e4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f821e6 je 0x11f82232 */
  if (C.zf) goto L_11f82232;
  /* 11f821e8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f821ec jne 0x11f821f8 */
  if (!C.zf) goto L_11f821f8;
  /* 11f821ee cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f821f1 je 0x11f82232 */
  if (C.zf) goto L_11f82232;
  /* 11f821f3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f821f6 je 0x11f82232 */
  if (C.zf) goto L_11f82232;
L_11f821f8:;
  /* 11f821f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f821fc je 0x11f8222c */
  if (C.zf) goto L_11f8222c;
  /* 11f821fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f82200 je 0x11f8221b */
  if (C.zf) goto L_11f8221b;
  /* 11f82202 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f82205 test byte ptr [ebx + 0x11f867e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f867e1)))&(0x4u); fl_logic(_r,8); }
  /* 11f8220c je 0x11f82214 */
  if (C.zf) goto L_11f82214;
  /* 11f8220e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f82210 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f82211 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82212 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f82214:;
  /* 11f82214 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f82216 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f82218 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f82219 jmp 0x11f8222a */
  goto L_11f8222a;
L_11f8221b:;
  /* 11f8221b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f8221e test byte ptr [edx + 0x11f867e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f867e1)))&(0x4u); fl_logic(_r,8); }
  /* 11f82225 je 0x11f8222a */
  if (C.zf) goto L_11f8222a;
  /* 11f82227 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82228 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f8222a:;
  /* 11f8222a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f8222c:;
  /* 11f8222c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f8222d jmp 0x11f8218a */
  goto L_11f8218a;
L_11f82232:;
  /* 11f82232 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f82234 je 0x11f8223a */
  if (C.zf) goto L_11f8223a;
  /* 11f82236 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f82239 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f8223a:;
  /* 11f8223a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f8223c jmp 0x11f82158 */
  goto L_11f82158;
L_11f82241:;
  /* 11f82241 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f82243 je 0x11f82248 */
  if (C.zf) goto L_11f82248;
  /* 11f82245 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f82248:;
  /* 11f82248 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f8224b pop edi */
  EDI = (pop32());
  /* 11f8224c pop esi */
  ESI = (pop32());
  /* 11f8224d pop ebx */
  EBX = (pop32());
  /* 11f8224e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11f82250 pop ebp */
  EBP = (pop32());
  /* 11f82251 ret  */
  ESPCHK(0x11f8209eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002252 @ 0x11f82252 (306 bytes, 132 insns) */
void f_11f82252(void) {
  FTRACE(0x11f82252u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82252 push ecx */
  push32((uint32_t)(ECX));
  /* 11f82253 push ecx */
  push32((uint32_t)(ECX));
  /* 11f82254 mov eax, dword ptr [0x11f86600] */
  EAX = (r32((uint32_t)(0x11f86600)));
  /* 11f82259 push ebx */
  push32((uint32_t)(EBX));
  /* 11f8225a push ebp */
  push32((uint32_t)(EBP));
  /* 11f8225b mov ebp, dword ptr [0x11f8505c] */
  EBP = (r32((uint32_t)(0x11f8505c)));
  /* 11f82261 push esi */
  push32((uint32_t)(ESI));
  /* 11f82262 push edi */
  push32((uint32_t)(EDI));
  /* 11f82263 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f82265 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f82267 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f82269 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8226b jne 0x11f822a0 */
  if (!C.zf) goto L_11f822a0;
  /* 11f8226d call ebp */
  call_ind((uint32_t)(EBP), 0x11f8226fu);
  /* 11f8226f mov esi, eax */
  ESI = (EAX);
  /* 11f82271 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82273 je 0x11f82281 */
  if (C.zf) goto L_11f82281;
  /* 11f82275 mov dword ptr [0x11f86600], 1 */
  w32((uint32_t)(0x11f86600), (0x1u));
  /* 11f8227f jmp 0x11f822a9 */
  goto L_11f822a9;
L_11f82281:;
  /* 11f82281 call dword ptr [0x11f85060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85060))), 0x11f82287u);
  /* 11f82287 mov edi, eax */
  EDI = (EAX);
  /* 11f82289 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8228b je 0x11f8237b */
  if (C.zf) goto L_11f8237b;
  /* 11f82291 mov dword ptr [0x11f86600], 2 */
  w32((uint32_t)(0x11f86600), (0x2u));
  /* 11f8229b jmp 0x11f8232f */
  goto L_11f8232f;
L_11f822a0:;
  /* 11f822a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f822a3 jne 0x11f8232a */
  if (!C.zf) goto L_11f8232a;
L_11f822a9:;
  /* 11f822a9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f822ab jne 0x11f822b9 */
  if (!C.zf) goto L_11f822b9;
  /* 11f822ad call ebp */
  call_ind((uint32_t)(EBP), 0x11f822afu);
  /* 11f822af mov esi, eax */
  ESI = (EAX);
  /* 11f822b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f822b3 je 0x11f8237b */
  if (C.zf) goto L_11f8237b;
L_11f822b9:;
  /* 11f822b9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f822bc mov eax, esi */
  EAX = (ESI);
  /* 11f822be je 0x11f822ce */
  if (C.zf) goto L_11f822ce;
L_11f822c0:;
  /* 11f822c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f822c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f822c2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f822c5 jne 0x11f822c0 */
  if (!C.zf) goto L_11f822c0;
  /* 11f822c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f822c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f822c9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f822cc jne 0x11f822c0 */
  if (!C.zf) goto L_11f822c0;
L_11f822ce:;
  /* 11f822ce sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f822d0 mov edi, dword ptr [0x11f8508c] */
  EDI = (r32((uint32_t)(0x11f8508c)));
  /* 11f822d6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f822d8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f822d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f822da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f822db push ebx */
  push32((uint32_t)(EBX));
  /* 11f822dc push ebx */
  push32((uint32_t)(EBX));
  /* 11f822dd push eax */
  push32((uint32_t)(EAX));
  /* 11f822de push esi */
  push32((uint32_t)(ESI));
  /* 11f822df push ebx */
  push32((uint32_t)(EBX));
  /* 11f822e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f822e1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11f822e5 call edi */
  call_ind((uint32_t)(EDI), 0x11f822e7u);
  /* 11f822e7 mov ebp, eax */
  EBP = (EAX);
  /* 11f822e9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f822eb je 0x11f8231f */
  if (C.zf) goto L_11f8231f;
  /* 11f822ed push ebp */
  push32((uint32_t)(EBP));
  /* 11f822ee call 0x11f827a1 */
  push32(0x11f822f3u); f_11f827a1();
  /* 11f822f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f822f5 pop ecx */
  ECX = (pop32());
  /* 11f822f6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f822fa je 0x11f8231f */
  if (C.zf) goto L_11f8231f;
  /* 11f822fc push ebx */
  push32((uint32_t)(EBX));
  /* 11f822fd push ebx */
  push32((uint32_t)(EBX));
  /* 11f822fe push ebp */
  push32((uint32_t)(EBP));
  /* 11f822ff push eax */
  push32((uint32_t)(EAX));
  /* 11f82300 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11f82304 push esi */
  push32((uint32_t)(ESI));
  /* 11f82305 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82306 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82307 call edi */
  call_ind((uint32_t)(EDI), 0x11f82309u);
  /* 11f82309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8230b jne 0x11f8231b */
  if (!C.zf) goto L_11f8231b;
  /* 11f8230d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f82311 call 0x11f82759 */
  push32(0x11f82316u); f_11f82759();
  /* 11f82316 pop ecx */
  ECX = (pop32());
  /* 11f82317 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11f8231b:;
  /* 11f8231b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11f8231f:;
  /* 11f8231f push esi */
  push32((uint32_t)(ESI));
  /* 11f82320 call dword ptr [0x11f85088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85088))), 0x11f82326u);
  /* 11f82326 mov eax, ebx */
  EAX = (EBX);
  /* 11f82328 jmp 0x11f8237d */
  goto L_11f8237d;
L_11f8232a:;
  /* 11f8232a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8232d jne 0x11f8237b */
  if (!C.zf) goto L_11f8237b;
L_11f8232f:;
  /* 11f8232f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82331 jne 0x11f8233f */
  if (!C.zf) goto L_11f8233f;
  /* 11f82333 call dword ptr [0x11f85060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85060))), 0x11f82339u);
  /* 11f82339 mov edi, eax */
  EDI = (EAX);
  /* 11f8233b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8233d je 0x11f8237b */
  if (C.zf) goto L_11f8237b;
L_11f8233f:;
  /* 11f8233f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82341 mov eax, edi */
  EAX = (EDI);
  /* 11f82343 je 0x11f8234f */
  if (C.zf) goto L_11f8234f;
L_11f82345:;
  /* 11f82345 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82346 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82348 jne 0x11f82345 */
  if (!C.zf) goto L_11f82345;
  /* 11f8234a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f8234b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f8234d jne 0x11f82345 */
  if (!C.zf) goto L_11f82345;
L_11f8234f:;
  /* 11f8234f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82351 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82352 mov ebp, eax */
  EBP = (EAX);
  /* 11f82354 push ebp */
  push32((uint32_t)(EBP));
  /* 11f82355 call 0x11f827a1 */
  push32(0x11f8235au); f_11f827a1();
  /* 11f8235a mov esi, eax */
  ESI = (EAX);
  /* 11f8235c pop ecx */
  ECX = (pop32());
  /* 11f8235d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8235f jne 0x11f82365 */
  if (!C.zf) goto L_11f82365;
  /* 11f82361 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f82363 jmp 0x11f82370 */
  goto L_11f82370;
L_11f82365:;
  /* 11f82365 push ebp */
  push32((uint32_t)(EBP));
  /* 11f82366 push edi */
  push32((uint32_t)(EDI));
  /* 11f82367 push esi */
  push32((uint32_t)(ESI));
  /* 11f82368 call 0x11f82d90 */
  push32(0x11f8236du); f_11f82d90();
  /* 11f8236d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f82370:;
  /* 11f82370 push edi */
  push32((uint32_t)(EDI));
  /* 11f82371 call dword ptr [0x11f850a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850a8))), 0x11f82377u);
  /* 11f82377 mov eax, esi */
  EAX = (ESI);
  /* 11f82379 jmp 0x11f8237d */
  goto L_11f8237d;
L_11f8237b:;
  /* 11f8237b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f8237d:;
  /* 11f8237d pop edi */
  EDI = (pop32());
  /* 11f8237e pop esi */
  ESI = (pop32());
  /* 11f8237f pop ebp */
  EBP = (pop32());
  /* 11f82380 pop ebx */
  EBX = (pop32());
  /* 11f82381 pop ecx */
  ECX = (pop32());
  /* 11f82382 pop ecx */
  ECX = (pop32());
  /* 11f82383 ret  */
  ESPCHK(0x11f82252u, _esp0);
  ESP += 4; return;
}

/* FUN_10002384 @ 0x11f82384 (60 bytes, 20 insns) */
void f_11f82384(void) {
  FTRACE(0x11f82384u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82386 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82388 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8238c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f82391 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f82394 push eax */
  push32((uint32_t)(EAX));
  /* 11f82395 call dword ptr [0x11f85054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85054))), 0x11f8239bu);
  /* 11f8239b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8239d mov dword ptr [0x11f868e8], eax */
  w32((uint32_t)(0x11f868e8), (EAX));
  /* 11f823a2 je 0x11f823b9 */
  if (C.zf) goto L_11f823b9;
  /* 11f823a4 call 0x11f830c5 */
  push32(0x11f823a9u); f_11f830c5();
  /* 11f823a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f823ab jne 0x11f823bc */
  if (!C.zf) goto L_11f823bc;
  /* 11f823ad push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f823b3 call dword ptr [0x11f85058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85058))), 0x11f823b9u);
L_11f823b9:;
  /* 11f823b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f823bb ret  */
  ESPCHK(0x11f82384u, _esp0);
  ESP += 4; return;
L_11f823bc:;
  /* 11f823bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11f823be pop eax */
  EAX = (pop32());
  /* 11f823bf ret  */
  ESPCHK(0x11f82384u, _esp0);
  ESP += 4; return;
}

/* FUN_100023c0 @ 0x11f823c0 (117 bytes, 38 insns) */
void f_11f823c0(void) {
  FTRACE(0x11f823c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f823c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f823c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f823c3 cmp dword ptr [0x11f866b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f866b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f823c9 push ebp */
  push32((uint32_t)(EBP));
  /* 11f823ca mov ebp, dword ptr [0x11f8504c] */
  EBP = (r32((uint32_t)(0x11f8504c)));
  /* 11f823d0 jle 0x11f82416 */
  if ((C.zf||C.sf!=C.of)) goto L_11f82416;
  /* 11f823d2 mov eax, dword ptr [0x11f866bc] */
  EAX = (r32((uint32_t)(0x11f866bc)));
  /* 11f823d7 push esi */
  push32((uint32_t)(ESI));
  /* 11f823d8 push edi */
  push32((uint32_t)(EDI));
  /* 11f823d9 mov edi, dword ptr [0x11f85050] */
  EDI = (r32((uint32_t)(0x11f85050)));
  /* 11f823df lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11f823e2:;
  /* 11f823e2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f823e7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f823ec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f823ee call edi */
  call_ind((uint32_t)(EDI), 0x11f823f0u);
  /* 11f823f0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f823f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f823f7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f823f9 call edi */
  call_ind((uint32_t)(EDI), 0x11f823fbu);
  /* 11f823fb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11f823fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82400 push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f82406 call ebp */
  call_ind((uint32_t)(EBP), 0x11f82408u);
  /* 11f82408 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8240b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f8240c cmp ebx, dword ptr [0x11f866b8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f866b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82412 jl 0x11f823e2 */
  if ((C.sf!=C.of)) goto L_11f823e2;
  /* 11f82414 pop edi */
  EDI = (pop32());
  /* 11f82415 pop esi */
  ESI = (pop32());
L_11f82416:;
  /* 11f82416 push dword ptr [0x11f866bc] */
  push32((uint32_t)(r32((uint32_t)(0x11f866bc))));
  /* 11f8241c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8241e push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f82424 call ebp */
  call_ind((uint32_t)(EBP), 0x11f82426u);
  /* 11f82426 push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f8242c call dword ptr [0x11f85058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85058))), 0x11f82432u);
  /* 11f82432 pop ebp */
  EBP = (pop32());
  /* 11f82433 pop ebx */
  EBX = (pop32());
  /* 11f82434 ret  */
  ESPCHK(0x11f823c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002435 @ 0x11f82435 (57 bytes, 18 insns) */
void f_11f82435(void) {
  FTRACE(0x11f82435u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82435 mov eax, dword ptr [0x11f864b0] */
  EAX = (r32((uint32_t)(0x11f864b0)));
  /* 11f8243a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8243d je 0x11f8244c */
  if (C.zf) goto L_11f8244c;
  /* 11f8243f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f82441 jne 0x11f8246d */
  if (!C.zf) goto L_11f8246d;
  /* 11f82443 cmp dword ptr [0x11f864b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f864b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8244a jne 0x11f8246d */
  if (!C.zf) goto L_11f8246d;
L_11f8244c:;
  /* 11f8244c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11f82451 call 0x11f8246e */
  push32(0x11f82456u); f_11f8246e();
  /* 11f82456 mov eax, dword ptr [0x11f86604] */
  EAX = (r32((uint32_t)(0x11f86604)));
  /* 11f8245b pop ecx */
  ECX = (pop32());
  /* 11f8245c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8245e je 0x11f82462 */
  if (C.zf) goto L_11f82462;
  /* 11f82460 call eax */
  call_ind((uint32_t)(EAX), 0x11f82462u);
L_11f82462:;
  /* 11f82462 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f82467 call 0x11f8246e */
  push32(0x11f8246cu); f_11f8246e();
  /* 11f8246c pop ecx */
  ECX = (pop32());
L_11f8246d:;
  /* 11f8246d ret  */
  ESPCHK(0x11f82435u, _esp0);
  ESP += 4; return;
}

/* FUN_1000246e @ 0x11f8246e (339 bytes, 100 insns) */
void f_11f8246e(void) {
  FTRACE(0x11f8246eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8246e push ebp */
  push32((uint32_t)(EBP));
  /* 11f8246f mov ebp, esp */
  EBP = (ESP);
  /* 11f82471 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82477 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8247a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f8247c mov eax, 0x11f86108 */
  EAX = (0x11f86108u);
L_11f82481:;
  /* 11f82481 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82483 je 0x11f82490 */
  if (C.zf) goto L_11f82490;
  /* 11f82485 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82488 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82489 cmp eax, 0x11f86198 */
  { uint32_t _a=(EAX),_b=(0x11f86198u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8248e jl 0x11f82481 */
  if ((C.sf!=C.of)) goto L_11f82481;
L_11f82490:;
  /* 11f82490 push esi */
  push32((uint32_t)(ESI));
  /* 11f82491 mov esi, ecx */
  ESI = (ECX);
  /* 11f82493 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11f82496 cmp edx, dword ptr [esi + 0x11f86108] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11f86108))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8249c jne 0x11f825be */
  if (!C.zf) goto L_11f825be;
  /* 11f824a2 mov eax, dword ptr [0x11f864b0] */
  EAX = (r32((uint32_t)(0x11f864b0)));
  /* 11f824a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f824aa je 0x11f82598 */
  if (C.zf) goto L_11f82598;
  /* 11f824b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f824b2 jne 0x11f824c1 */
  if (!C.zf) goto L_11f824c1;
  /* 11f824b4 cmp dword ptr [0x11f864b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f864b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f824bb je 0x11f82598 */
  if (C.zf) goto L_11f82598;
L_11f824c1:;
  /* 11f824c1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f824c7 je 0x11f825be */
  if (C.zf) goto L_11f825be;
  /* 11f824cd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f824d3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f824d8 push eax */
  push32((uint32_t)(EAX));
  /* 11f824d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f824db call dword ptr [0x11f850a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f850a4))), 0x11f824e1u);
  /* 11f824e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f824e3 jne 0x11f824f8 */
  if (!C.zf) goto L_11f824f8;
  /* 11f824e5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f824eb push 0x11f85400 */
  push32((uint32_t)(0x11f85400u));
  /* 11f824f0 push eax */
  push32((uint32_t)(EAX));
  /* 11f824f1 call 0x11f82830 */
  push32(0x11f824f6u); f_11f82830();
  /* 11f824f6 pop ecx */
  ECX = (pop32());
  /* 11f824f7 pop ecx */
  ECX = (pop32());
L_11f824f8:;
  /* 11f824f8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f824fe push edi */
  push32((uint32_t)(EDI));
  /* 11f824ff push eax */
  push32((uint32_t)(EAX));
  /* 11f82500 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11f82506 call 0x11f82920 */
  push32(0x11f8250bu); f_11f82920();
  /* 11f8250b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f8250c pop ecx */
  ECX = (pop32());
  /* 11f8250d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82510 jbe 0x11f8253b */
  if ((C.cf||C.zf)) goto L_11f8253b;
  /* 11f82512 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f82518 push eax */
  push32((uint32_t)(EAX));
  /* 11f82519 call 0x11f82920 */
  push32(0x11f8251eu); f_11f82920();
  /* 11f8251e mov edi, eax */
  EDI = (EAX);
  /* 11f82520 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f82526 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82529 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f8252b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8252d push 0x11f853fc */
  push32((uint32_t)(0x11f853fcu));
  /* 11f82532 push edi */
  push32((uint32_t)(EDI));
  /* 11f82533 call 0x11f839a0 */
  push32(0x11f82538u); f_11f839a0();
  /* 11f82538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8253b:;
  /* 11f8253b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f82541 push 0x11f853e0 */
  push32((uint32_t)(0x11f853e0u));
  /* 11f82546 push eax */
  push32((uint32_t)(EAX));
  /* 11f82547 call 0x11f82830 */
  push32(0x11f8254cu); f_11f82830();
  /* 11f8254c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f82552 push edi */
  push32((uint32_t)(EDI));
  /* 11f82553 push eax */
  push32((uint32_t)(EAX));
  /* 11f82554 call 0x11f82840 */
  push32(0x11f82559u); f_11f82840();
  /* 11f82559 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f8255f push 0x11f853dc */
  push32((uint32_t)(0x11f853dcu));
  /* 11f82564 push eax */
  push32((uint32_t)(EAX));
  /* 11f82565 call 0x11f82840 */
  push32(0x11f8256au); f_11f82840();
  /* 11f8256a push dword ptr [esi + 0x11f8610c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11f8610c))));
  /* 11f82570 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f82576 push eax */
  push32((uint32_t)(EAX));
  /* 11f82577 call 0x11f82840 */
  push32(0x11f8257cu); f_11f82840();
  /* 11f8257c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11f82581 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f82587 push 0x11f853b4 */
  push32((uint32_t)(0x11f853b4u));
  /* 11f8258c push eax */
  push32((uint32_t)(EAX));
  /* 11f8258d call 0x11f8390e */
  push32(0x11f82592u); f_11f8390e();
  /* 11f82592 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82595 pop edi */
  EDI = (pop32());
  /* 11f82596 jmp 0x11f825be */
  goto L_11f825be;
L_11f82598:;
  /* 11f82598 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f8259b lea esi, [esi + 0x11f8610c] */
  ESI = ((uint32_t)(ESI + 0x11f8610c));
  /* 11f825a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f825a3 push eax */
  push32((uint32_t)(EAX));
  /* 11f825a4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f825a6 call 0x11f82920 */
  push32(0x11f825abu); f_11f82920();
  /* 11f825ab pop ecx */
  ECX = (pop32());
  /* 11f825ac push eax */
  push32((uint32_t)(EAX));
  /* 11f825ad push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f825af push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f825b1 call dword ptr [0x11f85094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85094))), 0x11f825b7u);
  /* 11f825b7 push eax */
  push32((uint32_t)(EAX));
  /* 11f825b8 call dword ptr [0x11f85048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85048))), 0x11f825beu);
L_11f825be:;
  /* 11f825be pop esi */
  ESI = (pop32());
  /* 11f825bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f825c0 ret  */
  ESPCHK(0x11f8246eu, _esp0);
  ESP += 4; return;
}

/* FUN_100025c1 @ 0x11f825c1 (41 bytes, 12 insns) */
void f_11f825c1(void) {
  FTRACE(0x11f825c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f825c1 push esi */
  push32((uint32_t)(ESI));
  /* 11f825c2 mov esi, dword ptr [0x11f85044] */
  ESI = (r32((uint32_t)(0x11f85044)));
  /* 11f825c8 push dword ptr [0x11f861dc] */
  push32((uint32_t)(r32((uint32_t)(0x11f861dc))));
  /* 11f825ce call esi */
  call_ind((uint32_t)(ESI), 0x11f825d0u);
  /* 11f825d0 push dword ptr [0x11f861cc] */
  push32((uint32_t)(r32((uint32_t)(0x11f861cc))));
  /* 11f825d6 call esi */
  call_ind((uint32_t)(ESI), 0x11f825d8u);
  /* 11f825d8 push dword ptr [0x11f861bc] */
  push32((uint32_t)(r32((uint32_t)(0x11f861bc))));
  /* 11f825de call esi */
  call_ind((uint32_t)(ESI), 0x11f825e0u);
  /* 11f825e0 push dword ptr [0x11f8619c] */
  push32((uint32_t)(r32((uint32_t)(0x11f8619c))));
  /* 11f825e6 call esi */
  call_ind((uint32_t)(ESI), 0x11f825e8u);
  /* 11f825e8 pop esi */
  ESI = (pop32());
  /* 11f825e9 ret  */
  ESPCHK(0x11f825c1u, _esp0);
  ESP += 4; return;
}

/* FUN_100025ea @ 0x11f825ea (108 bytes, 34 insns) */
void f_11f825ea(void) {
  FTRACE(0x11f825eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f825ea push esi */
  push32((uint32_t)(ESI));
  /* 11f825eb push edi */
  push32((uint32_t)(EDI));
  /* 11f825ec mov edi, dword ptr [0x11f850a0] */
  EDI = (r32((uint32_t)(0x11f850a0)));
  /* 11f825f2 mov esi, 0x11f86198 */
  ESI = (0x11f86198u);
L_11f825f7:;
  /* 11f825f7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f825f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f825fb je 0x11f82628 */
  if (C.zf) goto L_11f82628;
  /* 11f825fd cmp esi, 0x11f861dc */
  { uint32_t _a=(ESI),_b=(0x11f861dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82603 je 0x11f82628 */
  if (C.zf) goto L_11f82628;
  /* 11f82605 cmp esi, 0x11f861cc */
  { uint32_t _a=(ESI),_b=(0x11f861ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8260b je 0x11f82628 */
  if (C.zf) goto L_11f82628;
  /* 11f8260d cmp esi, 0x11f861bc */
  { uint32_t _a=(ESI),_b=(0x11f861bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82613 je 0x11f82628 */
  if (C.zf) goto L_11f82628;
  /* 11f82615 cmp esi, 0x11f8619c */
  { uint32_t _a=(ESI),_b=(0x11f8619cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8261b je 0x11f82628 */
  if (C.zf) goto L_11f82628;
  /* 11f8261d push eax */
  push32((uint32_t)(EAX));
  /* 11f8261e call edi */
  call_ind((uint32_t)(EDI), 0x11f82620u);
  /* 11f82620 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f82622 call 0x11f82759 */
  push32(0x11f82627u); f_11f82759();
  /* 11f82627 pop ecx */
  ECX = (pop32());
L_11f82628:;
  /* 11f82628 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8262b cmp esi, 0x11f86258 */
  { uint32_t _a=(ESI),_b=(0x11f86258u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82631 jl 0x11f825f7 */
  if ((C.sf!=C.of)) goto L_11f825f7;
  /* 11f82633 push dword ptr [0x11f861bc] */
  push32((uint32_t)(r32((uint32_t)(0x11f861bc))));
  /* 11f82639 call edi */
  call_ind((uint32_t)(EDI), 0x11f8263bu);
  /* 11f8263b push dword ptr [0x11f861cc] */
  push32((uint32_t)(r32((uint32_t)(0x11f861cc))));
  /* 11f82641 call edi */
  call_ind((uint32_t)(EDI), 0x11f82643u);
  /* 11f82643 push dword ptr [0x11f861dc] */
  push32((uint32_t)(r32((uint32_t)(0x11f861dc))));
  /* 11f82649 call edi */
  call_ind((uint32_t)(EDI), 0x11f8264bu);
  /* 11f8264b push dword ptr [0x11f8619c] */
  push32((uint32_t)(r32((uint32_t)(0x11f8619c))));
  /* 11f82651 call edi */
  call_ind((uint32_t)(EDI), 0x11f82653u);
  /* 11f82653 pop edi */
  EDI = (pop32());
  /* 11f82654 pop esi */
  ESI = (pop32());
  /* 11f82655 ret  */
  ESPCHK(0x11f825eau, _esp0);
  ESP += 4; return;
}

/* FUN_10002656 @ 0x11f82656 (97 bytes, 37 insns) */
void f_11f82656(void) {
  FTRACE(0x11f82656u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82656 push ebp */
  push32((uint32_t)(EBP));
  /* 11f82657 mov ebp, esp */
  EBP = (ESP);
  /* 11f82659 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8265c push esi */
  push32((uint32_t)(ESI));
  /* 11f8265d cmp dword ptr [eax*4 + 0x11f86198], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11f86198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82665 lea esi, [eax*4 + 0x11f86198] */
  ESI = ((uint32_t)(EAX*4 + 0x11f86198));
  /* 11f8266c jne 0x11f826ac */
  if (!C.zf) goto L_11f826ac;
  /* 11f8266e push edi */
  push32((uint32_t)(EDI));
  /* 11f8266f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f82671 call 0x11f827a1 */
  push32(0x11f82676u); f_11f827a1();
  /* 11f82676 mov edi, eax */
  EDI = (EAX);
  /* 11f82678 pop ecx */
  ECX = (pop32());
  /* 11f82679 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f8267b jne 0x11f82685 */
  if (!C.zf) goto L_11f82685;
  /* 11f8267d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f8267f call 0x11f81ac6 */
  push32(0x11f82684u); f_11f81ac6();
  /* 11f82684 pop ecx */
  ECX = (pop32());
L_11f82685:;
  /* 11f82685 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f82687 call 0x11f82656 */
  push32(0x11f8268cu); f_11f82656();
  /* 11f8268c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8268f pop ecx */
  ECX = (pop32());
  /* 11f82690 push edi */
  push32((uint32_t)(EDI));
  /* 11f82691 jne 0x11f8269d */
  if (!C.zf) goto L_11f8269d;
  /* 11f82693 call dword ptr [0x11f85044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85044))), 0x11f82699u);
  /* 11f82699 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f8269b jmp 0x11f826a3 */
  goto L_11f826a3;
L_11f8269d:;
  /* 11f8269d call 0x11f82759 */
  push32(0x11f826a2u); f_11f82759();
  /* 11f826a2 pop ecx */
  ECX = (pop32());
L_11f826a3:;
  /* 11f826a3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f826a5 call 0x11f826b7 */
  push32(0x11f826aau); f_11f826b7();
  /* 11f826aa pop ecx */
  ECX = (pop32());
  /* 11f826ab pop edi */
  EDI = (pop32());
L_11f826ac:;
  /* 11f826ac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f826ae call dword ptr [0x11f85040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85040))), 0x11f826b4u);
  /* 11f826b4 pop esi */
  ESI = (pop32());
  /* 11f826b5 pop ebp */
  EBP = (pop32());
  /* 11f826b6 ret  */
  ESPCHK(0x11f82656u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b7 @ 0x11f826b7 (21 bytes, 7 insns) */
void f_11f826b7(void) {
  FTRACE(0x11f826b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f826b7 push ebp */
  push32((uint32_t)(EBP));
  /* 11f826b8 mov ebp, esp */
  EBP = (ESP);
  /* 11f826ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f826bd push dword ptr [eax*4 + 0x11f86198] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11f86198))));
  /* 11f826c4 call dword ptr [0x11f8503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8503c))), 0x11f826cau);
  /* 11f826ca pop ebp */
  EBP = (pop32());
  /* 11f826cb ret  */
  ESPCHK(0x11f826b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100026cc @ 0x11f826cc (141 bytes, 56 insns) */
void f_11f826cc(void) {
  FTRACE(0x11f826ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f826cc push ebx */
  push32((uint32_t)(EBX));
  /* 11f826cd push esi */
  push32((uint32_t)(ESI));
  /* 11f826ce mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f826d2 push edi */
  push32((uint32_t)(EDI));
  /* 11f826d3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f826d8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f826db mov ebx, esi */
  EBX = (ESI);
  /* 11f826dd ja 0x11f826ec */
  if ((!C.cf&&!C.zf)) goto L_11f826ec;
  /* 11f826df test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f826e1 jne 0x11f826e6 */
  if (!C.zf) goto L_11f826e6;
  /* 11f826e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f826e5 pop esi */
  ESI = (pop32());
L_11f826e6:;
  /* 11f826e6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f826e9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11f826ec:;
  /* 11f826ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f826ee cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f826f1 ja 0x11f8272d */
  if ((!C.cf&&!C.zf)) goto L_11f8272d;
  /* 11f826f3 cmp ebx, dword ptr [0x11f863e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f863e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f826f9 ja 0x11f82718 */
  if ((!C.cf&&!C.zf)) goto L_11f82718;
  /* 11f826fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11f826fd call 0x11f82656 */
  push32(0x11f82702u); f_11f82656();
  /* 11f82702 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82703 call 0x11f83459 */
  push32(0x11f82708u); f_11f83459();
  /* 11f82708 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f8270a mov edi, eax */
  EDI = (EAX);
  /* 11f8270c call 0x11f826b7 */
  push32(0x11f82711u); f_11f826b7();
  /* 11f82711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82714 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f82716 jne 0x11f82743 */
  if (!C.zf) goto L_11f82743;
L_11f82718:;
  /* 11f82718 push esi */
  push32((uint32_t)(ESI));
  /* 11f82719 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f8271b push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f82721 call dword ptr [0x11f85038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85038))), 0x11f82727u);
  /* 11f82727 mov edi, eax */
  EDI = (EAX);
  /* 11f82729 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f8272b jne 0x11f8274f */
  if (!C.zf) goto L_11f8274f;
L_11f8272d:;
  /* 11f8272d cmp dword ptr [0x11f8667c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f8667c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82734 je 0x11f8274f */
  if (C.zf) goto L_11f8274f;
  /* 11f82736 push esi */
  push32((uint32_t)(ESI));
  /* 11f82737 call 0x11f83af8 */
  push32(0x11f8273cu); f_11f83af8();
  /* 11f8273c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8273e pop ecx */
  ECX = (pop32());
  /* 11f8273f je 0x11f82755 */
  if (C.zf) goto L_11f82755;
  /* 11f82741 jmp 0x11f826ec */
  goto L_11f826ec;
L_11f82743:;
  /* 11f82743 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82746 push edi */
  push32((uint32_t)(EDI));
  /* 11f82747 call 0x11f83aa0 */
  push32(0x11f8274cu); f_11f83aa0();
  /* 11f8274c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f8274f:;
  /* 11f8274f mov eax, edi */
  EAX = (EDI);
L_11f82751:;
  /* 11f82751 pop edi */
  EDI = (pop32());
  /* 11f82752 pop esi */
  ESI = (pop32());
  /* 11f82753 pop ebx */
  EBX = (pop32());
  /* 11f82754 ret  */
  ESPCHK(0x11f826ccu, _esp0);
  ESP += 4; return;
L_11f82755:;
  /* 11f82755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82757 jmp 0x11f82751 */
  goto L_11f82751;
}

/* FUN_10002759 @ 0x11f82759 (72 bytes, 29 insns) */
void f_11f82759(void) {
  FTRACE(0x11f82759u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82759 push esi */
  push32((uint32_t)(ESI));
  /* 11f8275a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f8275e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f82760 je 0x11f8279f */
  if (C.zf) goto L_11f8279f;
  /* 11f82762 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f82764 call 0x11f82656 */
  push32(0x11f82769u); f_11f82656();
  /* 11f82769 push esi */
  push32((uint32_t)(ESI));
  /* 11f8276a call 0x11f83103 */
  push32(0x11f8276fu); f_11f83103();
  /* 11f8276f pop ecx */
  ECX = (pop32());
  /* 11f82770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f82772 pop ecx */
  ECX = (pop32());
  /* 11f82773 je 0x11f82788 */
  if (C.zf) goto L_11f82788;
  /* 11f82775 push esi */
  push32((uint32_t)(ESI));
  /* 11f82776 push eax */
  push32((uint32_t)(EAX));
  /* 11f82777 call 0x11f8312e */
  push32(0x11f8277cu); f_11f8312e();
  /* 11f8277c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f8277e call 0x11f826b7 */
  push32(0x11f82783u); f_11f826b7();
  /* 11f82783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82786 pop esi */
  ESI = (pop32());
  /* 11f82787 ret  */
  ESPCHK(0x11f82759u, _esp0);
  ESP += 4; return;
L_11f82788:;
  /* 11f82788 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f8278a call 0x11f826b7 */
  push32(0x11f8278fu); f_11f826b7();
  /* 11f8278f pop ecx */
  ECX = (pop32());
  /* 11f82790 push esi */
  push32((uint32_t)(ESI));
  /* 11f82791 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82793 push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f82799 call dword ptr [0x11f8504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8504c))), 0x11f8279fu);
L_11f8279f:;
  /* 11f8279f pop esi */
  ESI = (pop32());
  /* 11f827a0 ret  */
  ESPCHK(0x11f82759u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11f827a1 (18 bytes, 6 insns) */
void f_11f827a1(void) {
  FTRACE(0x11f827a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f827a1 push dword ptr [0x11f8667c] */
  push32((uint32_t)(r32((uint32_t)(0x11f8667c))));
  /* 11f827a7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f827ab call 0x11f827b3 */
  push32(0x11f827b0u); f_11f827b3();
  /* 11f827b0 pop ecx */
  ECX = (pop32());
  /* 11f827b1 pop ecx */
  ECX = (pop32());
  /* 11f827b2 ret  */
  ESPCHK(0x11f827a1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11f827b3 (44 bytes, 16 insns) */
void f_11f827b3(void) {
  FTRACE(0x11f827b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f827b3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f827b8 ja 0x11f827dc */
  if ((!C.cf&&!C.zf)) goto L_11f827dc;
L_11f827ba:;
  /* 11f827ba push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f827be call 0x11f827df */
  push32(0x11f827c3u); f_11f827df();
  /* 11f827c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f827c5 pop ecx */
  ECX = (pop32());
  /* 11f827c6 jne 0x11f827de */
  if (!C.zf) goto L_11f827de;
  /* 11f827c8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f827cc je 0x11f827de */
  if (C.zf) goto L_11f827de;
  /* 11f827ce push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f827d2 call 0x11f83af8 */
  push32(0x11f827d7u); f_11f83af8();
  /* 11f827d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f827d9 pop ecx */
  ECX = (pop32());
  /* 11f827da jne 0x11f827ba */
  if (!C.zf) goto L_11f827ba;
L_11f827dc:;
  /* 11f827dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f827de:;
  /* 11f827de ret  */
  ESPCHK(0x11f827b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100027df @ 0x11f827df (78 bytes, 30 insns) */
void f_11f827df(void) {
  FTRACE(0x11f827dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f827df push esi */
  push32((uint32_t)(ESI));
  /* 11f827e0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f827e4 cmp esi, dword ptr [0x11f863e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f863e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f827ea push edi */
  push32((uint32_t)(EDI));
  /* 11f827eb ja 0x11f8280e */
  if ((!C.cf&&!C.zf)) goto L_11f8280e;
  /* 11f827ed push 9 */
  push32((uint32_t)(0x9u));
  /* 11f827ef call 0x11f82656 */
  push32(0x11f827f4u); f_11f82656();
  /* 11f827f4 push esi */
  push32((uint32_t)(ESI));
  /* 11f827f5 call 0x11f83459 */
  push32(0x11f827fau); f_11f83459();
  /* 11f827fa push 9 */
  push32((uint32_t)(0x9u));
  /* 11f827fc mov edi, eax */
  EDI = (EAX);
  /* 11f827fe call 0x11f826b7 */
  push32(0x11f82803u); f_11f826b7();
  /* 11f82803 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82806 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f82808 je 0x11f8280e */
  if (C.zf) goto L_11f8280e;
  /* 11f8280a mov eax, edi */
  EAX = (EDI);
  /* 11f8280c jmp 0x11f8282a */
  goto L_11f8282a;
L_11f8280e:;
  /* 11f8280e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f82810 jne 0x11f82815 */
  if (!C.zf) goto L_11f82815;
  /* 11f82812 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f82814 pop esi */
  ESI = (pop32());
L_11f82815:;
  /* 11f82815 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82818 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f8281b push esi */
  push32((uint32_t)(ESI));
  /* 11f8281c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f8281e push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f82824 call dword ptr [0x11f85038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85038))), 0x11f8282au);
L_11f8282a:;
  /* 11f8282a pop edi */
  EDI = (pop32());
  /* 11f8282b pop esi */
  ESI = (pop32());
  /* 11f8282c ret  */
  ESPCHK(0x11f827dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x11f82830 (7 bytes, 3 insns) */
void f_11f82830(void) {
  FTRACE(0x11f82830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82830 push edi */
  push32((uint32_t)(EDI));
  /* 11f82831 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f82835 jmp 0x11f828a1 */
  jmp_ind(0x11f828a1u); return;
}

/* FUN_10002840 @ 0x11f82840 (224 bytes, 84 insns) */
void f_11f82840(void) {
  FTRACE(0x11f82840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82840 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f82844 push edi */
  push32((uint32_t)(EDI));
  /* 11f82845 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f8284b je 0x11f8285c */
  if (C.zf) goto L_11f8285c;
L_11f8284d:;
  /* 11f8284d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f8284f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82850 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f82852 je 0x11f8288f */
  if (C.zf) goto L_11f8288f;
  /* 11f82854 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f8285a jne 0x11f8284d */
  if (!C.zf) goto L_11f8284d;
L_11f8285c:;
  /* 11f8285c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f8285e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f82863 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82865 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f82868 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f8286a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8286d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f82872 je 0x11f8285c */
  if (C.zf) goto L_11f8285c;
  /* 11f82874 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f82877 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f82879 je 0x11f8289e */
  if (C.zf) goto L_11f8289e;
  /* 11f8287b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f8287d je 0x11f82899 */
  if (C.zf) goto L_11f82899;
  /* 11f8287f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f82884 je 0x11f82894 */
  if (C.zf) goto L_11f82894;
  /* 11f82886 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f8288b je 0x11f8288f */
  if (C.zf) goto L_11f8288f;
  /* 11f8288d jmp 0x11f8285c */
  goto L_11f8285c;
L_11f8288f:;
  /* 11f8288f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11f82892 jmp 0x11f828a1 */
  goto L_11f828a1;
L_11f82894:;
  /* 11f82894 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11f82897 jmp 0x11f828a1 */
  goto L_11f828a1;
L_11f82899:;
  /* 11f82899 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11f8289c jmp 0x11f828a1 */
  goto L_11f828a1;
L_11f8289e:;
  /* 11f8289e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11f828a1:;
  /* 11f828a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f828a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f828ab je 0x11f828c6 */
  if (C.zf) goto L_11f828c6;
L_11f828ad:;
  /* 11f828ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f828af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f828b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f828b2 je 0x11f82918 */
  if (C.zf) goto L_11f82918;
  /* 11f828b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f828b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f828b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f828bd jne 0x11f828ad */
  if (!C.zf) goto L_11f828ad;
  /* 11f828bf jmp 0x11f828c6 */
  goto L_11f828c6;
L_11f828c1:;
  /* 11f828c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f828c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f828c6:;
  /* 11f828c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f828cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f828cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f828cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f828d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f828d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f828d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f828d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f828de je 0x11f828c1 */
  if (C.zf) goto L_11f828c1;
  /* 11f828e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f828e2 je 0x11f82918 */
  if (C.zf) goto L_11f82918;
  /* 11f828e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f828e6 je 0x11f8290f */
  if (C.zf) goto L_11f8290f;
  /* 11f828e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f828ee je 0x11f82902 */
  if (C.zf) goto L_11f82902;
  /* 11f828f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f828f6 je 0x11f828fa */
  if (C.zf) goto L_11f828fa;
  /* 11f828f8 jmp 0x11f828c1 */
  goto L_11f828c1;
L_11f828fa:;
  /* 11f828fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f828fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f82900 pop edi */
  EDI = (pop32());
  /* 11f82901 ret  */
  ESPCHK(0x11f82840u, _esp0);
  ESP += 4; return;
L_11f82902:;
  /* 11f82902 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f82905 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f82909 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11f8290d pop edi */
  EDI = (pop32());
  /* 11f8290e ret  */
  ESPCHK(0x11f82840u, _esp0);
  ESP += 4; return;
L_11f8290f:;
  /* 11f8290f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f82912 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f82916 pop edi */
  EDI = (pop32());
  /* 11f82917 ret  */
  ESPCHK(0x11f82840u, _esp0);
  ESP += 4; return;
L_11f82918:;
  /* 11f82918 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f8291a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f8291e pop edi */
  EDI = (pop32());
  /* 11f8291f ret  */
  ESPCHK(0x11f82840u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11f82920 (123 bytes, 44 insns) */
void f_11f82920(void) {
  FTRACE(0x11f82920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82920 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f82924 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f8292a je 0x11f82940 */
  if (C.zf) goto L_11f82940;
L_11f8292c:;
  /* 11f8292c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f8292e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f8292f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f82931 je 0x11f82973 */
  if (C.zf) goto L_11f82973;
  /* 11f82933 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f82939 jne 0x11f8292c */
  if (!C.zf) goto L_11f8292c;
  /* 11f8293b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f82940:;
  /* 11f82940 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f82942 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f82947 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82949 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f8294c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f8294e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82951 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f82956 je 0x11f82940 */
  if (C.zf) goto L_11f82940;
  /* 11f82958 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f8295b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f8295d je 0x11f82991 */
  if (C.zf) goto L_11f82991;
  /* 11f8295f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f82961 je 0x11f82987 */
  if (C.zf) goto L_11f82987;
  /* 11f82963 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f82968 je 0x11f8297d */
  if (C.zf) goto L_11f8297d;
  /* 11f8296a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f8296f je 0x11f82973 */
  if (C.zf) goto L_11f82973;
  /* 11f82971 jmp 0x11f82940 */
  goto L_11f82940;
L_11f82973:;
  /* 11f82973 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11f82976 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f8297a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8297c ret  */
  ESPCHK(0x11f82920u, _esp0);
  ESP += 4; return;
L_11f8297d:;
  /* 11f8297d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11f82980 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f82984 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82986 ret  */
  ESPCHK(0x11f82920u, _esp0);
  ESP += 4; return;
L_11f82987:;
  /* 11f82987 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11f8298a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f8298e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82990 ret  */
  ESPCHK(0x11f82920u, _esp0);
  ESP += 4; return;
L_11f82991:;
  /* 11f82991 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11f82994 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f82998 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8299a ret  */
  ESPCHK(0x11f82920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000299b @ 0x11f8299b (429 bytes, 143 insns) */
void f_11f8299b(void) {
  FTRACE(0x11f8299bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8299b push ebp */
  push32((uint32_t)(EBP));
  /* 11f8299c mov ebp, esp */
  EBP = (ESP);
  /* 11f8299e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f829a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f829a2 push esi */
  push32((uint32_t)(ESI));
  /* 11f829a3 push edi */
  push32((uint32_t)(EDI));
  /* 11f829a4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f829a6 call 0x11f82656 */
  push32(0x11f829abu); f_11f82656();
  /* 11f829ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f829ae call 0x11f82b48 */
  push32(0x11f829b3u); f_11f82b48();
  /* 11f829b3 mov ebx, eax */
  EBX = (EAX);
  /* 11f829b5 pop ecx */
  ECX = (pop32());
  /* 11f829b6 cmp ebx, dword ptr [0x11f866c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f866c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f829bc pop ecx */
  ECX = (pop32());
  /* 11f829bd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f829c0 jne 0x11f829c9 */
  if (!C.zf) goto L_11f829c9;
L_11f829c2:;
  /* 11f829c2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f829c4 jmp 0x11f82b39 */
  goto L_11f82b39;
L_11f829c9:;
  /* 11f829c9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f829cb je 0x11f82b27 */
  if (C.zf) goto L_11f82b27;
  /* 11f829d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f829d3 mov eax, 0x11f862e8 */
  EAX = (0x11f862e8u);
L_11f829d8:;
  /* 11f829d8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f829da je 0x11f82a50 */
  if (C.zf) goto L_11f82a50;
  /* 11f829dc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f829df inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f829e0 cmp eax, 0x11f863d8 */
  { uint32_t _a=(EAX),_b=(0x11f863d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f829e5 jl 0x11f829d8 */
  if ((C.sf!=C.of)) goto L_11f829d8;
  /* 11f829e7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f829ea push eax */
  push32((uint32_t)(EAX));
  /* 11f829eb push ebx */
  push32((uint32_t)(EBX));
  /* 11f829ec call dword ptr [0x11f85034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85034))), 0x11f829f2u);
  /* 11f829f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f829f4 pop esi */
  ESI = (pop32());
  /* 11f829f5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f829f7 jne 0x11f82b1e */
  if (!C.zf) goto L_11f82b1e;
  /* 11f829fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f829ff and dword ptr [0x11f868e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f868e4)))&(0x0u); w32((uint32_t)(0x11f868e4), (_r)); fl_logic(_r,32); }
  /* 11f82a06 pop ecx */
  ECX = (pop32());
  /* 11f82a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82a09 mov edi, 0x11f867e0 */
  EDI = (0x11f867e0u);
  /* 11f82a0e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82a11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f82a13 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f82a14 mov dword ptr [0x11f866c0], ebx */
  w32((uint32_t)(0x11f866c0), (EBX));
  /* 11f82a1a jbe 0x11f82b0b */
  if ((C.cf||C.zf)) goto L_11f82b0b;
  /* 11f82a20 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82a24 je 0x11f82ae6 */
  if (C.zf) goto L_11f82ae6;
  /* 11f82a2a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11f82a2d:;
  /* 11f82a2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f82a2f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f82a31 je 0x11f82ae6 */
  if (C.zf) goto L_11f82ae6;
  /* 11f82a37 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11f82a3b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11f82a3e:;
  /* 11f82a3e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82a40 ja 0x11f82ada */
  if ((!C.cf&&!C.zf)) goto L_11f82ada;
  /* 11f82a46 or byte ptr [eax + 0x11f867e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(0x4u); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82a4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82a4e jmp 0x11f82a3e */
  goto L_11f82a3e;
L_11f82a50:;
  /* 11f82a50 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f82a54 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f82a56 pop ecx */
  ECX = (pop32());
  /* 11f82a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82a59 mov edi, 0x11f867e0 */
  EDI = (0x11f867e0u);
  /* 11f82a5e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11f82a61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f82a63 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f82a66 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f82a67 lea ebx, [esi + 0x11f862f8] */
  EBX = ((uint32_t)(ESI + 0x11f862f8));
L_11f82a6d:;
  /* 11f82a6d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82a70 mov ecx, ebx */
  ECX = (EBX);
  /* 11f82a72 je 0x11f82aa0 */
  if (C.zf) goto L_11f82aa0;
L_11f82a74:;
  /* 11f82a74 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f82a77 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f82a79 je 0x11f82aa0 */
  if (C.zf) goto L_11f82aa0;
  /* 11f82a7b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11f82a7e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11f82a81 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82a83 ja 0x11f82a99 */
  if ((!C.cf&&!C.zf)) goto L_11f82a99;
  /* 11f82a85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f82a88 mov dl, byte ptr [edx + 0x11f862e0] */
  DL = (r8((uint32_t)(EDX + 0x11f862e0)));
L_11f82a8e:;
  /* 11f82a8e or byte ptr [eax + 0x11f867e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(DL); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82a94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82a95 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82a97 jbe 0x11f82a8e */
  if ((C.cf||C.zf)) goto L_11f82a8e;
L_11f82a99:;
  /* 11f82a99 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82a9a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82a9b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82a9e jne 0x11f82a74 */
  if (!C.zf) goto L_11f82a74;
L_11f82aa0:;
  /* 11f82aa0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f82aa3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82aa6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82aaa jb 0x11f82a6d */
  if (C.cf) goto L_11f82a6d;
  /* 11f82aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f82aaf mov dword ptr [0x11f866dc], 1 */
  w32((uint32_t)(0x11f866dc), (0x1u));
  /* 11f82ab9 push eax */
  push32((uint32_t)(EAX));
  /* 11f82aba mov dword ptr [0x11f866c0], eax */
  w32((uint32_t)(0x11f866c0), (EAX));
  /* 11f82abf call 0x11f82b92 */
  push32(0x11f82ac4u); f_11f82b92();
  /* 11f82ac4 lea esi, [esi + 0x11f862ec] */
  ESI = ((uint32_t)(ESI + 0x11f862ec));
  /* 11f82aca mov edi, 0x11f866d0 */
  EDI = (0x11f866d0u);
  /* 11f82acf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f82ad0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f82ad1 pop ecx */
  ECX = (pop32());
  /* 11f82ad2 mov dword ptr [0x11f868e4], eax */
  w32((uint32_t)(0x11f868e4), (EAX));
  /* 11f82ad7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f82ad8 jmp 0x11f82b2c */
  goto L_11f82b2c;
L_11f82ada:;
  /* 11f82ada inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82adb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82adc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f82ae0 jne 0x11f82a2d */
  if (!C.zf) goto L_11f82a2d;
L_11f82ae6:;
  /* 11f82ae6 mov eax, esi */
  EAX = (ESI);
L_11f82ae8:;
  /* 11f82ae8 or byte ptr [eax + 0x11f867e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(0x8u); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82aef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82af0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82af5 jb 0x11f82ae8 */
  if (C.cf) goto L_11f82ae8;
  /* 11f82af7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82af8 call 0x11f82b92 */
  push32(0x11f82afdu); f_11f82b92();
  /* 11f82afd pop ecx */
  ECX = (pop32());
  /* 11f82afe mov dword ptr [0x11f868e4], eax */
  w32((uint32_t)(0x11f868e4), (EAX));
  /* 11f82b03 mov dword ptr [0x11f866dc], esi */
  w32((uint32_t)(0x11f866dc), (ESI));
  /* 11f82b09 jmp 0x11f82b12 */
  goto L_11f82b12;
L_11f82b0b:;
  /* 11f82b0b and dword ptr [0x11f866dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f866dc)))&(0x0u); w32((uint32_t)(0x11f866dc), (_r)); fl_logic(_r,32); }
L_11f82b12:;
  /* 11f82b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82b14 mov edi, 0x11f866d0 */
  EDI = (0x11f866d0u);
  /* 11f82b19 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f82b1a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f82b1b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f82b1c jmp 0x11f82b2c */
  goto L_11f82b2c;
L_11f82b1e:;
  /* 11f82b1e cmp dword ptr [0x11f86668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f86668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82b25 je 0x11f82b36 */
  if (C.zf) goto L_11f82b36;
L_11f82b27:;
  /* 11f82b27 call 0x11f82bc5 */
  push32(0x11f82b2cu); f_11f82bc5();
L_11f82b2c:;
  /* 11f82b2c call 0x11f82bee */
  push32(0x11f82b31u); f_11f82bee();
  /* 11f82b31 jmp 0x11f829c2 */
  goto L_11f829c2;
L_11f82b36:;
  /* 11f82b36 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11f82b39:;
  /* 11f82b39 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f82b3b call 0x11f826b7 */
  push32(0x11f82b40u); f_11f826b7();
  /* 11f82b40 pop ecx */
  ECX = (pop32());
  /* 11f82b41 mov eax, esi */
  EAX = (ESI);
  /* 11f82b43 pop edi */
  EDI = (pop32());
  /* 11f82b44 pop esi */
  ESI = (pop32());
  /* 11f82b45 pop ebx */
  EBX = (pop32());
  /* 11f82b46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f82b47 ret  */
  ESPCHK(0x11f8299bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b48 @ 0x11f82b48 (74 bytes, 15 insns) */
void f_11f82b48(void) {
  FTRACE(0x11f82b48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82b48 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f82b4c and dword ptr [0x11f86668], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f86668)))&(0x0u); w32((uint32_t)(0x11f86668), (_r)); fl_logic(_r,32); }
  /* 11f82b53 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82b56 jne 0x11f82b68 */
  if (!C.zf) goto L_11f82b68;
  /* 11f82b58 mov dword ptr [0x11f86668], 1 */
  w32((uint32_t)(0x11f86668), (0x1u));
  /* 11f82b62 jmp dword ptr [0x11f8502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f8502c)))); return;
L_11f82b68:;
  /* 11f82b68 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82b6b jne 0x11f82b7d */
  if (!C.zf) goto L_11f82b7d;
  /* 11f82b6d mov dword ptr [0x11f86668], 1 */
  w32((uint32_t)(0x11f86668), (0x1u));
  /* 11f82b77 jmp dword ptr [0x11f85030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f85030)))); return;
L_11f82b7d:;
  /* 11f82b7d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82b80 jne 0x11f82b91 */
  if (!C.zf) goto L_11f82b91;
  /* 11f82b82 mov eax, dword ptr [0x11f86698] */
  EAX = (r32((uint32_t)(0x11f86698)));
  /* 11f82b87 mov dword ptr [0x11f86668], 1 */
  w32((uint32_t)(0x11f86668), (0x1u));
L_11f82b91:;
  /* 11f82b91 ret  */
  ESPCHK(0x11f82b48u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b92 @ 0x11f82b92 (51 bytes, 19 insns) */
void f_11f82b92(void) {
  FTRACE(0x11f82b92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82b92 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f82b96 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82b9b je 0x11f82bbf */
  if (C.zf) goto L_11f82bbf;
  /* 11f82b9d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82ba0 je 0x11f82bb9 */
  if (C.zf) goto L_11f82bb9;
  /* 11f82ba2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82ba5 je 0x11f82bb3 */
  if (C.zf) goto L_11f82bb3;
  /* 11f82ba7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f82ba8 je 0x11f82bad */
  if (C.zf) goto L_11f82bad;
  /* 11f82baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82bac ret  */
  ESPCHK(0x11f82b92u, _esp0);
  ESP += 4; return;
L_11f82bad:;
  /* 11f82bad mov eax, 0x404 */
  EAX = (0x404u);
  /* 11f82bb2 ret  */
  ESPCHK(0x11f82b92u, _esp0);
  ESP += 4; return;
L_11f82bb3:;
  /* 11f82bb3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11f82bb8 ret  */
  ESPCHK(0x11f82b92u, _esp0);
  ESP += 4; return;
L_11f82bb9:;
  /* 11f82bb9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11f82bbe ret  */
  ESPCHK(0x11f82b92u, _esp0);
  ESP += 4; return;
L_11f82bbf:;
  /* 11f82bbf mov eax, 0x411 */
  EAX = (0x411u);
  /* 11f82bc4 ret  */
  ESPCHK(0x11f82b92u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc5 @ 0x11f82bc5 (41 bytes, 17 insns) */
void f_11f82bc5(void) {
  FTRACE(0x11f82bc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82bc5 push edi */
  push32((uint32_t)(EDI));
  /* 11f82bc6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f82bc8 pop ecx */
  ECX = (pop32());
  /* 11f82bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82bcb mov edi, 0x11f867e0 */
  EDI = (0x11f867e0u);
  /* 11f82bd0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f82bd2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f82bd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82bd5 mov edi, 0x11f866d0 */
  EDI = (0x11f866d0u);
  /* 11f82bda mov dword ptr [0x11f866c0], eax */
  w32((uint32_t)(0x11f866c0), (EAX));
  /* 11f82bdf mov dword ptr [0x11f866dc], eax */
  w32((uint32_t)(0x11f866dc), (EAX));
  /* 11f82be4 mov dword ptr [0x11f868e4], eax */
  w32((uint32_t)(0x11f868e4), (EAX));
  /* 11f82be9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f82bea stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f82beb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f82bec pop edi */
  EDI = (pop32());
  /* 11f82bed ret  */
  ESPCHK(0x11f82bc5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bee @ 0x11f82bee (389 bytes, 124 insns) */
void f_11f82bee(void) {
  FTRACE(0x11f82beeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82bee push ebp */
  push32((uint32_t)(EBP));
  /* 11f82bef mov ebp, esp */
  EBP = (ESP);
  /* 11f82bf1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82bf7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f82bfa push esi */
  push32((uint32_t)(ESI));
  /* 11f82bfb push eax */
  push32((uint32_t)(EAX));
  /* 11f82bfc push dword ptr [0x11f866c0] */
  push32((uint32_t)(r32((uint32_t)(0x11f866c0))));
  /* 11f82c02 call dword ptr [0x11f85034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85034))), 0x11f82c08u);
  /* 11f82c08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82c0b jne 0x11f82d27 */
  if (!C.zf) goto L_11f82d27;
  /* 11f82c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82c13 mov esi, 0x100 */
  ESI = (0x100u);
L_11f82c18:;
  /* 11f82c18 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11f82c1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82c20 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82c22 jb 0x11f82c18 */
  if (C.cf) goto L_11f82c18;
  /* 11f82c24 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11f82c27 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11f82c2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f82c30 je 0x11f82c69 */
  if (C.zf) goto L_11f82c69;
  /* 11f82c32 push ebx */
  push32((uint32_t)(EBX));
  /* 11f82c33 push edi */
  push32((uint32_t)(EDI));
  /* 11f82c34 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11f82c37:;
  /* 11f82c37 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11f82c3a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11f82c3d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82c3f ja 0x11f82c5e */
  if ((!C.cf&&!C.zf)) goto L_11f82c5e;
  /* 11f82c41 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82c43 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11f82c4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82c4b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11f82c50 mov ebx, ecx */
  EBX = (ECX);
  /* 11f82c52 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82c55 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f82c57 mov ecx, ebx */
  ECX = (EBX);
  /* 11f82c59 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f82c5c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11f82c5e:;
  /* 11f82c5e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f82c5f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f82c60 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11f82c63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f82c65 jne 0x11f82c37 */
  if (!C.zf) goto L_11f82c37;
  /* 11f82c67 pop edi */
  EDI = (pop32());
  /* 11f82c68 pop ebx */
  EBX = (pop32());
L_11f82c69:;
  /* 11f82c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82c6b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11f82c71 push dword ptr [0x11f868e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e4))));
  /* 11f82c77 push dword ptr [0x11f866c0] */
  push32((uint32_t)(r32((uint32_t)(0x11f866c0))));
  /* 11f82c7d push eax */
  push32((uint32_t)(EAX));
  /* 11f82c7e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f82c84 push esi */
  push32((uint32_t)(ESI));
  /* 11f82c85 push eax */
  push32((uint32_t)(EAX));
  /* 11f82c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f82c88 call 0x11f83d62 */
  push32(0x11f82c8du); f_11f83d62();
  /* 11f82c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82c8f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11f82c95 push dword ptr [0x11f866c0] */
  push32((uint32_t)(r32((uint32_t)(0x11f866c0))));
  /* 11f82c9b push esi */
  push32((uint32_t)(ESI));
  /* 11f82c9c push eax */
  push32((uint32_t)(EAX));
  /* 11f82c9d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f82ca3 push esi */
  push32((uint32_t)(ESI));
  /* 11f82ca4 push eax */
  push32((uint32_t)(EAX));
  /* 11f82ca5 push esi */
  push32((uint32_t)(ESI));
  /* 11f82ca6 push dword ptr [0x11f868e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e4))));
  /* 11f82cac call 0x11f83b13 */
  push32(0x11f82cb1u); f_11f83b13();
  /* 11f82cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f82cb3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11f82cb9 push dword ptr [0x11f866c0] */
  push32((uint32_t)(r32((uint32_t)(0x11f866c0))));
  /* 11f82cbf push esi */
  push32((uint32_t)(ESI));
  /* 11f82cc0 push eax */
  push32((uint32_t)(EAX));
  /* 11f82cc1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f82cc7 push esi */
  push32((uint32_t)(ESI));
  /* 11f82cc8 push eax */
  push32((uint32_t)(EAX));
  /* 11f82cc9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f82cce push dword ptr [0x11f868e4] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e4))));
  /* 11f82cd4 call 0x11f83b13 */
  push32(0x11f82cd9u); f_11f83b13();
  /* 11f82cd9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82cde lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11f82ce4:;
  /* 11f82ce4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11f82ce7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11f82cea je 0x11f82d02 */
  if (C.zf) goto L_11f82d02;
  /* 11f82cec or byte ptr [eax + 0x11f867e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(0x10u); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82cf3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11f82cfa:;
  /* 11f82cfa mov byte ptr [eax + 0x11f866e0], dl */
  w8((uint32_t)(EAX + 0x11f866e0), (DL));
  /* 11f82d00 jmp 0x11f82d1e */
  goto L_11f82d1e;
L_11f82d02:;
  /* 11f82d02 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11f82d05 je 0x11f82d17 */
  if (C.zf) goto L_11f82d17;
  /* 11f82d07 or byte ptr [eax + 0x11f867e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(0x20u); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82d0e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11f82d15 jmp 0x11f82cfa */
  goto L_11f82cfa;
L_11f82d17:;
  /* 11f82d17 and byte ptr [eax + 0x11f866e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f866e0)))&(0x0u); w8((uint32_t)(EAX + 0x11f866e0), (_r)); fl_logic(_r,8); }
L_11f82d1e:;
  /* 11f82d1e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82d1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82d20 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f82d21 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d23 jb 0x11f82ce4 */
  if (C.cf) goto L_11f82ce4;
  /* 11f82d25 jmp 0x11f82d70 */
  goto L_11f82d70;
L_11f82d27:;
  /* 11f82d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f82d29 mov esi, 0x100 */
  ESI = (0x100u);
L_11f82d2e:;
  /* 11f82d2e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d31 jb 0x11f82d4c */
  if (C.cf) goto L_11f82d4c;
  /* 11f82d33 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d36 ja 0x11f82d4c */
  if ((!C.cf&&!C.zf)) goto L_11f82d4c;
  /* 11f82d38 or byte ptr [eax + 0x11f867e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(0x10u); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82d3f mov cl, al */
  CL = (AL);
  /* 11f82d41 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11f82d44:;
  /* 11f82d44 mov byte ptr [eax + 0x11f866e0], cl */
  w8((uint32_t)(EAX + 0x11f866e0), (CL));
  /* 11f82d4a jmp 0x11f82d6b */
  goto L_11f82d6b;
L_11f82d4c:;
  /* 11f82d4c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d4f jb 0x11f82d64 */
  if (C.cf) goto L_11f82d64;
  /* 11f82d51 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d54 ja 0x11f82d64 */
  if ((!C.cf&&!C.zf)) goto L_11f82d64;
  /* 11f82d56 or byte ptr [eax + 0x11f867e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f867e1)))|(0x20u); w8((uint32_t)(EAX + 0x11f867e1), (_r)); fl_logic(_r,8); }
  /* 11f82d5d mov cl, al */
  CL = (AL);
  /* 11f82d5f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f82d62 jmp 0x11f82d44 */
  goto L_11f82d44;
L_11f82d64:;
  /* 11f82d64 and byte ptr [eax + 0x11f866e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f866e0)))&(0x0u); w8((uint32_t)(EAX + 0x11f866e0), (_r)); fl_logic(_r,8); }
L_11f82d6b:;
  /* 11f82d6b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f82d6c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d6e jb 0x11f82d2e */
  if (C.cf) goto L_11f82d2e;
L_11f82d70:;
  /* 11f82d70 pop esi */
  ESI = (pop32());
  /* 11f82d71 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f82d72 ret  */
  ESPCHK(0x11f82beeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d73 @ 0x11f82d73 (28 bytes, 7 insns) */
void f_11f82d73(void) {
  FTRACE(0x11f82d73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82d73 cmp dword ptr [0x11f86a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f86a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82d7a jne 0x11f82d8e */
  if (!C.zf) goto L_11f82d8e;
  /* 11f82d7c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11f82d7e call 0x11f8299b */
  push32(0x11f82d83u); f_11f8299b();
  /* 11f82d83 pop ecx */
  ECX = (pop32());
  /* 11f82d84 mov dword ptr [0x11f86a08], 1 */
  w32((uint32_t)(0x11f86a08), (0x1u));
L_11f82d8e:;
  /* 11f82d8e ret  */
  ESPCHK(0x11f82d73u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d90 @ 0x11f82d90 (664 bytes, 262 insns) [15 switch table(s)] */
void f_11f82d90(void) {
  FTRACE(0x11f82d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f82d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f82d91 mov ebp, esp */
  EBP = (ESP);
  /* 11f82d93 push edi */
  push32((uint32_t)(EDI));
  /* 11f82d94 push esi */
  push32((uint32_t)(ESI));
  /* 11f82d95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f82d98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f82d9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f82d9e mov eax, ecx */
  EAX = (ECX);
  /* 11f82da0 mov edx, ecx */
  EDX = (ECX);
  /* 11f82da2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82da4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82da6 jbe 0x11f82db0 */
  if ((C.cf||C.zf)) goto L_11f82db0;
  /* 11f82da8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82daa jb 0x11f82f28 */
  if (C.cf) goto L_11f82f28;
L_11f82db0:;
  /* 11f82db0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f82db6 jne 0x11f82dcc */
  if (!C.zf) goto L_11f82dcc;
  /* 11f82db8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82dbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f82dbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82dc1 jb 0x11f82dec */
  if (C.cf) goto L_11f82dec;
  /* 11f82dc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82dc5 jmp dword ptr [edx*4 + 0x11f82ed8] */
  switch (EDX) {
    case 0: goto L_11f82ee8;
    case 1: goto L_11f82ef0;
    case 2: goto L_11f82efc;
    case 3: goto L_11f82f10;
    default: x86_unimpl("switch@0x11f82dc5 out of table"); return;
  }
L_11f82dcc:;
  /* 11f82dcc mov eax, edi */
  EAX = (EDI);
  /* 11f82dce mov edx, 3 */
  EDX = (0x3u);
  /* 11f82dd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82dd6 jb 0x11f82de4 */
  if (C.cf) goto L_11f82de4;
  /* 11f82dd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f82ddb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82ddd jmp dword ptr [eax*4 + 0x11f82df0] */
  switch (EAX) {
    case 1: goto L_11f82e00;
    case 2: goto L_11f82e2c;
    case 3: goto L_11f82e50;
    default: x86_unimpl("switch@0x11f82ddd out of table"); return;
  }
L_11f82de4:;
  /* 11f82de4 jmp dword ptr [ecx*4 + 0x11f82ee8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f82ee8)))); return;
  /* 11f82deb nop  */
  /* nop */
L_11f82dec:;
  /* 11f82dec jmp dword ptr [ecx*4 + 0x11f82e6c] */
  switch (ECX) {
    case 0: goto L_11f82ecf;
    case 1: goto L_11f82ebc;
    case 2: goto L_11f82eb4;
    case 3: goto L_11f82eac;
    case 4: goto L_11f82ea4;
    case 5: goto L_11f82e9c;
    case 6: goto L_11f82e94;
    case 7: goto L_11f82e8c;
    default: x86_unimpl("switch@0x11f82dec out of table"); return;
  }
  /* 11f82df3 nop  */
  /* nop */
L_11f82e00:;
  /* 11f82e00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f82e02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f82e04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f82e06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f82e09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f82e0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f82e0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82e12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f82e15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82e18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82e1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82e1e jb 0x11f82dec */
  if (C.cf) goto L_11f82dec;
  /* 11f82e20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82e22 jmp dword ptr [edx*4 + 0x11f82ed8] */
  switch (EDX) {
    case 0: goto L_11f82ee8;
    case 1: goto L_11f82ef0;
    case 2: goto L_11f82efc;
    case 3: goto L_11f82f10;
    default: x86_unimpl("switch@0x11f82e22 out of table"); return;
  }
  /* 11f82e29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f82e2c:;
  /* 11f82e2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f82e2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f82e30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f82e32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f82e35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82e38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f82e3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82e3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82e41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82e44 jb 0x11f82dec */
  if (C.cf) goto L_11f82dec;
  /* 11f82e46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82e48 jmp dword ptr [edx*4 + 0x11f82ed8] */
  switch (EDX) {
    case 0: goto L_11f82ee8;
    case 1: goto L_11f82ef0;
    case 2: goto L_11f82efc;
    case 3: goto L_11f82f10;
    default: x86_unimpl("switch@0x11f82e48 out of table"); return;
  }
  /* 11f82e4f nop  */
  /* nop */
L_11f82e50:;
  /* 11f82e50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f82e52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f82e54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f82e56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f82e57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82e5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f82e5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82e5e jb 0x11f82dec */
  if (C.cf) goto L_11f82dec;
  /* 11f82e60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82e62 jmp dword ptr [edx*4 + 0x11f82ed8] */
  switch (EDX) {
    case 0: goto L_11f82ee8;
    case 1: goto L_11f82ef0;
    case 2: goto L_11f82efc;
    case 3: goto L_11f82f10;
    default: x86_unimpl("switch@0x11f82e62 out of table"); return;
  }
  /* 11f82e69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f82e8c:;
  /* 11f82e8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f82e90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f82e94:;
  /* 11f82e94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f82e98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f82e9c:;
  /* 11f82e9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f82ea0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f82ea4:;
  /* 11f82ea4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f82ea8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f82eac:;
  /* 11f82eac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f82eb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f82eb4:;
  /* 11f82eb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f82eb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f82ebc:;
  /* 11f82ebc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f82ec0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f82ec4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f82ecb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f82ecd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f82ecf:;
  /* 11f82ecf jmp dword ptr [edx*4 + 0x11f82ed8] */
  switch (EDX) {
    case 0: goto L_11f82ee8;
    case 1: goto L_11f82ef0;
    case 2: goto L_11f82efc;
    case 3: goto L_11f82f10;
    default: x86_unimpl("switch@0x11f82ecf out of table"); return;
  }
  /* 11f82ed6 mov edi, edi */
  EDI = (EDI);
L_11f82ee8:;
  /* 11f82ee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f82eeb pop esi */
  ESI = (pop32());
  /* 11f82eec pop edi */
  EDI = (pop32());
  /* 11f82eed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f82eee ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f82eef nop  */
  /* nop */
L_11f82ef0:;
  /* 11f82ef0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f82ef2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f82ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f82ef7 pop esi */
  ESI = (pop32());
  /* 11f82ef8 pop edi */
  EDI = (pop32());
  /* 11f82ef9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f82efa ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f82efb nop  */
  /* nop */
L_11f82efc:;
  /* 11f82efc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f82efe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f82f00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f82f03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f82f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f82f09 pop esi */
  ESI = (pop32());
  /* 11f82f0a pop edi */
  EDI = (pop32());
  /* 11f82f0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f82f0c ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f82f0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f82f10:;
  /* 11f82f10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f82f12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f82f14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f82f17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f82f1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f82f1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f82f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f82f23 pop esi */
  ESI = (pop32());
  /* 11f82f24 pop edi */
  EDI = (pop32());
  /* 11f82f25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f82f26 ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f82f27 nop  */
  /* nop */
L_11f82f28:;
  /* 11f82f28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f82f2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f82f30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f82f36 jne 0x11f82f5c */
  if (!C.zf) goto L_11f82f5c;
  /* 11f82f38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82f3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f82f3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82f41 jb 0x11f82f50 */
  if (C.cf) goto L_11f82f50;
  /* 11f82f43 std  */
  C.df=1;
  /* 11f82f44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82f46 cld  */
  C.df=0;
  /* 11f82f47 jmp dword ptr [edx*4 + 0x11f83070] */
  switch (EDX) {
    case 0: goto L_11f83080;
    case 1: goto L_11f83088;
    case 2: goto L_11f83098;
    case 3: goto L_11f830ac;
    default: x86_unimpl("switch@0x11f82f47 out of table"); return;
  }
  /* 11f82f4e mov edi, edi */
  EDI = (EDI);
L_11f82f50:;
  /* 11f82f50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f82f52 jmp dword ptr [ecx*4 + 0x11f83020] */
  switch (ECX) {
    case 0: goto L_11f83067;
    default: x86_unimpl("switch@0x11f82f52 out of table"); return;
  }
  /* 11f82f59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f82f5c:;
  /* 11f82f5c mov eax, edi */
  EAX = (EDI);
  /* 11f82f5e mov edx, 3 */
  EDX = (0x3u);
  /* 11f82f63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82f66 jb 0x11f82f74 */
  if (C.cf) goto L_11f82f74;
  /* 11f82f68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f82f6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82f6d jmp dword ptr [eax*4 + 0x11f82f78] */
  switch (EAX) {
    case 1: goto L_11f82f88;
    case 2: goto L_11f82fa8;
    case 3: goto L_11f82fd0;
    default: x86_unimpl("switch@0x11f82f6d out of table"); return;
  }
L_11f82f74:;
  /* 11f82f74 jmp dword ptr [ecx*4 + 0x11f83070] */
  switch (ECX) {
    case 0: goto L_11f83080;
    case 1: goto L_11f83088;
    case 2: goto L_11f83098;
    case 3: goto L_11f830ac;
    default: x86_unimpl("switch@0x11f82f74 out of table"); return;
  }
  /* 11f82f7b nop  */
  /* nop */
L_11f82f88:;
  /* 11f82f88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f82f8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f82f8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f82f90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f82f91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82f94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f82f95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82f98 jb 0x11f82f50 */
  if (C.cf) goto L_11f82f50;
  /* 11f82f9a std  */
  C.df=1;
  /* 11f82f9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82f9d cld  */
  C.df=0;
  /* 11f82f9e jmp dword ptr [edx*4 + 0x11f83070] */
  switch (EDX) {
    case 0: goto L_11f83080;
    case 1: goto L_11f83088;
    case 2: goto L_11f83098;
    case 3: goto L_11f830ac;
    default: x86_unimpl("switch@0x11f82f9e out of table"); return;
  }
  /* 11f82fa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f82fa8:;
  /* 11f82fa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f82fab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f82fad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f82fb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f82fb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82fb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f82fb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82fbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82fbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82fc2 jb 0x11f82f50 */
  if (C.cf) goto L_11f82f50;
  /* 11f82fc4 std  */
  C.df=1;
  /* 11f82fc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82fc7 cld  */
  C.df=0;
  /* 11f82fc8 jmp dword ptr [edx*4 + 0x11f83070] */
  switch (EDX) {
    case 0: goto L_11f83080;
    case 1: goto L_11f83088;
    case 2: goto L_11f83098;
    case 3: goto L_11f830ac;
    default: x86_unimpl("switch@0x11f82fc8 out of table"); return;
  }
  /* 11f82fcf nop  */
  /* nop */
L_11f82fd0:;
  /* 11f82fd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f82fd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f82fd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f82fd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f82fdb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f82fde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f82fe1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f82fe4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f82fe7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82fea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f82fed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f82ff0 jb 0x11f82f50 */
  if (C.cf) goto L_11f82f50;
  /* 11f82ff6 std  */
  C.df=1;
  /* 11f82ff7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f82ff9 cld  */
  C.df=0;
  /* 11f82ffa jmp dword ptr [edx*4 + 0x11f83070] */
  switch (EDX) {
    case 0: goto L_11f83080;
    case 1: goto L_11f83088;
    case 2: goto L_11f83098;
    case 3: goto L_11f830ac;
    default: x86_unimpl("switch@0x11f82ffa out of table"); return;
  }
  /* 11f83001 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f83004 and al, 0x30 */
  { uint32_t _r=(AL)&(0x30u); AL = (_r); fl_logic(_r,8); }
  /* 11f83006 clc  */
  x86_unimpl("clc @ 0x11f83006");
  /* 11f83007 adc dword ptr [eax + esi], ebp */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8300a clc  */
  x86_unimpl("clc @ 0x11f8300a");
  /* 11f8300b adc dword ptr [eax + esi], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8300e clc  */
  x86_unimpl("clc @ 0x11f8300e");
  /* 11f8300f adc dword ptr [eax + esi], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ESI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f83012 clc  */
  x86_unimpl("clc @ 0x11f83012");
  /* 11f83013 adc dword ptr [eax + esi - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1 + -0x8))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ESI*1 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f83017 adc dword ptr [eax + esi - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1 + -0x8))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ESI*1 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8301b adc dword ptr [eax + esi - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + ESI*1 + -0x8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ESI*1 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f83024 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f83028 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f8302c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f83030 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f83034 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f83038 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f8303c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f83040 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f83044 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f83048 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f8304c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f83050 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f83054 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f83058 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f8305c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f83063 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83065 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f83067:;
  /* 11f83067 jmp dword ptr [edx*4 + 0x11f83070] */
  switch (EDX) {
    case 0: goto L_11f83080;
    case 1: goto L_11f83088;
    case 2: goto L_11f83098;
    case 3: goto L_11f830ac;
    default: x86_unimpl("switch@0x11f83067 out of table"); return;
  }
  /* 11f8306e mov edi, edi */
  EDI = (EDI);
L_11f83080:;
  /* 11f83080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83083 pop esi */
  ESI = (pop32());
  /* 11f83084 pop edi */
  EDI = (pop32());
  /* 11f83085 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f83086 ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f83087 nop  */
  /* nop */
L_11f83088:;
  /* 11f83088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f8308b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f8308e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83091 pop esi */
  ESI = (pop32());
  /* 11f83092 pop edi */
  EDI = (pop32());
  /* 11f83093 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f83094 ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f83095 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f83098:;
  /* 11f83098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f8309b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f8309e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f830a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f830a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f830a7 pop esi */
  ESI = (pop32());
  /* 11f830a8 pop edi */
  EDI = (pop32());
  /* 11f830a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f830aa ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
  /* 11f830ab nop  */
  /* nop */
L_11f830ac:;
  /* 11f830ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f830af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f830b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f830b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f830b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f830bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f830be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f830c1 pop esi */
  ESI = (pop32());
  /* 11f830c2 pop edi */
  EDI = (pop32());
  /* 11f830c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f830c4 ret  */
  ESPCHK(0x11f82d90u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c5 @ 0x11f830c5 (62 bytes, 15 insns) */
void f_11f830c5(void) {
  FTRACE(0x11f830c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f830c5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11f830ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f830cc push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f830d2 call dword ptr [0x11f85038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85038))), 0x11f830d8u);
  /* 11f830d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f830da mov dword ptr [0x11f866bc], eax */
  w32((uint32_t)(0x11f866bc), (EAX));
  /* 11f830df jne 0x11f830e2 */
  if (!C.zf) goto L_11f830e2;
  /* 11f830e1 ret  */
  ESPCHK(0x11f830c5u, _esp0);
  ESP += 4; return;
L_11f830e2:;
  /* 11f830e2 and dword ptr [0x11f866b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f866b4)))&(0x0u); w32((uint32_t)(0x11f866b4), (_r)); fl_logic(_r,32); }
  /* 11f830e9 and dword ptr [0x11f866b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f866b8)))&(0x0u); w32((uint32_t)(0x11f866b8), (_r)); fl_logic(_r,32); }
  /* 11f830f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f830f2 mov dword ptr [0x11f866b0], eax */
  w32((uint32_t)(0x11f866b0), (EAX));
  /* 11f830f7 mov dword ptr [0x11f866a8], 0x10 */
  w32((uint32_t)(0x11f866a8), (0x10u));
  /* 11f83101 pop eax */
  EAX = (pop32());
  /* 11f83102 ret  */
  ESPCHK(0x11f830c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003103 @ 0x11f83103 (43 bytes, 14 insns) */
void f_11f83103(void) {
  FTRACE(0x11f83103u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83103 mov eax, dword ptr [0x11f866b8] */
  EAX = (r32((uint32_t)(0x11f866b8)));
  /* 11f83108 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f8310b mov eax, dword ptr [0x11f866bc] */
  EAX = (r32((uint32_t)(0x11f866bc)));
  /* 11f83110 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11f83113:;
  /* 11f83113 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83115 jae 0x11f8312b */
  if (!C.cf) goto L_11f8312b;
  /* 11f83117 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f8311b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8311e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83124 jb 0x11f8312d */
  if (C.cf) goto L_11f8312d;
  /* 11f83126 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83129 jmp 0x11f83113 */
  goto L_11f83113;
L_11f8312b:;
  /* 11f8312b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f8312d:;
  /* 11f8312d ret  */
  ESPCHK(0x11f83103u, _esp0);
  ESP += 4; return;
}

/* FUN_1000312e @ 0x11f8312e (811 bytes, 264 insns) */
void f_11f8312e(void) {
  FTRACE(0x11f8312eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8312e push ebp */
  push32((uint32_t)(EBP));
  /* 11f8312f mov ebp, esp */
  EBP = (ESP);
  /* 11f83131 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83134 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f83137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8313a push ebx */
  push32((uint32_t)(EBX));
  /* 11f8313b push esi */
  push32((uint32_t)(ESI));
  /* 11f8313c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f8313f mov esi, edx */
  ESI = (EDX);
  /* 11f83141 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83144 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f83147 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8314a push edi */
  push32((uint32_t)(EDI));
  /* 11f8314b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11f8314e mov ecx, esi */
  ECX = (ESI);
  /* 11f83150 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11f83153 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f83159 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f8315a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f8315d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f83164 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f83167 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f8316a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11f8316d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11f83170 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f83173 jne 0x11f831f4 */
  if (!C.zf) goto L_11f831f4;
  /* 11f83175 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f83178 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f8317a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f8317b pop edi */
  EDI = (pop32());
  /* 11f8317c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f8317f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83181 jbe 0x11f83186 */
  if ((C.cf||C.zf)) goto L_11f83186;
  /* 11f83183 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f83186:;
  /* 11f83186 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f8318a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8318e jne 0x11f831d8 */
  if (!C.zf) goto L_11f831d8;
  /* 11f83190 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f83193 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83196 jae 0x11f831b4 */
  if (!C.cf) goto L_11f831b4;
  /* 11f83198 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f8319d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f8319f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f831a3 not edi */
  EDI = (~(EDI));
  /* 11f831a5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f831a9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f831ab jne 0x11f831d8 */
  if (!C.zf) goto L_11f831d8;
  /* 11f831ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f831b0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f831b2 jmp 0x11f831d8 */
  goto L_11f831d8;
L_11f831b4:;
  /* 11f831b4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f831b7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f831bc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f831be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f831c1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f831c5 not edi */
  EDI = (~(EDI));
  /* 11f831c7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f831ce dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f831d0 jne 0x11f831d8 */
  if (!C.zf) goto L_11f831d8;
  /* 11f831d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f831d5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f831d8:;
  /* 11f831d8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11f831dc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f831e0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f831e3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f831e7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11f831eb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f831ee mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f831f1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11f831f4:;
  /* 11f831f4 mov edi, ebx */
  EDI = (EBX);
  /* 11f831f6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f831f9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f831fa cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f831fd jbe 0x11f83202 */
  if ((C.cf||C.zf)) goto L_11f83202;
  /* 11f831ff push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f83201 pop edi */
  EDI = (pop32());
L_11f83202:;
  /* 11f83202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f83205 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f83208 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f8320b jne 0x11f832b1 */
  if (!C.zf) goto L_11f832b1;
  /* 11f83211 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83214 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f83217 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f8321a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f8321c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f8321f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83220 pop edx */
  EDX = (pop32());
  /* 11f83221 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83223 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f83226 jbe 0x11f8322d */
  if ((C.cf||C.zf)) goto L_11f8322d;
  /* 11f83228 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f8322b mov ecx, edx */
  ECX = (EDX);
L_11f8322d:;
  /* 11f8322d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83230 mov edi, ebx */
  EDI = (EBX);
  /* 11f83232 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f83235 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f83238 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f83239 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8323b jbe 0x11f8323f */
  if ((C.cf||C.zf)) goto L_11f8323f;
  /* 11f8323d mov edi, edx */
  EDI = (EDX);
L_11f8323f:;
  /* 11f8323f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83241 je 0x11f832ae */
  if (C.zf) goto L_11f832ae;
  /* 11f83243 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f83246 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f83249 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8324c jne 0x11f83296 */
  if (!C.zf) goto L_11f83296;
  /* 11f8324e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f83251 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83254 jae 0x11f83272 */
  if (!C.cf) goto L_11f83272;
  /* 11f83256 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f8325b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f8325d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f83261 not edx */
  EDX = (~(EDX));
  /* 11f83263 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f83267 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f83269 jne 0x11f83296 */
  if (!C.zf) goto L_11f83296;
  /* 11f8326b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8326e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f83270 jmp 0x11f83296 */
  goto L_11f83296;
L_11f83272:;
  /* 11f83272 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83275 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f8327a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f8327c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f8327f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f83283 not edx */
  EDX = (~(EDX));
  /* 11f83285 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f8328c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f8328e jne 0x11f83296 */
  if (!C.zf) goto L_11f83296;
  /* 11f83290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83293 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f83296:;
  /* 11f83296 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f83299 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f8329c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f8329f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f832a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f832a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f832a8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f832ab mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f832ae:;
  /* 11f832ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11f832b1:;
  /* 11f832b1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f832b5 jne 0x11f832c0 */
  if (!C.zf) goto L_11f832c0;
  /* 11f832b7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f832ba je 0x11f83349 */
  if (C.zf) goto L_11f83349;
L_11f832c0:;
  /* 11f832c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f832c3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11f832c6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f832c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f832cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f832cf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11f832d2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f832d5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f832d8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f832db mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f832de mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f832e1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f832e4 jne 0x11f83349 */
  if (!C.zf) goto L_11f83349;
  /* 11f832e6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11f832ea cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f832ed mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11f832f0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f832f2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11f832f6 jae 0x11f8331d */
  if (!C.cf) goto L_11f8331d;
  /* 11f832f8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f832fc jne 0x11f8330c */
  if (!C.zf) goto L_11f8330c;
  /* 11f832fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f83303 mov ecx, edi */
  ECX = (EDI);
  /* 11f83305 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f83307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8330a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11f8330c:;
  /* 11f8330c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f83311 mov ecx, edi */
  ECX = (EDI);
  /* 11f83313 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f83315 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11f83319 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f8331b jmp 0x11f83346 */
  goto L_11f83346;
L_11f8331d:;
  /* 11f8331d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f83321 jne 0x11f83333 */
  if (!C.zf) goto L_11f83333;
  /* 11f83323 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f83326 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f8332b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f8332d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83330 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f83333:;
  /* 11f83333 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f83336 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f8333b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f8333d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11f83344 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11f83346:;
  /* 11f83346 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11f83349:;
  /* 11f83349 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f8334c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11f8334e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11f83352 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11f83354 jne 0x11f83454 */
  if (!C.zf) goto L_11f83454;
  /* 11f8335a mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f8335f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83361 je 0x11f83446 */
  if (C.zf) goto L_11f83446;
  /* 11f83367 mov ecx, dword ptr [0x11f866ac] */
  ECX = (r32((uint32_t)(0x11f866ac)));
  /* 11f8336d mov edi, dword ptr [0x11f85050] */
  EDI = (r32((uint32_t)(0x11f85050)));
  /* 11f83373 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11f83376 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83379 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11f8337e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f83383 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83384 push ecx */
  push32((uint32_t)(ECX));
  /* 11f83385 call edi */
  call_ind((uint32_t)(EDI), 0x11f83387u);
  /* 11f83387 mov ecx, dword ptr [0x11f866ac] */
  ECX = (r32((uint32_t)(0x11f866ac)));
  /* 11f8338d mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f83392 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f83397 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f83399 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f8339c mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f833a1 mov ecx, dword ptr [0x11f866ac] */
  ECX = (r32((uint32_t)(0x11f866ac)));
  /* 11f833a7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f833aa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f833b2 mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f833b7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f833ba dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11f833bd mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f833c2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f833c5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f833c9 jne 0x11f833d4 */
  if (!C.zf) goto L_11f833d4;
  /* 11f833cb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f833cf mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
L_11f833d4:;
  /* 11f833d4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f833d8 jne 0x11f83446 */
  if (!C.zf) goto L_11f83446;
  /* 11f833da push ebx */
  push32((uint32_t)(EBX));
  /* 11f833db push 0 */
  push32((uint32_t)(0x0u));
  /* 11f833dd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11f833e0 call edi */
  call_ind((uint32_t)(EDI), 0x11f833e2u);
  /* 11f833e2 mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f833e7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11f833ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11f833ec push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f833f2 call dword ptr [0x11f8504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8504c))), 0x11f833f8u);
  /* 11f833f8 mov eax, dword ptr [0x11f866b8] */
  EAX = (r32((uint32_t)(0x11f866b8)));
  /* 11f833fd mov edx, dword ptr [0x11f866bc] */
  EDX = (r32((uint32_t)(0x11f866bc)));
  /* 11f83403 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f83406 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f83409 mov ecx, eax */
  ECX = (EAX);
  /* 11f8340b mov eax, dword ptr [0x11f866b4] */
  EAX = (r32((uint32_t)(0x11f866b4)));
  /* 11f83410 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83412 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11f83416 push ecx */
  push32((uint32_t)(ECX));
  /* 11f83417 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11f8341a push ecx */
  push32((uint32_t)(ECX));
  /* 11f8341b push eax */
  push32((uint32_t)(EAX));
  /* 11f8341c call 0x11f83eb0 */
  push32(0x11f83421u); f_11f83eb0();
  /* 11f83421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83424 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83427 dec dword ptr [0x11f866b8] */
  { uint32_t _r=(r32((uint32_t)(0x11f866b8)))-1; w32((uint32_t)(0x11f866b8), (_r)); fl_dec(_r,32); }
  /* 11f8342d cmp eax, dword ptr [0x11f866b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f866b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83433 jbe 0x11f83438 */
  if ((C.cf||C.zf)) goto L_11f83438;
  /* 11f83435 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f83438:;
  /* 11f83438 mov ecx, dword ptr [0x11f866bc] */
  ECX = (r32((uint32_t)(0x11f866bc)));
  /* 11f8343e mov dword ptr [0x11f866b0], ecx */
  w32((uint32_t)(0x11f866b0), (ECX));
  /* 11f83444 jmp 0x11f83449 */
  goto L_11f83449;
L_11f83446:;
  /* 11f83446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11f83449:;
  /* 11f83449 mov dword ptr [0x11f866b4], eax */
  w32((uint32_t)(0x11f866b4), (EAX));
  /* 11f8344e mov dword ptr [0x11f866ac], esi */
  w32((uint32_t)(0x11f866ac), (ESI));
L_11f83454:;
  /* 11f83454 pop edi */
  EDI = (pop32());
  /* 11f83455 pop esi */
  ESI = (pop32());
  /* 11f83456 pop ebx */
  EBX = (pop32());
  /* 11f83457 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f83458 ret  */
  ESPCHK(0x11f8312eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003459 @ 0x11f83459 (777 bytes, 275 insns) */
void f_11f83459(void) {
  FTRACE(0x11f83459u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83459 push ebp */
  push32((uint32_t)(EBP));
  /* 11f8345a mov ebp, esp */
  EBP = (ESP);
  /* 11f8345c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8345f mov eax, dword ptr [0x11f866b8] */
  EAX = (r32((uint32_t)(0x11f866b8)));
  /* 11f83464 mov edx, dword ptr [0x11f866bc] */
  EDX = (r32((uint32_t)(0x11f866bc)));
  /* 11f8346a push ebx */
  push32((uint32_t)(EBX));
  /* 11f8346b push esi */
  push32((uint32_t)(ESI));
  /* 11f8346c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f8346f push edi */
  push32((uint32_t)(EDI));
  /* 11f83470 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11f83473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83476 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f83479 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11f8347c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f8347f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f83482 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f83485 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83486 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83489 jge 0x11f83499 */
  if ((C.sf==C.of)) goto L_11f83499;
  /* 11f8348b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f8348e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f83490 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f83494 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f83497 jmp 0x11f834a9 */
  goto L_11f834a9;
L_11f83499:;
  /* 11f83499 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8349c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f8349f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f834a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f834a3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f834a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f834a9:;
  /* 11f834a9 mov eax, dword ptr [0x11f866b0] */
  EAX = (r32((uint32_t)(0x11f866b0)));
  /* 11f834ae mov ebx, eax */
  EBX = (EAX);
  /* 11f834b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f834b2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f834b5 jae 0x11f834d0 */
  if (!C.cf) goto L_11f834d0;
L_11f834b7:;
  /* 11f834b7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f834ba mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f834bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f834bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f834c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f834c3 jne 0x11f834d0 */
  if (!C.zf) goto L_11f834d0;
  /* 11f834c5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f834c8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f834cb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f834ce jb 0x11f834b7 */
  if (C.cf) goto L_11f834b7;
L_11f834d0:;
  /* 11f834d0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f834d3 jne 0x11f8354e */
  if (!C.zf) goto L_11f8354e;
  /* 11f834d5 mov ebx, edx */
  EBX = (EDX);
L_11f834d7:;
  /* 11f834d7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f834d9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f834dc jae 0x11f834f3 */
  if (!C.cf) goto L_11f834f3;
  /* 11f834de mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f834e1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f834e3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f834e6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f834e8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f834ea jne 0x11f834f1 */
  if (!C.zf) goto L_11f834f1;
  /* 11f834ec add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f834ef jmp 0x11f834d7 */
  goto L_11f834d7;
L_11f834f1:;
  /* 11f834f1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f834f3:;
  /* 11f834f3 jne 0x11f8354e */
  if (!C.zf) goto L_11f8354e;
L_11f834f5:;
  /* 11f834f5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f834f8 jae 0x11f8350b */
  if (!C.cf) goto L_11f8350b;
  /* 11f834fa cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f834fe jne 0x11f83508 */
  if (!C.zf) goto L_11f83508;
  /* 11f83500 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83503 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f83506 jmp 0x11f834f5 */
  goto L_11f834f5;
L_11f83508:;
  /* 11f83508 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f8350b:;
  /* 11f8350b jne 0x11f83533 */
  if (!C.zf) goto L_11f83533;
  /* 11f8350d mov ebx, edx */
  EBX = (EDX);
L_11f8350f:;
  /* 11f8350f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83511 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f83514 jae 0x11f83523 */
  if (!C.cf) goto L_11f83523;
  /* 11f83516 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8351a jne 0x11f83521 */
  if (!C.zf) goto L_11f83521;
  /* 11f8351c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8351f jmp 0x11f8350f */
  goto L_11f8350f;
L_11f83521:;
  /* 11f83521 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f83523:;
  /* 11f83523 jne 0x11f83533 */
  if (!C.zf) goto L_11f83533;
  /* 11f83525 call 0x11f83762 */
  push32(0x11f8352au); f_11f83762();
  /* 11f8352a mov ebx, eax */
  EBX = (EAX);
  /* 11f8352c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f8352e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f83531 je 0x11f83547 */
  if (C.zf) goto L_11f83547;
L_11f83533:;
  /* 11f83533 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83534 call 0x11f83813 */
  push32(0x11f83539u); f_11f83813();
  /* 11f83539 pop ecx */
  ECX = (pop32());
  /* 11f8353a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f8353d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f8353f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f83542 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83545 jne 0x11f8354e */
  if (!C.zf) goto L_11f8354e;
L_11f83547:;
  /* 11f83547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f83549 jmp 0x11f8375d */
  goto L_11f8375d;
L_11f8354e:;
  /* 11f8354e mov dword ptr [0x11f866b0], ebx */
  w32((uint32_t)(0x11f866b0), (EBX));
  /* 11f83554 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f83557 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f83559 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8355c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f8355f je 0x11f83575 */
  if (C.zf) goto L_11f83575;
  /* 11f83561 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f83568 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f8356c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f8356f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f83571 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f83573 jne 0x11f835ac */
  if (!C.zf) goto L_11f835ac;
L_11f83575:;
  /* 11f83575 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11f8357b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11f8357e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f83581 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11f83584 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f83588 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11f8358b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f8358d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f83590 jne 0x11f835a9 */
  if (!C.zf) goto L_11f835a9;
L_11f83592:;
  /* 11f83592 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11f83598 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f8359b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f8359e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f835a1 mov edi, esi */
  EDI = (ESI);
  /* 11f835a3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11f835a5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11f835a7 je 0x11f83592 */
  if (C.zf) goto L_11f83592;
L_11f835a9:;
  /* 11f835a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11f835ac:;
  /* 11f835ac mov ecx, edx */
  ECX = (EDX);
  /* 11f835ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f835b0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f835b6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f835bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f835c0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f835c4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11f835c6 jne 0x11f835d5 */
  if (!C.zf) goto L_11f835d5;
  /* 11f835c8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f835cf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f835d1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f835d4 pop edi */
  EDI = (pop32());
L_11f835d5:;
  /* 11f835d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f835d7 jl 0x11f835de */
  if ((C.sf!=C.of)) goto L_11f835de;
  /* 11f835d9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f835db inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f835dc jmp 0x11f835d5 */
  goto L_11f835d5;
L_11f835de:;
  /* 11f835de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f835e1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11f835e5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f835e7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f835ea mov esi, ecx */
  ESI = (ECX);
  /* 11f835ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f835ef sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f835f2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f835f3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f835f6 jle 0x11f835fb */
  if ((C.zf||C.sf!=C.of)) goto L_11f835fb;
  /* 11f835f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f835fa pop esi */
  ESI = (pop32());
L_11f835fb:;
  /* 11f835fb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f835fd je 0x11f83710 */
  if (C.zf) goto L_11f83710;
  /* 11f83603 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f83606 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83609 jne 0x11f8366c */
  if (!C.zf) goto L_11f8366c;
  /* 11f8360b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8360e jge 0x11f8363b */
  if ((C.sf==C.of)) goto L_11f8363b;
  /* 11f83610 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f83615 mov ecx, edi */
  ECX = (EDI);
  /* 11f83617 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f83619 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f8361c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f83620 not ebx */
  EBX = (~(EBX));
  /* 11f83622 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f83625 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11f83629 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11f8362d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f8362f jne 0x11f83669 */
  if (!C.zf) goto L_11f83669;
  /* 11f83631 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83634 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f83637 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11f83639 jmp 0x11f8366c */
  goto L_11f8366c;
L_11f8363b:;
  /* 11f8363b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f8363e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f83643 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f83645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f83648 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f8364c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f83653 not ebx */
  EBX = (~(EBX));
  /* 11f83655 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f83657 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f83659 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f8365c jne 0x11f83669 */
  if (!C.zf) goto L_11f83669;
  /* 11f8365e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83661 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f83664 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f83667 jmp 0x11f8366c */
  goto L_11f8366c;
L_11f83669:;
  /* 11f83669 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f8366c:;
  /* 11f8366c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f8366f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11f83672 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83676 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f83679 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f8367c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11f8367f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f83682 je 0x11f8371c */
  if (C.zf) goto L_11f8371c;
  /* 11f83688 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f8368b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11f8368f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11f83692 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11f83695 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f83698 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f8369b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f8369e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f836a1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f836a4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f836a7 jne 0x11f8370d */
  if (!C.zf) goto L_11f8370d;
  /* 11f836a9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11f836ad cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f836b0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11f836b3 jge 0x11f836de */
  if ((C.sf==C.of)) goto L_11f836de;
  /* 11f836b5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f836b7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f836bb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f836bf jne 0x11f836cc */
  if (!C.zf) goto L_11f836cc;
  /* 11f836c1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f836c6 mov ecx, esi */
  ECX = (ESI);
  /* 11f836c8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f836ca or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11f836cc:;
  /* 11f836cc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f836d1 mov ecx, esi */
  ECX = (ESI);
  /* 11f836d3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f836d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f836d8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f836dc jmp 0x11f8370d */
  goto L_11f8370d;
L_11f836de:;
  /* 11f836de inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f836e0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f836e4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f836e8 jne 0x11f836f7 */
  if (!C.zf) goto L_11f836f7;
  /* 11f836ea lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f836ed mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f836f2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f836f4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11f836f7:;
  /* 11f836f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f836fa lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f83701 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f83704 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f83709 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f8370b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f8370d:;
  /* 11f8370d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f83710:;
  /* 11f83710 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f83712 je 0x11f8371f */
  if (C.zf) goto L_11f8371f;
  /* 11f83714 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f83716 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11f8371a jmp 0x11f8371f */
  goto L_11f8371f;
L_11f8371c:;
  /* 11f8371c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f8371f:;
  /* 11f8371f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11f83722 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83724 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11f83727 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f83729 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11f8372d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f83730 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f83732 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f83734 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11f83737 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f83739 jne 0x11f83755 */
  if (!C.zf) goto L_11f83755;
  /* 11f8373b cmp ebx, dword ptr [0x11f866b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f866b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83741 jne 0x11f83755 */
  if (!C.zf) goto L_11f83755;
  /* 11f83743 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f83746 cmp ecx, dword ptr [0x11f866ac] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f866ac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8374c jne 0x11f83755 */
  if (!C.zf) goto L_11f83755;
  /* 11f8374e and dword ptr [0x11f866b4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f866b4)))&(0x0u); w32((uint32_t)(0x11f866b4), (_r)); fl_logic(_r,32); }
L_11f83755:;
  /* 11f83755 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f83758 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f8375a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11f8375d:;
  /* 11f8375d pop edi */
  EDI = (pop32());
  /* 11f8375e pop esi */
  ESI = (pop32());
  /* 11f8375f pop ebx */
  EBX = (pop32());
  /* 11f83760 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f83761 ret  */
  ESPCHK(0x11f83459u, _esp0);
  ESP += 4; return;
}

/* FUN_10003762 @ 0x11f83762 (177 bytes, 53 insns) */
void f_11f83762(void) {
  FTRACE(0x11f83762u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83762 mov eax, dword ptr [0x11f866b8] */
  EAX = (r32((uint32_t)(0x11f866b8)));
  /* 11f83767 mov ecx, dword ptr [0x11f866a8] */
  ECX = (r32((uint32_t)(0x11f866a8)));
  /* 11f8376d push esi */
  push32((uint32_t)(ESI));
  /* 11f8376e push edi */
  push32((uint32_t)(EDI));
  /* 11f8376f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f83771 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83773 jne 0x11f837a5 */
  if (!C.zf) goto L_11f837a5;
  /* 11f83775 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11f83779 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f8377c push eax */
  push32((uint32_t)(EAX));
  /* 11f8377d push dword ptr [0x11f866bc] */
  push32((uint32_t)(r32((uint32_t)(0x11f866bc))));
  /* 11f83783 push edi */
  push32((uint32_t)(EDI));
  /* 11f83784 push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f8378a call dword ptr [0x11f85024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85024))), 0x11f83790u);
  /* 11f83790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83792 je 0x11f837f5 */
  if (C.zf) goto L_11f837f5;
  /* 11f83794 add dword ptr [0x11f866a8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11f866a8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11f866a8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8379b mov dword ptr [0x11f866bc], eax */
  w32((uint32_t)(0x11f866bc), (EAX));
  /* 11f837a0 mov eax, dword ptr [0x11f866b8] */
  EAX = (r32((uint32_t)(0x11f866b8)));
L_11f837a5:;
  /* 11f837a5 mov ecx, dword ptr [0x11f866bc] */
  ECX = (r32((uint32_t)(0x11f866bc)));
  /* 11f837ab push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f837b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f837b2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f837b5 push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f837bb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f837be call dword ptr [0x11f85038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85038))), 0x11f837c4u);
  /* 11f837c4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f837c6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11f837c9 je 0x11f837f5 */
  if (C.zf) goto L_11f837f5;
  /* 11f837cb push 4 */
  push32((uint32_t)(0x4u));
  /* 11f837cd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f837d2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f837d7 push edi */
  push32((uint32_t)(EDI));
  /* 11f837d8 call dword ptr [0x11f85028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85028))), 0x11f837deu);
  /* 11f837de cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f837e0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11f837e3 jne 0x11f837f9 */
  if (!C.zf) goto L_11f837f9;
  /* 11f837e5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f837e8 push edi */
  push32((uint32_t)(EDI));
  /* 11f837e9 push dword ptr [0x11f868e8] */
  push32((uint32_t)(r32((uint32_t)(0x11f868e8))));
  /* 11f837ef call dword ptr [0x11f8504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8504c))), 0x11f837f5u);
L_11f837f5:;
  /* 11f837f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f837f7 jmp 0x11f83810 */
  goto L_11f83810;
L_11f837f9:;
  /* 11f837f9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f837fd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f837ff mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11f83802 inc dword ptr [0x11f866b8] */
  { uint32_t _r=(r32((uint32_t)(0x11f866b8)))+1; w32((uint32_t)(0x11f866b8), (_r)); fl_inc(_r,32); }
  /* 11f83808 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f8380b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f8380e mov eax, esi */
  EAX = (ESI);
L_11f83810:;
  /* 11f83810 pop edi */
  EDI = (pop32());
  /* 11f83811 pop esi */
  ESI = (pop32());
  /* 11f83812 ret  */
  ESPCHK(0x11f83762u, _esp0);
  ESP += 4; return;
}

/* FUN_10003813 @ 0x11f83813 (251 bytes, 85 insns) */
void f_11f83813(void) {
  FTRACE(0x11f83813u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83813 push ebp */
  push32((uint32_t)(EBP));
  /* 11f83814 mov ebp, esp */
  EBP = (ESP);
  /* 11f83816 push ecx */
  push32((uint32_t)(ECX));
  /* 11f83817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8381a push ebx */
  push32((uint32_t)(EBX));
  /* 11f8381b push esi */
  push32((uint32_t)(ESI));
  /* 11f8381c push edi */
  push32((uint32_t)(EDI));
  /* 11f8381d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11f83820 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f83823 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f83825:;
  /* 11f83825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83827 jl 0x11f8382e */
  if ((C.sf!=C.of)) goto L_11f8382e;
  /* 11f83829 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f8382b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f8382c jmp 0x11f83825 */
  goto L_11f83825;
L_11f8382e:;
  /* 11f8382e mov eax, ebx */
  EAX = (EBX);
  /* 11f83830 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f83832 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f83838 pop edx */
  EDX = (pop32());
  /* 11f83839 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11f83840 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f83843:;
  /* 11f83843 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11f83846 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11f83849 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8384c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f8384d jne 0x11f83843 */
  if (!C.zf) goto L_11f83843;
  /* 11f8384f mov edi, ebx */
  EDI = (EBX);
  /* 11f83851 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f83853 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11f83856 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83859 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f8385e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f83863 push edi */
  push32((uint32_t)(EDI));
  /* 11f83864 call dword ptr [0x11f85028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85028))), 0x11f8386au);
  /* 11f8386a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8386c jne 0x11f83876 */
  if (!C.zf) goto L_11f83876;
  /* 11f8386e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f83871 jmp 0x11f83909 */
  goto L_11f83909;
L_11f83876:;
  /* 11f83876 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11f8387c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8387e ja 0x11f838bc */
  if ((!C.cf&&!C.zf)) goto L_11f838bc;
  /* 11f83880 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11f83883:;
  /* 11f83883 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f83887 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11f8388e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11f83894 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11f8389b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f8389d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11f838a3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f838a6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11f838b0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f838b5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11f838b8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f838ba jbe 0x11f83883 */
  if ((C.cf||C.zf)) goto L_11f83883;
L_11f838bc:;
  /* 11f838bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f838bf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11f838c2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f838c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f838c9 pop edi */
  EDI = (pop32());
  /* 11f838ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f838cd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f838d0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11f838d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f838d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f838d9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f838de mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11f838e5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11f838e8 mov cl, al */
  CL = (AL);
  /* 11f838ea inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f838ec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f838ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f838f1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11f838f4 jne 0x11f838f9 */
  if (!C.zf) goto L_11f838f9;
  /* 11f838f6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11f838f9:;
  /* 11f838f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f838fe mov ecx, ebx */
  ECX = (EBX);
  /* 11f83900 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f83902 not edx */
  EDX = (~(EDX));
  /* 11f83904 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f83907 mov eax, ebx */
  EAX = (EBX);
L_11f83909:;
  /* 11f83909 pop edi */
  EDI = (pop32());
  /* 11f8390a pop esi */
  ESI = (pop32());
  /* 11f8390b pop ebx */
  EBX = (pop32());
  /* 11f8390c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f8390d ret  */
  ESPCHK(0x11f83813u, _esp0);
  ESP += 4; return;
}

/* FUN_1000390e @ 0x11f8390e (137 bytes, 50 insns) */
void f_11f8390e(void) {
  FTRACE(0x11f8390eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8390e push ebx */
  push32((uint32_t)(EBX));
  /* 11f8390f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f83911 cmp dword ptr [0x11f8666c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f8666c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83917 push esi */
  push32((uint32_t)(ESI));
  /* 11f83918 push edi */
  push32((uint32_t)(EDI));
  /* 11f83919 jne 0x11f8395d */
  if (!C.zf) goto L_11f8395d;
  /* 11f8391b push 0x11f85448 */
  push32((uint32_t)(0x11f85448u));
  /* 11f83920 call dword ptr [0x11f8501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8501c))), 0x11f83926u);
  /* 11f83926 mov edi, eax */
  EDI = (EAX);
  /* 11f83928 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8392a je 0x11f83993 */
  if (C.zf) goto L_11f83993;
  /* 11f8392c mov esi, dword ptr [0x11f85020] */
  ESI = (r32((uint32_t)(0x11f85020)));
  /* 11f83932 push 0x11f8543c */
  push32((uint32_t)(0x11f8543cu));
  /* 11f83937 push edi */
  push32((uint32_t)(EDI));
  /* 11f83938 call esi */
  call_ind((uint32_t)(ESI), 0x11f8393au);
  /* 11f8393a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f8393c mov dword ptr [0x11f8666c], eax */
  w32((uint32_t)(0x11f8666c), (EAX));
  /* 11f83941 je 0x11f83993 */
  if (C.zf) goto L_11f83993;
  /* 11f83943 push 0x11f8542c */
  push32((uint32_t)(0x11f8542cu));
  /* 11f83948 push edi */
  push32((uint32_t)(EDI));
  /* 11f83949 call esi */
  call_ind((uint32_t)(ESI), 0x11f8394bu);
  /* 11f8394b push 0x11f85418 */
  push32((uint32_t)(0x11f85418u));
  /* 11f83950 push edi */
  push32((uint32_t)(EDI));
  /* 11f83951 mov dword ptr [0x11f86670], eax */
  w32((uint32_t)(0x11f86670), (EAX));
  /* 11f83956 call esi */
  call_ind((uint32_t)(ESI), 0x11f83958u);
  /* 11f83958 mov dword ptr [0x11f86674], eax */
  w32((uint32_t)(0x11f86674), (EAX));
L_11f8395d:;
  /* 11f8395d mov eax, dword ptr [0x11f86670] */
  EAX = (r32((uint32_t)(0x11f86670)));
  /* 11f83962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83964 je 0x11f8397c */
  if (C.zf) goto L_11f8397c;
  /* 11f83966 call eax */
  call_ind((uint32_t)(EAX), 0x11f83968u);
  /* 11f83968 mov ebx, eax */
  EBX = (EAX);
  /* 11f8396a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f8396c je 0x11f8397c */
  if (C.zf) goto L_11f8397c;
  /* 11f8396e mov eax, dword ptr [0x11f86674] */
  EAX = (r32((uint32_t)(0x11f86674)));
  /* 11f83973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83975 je 0x11f8397c */
  if (C.zf) goto L_11f8397c;
  /* 11f83977 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83978 call eax */
  call_ind((uint32_t)(EAX), 0x11f8397au);
  /* 11f8397a mov ebx, eax */
  EBX = (EAX);
L_11f8397c:;
  /* 11f8397c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f83980 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f83984 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f83988 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83989 call dword ptr [0x11f8666c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8666c))), 0x11f8398fu);
L_11f8398f:;
  /* 11f8398f pop edi */
  EDI = (pop32());
  /* 11f83990 pop esi */
  ESI = (pop32());
  /* 11f83991 pop ebx */
  EBX = (pop32());
  /* 11f83992 ret  */
  ESPCHK(0x11f8390eu, _esp0);
  ESP += 4; return;
L_11f83993:;
  /* 11f83993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f83995 jmp 0x11f8398f */
  goto L_11f8398f;
}

/* _strncpy @ 0x11f839a0 (254 bytes, 109 insns) */
void f_11f839a0(void) {
  FTRACE(0x11f839a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f839a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f839a4 push edi */
  push32((uint32_t)(EDI));
  /* 11f839a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f839a7 je 0x11f83a23 */
  if (C.zf) goto L_11f83a23;
  /* 11f839a9 push esi */
  push32((uint32_t)(ESI));
  /* 11f839aa push ebx */
  push32((uint32_t)(EBX));
  /* 11f839ab mov ebx, ecx */
  EBX = (ECX);
  /* 11f839ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f839b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f839b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f839bb jne 0x11f839c4 */
  if (!C.zf) goto L_11f839c4;
  /* 11f839bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f839c0 jne 0x11f83a31 */
  if (!C.zf) goto L_11f83a31;
  /* 11f839c2 jmp 0x11f839e5 */
  goto L_11f839e5;
L_11f839c4:;
  /* 11f839c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f839c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f839c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f839c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f839ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f839cb je 0x11f839f2 */
  if (C.zf) goto L_11f839f2;
  /* 11f839cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f839cf je 0x11f839fa */
  if (C.zf) goto L_11f839fa;
  /* 11f839d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f839d7 jne 0x11f839c4 */
  if (!C.zf) goto L_11f839c4;
  /* 11f839d9 mov ebx, ecx */
  EBX = (ECX);
  /* 11f839db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f839de jne 0x11f83a31 */
  if (!C.zf) goto L_11f83a31;
L_11f839e0:;
  /* 11f839e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f839e3 je 0x11f839f2 */
  if (C.zf) goto L_11f839f2;
L_11f839e5:;
  /* 11f839e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f839e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f839e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f839ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f839eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f839ed je 0x11f83a1e */
  if (C.zf) goto L_11f83a1e;
  /* 11f839ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f839f0 jne 0x11f839e5 */
  if (!C.zf) goto L_11f839e5;
L_11f839f2:;
  /* 11f839f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f839f6 pop ebx */
  EBX = (pop32());
  /* 11f839f7 pop esi */
  ESI = (pop32());
  /* 11f839f8 pop edi */
  EDI = (pop32());
  /* 11f839f9 ret  */
  ESPCHK(0x11f839a0u, _esp0);
  ESP += 4; return;
L_11f839fa:;
  /* 11f839fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f83a00 je 0x11f83a14 */
  if (C.zf) goto L_11f83a14;
L_11f83a02:;
  /* 11f83a02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83a04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f83a05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83a06 je 0x11f83a96 */
  if (C.zf) goto L_11f83a96;
  /* 11f83a0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f83a12 jne 0x11f83a02 */
  if (!C.zf) goto L_11f83a02;
L_11f83a14:;
  /* 11f83a14 mov ebx, ecx */
  EBX = (ECX);
  /* 11f83a16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f83a19 jne 0x11f83a87 */
  if (!C.zf) goto L_11f83a87;
L_11f83a1b:;
  /* 11f83a1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83a1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f83a1e:;
  /* 11f83a1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f83a1f jne 0x11f83a1b */
  if (!C.zf) goto L_11f83a1b;
  /* 11f83a21 pop ebx */
  EBX = (pop32());
  /* 11f83a22 pop esi */
  ESI = (pop32());
L_11f83a23:;
  /* 11f83a23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f83a27 pop edi */
  EDI = (pop32());
  /* 11f83a28 ret  */
  ESPCHK(0x11f839a0u, _esp0);
  ESP += 4; return;
L_11f83a29:;
  /* 11f83a29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f83a2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83a2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83a2f je 0x11f839e0 */
  if (C.zf) goto L_11f839e0;
L_11f83a31:;
  /* 11f83a31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f83a36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f83a38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83a3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f83a3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f83a3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f83a41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83a44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f83a49 je 0x11f83a29 */
  if (C.zf) goto L_11f83a29;
  /* 11f83a4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f83a4d je 0x11f83a7b */
  if (C.zf) goto L_11f83a7b;
  /* 11f83a4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f83a51 je 0x11f83a71 */
  if (C.zf) goto L_11f83a71;
  /* 11f83a53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f83a59 je 0x11f83a67 */
  if (C.zf) goto L_11f83a67;
  /* 11f83a5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f83a61 jne 0x11f83a29 */
  if (!C.zf) goto L_11f83a29;
  /* 11f83a63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f83a65 jmp 0x11f83a7f */
  goto L_11f83a7f;
L_11f83a67:;
  /* 11f83a67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f83a6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f83a6f jmp 0x11f83a7f */
  goto L_11f83a7f;
L_11f83a71:;
  /* 11f83a71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f83a77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f83a79 jmp 0x11f83a7f */
  goto L_11f83a7f;
L_11f83a7b:;
  /* 11f83a7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f83a7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11f83a7f:;
  /* 11f83a7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f83a84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83a85 je 0x11f83a91 */
  if (C.zf) goto L_11f83a91;
L_11f83a87:;
  /* 11f83a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f83a89:;
  /* 11f83a89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f83a8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83a8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83a8f jne 0x11f83a89 */
  if (!C.zf) goto L_11f83a89;
L_11f83a91:;
  /* 11f83a91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f83a94 jne 0x11f83a1b */
  if (!C.zf) goto L_11f83a1b;
L_11f83a96:;
  /* 11f83a96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f83a9a pop ebx */
  EBX = (pop32());
  /* 11f83a9b pop esi */
  ESI = (pop32());
  /* 11f83a9c pop edi */
  EDI = (pop32());
  /* 11f83a9d ret  */
  ESPCHK(0x11f839a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11f83aa0 (88 bytes, 40 insns) */
void f_11f83aa0(void) {
  FTRACE(0x11f83aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83aa0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f83aa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f83aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f83aaa je 0x11f83af3 */
  if (C.zf) goto L_11f83af3;
  /* 11f83aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f83aae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f83ab2 push edi */
  push32((uint32_t)(EDI));
  /* 11f83ab3 mov edi, ecx */
  EDI = (ECX);
  /* 11f83ab5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83ab8 jb 0x11f83ae7 */
  if (C.cf) goto L_11f83ae7;
  /* 11f83aba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f83abc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f83abf je 0x11f83ac9 */
  if (C.zf) goto L_11f83ac9;
  /* 11f83ac1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f83ac3:;
  /* 11f83ac3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83ac5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f83ac6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83ac7 jne 0x11f83ac3 */
  if (!C.zf) goto L_11f83ac3;
L_11f83ac9:;
  /* 11f83ac9 mov ecx, eax */
  ECX = (EAX);
  /* 11f83acb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f83ace add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83ad0 mov ecx, eax */
  ECX = (EAX);
  /* 11f83ad2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f83ad5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83ad7 mov ecx, edx */
  ECX = (EDX);
  /* 11f83ad9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f83adc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f83adf je 0x11f83ae7 */
  if (C.zf) goto L_11f83ae7;
  /* 11f83ae1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f83ae3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f83ae5 je 0x11f83aed */
  if (C.zf) goto L_11f83aed;
L_11f83ae7:;
  /* 11f83ae7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83ae9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f83aea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f83aeb jne 0x11f83ae7 */
  if (!C.zf) goto L_11f83ae7;
L_11f83aed:;
  /* 11f83aed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f83af1 pop edi */
  EDI = (pop32());
  /* 11f83af2 ret  */
  ESPCHK(0x11f83aa0u, _esp0);
  ESP += 4; return;
L_11f83af3:;
  /* 11f83af3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f83af7 ret  */
  ESPCHK(0x11f83aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003af8 @ 0x11f83af8 (27 bytes, 13 insns) */
void f_11f83af8(void) {
  FTRACE(0x11f83af8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83af8 mov eax, dword ptr [0x11f86678] */
  EAX = (r32((uint32_t)(0x11f86678)));
  /* 11f83afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83aff je 0x11f83b10 */
  if (C.zf) goto L_11f83b10;
  /* 11f83b01 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f83b05 call eax */
  call_ind((uint32_t)(EAX), 0x11f83b07u);
  /* 11f83b07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83b09 pop ecx */
  ECX = (pop32());
  /* 11f83b0a je 0x11f83b10 */
  if (C.zf) goto L_11f83b10;
  /* 11f83b0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83b0e pop eax */
  EAX = (pop32());
  /* 11f83b0f ret  */
  ESPCHK(0x11f83af8u, _esp0);
  ESP += 4; return;
L_11f83b10:;
  /* 11f83b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f83b12 ret  */
  ESPCHK(0x11f83af8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b13 @ 0x11f83b13 (511 bytes, 193 insns) */
void f_11f83b13(void) {
  FTRACE(0x11f83b13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83b13 push ebp */
  push32((uint32_t)(EBP));
  /* 11f83b14 mov ebp, esp */
  EBP = (ESP);
  /* 11f83b16 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f83b18 push 0x11f85460 */
  push32((uint32_t)(0x11f85460u));
  /* 11f83b1d push 0x11f842e0 */
  push32((uint32_t)(0x11f842e0u));
  /* 11f83b22 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f83b28 push eax */
  push32((uint32_t)(EAX));
  /* 11f83b29 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f83b30 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83b33 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83b34 push esi */
  push32((uint32_t)(ESI));
  /* 11f83b35 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b36 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f83b39 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f83b3b cmp dword ptr [0x11f866a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f866a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83b41 jne 0x11f83b89 */
  if (!C.zf) goto L_11f83b89;
  /* 11f83b43 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b44 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83b47 pop ebx */
  EBX = (pop32());
  /* 11f83b48 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83b49 push 0x11f85458 */
  push32((uint32_t)(0x11f85458u));
  /* 11f83b4e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11f83b53 push esi */
  push32((uint32_t)(ESI));
  /* 11f83b54 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b55 call dword ptr [0x11f85010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85010))), 0x11f83b5bu);
  /* 11f83b5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83b5d je 0x11f83b67 */
  if (C.zf) goto L_11f83b67;
  /* 11f83b5f mov dword ptr [0x11f866a0], ebx */
  w32((uint32_t)(0x11f866a0), (EBX));
  /* 11f83b65 jmp 0x11f83b89 */
  goto L_11f83b89;
L_11f83b67:;
  /* 11f83b67 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b68 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b69 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83b6a push 0x11f85454 */
  push32((uint32_t)(0x11f85454u));
  /* 11f83b6f push esi */
  push32((uint32_t)(ESI));
  /* 11f83b70 push edi */
  push32((uint32_t)(EDI));
  /* 11f83b71 call dword ptr [0x11f85014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85014))), 0x11f83b77u);
  /* 11f83b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83b79 je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83b7f mov dword ptr [0x11f866a0], 2 */
  w32((uint32_t)(0x11f866a0), (0x2u));
L_11f83b89:;
  /* 11f83b89 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83b8c jle 0x11f83b9e */
  if ((C.zf||C.sf!=C.of)) goto L_11f83b9e;
  /* 11f83b8e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f83b91 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83b94 call 0x11f83d37 */
  push32(0x11f83b99u); f_11f83d37();
  /* 11f83b99 pop ecx */
  ECX = (pop32());
  /* 11f83b9a pop ecx */
  ECX = (pop32());
  /* 11f83b9b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f83b9e:;
  /* 11f83b9e mov eax, dword ptr [0x11f866a0] */
  EAX = (r32((uint32_t)(0x11f866a0)));
  /* 11f83ba3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83ba6 jne 0x11f83bc5 */
  if (!C.zf) goto L_11f83bc5;
  /* 11f83ba8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f83bab push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f83bae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f83bb1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83bb4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83bb7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f83bba call dword ptr [0x11f85014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85014))), 0x11f83bc0u);
  /* 11f83bc0 jmp 0x11f83ca3 */
  goto L_11f83ca3;
L_11f83bc5:;
  /* 11f83bc5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83bc8 jne 0x11f83ca1 */
  if (!C.zf) goto L_11f83ca1;
  /* 11f83bce cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83bd1 jne 0x11f83bdb */
  if (!C.zf) goto L_11f83bdb;
  /* 11f83bd3 mov eax, dword ptr [0x11f86698] */
  EAX = (r32((uint32_t)(0x11f86698)));
  /* 11f83bd8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11f83bdb:;
  /* 11f83bdb push edi */
  push32((uint32_t)(EDI));
  /* 11f83bdc push edi */
  push32((uint32_t)(EDI));
  /* 11f83bdd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f83be0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83be3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f83be6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f83be8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83bea and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f83bed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f83bee push eax */
  push32((uint32_t)(EAX));
  /* 11f83bef push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f83bf2 call dword ptr [0x11f85018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85018))), 0x11f83bf8u);
  /* 11f83bf8 mov ebx, eax */
  EBX = (EAX);
  /* 11f83bfa mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11f83bfd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83bff je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83c05 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f83c08 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11f83c0b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83c0e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f83c10 call 0x11f843c0 */
  push32(0x11f83c15u); f_11f843c0();
  /* 11f83c15 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f83c18 mov eax, esp */
  EAX = (ESP);
  /* 11f83c1a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f83c1d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f83c21 jmp 0x11f83c36 */
  goto L_11f83c36;
  /* 11f83c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83c25 pop eax */
  EAX = (pop32());
  /* 11f83c26 ret  */
  ESPCHK(0x11f83b13u, _esp0);
  ESP += 4; return;
  /* 11f83c27 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f83c2a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f83c2c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11f83c2f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f83c33 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11f83c36:;
  /* 11f83c36 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83c39 je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83c3b push ebx */
  push32((uint32_t)(EBX));
  /* 11f83c3c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f83c3f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f83c42 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83c47 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f83c4a call dword ptr [0x11f85018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85018))), 0x11f83c50u);
  /* 11f83c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83c52 je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83c54 push edi */
  push32((uint32_t)(EDI));
  /* 11f83c55 push edi */
  push32((uint32_t)(EDI));
  /* 11f83c56 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83c57 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f83c5a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83c5d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f83c60 call dword ptr [0x11f85010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85010))), 0x11f83c66u);
  /* 11f83c66 mov esi, eax */
  ESI = (EAX);
  /* 11f83c68 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11f83c6b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83c6d je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83c6f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11f83c73 je 0x11f83cb5 */
  if (C.zf) goto L_11f83cb5;
  /* 11f83c75 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83c78 je 0x11f83d30 */
  if (C.zf) goto L_11f83d30;
  /* 11f83c7e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83c81 jg 0x11f83ca1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f83ca1;
  /* 11f83c83 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f83c86 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f83c89 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83c8a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f83c8d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83c90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f83c93 call dword ptr [0x11f85010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85010))), 0x11f83c99u);
  /* 11f83c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83c9b jne 0x11f83d30 */
  if (!C.zf) goto L_11f83d30;
L_11f83ca1:;
  /* 11f83ca1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f83ca3:;
  /* 11f83ca3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11f83ca6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f83ca9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f83cb0 pop edi */
  EDI = (pop32());
  /* 11f83cb1 pop esi */
  ESI = (pop32());
  /* 11f83cb2 pop ebx */
  EBX = (pop32());
  /* 11f83cb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f83cb4 ret  */
  ESPCHK(0x11f83b13u, _esp0);
  ESP += 4; return;
L_11f83cb5:;
  /* 11f83cb5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f83cbc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11f83cbf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83cc2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f83cc4 call 0x11f843c0 */
  push32(0x11f83cc9u); f_11f843c0();
  /* 11f83cc9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f83ccc mov ebx, esp */
  EBX = (ESP);
  /* 11f83cce mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11f83cd1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f83cd5 jmp 0x11f83ce9 */
  goto L_11f83ce9;
  /* 11f83cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83cd9 pop eax */
  EAX = (pop32());
  /* 11f83cda ret  */
  ESPCHK(0x11f83b13u, _esp0);
  ESP += 4; return;
  /* 11f83cdb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f83cde xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f83ce0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f83ce2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f83ce6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11f83ce9:;
  /* 11f83ce9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83ceb je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83ced push esi */
  push32((uint32_t)(ESI));
  /* 11f83cee push ebx */
  push32((uint32_t)(EBX));
  /* 11f83cef push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f83cf2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f83cf5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83cf8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f83cfb call dword ptr [0x11f85010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85010))), 0x11f83d01u);
  /* 11f83d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83d03 je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
  /* 11f83d05 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83d08 push edi */
  push32((uint32_t)(EDI));
  /* 11f83d09 push edi */
  push32((uint32_t)(EDI));
  /* 11f83d0a jne 0x11f83d10 */
  if (!C.zf) goto L_11f83d10;
  /* 11f83d0c push edi */
  push32((uint32_t)(EDI));
  /* 11f83d0d push edi */
  push32((uint32_t)(EDI));
  /* 11f83d0e jmp 0x11f83d16 */
  goto L_11f83d16;
L_11f83d10:;
  /* 11f83d10 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f83d13 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11f83d16:;
  /* 11f83d16 push esi */
  push32((uint32_t)(ESI));
  /* 11f83d17 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83d18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f83d1d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f83d20 call dword ptr [0x11f8508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8508c))), 0x11f83d26u);
  /* 11f83d26 mov esi, eax */
  ESI = (EAX);
  /* 11f83d28 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83d2a je 0x11f83ca1 */
  if (C.zf) goto L_11f83ca1;
L_11f83d30:;
  /* 11f83d30 mov eax, esi */
  EAX = (ESI);
  /* 11f83d32 jmp 0x11f83ca3 */
  goto L_11f83ca3;
}

/* FUN_10003d37 @ 0x11f83d37 (43 bytes, 20 insns) */
void f_11f83d37(void) {
  FTRACE(0x11f83d37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83d37 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f83d3b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f83d3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f83d41 push esi */
  push32((uint32_t)(ESI));
  /* 11f83d42 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11f83d45 je 0x11f83d54 */
  if (C.zf) goto L_11f83d54;
L_11f83d47:;
  /* 11f83d47 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f83d4a je 0x11f83d54 */
  if (C.zf) goto L_11f83d54;
  /* 11f83d4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f83d4d mov esi, ecx */
  ESI = (ECX);
  /* 11f83d4f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f83d50 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f83d52 jne 0x11f83d47 */
  if (!C.zf) goto L_11f83d47;
L_11f83d54:;
  /* 11f83d54 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f83d57 pop esi */
  ESI = (pop32());
  /* 11f83d58 jne 0x11f83d5f */
  if (!C.zf) goto L_11f83d5f;
  /* 11f83d5a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83d5e ret  */
  ESPCHK(0x11f83d37u, _esp0);
  ESP += 4; return;
L_11f83d5f:;
  /* 11f83d5f mov eax, edx */
  EAX = (EDX);
  /* 11f83d61 ret  */
  ESPCHK(0x11f83d37u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d62 @ 0x11f83d62 (318 bytes, 123 insns) */
void f_11f83d62(void) {
  FTRACE(0x11f83d62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83d62 push ebp */
  push32((uint32_t)(EBP));
  /* 11f83d63 mov ebp, esp */
  EBP = (ESP);
  /* 11f83d65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f83d67 push 0x11f85478 */
  push32((uint32_t)(0x11f85478u));
  /* 11f83d6c push 0x11f842e0 */
  push32((uint32_t)(0x11f842e0u));
  /* 11f83d71 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f83d77 push eax */
  push32((uint32_t)(EAX));
  /* 11f83d78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f83d7f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83d82 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83d83 push esi */
  push32((uint32_t)(ESI));
  /* 11f83d84 push edi */
  push32((uint32_t)(EDI));
  /* 11f83d85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f83d88 mov eax, dword ptr [0x11f866a4] */
  EAX = (r32((uint32_t)(0x11f866a4)));
  /* 11f83d8d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f83d8f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83d91 jne 0x11f83dd1 */
  if (!C.zf) goto L_11f83dd1;
  /* 11f83d93 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f83d96 push eax */
  push32((uint32_t)(EAX));
  /* 11f83d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83d99 pop esi */
  ESI = (pop32());
  /* 11f83d9a push esi */
  push32((uint32_t)(ESI));
  /* 11f83d9b push 0x11f85458 */
  push32((uint32_t)(0x11f85458u));
  /* 11f83da0 push esi */
  push32((uint32_t)(ESI));
  /* 11f83da1 call dword ptr [0x11f85008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85008))), 0x11f83da7u);
  /* 11f83da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83da9 je 0x11f83daf */
  if (C.zf) goto L_11f83daf;
  /* 11f83dab mov eax, esi */
  EAX = (ESI);
  /* 11f83dad jmp 0x11f83dcc */
  goto L_11f83dcc;
L_11f83daf:;
  /* 11f83daf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f83db2 push eax */
  push32((uint32_t)(EAX));
  /* 11f83db3 push esi */
  push32((uint32_t)(ESI));
  /* 11f83db4 push 0x11f85454 */
  push32((uint32_t)(0x11f85454u));
  /* 11f83db9 push esi */
  push32((uint32_t)(ESI));
  /* 11f83dba push ebx */
  push32((uint32_t)(EBX));
  /* 11f83dbb call dword ptr [0x11f8500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8500c))), 0x11f83dc1u);
  /* 11f83dc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f83dc3 je 0x11f83e97 */
  if (C.zf) goto L_11f83e97;
  /* 11f83dc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f83dcb pop eax */
  EAX = (pop32());
L_11f83dcc:;
  /* 11f83dcc mov dword ptr [0x11f866a4], eax */
  w32((uint32_t)(0x11f866a4), (EAX));
L_11f83dd1:;
  /* 11f83dd1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83dd4 jne 0x11f83dfa */
  if (!C.zf) goto L_11f83dfa;
  /* 11f83dd6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f83dd9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83ddb jne 0x11f83de2 */
  if (!C.zf) goto L_11f83de2;
  /* 11f83ddd mov eax, dword ptr [0x11f86688] */
  EAX = (r32((uint32_t)(0x11f86688)));
L_11f83de2:;
  /* 11f83de2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f83de5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83de8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83deb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f83dee push eax */
  push32((uint32_t)(EAX));
  /* 11f83def call dword ptr [0x11f8500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f8500c))), 0x11f83df5u);
  /* 11f83df5 jmp 0x11f83e99 */
  goto L_11f83e99;
L_11f83dfa:;
  /* 11f83dfa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83dfd jne 0x11f83e97 */
  if (!C.zf) goto L_11f83e97;
  /* 11f83e03 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83e06 jne 0x11f83e10 */
  if (!C.zf) goto L_11f83e10;
  /* 11f83e08 mov eax, dword ptr [0x11f86698] */
  EAX = (r32((uint32_t)(0x11f86698)));
  /* 11f83e0d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11f83e10:;
  /* 11f83e10 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83e11 push ebx */
  push32((uint32_t)(EBX));
  /* 11f83e12 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83e15 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83e18 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f83e1b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f83e1d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83e1f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f83e22 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f83e23 push eax */
  push32((uint32_t)(EAX));
  /* 11f83e24 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f83e27 call dword ptr [0x11f85018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85018))), 0x11f83e2du);
  /* 11f83e2d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f83e30 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83e32 je 0x11f83e97 */
  if (C.zf) goto L_11f83e97;
  /* 11f83e34 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f83e37 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11f83e3a mov eax, edi */
  EAX = (EDI);
  /* 11f83e3c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83e3f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f83e41 call 0x11f843c0 */
  push32(0x11f83e46u); f_11f843c0();
  /* 11f83e46 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f83e49 mov esi, esp */
  ESI = (ESP);
  /* 11f83e4b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11f83e4e push edi */
  push32((uint32_t)(EDI));
  /* 11f83e4f push ebx */
  push32((uint32_t)(EBX));
  /* 11f83e50 push esi */
  push32((uint32_t)(ESI));
  /* 11f83e51 call 0x11f83aa0 */
  push32(0x11f83e56u); f_11f83aa0();
  /* 11f83e56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83e59 jmp 0x11f83e66 */
  goto L_11f83e66;
  /* 11f83e5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83e5d pop eax */
  EAX = (pop32());
  /* 11f83e5e ret  */
  ESPCHK(0x11f83d62u, _esp0);
  ESP += 4; return;
  /* 11f83e5f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f83e62 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f83e64 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f83e66:;
  /* 11f83e66 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f83e6a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83e6c je 0x11f83e97 */
  if (C.zf) goto L_11f83e97;
  /* 11f83e6e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11f83e71 push esi */
  push32((uint32_t)(ESI));
  /* 11f83e72 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f83e75 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f83e78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f83e7a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f83e7d call dword ptr [0x11f85018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85018))), 0x11f83e83u);
  /* 11f83e83 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83e85 je 0x11f83e97 */
  if (C.zf) goto L_11f83e97;
  /* 11f83e87 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f83e8a push eax */
  push32((uint32_t)(EAX));
  /* 11f83e8b push esi */
  push32((uint32_t)(ESI));
  /* 11f83e8c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f83e8f call dword ptr [0x11f85008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f85008))), 0x11f83e95u);
  /* 11f83e95 jmp 0x11f83e99 */
  goto L_11f83e99;
L_11f83e97:;
  /* 11f83e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f83e99:;
  /* 11f83e99 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11f83e9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f83e9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f83ea6 pop edi */
  EDI = (pop32());
  /* 11f83ea7 pop esi */
  ESI = (pop32());
  /* 11f83ea8 pop ebx */
  EBX = (pop32());
  /* 11f83ea9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f83eaa ret  */
  ESPCHK(0x11f83d62u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb0 @ 0x11f83eb0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11f83eb0(void) {
  FTRACE(0x11f83eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f83eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f83eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11f83eb3 push edi */
  push32((uint32_t)(EDI));
  /* 11f83eb4 push esi */
  push32((uint32_t)(ESI));
  /* 11f83eb5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f83eb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f83ebb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f83ebe mov eax, ecx */
  EAX = (ECX);
  /* 11f83ec0 mov edx, ecx */
  EDX = (ECX);
  /* 11f83ec2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83ec4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83ec6 jbe 0x11f83ed0 */
  if ((C.cf||C.zf)) goto L_11f83ed0;
  /* 11f83ec8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83eca jb 0x11f84048 */
  if (C.cf) goto L_11f84048;
L_11f83ed0:;
  /* 11f83ed0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f83ed6 jne 0x11f83eec */
  if (!C.zf) goto L_11f83eec;
  /* 11f83ed8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f83edb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f83ede cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83ee1 jb 0x11f83f0c */
  if (C.cf) goto L_11f83f0c;
  /* 11f83ee3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f83ee5 jmp dword ptr [edx*4 + 0x11f83ff8] */
  switch (EDX) {
    case 0: goto L_11f84008;
    case 1: goto L_11f84010;
    case 2: goto L_11f8401c;
    case 3: goto L_11f84030;
    default: x86_unimpl("switch@0x11f83ee5 out of table"); return;
  }
L_11f83eec:;
  /* 11f83eec mov eax, edi */
  EAX = (EDI);
  /* 11f83eee mov edx, 3 */
  EDX = (0x3u);
  /* 11f83ef3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f83ef6 jb 0x11f83f04 */
  if (C.cf) goto L_11f83f04;
  /* 11f83ef8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f83efb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83efd jmp dword ptr [eax*4 + 0x11f83f10] */
  switch (EAX) {
    case 1: goto L_11f83f20;
    case 2: goto L_11f83f4c;
    case 3: goto L_11f83f70;
    default: x86_unimpl("switch@0x11f83efd out of table"); return;
  }
L_11f83f04:;
  /* 11f83f04 jmp dword ptr [ecx*4 + 0x11f84008] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f84008)))); return;
  /* 11f83f0b nop  */
  /* nop */
L_11f83f0c:;
  /* 11f83f0c jmp dword ptr [ecx*4 + 0x11f83f8c] */
  switch (ECX) {
    case 0: goto L_11f83fef;
    case 1: goto L_11f83fdc;
    case 2: goto L_11f83fd4;
    case 3: goto L_11f83fcc;
    case 4: goto L_11f83fc4;
    case 5: goto L_11f83fbc;
    case 6: goto L_11f83fb4;
    case 7: goto L_11f83fac;
    default: x86_unimpl("switch@0x11f83f0c out of table"); return;
  }
  /* 11f83f13 nop  */
  /* nop */
L_11f83f20:;
  /* 11f83f20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f83f22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f83f24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83f26 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f83f29 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f83f2c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f83f2f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f83f32 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f83f35 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83f38 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83f3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83f3e jb 0x11f83f0c */
  if (C.cf) goto L_11f83f0c;
  /* 11f83f40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f83f42 jmp dword ptr [edx*4 + 0x11f83ff8] */
  switch (EDX) {
    case 0: goto L_11f84008;
    case 1: goto L_11f84010;
    case 2: goto L_11f8401c;
    case 3: goto L_11f84030;
    default: x86_unimpl("switch@0x11f83f42 out of table"); return;
  }
  /* 11f83f49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f83f4c:;
  /* 11f83f4c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f83f4e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f83f50 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83f52 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f83f55 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f83f58 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f83f5b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83f5e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83f61 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83f64 jb 0x11f83f0c */
  if (C.cf) goto L_11f83f0c;
  /* 11f83f66 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f83f68 jmp dword ptr [edx*4 + 0x11f83ff8] */
  switch (EDX) {
    case 0: goto L_11f84008;
    case 1: goto L_11f84010;
    case 2: goto L_11f8401c;
    case 3: goto L_11f84030;
    default: x86_unimpl("switch@0x11f83f68 out of table"); return;
  }
  /* 11f83f6f nop  */
  /* nop */
L_11f83f70:;
  /* 11f83f70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f83f72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f83f74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f83f76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f83f77 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f83f7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f83f7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f83f7e jb 0x11f83f0c */
  if (C.cf) goto L_11f83f0c;
  /* 11f83f80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f83f82 jmp dword ptr [edx*4 + 0x11f83ff8] */
  switch (EDX) {
    case 0: goto L_11f84008;
    case 1: goto L_11f84010;
    case 2: goto L_11f8401c;
    case 3: goto L_11f84030;
    default: x86_unimpl("switch@0x11f83f82 out of table"); return;
  }
  /* 11f83f89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f83fac:;
  /* 11f83fac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f83fb0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f83fb4:;
  /* 11f83fb4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f83fb8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f83fbc:;
  /* 11f83fbc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f83fc0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f83fc4:;
  /* 11f83fc4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f83fc8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f83fcc:;
  /* 11f83fcc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f83fd0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f83fd4:;
  /* 11f83fd4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f83fd8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f83fdc:;
  /* 11f83fdc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f83fe0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f83fe4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f83feb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f83fed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f83fef:;
  /* 11f83fef jmp dword ptr [edx*4 + 0x11f83ff8] */
  switch (EDX) {
    case 0: goto L_11f84008;
    case 1: goto L_11f84010;
    case 2: goto L_11f8401c;
    case 3: goto L_11f84030;
    default: x86_unimpl("switch@0x11f83fef out of table"); return;
  }
  /* 11f83ff6 mov edi, edi */
  EDI = (EDI);
L_11f84008:;
  /* 11f84008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f8400b pop esi */
  ESI = (pop32());
  /* 11f8400c pop edi */
  EDI = (pop32());
  /* 11f8400d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f8400e ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f8400f nop  */
  /* nop */
L_11f84010:;
  /* 11f84010 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f84012 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f84014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f84017 pop esi */
  ESI = (pop32());
  /* 11f84018 pop edi */
  EDI = (pop32());
  /* 11f84019 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f8401a ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f8401b nop  */
  /* nop */
L_11f8401c:;
  /* 11f8401c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f8401e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f84020 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f84023 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f84026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f84029 pop esi */
  ESI = (pop32());
  /* 11f8402a pop edi */
  EDI = (pop32());
  /* 11f8402b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f8402c ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f8402d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f84030:;
  /* 11f84030 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f84032 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f84034 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f84037 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f8403a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f8403d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f84040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f84043 pop esi */
  ESI = (pop32());
  /* 11f84044 pop edi */
  EDI = (pop32());
  /* 11f84045 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f84046 ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f84047 nop  */
  /* nop */
L_11f84048:;
  /* 11f84048 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f8404c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f84050 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f84056 jne 0x11f8407c */
  if (!C.zf) goto L_11f8407c;
  /* 11f84058 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f8405b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f8405e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f84061 jb 0x11f84070 */
  if (C.cf) goto L_11f84070;
  /* 11f84063 std  */
  C.df=1;
  /* 11f84064 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f84066 cld  */
  C.df=0;
  /* 11f84067 jmp dword ptr [edx*4 + 0x11f84190] */
  switch (EDX) {
    case 0: goto L_11f841a0;
    case 1: goto L_11f841a8;
    case 2: goto L_11f841b8;
    case 3: goto L_11f841cc;
    default: x86_unimpl("switch@0x11f84067 out of table"); return;
  }
  /* 11f8406e mov edi, edi */
  EDI = (EDI);
L_11f84070:;
  /* 11f84070 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f84072 jmp dword ptr [ecx*4 + 0x11f84140] */
  switch (ECX) {
    case 0: goto L_11f84187;
    default: x86_unimpl("switch@0x11f84072 out of table"); return;
  }
  /* 11f84079 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f8407c:;
  /* 11f8407c mov eax, edi */
  EAX = (EDI);
  /* 11f8407e mov edx, 3 */
  EDX = (0x3u);
  /* 11f84083 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f84086 jb 0x11f84094 */
  if (C.cf) goto L_11f84094;
  /* 11f84088 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f8408b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8408d jmp dword ptr [eax*4 + 0x11f84098] */
  switch (EAX) {
    case 1: goto L_11f840a8;
    case 2: goto L_11f840c8;
    case 3: goto L_11f840f0;
    default: x86_unimpl("switch@0x11f8408d out of table"); return;
  }
L_11f84094:;
  /* 11f84094 jmp dword ptr [ecx*4 + 0x11f84190] */
  switch (ECX) {
    case 0: goto L_11f841a0;
    case 1: goto L_11f841a8;
    case 2: goto L_11f841b8;
    case 3: goto L_11f841cc;
    default: x86_unimpl("switch@0x11f84094 out of table"); return;
  }
  /* 11f8409b nop  */
  /* nop */
L_11f840a8:;
  /* 11f840a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f840ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f840ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f840b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f840b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f840b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f840b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f840b8 jb 0x11f84070 */
  if (C.cf) goto L_11f84070;
  /* 11f840ba std  */
  C.df=1;
  /* 11f840bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f840bd cld  */
  C.df=0;
  /* 11f840be jmp dword ptr [edx*4 + 0x11f84190] */
  switch (EDX) {
    case 0: goto L_11f841a0;
    case 1: goto L_11f841a8;
    case 2: goto L_11f841b8;
    case 3: goto L_11f841cc;
    default: x86_unimpl("switch@0x11f840be out of table"); return;
  }
  /* 11f840c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f840c8:;
  /* 11f840c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f840cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f840cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f840d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f840d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f840d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f840d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f840dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f840df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f840e2 jb 0x11f84070 */
  if (C.cf) goto L_11f84070;
  /* 11f840e4 std  */
  C.df=1;
  /* 11f840e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f840e7 cld  */
  C.df=0;
  /* 11f840e8 jmp dword ptr [edx*4 + 0x11f84190] */
  switch (EDX) {
    case 0: goto L_11f841a0;
    case 1: goto L_11f841a8;
    case 2: goto L_11f841b8;
    case 3: goto L_11f841cc;
    default: x86_unimpl("switch@0x11f840e8 out of table"); return;
  }
  /* 11f840ef nop  */
  /* nop */
L_11f840f0:;
  /* 11f840f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f840f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f840f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f840f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f840fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f840fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f84101 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f84104 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f84107 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8410a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f8410d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f84110 jb 0x11f84070 */
  if (C.cf) goto L_11f84070;
  /* 11f84116 std  */
  C.df=1;
  /* 11f84117 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f84119 cld  */
  C.df=0;
  /* 11f8411a jmp dword ptr [edx*4 + 0x11f84190] */
  switch (EDX) {
    case 0: goto L_11f841a0;
    case 1: goto L_11f841a8;
    case 2: goto L_11f841b8;
    case 3: goto L_11f841cc;
    default: x86_unimpl("switch@0x11f8411a out of table"); return;
  }
  /* 11f84121 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f84124 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11f84125 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f84126 clc  */
  x86_unimpl("clc @ 0x11f84126");
  /* 11f84127 adc dword ptr [ecx + eax*2 - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*2 + -0x8))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*2 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8412b adc dword ptr [ecx + eax*2 - 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*2 + -0x8))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*2 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8412f adc dword ptr [ecx + eax*2 - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*2 + -0x8))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*2 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f84133 adc dword ptr [ecx + eax*2 - 8], esp */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*2 + -0x8))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*2 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f84137 adc dword ptr [ecx + eax*2 - 8], ebp */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*2 + -0x8))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*2 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f8413b adc dword ptr [ecx + eax*2 - 8], esi */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*2 + -0x8))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EAX*2 + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f84144 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f84148 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f8414c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f84150 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f84154 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f84158 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f8415c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f84160 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f84164 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f84168 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f8416c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f84170 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f84174 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f84178 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f8417c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f84183 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f84185 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f84187:;
  /* 11f84187 jmp dword ptr [edx*4 + 0x11f84190] */
  switch (EDX) {
    case 0: goto L_11f841a0;
    case 1: goto L_11f841a8;
    case 2: goto L_11f841b8;
    case 3: goto L_11f841cc;
    default: x86_unimpl("switch@0x11f84187 out of table"); return;
  }
  /* 11f8418e mov edi, edi */
  EDI = (EDI);
L_11f841a0:;
  /* 11f841a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f841a3 pop esi */
  ESI = (pop32());
  /* 11f841a4 pop edi */
  EDI = (pop32());
  /* 11f841a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f841a6 ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f841a7 nop  */
  /* nop */
L_11f841a8:;
  /* 11f841a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f841ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f841ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f841b1 pop esi */
  ESI = (pop32());
  /* 11f841b2 pop edi */
  EDI = (pop32());
  /* 11f841b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f841b4 ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f841b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f841b8:;
  /* 11f841b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f841bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f841be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f841c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f841c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f841c7 pop esi */
  ESI = (pop32());
  /* 11f841c8 pop edi */
  EDI = (pop32());
  /* 11f841c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f841ca ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
  /* 11f841cb nop  */
  /* nop */
L_11f841cc:;
  /* 11f841cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f841cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f841d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f841d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f841d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f841db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f841de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f841e1 pop esi */
  ESI = (pop32());
  /* 11f841e2 pop edi */
  EDI = (pop32());
  /* 11f841e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f841e4 ret  */
  ESPCHK(0x11f83eb0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11f841e8 (32 bytes, 18 insns) */
void f_11f841e8(void) {
  FTRACE(0x11f841e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f841e8 push ebp */
  push32((uint32_t)(EBP));
  /* 11f841e9 mov ebp, esp */
  EBP = (ESP);
  /* 11f841eb push ebx */
  push32((uint32_t)(EBX));
  /* 11f841ec push esi */
  push32((uint32_t)(ESI));
  /* 11f841ed push edi */
  push32((uint32_t)(EDI));
  /* 11f841ee push ebp */
  push32((uint32_t)(EBP));
  /* 11f841ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11f841f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f841f3 push 0x11f84200 */
  push32((uint32_t)(0x11f84200u));
  /* 11f841f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f841fb call 0x11f843f0 */
  push32(0x11f84200u); f_11f843f0();
  /* 11f84200 pop ebp */
  EBP = (pop32());
  /* 11f84201 pop edi */
  EDI = (pop32());
  /* 11f84202 pop esi */
  ESI = (pop32());
  /* 11f84203 pop ebx */
  EBX = (pop32());
  /* 11f84204 mov esp, ebp */
  ESP = (EBP);
  /* 11f84206 pop ebp */
  EBP = (pop32());
  /* 11f84207 ret  */
  ESPCHK(0x11f841e8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11f8422a (104 bytes, 33 insns) */
void f_11f8422a(void) {
  FTRACE(0x11f8422au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8422a push ebx */
  push32((uint32_t)(EBX));
  /* 11f8422b push esi */
  push32((uint32_t)(ESI));
  /* 11f8422c push edi */
  push32((uint32_t)(EDI));
  /* 11f8422d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f84231 push eax */
  push32((uint32_t)(EAX));
  /* 11f84232 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11f84234 push 0x11f84208 */
  push32((uint32_t)(0x11f84208u));
  /* 11f84239 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11f84240 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11f84247:;
  /* 11f84247 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f8424b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f8424e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11f84251 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f84254 je 0x11f84284 */
  if (C.zf) goto L_11f84284;
  /* 11f84256 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8425a je 0x11f84284 */
  if (C.zf) goto L_11f84284;
  /* 11f8425c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11f8425f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11f84262 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11f84266 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11f84269 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f8426e jne 0x11f84282 */
  if (!C.zf) goto L_11f84282;
  /* 11f84270 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11f84275 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11f84279 call 0x11f842be */
  push32(0x11f8427eu); f_11f842be();
  /* 11f8427e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11f84282u);
L_11f84282:;
  /* 11f84282 jmp 0x11f84247 */
  goto L_11f84247;
L_11f84284:;
  /* 11f84284 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11f8428b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f8428e pop edi */
  EDI = (pop32());
  /* 11f8428f pop esi */
  ESI = (pop32());
  /* 11f84290 pop ebx */
  EBX = (pop32());
  /* 11f84291 ret  */
  ESPCHK(0x11f8422au, _esp0);
  ESP += 4; return;
}

/* FUN_100042be @ 0x11f842be (24 bytes, 10 insns) */
void f_11f842be(void) {
  FTRACE(0x11f842beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f842be push ebx */
  push32((uint32_t)(EBX));
  /* 11f842bf push ecx */
  push32((uint32_t)(ECX));
  /* 11f842c0 mov ebx, 0x11f863f0 */
  EBX = (0x11f863f0u);
  /* 11f842c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f842c8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f842cb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11f842ce mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11f842d1 pop ecx */
  ECX = (pop32());
  /* 11f842d2 pop ebx */
  EBX = (pop32());
  /* 11f842d3 ret 4 */
  ESPCHK(0x11f842beu, _esp0);
  ESP += 8; return;
}

/* FUN_1000439d @ 0x11f8439d (27 bytes, 11 insns) */
void f_11f8439d(void) {
  FTRACE(0x11f8439du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f8439d push ebp */
  push32((uint32_t)(EBP));
  /* 11f8439e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f843a2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11f843a4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f843a7 push eax */
  push32((uint32_t)(EAX));
  /* 11f843a8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f843ab push eax */
  push32((uint32_t)(EAX));
  /* 11f843ac call 0x11f8422a */
  push32(0x11f843b1u); f_11f8422a();
  /* 11f843b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f843b4 pop ebp */
  EBP = (pop32());
  /* 11f843b5 ret 4 */
  ESPCHK(0x11f8439du, _esp0);
  ESP += 8; return;
}

/* FUN_100043c0 @ 0x11f843c0 (47 bytes, 17 insns) */
void f_11f843c0(void) {
  FTRACE(0x11f843c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f843c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f843c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f843c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11f843ca jb 0x11f843e0 */
  if (C.cf) goto L_11f843e0;
L_11f843cc:;
  /* 11f843cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f843d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f843d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f843d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f843de jae 0x11f843cc */
  if (!C.cf) goto L_11f843cc;
L_11f843e0:;
  /* 11f843e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f843e2 mov eax, esp */
  EAX = (ESP);
  /* 11f843e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f843e6 mov esp, ecx */
  ESP = (ECX);
  /* 11f843e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f843ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f843ed push eax */
  push32((uint32_t)(EAX));
  /* 11f843ee ret  */
  ESPCHK(0x11f843c0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11f843f0 (6 bytes, 1 insns) */
void f_11f843f0(void) {
  FTRACE(0x11f843f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f843f0 jmp dword ptr [0x11f85004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f85004)))); return;
}

