#include "recomp.h"

/* FUN_10001000 @ 0x11761000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11761000(void) {
  FTRACE(0x11761000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761002 call dword ptr [0x11765120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765120))), 0x11761008u);
  /* 11761008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176100e ja 0x1176102f */
  if ((!C.cf&&!C.zf)) goto L_1176102f;
  /* 11761010 jmp dword ptr [eax*4 + 0x11761038] */
  switch (EAX) {
    case 0: goto L_11761017;
    case 1: goto L_1176101d;
    case 2: goto L_11761023;
    case 3: goto L_11761029;
    default: x86_unimpl("switch@0x11761010 out of table"); return;
  }
L_11761017:;
  /* 11761017 mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 1176101c ret  */
  ESPCHK(0x11761000u, _esp0);
  ESP += 4; return;
L_1176101d:;
  /* 1176101d mov eax, 0x1388 */
  EAX = (0x1388u);
  /* 11761022 ret  */
  ESPCHK(0x11761000u, _esp0);
  ESP += 4; return;
L_11761023:;
  /* 11761023 mov eax, 0xdac */
  EAX = (0xdacu);
  /* 11761028 ret  */
  ESPCHK(0x11761000u, _esp0);
  ESP += 4; return;
L_11761029:;
  /* 11761029 mov eax, 0x7d0 */
  EAX = (0x7d0u);
  /* 1176102e ret  */
  ESPCHK(0x11761000u, _esp0);
  ESP += 4; return;
