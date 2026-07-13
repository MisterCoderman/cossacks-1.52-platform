#include "recomp.h"

/* FUN_10001000 @ 0x11e81000 (20 bytes, 6 insns) */
void f_11e81000(void) {
  FTRACE(0x11e81000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e81004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e81005 jne 0x11e8100c */
  if (!C.zf) goto L_11e8100c;
  /* 11e81007 call 0x11e81020 */
  push32(0x11e8100cu); f_11e81020();
L_11e8100c:;
  /* 11e8100c mov eax, 1 */
  EAX = (0x1u);
  /* 11e81011 ret 0xc */
  ESPCHK(0x11e81000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11e81020 (849 bytes, 232 insns) */
void f_11e81020(void) {
  FTRACE(0x11e81020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81020 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81021 push esi */
  push32((uint32_t)(ESI));
  /* 11e81022 push edi */
  push32((uint32_t)(EDI));
  /* 11e81023 mov edi, dword ptr [0x11e8a16c] */
  EDI = (r32((uint32_t)(0x11e8a16c)));
  /* 11e81029 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8102b push 0x11e8c030 */
  push32((uint32_t)(0x11e8c030u));
  /* 11e81030 call edi */
  call_ind((uint32_t)(EDI), 0x11e81032u);
  /* 11e81032 mov esi, dword ptr [0x11e8a170] */
  ESI = (r32((uint32_t)(0x11e8a170)));
  /* 11e81038 push 0x11e8f7a8 */
  push32((uint32_t)(0x11e8f7a8u));
  /* 11e8103d call esi */
  call_ind((uint32_t)(ESI), 0x11e8103fu);
  /* 11e8103f push 8 */
  push32((uint32_t)(0x8u));
  /* 11e81041 push 0x11e8f7a8 */
  push32((uint32_t)(0x11e8f7a8u));
  /* 11e81046 call edi */
  call_ind((uint32_t)(EDI), 0x11e81048u);
  /* 11e81048 push 0x11e8f690 */
  push32((uint32_t)(0x11e8f690u));
  /* 11e8104d call esi */
  call_ind((uint32_t)(ESI), 0x11e8104fu);
  /* 11e8104f push 8 */
  push32((uint32_t)(0x8u));
  /* 11e81051 push 0x11e8f690 */
  push32((uint32_t)(0x11e8f690u));
  /* 11e81056 call edi */
  call_ind((uint32_t)(EDI), 0x11e81058u);
  /* 11e81058 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8105a push 0x11e8f7b4 */
  push32((uint32_t)(0x11e8f7b4u));
  /* 11e8105f call edi */
  call_ind((uint32_t)(EDI), 0x11e81061u);
  /* 11e81061 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e81063 push 0x11e8c038 */
  push32((uint32_t)(0x11e8c038u));
  /* 11e81068 call edi */
  call_ind((uint32_t)(EDI), 0x11e8106au);
  /* 11e8106a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8106d mov ebx, 0x11e8f610 */
  EBX = (0x11e8f610u);
L_11e81072:;
  /* 11e81072 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81073 call esi */
  call_ind((uint32_t)(ESI), 0x11e81075u);
  /* 11e81075 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8107b cmp ebx, 0x11e8f690 */
  { uint32_t _a=(EBX),_b=(0x11e8f690u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81081 jl 0x11e81072 */
  if ((C.sf!=C.of)) goto L_11e81072;
  /* 11e81083 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11e81088 push 0x11e8f610 */
  push32((uint32_t)(0x11e8f610u));
  /* 11e8108d call edi */
  call_ind((uint32_t)(EDI), 0x11e8108fu);
  /* 11e8108f mov ebx, dword ptr [0x11e8a174] */
  EBX = (r32((uint32_t)(0x11e8a174)));
  /* 11e81095 push 0x11e8c2cc */
  push32((uint32_t)(0x11e8c2ccu));
  /* 11e8109a push 0x11e8f608 */
  push32((uint32_t)(0x11e8f608u));
  /* 11e8109f call ebx */
  call_ind((uint32_t)(EBX), 0x11e810a1u);
  /* 11e810a1 push 0x11e8c2c0 */
  push32((uint32_t)(0x11e8c2c0u));
  /* 11e810a6 push 0x11e8f600 */
  push32((uint32_t)(0x11e8f600u));
  /* 11e810ab call ebx */
  call_ind((uint32_t)(EBX), 0x11e810adu);
  /* 11e810ad push 0x11e8c2b4 */
  push32((uint32_t)(0x11e8c2b4u));
  /* 11e810b2 push 0x11e8f5f8 */
  push32((uint32_t)(0x11e8f5f8u));
  /* 11e810b7 call ebx */
  call_ind((uint32_t)(EBX), 0x11e810b9u);
  /* 11e810b9 push 0x11e8c2a8 */
  push32((uint32_t)(0x11e8c2a8u));
  /* 11e810be push 0x11e8f5f0 */
  push32((uint32_t)(0x11e8f5f0u));
  /* 11e810c3 call ebx */
  call_ind((uint32_t)(EBX), 0x11e810c5u);
  /* 11e810c5 mov ebx, dword ptr [0x11e8a178] */
  EBX = (r32((uint32_t)(0x11e8a178)));
  /* 11e810cb push 0x11e8c29c */
  push32((uint32_t)(0x11e8c29cu));
  /* 11e810d0 push 0x11e8f5e8 */
  push32((uint32_t)(0x11e8f5e8u));
  /* 11e810d5 call ebx */
  call_ind((uint32_t)(EBX), 0x11e810d7u);
  /* 11e810d7 push 0x11e8c290 */
  push32((uint32_t)(0x11e8c290u));
  /* 11e810dc push 0x11e8f5e0 */
  push32((uint32_t)(0x11e8f5e0u));
  /* 11e810e1 call ebx */
  call_ind((uint32_t)(EBX), 0x11e810e3u);
  /* 11e810e3 push 0x11e8c284 */
  push32((uint32_t)(0x11e8c284u));
  /* 11e810e8 push 0x11e8f5d8 */
  push32((uint32_t)(0x11e8f5d8u));
  /* 11e810ed call ebx */
  call_ind((uint32_t)(EBX), 0x11e810efu);
  /* 11e810ef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e810f2 push 0x11e8c278 */
  push32((uint32_t)(0x11e8c278u));
  /* 11e810f7 push 0x11e8f5d0 */
  push32((uint32_t)(0x11e8f5d0u));
  /* 11e810fc call ebx */
  call_ind((uint32_t)(EBX), 0x11e810feu);
  /* 11e810fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81101 mov ecx, 0x11e8f5a0 */
  ECX = (0x11e8f5a0u);
  /* 11e81106 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81108 call 0x11e82110 */
  push32(0x11e8110du); f_11e82110();
  /* 11e8110d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8110f mov ecx, 0x11e8f570 */
  ECX = (0x11e8f570u);
  /* 11e81114 call 0x11e82110 */
  push32(0x11e81119u); f_11e82110();
  /* 11e81119 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e8111b mov ecx, 0x11e8f540 */
  ECX = (0x11e8f540u);
  /* 11e81120 call 0x11e82110 */
  push32(0x11e81125u); f_11e82110();
  /* 11e81125 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e81127 mov ecx, 0x11e8f510 */
  ECX = (0x11e8f510u);
  /* 11e8112c call 0x11e82110 */
  push32(0x11e81131u); f_11e82110();
  /* 11e81131 push 0x11e8f508 */
  push32((uint32_t)(0x11e8f508u));
  /* 11e81136 call esi */
  call_ind((uint32_t)(ESI), 0x11e81138u);
  /* 11e81138 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8113a push 0x11e8f508 */
  push32((uint32_t)(0x11e8f508u));
  /* 11e8113f call edi */
  call_ind((uint32_t)(EDI), 0x11e81141u);
  /* 11e81141 push 0x11e8f500 */
  push32((uint32_t)(0x11e8f500u));
  /* 11e81146 call esi */
  call_ind((uint32_t)(ESI), 0x11e81148u);
  /* 11e81148 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8114a push 0x11e8f500 */
  push32((uint32_t)(0x11e8f500u));
  /* 11e8114f call edi */
  call_ind((uint32_t)(EDI), 0x11e81151u);
  /* 11e81151 push 0x11e8f4f8 */
  push32((uint32_t)(0x11e8f4f8u));
  /* 11e81156 call esi */
  call_ind((uint32_t)(ESI), 0x11e81158u);
  /* 11e81158 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8115a push 0x11e8f4f8 */
  push32((uint32_t)(0x11e8f4f8u));
  /* 11e8115f call edi */
  call_ind((uint32_t)(EDI), 0x11e81161u);
  /* 11e81161 push 0x11e8f4f0 */
  push32((uint32_t)(0x11e8f4f0u));
  /* 11e81166 call esi */
  call_ind((uint32_t)(ESI), 0x11e81168u);
  /* 11e81168 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8116a push 0x11e8f4f0 */
  push32((uint32_t)(0x11e8f4f0u));
  /* 11e8116f call edi */
  call_ind((uint32_t)(EDI), 0x11e81171u);
  /* 11e81171 push 0x108 */
  push32((uint32_t)(0x108u));
  /* 11e81176 push 0x11e8f6a0 */
  push32((uint32_t)(0x11e8f6a0u));
  /* 11e8117b call edi */
  call_ind((uint32_t)(EDI), 0x11e8117du);
  /* 11e8117d mov esi, dword ptr [0x11e8a17c] */
  ESI = (r32((uint32_t)(0x11e8a17c)));
  /* 11e81183 push 0x11e8c268 */
  push32((uint32_t)(0x11e8c268u));
  /* 11e81188 push 0x11e8f6a0 */
  push32((uint32_t)(0x11e8f6a0u));
  /* 11e8118d call esi */
  call_ind((uint32_t)(ESI), 0x11e8118fu);
  /* 11e8118f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81192 push 0x11e8c254 */
  push32((uint32_t)(0x11e8c254u));
  /* 11e81197 push 0x11e8f6a8 */
  push32((uint32_t)(0x11e8f6a8u));
  /* 11e8119c call esi */
  call_ind((uint32_t)(ESI), 0x11e8119eu);
  /* 11e8119e push 0x11e8c244 */
  push32((uint32_t)(0x11e8c244u));
  /* 11e811a3 push 0x11e8f6b0 */
  push32((uint32_t)(0x11e8f6b0u));
  /* 11e811a8 call esi */
  call_ind((uint32_t)(ESI), 0x11e811aau);
  /* 11e811aa push 0x11e8c238 */
  push32((uint32_t)(0x11e8c238u));
  /* 11e811af push 0x11e8f6b8 */
  push32((uint32_t)(0x11e8f6b8u));
  /* 11e811b4 call esi */
  call_ind((uint32_t)(ESI), 0x11e811b6u);
  /* 11e811b6 push 0x11e8c22c */
  push32((uint32_t)(0x11e8c22cu));
  /* 11e811bb push 0x11e8f6c0 */
  push32((uint32_t)(0x11e8f6c0u));
  /* 11e811c0 call esi */
  call_ind((uint32_t)(ESI), 0x11e811c2u);
  /* 11e811c2 push 0x11e8c21c */
  push32((uint32_t)(0x11e8c21cu));
  /* 11e811c7 push 0x11e8f6c8 */
  push32((uint32_t)(0x11e8f6c8u));
  /* 11e811cc call esi */
  call_ind((uint32_t)(ESI), 0x11e811ceu);
  /* 11e811ce push 0x11e8c20c */
  push32((uint32_t)(0x11e8c20cu));
  /* 11e811d3 push 0x11e8f6d0 */
  push32((uint32_t)(0x11e8f6d0u));
  /* 11e811d8 call esi */
  call_ind((uint32_t)(ESI), 0x11e811dau);
  /* 11e811da push 0x11e8c1fc */
  push32((uint32_t)(0x11e8c1fcu));
  /* 11e811df push 0x11e8f6d8 */
  push32((uint32_t)(0x11e8f6d8u));
  /* 11e811e4 call esi */
  call_ind((uint32_t)(ESI), 0x11e811e6u);
  /* 11e811e6 push 0x11e8c1e8 */
  push32((uint32_t)(0x11e8c1e8u));
  /* 11e811eb push 0x11e8f6e0 */
  push32((uint32_t)(0x11e8f6e0u));
  /* 11e811f0 call esi */
  call_ind((uint32_t)(ESI), 0x11e811f2u);
  /* 11e811f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e811f5 push 0x11e8c1d8 */
  push32((uint32_t)(0x11e8c1d8u));
  /* 11e811fa push 0x11e8f6e8 */
  push32((uint32_t)(0x11e8f6e8u));
  /* 11e811ff call esi */
  call_ind((uint32_t)(ESI), 0x11e81201u);
  /* 11e81201 push 0x11e8c1c8 */
  push32((uint32_t)(0x11e8c1c8u));
  /* 11e81206 push 0x11e8f6f0 */
  push32((uint32_t)(0x11e8f6f0u));
  /* 11e8120b call esi */
  call_ind((uint32_t)(ESI), 0x11e8120du);
  /* 11e8120d push 0x11e8c1b4 */
  push32((uint32_t)(0x11e8c1b4u));
  /* 11e81212 push 0x11e8f6f8 */
  push32((uint32_t)(0x11e8f6f8u));
  /* 11e81217 call esi */
  call_ind((uint32_t)(ESI), 0x11e81219u);
  /* 11e81219 push 0x11e8c1a8 */
  push32((uint32_t)(0x11e8c1a8u));
  /* 11e8121e push 0x11e8f700 */
  push32((uint32_t)(0x11e8f700u));
  /* 11e81223 call esi */
  call_ind((uint32_t)(ESI), 0x11e81225u);
  /* 11e81225 push 0x11e8c190 */
  push32((uint32_t)(0x11e8c190u));
  /* 11e8122a push 0x11e8f708 */
  push32((uint32_t)(0x11e8f708u));
  /* 11e8122f call esi */
  call_ind((uint32_t)(ESI), 0x11e81231u);
  /* 11e81231 push 0x11e8c178 */
  push32((uint32_t)(0x11e8c178u));
  /* 11e81236 push 0x11e8f710 */
  push32((uint32_t)(0x11e8f710u));
  /* 11e8123b call esi */
  call_ind((uint32_t)(ESI), 0x11e8123du);
  /* 11e8123d push 0x11e8c16c */
  push32((uint32_t)(0x11e8c16cu));
  /* 11e81242 push 0x11e8f718 */
  push32((uint32_t)(0x11e8f718u));
  /* 11e81247 call esi */
  call_ind((uint32_t)(ESI), 0x11e81249u);
  /* 11e81249 push 0x11e8c158 */
  push32((uint32_t)(0x11e8c158u));
  /* 11e8124e push 0x11e8f720 */
  push32((uint32_t)(0x11e8f720u));
  /* 11e81253 call esi */
  call_ind((uint32_t)(ESI), 0x11e81255u);
  /* 11e81255 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81258 push 0x11e8c148 */
  push32((uint32_t)(0x11e8c148u));
  /* 11e8125d push 0x11e8f728 */
  push32((uint32_t)(0x11e8f728u));
  /* 11e81262 call esi */
  call_ind((uint32_t)(ESI), 0x11e81264u);
  /* 11e81264 push 0x11e8c13c */
  push32((uint32_t)(0x11e8c13cu));
  /* 11e81269 push 0x11e8f730 */
  push32((uint32_t)(0x11e8f730u));
  /* 11e8126e call esi */
  call_ind((uint32_t)(ESI), 0x11e81270u);
  /* 11e81270 push 0x11e8c130 */
  push32((uint32_t)(0x11e8c130u));
  /* 11e81275 push 0x11e8f738 */
  push32((uint32_t)(0x11e8f738u));
  /* 11e8127a call esi */
  call_ind((uint32_t)(ESI), 0x11e8127cu);
  /* 11e8127c push 0x11e8c124 */
  push32((uint32_t)(0x11e8c124u));
  /* 11e81281 push 0x11e8f740 */
  push32((uint32_t)(0x11e8f740u));
  /* 11e81286 call esi */
  call_ind((uint32_t)(ESI), 0x11e81288u);
  /* 11e81288 push 0x11e8c114 */
  push32((uint32_t)(0x11e8c114u));
  /* 11e8128d push 0x11e8f748 */
  push32((uint32_t)(0x11e8f748u));
  /* 11e81292 call esi */
  call_ind((uint32_t)(ESI), 0x11e81294u);
  /* 11e81294 push 0x11e8c104 */
  push32((uint32_t)(0x11e8c104u));
  /* 11e81299 push 0x11e8f750 */
  push32((uint32_t)(0x11e8f750u));
  /* 11e8129e call esi */
  call_ind((uint32_t)(ESI), 0x11e812a0u);
  /* 11e812a0 push 0x11e8c0f8 */
  push32((uint32_t)(0x11e8c0f8u));
  /* 11e812a5 push 0x11e8f758 */
  push32((uint32_t)(0x11e8f758u));
  /* 11e812aa call esi */
  call_ind((uint32_t)(ESI), 0x11e812acu);
  /* 11e812ac push 0x11e8c0e0 */
  push32((uint32_t)(0x11e8c0e0u));
  /* 11e812b1 push 0x11e8f760 */
  push32((uint32_t)(0x11e8f760u));
  /* 11e812b6 call esi */
  call_ind((uint32_t)(ESI), 0x11e812b8u);
  /* 11e812b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e812bb push 0x11e8c0cc */
  push32((uint32_t)(0x11e8c0ccu));
  /* 11e812c0 push 0x11e8f768 */
  push32((uint32_t)(0x11e8f768u));
  /* 11e812c5 call esi */
  call_ind((uint32_t)(ESI), 0x11e812c7u);
  /* 11e812c7 push 0x11e8c0bc */
  push32((uint32_t)(0x11e8c0bcu));
  /* 11e812cc push 0x11e8f770 */
  push32((uint32_t)(0x11e8f770u));
  /* 11e812d1 call esi */
  call_ind((uint32_t)(ESI), 0x11e812d3u);
  /* 11e812d3 push 0x11e8c0ac */
  push32((uint32_t)(0x11e8c0acu));
  /* 11e812d8 push 0x11e8f778 */
  push32((uint32_t)(0x11e8f778u));
  /* 11e812dd call esi */
  call_ind((uint32_t)(ESI), 0x11e812dfu);
  /* 11e812df push 0x11e8c098 */
  push32((uint32_t)(0x11e8c098u));
  /* 11e812e4 push 0x11e8f780 */
  push32((uint32_t)(0x11e8f780u));
  /* 11e812e9 call esi */
  call_ind((uint32_t)(ESI), 0x11e812ebu);
  /* 11e812eb push 0x11e8c08c */
  push32((uint32_t)(0x11e8c08cu));
  /* 11e812f0 push 0x11e8f788 */
  push32((uint32_t)(0x11e8f788u));
  /* 11e812f5 call esi */
  call_ind((uint32_t)(ESI), 0x11e812f7u);
  /* 11e812f7 push 0x11e8c078 */
  push32((uint32_t)(0x11e8c078u));
  /* 11e812fc push 0x11e8f790 */
  push32((uint32_t)(0x11e8f790u));
  /* 11e81301 call esi */
  call_ind((uint32_t)(ESI), 0x11e81303u);
  /* 11e81303 push 0x11e8c06c */
  push32((uint32_t)(0x11e8c06cu));
  /* 11e81308 push 0x11e8f798 */
  push32((uint32_t)(0x11e8f798u));
  /* 11e8130d call esi */
  call_ind((uint32_t)(ESI), 0x11e8130fu);
  /* 11e8130f push 0x11e8c060 */
  push32((uint32_t)(0x11e8c060u));
  /* 11e81314 push 0x11e8f7a0 */
  push32((uint32_t)(0x11e8f7a0u));
  /* 11e81319 call esi */
  call_ind((uint32_t)(ESI), 0x11e8131bu);
  /* 11e8131b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8131e push 8 */
  push32((uint32_t)(0x8u));
  /* 11e81320 push 0x11e8f698 */
  push32((uint32_t)(0x11e8f698u));
  /* 11e81325 call edi */
  call_ind((uint32_t)(EDI), 0x11e81327u);
  /* 11e81327 push 0x11e8c050 */
  push32((uint32_t)(0x11e8c050u));
  /* 11e8132c push 0x11e8f698 */
  push32((uint32_t)(0x11e8f698u));
  /* 11e81331 call esi */
  call_ind((uint32_t)(ESI), 0x11e81333u);
  /* 11e81333 mov esi, dword ptr [0x11e8a180] */
  ESI = (r32((uint32_t)(0x11e8a180)));
  /* 11e81339 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e8133b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8133d call esi */
  call_ind((uint32_t)(ESI), 0x11e8133fu);
  /* 11e8133f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e81341 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e81343 call esi */
  call_ind((uint32_t)(ESI), 0x11e81345u);
  /* 11e81345 mov esi, dword ptr [0x11e8a184] */
  ESI = (r32((uint32_t)(0x11e8a184)));
  /* 11e8134b push 0x11e8c044 */
  push32((uint32_t)(0x11e8c044u));
  /* 11e81350 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e81352 call esi */
  call_ind((uint32_t)(ESI), 0x11e81354u);
  /* 11e81354 push 0x11e8c03c */
  push32((uint32_t)(0x11e8c03cu));
  /* 11e81359 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e8135b call esi */
  call_ind((uint32_t)(ESI), 0x11e8135du);
  /* 11e8135d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8135f call 0x11e822ff */
  push32(0x11e81364u); f_11e822ff();
  /* 11e81364 push eax */
  push32((uint32_t)(EAX));
  /* 11e81365 call 0x11e822d0 */
  push32(0x11e8136au); f_11e822d0();
  /* 11e8136a add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8136d pop edi */
  EDI = (pop32());
  /* 11e8136e pop esi */
  ESI = (pop32());
  /* 11e8136f pop ebx */
  EBX = (pop32());
  /* 11e81370 ret  */
  ESPCHK(0x11e81020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11e81380 (1661 bytes, 523 insns) */
void f_11e81380(void) {
  FTRACE(0x11e81380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81380 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81381 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81382 push esi */
  push32((uint32_t)(ESI));
  /* 11e81383 push edi */
  push32((uint32_t)(EDI));
  /* 11e81384 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81386 call dword ptr [0x11e8a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a120))), 0x11e8138cu);
  /* 11e8138c mov ebp, dword ptr [0x11e8a124] */
  EBP = (r32((uint32_t)(0x11e8a124)));
  /* 11e81392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81395 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81397 je 0x11e814e0 */
  if (C.zf) goto L_11e814e0;
  /* 11e8139d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8139f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e813a1 call dword ptr [0x11e8a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a128))), 0x11e813a7u);
  /* 11e813a7 mov ebx, dword ptr [0x11e8a12c] */
  EBX = (r32((uint32_t)(0x11e8a12c)));
  /* 11e813ad mov esi, dword ptr [0x11e8a130] */
  ESI = (r32((uint32_t)(0x11e8a130)));
  /* 11e813b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e813b6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11e813b8:;
  /* 11e813b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e813ba call esi */
  call_ind((uint32_t)(ESI), 0x11e813bcu);
  /* 11e813bc mov ecx, 0xa */
  ECX = (0xau);
  /* 11e813c1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e813c3 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11e813c6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11e813c9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11e813cc shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11e813cf push eax */
  push32((uint32_t)(EAX));
  /* 11e813d0 push edi */
  push32((uint32_t)(EDI));
  /* 11e813d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e813d3 call ebx */
  call_ind((uint32_t)(EBX), 0x11e813d5u);
  /* 11e813d5 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11e813da push edi */
  push32((uint32_t)(EDI));
  /* 11e813db push 2 */
  push32((uint32_t)(0x2u));
  /* 11e813dd call ebx */
  call_ind((uint32_t)(EBX), 0x11e813dfu);
  /* 11e813df push 0 */
  push32((uint32_t)(0x0u));
  /* 11e813e1 call esi */
  call_ind((uint32_t)(ESI), 0x11e813e3u);
  /* 11e813e3 mov ecx, 5 */
  ECX = (0x5u);
  /* 11e813e8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e813ea lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11e813ed lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11e813f0 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11e813f3 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11e813f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e813f7 push edi */
  push32((uint32_t)(EDI));
  /* 11e813f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e813fa call ebx */
  call_ind((uint32_t)(EBX), 0x11e813fcu);
  /* 11e813fc add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e813ff inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e81400 cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81403 jl 0x11e813b8 */
  if ((C.sf!=C.of)) goto L_11e813b8;
  /* 11e81405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81407 call esi */
  call_ind((uint32_t)(ESI), 0x11e81409u);
  /* 11e81409 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e8140a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8140c lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11e8140f mov dword ptr [0x11e8f7b4], edx */
  w32((uint32_t)(0x11e8f7b4), (EDX));
  /* 11e81415 call esi */
  call_ind((uint32_t)(ESI), 0x11e81417u);
  /* 11e81417 mov ecx, 0xa */
  ECX = (0xau);
  /* 11e8141c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8141e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81420 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11e81423 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11e81426 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e81429 mov dword ptr [0x11e8c038], eax */
  w32((uint32_t)(0x11e8c038), (EAX));
  /* 11e8142e call esi */
  call_ind((uint32_t)(ESI), 0x11e81430u);
  /* 11e81430 push eax */
  push32((uint32_t)(EAX));
  /* 11e81431 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81433 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81435 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81437 push 0x11e8c314 */
  push32((uint32_t)(0x11e8c314u));
  /* 11e8143c push 3 */
  push32((uint32_t)(0x3u));
  /* 11e8143e call dword ptr [0x11e8a134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a134))), 0x11e81444u);
  /* 11e81444 push 0x11e8c308 */
  push32((uint32_t)(0x11e8c308u));
  /* 11e81449 call dword ptr [0x11e8a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a138))), 0x11e8144fu);
  /* 11e8144f mov edi, dword ptr [0x11e8a13c] */
  EDI = (r32((uint32_t)(0x11e8a13c)));
  /* 11e81455 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11e81457 call edi */
  call_ind((uint32_t)(EDI), 0x11e81459u);
  /* 11e81459 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11e8145b call edi */
  call_ind((uint32_t)(EDI), 0x11e8145du);
  /* 11e8145d push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11e8145f call edi */
  call_ind((uint32_t)(EDI), 0x11e81461u);
  /* 11e81461 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11e81463 call edi */
  call_ind((uint32_t)(EDI), 0x11e81465u);
  /* 11e81465 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11e81467 call edi */
  call_ind((uint32_t)(EDI), 0x11e81469u);
  /* 11e81469 mov ebx, dword ptr [0x11e8a140] */
  EBX = (r32((uint32_t)(0x11e8a140)));
  /* 11e8146f push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11e81471 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81473u);
  /* 11e81473 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81476 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11e81478 call ebx */
  call_ind((uint32_t)(EBX), 0x11e8147au);
  /* 11e8147a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11e8147f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81481 call ebp */
  call_ind((uint32_t)(EBP), 0x11e81483u);
  /* 11e81483 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11e81488 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e8148a call ebp */
  call_ind((uint32_t)(EBP), 0x11e8148cu);
  /* 11e8148c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11e81491 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e81493 call ebp */
  call_ind((uint32_t)(EBP), 0x11e81495u);
  /* 11e81495 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11e8149a push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8149c call ebp */
  call_ind((uint32_t)(EBP), 0x11e8149eu);
  /* 11e8149e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e814a0 call esi */
  call_ind((uint32_t)(ESI), 0x11e814a2u);
  /* 11e814a2 mov ecx, 5 */
  ECX = (0x5u);
  /* 11e814a7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e814a9 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11e814ac lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11e814af lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11e814b2 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11e814b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e814b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e814b8 call ebp */
  call_ind((uint32_t)(EBP), 0x11e814bau);
  /* 11e814ba mov esi, dword ptr [0x11e8a128] */
  ESI = (r32((uint32_t)(0x11e8a128)));
  /* 11e814c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e814c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e814c4 call esi */
  call_ind((uint32_t)(ESI), 0x11e814c6u);
  /* 11e814c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e814c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e814ca call esi */
  call_ind((uint32_t)(ESI), 0x11e814ccu);
  /* 11e814cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e814cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11e814d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e814d3 call esi */
  call_ind((uint32_t)(ESI), 0x11e814d5u);
  /* 11e814d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e814d7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11e814d9 call esi */
  call_ind((uint32_t)(ESI), 0x11e814dbu);
  /* 11e814db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e814de jmp 0x11e814ec */
  goto L_11e814ec;
L_11e814e0:;
  /* 11e814e0 mov edi, dword ptr [0x11e8a13c] */
  EDI = (r32((uint32_t)(0x11e8a13c)));
  /* 11e814e6 mov esi, dword ptr [0x11e8a128] */
  ESI = (r32((uint32_t)(0x11e8a128)));
L_11e814ec:;
  /* 11e814ec push 0x11e8f608 */
  push32((uint32_t)(0x11e8f608u));
  /* 11e814f1 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e814f7u);
  /* 11e814f7 mov ebx, dword ptr [0x11e8a148] */
  EBX = (r32((uint32_t)(0x11e8a148)));
  /* 11e814fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81502 je 0x11e815d3 */
  if (C.zf) goto L_11e815d3;
  /* 11e81508 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e8150a call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e81510u);
  /* 11e81510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81513 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81515 je 0x11e815d3 */
  if (C.zf) goto L_11e815d3;
  /* 11e8151b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8151d call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e81523u);
  /* 11e81523 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81526 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81528 je 0x11e81546 */
  if (C.zf) goto L_11e81546;
  /* 11e8152a push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8152c push 0x11e8f610 */
  push32((uint32_t)(0x11e8f610u));
  /* 11e81531 call 0x11e820d0 */
  push32(0x11e81536u); f_11e820d0();
  /* 11e81536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8153b je 0x11e81546 */
  if (C.zf) goto L_11e81546;
  /* 11e8153d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8153f push 3 */
  push32((uint32_t)(0x3u));
  /* 11e81541 call esi */
  call_ind((uint32_t)(ESI), 0x11e81543u);
  /* 11e81543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81546:;
  /* 11e81546 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e81548 call dword ptr [0x11e8a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a120))), 0x11e8154eu);
  /* 11e8154e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81551 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81553 je 0x11e815d3 */
  if (C.zf) goto L_11e815d3;
  /* 11e81555 push 0x11e8f608 */
  push32((uint32_t)(0x11e8f608u));
  /* 11e8155a call dword ptr [0x11e8a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a150))), 0x11e81560u);
  /* 11e81560 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81563 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81565 je 0x11e81593 */
  if (C.zf) goto L_11e81593;
  /* 11e81567 push 0x11e8f508 */
  push32((uint32_t)(0x11e8f508u));
  /* 11e8156c call 0x11e822dd */
  push32(0x11e81571u); f_11e822dd();
  /* 11e81571 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e81572 mov ecx, 5 */
  ECX = (0x5u);
  /* 11e81577 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e81579 mov ecx, 0x11e8f5a0 */
  ECX = (0x11e8f5a0u);
  /* 11e8157e push edx */
  push32((uint32_t)(EDX));
  /* 11e8157f call 0x11e82280 */
  push32(0x11e81584u); f_11e82280();
  /* 11e81584 push eax */
  push32((uint32_t)(EAX));
  /* 11e81585 push 0x11e8f608 */
  push32((uint32_t)(0x11e8f608u));
  /* 11e8158a call dword ptr [0x11e8a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a154))), 0x11e81590u);
  /* 11e81590 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81593:;
  /* 11e81593 push 0x11e8f508 */
  push32((uint32_t)(0x11e8f508u));
  /* 11e81598 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e8159eu);
  /* 11e8159e mov ecx, dword ptr [0x11e8f7b4] */
  ECX = (r32((uint32_t)(0x11e8f7b4)));
  /* 11e815a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e815a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e815a9 jl 0x11e815d3 */
  if ((C.sf!=C.of)) goto L_11e815d3;
  /* 11e815ab push 4 */
  push32((uint32_t)(0x4u));
  /* 11e815ad push 0x11e8f610 */
  push32((uint32_t)(0x11e8f610u));
  /* 11e815b2 call 0x11e820d0 */
  push32(0x11e815b7u); f_11e820d0();
  /* 11e815b7 push eax */
  push32((uint32_t)(EAX));
  /* 11e815b8 push 0x11e8f508 */
  push32((uint32_t)(0x11e8f508u));
  /* 11e815bd call ebx */
  call_ind((uint32_t)(EBX), 0x11e815bfu);
  /* 11e815bf mov edx, dword ptr [0x11e8c038] */
  EDX = (r32((uint32_t)(0x11e8c038)));
  /* 11e815c5 push edx */
  push32((uint32_t)(EDX));
  /* 11e815c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e815c8 call ebp */
  call_ind((uint32_t)(EBP), 0x11e815cau);
  /* 11e815ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11e815cc push 3 */
  push32((uint32_t)(0x3u));
  /* 11e815ce call esi */
  call_ind((uint32_t)(ESI), 0x11e815d0u);
  /* 11e815d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e815d3:;
  /* 11e815d3 push 0x11e8f600 */
  push32((uint32_t)(0x11e8f600u));
  /* 11e815d8 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e815deu);
  /* 11e815de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e815e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e815e3 je 0x11e816b4 */
  if (C.zf) goto L_11e816b4;
  /* 11e815e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e815eb call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e815f1u);
  /* 11e815f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e815f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e815f6 je 0x11e816b4 */
  if (C.zf) goto L_11e816b4;
  /* 11e815fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11e815fe call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e81604u);
  /* 11e81604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81607 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81609 je 0x11e81627 */
  if (C.zf) goto L_11e81627;
  /* 11e8160b push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8160d push 0x11e8f630 */
  push32((uint32_t)(0x11e8f630u));
  /* 11e81612 call 0x11e820d0 */
  push32(0x11e81617u); f_11e820d0();
  /* 11e81617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8161a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8161c je 0x11e81627 */
  if (C.zf) goto L_11e81627;
  /* 11e8161e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81620 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e81622 call esi */
  call_ind((uint32_t)(ESI), 0x11e81624u);
  /* 11e81624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81627:;
  /* 11e81627 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e81629 call dword ptr [0x11e8a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a120))), 0x11e8162fu);
  /* 11e8162f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81632 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81634 je 0x11e816b4 */
  if (C.zf) goto L_11e816b4;
  /* 11e81636 push 0x11e8f600 */
  push32((uint32_t)(0x11e8f600u));
  /* 11e8163b call dword ptr [0x11e8a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a150))), 0x11e81641u);
  /* 11e81641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81644 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81646 je 0x11e81674 */
  if (C.zf) goto L_11e81674;
  /* 11e81648 push 0x11e8f500 */
  push32((uint32_t)(0x11e8f500u));
  /* 11e8164d call 0x11e822dd */
  push32(0x11e81652u); f_11e822dd();
  /* 11e81652 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e81653 mov ecx, 5 */
  ECX = (0x5u);
  /* 11e81658 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e8165a mov ecx, 0x11e8f570 */
  ECX = (0x11e8f570u);
  /* 11e8165f push edx */
  push32((uint32_t)(EDX));
  /* 11e81660 call 0x11e82280 */
  push32(0x11e81665u); f_11e82280();
  /* 11e81665 push eax */
  push32((uint32_t)(EAX));
  /* 11e81666 push 0x11e8f600 */
  push32((uint32_t)(0x11e8f600u));
  /* 11e8166b call dword ptr [0x11e8a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a154))), 0x11e81671u);
  /* 11e81671 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81674:;
  /* 11e81674 push 0x11e8f500 */
  push32((uint32_t)(0x11e8f500u));
  /* 11e81679 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e8167fu);
  /* 11e8167f mov ecx, dword ptr [0x11e8f7b4] */
  ECX = (r32((uint32_t)(0x11e8f7b4)));
  /* 11e81685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81688 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8168a jl 0x11e816b4 */
  if ((C.sf!=C.of)) goto L_11e816b4;
  /* 11e8168c push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8168e push 0x11e8f630 */
  push32((uint32_t)(0x11e8f630u));
  /* 11e81693 call 0x11e820d0 */
  push32(0x11e81698u); f_11e820d0();
  /* 11e81698 push eax */
  push32((uint32_t)(EAX));
  /* 11e81699 push 0x11e8f500 */
  push32((uint32_t)(0x11e8f500u));
  /* 11e8169e call ebx */
  call_ind((uint32_t)(EBX), 0x11e816a0u);
  /* 11e816a0 mov edx, dword ptr [0x11e8c038] */
  EDX = (r32((uint32_t)(0x11e8c038)));
  /* 11e816a6 push edx */
  push32((uint32_t)(EDX));
  /* 11e816a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e816a9 call ebp */
  call_ind((uint32_t)(EBP), 0x11e816abu);
  /* 11e816ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11e816ad push 4 */
  push32((uint32_t)(0x4u));
  /* 11e816af call esi */
  call_ind((uint32_t)(ESI), 0x11e816b1u);
  /* 11e816b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e816b4:;
  /* 11e816b4 push 0x11e8f5f8 */
  push32((uint32_t)(0x11e8f5f8u));
  /* 11e816b9 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e816bfu);
  /* 11e816bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e816c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e816c4 je 0x11e81795 */
  if (C.zf) goto L_11e81795;
  /* 11e816ca push 5 */
  push32((uint32_t)(0x5u));
  /* 11e816cc call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e816d2u);
  /* 11e816d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e816d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e816d7 je 0x11e81795 */
  if (C.zf) goto L_11e81795;
  /* 11e816dd push 3 */
  push32((uint32_t)(0x3u));
  /* 11e816df call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e816e5u);
  /* 11e816e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e816e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e816ea je 0x11e81708 */
  if (C.zf) goto L_11e81708;
  /* 11e816ec push 4 */
  push32((uint32_t)(0x4u));
  /* 11e816ee push 0x11e8f650 */
  push32((uint32_t)(0x11e8f650u));
  /* 11e816f3 call 0x11e820d0 */
  push32(0x11e816f8u); f_11e820d0();
  /* 11e816f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e816fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e816fd je 0x11e81708 */
  if (C.zf) goto L_11e81708;
  /* 11e816ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81701 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e81703 call esi */
  call_ind((uint32_t)(ESI), 0x11e81705u);
  /* 11e81705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81708:;
  /* 11e81708 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e8170a call dword ptr [0x11e8a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a120))), 0x11e81710u);
  /* 11e81710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81713 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81715 je 0x11e81795 */
  if (C.zf) goto L_11e81795;
  /* 11e81717 push 0x11e8f5f8 */
  push32((uint32_t)(0x11e8f5f8u));
  /* 11e8171c call dword ptr [0x11e8a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a150))), 0x11e81722u);
  /* 11e81722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81725 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81727 je 0x11e81755 */
  if (C.zf) goto L_11e81755;
  /* 11e81729 push 0x11e8f4f8 */
  push32((uint32_t)(0x11e8f4f8u));
  /* 11e8172e call 0x11e822dd */
  push32(0x11e81733u); f_11e822dd();
  /* 11e81733 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e81734 mov ecx, 5 */
  ECX = (0x5u);
  /* 11e81739 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e8173b mov ecx, 0x11e8f540 */
  ECX = (0x11e8f540u);
  /* 11e81740 push edx */
  push32((uint32_t)(EDX));
  /* 11e81741 call 0x11e82280 */
  push32(0x11e81746u); f_11e82280();
  /* 11e81746 push eax */
  push32((uint32_t)(EAX));
  /* 11e81747 push 0x11e8f5f8 */
  push32((uint32_t)(0x11e8f5f8u));
  /* 11e8174c call dword ptr [0x11e8a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a154))), 0x11e81752u);
  /* 11e81752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81755:;
  /* 11e81755 push 0x11e8f4f8 */
  push32((uint32_t)(0x11e8f4f8u));
  /* 11e8175a call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81760u);
  /* 11e81760 mov ecx, dword ptr [0x11e8f7b4] */
  ECX = (r32((uint32_t)(0x11e8f7b4)));
  /* 11e81766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81769 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8176b jl 0x11e81795 */
  if ((C.sf!=C.of)) goto L_11e81795;
  /* 11e8176d push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8176f push 0x11e8f650 */
  push32((uint32_t)(0x11e8f650u));
  /* 11e81774 call 0x11e820d0 */
  push32(0x11e81779u); f_11e820d0();
  /* 11e81779 push eax */
  push32((uint32_t)(EAX));
  /* 11e8177a push 0x11e8f4f8 */
  push32((uint32_t)(0x11e8f4f8u));
  /* 11e8177f call ebx */
  call_ind((uint32_t)(EBX), 0x11e81781u);
  /* 11e81781 mov edx, dword ptr [0x11e8c038] */
  EDX = (r32((uint32_t)(0x11e8c038)));
  /* 11e81787 push edx */
  push32((uint32_t)(EDX));
  /* 11e81788 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e8178a call ebp */
  call_ind((uint32_t)(EBP), 0x11e8178cu);
  /* 11e8178c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8178e push 5 */
  push32((uint32_t)(0x5u));
  /* 11e81790 call esi */
  call_ind((uint32_t)(ESI), 0x11e81792u);
  /* 11e81792 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81795:;
  /* 11e81795 push 0x11e8f5f0 */
  push32((uint32_t)(0x11e8f5f0u));
  /* 11e8179a call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e817a0u);
  /* 11e817a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e817a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e817a5 je 0x11e81876 */
  if (C.zf) goto L_11e81876;
  /* 11e817ab push 5 */
  push32((uint32_t)(0x5u));
  /* 11e817ad call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e817b3u);
  /* 11e817b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e817b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e817b8 je 0x11e81876 */
  if (C.zf) goto L_11e81876;
  /* 11e817be push 4 */
  push32((uint32_t)(0x4u));
  /* 11e817c0 call dword ptr [0x11e8a14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a14c))), 0x11e817c6u);
  /* 11e817c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e817c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e817cb je 0x11e817e9 */
  if (C.zf) goto L_11e817e9;
  /* 11e817cd push 4 */
  push32((uint32_t)(0x4u));
  /* 11e817cf push 0x11e8f670 */
  push32((uint32_t)(0x11e8f670u));
  /* 11e817d4 call 0x11e820d0 */
  push32(0x11e817d9u); f_11e820d0();
  /* 11e817d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e817dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e817de je 0x11e817e9 */
  if (C.zf) goto L_11e817e9;
  /* 11e817e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e817e2 push 6 */
  push32((uint32_t)(0x6u));
  /* 11e817e4 call esi */
  call_ind((uint32_t)(ESI), 0x11e817e6u);
  /* 11e817e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e817e9:;
  /* 11e817e9 push 6 */
  push32((uint32_t)(0x6u));
  /* 11e817eb call dword ptr [0x11e8a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a120))), 0x11e817f1u);
  /* 11e817f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e817f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e817f6 je 0x11e81876 */
  if (C.zf) goto L_11e81876;
  /* 11e817f8 push 0x11e8f5f0 */
  push32((uint32_t)(0x11e8f5f0u));
  /* 11e817fd call dword ptr [0x11e8a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a150))), 0x11e81803u);
  /* 11e81803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81806 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81808 je 0x11e81836 */
  if (C.zf) goto L_11e81836;
  /* 11e8180a push 0x11e8f4f0 */
  push32((uint32_t)(0x11e8f4f0u));
  /* 11e8180f call 0x11e822dd */
  push32(0x11e81814u); f_11e822dd();
  /* 11e81814 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e81815 mov ecx, 5 */
  ECX = (0x5u);
  /* 11e8181a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e8181c mov ecx, 0x11e8f510 */
  ECX = (0x11e8f510u);
  /* 11e81821 push edx */
  push32((uint32_t)(EDX));
  /* 11e81822 call 0x11e82280 */
  push32(0x11e81827u); f_11e82280();
  /* 11e81827 push eax */
  push32((uint32_t)(EAX));
  /* 11e81828 push 0x11e8f5f0 */
  push32((uint32_t)(0x11e8f5f0u));
  /* 11e8182d call dword ptr [0x11e8a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a154))), 0x11e81833u);
  /* 11e81833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81836:;
  /* 11e81836 push 0x11e8f4f0 */
  push32((uint32_t)(0x11e8f4f0u));
  /* 11e8183b call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81841u);
  /* 11e81841 mov ecx, dword ptr [0x11e8f7b4] */
  ECX = (r32((uint32_t)(0x11e8f7b4)));
  /* 11e81847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8184a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8184c jl 0x11e81876 */
  if ((C.sf!=C.of)) goto L_11e81876;
  /* 11e8184e push 4 */
  push32((uint32_t)(0x4u));
  /* 11e81850 push 0x11e8f670 */
  push32((uint32_t)(0x11e8f670u));
  /* 11e81855 call 0x11e820d0 */
  push32(0x11e8185au); f_11e820d0();
  /* 11e8185a push eax */
  push32((uint32_t)(EAX));
  /* 11e8185b push 0x11e8f4f0 */
  push32((uint32_t)(0x11e8f4f0u));
  /* 11e81860 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81862u);
  /* 11e81862 mov edx, dword ptr [0x11e8c038] */
  EDX = (r32((uint32_t)(0x11e8c038)));
  /* 11e81868 push edx */
  push32((uint32_t)(EDX));
  /* 11e81869 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8186b call ebp */
  call_ind((uint32_t)(EBP), 0x11e8186du);
  /* 11e8186d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8186f push 6 */
  push32((uint32_t)(0x6u));
  /* 11e81871 call esi */
  call_ind((uint32_t)(ESI), 0x11e81873u);
  /* 11e81873 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81876:;
  /* 11e81876 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81878 push 0x11e8f690 */
  push32((uint32_t)(0x11e8f690u));
  /* 11e8187d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8187f call dword ptr [0x11e8a158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a158))), 0x11e81885u);
  /* 11e81885 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81888 mov ebp, 0x11e8f610 */
  EBP = (0x11e8f610u);
L_11e8188d:;
  /* 11e8188d push 0x11e8f698 */
  push32((uint32_t)(0x11e8f698u));
  /* 11e81892 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11e81894 push 0x11e8f6a0 */
  push32((uint32_t)(0x11e8f6a0u));
  /* 11e81899 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e8189b push 0x11e8c030 */
  push32((uint32_t)(0x11e8c030u));
  /* 11e818a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e818a2 push 0x11e8f7a8 */
  push32((uint32_t)(0x11e8f7a8u));
  /* 11e818a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e818a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11e818aa call 0x11e82050 */
  push32(0x11e818afu); f_11e82050();
  /* 11e818af add ebp, 8 */
  { uint32_t _a=(EBP),_b=(0x8u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e818b2 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e818b5 cmp ebp, 0x11e8f690 */
  { uint32_t _a=(EBP),_b=(0x11e8f690u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e818bb jl 0x11e8188d */
  if ((C.sf!=C.of)) goto L_11e8188d;
  /* 11e818bd call 0x11e81f20 */
  push32(0x11e818c2u); f_11e81f20();
  /* 11e818c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e818c4 push 0x11e8f690 */
  push32((uint32_t)(0x11e8f690u));
  /* 11e818c9 call dword ptr [0x11e8a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a15c))), 0x11e818cfu);
  /* 11e818cf push 0x11e8f690 */
  push32((uint32_t)(0x11e8f690u));
  /* 11e818d4 call 0x11e81a00 */
  push32(0x11e818d9u); f_11e81a00();
  /* 11e818d9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11e818db call dword ptr [0x11e8a120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a120))), 0x11e818e1u);
  /* 11e818e1 mov ebp, dword ptr [0x11e8a160] */
  EBP = (r32((uint32_t)(0x11e8a160)));
  /* 11e818e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e818ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e818ec je 0x11e8197c */
  if (C.zf) goto L_11e8197c;
  /* 11e818f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e818f4 call ebp */
  call_ind((uint32_t)(EBP), 0x11e818f6u);
  /* 11e818f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e818f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e818fb je 0x11e8191d */
  if (C.zf) goto L_11e8191d;
  /* 11e818fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e818ff push 7 */
  push32((uint32_t)(0x7u));
  /* 11e81901 call esi */
  call_ind((uint32_t)(ESI), 0x11e81903u);
  /* 11e81903 push 0x11e8c2fc */
  push32((uint32_t)(0x11e8c2fcu));
  /* 11e81908 call dword ptr [0x11e8a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a138))), 0x11e8190eu);
  /* 11e8190e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11e81910 call edi */
  call_ind((uint32_t)(EDI), 0x11e81912u);
  /* 11e81912 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11e81914 call dword ptr [0x11e8a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a140))), 0x11e8191au);
  /* 11e8191a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e8191d:;
  /* 11e8191d mov ebx, dword ptr [0x11e8a144] */
  EBX = (r32((uint32_t)(0x11e8a144)));
  /* 11e81923 push 0x11e8f608 */
  push32((uint32_t)(0x11e8f608u));
  /* 11e81928 call ebx */
  call_ind((uint32_t)(EBX), 0x11e8192au);
  /* 11e8192a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8192d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8192f jne 0x11e81982 */
  if (!C.zf) goto L_11e81982;
  /* 11e81931 push 0x11e8f600 */
  push32((uint32_t)(0x11e8f600u));
  /* 11e81936 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81938u);
  /* 11e81938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8193b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8193d jne 0x11e81982 */
  if (!C.zf) goto L_11e81982;
  /* 11e8193f push 0x11e8f5f8 */
  push32((uint32_t)(0x11e8f5f8u));
  /* 11e81944 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81946u);
  /* 11e81946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8194b jne 0x11e81982 */
  if (!C.zf) goto L_11e81982;
  /* 11e8194d push 0x11e8f5f0 */
  push32((uint32_t)(0x11e8f5f0u));
  /* 11e81952 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81954u);
  /* 11e81954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81959 jne 0x11e81982 */
  if (!C.zf) goto L_11e81982;
  /* 11e8195b push eax */
  push32((uint32_t)(EAX));
  /* 11e8195c push 7 */
  push32((uint32_t)(0x7u));
  /* 11e8195e call esi */
  call_ind((uint32_t)(ESI), 0x11e81960u);
  /* 11e81960 push 0x11e8c2f0 */
  push32((uint32_t)(0x11e8c2f0u));
  /* 11e81965 call dword ptr [0x11e8a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a138))), 0x11e8196bu);
  /* 11e8196b push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11e8196d call edi */
  call_ind((uint32_t)(EDI), 0x11e8196fu);
  /* 11e8196f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11e81971 call dword ptr [0x11e8a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a140))), 0x11e81977u);
  /* 11e81977 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8197a jmp 0x11e81982 */
  goto L_11e81982;
L_11e8197c:;
  /* 11e8197c mov ebx, dword ptr [0x11e8a144] */
  EBX = (r32((uint32_t)(0x11e8a144)));
L_11e81982:;
  /* 11e81982 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e81984 call ebp */
  call_ind((uint32_t)(EBP), 0x11e81986u);
  /* 11e81986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81989 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e8198b je 0x11e819d9 */
  if (C.zf) goto L_11e819d9;
  /* 11e8198d push 0x11e8f608 */
  push32((uint32_t)(0x11e8f608u));
  /* 11e81992 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81994u);
  /* 11e81994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81999 jne 0x11e819d9 */
  if (!C.zf) goto L_11e819d9;
  /* 11e8199b push 0x11e8f600 */
  push32((uint32_t)(0x11e8f600u));
  /* 11e819a0 call ebx */
  call_ind((uint32_t)(EBX), 0x11e819a2u);
  /* 11e819a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e819a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e819a7 jne 0x11e819d9 */
  if (!C.zf) goto L_11e819d9;
  /* 11e819a9 push 0x11e8f5f8 */
  push32((uint32_t)(0x11e8f5f8u));
  /* 11e819ae call ebx */
  call_ind((uint32_t)(EBX), 0x11e819b0u);
  /* 11e819b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e819b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e819b5 jne 0x11e819d9 */
  if (!C.zf) goto L_11e819d9;
  /* 11e819b7 push 0x11e8f5f0 */
  push32((uint32_t)(0x11e8f5f0u));
  /* 11e819bc call ebx */
  call_ind((uint32_t)(EBX), 0x11e819beu);
  /* 11e819be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e819c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e819c3 jne 0x11e819d9 */
  if (!C.zf) goto L_11e819d9;
  /* 11e819c5 push 0x11e8c2e4 */
  push32((uint32_t)(0x11e8c2e4u));
  /* 11e819ca call dword ptr [0x11e8a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a138))), 0x11e819d0u);
  /* 11e819d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e819d3 call dword ptr [0x11e8a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a164))), 0x11e819d9u);
L_11e819d9:;
  /* 11e819d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e819db call ebp */
  call_ind((uint32_t)(EBP), 0x11e819ddu);
  /* 11e819dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e819e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e819e2 pop edi */
  EDI = (pop32());
  /* 11e819e3 pop esi */
  ESI = (pop32());
  /* 11e819e4 pop ebp */
  EBP = (pop32());
  /* 11e819e5 pop ebx */
  EBX = (pop32());
  /* 11e819e6 je 0x11e819fc */
  if (C.zf) goto L_11e819fc;
  /* 11e819e8 push 0x11e8c2d8 */
  push32((uint32_t)(0x11e8c2d8u));
  /* 11e819ed call dword ptr [0x11e8a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a138))), 0x11e819f3u);
  /* 11e819f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e819f6 jmp dword ptr [0x11e8a168] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11e8a168)))); return;
L_11e819fc:;
  /* 11e819fc ret  */
  ESPCHK(0x11e81380u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a00 @ 0x11e81a00 (59 bytes, 29 insns) */
void f_11e81a00(void) {
  FTRACE(0x11e81a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81a00 push esi */
  push32((uint32_t)(ESI));
  /* 11e81a01 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e81a05 push edi */
  push32((uint32_t)(EDI));
  /* 11e81a06 mov edi, dword ptr [0x11e8a144] */
  EDI = (r32((uint32_t)(0x11e8a144)));
  /* 11e81a0c push esi */
  push32((uint32_t)(ESI));
  /* 11e81a0d call edi */
  call_ind((uint32_t)(EDI), 0x11e81a0fu);
  /* 11e81a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81a14 je 0x11e81a2d */
  if (C.zf) goto L_11e81a2d;
  /* 11e81a16 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81a17 mov ebx, dword ptr [0x11e8a11c] */
  EBX = (r32((uint32_t)(0x11e8a11c)));
L_11e81a1d:;
  /* 11e81a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81a1f push esi */
  push32((uint32_t)(ESI));
  /* 11e81a20 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81a22u);
  /* 11e81a22 push esi */
  push32((uint32_t)(ESI));
  /* 11e81a23 call edi */
  call_ind((uint32_t)(EDI), 0x11e81a25u);
  /* 11e81a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81a2a jne 0x11e81a1d */
  if (!C.zf) goto L_11e81a1d;
  /* 11e81a2c pop ebx */
  EBX = (pop32());
L_11e81a2d:;
  /* 11e81a2d push esi */
  push32((uint32_t)(ESI));
  /* 11e81a2e call edi */
  call_ind((uint32_t)(EDI), 0x11e81a30u);
  /* 11e81a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81a33 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e81a35 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81a37 pop edi */
  EDI = (pop32());
  /* 11e81a38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e81a39 pop esi */
  ESI = (pop32());
  /* 11e81a3a ret  */
  ESPCHK(0x11e81a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a40 @ 0x11e81a40 (353 bytes, 117 insns) */
void f_11e81a40(void) {
  FTRACE(0x11e81a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81a40 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81a43 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 11e81a47 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81a48 push esi */
  push32((uint32_t)(ESI));
  /* 11e81a49 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e81a4b xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11e81a4d push edi */
  push32((uint32_t)(EDI));
  /* 11e81a4e mov edi, dword ptr [esp + 0x4c] */
  EDI = (r32((uint32_t)(ESP + 0x4c)));
  /* 11e81a52 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81a54 mov word ptr [esp + 0x14], si */
  w16((uint32_t)(ESP + 0x14), (SI));
  /* 11e81a59 mov word ptr [esp + 0x16], si */
  w16((uint32_t)(ESP + 0x16), (SI));
  /* 11e81a5e mov dword ptr [esp + 0x18], 0x40000032 */
  w32((uint32_t)(ESP + 0x18), (0x40000032u));
  /* 11e81a66 mov dword ptr [esp + 0xc], 0xffff */
  w32((uint32_t)(ESP + 0xc), (0xffffu));
  /* 11e81a6e mov dword ptr [esp + 0x10], esi */
  w32((uint32_t)(ESP + 0x10), (ESI));
  /* 11e81a72 jle 0x11e81b71 */
  if ((C.zf||C.sf!=C.of)) goto L_11e81b71;
  /* 11e81a78 push ebx */
  push32((uint32_t)(EBX));
L_11e81a79:;
  /* 11e81a79 mov eax, dword ptr [esp + 0x60] */
  EAX = (r32((uint32_t)(ESP + 0x60)));
  /* 11e81a7d cmp byte ptr [eax + ebp], 1 */
  { uint32_t _a=(r8((uint32_t)(EAX + EBP*1))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e81a81 jne 0x11e81b5f */
  if (!C.zf) goto L_11e81b5f;
  /* 11e81a87 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81a88 call dword ptr [0x11e8a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a104))), 0x11e81a8eu);
  /* 11e81a8e mov ebx, dword ptr [esp + 0x5c] */
  EBX = (r32((uint32_t)(ESP + 0x5c)));
  /* 11e81a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81a95 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e81a97 jle 0x11e81ab0 */
  if ((C.zf||C.sf!=C.of)) goto L_11e81ab0;
  /* 11e81a99 mov esi, dword ptr [esp + 0x54] */
  ESI = (r32((uint32_t)(ESP + 0x54)));
L_11e81a9d:;
  /* 11e81a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81a9f push ebp */
  push32((uint32_t)(EBP));
  /* 11e81aa0 push esi */
  push32((uint32_t)(ESI));
  /* 11e81aa1 call dword ptr [0x11e8a108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a108))), 0x11e81aa7u);
  /* 11e81aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81aaa add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81aad dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e81aae jne 0x11e81a9d */
  if (!C.zf) goto L_11e81a9d;
L_11e81ab0:;
  /* 11e81ab0 push edi */
  push32((uint32_t)(EDI));
  /* 11e81ab1 call 0x11e81a00 */
  push32(0x11e81ab6u); f_11e81a00();
  /* 11e81ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11e81ab9 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81aba call dword ptr [0x11e8a158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a158))), 0x11e81ac0u);
  /* 11e81ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81ac1 call dword ptr [0x11e8a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a104))), 0x11e81ac7u);
  /* 11e81ac7 mov ebx, dword ptr [0x11e8a144] */
  EBX = (r32((uint32_t)(0x11e8a144)));
  /* 11e81acd push edi */
  push32((uint32_t)(EDI));
  /* 11e81ace call ebx */
  call_ind((uint32_t)(EBX), 0x11e81ad0u);
  /* 11e81ad0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81ad3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81ad5 je 0x11e81ae8 */
  if (C.zf) goto L_11e81ae8;
  /* 11e81ad7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11e81ad9 lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 11e81add push edi */
  push32((uint32_t)(EDI));
  /* 11e81ade push ecx */
  push32((uint32_t)(ECX));
  /* 11e81adf call dword ptr [0x11e8a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a10c))), 0x11e81ae5u);
  /* 11e81ae5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81ae8:;
  /* 11e81ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11e81ae9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e81aeb call ebx */
  call_ind((uint32_t)(EBX), 0x11e81aedu);
  /* 11e81aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81af2 jle 0x11e81b5f */
  if ((C.zf||C.sf!=C.of)) goto L_11e81b5f;
L_11e81af4:;
  /* 11e81af4 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 11e81af8 push edx */
  push32((uint32_t)(EDX));
  /* 11e81af9 push esi */
  push32((uint32_t)(ESI));
  /* 11e81afa push edi */
  push32((uint32_t)(EDI));
  /* 11e81afb call dword ptr [0x11e8a110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a110))), 0x11e81b01u);
  /* 11e81b01 mov ebx, dword ptr [esp + 0x68] */
  EBX = (r32((uint32_t)(ESP + 0x68)));
  /* 11e81b05 mov ax, word ptr [esp + 0x40] */
  AX = (r16((uint32_t)(ESP + 0x40)));
  /* 11e81b0a mov cx, word ptr [esp + 0x44] */
  CX = (r16((uint32_t)(ESP + 0x44)));
  /* 11e81b0f lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 11e81b13 push edx */
  push32((uint32_t)(EDX));
  /* 11e81b14 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81b15 mov word ptr [esp + 0x2c], ax */
  w16((uint32_t)(ESP + 0x2c), (AX));
  /* 11e81b1a mov word ptr [esp + 0x2e], cx */
  w16((uint32_t)(ESP + 0x2e), (CX));
  /* 11e81b1f call dword ptr [0x11e8a114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a114))), 0x11e81b25u);
  /* 11e81b25 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11e81b29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81b2c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81b2e jge 0x11e81b50 */
  if ((C.sf==C.of)) goto L_11e81b50;
  /* 11e81b30 lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 11e81b34 push eax */
  push32((uint32_t)(EAX));
  /* 11e81b35 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81b36 call dword ptr [0x11e8a114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a114))), 0x11e81b3cu);
  /* 11e81b3c mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11e81b40 mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 11e81b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81b47 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e81b4c mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
L_11e81b50:;
  /* 11e81b50 push edi */
  push32((uint32_t)(EDI));
  /* 11e81b51 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e81b52 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81b58u);
  /* 11e81b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81b5b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81b5d jl 0x11e81af4 */
  if ((C.sf!=C.of)) goto L_11e81af4;
L_11e81b5f:;
  /* 11e81b5f mov eax, dword ptr [esp + 0x64] */
  EAX = (r32((uint32_t)(ESP + 0x64)));
  /* 11e81b63 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11e81b64 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81b66 jl 0x11e81a79 */
  if ((C.sf!=C.of)) goto L_11e81a79;
  /* 11e81b6c mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11e81b70 pop ebx */
  EBX = (pop32());
L_11e81b71:;
  /* 11e81b71 push edi */
  push32((uint32_t)(EDI));
  /* 11e81b72 call 0x11e81a00 */
  push32(0x11e81b77u); f_11e81a00();
  /* 11e81b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81b7a cmp esi, 0xffff */
  { uint32_t _a=(ESI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81b80 jge 0x11e81b8f */
  if ((C.sf==C.of)) goto L_11e81b8f;
  /* 11e81b82 push esi */
  push32((uint32_t)(ESI));
  /* 11e81b83 push edi */
  push32((uint32_t)(EDI));
  /* 11e81b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81b86 call dword ptr [0x11e8a118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a118))), 0x11e81b8cu);
  /* 11e81b8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81b8f:;
  /* 11e81b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e81b91 cmp esi, 0xffff */
  { uint32_t _a=(ESI),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81b97 pop edi */
  EDI = (pop32());
  /* 11e81b98 pop esi */
  ESI = (pop32());
  /* 11e81b99 setl al */
  AL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11e81b9c pop ebp */
  EBP = (pop32());
  /* 11e81b9d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81ba0 ret  */
  ESPCHK(0x11e81a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bb0 @ 0x11e81bb0 (192 bytes, 78 insns) */
void f_11e81bb0(void) {
  FTRACE(0x11e81bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81bb0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81bb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81bb4 push esi */
  push32((uint32_t)(ESI));
  /* 11e81bb5 mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 11e81bb9 push edi */
  push32((uint32_t)(EDI));
  /* 11e81bba push esi */
  push32((uint32_t)(ESI));
  /* 11e81bbb xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11e81bbd call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81bc3u);
  /* 11e81bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81bc8 je 0x11e81c67 */
  if (C.zf) goto L_11e81c67;
  /* 11e81bce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11e81bd0 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11e81bd4 push esi */
  push32((uint32_t)(ESI));
  /* 11e81bd5 push eax */
  push32((uint32_t)(EAX));
  /* 11e81bd6 call dword ptr [0x11e8a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a10c))), 0x11e81bdcu);
  /* 11e81bdc mov edi, dword ptr [esp + 0x24] */
  EDI = (r32((uint32_t)(ESP + 0x24)));
  /* 11e81be0 push edi */
  push32((uint32_t)(EDI));
  /* 11e81be1 call 0x11e81a00 */
  push32(0x11e81be6u); f_11e81a00();
  /* 11e81be6 mov ecx, dword ptr [esp + 0x40] */
  ECX = (r32((uint32_t)(ESP + 0x40)));
  /* 11e81bea mov edx, dword ptr [esp + 0x3c] */
  EDX = (r32((uint32_t)(ESP + 0x3c)));
  /* 11e81bee push ecx */
  push32((uint32_t)(ECX));
  /* 11e81bef mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 11e81bf3 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 11e81bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11e81bf8 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11e81bfc push eax */
  push32((uint32_t)(EAX));
  /* 11e81bfd push ecx */
  push32((uint32_t)(ECX));
  /* 11e81bfe push edx */
  push32((uint32_t)(EDX));
  /* 11e81bff push edi */
  push32((uint32_t)(EDI));
  /* 11e81c00 call 0x11e81a40 */
  push32(0x11e81c05u); f_11e81a40();
  /* 11e81c05 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c08 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e81c0a je 0x11e81c5e */
  if (C.zf) goto L_11e81c5e;
  /* 11e81c0c push edi */
  push32((uint32_t)(EDI));
  /* 11e81c0d push esi */
  push32((uint32_t)(ESI));
  /* 11e81c0e call 0x11e81fc0 */
  push32(0x11e81c13u); f_11e81fc0();
  /* 11e81c13 lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 11e81c1a push edi */
  push32((uint32_t)(EDI));
  /* 11e81c1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81c1d push esi */
  push32((uint32_t)(ESI));
  /* 11e81c1e lea ebx, [ecx + ecx*4] */
  EBX = ((uint32_t)(ECX + ECX*4));
  /* 11e81c21 call 0x11e81f50 */
  push32(0x11e81c26u); f_11e81f50();
  /* 11e81c26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c29 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81c2b jge 0x11e81c5e */
  if ((C.sf==C.of)) goto L_11e81c5e;
  /* 11e81c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81c2f push esi */
  push32((uint32_t)(ESI));
  /* 11e81c30 call dword ptr [0x11e8a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a15c))), 0x11e81c36u);
  /* 11e81c36 mov esi, dword ptr [esp + 0x30] */
  ESI = (r32((uint32_t)(ESP + 0x30)));
  /* 11e81c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81c3c lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 11e81c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81c42 push eax */
  push32((uint32_t)(EAX));
  /* 11e81c43 push esi */
  push32((uint32_t)(ESI));
  /* 11e81c44 call dword ptr [0x11e8a0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0fc))), 0x11e81c4au);
  /* 11e81c4a push edi */
  push32((uint32_t)(EDI));
  /* 11e81c4b push esi */
  push32((uint32_t)(ESI));
  /* 11e81c4c call dword ptr [0x11e8a100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a100))), 0x11e81c52u);
  /* 11e81c52 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c55 mov al, 1 */
  AL = (0x1u);
  /* 11e81c57 pop edi */
  EDI = (pop32());
  /* 11e81c58 pop esi */
  ESI = (pop32());
  /* 11e81c59 pop ebx */
  EBX = (pop32());
  /* 11e81c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c5d ret  */
  ESPCHK(0x11e81bb0u, _esp0);
  ESP += 4; return;
L_11e81c5e:;
  /* 11e81c5e pop edi */
  EDI = (pop32());
  /* 11e81c5f pop esi */
  ESI = (pop32());
  /* 11e81c60 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e81c62 pop ebx */
  EBX = (pop32());
  /* 11e81c63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c66 ret  */
  ESPCHK(0x11e81bb0u, _esp0);
  ESP += 4; return;
L_11e81c67:;
  /* 11e81c67 pop edi */
  EDI = (pop32());
  /* 11e81c68 mov al, bl */
  AL = (BL);
  /* 11e81c6a pop esi */
  ESI = (pop32());
  /* 11e81c6b pop ebx */
  EBX = (pop32());
  /* 11e81c6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c6f ret  */
  ESPCHK(0x11e81bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c70 @ 0x11e81c70 (112 bytes, 47 insns) */
void f_11e81c70(void) {
  FTRACE(0x11e81c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81c70 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81c73 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81c74 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81c75 push esi */
  push32((uint32_t)(ESI));
  /* 11e81c76 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
  /* 11e81c7a push esi */
  push32((uint32_t)(ESI));
  /* 11e81c7b xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
  /* 11e81c7d call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81c83u);
  /* 11e81c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81c88 je 0x11e81cd2 */
  if (C.zf) goto L_11e81cd2;
  /* 11e81c8a push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11e81c8f lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11e81c93 push esi */
  push32((uint32_t)(ESI));
  /* 11e81c94 push eax */
  push32((uint32_t)(EAX));
  /* 11e81c95 call dword ptr [0x11e8a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a10c))), 0x11e81c9bu);
  /* 11e81c9b mov ebp, dword ptr [esp + 0x30] */
  EBP = (r32((uint32_t)(ESP + 0x30)));
  /* 11e81c9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81ca2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e81ca4 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11e81ca6 jle 0x11e81cd2 */
  if ((C.zf||C.sf!=C.of)) goto L_11e81cd2;
  /* 11e81ca8 push edi */
  push32((uint32_t)(EDI));
  /* 11e81ca9 mov edi, dword ptr [esp + 0x24] */
  EDI = (r32((uint32_t)(ESP + 0x24)));
L_11e81cad:;
  /* 11e81cad cmp byte ptr [esi + edi], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + EDI*1))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e81cb1 jne 0x11e81ccc */
  if (!C.zf) goto L_11e81ccc;
  /* 11e81cb3 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11e81cb5 jne 0x11e81cca */
  if (!C.zf) goto L_11e81cca;
  /* 11e81cb7 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 11e81cbb push esi */
  push32((uint32_t)(ESI));
  /* 11e81cbc push ecx */
  push32((uint32_t)(ECX));
  /* 11e81cbd call dword ptr [0x11e8a0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0f8))), 0x11e81cc3u);
  /* 11e81cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81cc8 je 0x11e81ccc */
  if (C.zf) goto L_11e81ccc;
L_11e81cca:;
  /* 11e81cca mov bl, 1 */
  BL = (0x1u);
L_11e81ccc:;
  /* 11e81ccc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e81ccd cmp esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81ccf jl 0x11e81cad */
  if ((C.sf!=C.of)) goto L_11e81cad;
  /* 11e81cd1 pop edi */
  EDI = (pop32());
L_11e81cd2:;
  /* 11e81cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e81cd4 pop esi */
  ESI = (pop32());
  /* 11e81cd5 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11e81cd7 pop ebp */
  EBP = (pop32());
  /* 11e81cd8 pop ebx */
  EBX = (pop32());
  /* 11e81cd9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e81cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81cdf ret  */
  ESPCHK(0x11e81c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ce0 @ 0x11e81ce0 (182 bytes, 69 insns) */
void f_11e81ce0(void) {
  FTRACE(0x11e81ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81ce0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e81ce4 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81ce7 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 11e81ceb push ebx */
  push32((uint32_t)(EBX));
  /* 11e81cec push ebp */
  push32((uint32_t)(EBP));
  /* 11e81ced push esi */
  push32((uint32_t)(ESI));
  /* 11e81cee push edi */
  push32((uint32_t)(EDI));
  /* 11e81cef push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11e81cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11e81cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e81cf6 call dword ptr [0x11e8a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a10c))), 0x11e81cfcu);
  /* 11e81cfc mov edi, dword ptr [esp + 0x30] */
  EDI = (r32((uint32_t)(ESP + 0x30)));
  /* 11e81d00 push edi */
  push32((uint32_t)(EDI));
  /* 11e81d01 call 0x11e81a00 */
  push32(0x11e81d06u); f_11e81a00();
  /* 11e81d06 push edi */
  push32((uint32_t)(EDI));
  /* 11e81d07 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e81d09 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81d0fu);
  /* 11e81d0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81d14 jne 0x11e81d8e */
  if (!C.zf) goto L_11e81d8e;
  /* 11e81d16 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 11e81d1a mov ebp, dword ptr [0x11e8a0f4] */
  EBP = (r32((uint32_t)(0x11e8a0f4)));
L_11e81d20:;
  /* 11e81d20 cmp esi, dword ptr [esp + 0x2c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81d24 jge 0x11e81d8e */
  if ((C.sf==C.of)) goto L_11e81d8e;
  /* 11e81d26 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11e81d2a cmp byte ptr [esi + edx], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + EDX*1))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e81d2e jne 0x11e81d7f */
  if (!C.zf) goto L_11e81d7f;
  /* 11e81d30 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11e81d34 push esi */
  push32((uint32_t)(ESI));
  /* 11e81d35 push eax */
  push32((uint32_t)(EAX));
  /* 11e81d36 call dword ptr [0x11e8a0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0f8))), 0x11e81d3cu);
  /* 11e81d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81d3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81d41 je 0x11e81d7f */
  if (C.zf) goto L_11e81d7f;
  /* 11e81d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81d45 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11e81d49 push esi */
  push32((uint32_t)(ESI));
  /* 11e81d4a push ecx */
  push32((uint32_t)(ECX));
  /* 11e81d4b call ebp */
  call_ind((uint32_t)(EBP), 0x11e81d4du);
  /* 11e81d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81d4f push edi */
  push32((uint32_t)(EDI));
  /* 11e81d50 push esi */
  push32((uint32_t)(ESI));
  /* 11e81d51 call dword ptr [0x11e8a158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a158))), 0x11e81d57u);
  /* 11e81d57 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11e81d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81d5d push edx */
  push32((uint32_t)(EDX));
  /* 11e81d5e call dword ptr [0x11e8a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a15c))), 0x11e81d64u);
  /* 11e81d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81d66 lea eax, [esp + 0x34] */
  EAX = ((uint32_t)(ESP + 0x34));
  /* 11e81d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81d6c push eax */
  push32((uint32_t)(EAX));
  /* 11e81d6d push ebx */
  push32((uint32_t)(EBX));
  /* 11e81d6e call dword ptr [0x11e8a0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0fc))), 0x11e81d74u);
  /* 11e81d74 push edi */
  push32((uint32_t)(EDI));
  /* 11e81d75 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81d76 call dword ptr [0x11e8a100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a100))), 0x11e81d7cu);
  /* 11e81d7c add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81d7f:;
  /* 11e81d7f push edi */
  push32((uint32_t)(EDI));
  /* 11e81d80 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e81d81 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81d87u);
  /* 11e81d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81d8c je 0x11e81d20 */
  if (C.zf) goto L_11e81d20;
L_11e81d8e:;
  /* 11e81d8e pop edi */
  EDI = (pop32());
  /* 11e81d8f pop esi */
  ESI = (pop32());
  /* 11e81d90 pop ebp */
  EBP = (pop32());
  /* 11e81d91 pop ebx */
  EBX = (pop32());
  /* 11e81d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81d95 ret  */
  ESPCHK(0x11e81ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001da0 @ 0x11e81da0 (377 bytes, 133 insns) */
void f_11e81da0(void) {
  FTRACE(0x11e81da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81da1 mov ebp, esp */
  EBP = (ESP);
  /* 11e81da3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81da7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e81daa push esi */
  push32((uint32_t)(ESI));
  /* 11e81dab push edi */
  push32((uint32_t)(EDI));
  /* 11e81dac push ebx */
  push32((uint32_t)(EBX));
  /* 11e81dad call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81db3u);
  /* 11e81db3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81db8 je 0x11e81f12 */
  if (C.zf) goto L_11e81f12;
  /* 11e81dbe mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11e81dc1 push edi */
  push32((uint32_t)(EDI));
  /* 11e81dc2 call dword ptr [0x11e8a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a104))), 0x11e81dc8u);
  /* 11e81dc8 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e81dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81dcd push edi */
  push32((uint32_t)(EDI));
  /* 11e81dce push eax */
  push32((uint32_t)(EAX));
  /* 11e81dcf call dword ptr [0x11e8a108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a108))), 0x11e81dd5u);
  /* 11e81dd5 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e81dd8 push esi */
  push32((uint32_t)(ESI));
  /* 11e81dd9 call 0x11e81a00 */
  push32(0x11e81ddeu); f_11e81a00();
  /* 11e81dde push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81de0 push esi */
  push32((uint32_t)(ESI));
  /* 11e81de1 push edi */
  push32((uint32_t)(EDI));
  /* 11e81de2 call dword ptr [0x11e8a158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a158))), 0x11e81de8u);
  /* 11e81de8 push edi */
  push32((uint32_t)(EDI));
  /* 11e81de9 call dword ptr [0x11e8a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a104))), 0x11e81defu);
  /* 11e81def push esi */
  push32((uint32_t)(ESI));
  /* 11e81df0 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81df6u);
  /* 11e81df6 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81dfb je 0x11e81f12 */
  if (C.zf) goto L_11e81f12;
  /* 11e81e01 mov edi, dword ptr [0x11e8a10c] */
  EDI = (r32((uint32_t)(0x11e8a10c)));
  /* 11e81e07 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11e81e09 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11e81e0c push ebx */
  push32((uint32_t)(EBX));
  /* 11e81e0d push ecx */
  push32((uint32_t)(ECX));
  /* 11e81e0e mov dword ptr [ebp + 0x14], 0x186a0 */
  w32((uint32_t)(EBP + 0x14), (0x186a0u));
  /* 11e81e15 mov dword ptr [ebp + 0x18], 0xffff */
  w32((uint32_t)(EBP + 0x18), (0xffffu));
  /* 11e81e1c call edi */
  call_ind((uint32_t)(EDI), 0x11e81e1eu);
  /* 11e81e1e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11e81e20 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e81e23 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81e24 push edx */
  push32((uint32_t)(EDX));
  /* 11e81e25 call edi */
  call_ind((uint32_t)(EDI), 0x11e81e27u);
  /* 11e81e27 push esi */
  push32((uint32_t)(ESI));
  /* 11e81e28 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e81e2a call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81e30u);
  /* 11e81e30 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81e35 jle 0x11e81ecc */
  if ((C.zf||C.sf!=C.of)) goto L_11e81ecc;
L_11e81e3b:;
  /* 11e81e3b lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11e81e3e push eax */
  push32((uint32_t)(EAX));
  /* 11e81e3f push edi */
  push32((uint32_t)(EDI));
  /* 11e81e40 push esi */
  push32((uint32_t)(ESI));
  /* 11e81e41 call dword ptr [0x11e8a110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a110))), 0x11e81e47u);
  /* 11e81e47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e81e4a mov edx, dword ptr [ebp - 0x12] */
  EDX = (r32((uint32_t)(EBP + -0x12)));
  /* 11e81e4d mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e81e50 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11e81e54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e81e5a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e81e60 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81e62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e81e65 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11e81e69 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e81e6f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e81e74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81e77 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81e79 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11e81e7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e81e7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e81e82 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81e85 jge 0x11e81e89 */
  if ((C.sf==C.of)) goto L_11e81e89;
  /* 11e81e87 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e81e89:;
  /* 11e81e89 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e81e8c cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81e8f jge 0x11e81e93 */
  if ((C.sf==C.of)) goto L_11e81e93;
  /* 11e81e91 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11e81e93:;
  /* 11e81e93 mov ecx, eax */
  ECX = (EAX);
  /* 11e81e95 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81e97 ja 0x11e81e9b */
  if ((!C.cf&&!C.zf)) goto L_11e81e9b;
  /* 11e81e99 mov ecx, ebx */
  ECX = (EBX);
L_11e81e9b:;
  /* 11e81e9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81e9d add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81e9f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e81ea1 mov eax, ecx */
  EAX = (ECX);
  /* 11e81ea3 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81ea6 jge 0x11e81eb6 */
  if ((C.sf==C.of)) goto L_11e81eb6;
  /* 11e81ea8 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11e81eab mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e81eae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e81eb3 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11e81eb6:;
  /* 11e81eb6 push esi */
  push32((uint32_t)(ESI));
  /* 11e81eb7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e81eb8 call dword ptr [0x11e8a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a144))), 0x11e81ebeu);
  /* 11e81ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81ec1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81ec3 jl 0x11e81e3b */
  if ((C.sf!=C.of)) goto L_11e81e3b;
  /* 11e81ec9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11e81ecc:;
  /* 11e81ecc push esi */
  push32((uint32_t)(ESI));
  /* 11e81ecd call 0x11e81a00 */
  push32(0x11e81ed2u); f_11e81a00();
  /* 11e81ed2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e81ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81ed8 cmp eax, 0xffff */
  { uint32_t _a=(EAX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81edd jge 0x11e81eec */
  if ((C.sf==C.of)) goto L_11e81eec;
  /* 11e81edf push eax */
  push32((uint32_t)(EAX));
  /* 11e81ee0 push esi */
  push32((uint32_t)(ESI));
  /* 11e81ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81ee3 call dword ptr [0x11e8a118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a118))), 0x11e81ee9u);
  /* 11e81ee9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81eec:;
  /* 11e81eec push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81eee push ebx */
  push32((uint32_t)(EBX));
  /* 11e81eef call dword ptr [0x11e8a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a15c))), 0x11e81ef5u);
  /* 11e81ef5 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e81ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81efa lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e81efd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81eff push edx */
  push32((uint32_t)(EDX));
  /* 11e81f00 push edi */
  push32((uint32_t)(EDI));
  /* 11e81f01 call dword ptr [0x11e8a0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0fc))), 0x11e81f07u);
  /* 11e81f07 push esi */
  push32((uint32_t)(ESI));
  /* 11e81f08 push edi */
  push32((uint32_t)(EDI));
  /* 11e81f09 call dword ptr [0x11e8a100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a100))), 0x11e81f0fu);
  /* 11e81f0f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e81f12:;
  /* 11e81f12 pop edi */
  EDI = (pop32());
  /* 11e81f13 pop esi */
  ESI = (pop32());
  /* 11e81f14 pop ebx */
  EBX = (pop32());
  /* 11e81f15 mov esp, ebp */
  ESP = (EBP);
  /* 11e81f17 pop ebp */
  EBP = (pop32());
  /* 11e81f18 ret  */
  ESPCHK(0x11e81da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f20 @ 0x11e81f20 (44 bytes, 21 insns) */
void f_11e81f20(void) {
  FTRACE(0x11e81f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81f20 push esi */
  push32((uint32_t)(ESI));
  /* 11e81f21 mov esi, dword ptr [0x11e8a104] */
  ESI = (r32((uint32_t)(0x11e8a104)));
  /* 11e81f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81f29 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f2bu);
  /* 11e81f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e81f2d call esi */
  call_ind((uint32_t)(ESI), 0x11e81f2fu);
  /* 11e81f2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e81f31 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f33u);
  /* 11e81f33 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e81f35 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f37u);
  /* 11e81f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e81f39 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f3bu);
  /* 11e81f3b push 5 */
  push32((uint32_t)(0x5u));
  /* 11e81f3d call esi */
  call_ind((uint32_t)(ESI), 0x11e81f3fu);
  /* 11e81f3f push 6 */
  push32((uint32_t)(0x6u));
  /* 11e81f41 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f43u);
  /* 11e81f43 push 7 */
  push32((uint32_t)(0x7u));
  /* 11e81f45 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f47u);
  /* 11e81f47 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81f4a pop esi */
  ESI = (pop32());
  /* 11e81f4b ret  */
  ESPCHK(0x11e81f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f50 @ 0x11e81f50 (107 bytes, 50 insns) */
void f_11e81f50(void) {
  FTRACE(0x11e81f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e81f51 mov ebp, esp */
  EBP = (ESP);
  /* 11e81f53 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e81f59 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81f5a push esi */
  push32((uint32_t)(ESI));
  /* 11e81f5b mov esi, dword ptr [0x11e8a110] */
  ESI = (r32((uint32_t)(0x11e8a110)));
  /* 11e81f61 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11e81f64 push edi */
  push32((uint32_t)(EDI));
  /* 11e81f65 push eax */
  push32((uint32_t)(EAX));
  /* 11e81f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81f68 push ecx */
  push32((uint32_t)(ECX));
  /* 11e81f69 call esi */
  call_ind((uint32_t)(ESI), 0x11e81f6bu);
  /* 11e81f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e81f6e mov edi, dword ptr [ebp - 0x18] */
  EDI = (r32((uint32_t)(EBP + -0x18)));
  /* 11e81f71 mov ebx, dword ptr [ebp - 0x14] */
  EBX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e81f74 lea edx, [ebp - 0x2c] */
  EDX = ((uint32_t)(EBP + -0x2c));
  /* 11e81f77 push edx */
  push32((uint32_t)(EDX));
  /* 11e81f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e81f7a push eax */
  push32((uint32_t)(EAX));
  /* 11e81f7b call esi */
  call_ind((uint32_t)(ESI), 0x11e81f7du);
  /* 11e81f7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e81f80 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e81f83 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81f86 sub ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81f88 sub edx, edi */
  { uint32_t _a=(EDX),_b=(EDI),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81f8a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e81f8d mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11e81f90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e81f93 cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81f96 jge 0x11e81f9a */
  if ((C.sf==C.of)) goto L_11e81f9a;
  /* 11e81f98 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e81f9a:;
  /* 11e81f9a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e81f9d cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81fa0 jge 0x11e81fa4 */
  if ((C.sf==C.of)) goto L_11e81fa4;
  /* 11e81fa2 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11e81fa4:;
  /* 11e81fa4 mov ecx, eax */
  ECX = (EAX);
  /* 11e81fa6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e81fa8 ja 0x11e81fac */
  if ((!C.cf&&!C.zf)) goto L_11e81fac;
  /* 11e81faa mov ecx, ebx */
  ECX = (EBX);
L_11e81fac:;
  /* 11e81fac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81fae add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81fb0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e81fb2 mov eax, ecx */
  EAX = (ECX);
  /* 11e81fb4 pop edi */
  EDI = (pop32());
  /* 11e81fb5 pop esi */
  ESI = (pop32());
  /* 11e81fb6 pop ebx */
  EBX = (pop32());
  /* 11e81fb7 mov esp, ebp */
  ESP = (EBP);
  /* 11e81fb9 pop ebp */
  EBP = (pop32());
  /* 11e81fba ret  */
  ESPCHK(0x11e81f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fc0 @ 0x11e81fc0 (139 bytes, 53 insns) */
void f_11e81fc0(void) {
  FTRACE(0x11e81fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e81fc0 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e81fc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e81fc4 mov ebx, dword ptr [0x11e8a144] */
  EBX = (r32((uint32_t)(0x11e8a144)));
  /* 11e81fca push esi */
  push32((uint32_t)(ESI));
  /* 11e81fcb mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11e81fcf push edi */
  push32((uint32_t)(EDI));
  /* 11e81fd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e81fd2 mov ecx, 0x40000032 */
  ECX = (0x40000032u);
  /* 11e81fd7 push esi */
  push32((uint32_t)(ESI));
  /* 11e81fd8 mov word ptr [esp + 0x18], ax */
  w16((uint32_t)(ESP + 0x18), (AX));
  /* 11e81fdd mov word ptr [esp + 0x1a], ax */
  w16((uint32_t)(ESP + 0x1a), (AX));
  /* 11e81fe2 mov dword ptr [esp + 0x1c], ecx */
  w32((uint32_t)(ESP + 0x1c), (ECX));
  /* 11e81fe6 mov word ptr [esp + 0x10], ax */
  w16((uint32_t)(ESP + 0x10), (AX));
  /* 11e81feb mov word ptr [esp + 0x12], ax */
  w16((uint32_t)(ESP + 0x12), (AX));
  /* 11e81ff0 mov dword ptr [esp + 0x14], ecx */
  w32((uint32_t)(ESP + 0x14), (ECX));
  /* 11e81ff4 call ebx */
  call_ind((uint32_t)(EBX), 0x11e81ff6u);
  /* 11e81ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e81ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e81ffb je 0x11e8203f */
  if (C.zf) goto L_11e8203f;
  /* 11e81ffd mov edi, dword ptr [esp + 0x24] */
  EDI = (r32((uint32_t)(ESP + 0x24)));
  /* 11e82001 push edi */
  push32((uint32_t)(EDI));
  /* 11e82002 call ebx */
  call_ind((uint32_t)(EBX), 0x11e82004u);
  /* 11e82004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82009 je 0x11e8203f */
  if (C.zf) goto L_11e8203f;
  /* 11e8200b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11e8200d lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 11e82011 push esi */
  push32((uint32_t)(ESI));
  /* 11e82012 mov esi, dword ptr [0x11e8a10c] */
  ESI = (r32((uint32_t)(0x11e8a10c)));
  /* 11e82018 push eax */
  push32((uint32_t)(EAX));
  /* 11e82019 call esi */
  call_ind((uint32_t)(ESI), 0x11e8201bu);
  /* 11e8201b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11e8201d lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 11e82021 push edi */
  push32((uint32_t)(EDI));
  /* 11e82022 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82023 call esi */
  call_ind((uint32_t)(ESI), 0x11e82025u);
  /* 11e82025 lea edx, [esp + 0x24] */
  EDX = ((uint32_t)(ESP + 0x24));
  /* 11e82029 lea eax, [esp + 0x2c] */
  EAX = ((uint32_t)(ESP + 0x2c));
  /* 11e8202d push edx */
  push32((uint32_t)(EDX));
  /* 11e8202e push eax */
  push32((uint32_t)(EAX));
  /* 11e8202f call dword ptr [0x11e8a114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a114))), 0x11e82035u);
  /* 11e82035 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82038 pop edi */
  EDI = (pop32());
  /* 11e82039 pop esi */
  ESI = (pop32());
  /* 11e8203a pop ebx */
  EBX = (pop32());
  /* 11e8203b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8203e ret  */
  ESPCHK(0x11e81fc0u, _esp0);
  ESP += 4; return;
L_11e8203f:;
  /* 11e8203f pop edi */
  EDI = (pop32());
  /* 11e82040 pop esi */
  ESI = (pop32());
  /* 11e82041 mov eax, 0xffff */
  EAX = (0xffffu);
  /* 11e82046 pop ebx */
  EBX = (pop32());
  /* 11e82047 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8204a ret  */
  ESPCHK(0x11e81fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002050 @ 0x11e82050 (113 bytes, 55 insns) */
void f_11e82050(void) {
  FTRACE(0x11e82050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82050 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82051 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11e82055 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82056 mov ebp, dword ptr [esp + 0x1c] */
  EBP = (r32((uint32_t)(ESP + 0x1c)));
  /* 11e8205a push esi */
  push32((uint32_t)(ESI));
  /* 11e8205b mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11e8205f push edi */
  push32((uint32_t)(EDI));
  /* 11e82060 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11e82064 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82065 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82066 push esi */
  push32((uint32_t)(ESI));
  /* 11e82067 push edi */
  push32((uint32_t)(EDI));
  /* 11e82068 call 0x11e81c70 */
  push32(0x11e8206du); f_11e81c70();
  /* 11e8206d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82070 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e82072 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82073 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82074 je 0x11e820ad */
  if (C.zf) goto L_11e820ad;
  /* 11e82076 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 11e8207a mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 11e8207e mov ebx, dword ptr [esp + 0x24] */
  EBX = (r32((uint32_t)(ESP + 0x24)));
  /* 11e82082 push esi */
  push32((uint32_t)(ESI));
  /* 11e82083 push edi */
  push32((uint32_t)(EDI));
  /* 11e82084 push eax */
  push32((uint32_t)(EAX));
  /* 11e82085 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82086 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82087 call 0x11e81bb0 */
  push32(0x11e8208cu); f_11e81bb0();
  /* 11e8208c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8208f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e82091 jne 0x11e820bc */
  if (!C.zf) goto L_11e820bc;
  /* 11e82093 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 11e82097 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11e8209b push edx */
  push32((uint32_t)(EDX));
  /* 11e8209c push eax */
  push32((uint32_t)(EAX));
  /* 11e8209d push ebx */
  push32((uint32_t)(EBX));
  /* 11e8209e push esi */
  push32((uint32_t)(ESI));
  /* 11e8209f push edi */
  push32((uint32_t)(EDI));
  /* 11e820a0 call 0x11e81da0 */
  push32(0x11e820a5u); f_11e81da0();
  /* 11e820a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e820a8 pop edi */
  EDI = (pop32());
  /* 11e820a9 pop esi */
  ESI = (pop32());
  /* 11e820aa pop ebp */
  EBP = (pop32());
  /* 11e820ab pop ebx */
  EBX = (pop32());
  /* 11e820ac ret  */
  ESPCHK(0x11e82050u, _esp0);
  ESP += 4; return;
L_11e820ad:;
  /* 11e820ad mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11e820b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e820b2 push esi */
  push32((uint32_t)(ESI));
  /* 11e820b3 push edi */
  push32((uint32_t)(EDI));
  /* 11e820b4 call 0x11e81ce0 */
  push32(0x11e820b9u); f_11e81ce0();
  /* 11e820b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e820bc:;
  /* 11e820bc pop edi */
  EDI = (pop32());
  /* 11e820bd pop esi */
  ESI = (pop32());
  /* 11e820be pop ebp */
  EBP = (pop32());
  /* 11e820bf pop ebx */
  EBX = (pop32());
  /* 11e820c0 ret  */
  ESPCHK(0x11e82050u, _esp0);
  ESP += 4; return;
}

/* FUN_100020d0 @ 0x11e820d0 (61 bytes, 32 insns) */
void f_11e820d0(void) {
  FTRACE(0x11e820d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e820d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e820d1 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e820d5 push ebp */
  push32((uint32_t)(EBP));
  /* 11e820d6 push esi */
  push32((uint32_t)(ESI));
  /* 11e820d7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e820d9 push edi */
  push32((uint32_t)(EDI));
  /* 11e820da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e820dc jle 0x11e820fa */
  if ((C.zf||C.sf!=C.of)) goto L_11e820fa;
  /* 11e820de mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11e820e2 mov ebp, dword ptr [0x11e8a144] */
  EBP = (r32((uint32_t)(0x11e8a144)));
L_11e820e8:;
  /* 11e820e8 push edi */
  push32((uint32_t)(EDI));
  /* 11e820e9 call ebp */
  call_ind((uint32_t)(EBP), 0x11e820ebu);
  /* 11e820eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e820ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e820f0 je 0x11e82101 */
  if (C.zf) goto L_11e82101;
  /* 11e820f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e820f3 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e820f6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e820f8 jl 0x11e820e8 */
  if ((C.sf!=C.of)) goto L_11e820e8;
L_11e820fa:;
  /* 11e820fa pop edi */
  EDI = (pop32());
  /* 11e820fb pop esi */
  ESI = (pop32());
  /* 11e820fc pop ebp */
  EBP = (pop32());
  /* 11e820fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e820ff pop ebx */
  EBX = (pop32());
  /* 11e82100 ret  */
  ESPCHK(0x11e820d0u, _esp0);
  ESP += 4; return;
L_11e82101:;
  /* 11e82101 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e82105 pop edi */
  EDI = (pop32());
  /* 11e82106 lea eax, [eax + esi*8] */
  EAX = ((uint32_t)(EAX + ESI*8));
  /* 11e82109 pop esi */
  ESI = (pop32());
  /* 11e8210a pop ebp */
  EBP = (pop32());
  /* 11e8210b pop ebx */
  EBX = (pop32());
  /* 11e8210c ret  */
  ESPCHK(0x11e820d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002110 @ 0x11e82110 (337 bytes, 120 insns) [1 switch table(s)] */
void f_11e82110(void) {
  FTRACE(0x11e82110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82110 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e82114 push esi */
  push32((uint32_t)(ESI));
  /* 11e82115 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e8211a push edi */
  push32((uint32_t)(EDI));
  /* 11e8211b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8211e mov esi, ecx */
  ESI = (ECX);
  /* 11e82120 ja 0x11e8225c */
  if ((!C.cf&&!C.zf)) goto L_11e8225c;
  /* 11e82126 jmp dword ptr [eax*4 + 0x11e82264] */
  switch (EAX) {
    case 0: goto L_11e8212d;
    case 1: goto L_11e8217a;
    case 2: goto L_11e821c7;
    case 3: goto L_11e82214;
    default: x86_unimpl("switch@0x11e82126 out of table"); return;
  }
L_11e8212d:;
  /* 11e8212d mov edi, dword ptr [0x11e8a17c] */
  EDI = (r32((uint32_t)(0x11e8a17c)));
  /* 11e82133 push 0x11e8c538 */
  push32((uint32_t)(0x11e8c538u));
  /* 11e82138 push esi */
  push32((uint32_t)(ESI));
  /* 11e82139 call edi */
  call_ind((uint32_t)(EDI), 0x11e8213bu);
  /* 11e8213b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11e8213e push 0x11e8c520 */
  push32((uint32_t)(0x11e8c520u));
  /* 11e82143 push eax */
  push32((uint32_t)(EAX));
  /* 11e82144 call edi */
  call_ind((uint32_t)(EDI), 0x11e82146u);
  /* 11e82146 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11e82149 push 0x11e8c508 */
  push32((uint32_t)(0x11e8c508u));
  /* 11e8214e push ecx */
  push32((uint32_t)(ECX));
  /* 11e8214f call edi */
  call_ind((uint32_t)(EDI), 0x11e82151u);
  /* 11e82151 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11e82154 push 0x11e8c4f4 */
  push32((uint32_t)(0x11e8c4f4u));
  /* 11e82159 push edx */
  push32((uint32_t)(EDX));
  /* 11e8215a call edi */
  call_ind((uint32_t)(EDI), 0x11e8215cu);
  /* 11e8215c lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11e8215f push 0x11e8c4dc */
  push32((uint32_t)(0x11e8c4dcu));
  /* 11e82164 push eax */
  push32((uint32_t)(EAX));
  /* 11e82165 call edi */
  call_ind((uint32_t)(EDI), 0x11e82167u);
  /* 11e82167 add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8216a push 0x11e8c4c8 */
  push32((uint32_t)(0x11e8c4c8u));
  /* 11e8216f push esi */
  push32((uint32_t)(ESI));
  /* 11e82170 call edi */
  call_ind((uint32_t)(EDI), 0x11e82172u);
  /* 11e82172 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82175 pop edi */
  EDI = (pop32());
  /* 11e82176 pop esi */
  ESI = (pop32());
  /* 11e82177 ret 4 */
  ESPCHK(0x11e82110u, _esp0);
  ESP += 8; return;
L_11e8217a:;
  /* 11e8217a mov edi, dword ptr [0x11e8a17c] */
  EDI = (r32((uint32_t)(0x11e8a17c)));
  /* 11e82180 push 0x11e8c4ac */
  push32((uint32_t)(0x11e8c4acu));
  /* 11e82185 push esi */
  push32((uint32_t)(ESI));
  /* 11e82186 call edi */
  call_ind((uint32_t)(EDI), 0x11e82188u);
  /* 11e82188 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11e8218b push 0x11e8c494 */
  push32((uint32_t)(0x11e8c494u));
  /* 11e82190 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82191 call edi */
  call_ind((uint32_t)(EDI), 0x11e82193u);
  /* 11e82193 lea edx, [esi + 0x10] */
  EDX = ((uint32_t)(ESI + 0x10));
  /* 11e82196 push 0x11e8c47c */
  push32((uint32_t)(0x11e8c47cu));
  /* 11e8219b push edx */
  push32((uint32_t)(EDX));
  /* 11e8219c call edi */
  call_ind((uint32_t)(EDI), 0x11e8219eu);
  /* 11e8219e lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11e821a1 push 0x11e8c468 */
  push32((uint32_t)(0x11e8c468u));
  /* 11e821a6 push eax */
  push32((uint32_t)(EAX));
  /* 11e821a7 call edi */
  call_ind((uint32_t)(EDI), 0x11e821a9u);
  /* 11e821a9 lea ecx, [esi + 0x20] */
  ECX = ((uint32_t)(ESI + 0x20));
  /* 11e821ac push 0x11e8c450 */
  push32((uint32_t)(0x11e8c450u));
  /* 11e821b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e821b2 call edi */
  call_ind((uint32_t)(EDI), 0x11e821b4u);
  /* 11e821b4 add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e821b7 push 0x11e8c43c */
  push32((uint32_t)(0x11e8c43cu));
  /* 11e821bc push esi */
  push32((uint32_t)(ESI));
  /* 11e821bd call edi */
  call_ind((uint32_t)(EDI), 0x11e821bfu);
  /* 11e821bf add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e821c2 pop edi */
  EDI = (pop32());
  /* 11e821c3 pop esi */
  ESI = (pop32());
  /* 11e821c4 ret 4 */
  ESPCHK(0x11e82110u, _esp0);
  ESP += 8; return;
L_11e821c7:;
  /* 11e821c7 mov edi, dword ptr [0x11e8a17c] */
  EDI = (r32((uint32_t)(0x11e8a17c)));
  /* 11e821cd push 0x11e8c420 */
  push32((uint32_t)(0x11e8c420u));
  /* 11e821d2 push esi */
  push32((uint32_t)(ESI));
  /* 11e821d3 call edi */
  call_ind((uint32_t)(EDI), 0x11e821d5u);
  /* 11e821d5 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11e821d8 push 0x11e8c408 */
  push32((uint32_t)(0x11e8c408u));
  /* 11e821dd push edx */
  push32((uint32_t)(EDX));
  /* 11e821de call edi */
  call_ind((uint32_t)(EDI), 0x11e821e0u);
  /* 11e821e0 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11e821e3 push 0x11e8c3f0 */
  push32((uint32_t)(0x11e8c3f0u));
  /* 11e821e8 push eax */
  push32((uint32_t)(EAX));
  /* 11e821e9 call edi */
  call_ind((uint32_t)(EDI), 0x11e821ebu);
  /* 11e821eb lea ecx, [esi + 0x18] */
  ECX = ((uint32_t)(ESI + 0x18));
  /* 11e821ee push 0x11e8c3dc */
  push32((uint32_t)(0x11e8c3dcu));
  /* 11e821f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e821f4 call edi */
  call_ind((uint32_t)(EDI), 0x11e821f6u);
  /* 11e821f6 lea edx, [esi + 0x20] */
  EDX = ((uint32_t)(ESI + 0x20));
  /* 11e821f9 push 0x11e8c3c4 */
  push32((uint32_t)(0x11e8c3c4u));
  /* 11e821fe push edx */
  push32((uint32_t)(EDX));
  /* 11e821ff call edi */
  call_ind((uint32_t)(EDI), 0x11e82201u);
  /* 11e82201 add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82204 push 0x11e8c3b0 */
  push32((uint32_t)(0x11e8c3b0u));
  /* 11e82209 push esi */
  push32((uint32_t)(ESI));
  /* 11e8220a call edi */
  call_ind((uint32_t)(EDI), 0x11e8220cu);
  /* 11e8220c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8220f pop edi */
  EDI = (pop32());
  /* 11e82210 pop esi */
  ESI = (pop32());
  /* 11e82211 ret 4 */
  ESPCHK(0x11e82110u, _esp0);
  ESP += 8; return;
L_11e82214:;
  /* 11e82214 mov edi, dword ptr [0x11e8a17c] */
  EDI = (r32((uint32_t)(0x11e8a17c)));
  /* 11e8221a push 0x11e8c394 */
  push32((uint32_t)(0x11e8c394u));
  /* 11e8221f push esi */
  push32((uint32_t)(ESI));
  /* 11e82220 call edi */
  call_ind((uint32_t)(EDI), 0x11e82222u);
  /* 11e82222 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11e82225 push 0x11e8c37c */
  push32((uint32_t)(0x11e8c37cu));
  /* 11e8222a push eax */
  push32((uint32_t)(EAX));
  /* 11e8222b call edi */
  call_ind((uint32_t)(EDI), 0x11e8222du);
  /* 11e8222d lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11e82230 push 0x11e8c364 */
  push32((uint32_t)(0x11e8c364u));
  /* 11e82235 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82236 call edi */
  call_ind((uint32_t)(EDI), 0x11e82238u);
  /* 11e82238 lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11e8223b push 0x11e8c350 */
  push32((uint32_t)(0x11e8c350u));
  /* 11e82240 push edx */
  push32((uint32_t)(EDX));
  /* 11e82241 call edi */
  call_ind((uint32_t)(EDI), 0x11e82243u);
  /* 11e82243 lea eax, [esi + 0x20] */
  EAX = ((uint32_t)(ESI + 0x20));
  /* 11e82246 push 0x11e8c338 */
  push32((uint32_t)(0x11e8c338u));
  /* 11e8224b push eax */
  push32((uint32_t)(EAX));
  /* 11e8224c call edi */
  call_ind((uint32_t)(EDI), 0x11e8224eu);
  /* 11e8224e add esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82251 push 0x11e8c324 */
  push32((uint32_t)(0x11e8c324u));
  /* 11e82256 push esi */
  push32((uint32_t)(ESI));
  /* 11e82257 call edi */
  call_ind((uint32_t)(EDI), 0x11e82259u);
  /* 11e82259 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e8225c:;
  /* 11e8225c pop edi */
  EDI = (pop32());
  /* 11e8225d pop esi */
  ESI = (pop32());
  /* 11e8225e ret 4 */
  ESPCHK(0x11e82110u, _esp0);
  ESP += 8; return;
}

/* FUN_10002280 @ 0x11e82280 (53 bytes, 17 insns) [1 switch table(s)] */
void f_11e82280(void) {
  FTRACE(0x11e82280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82280 mov eax, ecx */
  EAX = (ECX);
  /* 11e82282 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e82286 cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82289 ja 0x11e822b0 */
  if ((!C.cf&&!C.zf)) goto L_11e822b0;
  /* 11e8228b jmp dword ptr [ecx*4 + 0x11e822b8] */
  switch (ECX) {
    case 0: goto L_11e822b2;
    case 1: goto L_11e82292;
    case 2: goto L_11e82298;
    case 3: goto L_11e8229e;
    case 4: goto L_11e822a4;
    case 5: goto L_11e822aa;
    default: x86_unimpl("switch@0x11e8228b out of table"); return;
  }
L_11e82292:;
  /* 11e82292 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82295 ret 4 */
  ESPCHK(0x11e82280u, _esp0);
  ESP += 8; return;
L_11e82298:;
  /* 11e82298 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8229b ret 4 */
  ESPCHK(0x11e82280u, _esp0);
  ESP += 8; return;
L_11e8229e:;
  /* 11e8229e add eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e822a1 ret 4 */
  ESPCHK(0x11e82280u, _esp0);
  ESP += 8; return;
L_11e822a4:;
  /* 11e822a4 add eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e822a7 ret 4 */
  ESPCHK(0x11e82280u, _esp0);
  ESP += 8; return;
L_11e822aa:;
  /* 11e822aa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e822ad ret 4 */
  ESPCHK(0x11e82280u, _esp0);
  ESP += 8; return;
L_11e822b0:;
  /* 11e822b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e822b2:;
  /* 11e822b2 ret 4 */
  ESPCHK(0x11e82280u, _esp0);
  ESP += 8; return;
}

/* FUN_100022d0 @ 0x11e822d0 (13 bytes, 4 insns) */
void f_11e822d0(void) {
  FTRACE(0x11e822d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e822d0 call 0x11e826d6 */
  push32(0x11e822d5u); f_11e826d6();
  /* 11e822d5 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e822d9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11e822dc ret  */
  ESPCHK(0x11e822d0u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11e822dd (34 bytes, 9 insns) */
void f_11e822dd(void) {
  FTRACE(0x11e822ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e822dd call 0x11e826d6 */
  push32(0x11e822e2u); f_11e826d6();
  /* 11e822e2 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e822e5 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e822eb add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e822f1 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11e822f4 mov eax, ecx */
  EAX = (ECX);
  /* 11e822f6 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e822f9 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e822fe ret  */
  ESPCHK(0x11e822ddu, _esp0);
  ESP += 4; return;
}

/* FUN_100022ff @ 0x11e822ff (220 bytes, 75 insns) */
void f_11e822ff(void) {
  FTRACE(0x11e822ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e822ff push ebp */
  push32((uint32_t)(EBP));
  /* 11e82300 mov ebp, esp */
  EBP = (ESP);
  /* 11e82302 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82308 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8230b push eax */
  push32((uint32_t)(EAX));
  /* 11e8230c call dword ptr [0x11e8a06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a06c))), 0x11e82312u);
  /* 11e82312 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e82315 push eax */
  push32((uint32_t)(EAX));
  /* 11e82316 call dword ptr [0x11e8a068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a068))), 0x11e8231cu);
  /* 11e8231c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11e82320 cmp ax, word ptr [0x11e8f7ca] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11e8f7ca))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e82327 jne 0x11e82364 */
  if (!C.zf) goto L_11e82364;
  /* 11e82329 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11e8232d cmp ax, word ptr [0x11e8f7c8] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11e8f7c8))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e82334 jne 0x11e82364 */
  if (!C.zf) goto L_11e82364;
  /* 11e82336 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11e8233a cmp ax, word ptr [0x11e8f7c6] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11e8f7c6))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e82341 jne 0x11e82364 */
  if (!C.zf) goto L_11e82364;
  /* 11e82343 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11e82347 cmp ax, word ptr [0x11e8f7c2] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11e8f7c2))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e8234e jne 0x11e82364 */
  if (!C.zf) goto L_11e82364;
  /* 11e82350 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11e82354 cmp ax, word ptr [0x11e8f7c0] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11e8f7c0))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e8235b jne 0x11e82364 */
  if (!C.zf) goto L_11e82364;
  /* 11e8235d mov eax, dword ptr [0x11e8f7b8] */
  EAX = (r32((uint32_t)(0x11e8f7b8)));
  /* 11e82362 jmp 0x11e823a9 */
  goto L_11e823a9;
L_11e82364:;
  /* 11e82364 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11e8236a push eax */
  push32((uint32_t)(EAX));
  /* 11e8236b call dword ptr [0x11e8a064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a064))), 0x11e82371u);
  /* 11e82371 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82374 je 0x11e82391 */
  if (C.zf) goto L_11e82391;
  /* 11e82376 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82379 jne 0x11e8238d */
  if (!C.zf) goto L_11e8238d;
  /* 11e8237b cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e82380 je 0x11e8238d */
  if (C.zf) goto L_11e8238d;
  /* 11e82382 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82386 je 0x11e8238d */
  if (C.zf) goto L_11e8238d;
  /* 11e82388 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8238a pop eax */
  EAX = (pop32());
  /* 11e8238b jmp 0x11e82394 */
  goto L_11e82394;
L_11e8238d:;
  /* 11e8238d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e8238f jmp 0x11e82394 */
  goto L_11e82394;
L_11e82391:;
  /* 11e82391 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e82394:;
  /* 11e82394 push esi */
  push32((uint32_t)(ESI));
  /* 11e82395 push edi */
  push32((uint32_t)(EDI));
  /* 11e82396 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11e82399 mov edi, 0x11e8f7c0 */
  EDI = (0x11e8f7c0u);
  /* 11e8239e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e8239f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e823a0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e823a1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11e823a2 pop edi */
  EDI = (pop32());
  /* 11e823a3 mov dword ptr [0x11e8f7b8], eax */
  w32((uint32_t)(0x11e8f7b8), (EAX));
  /* 11e823a8 pop esi */
  ESI = (pop32());
L_11e823a9:;
  /* 11e823a9 push eax */
  push32((uint32_t)(EAX));
  /* 11e823aa movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11e823ae push eax */
  push32((uint32_t)(EAX));
  /* 11e823af movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11e823b3 push eax */
  push32((uint32_t)(EAX));
  /* 11e823b4 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11e823b8 push eax */
  push32((uint32_t)(EAX));
  /* 11e823b9 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11e823bd push eax */
  push32((uint32_t)(EAX));
  /* 11e823be movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11e823c2 push eax */
  push32((uint32_t)(EAX));
  /* 11e823c3 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11e823c7 push eax */
  push32((uint32_t)(EAX));
  /* 11e823c8 call 0x11e827dd */
  push32(0x11e823cdu); f_11e827dd();
  /* 11e823cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e823d0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e823d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e823d5 je 0x11e823d9 */
  if (C.zf) goto L_11e823d9;
  /* 11e823d7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e823d9:;
  /* 11e823d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e823da ret  */
  ESPCHK(0x11e822ffu, _esp0);
  ESP += 4; return;
}

/* FUN_100023db @ 0x11e823db (49 bytes, 20 insns) */
void f_11e823db(void) {
  FTRACE(0x11e823dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e823db push esi */
  push32((uint32_t)(ESI));
  /* 11e823dc mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e823e0 push edi */
  push32((uint32_t)(EDI));
  /* 11e823e1 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11e823e4 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11e823e8 je 0x11e823f0 */
  if (C.zf) goto L_11e823f0;
  /* 11e823ea and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11e823ee jmp 0x11e82407 */
  goto L_11e82407;
L_11e823f0:;
  /* 11e823f0 push esi */
  push32((uint32_t)(ESI));
  /* 11e823f1 call 0x11e8295b */
  push32(0x11e823f6u); f_11e8295b();
  /* 11e823f6 push esi */
  push32((uint32_t)(ESI));
  /* 11e823f7 call 0x11e8240c */
  push32(0x11e823fcu); f_11e8240c();
  /* 11e823fc push esi */
  push32((uint32_t)(ESI));
  /* 11e823fd mov edi, eax */
  EDI = (EAX);
  /* 11e823ff call 0x11e829ad */
  push32(0x11e82404u); f_11e829ad();
  /* 11e82404 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e82407:;
  /* 11e82407 mov eax, edi */
  EAX = (EDI);
  /* 11e82409 pop edi */
  EDI = (pop32());
  /* 11e8240a pop esi */
  ESI = (pop32());
  /* 11e8240b ret  */
  ESPCHK(0x11e823dbu, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11e8240c (76 bytes, 30 insns) */
void f_11e8240c(void) {
  FTRACE(0x11e8240cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8240c push esi */
  push32((uint32_t)(ESI));
  /* 11e8240d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82411 push edi */
  push32((uint32_t)(EDI));
  /* 11e82412 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11e82415 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11e82419 je 0x11e8244f */
  if (C.zf) goto L_11e8244f;
  /* 11e8241b push esi */
  push32((uint32_t)(ESI));
  /* 11e8241c call 0x11e82c21 */
  push32(0x11e82421u); f_11e82c21();
  /* 11e82421 push esi */
  push32((uint32_t)(ESI));
  /* 11e82422 mov edi, eax */
  EDI = (EAX);
  /* 11e82424 call 0x11e82bc8 */
  push32(0x11e82429u); f_11e82bc8();
  /* 11e82429 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11e8242c call 0x11e82ae8 */
  push32(0x11e82431u); f_11e82ae8();
  /* 11e82431 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82436 jge 0x11e8243d */
  if ((C.sf==C.of)) goto L_11e8243d;
  /* 11e82438 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11e8243b jmp 0x11e8244f */
  goto L_11e8244f;
L_11e8243d:;
  /* 11e8243d mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11e82440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82442 je 0x11e8244f */
  if (C.zf) goto L_11e8244f;
  /* 11e82444 push eax */
  push32((uint32_t)(EAX));
  /* 11e82445 call 0x11e829ff */
  push32(0x11e8244au); f_11e829ff();
  /* 11e8244a and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11e8244e pop ecx */
  ECX = (pop32());
L_11e8244f:;
  /* 11e8244f and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11e82453 mov eax, edi */
  EAX = (EDI);
  /* 11e82455 pop edi */
  EDI = (pop32());
  /* 11e82456 pop esi */
  ESI = (pop32());
  /* 11e82457 ret  */
  ESPCHK(0x11e8240cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002458 @ 0x11e82458 (23 bytes, 6 insns) */
void f_11e82458(void) {
  FTRACE(0x11e82458u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82458 call 0x11e82470 */
  push32(0x11e8245du); f_11e82470();
  /* 11e8245d call 0x11e82d7a */
  push32(0x11e82462u); f_11e82d7a();
  /* 11e82462 mov dword ptr [0x11e8f7d4], eax */
  w32((uint32_t)(0x11e8f7d4), (EAX));
  /* 11e82467 call 0x11e82d2a */
  push32(0x11e8246cu); f_11e82d2a();
  /* 11e8246c fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11e8246e ret  */
  ESPCHK(0x11e82458u, _esp0);
  ESP += 4; return;
}

/* FUN_10002470 @ 0x11e82470 (56 bytes, 8 insns) */
void f_11e82470(void) {
  FTRACE(0x11e82470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82470 mov eax, 0x11e83153 */
  EAX = (0x11e83153u);
  /* 11e82475 mov dword ptr [0x11e8c7fc], 0x11e82dfd */
  w32((uint32_t)(0x11e8c7fc), (0x11e82dfdu));
  /* 11e8247f mov dword ptr [0x11e8c7f8], eax */
  w32((uint32_t)(0x11e8c7f8), (EAX));
  /* 11e82484 mov dword ptr [0x11e8c800], 0x11e82e63 */
  w32((uint32_t)(0x11e8c800), (0x11e82e63u));
  /* 11e8248e mov dword ptr [0x11e8c804], 0x11e82da3 */
  w32((uint32_t)(0x11e8c804), (0x11e82da3u));
  /* 11e82498 mov dword ptr [0x11e8c808], 0x11e82e4b */
  w32((uint32_t)(0x11e8c808), (0x11e82e4bu));
  /* 11e824a2 mov dword ptr [0x11e8c80c], eax */
  w32((uint32_t)(0x11e8c80c), (EAX));
  /* 11e824a7 ret  */
  ESPCHK(0x11e82470u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a8 @ 0x11e824a8 (217 bytes, 57 insns) */
void f_11e824a8(void) {
  FTRACE(0x11e824a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e824a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e824ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e824af jne 0x11e8253d */
  if (!C.zf) goto L_11e8253d;
  /* 11e824b5 call dword ptr [0x11e8a074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a074))), 0x11e824bbu);
  /* 11e824bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11e824bd mov dword ptr [0x11e8f7fc], eax */
  w32((uint32_t)(0x11e8f7fc), (EAX));
  /* 11e824c2 call 0x11e83aa4 */
  push32(0x11e824c7u); f_11e83aa4();
  /* 11e824c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e824c9 pop ecx */
  ECX = (pop32());
  /* 11e824ca je 0x11e82508 */
  if (C.zf) goto L_11e82508;
  /* 11e824cc mov eax, dword ptr [0x11e8f7fc] */
  EAX = (r32((uint32_t)(0x11e8f7fc)));
  /* 11e824d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e824d3 mov cl, byte ptr [0x11e8f7fd] */
  CL = (r8((uint32_t)(0x11e8f7fd)));
  /* 11e824d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e824de shr dword ptr [0x11e8f7fc], 0x10 */
  w32((uint32_t)(0x11e8f7fc), (sh_shr((uint32_t)(r32((uint32_t)(0x11e8f7fc))), (0x10u)&0x1f, 32)));
  /* 11e824e5 mov dword ptr [0x11e8f804], eax */
  w32((uint32_t)(0x11e8f804), (EAX));
  /* 11e824ea mov dword ptr [0x11e8f808], ecx */
  w32((uint32_t)(0x11e8f808), (ECX));
  /* 11e824f0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e824f3 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e824f5 mov dword ptr [0x11e8f800], eax */
  w32((uint32_t)(0x11e8f800), (EAX));
  /* 11e824fa call 0x11e82651 */
  push32(0x11e824ffu); f_11e82651();
  /* 11e824ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82501 jne 0x11e8250c */
  if (!C.zf) goto L_11e8250c;
  /* 11e82503 call 0x11e83b01 */
  push32(0x11e82508u); f_11e83b01();
L_11e82508:;
  /* 11e82508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e8250a jmp 0x11e8257e */
  goto L_11e8257e;
L_11e8250c:;
  /* 11e8250c call dword ptr [0x11e8a070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a070))), 0x11e82512u);
  /* 11e82512 mov dword ptr [0x11e90ee4], eax */
  w32((uint32_t)(0x11e90ee4), (EAX));
  /* 11e82517 call 0x11e837fd */
  push32(0x11e8251cu); f_11e837fd();
  /* 11e8251c mov dword ptr [0x11e8f7dc], eax */
  w32((uint32_t)(0x11e8f7dc), (EAX));
  /* 11e82521 call 0x11e832e7 */
  push32(0x11e82526u); f_11e832e7();
  /* 11e82526 call 0x11e835b0 */
  push32(0x11e8252bu); f_11e835b0();
  /* 11e8252b call 0x11e834f7 */
  push32(0x11e82530u); f_11e834f7();
  /* 11e82530 call 0x11e831c9 */
  push32(0x11e82535u); f_11e831c9();
  /* 11e82535 inc dword ptr [0x11e8f7d8] */
  { uint32_t _r=(r32((uint32_t)(0x11e8f7d8)))+1; w32((uint32_t)(0x11e8f7d8), (_r)); fl_inc(_r,32); }
  /* 11e8253b jmp 0x11e8257b */
  goto L_11e8257b;
L_11e8253d:;
  /* 11e8253d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e8253f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82541 jne 0x11e8256f */
  if (!C.zf) goto L_11e8256f;
  /* 11e82543 cmp dword ptr [0x11e8f7d8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11e8f7d8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82549 jle 0x11e82508 */
  if ((C.zf||C.sf!=C.of)) goto L_11e82508;
  /* 11e8254b dec dword ptr [0x11e8f7d8] */
  { uint32_t _r=(r32((uint32_t)(0x11e8f7d8)))-1; w32((uint32_t)(0x11e8f7d8), (_r)); fl_dec(_r,32); }
  /* 11e82551 cmp dword ptr [0x11e8f834], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11e8f834))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82557 jne 0x11e8255e */
  if (!C.zf) goto L_11e8255e;
  /* 11e82559 call 0x11e83207 */
  push32(0x11e8255eu); f_11e83207();
L_11e8255e:;
  /* 11e8255e call 0x11e834a3 */
  push32(0x11e82563u); f_11e834a3();
  /* 11e82563 call 0x11e826a5 */
  push32(0x11e82568u); f_11e826a5();
  /* 11e82568 call 0x11e83b01 */
  push32(0x11e8256du); f_11e83b01();
  /* 11e8256d jmp 0x11e8257b */
  goto L_11e8257b;
L_11e8256f:;
  /* 11e8256f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82572 jne 0x11e8257b */
  if (!C.zf) goto L_11e8257b;
  /* 11e82574 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82575 call 0x11e8273d */
  push32(0x11e8257au); f_11e8273d();
  /* 11e8257a pop ecx */
  ECX = (pop32());
L_11e8257b:;
  /* 11e8257b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8257d pop eax */
  EAX = (pop32());
L_11e8257e:;
  /* 11e8257e ret 0xc */
  ESPCHK(0x11e824a8u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11e82581 (157 bytes, 73 insns) */
void f_11e82581(void) {
  FTRACE(0x11e82581u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82581 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82582 mov ebp, esp */
  EBP = (ESP);
  /* 11e82584 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82585 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e82588 push esi */
  push32((uint32_t)(ESI));
  /* 11e82589 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8258c push edi */
  push32((uint32_t)(EDI));
  /* 11e8258d mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e82590 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e82592 jne 0x11e8259d */
  if (!C.zf) goto L_11e8259d;
  /* 11e82594 cmp dword ptr [0x11e8f7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8f7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8259b jmp 0x11e825c3 */
  goto L_11e825c3;
L_11e8259d:;
  /* 11e8259d cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e825a0 je 0x11e825a7 */
  if (C.zf) goto L_11e825a7;
  /* 11e825a2 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e825a5 jne 0x11e825c9 */
  if (!C.zf) goto L_11e825c9;
L_11e825a7:;
  /* 11e825a7 mov eax, dword ptr [0x11e90ee8] */
  EAX = (r32((uint32_t)(0x11e90ee8)));
  /* 11e825ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e825ae je 0x11e825b9 */
  if (C.zf) goto L_11e825b9;
  /* 11e825b0 push edi */
  push32((uint32_t)(EDI));
  /* 11e825b1 push esi */
  push32((uint32_t)(ESI));
  /* 11e825b2 push ebx */
  push32((uint32_t)(EBX));
  /* 11e825b3 call eax */
  call_ind((uint32_t)(EAX), 0x11e825b5u);
  /* 11e825b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e825b7 je 0x11e825c5 */
  if (C.zf) goto L_11e825c5;
L_11e825b9:;
  /* 11e825b9 push edi */
  push32((uint32_t)(EDI));
  /* 11e825ba push esi */
  push32((uint32_t)(ESI));
  /* 11e825bb push ebx */
  push32((uint32_t)(EBX));
  /* 11e825bc call 0x11e824a8 */
  push32(0x11e825c1u); f_11e824a8();
  /* 11e825c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11e825c3:;
  /* 11e825c3 jne 0x11e825c9 */
  if (!C.zf) goto L_11e825c9;
L_11e825c5:;
  /* 11e825c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e825c7 jmp 0x11e82617 */
  goto L_11e82617;
L_11e825c9:;
  /* 11e825c9 push edi */
  push32((uint32_t)(EDI));
  /* 11e825ca push esi */
  push32((uint32_t)(ESI));
  /* 11e825cb push ebx */
  push32((uint32_t)(EBX));
  /* 11e825cc call 0x11e81000 */
  push32(0x11e825d1u); f_11e81000();
  /* 11e825d1 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e825d4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e825d7 jne 0x11e825e5 */
  if (!C.zf) goto L_11e825e5;
  /* 11e825d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e825db jne 0x11e82614 */
  if (!C.zf) goto L_11e82614;
  /* 11e825dd push edi */
  push32((uint32_t)(EDI));
  /* 11e825de push eax */
  push32((uint32_t)(EAX));
  /* 11e825df push ebx */
  push32((uint32_t)(EBX));
  /* 11e825e0 call 0x11e824a8 */
  push32(0x11e825e5u); f_11e824a8();
L_11e825e5:;
  /* 11e825e5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e825e7 je 0x11e825ee */
  if (C.zf) goto L_11e825ee;
  /* 11e825e9 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e825ec jne 0x11e82614 */
  if (!C.zf) goto L_11e82614;
L_11e825ee:;
  /* 11e825ee push edi */
  push32((uint32_t)(EDI));
  /* 11e825ef push esi */
  push32((uint32_t)(ESI));
  /* 11e825f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e825f1 call 0x11e824a8 */
  push32(0x11e825f6u); f_11e824a8();
  /* 11e825f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e825f8 jne 0x11e825fd */
  if (!C.zf) goto L_11e825fd;
  /* 11e825fa and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11e825fd:;
  /* 11e825fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82601 je 0x11e82614 */
  if (C.zf) goto L_11e82614;
  /* 11e82603 mov eax, dword ptr [0x11e90ee8] */
  EAX = (r32((uint32_t)(0x11e90ee8)));
  /* 11e82608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8260a je 0x11e82614 */
  if (C.zf) goto L_11e82614;
  /* 11e8260c push edi */
  push32((uint32_t)(EDI));
  /* 11e8260d push esi */
  push32((uint32_t)(ESI));
  /* 11e8260e push ebx */
  push32((uint32_t)(EBX));
  /* 11e8260f call eax */
  call_ind((uint32_t)(EAX), 0x11e82611u);
  /* 11e82611 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11e82614:;
  /* 11e82614 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11e82617:;
  /* 11e82617 pop edi */
  EDI = (pop32());
  /* 11e82618 pop esi */
  ESI = (pop32());
  /* 11e82619 pop ebx */
  EBX = (pop32());
  /* 11e8261a pop ebp */
  EBP = (pop32());
  /* 11e8261b ret 0xc */
  ESPCHK(0x11e82581u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11e8261e (48 bytes, 15 insns) */
void f_11e8261e(void) {
  FTRACE(0x11e8261eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8261e mov eax, dword ptr [0x11e8f7e4] */
  EAX = (r32((uint32_t)(0x11e8f7e4)));
  /* 11e82623 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82626 je 0x11e82635 */
  if (C.zf) goto L_11e82635;
  /* 11e82628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8262a jne 0x11e8263a */
  if (!C.zf) goto L_11e8263a;
  /* 11e8262c cmp dword ptr [0x11e8f7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8f7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82633 jne 0x11e8263a */
  if (!C.zf) goto L_11e8263a;
L_11e82635:;
  /* 11e82635 call 0x11e83ba9 */
  push32(0x11e8263au); f_11e83ba9();
L_11e8263a:;
  /* 11e8263a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11e8263e call 0x11e83be2 */
  push32(0x11e82643u); f_11e83be2();
  /* 11e82643 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11e82648 call dword ptr [0x11e8c568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8c568))), 0x11e8264eu);
  /* 11e8264e pop ecx */
  ECX = (pop32());
  /* 11e8264f pop ecx */
  ECX = (pop32());
  /* 11e82650 ret  */
  ESPCHK(0x11e8261eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002651 @ 0x11e82651 (84 bytes, 32 insns) */
void f_11e82651(void) {
  FTRACE(0x11e82651u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82651 push esi */
  push32((uint32_t)(ESI));
  /* 11e82652 call 0x11e83e72 */
  push32(0x11e82657u); f_11e83e72();
  /* 11e82657 call dword ptr [0x11e8a080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a080))), 0x11e8265du);
  /* 11e8265d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82660 mov dword ptr [0x11e8c56c], eax */
  w32((uint32_t)(0x11e8c56c), (EAX));
  /* 11e82665 je 0x11e826a1 */
  if (C.zf) goto L_11e826a1;
  /* 11e82667 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11e82669 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8266b call 0x11e83d35 */
  push32(0x11e82670u); f_11e83d35();
  /* 11e82670 mov esi, eax */
  ESI = (EAX);
  /* 11e82672 pop ecx */
  ECX = (pop32());
  /* 11e82673 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e82675 pop ecx */
  ECX = (pop32());
  /* 11e82676 je 0x11e826a1 */
  if (C.zf) goto L_11e826a1;
  /* 11e82678 push esi */
  push32((uint32_t)(ESI));
  /* 11e82679 push dword ptr [0x11e8c56c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c56c))));
  /* 11e8267f call dword ptr [0x11e8a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a07c))), 0x11e82685u);
  /* 11e82685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82687 je 0x11e826a1 */
  if (C.zf) goto L_11e826a1;
  /* 11e82689 push esi */
  push32((uint32_t)(ESI));
  /* 11e8268a call 0x11e826c3 */
  push32(0x11e8268fu); f_11e826c3();
  /* 11e8268f pop ecx */
  ECX = (pop32());
  /* 11e82690 call dword ptr [0x11e8a078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a078))), 0x11e82696u);
  /* 11e82696 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e8269a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8269c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e8269e pop eax */
  EAX = (pop32());
  /* 11e8269f pop esi */
  ESI = (pop32());
  /* 11e826a0 ret  */
  ESPCHK(0x11e82651u, _esp0);
  ESP += 4; return;
L_11e826a1:;
  /* 11e826a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e826a3 pop esi */
  ESI = (pop32());
  /* 11e826a4 ret  */
  ESPCHK(0x11e82651u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a5 @ 0x11e826a5 (30 bytes, 8 insns) */
void f_11e826a5(void) {
  FTRACE(0x11e826a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e826a5 call 0x11e83e9b */
  push32(0x11e826aau); f_11e83e9b();
  /* 11e826aa mov eax, dword ptr [0x11e8c56c] */
  EAX = (r32((uint32_t)(0x11e8c56c)));
  /* 11e826af cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e826b2 je 0x11e826c2 */
  if (C.zf) goto L_11e826c2;
  /* 11e826b4 push eax */
  push32((uint32_t)(EAX));
  /* 11e826b5 call dword ptr [0x11e8a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a084))), 0x11e826bbu);
  /* 11e826bb or dword ptr [0x11e8c56c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11e8c56c)))|(0xffffffffu); w32((uint32_t)(0x11e8c56c), (_r)); fl_logic(_r,32); }
L_11e826c2:;
  /* 11e826c2 ret  */
  ESPCHK(0x11e826a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c3 @ 0x11e826c3 (19 bytes, 4 insns) */
void f_11e826c3(void) {
  FTRACE(0x11e826c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e826c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e826c7 mov dword ptr [eax + 0x50], 0x11e8c988 */
  w32((uint32_t)(EAX + 0x50), (0x11e8c988u));
  /* 11e826ce mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11e826d5 ret  */
  ESPCHK(0x11e826c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d6 @ 0x11e826d6 (103 bytes, 38 insns) */
void f_11e826d6(void) {
  FTRACE(0x11e826d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e826d6 push esi */
  push32((uint32_t)(ESI));
  /* 11e826d7 push edi */
  push32((uint32_t)(EDI));
  /* 11e826d8 call dword ptr [0x11e8a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a090))), 0x11e826deu);
  /* 11e826de push dword ptr [0x11e8c56c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c56c))));
  /* 11e826e4 mov edi, eax */
  EDI = (EAX);
  /* 11e826e6 call dword ptr [0x11e8a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a08c))), 0x11e826ecu);
  /* 11e826ec mov esi, eax */
  ESI = (EAX);
  /* 11e826ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e826f0 jne 0x11e82731 */
  if (!C.zf) goto L_11e82731;
  /* 11e826f2 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11e826f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e826f6 call 0x11e83d35 */
  push32(0x11e826fbu); f_11e83d35();
  /* 11e826fb mov esi, eax */
  ESI = (EAX);
  /* 11e826fd pop ecx */
  ECX = (pop32());
  /* 11e826fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e82700 pop ecx */
  ECX = (pop32());
  /* 11e82701 je 0x11e82729 */
  if (C.zf) goto L_11e82729;
  /* 11e82703 push esi */
  push32((uint32_t)(ESI));
  /* 11e82704 push dword ptr [0x11e8c56c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c56c))));
  /* 11e8270a call dword ptr [0x11e8a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a07c))), 0x11e82710u);
  /* 11e82710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82712 je 0x11e82729 */
  if (C.zf) goto L_11e82729;
  /* 11e82714 push esi */
  push32((uint32_t)(ESI));
  /* 11e82715 call 0x11e826c3 */
  push32(0x11e8271au); f_11e826c3();
  /* 11e8271a pop ecx */
  ECX = (pop32());
  /* 11e8271b call dword ptr [0x11e8a078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a078))), 0x11e82721u);
  /* 11e82721 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e82725 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e82727 jmp 0x11e82731 */
  goto L_11e82731;
L_11e82729:;
  /* 11e82729 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e8272b call 0x11e8261e */
  push32(0x11e82730u); f_11e8261e();
  /* 11e82730 pop ecx */
  ECX = (pop32());
L_11e82731:;
  /* 11e82731 push edi */
  push32((uint32_t)(EDI));
  /* 11e82732 call dword ptr [0x11e8a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a088))), 0x11e82738u);
  /* 11e82738 mov eax, esi */
  EAX = (ESI);
  /* 11e8273a pop edi */
  EDI = (pop32());
  /* 11e8273b pop esi */
  ESI = (pop32());
  /* 11e8273c ret  */
  ESPCHK(0x11e826d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000273d @ 0x11e8273d (160 bytes, 62 insns) */
void f_11e8273d(void) {
  FTRACE(0x11e8273du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8273d mov eax, dword ptr [0x11e8c56c] */
  EAX = (r32((uint32_t)(0x11e8c56c)));
  /* 11e82742 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82745 je 0x11e827dc */
  if (C.zf) goto L_11e827dc;
  /* 11e8274b push esi */
  push32((uint32_t)(ESI));
  /* 11e8274c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82750 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e82752 jne 0x11e82761 */
  if (!C.zf) goto L_11e82761;
  /* 11e82754 push eax */
  push32((uint32_t)(EAX));
  /* 11e82755 call dword ptr [0x11e8a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a08c))), 0x11e8275bu);
  /* 11e8275b mov esi, eax */
  ESI = (EAX);
  /* 11e8275d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e8275f je 0x11e827cd */
  if (C.zf) goto L_11e827cd;
L_11e82761:;
  /* 11e82761 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11e82764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82766 je 0x11e8276f */
  if (C.zf) goto L_11e8276f;
  /* 11e82768 push eax */
  push32((uint32_t)(EAX));
  /* 11e82769 call 0x11e829ff */
  push32(0x11e8276eu); f_11e829ff();
  /* 11e8276e pop ecx */
  ECX = (pop32());
L_11e8276f:;
  /* 11e8276f mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11e82772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82774 je 0x11e8277d */
  if (C.zf) goto L_11e8277d;
  /* 11e82776 push eax */
  push32((uint32_t)(EAX));
  /* 11e82777 call 0x11e829ff */
  push32(0x11e8277cu); f_11e829ff();
  /* 11e8277c pop ecx */
  ECX = (pop32());
L_11e8277d:;
  /* 11e8277d mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11e82780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82782 je 0x11e8278b */
  if (C.zf) goto L_11e8278b;
  /* 11e82784 push eax */
  push32((uint32_t)(EAX));
  /* 11e82785 call 0x11e829ff */
  push32(0x11e8278au); f_11e829ff();
  /* 11e8278a pop ecx */
  ECX = (pop32());
L_11e8278b:;
  /* 11e8278b mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11e8278e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82790 je 0x11e82799 */
  if (C.zf) goto L_11e82799;
  /* 11e82792 push eax */
  push32((uint32_t)(EAX));
  /* 11e82793 call 0x11e829ff */
  push32(0x11e82798u); f_11e829ff();
  /* 11e82798 pop ecx */
  ECX = (pop32());
L_11e82799:;
  /* 11e82799 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11e8279c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8279e je 0x11e827a7 */
  if (C.zf) goto L_11e827a7;
  /* 11e827a0 push eax */
  push32((uint32_t)(EAX));
  /* 11e827a1 call 0x11e829ff */
  push32(0x11e827a6u); f_11e829ff();
  /* 11e827a6 pop ecx */
  ECX = (pop32());
L_11e827a7:;
  /* 11e827a7 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11e827aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e827ac je 0x11e827b5 */
  if (C.zf) goto L_11e827b5;
  /* 11e827ae push eax */
  push32((uint32_t)(EAX));
  /* 11e827af call 0x11e829ff */
  push32(0x11e827b4u); f_11e829ff();
  /* 11e827b4 pop ecx */
  ECX = (pop32());
L_11e827b5:;
  /* 11e827b5 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11e827b8 cmp eax, 0x11e8c988 */
  { uint32_t _a=(EAX),_b=(0x11e8c988u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e827bd je 0x11e827c6 */
  if (C.zf) goto L_11e827c6;
  /* 11e827bf push eax */
  push32((uint32_t)(EAX));
  /* 11e827c0 call 0x11e829ff */
  push32(0x11e827c5u); f_11e829ff();
  /* 11e827c5 pop ecx */
  ECX = (pop32());
L_11e827c6:;
  /* 11e827c6 push esi */
  push32((uint32_t)(ESI));
  /* 11e827c7 call 0x11e829ff */
  push32(0x11e827ccu); f_11e829ff();
  /* 11e827cc pop ecx */
  ECX = (pop32());
L_11e827cd:;
  /* 11e827cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e827cf push dword ptr [0x11e8c56c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c56c))));
  /* 11e827d5 call dword ptr [0x11e8a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a07c))), 0x11e827dbu);
  /* 11e827db pop esi */
  ESI = (pop32());
L_11e827dc:;
  /* 11e827dc ret  */
  ESPCHK(0x11e8273du, _esp0);
  ESP += 4; return;
}

/* FUN_100027dd @ 0x11e827dd (194 bytes, 65 insns) */
void f_11e827dd(void) {
  FTRACE(0x11e827ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e827dd push ebp */
  push32((uint32_t)(EBP));
  /* 11e827de mov ebp, esp */
  EBP = (ESP);
  /* 11e827e0 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e827e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e827e4 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e827e7 sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e827ed cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e827f0 jl 0x11e82899 */
  if ((C.sf!=C.of)) goto L_11e82899;
  /* 11e827f6 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e827fc jg 0x11e82899 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e82899;
  /* 11e82802 push esi */
  push32((uint32_t)(ESI));
  /* 11e82803 push edi */
  push32((uint32_t)(EDI));
  /* 11e82804 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e82807 mov esi, dword ptr [edi*4 + 0x11e8caf4] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11e8caf4)));
  /* 11e8280e add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82811 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11e82814 jne 0x11e8281c */
  if (!C.zf) goto L_11e8281c;
  /* 11e82816 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82819 jle 0x11e8281c */
  if ((C.zf||C.sf!=C.of)) goto L_11e8281c;
  /* 11e8281b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e8281c:;
  /* 11e8281c call 0x11e83f7d */
  push32(0x11e82821u); f_11e83f7d();
  /* 11e82821 mov eax, ebx */
  EAX = (EBX);
  /* 11e82823 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11e82826 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8282c sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e8282f mov edx, esi */
  EDX = (ESI);
  /* 11e82831 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11e82834 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82836 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11e82839 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8283b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e8283e lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11e82841 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e82844 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e82847 lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11e8284a imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8284d add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82850 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e82853 add ecx, dword ptr [0x11e8ca10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e8ca10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82859 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e8285a cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8285e mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11e82861 pop edi */
  EDI = (pop32());
  /* 11e82862 pop esi */
  ESI = (pop32());
  /* 11e82863 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11e8286a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e8286d je 0x11e8288f */
  if (C.zf) goto L_11e8288f;
  /* 11e8286f cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82873 jne 0x11e82895 */
  if (!C.zf) goto L_11e82895;
  /* 11e82875 cmp dword ptr [0x11e8ca14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8ca14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8287c je 0x11e82895 */
  if (C.zf) goto L_11e82895;
  /* 11e8287e lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11e82881 push eax */
  push32((uint32_t)(EAX));
  /* 11e82882 call 0x11e84232 */
  push32(0x11e82887u); f_11e84232();
  /* 11e82887 pop ecx */
  ECX = (pop32());
  /* 11e82888 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8288b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8288d je 0x11e82895 */
  if (C.zf) goto L_11e82895;
L_11e8288f:;
  /* 11e8288f add ecx, dword ptr [0x11e8ca18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e8ca18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11e82895:;
  /* 11e82895 mov eax, ecx */
  EAX = (ECX);
  /* 11e82897 jmp 0x11e8289c */
  goto L_11e8289c;
L_11e82899:;
  /* 11e82899 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e8289c:;
  /* 11e8289c pop ebx */
  EBX = (pop32());
  /* 11e8289d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8289e ret  */
  ESPCHK(0x11e827ddu, _esp0);
  ESP += 4; return;
}

/* FUN_1000295b @ 0x11e8295b (47 bytes, 17 insns) */
void f_11e8295b(void) {
  FTRACE(0x11e8295bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8295b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e8295f mov ecx, 0x11e8c570 */
  ECX = (0x11e8c570u);
  /* 11e82964 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82966 jb 0x11e8297f */
  if (C.cf) goto L_11e8297f;
  /* 11e82968 cmp eax, 0x11e8c7d0 */
  { uint32_t _a=(EAX),_b=(0x11e8c7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8296d ja 0x11e8297f */
  if ((!C.cf&&!C.zf)) goto L_11e8297f;
  /* 11e8296f sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82971 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e82974 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82977 push eax */
  push32((uint32_t)(EAX));
  /* 11e82978 call 0x11e83f07 */
  push32(0x11e8297du); f_11e83f07();
  /* 11e8297d pop ecx */
  ECX = (pop32());
  /* 11e8297e ret  */
  ESPCHK(0x11e8295bu, _esp0);
  ESP += 4; return;
L_11e8297f:;
  /* 11e8297f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82982 push eax */
  push32((uint32_t)(EAX));
  /* 11e82983 call dword ptr [0x11e8a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a094))), 0x11e82989u);
  /* 11e82989 ret  */
  ESPCHK(0x11e8295bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000298a @ 0x11e8298a (35 bytes, 13 insns) */
void f_11e8298a(void) {
  FTRACE(0x11e8298au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8298a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e8298e cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82991 jge 0x11e8299e */
  if ((C.sf==C.of)) goto L_11e8299e;
  /* 11e82993 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82996 push eax */
  push32((uint32_t)(EAX));
  /* 11e82997 call 0x11e83f07 */
  push32(0x11e8299cu); f_11e83f07();
  /* 11e8299c pop ecx */
  ECX = (pop32());
  /* 11e8299d ret  */
  ESPCHK(0x11e8298au, _esp0);
  ESP += 4; return;
L_11e8299e:;
  /* 11e8299e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e829a2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e829a5 push eax */
  push32((uint32_t)(EAX));
  /* 11e829a6 call dword ptr [0x11e8a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a094))), 0x11e829acu);
  /* 11e829ac ret  */
  ESPCHK(0x11e8298au, _esp0);
  ESP += 4; return;
}

/* FUN_100029ad @ 0x11e829ad (47 bytes, 17 insns) */
void f_11e829ad(void) {
  FTRACE(0x11e829adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e829ad mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e829b1 mov ecx, 0x11e8c570 */
  ECX = (0x11e8c570u);
  /* 11e829b6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e829b8 jb 0x11e829d1 */
  if (C.cf) goto L_11e829d1;
  /* 11e829ba cmp eax, 0x11e8c7d0 */
  { uint32_t _a=(EAX),_b=(0x11e8c7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e829bf ja 0x11e829d1 */
  if ((!C.cf&&!C.zf)) goto L_11e829d1;
  /* 11e829c1 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e829c3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e829c6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e829c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e829ca call 0x11e83f68 */
  push32(0x11e829cfu); f_11e83f68();
  /* 11e829cf pop ecx */
  ECX = (pop32());
  /* 11e829d0 ret  */
  ESPCHK(0x11e829adu, _esp0);
  ESP += 4; return;
L_11e829d1:;
  /* 11e829d1 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e829d4 push eax */
  push32((uint32_t)(EAX));
  /* 11e829d5 call dword ptr [0x11e8a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a098))), 0x11e829dbu);
  /* 11e829db ret  */
  ESPCHK(0x11e829adu, _esp0);
  ESP += 4; return;
}

/* FUN_100029dc @ 0x11e829dc (35 bytes, 13 insns) */
void f_11e829dc(void) {
  FTRACE(0x11e829dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e829dc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e829e0 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e829e3 jge 0x11e829f0 */
  if ((C.sf==C.of)) goto L_11e829f0;
  /* 11e829e5 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e829e8 push eax */
  push32((uint32_t)(EAX));
  /* 11e829e9 call 0x11e83f68 */
  push32(0x11e829eeu); f_11e83f68();
  /* 11e829ee pop ecx */
  ECX = (pop32());
  /* 11e829ef ret  */
  ESPCHK(0x11e829dcu, _esp0);
  ESP += 4; return;
L_11e829f0:;
  /* 11e829f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e829f4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e829f7 push eax */
  push32((uint32_t)(EAX));
  /* 11e829f8 call dword ptr [0x11e8a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a098))), 0x11e829feu);
  /* 11e829fe ret  */
  ESPCHK(0x11e829dcu, _esp0);
  ESP += 4; return;
}

/* FUN_100029ff @ 0x11e829ff (215 bytes, 76 insns) */
void f_11e829ff(void) {
  FTRACE(0x11e829ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e829ff push ebp */
  push32((uint32_t)(EBP));
  /* 11e82a00 mov ebp, esp */
  EBP = (ESP);
  /* 11e82a02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e82a04 push 0x11e8a190 */
  push32((uint32_t)(0x11e8a190u));
  /* 11e82a09 push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e82a0e mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e82a14 push eax */
  push32((uint32_t)(EAX));
  /* 11e82a15 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e82a1c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82a1f push ebx */
  push32((uint32_t)(EBX));
  /* 11e82a20 push esi */
  push32((uint32_t)(ESI));
  /* 11e82a21 push edi */
  push32((uint32_t)(EDI));
  /* 11e82a22 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e82a25 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e82a27 je 0x11e82ad9 */
  if (C.zf) { jmp_ind(0x11e82ad9u); return; }
  /* 11e82a2d mov eax, dword ptr [0x11e8fda8] */
  EAX = (r32((uint32_t)(0x11e8fda8)));
  /* 11e82a32 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82a35 jne 0x11e82a72 */
  if (!C.zf) goto L_11e82a72;
  /* 11e82a37 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e82a39 call 0x11e83f07 */
  push32(0x11e82a3eu); f_11e83f07();
  /* 11e82a3e pop ecx */
  ECX = (pop32());
  /* 11e82a3f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e82a43 push esi */
  push32((uint32_t)(ESI));
  /* 11e82a44 call 0x11e84608 */
  push32(0x11e82a49u); f_11e84608();
  /* 11e82a49 pop ecx */
  ECX = (pop32());
  /* 11e82a4a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e82a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82a4f je 0x11e82a5a */
  if (C.zf) goto L_11e82a5a;
  /* 11e82a51 push esi */
  push32((uint32_t)(ESI));
  /* 11e82a52 push eax */
  push32((uint32_t)(EAX));
  /* 11e82a53 call 0x11e84633 */
  push32(0x11e82a58u); f_11e84633();
  /* 11e82a58 pop ecx */
  ECX = (pop32());
  /* 11e82a59 pop ecx */
  ECX = (pop32());
L_11e82a5a:;
  /* 11e82a5a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e82a5e call 0x11e82a69 */
  push32(0x11e82a63u); f_11e82a69();
  /* 11e82a63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82a67 jmp 0x11e82aba */
  goto L_11e82aba;
  /* 11e82a69 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e82a6b call 0x11e83f68 */
  push32(0x11e82a70u); f_11e83f68();
  /* 11e82a70 pop ecx */
  ECX = (pop32());
  /* 11e82a71 ret  */
  ESPCHK(0x11e829ffu, _esp0);
  ESP += 4; return;
L_11e82a72:;
  /* 11e82a72 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82a75 jne 0x11e82aca */
  if (!C.zf) goto L_11e82aca;
  /* 11e82a77 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e82a79 call 0x11e83f07 */
  push32(0x11e82a7eu); f_11e83f07();
  /* 11e82a7e pop ecx */
  ECX = (pop32());
  /* 11e82a7f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e82a86 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e82a89 push eax */
  push32((uint32_t)(EAX));
  /* 11e82a8a lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11e82a8d push eax */
  push32((uint32_t)(EAX));
  /* 11e82a8e push esi */
  push32((uint32_t)(ESI));
  /* 11e82a8f call 0x11e85363 */
  push32(0x11e82a94u); f_11e85363();
  /* 11e82a94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82a97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e82a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82a9c je 0x11e82aad */
  if (C.zf) goto L_11e82aad;
  /* 11e82a9e push eax */
  push32((uint32_t)(EAX));
  /* 11e82a9f push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11e82aa2 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11e82aa5 call 0x11e853ba */
  push32(0x11e82aaau); f_11e853ba();
  /* 11e82aaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e82aad:;
  /* 11e82aad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e82ab1 call 0x11e82ac1 */
  push32(0x11e82ab6u); f_11e82ac1();
  /* 11e82ab6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11e82aba:;
  /* 11e82aba jne 0x11e82ad9 */
  if (!C.zf) { jmp_ind(0x11e82ad9u); return; }
  /* 11e82abc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e82abf jmp 0x11e82acb */
  goto L_11e82acb;
  /* 11e82ac1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e82ac3 call 0x11e83f68 */
  push32(0x11e82ac8u); f_11e83f68();
  /* 11e82ac8 pop ecx */
  ECX = (pop32());
  /* 11e82ac9 ret  */
  ESPCHK(0x11e829ffu, _esp0);
  ESP += 4; return;
L_11e82aca:;
  /* 11e82aca push esi */
  push32((uint32_t)(ESI));
L_11e82acb:;
  /* 11e82acb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e82acd push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e82ad5 pushfd  */
  x86_unimpl("pushfd @ 0x11e82ad5");
}

/* FUN_10002a69 @ 0x11e82a69 (9 bytes, 4 insns) */
void f_11e82a69(void) {
  FTRACE(0x11e82a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82a69 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e82a6b call 0x11e83f68 */
  push32(0x11e82a70u); f_11e83f68();
  /* 11e82a70 pop ecx */
  ECX = (pop32());
  /* 11e82a71 ret  */
  ESPCHK(0x11e82a69u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac1 @ 0x11e82ac1 (9 bytes, 4 insns) */
void f_11e82ac1(void) {
  FTRACE(0x11e82ac1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82ac1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e82ac3 call 0x11e83f68 */
  push32(0x11e82ac8u); f_11e83f68();
  /* 11e82ac8 pop ecx */
  ECX = (pop32());
  /* 11e82ac9 ret  */
  ESPCHK(0x11e82ac1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae8 @ 0x11e82ae8 (93 bytes, 32 insns) */
void f_11e82ae8(void) {
  FTRACE(0x11e82ae8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82ae8 push esi */
  push32((uint32_t)(ESI));
  /* 11e82ae9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82aed cmp esi, dword ptr [0x11e8fec0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8fec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82af3 jae 0x11e82b2d */
  if (!C.cf) goto L_11e82b2d;
  /* 11e82af5 mov ecx, esi */
  ECX = (ESI);
  /* 11e82af7 mov eax, esi */
  EAX = (ESI);
  /* 11e82af9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e82afc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e82aff mov ecx, dword ptr [ecx*4 + 0x11e8fdc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e82b06 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11e82b09 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e82b0e je 0x11e82b2d */
  if (C.zf) goto L_11e82b2d;
  /* 11e82b10 push edi */
  push32((uint32_t)(EDI));
  /* 11e82b11 push esi */
  push32((uint32_t)(ESI));
  /* 11e82b12 call 0x11e85aea */
  push32(0x11e82b17u); f_11e85aea();
  /* 11e82b17 push esi */
  push32((uint32_t)(ESI));
  /* 11e82b18 call 0x11e82b45 */
  push32(0x11e82b1du); f_11e82b45();
  /* 11e82b1d push esi */
  push32((uint32_t)(ESI));
  /* 11e82b1e mov edi, eax */
  EDI = (EAX);
  /* 11e82b20 call 0x11e85b49 */
  push32(0x11e82b25u); f_11e85b49();
  /* 11e82b25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82b28 mov eax, edi */
  EAX = (EDI);
  /* 11e82b2a pop edi */
  EDI = (pop32());
  /* 11e82b2b pop esi */
  ESI = (pop32());
  /* 11e82b2c ret  */
  ESPCHK(0x11e82ae8u, _esp0);
  ESP += 4; return;
L_11e82b2d:;
  /* 11e82b2d call 0x11e85a17 */
  push32(0x11e82b32u); f_11e85a17();
  /* 11e82b32 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e82b38 call 0x11e85a20 */
  push32(0x11e82b3du); f_11e85a20();
  /* 11e82b3d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e82b40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e82b43 pop esi */
  ESI = (pop32());
  /* 11e82b44 ret  */
  ESPCHK(0x11e82ae8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b45 @ 0x11e82b45 (131 bytes, 52 insns) */
void f_11e82b45(void) {
  FTRACE(0x11e82b45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82b45 push esi */
  push32((uint32_t)(ESI));
  /* 11e82b46 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82b4a push edi */
  push32((uint32_t)(EDI));
  /* 11e82b4b push esi */
  push32((uint32_t)(ESI));
  /* 11e82b4c call 0x11e85aa8 */
  push32(0x11e82b51u); f_11e85aa8();
  /* 11e82b51 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82b54 pop ecx */
  ECX = (pop32());
  /* 11e82b55 je 0x11e82b93 */
  if (C.zf) goto L_11e82b93;
  /* 11e82b57 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82b5a je 0x11e82b61 */
  if (C.zf) goto L_11e82b61;
  /* 11e82b5c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82b5f jne 0x11e82b77 */
  if (!C.zf) goto L_11e82b77;
L_11e82b61:;
  /* 11e82b61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e82b63 call 0x11e85aa8 */
  push32(0x11e82b68u); f_11e85aa8();
  /* 11e82b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e82b6a mov edi, eax */
  EDI = (EAX);
  /* 11e82b6c call 0x11e85aa8 */
  push32(0x11e82b71u); f_11e85aa8();
  /* 11e82b71 pop ecx */
  ECX = (pop32());
  /* 11e82b72 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82b74 pop ecx */
  ECX = (pop32());
  /* 11e82b75 je 0x11e82b93 */
  if (C.zf) goto L_11e82b93;
L_11e82b77:;
  /* 11e82b77 push esi */
  push32((uint32_t)(ESI));
  /* 11e82b78 call 0x11e85aa8 */
  push32(0x11e82b7du); f_11e85aa8();
  /* 11e82b7d pop ecx */
  ECX = (pop32());
  /* 11e82b7e push eax */
  push32((uint32_t)(EAX));
  /* 11e82b7f call dword ptr [0x11e8a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0a0))), 0x11e82b85u);
  /* 11e82b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82b87 jne 0x11e82b93 */
  if (!C.zf) goto L_11e82b93;
  /* 11e82b89 call dword ptr [0x11e8a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a090))), 0x11e82b8fu);
  /* 11e82b8f mov edi, eax */
  EDI = (EAX);
  /* 11e82b91 jmp 0x11e82b95 */
  goto L_11e82b95;
L_11e82b93:;
  /* 11e82b93 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11e82b95:;
  /* 11e82b95 push esi */
  push32((uint32_t)(ESI));
  /* 11e82b96 call 0x11e85a29 */
  push32(0x11e82b9bu); f_11e85a29();
  /* 11e82b9b mov eax, esi */
  EAX = (ESI);
  /* 11e82b9d and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11e82ba0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e82ba3 pop ecx */
  ECX = (pop32());
  /* 11e82ba4 mov eax, dword ptr [eax*4 + 0x11e8fdc0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11e8fdc0)));
  /* 11e82bab lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11e82bae and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11e82bb3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e82bb5 je 0x11e82bc3 */
  if (C.zf) goto L_11e82bc3;
  /* 11e82bb7 push edi */
  push32((uint32_t)(EDI));
  /* 11e82bb8 call 0x11e859a4 */
  push32(0x11e82bbdu); f_11e859a4();
  /* 11e82bbd pop ecx */
  ECX = (pop32());
  /* 11e82bbe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e82bc1 jmp 0x11e82bc5 */
  goto L_11e82bc5;
L_11e82bc3:;
  /* 11e82bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e82bc5:;
  /* 11e82bc5 pop edi */
  EDI = (pop32());
  /* 11e82bc6 pop esi */
  ESI = (pop32());
  /* 11e82bc7 ret  */
  ESPCHK(0x11e82b45u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11e82bc8 (43 bytes, 17 insns) */
void f_11e82bc8(void) {
  FTRACE(0x11e82bc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82bc8 push esi */
  push32((uint32_t)(ESI));
  /* 11e82bc9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82bcd mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11e82bd0 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11e82bd2 je 0x11e82bf1 */
  if (C.zf) goto L_11e82bf1;
  /* 11e82bd4 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11e82bd6 je 0x11e82bf1 */
  if (C.zf) goto L_11e82bf1;
  /* 11e82bd8 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11e82bdb call 0x11e829ff */
  push32(0x11e82be0u); f_11e829ff();
  /* 11e82be0 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11e82be6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82be8 pop ecx */
  ECX = (pop32());
  /* 11e82be9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e82beb mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11e82bee mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11e82bf1:;
  /* 11e82bf1 pop esi */
  ESI = (pop32());
  /* 11e82bf2 ret  */
  ESPCHK(0x11e82bc8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bf3 @ 0x11e82bf3 (46 bytes, 22 insns) */
void f_11e82bf3(void) {
  FTRACE(0x11e82bf3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82bf3 push esi */
  push32((uint32_t)(ESI));
  /* 11e82bf4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82bf8 push esi */
  push32((uint32_t)(ESI));
  /* 11e82bf9 call 0x11e82c21 */
  push32(0x11e82bfeu); f_11e82c21();
  /* 11e82bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82c00 pop ecx */
  ECX = (pop32());
  /* 11e82c01 je 0x11e82c08 */
  if (C.zf) goto L_11e82c08;
  /* 11e82c03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e82c06 pop esi */
  ESI = (pop32());
  /* 11e82c07 ret  */
  ESPCHK(0x11e82bf3u, _esp0);
  ESP += 4; return;
L_11e82c08:;
  /* 11e82c08 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11e82c0c je 0x11e82c1d */
  if (C.zf) goto L_11e82c1d;
  /* 11e82c0e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11e82c11 call 0x11e85b6b */
  push32(0x11e82c16u); f_11e85b6b();
  /* 11e82c16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e82c18 pop ecx */
  ECX = (pop32());
  /* 11e82c19 pop esi */
  ESI = (pop32());
  /* 11e82c1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82c1c ret  */
  ESPCHK(0x11e82bf3u, _esp0);
  ESP += 4; return;
L_11e82c1d:;
  /* 11e82c1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82c1f pop esi */
  ESI = (pop32());
  /* 11e82c20 ret  */
  ESPCHK(0x11e82bf3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c21 @ 0x11e82c21 (92 bytes, 40 insns) */
void f_11e82c21(void) {
  FTRACE(0x11e82c21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82c21 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82c22 push esi */
  push32((uint32_t)(ESI));
  /* 11e82c23 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11e82c27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e82c29 push edi */
  push32((uint32_t)(EDI));
  /* 11e82c2a mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11e82c2d mov ecx, eax */
  ECX = (EAX);
  /* 11e82c2f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e82c32 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e82c35 jne 0x11e82c6e */
  if (!C.zf) goto L_11e82c6e;
  /* 11e82c37 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11e82c3b je 0x11e82c6e */
  if (C.zf) goto L_11e82c6e;
  /* 11e82c3d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11e82c40 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11e82c42 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82c44 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e82c46 jle 0x11e82c6e */
  if ((C.zf||C.sf!=C.of)) goto L_11e82c6e;
  /* 11e82c48 push edi */
  push32((uint32_t)(EDI));
  /* 11e82c49 push eax */
  push32((uint32_t)(EAX));
  /* 11e82c4a push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11e82c4d call 0x11e85bfe */
  push32(0x11e82c52u); f_11e85bfe();
  /* 11e82c52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82c55 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82c57 jne 0x11e82c67 */
  if (!C.zf) goto L_11e82c67;
  /* 11e82c59 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11e82c5c test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11e82c5e je 0x11e82c6e */
  if (C.zf) goto L_11e82c6e;
  /* 11e82c60 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11e82c62 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11e82c65 jmp 0x11e82c6e */
  goto L_11e82c6e;
L_11e82c67:;
  /* 11e82c67 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11e82c6b or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11e82c6e:;
  /* 11e82c6e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11e82c71 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e82c75 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e82c77 pop edi */
  EDI = (pop32());
  /* 11e82c78 mov eax, ebx */
  EAX = (EBX);
  /* 11e82c7a pop esi */
  ESI = (pop32());
  /* 11e82c7b pop ebx */
  EBX = (pop32());
  /* 11e82c7c ret  */
  ESPCHK(0x11e82c21u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c86 @ 0x11e82c86 (164 bytes, 66 insns) */
void f_11e82c86(void) {
  FTRACE(0x11e82c86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82c86 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82c87 push esi */
  push32((uint32_t)(ESI));
  /* 11e82c88 push edi */
  push32((uint32_t)(EDI));
  /* 11e82c89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e82c8b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e82c8d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e82c8f call 0x11e83f07 */
  push32(0x11e82c94u); f_11e83f07();
  /* 11e82c94 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e82c96 pop ecx */
  ECX = (pop32());
  /* 11e82c97 cmp dword ptr [0x11e90ee0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11e90ee0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82c9d jle 0x11e82d13 */
  if ((C.zf||C.sf!=C.of)) goto L_11e82d13;
L_11e82c9f:;
  /* 11e82c9f mov eax, dword ptr [0x11e8fed4] */
  EAX = (r32((uint32_t)(0x11e8fed4)));
  /* 11e82ca4 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11e82ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82ca9 je 0x11e82d0a */
  if (C.zf) goto L_11e82d0a;
  /* 11e82cab test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11e82caf je 0x11e82d0a */
  if (C.zf) goto L_11e82d0a;
  /* 11e82cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11e82cb2 push esi */
  push32((uint32_t)(ESI));
  /* 11e82cb3 call 0x11e8298a */
  push32(0x11e82cb8u); f_11e8298a();
  /* 11e82cb8 mov eax, dword ptr [0x11e8fed4] */
  EAX = (r32((uint32_t)(0x11e8fed4)));
  /* 11e82cbd pop ecx */
  ECX = (pop32());
  /* 11e82cbe pop ecx */
  ECX = (pop32());
  /* 11e82cbf mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11e82cc2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e82cc5 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11e82cc8 je 0x11e82cfa */
  if (C.zf) goto L_11e82cfa;
  /* 11e82cca cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82ccf jne 0x11e82ce0 */
  if (!C.zf) goto L_11e82ce0;
  /* 11e82cd1 push eax */
  push32((uint32_t)(EAX));
  /* 11e82cd2 call 0x11e82bf3 */
  push32(0x11e82cd7u); f_11e82bf3();
  /* 11e82cd7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82cda pop ecx */
  ECX = (pop32());
  /* 11e82cdb je 0x11e82cfa */
  if (C.zf) goto L_11e82cfa;
  /* 11e82cdd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e82cde jmp 0x11e82cfa */
  goto L_11e82cfa;
L_11e82ce0:;
  /* 11e82ce0 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82ce5 jne 0x11e82cfa */
  if (!C.zf) goto L_11e82cfa;
  /* 11e82ce7 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11e82cea je 0x11e82cfa */
  if (C.zf) goto L_11e82cfa;
  /* 11e82cec push eax */
  push32((uint32_t)(EAX));
  /* 11e82ced call 0x11e82bf3 */
  push32(0x11e82cf2u); f_11e82bf3();
  /* 11e82cf2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82cf5 pop ecx */
  ECX = (pop32());
  /* 11e82cf6 jne 0x11e82cfa */
  if (!C.zf) goto L_11e82cfa;
  /* 11e82cf8 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11e82cfa:;
  /* 11e82cfa mov eax, dword ptr [0x11e8fed4] */
  EAX = (r32((uint32_t)(0x11e8fed4)));
  /* 11e82cff push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11e82d02 push esi */
  push32((uint32_t)(ESI));
  /* 11e82d03 call 0x11e829dc */
  push32(0x11e82d08u); f_11e829dc();
  /* 11e82d08 pop ecx */
  ECX = (pop32());
  /* 11e82d09 pop ecx */
  ECX = (pop32());
L_11e82d0a:;
  /* 11e82d0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e82d0b cmp esi, dword ptr [0x11e90ee0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e90ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82d11 jl 0x11e82c9f */
  if ((C.sf!=C.of)) goto L_11e82c9f;
L_11e82d13:;
  /* 11e82d13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e82d15 call 0x11e83f68 */
  push32(0x11e82d1au); f_11e83f68();
  /* 11e82d1a cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82d1f pop ecx */
  ECX = (pop32());
  /* 11e82d20 mov eax, ebx */
  EAX = (EBX);
  /* 11e82d22 je 0x11e82d26 */
  if (C.zf) goto L_11e82d26;
  /* 11e82d24 mov eax, edi */
  EAX = (EDI);
L_11e82d26:;
  /* 11e82d26 pop edi */
  EDI = (pop32());
  /* 11e82d27 pop esi */
  ESI = (pop32());
  /* 11e82d28 pop ebx */
  EBX = (pop32());
  /* 11e82d29 ret  */
  ESPCHK(0x11e82c86u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d2a @ 0x11e82d2a (18 bytes, 6 insns) */
void f_11e82d2a(void) {
  FTRACE(0x11e82d2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82d2a push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11e82d2f push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11e82d34 call 0x11e860ca */
  push32(0x11e82d39u); f_11e860ca();
  /* 11e82d39 pop ecx */
  ECX = (pop32());
  /* 11e82d3a pop ecx */
  ECX = (pop32());
  /* 11e82d3b ret  */
  ESPCHK(0x11e82d2au, _esp0);
  ESP += 4; return;
}

/* FUN_10002d3c @ 0x11e82d3c (62 bytes, 24 insns) */
void f_11e82d3c(void) {
  FTRACE(0x11e82d3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82d3c push ebp */
  push32((uint32_t)(EBP));
  /* 11e82d3d mov ebp, esp */
  EBP = (ESP);
  /* 11e82d3f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82d42 fld qword ptr [0x11e8a230] */
  fpu_push(rf64((uint32_t)(0x11e8a230)));
  /* 11e82d48 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11e82d4b fld qword ptr [0x11e8a228] */
  fpu_push(rf64((uint32_t)(0x11e8a228)));
  /* 11e82d51 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11e82d54 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11e82d57 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11e82d5a fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11e82d5d fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11e82d60 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11e82d63 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11e82d66 fcomp qword ptr [0x11e8a220] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e8a220)));
  (void)fpu_pop();
  /* 11e82d6c fnstsw ax */
  AX = fpu_status();
  /* 11e82d6e sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11e82d6f jbe 0x11e82d76 */
  if ((C.cf||C.zf)) goto L_11e82d76;
  /* 11e82d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e82d73 pop eax */
  EAX = (pop32());
  /* 11e82d74 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e82d75 ret  */
  ESPCHK(0x11e82d3cu, _esp0);
  ESP += 4; return;
L_11e82d76:;
  /* 11e82d76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82d78 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e82d79 ret  */
  ESPCHK(0x11e82d3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d7a @ 0x11e82d7a (41 bytes, 13 insns) */
void f_11e82d7a(void) {
  FTRACE(0x11e82d7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82d7a push 0x11e8a254 */
  push32((uint32_t)(0x11e8a254u));
  /* 11e82d7f call dword ptr [0x11e8a0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0ac))), 0x11e82d85u);
  /* 11e82d85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82d87 je 0x11e82d9e */
  if (C.zf) goto L_11e82d9e;
  /* 11e82d89 push 0x11e8a238 */
  push32((uint32_t)(0x11e8a238u));
  /* 11e82d8e push eax */
  push32((uint32_t)(EAX));
  /* 11e82d8f call dword ptr [0x11e8a000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a000))), 0x11e82d95u);
  /* 11e82d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82d97 je 0x11e82d9e */
  if (C.zf) goto L_11e82d9e;
  /* 11e82d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e82d9b call eax */
  call_ind((uint32_t)(EAX), 0x11e82d9du);
  /* 11e82d9d ret  */
  ESPCHK(0x11e82d7au, _esp0);
  ESP += 4; return;
L_11e82d9e:;
  /* 11e82d9e jmp 0x11e82d3c */
  f_11e82d3c(); return;
}

/* FUN_10002da3 @ 0x11e82da3 (90 bytes, 37 insns) */
void f_11e82da3(void) {
  FTRACE(0x11e82da3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82da3 push esi */
  push32((uint32_t)(ESI));
  /* 11e82da4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e82da8 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11e82dab push eax */
  push32((uint32_t)(EAX));
  /* 11e82dac call 0x11e86270 */
  push32(0x11e82db1u); f_11e86270();
  /* 11e82db1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82db4 pop ecx */
  ECX = (pop32());
  /* 11e82db5 je 0x11e82de3 */
  if (C.zf) goto L_11e82de3;
L_11e82db7:;
  /* 11e82db7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e82db8 cmp dword ptr [0x11e8eee0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8eee0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82dbf jle 0x11e82dd0 */
  if ((C.zf||C.sf!=C.of)) goto L_11e82dd0;
  /* 11e82dc1 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11e82dc4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e82dc6 push eax */
  push32((uint32_t)(EAX));
  /* 11e82dc7 call 0x11e861fb */
  push32(0x11e82dccu); f_11e861fb();
  /* 11e82dcc pop ecx */
  ECX = (pop32());
  /* 11e82dcd pop ecx */
  ECX = (pop32());
  /* 11e82dce jmp 0x11e82ddf */
  goto L_11e82ddf;
L_11e82dd0:;
  /* 11e82dd0 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11e82dd3 mov ecx, dword ptr [0x11e8ecd0] */
  ECX = (r32((uint32_t)(0x11e8ecd0)));
  /* 11e82dd9 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11e82ddc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11e82ddf:;
  /* 11e82ddf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e82de1 jne 0x11e82db7 */
  if (!C.zf) goto L_11e82db7;
L_11e82de3:;
  /* 11e82de3 mov cl, byte ptr [0x11e8eee4] */
  CL = (r8((uint32_t)(0x11e8eee4)));
  /* 11e82de9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e82deb mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11e82ded inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e82dee:;
  /* 11e82dee mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11e82df0 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11e82df2 mov al, cl */
  AL = (CL);
  /* 11e82df4 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11e82df6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e82df7 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11e82df9 jne 0x11e82dee */
  if (!C.zf) goto L_11e82dee;
  /* 11e82dfb pop esi */
  ESI = (pop32());
  /* 11e82dfc ret  */
  ESPCHK(0x11e82da3u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11e82e63 (62 bytes, 29 insns) */
void f_11e82e63(void) {
  FTRACE(0x11e82e63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82e63 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82e64 mov ebp, esp */
  EBP = (ESP);
  /* 11e82e66 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82e67 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82e68 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82e6c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e82e6f je 0x11e82e8c */
  if (C.zf) goto L_11e82e8c;
  /* 11e82e71 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e82e74 push eax */
  push32((uint32_t)(EAX));
  /* 11e82e75 call 0x11e8673c */
  push32(0x11e82e7au); f_11e8673c();
  /* 11e82e7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e82e7d pop ecx */
  ECX = (pop32());
  /* 11e82e7e pop ecx */
  ECX = (pop32());
  /* 11e82e7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e82e82 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e82e84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e82e87 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e82e8a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e82e8b ret  */
  ESPCHK(0x11e82e63u, _esp0);
  ESP += 4; return;
L_11e82e8c:;
  /* 11e82e8c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e82e8f push eax */
  push32((uint32_t)(EAX));
  /* 11e82e90 call 0x11e86769 */
  push32(0x11e82e95u); f_11e86769();
  /* 11e82e95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e82e98 pop ecx */
  ECX = (pop32());
  /* 11e82e99 pop ecx */
  ECX = (pop32());
  /* 11e82e9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e82e9d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e82e9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e82ea0 ret  */
  ESPCHK(0x11e82e63u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea1 @ 0x11e82ea1 (97 bytes, 42 insns) */
void f_11e82ea1(void) {
  FTRACE(0x11e82ea1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82ea1 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82ea2 mov ebp, esp */
  EBP = (ESP);
  /* 11e82ea4 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82ea7 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11e82eaa push esi */
  push32((uint32_t)(ESI));
  /* 11e82eab push eax */
  push32((uint32_t)(EAX));
  /* 11e82eac lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e82eaf push eax */
  push32((uint32_t)(EAX));
  /* 11e82eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e82eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82eb5 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11e82eb7 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11e82eba call 0x11e8680d */
  push32(0x11e82ebfu); f_11e8680d();
  /* 11e82ebf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e82ec2 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e82ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11e82ec6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e82ec9 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11e82ecc push eax */
  push32((uint32_t)(EAX));
  /* 11e82ecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82ecf cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82ed3 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e82ed6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e82ed8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e82eda setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11e82edd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82edf add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82ee2 call 0x11e86796 */
  push32(0x11e82ee7u); f_11e86796();
  /* 11e82ee7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e82eea push 0 */
  push32((uint32_t)(0x0u));
  /* 11e82eec push eax */
  push32((uint32_t)(EAX));
  /* 11e82eed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e82ef0 push esi */
  push32((uint32_t)(ESI));
  /* 11e82ef1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e82ef4 call 0x11e82f02 */
  push32(0x11e82ef9u); f_11e82f02();
  /* 11e82ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e82efc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82eff pop esi */
  ESI = (pop32());
  /* 11e82f00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e82f01 ret  */
  ESPCHK(0x11e82ea1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f02 @ 0x11e82f02 (194 bytes, 91 insns) */
void f_11e82f02(void) {
  FTRACE(0x11e82f02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82f02 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82f03 mov ebp, esp */
  EBP = (ESP);
  /* 11e82f05 push ebx */
  push32((uint32_t)(EBX));
  /* 11e82f06 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e82f08 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e82f0b push esi */
  push32((uint32_t)(ESI));
  /* 11e82f0c mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11e82f0f push edi */
  push32((uint32_t)(EDI));
  /* 11e82f10 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e82f13 je 0x11e82f30 */
  if (C.zf) goto L_11e82f30;
  /* 11e82f15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82f17 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82f1a setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11e82f1d push eax */
  push32((uint32_t)(EAX));
  /* 11e82f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82f20 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82f23 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e82f26 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82f28 push eax */
  push32((uint32_t)(EAX));
  /* 11e82f29 call 0x11e831a4 */
  push32(0x11e82f2eu); f_11e831a4();
  /* 11e82f2e pop ecx */
  ECX = (pop32());
  /* 11e82f2f pop ecx */
  ECX = (pop32());
L_11e82f30:;
  /* 11e82f30 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82f33 mov eax, edi */
  EAX = (EDI);
  /* 11e82f35 jne 0x11e82f3d */
  if (!C.zf) goto L_11e82f3d;
  /* 11e82f37 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11e82f3a lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11e82f3d:;
  /* 11e82f3d cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82f40 jle 0x11e82f54 */
  if ((C.zf||C.sf!=C.of)) goto L_11e82f54;
  /* 11e82f42 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e82f45 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11e82f48 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e82f4a mov eax, ecx */
  EAX = (ECX);
  /* 11e82f4c mov cl, byte ptr [0x11e8eee4] */
  CL = (r8((uint32_t)(0x11e8eee4)));
  /* 11e82f52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_11e82f54:;
  /* 11e82f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e82f56 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e82f59 push 0x11e8a268 */
  push32((uint32_t)(0x11e8a268u));
  /* 11e82f5e sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e82f61 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82f63 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82f66 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82f67 call 0x11e86920 */
  push32(0x11e82f6cu); f_11e86920();
  /* 11e82f6c cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82f6f pop ecx */
  ECX = (pop32());
  /* 11e82f70 pop ecx */
  ECX = (pop32());
  /* 11e82f71 mov ecx, eax */
  ECX = (EAX);
  /* 11e82f73 je 0x11e82f78 */
  if (C.zf) goto L_11e82f78;
  /* 11e82f75 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11e82f78:;
  /* 11e82f78 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11e82f7b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e82f7c cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e82f7f je 0x11e82fbd */
  if (C.zf) goto L_11e82fbd;
  /* 11e82f81 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e82f84 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e82f85 jns 0x11e82f8c */
  if (!C.sf) goto L_11e82f8c;
  /* 11e82f87 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e82f89 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11e82f8c:;
  /* 11e82f8c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e82f8d cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82f90 jl 0x11e82fa3 */
  if ((C.sf!=C.of)) goto L_11e82fa3;
  /* 11e82f92 mov eax, ebx */
  EAX = (EBX);
  /* 11e82f94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11e82f96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e82f97 pop esi */
  ESI = (pop32());
  /* 11e82f98 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e82f9a add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11e82f9c mov eax, ebx */
  EAX = (EBX);
  /* 11e82f9e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e82f9f idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e82fa1 mov ebx, edx */
  EBX = (EDX);
L_11e82fa3:;
  /* 11e82fa3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e82fa4 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82fa7 jl 0x11e82fba */
  if ((C.sf!=C.of)) goto L_11e82fba;
  /* 11e82fa9 mov eax, ebx */
  EAX = (EBX);
  /* 11e82fab push 0xa */
  push32((uint32_t)(0xau));
  /* 11e82fad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e82fae pop esi */
  ESI = (pop32());
  /* 11e82faf idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e82fb1 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11e82fb3 mov eax, ebx */
  EAX = (EBX);
  /* 11e82fb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e82fb6 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e82fb8 mov ebx, edx */
  EBX = (EDX);
L_11e82fba:;
  /* 11e82fba add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_11e82fbd:;
  /* 11e82fbd mov eax, edi */
  EAX = (EDI);
  /* 11e82fbf pop edi */
  EDI = (pop32());
  /* 11e82fc0 pop esi */
  ESI = (pop32());
  /* 11e82fc1 pop ebx */
  EBX = (pop32());
  /* 11e82fc2 pop ebp */
  EBP = (pop32());
  /* 11e82fc3 ret  */
  ESPCHK(0x11e82f02u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc4 @ 0x11e82fc4 (85 bytes, 37 insns) */
void f_11e82fc4(void) {
  FTRACE(0x11e82fc4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e82fc4 push ebp */
  push32((uint32_t)(EBP));
  /* 11e82fc5 mov ebp, esp */
  EBP = (ESP);
  /* 11e82fc7 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e82fca lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11e82fcd push esi */
  push32((uint32_t)(ESI));
  /* 11e82fce push eax */
  push32((uint32_t)(EAX));
  /* 11e82fcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e82fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11e82fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e82fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e82fd8 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11e82fda fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11e82fdd call 0x11e8680d */
  push32(0x11e82fe2u); f_11e8680d();
  /* 11e82fe2 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e82fe5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e82fe8 push eax */
  push32((uint32_t)(EAX));
  /* 11e82fe9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e82fec add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82fee push eax */
  push32((uint32_t)(EAX));
  /* 11e82fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e82ff1 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e82ff5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e82ff8 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e82ffb push eax */
  push32((uint32_t)(EAX));
  /* 11e82ffc call 0x11e86796 */
  push32(0x11e83001u); f_11e86796();
  /* 11e83001 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e83004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83006 push eax */
  push32((uint32_t)(EAX));
  /* 11e83007 push esi */
  push32((uint32_t)(ESI));
  /* 11e83008 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e8300b call 0x11e83019 */
  push32(0x11e83010u); f_11e83019();
  /* 11e83010 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e83013 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83016 pop esi */
  ESI = (pop32());
  /* 11e83017 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e83018 ret  */
  ESPCHK(0x11e82fc4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003019 @ 0x11e83019 (167 bytes, 73 insns) */
void f_11e83019(void) {
  FTRACE(0x11e83019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83019 push ebp */
  push32((uint32_t)(EBP));
  /* 11e8301a mov ebp, esp */
  EBP = (ESP);
  /* 11e8301c push ebx */
  push32((uint32_t)(EBX));
  /* 11e8301d push esi */
  push32((uint32_t)(ESI));
  /* 11e8301e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e83021 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e83024 push edi */
  push32((uint32_t)(EDI));
  /* 11e83025 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e83028 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e83029 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8302d je 0x11e83049 */
  if (C.zf) goto L_11e83049;
  /* 11e8302f cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83032 jne 0x11e83049 */
  if (!C.zf) goto L_11e83049;
  /* 11e83034 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e83036 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83039 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e8303c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8303e add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83040 mov eax, ecx */
  EAX = (ECX);
  /* 11e83042 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11e83045 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11e83049:;
  /* 11e83049 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8304c mov edi, ebx */
  EDI = (EBX);
  /* 11e8304e jne 0x11e83056 */
  if (!C.zf) goto L_11e83056;
  /* 11e83050 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 11e83053 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11e83056:;
  /* 11e83056 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e83059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8305b jg 0x11e8306d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e8306d;
  /* 11e8305d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8305f push edi */
  push32((uint32_t)(EDI));
  /* 11e83060 call 0x11e831a4 */
  push32(0x11e83065u); f_11e831a4();
  /* 11e83065 pop ecx */
  ECX = (pop32());
  /* 11e83066 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11e83069 pop ecx */
  ECX = (pop32());
  /* 11e8306a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e8306b jmp 0x11e8306f */
  goto L_11e8306f;
L_11e8306d:;
  /* 11e8306d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e8306f:;
  /* 11e8306f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83073 jle 0x11e830b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11e830b9;
  /* 11e83075 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e83077 push edi */
  push32((uint32_t)(EDI));
  /* 11e83078 call 0x11e831a4 */
  push32(0x11e8307du); f_11e831a4();
  /* 11e8307d mov al, byte ptr [0x11e8eee4] */
  AL = (r8((uint32_t)(0x11e8eee4)));
  /* 11e83082 pop ecx */
  ECX = (pop32());
  /* 11e83083 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e83085 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11e83088 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e83089 pop ecx */
  ECX = (pop32());
  /* 11e8308a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e8308c jge 0x11e830b9 */
  if ((C.sf==C.of)) goto L_11e830b9;
  /* 11e8308e cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83092 je 0x11e83098 */
  if (C.zf) goto L_11e83098;
  /* 11e83094 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11e83096 jmp 0x11e8309f */
  goto L_11e8309f;
L_11e83098:;
  /* 11e83098 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11e8309a cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8309d jl 0x11e830a2 */
  if ((C.sf!=C.of)) goto L_11e830a2;
L_11e8309f:;
  /* 11e8309f mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11e830a2:;
  /* 11e830a2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e830a5 push edi */
  push32((uint32_t)(EDI));
  /* 11e830a6 call 0x11e831a4 */
  push32(0x11e830abu); f_11e831a4();
  /* 11e830ab push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e830ae push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e830b0 push edi */
  push32((uint32_t)(EDI));
  /* 11e830b1 call 0x11e86a10 */
  push32(0x11e830b6u); f_11e86a10();
  /* 11e830b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e830b9:;
  /* 11e830b9 pop edi */
  EDI = (pop32());
  /* 11e830ba mov eax, ebx */
  EAX = (EBX);
  /* 11e830bc pop esi */
  ESI = (pop32());
  /* 11e830bd pop ebx */
  EBX = (pop32());
  /* 11e830be pop ebp */
  EBP = (pop32());
  /* 11e830bf ret  */
  ESPCHK(0x11e83019u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c0 @ 0x11e830c0 (147 bytes, 66 insns) */
void f_11e830c0(void) {
  FTRACE(0x11e830c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e830c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e830c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e830c3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e830c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e830c7 push esi */
  push32((uint32_t)(ESI));
  /* 11e830c8 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11e830cb push edi */
  push32((uint32_t)(EDI));
  /* 11e830cc push eax */
  push32((uint32_t)(EAX));
  /* 11e830cd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e830d0 push eax */
  push32((uint32_t)(EAX));
  /* 11e830d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e830d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e830d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e830d6 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11e830d8 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11e830db call 0x11e8680d */
  push32(0x11e830e0u); f_11e8680d();
  /* 11e830e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e830e3 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e830e6 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11e830e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e830eb cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e830ef sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e830f2 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e830f5 mov edi, eax */
  EDI = (EAX);
  /* 11e830f7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e830fa push eax */
  push32((uint32_t)(EAX));
  /* 11e830fb push ebx */
  push32((uint32_t)(EBX));
  /* 11e830fc push edi */
  push32((uint32_t)(EDI));
  /* 11e830fd call 0x11e86796 */
  push32(0x11e83102u); f_11e86796();
  /* 11e83102 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e83105 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83108 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e83109 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8310b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11e8310e cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83111 jl 0x11e83139 */
  if ((C.sf!=C.of)) goto L_11e83139;
  /* 11e83113 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83115 jge 0x11e83139 */
  if ((C.sf==C.of)) goto L_11e83139;
  /* 11e83117 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11e83119 je 0x11e83125 */
  if (C.zf) goto L_11e83125;
L_11e8311b:;
  /* 11e8311b mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11e8311d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e8311e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e83120 jne 0x11e8311b */
  if (!C.zf) goto L_11e8311b;
  /* 11e83122 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_11e83125:;
  /* 11e83125 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e83128 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8312a push eax */
  push32((uint32_t)(EAX));
  /* 11e8312b push ebx */
  push32((uint32_t)(EBX));
  /* 11e8312c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e8312f call 0x11e83019 */
  push32(0x11e83134u); f_11e83019();
  /* 11e83134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83137 jmp 0x11e8314e */
  goto L_11e8314e;
L_11e83139:;
  /* 11e83139 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11e8313c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8313e push eax */
  push32((uint32_t)(EAX));
  /* 11e8313f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e83142 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83143 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e83146 call 0x11e82f02 */
  push32(0x11e8314bu); f_11e82f02();
  /* 11e8314b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e8314e:;
  /* 11e8314e pop edi */
  EDI = (pop32());
  /* 11e8314f pop esi */
  ESI = (pop32());
  /* 11e83150 pop ebx */
  EBX = (pop32());
  /* 11e83151 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e83152 ret  */
  ESPCHK(0x11e830c0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11e83153 (81 bytes, 29 insns) */
void f_11e83153(void) {
  FTRACE(0x11e83153u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83153 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83154 mov ebp, esp */
  EBP = (ESP);
  /* 11e83156 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8315a je 0x11e8318e */
  if (C.zf) goto L_11e8318e;
  /* 11e8315c cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83160 je 0x11e8318e */
  if (C.zf) goto L_11e8318e;
  /* 11e83162 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83166 jne 0x11e8317b */
  if (!C.zf) goto L_11e8317b;
  /* 11e83168 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e8316b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e8316e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e83171 call 0x11e82fc4 */
  push32(0x11e83176u); f_11e82fc4();
  /* 11e83176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83179 pop ebp */
  EBP = (pop32());
  /* 11e8317a ret  */
  ESPCHK(0x11e83153u, _esp0);
  ESP += 4; return;
L_11e8317b:;
  /* 11e8317b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e8317e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e83181 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e83184 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e83187 call 0x11e830c0 */
  push32(0x11e8318cu); f_11e830c0();
  /* 11e8318c jmp 0x11e8319f */
  goto L_11e8319f;
L_11e8318e:;
  /* 11e8318e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11e83191 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11e83194 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e83197 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e8319a call 0x11e82ea1 */
  push32(0x11e8319fu); f_11e82ea1();
L_11e8319f:;
  /* 11e8319f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e831a2 pop ebp */
  EBP = (pop32());
  /* 11e831a3 ret  */
  ESPCHK(0x11e83153u, _esp0);
  ESP += 4; return;
}

/* FUN_100031a4 @ 0x11e831a4 (37 bytes, 18 insns) */
void f_11e831a4(void) {
  FTRACE(0x11e831a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e831a4 push edi */
  push32((uint32_t)(EDI));
  /* 11e831a5 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11e831a9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e831ab je 0x11e831c7 */
  if (C.zf) goto L_11e831c7;
  /* 11e831ad push esi */
  push32((uint32_t)(ESI));
  /* 11e831ae mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11e831b2 push esi */
  push32((uint32_t)(ESI));
  /* 11e831b3 call 0x11e85f30 */
  push32(0x11e831b8u); f_11e85f30();
  /* 11e831b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e831b9 push eax */
  push32((uint32_t)(EAX));
  /* 11e831ba push esi */
  push32((uint32_t)(ESI));
  /* 11e831bb add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e831bd push esi */
  push32((uint32_t)(ESI));
  /* 11e831be call 0x11e86a70 */
  push32(0x11e831c3u); f_11e86a70();
  /* 11e831c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e831c6 pop esi */
  ESI = (pop32());
L_11e831c7:;
  /* 11e831c7 pop edi */
  EDI = (pop32());
  /* 11e831c8 ret  */
  ESPCHK(0x11e831a4u, _esp0);
  ESP += 4; return;
}

/* FUN_100031c9 @ 0x11e831c9 (45 bytes, 12 insns) */
void f_11e831c9(void) {
  FTRACE(0x11e831c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e831c9 mov eax, dword ptr [0x11e8c55c] */
  EAX = (r32((uint32_t)(0x11e8c55c)));
  /* 11e831ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e831d0 je 0x11e831d4 */
  if (C.zf) goto L_11e831d4;
  /* 11e831d2 call eax */
  call_ind((uint32_t)(EAX), 0x11e831d4u);
L_11e831d4:;
  /* 11e831d4 push 0x11e8c014 */
  push32((uint32_t)(0x11e8c014u));
  /* 11e831d9 push 0x11e8c008 */
  push32((uint32_t)(0x11e8c008u));
  /* 11e831de call 0x11e832cd */
  push32(0x11e831e3u); f_11e832cd();
  /* 11e831e3 push 0x11e8c004 */
  push32((uint32_t)(0x11e8c004u));
  /* 11e831e8 push 0x11e8c000 */
  push32((uint32_t)(0x11e8c000u));
  /* 11e831ed call 0x11e832cd */
  push32(0x11e831f2u); f_11e832cd();
  /* 11e831f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e831f5 ret  */
  ESPCHK(0x11e831c9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11e831f6 (17 bytes, 6 insns) */
void f_11e831f6(void) {
  FTRACE(0x11e831f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e831f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e831f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e831fa push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11e831fe call 0x11e83216 */
  push32(0x11e83203u); f_11e83216();
  /* 11e83203 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83206 ret  */
  ESPCHK(0x11e831f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003207 @ 0x11e83207 (15 bytes, 6 insns) */
void f_11e83207(void) {
  FTRACE(0x11e83207u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83207 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e83209 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8320b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8320d call 0x11e83216 */
  push32(0x11e83212u); f_11e83216();
  /* 11e83212 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83215 ret  */
  ESPCHK(0x11e83207u, _esp0);
  ESP += 4; return;
}

/* FUN_10003216 @ 0x11e83216 (163 bytes, 53 insns) */
void f_11e83216(void) {
  FTRACE(0x11e83216u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83216 push edi */
  push32((uint32_t)(EDI));
  /* 11e83217 call 0x11e832bb */
  push32(0x11e8321cu); f_11e832bb();
  /* 11e8321c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8321e pop edi */
  EDI = (pop32());
  /* 11e8321f cmp dword ptr [0x11e8f838], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8f838))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83225 jne 0x11e83238 */
  if (!C.zf) goto L_11e83238;
  /* 11e83227 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11e8322b call dword ptr [0x11e8a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0b8))), 0x11e83231u);
  /* 11e83231 push eax */
  push32((uint32_t)(EAX));
  /* 11e83232 call dword ptr [0x11e8a0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0b4))), 0x11e83238u);
L_11e83238:;
  /* 11e83238 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8323d push ebx */
  push32((uint32_t)(EBX));
  /* 11e8323e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11e83242 mov dword ptr [0x11e8f834], edi */
  w32((uint32_t)(0x11e8f834), (EDI));
  /* 11e83248 mov byte ptr [0x11e8f830], bl */
  w8((uint32_t)(0x11e8f830), (BL));
  /* 11e8324e jne 0x11e8328c */
  if (!C.zf) goto L_11e8328c;
  /* 11e83250 mov eax, dword ptr [0x11e8fed0] */
  EAX = (r32((uint32_t)(0x11e8fed0)));
  /* 11e83255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83257 je 0x11e8327b */
  if (C.zf) goto L_11e8327b;
  /* 11e83259 mov ecx, dword ptr [0x11e8fecc] */
  ECX = (r32((uint32_t)(0x11e8fecc)));
  /* 11e8325f push esi */
  push32((uint32_t)(ESI));
  /* 11e83260 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11e83263 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83265 jb 0x11e8327a */
  if (C.cf) goto L_11e8327a;
L_11e83267:;
  /* 11e83267 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e83269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8326b je 0x11e8326f */
  if (C.zf) goto L_11e8326f;
  /* 11e8326d call eax */
  call_ind((uint32_t)(EAX), 0x11e8326fu);
L_11e8326f:;
  /* 11e8326f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e83272 cmp esi, dword ptr [0x11e8fed0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8fed0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83278 jae 0x11e83267 */
  if (!C.cf) goto L_11e83267;
L_11e8327a:;
  /* 11e8327a pop esi */
  ESI = (pop32());
L_11e8327b:;
  /* 11e8327b push 0x11e8c020 */
  push32((uint32_t)(0x11e8c020u));
  /* 11e83280 push 0x11e8c018 */
  push32((uint32_t)(0x11e8c018u));
  /* 11e83285 call 0x11e832cd */
  push32(0x11e8328au); f_11e832cd();
  /* 11e8328a pop ecx */
  ECX = (pop32());
  /* 11e8328b pop ecx */
  ECX = (pop32());
L_11e8328c:;
  /* 11e8328c push 0x11e8c028 */
  push32((uint32_t)(0x11e8c028u));
  /* 11e83291 push 0x11e8c024 */
  push32((uint32_t)(0x11e8c024u));
  /* 11e83296 call 0x11e832cd */
  push32(0x11e8329bu); f_11e832cd();
  /* 11e8329b pop ecx */
  ECX = (pop32());
  /* 11e8329c pop ecx */
  ECX = (pop32());
  /* 11e8329d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e8329f pop ebx */
  EBX = (pop32());
  /* 11e832a0 je 0x11e832a9 */
  if (C.zf) goto L_11e832a9;
  /* 11e832a2 call 0x11e832c4 */
  push32(0x11e832a7u); f_11e832c4();
  /* 11e832a7 pop edi */
  EDI = (pop32());
  /* 11e832a8 ret  */
  ESPCHK(0x11e83216u, _esp0);
  ESP += 4; return;
L_11e832a9:;
  /* 11e832a9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11e832ad mov dword ptr [0x11e8f838], edi */
  w32((uint32_t)(0x11e8f838), (EDI));
  /* 11e832b3 call dword ptr [0x11e8a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0b0))), 0x11e832b9u);
  /* 11e832b9 pop edi */
  EDI = (pop32());
  /* 11e832ba ret  */
  ESPCHK(0x11e83216u, _esp0);
  ESP += 4; return;
}

/* FUN_100032bb @ 0x11e832bb (9 bytes, 4 insns) */
void f_11e832bb(void) {
  FTRACE(0x11e832bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e832bb push 0xd */
  push32((uint32_t)(0xdu));
  /* 11e832bd call 0x11e83f07 */
  push32(0x11e832c2u); f_11e83f07();
  /* 11e832c2 pop ecx */
  ECX = (pop32());
  /* 11e832c3 ret  */
  ESPCHK(0x11e832bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100032c4 @ 0x11e832c4 (9 bytes, 4 insns) */
void f_11e832c4(void) {
  FTRACE(0x11e832c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e832c4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11e832c6 call 0x11e83f68 */
  push32(0x11e832cbu); f_11e83f68();
  /* 11e832cb pop ecx */
  ECX = (pop32());
  /* 11e832cc ret  */
  ESPCHK(0x11e832c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100032cd @ 0x11e832cd (26 bytes, 12 insns) */
void f_11e832cd(void) {
  FTRACE(0x11e832cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e832cd push esi */
  push32((uint32_t)(ESI));
  /* 11e832ce mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11e832d2:;
  /* 11e832d2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e832d6 jae 0x11e832e5 */
  if (!C.cf) goto L_11e832e5;
  /* 11e832d8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e832da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e832dc je 0x11e832e0 */
  if (C.zf) goto L_11e832e0;
  /* 11e832de call eax */
  call_ind((uint32_t)(EAX), 0x11e832e0u);
L_11e832e0:;
  /* 11e832e0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e832e3 jmp 0x11e832d2 */
  goto L_11e832d2;
L_11e832e5:;
  /* 11e832e5 pop esi */
  ESI = (pop32());
  /* 11e832e6 ret  */
  ESPCHK(0x11e832cdu, _esp0);
  ESP += 4; return;
}

/* FUN_100032e7 @ 0x11e832e7 (444 bytes, 150 insns) */
void f_11e832e7(void) {
  FTRACE(0x11e832e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e832e7 push ebp */
  push32((uint32_t)(EBP));
  /* 11e832e8 mov ebp, esp */
  EBP = (ESP);
  /* 11e832ea sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e832ed push ebx */
  push32((uint32_t)(EBX));
  /* 11e832ee push esi */
  push32((uint32_t)(ESI));
  /* 11e832ef push edi */
  push32((uint32_t)(EDI));
  /* 11e832f0 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11e832f5 call 0x11e85dee */
  push32(0x11e832fau); f_11e85dee();
  /* 11e832fa mov esi, eax */
  ESI = (EAX);
  /* 11e832fc pop ecx */
  ECX = (pop32());
  /* 11e832fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e832ff jne 0x11e83309 */
  if (!C.zf) goto L_11e83309;
  /* 11e83301 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11e83303 call 0x11e8261e */
  push32(0x11e83308u); f_11e8261e();
  /* 11e83308 pop ecx */
  ECX = (pop32());
L_11e83309:;
  /* 11e83309 mov dword ptr [0x11e8fdc0], esi */
  w32((uint32_t)(0x11e8fdc0), (ESI));
  /* 11e8330f mov dword ptr [0x11e8fec0], 0x20 */
  w32((uint32_t)(0x11e8fec0), (0x20u));
  /* 11e83319 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11e8331f:;
  /* 11e8331f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83321 jae 0x11e83341 */
  if (!C.cf) goto L_11e83341;
  /* 11e83323 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11e83327 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11e8332a and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11e8332e mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11e83332 mov eax, dword ptr [0x11e8fdc0] */
  EAX = (r32((uint32_t)(0x11e8fdc0)));
  /* 11e83337 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8333a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8333f jmp 0x11e8331f */
  goto L_11e8331f;
L_11e83341:;
  /* 11e83341 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11e83344 push eax */
  push32((uint32_t)(EAX));
  /* 11e83345 call dword ptr [0x11e8a0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0c8))), 0x11e8334bu);
  /* 11e8334b cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e83350 je 0x11e83427 */
  if (C.zf) goto L_11e83427;
  /* 11e83356 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e83359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8335b je 0x11e83427 */
  if (C.zf) goto L_11e83427;
  /* 11e83361 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11e83363 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11e83366 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11e83369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e8336c mov eax, 0x800 */
  EAX = (0x800u);
  /* 11e83371 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83373 jl 0x11e83377 */
  if ((C.sf!=C.of)) goto L_11e83377;
  /* 11e83375 mov edi, eax */
  EDI = (EAX);
L_11e83377:;
  /* 11e83377 cmp dword ptr [0x11e8fec0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8337d jge 0x11e833d5 */
  if ((C.sf==C.of)) goto L_11e833d5;
  /* 11e8337f mov esi, 0x11e8fdc4 */
  ESI = (0x11e8fdc4u);
L_11e83384:;
  /* 11e83384 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11e83389 call 0x11e85dee */
  push32(0x11e8338eu); f_11e85dee();
  /* 11e8338e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83390 pop ecx */
  ECX = (pop32());
  /* 11e83391 je 0x11e833cf */
  if (C.zf) goto L_11e833cf;
  /* 11e83393 add dword ptr [0x11e8fec0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11e8fec0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e8339a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e8339c lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11e833a2:;
  /* 11e833a2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e833a4 jae 0x11e833c2 */
  if (!C.cf) goto L_11e833c2;
  /* 11e833a6 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11e833aa or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e833ad and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11e833b1 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11e833b5 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11e833b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e833ba add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e833c0 jmp 0x11e833a2 */
  goto L_11e833a2;
L_11e833c2:;
  /* 11e833c2 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e833c5 cmp dword ptr [0x11e8fec0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e833cb jl 0x11e83384 */
  if ((C.sf!=C.of)) goto L_11e83384;
  /* 11e833cd jmp 0x11e833d5 */
  goto L_11e833d5;
L_11e833cf:;
  /* 11e833cf mov edi, dword ptr [0x11e8fec0] */
  EDI = (r32((uint32_t)(0x11e8fec0)));
L_11e833d5:;
  /* 11e833d5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e833d7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e833d9 jle 0x11e83427 */
  if ((C.zf||C.sf!=C.of)) goto L_11e83427;
L_11e833db:;
  /* 11e833db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e833de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e833e0 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e833e3 je 0x11e8341d */
  if (C.zf) goto L_11e8341d;
  /* 11e833e5 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11e833e7 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11e833e9 je 0x11e8341d */
  if (C.zf) goto L_11e8341d;
  /* 11e833eb test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11e833ed jne 0x11e833fa */
  if (!C.zf) goto L_11e833fa;
  /* 11e833ef push ecx */
  push32((uint32_t)(ECX));
  /* 11e833f0 call dword ptr [0x11e8a0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0c4))), 0x11e833f6u);
  /* 11e833f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e833f8 je 0x11e8341d */
  if (C.zf) goto L_11e8341d;
L_11e833fa:;
  /* 11e833fa mov ecx, esi */
  ECX = (ESI);
  /* 11e833fc mov eax, esi */
  EAX = (ESI);
  /* 11e833fe sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e83401 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e83404 mov ecx, dword ptr [ecx*4 + 0x11e8fdc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e8340b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11e8340e lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11e83411 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e83414 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11e83416 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e83418 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11e8341a mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11e8341d:;
  /* 11e8341d add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e83421 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e83422 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e83423 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83425 jl 0x11e833db */
  if ((C.sf!=C.of)) goto L_11e833db;
L_11e83427:;
  /* 11e83427 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11e83429:;
  /* 11e83429 mov ecx, dword ptr [0x11e8fdc0] */
  ECX = (r32((uint32_t)(0x11e8fdc0)));
  /* 11e8342f lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11e83432 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83436 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11e83439 jne 0x11e83488 */
  if (!C.zf) goto L_11e83488;
  /* 11e8343b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e8343d mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11e83441 jne 0x11e83448 */
  if (!C.zf) goto L_11e83448;
  /* 11e83443 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11e83445 pop eax */
  EAX = (pop32());
  /* 11e83446 jmp 0x11e83452 */
  goto L_11e83452;
L_11e83448:;
  /* 11e83448 mov eax, ebx */
  EAX = (EBX);
  /* 11e8344a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e8344b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e8344d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8344f add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e83452:;
  /* 11e83452 push eax */
  push32((uint32_t)(EAX));
  /* 11e83453 call dword ptr [0x11e8a0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0c0))), 0x11e83459u);
  /* 11e83459 mov edi, eax */
  EDI = (EAX);
  /* 11e8345b cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8345e je 0x11e83477 */
  if (C.zf) goto L_11e83477;
  /* 11e83460 push edi */
  push32((uint32_t)(EDI));
  /* 11e83461 call dword ptr [0x11e8a0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0c4))), 0x11e83467u);
  /* 11e83467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83469 je 0x11e83477 */
  if (C.zf) goto L_11e83477;
  /* 11e8346b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e83470 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11e83472 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83475 jne 0x11e8347d */
  if (!C.zf) goto L_11e8347d;
L_11e83477:;
  /* 11e83477 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11e8347b jmp 0x11e8348c */
  goto L_11e8348c;
L_11e8347d:;
  /* 11e8347d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83480 jne 0x11e8348c */
  if (!C.zf) goto L_11e8348c;
  /* 11e83482 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11e83486 jmp 0x11e8348c */
  goto L_11e8348c;
L_11e83488:;
  /* 11e83488 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11e8348c:;
  /* 11e8348c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e8348d cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83490 jl 0x11e83429 */
  if ((C.sf!=C.of)) goto L_11e83429;
  /* 11e83492 push dword ptr [0x11e8fec0] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fec0))));
  /* 11e83498 call dword ptr [0x11e8a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0bc))), 0x11e8349eu);
  /* 11e8349e pop edi */
  EDI = (pop32());
  /* 11e8349f pop esi */
  ESI = (pop32());
  /* 11e834a0 pop ebx */
  EBX = (pop32());
  /* 11e834a1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e834a2 ret  */
  ESPCHK(0x11e832e7u, _esp0);
  ESP += 4; return;
}

/* FUN_100034a3 @ 0x11e834a3 (84 bytes, 33 insns) */
void f_11e834a3(void) {
  FTRACE(0x11e834a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e834a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e834a4 push esi */
  push32((uint32_t)(ESI));
  /* 11e834a5 push edi */
  push32((uint32_t)(EDI));
  /* 11e834a6 mov esi, 0x11e8fdc0 */
  ESI = (0x11e8fdc0u);
L_11e834ab:;
  /* 11e834ab mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e834ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e834af je 0x11e834e8 */
  if (C.zf) goto L_11e834e8;
  /* 11e834b1 mov edi, eax */
  EDI = (EAX);
  /* 11e834b3 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e834b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e834ba jae 0x11e834dd */
  if (!C.cf) goto L_11e834dd;
  /* 11e834bc lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11e834bf:;
  /* 11e834bf cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e834c3 je 0x11e834cc */
  if (C.zf) goto L_11e834cc;
  /* 11e834c5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e834c6 call dword ptr [0x11e8a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0cc))), 0x11e834ccu);
L_11e834cc:;
  /* 11e834cc mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e834ce add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e834d1 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e834d6 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e834d9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e834db jb 0x11e834bf */
  if (C.cf) goto L_11e834bf;
L_11e834dd:;
  /* 11e834dd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e834df call 0x11e829ff */
  push32(0x11e834e4u); f_11e829ff();
  /* 11e834e4 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11e834e7 pop ecx */
  ECX = (pop32());
L_11e834e8:;
  /* 11e834e8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e834eb cmp esi, 0x11e8fec0 */
  { uint32_t _a=(ESI),_b=(0x11e8fec0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e834f1 jl 0x11e834ab */
  if ((C.sf!=C.of)) goto L_11e834ab;
  /* 11e834f3 pop edi */
  EDI = (pop32());
  /* 11e834f4 pop esi */
  ESI = (pop32());
  /* 11e834f5 pop ebx */
  EBX = (pop32());
  /* 11e834f6 ret  */
  ESPCHK(0x11e834a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f7 @ 0x11e834f7 (185 bytes, 71 insns) */
void f_11e834f7(void) {
  FTRACE(0x11e834f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e834f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11e834f8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e834fa cmp dword ptr [0x11e8fec8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83500 push esi */
  push32((uint32_t)(ESI));
  /* 11e83501 push edi */
  push32((uint32_t)(EDI));
  /* 11e83502 jne 0x11e83509 */
  if (!C.zf) goto L_11e83509;
  /* 11e83504 call 0x11e87186 */
  push32(0x11e83509u); f_11e87186();
L_11e83509:;
  /* 11e83509 mov esi, dword ptr [0x11e8f7dc] */
  ESI = (r32((uint32_t)(0x11e8f7dc)));
  /* 11e8350f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11e83511:;
  /* 11e83511 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e83513 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83515 je 0x11e83529 */
  if (C.zf) goto L_11e83529;
  /* 11e83517 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83519 je 0x11e8351c */
  if (C.zf) goto L_11e8351c;
  /* 11e8351b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11e8351c:;
  /* 11e8351c push esi */
  push32((uint32_t)(ESI));
  /* 11e8351d call 0x11e85f30 */
  push32(0x11e83522u); f_11e85f30();
  /* 11e83522 pop ecx */
  ECX = (pop32());
  /* 11e83523 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11e83527 jmp 0x11e83511 */
  goto L_11e83511;
L_11e83529:;
  /* 11e83529 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11e83530 push eax */
  push32((uint32_t)(EAX));
  /* 11e83531 call 0x11e85dee */
  push32(0x11e83536u); f_11e85dee();
  /* 11e83536 mov esi, eax */
  ESI = (EAX);
  /* 11e83538 pop ecx */
  ECX = (pop32());
  /* 11e83539 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8353b mov dword ptr [0x11e8f818], esi */
  w32((uint32_t)(0x11e8f818), (ESI));
  /* 11e83541 jne 0x11e8354b */
  if (!C.zf) goto L_11e8354b;
  /* 11e83543 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83545 call 0x11e8261e */
  push32(0x11e8354au); f_11e8261e();
  /* 11e8354a pop ecx */
  ECX = (pop32());
L_11e8354b:;
  /* 11e8354b mov edi, dword ptr [0x11e8f7dc] */
  EDI = (r32((uint32_t)(0x11e8f7dc)));
  /* 11e83551 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83553 je 0x11e8358e */
  if (C.zf) goto L_11e8358e;
  /* 11e83555 push ebp */
  push32((uint32_t)(EBP));
L_11e83556:;
  /* 11e83556 push edi */
  push32((uint32_t)(EDI));
  /* 11e83557 call 0x11e85f30 */
  push32(0x11e8355cu); f_11e85f30();
  /* 11e8355c mov ebp, eax */
  EBP = (EAX);
  /* 11e8355e pop ecx */
  ECX = (pop32());
  /* 11e8355f inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11e83560 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83563 je 0x11e83587 */
  if (C.zf) goto L_11e83587;
  /* 11e83565 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83566 call 0x11e85dee */
  push32(0x11e8356bu); f_11e85dee();
  /* 11e8356b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8356d pop ecx */
  ECX = (pop32());
  /* 11e8356e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e83570 jne 0x11e8357a */
  if (!C.zf) goto L_11e8357a;
  /* 11e83572 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83574 call 0x11e8261e */
  push32(0x11e83579u); f_11e8261e();
  /* 11e83579 pop ecx */
  ECX = (pop32());
L_11e8357a:;
  /* 11e8357a push edi */
  push32((uint32_t)(EDI));
  /* 11e8357b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e8357d call 0x11e86920 */
  push32(0x11e83582u); f_11e86920();
  /* 11e83582 pop ecx */
  ECX = (pop32());
  /* 11e83583 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83586 pop ecx */
  ECX = (pop32());
L_11e83587:;
  /* 11e83587 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83589 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8358b jne 0x11e83556 */
  if (!C.zf) goto L_11e83556;
  /* 11e8358d pop ebp */
  EBP = (pop32());
L_11e8358e:;
  /* 11e8358e push dword ptr [0x11e8f7dc] */
  push32((uint32_t)(r32((uint32_t)(0x11e8f7dc))));
  /* 11e83594 call 0x11e829ff */
  push32(0x11e83599u); f_11e829ff();
  /* 11e83599 pop ecx */
  ECX = (pop32());
  /* 11e8359a mov dword ptr [0x11e8f7dc], ebx */
  w32((uint32_t)(0x11e8f7dc), (EBX));
  /* 11e835a0 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11e835a2 pop edi */
  EDI = (pop32());
  /* 11e835a3 pop esi */
  ESI = (pop32());
  /* 11e835a4 mov dword ptr [0x11e8fec4], 1 */
  w32((uint32_t)(0x11e8fec4), (0x1u));
  /* 11e835ae pop ebx */
  EBX = (pop32());
  /* 11e835af ret  */
  ESPCHK(0x11e834f7u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b0 @ 0x11e835b0 (153 bytes, 62 insns) */
void f_11e835b0(void) {
  FTRACE(0x11e835b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e835b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e835b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e835b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e835b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e835b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e835b6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e835b8 cmp dword ptr [0x11e8fec8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fec8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e835be push esi */
  push32((uint32_t)(ESI));
  /* 11e835bf push edi */
  push32((uint32_t)(EDI));
  /* 11e835c0 jne 0x11e835c7 */
  if (!C.zf) goto L_11e835c7;
  /* 11e835c2 call 0x11e87186 */
  push32(0x11e835c7u); f_11e87186();
L_11e835c7:;
  /* 11e835c7 mov esi, 0x11e8f83c */
  ESI = (0x11e8f83cu);
  /* 11e835cc push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11e835d1 push esi */
  push32((uint32_t)(ESI));
  /* 11e835d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11e835d3 call dword ptr [0x11e8a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0d0))), 0x11e835d9u);
  /* 11e835d9 mov eax, dword ptr [0x11e90ee4] */
  EAX = (r32((uint32_t)(0x11e90ee4)));
  /* 11e835de mov dword ptr [0x11e8f828], esi */
  w32((uint32_t)(0x11e8f828), (ESI));
  /* 11e835e4 mov edi, esi */
  EDI = (ESI);
  /* 11e835e6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e835e8 je 0x11e835ec */
  if (C.zf) goto L_11e835ec;
  /* 11e835ea mov edi, eax */
  EDI = (EAX);
L_11e835ec:;
  /* 11e835ec lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e835ef push eax */
  push32((uint32_t)(EAX));
  /* 11e835f0 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11e835f3 push eax */
  push32((uint32_t)(EAX));
  /* 11e835f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e835f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e835f6 push edi */
  push32((uint32_t)(EDI));
  /* 11e835f7 call 0x11e83649 */
  push32(0x11e835fcu); f_11e83649();
  /* 11e835fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e835ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e83602 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11e83605 push eax */
  push32((uint32_t)(EAX));
  /* 11e83606 call 0x11e85dee */
  push32(0x11e8360bu); f_11e85dee();
  /* 11e8360b mov esi, eax */
  ESI = (EAX);
  /* 11e8360d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83610 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83612 jne 0x11e8361c */
  if (!C.zf) goto L_11e8361c;
  /* 11e83614 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e83616 call 0x11e8261e */
  push32(0x11e8361bu); f_11e8261e();
  /* 11e8361b pop ecx */
  ECX = (pop32());
L_11e8361c:;
  /* 11e8361c lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e8361f push eax */
  push32((uint32_t)(EAX));
  /* 11e83620 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11e83623 push eax */
  push32((uint32_t)(EAX));
  /* 11e83624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e83627 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11e8362a push eax */
  push32((uint32_t)(EAX));
  /* 11e8362b push esi */
  push32((uint32_t)(ESI));
  /* 11e8362c push edi */
  push32((uint32_t)(EDI));
  /* 11e8362d call 0x11e83649 */
  push32(0x11e83632u); f_11e83649();
  /* 11e83632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e83635 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83638 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e83639 mov dword ptr [0x11e8f810], esi */
  w32((uint32_t)(0x11e8f810), (ESI));
  /* 11e8363f pop edi */
  EDI = (pop32());
  /* 11e83640 pop esi */
  ESI = (pop32());
  /* 11e83641 mov dword ptr [0x11e8f80c], eax */
  w32((uint32_t)(0x11e8f80c), (EAX));
  /* 11e83646 pop ebx */
  EBX = (pop32());
  /* 11e83647 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e83648 ret  */
  ESPCHK(0x11e835b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003649 @ 0x11e83649 (436 bytes, 187 insns) */
void f_11e83649(void) {
  FTRACE(0x11e83649u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83649 push ebp */
  push32((uint32_t)(EBP));
  /* 11e8364a mov ebp, esp */
  EBP = (ESP);
  /* 11e8364c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e8364f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e83652 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83653 push esi */
  push32((uint32_t)(ESI));
  /* 11e83654 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11e83657 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8365a push edi */
  push32((uint32_t)(EDI));
  /* 11e8365b mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8365e mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11e83664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e83667 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e83669 je 0x11e83673 */
  if (C.zf) goto L_11e83673;
  /* 11e8366b mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11e8366d add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83670 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11e83673:;
  /* 11e83673 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83676 jne 0x11e836bc */
  if (!C.zf) goto L_11e836bc;
L_11e83678:;
  /* 11e83678 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e8367b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e8367c cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8367f je 0x11e836aa */
  if (C.zf) goto L_11e836aa;
  /* 11e83681 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e83683 je 0x11e836aa */
  if (C.zf) goto L_11e836aa;
  /* 11e83685 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11e83688 test byte ptr [edx + 0x11e8fc81], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11e8fc81)))&(0x4u); fl_logic(_r,8); }
  /* 11e8368f je 0x11e8369d */
  if (C.zf) goto L_11e8369d;
  /* 11e83691 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e83693 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e83695 je 0x11e8369d */
  if (C.zf) goto L_11e8369d;
  /* 11e83697 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e83699 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11e8369b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e8369c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e8369d:;
  /* 11e8369d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e8369f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e836a1 je 0x11e83678 */
  if (C.zf) goto L_11e83678;
  /* 11e836a3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e836a5 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11e836a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e836a8 jmp 0x11e83678 */
  goto L_11e83678;
L_11e836aa:;
  /* 11e836aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e836ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e836ae je 0x11e836b4 */
  if (C.zf) goto L_11e836b4;
  /* 11e836b0 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11e836b3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e836b4:;
  /* 11e836b4 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e836b7 jne 0x11e836ff */
  if (!C.zf) goto L_11e836ff;
  /* 11e836b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e836ba jmp 0x11e836ff */
  goto L_11e836ff;
L_11e836bc:;
  /* 11e836bc inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e836be test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e836c0 je 0x11e836c7 */
  if (C.zf) goto L_11e836c7;
  /* 11e836c2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e836c4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11e836c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e836c7:;
  /* 11e836c7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e836c9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e836ca movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11e836cd test byte ptr [ebx + 0x11e8fc81], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11e8fc81)))&(0x4u); fl_logic(_r,8); }
  /* 11e836d4 je 0x11e836e2 */
  if (C.zf) goto L_11e836e2;
  /* 11e836d6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e836d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e836da je 0x11e836e1 */
  if (C.zf) goto L_11e836e1;
  /* 11e836dc mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11e836de mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11e836e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e836e1:;
  /* 11e836e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e836e2:;
  /* 11e836e2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e836e5 je 0x11e836f0 */
  if (C.zf) goto L_11e836f0;
  /* 11e836e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e836e9 je 0x11e836f4 */
  if (C.zf) goto L_11e836f4;
  /* 11e836eb cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e836ee jne 0x11e836bc */
  if (!C.zf) goto L_11e836bc;
L_11e836f0:;
  /* 11e836f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e836f2 jne 0x11e836f7 */
  if (!C.zf) goto L_11e836f7;
L_11e836f4:;
  /* 11e836f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11e836f5 jmp 0x11e836ff */
  goto L_11e836ff;
L_11e836f7:;
  /* 11e836f7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e836f9 je 0x11e836ff */
  if (C.zf) goto L_11e836ff;
  /* 11e836fb and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11e836ff:;
  /* 11e836ff and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11e83703:;
  /* 11e83703 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83706 je 0x11e837ec */
  if (C.zf) goto L_11e837ec;
L_11e8370c:;
  /* 11e8370c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e8370e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83711 je 0x11e83718 */
  if (C.zf) goto L_11e83718;
  /* 11e83713 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83716 jne 0x11e8371b */
  if (!C.zf) goto L_11e8371b;
L_11e83718:;
  /* 11e83718 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83719 jmp 0x11e8370c */
  goto L_11e8370c;
L_11e8371b:;
  /* 11e8371b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8371e je 0x11e837ec */
  if (C.zf) goto L_11e837ec;
  /* 11e83724 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e83726 je 0x11e83730 */
  if (C.zf) goto L_11e83730;
  /* 11e83728 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11e8372a add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8372d mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11e83730:;
  /* 11e83730 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e83733 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11e83735:;
  /* 11e83735 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11e8373c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11e8373e:;
  /* 11e8373e cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83741 jne 0x11e83747 */
  if (!C.zf) goto L_11e83747;
  /* 11e83743 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83744 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e83745 jmp 0x11e8373e */
  goto L_11e8373e;
L_11e83747:;
  /* 11e83747 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8374a jne 0x11e83778 */
  if (!C.zf) goto L_11e83778;
  /* 11e8374c test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11e8374f jne 0x11e83776 */
  if (!C.zf) goto L_11e83776;
  /* 11e83751 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e83753 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83756 je 0x11e83765 */
  if (C.zf) goto L_11e83765;
  /* 11e83758 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8375c lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11e8375f jne 0x11e83765 */
  if (!C.zf) goto L_11e83765;
  /* 11e83761 mov eax, edx */
  EAX = (EDX);
  /* 11e83763 jmp 0x11e83768 */
  goto L_11e83768;
L_11e83765:;
  /* 11e83765 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11e83768:;
  /* 11e83768 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e8376b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e8376d cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83770 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11e83773 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11e83776:;
  /* 11e83776 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11e83778:;
  /* 11e83778 mov edx, ebx */
  EDX = (EBX);
  /* 11e8377a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e8377b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e8377d je 0x11e8378d */
  if (C.zf) goto L_11e8378d;
  /* 11e8377f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11e83780:;
  /* 11e83780 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e83782 je 0x11e83788 */
  if (C.zf) goto L_11e83788;
  /* 11e83784 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11e83787 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e83788:;
  /* 11e83788 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e8378a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e8378b jne 0x11e83780 */
  if (!C.zf) goto L_11e83780;
L_11e8378d:;
  /* 11e8378d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e8378f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11e83791 je 0x11e837dd */
  if (C.zf) goto L_11e837dd;
  /* 11e83793 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83797 jne 0x11e837a3 */
  if (!C.zf) goto L_11e837a3;
  /* 11e83799 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8379c je 0x11e837dd */
  if (C.zf) goto L_11e837dd;
  /* 11e8379e cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e837a1 je 0x11e837dd */
  if (C.zf) goto L_11e837dd;
L_11e837a3:;
  /* 11e837a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e837a7 je 0x11e837d7 */
  if (C.zf) goto L_11e837d7;
  /* 11e837a9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e837ab je 0x11e837c6 */
  if (C.zf) goto L_11e837c6;
  /* 11e837ad movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11e837b0 test byte ptr [ebx + 0x11e8fc81], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11e8fc81)))&(0x4u); fl_logic(_r,8); }
  /* 11e837b7 je 0x11e837bf */
  if (C.zf) goto L_11e837bf;
  /* 11e837b9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11e837bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e837bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e837bd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11e837bf:;
  /* 11e837bf mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11e837c1 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11e837c3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e837c4 jmp 0x11e837d5 */
  goto L_11e837d5;
L_11e837c6:;
  /* 11e837c6 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11e837c9 test byte ptr [edx + 0x11e8fc81], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11e8fc81)))&(0x4u); fl_logic(_r,8); }
  /* 11e837d0 je 0x11e837d5 */
  if (C.zf) goto L_11e837d5;
  /* 11e837d2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e837d3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11e837d5:;
  /* 11e837d5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11e837d7:;
  /* 11e837d7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e837d8 jmp 0x11e83735 */
  goto L_11e83735;
L_11e837dd:;
  /* 11e837dd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e837df je 0x11e837e5 */
  if (C.zf) goto L_11e837e5;
  /* 11e837e1 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11e837e4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e837e5:;
  /* 11e837e5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11e837e7 jmp 0x11e83703 */
  goto L_11e83703;
L_11e837ec:;
  /* 11e837ec test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e837ee je 0x11e837f3 */
  if (C.zf) goto L_11e837f3;
  /* 11e837f0 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11e837f3:;
  /* 11e837f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e837f6 pop edi */
  EDI = (pop32());
  /* 11e837f7 pop esi */
  ESI = (pop32());
  /* 11e837f8 pop ebx */
  EBX = (pop32());
  /* 11e837f9 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11e837fb pop ebp */
  EBP = (pop32());
  /* 11e837fc ret  */
  ESPCHK(0x11e83649u, _esp0);
  ESP += 4; return;
}

/* FUN_100037fd @ 0x11e837fd (306 bytes, 132 insns) */
void f_11e837fd(void) {
  FTRACE(0x11e837fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e837fd push ecx */
  push32((uint32_t)(ECX));
  /* 11e837fe push ecx */
  push32((uint32_t)(ECX));
  /* 11e837ff mov eax, dword ptr [0x11e8f940] */
  EAX = (r32((uint32_t)(0x11e8f940)));
  /* 11e83804 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83805 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83806 mov ebp, dword ptr [0x11e8a0e4] */
  EBP = (r32((uint32_t)(0x11e8a0e4)));
  /* 11e8380c push esi */
  push32((uint32_t)(ESI));
  /* 11e8380d push edi */
  push32((uint32_t)(EDI));
  /* 11e8380e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e83810 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e83812 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e83814 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83816 jne 0x11e8384b */
  if (!C.zf) goto L_11e8384b;
  /* 11e83818 call ebp */
  call_ind((uint32_t)(EBP), 0x11e8381au);
  /* 11e8381a mov esi, eax */
  ESI = (EAX);
  /* 11e8381c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8381e je 0x11e8382c */
  if (C.zf) goto L_11e8382c;
  /* 11e83820 mov dword ptr [0x11e8f940], 1 */
  w32((uint32_t)(0x11e8f940), (0x1u));
  /* 11e8382a jmp 0x11e83854 */
  goto L_11e83854;
L_11e8382c:;
  /* 11e8382c call dword ptr [0x11e8a0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0e0))), 0x11e83832u);
  /* 11e83832 mov edi, eax */
  EDI = (EAX);
  /* 11e83834 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83836 je 0x11e83926 */
  if (C.zf) goto L_11e83926;
  /* 11e8383c mov dword ptr [0x11e8f940], 2 */
  w32((uint32_t)(0x11e8f940), (0x2u));
  /* 11e83846 jmp 0x11e838da */
  goto L_11e838da;
L_11e8384b:;
  /* 11e8384b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8384e jne 0x11e838d5 */
  if (!C.zf) goto L_11e838d5;
L_11e83854:;
  /* 11e83854 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83856 jne 0x11e83864 */
  if (!C.zf) goto L_11e83864;
  /* 11e83858 call ebp */
  call_ind((uint32_t)(EBP), 0x11e8385au);
  /* 11e8385a mov esi, eax */
  ESI = (EAX);
  /* 11e8385c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8385e je 0x11e83926 */
  if (C.zf) goto L_11e83926;
L_11e83864:;
  /* 11e83864 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e83867 mov eax, esi */
  EAX = (ESI);
  /* 11e83869 je 0x11e83879 */
  if (C.zf) goto L_11e83879;
L_11e8386b:;
  /* 11e8386b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e8386c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e8386d cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e83870 jne 0x11e8386b */
  if (!C.zf) goto L_11e8386b;
  /* 11e83872 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83873 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83874 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e83877 jne 0x11e8386b */
  if (!C.zf) goto L_11e8386b;
L_11e83879:;
  /* 11e83879 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8387b mov edi, dword ptr [0x11e8a0dc] */
  EDI = (r32((uint32_t)(0x11e8a0dc)));
  /* 11e83881 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e83883 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83884 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83885 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83886 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83887 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83888 push eax */
  push32((uint32_t)(EAX));
  /* 11e83889 push esi */
  push32((uint32_t)(ESI));
  /* 11e8388a push ebx */
  push32((uint32_t)(EBX));
  /* 11e8388b push ebx */
  push32((uint32_t)(EBX));
  /* 11e8388c mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11e83890 call edi */
  call_ind((uint32_t)(EDI), 0x11e83892u);
  /* 11e83892 mov ebp, eax */
  EBP = (EAX);
  /* 11e83894 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83896 je 0x11e838ca */
  if (C.zf) goto L_11e838ca;
  /* 11e83898 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83899 call 0x11e85dee */
  push32(0x11e8389eu); f_11e85dee();
  /* 11e8389e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e838a0 pop ecx */
  ECX = (pop32());
  /* 11e838a1 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11e838a5 je 0x11e838ca */
  if (C.zf) goto L_11e838ca;
  /* 11e838a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11e838a8 push ebx */
  push32((uint32_t)(EBX));
  /* 11e838a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11e838aa push eax */
  push32((uint32_t)(EAX));
  /* 11e838ab push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11e838af push esi */
  push32((uint32_t)(ESI));
  /* 11e838b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e838b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11e838b2 call edi */
  call_ind((uint32_t)(EDI), 0x11e838b4u);
  /* 11e838b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e838b6 jne 0x11e838c6 */
  if (!C.zf) goto L_11e838c6;
  /* 11e838b8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11e838bc call 0x11e829ff */
  push32(0x11e838c1u); f_11e829ff();
  /* 11e838c1 pop ecx */
  ECX = (pop32());
  /* 11e838c2 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11e838c6:;
  /* 11e838c6 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11e838ca:;
  /* 11e838ca push esi */
  push32((uint32_t)(ESI));
  /* 11e838cb call dword ptr [0x11e8a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0d8))), 0x11e838d1u);
  /* 11e838d1 mov eax, ebx */
  EAX = (EBX);
  /* 11e838d3 jmp 0x11e83928 */
  goto L_11e83928;
L_11e838d5:;
  /* 11e838d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e838d8 jne 0x11e83926 */
  if (!C.zf) goto L_11e83926;
L_11e838da:;
  /* 11e838da cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e838dc jne 0x11e838ea */
  if (!C.zf) goto L_11e838ea;
  /* 11e838de call dword ptr [0x11e8a0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0e0))), 0x11e838e4u);
  /* 11e838e4 mov edi, eax */
  EDI = (EAX);
  /* 11e838e6 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e838e8 je 0x11e83926 */
  if (C.zf) goto L_11e83926;
L_11e838ea:;
  /* 11e838ea cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e838ec mov eax, edi */
  EAX = (EDI);
  /* 11e838ee je 0x11e838fa */
  if (C.zf) goto L_11e838fa;
L_11e838f0:;
  /* 11e838f0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e838f1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e838f3 jne 0x11e838f0 */
  if (!C.zf) goto L_11e838f0;
  /* 11e838f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e838f6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e838f8 jne 0x11e838f0 */
  if (!C.zf) goto L_11e838f0;
L_11e838fa:;
  /* 11e838fa sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e838fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e838fd mov ebp, eax */
  EBP = (EAX);
  /* 11e838ff push ebp */
  push32((uint32_t)(EBP));
  /* 11e83900 call 0x11e85dee */
  push32(0x11e83905u); f_11e85dee();
  /* 11e83905 mov esi, eax */
  ESI = (EAX);
  /* 11e83907 pop ecx */
  ECX = (pop32());
  /* 11e83908 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8390a jne 0x11e83910 */
  if (!C.zf) goto L_11e83910;
  /* 11e8390c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e8390e jmp 0x11e8391b */
  goto L_11e8391b;
L_11e83910:;
  /* 11e83910 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83911 push edi */
  push32((uint32_t)(EDI));
  /* 11e83912 push esi */
  push32((uint32_t)(ESI));
  /* 11e83913 call 0x11e871b0 */
  push32(0x11e83918u); f_11e871b0();
  /* 11e83918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e8391b:;
  /* 11e8391b push edi */
  push32((uint32_t)(EDI));
  /* 11e8391c call dword ptr [0x11e8a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0d4))), 0x11e83922u);
  /* 11e83922 mov eax, esi */
  EAX = (ESI);
  /* 11e83924 jmp 0x11e83928 */
  goto L_11e83928;
L_11e83926:;
  /* 11e83926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e83928:;
  /* 11e83928 pop edi */
  EDI = (pop32());
  /* 11e83929 pop esi */
  ESI = (pop32());
  /* 11e8392a pop ebp */
  EBP = (pop32());
  /* 11e8392b pop ebx */
  EBX = (pop32());
  /* 11e8392c pop ecx */
  ECX = (pop32());
  /* 11e8392d pop ecx */
  ECX = (pop32());
  /* 11e8392e ret  */
  ESPCHK(0x11e837fdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000392f @ 0x11e8392f (45 bytes, 17 insns) */
void f_11e8392f(void) {
  FTRACE(0x11e8392fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8392f push esi */
  push32((uint32_t)(ESI));
  /* 11e83930 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e83934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83936 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11e83939 call dword ptr [0x11e8a0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0ac))), 0x11e8393fu);
  /* 11e8393f cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e83944 jne 0x11e8395a */
  if (!C.zf) goto L_11e8395a;
  /* 11e83946 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11e83949 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e8394b je 0x11e8395a */
  if (C.zf) goto L_11e8395a;
  /* 11e8394d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8394f mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11e83952 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11e83954 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11e83957 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11e8395a:;
  /* 11e8395a pop esi */
  ESI = (pop32());
  /* 11e8395b ret  */
  ESPCHK(0x11e8392fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000395c @ 0x11e8395c (328 bytes, 115 insns) */
void f_11e8395c(void) {
  FTRACE(0x11e8395cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8395c push ebp */
  push32((uint32_t)(EBP));
  /* 11e8395d mov ebp, esp */
  EBP = (ESP);
  /* 11e8395f mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11e83964 call 0x11e878a0 */
  push32(0x11e83969u); f_11e878a0();
  /* 11e83969 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11e8396f push ebx */
  push32((uint32_t)(EBX));
  /* 11e83970 push eax */
  push32((uint32_t)(EAX));
  /* 11e83971 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11e8397b call dword ptr [0x11e8a0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0ec))), 0x11e83981u);
  /* 11e83981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83983 je 0x11e8399f */
  if (C.zf) goto L_11e8399f;
  /* 11e83985 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8398c jne 0x11e8399f */
  if (!C.zf) goto L_11e8399f;
  /* 11e8398e cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83995 jb 0x11e8399f */
  if (C.cf) goto L_11e8399f;
  /* 11e83997 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e83999 pop eax */
  EAX = (pop32());
  /* 11e8399a jmp 0x11e83aa1 */
  goto L_11e83aa1;
L_11e8399f:;
  /* 11e8399f lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11e839a5 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11e839aa push eax */
  push32((uint32_t)(EAX));
  /* 11e839ab push 0x11e8a288 */
  push32((uint32_t)(0x11e8a288u));
  /* 11e839b0 call dword ptr [0x11e8a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0e8))), 0x11e839b6u);
  /* 11e839b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e839b8 je 0x11e83a8e */
  if (C.zf) goto L_11e83a8e;
  /* 11e839be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e839c0 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11e839c6 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e839cc je 0x11e839e1 */
  if (C.zf) goto L_11e839e1;
L_11e839ce:;
  /* 11e839ce mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11e839d0 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e839d2 jl 0x11e839dc */
  if ((C.sf!=C.of)) goto L_11e839dc;
  /* 11e839d4 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e839d6 jg 0x11e839dc */
  if ((!C.zf&&C.sf==C.of)) goto L_11e839dc;
  /* 11e839d8 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e839da mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11e839dc:;
  /* 11e839dc inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e839dd cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e839df jne 0x11e839ce */
  if (!C.zf) goto L_11e839ce;
L_11e839e1:;
  /* 11e839e1 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11e839e7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11e839e9 push eax */
  push32((uint32_t)(EAX));
  /* 11e839ea push 0x11e8a270 */
  push32((uint32_t)(0x11e8a270u));
  /* 11e839ef call 0x11e87860 */
  push32(0x11e839f4u); f_11e87860();
  /* 11e839f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e839f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e839f9 jne 0x11e83a03 */
  if (!C.zf) goto L_11e83a03;
  /* 11e839fb lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11e83a01 jmp 0x11e83a4c */
  goto L_11e83a4c;
L_11e83a03:;
  /* 11e83a03 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11e83a09 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11e83a0e push eax */
  push32((uint32_t)(EAX));
  /* 11e83a0f push ebx */
  push32((uint32_t)(EBX));
  /* 11e83a10 call dword ptr [0x11e8a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0d0))), 0x11e83a16u);
  /* 11e83a16 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a1c lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11e83a22 je 0x11e83a37 */
  if (C.zf) goto L_11e83a37;
L_11e83a24:;
  /* 11e83a24 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11e83a26 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a28 jl 0x11e83a32 */
  if ((C.sf!=C.of)) goto L_11e83a32;
  /* 11e83a2a cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a2c jg 0x11e83a32 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e83a32;
  /* 11e83a2e sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e83a30 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11e83a32:;
  /* 11e83a32 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e83a33 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a35 jne 0x11e83a24 */
  if (!C.zf) goto L_11e83a24;
L_11e83a37:;
  /* 11e83a37 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11e83a3d push eax */
  push32((uint32_t)(EAX));
  /* 11e83a3e lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11e83a44 push eax */
  push32((uint32_t)(EAX));
  /* 11e83a45 call 0x11e877e0 */
  push32(0x11e83a4au); f_11e877e0();
  /* 11e83a4a pop ecx */
  ECX = (pop32());
  /* 11e83a4b pop ecx */
  ECX = (pop32());
L_11e83a4c:;
  /* 11e83a4c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83a4e je 0x11e83a8e */
  if (C.zf) goto L_11e83a8e;
  /* 11e83a50 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11e83a52 push eax */
  push32((uint32_t)(EAX));
  /* 11e83a53 call 0x11e87720 */
  push32(0x11e83a58u); f_11e87720();
  /* 11e83a58 pop ecx */
  ECX = (pop32());
  /* 11e83a59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83a5b pop ecx */
  ECX = (pop32());
  /* 11e83a5c je 0x11e83a8e */
  if (C.zf) goto L_11e83a8e;
  /* 11e83a5e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83a5f mov ecx, eax */
  ECX = (EAX);
  /* 11e83a61 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a63 je 0x11e83a73 */
  if (C.zf) goto L_11e83a73;
L_11e83a65:;
  /* 11e83a65 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a68 jne 0x11e83a6e */
  if (!C.zf) goto L_11e83a6e;
  /* 11e83a6a mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11e83a6c jmp 0x11e83a6f */
  goto L_11e83a6f;
L_11e83a6e:;
  /* 11e83a6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11e83a6f:;
  /* 11e83a6f cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a71 jne 0x11e83a65 */
  if (!C.zf) goto L_11e83a65;
L_11e83a73:;
  /* 11e83a73 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e83a75 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83a76 push eax */
  push32((uint32_t)(EAX));
  /* 11e83a77 call 0x11e874e5 */
  push32(0x11e83a7cu); f_11e874e5();
  /* 11e83a7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83a7f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83a82 je 0x11e83aa1 */
  if (C.zf) goto L_11e83aa1;
  /* 11e83a84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83a87 je 0x11e83aa1 */
  if (C.zf) goto L_11e83aa1;
  /* 11e83a89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83a8c je 0x11e83aa1 */
  if (C.zf) goto L_11e83aa1;
L_11e83a8e:;
  /* 11e83a8e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11e83a91 push eax */
  push32((uint32_t)(EAX));
  /* 11e83a92 call 0x11e8392f */
  push32(0x11e83a97u); f_11e8392f();
  /* 11e83a97 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e83a9b pop ecx */
  ECX = (pop32());
  /* 11e83a9c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e83a9e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e83aa1:;
  /* 11e83aa1 pop ebx */
  EBX = (pop32());
  /* 11e83aa2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e83aa3 ret  */
  ESPCHK(0x11e8395cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa4 @ 0x11e83aa4 (93 bytes, 30 insns) */
void f_11e83aa4(void) {
  FTRACE(0x11e83aa4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e83aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83aa8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83aac push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e83ab1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e83ab4 push eax */
  push32((uint32_t)(EAX));
  /* 11e83ab5 call dword ptr [0x11e8a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0a8))), 0x11e83abbu);
  /* 11e83abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83abd mov dword ptr [0x11e8fda4], eax */
  w32((uint32_t)(0x11e8fda4), (EAX));
  /* 11e83ac2 je 0x11e83afa */
  if (C.zf) goto L_11e83afa;
  /* 11e83ac4 call 0x11e8395c */
  push32(0x11e83ac9u); f_11e8395c();
  /* 11e83ac9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83acc mov dword ptr [0x11e8fda8], eax */
  w32((uint32_t)(0x11e8fda8), (EAX));
  /* 11e83ad1 jne 0x11e83ae0 */
  if (!C.zf) goto L_11e83ae0;
  /* 11e83ad3 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11e83ad8 call 0x11e845c0 */
  push32(0x11e83addu); f_11e845c0();
  /* 11e83add pop ecx */
  ECX = (pop32());
  /* 11e83ade jmp 0x11e83aea */
  goto L_11e83aea;
L_11e83ae0:;
  /* 11e83ae0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83ae3 jne 0x11e83afd */
  if (!C.zf) goto L_11e83afd;
  /* 11e83ae5 call 0x11e85107 */
  push32(0x11e83aeau); f_11e85107();
L_11e83aea:;
  /* 11e83aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83aec jne 0x11e83afd */
  if (!C.zf) goto L_11e83afd;
  /* 11e83aee push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e83af4 call dword ptr [0x11e8a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0a4))), 0x11e83afau);
L_11e83afa:;
  /* 11e83afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e83afc ret  */
  ESPCHK(0x11e83aa4u, _esp0);
  ESP += 4; return;
L_11e83afd:;
  /* 11e83afd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e83aff pop eax */
  EAX = (pop32());
  /* 11e83b00 ret  */
  ESPCHK(0x11e83aa4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b01 @ 0x11e83b01 (168 bytes, 56 insns) */
void f_11e83b01(void) {
  FTRACE(0x11e83b01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83b01 mov eax, dword ptr [0x11e8fda8] */
  EAX = (r32((uint32_t)(0x11e8fda8)));
  /* 11e83b06 push esi */
  push32((uint32_t)(ESI));
  /* 11e83b07 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83b0a push edi */
  push32((uint32_t)(EDI));
  /* 11e83b0b jne 0x11e83b73 */
  if (!C.zf) goto L_11e83b73;
  /* 11e83b0d push ebx */
  push32((uint32_t)(EBX));
  /* 11e83b0e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e83b10 cmp dword ptr [0x11e8fd98], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fd98))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83b16 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83b17 mov ebp, dword ptr [0x11e8a09c] */
  EBP = (r32((uint32_t)(0x11e8a09c)));
  /* 11e83b1d jle 0x11e83b5f */
  if ((C.zf||C.sf!=C.of)) goto L_11e83b5f;
  /* 11e83b1f mov eax, dword ptr [0x11e8fd9c] */
  EAX = (r32((uint32_t)(0x11e8fd9c)));
  /* 11e83b24 mov edi, dword ptr [0x11e8a060] */
  EDI = (r32((uint32_t)(0x11e8a060)));
  /* 11e83b2a lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11e83b2d:;
  /* 11e83b2d push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e83b32 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11e83b37 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e83b39 call edi */
  call_ind((uint32_t)(EDI), 0x11e83b3bu);
  /* 11e83b3b push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e83b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83b42 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e83b44 call edi */
  call_ind((uint32_t)(EDI), 0x11e83b46u);
  /* 11e83b46 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11e83b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83b4b push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e83b51 call ebp */
  call_ind((uint32_t)(EBP), 0x11e83b53u);
  /* 11e83b53 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83b56 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e83b57 cmp ebx, dword ptr [0x11e8fd98] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11e8fd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83b5d jl 0x11e83b2d */
  if ((C.sf!=C.of)) goto L_11e83b2d;
L_11e83b5f:;
  /* 11e83b5f push dword ptr [0x11e8fd9c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fd9c))));
  /* 11e83b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83b67 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e83b6d call ebp */
  call_ind((uint32_t)(EBP), 0x11e83b6fu);
  /* 11e83b6f pop ebp */
  EBP = (pop32());
  /* 11e83b70 pop ebx */
  EBX = (pop32());
  /* 11e83b71 jmp 0x11e83b9a */
  goto L_11e83b9a;
L_11e83b73:;
  /* 11e83b73 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83b76 jne 0x11e83b9a */
  if (!C.zf) goto L_11e83b9a;
  /* 11e83b78 mov edi, 0x11e8cb30 */
  EDI = (0x11e8cb30u);
  /* 11e83b7d mov esi, edi */
  ESI = (EDI);
L_11e83b7f:;
  /* 11e83b7f mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11e83b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83b84 je 0x11e83b94 */
  if (C.zf) goto L_11e83b94;
  /* 11e83b86 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e83b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83b8d push eax */
  push32((uint32_t)(EAX));
  /* 11e83b8e call dword ptr [0x11e8a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a060))), 0x11e83b94u);
L_11e83b94:;
  /* 11e83b94 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11e83b96 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83b98 jne 0x11e83b7f */
  if (!C.zf) goto L_11e83b7f;
L_11e83b9a:;
  /* 11e83b9a push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e83ba0 call dword ptr [0x11e8a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0a4))), 0x11e83ba6u);
  /* 11e83ba6 pop edi */
  EDI = (pop32());
  /* 11e83ba7 pop esi */
  ESI = (pop32());
  /* 11e83ba8 ret  */
  ESPCHK(0x11e83b01u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba9 @ 0x11e83ba9 (57 bytes, 18 insns) */
void f_11e83ba9(void) {
  FTRACE(0x11e83ba9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83ba9 mov eax, dword ptr [0x11e8f7e4] */
  EAX = (r32((uint32_t)(0x11e8f7e4)));
  /* 11e83bae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83bb1 je 0x11e83bc0 */
  if (C.zf) goto L_11e83bc0;
  /* 11e83bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83bb5 jne 0x11e83be1 */
  if (!C.zf) goto L_11e83be1;
  /* 11e83bb7 cmp dword ptr [0x11e8f7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8f7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83bbe jne 0x11e83be1 */
  if (!C.zf) goto L_11e83be1;
L_11e83bc0:;
  /* 11e83bc0 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11e83bc5 call 0x11e83be2 */
  push32(0x11e83bcau); f_11e83be2();
  /* 11e83bca mov eax, dword ptr [0x11e8f944] */
  EAX = (r32((uint32_t)(0x11e8f944)));
  /* 11e83bcf pop ecx */
  ECX = (pop32());
  /* 11e83bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83bd2 je 0x11e83bd6 */
  if (C.zf) goto L_11e83bd6;
  /* 11e83bd4 call eax */
  call_ind((uint32_t)(EAX), 0x11e83bd6u);
L_11e83bd6:;
  /* 11e83bd6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11e83bdb call 0x11e83be2 */
  push32(0x11e83be0u); f_11e83be2();
  /* 11e83be0 pop ecx */
  ECX = (pop32());
L_11e83be1:;
  /* 11e83be1 ret  */
  ESPCHK(0x11e83ba9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003be2 @ 0x11e83be2 (339 bytes, 100 insns) */
void f_11e83be2(void) {
  FTRACE(0x11e83be2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83be2 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83be3 mov ebp, esp */
  EBP = (ESP);
  /* 11e83be5 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e83beb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e83bee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e83bf0 mov eax, 0x11e8c838 */
  EAX = (0x11e8c838u);
L_11e83bf5:;
  /* 11e83bf5 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83bf7 je 0x11e83c04 */
  if (C.zf) goto L_11e83c04;
  /* 11e83bf9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83bfc inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e83bfd cmp eax, 0x11e8c8c8 */
  { uint32_t _a=(EAX),_b=(0x11e8c8c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83c02 jl 0x11e83bf5 */
  if ((C.sf!=C.of)) goto L_11e83bf5;
L_11e83c04:;
  /* 11e83c04 push esi */
  push32((uint32_t)(ESI));
  /* 11e83c05 mov esi, ecx */
  ESI = (ECX);
  /* 11e83c07 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11e83c0a cmp edx, dword ptr [esi + 0x11e8c838] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11e8c838))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83c10 jne 0x11e83d32 */
  if (!C.zf) goto L_11e83d32;
  /* 11e83c16 mov eax, dword ptr [0x11e8f7e4] */
  EAX = (r32((uint32_t)(0x11e8f7e4)));
  /* 11e83c1b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83c1e je 0x11e83d0c */
  if (C.zf) goto L_11e83d0c;
  /* 11e83c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83c26 jne 0x11e83c35 */
  if (!C.zf) goto L_11e83c35;
  /* 11e83c28 cmp dword ptr [0x11e8f7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8f7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83c2f je 0x11e83d0c */
  if (C.zf) goto L_11e83d0c;
L_11e83c35:;
  /* 11e83c35 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83c3b je 0x11e83d32 */
  if (C.zf) goto L_11e83d32;
  /* 11e83c41 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11e83c47 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11e83c4c push eax */
  push32((uint32_t)(EAX));
  /* 11e83c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83c4f call dword ptr [0x11e8a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0d0))), 0x11e83c55u);
  /* 11e83c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83c57 jne 0x11e83c6c */
  if (!C.zf) goto L_11e83c6c;
  /* 11e83c59 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11e83c5f push 0x11e8a574 */
  push32((uint32_t)(0x11e8a574u));
  /* 11e83c64 push eax */
  push32((uint32_t)(EAX));
  /* 11e83c65 call 0x11e86920 */
  push32(0x11e83c6au); f_11e86920();
  /* 11e83c6a pop ecx */
  ECX = (pop32());
  /* 11e83c6b pop ecx */
  ECX = (pop32());
L_11e83c6c:;
  /* 11e83c6c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11e83c72 push edi */
  push32((uint32_t)(EDI));
  /* 11e83c73 push eax */
  push32((uint32_t)(EAX));
  /* 11e83c74 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11e83c7a call 0x11e85f30 */
  push32(0x11e83c7fu); f_11e85f30();
  /* 11e83c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e83c80 pop ecx */
  ECX = (pop32());
  /* 11e83c81 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83c84 jbe 0x11e83caf */
  if ((C.cf||C.zf)) goto L_11e83caf;
  /* 11e83c86 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11e83c8c push eax */
  push32((uint32_t)(EAX));
  /* 11e83c8d call 0x11e85f30 */
  push32(0x11e83c92u); f_11e85f30();
  /* 11e83c92 mov edi, eax */
  EDI = (EAX);
  /* 11e83c94 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11e83c9a sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e83c9d push 3 */
  push32((uint32_t)(0x3u));
  /* 11e83c9f add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83ca1 push 0x11e8a570 */
  push32((uint32_t)(0x11e8a570u));
  /* 11e83ca6 push edi */
  push32((uint32_t)(EDI));
  /* 11e83ca7 call 0x11e87960 */
  push32(0x11e83cacu); f_11e87960();
  /* 11e83cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e83caf:;
  /* 11e83caf lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11e83cb5 push 0x11e8a554 */
  push32((uint32_t)(0x11e8a554u));
  /* 11e83cba push eax */
  push32((uint32_t)(EAX));
  /* 11e83cbb call 0x11e86920 */
  push32(0x11e83cc0u); f_11e86920();
  /* 11e83cc0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11e83cc6 push edi */
  push32((uint32_t)(EDI));
  /* 11e83cc7 push eax */
  push32((uint32_t)(EAX));
  /* 11e83cc8 call 0x11e86930 */
  push32(0x11e83ccdu); f_11e86930();
  /* 11e83ccd lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11e83cd3 push 0x11e8c320 */
  push32((uint32_t)(0x11e8c320u));
  /* 11e83cd8 push eax */
  push32((uint32_t)(EAX));
  /* 11e83cd9 call 0x11e86930 */
  push32(0x11e83cdeu); f_11e86930();
  /* 11e83cde push dword ptr [esi + 0x11e8c83c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11e8c83c))));
  /* 11e83ce4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11e83cea push eax */
  push32((uint32_t)(EAX));
  /* 11e83ceb call 0x11e86930 */
  push32(0x11e83cf0u); f_11e86930();
  /* 11e83cf0 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11e83cf5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11e83cfb push 0x11e8a52c */
  push32((uint32_t)(0x11e8a52cu));
  /* 11e83d00 push eax */
  push32((uint32_t)(EAX));
  /* 11e83d01 call 0x11e878cf */
  push32(0x11e83d06u); f_11e878cf();
  /* 11e83d06 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83d09 pop edi */
  EDI = (pop32());
  /* 11e83d0a jmp 0x11e83d32 */
  goto L_11e83d32;
L_11e83d0c:;
  /* 11e83d0c lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e83d0f lea esi, [esi + 0x11e8c83c] */
  ESI = ((uint32_t)(ESI + 0x11e8c83c));
  /* 11e83d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e83d17 push eax */
  push32((uint32_t)(EAX));
  /* 11e83d18 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e83d1a call 0x11e85f30 */
  push32(0x11e83d1fu); f_11e85f30();
  /* 11e83d1f pop ecx */
  ECX = (pop32());
  /* 11e83d20 push eax */
  push32((uint32_t)(EAX));
  /* 11e83d21 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e83d23 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e83d25 call dword ptr [0x11e8a0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a0c0))), 0x11e83d2bu);
  /* 11e83d2b push eax */
  push32((uint32_t)(EAX));
  /* 11e83d2c call dword ptr [0x11e8a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a05c))), 0x11e83d32u);
L_11e83d32:;
  /* 11e83d32 pop esi */
  ESI = (pop32());
  /* 11e83d33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e83d34 ret  */
  ESPCHK(0x11e83be2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d35 @ 0x11e83d35 (289 bytes, 98 insns) */
void f_11e83d35(void) {
  FTRACE(0x11e83d35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83d35 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83d36 mov ebp, esp */
  EBP = (ESP);
  /* 11e83d38 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e83d3a push 0x11e8a590 */
  push32((uint32_t)(0x11e8a590u));
  /* 11e83d3f push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e83d44 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e83d4a push eax */
  push32((uint32_t)(EAX));
  /* 11e83d4b mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e83d52 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e83d55 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83d56 push esi */
  push32((uint32_t)(ESI));
  /* 11e83d57 push edi */
  push32((uint32_t)(EDI));
  /* 11e83d58 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e83d5b imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e83d5f mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11e83d62 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11e83d65 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83d68 ja 0x11e83d7e */
  if ((!C.cf&&!C.zf)) goto L_11e83d7e;
  /* 11e83d6a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e83d6c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83d6e jne 0x11e83d73 */
  if (!C.zf) goto L_11e83d73;
  /* 11e83d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e83d72 pop esi */
  ESI = (pop32());
L_11e83d73:;
  /* 11e83d73 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83d76 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e83d79 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11e83d7c jmp 0x11e83d80 */
  goto L_11e83d80;
L_11e83d7e:;
  /* 11e83d7e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11e83d80:;
  /* 11e83d80 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11e83d83 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83d86 ja 0x11e83e34 */
  if ((!C.cf&&!C.zf)) goto L_11e83e34;
  /* 11e83d8c mov eax, dword ptr [0x11e8fda8] */
  EAX = (r32((uint32_t)(0x11e8fda8)));
  /* 11e83d91 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83d94 jne 0x11e83dd7 */
  if (!C.zf) goto L_11e83dd7;
  /* 11e83d96 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e83d99 cmp edi, dword ptr [0x11e8fda0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11e8fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83d9f ja 0x11e83e1d */
  if ((!C.cf&&!C.zf)) goto L_11e83e1d;
  /* 11e83da1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83da3 call 0x11e83f07 */
  push32(0x11e83da8u); f_11e83f07();
  /* 11e83da8 pop ecx */
  ECX = (pop32());
  /* 11e83da9 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11e83dac push edi */
  push32((uint32_t)(EDI));
  /* 11e83dad call 0x11e8495c */
  push32(0x11e83db2u); f_11e8495c();
  /* 11e83db2 pop ecx */
  ECX = (pop32());
  /* 11e83db3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e83db6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e83dba call 0x11e83dce */
  push32(0x11e83dbfu); f_11e83dce();
  /* 11e83dbf cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83dc2 je 0x11e83e22 */
  if (C.zf) goto L_11e83e22;
  /* 11e83dc4 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11e83dc7 jmp 0x11e83e11 */
  goto L_11e83e11;
  /* 11e83dc9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e83dcb mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e83dce push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83dd0 call 0x11e83f68 */
  push32(0x11e83dd5u); f_11e83f68();
  /* 11e83dd5 pop ecx */
  ECX = (pop32());
  /* 11e83dd6 ret  */
  ESPCHK(0x11e83d35u, _esp0);
  ESP += 4; return;
L_11e83dd7:;
  /* 11e83dd7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83dda jne 0x11e83e1d */
  if (!C.zf) goto L_11e83e1d;
  /* 11e83ddc cmp esi, dword ptr [0x11e8eb54] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8eb54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83de2 ja 0x11e83e1d */
  if ((!C.cf&&!C.zf)) goto L_11e83e1d;
  /* 11e83de4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83de6 call 0x11e83f07 */
  push32(0x11e83debu); f_11e83f07();
  /* 11e83deb pop ecx */
  ECX = (pop32());
  /* 11e83dec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e83df3 mov eax, esi */
  EAX = (ESI);
  /* 11e83df5 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e83df8 push eax */
  push32((uint32_t)(EAX));
  /* 11e83df9 call 0x11e853ff */
  push32(0x11e83dfeu); f_11e853ff();
  /* 11e83dfe pop ecx */
  ECX = (pop32());
  /* 11e83dff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e83e02 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e83e06 call 0x11e83e57 */
  push32(0x11e83e0bu); f_11e83e57();
  /* 11e83e0b cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83e0e je 0x11e83e22 */
  if (C.zf) goto L_11e83e22;
  /* 11e83e10 push esi */
  push32((uint32_t)(ESI));
L_11e83e11:;
  /* 11e83e11 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83e12 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11e83e15 call 0x11e86a10 */
  push32(0x11e83e1au); f_11e86a10();
  /* 11e83e1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e83e1d:;
  /* 11e83e1d cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83e20 jne 0x11e83e60 */
  if (!C.zf) { jmp_ind(0x11e83e60u); return; }
L_11e83e22:;
  /* 11e83e22 push esi */
  push32((uint32_t)(ESI));
  /* 11e83e23 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e83e25 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e83e2b call dword ptr [0x11e8a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a058))), 0x11e83e31u);
  /* 11e83e31 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11e83e34:;
  /* 11e83e34 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83e37 jne 0x11e83e60 */
  if (!C.zf) { jmp_ind(0x11e83e60u); return; }
  /* 11e83e39 cmp dword ptr [0x11e8fa80], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa80))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83e3f je 0x11e83e60 */
  if (C.zf) { jmp_ind(0x11e83e60u); return; }
  /* 11e83e41 push esi */
  push32((uint32_t)(ESI));
  /* 11e83e42 call 0x11e87a5e */
  push32(0x11e83e47u); f_11e87a5e();
  /* 11e83e47 pop ecx */
  ECX = (pop32());
  /* 11e83e48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83e4a jne 0x11e83d80 */
  if (!C.zf) goto L_11e83d80;
  /* 11e83e50 jmp 0x11e83e63 */
  jmp_ind(0x11e83e63u); return;
  /* 11e83e52 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10003dce @ 0x11e83dce (9 bytes, 4 insns) */
void f_11e83dce(void) {
  FTRACE(0x11e83dceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83dce push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83dd0 call 0x11e83f68 */
  push32(0x11e83dd5u); f_11e83f68();
  /* 11e83dd5 pop ecx */
  ECX = (pop32());
  /* 11e83dd6 ret  */
  ESPCHK(0x11e83dceu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e57 @ 0x11e83e57 (9 bytes, 4 insns) */
void f_11e83e57(void) {
  FTRACE(0x11e83e57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83e57 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e83e59 call 0x11e83f68 */
  push32(0x11e83e5eu); f_11e83f68();
  /* 11e83e5e pop ecx */
  ECX = (pop32());
  /* 11e83e5f ret  */
  ESPCHK(0x11e83e57u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e72 @ 0x11e83e72 (41 bytes, 12 insns) */
void f_11e83e72(void) {
  FTRACE(0x11e83e72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83e72 push esi */
  push32((uint32_t)(ESI));
  /* 11e83e73 mov esi, dword ptr [0x11e8a004] */
  ESI = (r32((uint32_t)(0x11e8a004)));
  /* 11e83e79 push dword ptr [0x11e8c90c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c90c))));
  /* 11e83e7f call esi */
  call_ind((uint32_t)(ESI), 0x11e83e81u);
  /* 11e83e81 push dword ptr [0x11e8c8fc] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c8fc))));
  /* 11e83e87 call esi */
  call_ind((uint32_t)(ESI), 0x11e83e89u);
  /* 11e83e89 push dword ptr [0x11e8c8ec] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c8ec))));
  /* 11e83e8f call esi */
  call_ind((uint32_t)(ESI), 0x11e83e91u);
  /* 11e83e91 push dword ptr [0x11e8c8cc] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c8cc))));
  /* 11e83e97 call esi */
  call_ind((uint32_t)(ESI), 0x11e83e99u);
  /* 11e83e99 pop esi */
  ESI = (pop32());
  /* 11e83e9a ret  */
  ESPCHK(0x11e83e72u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e9b @ 0x11e83e9b (108 bytes, 34 insns) */
void f_11e83e9b(void) {
  FTRACE(0x11e83e9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83e9b push esi */
  push32((uint32_t)(ESI));
  /* 11e83e9c push edi */
  push32((uint32_t)(EDI));
  /* 11e83e9d mov edi, dword ptr [0x11e8a0cc] */
  EDI = (r32((uint32_t)(0x11e8a0cc)));
  /* 11e83ea3 mov esi, 0x11e8c8c8 */
  ESI = (0x11e8c8c8u);
L_11e83ea8:;
  /* 11e83ea8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e83eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e83eac je 0x11e83ed9 */
  if (C.zf) goto L_11e83ed9;
  /* 11e83eae cmp esi, 0x11e8c90c */
  { uint32_t _a=(ESI),_b=(0x11e8c90cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83eb4 je 0x11e83ed9 */
  if (C.zf) goto L_11e83ed9;
  /* 11e83eb6 cmp esi, 0x11e8c8fc */
  { uint32_t _a=(ESI),_b=(0x11e8c8fcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83ebc je 0x11e83ed9 */
  if (C.zf) goto L_11e83ed9;
  /* 11e83ebe cmp esi, 0x11e8c8ec */
  { uint32_t _a=(ESI),_b=(0x11e8c8ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83ec4 je 0x11e83ed9 */
  if (C.zf) goto L_11e83ed9;
  /* 11e83ec6 cmp esi, 0x11e8c8cc */
  { uint32_t _a=(ESI),_b=(0x11e8c8ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83ecc je 0x11e83ed9 */
  if (C.zf) goto L_11e83ed9;
  /* 11e83ece push eax */
  push32((uint32_t)(EAX));
  /* 11e83ecf call edi */
  call_ind((uint32_t)(EDI), 0x11e83ed1u);
  /* 11e83ed1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e83ed3 call 0x11e829ff */
  push32(0x11e83ed8u); f_11e829ff();
  /* 11e83ed8 pop ecx */
  ECX = (pop32());
L_11e83ed9:;
  /* 11e83ed9 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e83edc cmp esi, 0x11e8c988 */
  { uint32_t _a=(ESI),_b=(0x11e8c988u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83ee2 jl 0x11e83ea8 */
  if ((C.sf!=C.of)) goto L_11e83ea8;
  /* 11e83ee4 push dword ptr [0x11e8c8ec] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c8ec))));
  /* 11e83eea call edi */
  call_ind((uint32_t)(EDI), 0x11e83eecu);
  /* 11e83eec push dword ptr [0x11e8c8fc] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c8fc))));
  /* 11e83ef2 call edi */
  call_ind((uint32_t)(EDI), 0x11e83ef4u);
  /* 11e83ef4 push dword ptr [0x11e8c90c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c90c))));
  /* 11e83efa call edi */
  call_ind((uint32_t)(EDI), 0x11e83efcu);
  /* 11e83efc push dword ptr [0x11e8c8cc] */
  push32((uint32_t)(r32((uint32_t)(0x11e8c8cc))));
  /* 11e83f02 call edi */
  call_ind((uint32_t)(EDI), 0x11e83f04u);
  /* 11e83f04 pop edi */
  EDI = (pop32());
  /* 11e83f05 pop esi */
  ESI = (pop32());
  /* 11e83f06 ret  */
  ESPCHK(0x11e83e9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f07 @ 0x11e83f07 (97 bytes, 37 insns) */
void f_11e83f07(void) {
  FTRACE(0x11e83f07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83f07 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83f08 mov ebp, esp */
  EBP = (ESP);
  /* 11e83f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e83f0d push esi */
  push32((uint32_t)(ESI));
  /* 11e83f0e cmp dword ptr [eax*4 + 0x11e8c8c8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11e8c8c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83f16 lea esi, [eax*4 + 0x11e8c8c8] */
  ESI = ((uint32_t)(EAX*4 + 0x11e8c8c8));
  /* 11e83f1d jne 0x11e83f5d */
  if (!C.zf) goto L_11e83f5d;
  /* 11e83f1f push edi */
  push32((uint32_t)(EDI));
  /* 11e83f20 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11e83f22 call 0x11e85dee */
  push32(0x11e83f27u); f_11e85dee();
  /* 11e83f27 mov edi, eax */
  EDI = (EAX);
  /* 11e83f29 pop ecx */
  ECX = (pop32());
  /* 11e83f2a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e83f2c jne 0x11e83f36 */
  if (!C.zf) goto L_11e83f36;
  /* 11e83f2e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e83f30 call 0x11e8261e */
  push32(0x11e83f35u); f_11e8261e();
  /* 11e83f35 pop ecx */
  ECX = (pop32());
L_11e83f36:;
  /* 11e83f36 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e83f38 call 0x11e83f07 */
  push32(0x11e83f3du); f_11e83f07();
  /* 11e83f3d cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83f40 pop ecx */
  ECX = (pop32());
  /* 11e83f41 push edi */
  push32((uint32_t)(EDI));
  /* 11e83f42 jne 0x11e83f4e */
  if (!C.zf) goto L_11e83f4e;
  /* 11e83f44 call dword ptr [0x11e8a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a004))), 0x11e83f4au);
  /* 11e83f4a mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11e83f4c jmp 0x11e83f54 */
  goto L_11e83f54;
L_11e83f4e:;
  /* 11e83f4e call 0x11e829ff */
  push32(0x11e83f53u); f_11e829ff();
  /* 11e83f53 pop ecx */
  ECX = (pop32());
L_11e83f54:;
  /* 11e83f54 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e83f56 call 0x11e83f68 */
  push32(0x11e83f5bu); f_11e83f68();
  /* 11e83f5b pop ecx */
  ECX = (pop32());
  /* 11e83f5c pop edi */
  EDI = (pop32());
L_11e83f5d:;
  /* 11e83f5d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11e83f5f call dword ptr [0x11e8a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a094))), 0x11e83f65u);
  /* 11e83f65 pop esi */
  ESI = (pop32());
  /* 11e83f66 pop ebp */
  EBP = (pop32());
  /* 11e83f67 ret  */
  ESPCHK(0x11e83f07u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f68 @ 0x11e83f68 (21 bytes, 7 insns) */
void f_11e83f68(void) {
  FTRACE(0x11e83f68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83f68 push ebp */
  push32((uint32_t)(EBP));
  /* 11e83f69 mov ebp, esp */
  EBP = (ESP);
  /* 11e83f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e83f6e push dword ptr [eax*4 + 0x11e8c8c8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11e8c8c8))));
  /* 11e83f75 call dword ptr [0x11e8a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a098))), 0x11e83f7bu);
  /* 11e83f7b pop ebp */
  EBP = (pop32());
  /* 11e83f7c ret  */
  ESPCHK(0x11e83f68u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f7d @ 0x11e83f7d (46 bytes, 13 insns) */
void f_11e83f7d(void) {
  FTRACE(0x11e83f7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83f7d cmp dword ptr [0x11e8fa60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83f84 jne 0x11e83faa */
  if (!C.zf) goto L_11e83faa;
  /* 11e83f86 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e83f88 call 0x11e83f07 */
  push32(0x11e83f8du); f_11e83f07();
  /* 11e83f8d cmp dword ptr [0x11e8fa60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83f94 pop ecx */
  ECX = (pop32());
  /* 11e83f95 jne 0x11e83fa2 */
  if (!C.zf) goto L_11e83fa2;
  /* 11e83f97 call 0x11e83fab */
  push32(0x11e83f9cu); f_11e83fab();
  /* 11e83f9c inc dword ptr [0x11e8fa60] */
  { uint32_t _r=(r32((uint32_t)(0x11e8fa60)))+1; w32((uint32_t)(0x11e8fa60), (_r)); fl_inc(_r,32); }
L_11e83fa2:;
  /* 11e83fa2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e83fa4 call 0x11e83f68 */
  push32(0x11e83fa9u); f_11e83f68();
  /* 11e83fa9 pop ecx */
  ECX = (pop32());
L_11e83faa:;
  /* 11e83faa ret  */
  ESPCHK(0x11e83f7du, _esp0);
  ESP += 4; return;
}

/* FUN_10003fab @ 0x11e83fab (647 bytes, 207 insns) */
void f_11e83fab(void) {
  FTRACE(0x11e83fabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e83fab push ebp */
  push32((uint32_t)(EBP));
  /* 11e83fac mov ebp, esp */
  EBP = (ESP);
  /* 11e83fae push ecx */
  push32((uint32_t)(ECX));
  /* 11e83faf push ecx */
  push32((uint32_t)(ECX));
  /* 11e83fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e83fb1 push esi */
  push32((uint32_t)(ESI));
  /* 11e83fb2 push edi */
  push32((uint32_t)(EDI));
  /* 11e83fb3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e83fb5 pop edi */
  EDI = (pop32());
  /* 11e83fb6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e83fb8 push edi */
  push32((uint32_t)(EDI));
  /* 11e83fb9 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11e83fbc call 0x11e83f07 */
  push32(0x11e83fc1u); f_11e83f07();
  /* 11e83fc1 or dword ptr [0x11e8cab8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11e8cab8)))|(0xffffffffu); w32((uint32_t)(0x11e8cab8), (_r)); fl_logic(_r,32); }
  /* 11e83fc8 or dword ptr [0x11e8caa8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11e8caa8)))|(0xffffffffu); w32((uint32_t)(0x11e8caa8), (_r)); fl_logic(_r,32); }
  /* 11e83fcf mov dword ptr [0x11e8f9a8], ebx */
  w32((uint32_t)(0x11e8f9a8), (EBX));
  /* 11e83fd5 mov dword ptr [esp], 0x11e8a5e8 */
  w32((uint32_t)(ESP), (0x11e8a5e8u));
  /* 11e83fdc call 0x11e87b94 */
  push32(0x11e83fe1u); f_11e87b94();
  /* 11e83fe1 mov esi, eax */
  ESI = (EAX);
  /* 11e83fe3 pop ecx */
  ECX = (pop32());
  /* 11e83fe4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e83fe6 jne 0x11e840e9 */
  if (!C.zf) goto L_11e840e9;
  /* 11e83fec push edi */
  push32((uint32_t)(EDI));
  /* 11e83fed call 0x11e83f68 */
  push32(0x11e83ff2u); f_11e83f68();
  /* 11e83ff2 mov dword ptr [esp], 0x11e8f9b0 */
  w32((uint32_t)(ESP), (0x11e8f9b0u));
  /* 11e83ff9 call dword ptr [0x11e8a064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a064))), 0x11e83fffu);
  /* 11e83fff cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84002 je 0x11e8422d */
  if (C.zf) goto L_11e8422d;
  /* 11e84008 mov eax, dword ptr [0x11e8f9b0] */
  EAX = (r32((uint32_t)(0x11e8f9b0)));
  /* 11e8400d mov ecx, dword ptr [0x11e8fa04] */
  ECX = (r32((uint32_t)(0x11e8fa04)));
  /* 11e84013 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84016 cmp word ptr [0x11e8f9f6], bx */
  { uint32_t _a=(r16((uint32_t)(0x11e8f9f6))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e8401d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8401f pop edx */
  EDX = (pop32());
  /* 11e84020 mov dword ptr [0x11e8ca10], eax */
  w32((uint32_t)(0x11e8ca10), (EAX));
  /* 11e84025 mov dword ptr [0x11e8f9a8], edx */
  w32((uint32_t)(0x11e8f9a8), (EDX));
  /* 11e8402b je 0x11e84039 */
  if (C.zf) goto L_11e84039;
  /* 11e8402d mov esi, ecx */
  ESI = (ECX);
  /* 11e8402f imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84032 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84034 mov dword ptr [0x11e8ca10], eax */
  w32((uint32_t)(0x11e8ca10), (EAX));
L_11e84039:;
  /* 11e84039 cmp word ptr [0x11e8fa4a], bx */
  { uint32_t _a=(r16((uint32_t)(0x11e8fa4a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e84040 je 0x11e8405d */
  if (C.zf) goto L_11e8405d;
  /* 11e84042 mov eax, dword ptr [0x11e8fa58] */
  EAX = (r32((uint32_t)(0x11e8fa58)));
  /* 11e84047 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84049 je 0x11e8405d */
  if (C.zf) goto L_11e8405d;
  /* 11e8404b sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8404d mov dword ptr [0x11e8ca14], edx */
  w32((uint32_t)(0x11e8ca14), (EDX));
  /* 11e84053 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84056 mov dword ptr [0x11e8ca18], eax */
  w32((uint32_t)(0x11e8ca18), (EAX));
  /* 11e8405b jmp 0x11e84069 */
  goto L_11e84069;
L_11e8405d:;
  /* 11e8405d mov dword ptr [0x11e8ca14], ebx */
  w32((uint32_t)(0x11e8ca14), (EBX));
  /* 11e84063 mov dword ptr [0x11e8ca18], ebx */
  w32((uint32_t)(0x11e8ca18), (EBX));
L_11e84069:;
  /* 11e84069 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11e8406c mov esi, dword ptr [0x11e8a0dc] */
  ESI = (r32((uint32_t)(0x11e8a0dc)));
  /* 11e84072 push eax */
  push32((uint32_t)(EAX));
  /* 11e84073 push ebx */
  push32((uint32_t)(EBX));
  /* 11e84074 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84076 mov edi, 0x220 */
  EDI = (0x220u);
  /* 11e8407b push dword ptr [0x11e8ca9c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8ca9c))));
  /* 11e84081 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e84083 push 0x11e8f9b4 */
  push32((uint32_t)(0x11e8f9b4u));
  /* 11e84088 push edi */
  push32((uint32_t)(EDI));
  /* 11e84089 push dword ptr [0x11e8fa9c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fa9c))));
  /* 11e8408f call esi */
  call_ind((uint32_t)(ESI), 0x11e84091u);
  /* 11e84091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e84093 je 0x11e840a5 */
  if (C.zf) goto L_11e840a5;
  /* 11e84095 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84098 jne 0x11e840a5 */
  if (!C.zf) goto L_11e840a5;
  /* 11e8409a mov eax, dword ptr [0x11e8ca9c] */
  EAX = (r32((uint32_t)(0x11e8ca9c)));
  /* 11e8409f and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11e840a3 jmp 0x11e840ad */
  goto L_11e840ad;
L_11e840a5:;
  /* 11e840a5 mov eax, dword ptr [0x11e8ca9c] */
  EAX = (r32((uint32_t)(0x11e8ca9c)));
  /* 11e840aa and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11e840ad:;
  /* 11e840ad lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11e840b0 push eax */
  push32((uint32_t)(EAX));
  /* 11e840b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11e840b2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e840b4 push dword ptr [0x11e8caa0] */
  push32((uint32_t)(r32((uint32_t)(0x11e8caa0))));
  /* 11e840ba push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e840bc push 0x11e8fa08 */
  push32((uint32_t)(0x11e8fa08u));
  /* 11e840c1 push edi */
  push32((uint32_t)(EDI));
  /* 11e840c2 push dword ptr [0x11e8fa9c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fa9c))));
  /* 11e840c8 call esi */
  call_ind((uint32_t)(ESI), 0x11e840cau);
  /* 11e840ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e840cc je 0x11e8421c */
  if (C.zf) goto L_11e8421c;
  /* 11e840d2 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e840d5 jne 0x11e8421c */
  if (!C.zf) goto L_11e8421c;
  /* 11e840db mov eax, dword ptr [0x11e8caa0] */
  EAX = (r32((uint32_t)(0x11e8caa0)));
  /* 11e840e0 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11e840e4 jmp 0x11e8422d */
  goto L_11e8422d;
L_11e840e9:;
  /* 11e840e9 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e840ec je 0x11e84226 */
  if (C.zf) goto L_11e84226;
  /* 11e840f2 mov eax, dword ptr [0x11e8fa5c] */
  EAX = (r32((uint32_t)(0x11e8fa5c)));
  /* 11e840f7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e840f9 je 0x11e8410c */
  if (C.zf) goto L_11e8410c;
  /* 11e840fb push eax */
  push32((uint32_t)(EAX));
  /* 11e840fc push esi */
  push32((uint32_t)(ESI));
  /* 11e840fd call 0x11e87b10 */
  push32(0x11e84102u); f_11e87b10();
  /* 11e84102 pop ecx */
  ECX = (pop32());
  /* 11e84103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e84105 pop ecx */
  ECX = (pop32());
  /* 11e84106 je 0x11e84226 */
  if (C.zf) goto L_11e84226;
L_11e8410c:;
  /* 11e8410c push dword ptr [0x11e8fa5c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fa5c))));
  /* 11e84112 call 0x11e829ff */
  push32(0x11e84117u); f_11e829ff();
  /* 11e84117 push esi */
  push32((uint32_t)(ESI));
  /* 11e84118 call 0x11e85f30 */
  push32(0x11e8411du); f_11e85f30();
  /* 11e8411d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e8411e push eax */
  push32((uint32_t)(EAX));
  /* 11e8411f call 0x11e85dee */
  push32(0x11e84124u); f_11e85dee();
  /* 11e84124 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84127 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84129 mov dword ptr [0x11e8fa5c], eax */
  w32((uint32_t)(0x11e8fa5c), (EAX));
  /* 11e8412e je 0x11e84226 */
  if (C.zf) goto L_11e84226;
  /* 11e84134 push esi */
  push32((uint32_t)(ESI));
  /* 11e84135 push eax */
  push32((uint32_t)(EAX));
  /* 11e84136 call 0x11e86920 */
  push32(0x11e8413bu); f_11e86920();
  /* 11e8413b push edi */
  push32((uint32_t)(EDI));
  /* 11e8413c call 0x11e83f68 */
  push32(0x11e84141u); f_11e83f68();
  /* 11e84141 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e84143 push esi */
  push32((uint32_t)(ESI));
  /* 11e84144 push dword ptr [0x11e8ca9c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8ca9c))));
  /* 11e8414a call 0x11e87960 */
  push32(0x11e8414fu); f_11e87960();
  /* 11e8414f mov eax, dword ptr [0x11e8ca9c] */
  EAX = (r32((uint32_t)(0x11e8ca9c)));
  /* 11e84154 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84157 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8415a and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11e8415e cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84161 jne 0x11e8416b */
  if (!C.zf) goto L_11e8416b;
  /* 11e84163 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e8416a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11e8416b:;
  /* 11e8416b push esi */
  push32((uint32_t)(ESI));
  /* 11e8416c call 0x11e87a79 */
  push32(0x11e84171u); f_11e87a79();
  /* 11e84171 pop ecx */
  ECX = (pop32());
  /* 11e84172 mov bl, 0x30 */
  BL = (0x30u);
  /* 11e84174 mov ecx, eax */
  ECX = (EAX);
  /* 11e84176 imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8417c mov dword ptr [0x11e8ca10], ecx */
  w32((uint32_t)(0x11e8ca10), (ECX));
L_11e84182:;
  /* 11e84182 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e84184 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84186 je 0x11e84190 */
  if (C.zf) goto L_11e84190;
  /* 11e84188 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8418a jl 0x11e84193 */
  if ((C.sf!=C.of)) goto L_11e84193;
  /* 11e8418c cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8418e jg 0x11e84193 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e84193;
L_11e84190:;
  /* 11e84190 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e84191 jmp 0x11e84182 */
  goto L_11e84182;
L_11e84193:;
  /* 11e84193 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84196 jne 0x11e841e6 */
  if (!C.zf) goto L_11e841e6;
  /* 11e84198 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e84199 push esi */
  push32((uint32_t)(ESI));
  /* 11e8419a call 0x11e87a79 */
  push32(0x11e8419fu); f_11e87a79();
  /* 11e8419f imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e841a2 pop ecx */
  ECX = (pop32());
  /* 11e841a3 mov ecx, dword ptr [0x11e8ca10] */
  ECX = (r32((uint32_t)(0x11e8ca10)));
  /* 11e841a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e841ab mov dword ptr [0x11e8ca10], ecx */
  w32((uint32_t)(0x11e8ca10), (ECX));
L_11e841b1:;
  /* 11e841b1 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e841b3 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e841b5 jl 0x11e841be */
  if ((C.sf!=C.of)) goto L_11e841be;
  /* 11e841b7 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e841b9 jg 0x11e841be */
  if ((!C.zf&&C.sf==C.of)) goto L_11e841be;
  /* 11e841bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e841bc jmp 0x11e841b1 */
  goto L_11e841b1;
L_11e841be:;
  /* 11e841be cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e841c1 jne 0x11e841e6 */
  if (!C.zf) goto L_11e841e6;
  /* 11e841c3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e841c4 push esi */
  push32((uint32_t)(ESI));
  /* 11e841c5 call 0x11e87a79 */
  push32(0x11e841cau); f_11e87a79();
  /* 11e841ca pop ecx */
  ECX = (pop32());
  /* 11e841cb mov ecx, dword ptr [0x11e8ca10] */
  ECX = (r32((uint32_t)(0x11e8ca10)));
  /* 11e841d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e841d3 mov dword ptr [0x11e8ca10], ecx */
  w32((uint32_t)(0x11e8ca10), (ECX));
L_11e841d9:;
  /* 11e841d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e841db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e841dd jl 0x11e841e6 */
  if ((C.sf!=C.of)) goto L_11e841e6;
  /* 11e841df cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e841e1 jg 0x11e841e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e841e6;
  /* 11e841e3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e841e4 jmp 0x11e841d9 */
  goto L_11e841d9;
L_11e841e6:;
  /* 11e841e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e841ea je 0x11e841f4 */
  if (C.zf) goto L_11e841f4;
  /* 11e841ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e841ee mov dword ptr [0x11e8ca10], ecx */
  w32((uint32_t)(0x11e8ca10), (ECX));
L_11e841f4:;
  /* 11e841f4 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11e841f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e841f9 mov dword ptr [0x11e8ca14], eax */
  w32((uint32_t)(0x11e8ca14), (EAX));
  /* 11e841fe je 0x11e8421c */
  if (C.zf) goto L_11e8421c;
  /* 11e84200 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e84202 push esi */
  push32((uint32_t)(ESI));
  /* 11e84203 push dword ptr [0x11e8caa0] */
  push32((uint32_t)(r32((uint32_t)(0x11e8caa0))));
  /* 11e84209 call 0x11e87960 */
  push32(0x11e8420eu); f_11e87960();
  /* 11e8420e mov eax, dword ptr [0x11e8caa0] */
  EAX = (r32((uint32_t)(0x11e8caa0)));
  /* 11e84213 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84216 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11e8421a jmp 0x11e8422d */
  goto L_11e8422d;
L_11e8421c:;
  /* 11e8421c mov eax, dword ptr [0x11e8caa0] */
  EAX = (r32((uint32_t)(0x11e8caa0)));
  /* 11e84221 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11e84224 jmp 0x11e8422d */
  goto L_11e8422d;
L_11e84226:;
  /* 11e84226 push edi */
  push32((uint32_t)(EDI));
  /* 11e84227 call 0x11e83f68 */
  push32(0x11e8422cu); f_11e83f68();
  /* 11e8422c pop ecx */
  ECX = (pop32());
L_11e8422d:;
  /* 11e8422d pop edi */
  EDI = (pop32());
  /* 11e8422e pop esi */
  ESI = (pop32());
  /* 11e8422f pop ebx */
  EBX = (pop32());
  /* 11e84230 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e84231 ret  */
  ESPCHK(0x11e83fabu, _esp0);
  ESP += 4; return;
}

/* FUN_10004232 @ 0x11e84232 (33 bytes, 12 insns) */
void f_11e84232(void) {
  FTRACE(0x11e84232u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84232 push esi */
  push32((uint32_t)(ESI));
  /* 11e84233 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e84235 call 0x11e83f07 */
  push32(0x11e8423au); f_11e83f07();
  /* 11e8423a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11e8423e call 0x11e84253 */
  push32(0x11e84243u); f_11e84253();
  /* 11e84243 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e84245 mov esi, eax */
  ESI = (EAX);
  /* 11e84247 call 0x11e83f68 */
  push32(0x11e8424cu); f_11e83f68();
  /* 11e8424c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8424f mov eax, esi */
  EAX = (ESI);
  /* 11e84251 pop esi */
  ESI = (pop32());
  /* 11e84252 ret  */
  ESPCHK(0x11e84232u, _esp0);
  ESP += 4; return;
}

/* FUN_10004253 @ 0x11e84253 (428 bytes, 149 insns) */
void f_11e84253(void) {
  FTRACE(0x11e84253u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84253 push ebx */
  push32((uint32_t)(EBX));
  /* 11e84254 push esi */
  push32((uint32_t)(ESI));
  /* 11e84255 push edi */
  push32((uint32_t)(EDI));
  /* 11e84256 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e84258 cmp dword ptr [0x11e8ca14], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8ca14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8425e jne 0x11e84267 */
  if (!C.zf) goto L_11e84267;
L_11e84260:;
  /* 11e84260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e84262 jmp 0x11e843b3 */
  goto L_11e843b3;
L_11e84267:;
  /* 11e84267 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11e8426b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e8426d pop ebx */
  EBX = (pop32());
  /* 11e8426e mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11e84271 cmp eax, dword ptr [0x11e8caa8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8caa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84277 jne 0x11e84285 */
  if (!C.zf) goto L_11e84285;
  /* 11e84279 cmp eax, dword ptr [0x11e8cab8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8cab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8427f je 0x11e84387 */
  if (C.zf) goto L_11e84387;
L_11e84285:;
  /* 11e84285 cmp dword ptr [0x11e8f9a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11e8f9a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8428b je 0x11e8435d */
  if (C.zf) goto L_11e8435d;
  /* 11e84291 movzx ecx, word ptr [0x11e8fa56] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa56))));
  /* 11e84298 push ecx */
  push32((uint32_t)(ECX));
  /* 11e84299 cmp word ptr [0x11e8fa48], di */
  { uint32_t _a=(r16((uint32_t)(0x11e8fa48))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e842a0 movzx ecx, word ptr [0x11e8fa54] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa54))));
  /* 11e842a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e842a8 movzx ecx, word ptr [0x11e8fa52] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa52))));
  /* 11e842af push ecx */
  push32((uint32_t)(ECX));
  /* 11e842b0 movzx ecx, word ptr [0x11e8fa50] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa50))));
  /* 11e842b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e842b8 jne 0x11e842d7 */
  if (!C.zf) goto L_11e842d7;
  /* 11e842ba movzx ecx, word ptr [0x11e8fa4c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa4c))));
  /* 11e842c1 push edi */
  push32((uint32_t)(EDI));
  /* 11e842c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e842c3 movzx ecx, word ptr [0x11e8fa4e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa4e))));
  /* 11e842ca push ecx */
  push32((uint32_t)(ECX));
  /* 11e842cb movzx ecx, word ptr [0x11e8fa4a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa4a))));
  /* 11e842d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e842d3 push eax */
  push32((uint32_t)(EAX));
  /* 11e842d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e842d5 jmp 0x11e842eb */
  goto L_11e842eb;
L_11e842d7:;
  /* 11e842d7 movzx ecx, word ptr [0x11e8fa4e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa4e))));
  /* 11e842de push ecx */
  push32((uint32_t)(ECX));
  /* 11e842df push edi */
  push32((uint32_t)(EDI));
  /* 11e842e0 movzx ecx, word ptr [0x11e8fa4a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11e8fa4a))));
  /* 11e842e7 push edi */
  push32((uint32_t)(EDI));
  /* 11e842e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e842e9 push eax */
  push32((uint32_t)(EAX));
  /* 11e842ea push edi */
  push32((uint32_t)(EDI));
L_11e842eb:;
  /* 11e842eb push ebx */
  push32((uint32_t)(EBX));
  /* 11e842ec call 0x11e843ff */
  push32(0x11e842f1u); f_11e843ff();
  /* 11e842f1 movzx eax, word ptr [0x11e8fa02] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8fa02))));
  /* 11e842f8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e842fb cmp word ptr [0x11e8f9f4], di */
  { uint32_t _a=(r16((uint32_t)(0x11e8f9f4))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11e84302 push eax */
  push32((uint32_t)(EAX));
  /* 11e84303 movzx eax, word ptr [0x11e8fa00] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8fa00))));
  /* 11e8430a push eax */
  push32((uint32_t)(EAX));
  /* 11e8430b movzx eax, word ptr [0x11e8f9fe] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9fe))));
  /* 11e84312 push eax */
  push32((uint32_t)(EAX));
  /* 11e84313 movzx eax, word ptr [0x11e8f9fc] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9fc))));
  /* 11e8431a push eax */
  push32((uint32_t)(EAX));
  /* 11e8431b jne 0x11e84345 */
  if (!C.zf) goto L_11e84345;
  /* 11e8431d movzx eax, word ptr [0x11e8f9f8] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9f8))));
  /* 11e84324 push edi */
  push32((uint32_t)(EDI));
  /* 11e84325 push eax */
  push32((uint32_t)(EAX));
  /* 11e84326 movzx eax, word ptr [0x11e8f9fa] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9fa))));
  /* 11e8432d push eax */
  push32((uint32_t)(EAX));
  /* 11e8432e movzx eax, word ptr [0x11e8f9f6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9f6))));
  /* 11e84335 push eax */
  push32((uint32_t)(EAX));
  /* 11e84336 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11e84339 push ebx */
  push32((uint32_t)(EBX));
L_11e8433a:;
  /* 11e8433a push edi */
  push32((uint32_t)(EDI));
  /* 11e8433b call 0x11e843ff */
  push32(0x11e84340u); f_11e843ff();
  /* 11e84340 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84343 jmp 0x11e84387 */
  goto L_11e84387;
L_11e84345:;
  /* 11e84345 movzx eax, word ptr [0x11e8f9fa] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9fa))));
  /* 11e8434c push eax */
  push32((uint32_t)(EAX));
  /* 11e8434d push edi */
  push32((uint32_t)(EDI));
  /* 11e8434e movzx eax, word ptr [0x11e8f9f6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11e8f9f6))));
  /* 11e84355 push edi */
  push32((uint32_t)(EDI));
  /* 11e84356 push eax */
  push32((uint32_t)(EAX));
  /* 11e84357 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11e8435a push edi */
  push32((uint32_t)(EDI));
  /* 11e8435b jmp 0x11e8433a */
  goto L_11e8433a;
L_11e8435d:;
  /* 11e8435d push edi */
  push32((uint32_t)(EDI));
  /* 11e8435e push edi */
  push32((uint32_t)(EDI));
  /* 11e8435f push edi */
  push32((uint32_t)(EDI));
  /* 11e84360 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e84362 push edi */
  push32((uint32_t)(EDI));
  /* 11e84363 push edi */
  push32((uint32_t)(EDI));
  /* 11e84364 push ebx */
  push32((uint32_t)(EBX));
  /* 11e84365 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e84367 push eax */
  push32((uint32_t)(EAX));
  /* 11e84368 push ebx */
  push32((uint32_t)(EBX));
  /* 11e84369 push ebx */
  push32((uint32_t)(EBX));
  /* 11e8436a call 0x11e843ff */
  push32(0x11e8436fu); f_11e843ff();
  /* 11e8436f push edi */
  push32((uint32_t)(EDI));
  /* 11e84370 push edi */
  push32((uint32_t)(EDI));
  /* 11e84371 push edi */
  push32((uint32_t)(EDI));
  /* 11e84372 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e84374 push edi */
  push32((uint32_t)(EDI));
  /* 11e84375 push edi */
  push32((uint32_t)(EDI));
  /* 11e84376 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e84378 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e8437a push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11e8437d push ebx */
  push32((uint32_t)(EBX));
  /* 11e8437e push edi */
  push32((uint32_t)(EDI));
  /* 11e8437f call 0x11e843ff */
  push32(0x11e84384u); f_11e843ff();
  /* 11e84384 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e84387:;
  /* 11e84387 mov edx, dword ptr [0x11e8caac] */
  EDX = (r32((uint32_t)(0x11e8caac)));
  /* 11e8438d mov eax, dword ptr [0x11e8cabc] */
  EAX = (r32((uint32_t)(0x11e8cabc)));
  /* 11e84392 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11e84395 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84397 jge 0x11e843b7 */
  if ((C.sf==C.of)) goto L_11e843b7;
  /* 11e84399 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8439b jl 0x11e84260 */
  if ((C.sf!=C.of)) goto L_11e84260;
  /* 11e843a1 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843a3 jg 0x11e84260 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e84260;
  /* 11e843a9 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843ab jle 0x11e843cb */
  if ((C.zf||C.sf!=C.of)) goto L_11e843cb;
  /* 11e843ad cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843af jge 0x11e843cb */
  if ((C.sf==C.of)) goto L_11e843cb;
L_11e843b1:;
  /* 11e843b1 mov eax, ebx */
  EAX = (EBX);
L_11e843b3:;
  /* 11e843b3 pop edi */
  EDI = (pop32());
  /* 11e843b4 pop esi */
  ESI = (pop32());
  /* 11e843b5 pop ebx */
  EBX = (pop32());
  /* 11e843b6 ret  */
  ESPCHK(0x11e84253u, _esp0);
  ESP += 4; return;
L_11e843b7:;
  /* 11e843b7 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843b9 jl 0x11e843b1 */
  if ((C.sf!=C.of)) goto L_11e843b1;
  /* 11e843bb cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843bd jg 0x11e843b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e843b1;
  /* 11e843bf cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843c1 jle 0x11e843cb */
  if ((C.zf||C.sf!=C.of)) goto L_11e843cb;
  /* 11e843c3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843c5 jl 0x11e84260 */
  if ((C.sf!=C.of)) goto L_11e84260;
L_11e843cb:;
  /* 11e843cb mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11e843ce imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e843d1 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e843d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e843d7 add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e843d9 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e843df cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843e1 jne 0x11e843f2 */
  if (!C.zf) goto L_11e843f2;
  /* 11e843e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e843e5 cmp eax, dword ptr [0x11e8cab0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843eb setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11e843ee:;
  /* 11e843ee mov eax, ecx */
  EAX = (ECX);
  /* 11e843f0 jmp 0x11e843b3 */
  goto L_11e843b3;
L_11e843f2:;
  /* 11e843f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e843f4 cmp eax, dword ptr [0x11e8cac0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8cac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e843fa setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11e843fd jmp 0x11e843ee */
  goto L_11e843ee;
}

/* FUN_100043ff @ 0x11e843ff (320 bytes, 101 insns) */
void f_11e843ff(void) {
  FTRACE(0x11e843ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e843ff push ebp */
  push32((uint32_t)(EBP));
  /* 11e84400 mov ebp, esp */
  EBP = (ESP);
  /* 11e84402 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84406 push ebx */
  push32((uint32_t)(EBX));
  /* 11e84407 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e8440a push esi */
  push32((uint32_t)(ESI));
  /* 11e8440b jne 0x11e8449a */
  if (!C.zf) goto L_11e8449a;
  /* 11e84411 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e84414 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11e84417 and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11e8441b mov esi, eax */
  ESI = (EAX);
  /* 11e8441d jne 0x11e8442a */
  if (!C.zf) goto L_11e8442a;
  /* 11e8441f shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11e84422 mov eax, dword ptr [esi + 0x11e8cac0] */
  EAX = (r32((uint32_t)(ESI + 0x11e8cac0)));
  /* 11e84428 jmp 0x11e84433 */
  goto L_11e84433;
L_11e8442a:;
  /* 11e8442a shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11e8442d mov eax, dword ptr [esi + 0x11e8caf4] */
  EAX = (r32((uint32_t)(ESI + 0x11e8caf4)));
L_11e84433:;
  /* 11e84433 mov edx, ebx */
  EDX = (EBX);
  /* 11e84435 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11e84438 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8443e lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11e84441 push edi */
  push32((uint32_t)(EDI));
  /* 11e84442 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e84445 mov edi, ecx */
  EDI = (ECX);
  /* 11e84447 push 7 */
  push32((uint32_t)(0x7u));
  /* 11e84449 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8444b lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11e84452 pop edi */
  EDI = (pop32());
  /* 11e84453 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e84454 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e84456 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e84459 pop edi */
  EDI = (pop32());
  /* 11e8445a cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8445d jg 0x11e8446d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e8446d;
  /* 11e8445f imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84462 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84464 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84467 lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11e8446b jmp 0x11e84477 */
  goto L_11e84477;
L_11e8446d:;
  /* 11e8446d imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84470 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84472 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84475 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11e84477:;
  /* 11e84477 cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8447b jne 0x11e844b5 */
  if (!C.zf) goto L_11e844b5;
  /* 11e8447d cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84481 jne 0x11e8448b */
  if (!C.zf) goto L_11e8448b;
  /* 11e84483 mov esi, dword ptr [esi + 0x11e8cac4] */
  ESI = (r32((uint32_t)(ESI + 0x11e8cac4)));
  /* 11e84489 jmp 0x11e84491 */
  goto L_11e84491;
L_11e8448b:;
  /* 11e8448b mov esi, dword ptr [esi + 0x11e8caf8] */
  ESI = (r32((uint32_t)(ESI + 0x11e8caf8)));
L_11e84491:;
  /* 11e84491 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84493 jle 0x11e844b5 */
  if ((C.zf||C.sf!=C.of)) goto L_11e844b5;
  /* 11e84495 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84498 jmp 0x11e844b5 */
  goto L_11e844b5;
L_11e8449a:;
  /* 11e8449a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e8449d test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11e844a0 jne 0x11e844ab */
  if (!C.zf) goto L_11e844ab;
  /* 11e844a2 mov ecx, dword ptr [eax*4 + 0x11e8cac0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e8cac0)));
  /* 11e844a9 jmp 0x11e844b2 */
  goto L_11e844b2;
L_11e844ab:;
  /* 11e844ab mov ecx, dword ptr [eax*4 + 0x11e8caf4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e8caf4)));
L_11e844b2:;
  /* 11e844b2 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11e844b5:;
  /* 11e844b5 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e844b9 jne 0x11e844e6 */
  if (!C.zf) goto L_11e844e6;
  /* 11e844bb mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e844be mov dword ptr [0x11e8caac], ecx */
  w32((uint32_t)(0x11e8caac), (ECX));
  /* 11e844c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e844c7 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e844ca mov dword ptr [0x11e8caa8], ebx */
  w32((uint32_t)(0x11e8caa8), (EBX));
  /* 11e844d0 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e844d3 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e844d6 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e844dc add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e844df mov dword ptr [0x11e8cab0], eax */
  w32((uint32_t)(0x11e8cab0), (EAX));
  /* 11e844e4 jmp 0x11e8453b */
  goto L_11e8453b;
L_11e844e6:;
  /* 11e844e6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e844e9 mov dword ptr [0x11e8cabc], ecx */
  w32((uint32_t)(0x11e8cabc), (ECX));
  /* 11e844ef imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e844f2 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e844f5 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e844f8 add eax, dword ptr [0x11e8ca18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8ca18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e844fe add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84501 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84507 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8450a mov dword ptr [0x11e8cac0], eax */
  w32((uint32_t)(0x11e8cac0), (EAX));
  /* 11e8450f jns 0x11e8451e */
  if (!C.sf) goto L_11e8451e;
  /* 11e84511 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84516 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e84517 mov dword ptr [0x11e8cac0], eax */
  w32((uint32_t)(0x11e8cac0), (EAX));
  /* 11e8451c jmp 0x11e8452f */
  goto L_11e8452f;
L_11e8451e:;
  /* 11e8451e mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11e84523 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84525 jl 0x11e84535 */
  if ((C.sf!=C.of)) goto L_11e84535;
  /* 11e84527 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e8452a mov dword ptr [0x11e8cac0], eax */
  w32((uint32_t)(0x11e8cac0), (EAX));
L_11e8452f:;
  /* 11e8452f mov dword ptr [0x11e8cabc], ecx */
  w32((uint32_t)(0x11e8cabc), (ECX));
L_11e84535:;
  /* 11e84535 mov dword ptr [0x11e8cab8], ebx */
  w32((uint32_t)(0x11e8cab8), (EBX));
L_11e8453b:;
  /* 11e8453b pop esi */
  ESI = (pop32());
  /* 11e8453c pop ebx */
  EBX = (pop32());
  /* 11e8453d pop ebp */
  EBP = (pop32());
  /* 11e8453e ret  */
  ESPCHK(0x11e843ffu, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x11e845c0 (72 bytes, 17 insns) */
void f_11e845c0(void) {
  FTRACE(0x11e845c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e845c0 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11e845c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e845c7 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e845cd call dword ptr [0x11e8a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a058))), 0x11e845d3u);
  /* 11e845d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e845d5 mov dword ptr [0x11e8fd9c], eax */
  w32((uint32_t)(0x11e8fd9c), (EAX));
  /* 11e845da jne 0x11e845dd */
  if (!C.zf) goto L_11e845dd;
  /* 11e845dc ret  */
  ESPCHK(0x11e845c0u, _esp0);
  ESP += 4; return;
L_11e845dd:;
  /* 11e845dd mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e845e1 and dword ptr [0x11e8fd94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11e8fd94)))&(0x0u); w32((uint32_t)(0x11e8fd94), (_r)); fl_logic(_r,32); }
  /* 11e845e8 and dword ptr [0x11e8fd98], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11e8fd98)))&(0x0u); w32((uint32_t)(0x11e8fd98), (_r)); fl_logic(_r,32); }
  /* 11e845ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11e845f1 mov dword ptr [0x11e8fd90], eax */
  w32((uint32_t)(0x11e8fd90), (EAX));
  /* 11e845f6 mov dword ptr [0x11e8fda0], ecx */
  w32((uint32_t)(0x11e8fda0), (ECX));
  /* 11e845fc mov dword ptr [0x11e8fd88], 0x10 */
  w32((uint32_t)(0x11e8fd88), (0x10u));
  /* 11e84606 pop eax */
  EAX = (pop32());
  /* 11e84607 ret  */
  ESPCHK(0x11e845c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004608 @ 0x11e84608 (43 bytes, 14 insns) */
void f_11e84608(void) {
  FTRACE(0x11e84608u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84608 mov eax, dword ptr [0x11e8fd98] */
  EAX = (r32((uint32_t)(0x11e8fd98)));
  /* 11e8460d lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11e84610 mov eax, dword ptr [0x11e8fd9c] */
  EAX = (r32((uint32_t)(0x11e8fd9c)));
  /* 11e84615 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11e84618:;
  /* 11e84618 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8461a jae 0x11e84630 */
  if (!C.cf) goto L_11e84630;
  /* 11e8461c mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e84620 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84623 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84629 jb 0x11e84632 */
  if (C.cf) goto L_11e84632;
  /* 11e8462b add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8462e jmp 0x11e84618 */
  goto L_11e84618;
L_11e84630:;
  /* 11e84630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e84632:;
  /* 11e84632 ret  */
  ESPCHK(0x11e84608u, _esp0);
  ESP += 4; return;
}

/* FUN_10004633 @ 0x11e84633 (809 bytes, 265 insns) */
void f_11e84633(void) {
  FTRACE(0x11e84633u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84633 push ebp */
  push32((uint32_t)(EBP));
  /* 11e84634 mov ebp, esp */
  EBP = (ESP);
  /* 11e84636 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8463c push ebx */
  push32((uint32_t)(EBX));
  /* 11e8463d push esi */
  push32((uint32_t)(ESI));
  /* 11e8463e mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e84641 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e84644 push edi */
  push32((uint32_t)(EDI));
  /* 11e84645 mov edi, esi */
  EDI = (ESI);
  /* 11e84647 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8464a sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8464d shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11e84650 mov ecx, edi */
  ECX = (EDI);
  /* 11e84652 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84658 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e8465f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e84662 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11e84664 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e84665 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11e84668 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e8466b jne 0x11e84957 */
  if (!C.zf) goto L_11e84957;
  /* 11e84671 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11e84674 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11e84677 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e8467a mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11e8467d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e84680 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e84683 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11e84686 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11e84689 jne 0x11e84709 */
  if (!C.zf) goto L_11e84709;
  /* 11e8468b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e8468e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e8468f cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84692 jbe 0x11e84697 */
  if ((C.cf||C.zf)) goto L_11e84697;
  /* 11e84694 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84696 pop edx */
  EDX = (pop32());
L_11e84697:;
  /* 11e84697 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e8469a cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8469d jne 0x11e846eb */
  if (!C.zf) goto L_11e846eb;
  /* 11e8469f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e846a2 jae 0x11e846c2 */
  if (!C.cf) goto L_11e846c2;
  /* 11e846a4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e846a9 mov ecx, edx */
  ECX = (EDX);
  /* 11e846ab shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e846ad lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11e846b1 not ebx */
  EBX = (~(EBX));
  /* 11e846b3 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11e846b7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11e846b9 jne 0x11e846e3 */
  if (!C.zf) goto L_11e846e3;
  /* 11e846bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e846be and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11e846c0 jmp 0x11e846e3 */
  goto L_11e846e3;
L_11e846c2:;
  /* 11e846c2 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11e846c5 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e846ca shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e846cc lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11e846d0 not ebx */
  EBX = (~(EBX));
  /* 11e846d2 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11e846d9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11e846db jne 0x11e846e3 */
  if (!C.zf) goto L_11e846e3;
  /* 11e846dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e846e0 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e846e3:;
  /* 11e846e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e846e6 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e846e9 jmp 0x11e846ee */
  goto L_11e846ee;
L_11e846eb:;
  /* 11e846eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11e846ee:;
  /* 11e846ee mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11e846f1 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e846f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e846f7 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11e846fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e846fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e84700 mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e84703 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e84706 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11e84709:;
  /* 11e84709 mov edx, ecx */
  EDX = (ECX);
  /* 11e8470b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e8470e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e8470f cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84712 jbe 0x11e84717 */
  if ((C.cf||C.zf)) goto L_11e84717;
  /* 11e84714 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84716 pop edx */
  EDX = (pop32());
L_11e84717:;
  /* 11e84717 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e8471a and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11e8471d mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11e84720 jne 0x11e847ba */
  if (!C.zf) goto L_11e847ba;
  /* 11e84726 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84729 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e8472c sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11e8472f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84731 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11e84734 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11e84735 pop esi */
  ESI = (pop32());
  /* 11e84736 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84738 jbe 0x11e8473c */
  if ((C.cf||C.zf)) goto L_11e8473c;
  /* 11e8473a mov ebx, esi */
  EBX = (ESI);
L_11e8473c:;
  /* 11e8473c add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8473f mov edx, ecx */
  EDX = (ECX);
  /* 11e84741 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e84744 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e84747 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e84748 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8474a jbe 0x11e8474e */
  if ((C.cf||C.zf)) goto L_11e8474e;
  /* 11e8474c mov edx, esi */
  EDX = (ESI);
L_11e8474e:;
  /* 11e8474e cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84750 je 0x11e847b5 */
  if (C.zf) goto L_11e847b5;
  /* 11e84752 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e84755 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11e84758 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8475b jne 0x11e8479d */
  if (!C.zf) goto L_11e8479d;
  /* 11e8475d cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84760 jae 0x11e8477e */
  if (!C.cf) goto L_11e8477e;
  /* 11e84762 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11e84767 mov ecx, ebx */
  ECX = (EBX);
  /* 11e84769 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11e8476b not esi */
  ESI = (~(ESI));
  /* 11e8476d and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11e84771 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11e84775 jne 0x11e8479d */
  if (!C.zf) goto L_11e8479d;
  /* 11e84777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8477a and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11e8477c jmp 0x11e8479d */
  goto L_11e8479d;
L_11e8477e:;
  /* 11e8477e lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11e84781 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11e84786 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11e84788 not esi */
  ESI = (~(ESI));
  /* 11e8478a and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11e84791 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11e84795 jne 0x11e8479d */
  if (!C.zf) goto L_11e8479d;
  /* 11e84797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8479a and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e8479d:;
  /* 11e8479d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e847a0 mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11e847a3 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e847a6 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11e847a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e847ac mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11e847af mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e847b2 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11e847b5:;
  /* 11e847b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e847b8 jmp 0x11e847bd */
  goto L_11e847bd;
L_11e847ba:;
  /* 11e847ba mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11e847bd:;
  /* 11e847bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e847c1 jne 0x11e847cb */
  if (!C.zf) goto L_11e847cb;
  /* 11e847c3 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e847c5 je 0x11e8484c */
  if (C.zf) goto L_11e8484c;
L_11e847cb:;
  /* 11e847cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e847ce mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11e847d2 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11e847d5 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11e847d8 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11e847db mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11e847de mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e847e1 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11e847e4 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e847e7 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e847ea jne 0x11e8484c */
  if (!C.zf) goto L_11e8484c;
  /* 11e847ec mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11e847f0 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e847f3 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11e847f6 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11e847f8 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11e847fc jae 0x11e84823 */
  if (!C.cf) goto L_11e84823;
  /* 11e847fe cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84802 jne 0x11e84812 */
  if (!C.zf) goto L_11e84812;
  /* 11e84804 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84809 mov ecx, edx */
  ECX = (EDX);
  /* 11e8480b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e8480d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84810 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11e84812:;
  /* 11e84812 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84817 mov ecx, edx */
  ECX = (EDX);
  /* 11e84819 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e8481b lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11e8481f or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e84821 jmp 0x11e8484c */
  goto L_11e8484c;
L_11e84823:;
  /* 11e84823 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84827 jne 0x11e84839 */
  if (!C.zf) goto L_11e84839;
  /* 11e84829 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11e8482c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84831 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84836 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e84839:;
  /* 11e84839 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11e8483c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e84841 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e84843 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11e8484a or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11e8484c:;
  /* 11e8484c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e8484f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e84851 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11e84855 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e84858 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11e8485a jne 0x11e84957 */
  if (!C.zf) goto L_11e84957;
  /* 11e84860 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e84865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e84867 je 0x11e84949 */
  if (C.zf) goto L_11e84949;
  /* 11e8486d mov ecx, dword ptr [0x11e8fd8c] */
  ECX = (r32((uint32_t)(0x11e8fd8c)));
  /* 11e84873 mov esi, dword ptr [0x11e8a060] */
  ESI = (r32((uint32_t)(0x11e8a060)));
  /* 11e84879 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11e8487c add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8487f mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11e84884 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e84889 push ebx */
  push32((uint32_t)(EBX));
  /* 11e8488a push ecx */
  push32((uint32_t)(ECX));
  /* 11e8488b call esi */
  call_ind((uint32_t)(ESI), 0x11e8488du);
  /* 11e8488d mov ecx, dword ptr [0x11e8fd8c] */
  ECX = (r32((uint32_t)(0x11e8fd8c)));
  /* 11e84893 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e84898 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e8489d shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e8489f or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11e848a2 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e848a7 mov ecx, dword ptr [0x11e8fd8c] */
  ECX = (r32((uint32_t)(0x11e8fd8c)));
  /* 11e848ad mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e848b0 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11e848b8 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e848bd mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e848c0 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11e848c3 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e848c8 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e848cb cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e848cf jne 0x11e848da */
  if (!C.zf) goto L_11e848da;
  /* 11e848d1 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e848d5 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
L_11e848da:;
  /* 11e848da cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e848de jne 0x11e84949 */
  if (!C.zf) goto L_11e84949;
  /* 11e848e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e848e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e848e3 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11e848e6 call esi */
  call_ind((uint32_t)(ESI), 0x11e848e8u);
  /* 11e848e8 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e848ed push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11e848f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e848f2 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e848f8 call dword ptr [0x11e8a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a09c))), 0x11e848feu);
  /* 11e848fe mov eax, dword ptr [0x11e8fd98] */
  EAX = (r32((uint32_t)(0x11e8fd98)));
  /* 11e84903 mov edx, dword ptr [0x11e8fd9c] */
  EDX = (r32((uint32_t)(0x11e8fd9c)));
  /* 11e84909 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11e8490c shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e8490f mov ecx, eax */
  ECX = (EAX);
  /* 11e84911 mov eax, dword ptr [0x11e8fd94] */
  EAX = (r32((uint32_t)(0x11e8fd94)));
  /* 11e84916 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84918 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11e8491c push ecx */
  push32((uint32_t)(ECX));
  /* 11e8491d lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11e84920 push ecx */
  push32((uint32_t)(ECX));
  /* 11e84921 push eax */
  push32((uint32_t)(EAX));
  /* 11e84922 call 0x11e86a70 */
  push32(0x11e84927u); f_11e86a70();
  /* 11e84927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8492a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8492d dec dword ptr [0x11e8fd98] */
  { uint32_t _r=(r32((uint32_t)(0x11e8fd98)))-1; w32((uint32_t)(0x11e8fd98), (_r)); fl_dec(_r,32); }
  /* 11e84933 cmp eax, dword ptr [0x11e8fd94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8fd94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84939 jbe 0x11e8493f */
  if ((C.cf||C.zf)) goto L_11e8493f;
  /* 11e8493b sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11e8493f:;
  /* 11e8493f mov eax, dword ptr [0x11e8fd9c] */
  EAX = (r32((uint32_t)(0x11e8fd9c)));
  /* 11e84944 mov dword ptr [0x11e8fd90], eax */
  w32((uint32_t)(0x11e8fd90), (EAX));
L_11e84949:;
  /* 11e84949 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8494c mov dword ptr [0x11e8fd8c], edi */
  w32((uint32_t)(0x11e8fd8c), (EDI));
  /* 11e84952 mov dword ptr [0x11e8fd94], eax */
  w32((uint32_t)(0x11e8fd94), (EAX));
L_11e84957:;
  /* 11e84957 pop edi */
  EDI = (pop32());
  /* 11e84958 pop esi */
  ESI = (pop32());
  /* 11e84959 pop ebx */
  EBX = (pop32());
  /* 11e8495a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8495b ret  */
  ESPCHK(0x11e84633u, _esp0);
  ESP += 4; return;
}

/* FUN_1000495c @ 0x11e8495c (777 bytes, 275 insns) */
void f_11e8495c(void) {
  FTRACE(0x11e8495cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8495c push ebp */
  push32((uint32_t)(EBP));
  /* 11e8495d mov ebp, esp */
  EBP = (ESP);
  /* 11e8495f sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84962 mov eax, dword ptr [0x11e8fd98] */
  EAX = (r32((uint32_t)(0x11e8fd98)));
  /* 11e84967 mov edx, dword ptr [0x11e8fd9c] */
  EDX = (r32((uint32_t)(0x11e8fd9c)));
  /* 11e8496d push ebx */
  push32((uint32_t)(EBX));
  /* 11e8496e push esi */
  push32((uint32_t)(ESI));
  /* 11e8496f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11e84972 push edi */
  push32((uint32_t)(EDI));
  /* 11e84973 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11e84976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84979 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11e8497c lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11e8497f and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11e84982 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e84985 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e84988 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e84989 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8498c jge 0x11e8499c */
  if ((C.sf==C.of)) goto L_11e8499c;
  /* 11e8498e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11e84991 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11e84993 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11e84997 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11e8499a jmp 0x11e849ac */
  goto L_11e849ac;
L_11e8499c:;
  /* 11e8499c add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8499f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e849a2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e849a4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11e849a6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11e849a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e849ac:;
  /* 11e849ac mov eax, dword ptr [0x11e8fd90] */
  EAX = (r32((uint32_t)(0x11e8fd90)));
  /* 11e849b1 mov ebx, eax */
  EBX = (EAX);
  /* 11e849b3 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e849b5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e849b8 jae 0x11e849d3 */
  if (!C.cf) goto L_11e849d3;
L_11e849ba:;
  /* 11e849ba mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e849bd mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11e849bf and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11e849c2 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11e849c4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e849c6 jne 0x11e849d3 */
  if (!C.zf) goto L_11e849d3;
  /* 11e849c8 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e849cb cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e849ce mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e849d1 jb 0x11e849ba */
  if (C.cf) goto L_11e849ba;
L_11e849d3:;
  /* 11e849d3 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e849d6 jne 0x11e84a51 */
  if (!C.zf) goto L_11e84a51;
  /* 11e849d8 mov ebx, edx */
  EBX = (EDX);
L_11e849da:;
  /* 11e849da cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e849dc mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e849df jae 0x11e849f6 */
  if (!C.cf) goto L_11e849f6;
  /* 11e849e1 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e849e4 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11e849e6 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11e849e9 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11e849eb or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e849ed jne 0x11e849f4 */
  if (!C.zf) goto L_11e849f4;
  /* 11e849ef add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e849f2 jmp 0x11e849da */
  goto L_11e849da;
L_11e849f4:;
  /* 11e849f4 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11e849f6:;
  /* 11e849f6 jne 0x11e84a51 */
  if (!C.zf) goto L_11e84a51;
L_11e849f8:;
  /* 11e849f8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e849fb jae 0x11e84a0e */
  if (!C.cf) goto L_11e84a0e;
  /* 11e849fd cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84a01 jne 0x11e84a0b */
  if (!C.zf) goto L_11e84a0b;
  /* 11e84a03 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84a06 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e84a09 jmp 0x11e849f8 */
  goto L_11e849f8;
L_11e84a0b:;
  /* 11e84a0b cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11e84a0e:;
  /* 11e84a0e jne 0x11e84a36 */
  if (!C.zf) goto L_11e84a36;
  /* 11e84a10 mov ebx, edx */
  EBX = (EDX);
L_11e84a12:;
  /* 11e84a12 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84a14 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e84a17 jae 0x11e84a26 */
  if (!C.cf) goto L_11e84a26;
  /* 11e84a19 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84a1d jne 0x11e84a24 */
  if (!C.zf) goto L_11e84a24;
  /* 11e84a1f add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84a22 jmp 0x11e84a12 */
  goto L_11e84a12;
L_11e84a24:;
  /* 11e84a24 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11e84a26:;
  /* 11e84a26 jne 0x11e84a36 */
  if (!C.zf) goto L_11e84a36;
  /* 11e84a28 call 0x11e84c65 */
  push32(0x11e84a2du); f_11e84c65();
  /* 11e84a2d mov ebx, eax */
  EBX = (EAX);
  /* 11e84a2f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e84a31 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e84a34 je 0x11e84a4a */
  if (C.zf) goto L_11e84a4a;
L_11e84a36:;
  /* 11e84a36 push ebx */
  push32((uint32_t)(EBX));
  /* 11e84a37 call 0x11e84d16 */
  push32(0x11e84a3cu); f_11e84d16();
  /* 11e84a3c pop ecx */
  ECX = (pop32());
  /* 11e84a3d mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11e84a40 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e84a42 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11e84a45 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84a48 jne 0x11e84a51 */
  if (!C.zf) goto L_11e84a51;
L_11e84a4a:;
  /* 11e84a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e84a4c jmp 0x11e84c60 */
  goto L_11e84c60;
L_11e84a51:;
  /* 11e84a51 mov dword ptr [0x11e8fd90], ebx */
  w32((uint32_t)(0x11e8fd90), (EBX));
  /* 11e84a57 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11e84a5a mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11e84a5c cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84a5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e84a62 je 0x11e84a78 */
  if (C.zf) goto L_11e84a78;
  /* 11e84a64 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11e84a6b mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11e84a6f and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11e84a72 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11e84a74 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e84a76 jne 0x11e84aaf */
  if (!C.zf) goto L_11e84aaf;
L_11e84a78:;
  /* 11e84a78 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11e84a7e mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11e84a81 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11e84a84 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11e84a87 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e84a8b lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11e84a8e or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11e84a90 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11e84a93 jne 0x11e84aac */
  if (!C.zf) goto L_11e84aac;
L_11e84a95:;
  /* 11e84a95 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11e84a9b inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e84a9e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11e84aa1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84aa4 mov edi, esi */
  EDI = (ESI);
  /* 11e84aa6 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11e84aa8 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11e84aaa je 0x11e84a95 */
  if (C.zf) goto L_11e84a95;
L_11e84aac:;
  /* 11e84aac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11e84aaf:;
  /* 11e84aaf mov ecx, edx */
  ECX = (EDX);
  /* 11e84ab1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e84ab3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84ab9 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e84ac0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e84ac3 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11e84ac7 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11e84ac9 jne 0x11e84ad8 */
  if (!C.zf) goto L_11e84ad8;
  /* 11e84acb mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11e84ad2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e84ad4 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11e84ad7 pop edi */
  EDI = (pop32());
L_11e84ad8:;
  /* 11e84ad8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e84ada jl 0x11e84ae1 */
  if ((C.sf!=C.of)) goto L_11e84ae1;
  /* 11e84adc shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e84ade inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e84adf jmp 0x11e84ad8 */
  goto L_11e84ad8;
L_11e84ae1:;
  /* 11e84ae1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e84ae4 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11e84ae8 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11e84aea sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84aed mov esi, ecx */
  ESI = (ECX);
  /* 11e84aef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e84af2 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11e84af5 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e84af6 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84af9 jle 0x11e84afe */
  if ((C.zf||C.sf!=C.of)) goto L_11e84afe;
  /* 11e84afb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84afd pop esi */
  ESI = (pop32());
L_11e84afe:;
  /* 11e84afe cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84b00 je 0x11e84c13 */
  if (C.zf) goto L_11e84c13;
  /* 11e84b06 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e84b09 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84b0c jne 0x11e84b6f */
  if (!C.zf) goto L_11e84b6f;
  /* 11e84b0e cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84b11 jge 0x11e84b3e */
  if ((C.sf==C.of)) goto L_11e84b3e;
  /* 11e84b13 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84b18 mov ecx, edi */
  ECX = (EDI);
  /* 11e84b1a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84b1f lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11e84b23 not ebx */
  EBX = (~(EBX));
  /* 11e84b25 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11e84b28 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11e84b2c mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11e84b30 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11e84b32 jne 0x11e84b6c */
  if (!C.zf) goto L_11e84b6c;
  /* 11e84b34 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84b37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e84b3a and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11e84b3c jmp 0x11e84b6f */
  goto L_11e84b6f;
L_11e84b3e:;
  /* 11e84b3e lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11e84b41 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84b46 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84b48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84b4b lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11e84b4f lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11e84b56 not ebx */
  EBX = (~(EBX));
  /* 11e84b58 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11e84b5a dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11e84b5c mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11e84b5f jne 0x11e84b6c */
  if (!C.zf) goto L_11e84b6c;
  /* 11e84b61 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84b64 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e84b67 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e84b6a jmp 0x11e84b6f */
  goto L_11e84b6f;
L_11e84b6c:;
  /* 11e84b6c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11e84b6f:;
  /* 11e84b6f mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e84b72 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11e84b75 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84b79 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11e84b7c mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e84b7f mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11e84b82 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11e84b85 je 0x11e84c1f */
  if (C.zf) goto L_11e84c1f;
  /* 11e84b8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e84b8e mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11e84b92 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11e84b95 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11e84b98 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e84b9b mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e84b9e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e84ba1 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11e84ba4 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e84ba7 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84baa jne 0x11e84c10 */
  if (!C.zf) goto L_11e84c10;
  /* 11e84bac mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11e84bb0 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84bb3 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11e84bb6 jge 0x11e84be1 */
  if ((C.sf==C.of)) goto L_11e84be1;
  /* 11e84bb8 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11e84bba cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84bbe mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11e84bc2 jne 0x11e84bcf */
  if (!C.zf) goto L_11e84bcf;
  /* 11e84bc4 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11e84bc9 mov ecx, esi */
  ECX = (ESI);
  /* 11e84bcb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11e84bcd or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11e84bcf:;
  /* 11e84bcf mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11e84bd4 mov ecx, esi */
  ECX = (ESI);
  /* 11e84bd6 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11e84bd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84bdb or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11e84bdf jmp 0x11e84c10 */
  goto L_11e84c10;
L_11e84be1:;
  /* 11e84be1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11e84be3 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84be7 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11e84beb jne 0x11e84bfa */
  if (!C.zf) goto L_11e84bfa;
  /* 11e84bed lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11e84bf0 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11e84bf5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11e84bf7 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11e84bfa:;
  /* 11e84bfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84bfd lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11e84c04 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11e84c07 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11e84c0c shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11e84c0e or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11e84c10:;
  /* 11e84c10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11e84c13:;
  /* 11e84c13 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e84c15 je 0x11e84c22 */
  if (C.zf) goto L_11e84c22;
  /* 11e84c17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e84c19 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11e84c1d jmp 0x11e84c22 */
  goto L_11e84c22;
L_11e84c1f:;
  /* 11e84c1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11e84c22:;
  /* 11e84c22 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11e84c25 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84c27 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11e84c2a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e84c2c mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11e84c30 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11e84c33 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11e84c35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e84c37 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11e84c3a mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11e84c3c jne 0x11e84c58 */
  if (!C.zf) goto L_11e84c58;
  /* 11e84c3e cmp ebx, dword ptr [0x11e8fd94] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11e8fd94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84c44 jne 0x11e84c58 */
  if (!C.zf) goto L_11e84c58;
  /* 11e84c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84c49 cmp ecx, dword ptr [0x11e8fd8c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e8fd8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84c4f jne 0x11e84c58 */
  if (!C.zf) goto L_11e84c58;
  /* 11e84c51 and dword ptr [0x11e8fd94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11e8fd94)))&(0x0u); w32((uint32_t)(0x11e8fd94), (_r)); fl_logic(_r,32); }
L_11e84c58:;
  /* 11e84c58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84c5b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e84c5d lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11e84c60:;
  /* 11e84c60 pop edi */
  EDI = (pop32());
  /* 11e84c61 pop esi */
  ESI = (pop32());
  /* 11e84c62 pop ebx */
  EBX = (pop32());
  /* 11e84c63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e84c64 ret  */
  ESPCHK(0x11e8495cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c65 @ 0x11e84c65 (177 bytes, 53 insns) */
void f_11e84c65(void) {
  FTRACE(0x11e84c65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84c65 mov eax, dword ptr [0x11e8fd98] */
  EAX = (r32((uint32_t)(0x11e8fd98)));
  /* 11e84c6a mov ecx, dword ptr [0x11e8fd88] */
  ECX = (r32((uint32_t)(0x11e8fd88)));
  /* 11e84c70 push esi */
  push32((uint32_t)(ESI));
  /* 11e84c71 push edi */
  push32((uint32_t)(EDI));
  /* 11e84c72 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e84c74 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84c76 jne 0x11e84ca8 */
  if (!C.zf) goto L_11e84ca8;
  /* 11e84c78 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11e84c7c shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e84c7f push eax */
  push32((uint32_t)(EAX));
  /* 11e84c80 push dword ptr [0x11e8fd9c] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fd9c))));
  /* 11e84c86 push edi */
  push32((uint32_t)(EDI));
  /* 11e84c87 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e84c8d call dword ptr [0x11e8a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a050))), 0x11e84c93u);
  /* 11e84c93 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84c95 je 0x11e84cf8 */
  if (C.zf) goto L_11e84cf8;
  /* 11e84c97 add dword ptr [0x11e8fd88], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fd88))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11e8fd88), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e84c9e mov dword ptr [0x11e8fd9c], eax */
  w32((uint32_t)(0x11e8fd9c), (EAX));
  /* 11e84ca3 mov eax, dword ptr [0x11e8fd98] */
  EAX = (r32((uint32_t)(0x11e8fd98)));
L_11e84ca8:;
  /* 11e84ca8 mov ecx, dword ptr [0x11e8fd9c] */
  ECX = (r32((uint32_t)(0x11e8fd9c)));
  /* 11e84cae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11e84cb3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e84cb5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11e84cb8 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e84cbe lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11e84cc1 call dword ptr [0x11e8a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a058))), 0x11e84cc7u);
  /* 11e84cc7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84cc9 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11e84ccc je 0x11e84cf8 */
  if (C.zf) goto L_11e84cf8;
  /* 11e84cce push 4 */
  push32((uint32_t)(0x4u));
  /* 11e84cd0 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11e84cd5 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11e84cda push edi */
  push32((uint32_t)(EDI));
  /* 11e84cdb call dword ptr [0x11e8a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a054))), 0x11e84ce1u);
  /* 11e84ce1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84ce3 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11e84ce6 jne 0x11e84cfc */
  if (!C.zf) goto L_11e84cfc;
  /* 11e84ce8 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11e84ceb push edi */
  push32((uint32_t)(EDI));
  /* 11e84cec push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e84cf2 call dword ptr [0x11e8a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a09c))), 0x11e84cf8u);
L_11e84cf8:;
  /* 11e84cf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e84cfa jmp 0x11e84d13 */
  goto L_11e84d13;
L_11e84cfc:;
  /* 11e84cfc or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11e84d00 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11e84d02 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11e84d05 inc dword ptr [0x11e8fd98] */
  { uint32_t _r=(r32((uint32_t)(0x11e8fd98)))+1; w32((uint32_t)(0x11e8fd98), (_r)); fl_inc(_r,32); }
  /* 11e84d0b mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11e84d0e or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e84d11 mov eax, esi */
  EAX = (ESI);
L_11e84d13:;
  /* 11e84d13 pop edi */
  EDI = (pop32());
  /* 11e84d14 pop esi */
  ESI = (pop32());
  /* 11e84d15 ret  */
  ESPCHK(0x11e84c65u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d16 @ 0x11e84d16 (251 bytes, 85 insns) */
void f_11e84d16(void) {
  FTRACE(0x11e84d16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84d16 push ebp */
  push32((uint32_t)(EBP));
  /* 11e84d17 mov ebp, esp */
  EBP = (ESP);
  /* 11e84d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11e84d1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84d1d push ebx */
  push32((uint32_t)(EBX));
  /* 11e84d1e push esi */
  push32((uint32_t)(ESI));
  /* 11e84d1f push edi */
  push32((uint32_t)(EDI));
  /* 11e84d20 mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11e84d23 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e84d26 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11e84d28:;
  /* 11e84d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e84d2a jl 0x11e84d31 */
  if ((C.sf!=C.of)) goto L_11e84d31;
  /* 11e84d2c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e84d2e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e84d2f jmp 0x11e84d28 */
  goto L_11e84d28;
L_11e84d31:;
  /* 11e84d31 mov eax, ebx */
  EAX = (EBX);
  /* 11e84d33 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84d35 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84d3b pop edx */
  EDX = (pop32());
  /* 11e84d3c lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11e84d43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e84d46:;
  /* 11e84d46 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11e84d49 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11e84d4c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84d4f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e84d50 jne 0x11e84d46 */
  if (!C.zf) goto L_11e84d46;
  /* 11e84d52 mov edi, ebx */
  EDI = (EBX);
  /* 11e84d54 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e84d56 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11e84d59 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84d5c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e84d61 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e84d66 push edi */
  push32((uint32_t)(EDI));
  /* 11e84d67 call dword ptr [0x11e8a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a054))), 0x11e84d6du);
  /* 11e84d6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e84d6f jne 0x11e84d79 */
  if (!C.zf) goto L_11e84d79;
  /* 11e84d71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e84d74 jmp 0x11e84e0c */
  goto L_11e84e0c;
L_11e84d79:;
  /* 11e84d79 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11e84d7f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84d81 ja 0x11e84dbf */
  if ((!C.cf&&!C.zf)) goto L_11e84dbf;
  /* 11e84d83 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11e84d86:;
  /* 11e84d86 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11e84d8a or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11e84d91 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11e84d97 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11e84d9e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e84da0 lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11e84da6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e84da9 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11e84db3 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84db8 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11e84dbb cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84dbd jbe 0x11e84d86 */
  if ((C.cf||C.zf)) goto L_11e84d86;
L_11e84dbf:;
  /* 11e84dbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84dc2 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11e84dc5 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84dca push 1 */
  push32((uint32_t)(0x1u));
  /* 11e84dcc pop edi */
  EDI = (pop32());
  /* 11e84dcd mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e84dd0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e84dd3 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11e84dd6 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11e84dd9 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e84ddc and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11e84de1 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11e84de8 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11e84deb mov cl, al */
  CL = (AL);
  /* 11e84ded inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11e84def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e84df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84df4 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11e84df7 jne 0x11e84dfc */
  if (!C.zf) goto L_11e84dfc;
  /* 11e84df9 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11e84dfc:;
  /* 11e84dfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e84e01 mov ecx, ebx */
  ECX = (EBX);
  /* 11e84e03 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e84e05 not edx */
  EDX = (~(EDX));
  /* 11e84e07 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11e84e0a mov eax, ebx */
  EAX = (EBX);
L_11e84e0c:;
  /* 11e84e0c pop edi */
  EDI = (pop32());
  /* 11e84e0d pop esi */
  ESI = (pop32());
  /* 11e84e0e pop ebx */
  EBX = (pop32());
  /* 11e84e0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e84e10 ret  */
  ESPCHK(0x11e84d16u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e11 @ 0x11e84e11 (758 bytes, 259 insns) */
void f_11e84e11(void) {
  FTRACE(0x11e84e11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e84e11 push ebp */
  push32((uint32_t)(EBP));
  /* 11e84e12 mov ebp, esp */
  EBP = (ESP);
  /* 11e84e14 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84e17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84e1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e84e1d push ebx */
  push32((uint32_t)(EBX));
  /* 11e84e1e push esi */
  push32((uint32_t)(ESI));
  /* 11e84e1f push edi */
  push32((uint32_t)(EDI));
  /* 11e84e20 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e84e23 mov edx, edi */
  EDX = (EDI);
  /* 11e84e25 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11e84e28 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84e2b mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e84e2e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e84e31 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11e84e34 mov ecx, edx */
  ECX = (EDX);
  /* 11e84e36 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e84e3c lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11e84e43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e84e46 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11e84e49 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e84e4a cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84e4c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e84e4f mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11e84e53 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e84e57 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11e84e5a jle 0x11e84fbf */
  if ((C.zf||C.sf!=C.of)) goto L_11e84fbf;
  /* 11e84e60 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11e84e63 jne 0x11e84fb8 */
  if (!C.zf) goto L_11e84fb8;
  /* 11e84e69 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84e6b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84e6d jg 0x11e84fb8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e84fb8;
  /* 11e84e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84e76 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e84e79 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e84e7a cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84e7d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e84e80 jbe 0x11e84e88 */
  if ((C.cf||C.zf)) goto L_11e84e88;
  /* 11e84e82 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84e84 pop ecx */
  ECX = (pop32());
  /* 11e84e85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e84e88:;
  /* 11e84e88 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e84e8b cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84e8e jne 0x11e84ed8 */
  if (!C.zf) goto L_11e84ed8;
  /* 11e84e90 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84e93 jae 0x11e84eb4 */
  if (!C.cf) goto L_11e84eb4;
  /* 11e84e95 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84e9a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84e9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e84e9f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11e84ea3 not ebx */
  EBX = (~(EBX));
  /* 11e84ea5 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11e84ea9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11e84eab jne 0x11e84ed8 */
  if (!C.zf) goto L_11e84ed8;
  /* 11e84ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84eb0 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11e84eb2 jmp 0x11e84ed8 */
  goto L_11e84ed8;
L_11e84eb4:;
  /* 11e84eb4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e84eb7 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84ebc shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84ebe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e84ec1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11e84ec5 not ebx */
  EBX = (~(EBX));
  /* 11e84ec7 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11e84ece dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11e84ed0 jne 0x11e84ed8 */
  if (!C.zf) goto L_11e84ed8;
  /* 11e84ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84ed5 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e84ed8:;
  /* 11e84ed8 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11e84edb mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e84ede mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11e84ee1 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e84ee4 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11e84ee7 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11e84eea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e84eed sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e84eef add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e84ef2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84ef6 jle 0x11e84fa6 */
  if ((C.zf||C.sf!=C.of)) goto L_11e84fa6;
  /* 11e84efc mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84eff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e84f02 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11e84f05 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e84f06 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e84f0a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84f0d jbe 0x11e84f12 */
  if ((C.cf||C.zf)) goto L_11e84f12;
  /* 11e84f0f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84f11 pop edi */
  EDI = (pop32());
L_11e84f12:;
  /* 11e84f12 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e84f15 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11e84f18 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11e84f1b mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e84f1e mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11e84f21 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e84f24 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11e84f27 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11e84f2a mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e84f2d mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11e84f30 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e84f33 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84f36 jne 0x11e84f94 */
  if (!C.zf) goto L_11e84f94;
  /* 11e84f38 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11e84f3c cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84f3f mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11e84f42 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11e84f44 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11e84f48 jae 0x11e84f6b */
  if (!C.cf) goto L_11e84f6b;
  /* 11e84f4a cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84f4e jne 0x11e84f5e */
  if (!C.zf) goto L_11e84f5e;
  /* 11e84f50 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84f55 mov ecx, edi */
  ECX = (EDI);
  /* 11e84f57 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84f59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84f5c or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11e84f5e:;
  /* 11e84f5e lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11e84f62 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e84f67 mov ecx, edi */
  ECX = (EDI);
  /* 11e84f69 jmp 0x11e84f90 */
  goto L_11e84f90;
L_11e84f6b:;
  /* 11e84f6b cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e84f6f jne 0x11e84f81 */
  if (!C.zf) goto L_11e84f81;
  /* 11e84f71 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11e84f74 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e84f79 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e84f7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e84f7e or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e84f81:;
  /* 11e84f81 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11e84f88 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11e84f8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11e84f90:;
  /* 11e84f90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e84f92 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11e84f94:;
  /* 11e84f94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e84f97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84f9a lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11e84f9e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e84fa0 mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11e84fa4 jmp 0x11e84fa9 */
  goto L_11e84fa9;
L_11e84fa6:;
  /* 11e84fa6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11e84fa9:;
  /* 11e84fa9 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11e84fac mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11e84faf mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11e84fb3 jmp 0x11e850ff */
  goto L_11e850ff;
L_11e84fb8:;
  /* 11e84fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e84fba jmp 0x11e85102 */
  goto L_11e85102;
L_11e84fbf:;
  /* 11e84fbf jge 0x11e850ff */
  if ((C.sf==C.of)) goto L_11e850ff;
  /* 11e84fc5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e84fc8 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e84fcb lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11e84fce mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11e84fd1 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11e84fd5 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e84fd8 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11e84fdb sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11e84fde dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e84fdf mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11e84fe2 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84fe5 jbe 0x11e84fea */
  if ((C.cf||C.zf)) goto L_11e84fea;
  /* 11e84fe7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e84fe9 pop esi */
  ESI = (pop32());
L_11e84fea:;
  /* 11e84fea test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e84fee jne 0x11e85079 */
  if (!C.zf) goto L_11e85079;
  /* 11e84ff4 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11e84ff7 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11e84ffa dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e84ffb cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e84ffe jbe 0x11e85003 */
  if ((C.cf||C.zf)) goto L_11e85003;
  /* 11e85000 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e85002 pop esi */
  ESI = (pop32());
L_11e85003:;
  /* 11e85003 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e85006 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85009 jne 0x11e85052 */
  if (!C.zf) goto L_11e85052;
  /* 11e8500b cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8500e jae 0x11e8502e */
  if (!C.cf) goto L_11e8502e;
  /* 11e85010 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e85015 mov ecx, esi */
  ECX = (ESI);
  /* 11e85017 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e85019 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11e8501d not ebx */
  EBX = (~(EBX));
  /* 11e8501f and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11e85023 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11e85025 jne 0x11e8504f */
  if (!C.zf) goto L_11e8504f;
  /* 11e85027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8502a and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11e8502c jmp 0x11e8504f */
  goto L_11e8504f;
L_11e8502e:;
  /* 11e8502e lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11e85031 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11e85036 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11e85038 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11e8503c not ebx */
  EBX = (~(EBX));
  /* 11e8503e and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11e85045 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11e85047 jne 0x11e8504f */
  if (!C.zf) goto L_11e8504f;
  /* 11e85049 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8504c and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e8504f:;
  /* 11e8504f mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11e85052:;
  /* 11e85052 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11e85055 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11e85058 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11e8505b mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11e8505e mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11e85061 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11e85064 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11e85067 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8506a mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11e8506d sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11e85070 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e85071 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85074 jbe 0x11e85079 */
  if ((C.cf||C.zf)) goto L_11e85079;
  /* 11e85076 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e85078 pop esi */
  ESI = (pop32());
L_11e85079:;
  /* 11e85079 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e8507c mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11e85080 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11e85083 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11e85086 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11e85089 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11e8508c mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e8508f mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11e85092 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11e85095 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85098 jne 0x11e850f6 */
  if (!C.zf) goto L_11e850f6;
  /* 11e8509a mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11e8509e cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e850a1 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11e850a4 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11e850a6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11e850aa jae 0x11e850cd */
  if (!C.cf) goto L_11e850cd;
  /* 11e850ac cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e850b0 jne 0x11e850c0 */
  if (!C.zf) goto L_11e850c0;
  /* 11e850b2 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11e850b7 mov ecx, esi */
  ECX = (ESI);
  /* 11e850b9 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11e850bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e850be or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11e850c0:;
  /* 11e850c0 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11e850c4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11e850c9 mov ecx, esi */
  ECX = (ESI);
  /* 11e850cb jmp 0x11e850f2 */
  goto L_11e850f2;
L_11e850cd:;
  /* 11e850cd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e850d1 jne 0x11e850e3 */
  if (!C.zf) goto L_11e850e3;
  /* 11e850d3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11e850d6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11e850db shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11e850dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e850e0 or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11e850e3:;
  /* 11e850e3 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11e850ea lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11e850ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11e850f2:;
  /* 11e850f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11e850f4 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11e850f6:;
  /* 11e850f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e850f9 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11e850fb mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11e850ff:;
  /* 11e850ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11e85101 pop eax */
  EAX = (pop32());
L_11e85102:;
  /* 11e85102 pop edi */
  EDI = (pop32());
  /* 11e85103 pop esi */
  ESI = (pop32());
  /* 11e85104 pop ebx */
  EBX = (pop32());
  /* 11e85105 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e85106 ret  */
  ESPCHK(0x11e84e11u, _esp0);
  ESP += 4; return;
}

/* FUN_10005107 @ 0x11e85107 (324 bytes, 102 insns) */
void f_11e85107(void) {
  FTRACE(0x11e85107u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85107 cmp dword ptr [0x11e8cb40], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8cb40))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8510e push ebx */
  push32((uint32_t)(EBX));
  /* 11e8510f push ebp */
  push32((uint32_t)(EBP));
  /* 11e85110 push esi */
  push32((uint32_t)(ESI));
  /* 11e85111 push edi */
  push32((uint32_t)(EDI));
  /* 11e85112 jne 0x11e8511b */
  if (!C.zf) goto L_11e8511b;
  /* 11e85114 mov esi, 0x11e8cb30 */
  ESI = (0x11e8cb30u);
  /* 11e85119 jmp 0x11e85138 */
  goto L_11e85138;
L_11e8511b:;
  /* 11e8511b push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11e85120 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85122 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e85128 call dword ptr [0x11e8a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a058))), 0x11e8512eu);
  /* 11e8512e mov esi, eax */
  ESI = (EAX);
  /* 11e85130 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e85132 je 0x11e85244 */
  if (C.zf) goto L_11e85244;
L_11e85138:;
  /* 11e85138 mov ebp, dword ptr [0x11e8a054] */
  EBP = (r32((uint32_t)(0x11e8a054)));
  /* 11e8513e push 4 */
  push32((uint32_t)(0x4u));
  /* 11e85140 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11e85145 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11e8514a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8514c call ebp */
  call_ind((uint32_t)(EBP), 0x11e8514eu);
  /* 11e8514e mov edi, eax */
  EDI = (EAX);
  /* 11e85150 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11e85152 je 0x11e8522d */
  if (C.zf) goto L_11e8522d;
  /* 11e85158 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8515a mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11e8515f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e85164 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85165 push edi */
  push32((uint32_t)(EDI));
  /* 11e85166 call ebp */
  call_ind((uint32_t)(EBP), 0x11e85168u);
  /* 11e85168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e8516a je 0x11e8521f */
  if (C.zf) goto L_11e8521f;
  /* 11e85170 mov eax, 0x11e8cb30 */
  EAX = (0x11e8cb30u);
  /* 11e85175 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85177 jne 0x11e85197 */
  if (!C.zf) goto L_11e85197;
  /* 11e85179 cmp dword ptr [0x11e8cb30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8cb30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85180 jne 0x11e85187 */
  if (!C.zf) goto L_11e85187;
  /* 11e85182 mov dword ptr [0x11e8cb30], eax */
  w32((uint32_t)(0x11e8cb30), (EAX));
L_11e85187:;
  /* 11e85187 cmp dword ptr [0x11e8cb34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e8cb34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8518e jne 0x11e851ac */
  if (!C.zf) goto L_11e851ac;
  /* 11e85190 mov dword ptr [0x11e8cb34], eax */
  w32((uint32_t)(0x11e8cb34), (EAX));
  /* 11e85195 jmp 0x11e851ac */
  goto L_11e851ac;
L_11e85197:;
  /* 11e85197 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11e85199 mov eax, dword ptr [0x11e8cb34] */
  EAX = (r32((uint32_t)(0x11e8cb34)));
  /* 11e8519e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11e851a1 mov dword ptr [0x11e8cb34], esi */
  w32((uint32_t)(0x11e8cb34), (ESI));
  /* 11e851a7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e851aa mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11e851ac:;
  /* 11e851ac lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11e851b2 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11e851b8 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11e851bb lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11e851be mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11e851c1 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11e851c4 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11e851c7 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11e851c9 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11e851ce:;
  /* 11e851ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e851d0 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e851d3 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11e851d6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e851d7 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e851d9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11e851da inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11e851db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e851dd mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e851e0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e851e3 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e851e9 jl 0x11e851ce */
  if ((C.sf!=C.of)) goto L_11e851ce;
  /* 11e851eb push ebx */
  push32((uint32_t)(EBX));
  /* 11e851ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11e851ee push edi */
  push32((uint32_t)(EDI));
  /* 11e851ef call 0x11e86a10 */
  push32(0x11e851f4u); f_11e86a10();
  /* 11e851f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e851f7:;
  /* 11e851f7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11e851fa add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e851fc cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e851fe jae 0x11e8521b */
  if (!C.cf) goto L_11e8521b;
  /* 11e85200 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11e85207 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11e8520a mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11e8520c mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11e85213 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85219 jmp 0x11e851f7 */
  goto L_11e851f7;
L_11e8521b:;
  /* 11e8521b mov eax, esi */
  EAX = (ESI);
  /* 11e8521d jmp 0x11e85246 */
  goto L_11e85246;
L_11e8521f:;
  /* 11e8521f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e85224 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85226 push edi */
  push32((uint32_t)(EDI));
  /* 11e85227 call dword ptr [0x11e8a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a060))), 0x11e8522du);
L_11e8522d:;
  /* 11e8522d cmp esi, 0x11e8cb30 */
  { uint32_t _a=(ESI),_b=(0x11e8cb30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85233 je 0x11e85244 */
  if (C.zf) goto L_11e85244;
  /* 11e85235 push esi */
  push32((uint32_t)(ESI));
  /* 11e85236 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85238 push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e8523e call dword ptr [0x11e8a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a09c))), 0x11e85244u);
L_11e85244:;
  /* 11e85244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e85246:;
  /* 11e85246 pop edi */
  EDI = (pop32());
  /* 11e85247 pop esi */
  ESI = (pop32());
  /* 11e85248 pop ebp */
  EBP = (pop32());
  /* 11e85249 pop ebx */
  EBX = (pop32());
  /* 11e8524a ret  */
  ESPCHK(0x11e85107u, _esp0);
  ESP += 4; return;
}

/* FUN_1000524b @ 0x11e8524b (86 bytes, 27 insns) */
void f_11e8524b(void) {
  FTRACE(0x11e8524bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8524b push esi */
  push32((uint32_t)(ESI));
  /* 11e8524c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e85250 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11e85255 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85257 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11e8525a call dword ptr [0x11e8a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a060))), 0x11e85260u);
  /* 11e85260 cmp dword ptr [0x11e8eb50], esi */
  { uint32_t _a=(r32((uint32_t)(0x11e8eb50))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85266 jne 0x11e85270 */
  if (!C.zf) goto L_11e85270;
  /* 11e85268 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e8526b mov dword ptr [0x11e8eb50], eax */
  w32((uint32_t)(0x11e8eb50), (EAX));
L_11e85270:;
  /* 11e85270 cmp esi, 0x11e8cb30 */
  { uint32_t _a=(ESI),_b=(0x11e8cb30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85276 je 0x11e85298 */
  if (C.zf) goto L_11e85298;
  /* 11e85278 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e8527b mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11e8527d push esi */
  push32((uint32_t)(ESI));
  /* 11e8527e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85280 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e85282 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11e85284 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11e85287 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e8528a push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
  /* 11e85290 call dword ptr [0x11e8a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a09c))), 0x11e85296u);
  /* 11e85296 pop esi */
  ESI = (pop32());
  /* 11e85297 ret  */
  ESPCHK(0x11e8524bu, _esp0);
  ESP += 4; return;
L_11e85298:;
  /* 11e85298 or dword ptr [0x11e8cb40], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11e8cb40)))|(0xffffffffu); w32((uint32_t)(0x11e8cb40), (_r)); fl_logic(_r,32); }
  /* 11e8529f pop esi */
  ESI = (pop32());
  /* 11e852a0 ret  */
  ESPCHK(0x11e8524bu, _esp0);
  ESP += 4; return;
}

/* FUN_100052a1 @ 0x11e852a1 (194 bytes, 66 insns) */
void f_11e852a1(void) {
  FTRACE(0x11e852a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e852a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11e852a2 mov ebp, esp */
  EBP = (ESP);
  /* 11e852a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e852a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e852a6 push esi */
  push32((uint32_t)(ESI));
  /* 11e852a7 mov esi, dword ptr [0x11e8cb34] */
  ESI = (r32((uint32_t)(0x11e8cb34)));
  /* 11e852ad push edi */
  push32((uint32_t)(EDI));
L_11e852ae:;
  /* 11e852ae cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e852b2 je 0x11e8534c */
  if (C.zf) goto L_11e8534c;
  /* 11e852b8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e852bc lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11e852c2 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11e852c7:;
  /* 11e852c7 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e852cd jne 0x11e85308 */
  if (!C.zf) goto L_11e85308;
  /* 11e852cf mov eax, ebx */
  EAX = (EBX);
  /* 11e852d1 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11e852d6 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e852d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e852de push eax */
  push32((uint32_t)(EAX));
  /* 11e852df call dword ptr [0x11e8a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a060))), 0x11e852e5u);
  /* 11e852e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e852e7 je 0x11e85308 */
  if (C.zf) goto L_11e85308;
  /* 11e852e9 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11e852ec dec dword ptr [0x11e8fa64] */
  { uint32_t _r=(r32((uint32_t)(0x11e8fa64)))-1; w32((uint32_t)(0x11e8fa64), (_r)); fl_dec(_r,32); }
  /* 11e852f2 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11e852f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e852f7 je 0x11e852fd */
  if (C.zf) goto L_11e852fd;
  /* 11e852f9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e852fb jbe 0x11e85300 */
  if ((C.cf||C.zf)) goto L_11e85300;
L_11e852fd:;
  /* 11e852fd mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11e85300:;
  /* 11e85300 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e85303 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11e85306 je 0x11e85315 */
  if (C.zf) goto L_11e85315;
L_11e85308:;
  /* 11e85308 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e8530e sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85311 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11e85313 jge 0x11e852c7 */
  if ((C.sf==C.of)) goto L_11e852c7;
L_11e85315:;
  /* 11e85315 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85319 mov ecx, esi */
  ECX = (ESI);
  /* 11e8531b mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11e8531e je 0x11e8534c */
  if (C.zf) goto L_11e8534c;
  /* 11e85320 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85324 jne 0x11e8534c */
  if (!C.zf) goto L_11e8534c;
  /* 11e85326 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e85328 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11e8532b pop edx */
  EDX = (pop32());
L_11e8532c:;
  /* 11e8532c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8532f jne 0x11e8533d */
  if (!C.zf) goto L_11e8533d;
  /* 11e85331 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e85332 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85335 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8533b jl 0x11e8532c */
  if ((C.sf!=C.of)) goto L_11e8532c;
L_11e8533d:;
  /* 11e8533d cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85343 jne 0x11e8534c */
  if (!C.zf) goto L_11e8534c;
  /* 11e85345 push ecx */
  push32((uint32_t)(ECX));
  /* 11e85346 call 0x11e8524b */
  push32(0x11e8534bu); f_11e8524b();
  /* 11e8534b pop ecx */
  ECX = (pop32());
L_11e8534c:;
  /* 11e8534c cmp esi, dword ptr [0x11e8cb34] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8cb34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85352 je 0x11e8535e */
  if (C.zf) goto L_11e8535e;
  /* 11e85354 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85358 jg 0x11e852ae */
  if ((!C.zf&&C.sf==C.of)) goto L_11e852ae;
L_11e8535e:;
  /* 11e8535e pop edi */
  EDI = (pop32());
  /* 11e8535f pop esi */
  ESI = (pop32());
  /* 11e85360 pop ebx */
  EBX = (pop32());
  /* 11e85361 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e85362 ret  */
  ESPCHK(0x11e852a1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005363 @ 0x11e85363 (87 bytes, 34 insns) */
void f_11e85363(void) {
  FTRACE(0x11e85363u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85363 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85367 mov edx, 0x11e8cb30 */
  EDX = (0x11e8cb30u);
  /* 11e8536c push esi */
  push32((uint32_t)(ESI));
  /* 11e8536d mov ecx, edx */
  ECX = (EDX);
L_11e8536f:;
  /* 11e8536f cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85372 jbe 0x11e85379 */
  if ((C.cf||C.zf)) goto L_11e85379;
  /* 11e85374 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85377 jb 0x11e85381 */
  if (C.cf) goto L_11e85381;
L_11e85379:;
  /* 11e85379 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11e8537b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8537d je 0x11e853b6 */
  if (C.zf) goto L_11e853b6;
  /* 11e8537f jmp 0x11e8536f */
  goto L_11e8536f;
L_11e85381:;
  /* 11e85381 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11e85383 jne 0x11e853b6 */
  if (!C.zf) goto L_11e853b6;
  /* 11e85385 mov esi, eax */
  ESI = (EAX);
  /* 11e85387 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11e8538c and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11e85392 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85394 jb 0x11e853b6 */
  if (C.cf) goto L_11e853b6;
  /* 11e85396 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11e8539a mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11e8539c mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11e853a0 mov ecx, eax */
  ECX = (EAX);
  /* 11e853a2 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11e853a7 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e853a9 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11e853ab sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e853ad pop esi */
  ESI = (pop32());
  /* 11e853ae sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e853b1 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11e853b5 ret  */
  ESPCHK(0x11e85363u, _esp0);
  ESP += 4; return;
L_11e853b6:;
  /* 11e853b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e853b8 pop esi */
  ESI = (pop32());
  /* 11e853b9 ret  */
  ESPCHK(0x11e85363u, _esp0);
  ESP += 4; return;
}

/* FUN_100053ba @ 0x11e853ba (69 bytes, 19 insns) */
void f_11e853ba(void) {
  FTRACE(0x11e853bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e853ba mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e853be mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e853c2 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e853c5 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11e853c8 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11e853cc mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e853d0 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11e853d3 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e853d5 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11e853d8 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e853de mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11e853e5 jne 0x11e853fe */
  if (!C.zf) goto L_11e853fe;
  /* 11e853e7 inc dword ptr [0x11e8fa64] */
  { uint32_t _r=(r32((uint32_t)(0x11e8fa64)))+1; w32((uint32_t)(0x11e8fa64), (_r)); fl_inc(_r,32); }
  /* 11e853ed cmp dword ptr [0x11e8fa64], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11e8fa64))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e853f4 jne 0x11e853fe */
  if (!C.zf) goto L_11e853fe;
  /* 11e853f6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e853f8 call 0x11e852a1 */
  push32(0x11e853fdu); f_11e852a1();
  /* 11e853fd pop ecx */
  ECX = (pop32());
L_11e853fe:;
  /* 11e853fe ret  */
  ESPCHK(0x11e853bau, _esp0);
  ESP += 4; return;
}

/* FUN_100053ff @ 0x11e853ff (520 bytes, 180 insns) */
void f_11e853ff(void) {
  FTRACE(0x11e853ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e853ff push ebp */
  push32((uint32_t)(EBP));
  /* 11e85400 mov ebp, esp */
  EBP = (ESP);
  /* 11e85402 push ecx */
  push32((uint32_t)(ECX));
  /* 11e85403 push ecx */
  push32((uint32_t)(ECX));
  /* 11e85404 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85405 push esi */
  push32((uint32_t)(ESI));
  /* 11e85406 mov esi, dword ptr [0x11e8eb50] */
  ESI = (r32((uint32_t)(0x11e8eb50)));
  /* 11e8540c push edi */
  push32((uint32_t)(EDI));
L_11e8540d:;
  /* 11e8540d mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11e85410 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85413 je 0x11e854b8 */
  if (C.zf) goto L_11e854b8;
  /* 11e85419 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11e8541c lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11e85422 mov eax, edi */
  EAX = (EDI);
  /* 11e85424 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85426 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85429 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11e8542c shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11e8542f add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85431 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85433 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e85436 jae 0x11e85472 */
  if (!C.cf) goto L_11e85472;
L_11e85438:;
  /* 11e85438 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11e8543a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8543d cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8543f jl 0x11e8545b */
  if ((C.sf!=C.of)) goto L_11e8545b;
  /* 11e85441 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85444 jbe 0x11e8545b */
  if ((C.cf||C.zf)) goto L_11e8545b;
  /* 11e85446 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85447 push ecx */
  push32((uint32_t)(ECX));
  /* 11e85448 push eax */
  push32((uint32_t)(EAX));
  /* 11e85449 call 0x11e85607 */
  push32(0x11e8544eu); f_11e85607();
  /* 11e8544e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85453 jne 0x11e854ca */
  if (!C.zf) goto L_11e854ca;
  /* 11e85455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e85458 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11e8545b:;
  /* 11e8545b add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8545e lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11e85464 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85469 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8546b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e8546e jb 0x11e85438 */
  if (C.cf) goto L_11e85438;
  /* 11e85470 jmp 0x11e85475 */
  goto L_11e85475;
L_11e85472:;
  /* 11e85472 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11e85475:;
  /* 11e85475 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11e85478 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11e8547b lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11e8547e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e85481 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85483 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e85486 jae 0x11e854bb */
  if (!C.cf) goto L_11e854bb;
L_11e85488:;
  /* 11e85488 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e8548a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8548c jl 0x11e854a7 */
  if ((C.sf!=C.of)) goto L_11e854a7;
  /* 11e8548e cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85491 jbe 0x11e854a7 */
  if ((C.cf||C.zf)) goto L_11e854a7;
  /* 11e85493 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85494 push eax */
  push32((uint32_t)(EAX));
  /* 11e85495 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11e85498 call 0x11e85607 */
  push32(0x11e8549du); f_11e85607();
  /* 11e8549d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e854a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e854a2 jne 0x11e854ca */
  if (!C.zf) goto L_11e854ca;
  /* 11e854a4 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11e854a7:;
  /* 11e854a7 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e854ae add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e854b1 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e854b4 jb 0x11e85488 */
  if (C.cf) goto L_11e85488;
  /* 11e854b6 jmp 0x11e854bb */
  goto L_11e854bb;
L_11e854b8:;
  /* 11e854b8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11e854bb:;
  /* 11e854bb mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11e854bd cmp esi, dword ptr [0x11e8eb50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8eb50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e854c3 je 0x11e854da */
  if (C.zf) goto L_11e854da;
  /* 11e854c5 jmp 0x11e8540d */
  goto L_11e8540d;
L_11e854ca:;
  /* 11e854ca mov dword ptr [0x11e8eb50], esi */
  w32((uint32_t)(0x11e8eb50), (ESI));
  /* 11e854d0 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e854d2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11e854d5 jmp 0x11e85602 */
  goto L_11e85602;
L_11e854da:;
  /* 11e854da mov eax, 0x11e8cb30 */
  EAX = (0x11e8cb30u);
  /* 11e854df mov edi, eax */
  EDI = (EAX);
L_11e854e1:;
  /* 11e854e1 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e854e5 je 0x11e854ed */
  if (C.zf) goto L_11e854ed;
  /* 11e854e7 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e854eb jne 0x11e854f9 */
  if (!C.zf) goto L_11e854f9;
L_11e854ed:;
  /* 11e854ed mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11e854ef cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e854f1 je 0x11e855ce */
  if (C.zf) goto L_11e855ce;
  /* 11e854f7 jmp 0x11e854e1 */
  goto L_11e854e1;
L_11e854f9:;
  /* 11e854f9 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11e854fc and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e85500 mov esi, ebx */
  ESI = (EBX);
  /* 11e85502 mov eax, ebx */
  EAX = (EBX);
  /* 11e85504 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85506 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85509 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11e8550c shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11e8550f add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85512 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85515 jne 0x11e85528 */
  if (!C.zf) goto L_11e85528;
L_11e85517:;
  /* 11e85517 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8551b jge 0x11e85528 */
  if ((C.sf==C.of)) goto L_11e85528;
  /* 11e8551d add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85520 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e85523 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85526 je 0x11e85517 */
  if (C.zf) goto L_11e85517;
L_11e85528:;
  /* 11e85528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e8552b push 4 */
  push32((uint32_t)(0x4u));
  /* 11e8552d shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11e85530 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11e85535 push eax */
  push32((uint32_t)(EAX));
  /* 11e85536 push esi */
  push32((uint32_t)(ESI));
  /* 11e85537 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e8553a call dword ptr [0x11e8a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a054))), 0x11e85540u);
  /* 11e85540 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85542 jne 0x11e85600 */
  if (!C.zf) goto L_11e85600;
  /* 11e85548 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e8554a push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11e8554d push esi */
  push32((uint32_t)(ESI));
  /* 11e8554e call 0x11e86a10 */
  push32(0x11e85553u); f_11e86a10();
  /* 11e85553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e85556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85559 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e8555b mov ecx, ebx */
  ECX = (EBX);
  /* 11e8555d jle 0x11e8558f */
  if ((C.zf||C.sf!=C.of)) goto L_11e8558f;
  /* 11e8555f lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11e85562 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e85565:;
  /* 11e85565 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11e8556c lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11e8556f mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11e85572 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11e85577 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e85579 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e8557b mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11e85582 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85587 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8558a dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11e8558d jne 0x11e85565 */
  if (!C.zf) goto L_11e85565;
L_11e8558f:;
  /* 11e8558f mov dword ptr [0x11e8eb50], edi */
  w32((uint32_t)(0x11e8eb50), (EDI));
  /* 11e85595 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11e8559b:;
  /* 11e8559b cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8559d jae 0x11e855ab */
  if (!C.cf) goto L_11e855ab;
  /* 11e8559f cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e855a2 je 0x11e855a9 */
  if (C.zf) goto L_11e855a9;
  /* 11e855a4 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e855a7 jmp 0x11e8559b */
  goto L_11e8559b;
L_11e855a9:;
  /* 11e855a9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11e855ab:;
  /* 11e855ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e855ad and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e855af mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11e855b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e855b5 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11e855b8 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11e855bb sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e855bd sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e855c0 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11e855c4 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11e855ca mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11e855cc jmp 0x11e85602 */
  goto L_11e85602;
L_11e855ce:;
  /* 11e855ce call 0x11e85107 */
  push32(0x11e855d3u); f_11e85107();
  /* 11e855d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e855d5 je 0x11e85600 */
  if (C.zf) goto L_11e85600;
  /* 11e855d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e855da mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11e855dd lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11e855e1 mov dword ptr [0x11e8eb50], eax */
  w32((uint32_t)(0x11e8eb50), (EAX));
  /* 11e855e6 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e855e8 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11e855ed sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e855ef mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11e855f2 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11e855f5 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e855f8 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11e855fe jmp 0x11e85602 */
  goto L_11e85602;
L_11e85600:;
  /* 11e85600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e85602:;
  /* 11e85602 pop edi */
  EDI = (pop32());
  /* 11e85603 pop esi */
  ESI = (pop32());
  /* 11e85604 pop ebx */
  EBX = (pop32());
  /* 11e85605 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e85606 ret  */
  ESPCHK(0x11e853ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10005607 @ 0x11e85607 (292 bytes, 125 insns) */
void f_11e85607(void) {
  FTRACE(0x11e85607u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85607 push ebp */
  push32((uint32_t)(EBP));
  /* 11e85608 mov ebp, esp */
  EBP = (ESP);
  /* 11e8560a push ecx */
  push32((uint32_t)(ECX));
  /* 11e8560b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8560e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e85611 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85612 push esi */
  push32((uint32_t)(ESI));
  /* 11e85613 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11e85616 push edi */
  push32((uint32_t)(EDI));
  /* 11e85617 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11e85619 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11e8561f cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85621 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11e85624 mov eax, edi */
  EAX = (EDI);
  /* 11e85626 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11e85629 jb 0x11e8564c */
  if (C.cf) goto L_11e8564c;
  /* 11e8562b lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11e8562e mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11e85630 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85632 jae 0x11e8563b */
  if (!C.cf) goto L_11e8563b;
  /* 11e85634 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e85636 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e85639 jmp 0x11e85644 */
  goto L_11e85644;
L_11e8563b:;
  /* 11e8563b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e8563f lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11e85642 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e85644:;
  /* 11e85644 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11e85647 jmp 0x11e8571a */
  goto L_11e8571a;
L_11e8564c:;
  /* 11e8564c add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8564e cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e85651 je 0x11e85655 */
  if (C.zf) goto L_11e85655;
  /* 11e85653 mov eax, esi */
  EAX = (ESI);
L_11e85655:;
  /* 11e85655 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11e85658 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8565a jae 0x11e8569f */
  if (!C.cf) goto L_11e8569f;
L_11e8565c:;
  /* 11e8565c mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11e8565e test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11e85660 jne 0x11e85692 */
  if (!C.zf) goto L_11e85692;
  /* 11e85662 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e85664 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11e85667 pop esi */
  ESI = (pop32());
L_11e85668:;
  /* 11e85668 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e8566b jne 0x11e85671 */
  if (!C.zf) goto L_11e85671;
  /* 11e8566d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e8566e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e8566f jmp 0x11e85668 */
  goto L_11e85668;
L_11e85671:;
  /* 11e85671 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85673 jae 0x11e856c3 */
  if (!C.cf) goto L_11e856c3;
  /* 11e85675 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85678 jne 0x11e8567f */
  if (!C.zf) goto L_11e8567f;
  /* 11e8567a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11e8567d jmp 0x11e8568b */
  goto L_11e8568b;
L_11e8567f:;
  /* 11e8567f sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e85682 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85685 jb 0x11e85724 */
  if (C.cf) goto L_11e85724;
L_11e8568b:;
  /* 11e8568b mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11e8568e mov eax, ebx */
  EAX = (EBX);
  /* 11e85690 jmp 0x11e85697 */
  goto L_11e85697;
L_11e85692:;
  /* 11e85692 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11e85695 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11e85697:;
  /* 11e85697 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11e8569a cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8569d jb 0x11e8565c */
  if (C.cf) goto L_11e8565c;
L_11e8569f:;
  /* 11e8569f lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11e856a2:;
  /* 11e856a2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e856a4 jae 0x11e85724 */
  if (!C.cf) goto L_11e85724;
  /* 11e856a6 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11e856a9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e856ac jae 0x11e85724 */
  if (!C.cf) goto L_11e85724;
  /* 11e856ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e856b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e856b2 jne 0x11e856f4 */
  if (!C.zf) goto L_11e856f4;
  /* 11e856b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e856b6 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11e856b9 pop eax */
  EAX = (pop32());
L_11e856ba:;
  /* 11e856ba cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e856bd jne 0x11e856e4 */
  if (!C.zf) goto L_11e856e4;
  /* 11e856bf inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11e856c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e856c1 jmp 0x11e856ba */
  goto L_11e856ba;
L_11e856c3:;
  /* 11e856c3 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11e856c6 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e856c9 jae 0x11e856d4 */
  if (!C.cf) goto L_11e856d4;
  /* 11e856cb sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e856cd mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11e856cf mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11e856d2 jmp 0x11e856dd */
  goto L_11e856dd;
L_11e856d4:;
  /* 11e856d4 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e856d8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11e856db mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11e856dd:;
  /* 11e856dd mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e856df add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e856e2 jmp 0x11e8571a */
  goto L_11e8571a;
L_11e856e4:;
  /* 11e856e4 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e856e6 jae 0x11e856fb */
  if (!C.cf) goto L_11e856fb;
  /* 11e856e8 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11e856eb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e856ee jb 0x11e85724 */
  if (C.cf) goto L_11e85724;
  /* 11e856f0 mov esi, ebx */
  ESI = (EBX);
  /* 11e856f2 jmp 0x11e856a2 */
  goto L_11e856a2;
L_11e856f4:;
  /* 11e856f4 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11e856f7 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e856f9 jmp 0x11e856a2 */
  goto L_11e856a2;
L_11e856fb:;
  /* 11e856fb lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11e856fe cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85701 jae 0x11e8570c */
  if (!C.cf) goto L_11e8570c;
  /* 11e85703 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85705 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11e85707 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e8570a jmp 0x11e85715 */
  goto L_11e85715;
L_11e8570c:;
  /* 11e8570c and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e85710 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11e85713 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e85715:;
  /* 11e85715 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11e85717 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11e8571a:;
  /* 11e8571a imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e8571d shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e85720 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85722 jmp 0x11e85726 */
  goto L_11e85726;
L_11e85724:;
  /* 11e85724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e85726:;
  /* 11e85726 pop edi */
  EDI = (pop32());
  /* 11e85727 pop esi */
  ESI = (pop32());
  /* 11e85728 pop ebx */
  EBX = (pop32());
  /* 11e85729 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e8572a ret  */
  ESPCHK(0x11e85607u, _esp0);
  ESP += 4; return;
}

/* FUN_1000572b @ 0x11e8572b (169 bytes, 69 insns) */
void f_11e8572b(void) {
  FTRACE(0x11e8572bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e8572b push ebp */
  push32((uint32_t)(EBP));
  /* 11e8572c mov ebp, esp */
  EBP = (ESP);
  /* 11e8572e push ecx */
  push32((uint32_t)(ECX));
  /* 11e8572f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e85732 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85733 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e85736 push esi */
  push32((uint32_t)(ESI));
  /* 11e85737 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11e8573a push edi */
  push32((uint32_t)(EDI));
  /* 11e8573b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e8573e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e85742 mov eax, ebx */
  EAX = (EBX);
  /* 11e85744 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85747 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11e8574a cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8574d lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11e85751 jbe 0x11e85765 */
  if ((C.cf||C.zf)) goto L_11e85765;
  /* 11e85753 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e85756 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85758 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e8575a add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e8575c mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11e85763 jmp 0x11e857c5 */
  goto L_11e857c5;
L_11e85765:;
  /* 11e85765 jae 0x11e857cc */
  if (!C.cf) goto L_11e857cc;
  /* 11e85767 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e8576a lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11e8576d lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11e85773 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85775 jb 0x11e857cc */
  if (C.cf) goto L_11e857cc;
  /* 11e85777 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11e8577a:;
  /* 11e8577a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8577c jae 0x11e85788 */
  if (!C.cf) goto L_11e85788;
  /* 11e8577e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e85781 jne 0x11e85786 */
  if (!C.zf) goto L_11e85786;
  /* 11e85783 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e85784 jmp 0x11e8577a */
  goto L_11e8577a;
L_11e85786:;
  /* 11e85786 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11e85788:;
  /* 11e85788 jne 0x11e857cc */
  if (!C.zf) goto L_11e857cc;
  /* 11e8578a mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11e8578d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e8578f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e85791 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85793 ja 0x11e857c0 */
  if ((!C.cf&&!C.zf)) goto L_11e857c0;
  /* 11e85795 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85797 jbe 0x11e857c0 */
  if ((C.cf||C.zf)) goto L_11e857c0;
  /* 11e85799 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11e8579f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e857a1 jae 0x11e857b7 */
  if (!C.cf) goto L_11e857b7;
  /* 11e857a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e857a5 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11e857a7 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e857a9 jne 0x11e857b2 */
  if (!C.zf) goto L_11e857b2;
L_11e857ab:;
  /* 11e857ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e857ac cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e857b0 je 0x11e857ab */
  if (C.zf) goto L_11e857ab;
L_11e857b2:;
  /* 11e857b2 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11e857b5 jmp 0x11e857c0 */
  goto L_11e857c0;
L_11e857b7:;
  /* 11e857b7 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11e857bb lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11e857be mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11e857c0:;
  /* 11e857c0 sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e857c3 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11e857c5:;
  /* 11e857c5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11e857cc:;
  /* 11e857cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e857cf pop edi */
  EDI = (pop32());
  /* 11e857d0 pop esi */
  ESI = (pop32());
  /* 11e857d1 pop ebx */
  EBX = (pop32());
  /* 11e857d2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e857d3 ret  */
  ESPCHK(0x11e8572bu, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11e857d4 (32 bytes, 18 insns) */
void f_11e857d4(void) {
  FTRACE(0x11e857d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e857d4 push ebp */
  push32((uint32_t)(EBP));
  /* 11e857d5 mov ebp, esp */
  EBP = (ESP);
  /* 11e857d7 push ebx */
  push32((uint32_t)(EBX));
  /* 11e857d8 push esi */
  push32((uint32_t)(ESI));
  /* 11e857d9 push edi */
  push32((uint32_t)(EDI));
  /* 11e857da push ebp */
  push32((uint32_t)(EBP));
  /* 11e857db push 0 */
  push32((uint32_t)(0x0u));
  /* 11e857dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e857df push 0x11e857ec */
  push32((uint32_t)(0x11e857ecu));
  /* 11e857e4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e857e7 call 0x11e89902 */
  push32(0x11e857ecu); f_11e89902();
  /* 11e857ec pop ebp */
  EBP = (pop32());
  /* 11e857ed pop edi */
  EDI = (pop32());
  /* 11e857ee pop esi */
  ESI = (pop32());
  /* 11e857ef pop ebx */
  EBX = (pop32());
  /* 11e857f0 mov esp, ebp */
  ESP = (EBP);
  /* 11e857f2 pop ebp */
  EBP = (pop32());
  /* 11e857f3 ret  */
  ESPCHK(0x11e857d4u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11e85816 (104 bytes, 33 insns) */
void f_11e85816(void) {
  FTRACE(0x11e85816u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85816 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85817 push esi */
  push32((uint32_t)(ESI));
  /* 11e85818 push edi */
  push32((uint32_t)(EDI));
  /* 11e85819 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e8581d push eax */
  push32((uint32_t)(EAX));
  /* 11e8581e push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11e85820 push 0x11e857f4 */
  push32((uint32_t)(0x11e857f4u));
  /* 11e85825 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11e8582c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11e85833:;
  /* 11e85833 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11e85837 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e8583a mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11e8583d cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85840 je 0x11e85870 */
  if (C.zf) goto L_11e85870;
  /* 11e85842 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85846 je 0x11e85870 */
  if (C.zf) goto L_11e85870;
  /* 11e85848 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11e8584b mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11e8584e mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11e85852 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11e85855 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e8585a jne 0x11e8586e */
  if (!C.zf) goto L_11e8586e;
  /* 11e8585c push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11e85861 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11e85865 call 0x11e858aa */
  push32(0x11e8586au); f_11e858aa();
  /* 11e8586a call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11e8586eu);
L_11e8586e:;
  /* 11e8586e jmp 0x11e85833 */
  goto L_11e85833;
L_11e85870:;
  /* 11e85870 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11e85877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e8587a pop edi */
  EDI = (pop32());
  /* 11e8587b pop esi */
  ESI = (pop32());
  /* 11e8587c pop ebx */
  EBX = (pop32());
  /* 11e8587d ret  */
  ESPCHK(0x11e85816u, _esp0);
  ESP += 4; return;
}

/* FUN_100058aa @ 0x11e858aa (24 bytes, 10 insns) */
void f_11e858aa(void) {
  FTRACE(0x11e858aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e858aa push ebx */
  push32((uint32_t)(EBX));
  /* 11e858ab push ecx */
  push32((uint32_t)(ECX));
  /* 11e858ac mov ebx, 0x11e8eb58 */
  EBX = (0x11e8eb58u);
  /* 11e858b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e858b4 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11e858b7 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11e858ba mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11e858bd pop ecx */
  ECX = (pop32());
  /* 11e858be pop ebx */
  EBX = (pop32());
  /* 11e858bf ret 4 */
  ESPCHK(0x11e858aau, _esp0);
  ESP += 8; return;
}

/* FUN_10005989 @ 0x11e85989 (27 bytes, 11 insns) */
void f_11e85989(void) {
  FTRACE(0x11e85989u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85989 push ebp */
  push32((uint32_t)(EBP));
  /* 11e8598a mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e8598e mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11e85990 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e85993 push eax */
  push32((uint32_t)(EAX));
  /* 11e85994 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e85997 push eax */
  push32((uint32_t)(EAX));
  /* 11e85998 call 0x11e85816 */
  push32(0x11e8599du); f_11e85816();
  /* 11e8599d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e859a0 pop ebp */
  EBP = (pop32());
  /* 11e859a1 ret 4 */
  ESPCHK(0x11e85989u, _esp0);
  ESP += 8; return;
}

/* FUN_100059a4 @ 0x11e859a4 (115 bytes, 37 insns) */
void f_11e859a4(void) {
  FTRACE(0x11e859a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e859a4 push esi */
  push32((uint32_t)(ESI));
  /* 11e859a5 call 0x11e85a20 */
  push32(0x11e859aau); f_11e85a20();
  /* 11e859aa mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e859ae xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11e859b0 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e859b2 mov eax, 0x11e8eb68 */
  EAX = (0x11e8eb68u);
L_11e859b7:;
  /* 11e859b7 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e859b9 je 0x11e859dd */
  if (C.zf) goto L_11e859dd;
  /* 11e859bb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e859be inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e859bf cmp eax, 0x11e8ecd0 */
  { uint32_t _a=(EAX),_b=(0x11e8ecd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e859c4 jl 0x11e859b7 */
  if ((C.sf!=C.of)) goto L_11e859b7;
  /* 11e859c6 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e859c9 jb 0x11e859ed */
  if (C.cf) goto L_11e859ed;
  /* 11e859cb cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e859ce ja 0x11e859ed */
  if ((!C.cf&&!C.zf)) goto L_11e859ed;
  /* 11e859d0 call 0x11e85a17 */
  push32(0x11e859d5u); f_11e85a17();
  /* 11e859d5 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11e859db pop esi */
  ESI = (pop32());
  /* 11e859dc ret  */
  ESPCHK(0x11e859a4u, _esp0);
  ESP += 4; return;
L_11e859dd:;
  /* 11e859dd call 0x11e85a17 */
  push32(0x11e859e2u); f_11e85a17();
  /* 11e859e2 mov ecx, dword ptr [esi*8 + 0x11e8eb6c] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11e8eb6c)));
  /* 11e859e9 pop esi */
  ESI = (pop32());
  /* 11e859ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e859ec ret  */
  ESPCHK(0x11e859a4u, _esp0);
  ESP += 4; return;
L_11e859ed:;
  /* 11e859ed cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e859f3 jb 0x11e85a0a */
  if (C.cf) goto L_11e85a0a;
  /* 11e859f5 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e859fb ja 0x11e85a0a */
  if ((!C.cf&&!C.zf)) goto L_11e85a0a;
  /* 11e859fd call 0x11e85a17 */
  push32(0x11e85a02u); f_11e85a17();
  /* 11e85a02 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11e85a08 pop esi */
  ESI = (pop32());
  /* 11e85a09 ret  */
  ESPCHK(0x11e859a4u, _esp0);
  ESP += 4; return;
L_11e85a0a:;
  /* 11e85a0a call 0x11e85a17 */
  push32(0x11e85a0fu); f_11e85a17();
  /* 11e85a0f mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11e85a15 pop esi */
  ESI = (pop32());
  /* 11e85a16 ret  */
  ESPCHK(0x11e859a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a17 @ 0x11e85a17 (9 bytes, 3 insns) */
void f_11e85a17(void) {
  FTRACE(0x11e85a17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85a17 call 0x11e826d6 */
  push32(0x11e85a1cu); f_11e826d6();
  /* 11e85a1c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85a1f ret  */
  ESPCHK(0x11e85a17u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a20 @ 0x11e85a20 (9 bytes, 3 insns) */
void f_11e85a20(void) {
  FTRACE(0x11e85a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85a20 call 0x11e826d6 */
  push32(0x11e85a25u); f_11e826d6();
  /* 11e85a25 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85a28 ret  */
  ESPCHK(0x11e85a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a29 @ 0x11e85a29 (127 bytes, 48 insns) */
void f_11e85a29(void) {
  FTRACE(0x11e85a29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85a29 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85a2d push esi */
  push32((uint32_t)(ESI));
  /* 11e85a2e cmp ecx, dword ptr [0x11e8fec0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e8fec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85a34 push edi */
  push32((uint32_t)(EDI));
  /* 11e85a35 jae 0x11e85a8f */
  if (!C.cf) goto L_11e85a8f;
  /* 11e85a37 mov eax, ecx */
  EAX = (ECX);
  /* 11e85a39 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e85a3c lea edi, [eax*4 + 0x11e8fdc0] */
  EDI = ((uint32_t)(EAX*4 + 0x11e8fdc0));
  /* 11e85a43 mov eax, ecx */
  EAX = (ECX);
  /* 11e85a45 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85a48 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11e85a4b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e85a4d shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11e85a50 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85a52 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e85a56 je 0x11e85a8f */
  if (C.zf) goto L_11e85a8f;
  /* 11e85a58 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85a5b je 0x11e85a8f */
  if (C.zf) goto L_11e85a8f;
  /* 11e85a5d cmp dword ptr [0x11e8f7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e8f7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85a64 jne 0x11e85a85 */
  if (!C.zf) goto L_11e85a85;
  /* 11e85a66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e85a68 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85a6a je 0x11e85a7c */
  if (C.zf) goto L_11e85a7c;
  /* 11e85a6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e85a6d je 0x11e85a77 */
  if (C.zf) goto L_11e85a77;
  /* 11e85a6f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e85a70 jne 0x11e85a85 */
  if (!C.zf) goto L_11e85a85;
  /* 11e85a72 push eax */
  push32((uint32_t)(EAX));
  /* 11e85a73 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e85a75 jmp 0x11e85a7f */
  goto L_11e85a7f;
L_11e85a77:;
  /* 11e85a77 push eax */
  push32((uint32_t)(EAX));
  /* 11e85a78 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11e85a7a jmp 0x11e85a7f */
  goto L_11e85a7f;
L_11e85a7c:;
  /* 11e85a7c push eax */
  push32((uint32_t)(EAX));
  /* 11e85a7d push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11e85a7f:;
  /* 11e85a7f call dword ptr [0x11e8a048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a048))), 0x11e85a85u);
L_11e85a85:;
  /* 11e85a85 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e85a87 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11e85a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e85a8d jmp 0x11e85aa5 */
  goto L_11e85aa5;
L_11e85a8f:;
  /* 11e85a8f call 0x11e85a17 */
  push32(0x11e85a94u); f_11e85a17();
  /* 11e85a94 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e85a9a call 0x11e85a20 */
  push32(0x11e85a9fu); f_11e85a20();
  /* 11e85a9f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e85aa2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e85aa5:;
  /* 11e85aa5 pop edi */
  EDI = (pop32());
  /* 11e85aa6 pop esi */
  ESI = (pop32());
  /* 11e85aa7 ret  */
  ESPCHK(0x11e85a29u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa8 @ 0x11e85aa8 (66 bytes, 19 insns) */
void f_11e85aa8(void) {
  FTRACE(0x11e85aa8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85aa8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85aac cmp eax, dword ptr [0x11e8fec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e8fec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85ab2 jae 0x11e85ad3 */
  if (!C.cf) goto L_11e85ad3;
  /* 11e85ab4 mov ecx, eax */
  ECX = (EAX);
  /* 11e85ab6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85ab9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e85abc lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11e85abf mov ecx, dword ptr [ecx*4 + 0x11e8fdc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e85ac6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e85acb lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11e85ace je 0x11e85ad3 */
  if (C.zf) goto L_11e85ad3;
  /* 11e85ad0 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11e85ad2 ret  */
  ESPCHK(0x11e85aa8u, _esp0);
  ESP += 4; return;
L_11e85ad3:;
  /* 11e85ad3 call 0x11e85a17 */
  push32(0x11e85ad8u); f_11e85a17();
  /* 11e85ad8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e85ade call 0x11e85a20 */
  push32(0x11e85ae3u); f_11e85a20();
  /* 11e85ae3 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e85ae6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85ae9 ret  */
  ESPCHK(0x11e85aa8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aea @ 0x11e85aea (95 bytes, 34 insns) */
void f_11e85aea(void) {
  FTRACE(0x11e85aeau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85aea mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85aee push ebx */
  push32((uint32_t)(EBX));
  /* 11e85aef mov ecx, eax */
  ECX = (EAX);
  /* 11e85af1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85af4 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e85af7 push esi */
  push32((uint32_t)(ESI));
  /* 11e85af8 push edi */
  push32((uint32_t)(EDI));
  /* 11e85af9 mov esi, dword ptr [ecx*4 + 0x11e8fdc0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e85b00 lea ebx, [ecx*4 + 0x11e8fdc0] */
  EBX = ((uint32_t)(ECX*4 + 0x11e8fdc0));
  /* 11e85b07 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11e85b0a shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11e85b0d add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85b0f cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85b13 jne 0x11e85b38 */
  if (!C.zf) goto L_11e85b38;
  /* 11e85b15 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e85b17 call 0x11e83f07 */
  push32(0x11e85b1cu); f_11e83f07();
  /* 11e85b1c cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85b20 pop ecx */
  ECX = (pop32());
  /* 11e85b21 jne 0x11e85b30 */
  if (!C.zf) goto L_11e85b30;
  /* 11e85b23 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11e85b26 push eax */
  push32((uint32_t)(EAX));
  /* 11e85b27 call dword ptr [0x11e8a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a004))), 0x11e85b2du);
  /* 11e85b2d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11e85b30:;
  /* 11e85b30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e85b32 call 0x11e83f68 */
  push32(0x11e85b37u); f_11e83f68();
  /* 11e85b37 pop ecx */
  ECX = (pop32());
L_11e85b38:;
  /* 11e85b38 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e85b3a lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11e85b3e push eax */
  push32((uint32_t)(EAX));
  /* 11e85b3f call dword ptr [0x11e8a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a094))), 0x11e85b45u);
  /* 11e85b45 pop edi */
  EDI = (pop32());
  /* 11e85b46 pop esi */
  ESI = (pop32());
  /* 11e85b47 pop ebx */
  EBX = (pop32());
  /* 11e85b48 ret  */
  ESPCHK(0x11e85aeau, _esp0);
  ESP += 4; return;
}

/* FUN_10005b49 @ 0x11e85b49 (34 bytes, 10 insns) */
void f_11e85b49(void) {
  FTRACE(0x11e85b49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85b49 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e85b4d mov ecx, eax */
  ECX = (EAX);
  /* 11e85b4f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85b52 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e85b55 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11e85b58 mov ecx, dword ptr [ecx*4 + 0x11e8fdc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e85b5f lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11e85b63 push eax */
  push32((uint32_t)(EAX));
  /* 11e85b64 call dword ptr [0x11e8a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a098))), 0x11e85b6au);
  /* 11e85b6a ret  */
  ESPCHK(0x11e85b49u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b6b @ 0x11e85b6b (147 bytes, 52 insns) */
void f_11e85b6b(void) {
  FTRACE(0x11e85b6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85b6b push ebx */
  push32((uint32_t)(EBX));
  /* 11e85b6c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e85b70 cmp ebx, dword ptr [0x11e8fec0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11e8fec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85b76 push esi */
  push32((uint32_t)(ESI));
  /* 11e85b77 push edi */
  push32((uint32_t)(EDI));
  /* 11e85b78 jae 0x11e85bec */
  if (!C.cf) goto L_11e85bec;
  /* 11e85b7a mov eax, ebx */
  EAX = (EBX);
  /* 11e85b7c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e85b7f lea edi, [eax*4 + 0x11e8fdc0] */
  EDI = ((uint32_t)(EAX*4 + 0x11e8fdc0));
  /* 11e85b86 mov eax, ebx */
  EAX = (EBX);
  /* 11e85b88 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85b8b lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11e85b8e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e85b90 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11e85b93 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e85b98 je 0x11e85bec */
  if (C.zf) goto L_11e85bec;
  /* 11e85b9a push ebx */
  push32((uint32_t)(EBX));
  /* 11e85b9b call 0x11e85aea */
  push32(0x11e85ba0u); f_11e85aea();
  /* 11e85ba0 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11e85ba2 pop ecx */
  ECX = (pop32());
  /* 11e85ba3 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e85ba8 je 0x11e85bd3 */
  if (C.zf) goto L_11e85bd3;
  /* 11e85baa push ebx */
  push32((uint32_t)(EBX));
  /* 11e85bab call 0x11e85aa8 */
  push32(0x11e85bb0u); f_11e85aa8();
  /* 11e85bb0 pop ecx */
  ECX = (pop32());
  /* 11e85bb1 push eax */
  push32((uint32_t)(EAX));
  /* 11e85bb2 call dword ptr [0x11e8a044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a044))), 0x11e85bb8u);
  /* 11e85bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85bba jne 0x11e85bc6 */
  if (!C.zf) goto L_11e85bc6;
  /* 11e85bbc call dword ptr [0x11e8a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a090))), 0x11e85bc2u);
  /* 11e85bc2 mov esi, eax */
  ESI = (EAX);
  /* 11e85bc4 jmp 0x11e85bc8 */
  goto L_11e85bc8;
L_11e85bc6:;
  /* 11e85bc6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11e85bc8:;
  /* 11e85bc8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11e85bca je 0x11e85be1 */
  if (C.zf) goto L_11e85be1;
  /* 11e85bcc call 0x11e85a20 */
  push32(0x11e85bd1u); f_11e85a20();
  /* 11e85bd1 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11e85bd3:;
  /* 11e85bd3 call 0x11e85a17 */
  push32(0x11e85bd8u); f_11e85a17();
  /* 11e85bd8 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e85bde or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11e85be1:;
  /* 11e85be1 push ebx */
  push32((uint32_t)(EBX));
  /* 11e85be2 call 0x11e85b49 */
  push32(0x11e85be7u); f_11e85b49();
  /* 11e85be7 pop ecx */
  ECX = (pop32());
  /* 11e85be8 mov eax, esi */
  EAX = (ESI);
  /* 11e85bea jmp 0x11e85bfa */
  goto L_11e85bfa;
L_11e85bec:;
  /* 11e85bec call 0x11e85a17 */
  push32(0x11e85bf1u); f_11e85a17();
  /* 11e85bf1 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e85bf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e85bfa:;
  /* 11e85bfa pop edi */
  EDI = (pop32());
  /* 11e85bfb pop esi */
  ESI = (pop32());
  /* 11e85bfc pop ebx */
  EBX = (pop32());
  /* 11e85bfd ret  */
  ESPCHK(0x11e85b6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005bfe @ 0x11e85bfe (101 bytes, 34 insns) */
void f_11e85bfe(void) {
  FTRACE(0x11e85bfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85bfe push esi */
  push32((uint32_t)(ESI));
  /* 11e85bff mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11e85c03 cmp esi, dword ptr [0x11e8fec0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8fec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85c09 jae 0x11e85c4b */
  if (!C.cf) goto L_11e85c4b;
  /* 11e85c0b mov ecx, esi */
  ECX = (ESI);
  /* 11e85c0d mov eax, esi */
  EAX = (ESI);
  /* 11e85c0f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e85c12 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85c15 mov ecx, dword ptr [ecx*4 + 0x11e8fdc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11e8fdc0)));
  /* 11e85c1c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11e85c1f test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11e85c24 je 0x11e85c4b */
  if (C.zf) goto L_11e85c4b;
  /* 11e85c26 push edi */
  push32((uint32_t)(EDI));
  /* 11e85c27 push esi */
  push32((uint32_t)(ESI));
  /* 11e85c28 call 0x11e85aea */
  push32(0x11e85c2du); f_11e85aea();
  /* 11e85c2d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11e85c31 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11e85c35 push esi */
  push32((uint32_t)(ESI));
  /* 11e85c36 call 0x11e85c63 */
  push32(0x11e85c3bu); f_11e85c63();
  /* 11e85c3b push esi */
  push32((uint32_t)(ESI));
  /* 11e85c3c mov edi, eax */
  EDI = (EAX);
  /* 11e85c3e call 0x11e85b49 */
  push32(0x11e85c43u); f_11e85b49();
  /* 11e85c43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85c46 mov eax, edi */
  EAX = (EDI);
  /* 11e85c48 pop edi */
  EDI = (pop32());
  /* 11e85c49 pop esi */
  ESI = (pop32());
  /* 11e85c4a ret  */
  ESPCHK(0x11e85bfeu, _esp0);
  ESP += 4; return;
L_11e85c4b:;
  /* 11e85c4b call 0x11e85a17 */
  push32(0x11e85c50u); f_11e85a17();
  /* 11e85c50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e85c56 call 0x11e85a20 */
  push32(0x11e85c5bu); f_11e85a20();
  /* 11e85c5b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11e85c5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85c61 pop esi */
  ESI = (pop32());
  /* 11e85c62 ret  */
  ESPCHK(0x11e85bfeu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c63 @ 0x11e85c63 (395 bytes, 135 insns) */
void f_11e85c63(void) {
  FTRACE(0x11e85c63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85c63 push ebp */
  push32((uint32_t)(EBP));
  /* 11e85c64 mov ebp, esp */
  EBP = (ESP);
  /* 11e85c66 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85c6c push ebx */
  push32((uint32_t)(EBX));
  /* 11e85c6d push esi */
  push32((uint32_t)(ESI));
  /* 11e85c6e push edi */
  push32((uint32_t)(EDI));
  /* 11e85c6f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11e85c71 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85c74 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11e85c77 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11e85c7a jne 0x11e85c83 */
  if (!C.zf) goto L_11e85c83;
L_11e85c7c:;
  /* 11e85c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e85c7e jmp 0x11e85de9 */
  goto L_11e85de9;
L_11e85c83:;
  /* 11e85c83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e85c86 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e85c89 lea ebx, [eax*4 + 0x11e8fdc0] */
  EBX = ((uint32_t)(EAX*4 + 0x11e8fdc0));
  /* 11e85c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e85c93 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85c96 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11e85c99 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e85c9b shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11e85c9e test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11e85ca3 je 0x11e85cb3 */
  if (C.zf) goto L_11e85cb3;
  /* 11e85ca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e85ca7 push edi */
  push32((uint32_t)(EDI));
  /* 11e85ca8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e85cab call 0x11e87c11 */
  push32(0x11e85cb0u); f_11e87c11();
  /* 11e85cb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e85cb3:;
  /* 11e85cb3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e85cb5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85cb7 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11e85cbb je 0x11e85d82 */
  if (C.zf) goto L_11e85d82;
  /* 11e85cc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e85cc4 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e85cca mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11e85ccd jbe 0x11e85dbd */
  if ((C.cf||C.zf)) goto L_11e85dbd;
L_11e85cd3:;
  /* 11e85cd3 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11e85cd9:;
  /* 11e85cd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e85cdc sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85cdf cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85ce2 jae 0x11e85d0d */
  if (!C.cf) goto L_11e85d0d;
  /* 11e85ce4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e85ce7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11e85cea mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11e85cec cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e85cef jne 0x11e85cf8 */
  if (!C.zf) goto L_11e85cf8;
  /* 11e85cf1 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11e85cf4 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11e85cf7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e85cf8:;
  /* 11e85cf8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11e85cfa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e85cfb mov ecx, eax */
  ECX = (EAX);
  /* 11e85cfd lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11e85d03 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85d05 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85d0b jl 0x11e85cd9 */
  if ((C.sf!=C.of)) goto L_11e85cd9;
L_11e85d0d:;
  /* 11e85d0d mov edi, eax */
  EDI = (EAX);
  /* 11e85d0f lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11e85d15 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85d17 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e85d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85d1c push eax */
  push32((uint32_t)(EAX));
  /* 11e85d1d lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11e85d23 push edi */
  push32((uint32_t)(EDI));
  /* 11e85d24 push eax */
  push32((uint32_t)(EAX));
  /* 11e85d25 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e85d27 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11e85d2a call dword ptr [0x11e8a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a05c))), 0x11e85d30u);
  /* 11e85d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85d32 je 0x11e85d77 */
  if (C.zf) goto L_11e85d77;
  /* 11e85d34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e85d37 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e85d3a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85d3c jl 0x11e85d49 */
  if ((C.sf!=C.of)) goto L_11e85d49;
  /* 11e85d3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e85d41 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85d44 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85d47 jb 0x11e85cd3 */
  if (C.cf) goto L_11e85cd3;
L_11e85d49:;
  /* 11e85d49 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11e85d4b:;
  /* 11e85d4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e85d4e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85d50 jne 0x11e85de6 */
  if (!C.zf) goto L_11e85de6;
  /* 11e85d56 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85d59 je 0x11e85dbd */
  if (C.zf) goto L_11e85dbd;
  /* 11e85d5b push 5 */
  push32((uint32_t)(0x5u));
  /* 11e85d5d pop esi */
  ESI = (pop32());
  /* 11e85d5e cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85d61 jne 0x11e85daf */
  if (!C.zf) goto L_11e85daf;
  /* 11e85d63 call 0x11e85a17 */
  push32(0x11e85d68u); f_11e85a17();
  /* 11e85d68 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e85d6e call 0x11e85a20 */
  push32(0x11e85d73u); f_11e85a20();
  /* 11e85d73 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11e85d75 jmp 0x11e85db8 */
  goto L_11e85db8;
L_11e85d77:;
  /* 11e85d77 call dword ptr [0x11e8a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a090))), 0x11e85d7du);
  /* 11e85d7d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e85d80 jmp 0x11e85d49 */
  goto L_11e85d49;
L_11e85d82:;
  /* 11e85d82 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11e85d85 push edi */
  push32((uint32_t)(EDI));
  /* 11e85d86 push ecx */
  push32((uint32_t)(ECX));
  /* 11e85d87 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11e85d8a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11e85d8d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11e85d8f call dword ptr [0x11e8a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a05c))), 0x11e85d95u);
  /* 11e85d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85d97 je 0x11e85da4 */
  if (C.zf) goto L_11e85da4;
  /* 11e85d99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e85d9c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11e85d9f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e85da2 jmp 0x11e85d4b */
  goto L_11e85d4b;
L_11e85da4:;
  /* 11e85da4 call dword ptr [0x11e8a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e8a090))), 0x11e85daau);
  /* 11e85daa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e85dad jmp 0x11e85d4b */
  goto L_11e85d4b;
L_11e85daf:;
  /* 11e85daf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11e85db2 call 0x11e859a4 */
  push32(0x11e85db7u); f_11e859a4();
  /* 11e85db7 pop ecx */
  ECX = (pop32());
L_11e85db8:;
  /* 11e85db8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e85dbb jmp 0x11e85de9 */
  goto L_11e85de9;
L_11e85dbd:;
  /* 11e85dbd mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11e85dbf test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11e85dc4 je 0x11e85dd2 */
  if (C.zf) goto L_11e85dd2;
  /* 11e85dc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e85dc9 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e85dcc je 0x11e85c7c */
  if (C.zf) goto L_11e85c7c;
L_11e85dd2:;
  /* 11e85dd2 call 0x11e85a17 */
  push32(0x11e85dd7u); f_11e85a17();
  /* 11e85dd7 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11e85ddd call 0x11e85a20 */
  push32(0x11e85de2u); f_11e85a20();
  /* 11e85de2 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11e85de4 jmp 0x11e85db8 */
  goto L_11e85db8;
L_11e85de6:;
  /* 11e85de6 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e85de9:;
  /* 11e85de9 pop edi */
  EDI = (pop32());
  /* 11e85dea pop esi */
  ESI = (pop32());
  /* 11e85deb pop ebx */
  EBX = (pop32());
  /* 11e85dec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e85ded ret  */
  ESPCHK(0x11e85c63u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11e85dee (18 bytes, 6 insns) */
void f_11e85dee(void) {
  FTRACE(0x11e85deeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85dee push dword ptr [0x11e8fa80] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fa80))));
  /* 11e85df4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11e85df8 call 0x11e85e00 */
  push32(0x11e85dfdu); f_11e85e00();
  /* 11e85dfd pop ecx */
  ECX = (pop32());
  /* 11e85dfe pop ecx */
  ECX = (pop32());
  /* 11e85dff ret  */
  ESPCHK(0x11e85deeu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11e85e00 (44 bytes, 16 insns) */
void f_11e85e00(void) {
  FTRACE(0x11e85e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85e00 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85e05 ja 0x11e85e29 */
  if ((!C.cf&&!C.zf)) goto L_11e85e29;
L_11e85e07:;
  /* 11e85e07 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11e85e0b call 0x11e85e2c */
  push32(0x11e85e10u); f_11e85e2c();
  /* 11e85e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85e12 pop ecx */
  ECX = (pop32());
  /* 11e85e13 jne 0x11e85e2b */
  if (!C.zf) goto L_11e85e2b;
  /* 11e85e15 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85e19 je 0x11e85e2b */
  if (C.zf) goto L_11e85e2b;
  /* 11e85e1b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11e85e1f call 0x11e87a5e */
  push32(0x11e85e24u); f_11e87a5e();
  /* 11e85e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85e26 pop ecx */
  ECX = (pop32());
  /* 11e85e27 jne 0x11e85e07 */
  if (!C.zf) goto L_11e85e07;
L_11e85e29:;
  /* 11e85e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e85e2b:;
  /* 11e85e2b ret  */
  ESPCHK(0x11e85e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e2c @ 0x11e85e2c (231 bytes, 81 insns) */
void f_11e85e2c(void) {
  FTRACE(0x11e85e2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e85e2c push ebp */
  push32((uint32_t)(EBP));
  /* 11e85e2d mov ebp, esp */
  EBP = (ESP);
  /* 11e85e2f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e85e31 push 0x11e8a5f0 */
  push32((uint32_t)(0x11e8a5f0u));
  /* 11e85e36 push 0x11e858cc */
  push32((uint32_t)(0x11e858ccu));
  /* 11e85e3b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e85e41 push eax */
  push32((uint32_t)(EAX));
  /* 11e85e42 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e85e49 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e85e4c push ebx */
  push32((uint32_t)(EBX));
  /* 11e85e4d push esi */
  push32((uint32_t)(ESI));
  /* 11e85e4e push edi */
  push32((uint32_t)(EDI));
  /* 11e85e4f mov eax, dword ptr [0x11e8fda8] */
  EAX = (r32((uint32_t)(0x11e8fda8)));
  /* 11e85e54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85e57 jne 0x11e85e9c */
  if (!C.zf) goto L_11e85e9c;
  /* 11e85e59 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e85e5c cmp esi, dword ptr [0x11e8fda0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8fda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85e62 ja 0x11e85efb */
  if ((!C.cf&&!C.zf)) goto L_11e85efb;
  /* 11e85e68 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e85e6a call 0x11e83f07 */
  push32(0x11e85e6fu); f_11e83f07();
  /* 11e85e6f pop ecx */
  ECX = (pop32());
  /* 11e85e70 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e85e74 push esi */
  push32((uint32_t)(ESI));
  /* 11e85e75 call 0x11e8495c */
  push32(0x11e85e7au); f_11e8495c();
  /* 11e85e7a pop ecx */
  ECX = (pop32());
  /* 11e85e7b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e85e7e or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e85e82 call 0x11e85e93 */
  push32(0x11e85e87u); f_11e85e93();
  /* 11e85e87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e85e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85e8c je 0x11e85efb */
  if (C.zf) goto L_11e85efb;
  /* 11e85e8e jmp 0x11e85f19 */
  jmp_ind(0x11e85f19u); return;
  /* 11e85e93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e85e95 call 0x11e83f68 */
  push32(0x11e85e9au); f_11e83f68();
  /* 11e85e9a pop ecx */
  ECX = (pop32());
  /* 11e85e9b ret  */
  ESPCHK(0x11e85e2cu, _esp0);
  ESP += 4; return;
L_11e85e9c:;
  /* 11e85e9c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85e9f jne 0x11e85efb */
  if (!C.zf) goto L_11e85efb;
  /* 11e85ea1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e85ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85ea6 je 0x11e85eb0 */
  if (C.zf) goto L_11e85eb0;
  /* 11e85ea8 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11e85eab and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11e85eae jmp 0x11e85eb3 */
  goto L_11e85eb3;
L_11e85eb0:;
  /* 11e85eb0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e85eb2 pop esi */
  ESI = (pop32());
L_11e85eb3:;
  /* 11e85eb3 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11e85eb6 cmp esi, dword ptr [0x11e8eb54] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11e8eb54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e85ebc ja 0x11e85eec */
  if ((!C.cf&&!C.zf)) goto L_11e85eec;
  /* 11e85ebe push 9 */
  push32((uint32_t)(0x9u));
  /* 11e85ec0 call 0x11e83f07 */
  push32(0x11e85ec5u); f_11e83f07();
  /* 11e85ec5 pop ecx */
  ECX = (pop32());
  /* 11e85ec6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e85ecd mov eax, esi */
  EAX = (ESI);
  /* 11e85ecf shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e85ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11e85ed3 call 0x11e853ff */
  push32(0x11e85ed8u); f_11e853ff();
  /* 11e85ed8 pop ecx */
  ECX = (pop32());
  /* 11e85ed9 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e85edc or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11e85ee0 call 0x11e85ef2 */
  push32(0x11e85ee5u); f_11e85ef2();
  /* 11e85ee5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e85ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85eea jne 0x11e85f19 */
  if (!C.zf) { jmp_ind(0x11e85f19u); return; }
L_11e85eec:;
  /* 11e85eec push esi */
  push32((uint32_t)(ESI));
  /* 11e85eed jmp 0x11e85f0b */
  goto L_11e85f0b;
  /* 11e85eef mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e85ef2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e85ef4 call 0x11e83f68 */
  push32(0x11e85ef9u); f_11e83f68();
  /* 11e85ef9 pop ecx */
  ECX = (pop32());
  /* 11e85efa ret  */
  ESPCHK(0x11e85e2cu, _esp0);
  ESP += 4; return;
L_11e85efb:;
  /* 11e85efb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e85efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e85f00 jne 0x11e85f05 */
  if (!C.zf) goto L_11e85f05;
  /* 11e85f02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e85f04 pop eax */
  EAX = (pop32());
L_11e85f05:;
  /* 11e85f05 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e85f08 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11e85f0a push eax */
  push32((uint32_t)(EAX));
L_11e85f0b:;
  /* 11e85f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e85f0d push dword ptr [0x11e8fda4] */
  push32((uint32_t)(r32((uint32_t)(0x11e8fda4))));
}