L_1176102f:;
  /* 1176102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11761034 ret  */
  ESPCHK(0x11761000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11761050 (644 bytes, 172 insns) */
void f_11761050(void) {
  FTRACE(0x11761050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761050 push esi */
  push32((uint32_t)(ESI));
  /* 11761051 mov esi, dword ptr [0x11765104] */
  ESI = (r32((uint32_t)(0x11765104)));
  /* 11761057 push edi */
  push32((uint32_t)(EDI));
  /* 11761058 push 0x11766164 */
  push32((uint32_t)(0x11766164u));
  /* 1176105d push 0x11766580 */
  push32((uint32_t)(0x11766580u));
  /* 11761062 call esi */
  call_ind((uint32_t)(ESI), 0x11761064u);
  /* 11761064 push 0x1176615c */
  push32((uint32_t)(0x1176615cu));
  /* 11761069 push 0x11766628 */
  push32((uint32_t)(0x11766628u));
  /* 1176106e call esi */
  call_ind((uint32_t)(ESI), 0x11761070u);
  /* 11761070 push 0x11766154 */
  push32((uint32_t)(0x11766154u));
  /* 11761075 push 0x117665e0 */
  push32((uint32_t)(0x117665e0u));
  /* 1176107a call esi */
  call_ind((uint32_t)(ESI), 0x1176107cu);
  /* 1176107c push 0x1176614c */
  push32((uint32_t)(0x1176614cu));
  /* 11761081 push 0x11766630 */
  push32((uint32_t)(0x11766630u));
  /* 11761086 call esi */
  call_ind((uint32_t)(ESI), 0x11761088u);
  /* 11761088 push 0x11766144 */
  push32((uint32_t)(0x11766144u));
  /* 1176108d push 0x11766638 */
  push32((uint32_t)(0x11766638u));
  /* 11761092 call esi */
  call_ind((uint32_t)(ESI), 0x11761094u);
  /* 11761094 push 0x1176613c */
  push32((uint32_t)(0x1176613cu));
  /* 11761099 push 0x11766640 */
  push32((uint32_t)(0x11766640u));
  /* 1176109e call esi */
  call_ind((uint32_t)(ESI), 0x117610a0u);
  /* 117610a0 push 0x11766138 */
  push32((uint32_t)(0x11766138u));
  /* 117610a5 push 0x117665b8 */
  push32((uint32_t)(0x117665b8u));
  /* 117610aa call esi */
  call_ind((uint32_t)(ESI), 0x117610acu);
  /* 117610ac push 0x11766134 */
  push32((uint32_t)(0x11766134u));
  /* 117610b1 push 0x117665c0 */
  push32((uint32_t)(0x117665c0u));
  /* 117610b6 call esi */
  call_ind((uint32_t)(ESI), 0x117610b8u);
  /* 117610b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117610bb push 0x11766130 */
  push32((uint32_t)(0x11766130u));
  /* 117610c0 push 0x117665c8 */
  push32((uint32_t)(0x117665c8u));
  /* 117610c5 call esi */
  call_ind((uint32_t)(ESI), 0x117610c7u);
  /* 117610c7 push 0x1176612c */
  push32((uint32_t)(0x1176612cu));
  /* 117610cc push 0x117665d0 */
  push32((uint32_t)(0x117665d0u));
  /* 117610d1 call esi */
  call_ind((uint32_t)(ESI), 0x117610d3u);
  /* 117610d3 push 0x11766128 */
  push32((uint32_t)(0x11766128u));
  /* 117610d8 push 0x117665d8 */
  push32((uint32_t)(0x117665d8u));
  /* 117610dd call esi */
  call_ind((uint32_t)(ESI), 0x117610dfu);
  /* 117610df push 0x11766124 */
  push32((uint32_t)(0x11766124u));
  /* 117610e4 push 0x117665a8 */
  push32((uint32_t)(0x117665a8u));
  /* 117610e9 call esi */
  call_ind((uint32_t)(ESI), 0x117610ebu);
  /* 117610eb push 0x11766120 */
  push32((uint32_t)(0x11766120u));
  /* 117610f0 push 0x117665b0 */
  push32((uint32_t)(0x117665b0u));
  /* 117610f5 call esi */
  call_ind((uint32_t)(ESI), 0x117610f7u);
  /* 117610f7 push 0x11766118 */
  push32((uint32_t)(0x11766118u));
  /* 117610fc push 0x11766590 */
  push32((uint32_t)(0x11766590u));
  /* 11761101 call esi */
  call_ind((uint32_t)(ESI), 0x11761103u);
  /* 11761103 push 0x11766110 */
  push32((uint32_t)(0x11766110u));
  /* 11761108 push 0x11766598 */
  push32((uint32_t)(0x11766598u));
  /* 1176110d call esi */
  call_ind((uint32_t)(ESI), 0x1176110fu);
  /* 1176110f mov esi, dword ptr [0x11765108] */
  ESI = (r32((uint32_t)(0x11765108)));
  /* 11761115 push 0x11766108 */
  push32((uint32_t)(0x11766108u));
  /* 1176111a push 0x11766548 */
  push32((uint32_t)(0x11766548u));
  /* 1176111f call esi */
  call_ind((uint32_t)(ESI), 0x11761121u);
  /* 11761121 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761124 push 0x11766100 */
  push32((uint32_t)(0x11766100u));
  /* 11761129 push 0x117665f0 */
  push32((uint32_t)(0x117665f0u));
  /* 1176112e call esi */
  call_ind((uint32_t)(ESI), 0x11761130u);
  /* 11761130 push 0x117660f8 */
  push32((uint32_t)(0x117660f8u));
  /* 11761135 push 0x11766670 */
  push32((uint32_t)(0x11766670u));
  /* 1176113a call esi */
  call_ind((uint32_t)(ESI), 0x1176113cu);
  /* 1176113c push 0x117660f0 */
  push32((uint32_t)(0x117660f0u));
  /* 11761141 push 0x11766678 */
  push32((uint32_t)(0x11766678u));
  /* 11761146 call esi */
  call_ind((uint32_t)(ESI), 0x11761148u);
  /* 11761148 push 0x117660e8 */
  push32((uint32_t)(0x117660e8u));
  /* 1176114d push 0x11766680 */
  push32((uint32_t)(0x11766680u));
  /* 11761152 call esi */
  call_ind((uint32_t)(ESI), 0x11761154u);
  /* 11761154 push 0x117660e4 */
  push32((uint32_t)(0x117660e4u));
  /* 11761159 push 0x11766648 */
  push32((uint32_t)(0x11766648u));
  /* 1176115e call esi */
  call_ind((uint32_t)(ESI), 0x11761160u);
  /* 11761160 push 0x117660e0 */
  push32((uint32_t)(0x117660e0u));
  /* 11761165 push 0x11766650 */
  push32((uint32_t)(0x11766650u));
  /* 1176116a call esi */
  call_ind((uint32_t)(ESI), 0x1176116cu);
  /* 1176116c push 0x117660dc */
  push32((uint32_t)(0x117660dcu));
  /* 11761171 push 0x11766658 */
  push32((uint32_t)(0x11766658u));
  /* 11761176 call esi */
  call_ind((uint32_t)(ESI), 0x11761178u);
  /* 11761178 push 0x117660d8 */
  push32((uint32_t)(0x117660d8u));
  /* 1176117d push 0x11766660 */
  push32((uint32_t)(0x11766660u));
  /* 11761182 call esi */
  call_ind((uint32_t)(ESI), 0x11761184u);
  /* 11761184 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761187 push 0x117660d4 */
  push32((uint32_t)(0x117660d4u));
  /* 1176118c push 0x11766668 */
  push32((uint32_t)(0x11766668u));
  /* 11761191 call esi */
  call_ind((uint32_t)(ESI), 0x11761193u);
  /* 11761193 push 0x117660d0 */
  push32((uint32_t)(0x117660d0u));
  /* 11761198 push 0x11766618 */
  push32((uint32_t)(0x11766618u));
  /* 1176119d call esi */
  call_ind((uint32_t)(ESI), 0x1176119fu);
  /* 1176119f push 0x117660cc */
  push32((uint32_t)(0x117660ccu));
  /* 117611a4 push 0x11766620 */
  push32((uint32_t)(0x11766620u));
  /* 117611a9 call esi */
  call_ind((uint32_t)(ESI), 0x117611abu);
  /* 117611ab push 0x117660c4 */
  push32((uint32_t)(0x117660c4u));
  /* 117611b0 push 0x11766530 */
  push32((uint32_t)(0x11766530u));
  /* 117611b5 call esi */
  call_ind((uint32_t)(ESI), 0x117611b7u);
  /* 117611b7 push 0x117660bc */
  push32((uint32_t)(0x117660bcu));
  /* 117611bc push 0x11766570 */
  push32((uint32_t)(0x11766570u));
  /* 117611c1 call esi */
  call_ind((uint32_t)(ESI), 0x117611c3u);
  /* 117611c3 push 0x117660b4 */
  push32((uint32_t)(0x117660b4u));
  /* 117611c8 push 0x11766610 */
  push32((uint32_t)(0x11766610u));
  /* 117611cd call esi */
  call_ind((uint32_t)(ESI), 0x117611cfu);
  /* 117611cf push 0x117660ac */
  push32((uint32_t)(0x117660acu));
  /* 117611d4 push 0x11766600 */
  push32((uint32_t)(0x11766600u));
  /* 117611d9 call esi */
  call_ind((uint32_t)(ESI), 0x117611dbu);
  /* 117611db push 0x117660a4 */
  push32((uint32_t)(0x117660a4u));
  /* 117611e0 push 0x11766608 */
  push32((uint32_t)(0x11766608u));
  /* 117611e5 call esi */
  call_ind((uint32_t)(ESI), 0x117611e7u);
  /* 117611e7 mov esi, dword ptr [0x1176510c] */
  ESI = (r32((uint32_t)(0x1176510c)));
  /* 117611ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117611f0 push 0x11766090 */
  push32((uint32_t)(0x11766090u));
  /* 117611f5 push 0x117665a0 */
  push32((uint32_t)(0x117665a0u));
  /* 117611fa call esi */
  call_ind((uint32_t)(ESI), 0x117611fcu);
  /* 117611fc push 0x11766078 */
  push32((uint32_t)(0x11766078u));
  /* 11761201 push 0x117665f8 */
  push32((uint32_t)(0x117665f8u));
  /* 11761206 call esi */
  call_ind((uint32_t)(ESI), 0x11761208u);
  /* 11761208 push 0x11766064 */
  push32((uint32_t)(0x11766064u));
  /* 1176120d push 0x117665e8 */
  push32((uint32_t)(0x117665e8u));
  /* 11761212 call esi */
  call_ind((uint32_t)(ESI), 0x11761214u);
  /* 11761214 mov esi, dword ptr [0x11765110] */
  ESI = (r32((uint32_t)(0x11765110)));
  /* 1176121a push 0x11766540 */
  push32((uint32_t)(0x11766540u));
  /* 1176121f call esi */
  call_ind((uint32_t)(ESI), 0x11761221u);
  /* 11761221 mov edi, dword ptr [0x11765114] */
  EDI = (r32((uint32_t)(0x11765114)));
  /* 11761227 push 8 */
  push32((uint32_t)(0x8u));
  /* 11761229 push 0x11766540 */
  push32((uint32_t)(0x11766540u));
  /* 1176122e call edi */
  call_ind((uint32_t)(EDI), 0x11761230u);
  /* 11761230 push 0x11766538 */
  push32((uint32_t)(0x11766538u));
  /* 11761235 call esi */
  call_ind((uint32_t)(ESI), 0x11761237u);
  /* 11761237 push 8 */
  push32((uint32_t)(0x8u));
  /* 11761239 push 0x11766538 */
  push32((uint32_t)(0x11766538u));
  /* 1176123e call edi */
  call_ind((uint32_t)(EDI), 0x11761240u);
  /* 11761240 push 0x11766578 */
  push32((uint32_t)(0x11766578u));
  /* 11761245 call esi */
  call_ind((uint32_t)(ESI), 0x11761247u);
  /* 11761247 push 8 */
  push32((uint32_t)(0x8u));
  /* 11761249 push 0x11766578 */
  push32((uint32_t)(0x11766578u));
  /* 1176124e call edi */
  call_ind((uint32_t)(EDI), 0x11761250u);
  /* 11761250 push 0x11766588 */
  push32((uint32_t)(0x11766588u));
  /* 11761255 call esi */
  call_ind((uint32_t)(ESI), 0x11761257u);
  /* 11761257 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176125a push 8 */
  push32((uint32_t)(0x8u));
  /* 1176125c push 0x11766588 */
  push32((uint32_t)(0x11766588u));
  /* 11761261 call edi */
  call_ind((uint32_t)(EDI), 0x11761263u);
  /* 11761263 push 0x11766558 */
  push32((uint32_t)(0x11766558u));
  /* 11761268 call esi */
  call_ind((uint32_t)(ESI), 0x1176126au);
  /* 1176126a push 8 */
  push32((uint32_t)(0x8u));
  /* 1176126c push 0x11766558 */
  push32((uint32_t)(0x11766558u));
  /* 11761271 call edi */
  call_ind((uint32_t)(EDI), 0x11761273u);
  /* 11761273 push 0x11766550 */
  push32((uint32_t)(0x11766550u));
  /* 11761278 call esi */
  call_ind((uint32_t)(ESI), 0x1176127au);
  /* 1176127a push 8 */
  push32((uint32_t)(0x8u));
  /* 1176127c push 0x11766550 */
  push32((uint32_t)(0x11766550u));
  /* 11761281 call edi */
  call_ind((uint32_t)(EDI), 0x11761283u);
  /* 11761283 mov esi, dword ptr [0x11765118] */
  ESI = (r32((uint32_t)(0x11765118)));
  /* 11761289 push 0x11766058 */
  push32((uint32_t)(0x11766058u));
  /* 1176128e push 0x11766568 */
  push32((uint32_t)(0x11766568u));
  /* 11761293 call esi */
  call_ind((uint32_t)(ESI), 0x11761295u);
  /* 11761295 push 0x11766050 */
  push32((uint32_t)(0x11766050u));
  /* 1176129a push 0x11766560 */
  push32((uint32_t)(0x11766560u));
  /* 1176129f call esi */
  call_ind((uint32_t)(ESI), 0x117612a1u);
  /* 117612a1 mov esi, dword ptr [0x1176511c] */
  ESI = (r32((uint32_t)(0x1176511c)));
  /* 117612a7 push 0x11766048 */
  push32((uint32_t)(0x11766048u));
  /* 117612ac push 1 */
  push32((uint32_t)(0x1u));
  /* 117612ae call esi */
  call_ind((uint32_t)(ESI), 0x117612b0u);
  /* 117612b0 push 0x11766040 */
  push32((uint32_t)(0x11766040u));
  /* 117612b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 117612b7 call esi */
  call_ind((uint32_t)(ESI), 0x117612b9u);
  /* 117612b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117612bc push 0x11766038 */
  push32((uint32_t)(0x11766038u));
  /* 117612c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 117612c3 call esi */
  call_ind((uint32_t)(ESI), 0x117612c5u);
  /* 117612c5 push 0x11766030 */
  push32((uint32_t)(0x11766030u));
  /* 117612ca push 4 */
  push32((uint32_t)(0x4u));
  /* 117612cc call esi */
  call_ind((uint32_t)(ESI), 0x117612ceu);
  /* 117612ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117612d1 pop edi */
  EDI = (pop32());
  /* 117612d2 pop esi */
  ESI = (pop32());
  /* 117612d3 ret  */
  ESPCHK(0x11761050u, _esp0);
  ESP += 4; return;
}

/* FUN_100012e0 @ 0x117612e0 (20 bytes, 6 insns) */
void f_117612e0(void) {
  FTRACE(0x117612e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117612e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117612e4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117612e5 jne 0x117612ec */
  if (!C.zf) goto L_117612ec;
  /* 117612e7 call 0x11761050 */
  push32(0x117612ecu); f_11761050();
L_117612ec:;
  /* 117612ec mov eax, 1 */
  EAX = (0x1u);
  /* 117612f1 ret 0xc */
  ESPCHK(0x117612e0u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x11761300 (2455 bytes, 820 insns) */
void f_11761300(void) {
  FTRACE(0x11761300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761300 push ebx */
  push32((uint32_t)(EBX));
  /* 11761301 push ebp */
  push32((uint32_t)(EBP));
  /* 11761302 push esi */
  push32((uint32_t)(ESI));
  /* 11761303 push edi */
  push32((uint32_t)(EDI));
  /* 11761304 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761306 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x1176130cu);
  /* 1176130c mov edi, dword ptr [0x117650b4] */
  EDI = (r32((uint32_t)(0x117650b4)));
  /* 11761312 mov ebp, dword ptr [0x117650b8] */
  EBP = (r32((uint32_t)(0x117650b8)));
  /* 11761318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176131b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176131d je 0x1176162a */
  if (C.zf) goto L_1176162a;
  /* 11761323 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761325 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761327 call edi */
  call_ind((uint32_t)(EDI), 0x11761329u);
  /* 11761329 push 0x117661f4 */
  push32((uint32_t)(0x117661f4u));
  /* 1176132e call ebp */
  call_ind((uint32_t)(EBP), 0x11761330u);
  /* 11761330 push 0x117661ec */
  push32((uint32_t)(0x117661ecu));
  /* 11761335 call ebp */
  call_ind((uint32_t)(EBP), 0x11761337u);
  /* 11761337 call 0x11761000 */
  push32(0x1176133cu); f_11761000();
  /* 1176133c mov esi, dword ptr [0x117650bc] */
  ESI = (r32((uint32_t)(0x117650bc)));
  /* 11761342 add eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11761347 push eax */
  push32((uint32_t)(EAX));
  /* 11761348 push 0xa */
  push32((uint32_t)(0xau));
  /* 1176134a call esi */
  call_ind((uint32_t)(ESI), 0x1176134cu);
  /* 1176134c call 0x11761000 */
  push32(0x11761351u); f_11761000();
  /* 11761351 add eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11761356 push eax */
  push32((uint32_t)(EAX));
  /* 11761357 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11761359 call esi */
  call_ind((uint32_t)(ESI), 0x1176135bu);
  /* 1176135b call 0x11761000 */
  push32(0x11761360u); f_11761000();
  /* 11761360 add eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11761365 push eax */
  push32((uint32_t)(EAX));
  /* 11761366 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11761368 call esi */
  call_ind((uint32_t)(ESI), 0x1176136au);
  /* 1176136a mov esi, dword ptr [0x117650c0] */
  ESI = (r32((uint32_t)(0x117650c0)));
  /* 11761370 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11761375 push 3 */
  push32((uint32_t)(0x3u));
  /* 11761377 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761379 call esi */
  call_ind((uint32_t)(ESI), 0x1176137bu);
  /* 1176137b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11761380 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761382 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761384 call esi */
  call_ind((uint32_t)(ESI), 0x11761386u);
  /* 11761386 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761389 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1176138e push 4 */
  push32((uint32_t)(0x4u));
  /* 11761390 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761392 call esi */
  call_ind((uint32_t)(ESI), 0x11761394u);
  /* 11761394 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11761399 push 5 */
  push32((uint32_t)(0x5u));
  /* 1176139b push 1 */
  push32((uint32_t)(0x1u));
  /* 1176139d call esi */
  call_ind((uint32_t)(ESI), 0x1176139fu);
  /* 1176139f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117613a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117613a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117613a8 call esi */
  call_ind((uint32_t)(ESI), 0x117613aau);
  /* 117613aa push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117613af push 2 */
  push32((uint32_t)(0x2u));
  /* 117613b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117613b3 call esi */
  call_ind((uint32_t)(ESI), 0x117613b5u);
  /* 117613b5 mov ebx, dword ptr [0x117650c4] */
  EBX = (r32((uint32_t)(0x117650c4)));
  /* 117613bb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 117613bd push 1 */
  push32((uint32_t)(0x1u));
  /* 117613bf call ebx */
  call_ind((uint32_t)(EBX), 0x117613c1u);
  /* 117613c1 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 117613c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 117613c5 call ebx */
  call_ind((uint32_t)(EBX), 0x117613c7u);
  /* 117613c7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117613ca push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 117613cc push 5 */
  push32((uint32_t)(0x5u));
  /* 117613ce call ebx */
  call_ind((uint32_t)(EBX), 0x117613d0u);
  /* 117613d0 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 117613d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117613d4 call ebx */
  call_ind((uint32_t)(EBX), 0x117613d6u);
  /* 117613d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117613d8 call dword ptr [0x11765120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765120))), 0x117613deu);
  /* 117613de mov ebx, dword ptr [0x117650c8] */
  EBX = (r32((uint32_t)(0x117650c8)));
  /* 117613e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117613e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117613e9 jne 0x11761444 */
  if (!C.zf) goto L_11761444;
  /* 117613eb push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117613f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 117613f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117613f4 call esi */
  call_ind((uint32_t)(ESI), 0x117613f6u);
  /* 117613f6 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117613fb push 1 */
  push32((uint32_t)(0x1u));
  /* 117613fd push 0 */
  push32((uint32_t)(0x0u));
  /* 117613ff call esi */
  call_ind((uint32_t)(ESI), 0x11761401u);
  /* 11761401 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11761406 push 4 */
  push32((uint32_t)(0x4u));
  /* 11761408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176140a call esi */
  call_ind((uint32_t)(ESI), 0x1176140cu);
  /* 1176140c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11761411 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761415 call esi */
  call_ind((uint32_t)(ESI), 0x11761417u);
  /* 11761417 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1176141c push 0 */
  push32((uint32_t)(0x0u));
  /* 1176141e push 0 */
  push32((uint32_t)(0x0u));
  /* 11761420 call esi */
  call_ind((uint32_t)(ESI), 0x11761422u);
  /* 11761422 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11761427 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761429 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176142b call esi */
  call_ind((uint32_t)(ESI), 0x1176142du);
  /* 1176142d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761430 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761432 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761434 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761436 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761438 push 0x117661e0 */
  push32((uint32_t)(0x117661e0u));
  /* 1176143d push 1 */
  push32((uint32_t)(0x1u));
  /* 1176143f call ebx */
  call_ind((uint32_t)(EBX), 0x11761441u);
  /* 11761441 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761444:;
  /* 11761444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761446 call dword ptr [0x11765120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765120))), 0x1176144cu);
  /* 1176144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176144f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761452 jne 0x117614ad */
  if (!C.zf) goto L_117614ad;
  /* 11761454 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11761459 push 3 */
  push32((uint32_t)(0x3u));
  /* 1176145b push 0 */
  push32((uint32_t)(0x0u));
  /* 1176145d call esi */
  call_ind((uint32_t)(ESI), 0x1176145fu);
  /* 1176145f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11761464 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761466 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761468 call esi */
  call_ind((uint32_t)(ESI), 0x1176146au);
  /* 1176146a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1176146f push 4 */
  push32((uint32_t)(0x4u));
  /* 11761471 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761473 call esi */
  call_ind((uint32_t)(ESI), 0x11761475u);
  /* 11761475 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1176147a push 5 */
  push32((uint32_t)(0x5u));
  /* 1176147c push 0 */
  push32((uint32_t)(0x0u));
  /* 1176147e call esi */
  call_ind((uint32_t)(ESI), 0x11761480u);
  /* 11761480 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11761485 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761487 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761489 call esi */
  call_ind((uint32_t)(ESI), 0x1176148bu);
  /* 1176148b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11761490 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761492 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761494 call esi */
  call_ind((uint32_t)(ESI), 0x11761496u);
  /* 11761496 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761499 push 2 */
  push32((uint32_t)(0x2u));
  /* 1176149b push 1 */
  push32((uint32_t)(0x1u));
  /* 1176149d push 1 */
  push32((uint32_t)(0x1u));
  /* 1176149f push 0 */
  push32((uint32_t)(0x0u));
  /* 117614a1 push 0x117661e0 */
  push32((uint32_t)(0x117661e0u));
  /* 117614a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117614a8 call ebx */
  call_ind((uint32_t)(EBX), 0x117614aau);
  /* 117614aa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117614ad:;
  /* 117614ad push 0 */
  push32((uint32_t)(0x0u));
  /* 117614af call dword ptr [0x11765120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765120))), 0x117614b5u);
  /* 117614b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117614b8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117614bb jne 0x11761516 */
  if (!C.zf) goto L_11761516;
  /* 117614bd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117614c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 117614c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117614c6 call esi */
  call_ind((uint32_t)(ESI), 0x117614c8u);
  /* 117614c8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117614cd push 1 */
  push32((uint32_t)(0x1u));
  /* 117614cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117614d1 call esi */
  call_ind((uint32_t)(ESI), 0x117614d3u);
  /* 117614d3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117614d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 117614da push 0 */
  push32((uint32_t)(0x0u));
  /* 117614dc call esi */
  call_ind((uint32_t)(ESI), 0x117614deu);
  /* 117614de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117614e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 117614e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117614e7 call esi */
  call_ind((uint32_t)(ESI), 0x117614e9u);
  /* 117614e9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117614ee push 0 */
  push32((uint32_t)(0x0u));
  /* 117614f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117614f2 call esi */
  call_ind((uint32_t)(ESI), 0x117614f4u);
  /* 117614f4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117614f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117614fb push 0 */
  push32((uint32_t)(0x0u));
  /* 117614fd call esi */
  call_ind((uint32_t)(ESI), 0x117614ffu);
  /* 117614ff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761502 push 3 */
  push32((uint32_t)(0x3u));
  /* 11761504 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761506 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176150a push 0x117661e0 */
  push32((uint32_t)(0x117661e0u));
  /* 1176150f push 1 */
  push32((uint32_t)(0x1u));
  /* 11761511 call ebx */
  call_ind((uint32_t)(EBX), 0x11761513u);
  /* 11761513 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761516:;
  /* 11761516 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761518 call dword ptr [0x11765120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765120))), 0x1176151eu);
  /* 1176151e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761521 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761524 jne 0x1176157e */
  if (!C.zf) goto L_1176157e;
  /* 11761526 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1176152b push eax */
  push32((uint32_t)(EAX));
  /* 1176152c push 0 */
  push32((uint32_t)(0x0u));
  /* 1176152e call esi */
  call_ind((uint32_t)(ESI), 0x11761530u);
  /* 11761530 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11761535 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761537 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761539 call esi */
  call_ind((uint32_t)(ESI), 0x1176153bu);
  /* 1176153b push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11761540 push 4 */
  push32((uint32_t)(0x4u));
  /* 11761542 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761544 call esi */
  call_ind((uint32_t)(ESI), 0x11761546u);
  /* 11761546 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1176154b push 5 */
  push32((uint32_t)(0x5u));
  /* 1176154d push 0 */
  push32((uint32_t)(0x0u));
  /* 1176154f call esi */
  call_ind((uint32_t)(ESI), 0x11761551u);
  /* 11761551 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11761556 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176155a call esi */
  call_ind((uint32_t)(ESI), 0x1176155cu);
  /* 1176155c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11761561 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761563 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761565 call esi */
  call_ind((uint32_t)(ESI), 0x11761567u);
  /* 11761567 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176156a push 3 */
  push32((uint32_t)(0x3u));
  /* 1176156c push 1 */
  push32((uint32_t)(0x1u));
  /* 1176156e push 1 */
  push32((uint32_t)(0x1u));
  /* 11761570 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761572 push 0x117661e0 */
  push32((uint32_t)(0x117661e0u));
  /* 11761577 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761579 call ebx */
  call_ind((uint32_t)(EBX), 0x1176157bu);
  /* 1176157b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1176157e:;
  /* 1176157e mov ebx, dword ptr [0x117650cc] */
  EBX = (r32((uint32_t)(0x117650cc)));
  /* 11761584 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761586 push 0x117665b8 */
  push32((uint32_t)(0x117665b8u));
  /* 1176158b call ebx */
  call_ind((uint32_t)(EBX), 0x1176158du);
  /* 1176158d mov esi, dword ptr [0x117650d0] */
  ESI = (r32((uint32_t)(0x117650d0)));
  /* 11761593 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11761598 push 0x11766648 */
  push32((uint32_t)(0x11766648u));
  /* 1176159d push 3 */
  push32((uint32_t)(0x3u));
  /* 1176159f call esi */
  call_ind((uint32_t)(ESI), 0x117615a1u);
  /* 117615a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117615a3 push 0x117665c0 */
  push32((uint32_t)(0x117665c0u));
  /* 117615a8 call ebx */
  call_ind((uint32_t)(EBX), 0x117615aau);
  /* 117615aa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117615ac push 0x11766650 */
  push32((uint32_t)(0x11766650u));
  /* 117615b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 117615b3 call esi */
  call_ind((uint32_t)(ESI), 0x117615b5u);
  /* 117615b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117615b7 push 0x117665c8 */
  push32((uint32_t)(0x117665c8u));
  /* 117615bc call ebx */
  call_ind((uint32_t)(EBX), 0x117615beu);
  /* 117615be push 0x80 */
  push32((uint32_t)(0x80u));
  /* 117615c3 push 0x11766658 */
  push32((uint32_t)(0x11766658u));
  /* 117615c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 117615ca call esi */
  call_ind((uint32_t)(ESI), 0x117615ccu);
  /* 117615cc push 0 */
  push32((uint32_t)(0x0u));
  /* 117615ce push 0x117665d0 */
  push32((uint32_t)(0x117665d0u));
  /* 117615d3 call ebx */
  call_ind((uint32_t)(EBX), 0x117615d5u);
  /* 117615d5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117615d8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117615da push 0x11766660 */
  push32((uint32_t)(0x11766660u));
  /* 117615df push 3 */
  push32((uint32_t)(0x3u));
  /* 117615e1 call esi */
  call_ind((uint32_t)(ESI), 0x117615e3u);
  /* 117615e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117615e5 push 0x117665d8 */
  push32((uint32_t)(0x117665d8u));
  /* 117615ea call ebx */
  call_ind((uint32_t)(EBX), 0x117615ecu);
  /* 117615ec push 0x80 */
  push32((uint32_t)(0x80u));
  /* 117615f1 push 0x11766668 */
  push32((uint32_t)(0x11766668u));
  /* 117615f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 117615f8 call esi */
  call_ind((uint32_t)(ESI), 0x117615fau);
  /* 117615fa push 0 */
  push32((uint32_t)(0x0u));
  /* 117615fc push 0x117665a8 */
  push32((uint32_t)(0x117665a8u));
  /* 11761601 call ebx */
  call_ind((uint32_t)(EBX), 0x11761603u);
  /* 11761603 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11761608 push 0x11766618 */
  push32((uint32_t)(0x11766618u));
  /* 1176160d push 3 */
  push32((uint32_t)(0x3u));
  /* 1176160f call esi */
  call_ind((uint32_t)(ESI), 0x11761611u);
  /* 11761611 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761613 push 0x117665b0 */
  push32((uint32_t)(0x117665b0u));
  /* 11761618 call ebx */
  call_ind((uint32_t)(EBX), 0x1176161au);
  /* 1176161a push 0 */
  push32((uint32_t)(0x0u));
  /* 1176161c push 0x11766620 */
  push32((uint32_t)(0x11766620u));
  /* 11761621 push 3 */
  push32((uint32_t)(0x3u));
  /* 11761623 call esi */
  call_ind((uint32_t)(ESI), 0x11761625u);
  /* 11761625 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761628 jmp 0x11761630 */
  goto L_11761630;
L_1176162a:;
  /* 1176162a mov ebx, dword ptr [0x117650cc] */
  EBX = (r32((uint32_t)(0x117650cc)));
L_11761630:;
  /* 11761630 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761632 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761638u);
  /* 11761638 mov esi, dword ptr [0x117650d4] */
  ESI = (r32((uint32_t)(0x117650d4)));
  /* 1176163e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761641 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761643 je 0x117616f0 */
  if (C.zf) goto L_117616f0;
  /* 11761649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176164b push 0x11766548 */
  push32((uint32_t)(0x11766548u));
  /* 11761650 call dword ptr [0x117650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650d8))), 0x11761656u);
  /* 11761656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176165b je 0x117616f0 */
  if (C.zf) goto L_117616f0;
  /* 11761661 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761663 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761665 call edi */
  call_ind((uint32_t)(EDI), 0x11761667u);
  /* 11761667 push 0x117661d8 */
  push32((uint32_t)(0x117661d8u));
  /* 1176166c call ebp */
  call_ind((uint32_t)(EBP), 0x1176166eu);
  /* 1176166e push 0x117661d0 */
  push32((uint32_t)(0x117661d0u));
  /* 11761673 call dword ptr [0x117650dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650dc))), 0x11761679u);
  /* 11761679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176167c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176167e je 0x117616d3 */
  if (C.zf) goto L_117616d3;
  /* 11761680 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761682 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761684 call dword ptr [0x117650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e0))), 0x1176168au);
  /* 1176168a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176168d cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761692 jle 0x117616b7 */
  if ((C.zf||C.sf!=C.of)) goto L_117616b7;
  /* 11761694 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 11761699 push 1 */
  push32((uint32_t)(0x1u));
  /* 1176169b push 0 */
  push32((uint32_t)(0x0u));
  /* 1176169d call esi */
  call_ind((uint32_t)(ESI), 0x1176169fu);
  /* 1176169f push 0 */
  push32((uint32_t)(0x0u));
  /* 117616a1 push 0x11766628 */
  push32((uint32_t)(0x11766628u));
  /* 117616a6 call ebx */
  call_ind((uint32_t)(EBX), 0x117616a8u);
  /* 117616a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117616aa push 4 */
  push32((uint32_t)(0x4u));
  /* 117616ac call dword ptr [0x117650e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e4))), 0x117616b2u);
  /* 117616b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117616b5 jmp 0x117616f0 */
  goto L_117616f0;
L_117616b7:;
  /* 117616b7 push 0x117661c8 */
  push32((uint32_t)(0x117661c8u));
  /* 117616bc call ebp */
  call_ind((uint32_t)(EBP), 0x117616beu);
  /* 117616be push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117616c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117616c5 call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x117616cbu);
  /* 117616cb push 1 */
  push32((uint32_t)(0x1u));
  /* 117616cd push 3 */
  push32((uint32_t)(0x3u));
  /* 117616cf call edi */
  call_ind((uint32_t)(EDI), 0x117616d1u);
  /* 117616d1 jmp 0x117616ed */
  goto L_117616ed;
L_117616d3:;
  /* 117616d3 push 0x117661c0 */
  push32((uint32_t)(0x117661c0u));
  /* 117616d8 call ebp */
  call_ind((uint32_t)(EBP), 0x117616dau);
  /* 117616da push 0 */
  push32((uint32_t)(0x0u));
  /* 117616dc push 0x11766628 */
  push32((uint32_t)(0x11766628u));
  /* 117616e1 call ebx */
  call_ind((uint32_t)(EBX), 0x117616e3u);
  /* 117616e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 117616e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 117616e7 call dword ptr [0x117650e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e4))), 0x117616edu);
L_117616ed:;
  /* 117616ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117616f0:;
  /* 117616f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 117616f2 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x117616f8u);
  /* 117616f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117616fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117616fd je 0x1176172a */
  if (C.zf) goto L_1176172a;
  /* 117616ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11761701 call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x11761707u);
  /* 11761707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176170a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176170c je 0x1176172a */
  if (C.zf) goto L_1176172a;
  /* 1176170e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11761713 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761715 call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x1176171bu);
  /* 1176171b push 0 */
  push32((uint32_t)(0x0u));
  /* 1176171d push 3 */
  push32((uint32_t)(0x3u));
  /* 1176171f call edi */
  call_ind((uint32_t)(EDI), 0x11761721u);
  /* 11761721 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761723 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761725 call edi */
  call_ind((uint32_t)(EDI), 0x11761727u);
  /* 11761727 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1176172a:;
  /* 1176172a push 4 */
  push32((uint32_t)(0x4u));
  /* 1176172c call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761732u);
  /* 11761732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761735 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761737 je 0x117617e4 */
  if (C.zf) goto L_117617e4;
  /* 1176173d push 0 */
  push32((uint32_t)(0x0u));
  /* 1176173f push 0x117665f0 */
  push32((uint32_t)(0x117665f0u));
  /* 11761744 call dword ptr [0x117650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650d8))), 0x1176174au);
  /* 1176174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176174d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176174f je 0x117617e4 */
  if (C.zf) goto L_117617e4;
  /* 11761755 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761757 push 4 */
  push32((uint32_t)(0x4u));
  /* 11761759 call edi */
  call_ind((uint32_t)(EDI), 0x1176175bu);
  /* 1176175b push 0x117661b8 */
  push32((uint32_t)(0x117661b8u));
  /* 11761760 call ebp */
  call_ind((uint32_t)(EBP), 0x11761762u);
  /* 11761762 push 0x117661b0 */
  push32((uint32_t)(0x117661b0u));
  /* 11761767 call dword ptr [0x117650dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650dc))), 0x1176176du);
  /* 1176176d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761770 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761772 je 0x117617c7 */
  if (C.zf) goto L_117617c7;
  /* 11761774 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761778 call dword ptr [0x117650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e0))), 0x1176177eu);
  /* 1176177e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761781 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761786 jle 0x117617ab */
  if ((C.zf||C.sf!=C.of)) goto L_117617ab;
  /* 11761788 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 1176178d push 1 */
  push32((uint32_t)(0x1u));
  /* 1176178f push 0 */
  push32((uint32_t)(0x0u));
  /* 11761791 call esi */
  call_ind((uint32_t)(ESI), 0x11761793u);
  /* 11761793 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761795 push 0x117665e0 */
  push32((uint32_t)(0x117665e0u));
  /* 1176179a call ebx */
  call_ind((uint32_t)(EBX), 0x1176179cu);
  /* 1176179c push 0 */
  push32((uint32_t)(0x0u));
  /* 1176179e push 4 */
  push32((uint32_t)(0x4u));
  /* 117617a0 call dword ptr [0x117650e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e4))), 0x117617a6u);
  /* 117617a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117617a9 jmp 0x117617e4 */
  goto L_117617e4;
L_117617ab:;
  /* 117617ab push 0x117661a8 */
  push32((uint32_t)(0x117661a8u));
  /* 117617b0 call ebp */
  call_ind((uint32_t)(EBP), 0x117617b2u);
  /* 117617b2 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117617b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117617b9 call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x117617bfu);
  /* 117617bf push 1 */
  push32((uint32_t)(0x1u));
  /* 117617c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 117617c3 call edi */
  call_ind((uint32_t)(EDI), 0x117617c5u);
  /* 117617c5 jmp 0x117617e1 */
  goto L_117617e1;
L_117617c7:;
  /* 117617c7 push 0x117661a0 */
  push32((uint32_t)(0x117661a0u));
  /* 117617cc call ebp */
  call_ind((uint32_t)(EBP), 0x117617ceu);
  /* 117617ce push 0 */
  push32((uint32_t)(0x0u));
  /* 117617d0 push 0x117665e0 */
  push32((uint32_t)(0x117665e0u));
  /* 117617d5 call ebx */
  call_ind((uint32_t)(EBX), 0x117617d7u);
  /* 117617d7 push 6 */
  push32((uint32_t)(0x6u));
  /* 117617d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 117617db call dword ptr [0x117650e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e4))), 0x117617e1u);
L_117617e1:;
  /* 117617e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117617e4:;
  /* 117617e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 117617e6 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x117617ecu);
  /* 117617ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117617ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117617f1 je 0x1176181e */
  if (C.zf) goto L_1176181e;
  /* 117617f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117617f5 call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x117617fbu);
  /* 117617fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117617fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761800 je 0x1176181e */
  if (C.zf) goto L_1176181e;
  /* 11761802 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11761807 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761809 call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x1176180fu);
  /* 1176180f push 0 */
  push32((uint32_t)(0x0u));
  /* 11761811 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761813 call edi */
  call_ind((uint32_t)(EDI), 0x11761815u);
  /* 11761815 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761817 push 4 */
  push32((uint32_t)(0x4u));
  /* 11761819 call edi */
  call_ind((uint32_t)(EDI), 0x1176181bu);
  /* 1176181b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1176181e:;
  /* 1176181e push 6 */
  push32((uint32_t)(0x6u));
  /* 11761820 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761826u);
  /* 11761826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761829 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176182b je 0x11761867 */
  if (C.zf) goto L_11761867;
  /* 1176182d push 5 */
  push32((uint32_t)(0x5u));
  /* 1176182f push 0x11766670 */
  push32((uint32_t)(0x11766670u));
  /* 11761834 call dword ptr [0x117650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650d8))), 0x1176183au);
  /* 1176183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176183d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176183f jne 0x11761867 */
  if (!C.zf) goto L_11761867;
  /* 11761841 push eax */
  push32((uint32_t)(EAX));
  /* 11761842 push 6 */
  push32((uint32_t)(0x6u));
  /* 11761844 call edi */
  call_ind((uint32_t)(EDI), 0x11761846u);
  /* 11761846 push 0x11766198 */
  push32((uint32_t)(0x11766198u));
  /* 1176184b call ebp */
  call_ind((uint32_t)(EBP), 0x1176184du);
  /* 1176184d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11761852 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761856 call esi */
  call_ind((uint32_t)(ESI), 0x11761858u);
  /* 11761858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176185a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1176185c call edi */
  call_ind((uint32_t)(EDI), 0x1176185eu);
  /* 1176185e push 0 */
  push32((uint32_t)(0x0u));
  /* 11761860 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11761862 call edi */
  call_ind((uint32_t)(EDI), 0x11761864u);
  /* 11761864 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761867:;
  /* 11761867 push 7 */
  push32((uint32_t)(0x7u));
  /* 11761869 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x1176186fu);
  /* 1176186f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761872 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761874 je 0x117618b0 */
  if (C.zf) goto L_117618b0;
  /* 11761876 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761878 push 0x11766678 */
  push32((uint32_t)(0x11766678u));
  /* 1176187d call dword ptr [0x117650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650d8))), 0x11761883u);
  /* 11761883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761888 jne 0x117618b0 */
  if (!C.zf) goto L_117618b0;
  /* 1176188a push eax */
  push32((uint32_t)(EAX));
  /* 1176188b push 7 */
  push32((uint32_t)(0x7u));
  /* 1176188d call edi */
  call_ind((uint32_t)(EDI), 0x1176188fu);
  /* 1176188f push 0x11766190 */
  push32((uint32_t)(0x11766190u));
  /* 11761894 call ebp */
  call_ind((uint32_t)(EBP), 0x11761896u);
  /* 11761896 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1176189b push 1 */
  push32((uint32_t)(0x1u));
  /* 1176189d push 0 */
  push32((uint32_t)(0x0u));
  /* 1176189f call esi */
  call_ind((uint32_t)(ESI), 0x117618a1u);
  /* 117618a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117618a3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117618a5 call edi */
  call_ind((uint32_t)(EDI), 0x117618a7u);
  /* 117618a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117618a9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117618ab call edi */
  call_ind((uint32_t)(EDI), 0x117618adu);
  /* 117618ad add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117618b0:;
  /* 117618b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 117618b2 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x117618b8u);
  /* 117618b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117618bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117618bd je 0x117618f9 */
  if (C.zf) goto L_117618f9;
  /* 117618bf push 5 */
  push32((uint32_t)(0x5u));
  /* 117618c1 push 0x11766680 */
  push32((uint32_t)(0x11766680u));
  /* 117618c6 call dword ptr [0x117650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650d8))), 0x117618ccu);
  /* 117618cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117618cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117618d1 jne 0x117618f9 */
  if (!C.zf) goto L_117618f9;
  /* 117618d3 push eax */
  push32((uint32_t)(EAX));
  /* 117618d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 117618d6 call edi */
  call_ind((uint32_t)(EDI), 0x117618d8u);
  /* 117618d8 push 0x11766188 */
  push32((uint32_t)(0x11766188u));
  /* 117618dd call ebp */
  call_ind((uint32_t)(EBP), 0x117618dfu);
  /* 117618df push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 117618e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117618e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117618e8 call esi */
  call_ind((uint32_t)(ESI), 0x117618eau);
  /* 117618ea push 0 */
  push32((uint32_t)(0x0u));
  /* 117618ec push 0x10 */
  push32((uint32_t)(0x10u));
  /* 117618ee call edi */
  call_ind((uint32_t)(EDI), 0x117618f0u);
  /* 117618f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117618f2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117618f4 call edi */
  call_ind((uint32_t)(EDI), 0x117618f6u);
  /* 117618f6 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117618f9:;
  /* 117618f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 117618fb call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761901u);
  /* 11761901 mov esi, dword ptr [0x117650ec] */
  ESI = (r32((uint32_t)(0x117650ec)));
  /* 11761907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176190a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176190c je 0x1176192f */
  if (C.zf) goto L_1176192f;
  /* 1176190e push 1 */
  push32((uint32_t)(0x1u));
  /* 11761910 call esi */
  call_ind((uint32_t)(ESI), 0x11761912u);
  /* 11761912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761915 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761917 je 0x1176192f */
  if (C.zf) goto L_1176192f;
  /* 11761919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176191b push 9 */
  push32((uint32_t)(0x9u));
  /* 1176191d call edi */
  call_ind((uint32_t)(EDI), 0x1176191fu);
  /* 1176191f push 0x11766180 */
  push32((uint32_t)(0x11766180u));
  /* 11761924 call ebp */
  call_ind((uint32_t)(EBP), 0x11761926u);
  /* 11761926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761929 call dword ptr [0x117650f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650f0))), 0x1176192fu);
L_1176192f:;
  /* 1176192f push 0xa */
  push32((uint32_t)(0xau));
  /* 11761931 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761937u);
  /* 11761937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176193a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176193c je 0x1176195f */
  if (C.zf) goto L_1176195f;
  /* 1176193e push 0 */
  push32((uint32_t)(0x0u));
  /* 11761940 call esi */
  call_ind((uint32_t)(ESI), 0x11761942u);
  /* 11761942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761945 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761947 je 0x1176195f */
  if (C.zf) goto L_1176195f;
  /* 11761949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176194b push 0xa */
  push32((uint32_t)(0xau));
  /* 1176194d call edi */
  call_ind((uint32_t)(EDI), 0x1176194fu);
  /* 1176194f push 0x11766178 */
  push32((uint32_t)(0x11766178u));
  /* 11761954 call ebp */
  call_ind((uint32_t)(EBP), 0x11761956u);
  /* 11761956 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761959 call dword ptr [0x117650f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650f4))), 0x1176195fu);
L_1176195f:;
  /* 1176195f mov esi, dword ptr [0x117650b0] */
  ESI = (r32((uint32_t)(0x117650b0)));
  /* 11761965 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11761967 call esi */
  call_ind((uint32_t)(ESI), 0x11761969u);
  /* 11761969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176196c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1176196e je 0x117619b8 */
  if (C.zf) goto L_117619b8;
  /* 11761970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761972 push 0x11766530 */
  push32((uint32_t)(0x11766530u));
  /* 11761977 call dword ptr [0x117650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650d8))), 0x1176197du);
  /* 1176197d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761982 je 0x117619b8 */
  if (C.zf) goto L_117619b8;
  /* 11761984 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761986 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11761988 call edi */
  call_ind((uint32_t)(EDI), 0x1176198au);
  /* 1176198a push 0x11766170 */
  push32((uint32_t)(0x11766170u));
  /* 1176198f call ebp */
  call_ind((uint32_t)(EBP), 0x11761991u);
  /* 11761991 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761993 push 0x11766590 */
  push32((uint32_t)(0x11766590u));
  /* 11761998 call ebx */
  call_ind((uint32_t)(EBX), 0x1176199au);
  /* 1176199a mov ebp, dword ptr [0x117650e4] */
  EBP = (r32((uint32_t)(0x117650e4)));
  /* 117619a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117619a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 117619a4 call ebp */
  call_ind((uint32_t)(EBP), 0x117619a6u);
  /* 117619a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117619a8 push 0x11766598 */
  push32((uint32_t)(0x11766598u));
  /* 117619ad call ebx */
  call_ind((uint32_t)(EBX), 0x117619afu);
  /* 117619af push 0 */
  push32((uint32_t)(0x0u));
  /* 117619b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 117619b3 call ebp */
  call_ind((uint32_t)(EBP), 0x117619b5u);
  /* 117619b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117619b8:;
  /* 117619b8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117619ba call esi */
  call_ind((uint32_t)(ESI), 0x117619bcu);
  /* 117619bc mov ebx, dword ptr [0x117650f8] */
  EBX = (r32((uint32_t)(0x117650f8)));
  /* 117619c2 mov esi, dword ptr [0x117650fc] */
  ESI = (r32((uint32_t)(0x117650fc)));
  /* 117619c8 mov ebp, dword ptr [0x11765100] */
  EBP = (r32((uint32_t)(0x11765100)));
  /* 117619ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117619d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117619d3 je 0x11761a9b */
  if (C.zf) goto L_11761a9b;
  /* 117619d9 push 0xa */
  push32((uint32_t)(0xau));
  /* 117619db call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x117619e1u);
  /* 117619e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117619e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117619e6 je 0x11761a9b */
  if (C.zf) goto L_11761a9b;
  /* 117619ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 117619ee call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x117619f4u);
  /* 117619f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117619f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117619f9 jne 0x11761a9b */
  if (!C.zf) goto L_11761a9b;
  /* 117619ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11761a01 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11761a03 call edi */
  call_ind((uint32_t)(EDI), 0x11761a05u);
  /* 11761a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761a07 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11761a09 call edi */
  call_ind((uint32_t)(EDI), 0x11761a0bu);
  /* 11761a0b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11761a10 push 0xa */
  push32((uint32_t)(0xau));
  /* 11761a12 call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x11761a18u);
  /* 11761a18 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11761a1a push 0x11766678 */
  push32((uint32_t)(0x11766678u));
  /* 11761a1f push 5 */
  push32((uint32_t)(0x5u));
  /* 11761a21 push 0x117665a0 */
  push32((uint32_t)(0x117665a0u));
  /* 11761a26 push 0x11766568 */
  push32((uint32_t)(0x11766568u));
  /* 11761a2b push 0x11766540 */
  push32((uint32_t)(0x11766540u));
  /* 11761a30 call ebx */
  call_ind((uint32_t)(EBX), 0x11761a32u);
  /* 11761a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761a34 push 0x11766540 */
  push32((uint32_t)(0x11766540u));
  /* 11761a39 call dword ptr [0x117650cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650cc))), 0x11761a3fu);
  /* 11761a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11761a41 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11761a43 push 0x11766530 */
  push32((uint32_t)(0x11766530u));
  /* 11761a48 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761a4a call esi */
  call_ind((uint32_t)(ESI), 0x11761a4cu);
  /* 11761a4c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11761a51 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11761a56 push 0x11766570 */
  push32((uint32_t)(0x11766570u));
  /* 11761a5b push 5 */
  push32((uint32_t)(0x5u));
  /* 11761a5d call esi */
  call_ind((uint32_t)(ESI), 0x11761a5fu);
  /* 11761a5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11761a61 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11761a66 push 0x11766610 */
  push32((uint32_t)(0x11766610u));
  /* 11761a6b push 5 */
  push32((uint32_t)(0x5u));
  /* 11761a6d call esi */
  call_ind((uint32_t)(ESI), 0x11761a6fu);
  /* 11761a6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11761a71 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11761a73 push 0x11766600 */
  push32((uint32_t)(0x11766600u));
  /* 11761a78 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761a7a call esi */
  call_ind((uint32_t)(ESI), 0x11761a7cu);
  /* 11761a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11761a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11761a80 push 0x11766608 */
  push32((uint32_t)(0x11766608u));
  /* 11761a85 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761a87 call esi */
  call_ind((uint32_t)(ESI), 0x11761a89u);
  /* 11761a89 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761a8c push 0x11766538 */
  push32((uint32_t)(0x11766538u));
  /* 11761a91 push 0x11766540 */
  push32((uint32_t)(0x11766540u));
  /* 11761a96 call ebp */
  call_ind((uint32_t)(EBP), 0x11761a98u);
  /* 11761a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761a9b:;
  /* 11761a9b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11761a9d call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761aa3u);
  /* 11761aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761aa6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761aa8 je 0x11761ac8 */
  if (C.zf) goto L_11761ac8;
  /* 11761aaa push 0xa */
  push32((uint32_t)(0xau));
  /* 11761aac call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x11761ab2u);
  /* 11761ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761ab5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761ab7 je 0x11761ac8 */
  if (C.zf) goto L_11761ac8;
  /* 11761ab9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761abb push 0xc */
  push32((uint32_t)(0xcu));
  /* 11761abd call edi */
  call_ind((uint32_t)(EDI), 0x11761abfu);
  /* 11761abf push 0 */
  push32((uint32_t)(0x0u));
  /* 11761ac1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11761ac3 call edi */
  call_ind((uint32_t)(EDI), 0x11761ac5u);
  /* 11761ac5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761ac8:;
  /* 11761ac8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11761aca call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761ad0u);
  /* 11761ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761ad3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761ad5 je 0x11761b80 */
  if (C.zf) goto L_11761b80;
  /* 11761adb push 0xa */
  push32((uint32_t)(0xau));
  /* 11761add call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x11761ae3u);
  /* 11761ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761ae6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761ae8 je 0x11761b80 */
  if (C.zf) goto L_11761b80;
  /* 11761aee push 0 */
  push32((uint32_t)(0x0u));
  /* 11761af0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11761af2 call edi */
  call_ind((uint32_t)(EDI), 0x11761af4u);
  /* 11761af4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761af6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11761af8 call edi */
  call_ind((uint32_t)(EDI), 0x11761afau);
  /* 11761afa call 0x11761000 */
  push32(0x11761affu); f_11761000();
  /* 11761aff add eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11761b04 push eax */
  push32((uint32_t)(EAX));
  /* 11761b05 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11761b07 call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x11761b0du);
  /* 11761b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11761b0f push 0x11766670 */
  push32((uint32_t)(0x11766670u));
  /* 11761b14 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761b16 push 0x117665f8 */
  push32((uint32_t)(0x117665f8u));
  /* 11761b1b push 0x11766560 */
  push32((uint32_t)(0x11766560u));
  /* 11761b20 push 0x11766578 */
  push32((uint32_t)(0x11766578u));
  /* 11761b25 call ebx */
  call_ind((uint32_t)(EBX), 0x11761b27u);
  /* 11761b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761b29 push 0x11766578 */
  push32((uint32_t)(0x11766578u));
  /* 11761b2e call dword ptr [0x117650cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650cc))), 0x11761b34u);
  /* 11761b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761b36 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11761b3b push 0x11766570 */
  push32((uint32_t)(0x11766570u));
  /* 11761b40 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761b42 call esi */
  call_ind((uint32_t)(ESI), 0x11761b44u);
  /* 11761b44 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761b49 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11761b4e push 0x11766610 */
  push32((uint32_t)(0x11766610u));
  /* 11761b53 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761b55 call esi */
  call_ind((uint32_t)(ESI), 0x11761b57u);
  /* 11761b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761b59 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11761b5b push 0x11766600 */
  push32((uint32_t)(0x11766600u));
  /* 11761b60 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761b62 call esi */
  call_ind((uint32_t)(ESI), 0x11761b64u);
  /* 11761b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761b68 push 0x11766608 */
  push32((uint32_t)(0x11766608u));
  /* 11761b6d push 5 */
  push32((uint32_t)(0x5u));
  /* 11761b6f call esi */
  call_ind((uint32_t)(ESI), 0x11761b71u);
  /* 11761b71 push 0x11766588 */
  push32((uint32_t)(0x11766588u));
  /* 11761b76 push 0x11766578 */
  push32((uint32_t)(0x11766578u));
  /* 11761b7b call ebp */
  call_ind((uint32_t)(EBP), 0x11761b7du);
  /* 11761b7d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761b80:;
  /* 11761b80 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11761b82 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761b88u);
  /* 11761b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761b8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761b8d je 0x11761bad */
  if (C.zf) goto L_11761bad;
  /* 11761b8f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11761b91 call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x11761b97u);
  /* 11761b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761b9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761b9c je 0x11761bad */
  if (C.zf) goto L_11761bad;
  /* 11761b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11761ba0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11761ba2 call edi */
  call_ind((uint32_t)(EDI), 0x11761ba4u);
  /* 11761ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761ba6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11761ba8 call edi */
  call_ind((uint32_t)(EDI), 0x11761baau);
  /* 11761baa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761bad:;
  /* 11761bad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11761baf call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761bb5u);
  /* 11761bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761bb8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761bba je 0x11761c65 */
  if (C.zf) goto L_11761c65;
  /* 11761bc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11761bc2 call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x11761bc8u);
  /* 11761bc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761bcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761bcd je 0x11761c65 */
  if (C.zf) goto L_11761c65;
  /* 11761bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761bd5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11761bd7 call edi */
  call_ind((uint32_t)(EDI), 0x11761bd9u);
  /* 11761bd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761bdb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11761bdd call edi */
  call_ind((uint32_t)(EDI), 0x11761bdfu);
  /* 11761bdf call 0x11761000 */
  push32(0x11761be4u); f_11761000();
  /* 11761be4 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11761be9 push eax */
  push32((uint32_t)(EAX));
  /* 11761bea push 0xc */
  push32((uint32_t)(0xcu));
  /* 11761bec call dword ptr [0x117650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650bc))), 0x11761bf2u);
  /* 11761bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761bf4 push 0x11766680 */
  push32((uint32_t)(0x11766680u));
  /* 11761bf9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761bfb push 0x117665e8 */
  push32((uint32_t)(0x117665e8u));
  /* 11761c00 push 0x11766560 */
  push32((uint32_t)(0x11766560u));
  /* 11761c05 push 0x11766558 */
  push32((uint32_t)(0x11766558u));
  /* 11761c0a call ebx */
  call_ind((uint32_t)(EBX), 0x11761c0cu);
  /* 11761c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11761c0e push 0x11766558 */
  push32((uint32_t)(0x11766558u));
  /* 11761c13 call dword ptr [0x117650cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650cc))), 0x11761c19u);
  /* 11761c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761c1b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11761c20 push 0x11766570 */
  push32((uint32_t)(0x11766570u));
  /* 11761c25 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761c27 call esi */
  call_ind((uint32_t)(ESI), 0x11761c29u);
  /* 11761c29 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11761c2e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11761c33 push 0x11766610 */
  push32((uint32_t)(0x11766610u));
  /* 11761c38 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761c3a call esi */
  call_ind((uint32_t)(ESI), 0x11761c3cu);
  /* 11761c3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11761c3e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11761c40 push 0x11766600 */
  push32((uint32_t)(0x11766600u));
  /* 11761c45 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761c47 call esi */
  call_ind((uint32_t)(ESI), 0x11761c49u);
  /* 11761c49 push 2 */
  push32((uint32_t)(0x2u));
  /* 11761c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11761c4d push 0x11766608 */
  push32((uint32_t)(0x11766608u));
  /* 11761c52 push 5 */
  push32((uint32_t)(0x5u));
  /* 11761c54 call esi */
  call_ind((uint32_t)(ESI), 0x11761c56u);
  /* 11761c56 push 0x11766550 */
  push32((uint32_t)(0x11766550u));
  /* 11761c5b push 0x11766558 */
  push32((uint32_t)(0x11766558u));
  /* 11761c60 call ebp */
  call_ind((uint32_t)(EBP), 0x11761c62u);
  /* 11761c62 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761c65:;
  /* 11761c65 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11761c67 call dword ptr [0x117650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650b0))), 0x11761c6du);
  /* 11761c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761c70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761c72 je 0x11761c92 */
  if (C.zf) goto L_11761c92;
  /* 11761c74 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11761c76 call dword ptr [0x117650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650e8))), 0x11761c7cu);
  /* 11761c7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761c7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11761c81 je 0x11761c92 */
  if (C.zf) goto L_11761c92;
  /* 11761c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761c85 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11761c87 call edi */
  call_ind((uint32_t)(EDI), 0x11761c89u);
  /* 11761c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761c8b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11761c8d call edi */
  call_ind((uint32_t)(EDI), 0x11761c8fu);
  /* 11761c8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11761c92:;
  /* 11761c92 pop edi */
  EDI = (pop32());
  /* 11761c93 pop esi */
  ESI = (pop32());
  /* 11761c94 pop ebp */
  EBP = (pop32());
  /* 11761c95 pop ebx */
  EBX = (pop32());
  /* 11761c96 ret  */
  ESPCHK(0x11761300u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ca0 @ 0x11761ca0 (217 bytes, 57 insns) */
void f_11761ca0(void) {
  FTRACE(0x11761ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761ca0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11761ca4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761ca7 jne 0x11761d35 */
  if (!C.zf) goto L_11761d35;
  /* 11761cad call dword ptr [0x11765068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765068))), 0x11761cb3u);
  /* 11761cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761cb5 mov dword ptr [0x117666a4], eax */
  w32((uint32_t)(0x117666a4), (EAX));
  /* 11761cba call 0x117626d4 */
  push32(0x11761cbfu); f_117626d4();
  /* 11761cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761cc1 pop ecx */
  ECX = (pop32());
  /* 11761cc2 je 0x11761d00 */
  if (C.zf) goto L_11761d00;
  /* 11761cc4 mov eax, dword ptr [0x117666a4] */
  EAX = (r32((uint32_t)(0x117666a4)));
  /* 11761cc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11761ccb mov cl, byte ptr [0x117666a5] */
  CL = (r8((uint32_t)(0x117666a5)));
  /* 11761cd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11761cd6 shr dword ptr [0x117666a4], 0x10 */
  w32((uint32_t)(0x117666a4), (sh_shr((uint32_t)(r32((uint32_t)(0x117666a4))), (0x10u)&0x1f, 32)));
  /* 11761cdd mov dword ptr [0x117666ac], eax */
  w32((uint32_t)(0x117666ac), (EAX));
  /* 11761ce2 mov dword ptr [0x117666b0], ecx */
  w32((uint32_t)(0x117666b0), (ECX));
  /* 11761ce8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11761ceb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11761ced mov dword ptr [0x117666a8], eax */
  w32((uint32_t)(0x117666a8), (EAX));
  /* 11761cf2 call 0x11761f67 */
  push32(0x11761cf7u); f_11761f67();
  /* 11761cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761cf9 jne 0x11761d04 */
  if (!C.zf) goto L_11761d04;
  /* 11761cfb call 0x11762710 */
  push32(0x11761d00u); f_11762710();
L_11761d00:;
  /* 11761d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11761d02 jmp 0x11761d76 */
  goto L_11761d76;
L_11761d04:;
  /* 11761d04 call dword ptr [0x11765064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765064))), 0x11761d0au);
  /* 11761d0a mov dword ptr [0x11766bf8], eax */
  w32((uint32_t)(0x11766bf8), (EAX));
  /* 11761d0f call 0x117625a2 */
  push32(0x11761d14u); f_117625a2();
  /* 11761d14 mov dword ptr [0x11766690], eax */
  w32((uint32_t)(0x11766690), (EAX));
  /* 11761d19 call 0x1176208c */
  push32(0x11761d1eu); f_1176208c();
  /* 11761d1e call 0x11762355 */
  push32(0x11761d23u); f_11762355();
  /* 11761d23 call 0x1176229c */
  push32(0x11761d28u); f_1176229c();
  /* 11761d28 call 0x11761e49 */
  push32(0x11761d2du); f_11761e49();
  /* 11761d2d inc dword ptr [0x1176668c] */
  { uint32_t _r=(r32((uint32_t)(0x1176668c)))+1; w32((uint32_t)(0x1176668c), (_r)); fl_inc(_r,32); }
  /* 11761d33 jmp 0x11761d73 */
  goto L_11761d73;
L_11761d35:;
  /* 11761d35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11761d37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d39 jne 0x11761d67 */
  if (!C.zf) goto L_11761d67;
  /* 11761d3b cmp dword ptr [0x1176668c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1176668c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d41 jle 0x11761d00 */
  if ((C.zf||C.sf!=C.of)) goto L_11761d00;
  /* 11761d43 dec dword ptr [0x1176668c] */
  { uint32_t _r=(r32((uint32_t)(0x1176668c)))-1; w32((uint32_t)(0x1176668c), (_r)); fl_dec(_r,32); }
  /* 11761d49 cmp dword ptr [0x117666dc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x117666dc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d4f jne 0x11761d56 */
  if (!C.zf) goto L_11761d56;
  /* 11761d51 call 0x11761e87 */
  push32(0x11761d56u); f_11761e87();
L_11761d56:;
  /* 11761d56 call 0x11762248 */
  push32(0x11761d5bu); f_11762248();
  /* 11761d5b call 0x11761fbb */
  push32(0x11761d60u); f_11761fbb();
  /* 11761d60 call 0x11762710 */
  push32(0x11761d65u); f_11762710();
  /* 11761d65 jmp 0x11761d73 */
  goto L_11761d73;
L_11761d67:;
  /* 11761d67 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d6a jne 0x11761d73 */
  if (!C.zf) goto L_11761d73;
  /* 11761d6c push ecx */
  push32((uint32_t)(ECX));
  /* 11761d6d call 0x11761fec */
  push32(0x11761d72u); f_11761fec();
  /* 11761d72 pop ecx */
  ECX = (pop32());
L_11761d73:;
  /* 11761d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761d75 pop eax */
  EAX = (pop32());
L_11761d76:;
  /* 11761d76 ret 0xc */
  ESPCHK(0x11761ca0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11761d79 (157 bytes, 73 insns) */
void f_11761d79(void) {
  FTRACE(0x11761d79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761d79 push ebp */
  push32((uint32_t)(EBP));
  /* 11761d7a mov ebp, esp */
  EBP = (ESP);
  /* 11761d7c push ebx */
  push32((uint32_t)(EBX));
  /* 11761d7d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11761d80 push esi */
  push32((uint32_t)(ESI));
  /* 11761d81 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11761d84 push edi */
  push32((uint32_t)(EDI));
  /* 11761d85 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11761d88 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11761d8a jne 0x11761d95 */
  if (!C.zf) goto L_11761d95;
  /* 11761d8c cmp dword ptr [0x1176668c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1176668c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d93 jmp 0x11761dbb */
  goto L_11761dbb;
L_11761d95:;
  /* 11761d95 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d98 je 0x11761d9f */
  if (C.zf) goto L_11761d9f;
  /* 11761d9a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761d9d jne 0x11761dc1 */
  if (!C.zf) goto L_11761dc1;
L_11761d9f:;
  /* 11761d9f mov eax, dword ptr [0x11766bfc] */
  EAX = (r32((uint32_t)(0x11766bfc)));
  /* 11761da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761da6 je 0x11761db1 */
  if (C.zf) goto L_11761db1;
  /* 11761da8 push edi */
  push32((uint32_t)(EDI));
  /* 11761da9 push esi */
  push32((uint32_t)(ESI));
  /* 11761daa push ebx */
  push32((uint32_t)(EBX));
  /* 11761dab call eax */
  call_ind((uint32_t)(EAX), 0x11761dadu);
  /* 11761dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761daf je 0x11761dbd */
  if (C.zf) goto L_11761dbd;
L_11761db1:;
  /* 11761db1 push edi */
  push32((uint32_t)(EDI));
  /* 11761db2 push esi */
  push32((uint32_t)(ESI));
  /* 11761db3 push ebx */
  push32((uint32_t)(EBX));
  /* 11761db4 call 0x11761ca0 */
  push32(0x11761db9u); f_11761ca0();
  /* 11761db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11761dbb:;
  /* 11761dbb jne 0x11761dc1 */
  if (!C.zf) goto L_11761dc1;
L_11761dbd:;
  /* 11761dbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11761dbf jmp 0x11761e0f */
  goto L_11761e0f;
L_11761dc1:;
  /* 11761dc1 push edi */
  push32((uint32_t)(EDI));
  /* 11761dc2 push esi */
  push32((uint32_t)(ESI));
  /* 11761dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11761dc4 call 0x117612e0 */
  push32(0x11761dc9u); f_117612e0();
  /* 11761dc9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761dcc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11761dcf jne 0x11761ddd */
  if (!C.zf) goto L_11761ddd;
  /* 11761dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761dd3 jne 0x11761e0c */
  if (!C.zf) goto L_11761e0c;
  /* 11761dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11761dd6 push eax */
  push32((uint32_t)(EAX));
  /* 11761dd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11761dd8 call 0x11761ca0 */
  push32(0x11761dddu); f_11761ca0();
L_11761ddd:;
  /* 11761ddd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11761ddf je 0x11761de6 */
  if (C.zf) goto L_11761de6;
  /* 11761de1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761de4 jne 0x11761e0c */
  if (!C.zf) goto L_11761e0c;
L_11761de6:;
  /* 11761de6 push edi */
  push32((uint32_t)(EDI));
  /* 11761de7 push esi */
  push32((uint32_t)(ESI));
  /* 11761de8 push ebx */
  push32((uint32_t)(EBX));
  /* 11761de9 call 0x11761ca0 */
  push32(0x11761deeu); f_11761ca0();
  /* 11761dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761df0 jne 0x11761df5 */
  if (!C.zf) goto L_11761df5;
  /* 11761df2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11761df5:;
  /* 11761df5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761df9 je 0x11761e0c */
  if (C.zf) goto L_11761e0c;
  /* 11761dfb mov eax, dword ptr [0x11766bfc] */
  EAX = (r32((uint32_t)(0x11766bfc)));
  /* 11761e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761e02 je 0x11761e0c */
  if (C.zf) goto L_11761e0c;
  /* 11761e04 push edi */
  push32((uint32_t)(EDI));
  /* 11761e05 push esi */
  push32((uint32_t)(ESI));
  /* 11761e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11761e07 call eax */
  call_ind((uint32_t)(EAX), 0x11761e09u);
  /* 11761e09 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11761e0c:;
  /* 11761e0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11761e0f:;
  /* 11761e0f pop edi */
  EDI = (pop32());
  /* 11761e10 pop esi */
  ESI = (pop32());
  /* 11761e11 pop ebx */
  EBX = (pop32());
  /* 11761e12 pop ebp */
  EBP = (pop32());
  /* 11761e13 ret 0xc */
  ESPCHK(0x11761d79u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11761e16 (48 bytes, 15 insns) */
void f_11761e16(void) {
  FTRACE(0x11761e16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761e16 mov eax, dword ptr [0x11766698] */
  EAX = (r32((uint32_t)(0x11766698)));
  /* 11761e1b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761e1e je 0x11761e2d */
  if (C.zf) goto L_11761e2d;
  /* 11761e20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761e22 jne 0x11761e32 */
  if (!C.zf) goto L_11761e32;
  /* 11761e24 cmp dword ptr [0x1176669c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1176669c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761e2b jne 0x11761e32 */
  if (!C.zf) goto L_11761e32;
L_11761e2d:;
  /* 11761e2d call 0x11762785 */
  push32(0x11761e32u); f_11762785();
L_11761e32:;
  /* 11761e32 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11761e36 call 0x117627be */
  push32(0x11761e3bu); f_117627be();
  /* 11761e3b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11761e40 call dword ptr [0x117661fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117661fc))), 0x11761e46u);
  /* 11761e46 pop ecx */
  ECX = (pop32());
  /* 11761e47 pop ecx */
  ECX = (pop32());
  /* 11761e48 ret  */
  ESPCHK(0x11761e16u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e49 @ 0x11761e49 (45 bytes, 12 insns) */
void f_11761e49(void) {
  FTRACE(0x11761e49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761e49 mov eax, dword ptr [0x11766bf4] */
  EAX = (r32((uint32_t)(0x11766bf4)));
  /* 11761e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761e50 je 0x11761e54 */
  if (C.zf) goto L_11761e54;
  /* 11761e52 call eax */
  call_ind((uint32_t)(EAX), 0x11761e54u);
L_11761e54:;
  /* 11761e54 push 0x11766010 */
  push32((uint32_t)(0x11766010u));
  /* 11761e59 push 0x11766008 */
  push32((uint32_t)(0x11766008u));
  /* 11761e5e call 0x11761f4d */
  push32(0x11761e63u); f_11761f4d();
  /* 11761e63 push 0x11766004 */
  push32((uint32_t)(0x11766004u));
  /* 11761e68 push 0x11766000 */
  push32((uint32_t)(0x11766000u));
  /* 11761e6d call 0x11761f4d */
  push32(0x11761e72u); f_11761f4d();
  /* 11761e72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761e75 ret  */
  ESPCHK(0x11761e49u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11761e76 (17 bytes, 6 insns) */
void f_11761e76(void) {
  FTRACE(0x11761e76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761e78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761e7a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11761e7e call 0x11761e96 */
  push32(0x11761e83u); f_11761e96();
  /* 11761e83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761e86 ret  */
  ESPCHK(0x11761e76u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e87 @ 0x11761e87 (15 bytes, 6 insns) */
void f_11761e87(void) {
  FTRACE(0x11761e87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11761e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11761e8d call 0x11761e96 */
  push32(0x11761e92u); f_11761e96();
  /* 11761e92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11761e95 ret  */
  ESPCHK(0x11761e87u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e96 @ 0x11761e96 (163 bytes, 53 insns) */
void f_11761e96(void) {
  FTRACE(0x11761e96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761e96 push edi */
  push32((uint32_t)(EDI));
  /* 11761e97 call 0x11761f3b */
  push32(0x11761e9cu); f_11761f3b();
  /* 11761e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11761e9e pop edi */
  EDI = (pop32());
  /* 11761e9f cmp dword ptr [0x117666e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x117666e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761ea5 jne 0x11761eb8 */
  if (!C.zf) goto L_11761eb8;
  /* 11761ea7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11761eab call dword ptr [0x11765074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765074))), 0x11761eb1u);
  /* 11761eb1 push eax */
  push32((uint32_t)(EAX));
  /* 11761eb2 call dword ptr [0x11765070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765070))), 0x11761eb8u);
L_11761eb8:;
  /* 11761eb8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761ebd push ebx */
  push32((uint32_t)(EBX));
  /* 11761ebe mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11761ec2 mov dword ptr [0x117666dc], edi */
  w32((uint32_t)(0x117666dc), (EDI));
  /* 11761ec8 mov byte ptr [0x117666d8], bl */
  w8((uint32_t)(0x117666d8), (BL));
  /* 11761ece jne 0x11761f0c */
  if (!C.zf) goto L_11761f0c;
  /* 11761ed0 mov eax, dword ptr [0x11766bf0] */
  EAX = (r32((uint32_t)(0x11766bf0)));
  /* 11761ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761ed7 je 0x11761efb */
  if (C.zf) goto L_11761efb;
  /* 11761ed9 mov ecx, dword ptr [0x11766bec] */
  ECX = (r32((uint32_t)(0x11766bec)));
  /* 11761edf push esi */
  push32((uint32_t)(ESI));
  /* 11761ee0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11761ee3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761ee5 jb 0x11761efa */
  if (C.cf) goto L_11761efa;
L_11761ee7:;
  /* 11761ee7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11761ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761eeb je 0x11761eef */
  if (C.zf) goto L_11761eef;
  /* 11761eed call eax */
  call_ind((uint32_t)(EAX), 0x11761eefu);
L_11761eef:;
  /* 11761eef sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11761ef2 cmp esi, dword ptr [0x11766bf0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11766bf0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761ef8 jae 0x11761ee7 */
  if (!C.cf) goto L_11761ee7;
L_11761efa:;
  /* 11761efa pop esi */
  ESI = (pop32());
L_11761efb:;
  /* 11761efb push 0x11766018 */
  push32((uint32_t)(0x11766018u));
  /* 11761f00 push 0x11766014 */
  push32((uint32_t)(0x11766014u));
  /* 11761f05 call 0x11761f4d */
  push32(0x11761f0au); f_11761f4d();
  /* 11761f0a pop ecx */
  ECX = (pop32());
  /* 11761f0b pop ecx */
  ECX = (pop32());
L_11761f0c:;
  /* 11761f0c push 0x11766020 */
  push32((uint32_t)(0x11766020u));
  /* 11761f11 push 0x1176601c */
  push32((uint32_t)(0x1176601cu));
  /* 11761f16 call 0x11761f4d */
  push32(0x11761f1bu); f_11761f4d();
  /* 11761f1b pop ecx */
  ECX = (pop32());
  /* 11761f1c pop ecx */
  ECX = (pop32());
  /* 11761f1d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11761f1f pop ebx */
  EBX = (pop32());
  /* 11761f20 je 0x11761f29 */
  if (C.zf) goto L_11761f29;
  /* 11761f22 call 0x11761f44 */
  push32(0x11761f27u); f_11761f44();
  /* 11761f27 pop edi */
  EDI = (pop32());
  /* 11761f28 ret  */
  ESPCHK(0x11761e96u, _esp0);
  ESP += 4; return;
L_11761f29:;
  /* 11761f29 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11761f2d mov dword ptr [0x117666e0], edi */
  w32((uint32_t)(0x117666e0), (EDI));
  /* 11761f33 call dword ptr [0x1176506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176506c))), 0x11761f39u);
  /* 11761f39 pop edi */
  EDI = (pop32());
  /* 11761f3a ret  */
  ESPCHK(0x11761e96u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f3b @ 0x11761f3b (9 bytes, 4 insns) */
void f_11761f3b(void) {
  FTRACE(0x11761f3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761f3b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11761f3d call 0x117629a6 */
  push32(0x11761f42u); f_117629a6();
  /* 11761f42 pop ecx */
  ECX = (pop32());
  /* 11761f43 ret  */
  ESPCHK(0x11761f3bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f44 @ 0x11761f44 (9 bytes, 4 insns) */
void f_11761f44(void) {
  FTRACE(0x11761f44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761f44 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11761f46 call 0x11762a07 */
  push32(0x11761f4bu); f_11762a07();
  /* 11761f4b pop ecx */
  ECX = (pop32());
  /* 11761f4c ret  */
  ESPCHK(0x11761f44u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f4d @ 0x11761f4d (26 bytes, 12 insns) */
void f_11761f4d(void) {
  FTRACE(0x11761f4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761f4d push esi */
  push32((uint32_t)(ESI));
  /* 11761f4e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11761f52:;
  /* 11761f52 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761f56 jae 0x11761f65 */
  if (!C.cf) goto L_11761f65;
  /* 11761f58 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11761f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761f5c je 0x11761f60 */
  if (C.zf) goto L_11761f60;
  /* 11761f5e call eax */
  call_ind((uint32_t)(EAX), 0x11761f60u);
L_11761f60:;
  /* 11761f60 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11761f63 jmp 0x11761f52 */
  goto L_11761f52;
L_11761f65:;
  /* 11761f65 pop esi */
  ESI = (pop32());
  /* 11761f66 ret  */
  ESPCHK(0x11761f4du, _esp0);
  ESP += 4; return;
}

/* FUN_10001f67 @ 0x11761f67 (84 bytes, 32 insns) */
void f_11761f67(void) {
  FTRACE(0x11761f67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761f67 push esi */
  push32((uint32_t)(ESI));
  /* 11761f68 call 0x11762911 */
  push32(0x11761f6du); f_11762911();
  /* 11761f6d call dword ptr [0x11765080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765080))), 0x11761f73u);
  /* 11761f73 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761f76 mov dword ptr [0x11766200], eax */
  w32((uint32_t)(0x11766200), (EAX));
  /* 11761f7b je 0x11761fb7 */
  if (C.zf) goto L_11761fb7;
  /* 11761f7d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11761f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11761f81 call 0x11762a1c */
  push32(0x11761f86u); f_11762a1c();
  /* 11761f86 mov esi, eax */
  ESI = (EAX);
  /* 11761f88 pop ecx */
  ECX = (pop32());
  /* 11761f89 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11761f8b pop ecx */
  ECX = (pop32());
  /* 11761f8c je 0x11761fb7 */
  if (C.zf) goto L_11761fb7;
  /* 11761f8e push esi */
  push32((uint32_t)(ESI));
  /* 11761f8f push dword ptr [0x11766200] */
  push32((uint32_t)(r32((uint32_t)(0x11766200))));
  /* 11761f95 call dword ptr [0x1176507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176507c))), 0x11761f9bu);
  /* 11761f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11761f9d je 0x11761fb7 */
  if (C.zf) goto L_11761fb7;
  /* 11761f9f push esi */
  push32((uint32_t)(ESI));
  /* 11761fa0 call 0x11761fd9 */
  push32(0x11761fa5u); f_11761fd9();
  /* 11761fa5 pop ecx */
  ECX = (pop32());
  /* 11761fa6 call dword ptr [0x11765078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765078))), 0x11761facu);
  /* 11761fac or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11761fb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11761fb2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11761fb4 pop eax */
  EAX = (pop32());
  /* 11761fb5 pop esi */
  ESI = (pop32());
  /* 11761fb6 ret  */
  ESPCHK(0x11761f67u, _esp0);
  ESP += 4; return;
L_11761fb7:;
  /* 11761fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11761fb9 pop esi */
  ESI = (pop32());
  /* 11761fba ret  */
  ESPCHK(0x11761f67u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fbb @ 0x11761fbb (30 bytes, 8 insns) */
void f_11761fbb(void) {
  FTRACE(0x11761fbbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761fbb call 0x1176293a */
  push32(0x11761fc0u); f_1176293a();
  /* 11761fc0 mov eax, dword ptr [0x11766200] */
  EAX = (r32((uint32_t)(0x11766200)));
  /* 11761fc5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761fc8 je 0x11761fd8 */
  if (C.zf) goto L_11761fd8;
  /* 11761fca push eax */
  push32((uint32_t)(EAX));
  /* 11761fcb call dword ptr [0x11765084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765084))), 0x11761fd1u);
  /* 11761fd1 or dword ptr [0x11766200], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11766200)))|(0xffffffffu); w32((uint32_t)(0x11766200), (_r)); fl_logic(_r,32); }
L_11761fd8:;
  /* 11761fd8 ret  */
  ESPCHK(0x11761fbbu, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd9 @ 0x11761fd9 (19 bytes, 4 insns) */
void f_11761fd9(void) {
  FTRACE(0x11761fd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761fd9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11761fdd mov dword ptr [eax + 0x50], 0x11766380 */
  w32((uint32_t)(EAX + 0x50), (0x11766380u));
  /* 11761fe4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11761feb ret  */
  ESPCHK(0x11761fd9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fec @ 0x11761fec (160 bytes, 62 insns) */
void f_11761fec(void) {
  FTRACE(0x11761fecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11761fec mov eax, dword ptr [0x11766200] */
  EAX = (r32((uint32_t)(0x11766200)));
  /* 11761ff1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11761ff4 je 0x1176208b */
  if (C.zf) goto L_1176208b;
  /* 11761ffa push esi */
  push32((uint32_t)(ESI));
  /* 11761ffb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11761fff test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762001 jne 0x11762010 */
  if (!C.zf) goto L_11762010;
  /* 11762003 push eax */
  push32((uint32_t)(EAX));
  /* 11762004 call dword ptr [0x11765000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765000))), 0x1176200au);
  /* 1176200a mov esi, eax */
  ESI = (EAX);
  /* 1176200c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1176200e je 0x1176207c */
  if (C.zf) goto L_1176207c;
L_11762010:;
  /* 11762010 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11762013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762015 je 0x1176201e */
  if (C.zf) goto L_1176201e;
  /* 11762017 push eax */
  push32((uint32_t)(EAX));
  /* 11762018 call 0x11762aa9 */
  push32(0x1176201du); f_11762aa9();
  /* 1176201d pop ecx */
  ECX = (pop32());
L_1176201e:;
  /* 1176201e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11762021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762023 je 0x1176202c */
  if (C.zf) goto L_1176202c;
  /* 11762025 push eax */
  push32((uint32_t)(EAX));
  /* 11762026 call 0x11762aa9 */
  push32(0x1176202bu); f_11762aa9();
  /* 1176202b pop ecx */
  ECX = (pop32());
L_1176202c:;
  /* 1176202c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1176202f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762031 je 0x1176203a */
  if (C.zf) goto L_1176203a;
  /* 11762033 push eax */
  push32((uint32_t)(EAX));
  /* 11762034 call 0x11762aa9 */
  push32(0x11762039u); f_11762aa9();
  /* 11762039 pop ecx */
  ECX = (pop32());
L_1176203a:;
  /* 1176203a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 1176203d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176203f je 0x11762048 */
  if (C.zf) goto L_11762048;
  /* 11762041 push eax */
  push32((uint32_t)(EAX));
  /* 11762042 call 0x11762aa9 */
  push32(0x11762047u); f_11762aa9();
  /* 11762047 pop ecx */
  ECX = (pop32());
L_11762048:;
  /* 11762048 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1176204b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176204d je 0x11762056 */
  if (C.zf) goto L_11762056;
  /* 1176204f push eax */
  push32((uint32_t)(EAX));
  /* 11762050 call 0x11762aa9 */
  push32(0x11762055u); f_11762aa9();
  /* 11762055 pop ecx */
  ECX = (pop32());
L_11762056:;
  /* 11762056 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11762059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176205b je 0x11762064 */
  if (C.zf) goto L_11762064;
  /* 1176205d push eax */
  push32((uint32_t)(EAX));
  /* 1176205e call 0x11762aa9 */
  push32(0x11762063u); f_11762aa9();
  /* 11762063 pop ecx */
  ECX = (pop32());
L_11762064:;
  /* 11762064 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11762067 cmp eax, 0x11766380 */
  { uint32_t _a=(EAX),_b=(0x11766380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176206c je 0x11762075 */
  if (C.zf) goto L_11762075;
  /* 1176206e push eax */
  push32((uint32_t)(EAX));
  /* 1176206f call 0x11762aa9 */
  push32(0x11762074u); f_11762aa9();
  /* 11762074 pop ecx */
  ECX = (pop32());
L_11762075:;
  /* 11762075 push esi */
  push32((uint32_t)(ESI));
  /* 11762076 call 0x11762aa9 */
  push32(0x1176207bu); f_11762aa9();
  /* 1176207b pop ecx */
  ECX = (pop32());
L_1176207c:;
  /* 1176207c push 0 */
  push32((uint32_t)(0x0u));
  /* 1176207e push dword ptr [0x11766200] */
  push32((uint32_t)(r32((uint32_t)(0x11766200))));
  /* 11762084 call dword ptr [0x1176507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176507c))), 0x1176208au);
  /* 1176208a pop esi */
  ESI = (pop32());
L_1176208b:;
  /* 1176208b ret  */
  ESPCHK(0x11761fecu, _esp0);
  ESP += 4; return;
}

/* FUN_1000208c @ 0x1176208c (444 bytes, 150 insns) */
void f_1176208c(void) {
  FTRACE(0x1176208cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1176208c push ebp */
  push32((uint32_t)(EBP));
  /* 1176208d mov ebp, esp */
  EBP = (ESP);
  /* 1176208f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762092 push ebx */
  push32((uint32_t)(EBX));
  /* 11762093 push esi */
  push32((uint32_t)(ESI));
  /* 11762094 push edi */
  push32((uint32_t)(EDI));
  /* 11762095 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1176209a call 0x11762af1 */
  push32(0x1176209fu); f_11762af1();
  /* 1176209f mov esi, eax */
  ESI = (EAX);
  /* 117620a1 pop ecx */
  ECX = (pop32());
  /* 117620a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117620a4 jne 0x117620ae */
  if (!C.zf) goto L_117620ae;
  /* 117620a6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 117620a8 call 0x11761e16 */
  push32(0x117620adu); f_11761e16();
  /* 117620ad pop ecx */
  ECX = (pop32());
L_117620ae:;
  /* 117620ae mov dword ptr [0x11766ae0], esi */
  w32((uint32_t)(0x11766ae0), (ESI));
  /* 117620b4 mov dword ptr [0x11766be0], 0x20 */
  w32((uint32_t)(0x11766be0), (0x20u));
  /* 117620be lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_117620c4:;
  /* 117620c4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117620c6 jae 0x117620e6 */
  if (!C.cf) goto L_117620e6;
  /* 117620c8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 117620cc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 117620cf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 117620d3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 117620d7 mov eax, dword ptr [0x11766ae0] */
  EAX = (r32((uint32_t)(0x11766ae0)));
  /* 117620dc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117620df add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117620e4 jmp 0x117620c4 */
  goto L_117620c4;
L_117620e6:;
  /* 117620e6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 117620e9 push eax */
  push32((uint32_t)(EAX));
  /* 117620ea call dword ptr [0x1176509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176509c))), 0x117620f0u);
  /* 117620f0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117620f5 je 0x117621cc */
  if (C.zf) goto L_117621cc;
  /* 117620fb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117620fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762100 je 0x117621cc */
  if (C.zf) goto L_117621cc;
  /* 11762106 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11762108 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1176210b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1176210e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11762111 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11762116 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762118 jl 0x1176211c */
  if ((C.sf!=C.of)) goto L_1176211c;
  /* 1176211a mov edi, eax */
  EDI = (EAX);
L_1176211c:;
  /* 1176211c cmp dword ptr [0x11766be0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11766be0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762122 jge 0x1176217a */
  if ((C.sf==C.of)) goto L_1176217a;
  /* 11762124 mov esi, 0x11766ae4 */
  ESI = (0x11766ae4u);
L_11762129:;
  /* 11762129 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1176212e call 0x11762af1 */
  push32(0x11762133u); f_11762af1();
  /* 11762133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762135 pop ecx */
  ECX = (pop32());
  /* 11762136 je 0x11762174 */
  if (C.zf) goto L_11762174;
  /* 11762138 add dword ptr [0x11766be0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11766be0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11766be0), (_r)); fl_add(_a,_b,_r,32); }
  /* 1176213f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11762141 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11762147:;
  /* 11762147 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762149 jae 0x11762167 */
  if (!C.cf) goto L_11762167;
  /* 1176214b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1176214f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11762152 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11762156 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1176215a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1176215c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176215f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762165 jmp 0x11762147 */
  goto L_11762147;
L_11762167:;
  /* 11762167 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176216a cmp dword ptr [0x11766be0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11766be0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762170 jl 0x11762129 */
  if ((C.sf!=C.of)) goto L_11762129;
  /* 11762172 jmp 0x1176217a */
  goto L_1176217a;
L_11762174:;
  /* 11762174 mov edi, dword ptr [0x11766be0] */
  EDI = (r32((uint32_t)(0x11766be0)));
L_1176217a:;
  /* 1176217a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1176217c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1176217e jle 0x117621cc */
  if ((C.zf||C.sf!=C.of)) goto L_117621cc;
L_11762180:;
  /* 11762180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11762183 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11762185 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762188 je 0x117621c2 */
  if (C.zf) goto L_117621c2;
  /* 1176218a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1176218c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1176218e je 0x117621c2 */
  if (C.zf) goto L_117621c2;
  /* 11762190 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11762192 jne 0x1176219f */
  if (!C.zf) goto L_1176219f;
  /* 11762194 push ecx */
  push32((uint32_t)(ECX));
  /* 11762195 call dword ptr [0x11765098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765098))), 0x1176219bu);
  /* 1176219b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176219d je 0x117621c2 */
  if (C.zf) goto L_117621c2;
L_1176219f:;
  /* 1176219f mov ecx, esi */
  ECX = (ESI);
  /* 117621a1 mov eax, esi */
  EAX = (ESI);
  /* 117621a3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117621a6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117621a9 mov ecx, dword ptr [ecx*4 + 0x11766ae0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11766ae0)));
  /* 117621b0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 117621b3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 117621b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117621b9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 117621bb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117621bd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 117621bf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_117621c2:;
  /* 117621c2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 117621c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117621c7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117621c8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117621ca jl 0x11762180 */
  if ((C.sf!=C.of)) goto L_11762180;
L_117621cc:;
  /* 117621cc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117621ce:;
  /* 117621ce mov ecx, dword ptr [0x11766ae0] */
  ECX = (r32((uint32_t)(0x11766ae0)));
  /* 117621d4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 117621d7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117621db lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 117621de jne 0x1176222d */
  if (!C.zf) goto L_1176222d;
  /* 117621e0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117621e2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 117621e6 jne 0x117621ed */
  if (!C.zf) goto L_117621ed;
  /* 117621e8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117621ea pop eax */
  EAX = (pop32());
  /* 117621eb jmp 0x117621f7 */
  goto L_117621f7;
L_117621ed:;
  /* 117621ed mov eax, ebx */
  EAX = (EBX);
  /* 117621ef dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117621f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117621f2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117621f4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117621f7:;
  /* 117621f7 push eax */
  push32((uint32_t)(EAX));
  /* 117621f8 call dword ptr [0x11765094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765094))), 0x117621feu);
  /* 117621fe mov edi, eax */
  EDI = (EAX);
  /* 11762200 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762203 je 0x1176221c */
  if (C.zf) goto L_1176221c;
  /* 11762205 push edi */
  push32((uint32_t)(EDI));
  /* 11762206 call dword ptr [0x11765098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765098))), 0x1176220cu);
  /* 1176220c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176220e je 0x1176221c */
  if (C.zf) goto L_1176221c;
  /* 11762210 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11762215 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11762217 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176221a jne 0x11762222 */
  if (!C.zf) goto L_11762222;
L_1176221c:;
  /* 1176221c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11762220 jmp 0x11762231 */
  goto L_11762231;
L_11762222:;
  /* 11762222 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762225 jne 0x11762231 */
  if (!C.zf) goto L_11762231;
  /* 11762227 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1176222b jmp 0x11762231 */
  goto L_11762231;
L_1176222d:;
  /* 1176222d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11762231:;
  /* 11762231 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11762232 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762235 jl 0x117621ce */
  if ((C.sf!=C.of)) goto L_117621ce;
  /* 11762237 push dword ptr [0x11766be0] */
  push32((uint32_t)(r32((uint32_t)(0x11766be0))));
  /* 1176223d call dword ptr [0x11765090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765090))), 0x11762243u);
  /* 11762243 pop edi */
  EDI = (pop32());
  /* 11762244 pop esi */
  ESI = (pop32());
  /* 11762245 pop ebx */
  EBX = (pop32());
  /* 11762246 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11762247 ret  */
  ESPCHK(0x1176208cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002248 @ 0x11762248 (84 bytes, 33 insns) */
void f_11762248(void) {
  FTRACE(0x11762248u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762248 push ebx */
  push32((uint32_t)(EBX));
  /* 11762249 push esi */
  push32((uint32_t)(ESI));
  /* 1176224a push edi */
  push32((uint32_t)(EDI));
  /* 1176224b mov esi, 0x11766ae0 */
  ESI = (0x11766ae0u);
L_11762250:;
  /* 11762250 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11762252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762254 je 0x1176228d */
  if (C.zf) goto L_1176228d;
  /* 11762256 mov edi, eax */
  EDI = (EAX);
  /* 11762258 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176225d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176225f jae 0x11762282 */
  if (!C.cf) goto L_11762282;
  /* 11762261 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11762264:;
  /* 11762264 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762268 je 0x11762271 */
  if (C.zf) goto L_11762271;
  /* 1176226a push ebx */
  push32((uint32_t)(EBX));
  /* 1176226b call dword ptr [0x117650a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650a0))), 0x11762271u);
L_11762271:;
  /* 11762271 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11762273 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11762276 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176227b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176227e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762280 jb 0x11762264 */
  if (C.cf) goto L_11762264;
L_11762282:;
  /* 11762282 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11762284 call 0x11762aa9 */
  push32(0x11762289u); f_11762aa9();
  /* 11762289 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1176228c pop ecx */
  ECX = (pop32());
L_1176228d:;
  /* 1176228d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11762290 cmp esi, 0x11766be0 */
  { uint32_t _a=(ESI),_b=(0x11766be0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762296 jl 0x11762250 */
  if ((C.sf!=C.of)) goto L_11762250;
  /* 11762298 pop edi */
  EDI = (pop32());
  /* 11762299 pop esi */
  ESI = (pop32());
  /* 1176229a pop ebx */
  EBX = (pop32());
  /* 1176229b ret  */
  ESPCHK(0x11762248u, _esp0);
  ESP += 4; return;
}

/* FUN_1000229c @ 0x1176229c (185 bytes, 71 insns) */
void f_1176229c(void) {
  FTRACE(0x1176229cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1176229c push ebx */
  push32((uint32_t)(EBX));
  /* 1176229d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1176229f cmp dword ptr [0x11766be8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11766be8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117622a5 push esi */
  push32((uint32_t)(ESI));
  /* 117622a6 push edi */
  push32((uint32_t)(EDI));
  /* 117622a7 jne 0x117622ae */
  if (!C.zf) goto L_117622ae;
  /* 117622a9 call 0x117630c3 */
  push32(0x117622aeu); f_117630c3();
L_117622ae:;
  /* 117622ae mov esi, dword ptr [0x11766690] */
  ESI = (r32((uint32_t)(0x11766690)));
  /* 117622b4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_117622b6:;
  /* 117622b6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117622b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117622ba je 0x117622ce */
  if (C.zf) goto L_117622ce;
  /* 117622bc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117622be je 0x117622c1 */
  if (C.zf) goto L_117622c1;
  /* 117622c0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117622c1:;
  /* 117622c1 push esi */
  push32((uint32_t)(ESI));
  /* 117622c2 call 0x11762c70 */
  push32(0x117622c7u); f_11762c70();
  /* 117622c7 pop ecx */
  ECX = (pop32());
  /* 117622c8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 117622cc jmp 0x117622b6 */
  goto L_117622b6;
L_117622ce:;
  /* 117622ce lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 117622d5 push eax */
  push32((uint32_t)(EAX));
  /* 117622d6 call 0x11762af1 */
  push32(0x117622dbu); f_11762af1();
  /* 117622db mov esi, eax */
  ESI = (EAX);
  /* 117622dd pop ecx */
  ECX = (pop32());
  /* 117622de cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117622e0 mov dword ptr [0x117666c0], esi */
  w32((uint32_t)(0x117666c0), (ESI));
  /* 117622e6 jne 0x117622f0 */
  if (!C.zf) goto L_117622f0;
  /* 117622e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117622ea call 0x11761e16 */
  push32(0x117622efu); f_11761e16();
  /* 117622ef pop ecx */
  ECX = (pop32());
L_117622f0:;
  /* 117622f0 mov edi, dword ptr [0x11766690] */
  EDI = (r32((uint32_t)(0x11766690)));
  /* 117622f6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117622f8 je 0x11762333 */
  if (C.zf) goto L_11762333;
  /* 117622fa push ebp */
  push32((uint32_t)(EBP));
L_117622fb:;
  /* 117622fb push edi */
  push32((uint32_t)(EDI));
  /* 117622fc call 0x11762c70 */
  push32(0x11762301u); f_11762c70();
  /* 11762301 mov ebp, eax */
  EBP = (EAX);
  /* 11762303 pop ecx */
  ECX = (pop32());
  /* 11762304 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11762305 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762308 je 0x1176232c */
  if (C.zf) goto L_1176232c;
  /* 1176230a push ebp */
  push32((uint32_t)(EBP));
  /* 1176230b call 0x11762af1 */
  push32(0x11762310u); f_11762af1();
  /* 11762310 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762312 pop ecx */
  ECX = (pop32());
  /* 11762313 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11762315 jne 0x1176231f */
  if (!C.zf) goto L_1176231f;
  /* 11762317 push 9 */
  push32((uint32_t)(0x9u));
  /* 11762319 call 0x11761e16 */
  push32(0x1176231eu); f_11761e16();
  /* 1176231e pop ecx */
  ECX = (pop32());
L_1176231f:;
  /* 1176231f push edi */
  push32((uint32_t)(EDI));
  /* 11762320 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11762322 call 0x11762b80 */
  push32(0x11762327u); f_11762b80();
  /* 11762327 pop ecx */
  ECX = (pop32());
  /* 11762328 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176232b pop ecx */
  ECX = (pop32());
L_1176232c:;
  /* 1176232c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176232e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762330 jne 0x117622fb */
  if (!C.zf) goto L_117622fb;
  /* 11762332 pop ebp */
  EBP = (pop32());
L_11762333:;
  /* 11762333 push dword ptr [0x11766690] */
  push32((uint32_t)(r32((uint32_t)(0x11766690))));
  /* 11762339 call 0x11762aa9 */
  push32(0x1176233eu); f_11762aa9();
  /* 1176233e pop ecx */
  ECX = (pop32());
  /* 1176233f mov dword ptr [0x11766690], ebx */
  w32((uint32_t)(0x11766690), (EBX));
  /* 11762345 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11762347 pop edi */
  EDI = (pop32());
  /* 11762348 pop esi */
  ESI = (pop32());
  /* 11762349 mov dword ptr [0x11766be4], 1 */
  w32((uint32_t)(0x11766be4), (0x1u));
  /* 11762353 pop ebx */
  EBX = (pop32());
  /* 11762354 ret  */
  ESPCHK(0x1176229cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002355 @ 0x11762355 (153 bytes, 62 insns) */
void f_11762355(void) {
  FTRACE(0x11762355u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762355 push ebp */
  push32((uint32_t)(EBP));
  /* 11762356 mov ebp, esp */
  EBP = (ESP);
  /* 11762358 push ecx */
  push32((uint32_t)(ECX));
  /* 11762359 push ecx */
  push32((uint32_t)(ECX));
  /* 1176235a push ebx */
  push32((uint32_t)(EBX));
  /* 1176235b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1176235d cmp dword ptr [0x11766be8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11766be8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762363 push esi */
  push32((uint32_t)(ESI));
  /* 11762364 push edi */
  push32((uint32_t)(EDI));
  /* 11762365 jne 0x1176236c */
  if (!C.zf) goto L_1176236c;
  /* 11762367 call 0x117630c3 */
  push32(0x1176236cu); f_117630c3();
L_1176236c:;
  /* 1176236c mov esi, 0x117666e4 */
  ESI = (0x117666e4u);
  /* 11762371 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11762376 push esi */
  push32((uint32_t)(ESI));
  /* 11762377 push ebx */
  push32((uint32_t)(EBX));
  /* 11762378 call dword ptr [0x117650a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650a4))), 0x1176237eu);
  /* 1176237e mov eax, dword ptr [0x11766bf8] */
  EAX = (r32((uint32_t)(0x11766bf8)));
  /* 11762383 mov dword ptr [0x117666d0], esi */
  w32((uint32_t)(0x117666d0), (ESI));
  /* 11762389 mov edi, esi */
  EDI = (ESI);
  /* 1176238b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176238d je 0x11762391 */
  if (C.zf) goto L_11762391;
  /* 1176238f mov edi, eax */
  EDI = (EAX);
L_11762391:;
  /* 11762391 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11762394 push eax */
  push32((uint32_t)(EAX));
  /* 11762395 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11762398 push eax */
  push32((uint32_t)(EAX));
  /* 11762399 push ebx */
  push32((uint32_t)(EBX));
  /* 1176239a push ebx */
  push32((uint32_t)(EBX));
  /* 1176239b push edi */
  push32((uint32_t)(EDI));
  /* 1176239c call 0x117623ee */
  push32(0x117623a1u); f_117623ee();
  /* 117623a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117623a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117623a7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 117623aa push eax */
  push32((uint32_t)(EAX));
  /* 117623ab call 0x11762af1 */
  push32(0x117623b0u); f_11762af1();
  /* 117623b0 mov esi, eax */
  ESI = (EAX);
  /* 117623b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117623b5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117623b7 jne 0x117623c1 */
  if (!C.zf) goto L_117623c1;
  /* 117623b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 117623bb call 0x11761e16 */
  push32(0x117623c0u); f_11761e16();
  /* 117623c0 pop ecx */
  ECX = (pop32());
L_117623c1:;
  /* 117623c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117623c4 push eax */
  push32((uint32_t)(EAX));
  /* 117623c5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 117623c8 push eax */
  push32((uint32_t)(EAX));
  /* 117623c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117623cc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 117623cf push eax */
  push32((uint32_t)(EAX));
  /* 117623d0 push esi */
  push32((uint32_t)(ESI));
  /* 117623d1 push edi */
  push32((uint32_t)(EDI));
  /* 117623d2 call 0x117623ee */
  push32(0x117623d7u); f_117623ee();
  /* 117623d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117623da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117623dd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117623de mov dword ptr [0x117666b8], esi */
  w32((uint32_t)(0x117666b8), (ESI));
  /* 117623e4 pop edi */
  EDI = (pop32());
  /* 117623e5 pop esi */
  ESI = (pop32());
  /* 117623e6 mov dword ptr [0x117666b4], eax */
  w32((uint32_t)(0x117666b4), (EAX));
  /* 117623eb pop ebx */
  EBX = (pop32());
  /* 117623ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117623ed ret  */
  ESPCHK(0x11762355u, _esp0);
  ESP += 4; return;
}

/* FUN_100023ee @ 0x117623ee (436 bytes, 187 insns) */
void f_117623ee(void) {
  FTRACE(0x117623eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117623ee push ebp */
  push32((uint32_t)(EBP));
  /* 117623ef mov ebp, esp */
  EBP = (ESP);
  /* 117623f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117623f4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117623f7 push ebx */
  push32((uint32_t)(EBX));
  /* 117623f8 push esi */
  push32((uint32_t)(ESI));
  /* 117623f9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117623fc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 117623ff push edi */
  push32((uint32_t)(EDI));
  /* 11762400 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11762403 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11762409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1176240c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1176240e je 0x11762418 */
  if (C.zf) goto L_11762418;
  /* 11762410 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11762412 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11762415 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11762418:;
  /* 11762418 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176241b jne 0x11762461 */
  if (!C.zf) goto L_11762461;
L_1176241d:;
  /* 1176241d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11762420 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762421 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762424 je 0x1176244f */
  if (C.zf) goto L_1176244f;
  /* 11762426 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762428 je 0x1176244f */
  if (C.zf) goto L_1176244f;
  /* 1176242a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1176242d test byte ptr [edx + 0x117669c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x117669c1)))&(0x4u); fl_logic(_r,8); }
  /* 11762434 je 0x11762442 */
  if (C.zf) goto L_11762442;
  /* 11762436 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11762438 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1176243a je 0x11762442 */
  if (C.zf) goto L_11762442;
  /* 1176243c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1176243e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11762440 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11762441 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11762442:;
  /* 11762442 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11762444 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762446 je 0x1176241d */
  if (C.zf) goto L_1176241d;
  /* 11762448 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1176244a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1176244c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1176244d jmp 0x1176241d */
  goto L_1176241d;
L_1176244f:;
  /* 1176244f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11762451 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762453 je 0x11762459 */
  if (C.zf) goto L_11762459;
  /* 11762455 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11762458 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11762459:;
  /* 11762459 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176245c jne 0x117624a4 */
  if (!C.zf) goto L_117624a4;
  /* 1176245e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176245f jmp 0x117624a4 */
  goto L_117624a4;
L_11762461:;
  /* 11762461 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11762463 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762465 je 0x1176246c */
  if (C.zf) goto L_1176246c;
  /* 11762467 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11762469 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1176246b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1176246c:;
  /* 1176246c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1176246e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176246f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11762472 test byte ptr [ebx + 0x117669c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x117669c1)))&(0x4u); fl_logic(_r,8); }
  /* 11762479 je 0x11762487 */
  if (C.zf) goto L_11762487;
  /* 1176247b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1176247d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1176247f je 0x11762486 */
  if (C.zf) goto L_11762486;
  /* 11762481 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11762483 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11762485 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11762486:;
  /* 11762486 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11762487:;
  /* 11762487 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176248a je 0x11762495 */
  if (C.zf) goto L_11762495;
  /* 1176248c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1176248e je 0x11762499 */
  if (C.zf) goto L_11762499;
  /* 11762490 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762493 jne 0x11762461 */
  if (!C.zf) goto L_11762461;
L_11762495:;
  /* 11762495 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762497 jne 0x1176249c */
  if (!C.zf) goto L_1176249c;
L_11762499:;
  /* 11762499 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1176249a jmp 0x117624a4 */
  goto L_117624a4;
L_1176249c:;
  /* 1176249c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1176249e je 0x117624a4 */
  if (C.zf) goto L_117624a4;
  /* 117624a0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_117624a4:;
  /* 117624a4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_117624a8:;
  /* 117624a8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117624ab je 0x11762591 */
  if (C.zf) goto L_11762591;
L_117624b1:;
  /* 117624b1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117624b3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117624b6 je 0x117624bd */
  if (C.zf) goto L_117624bd;
  /* 117624b8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117624bb jne 0x117624c0 */
  if (!C.zf) goto L_117624c0;
L_117624bd:;
  /* 117624bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117624be jmp 0x117624b1 */
  goto L_117624b1;
L_117624c0:;
  /* 117624c0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117624c3 je 0x11762591 */
  if (C.zf) goto L_11762591;
  /* 117624c9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117624cb je 0x117624d5 */
  if (C.zf) goto L_117624d5;
  /* 117624cd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 117624cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117624d2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117624d5:;
  /* 117624d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117624d8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_117624da:;
  /* 117624da mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 117624e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_117624e3:;
  /* 117624e3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117624e6 jne 0x117624ec */
  if (!C.zf) goto L_117624ec;
  /* 117624e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117624e9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117624ea jmp 0x117624e3 */
  goto L_117624e3;
L_117624ec:;
  /* 117624ec cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117624ef jne 0x1176251d */
  if (!C.zf) goto L_1176251d;
  /* 117624f1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 117624f4 jne 0x1176251b */
  if (!C.zf) goto L_1176251b;
  /* 117624f6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117624f8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117624fb je 0x1176250a */
  if (C.zf) goto L_1176250a;
  /* 117624fd cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762501 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11762504 jne 0x1176250a */
  if (!C.zf) goto L_1176250a;
  /* 11762506 mov eax, edx */
  EAX = (EDX);
  /* 11762508 jmp 0x1176250d */
  goto L_1176250d;
L_1176250a:;
  /* 1176250a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1176250d:;
  /* 1176250d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11762510 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11762512 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762515 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11762518 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1176251b:;
  /* 1176251b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1176251d:;
  /* 1176251d mov edx, ebx */
  EDX = (EBX);
  /* 1176251f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11762520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11762522 je 0x11762532 */
  if (C.zf) goto L_11762532;
  /* 11762524 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11762525:;
  /* 11762525 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762527 je 0x1176252d */
  if (C.zf) goto L_1176252d;
  /* 11762529 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1176252c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1176252d:;
  /* 1176252d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1176252f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11762530 jne 0x11762525 */
  if (!C.zf) goto L_11762525;
L_11762532:;
  /* 11762532 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11762534 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762536 je 0x11762582 */
  if (C.zf) goto L_11762582;
  /* 11762538 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176253c jne 0x11762548 */
  if (!C.zf) goto L_11762548;
  /* 1176253e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762541 je 0x11762582 */
  if (C.zf) goto L_11762582;
  /* 11762543 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762546 je 0x11762582 */
  if (C.zf) goto L_11762582;
L_11762548:;
  /* 11762548 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176254c je 0x1176257c */
  if (C.zf) goto L_1176257c;
  /* 1176254e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762550 je 0x1176256b */
  if (C.zf) goto L_1176256b;
  /* 11762552 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11762555 test byte ptr [ebx + 0x117669c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x117669c1)))&(0x4u); fl_logic(_r,8); }
  /* 1176255c je 0x11762564 */
  if (C.zf) goto L_11762564;
  /* 1176255e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11762560 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11762561 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762562 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11762564:;
  /* 11762564 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11762566 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11762568 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11762569 jmp 0x1176257a */
  goto L_1176257a;
L_1176256b:;
  /* 1176256b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1176256e test byte ptr [edx + 0x117669c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x117669c1)))&(0x4u); fl_logic(_r,8); }
  /* 11762575 je 0x1176257a */
  if (C.zf) goto L_1176257a;
  /* 11762577 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762578 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1176257a:;
  /* 1176257a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1176257c:;
  /* 1176257c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176257d jmp 0x117624da */
  goto L_117624da;
L_11762582:;
  /* 11762582 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762584 je 0x1176258a */
  if (C.zf) goto L_1176258a;
  /* 11762586 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11762589 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1176258a:;
  /* 1176258a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1176258c jmp 0x117624a8 */
  goto L_117624a8;
L_11762591:;
  /* 11762591 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11762593 je 0x11762598 */
  if (C.zf) goto L_11762598;
  /* 11762595 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11762598:;
  /* 11762598 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1176259b pop edi */
  EDI = (pop32());
  /* 1176259c pop esi */
  ESI = (pop32());
  /* 1176259d pop ebx */
  EBX = (pop32());
  /* 1176259e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 117625a0 pop ebp */
  EBP = (pop32());
  /* 117625a1 ret  */
  ESPCHK(0x117623eeu, _esp0);
  ESP += 4; return;
}

/* FUN_100025a2 @ 0x117625a2 (306 bytes, 132 insns) */
void f_117625a2(void) {
  FTRACE(0x117625a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117625a2 push ecx */
  push32((uint32_t)(ECX));
  /* 117625a3 push ecx */
  push32((uint32_t)(ECX));
  /* 117625a4 mov eax, dword ptr [0x117667e8] */
  EAX = (r32((uint32_t)(0x117667e8)));
  /* 117625a9 push ebx */
  push32((uint32_t)(EBX));
  /* 117625aa push ebp */
  push32((uint32_t)(EBP));
  /* 117625ab mov ebp, dword ptr [0x1176505c] */
  EBP = (r32((uint32_t)(0x1176505c)));
  /* 117625b1 push esi */
  push32((uint32_t)(ESI));
  /* 117625b2 push edi */
  push32((uint32_t)(EDI));
  /* 117625b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117625b5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117625b7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117625b9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117625bb jne 0x117625f0 */
  if (!C.zf) goto L_117625f0;
  /* 117625bd call ebp */
  call_ind((uint32_t)(EBP), 0x117625bfu);
  /* 117625bf mov esi, eax */
  ESI = (EAX);
  /* 117625c1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117625c3 je 0x117625d1 */
  if (C.zf) goto L_117625d1;
  /* 117625c5 mov dword ptr [0x117667e8], 1 */
  w32((uint32_t)(0x117667e8), (0x1u));
  /* 117625cf jmp 0x117625f9 */
  goto L_117625f9;
L_117625d1:;
  /* 117625d1 call dword ptr [0x11765060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765060))), 0x117625d7u);
  /* 117625d7 mov edi, eax */
  EDI = (EAX);
  /* 117625d9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117625db je 0x117626cb */
  if (C.zf) goto L_117626cb;
  /* 117625e1 mov dword ptr [0x117667e8], 2 */
  w32((uint32_t)(0x117667e8), (0x2u));
  /* 117625eb jmp 0x1176267f */
  goto L_1176267f;
L_117625f0:;
  /* 117625f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117625f3 jne 0x1176267a */
  if (!C.zf) goto L_1176267a;
L_117625f9:;
  /* 117625f9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117625fb jne 0x11762609 */
  if (!C.zf) goto L_11762609;
  /* 117625fd call ebp */
  call_ind((uint32_t)(EBP), 0x117625ffu);
  /* 117625ff mov esi, eax */
  ESI = (EAX);
  /* 11762601 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762603 je 0x117626cb */
  if (C.zf) goto L_117626cb;
L_11762609:;
  /* 11762609 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1176260c mov eax, esi */
  EAX = (ESI);
  /* 1176260e je 0x1176261e */
  if (C.zf) goto L_1176261e;
L_11762610:;
  /* 11762610 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762611 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762612 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11762615 jne 0x11762610 */
  if (!C.zf) goto L_11762610;
  /* 11762617 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762618 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762619 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1176261c jne 0x11762610 */
  if (!C.zf) goto L_11762610;
L_1176261e:;
  /* 1176261e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762620 mov edi, dword ptr [0x1176508c] */
  EDI = (r32((uint32_t)(0x1176508c)));
  /* 11762626 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11762628 push ebx */
  push32((uint32_t)(EBX));
  /* 11762629 push ebx */
  push32((uint32_t)(EBX));
  /* 1176262a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176262b push ebx */
  push32((uint32_t)(EBX));
  /* 1176262c push ebx */
  push32((uint32_t)(EBX));
  /* 1176262d push eax */
  push32((uint32_t)(EAX));
  /* 1176262e push esi */
  push32((uint32_t)(ESI));
  /* 1176262f push ebx */
  push32((uint32_t)(EBX));
  /* 11762630 push ebx */
  push32((uint32_t)(EBX));
  /* 11762631 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11762635 call edi */
  call_ind((uint32_t)(EDI), 0x11762637u);
  /* 11762637 mov ebp, eax */
  EBP = (EAX);
  /* 11762639 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176263b je 0x1176266f */
  if (C.zf) goto L_1176266f;
  /* 1176263d push ebp */
  push32((uint32_t)(EBP));
  /* 1176263e call 0x11762af1 */
  push32(0x11762643u); f_11762af1();
  /* 11762643 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762645 pop ecx */
  ECX = (pop32());
  /* 11762646 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1176264a je 0x1176266f */
  if (C.zf) goto L_1176266f;
  /* 1176264c push ebx */
  push32((uint32_t)(EBX));
  /* 1176264d push ebx */
  push32((uint32_t)(EBX));
  /* 1176264e push ebp */
  push32((uint32_t)(EBP));
  /* 1176264f push eax */
  push32((uint32_t)(EAX));
  /* 11762650 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11762654 push esi */
  push32((uint32_t)(ESI));
  /* 11762655 push ebx */
  push32((uint32_t)(EBX));
  /* 11762656 push ebx */
  push32((uint32_t)(EBX));
  /* 11762657 call edi */
  call_ind((uint32_t)(EDI), 0x11762659u);
  /* 11762659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176265b jne 0x1176266b */
  if (!C.zf) goto L_1176266b;
  /* 1176265d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11762661 call 0x11762aa9 */
  push32(0x11762666u); f_11762aa9();
  /* 11762666 pop ecx */
  ECX = (pop32());
  /* 11762667 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1176266b:;
  /* 1176266b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1176266f:;
  /* 1176266f push esi */
  push32((uint32_t)(ESI));
  /* 11762670 call dword ptr [0x11765088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765088))), 0x11762676u);
  /* 11762676 mov eax, ebx */
  EAX = (EBX);
  /* 11762678 jmp 0x117626cd */
  goto L_117626cd;
L_1176267a:;
  /* 1176267a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176267d jne 0x117626cb */
  if (!C.zf) goto L_117626cb;
L_1176267f:;
  /* 1176267f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762681 jne 0x1176268f */
  if (!C.zf) goto L_1176268f;
  /* 11762683 call dword ptr [0x11765060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765060))), 0x11762689u);
  /* 11762689 mov edi, eax */
  EDI = (EAX);
  /* 1176268b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176268d je 0x117626cb */
  if (C.zf) goto L_117626cb;
L_1176268f:;
  /* 1176268f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762691 mov eax, edi */
  EAX = (EDI);
  /* 11762693 je 0x1176269f */
  if (C.zf) goto L_1176269f;
L_11762695:;
  /* 11762695 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762696 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762698 jne 0x11762695 */
  if (!C.zf) goto L_11762695;
  /* 1176269a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176269b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176269d jne 0x11762695 */
  if (!C.zf) goto L_11762695;
L_1176269f:;
  /* 1176269f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117626a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117626a2 mov ebp, eax */
  EBP = (EAX);
  /* 117626a4 push ebp */
  push32((uint32_t)(EBP));
  /* 117626a5 call 0x11762af1 */
  push32(0x117626aau); f_11762af1();
  /* 117626aa mov esi, eax */
  ESI = (EAX);
  /* 117626ac pop ecx */
  ECX = (pop32());
  /* 117626ad cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117626af jne 0x117626b5 */
  if (!C.zf) goto L_117626b5;
  /* 117626b1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117626b3 jmp 0x117626c0 */
  goto L_117626c0;
L_117626b5:;
  /* 117626b5 push ebp */
  push32((uint32_t)(EBP));
  /* 117626b6 push edi */
  push32((uint32_t)(EDI));
  /* 117626b7 push esi */
  push32((uint32_t)(ESI));
  /* 117626b8 call 0x117630e0 */
  push32(0x117626bdu); f_117630e0();
  /* 117626bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117626c0:;
  /* 117626c0 push edi */
  push32((uint32_t)(EDI));
  /* 117626c1 call dword ptr [0x117650a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650a8))), 0x117626c7u);
  /* 117626c7 mov eax, esi */
  EAX = (ESI);
  /* 117626c9 jmp 0x117626cd */
  goto L_117626cd;
L_117626cb:;
  /* 117626cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117626cd:;
  /* 117626cd pop edi */
  EDI = (pop32());
  /* 117626ce pop esi */
  ESI = (pop32());
  /* 117626cf pop ebp */
  EBP = (pop32());
  /* 117626d0 pop ebx */
  EBX = (pop32());
  /* 117626d1 pop ecx */
  ECX = (pop32());
  /* 117626d2 pop ecx */
  ECX = (pop32());
  /* 117626d3 ret  */
  ESPCHK(0x117625a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d4 @ 0x117626d4 (60 bytes, 20 insns) */
void f_117626d4(void) {
  FTRACE(0x117626d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117626d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117626d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117626d8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117626dc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117626e1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 117626e4 push eax */
  push32((uint32_t)(EAX));
  /* 117626e5 call dword ptr [0x11765054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765054))), 0x117626ebu);
  /* 117626eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117626ed mov dword ptr [0x11766ac8], eax */
  w32((uint32_t)(0x11766ac8), (EAX));
  /* 117626f2 je 0x11762709 */
  if (C.zf) goto L_11762709;
  /* 117626f4 call 0x11763415 */
  push32(0x117626f9u); f_11763415();
  /* 117626f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117626fb jne 0x1176270c */
  if (!C.zf) goto L_1176270c;
  /* 117626fd push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11762703 call dword ptr [0x11765058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765058))), 0x11762709u);
L_11762709:;
  /* 11762709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1176270b ret  */
  ESPCHK(0x117626d4u, _esp0);
  ESP += 4; return;
L_1176270c:;
  /* 1176270c push 1 */
  push32((uint32_t)(0x1u));
  /* 1176270e pop eax */
  EAX = (pop32());
  /* 1176270f ret  */
  ESPCHK(0x117626d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x11762710 (117 bytes, 38 insns) */
void f_11762710(void) {
  FTRACE(0x11762710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762710 push ebx */
  push32((uint32_t)(EBX));
  /* 11762711 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11762713 cmp dword ptr [0x117668a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117668a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762719 push ebp */
  push32((uint32_t)(EBP));
  /* 1176271a mov ebp, dword ptr [0x1176504c] */
  EBP = (r32((uint32_t)(0x1176504c)));
  /* 11762720 jle 0x11762766 */
  if ((C.zf||C.sf!=C.of)) goto L_11762766;
  /* 11762722 mov eax, dword ptr [0x117668a4] */
  EAX = (r32((uint32_t)(0x117668a4)));
  /* 11762727 push esi */
  push32((uint32_t)(ESI));
  /* 11762728 push edi */
  push32((uint32_t)(EDI));
  /* 11762729 mov edi, dword ptr [0x11765050] */
  EDI = (r32((uint32_t)(0x11765050)));
  /* 1176272f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11762732:;
  /* 11762732 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11762737 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1176273c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1176273e call edi */
  call_ind((uint32_t)(EDI), 0x11762740u);
  /* 11762740 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11762745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11762747 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11762749 call edi */
  call_ind((uint32_t)(EDI), 0x1176274bu);
  /* 1176274b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1176274e push 0 */
  push32((uint32_t)(0x0u));
  /* 11762750 push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11762756 call ebp */
  call_ind((uint32_t)(EBP), 0x11762758u);
  /* 11762758 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176275b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1176275c cmp ebx, dword ptr [0x117668a0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117668a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762762 jl 0x11762732 */
  if ((C.sf!=C.of)) goto L_11762732;
  /* 11762764 pop edi */
  EDI = (pop32());
  /* 11762765 pop esi */
  ESI = (pop32());
L_11762766:;
  /* 11762766 push dword ptr [0x117668a4] */
  push32((uint32_t)(r32((uint32_t)(0x117668a4))));
  /* 1176276c push 0 */
  push32((uint32_t)(0x0u));
  /* 1176276e push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11762774 call ebp */
  call_ind((uint32_t)(EBP), 0x11762776u);
  /* 11762776 push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 1176277c call dword ptr [0x11765058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765058))), 0x11762782u);
  /* 11762782 pop ebp */
  EBP = (pop32());
  /* 11762783 pop ebx */
  EBX = (pop32());
  /* 11762784 ret  */
  ESPCHK(0x11762710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002785 @ 0x11762785 (57 bytes, 18 insns) */
void f_11762785(void) {
  FTRACE(0x11762785u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762785 mov eax, dword ptr [0x11766698] */
  EAX = (r32((uint32_t)(0x11766698)));
  /* 1176278a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176278d je 0x1176279c */
  if (C.zf) goto L_1176279c;
  /* 1176278f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762791 jne 0x117627bd */
  if (!C.zf) goto L_117627bd;
  /* 11762793 cmp dword ptr [0x1176669c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1176669c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176279a jne 0x117627bd */
  if (!C.zf) goto L_117627bd;
L_1176279c:;
  /* 1176279c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 117627a1 call 0x117627be */
  push32(0x117627a6u); f_117627be();
  /* 117627a6 mov eax, dword ptr [0x117667ec] */
  EAX = (r32((uint32_t)(0x117667ec)));
  /* 117627ab pop ecx */
  ECX = (pop32());
  /* 117627ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117627ae je 0x117627b2 */
  if (C.zf) goto L_117627b2;
  /* 117627b0 call eax */
  call_ind((uint32_t)(EAX), 0x117627b2u);
L_117627b2:;
  /* 117627b2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 117627b7 call 0x117627be */
  push32(0x117627bcu); f_117627be();
  /* 117627bc pop ecx */
  ECX = (pop32());
L_117627bd:;
  /* 117627bd ret  */
  ESPCHK(0x11762785u, _esp0);
  ESP += 4; return;
}

/* FUN_100027be @ 0x117627be (339 bytes, 100 insns) */
void f_117627be(void) {
  FTRACE(0x117627beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117627be push ebp */
  push32((uint32_t)(EBP));
  /* 117627bf mov ebp, esp */
  EBP = (ESP);
  /* 117627c1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117627c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117627ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117627cc mov eax, 0x11766230 */
  EAX = (0x11766230u);
L_117627d1:;
  /* 117627d1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117627d3 je 0x117627e0 */
  if (C.zf) goto L_117627e0;
  /* 117627d5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117627d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117627d9 cmp eax, 0x117662c0 */
  { uint32_t _a=(EAX),_b=(0x117662c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117627de jl 0x117627d1 */
  if ((C.sf!=C.of)) goto L_117627d1;
L_117627e0:;
  /* 117627e0 push esi */
  push32((uint32_t)(ESI));
  /* 117627e1 mov esi, ecx */
  ESI = (ECX);
  /* 117627e3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 117627e6 cmp edx, dword ptr [esi + 0x11766230] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11766230))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117627ec jne 0x1176290e */
  if (!C.zf) goto L_1176290e;
  /* 117627f2 mov eax, dword ptr [0x11766698] */
  EAX = (r32((uint32_t)(0x11766698)));
  /* 117627f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117627fa je 0x117628e8 */
  if (C.zf) goto L_117628e8;
  /* 11762800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762802 jne 0x11762811 */
  if (!C.zf) goto L_11762811;
  /* 11762804 cmp dword ptr [0x1176669c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1176669c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176280b je 0x117628e8 */
  if (C.zf) goto L_117628e8;
L_11762811:;
  /* 11762811 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762817 je 0x1176290e */
  if (C.zf) goto L_1176290e;
  /* 1176281d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11762823 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11762828 push eax */
  push32((uint32_t)(EAX));
  /* 11762829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1176282b call dword ptr [0x117650a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117650a4))), 0x11762831u);
  /* 11762831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762833 jne 0x11762848 */
  if (!C.zf) goto L_11762848;
  /* 11762835 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1176283b push 0x11765400 */
  push32((uint32_t)(0x11765400u));
  /* 11762840 push eax */
  push32((uint32_t)(EAX));
  /* 11762841 call 0x11762b80 */
  push32(0x11762846u); f_11762b80();
  /* 11762846 pop ecx */
  ECX = (pop32());
  /* 11762847 pop ecx */
  ECX = (pop32());
L_11762848:;
  /* 11762848 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1176284e push edi */
  push32((uint32_t)(EDI));
  /* 1176284f push eax */
  push32((uint32_t)(EAX));
  /* 11762850 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11762856 call 0x11762c70 */
  push32(0x1176285bu); f_11762c70();
  /* 1176285b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176285c pop ecx */
  ECX = (pop32());
  /* 1176285d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762860 jbe 0x1176288b */
  if ((C.cf||C.zf)) goto L_1176288b;
  /* 11762862 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11762868 push eax */
  push32((uint32_t)(EAX));
  /* 11762869 call 0x11762c70 */
  push32(0x1176286eu); f_11762c70();
  /* 1176286e mov edi, eax */
  EDI = (EAX);
  /* 11762870 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11762876 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762879 push 3 */
  push32((uint32_t)(0x3u));
  /* 1176287b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176287d push 0x117653fc */
  push32((uint32_t)(0x117653fcu));
  /* 11762882 push edi */
  push32((uint32_t)(EDI));
  /* 11762883 call 0x11763cf0 */
  push32(0x11762888u); f_11763cf0();
  /* 11762888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1176288b:;
  /* 1176288b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11762891 push 0x117653e0 */
  push32((uint32_t)(0x117653e0u));
  /* 11762896 push eax */
  push32((uint32_t)(EAX));
  /* 11762897 call 0x11762b80 */
  push32(0x1176289cu); f_11762b80();
  /* 1176289c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117628a2 push edi */
  push32((uint32_t)(EDI));
  /* 117628a3 push eax */
  push32((uint32_t)(EAX));
  /* 117628a4 call 0x11762b90 */
  push32(0x117628a9u); f_11762b90();
  /* 117628a9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117628af push 0x117653dc */
  push32((uint32_t)(0x117653dcu));
  /* 117628b4 push eax */
  push32((uint32_t)(EAX));
  /* 117628b5 call 0x11762b90 */
  push32(0x117628bau); f_11762b90();
  /* 117628ba push dword ptr [esi + 0x11766234] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11766234))));
  /* 117628c0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117628c6 push eax */
  push32((uint32_t)(EAX));
  /* 117628c7 call 0x11762b90 */
  push32(0x117628ccu); f_11762b90();
  /* 117628cc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 117628d1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117628d7 push 0x117653b4 */
  push32((uint32_t)(0x117653b4u));
  /* 117628dc push eax */
  push32((uint32_t)(EAX));
  /* 117628dd call 0x11763c5e */
  push32(0x117628e2u); f_11763c5e();
  /* 117628e2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117628e5 pop edi */
  EDI = (pop32());
  /* 117628e6 jmp 0x1176290e */
  goto L_1176290e;
L_117628e8:;
  /* 117628e8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 117628eb lea esi, [esi + 0x11766234] */
  ESI = ((uint32_t)(ESI + 0x11766234));
  /* 117628f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117628f3 push eax */
  push32((uint32_t)(EAX));
  /* 117628f4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117628f6 call 0x11762c70 */
  push32(0x117628fbu); f_11762c70();
  /* 117628fb pop ecx */
  ECX = (pop32());
  /* 117628fc push eax */
  push32((uint32_t)(EAX));
  /* 117628fd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117628ff push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11762901 call dword ptr [0x11765094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765094))), 0x11762907u);
  /* 11762907 push eax */
  push32((uint32_t)(EAX));
  /* 11762908 call dword ptr [0x11765048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765048))), 0x1176290eu);
L_1176290e:;
  /* 1176290e pop esi */
  ESI = (pop32());
  /* 1176290f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11762910 ret  */
  ESPCHK(0x117627beu, _esp0);
  ESP += 4; return;
}

/* FUN_10002911 @ 0x11762911 (41 bytes, 12 insns) */
void f_11762911(void) {
  FTRACE(0x11762911u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762911 push esi */
  push32((uint32_t)(ESI));
  /* 11762912 mov esi, dword ptr [0x11765044] */
  ESI = (r32((uint32_t)(0x11765044)));
  /* 11762918 push dword ptr [0x11766304] */
  push32((uint32_t)(r32((uint32_t)(0x11766304))));
  /* 1176291e call esi */
  call_ind((uint32_t)(ESI), 0x11762920u);
  /* 11762920 push dword ptr [0x117662f4] */
  push32((uint32_t)(r32((uint32_t)(0x117662f4))));
  /* 11762926 call esi */
  call_ind((uint32_t)(ESI), 0x11762928u);
  /* 11762928 push dword ptr [0x117662e4] */
  push32((uint32_t)(r32((uint32_t)(0x117662e4))));
  /* 1176292e call esi */
  call_ind((uint32_t)(ESI), 0x11762930u);
  /* 11762930 push dword ptr [0x117662c4] */
  push32((uint32_t)(r32((uint32_t)(0x117662c4))));
  /* 11762936 call esi */
  call_ind((uint32_t)(ESI), 0x11762938u);
  /* 11762938 pop esi */
  ESI = (pop32());
  /* 11762939 ret  */
  ESPCHK(0x11762911u, _esp0);
  ESP += 4; return;
}

/* FUN_1000293a @ 0x1176293a (108 bytes, 34 insns) */
void f_1176293a(void) {
  FTRACE(0x1176293au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1176293a push esi */
  push32((uint32_t)(ESI));
  /* 1176293b push edi */
  push32((uint32_t)(EDI));
  /* 1176293c mov edi, dword ptr [0x117650a0] */
  EDI = (r32((uint32_t)(0x117650a0)));
  /* 11762942 mov esi, 0x117662c0 */
  ESI = (0x117662c0u);
L_11762947:;
  /* 11762947 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11762949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176294b je 0x11762978 */
  if (C.zf) goto L_11762978;
  /* 1176294d cmp esi, 0x11766304 */
  { uint32_t _a=(ESI),_b=(0x11766304u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762953 je 0x11762978 */
  if (C.zf) goto L_11762978;
  /* 11762955 cmp esi, 0x117662f4 */
  { uint32_t _a=(ESI),_b=(0x117662f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176295b je 0x11762978 */
  if (C.zf) goto L_11762978;
  /* 1176295d cmp esi, 0x117662e4 */
  { uint32_t _a=(ESI),_b=(0x117662e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762963 je 0x11762978 */
  if (C.zf) goto L_11762978;
  /* 11762965 cmp esi, 0x117662c4 */
  { uint32_t _a=(ESI),_b=(0x117662c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176296b je 0x11762978 */
  if (C.zf) goto L_11762978;
  /* 1176296d push eax */
  push32((uint32_t)(EAX));
  /* 1176296e call edi */
  call_ind((uint32_t)(EDI), 0x11762970u);
  /* 11762970 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11762972 call 0x11762aa9 */
  push32(0x11762977u); f_11762aa9();
  /* 11762977 pop ecx */
  ECX = (pop32());
L_11762978:;
  /* 11762978 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176297b cmp esi, 0x11766380 */
  { uint32_t _a=(ESI),_b=(0x11766380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762981 jl 0x11762947 */
  if ((C.sf!=C.of)) goto L_11762947;
  /* 11762983 push dword ptr [0x117662e4] */
  push32((uint32_t)(r32((uint32_t)(0x117662e4))));
  /* 11762989 call edi */
  call_ind((uint32_t)(EDI), 0x1176298bu);
  /* 1176298b push dword ptr [0x117662f4] */
  push32((uint32_t)(r32((uint32_t)(0x117662f4))));
  /* 11762991 call edi */
  call_ind((uint32_t)(EDI), 0x11762993u);
  /* 11762993 push dword ptr [0x11766304] */
  push32((uint32_t)(r32((uint32_t)(0x11766304))));
  /* 11762999 call edi */
  call_ind((uint32_t)(EDI), 0x1176299bu);
  /* 1176299b push dword ptr [0x117662c4] */
  push32((uint32_t)(r32((uint32_t)(0x117662c4))));
  /* 117629a1 call edi */
  call_ind((uint32_t)(EDI), 0x117629a3u);
  /* 117629a3 pop edi */
  EDI = (pop32());
  /* 117629a4 pop esi */
  ESI = (pop32());
  /* 117629a5 ret  */
  ESPCHK(0x1176293au, _esp0);
  ESP += 4; return;
}

/* FUN_100029a6 @ 0x117629a6 (97 bytes, 37 insns) */
void f_117629a6(void) {
  FTRACE(0x117629a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117629a6 push ebp */
  push32((uint32_t)(EBP));
  /* 117629a7 mov ebp, esp */
  EBP = (ESP);
  /* 117629a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117629ac push esi */
  push32((uint32_t)(ESI));
  /* 117629ad cmp dword ptr [eax*4 + 0x117662c0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x117662c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117629b5 lea esi, [eax*4 + 0x117662c0] */
  ESI = ((uint32_t)(EAX*4 + 0x117662c0));
  /* 117629bc jne 0x117629fc */
  if (!C.zf) goto L_117629fc;
  /* 117629be push edi */
  push32((uint32_t)(EDI));
  /* 117629bf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117629c1 call 0x11762af1 */
  push32(0x117629c6u); f_11762af1();
  /* 117629c6 mov edi, eax */
  EDI = (EAX);
  /* 117629c8 pop ecx */
  ECX = (pop32());
  /* 117629c9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117629cb jne 0x117629d5 */
  if (!C.zf) goto L_117629d5;
  /* 117629cd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117629cf call 0x11761e16 */
  push32(0x117629d4u); f_11761e16();
  /* 117629d4 pop ecx */
  ECX = (pop32());
L_117629d5:;
  /* 117629d5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117629d7 call 0x117629a6 */
  push32(0x117629dcu); f_117629a6();
  /* 117629dc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117629df pop ecx */
  ECX = (pop32());
  /* 117629e0 push edi */
  push32((uint32_t)(EDI));
  /* 117629e1 jne 0x117629ed */
  if (!C.zf) goto L_117629ed;
  /* 117629e3 call dword ptr [0x11765044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765044))), 0x117629e9u);
  /* 117629e9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117629eb jmp 0x117629f3 */
  goto L_117629f3;
L_117629ed:;
  /* 117629ed call 0x11762aa9 */
  push32(0x117629f2u); f_11762aa9();
  /* 117629f2 pop ecx */
  ECX = (pop32());
L_117629f3:;
  /* 117629f3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117629f5 call 0x11762a07 */
  push32(0x117629fau); f_11762a07();
  /* 117629fa pop ecx */
  ECX = (pop32());
  /* 117629fb pop edi */
  EDI = (pop32());
L_117629fc:;
  /* 117629fc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117629fe call dword ptr [0x11765040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765040))), 0x11762a04u);
  /* 11762a04 pop esi */
  ESI = (pop32());
  /* 11762a05 pop ebp */
  EBP = (pop32());
  /* 11762a06 ret  */
  ESPCHK(0x117629a6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a07 @ 0x11762a07 (21 bytes, 7 insns) */
void f_11762a07(void) {
  FTRACE(0x11762a07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762a07 push ebp */
  push32((uint32_t)(EBP));
  /* 11762a08 mov ebp, esp */
  EBP = (ESP);
  /* 11762a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11762a0d push dword ptr [eax*4 + 0x117662c0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x117662c0))));
  /* 11762a14 call dword ptr [0x1176503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176503c))), 0x11762a1au);
  /* 11762a1a pop ebp */
  EBP = (pop32());
  /* 11762a1b ret  */
  ESPCHK(0x11762a07u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a1c @ 0x11762a1c (141 bytes, 56 insns) */
void f_11762a1c(void) {
  FTRACE(0x11762a1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762a1c push ebx */
  push32((uint32_t)(EBX));
  /* 11762a1d push esi */
  push32((uint32_t)(ESI));
  /* 11762a1e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11762a22 push edi */
  push32((uint32_t)(EDI));
  /* 11762a23 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11762a28 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762a2b mov ebx, esi */
  EBX = (ESI);
  /* 11762a2d ja 0x11762a3c */
  if ((!C.cf&&!C.zf)) goto L_11762a3c;
  /* 11762a2f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762a31 jne 0x11762a36 */
  if (!C.zf) goto L_11762a36;
  /* 11762a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11762a35 pop esi */
  ESI = (pop32());
L_11762a36:;
  /* 11762a36 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11762a39 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11762a3c:;
  /* 11762a3c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11762a3e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762a41 ja 0x11762a7d */
  if ((!C.cf&&!C.zf)) goto L_11762a7d;
  /* 11762a43 cmp ebx, dword ptr [0x11766510] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11766510))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762a49 ja 0x11762a68 */
  if ((!C.cf&&!C.zf)) goto L_11762a68;
  /* 11762a4b push 9 */
  push32((uint32_t)(0x9u));
  /* 11762a4d call 0x117629a6 */
  push32(0x11762a52u); f_117629a6();
  /* 11762a52 push ebx */
  push32((uint32_t)(EBX));
  /* 11762a53 call 0x117637a9 */
  push32(0x11762a58u); f_117637a9();
  /* 11762a58 push 9 */
  push32((uint32_t)(0x9u));
  /* 11762a5a mov edi, eax */
  EDI = (EAX);
  /* 11762a5c call 0x11762a07 */
  push32(0x11762a61u); f_11762a07();
  /* 11762a61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11762a64 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11762a66 jne 0x11762a93 */
  if (!C.zf) goto L_11762a93;
L_11762a68:;
  /* 11762a68 push esi */
  push32((uint32_t)(ESI));
  /* 11762a69 push 8 */
  push32((uint32_t)(0x8u));
  /* 11762a6b push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11762a71 call dword ptr [0x11765038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765038))), 0x11762a77u);
  /* 11762a77 mov edi, eax */
  EDI = (EAX);
  /* 11762a79 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11762a7b jne 0x11762a9f */
  if (!C.zf) goto L_11762a9f;
L_11762a7d:;
  /* 11762a7d cmp dword ptr [0x11766864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11766864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762a84 je 0x11762a9f */
  if (C.zf) goto L_11762a9f;
  /* 11762a86 push esi */
  push32((uint32_t)(ESI));
  /* 11762a87 call 0x11763e48 */
  push32(0x11762a8cu); f_11763e48();
  /* 11762a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762a8e pop ecx */
  ECX = (pop32());
  /* 11762a8f je 0x11762aa5 */
  if (C.zf) goto L_11762aa5;
  /* 11762a91 jmp 0x11762a3c */
  goto L_11762a3c;
L_11762a93:;
  /* 11762a93 push ebx */
  push32((uint32_t)(EBX));
  /* 11762a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11762a96 push edi */
  push32((uint32_t)(EDI));
  /* 11762a97 call 0x11763df0 */
  push32(0x11762a9cu); f_11763df0();
  /* 11762a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11762a9f:;
  /* 11762a9f mov eax, edi */
  EAX = (EDI);
L_11762aa1:;
  /* 11762aa1 pop edi */
  EDI = (pop32());
  /* 11762aa2 pop esi */
  ESI = (pop32());
  /* 11762aa3 pop ebx */
  EBX = (pop32());
  /* 11762aa4 ret  */
  ESPCHK(0x11762a1cu, _esp0);
  ESP += 4; return;
L_11762aa5:;
  /* 11762aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762aa7 jmp 0x11762aa1 */
  goto L_11762aa1;
}

/* FUN_10002aa9 @ 0x11762aa9 (72 bytes, 29 insns) */
void f_11762aa9(void) {
  FTRACE(0x11762aa9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762aa9 push esi */
  push32((uint32_t)(ESI));
  /* 11762aaa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11762aae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762ab0 je 0x11762aef */
  if (C.zf) goto L_11762aef;
  /* 11762ab2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11762ab4 call 0x117629a6 */
  push32(0x11762ab9u); f_117629a6();
  /* 11762ab9 push esi */
  push32((uint32_t)(ESI));
  /* 11762aba call 0x11763453 */
  push32(0x11762abfu); f_11763453();
  /* 11762abf pop ecx */
  ECX = (pop32());
  /* 11762ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762ac2 pop ecx */
  ECX = (pop32());
  /* 11762ac3 je 0x11762ad8 */
  if (C.zf) goto L_11762ad8;
  /* 11762ac5 push esi */
  push32((uint32_t)(ESI));
  /* 11762ac6 push eax */
  push32((uint32_t)(EAX));
  /* 11762ac7 call 0x1176347e */
  push32(0x11762accu); f_1176347e();
  /* 11762acc push 9 */
  push32((uint32_t)(0x9u));
  /* 11762ace call 0x11762a07 */
  push32(0x11762ad3u); f_11762a07();
  /* 11762ad3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11762ad6 pop esi */
  ESI = (pop32());
  /* 11762ad7 ret  */
  ESPCHK(0x11762aa9u, _esp0);
  ESP += 4; return;
L_11762ad8:;
  /* 11762ad8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11762ada call 0x11762a07 */
  push32(0x11762adfu); f_11762a07();
  /* 11762adf pop ecx */
  ECX = (pop32());
  /* 11762ae0 push esi */
  push32((uint32_t)(ESI));
  /* 11762ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11762ae3 push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11762ae9 call dword ptr [0x1176504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176504c))), 0x11762aefu);
L_11762aef:;
  /* 11762aef pop esi */
  ESI = (pop32());
  /* 11762af0 ret  */
  ESPCHK(0x11762aa9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11762af1 (18 bytes, 6 insns) */
void f_11762af1(void) {
  FTRACE(0x11762af1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762af1 push dword ptr [0x11766864] */
  push32((uint32_t)(r32((uint32_t)(0x11766864))));
  /* 11762af7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11762afb call 0x11762b03 */
  push32(0x11762b00u); f_11762b03();
  /* 11762b00 pop ecx */
  ECX = (pop32());
  /* 11762b01 pop ecx */
  ECX = (pop32());
  /* 11762b02 ret  */
  ESPCHK(0x11762af1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11762b03 (44 bytes, 16 insns) */
void f_11762b03(void) {
  FTRACE(0x11762b03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762b03 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762b08 ja 0x11762b2c */
  if ((!C.cf&&!C.zf)) goto L_11762b2c;
L_11762b0a:;
  /* 11762b0a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11762b0e call 0x11762b2f */
  push32(0x11762b13u); f_11762b2f();
  /* 11762b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762b15 pop ecx */
  ECX = (pop32());
  /* 11762b16 jne 0x11762b2e */
  if (!C.zf) goto L_11762b2e;
  /* 11762b18 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762b1c je 0x11762b2e */
  if (C.zf) goto L_11762b2e;
  /* 11762b1e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11762b22 call 0x11763e48 */
  push32(0x11762b27u); f_11763e48();
  /* 11762b27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11762b29 pop ecx */
  ECX = (pop32());
  /* 11762b2a jne 0x11762b0a */
  if (!C.zf) goto L_11762b0a;
L_11762b2c:;
  /* 11762b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11762b2e:;
  /* 11762b2e ret  */
  ESPCHK(0x11762b03u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b2f @ 0x11762b2f (78 bytes, 30 insns) */
void f_11762b2f(void) {
  FTRACE(0x11762b2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762b2f push esi */
  push32((uint32_t)(ESI));
  /* 11762b30 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11762b34 cmp esi, dword ptr [0x11766510] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11766510))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762b3a push edi */
  push32((uint32_t)(EDI));
  /* 11762b3b ja 0x11762b5e */
  if ((!C.cf&&!C.zf)) goto L_11762b5e;
  /* 11762b3d push 9 */
  push32((uint32_t)(0x9u));
  /* 11762b3f call 0x117629a6 */
  push32(0x11762b44u); f_117629a6();
  /* 11762b44 push esi */
  push32((uint32_t)(ESI));
  /* 11762b45 call 0x117637a9 */
  push32(0x11762b4au); f_117637a9();
  /* 11762b4a push 9 */
  push32((uint32_t)(0x9u));
  /* 11762b4c mov edi, eax */
  EDI = (EAX);
  /* 11762b4e call 0x11762a07 */
  push32(0x11762b53u); f_11762a07();
  /* 11762b53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11762b56 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11762b58 je 0x11762b5e */
  if (C.zf) goto L_11762b5e;
  /* 11762b5a mov eax, edi */
  EAX = (EDI);
  /* 11762b5c jmp 0x11762b7a */
  goto L_11762b7a;
L_11762b5e:;
  /* 11762b5e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11762b60 jne 0x11762b65 */
  if (!C.zf) goto L_11762b65;
  /* 11762b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11762b64 pop esi */
  ESI = (pop32());
L_11762b65:;
  /* 11762b65 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11762b68 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11762b6b push esi */
  push32((uint32_t)(ESI));
  /* 11762b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11762b6e push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11762b74 call dword ptr [0x11765038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765038))), 0x11762b7au);
L_11762b7a:;
  /* 11762b7a pop edi */
  EDI = (pop32());
  /* 11762b7b pop esi */
  ESI = (pop32());
  /* 11762b7c ret  */
  ESPCHK(0x11762b2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x11762b80 (7 bytes, 3 insns) */
void f_11762b80(void) {
  FTRACE(0x11762b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762b80 push edi */
  push32((uint32_t)(EDI));
  /* 11762b81 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11762b85 jmp 0x11762bf1 */
  jmp_ind(0x11762bf1u); return;
}

/* FUN_10002b90 @ 0x11762b90 (224 bytes, 84 insns) */
void f_11762b90(void) {
  FTRACE(0x11762b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762b90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762b94 push edi */
  push32((uint32_t)(EDI));
  /* 11762b95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11762b9b je 0x11762bac */
  if (C.zf) goto L_11762bac;
L_11762b9d:;
  /* 11762b9d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11762b9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762ba0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11762ba2 je 0x11762bdf */
  if (C.zf) goto L_11762bdf;
  /* 11762ba4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11762baa jne 0x11762b9d */
  if (!C.zf) goto L_11762b9d;
L_11762bac:;
  /* 11762bac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11762bae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11762bb3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762bb5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11762bb8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11762bba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762bbd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11762bc2 je 0x11762bac */
  if (C.zf) goto L_11762bac;
  /* 11762bc4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11762bc7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11762bc9 je 0x11762bee */
  if (C.zf) goto L_11762bee;
  /* 11762bcb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11762bcd je 0x11762be9 */
  if (C.zf) goto L_11762be9;
  /* 11762bcf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11762bd4 je 0x11762be4 */
  if (C.zf) goto L_11762be4;
  /* 11762bd6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11762bdb je 0x11762bdf */
  if (C.zf) goto L_11762bdf;
  /* 11762bdd jmp 0x11762bac */
  goto L_11762bac;
L_11762bdf:;
  /* 11762bdf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11762be2 jmp 0x11762bf1 */
  goto L_11762bf1;
L_11762be4:;
  /* 11762be4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11762be7 jmp 0x11762bf1 */
  goto L_11762bf1;
L_11762be9:;
  /* 11762be9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11762bec jmp 0x11762bf1 */
  goto L_11762bf1;
L_11762bee:;
  /* 11762bee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11762bf1:;
  /* 11762bf1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11762bf5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11762bfb je 0x11762c16 */
  if (C.zf) goto L_11762c16;
L_11762bfd:;
  /* 11762bfd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11762bff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762c00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762c02 je 0x11762c68 */
  if (C.zf) goto L_11762c68;
  /* 11762c04 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11762c06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11762c07 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11762c0d jne 0x11762bfd */
  if (!C.zf) goto L_11762bfd;
  /* 11762c0f jmp 0x11762c16 */
  goto L_11762c16;
L_11762c11:;
  /* 11762c11 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11762c13 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11762c16:;
  /* 11762c16 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11762c1b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11762c1d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762c1f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11762c22 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11762c24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11762c26 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762c29 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11762c2e je 0x11762c11 */
  if (C.zf) goto L_11762c11;
  /* 11762c30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762c32 je 0x11762c68 */
  if (C.zf) goto L_11762c68;
  /* 11762c34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11762c36 je 0x11762c5f */
  if (C.zf) goto L_11762c5f;
  /* 11762c38 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11762c3e je 0x11762c52 */
  if (C.zf) goto L_11762c52;
  /* 11762c40 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11762c46 je 0x11762c4a */
  if (C.zf) goto L_11762c4a;
  /* 11762c48 jmp 0x11762c11 */
  goto L_11762c11;
L_11762c4a:;
  /* 11762c4a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11762c4c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11762c50 pop edi */
  EDI = (pop32());
  /* 11762c51 ret  */
  ESPCHK(0x11762b90u, _esp0);
  ESP += 4; return;
L_11762c52:;
  /* 11762c52 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11762c55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11762c59 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11762c5d pop edi */
  EDI = (pop32());
  /* 11762c5e ret  */
  ESPCHK(0x11762b90u, _esp0);
  ESP += 4; return;
L_11762c5f:;
  /* 11762c5f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11762c62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11762c66 pop edi */
  EDI = (pop32());
  /* 11762c67 ret  */
  ESPCHK(0x11762b90u, _esp0);
  ESP += 4; return;
L_11762c68:;
  /* 11762c68 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11762c6a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11762c6e pop edi */
  EDI = (pop32());
  /* 11762c6f ret  */
  ESPCHK(0x11762b90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11762c70 (123 bytes, 44 insns) */
void f_11762c70(void) {
  FTRACE(0x11762c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762c70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762c74 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11762c7a je 0x11762c90 */
  if (C.zf) goto L_11762c90;
L_11762c7c:;
  /* 11762c7c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11762c7e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762c7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11762c81 je 0x11762cc3 */
  if (C.zf) goto L_11762cc3;
  /* 11762c83 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11762c89 jne 0x11762c7c */
  if (!C.zf) goto L_11762c7c;
  /* 11762c8b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11762c90:;
  /* 11762c90 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11762c92 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11762c97 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762c99 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11762c9c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11762c9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762ca1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11762ca6 je 0x11762c90 */
  if (C.zf) goto L_11762c90;
  /* 11762ca8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11762cab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11762cad je 0x11762ce1 */
  if (C.zf) goto L_11762ce1;
  /* 11762caf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11762cb1 je 0x11762cd7 */
  if (C.zf) goto L_11762cd7;
  /* 11762cb3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11762cb8 je 0x11762ccd */
  if (C.zf) goto L_11762ccd;
  /* 11762cba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11762cbf je 0x11762cc3 */
  if (C.zf) goto L_11762cc3;
  /* 11762cc1 jmp 0x11762c90 */
  goto L_11762c90;
L_11762cc3:;
  /* 11762cc3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11762cc6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762cca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762ccc ret  */
  ESPCHK(0x11762c70u, _esp0);
  ESP += 4; return;
L_11762ccd:;
  /* 11762ccd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11762cd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762cd4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762cd6 ret  */
  ESPCHK(0x11762c70u, _esp0);
  ESP += 4; return;
L_11762cd7:;
  /* 11762cd7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11762cda mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762cde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762ce0 ret  */
  ESPCHK(0x11762c70u, _esp0);
  ESP += 4; return;
L_11762ce1:;
  /* 11762ce1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11762ce4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762ce8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762cea ret  */
  ESPCHK(0x11762c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ceb @ 0x11762ceb (429 bytes, 143 insns) */
void f_11762ceb(void) {
  FTRACE(0x11762cebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762ceb push ebp */
  push32((uint32_t)(EBP));
  /* 11762cec mov ebp, esp */
  EBP = (ESP);
  /* 11762cee sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762cf1 push ebx */
  push32((uint32_t)(EBX));
  /* 11762cf2 push esi */
  push32((uint32_t)(ESI));
  /* 11762cf3 push edi */
  push32((uint32_t)(EDI));
  /* 11762cf4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11762cf6 call 0x117629a6 */
  push32(0x11762cfbu); f_117629a6();
  /* 11762cfb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11762cfe call 0x11762e98 */
  push32(0x11762d03u); f_11762e98();
  /* 11762d03 mov ebx, eax */
  EBX = (EAX);
  /* 11762d05 pop ecx */
  ECX = (pop32());
  /* 11762d06 cmp ebx, dword ptr [0x117668a8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117668a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762d0c pop ecx */
  ECX = (pop32());
  /* 11762d0d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11762d10 jne 0x11762d19 */
  if (!C.zf) goto L_11762d19;
L_11762d12:;
  /* 11762d12 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11762d14 jmp 0x11762e89 */
  goto L_11762e89;
L_11762d19:;
  /* 11762d19 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11762d1b je 0x11762e77 */
  if (C.zf) goto L_11762e77;
  /* 11762d21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11762d23 mov eax, 0x11766418 */
  EAX = (0x11766418u);
L_11762d28:;
  /* 11762d28 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762d2a je 0x11762da0 */
  if (C.zf) goto L_11762da0;
  /* 11762d2c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762d2f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11762d30 cmp eax, 0x11766508 */
  { uint32_t _a=(EAX),_b=(0x11766508u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762d35 jl 0x11762d28 */
  if ((C.sf!=C.of)) goto L_11762d28;
  /* 11762d37 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11762d3a push eax */
  push32((uint32_t)(EAX));
  /* 11762d3b push ebx */
  push32((uint32_t)(EBX));
  /* 11762d3c call dword ptr [0x11765034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765034))), 0x11762d42u);
  /* 11762d42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11762d44 pop esi */
  ESI = (pop32());
  /* 11762d45 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762d47 jne 0x11762e6e */
  if (!C.zf) goto L_11762e6e;
  /* 11762d4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11762d4f and dword ptr [0x11766ac4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11766ac4)))&(0x0u); w32((uint32_t)(0x11766ac4), (_r)); fl_logic(_r,32); }
  /* 11762d56 pop ecx */
  ECX = (pop32());
  /* 11762d57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762d59 mov edi, 0x117669c0 */
  EDI = (0x117669c0u);
  /* 11762d5e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762d61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11762d63 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11762d64 mov dword ptr [0x117668a8], ebx */
  w32((uint32_t)(0x117668a8), (EBX));
  /* 11762d6a jbe 0x11762e5b */
  if ((C.cf||C.zf)) goto L_11762e5b;
  /* 11762d70 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762d74 je 0x11762e36 */
  if (C.zf) goto L_11762e36;
  /* 11762d7a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11762d7d:;
  /* 11762d7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11762d7f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762d81 je 0x11762e36 */
  if (C.zf) goto L_11762e36;
  /* 11762d87 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11762d8b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11762d8e:;
  /* 11762d8e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762d90 ja 0x11762e2a */
  if ((!C.cf&&!C.zf)) goto L_11762e2a;
  /* 11762d96 or byte ptr [eax + 0x117669c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(0x4u); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 11762d9d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762d9e jmp 0x11762d8e */
  goto L_11762d8e;
L_11762da0:;
  /* 11762da0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11762da4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11762da6 pop ecx */
  ECX = (pop32());
  /* 11762da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762da9 mov edi, 0x117669c0 */
  EDI = (0x117669c0u);
  /* 11762dae lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11762db1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11762db3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11762db6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11762db7 lea ebx, [esi + 0x11766428] */
  EBX = ((uint32_t)(ESI + 0x11766428));
L_11762dbd:;
  /* 11762dbd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762dc0 mov ecx, ebx */
  ECX = (EBX);
  /* 11762dc2 je 0x11762df0 */
  if (C.zf) goto L_11762df0;
L_11762dc4:;
  /* 11762dc4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11762dc7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11762dc9 je 0x11762df0 */
  if (C.zf) goto L_11762df0;
  /* 11762dcb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11762dce movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11762dd1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762dd3 ja 0x11762de9 */
  if ((!C.cf&&!C.zf)) goto L_11762de9;
  /* 11762dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11762dd8 mov dl, byte ptr [edx + 0x11766410] */
  DL = (r8((uint32_t)(EDX + 0x11766410)));
L_11762dde:;
  /* 11762dde or byte ptr [eax + 0x117669c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(DL); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 11762de4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762de5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762de7 jbe 0x11762dde */
  if ((C.cf||C.zf)) goto L_11762dde;
L_11762de9:;
  /* 11762de9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762dea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762deb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762dee jne 0x11762dc4 */
  if (!C.zf) goto L_11762dc4;
L_11762df0:;
  /* 11762df0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11762df3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11762df6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762dfa jb 0x11762dbd */
  if (C.cf) goto L_11762dbd;
  /* 11762dfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11762dff mov dword ptr [0x117668bc], 1 */
  w32((uint32_t)(0x117668bc), (0x1u));
  /* 11762e09 push eax */
  push32((uint32_t)(EAX));
  /* 11762e0a mov dword ptr [0x117668a8], eax */
  w32((uint32_t)(0x117668a8), (EAX));
  /* 11762e0f call 0x11762ee2 */
  push32(0x11762e14u); f_11762ee2();
  /* 11762e14 lea esi, [esi + 0x1176641c] */
  ESI = ((uint32_t)(ESI + 0x1176641c));
  /* 11762e1a mov edi, 0x117668b0 */
  EDI = (0x117668b0u);
  /* 11762e1f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11762e20 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11762e21 pop ecx */
  ECX = (pop32());
  /* 11762e22 mov dword ptr [0x11766ac4], eax */
  w32((uint32_t)(0x11766ac4), (EAX));
  /* 11762e27 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11762e28 jmp 0x11762e7c */
  goto L_11762e7c;
L_11762e2a:;
  /* 11762e2a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762e2b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762e2c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11762e30 jne 0x11762d7d */
  if (!C.zf) goto L_11762d7d;
L_11762e36:;
  /* 11762e36 mov eax, esi */
  EAX = (ESI);
L_11762e38:;
  /* 11762e38 or byte ptr [eax + 0x117669c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(0x8u); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 11762e3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762e40 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762e45 jb 0x11762e38 */
  if (C.cf) goto L_11762e38;
  /* 11762e47 push ebx */
  push32((uint32_t)(EBX));
  /* 11762e48 call 0x11762ee2 */
  push32(0x11762e4du); f_11762ee2();
  /* 11762e4d pop ecx */
  ECX = (pop32());
  /* 11762e4e mov dword ptr [0x11766ac4], eax */
  w32((uint32_t)(0x11766ac4), (EAX));
  /* 11762e53 mov dword ptr [0x117668bc], esi */
  w32((uint32_t)(0x117668bc), (ESI));
  /* 11762e59 jmp 0x11762e62 */
  goto L_11762e62;
L_11762e5b:;
  /* 11762e5b and dword ptr [0x117668bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117668bc)))&(0x0u); w32((uint32_t)(0x117668bc), (_r)); fl_logic(_r,32); }
L_11762e62:;
  /* 11762e62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762e64 mov edi, 0x117668b0 */
  EDI = (0x117668b0u);
  /* 11762e69 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11762e6a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11762e6b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11762e6c jmp 0x11762e7c */
  goto L_11762e7c;
L_11762e6e:;
  /* 11762e6e cmp dword ptr [0x11766850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11766850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762e75 je 0x11762e86 */
  if (C.zf) goto L_11762e86;
L_11762e77:;
  /* 11762e77 call 0x11762f15 */
  push32(0x11762e7cu); f_11762f15();
L_11762e7c:;
  /* 11762e7c call 0x11762f3e */
  push32(0x11762e81u); f_11762f3e();
  /* 11762e81 jmp 0x11762d12 */
  goto L_11762d12;
L_11762e86:;
  /* 11762e86 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11762e89:;
  /* 11762e89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11762e8b call 0x11762a07 */
  push32(0x11762e90u); f_11762a07();
  /* 11762e90 pop ecx */
  ECX = (pop32());
  /* 11762e91 mov eax, esi */
  EAX = (ESI);
  /* 11762e93 pop edi */
  EDI = (pop32());
  /* 11762e94 pop esi */
  ESI = (pop32());
  /* 11762e95 pop ebx */
  EBX = (pop32());
  /* 11762e96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11762e97 ret  */
  ESPCHK(0x11762cebu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e98 @ 0x11762e98 (74 bytes, 15 insns) */
void f_11762e98(void) {
  FTRACE(0x11762e98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762e98 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762e9c and dword ptr [0x11766850], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11766850)))&(0x0u); w32((uint32_t)(0x11766850), (_r)); fl_logic(_r,32); }
  /* 11762ea3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762ea6 jne 0x11762eb8 */
  if (!C.zf) goto L_11762eb8;
  /* 11762ea8 mov dword ptr [0x11766850], 1 */
  w32((uint32_t)(0x11766850), (0x1u));
  /* 11762eb2 jmp dword ptr [0x1176502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1176502c)))); return;
L_11762eb8:;
  /* 11762eb8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762ebb jne 0x11762ecd */
  if (!C.zf) goto L_11762ecd;
  /* 11762ebd mov dword ptr [0x11766850], 1 */
  w32((uint32_t)(0x11766850), (0x1u));
  /* 11762ec7 jmp dword ptr [0x11765030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11765030)))); return;
L_11762ecd:;
  /* 11762ecd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762ed0 jne 0x11762ee1 */
  if (!C.zf) goto L_11762ee1;
  /* 11762ed2 mov eax, dword ptr [0x11766880] */
  EAX = (r32((uint32_t)(0x11766880)));
  /* 11762ed7 mov dword ptr [0x11766850], 1 */
  w32((uint32_t)(0x11766850), (0x1u));
L_11762ee1:;
  /* 11762ee1 ret  */
  ESPCHK(0x11762e98u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee2 @ 0x11762ee2 (51 bytes, 19 insns) */
void f_11762ee2(void) {
  FTRACE(0x11762ee2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762ee2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11762ee6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762eeb je 0x11762f0f */
  if (C.zf) goto L_11762f0f;
  /* 11762eed sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762ef0 je 0x11762f09 */
  if (C.zf) goto L_11762f09;
  /* 11762ef2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762ef5 je 0x11762f03 */
  if (C.zf) goto L_11762f03;
  /* 11762ef7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11762ef8 je 0x11762efd */
  if (C.zf) goto L_11762efd;
  /* 11762efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762efc ret  */
  ESPCHK(0x11762ee2u, _esp0);
  ESP += 4; return;
L_11762efd:;
  /* 11762efd mov eax, 0x404 */
  EAX = (0x404u);
  /* 11762f02 ret  */
  ESPCHK(0x11762ee2u, _esp0);
  ESP += 4; return;
L_11762f03:;
  /* 11762f03 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11762f08 ret  */
  ESPCHK(0x11762ee2u, _esp0);
  ESP += 4; return;
L_11762f09:;
  /* 11762f09 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11762f0e ret  */
  ESPCHK(0x11762ee2u, _esp0);
  ESP += 4; return;
L_11762f0f:;
  /* 11762f0f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11762f14 ret  */
  ESPCHK(0x11762ee2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f15 @ 0x11762f15 (41 bytes, 17 insns) */
void f_11762f15(void) {
  FTRACE(0x11762f15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762f15 push edi */
  push32((uint32_t)(EDI));
  /* 11762f16 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11762f18 pop ecx */
  ECX = (pop32());
  /* 11762f19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762f1b mov edi, 0x117669c0 */
  EDI = (0x117669c0u);
  /* 11762f20 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11762f22 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11762f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762f25 mov edi, 0x117668b0 */
  EDI = (0x117668b0u);
  /* 11762f2a mov dword ptr [0x117668a8], eax */
  w32((uint32_t)(0x117668a8), (EAX));
  /* 11762f2f mov dword ptr [0x117668bc], eax */
  w32((uint32_t)(0x117668bc), (EAX));
  /* 11762f34 mov dword ptr [0x11766ac4], eax */
  w32((uint32_t)(0x11766ac4), (EAX));
  /* 11762f39 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11762f3a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11762f3b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11762f3c pop edi */
  EDI = (pop32());
  /* 11762f3d ret  */
  ESPCHK(0x11762f15u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f3e @ 0x11762f3e (389 bytes, 124 insns) */
void f_11762f3e(void) {
  FTRACE(0x11762f3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11762f3e push ebp */
  push32((uint32_t)(EBP));
  /* 11762f3f mov ebp, esp */
  EBP = (ESP);
  /* 11762f41 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762f47 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11762f4a push esi */
  push32((uint32_t)(ESI));
  /* 11762f4b push eax */
  push32((uint32_t)(EAX));
  /* 11762f4c push dword ptr [0x117668a8] */
  push32((uint32_t)(r32((uint32_t)(0x117668a8))));
  /* 11762f52 call dword ptr [0x11765034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765034))), 0x11762f58u);
  /* 11762f58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762f5b jne 0x11763077 */
  if (!C.zf) goto L_11763077;
  /* 11762f61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11762f63 mov esi, 0x100 */
  ESI = (0x100u);
L_11762f68:;
  /* 11762f68 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11762f6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11762f70 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762f72 jb 0x11762f68 */
  if (C.cf) goto L_11762f68;
  /* 11762f74 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11762f77 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11762f7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11762f80 je 0x11762fb9 */
  if (C.zf) goto L_11762fb9;
  /* 11762f82 push ebx */
  push32((uint32_t)(EBX));
  /* 11762f83 push edi */
  push32((uint32_t)(EDI));
  /* 11762f84 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11762f87:;
  /* 11762f87 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11762f8a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11762f8d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11762f8f ja 0x11762fae */
  if ((!C.cf&&!C.zf)) goto L_11762fae;
  /* 11762f91 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11762f93 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11762f9a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11762f9b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11762fa0 mov ebx, ecx */
  EBX = (ECX);
  /* 11762fa2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11762fa5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11762fa7 mov ecx, ebx */
  ECX = (EBX);
  /* 11762fa9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11762fac rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11762fae:;
  /* 11762fae inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11762faf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11762fb0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11762fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11762fb5 jne 0x11762f87 */
  if (!C.zf) goto L_11762f87;
  /* 11762fb7 pop edi */
  EDI = (pop32());
  /* 11762fb8 pop ebx */
  EBX = (pop32());
L_11762fb9:;
  /* 11762fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11762fbb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11762fc1 push dword ptr [0x11766ac4] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac4))));
  /* 11762fc7 push dword ptr [0x117668a8] */
  push32((uint32_t)(r32((uint32_t)(0x117668a8))));
  /* 11762fcd push eax */
  push32((uint32_t)(EAX));
  /* 11762fce lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11762fd4 push esi */
  push32((uint32_t)(ESI));
  /* 11762fd5 push eax */
  push32((uint32_t)(EAX));
  /* 11762fd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11762fd8 call 0x117640b2 */
  push32(0x11762fddu); f_117640b2();
  /* 11762fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11762fdf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11762fe5 push dword ptr [0x117668a8] */
  push32((uint32_t)(r32((uint32_t)(0x117668a8))));
  /* 11762feb push esi */
  push32((uint32_t)(ESI));
  /* 11762fec push eax */
  push32((uint32_t)(EAX));
  /* 11762fed lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11762ff3 push esi */
  push32((uint32_t)(ESI));
  /* 11762ff4 push eax */
  push32((uint32_t)(EAX));
  /* 11762ff5 push esi */
  push32((uint32_t)(ESI));
  /* 11762ff6 push dword ptr [0x11766ac4] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac4))));
  /* 11762ffc call 0x11763e63 */
  push32(0x11763001u); f_11763e63();
  /* 11763001 push 0 */
  push32((uint32_t)(0x0u));
  /* 11763003 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11763009 push dword ptr [0x117668a8] */
  push32((uint32_t)(r32((uint32_t)(0x117668a8))));
  /* 1176300f push esi */
  push32((uint32_t)(ESI));
  /* 11763010 push eax */
  push32((uint32_t)(EAX));
  /* 11763011 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11763017 push esi */
  push32((uint32_t)(ESI));
  /* 11763018 push eax */
  push32((uint32_t)(EAX));
  /* 11763019 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1176301e push dword ptr [0x11766ac4] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac4))));
  /* 11763024 call 0x11763e63 */
  push32(0x11763029u); f_11763e63();
  /* 11763029 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1176302c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1176302e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11763034:;
  /* 11763034 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11763037 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1176303a je 0x11763052 */
  if (C.zf) goto L_11763052;
  /* 1176303c or byte ptr [eax + 0x117669c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(0x10u); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 11763043 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1176304a:;
  /* 1176304a mov byte ptr [eax + 0x117668c0], dl */
  w8((uint32_t)(EAX + 0x117668c0), (DL));
  /* 11763050 jmp 0x1176306e */
  goto L_1176306e;
L_11763052:;
  /* 11763052 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11763055 je 0x11763067 */
  if (C.zf) goto L_11763067;
  /* 11763057 or byte ptr [eax + 0x117669c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(0x20u); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 1176305e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11763065 jmp 0x1176304a */
  goto L_1176304a;
L_11763067:;
  /* 11763067 and byte ptr [eax + 0x117668c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117668c0)))&(0x0u); w8((uint32_t)(EAX + 0x117668c0), (_r)); fl_logic(_r,8); }
L_1176306e:;
  /* 1176306e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176306f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11763070 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11763071 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763073 jb 0x11763034 */
  if (C.cf) goto L_11763034;
  /* 11763075 jmp 0x117630c0 */
  goto L_117630c0;
L_11763077:;
  /* 11763077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763079 mov esi, 0x100 */
  ESI = (0x100u);
L_1176307e:;
  /* 1176307e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763081 jb 0x1176309c */
  if (C.cf) goto L_1176309c;
  /* 11763083 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763086 ja 0x1176309c */
  if ((!C.cf&&!C.zf)) goto L_1176309c;
  /* 11763088 or byte ptr [eax + 0x117669c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(0x10u); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 1176308f mov cl, al */
  CL = (AL);
  /* 11763091 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11763094:;
  /* 11763094 mov byte ptr [eax + 0x117668c0], cl */
  w8((uint32_t)(EAX + 0x117668c0), (CL));
  /* 1176309a jmp 0x117630bb */
  goto L_117630bb;
L_1176309c:;
  /* 1176309c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176309f jb 0x117630b4 */
  if (C.cf) goto L_117630b4;
  /* 117630a1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117630a4 ja 0x117630b4 */
  if ((!C.cf&&!C.zf)) goto L_117630b4;
  /* 117630a6 or byte ptr [eax + 0x117669c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117669c1)))|(0x20u); w8((uint32_t)(EAX + 0x117669c1), (_r)); fl_logic(_r,8); }
  /* 117630ad mov cl, al */
  CL = (AL);
  /* 117630af sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117630b2 jmp 0x11763094 */
  goto L_11763094;
L_117630b4:;
  /* 117630b4 and byte ptr [eax + 0x117668c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x117668c0)))&(0x0u); w8((uint32_t)(EAX + 0x117668c0), (_r)); fl_logic(_r,8); }
L_117630bb:;
  /* 117630bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117630bc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117630be jb 0x1176307e */
  if (C.cf) goto L_1176307e;
L_117630c0:;
  /* 117630c0 pop esi */
  ESI = (pop32());
  /* 117630c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117630c2 ret  */
  ESPCHK(0x11762f3eu, _esp0);
  ESP += 4; return;
}

/* FUN_100030c3 @ 0x117630c3 (28 bytes, 7 insns) */
void f_117630c3(void) {
  FTRACE(0x117630c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117630c3 cmp dword ptr [0x11766be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11766be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117630ca jne 0x117630de */
  if (!C.zf) goto L_117630de;
  /* 117630cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 117630ce call 0x11762ceb */
  push32(0x117630d3u); f_11762ceb();
  /* 117630d3 pop ecx */
  ECX = (pop32());
  /* 117630d4 mov dword ptr [0x11766be8], 1 */
  w32((uint32_t)(0x11766be8), (0x1u));
L_117630de:;
  /* 117630de ret  */
  ESPCHK(0x117630c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x117630e0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_117630e0(void) {
  FTRACE(0x117630e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117630e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117630e1 mov ebp, esp */
  EBP = (ESP);
  /* 117630e3 push edi */
  push32((uint32_t)(EDI));
  /* 117630e4 push esi */
  push32((uint32_t)(ESI));
  /* 117630e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117630e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117630eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117630ee mov eax, ecx */
  EAX = (ECX);
  /* 117630f0 mov edx, ecx */
  EDX = (ECX);
  /* 117630f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117630f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117630f6 jbe 0x11763100 */
  if ((C.cf||C.zf)) goto L_11763100;
  /* 117630f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117630fa jb 0x11763278 */
  if (C.cf) goto L_11763278;
L_11763100:;
  /* 11763100 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11763106 jne 0x1176311c */
  if (!C.zf) goto L_1176311c;
  /* 11763108 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1176310b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1176310e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763111 jb 0x1176313c */
  if (C.cf) goto L_1176313c;
  /* 11763113 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11763115 jmp dword ptr [edx*4 + 0x11763228] */
  switch (EDX) {
    case 0: goto L_11763238;
    case 1: goto L_11763240;
    case 2: goto L_1176324c;
    case 3: goto L_11763260;
    default: x86_unimpl("switch@0x11763115 out of table"); return;
  }
L_1176311c:;
  /* 1176311c mov eax, edi */
  EAX = (EDI);
  /* 1176311e mov edx, 3 */
  EDX = (0x3u);
  /* 11763123 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763126 jb 0x11763134 */
  if (C.cf) goto L_11763134;
  /* 11763128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1176312b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176312d jmp dword ptr [eax*4 + 0x11763140] */
  switch (EAX) {
    case 1: goto L_11763150;
    case 2: goto L_1176317c;
    case 3: goto L_117631a0;
    default: x86_unimpl("switch@0x1176312d out of table"); return;
  }
L_11763134:;
  /* 11763134 jmp dword ptr [ecx*4 + 0x11763238] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11763238)))); return;
  /* 1176313b nop  */
  /* nop */
L_1176313c:;
  /* 1176313c jmp dword ptr [ecx*4 + 0x117631bc] */
  switch (ECX) {
    case 0: goto L_1176321f;
    case 1: goto L_1176320c;
    case 2: goto L_11763204;
    case 3: goto L_117631fc;
    case 4: goto L_117631f4;
    case 5: goto L_117631ec;
    case 6: goto L_117631e4;
    case 7: goto L_117631dc;
    default: x86_unimpl("switch@0x1176313c out of table"); return;
  }
  /* 11763143 nop  */
  /* nop */
L_11763150:;
  /* 11763150 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11763152 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11763154 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763156 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11763159 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176315c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1176315f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763162 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11763165 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763168 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176316b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176316e jb 0x1176313c */
  if (C.cf) goto L_1176313c;
  /* 11763170 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11763172 jmp dword ptr [edx*4 + 0x11763228] */
  switch (EDX) {
    case 0: goto L_11763238;
    case 1: goto L_11763240;
    case 2: goto L_1176324c;
    case 3: goto L_11763260;
    default: x86_unimpl("switch@0x11763172 out of table"); return;
  }
  /* 11763179 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1176317c:;
  /* 1176317c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1176317e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11763180 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763182 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11763185 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763188 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176318b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176318e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763191 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763194 jb 0x1176313c */
  if (C.cf) goto L_1176313c;
  /* 11763196 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11763198 jmp dword ptr [edx*4 + 0x11763228] */
  switch (EDX) {
    case 0: goto L_11763238;
    case 1: goto L_11763240;
    case 2: goto L_1176324c;
    case 3: goto L_11763260;
    default: x86_unimpl("switch@0x11763198 out of table"); return;
  }
  /* 1176319f nop  */
  /* nop */
L_117631a0:;
  /* 117631a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117631a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117631a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117631a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117631a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117631aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117631ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117631ae jb 0x1176313c */
  if (C.cf) goto L_1176313c;
  /* 117631b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117631b2 jmp dword ptr [edx*4 + 0x11763228] */
  switch (EDX) {
    case 0: goto L_11763238;
    case 1: goto L_11763240;
    case 2: goto L_1176324c;
    case 3: goto L_11763260;
    default: x86_unimpl("switch@0x117631b2 out of table"); return;
  }
  /* 117631b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117631dc:;
  /* 117631dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117631e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117631e4:;
  /* 117631e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117631e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117631ec:;
  /* 117631ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117631f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117631f4:;
  /* 117631f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117631f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117631fc:;
  /* 117631fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11763200 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11763204:;
  /* 11763204 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11763208 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1176320c:;
  /* 1176320c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11763210 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11763214 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1176321b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176321d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1176321f:;
  /* 1176321f jmp dword ptr [edx*4 + 0x11763228] */
  switch (EDX) {
    case 0: goto L_11763238;
    case 1: goto L_11763240;
    case 2: goto L_1176324c;
    case 3: goto L_11763260;
    default: x86_unimpl("switch@0x1176321f out of table"); return;
  }
  /* 11763226 mov edi, edi */
  EDI = (EDI);
L_11763238:;
  /* 11763238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1176323b pop esi */
  ESI = (pop32());
  /* 1176323c pop edi */
  EDI = (pop32());
  /* 1176323d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176323e ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 1176323f nop  */
  /* nop */
L_11763240:;
  /* 11763240 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11763242 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763247 pop esi */
  ESI = (pop32());
  /* 11763248 pop edi */
  EDI = (pop32());
  /* 11763249 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176324a ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 1176324b nop  */
  /* nop */
L_1176324c:;
  /* 1176324c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1176324e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763250 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11763253 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11763256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763259 pop esi */
  ESI = (pop32());
  /* 1176325a pop edi */
  EDI = (pop32());
  /* 1176325b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176325c ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 1176325d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11763260:;
  /* 11763260 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11763262 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763264 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11763267 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176326a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1176326d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11763270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763273 pop esi */
  ESI = (pop32());
  /* 11763274 pop edi */
  EDI = (pop32());
  /* 11763275 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11763276 ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 11763277 nop  */
  /* nop */
L_11763278:;
  /* 11763278 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1176327c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11763280 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11763286 jne 0x117632ac */
  if (!C.zf) goto L_117632ac;
  /* 11763288 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1176328b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1176328e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763291 jb 0x117632a0 */
  if (C.cf) goto L_117632a0;
  /* 11763293 std  */
  C.df=1;
  /* 11763294 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11763296 cld  */
  C.df=0;
  /* 11763297 jmp dword ptr [edx*4 + 0x117633c0] */
  switch (EDX) {
    case 0: goto L_117633d0;
    case 1: goto L_117633d8;
    case 2: goto L_117633e8;
    case 3: goto L_117633fc;
    default: x86_unimpl("switch@0x11763297 out of table"); return;
  }
  /* 1176329e mov edi, edi */
  EDI = (EDI);
L_117632a0:;
  /* 117632a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117632a2 jmp dword ptr [ecx*4 + 0x11763370] */
  switch (ECX) {
    case 0: goto L_117633b7;
    default: x86_unimpl("switch@0x117632a2 out of table"); return;
  }
  /* 117632a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117632ac:;
  /* 117632ac mov eax, edi */
  EAX = (EDI);
  /* 117632ae mov edx, 3 */
  EDX = (0x3u);
  /* 117632b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117632b6 jb 0x117632c4 */
  if (C.cf) goto L_117632c4;
  /* 117632b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117632bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117632bd jmp dword ptr [eax*4 + 0x117632c8] */
  switch (EAX) {
    case 1: goto L_117632d8;
    case 2: goto L_117632f8;
    case 3: goto L_11763320;
    default: x86_unimpl("switch@0x117632bd out of table"); return;
  }
L_117632c4:;
  /* 117632c4 jmp dword ptr [ecx*4 + 0x117633c0] */
  switch (ECX) {
    case 0: goto L_117633d0;
    case 1: goto L_117633d8;
    case 2: goto L_117633e8;
    case 3: goto L_117633fc;
    default: x86_unimpl("switch@0x117632c4 out of table"); return;
  }
  /* 117632cb nop  */
  /* nop */
L_117632d8:;
  /* 117632d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117632db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117632dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117632e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117632e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117632e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117632e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117632e8 jb 0x117632a0 */
  if (C.cf) goto L_117632a0;
  /* 117632ea std  */
  C.df=1;
  /* 117632eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117632ed cld  */
  C.df=0;
  /* 117632ee jmp dword ptr [edx*4 + 0x117633c0] */
  switch (EDX) {
    case 0: goto L_117633d0;
    case 1: goto L_117633d8;
    case 2: goto L_117633e8;
    case 3: goto L_117633fc;
    default: x86_unimpl("switch@0x117632ee out of table"); return;
  }
  /* 117632f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117632f8:;
  /* 117632f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117632fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117632fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11763300 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11763303 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763306 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11763309 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176330c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176330f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763312 jb 0x117632a0 */
  if (C.cf) goto L_117632a0;
  /* 11763314 std  */
  C.df=1;
  /* 11763315 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11763317 cld  */
  C.df=0;
  /* 11763318 jmp dword ptr [edx*4 + 0x117633c0] */
  switch (EDX) {
    case 0: goto L_117633d0;
    case 1: goto L_117633d8;
    case 2: goto L_117633e8;
    case 3: goto L_117633fc;
    default: x86_unimpl("switch@0x11763318 out of table"); return;
  }
  /* 1176331f nop  */
  /* nop */
L_11763320:;
  /* 11763320 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11763323 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11763325 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11763328 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1176332b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1176332e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11763331 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763334 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11763337 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176333a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176333d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763340 jb 0x117632a0 */
  if (C.cf) goto L_117632a0;
  /* 11763346 std  */
  C.df=1;
  /* 11763347 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11763349 cld  */
  C.df=0;
  /* 1176334a jmp dword ptr [edx*4 + 0x117633c0] */
  switch (EDX) {
    case 0: goto L_117633d0;
    case 1: goto L_117633d8;
    case 2: goto L_117633e8;
    case 3: goto L_117633fc;
    default: x86_unimpl("switch@0x1176334a out of table"); return;
  }
  /* 11763351 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11763354 je 0x11763389 */
  if (C.zf) goto L_11763389;
  /* 11763356 jbe 0x11763369 */
  if ((C.cf||C.zf)) goto L_11763369;
  /* 11763358 jl 0x1176338d */
  if ((C.sf!=C.of)) goto L_1176338d;
  /* 1176335a jbe 0x1176336d */
  if ((C.cf||C.zf)) goto L_1176336d;
  /* 1176335c test byte ptr [ebx], dh */
  { uint32_t _r=(r8((uint32_t)(EBX)))&(C.d.b.h); fl_logic(_r,8); }
  /* 1176335e jbe 0x11763371 */
  if ((C.cf||C.zf)) goto L_11763371;
  /* 11763361 xor esi, dword ptr [esi + 0x11] */
  { uint32_t _r=(ESI)^(r32((uint32_t)(ESI + 0x11))); ESI = (_r); fl_logic(_r,32); }
  /* 11763364 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11763365 xor esi, dword ptr [esi + 0x11] */
  { uint32_t _r=(ESI)^(r32((uint32_t)(ESI + 0x11))); ESI = (_r); fl_logic(_r,32); }
  /* 11763368 pushfd  */
  x86_unimpl("pushfd @ 0x11763368");
L_11763369:;
  /* 11763369 xor esi, dword ptr [esi + 0x11] */
  { uint32_t _r=(ESI)^(r32((uint32_t)(ESI + 0x11))); ESI = (_r); fl_logic(_r,32); }
  /* 1176336c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
L_1176336d:;
  /* 1176336d xor esi, dword ptr [esi + 0x11] */
  { uint32_t _r=(ESI)^(r32((uint32_t)(ESI + 0x11))); ESI = (_r); fl_logic(_r,32); }
  /* 11763374 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11763378 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1176337c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11763380 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11763384 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11763388 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1176338c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11763390 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11763394 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11763398 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1176339c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117633a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117633a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117633a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117633ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117633b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117633b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117633b7:;
  /* 117633b7 jmp dword ptr [edx*4 + 0x117633c0] */
  switch (EDX) {
    case 0: goto L_117633d0;
    case 1: goto L_117633d8;
    case 2: goto L_117633e8;
    case 3: goto L_117633fc;
    default: x86_unimpl("switch@0x117633b7 out of table"); return;
  }
  /* 117633be mov edi, edi */
  EDI = (EDI);
L_117633d0:;
  /* 117633d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117633d3 pop esi */
  ESI = (pop32());
  /* 117633d4 pop edi */
  EDI = (pop32());
  /* 117633d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117633d6 ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 117633d7 nop  */
  /* nop */
L_117633d8:;
  /* 117633d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117633db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117633de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117633e1 pop esi */
  ESI = (pop32());
  /* 117633e2 pop edi */
  EDI = (pop32());
  /* 117633e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117633e4 ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 117633e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117633e8:;
  /* 117633e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117633eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117633ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117633f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117633f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117633f7 pop esi */
  ESI = (pop32());
  /* 117633f8 pop edi */
  EDI = (pop32());
  /* 117633f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117633fa ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
  /* 117633fb nop  */
  /* nop */
L_117633fc:;
  /* 117633fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117633ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11763402 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11763405 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11763408 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1176340b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176340e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763411 pop esi */
  ESI = (pop32());
  /* 11763412 pop edi */
  EDI = (pop32());
  /* 11763413 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11763414 ret  */
  ESPCHK(0x117630e0u, _esp0);
  ESP += 4; return;
L_11763371: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11763371 (unresolved jump table)"); return;
L_11763389: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11763389 (unresolved jump table)"); return;
L_1176338d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1176338d (unresolved jump table)"); return;
}

/* FUN_10003415 @ 0x11763415 (62 bytes, 15 insns) */
void f_11763415(void) {
  FTRACE(0x11763415u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763415 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1176341a push 0 */
  push32((uint32_t)(0x0u));
  /* 1176341c push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11763422 call dword ptr [0x11765038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765038))), 0x11763428u);
  /* 11763428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1176342a mov dword ptr [0x117668a4], eax */
  w32((uint32_t)(0x117668a4), (EAX));
  /* 1176342f jne 0x11763432 */
  if (!C.zf) goto L_11763432;
  /* 11763431 ret  */
  ESPCHK(0x11763415u, _esp0);
  ESP += 4; return;
L_11763432:;
  /* 11763432 and dword ptr [0x1176689c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1176689c)))&(0x0u); w32((uint32_t)(0x1176689c), (_r)); fl_logic(_r,32); }
  /* 11763439 and dword ptr [0x117668a0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117668a0)))&(0x0u); w32((uint32_t)(0x117668a0), (_r)); fl_logic(_r,32); }
  /* 11763440 push 1 */
  push32((uint32_t)(0x1u));
  /* 11763442 mov dword ptr [0x11766898], eax */
  w32((uint32_t)(0x11766898), (EAX));
  /* 11763447 mov dword ptr [0x11766890], 0x10 */
  w32((uint32_t)(0x11766890), (0x10u));
  /* 11763451 pop eax */
  EAX = (pop32());
  /* 11763452 ret  */
  ESPCHK(0x11763415u, _esp0);
  ESP += 4; return;
}

/* FUN_10003453 @ 0x11763453 (43 bytes, 14 insns) */
void f_11763453(void) {
  FTRACE(0x11763453u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763453 mov eax, dword ptr [0x117668a0] */
  EAX = (r32((uint32_t)(0x117668a0)));
  /* 11763458 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1176345b mov eax, dword ptr [0x117668a4] */
  EAX = (r32((uint32_t)(0x117668a4)));
  /* 11763460 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11763463:;
  /* 11763463 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763465 jae 0x1176347b */
  if (!C.cf) goto L_1176347b;
  /* 11763467 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1176346b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176346e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763474 jb 0x1176347d */
  if (C.cf) goto L_1176347d;
  /* 11763476 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763479 jmp 0x11763463 */
  goto L_11763463;
L_1176347b:;
  /* 1176347b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1176347d:;
  /* 1176347d ret  */
  ESPCHK(0x11763453u, _esp0);
  ESP += 4; return;
}

/* FUN_1000347e @ 0x1176347e (811 bytes, 264 insns) */
void f_1176347e(void) {
  FTRACE(0x1176347eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1176347e push ebp */
  push32((uint32_t)(EBP));
  /* 1176347f mov ebp, esp */
  EBP = (ESP);
  /* 11763481 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763484 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11763487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1176348a push ebx */
  push32((uint32_t)(EBX));
  /* 1176348b push esi */
  push32((uint32_t)(ESI));
  /* 1176348c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1176348f mov esi, edx */
  ESI = (EDX);
  /* 11763491 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763494 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11763497 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176349a push edi */
  push32((uint32_t)(EDI));
  /* 1176349b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1176349e mov ecx, esi */
  ECX = (ESI);
  /* 117634a0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 117634a3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117634a9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117634aa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117634ad lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117634b4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117634b7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117634ba mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 117634bd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 117634c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117634c3 jne 0x11763544 */
  if (!C.zf) goto L_11763544;
  /* 117634c5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117634c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117634ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117634cb pop edi */
  EDI = (pop32());
  /* 117634cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117634cf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117634d1 jbe 0x117634d6 */
  if ((C.cf||C.zf)) goto L_117634d6;
  /* 117634d3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117634d6:;
  /* 117634d6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117634da cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117634de jne 0x11763528 */
  if (!C.zf) goto L_11763528;
  /* 117634e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117634e3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117634e6 jae 0x11763504 */
  if (!C.cf) goto L_11763504;
  /* 117634e8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117634ed shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117634ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117634f3 not edi */
  EDI = (~(EDI));
  /* 117634f5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117634f9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117634fb jne 0x11763528 */
  if (!C.zf) goto L_11763528;
  /* 117634fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763500 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11763502 jmp 0x11763528 */
  goto L_11763528;
L_11763504:;
  /* 11763504 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763507 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1176350c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1176350e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11763511 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11763515 not edi */
  EDI = (~(EDI));
  /* 11763517 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1176351e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11763520 jne 0x11763528 */
  if (!C.zf) goto L_11763528;
  /* 11763522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763525 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11763528:;
  /* 11763528 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1176352c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11763530 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11763533 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11763537 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1176353b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176353e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11763541 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11763544:;
  /* 11763544 mov edi, ebx */
  EDI = (EBX);
  /* 11763546 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11763549 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1176354a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176354d jbe 0x11763552 */
  if ((C.cf||C.zf)) goto L_11763552;
  /* 1176354f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11763551 pop edi */
  EDI = (pop32());
L_11763552:;
  /* 11763552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763555 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11763558 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1176355b jne 0x11763601 */
  if (!C.zf) goto L_11763601;
  /* 11763561 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763564 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763567 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1176356a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1176356c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1176356f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763570 pop edx */
  EDX = (pop32());
  /* 11763571 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763573 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11763576 jbe 0x1176357d */
  if ((C.cf||C.zf)) goto L_1176357d;
  /* 11763578 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1176357b mov ecx, edx */
  ECX = (EDX);
L_1176357d:;
  /* 1176357d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763580 mov edi, ebx */
  EDI = (EBX);
  /* 11763582 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11763585 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11763588 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11763589 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176358b jbe 0x1176358f */
  if ((C.cf||C.zf)) goto L_1176358f;
  /* 1176358d mov edi, edx */
  EDI = (EDX);
L_1176358f:;
  /* 1176358f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763591 je 0x117635fe */
  if (C.zf) goto L_117635fe;
  /* 11763593 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11763596 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11763599 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176359c jne 0x117635e6 */
  if (!C.zf) goto L_117635e6;
  /* 1176359e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117635a1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117635a4 jae 0x117635c2 */
  if (!C.cf) goto L_117635c2;
  /* 117635a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117635ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117635ad lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117635b1 not edx */
  EDX = (~(EDX));
  /* 117635b3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117635b7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117635b9 jne 0x117635e6 */
  if (!C.zf) goto L_117635e6;
  /* 117635bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117635be and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117635c0 jmp 0x117635e6 */
  goto L_117635e6;
L_117635c2:;
  /* 117635c2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117635c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117635ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117635cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117635cf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117635d3 not edx */
  EDX = (~(EDX));
  /* 117635d5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117635dc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117635de jne 0x117635e6 */
  if (!C.zf) goto L_117635e6;
  /* 117635e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117635e3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117635e6:;
  /* 117635e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117635e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117635ec mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 117635ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117635f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117635f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117635f8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 117635fb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117635fe:;
  /* 117635fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11763601:;
  /* 11763601 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763605 jne 0x11763610 */
  if (!C.zf) goto L_11763610;
  /* 11763607 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176360a je 0x11763699 */
  if (C.zf) goto L_11763699;
L_11763610:;
  /* 11763610 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11763613 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11763616 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11763619 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1176361c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1176361f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11763622 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11763625 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11763628 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1176362b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1176362e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11763631 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763634 jne 0x11763699 */
  if (!C.zf) goto L_11763699;
  /* 11763636 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1176363a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176363d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11763640 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11763642 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11763646 jae 0x1176366d */
  if (!C.cf) goto L_1176366d;
  /* 11763648 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176364c jne 0x1176365c */
  if (!C.zf) goto L_1176365c;
  /* 1176364e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11763653 mov ecx, edi */
  ECX = (EDI);
  /* 11763655 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11763657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1176365a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1176365c:;
  /* 1176365c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11763661 mov ecx, edi */
  ECX = (EDI);
  /* 11763663 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11763665 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11763669 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1176366b jmp 0x11763696 */
  goto L_11763696;
L_1176366d:;
  /* 1176366d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11763671 jne 0x11763683 */
  if (!C.zf) goto L_11763683;
  /* 11763673 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11763676 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1176367b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1176367d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763680 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11763683:;
  /* 11763683 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11763686 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1176368b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1176368d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11763694 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11763696:;
  /* 11763696 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11763699:;
  /* 11763699 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1176369c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1176369e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 117636a2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 117636a4 jne 0x117637a4 */
  if (!C.zf) goto L_117637a4;
  /* 117636aa mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 117636af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117636b1 je 0x11763796 */
  if (C.zf) goto L_11763796;
  /* 117636b7 mov ecx, dword ptr [0x11766894] */
  ECX = (r32((uint32_t)(0x11766894)));
  /* 117636bd mov edi, dword ptr [0x11765050] */
  EDI = (r32((uint32_t)(0x11765050)));
  /* 117636c3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 117636c6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117636c9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 117636ce push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117636d3 push ebx */
  push32((uint32_t)(EBX));
  /* 117636d4 push ecx */
  push32((uint32_t)(ECX));
  /* 117636d5 call edi */
  call_ind((uint32_t)(EDI), 0x117636d7u);
  /* 117636d7 mov ecx, dword ptr [0x11766894] */
  ECX = (r32((uint32_t)(0x11766894)));
  /* 117636dd mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 117636e2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117636e7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117636e9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117636ec mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 117636f1 mov ecx, dword ptr [0x11766894] */
  ECX = (r32((uint32_t)(0x11766894)));
  /* 117636f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 117636fa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11763702 mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 11763707 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1176370a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1176370d mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 11763712 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11763715 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11763719 jne 0x11763724 */
  if (!C.zf) goto L_11763724;
  /* 1176371b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1176371f mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
L_11763724:;
  /* 11763724 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763728 jne 0x11763796 */
  if (!C.zf) goto L_11763796;
  /* 1176372a push ebx */
  push32((uint32_t)(EBX));
  /* 1176372b push 0 */
  push32((uint32_t)(0x0u));
  /* 1176372d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11763730 call edi */
  call_ind((uint32_t)(EDI), 0x11763732u);
  /* 11763732 mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 11763737 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1176373a push 0 */
  push32((uint32_t)(0x0u));
  /* 1176373c push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11763742 call dword ptr [0x1176504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176504c))), 0x11763748u);
  /* 11763748 mov eax, dword ptr [0x117668a0] */
  EAX = (r32((uint32_t)(0x117668a0)));
  /* 1176374d mov edx, dword ptr [0x117668a4] */
  EDX = (r32((uint32_t)(0x117668a4)));
  /* 11763753 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11763756 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11763759 mov ecx, eax */
  ECX = (EAX);
  /* 1176375b mov eax, dword ptr [0x1176689c] */
  EAX = (r32((uint32_t)(0x1176689c)));
  /* 11763760 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763762 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11763766 push ecx */
  push32((uint32_t)(ECX));
  /* 11763767 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1176376a push ecx */
  push32((uint32_t)(ECX));
  /* 1176376b push eax */
  push32((uint32_t)(EAX));
  /* 1176376c call 0x11764200 */
  push32(0x11763771u); f_11764200();
  /* 11763771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763774 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11763777 dec dword ptr [0x117668a0] */
  { uint32_t _r=(r32((uint32_t)(0x117668a0)))-1; w32((uint32_t)(0x117668a0), (_r)); fl_dec(_r,32); }
  /* 1176377d cmp eax, dword ptr [0x1176689c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1176689c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763783 jbe 0x11763788 */
  if ((C.cf||C.zf)) goto L_11763788;
  /* 11763785 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11763788:;
  /* 11763788 mov ecx, dword ptr [0x117668a4] */
  ECX = (r32((uint32_t)(0x117668a4)));
  /* 1176378e mov dword ptr [0x11766898], ecx */
  w32((uint32_t)(0x11766898), (ECX));
  /* 11763794 jmp 0x11763799 */
  goto L_11763799;
L_11763796:;
  /* 11763796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11763799:;
  /* 11763799 mov dword ptr [0x1176689c], eax */
  w32((uint32_t)(0x1176689c), (EAX));
  /* 1176379e mov dword ptr [0x11766894], esi */
  w32((uint32_t)(0x11766894), (ESI));
L_117637a4:;
  /* 117637a4 pop edi */
  EDI = (pop32());
  /* 117637a5 pop esi */
  ESI = (pop32());
  /* 117637a6 pop ebx */
  EBX = (pop32());
  /* 117637a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117637a8 ret  */
  ESPCHK(0x1176347eu, _esp0);
  ESP += 4; return;
}

/* FUN_100037a9 @ 0x117637a9 (777 bytes, 275 insns) */
void f_117637a9(void) {
  FTRACE(0x117637a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117637a9 push ebp */
  push32((uint32_t)(EBP));
  /* 117637aa mov ebp, esp */
  EBP = (ESP);
  /* 117637ac sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117637af mov eax, dword ptr [0x117668a0] */
  EAX = (r32((uint32_t)(0x117668a0)));
  /* 117637b4 mov edx, dword ptr [0x117668a4] */
  EDX = (r32((uint32_t)(0x117668a4)));
  /* 117637ba push ebx */
  push32((uint32_t)(EBX));
  /* 117637bb push esi */
  push32((uint32_t)(ESI));
  /* 117637bc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117637bf push edi */
  push32((uint32_t)(EDI));
  /* 117637c0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 117637c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117637c6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117637c9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 117637cc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 117637cf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117637d2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117637d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117637d6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117637d9 jge 0x117637e9 */
  if ((C.sf==C.of)) goto L_117637e9;
  /* 117637db or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 117637de shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 117637e0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 117637e4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 117637e7 jmp 0x117637f9 */
  goto L_117637f9;
L_117637e9:;
  /* 117637e9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117637ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117637ef xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117637f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117637f3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 117637f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117637f9:;
  /* 117637f9 mov eax, dword ptr [0x11766898] */
  EAX = (r32((uint32_t)(0x11766898)));
  /* 117637fe mov ebx, eax */
  EBX = (EAX);
  /* 11763800 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763802 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11763805 jae 0x11763820 */
  if (!C.cf) goto L_11763820;
L_11763807:;
  /* 11763807 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1176380a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1176380c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1176380f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11763811 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11763813 jne 0x11763820 */
  if (!C.zf) goto L_11763820;
  /* 11763815 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763818 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176381b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1176381e jb 0x11763807 */
  if (C.cf) goto L_11763807;
L_11763820:;
  /* 11763820 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763823 jne 0x1176389e */
  if (!C.zf) goto L_1176389e;
  /* 11763825 mov ebx, edx */
  EBX = (EDX);
L_11763827:;
  /* 11763827 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763829 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1176382c jae 0x11763843 */
  if (!C.cf) goto L_11763843;
  /* 1176382e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11763831 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11763833 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11763836 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11763838 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1176383a jne 0x11763841 */
  if (!C.zf) goto L_11763841;
  /* 1176383c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176383f jmp 0x11763827 */
  goto L_11763827;
L_11763841:;
  /* 11763841 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11763843:;
  /* 11763843 jne 0x1176389e */
  if (!C.zf) goto L_1176389e;
L_11763845:;
  /* 11763845 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763848 jae 0x1176385b */
  if (!C.cf) goto L_1176385b;
  /* 1176384a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176384e jne 0x11763858 */
  if (!C.zf) goto L_11763858;
  /* 11763850 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763853 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11763856 jmp 0x11763845 */
  goto L_11763845;
L_11763858:;
  /* 11763858 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1176385b:;
  /* 1176385b jne 0x11763883 */
  if (!C.zf) goto L_11763883;
  /* 1176385d mov ebx, edx */
  EBX = (EDX);
L_1176385f:;
  /* 1176385f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763861 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11763864 jae 0x11763873 */
  if (!C.cf) goto L_11763873;
  /* 11763866 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176386a jne 0x11763871 */
  if (!C.zf) goto L_11763871;
  /* 1176386c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176386f jmp 0x1176385f */
  goto L_1176385f;
L_11763871:;
  /* 11763871 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11763873:;
  /* 11763873 jne 0x11763883 */
  if (!C.zf) goto L_11763883;
  /* 11763875 call 0x11763ab2 */
  push32(0x1176387au); f_11763ab2();
  /* 1176387a mov ebx, eax */
  EBX = (EAX);
  /* 1176387c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1176387e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11763881 je 0x11763897 */
  if (C.zf) goto L_11763897;
L_11763883:;
  /* 11763883 push ebx */
  push32((uint32_t)(EBX));
  /* 11763884 call 0x11763b63 */
  push32(0x11763889u); f_11763b63();
  /* 11763889 pop ecx */
  ECX = (pop32());
  /* 1176388a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1176388d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1176388f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11763892 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763895 jne 0x1176389e */
  if (!C.zf) goto L_1176389e;
L_11763897:;
  /* 11763897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763899 jmp 0x11763aad */
  goto L_11763aad;
L_1176389e:;
  /* 1176389e mov dword ptr [0x11766898], ebx */
  w32((uint32_t)(0x11766898), (EBX));
  /* 117638a4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117638a7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 117638a9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117638ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117638af je 0x117638c5 */
  if (C.zf) goto L_117638c5;
  /* 117638b1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117638b8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117638bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117638bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117638c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117638c3 jne 0x117638fc */
  if (!C.zf) goto L_117638fc;
L_117638c5:;
  /* 117638c5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 117638cb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 117638ce and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117638d1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 117638d4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117638d8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 117638db or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 117638dd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117638e0 jne 0x117638f9 */
  if (!C.zf) goto L_117638f9;
L_117638e2:;
  /* 117638e2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 117638e8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 117638eb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117638ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117638f1 mov edi, esi */
  EDI = (ESI);
  /* 117638f3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 117638f5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 117638f7 je 0x117638e2 */
  if (C.zf) goto L_117638e2;
L_117638f9:;
  /* 117638f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_117638fc:;
  /* 117638fc mov ecx, edx */
  ECX = (EDX);
  /* 117638fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11763900 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11763906 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1176390d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11763910 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11763914 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11763916 jne 0x11763925 */
  if (!C.zf) goto L_11763925;
  /* 11763918 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1176391f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11763921 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11763924 pop edi */
  EDI = (pop32());
L_11763925:;
  /* 11763925 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11763927 jl 0x1176392e */
  if ((C.sf!=C.of)) goto L_1176392e;
  /* 11763929 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1176392b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1176392c jmp 0x11763925 */
  goto L_11763925;
L_1176392e:;
  /* 1176392e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11763931 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11763935 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11763937 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176393a mov esi, ecx */
  ESI = (ECX);
  /* 1176393c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1176393f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11763942 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11763943 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763946 jle 0x1176394b */
  if ((C.zf||C.sf!=C.of)) goto L_1176394b;
  /* 11763948 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1176394a pop esi */
  ESI = (pop32());
L_1176394b:;
  /* 1176394b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176394d je 0x11763a60 */
  if (C.zf) goto L_11763a60;
  /* 11763953 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11763956 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763959 jne 0x117639bc */
  if (!C.zf) goto L_117639bc;
  /* 1176395b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176395e jge 0x1176398b */
  if ((C.sf==C.of)) goto L_1176398b;
  /* 11763960 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11763965 mov ecx, edi */
  ECX = (EDI);
  /* 11763967 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11763969 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1176396c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11763970 not ebx */
  EBX = (~(EBX));
  /* 11763972 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11763975 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11763979 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1176397d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1176397f jne 0x117639b9 */
  if (!C.zf) goto L_117639b9;
  /* 11763981 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763984 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11763987 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11763989 jmp 0x117639bc */
  goto L_117639bc;
L_1176398b:;
  /* 1176398b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1176398e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11763993 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11763995 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763998 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1176399c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117639a3 not ebx */
  EBX = (~(EBX));
  /* 117639a5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117639a7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 117639a9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 117639ac jne 0x117639b9 */
  if (!C.zf) goto L_117639b9;
  /* 117639ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117639b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117639b4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117639b7 jmp 0x117639bc */
  goto L_117639bc;
L_117639b9:;
  /* 117639b9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_117639bc:;
  /* 117639bc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 117639bf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 117639c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117639c6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 117639c9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117639cc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 117639cf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 117639d2 je 0x11763a6c */
  if (C.zf) goto L_11763a6c;
  /* 117639d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117639db mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 117639df lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 117639e2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 117639e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117639e8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117639eb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117639ee mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117639f1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117639f4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117639f7 jne 0x11763a5d */
  if (!C.zf) goto L_11763a5d;
  /* 117639f9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 117639fd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763a00 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11763a03 jge 0x11763a2e */
  if ((C.sf==C.of)) goto L_11763a2e;
  /* 11763a05 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11763a07 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11763a0b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11763a0f jne 0x11763a1c */
  if (!C.zf) goto L_11763a1c;
  /* 11763a11 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11763a16 mov ecx, esi */
  ECX = (ESI);
  /* 11763a18 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11763a1a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11763a1c:;
  /* 11763a1c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11763a21 mov ecx, esi */
  ECX = (ESI);
  /* 11763a23 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11763a25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763a28 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11763a2c jmp 0x11763a5d */
  goto L_11763a5d;
L_11763a2e:;
  /* 11763a2e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11763a30 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11763a34 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11763a38 jne 0x11763a47 */
  if (!C.zf) goto L_11763a47;
  /* 11763a3a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11763a3d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11763a42 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11763a44 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11763a47:;
  /* 11763a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763a4a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11763a51 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11763a54 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11763a59 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11763a5b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11763a5d:;
  /* 11763a5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11763a60:;
  /* 11763a60 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11763a62 je 0x11763a6f */
  if (C.zf) goto L_11763a6f;
  /* 11763a64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11763a66 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11763a6a jmp 0x11763a6f */
  goto L_11763a6f;
L_11763a6c:;
  /* 11763a6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11763a6f:;
  /* 11763a6f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11763a72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763a74 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11763a77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11763a79 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11763a7d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11763a80 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11763a82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11763a84 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11763a87 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11763a89 jne 0x11763aa5 */
  if (!C.zf) goto L_11763aa5;
  /* 11763a8b cmp ebx, dword ptr [0x1176689c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1176689c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763a91 jne 0x11763aa5 */
  if (!C.zf) goto L_11763aa5;
  /* 11763a93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763a96 cmp ecx, dword ptr [0x11766894] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11766894))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763a9c jne 0x11763aa5 */
  if (!C.zf) goto L_11763aa5;
  /* 11763a9e and dword ptr [0x1176689c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1176689c)))&(0x0u); w32((uint32_t)(0x1176689c), (_r)); fl_logic(_r,32); }
L_11763aa5:;
  /* 11763aa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763aa8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11763aaa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11763aad:;
  /* 11763aad pop edi */
  EDI = (pop32());
  /* 11763aae pop esi */
  ESI = (pop32());
  /* 11763aaf pop ebx */
  EBX = (pop32());
  /* 11763ab0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11763ab1 ret  */
  ESPCHK(0x117637a9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ab2 @ 0x11763ab2 (177 bytes, 53 insns) */
void f_11763ab2(void) {
  FTRACE(0x11763ab2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763ab2 mov eax, dword ptr [0x117668a0] */
  EAX = (r32((uint32_t)(0x117668a0)));
  /* 11763ab7 mov ecx, dword ptr [0x11766890] */
  ECX = (r32((uint32_t)(0x11766890)));
  /* 11763abd push esi */
  push32((uint32_t)(ESI));
  /* 11763abe push edi */
  push32((uint32_t)(EDI));
  /* 11763abf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11763ac1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763ac3 jne 0x11763af5 */
  if (!C.zf) goto L_11763af5;
  /* 11763ac5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11763ac9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11763acc push eax */
  push32((uint32_t)(EAX));
  /* 11763acd push dword ptr [0x117668a4] */
  push32((uint32_t)(r32((uint32_t)(0x117668a4))));
  /* 11763ad3 push edi */
  push32((uint32_t)(EDI));
  /* 11763ad4 push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11763ada call dword ptr [0x11765024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765024))), 0x11763ae0u);
  /* 11763ae0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763ae2 je 0x11763b45 */
  if (C.zf) goto L_11763b45;
  /* 11763ae4 add dword ptr [0x11766890], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11766890))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11766890), (_r)); fl_add(_a,_b,_r,32); }
  /* 11763aeb mov dword ptr [0x117668a4], eax */
  w32((uint32_t)(0x117668a4), (EAX));
  /* 11763af0 mov eax, dword ptr [0x117668a0] */
  EAX = (r32((uint32_t)(0x117668a0)));
L_11763af5:;
  /* 11763af5 mov ecx, dword ptr [0x117668a4] */
  ECX = (r32((uint32_t)(0x117668a4)));
  /* 11763afb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11763b00 push 8 */
  push32((uint32_t)(0x8u));
  /* 11763b02 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11763b05 push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11763b0b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11763b0e call dword ptr [0x11765038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765038))), 0x11763b14u);
  /* 11763b14 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763b16 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11763b19 je 0x11763b45 */
  if (C.zf) goto L_11763b45;
  /* 11763b1b push 4 */
  push32((uint32_t)(0x4u));
  /* 11763b1d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11763b22 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11763b27 push edi */
  push32((uint32_t)(EDI));
  /* 11763b28 call dword ptr [0x11765028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765028))), 0x11763b2eu);
  /* 11763b2e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763b30 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11763b33 jne 0x11763b49 */
  if (!C.zf) goto L_11763b49;
  /* 11763b35 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11763b38 push edi */
  push32((uint32_t)(EDI));
  /* 11763b39 push dword ptr [0x11766ac8] */
  push32((uint32_t)(r32((uint32_t)(0x11766ac8))));
  /* 11763b3f call dword ptr [0x1176504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176504c))), 0x11763b45u);
L_11763b45:;
  /* 11763b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763b47 jmp 0x11763b60 */
  goto L_11763b60;
L_11763b49:;
  /* 11763b49 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11763b4d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11763b4f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11763b52 inc dword ptr [0x117668a0] */
  { uint32_t _r=(r32((uint32_t)(0x117668a0)))+1; w32((uint32_t)(0x117668a0), (_r)); fl_inc(_r,32); }
  /* 11763b58 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11763b5b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11763b5e mov eax, esi */
  EAX = (ESI);
L_11763b60:;
  /* 11763b60 pop edi */
  EDI = (pop32());
  /* 11763b61 pop esi */
  ESI = (pop32());
  /* 11763b62 ret  */
  ESPCHK(0x11763ab2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b63 @ 0x11763b63 (251 bytes, 85 insns) */
void f_11763b63(void) {
  FTRACE(0x11763b63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763b63 push ebp */
  push32((uint32_t)(EBP));
  /* 11763b64 mov ebp, esp */
  EBP = (ESP);
  /* 11763b66 push ecx */
  push32((uint32_t)(ECX));
  /* 11763b67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763b6a push ebx */
  push32((uint32_t)(EBX));
  /* 11763b6b push esi */
  push32((uint32_t)(ESI));
  /* 11763b6c push edi */
  push32((uint32_t)(EDI));
  /* 11763b6d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11763b70 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11763b73 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11763b75:;
  /* 11763b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763b77 jl 0x11763b7e */
  if ((C.sf!=C.of)) goto L_11763b7e;
  /* 11763b79 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11763b7b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11763b7c jmp 0x11763b75 */
  goto L_11763b75;
L_11763b7e:;
  /* 11763b7e mov eax, ebx */
  EAX = (EBX);
  /* 11763b80 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11763b82 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11763b88 pop edx */
  EDX = (pop32());
  /* 11763b89 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11763b90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11763b93:;
  /* 11763b93 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11763b96 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11763b99 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763b9c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11763b9d jne 0x11763b93 */
  if (!C.zf) goto L_11763b93;
  /* 11763b9f mov edi, ebx */
  EDI = (EBX);
  /* 11763ba1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11763ba3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11763ba6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763ba9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11763bae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11763bb3 push edi */
  push32((uint32_t)(EDI));
  /* 11763bb4 call dword ptr [0x11765028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765028))), 0x11763bbau);
  /* 11763bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763bbc jne 0x11763bc6 */
  if (!C.zf) goto L_11763bc6;
  /* 11763bbe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11763bc1 jmp 0x11763c59 */
  goto L_11763c59;
L_11763bc6:;
  /* 11763bc6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11763bcc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763bce ja 0x11763c0c */
  if ((!C.cf&&!C.zf)) goto L_11763c0c;
  /* 11763bd0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11763bd3:;
  /* 11763bd3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11763bd7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11763bde lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11763be4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11763beb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11763bed lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11763bf3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11763bf6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11763c00 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763c05 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11763c08 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763c0a jbe 0x11763bd3 */
  if ((C.cf||C.zf)) goto L_11763bd3;
L_11763c0c:;
  /* 11763c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11763c0f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11763c12 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11763c19 pop edi */
  EDI = (pop32());
  /* 11763c1a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11763c1d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11763c20 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11763c23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11763c26 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11763c29 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11763c2e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11763c35 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11763c38 mov cl, al */
  CL = (AL);
  /* 11763c3a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11763c3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11763c3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11763c41 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11763c44 jne 0x11763c49 */
  if (!C.zf) goto L_11763c49;
  /* 11763c46 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11763c49:;
  /* 11763c49 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11763c4e mov ecx, ebx */
  ECX = (EBX);
  /* 11763c50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11763c52 not edx */
  EDX = (~(EDX));
  /* 11763c54 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11763c57 mov eax, ebx */
  EAX = (EBX);
L_11763c59:;
  /* 11763c59 pop edi */
  EDI = (pop32());
  /* 11763c5a pop esi */
  ESI = (pop32());
  /* 11763c5b pop ebx */
  EBX = (pop32());
  /* 11763c5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11763c5d ret  */
  ESPCHK(0x11763b63u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c5e @ 0x11763c5e (137 bytes, 50 insns) */
void f_11763c5e(void) {
  FTRACE(0x11763c5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763c5e push ebx */
  push32((uint32_t)(EBX));
  /* 11763c5f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11763c61 cmp dword ptr [0x11766854], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11766854))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763c67 push esi */
  push32((uint32_t)(ESI));
  /* 11763c68 push edi */
  push32((uint32_t)(EDI));
  /* 11763c69 jne 0x11763cad */
  if (!C.zf) goto L_11763cad;
  /* 11763c6b push 0x11765448 */
  push32((uint32_t)(0x11765448u));
  /* 11763c70 call dword ptr [0x1176501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176501c))), 0x11763c76u);
  /* 11763c76 mov edi, eax */
  EDI = (EAX);
  /* 11763c78 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763c7a je 0x11763ce3 */
  if (C.zf) goto L_11763ce3;
  /* 11763c7c mov esi, dword ptr [0x11765020] */
  ESI = (r32((uint32_t)(0x11765020)));
  /* 11763c82 push 0x1176543c */
  push32((uint32_t)(0x1176543cu));
  /* 11763c87 push edi */
  push32((uint32_t)(EDI));
  /* 11763c88 call esi */
  call_ind((uint32_t)(ESI), 0x11763c8au);
  /* 11763c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763c8c mov dword ptr [0x11766854], eax */
  w32((uint32_t)(0x11766854), (EAX));
  /* 11763c91 je 0x11763ce3 */
  if (C.zf) goto L_11763ce3;
  /* 11763c93 push 0x1176542c */
  push32((uint32_t)(0x1176542cu));
  /* 11763c98 push edi */
  push32((uint32_t)(EDI));
  /* 11763c99 call esi */
  call_ind((uint32_t)(ESI), 0x11763c9bu);
  /* 11763c9b push 0x11765418 */
  push32((uint32_t)(0x11765418u));
  /* 11763ca0 push edi */
  push32((uint32_t)(EDI));
  /* 11763ca1 mov dword ptr [0x11766858], eax */
  w32((uint32_t)(0x11766858), (EAX));
  /* 11763ca6 call esi */
  call_ind((uint32_t)(ESI), 0x11763ca8u);
  /* 11763ca8 mov dword ptr [0x1176685c], eax */
  w32((uint32_t)(0x1176685c), (EAX));
L_11763cad:;
  /* 11763cad mov eax, dword ptr [0x11766858] */
  EAX = (r32((uint32_t)(0x11766858)));
  /* 11763cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763cb4 je 0x11763ccc */
  if (C.zf) goto L_11763ccc;
  /* 11763cb6 call eax */
  call_ind((uint32_t)(EAX), 0x11763cb8u);
  /* 11763cb8 mov ebx, eax */
  EBX = (EAX);
  /* 11763cba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11763cbc je 0x11763ccc */
  if (C.zf) goto L_11763ccc;
  /* 11763cbe mov eax, dword ptr [0x1176685c] */
  EAX = (r32((uint32_t)(0x1176685c)));
  /* 11763cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763cc5 je 0x11763ccc */
  if (C.zf) goto L_11763ccc;
  /* 11763cc7 push ebx */
  push32((uint32_t)(EBX));
  /* 11763cc8 call eax */
  call_ind((uint32_t)(EAX), 0x11763ccau);
  /* 11763cca mov ebx, eax */
  EBX = (EAX);
L_11763ccc:;
  /* 11763ccc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11763cd0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11763cd4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11763cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 11763cd9 call dword ptr [0x11766854] */
  call_ind((uint32_t)(r32((uint32_t)(0x11766854))), 0x11763cdfu);
L_11763cdf:;
  /* 11763cdf pop edi */
  EDI = (pop32());
  /* 11763ce0 pop esi */
  ESI = (pop32());
  /* 11763ce1 pop ebx */
  EBX = (pop32());
  /* 11763ce2 ret  */
  ESPCHK(0x11763c5eu, _esp0);
  ESP += 4; return;
L_11763ce3:;
  /* 11763ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763ce5 jmp 0x11763cdf */
  goto L_11763cdf;
}

/* _strncpy @ 0x11763cf0 (254 bytes, 109 insns) */
void f_11763cf0(void) {
  FTRACE(0x11763cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763cf0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11763cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11763cf5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11763cf7 je 0x11763d73 */
  if (C.zf) goto L_11763d73;
  /* 11763cf9 push esi */
  push32((uint32_t)(ESI));
  /* 11763cfa push ebx */
  push32((uint32_t)(EBX));
  /* 11763cfb mov ebx, ecx */
  EBX = (ECX);
  /* 11763cfd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11763d01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11763d07 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11763d0b jne 0x11763d14 */
  if (!C.zf) goto L_11763d14;
  /* 11763d0d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763d10 jne 0x11763d81 */
  if (!C.zf) goto L_11763d81;
  /* 11763d12 jmp 0x11763d35 */
  goto L_11763d35;
L_11763d14:;
  /* 11763d14 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11763d16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11763d17 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763d19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11763d1a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763d1b je 0x11763d42 */
  if (C.zf) goto L_11763d42;
  /* 11763d1d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11763d1f je 0x11763d4a */
  if (C.zf) goto L_11763d4a;
  /* 11763d21 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11763d27 jne 0x11763d14 */
  if (!C.zf) goto L_11763d14;
  /* 11763d29 mov ebx, ecx */
  EBX = (ECX);
  /* 11763d2b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763d2e jne 0x11763d81 */
  if (!C.zf) goto L_11763d81;
L_11763d30:;
  /* 11763d30 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11763d33 je 0x11763d42 */
  if (C.zf) goto L_11763d42;
L_11763d35:;
  /* 11763d35 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11763d37 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11763d38 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763d3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11763d3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11763d3d je 0x11763d6e */
  if (C.zf) goto L_11763d6e;
  /* 11763d3f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11763d40 jne 0x11763d35 */
  if (!C.zf) goto L_11763d35;
L_11763d42:;
  /* 11763d42 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11763d46 pop ebx */
  EBX = (pop32());
  /* 11763d47 pop esi */
  ESI = (pop32());
  /* 11763d48 pop edi */
  EDI = (pop32());
  /* 11763d49 ret  */
  ESPCHK(0x11763cf0u, _esp0);
  ESP += 4; return;
L_11763d4a:;
  /* 11763d4a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11763d50 je 0x11763d64 */
  if (C.zf) goto L_11763d64;
L_11763d52:;
  /* 11763d52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763d54 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11763d55 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763d56 je 0x11763de6 */
  if (C.zf) goto L_11763de6;
  /* 11763d5c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11763d62 jne 0x11763d52 */
  if (!C.zf) goto L_11763d52;
L_11763d64:;
  /* 11763d64 mov ebx, ecx */
  EBX = (ECX);
  /* 11763d66 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763d69 jne 0x11763dd7 */
  if (!C.zf) goto L_11763dd7;
L_11763d6b:;
  /* 11763d6b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763d6d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11763d6e:;
  /* 11763d6e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11763d6f jne 0x11763d6b */
  if (!C.zf) goto L_11763d6b;
  /* 11763d71 pop ebx */
  EBX = (pop32());
  /* 11763d72 pop esi */
  ESI = (pop32());
L_11763d73:;
  /* 11763d73 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11763d77 pop edi */
  EDI = (pop32());
  /* 11763d78 ret  */
  ESPCHK(0x11763cf0u, _esp0);
  ESP += 4; return;
L_11763d79:;
  /* 11763d79 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11763d7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763d7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763d7f je 0x11763d30 */
  if (C.zf) goto L_11763d30;
L_11763d81:;
  /* 11763d81 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11763d86 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11763d88 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763d8a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11763d8d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11763d8f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11763d91 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763d94 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11763d99 je 0x11763d79 */
  if (C.zf) goto L_11763d79;
  /* 11763d9b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11763d9d je 0x11763dcb */
  if (C.zf) goto L_11763dcb;
  /* 11763d9f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11763da1 je 0x11763dc1 */
  if (C.zf) goto L_11763dc1;
  /* 11763da3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11763da9 je 0x11763db7 */
  if (C.zf) goto L_11763db7;
  /* 11763dab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11763db1 jne 0x11763d79 */
  if (!C.zf) goto L_11763d79;
  /* 11763db3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11763db5 jmp 0x11763dcf */
  goto L_11763dcf;
L_11763db7:;
  /* 11763db7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11763dbd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11763dbf jmp 0x11763dcf */
  goto L_11763dcf;
L_11763dc1:;
  /* 11763dc1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11763dc7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11763dc9 jmp 0x11763dcf */
  goto L_11763dcf;
L_11763dcb:;
  /* 11763dcb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11763dcd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11763dcf:;
  /* 11763dcf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763dd4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763dd5 je 0x11763de1 */
  if (C.zf) goto L_11763de1;
L_11763dd7:;
  /* 11763dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11763dd9:;
  /* 11763dd9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11763ddb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11763dde dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763ddf jne 0x11763dd9 */
  if (!C.zf) goto L_11763dd9;
L_11763de1:;
  /* 11763de1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11763de4 jne 0x11763d6b */
  if (!C.zf) goto L_11763d6b;
L_11763de6:;
  /* 11763de6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11763dea pop ebx */
  EBX = (pop32());
  /* 11763deb pop esi */
  ESI = (pop32());
  /* 11763dec pop edi */
  EDI = (pop32());
  /* 11763ded ret  */
  ESPCHK(0x11763cf0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11763df0 (88 bytes, 40 insns) */
void f_11763df0(void) {
  FTRACE(0x11763df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763df0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11763df4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11763df8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11763dfa je 0x11763e43 */
  if (C.zf) goto L_11763e43;
  /* 11763dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763dfe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11763e02 push edi */
  push32((uint32_t)(EDI));
  /* 11763e03 mov edi, ecx */
  EDI = (ECX);
  /* 11763e05 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763e08 jb 0x11763e37 */
  if (C.cf) goto L_11763e37;
  /* 11763e0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11763e0c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11763e0f je 0x11763e19 */
  if (C.zf) goto L_11763e19;
  /* 11763e11 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11763e13:;
  /* 11763e13 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763e15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11763e16 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11763e17 jne 0x11763e13 */
  if (!C.zf) goto L_11763e13;
L_11763e19:;
  /* 11763e19 mov ecx, eax */
  ECX = (EAX);
  /* 11763e1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11763e1e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763e20 mov ecx, eax */
  ECX = (EAX);
  /* 11763e22 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11763e25 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763e27 mov ecx, edx */
  ECX = (EDX);
  /* 11763e29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11763e2c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11763e2f je 0x11763e37 */
  if (C.zf) goto L_11763e37;
  /* 11763e31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11763e33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11763e35 je 0x11763e3d */
  if (C.zf) goto L_11763e3d;
L_11763e37:;
  /* 11763e37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11763e39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11763e3a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11763e3b jne 0x11763e37 */
  if (!C.zf) goto L_11763e37;
L_11763e3d:;
  /* 11763e3d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11763e41 pop edi */
  EDI = (pop32());
  /* 11763e42 ret  */
  ESPCHK(0x11763df0u, _esp0);
  ESP += 4; return;
L_11763e43:;
  /* 11763e43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11763e47 ret  */
  ESPCHK(0x11763df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e48 @ 0x11763e48 (27 bytes, 13 insns) */
void f_11763e48(void) {
  FTRACE(0x11763e48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763e48 mov eax, dword ptr [0x11766860] */
  EAX = (r32((uint32_t)(0x11766860)));
  /* 11763e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763e4f je 0x11763e60 */
  if (C.zf) goto L_11763e60;
  /* 11763e51 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11763e55 call eax */
  call_ind((uint32_t)(EAX), 0x11763e57u);
  /* 11763e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763e59 pop ecx */
  ECX = (pop32());
  /* 11763e5a je 0x11763e60 */
  if (C.zf) goto L_11763e60;
  /* 11763e5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11763e5e pop eax */
  EAX = (pop32());
  /* 11763e5f ret  */
  ESPCHK(0x11763e48u, _esp0);
  ESP += 4; return;
L_11763e60:;
  /* 11763e60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11763e62 ret  */
  ESPCHK(0x11763e48u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e63 @ 0x11763e63 (511 bytes, 193 insns) */
void f_11763e63(void) {
  FTRACE(0x11763e63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11763e63 push ebp */
  push32((uint32_t)(EBP));
  /* 11763e64 mov ebp, esp */
  EBP = (ESP);
  /* 11763e66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11763e68 push 0x11765460 */
  push32((uint32_t)(0x11765460u));
  /* 11763e6d push 0x11764630 */
  push32((uint32_t)(0x11764630u));
  /* 11763e72 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11763e78 push eax */
  push32((uint32_t)(EAX));
  /* 11763e79 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11763e80 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763e83 push ebx */
  push32((uint32_t)(EBX));
  /* 11763e84 push esi */
  push32((uint32_t)(ESI));
  /* 11763e85 push edi */
  push32((uint32_t)(EDI));
  /* 11763e86 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11763e89 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11763e8b cmp dword ptr [0x11766888], edi */
  { uint32_t _a=(r32((uint32_t)(0x11766888))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763e91 jne 0x11763ed9 */
  if (!C.zf) goto L_11763ed9;
  /* 11763e93 push edi */
  push32((uint32_t)(EDI));
  /* 11763e94 push edi */
  push32((uint32_t)(EDI));
  /* 11763e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11763e97 pop ebx */
  EBX = (pop32());
  /* 11763e98 push ebx */
  push32((uint32_t)(EBX));
  /* 11763e99 push 0x11765458 */
  push32((uint32_t)(0x11765458u));
  /* 11763e9e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11763ea3 push esi */
  push32((uint32_t)(ESI));
  /* 11763ea4 push edi */
  push32((uint32_t)(EDI));
  /* 11763ea5 call dword ptr [0x11765010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765010))), 0x11763eabu);
  /* 11763eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763ead je 0x11763eb7 */
  if (C.zf) goto L_11763eb7;
  /* 11763eaf mov dword ptr [0x11766888], ebx */
  w32((uint32_t)(0x11766888), (EBX));
  /* 11763eb5 jmp 0x11763ed9 */
  goto L_11763ed9;
L_11763eb7:;
  /* 11763eb7 push edi */
  push32((uint32_t)(EDI));
  /* 11763eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11763eb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11763eba push 0x11765454 */
  push32((uint32_t)(0x11765454u));
  /* 11763ebf push esi */
  push32((uint32_t)(ESI));
  /* 11763ec0 push edi */
  push32((uint32_t)(EDI));
  /* 11763ec1 call dword ptr [0x11765014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765014))), 0x11763ec7u);
  /* 11763ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763ec9 je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 11763ecf mov dword ptr [0x11766888], 2 */
  w32((uint32_t)(0x11766888), (0x2u));
L_11763ed9:;
  /* 11763ed9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763edc jle 0x11763eee */
  if ((C.zf||C.sf!=C.of)) goto L_11763eee;
  /* 11763ede push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11763ee1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11763ee4 call 0x11764087 */
  push32(0x11763ee9u); f_11764087();
  /* 11763ee9 pop ecx */
  ECX = (pop32());
  /* 11763eea pop ecx */
  ECX = (pop32());
  /* 11763eeb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11763eee:;
  /* 11763eee mov eax, dword ptr [0x11766888] */
  EAX = (r32((uint32_t)(0x11766888)));
  /* 11763ef3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763ef6 jne 0x11763f15 */
  if (!C.zf) goto L_11763f15;
  /* 11763ef8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11763efb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11763efe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11763f01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11763f04 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11763f07 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11763f0a call dword ptr [0x11765014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765014))), 0x11763f10u);
  /* 11763f10 jmp 0x11763ff3 */
  goto L_11763ff3;
L_11763f15:;
  /* 11763f15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763f18 jne 0x11763ff1 */
  if (!C.zf) goto L_11763ff1;
  /* 11763f1e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763f21 jne 0x11763f2b */
  if (!C.zf) goto L_11763f2b;
  /* 11763f23 mov eax, dword ptr [0x11766880] */
  EAX = (r32((uint32_t)(0x11766880)));
  /* 11763f28 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11763f2b:;
  /* 11763f2b push edi */
  push32((uint32_t)(EDI));
  /* 11763f2c push edi */
  push32((uint32_t)(EDI));
  /* 11763f2d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11763f30 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11763f33 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11763f36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11763f38 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11763f3a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11763f3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11763f3e push eax */
  push32((uint32_t)(EAX));
  /* 11763f3f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11763f42 call dword ptr [0x11765018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765018))), 0x11763f48u);
  /* 11763f48 mov ebx, eax */
  EBX = (EAX);
  /* 11763f4a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11763f4d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763f4f je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 11763f55 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11763f58 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11763f5b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11763f5e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11763f60 call 0x11764710 */
  push32(0x11763f65u); f_11764710();
  /* 11763f65 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11763f68 mov eax, esp */
  EAX = (ESP);
  /* 11763f6a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11763f6d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11763f71 jmp 0x11763f86 */
  goto L_11763f86;
  /* 11763f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11763f75 pop eax */
  EAX = (pop32());
  /* 11763f76 ret  */
  ESPCHK(0x11763e63u, _esp0);
  ESP += 4; return;
  /* 11763f77 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11763f7a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11763f7c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11763f7f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11763f83 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11763f86:;
  /* 11763f86 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763f89 je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 11763f8b push ebx */
  push32((uint32_t)(EBX));
  /* 11763f8c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11763f8f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11763f92 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11763f95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11763f97 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11763f9a call dword ptr [0x11765018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765018))), 0x11763fa0u);
  /* 11763fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763fa2 je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 11763fa4 push edi */
  push32((uint32_t)(EDI));
  /* 11763fa5 push edi */
  push32((uint32_t)(EDI));
  /* 11763fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11763fa7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11763faa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11763fad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11763fb0 call dword ptr [0x11765010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765010))), 0x11763fb6u);
  /* 11763fb6 mov esi, eax */
  ESI = (EAX);
  /* 11763fb8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11763fbb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763fbd je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 11763fbf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11763fc3 je 0x11764005 */
  if (C.zf) goto L_11764005;
  /* 11763fc5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763fc8 je 0x11764080 */
  if (C.zf) goto L_11764080;
  /* 11763fce cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11763fd1 jg 0x11763ff1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11763ff1;
  /* 11763fd3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11763fd6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11763fd9 push ebx */
  push32((uint32_t)(EBX));
  /* 11763fda push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11763fdd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11763fe0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11763fe3 call dword ptr [0x11765010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765010))), 0x11763fe9u);
  /* 11763fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11763feb jne 0x11764080 */
  if (!C.zf) goto L_11764080;
L_11763ff1:;
  /* 11763ff1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11763ff3:;
  /* 11763ff3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11763ff6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11763ff9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11764000 pop edi */
  EDI = (pop32());
  /* 11764001 pop esi */
  ESI = (pop32());
  /* 11764002 pop ebx */
  EBX = (pop32());
  /* 11764003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11764004 ret  */
  ESPCHK(0x11763e63u, _esp0);
  ESP += 4; return;
L_11764005:;
  /* 11764005 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1176400c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1176400f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11764012 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11764014 call 0x11764710 */
  push32(0x11764019u); f_11764710();
  /* 11764019 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1176401c mov ebx, esp */
  EBX = (ESP);
  /* 1176401e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11764021 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11764025 jmp 0x11764039 */
  goto L_11764039;
  /* 11764027 push 1 */
  push32((uint32_t)(0x1u));
  /* 11764029 pop eax */
  EAX = (pop32());
  /* 1176402a ret  */
  ESPCHK(0x11763e63u, _esp0);
  ESP += 4; return;
  /* 1176402b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1176402e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11764030 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11764032 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11764036 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11764039:;
  /* 11764039 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176403b je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 1176403d push esi */
  push32((uint32_t)(ESI));
  /* 1176403e push ebx */
  push32((uint32_t)(EBX));
  /* 1176403f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11764042 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11764045 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11764048 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1176404b call dword ptr [0x11765010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765010))), 0x11764051u);
  /* 11764051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11764053 je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
  /* 11764055 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764058 push edi */
  push32((uint32_t)(EDI));
  /* 11764059 push edi */
  push32((uint32_t)(EDI));
  /* 1176405a jne 0x11764060 */
  if (!C.zf) goto L_11764060;
  /* 1176405c push edi */
  push32((uint32_t)(EDI));
  /* 1176405d push edi */
  push32((uint32_t)(EDI));
  /* 1176405e jmp 0x11764066 */
  goto L_11764066;
L_11764060:;
  /* 11764060 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11764063 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11764066:;
  /* 11764066 push esi */
  push32((uint32_t)(ESI));
  /* 11764067 push ebx */
  push32((uint32_t)(EBX));
  /* 11764068 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1176406d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11764070 call dword ptr [0x1176508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176508c))), 0x11764076u);
  /* 11764076 mov esi, eax */
  ESI = (EAX);
  /* 11764078 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176407a je 0x11763ff1 */
  if (C.zf) goto L_11763ff1;
L_11764080:;
  /* 11764080 mov eax, esi */
  EAX = (ESI);
  /* 11764082 jmp 0x11763ff3 */
  goto L_11763ff3;
}

/* FUN_10004087 @ 0x11764087 (43 bytes, 20 insns) */
void f_11764087(void) {
  FTRACE(0x11764087u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11764087 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1176408b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1176408f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11764091 push esi */
  push32((uint32_t)(ESI));
  /* 11764092 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11764095 je 0x117640a4 */
  if (C.zf) goto L_117640a4;
L_11764097:;
  /* 11764097 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1176409a je 0x117640a4 */
  if (C.zf) goto L_117640a4;
  /* 1176409c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1176409d mov esi, ecx */
  ESI = (ECX);
  /* 1176409f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117640a0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117640a2 jne 0x11764097 */
  if (!C.zf) goto L_11764097;
L_117640a4:;
  /* 117640a4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117640a7 pop esi */
  ESI = (pop32());
  /* 117640a8 jne 0x117640af */
  if (!C.zf) goto L_117640af;
  /* 117640aa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117640ae ret  */
  ESPCHK(0x11764087u, _esp0);
  ESP += 4; return;
L_117640af:;
  /* 117640af mov eax, edx */
  EAX = (EDX);
  /* 117640b1 ret  */
  ESPCHK(0x11764087u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b2 @ 0x117640b2 (318 bytes, 123 insns) */
void f_117640b2(void) {
  FTRACE(0x117640b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117640b2 push ebp */
  push32((uint32_t)(EBP));
  /* 117640b3 mov ebp, esp */
  EBP = (ESP);
  /* 117640b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117640b7 push 0x11765478 */
  push32((uint32_t)(0x11765478u));
  /* 117640bc push 0x11764630 */
  push32((uint32_t)(0x11764630u));
  /* 117640c1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117640c7 push eax */
  push32((uint32_t)(EAX));
  /* 117640c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117640cf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117640d2 push ebx */
  push32((uint32_t)(EBX));
  /* 117640d3 push esi */
  push32((uint32_t)(ESI));
  /* 117640d4 push edi */
  push32((uint32_t)(EDI));
  /* 117640d5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117640d8 mov eax, dword ptr [0x1176688c] */
  EAX = (r32((uint32_t)(0x1176688c)));
  /* 117640dd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117640df cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117640e1 jne 0x11764121 */
  if (!C.zf) goto L_11764121;
  /* 117640e3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117640e6 push eax */
  push32((uint32_t)(EAX));
  /* 117640e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117640e9 pop esi */
  ESI = (pop32());
  /* 117640ea push esi */
  push32((uint32_t)(ESI));
  /* 117640eb push 0x11765458 */
  push32((uint32_t)(0x11765458u));
  /* 117640f0 push esi */
  push32((uint32_t)(ESI));
  /* 117640f1 call dword ptr [0x11765008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765008))), 0x117640f7u);
  /* 117640f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117640f9 je 0x117640ff */
  if (C.zf) goto L_117640ff;
  /* 117640fb mov eax, esi */
  EAX = (ESI);
  /* 117640fd jmp 0x1176411c */
  goto L_1176411c;
L_117640ff:;
  /* 117640ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11764102 push eax */
  push32((uint32_t)(EAX));
  /* 11764103 push esi */
  push32((uint32_t)(ESI));
  /* 11764104 push 0x11765454 */
  push32((uint32_t)(0x11765454u));
  /* 11764109 push esi */
  push32((uint32_t)(ESI));
  /* 1176410a push ebx */
  push32((uint32_t)(EBX));
  /* 1176410b call dword ptr [0x1176500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176500c))), 0x11764111u);
  /* 11764111 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11764113 je 0x117641e7 */
  if (C.zf) goto L_117641e7;
  /* 11764119 push 2 */
  push32((uint32_t)(0x2u));
  /* 1176411b pop eax */
  EAX = (pop32());
L_1176411c:;
  /* 1176411c mov dword ptr [0x1176688c], eax */
  w32((uint32_t)(0x1176688c), (EAX));
L_11764121:;
  /* 11764121 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764124 jne 0x1176414a */
  if (!C.zf) goto L_1176414a;
  /* 11764126 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11764129 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176412b jne 0x11764132 */
  if (!C.zf) goto L_11764132;
  /* 1176412d mov eax, dword ptr [0x11766870] */
  EAX = (r32((uint32_t)(0x11766870)));
L_11764132:;
  /* 11764132 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11764135 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11764138 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1176413b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1176413e push eax */
  push32((uint32_t)(EAX));
  /* 1176413f call dword ptr [0x1176500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1176500c))), 0x11764145u);
  /* 11764145 jmp 0x117641e9 */
  goto L_117641e9;
L_1176414a:;
  /* 1176414a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176414d jne 0x117641e7 */
  if (!C.zf) goto L_117641e7;
  /* 11764153 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764156 jne 0x11764160 */
  if (!C.zf) goto L_11764160;
  /* 11764158 mov eax, dword ptr [0x11766880] */
  EAX = (r32((uint32_t)(0x11766880)));
  /* 1176415d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11764160:;
  /* 11764160 push ebx */
  push32((uint32_t)(EBX));
  /* 11764161 push ebx */
  push32((uint32_t)(EBX));
  /* 11764162 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11764165 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11764168 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1176416b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1176416d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176416f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11764172 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11764173 push eax */
  push32((uint32_t)(EAX));
  /* 11764174 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11764177 call dword ptr [0x11765018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765018))), 0x1176417du);
  /* 1176417d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11764180 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764182 je 0x117641e7 */
  if (C.zf) goto L_117641e7;
  /* 11764184 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11764187 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1176418a mov eax, edi */
  EAX = (EDI);
  /* 1176418c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176418f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11764191 call 0x11764710 */
  push32(0x11764196u); f_11764710();
  /* 11764196 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11764199 mov esi, esp */
  ESI = (ESP);
  /* 1176419b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1176419e push edi */
  push32((uint32_t)(EDI));
  /* 1176419f push ebx */
  push32((uint32_t)(EBX));
  /* 117641a0 push esi */
  push32((uint32_t)(ESI));
  /* 117641a1 call 0x11763df0 */
  push32(0x117641a6u); f_11763df0();
  /* 117641a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117641a9 jmp 0x117641b6 */
  goto L_117641b6;
  /* 117641ab push 1 */
  push32((uint32_t)(0x1u));
  /* 117641ad pop eax */
  EAX = (pop32());
  /* 117641ae ret  */
  ESPCHK(0x117640b2u, _esp0);
  ESP += 4; return;
  /* 117641af mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117641b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117641b4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_117641b6:;
  /* 117641b6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117641ba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117641bc je 0x117641e7 */
  if (C.zf) goto L_117641e7;
  /* 117641be push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 117641c1 push esi */
  push32((uint32_t)(ESI));
  /* 117641c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117641c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 117641c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117641ca push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 117641cd call dword ptr [0x11765018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765018))), 0x117641d3u);
  /* 117641d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117641d5 je 0x117641e7 */
  if (C.zf) goto L_117641e7;
  /* 117641d7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117641da push eax */
  push32((uint32_t)(EAX));
  /* 117641db push esi */
  push32((uint32_t)(ESI));
  /* 117641dc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117641df call dword ptr [0x11765008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11765008))), 0x117641e5u);
  /* 117641e5 jmp 0x117641e9 */
  goto L_117641e9;
L_117641e7:;
  /* 117641e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117641e9:;
  /* 117641e9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 117641ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117641ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117641f6 pop edi */
  EDI = (pop32());
  /* 117641f7 pop esi */
  ESI = (pop32());
  /* 117641f8 pop ebx */
  EBX = (pop32());
  /* 117641f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117641fa ret  */
  ESPCHK(0x117640b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x11764200 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11764200(void) {
  FTRACE(0x11764200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11764200 push ebp */
  push32((uint32_t)(EBP));
  /* 11764201 mov ebp, esp */
  EBP = (ESP);
  /* 11764203 push edi */
  push32((uint32_t)(EDI));
  /* 11764204 push esi */
  push32((uint32_t)(ESI));
  /* 11764205 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11764208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1176420b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1176420e mov eax, ecx */
  EAX = (ECX);
  /* 11764210 mov edx, ecx */
  EDX = (ECX);
  /* 11764212 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11764214 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764216 jbe 0x11764220 */
  if ((C.cf||C.zf)) goto L_11764220;
  /* 11764218 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176421a jb 0x11764398 */
  if (C.cf) goto L_11764398;
L_11764220:;
  /* 11764220 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11764226 jne 0x1176423c */
  if (!C.zf) goto L_1176423c;
  /* 11764228 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1176422b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1176422e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764231 jb 0x1176425c */
  if (C.cf) goto L_1176425c;
  /* 11764233 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11764235 jmp dword ptr [edx*4 + 0x11764348] */
  switch (EDX) {
    case 0: goto L_11764358;
    case 1: goto L_11764360;
    case 2: goto L_1176436c;
    case 3: goto L_11764380;
    default: x86_unimpl("switch@0x11764235 out of table"); return;
  }
L_1176423c:;
  /* 1176423c mov eax, edi */
  EAX = (EDI);
  /* 1176423e mov edx, 3 */
  EDX = (0x3u);
  /* 11764243 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11764246 jb 0x11764254 */
  if (C.cf) goto L_11764254;
  /* 11764248 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1176424b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1176424d jmp dword ptr [eax*4 + 0x11764260] */
  switch (EAX) {
    case 1: goto L_11764270;
    case 2: goto L_1176429c;
    case 3: goto L_117642c0;
    default: x86_unimpl("switch@0x1176424d out of table"); return;
  }
L_11764254:;
  /* 11764254 jmp dword ptr [ecx*4 + 0x11764358] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11764358)))); return;
  /* 1176425b nop  */
  /* nop */
L_1176425c:;
  /* 1176425c jmp dword ptr [ecx*4 + 0x117642dc] */
  switch (ECX) {
    case 0: goto L_1176433f;
    case 1: goto L_1176432c;
    case 2: goto L_11764324;
    case 3: goto L_1176431c;
    case 4: goto L_11764314;
    case 5: goto L_1176430c;
    case 6: goto L_11764304;
    case 7: goto L_117642fc;
    default: x86_unimpl("switch@0x1176425c out of table"); return;
  }
  /* 11764263 nop  */
  /* nop */
L_11764270:;
  /* 11764270 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11764272 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11764274 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11764276 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11764279 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176427c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1176427f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11764282 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11764285 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11764288 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176428b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176428e jb 0x1176425c */
  if (C.cf) goto L_1176425c;
  /* 11764290 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11764292 jmp dword ptr [edx*4 + 0x11764348] */
  switch (EDX) {
    case 0: goto L_11764358;
    case 1: goto L_11764360;
    case 2: goto L_1176436c;
    case 3: goto L_11764380;
    default: x86_unimpl("switch@0x11764292 out of table"); return;
  }
  /* 11764299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1176429c:;
  /* 1176429c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1176429e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117642a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117642a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117642a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117642a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117642ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117642ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117642b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117642b4 jb 0x1176425c */
  if (C.cf) goto L_1176425c;
  /* 117642b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117642b8 jmp dword ptr [edx*4 + 0x11764348] */
  switch (EDX) {
    case 0: goto L_11764358;
    case 1: goto L_11764360;
    case 2: goto L_1176436c;
    case 3: goto L_11764380;
    default: x86_unimpl("switch@0x117642b8 out of table"); return;
  }
  /* 117642bf nop  */
  /* nop */
L_117642c0:;
  /* 117642c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117642c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117642c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117642c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117642c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117642ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117642cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117642ce jb 0x1176425c */
  if (C.cf) goto L_1176425c;
  /* 117642d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117642d2 jmp dword ptr [edx*4 + 0x11764348] */
  switch (EDX) {
    case 0: goto L_11764358;
    case 1: goto L_11764360;
    case 2: goto L_1176436c;
    case 3: goto L_11764380;
    default: x86_unimpl("switch@0x117642d2 out of table"); return;
  }
  /* 117642d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117642fc:;
  /* 117642fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11764300 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11764304:;
  /* 11764304 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11764308 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1176430c:;
  /* 1176430c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11764310 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11764314:;
  /* 11764314 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11764318 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1176431c:;
  /* 1176431c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11764320 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11764324:;
  /* 11764324 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11764328 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1176432c:;
  /* 1176432c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11764330 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11764334 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1176433b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1176433d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1176433f:;
  /* 1176433f jmp dword ptr [edx*4 + 0x11764348] */
  switch (EDX) {
    case 0: goto L_11764358;
    case 1: goto L_11764360;
    case 2: goto L_1176436c;
    case 3: goto L_11764380;
    default: x86_unimpl("switch@0x1176433f out of table"); return;
  }
  /* 11764346 mov edi, edi */
  EDI = (EDI);
L_11764358:;
  /* 11764358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1176435b pop esi */
  ESI = (pop32());
  /* 1176435c pop edi */
  EDI = (pop32());
  /* 1176435d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176435e ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 1176435f nop  */
  /* nop */
L_11764360:;
  /* 11764360 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11764362 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11764364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764367 pop esi */
  ESI = (pop32());
  /* 11764368 pop edi */
  EDI = (pop32());
  /* 11764369 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176436a ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 1176436b nop  */
  /* nop */
L_1176436c:;
  /* 1176436c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1176436e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11764370 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11764373 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11764376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764379 pop esi */
  ESI = (pop32());
  /* 1176437a pop edi */
  EDI = (pop32());
  /* 1176437b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176437c ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 1176437d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11764380:;
  /* 11764380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11764382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11764384 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11764387 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176438a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1176438d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11764390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764393 pop esi */
  ESI = (pop32());
  /* 11764394 pop edi */
  EDI = (pop32());
  /* 11764395 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11764396 ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 11764397 nop  */
  /* nop */
L_11764398:;
  /* 11764398 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1176439c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117643a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117643a6 jne 0x117643cc */
  if (!C.zf) goto L_117643cc;
  /* 117643a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117643ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117643ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117643b1 jb 0x117643c0 */
  if (C.cf) goto L_117643c0;
  /* 117643b3 std  */
  C.df=1;
  /* 117643b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117643b6 cld  */
  C.df=0;
  /* 117643b7 jmp dword ptr [edx*4 + 0x117644e0] */
  switch (EDX) {
    case 0: goto L_117644f0;
    case 1: goto L_117644f8;
    case 2: goto L_11764508;
    case 3: goto L_1176451c;
    default: x86_unimpl("switch@0x117643b7 out of table"); return;
  }
  /* 117643be mov edi, edi */
  EDI = (EDI);
L_117643c0:;
  /* 117643c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117643c2 jmp dword ptr [ecx*4 + 0x11764490] */
  switch (ECX) {
    case 0: goto L_117644d7;
    default: x86_unimpl("switch@0x117643c2 out of table"); return;
  }
  /* 117643c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117643cc:;
  /* 117643cc mov eax, edi */
  EAX = (EDI);
  /* 117643ce mov edx, 3 */
  EDX = (0x3u);
  /* 117643d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117643d6 jb 0x117643e4 */
  if (C.cf) goto L_117643e4;
  /* 117643d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117643db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117643dd jmp dword ptr [eax*4 + 0x117643e8] */
  switch (EAX) {
    case 1: goto L_117643f8;
    case 2: goto L_11764418;
    case 3: goto L_11764440;
    default: x86_unimpl("switch@0x117643dd out of table"); return;
  }
L_117643e4:;
  /* 117643e4 jmp dword ptr [ecx*4 + 0x117644e0] */
  switch (ECX) {
    case 0: goto L_117644f0;
    case 1: goto L_117644f8;
    case 2: goto L_11764508;
    case 3: goto L_1176451c;
    default: x86_unimpl("switch@0x117643e4 out of table"); return;
  }
  /* 117643eb nop  */
  /* nop */
L_117643f8:;
  /* 117643f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117643fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117643fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11764400 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11764401 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11764404 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11764405 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764408 jb 0x117643c0 */
  if (C.cf) goto L_117643c0;
  /* 1176440a std  */
  C.df=1;
  /* 1176440b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1176440d cld  */
  C.df=0;
  /* 1176440e jmp dword ptr [edx*4 + 0x117644e0] */
  switch (EDX) {
    case 0: goto L_117644f0;
    case 1: goto L_117644f8;
    case 2: goto L_11764508;
    case 3: goto L_1176451c;
    default: x86_unimpl("switch@0x1176440e out of table"); return;
  }
  /* 11764415 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11764418:;
  /* 11764418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1176441b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1176441d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11764420 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11764423 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11764426 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11764429 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176442c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176442f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764432 jb 0x117643c0 */
  if (C.cf) goto L_117643c0;
  /* 11764434 std  */
  C.df=1;
  /* 11764435 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11764437 cld  */
  C.df=0;
  /* 11764438 jmp dword ptr [edx*4 + 0x117644e0] */
  switch (EDX) {
    case 0: goto L_117644f0;
    case 1: goto L_117644f8;
    case 2: goto L_11764508;
    case 3: goto L_1176451c;
    default: x86_unimpl("switch@0x11764438 out of table"); return;
  }
  /* 1176443f nop  */
  /* nop */
L_11764440:;
  /* 11764440 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11764443 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11764445 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11764448 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1176444b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1176444e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11764451 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11764454 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11764457 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176445a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1176445d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764460 jb 0x117643c0 */
  if (C.cf) goto L_117643c0;
  /* 11764466 std  */
  C.df=1;
  /* 11764467 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11764469 cld  */
  C.df=0;
  /* 1176446a jmp dword ptr [edx*4 + 0x117644e0] */
  switch (EDX) {
    case 0: goto L_117644f0;
    case 1: goto L_117644f8;
    case 2: goto L_11764508;
    case 3: goto L_1176451c;
    default: x86_unimpl("switch@0x1176446a out of table"); return;
  }
  /* 11764471 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11764474 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11764475 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11764476 jbe 0x11764489 */
  if ((C.cf||C.zf)) goto L_11764489;
  /* 11764478 pushfd  */
  x86_unimpl("pushfd @ 0x11764478");
  /* 11764479 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1176447a jbe 0x1176448d */
  if ((C.cf||C.zf)) goto L_1176448d;
  /* 1176447c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1176447d inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1176447e jbe 0x11764491 */
  if ((C.cf||C.zf)) goto L_11764491;
  /* 11764480 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11764481 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11764482 jbe 0x11764495 */
  if ((C.cf||C.zf)) goto L_11764495;
  /* 11764484 mov ah, 0x44 */
  AH = (0x44u);
  /* 11764486 jbe 0x11764499 */
  if ((C.cf||C.zf)) goto L_11764499;
  /* 11764488 mov esp, 0xc4117644 */
  ESP = (0xc4117644u);
L_1176448d:;
  /* 1176448d inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1176448e jbe 0x117644a1 */
  if ((C.cf||C.zf)) goto L_117644a1;
  /* 11764494 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11764498 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1176449c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117644a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117644a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117644a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117644ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117644b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117644b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117644b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117644bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117644c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117644c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117644c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117644cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117644d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117644d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117644d7:;
  /* 117644d7 jmp dword ptr [edx*4 + 0x117644e0] */
  switch (EDX) {
    case 0: goto L_117644f0;
    case 1: goto L_117644f8;
    case 2: goto L_11764508;
    case 3: goto L_1176451c;
    default: x86_unimpl("switch@0x117644d7 out of table"); return;
  }
  /* 117644de mov edi, edi */
  EDI = (EDI);
L_117644f0:;
  /* 117644f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117644f3 pop esi */
  ESI = (pop32());
  /* 117644f4 pop edi */
  EDI = (pop32());
  /* 117644f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117644f6 ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 117644f7 nop  */
  /* nop */
L_117644f8:;
  /* 117644f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117644fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117644fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764501 pop esi */
  ESI = (pop32());
  /* 11764502 pop edi */
  EDI = (pop32());
  /* 11764503 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11764504 ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 11764505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11764508:;
  /* 11764508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1176450b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1176450e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11764511 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11764514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764517 pop esi */
  ESI = (pop32());
  /* 11764518 pop edi */
  EDI = (pop32());
  /* 11764519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1176451a ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
  /* 1176451b nop  */
  /* nop */
L_1176451c:;
  /* 1176451c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1176451f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11764522 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11764525 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11764528 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1176452b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1176452e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764531 pop esi */
  ESI = (pop32());
  /* 11764532 pop edi */
  EDI = (pop32());
  /* 11764533 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11764534 ret  */
  ESPCHK(0x11764200u, _esp0);
  ESP += 4; return;
L_11764489: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11764489 (unresolved jump table)"); return;
L_11764491: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11764491 (unresolved jump table)"); return;
L_11764495: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11764495 (unresolved jump table)"); return;
L_11764499: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11764499 (unresolved jump table)"); return;
L_117644a1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117644a1 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11764538 (32 bytes, 18 insns) */
void f_11764538(void) {
  FTRACE(0x11764538u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11764538 push ebp */
  push32((uint32_t)(EBP));
  /* 11764539 mov ebp, esp */
  EBP = (ESP);
  /* 1176453b push ebx */
  push32((uint32_t)(EBX));
  /* 1176453c push esi */
  push32((uint32_t)(ESI));
  /* 1176453d push edi */
  push32((uint32_t)(EDI));
  /* 1176453e push ebp */
  push32((uint32_t)(EBP));
  /* 1176453f push 0 */
  push32((uint32_t)(0x0u));
  /* 11764541 push 0 */
  push32((uint32_t)(0x0u));
  /* 11764543 push 0x11764550 */
  push32((uint32_t)(0x11764550u));
  /* 11764548 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1176454b call 0x11764740 */
  push32(0x11764550u); f_11764740();
  /* 11764550 pop ebp */
  EBP = (pop32());
  /* 11764551 pop edi */
  EDI = (pop32());
  /* 11764552 pop esi */
  ESI = (pop32());
  /* 11764553 pop ebx */
  EBX = (pop32());
  /* 11764554 mov esp, ebp */
  ESP = (EBP);
  /* 11764556 pop ebp */
  EBP = (pop32());
  /* 11764557 ret  */
  ESPCHK(0x11764538u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1176457a (104 bytes, 33 insns) */
void f_1176457a(void) {
  FTRACE(0x1176457au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1176457a push ebx */
  push32((uint32_t)(EBX));
  /* 1176457b push esi */
  push32((uint32_t)(ESI));
  /* 1176457c push edi */
  push32((uint32_t)(EDI));
  /* 1176457d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11764581 push eax */
  push32((uint32_t)(EAX));
  /* 11764582 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11764584 push 0x11764558 */
  push32((uint32_t)(0x11764558u));
  /* 11764589 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11764590 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11764597:;
  /* 11764597 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1176459b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1176459e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 117645a1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117645a4 je 0x117645d4 */
  if (C.zf) goto L_117645d4;
  /* 117645a6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117645aa je 0x117645d4 */
  if (C.zf) goto L_117645d4;
  /* 117645ac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 117645af mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 117645b2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 117645b6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 117645b9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117645be jne 0x117645d2 */
  if (!C.zf) goto L_117645d2;
  /* 117645c0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117645c5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 117645c9 call 0x1176460e */
  push32(0x117645ceu); f_1176460e();
  /* 117645ce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x117645d2u);
L_117645d2:;
  /* 117645d2 jmp 0x11764597 */
  goto L_11764597;
L_117645d4:;
  /* 117645d4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 117645db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117645de pop edi */
  EDI = (pop32());
  /* 117645df pop esi */
  ESI = (pop32());
  /* 117645e0 pop ebx */
  EBX = (pop32());
  /* 117645e1 ret  */
  ESPCHK(0x1176457au, _esp0);
  ESP += 4; return;
}

/* FUN_1000460e @ 0x1176460e (24 bytes, 10 insns) */
void f_1176460e(void) {
  FTRACE(0x1176460eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1176460e push ebx */
  push32((uint32_t)(EBX));
  /* 1176460f push ecx */
  push32((uint32_t)(ECX));
  /* 11764610 mov ebx, 0x11766520 */
  EBX = (0x11766520u);
  /* 11764615 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11764618 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1176461b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1176461e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11764621 pop ecx */
  ECX = (pop32());
  /* 11764622 pop ebx */
  EBX = (pop32());
  /* 11764623 ret 4 */
  ESPCHK(0x1176460eu, _esp0);
  ESP += 8; return;
}

/* FUN_100046ed @ 0x117646ed (27 bytes, 11 insns) */
void f_117646ed(void) {
  FTRACE(0x117646edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117646ed push ebp */
  push32((uint32_t)(EBP));
  /* 117646ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 117646f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 117646f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117646f7 push eax */
  push32((uint32_t)(EAX));
  /* 117646f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 117646fb push eax */
  push32((uint32_t)(EAX));
  /* 117646fc call 0x1176457a */
  push32(0x11764701u); f_1176457a();
  /* 11764701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11764704 pop ebp */
  EBP = (pop32());
  /* 11764705 ret 4 */
  ESPCHK(0x117646edu, _esp0);
  ESP += 8; return;
}

/* FUN_10004710 @ 0x11764710 (47 bytes, 17 insns) */
void f_11764710(void) {
  FTRACE(0x11764710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11764710 push ecx */
  push32((uint32_t)(ECX));
  /* 11764711 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11764716 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1176471a jb 0x11764730 */
  if (C.cf) goto L_11764730;
L_1176471c:;
  /* 1176471c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11764722 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11764727 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11764729 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1176472e jae 0x1176471c */
  if (!C.cf) goto L_1176471c;
L_11764730:;
  /* 11764730 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11764732 mov eax, esp */
  EAX = (ESP);
  /* 11764734 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11764736 mov esp, ecx */
  ESP = (ECX);
  /* 11764738 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1176473a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1176473d push eax */
  push32((uint32_t)(EAX));
  /* 1176473e ret  */
  ESPCHK(0x11764710u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11764740 (6 bytes, 1 insns) */
void f_11764740(void) {
  FTRACE(0x11764740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11764740 jmp dword ptr [0x11765004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11765004)))); return;
}

