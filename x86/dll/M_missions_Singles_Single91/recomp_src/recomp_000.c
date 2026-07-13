#include "recomp.h"

/* FUN_10001000 @ 0x11f71000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11f71000(void) {
  FTRACE(0x11f71000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71002 call dword ptr [0x11f75134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75134))), 0x11f71008u);
  /* 11f71008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7100e ja 0x11f7102f */
  if ((!C.cf&&!C.zf)) goto L_11f7102f;
  /* 11f71010 jmp dword ptr [eax*4 + 0x11f71038] */
  switch (EAX) {
    case 0: goto L_11f71017;
    case 1: goto L_11f7101d;
    case 2: goto L_11f71023;
    case 3: goto L_11f71029;
    default: x86_unimpl("switch@0x11f71010 out of table"); return;
  }
L_11f71017:;
  /* 11f71017 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11f7101c ret  */
  ESPCHK(0x11f71000u, _esp0);
  ESP += 4; return;
L_11f7101d:;
  /* 11f7101d mov eax, 0xfa0 */
  EAX = (0xfa0u);
  /* 11f71022 ret  */
  ESPCHK(0x11f71000u, _esp0);
  ESP += 4; return;
L_11f71023:;
  /* 11f71023 mov eax, 0xbb8 */
  EAX = (0xbb8u);
  /* 11f71028 ret  */
  ESPCHK(0x11f71000u, _esp0);
  ESP += 4; return;
L_11f71029:;
  /* 11f71029 mov eax, 0x8fc */
  EAX = (0x8fcu);
  /* 11f7102e ret  */
  ESPCHK(0x11f71000u, _esp0);
  ESP += 4; return;
L_11f7102f:;
  /* 11f7102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11f71034 ret  */
  ESPCHK(0x11f71000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11f71050 (794 bytes, 209 insns) */
void f_11f71050(void) {
  FTRACE(0x11f71050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71050 push esi */
  push32((uint32_t)(ESI));
  /* 11f71051 mov esi, dword ptr [0x11f75124] */
  ESI = (r32((uint32_t)(0x11f75124)));
  /* 11f71057 push edi */
  push32((uint32_t)(EDI));
  /* 11f71058 push 0x11f7623c */
  push32((uint32_t)(0x11f7623cu));
  /* 11f7105d push 0x11f766a8 */
  push32((uint32_t)(0x11f766a8u));
  /* 11f71062 call esi */
  call_ind((uint32_t)(ESI), 0x11f71064u);
  /* 11f71064 push 0x11f76230 */
  push32((uint32_t)(0x11f76230u));
  /* 11f71069 push 0x11f76698 */
  push32((uint32_t)(0x11f76698u));
  /* 11f7106e call esi */
  call_ind((uint32_t)(ESI), 0x11f71070u);
  /* 11f71070 push 0x11f76228 */
  push32((uint32_t)(0x11f76228u));
  /* 11f71075 push 0x11f76680 */
  push32((uint32_t)(0x11f76680u));
  /* 11f7107a call esi */
  call_ind((uint32_t)(ESI), 0x11f7107cu);
  /* 11f7107c push 0x11f76224 */
  push32((uint32_t)(0x11f76224u));
  /* 11f71081 push 0x11f766b8 */
  push32((uint32_t)(0x11f766b8u));
  /* 11f71086 call esi */
  call_ind((uint32_t)(ESI), 0x11f71088u);
  /* 11f71088 push 0x11f76220 */
  push32((uint32_t)(0x11f76220u));
  /* 11f7108d push 0x11f766c0 */
  push32((uint32_t)(0x11f766c0u));
  /* 11f71092 call esi */
  call_ind((uint32_t)(ESI), 0x11f71094u);
  /* 11f71094 push 0x11f7621c */
  push32((uint32_t)(0x11f7621cu));
  /* 11f71099 push 0x11f76710 */
  push32((uint32_t)(0x11f76710u));
  /* 11f7109e call esi */
  call_ind((uint32_t)(ESI), 0x11f710a0u);
  /* 11f710a0 push 0x11f76218 */
  push32((uint32_t)(0x11f76218u));
  /* 11f710a5 push 0x11f76718 */
  push32((uint32_t)(0x11f76718u));
  /* 11f710aa call esi */
  call_ind((uint32_t)(ESI), 0x11f710acu);
  /* 11f710ac mov esi, dword ptr [0x11f7511c] */
  ESI = (r32((uint32_t)(0x11f7511c)));
  /* 11f710b2 push 0x11f76210 */
  push32((uint32_t)(0x11f76210u));
  /* 11f710b7 push 0x11f767a0 */
  push32((uint32_t)(0x11f767a0u));
  /* 11f710bc call esi */
  call_ind((uint32_t)(ESI), 0x11f710beu);
  /* 11f710be add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f710c1 push 0x11f76208 */
  push32((uint32_t)(0x11f76208u));
  /* 11f710c6 push 0x11f767a8 */
  push32((uint32_t)(0x11f767a8u));
  /* 11f710cb call esi */
  call_ind((uint32_t)(ESI), 0x11f710cdu);
  /* 11f710cd push 0x11f76204 */
  push32((uint32_t)(0x11f76204u));
  /* 11f710d2 push 0x11f76770 */
  push32((uint32_t)(0x11f76770u));
  /* 11f710d7 call esi */
  call_ind((uint32_t)(ESI), 0x11f710d9u);
  /* 11f710d9 push 0x11f76200 */
  push32((uint32_t)(0x11f76200u));
  /* 11f710de push 0x11f76778 */
  push32((uint32_t)(0x11f76778u));
  /* 11f710e3 call esi */
  call_ind((uint32_t)(ESI), 0x11f710e5u);
  /* 11f710e5 push 0x11f761f8 */
  push32((uint32_t)(0x11f761f8u));
  /* 11f710ea push 0x11f76768 */
  push32((uint32_t)(0x11f76768u));
  /* 11f710ef call esi */
  call_ind((uint32_t)(ESI), 0x11f710f1u);
  /* 11f710f1 push 0x11f761ec */
  push32((uint32_t)(0x11f761ecu));
  /* 11f710f6 push 0x11f76678 */
  push32((uint32_t)(0x11f76678u));
  /* 11f710fb call esi */
  call_ind((uint32_t)(ESI), 0x11f710fdu);
  /* 11f710fd push 0x11f761e4 */
  push32((uint32_t)(0x11f761e4u));
  /* 11f71102 push 0x11f766b0 */
  push32((uint32_t)(0x11f766b0u));
  /* 11f71107 call esi */
  call_ind((uint32_t)(ESI), 0x11f71109u);
  /* 11f71109 push 0x11f761dc */
  push32((uint32_t)(0x11f761dcu));
  /* 11f7110e push 0x11f76780 */
  push32((uint32_t)(0x11f76780u));
  /* 11f71113 call esi */
  call_ind((uint32_t)(ESI), 0x11f71115u);
  /* 11f71115 push 0x11f761d4 */
  push32((uint32_t)(0x11f761d4u));
  /* 11f7111a push 0x11f76788 */
  push32((uint32_t)(0x11f76788u));
  /* 11f7111f call esi */
  call_ind((uint32_t)(ESI), 0x11f71121u);
  /* 11f71121 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71124 push 0x11f761cc */
  push32((uint32_t)(0x11f761ccu));
  /* 11f71129 push 0x11f76790 */
  push32((uint32_t)(0x11f76790u));
  /* 11f7112e call esi */
  call_ind((uint32_t)(ESI), 0x11f71130u);
  /* 11f71130 push 0x11f761c4 */
  push32((uint32_t)(0x11f761c4u));
  /* 11f71135 push 0x11f76798 */
  push32((uint32_t)(0x11f76798u));
  /* 11f7113a call esi */
  call_ind((uint32_t)(ESI), 0x11f7113cu);
  /* 11f7113c push 0x11f761bc */
  push32((uint32_t)(0x11f761bcu));
  /* 11f71141 push 0x11f76608 */
  push32((uint32_t)(0x11f76608u));
  /* 11f71146 call esi */
  call_ind((uint32_t)(ESI), 0x11f71148u);
  /* 11f71148 push 0x11f761b4 */
  push32((uint32_t)(0x11f761b4u));
  /* 11f7114d push 0x11f76610 */
  push32((uint32_t)(0x11f76610u));
  /* 11f71152 call esi */
  call_ind((uint32_t)(ESI), 0x11f71154u);
  /* 11f71154 push 0x11f761ac */
  push32((uint32_t)(0x11f761acu));
  /* 11f71159 push 0x11f76618 */
  push32((uint32_t)(0x11f76618u));
  /* 11f7115e call esi */
  call_ind((uint32_t)(ESI), 0x11f71160u);
  /* 11f71160 push 0x11f761a4 */
  push32((uint32_t)(0x11f761a4u));
  /* 11f71165 push 0x11f76628 */
  push32((uint32_t)(0x11f76628u));
  /* 11f7116a call esi */
  call_ind((uint32_t)(ESI), 0x11f7116cu);
  /* 11f7116c push 0x11f7619c */
  push32((uint32_t)(0x11f7619cu));
  /* 11f71171 push 0x11f76638 */
  push32((uint32_t)(0x11f76638u));
  /* 11f71176 call esi */
  call_ind((uint32_t)(ESI), 0x11f71178u);
  /* 11f71178 push 0x11f76194 */
  push32((uint32_t)(0x11f76194u));
  /* 11f7117d push 0x11f76640 */
  push32((uint32_t)(0x11f76640u));
  /* 11f71182 call esi */
  call_ind((uint32_t)(ESI), 0x11f71184u);
  /* 11f71184 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71187 push 0x11f7618c */
  push32((uint32_t)(0x11f7618cu));
  /* 11f7118c push 0x11f76600 */
  push32((uint32_t)(0x11f76600u));
  /* 11f71191 call esi */
  call_ind((uint32_t)(ESI), 0x11f71193u);
  /* 11f71193 push 0x11f76184 */
  push32((uint32_t)(0x11f76184u));
  /* 11f71198 push 0x11f76648 */
  push32((uint32_t)(0x11f76648u));
  /* 11f7119d call esi */
  call_ind((uint32_t)(ESI), 0x11f7119fu);
  /* 11f7119f push 0x11f7617c */
  push32((uint32_t)(0x11f7617cu));
  /* 11f711a4 push 0x11f76650 */
  push32((uint32_t)(0x11f76650u));
  /* 11f711a9 call esi */
  call_ind((uint32_t)(ESI), 0x11f711abu);
  /* 11f711ab push 0x11f76174 */
  push32((uint32_t)(0x11f76174u));
  /* 11f711b0 push 0x11f76658 */
  push32((uint32_t)(0x11f76658u));
  /* 11f711b5 call esi */
  call_ind((uint32_t)(ESI), 0x11f711b7u);
  /* 11f711b7 push 0x11f7616c */
  push32((uint32_t)(0x11f7616cu));
  /* 11f711bc push 0x11f76660 */
  push32((uint32_t)(0x11f76660u));
  /* 11f711c1 call esi */
  call_ind((uint32_t)(ESI), 0x11f711c3u);
  /* 11f711c3 push 0x11f76164 */
  push32((uint32_t)(0x11f76164u));
  /* 11f711c8 push 0x11f76668 */
  push32((uint32_t)(0x11f76668u));
  /* 11f711cd call esi */
  call_ind((uint32_t)(ESI), 0x11f711cfu);
  /* 11f711cf push 0x11f7615c */
  push32((uint32_t)(0x11f7615cu));
  /* 11f711d4 push 0x11f76670 */
  push32((uint32_t)(0x11f76670u));
  /* 11f711d9 call esi */
  call_ind((uint32_t)(ESI), 0x11f711dbu);
  /* 11f711db push 0x11f76158 */
  push32((uint32_t)(0x11f76158u));
  /* 11f711e0 push 0x11f76758 */
  push32((uint32_t)(0x11f76758u));
  /* 11f711e5 call esi */
  call_ind((uint32_t)(ESI), 0x11f711e7u);
  /* 11f711e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f711ea push 0x11f76154 */
  push32((uint32_t)(0x11f76154u));
  /* 11f711ef push 0x11f76760 */
  push32((uint32_t)(0x11f76760u));
  /* 11f711f4 call esi */
  call_ind((uint32_t)(ESI), 0x11f711f6u);
  /* 11f711f6 mov esi, dword ptr [0x11f7512c] */
  ESI = (r32((uint32_t)(0x11f7512c)));
  /* 11f711fc push 0x11f76148 */
  push32((uint32_t)(0x11f76148u));
  /* 11f71201 push 0x11f766c8 */
  push32((uint32_t)(0x11f766c8u));
  /* 11f71206 call esi */
  call_ind((uint32_t)(ESI), 0x11f71208u);
  /* 11f71208 push 0x11f7613c */
  push32((uint32_t)(0x11f7613cu));
  /* 11f7120d push 0x11f766d0 */
  push32((uint32_t)(0x11f766d0u));
  /* 11f71212 call esi */
  call_ind((uint32_t)(ESI), 0x11f71214u);
  /* 11f71214 push 0x11f76128 */
  push32((uint32_t)(0x11f76128u));
  /* 11f71219 push 0x11f766d8 */
  push32((uint32_t)(0x11f766d8u));
  /* 11f7121e call esi */
  call_ind((uint32_t)(ESI), 0x11f71220u);
  /* 11f71220 push 0x11f76118 */
  push32((uint32_t)(0x11f76118u));
  /* 11f71225 push 0x11f766e0 */
  push32((uint32_t)(0x11f766e0u));
  /* 11f7122a call esi */
  call_ind((uint32_t)(ESI), 0x11f7122cu);
  /* 11f7122c push 0x11f76104 */
  push32((uint32_t)(0x11f76104u));
  /* 11f71231 push 0x11f766e8 */
  push32((uint32_t)(0x11f766e8u));
  /* 11f71236 call esi */
  call_ind((uint32_t)(ESI), 0x11f71238u);
  /* 11f71238 push 0x11f760f4 */
  push32((uint32_t)(0x11f760f4u));
  /* 11f7123d push 0x11f766f0 */
  push32((uint32_t)(0x11f766f0u));
  /* 11f71242 call esi */
  call_ind((uint32_t)(ESI), 0x11f71244u);
  /* 11f71244 push 0x11f760e0 */
  push32((uint32_t)(0x11f760e0u));
  /* 11f71249 push 0x11f766f8 */
  push32((uint32_t)(0x11f766f8u));
  /* 11f7124e call esi */
  call_ind((uint32_t)(ESI), 0x11f71250u);
  /* 11f71250 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71253 push 0x11f760cc */
  push32((uint32_t)(0x11f760ccu));
  /* 11f71258 push 0x11f76700 */
  push32((uint32_t)(0x11f76700u));
  /* 11f7125d call esi */
  call_ind((uint32_t)(ESI), 0x11f7125fu);
  /* 11f7125f push 0x11f760c0 */
  push32((uint32_t)(0x11f760c0u));
  /* 11f71264 push 0x11f76708 */
  push32((uint32_t)(0x11f76708u));
  /* 11f71269 call esi */
  call_ind((uint32_t)(ESI), 0x11f7126bu);
  /* 11f7126b push 0x11f760b4 */
  push32((uint32_t)(0x11f760b4u));
  /* 11f71270 push 0x11f76720 */
  push32((uint32_t)(0x11f76720u));
  /* 11f71275 call esi */
  call_ind((uint32_t)(ESI), 0x11f71277u);
  /* 11f71277 push 0x11f760a8 */
  push32((uint32_t)(0x11f760a8u));
  /* 11f7127c push 0x11f76728 */
  push32((uint32_t)(0x11f76728u));
  /* 11f71281 call esi */
  call_ind((uint32_t)(ESI), 0x11f71283u);
  /* 11f71283 push 0x11f7609c */
  push32((uint32_t)(0x11f7609cu));
  /* 11f71288 push 0x11f76730 */
  push32((uint32_t)(0x11f76730u));
  /* 11f7128d call esi */
  call_ind((uint32_t)(ESI), 0x11f7128fu);
  /* 11f7128f push 0x11f76088 */
  push32((uint32_t)(0x11f76088u));
  /* 11f71294 push 0x11f76738 */
  push32((uint32_t)(0x11f76738u));
  /* 11f71299 call esi */
  call_ind((uint32_t)(ESI), 0x11f7129bu);
  /* 11f7129b push 0x11f76070 */
  push32((uint32_t)(0x11f76070u));
  /* 11f712a0 push 0x11f766a0 */
  push32((uint32_t)(0x11f766a0u));
  /* 11f712a5 call esi */
  call_ind((uint32_t)(ESI), 0x11f712a7u);
  /* 11f712a7 push 0x11f76058 */
  push32((uint32_t)(0x11f76058u));
  /* 11f712ac push 0x11f76748 */
  push32((uint32_t)(0x11f76748u));
  /* 11f712b1 call esi */
  call_ind((uint32_t)(ESI), 0x11f712b3u);
  /* 11f712b3 mov esi, dword ptr [0x11f75130] */
  ESI = (r32((uint32_t)(0x11f75130)));
  /* 11f712b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f712bc push 0x11f7604c */
  push32((uint32_t)(0x11f7604cu));
  /* 11f712c1 push 0x11f76690 */
  push32((uint32_t)(0x11f76690u));
  /* 11f712c6 call esi */
  call_ind((uint32_t)(ESI), 0x11f712c8u);
  /* 11f712c8 push 0x11f76040 */
  push32((uint32_t)(0x11f76040u));
  /* 11f712cd push 0x11f76688 */
  push32((uint32_t)(0x11f76688u));
  /* 11f712d2 call esi */
  call_ind((uint32_t)(ESI), 0x11f712d4u);
  /* 11f712d4 mov esi, dword ptr [0x11f75128] */
  ESI = (r32((uint32_t)(0x11f75128)));
  /* 11f712da push 0x11f76038 */
  push32((uint32_t)(0x11f76038u));
  /* 11f712df push 1 */
  push32((uint32_t)(0x1u));
  /* 11f712e1 call esi */
  call_ind((uint32_t)(ESI), 0x11f712e3u);
  /* 11f712e3 push 0x11f76030 */
  push32((uint32_t)(0x11f76030u));
  /* 11f712e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f712ea call esi */
  call_ind((uint32_t)(ESI), 0x11f712ecu);
  /* 11f712ec push 0x11f76038 */
  push32((uint32_t)(0x11f76038u));
  /* 11f712f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f712f3 call esi */
  call_ind((uint32_t)(ESI), 0x11f712f5u);
  /* 11f712f5 mov esi, dword ptr [0x11f75138] */
  ESI = (r32((uint32_t)(0x11f75138)));
  /* 11f712fb push 0x11f76630 */
  push32((uint32_t)(0x11f76630u));
  /* 11f71300 call esi */
  call_ind((uint32_t)(ESI), 0x11f71302u);
  /* 11f71302 mov edi, dword ptr [0x11f7513c] */
  EDI = (r32((uint32_t)(0x11f7513c)));
  /* 11f71308 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7130a push 0x11f76630 */
  push32((uint32_t)(0x11f76630u));
  /* 11f7130f call edi */
  call_ind((uint32_t)(EDI), 0x11f71311u);
  /* 11f71311 push 0x11f765f0 */
  push32((uint32_t)(0x11f765f0u));
  /* 11f71316 call esi */
  call_ind((uint32_t)(ESI), 0x11f71318u);
  /* 11f71318 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7131a push 0x11f765f0 */
  push32((uint32_t)(0x11f765f0u));
  /* 11f7131f call edi */
  call_ind((uint32_t)(EDI), 0x11f71321u);
  /* 11f71321 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71324 push 0x11f76740 */
  push32((uint32_t)(0x11f76740u));
  /* 11f71329 call esi */
  call_ind((uint32_t)(ESI), 0x11f7132bu);
  /* 11f7132b push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7132d push 0x11f76740 */
  push32((uint32_t)(0x11f76740u));
  /* 11f71332 call edi */
  call_ind((uint32_t)(EDI), 0x11f71334u);
  /* 11f71334 push 0x11f76620 */
  push32((uint32_t)(0x11f76620u));
  /* 11f71339 call esi */
  call_ind((uint32_t)(ESI), 0x11f7133bu);
  /* 11f7133b push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7133d push 0x11f76620 */
  push32((uint32_t)(0x11f76620u));
  /* 11f71342 call edi */
  call_ind((uint32_t)(EDI), 0x11f71344u);
  /* 11f71344 push 0x11f765f8 */
  push32((uint32_t)(0x11f765f8u));
  /* 11f71349 call esi */
  call_ind((uint32_t)(ESI), 0x11f7134bu);
  /* 11f7134b push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7134d push 0x11f765f8 */
  push32((uint32_t)(0x11f765f8u));
  /* 11f71352 call edi */
  call_ind((uint32_t)(EDI), 0x11f71354u);
  /* 11f71354 push 0x11f76750 */
  push32((uint32_t)(0x11f76750u));
  /* 11f71359 call esi */
  call_ind((uint32_t)(ESI), 0x11f7135bu);
  /* 11f7135b push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7135d push 0x11f76750 */
  push32((uint32_t)(0x11f76750u));
  /* 11f71362 call edi */
  call_ind((uint32_t)(EDI), 0x11f71364u);
  /* 11f71364 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71367 pop edi */
  EDI = (pop32());
  /* 11f71368 pop esi */
  ESI = (pop32());
  /* 11f71369 ret  */
  ESPCHK(0x11f71050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11f71370 (2749 bytes, 929 insns) */
void f_11f71370(void) {
  FTRACE(0x11f71370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71370 push ebx */
  push32((uint32_t)(EBX));
  /* 11f71371 push ebp */
  push32((uint32_t)(EBP));
  /* 11f71372 push esi */
  push32((uint32_t)(ESI));
  /* 11f71373 push edi */
  push32((uint32_t)(EDI));
  /* 11f71374 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71376 call dword ptr [0x11f750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750b4))), 0x11f7137cu);
  /* 11f7137c mov edi, dword ptr [0x11f750b8] */
  EDI = (r32((uint32_t)(0x11f750b8)));
  /* 11f71382 mov ebx, dword ptr [0x11f750b0] */
  EBX = (r32((uint32_t)(0x11f750b0)));
  /* 11f71388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7138b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f7138d je 0x11f716d0 */
  if (C.zf) goto L_11f716d0;
  /* 11f71393 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71395 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71397 call edi */
  call_ind((uint32_t)(EDI), 0x11f71399u);
  /* 11f71399 mov esi, dword ptr [0x11f750c0] */
  ESI = (r32((uint32_t)(0x11f750c0)));
  /* 11f7139f push 0x11f762b4 */
  push32((uint32_t)(0x11f762b4u));
  /* 11f713a4 call esi */
  call_ind((uint32_t)(ESI), 0x11f713a6u);
  /* 11f713a6 push 0x11f762ac */
  push32((uint32_t)(0x11f762acu));
  /* 11f713ab call esi */
  call_ind((uint32_t)(ESI), 0x11f713adu);
  /* 11f713ad mov esi, dword ptr [0x11f750c4] */
  ESI = (r32((uint32_t)(0x11f750c4)));
  /* 11f713b3 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11f713b5 call esi */
  call_ind((uint32_t)(ESI), 0x11f713b7u);
  /* 11f713b7 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11f713b9 call esi */
  call_ind((uint32_t)(ESI), 0x11f713bbu);
  /* 11f713bb call 0x11f71000 */
  push32(0x11f713c0u); f_11f71000();
  /* 11f713c0 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11f713c3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f713c6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f713c8 push eax */
  push32((uint32_t)(EAX));
  /* 11f713c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f713cb call ebx */
  call_ind((uint32_t)(EBX), 0x11f713cdu);
  /* 11f713cd call 0x11f71000 */
  push32(0x11f713d2u); f_11f71000();
  /* 11f713d2 add eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f713d7 push eax */
  push32((uint32_t)(EAX));
  /* 11f713d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f713da call ebx */
  call_ind((uint32_t)(EBX), 0x11f713dcu);
  /* 11f713dc call 0x11f71000 */
  push32(0x11f713e1u); f_11f71000();
  /* 11f713e1 add eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f713e6 push eax */
  push32((uint32_t)(EAX));
  /* 11f713e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f713e9 call ebx */
  call_ind((uint32_t)(EBX), 0x11f713ebu);
  /* 11f713eb call 0x11f71000 */
  push32(0x11f713f0u); f_11f71000();
  /* 11f713f0 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11f713f3 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f713f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f713f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f713f9 call ebx */
  call_ind((uint32_t)(EBX), 0x11f713fbu);
  /* 11f713fb call 0x11f71000 */
  push32(0x11f71400u); f_11f71000();
  /* 11f71400 lea edx, [eax + eax*2] */
  EDX = ((uint32_t)(EAX + EAX*2));
  /* 11f71403 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11f71406 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f71408 push edx */
  push32((uint32_t)(EDX));
  /* 11f71409 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f7140b call ebx */
  call_ind((uint32_t)(EBX), 0x11f7140du);
  /* 11f7140d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71410 call 0x11f71000 */
  push32(0x11f71415u); f_11f71000();
  /* 11f71415 lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 11f7141c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7141e lea edx, [eax + ecx*4] */
  EDX = ((uint32_t)(EAX + ECX*4));
  /* 11f71421 push edx */
  push32((uint32_t)(EDX));
  /* 11f71422 push 6 */
  push32((uint32_t)(0x6u));
  /* 11f71424 call ebx */
  call_ind((uint32_t)(EBX), 0x11f71426u);
  /* 11f71426 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11f7142b push 0xa */
  push32((uint32_t)(0xau));
  /* 11f7142d call ebx */
  call_ind((uint32_t)(EBX), 0x11f7142fu);
  /* 11f7142f mov esi, dword ptr [0x11f750bc] */
  ESI = (r32((uint32_t)(0x11f750bc)));
  /* 11f71435 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11f71437 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71439 call esi */
  call_ind((uint32_t)(ESI), 0x11f7143bu);
  /* 11f7143b push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11f7143d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7143f call esi */
  call_ind((uint32_t)(ESI), 0x11f71441u);
  /* 11f71441 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f71443 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71445 call esi */
  call_ind((uint32_t)(ESI), 0x11f71447u);
  /* 11f71447 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f71449 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f7144b call esi */
  call_ind((uint32_t)(ESI), 0x11f7144du);
  /* 11f7144d mov esi, dword ptr [0x11f750cc] */
  ESI = (r32((uint32_t)(0x11f750cc)));
  /* 11f71453 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f71458 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f7145a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7145c call esi */
  call_ind((uint32_t)(ESI), 0x11f7145eu);
  /* 11f7145e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f71463 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71465 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71467 call esi */
  call_ind((uint32_t)(ESI), 0x11f71469u);
  /* 11f71469 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7146c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f71471 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71473 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71475 call esi */
  call_ind((uint32_t)(ESI), 0x11f71477u);
  /* 11f71477 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11f7147c push 5 */
  push32((uint32_t)(0x5u));
  /* 11f7147e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71480 call esi */
  call_ind((uint32_t)(ESI), 0x11f71482u);
  /* 11f71482 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f71487 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71489 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7148b call esi */
  call_ind((uint32_t)(ESI), 0x11f7148du);
  /* 11f7148d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f71492 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71494 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71496 call esi */
  call_ind((uint32_t)(ESI), 0x11f71498u);
  /* 11f71498 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7149a call dword ptr [0x11f75134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75134))), 0x11f714a0u);
  /* 11f714a0 mov ebp, dword ptr [0x11f750d0] */
  EBP = (r32((uint32_t)(0x11f750d0)));
  /* 11f714a6 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f714a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f714ab jne 0x11f71506 */
  if (!C.zf) goto L_11f71506;
  /* 11f714ad push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f714b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f714b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714b6 call esi */
  call_ind((uint32_t)(ESI), 0x11f714b8u);
  /* 11f714b8 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f714bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11f714bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714c1 call esi */
  call_ind((uint32_t)(ESI), 0x11f714c3u);
  /* 11f714c3 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f714c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f714ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714cc call esi */
  call_ind((uint32_t)(ESI), 0x11f714ceu);
  /* 11f714ce push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f714d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f714d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714d7 call esi */
  call_ind((uint32_t)(ESI), 0x11f714d9u);
  /* 11f714d9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f714de push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714e2 call esi */
  call_ind((uint32_t)(ESI), 0x11f714e4u);
  /* 11f714e4 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11f714e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f714eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714ed call esi */
  call_ind((uint32_t)(ESI), 0x11f714efu);
  /* 11f714ef add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f714f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f714f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f714f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f714f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f714fa push 0x11f762a0 */
  push32((uint32_t)(0x11f762a0u));
  /* 11f714ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71501 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71503u);
  /* 11f71503 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71506:;
  /* 11f71506 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71508 call dword ptr [0x11f75134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75134))), 0x11f7150eu);
  /* 11f7150e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71511 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71514 jne 0x11f7156f */
  if (!C.zf) goto L_11f7156f;
  /* 11f71516 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f7151b push 3 */
  push32((uint32_t)(0x3u));
  /* 11f7151d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7151f call esi */
  call_ind((uint32_t)(ESI), 0x11f71521u);
  /* 11f71521 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f71526 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71528 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7152a call esi */
  call_ind((uint32_t)(ESI), 0x11f7152cu);
  /* 11f7152c push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f71531 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71535 call esi */
  call_ind((uint32_t)(ESI), 0x11f71537u);
  /* 11f71537 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f7153c push 5 */
  push32((uint32_t)(0x5u));
  /* 11f7153e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71540 call esi */
  call_ind((uint32_t)(ESI), 0x11f71542u);
  /* 11f71542 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f71547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71549 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7154b call esi */
  call_ind((uint32_t)(ESI), 0x11f7154du);
  /* 11f7154d push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11f71552 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71556 call esi */
  call_ind((uint32_t)(ESI), 0x11f71558u);
  /* 11f71558 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7155b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f7155d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7155f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71563 push 0x11f762a0 */
  push32((uint32_t)(0x11f762a0u));
  /* 11f71568 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7156a call ebp */
  call_ind((uint32_t)(EBP), 0x11f7156cu);
  /* 11f7156c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f7156f:;
  /* 11f7156f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71571 call dword ptr [0x11f75134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75134))), 0x11f71577u);
  /* 11f71577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7157a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7157d jne 0x11f715d8 */
  if (!C.zf) goto L_11f715d8;
  /* 11f7157f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f71584 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f71586 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71588 call esi */
  call_ind((uint32_t)(ESI), 0x11f7158au);
  /* 11f7158a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f7158f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71593 call esi */
  call_ind((uint32_t)(ESI), 0x11f71595u);
  /* 11f71595 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f7159a push 4 */
  push32((uint32_t)(0x4u));
  /* 11f7159c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7159e call esi */
  call_ind((uint32_t)(ESI), 0x11f715a0u);
  /* 11f715a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f715a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f715a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715a9 call esi */
  call_ind((uint32_t)(ESI), 0x11f715abu);
  /* 11f715ab push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f715b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715b4 call esi */
  call_ind((uint32_t)(ESI), 0x11f715b6u);
  /* 11f715b6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11f715bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f715bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715bf call esi */
  call_ind((uint32_t)(ESI), 0x11f715c1u);
  /* 11f715c1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f715c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f715c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f715c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f715ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715cc push 0x11f762a0 */
  push32((uint32_t)(0x11f762a0u));
  /* 11f715d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f715d3 call ebp */
  call_ind((uint32_t)(EBP), 0x11f715d5u);
  /* 11f715d5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f715d8:;
  /* 11f715d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715da call dword ptr [0x11f75134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75134))), 0x11f715e0u);
  /* 11f715e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f715e3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f715e6 jne 0x11f71640 */
  if (!C.zf) goto L_11f71640;
  /* 11f715e8 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f715ed push eax */
  push32((uint32_t)(EAX));
  /* 11f715ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715f0 call esi */
  call_ind((uint32_t)(ESI), 0x11f715f2u);
  /* 11f715f2 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f715f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f715f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f715fb call esi */
  call_ind((uint32_t)(ESI), 0x11f715fdu);
  /* 11f715fd push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f71602 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71604 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71606 call esi */
  call_ind((uint32_t)(ESI), 0x11f71608u);
  /* 11f71608 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f7160d push 5 */
  push32((uint32_t)(0x5u));
  /* 11f7160f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71611 call esi */
  call_ind((uint32_t)(ESI), 0x11f71613u);
  /* 11f71613 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f71618 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7161a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7161c call esi */
  call_ind((uint32_t)(ESI), 0x11f7161eu);
  /* 11f7161e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11f71623 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71627 call esi */
  call_ind((uint32_t)(ESI), 0x11f71629u);
  /* 11f71629 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7162c push 3 */
  push32((uint32_t)(0x3u));
  /* 11f7162e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71630 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71634 push 0x11f762a0 */
  push32((uint32_t)(0x11f762a0u));
  /* 11f71639 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7163b call ebp */
  call_ind((uint32_t)(EBP), 0x11f7163du);
  /* 11f7163d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71640:;
  /* 11f71640 mov esi, dword ptr [0x11f750c8] */
  ESI = (r32((uint32_t)(0x11f750c8)));
  /* 11f71646 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71648 push 0x11f766c8 */
  push32((uint32_t)(0x11f766c8u));
  /* 11f7164d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7164f call esi */
  call_ind((uint32_t)(ESI), 0x11f71651u);
  /* 11f71651 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71653 push 0x11f766d0 */
  push32((uint32_t)(0x11f766d0u));
  /* 11f71658 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7165a call esi */
  call_ind((uint32_t)(ESI), 0x11f7165cu);
  /* 11f7165c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7165e push 0x11f766d8 */
  push32((uint32_t)(0x11f766d8u));
  /* 11f71663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71665 call esi */
  call_ind((uint32_t)(ESI), 0x11f71667u);
  /* 11f71667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71669 push 0x11f766e0 */
  push32((uint32_t)(0x11f766e0u));
  /* 11f7166e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71670 call esi */
  call_ind((uint32_t)(ESI), 0x11f71672u);
  /* 11f71672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71674 push 0x11f766e8 */
  push32((uint32_t)(0x11f766e8u));
  /* 11f71679 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7167b call esi */
  call_ind((uint32_t)(ESI), 0x11f7167du);
  /* 11f7167d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7167f push 0x11f766f0 */
  push32((uint32_t)(0x11f766f0u));
  /* 11f71684 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71686 call esi */
  call_ind((uint32_t)(ESI), 0x11f71688u);
  /* 11f71688 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7168b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7168d push 0x11f766f8 */
  push32((uint32_t)(0x11f766f8u));
  /* 11f71692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71694 call esi */
  call_ind((uint32_t)(ESI), 0x11f71696u);
  /* 11f71696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71698 push 0x11f76700 */
  push32((uint32_t)(0x11f76700u));
  /* 11f7169d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7169f call esi */
  call_ind((uint32_t)(ESI), 0x11f716a1u);
  /* 11f716a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716a3 push 0x11f76708 */
  push32((uint32_t)(0x11f76708u));
  /* 11f716a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716aa call esi */
  call_ind((uint32_t)(ESI), 0x11f716acu);
  /* 11f716ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716ae push 0x11f76720 */
  push32((uint32_t)(0x11f76720u));
  /* 11f716b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716b5 call esi */
  call_ind((uint32_t)(ESI), 0x11f716b7u);
  /* 11f716b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716b9 push 0x11f76728 */
  push32((uint32_t)(0x11f76728u));
  /* 11f716be push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716c0 call esi */
  call_ind((uint32_t)(ESI), 0x11f716c2u);
  /* 11f716c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716c4 push 0x11f76730 */
  push32((uint32_t)(0x11f76730u));
  /* 11f716c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716cb call esi */
  call_ind((uint32_t)(ESI), 0x11f716cdu);
  /* 11f716cd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f716d0:;
  /* 11f716d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f716d2 call dword ptr [0x11f750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750b4))), 0x11f716d8u);
  /* 11f716d8 mov ebp, dword ptr [0x11f750d8] */
  EBP = (r32((uint32_t)(0x11f750d8)));
  /* 11f716de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f716e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f716e3 je 0x11f717af */
  if (C.zf) goto L_11f717af;
  /* 11f716e9 mov esi, dword ptr [0x11f750dc] */
  ESI = (r32((uint32_t)(0x11f750dc)));
  /* 11f716ef push 3 */
  push32((uint32_t)(0x3u));
  /* 11f716f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f716f3 call esi */
  call_ind((uint32_t)(ESI), 0x11f716f5u);
  /* 11f716f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f716f8 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f716fd jle 0x11f717af */
  if ((C.zf||C.sf!=C.of)) goto L_11f717af;
  /* 11f71703 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71707 call esi */
  call_ind((uint32_t)(ESI), 0x11f71709u);
  /* 11f71709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7170c cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71711 jle 0x11f717af */
  if ((C.zf||C.sf!=C.of)) goto L_11f717af;
  /* 11f71717 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f71719 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7171b call esi */
  call_ind((uint32_t)(ESI), 0x11f7171du);
  /* 11f7171d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71720 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71725 jle 0x11f717af */
  if ((C.zf||C.sf!=C.of)) goto L_11f717af;
  /* 11f7172b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7172d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f7172f call edi */
  call_ind((uint32_t)(EDI), 0x11f71731u);
  /* 11f71731 push 0x11f76298 */
  push32((uint32_t)(0x11f76298u));
  /* 11f71736 call dword ptr [0x11f750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c0))), 0x11f7173cu);
  /* 11f7173c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7173e push 0x11f76680 */
  push32((uint32_t)(0x11f76680u));
  /* 11f71743 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71745u);
  /* 11f71745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71747 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71749 call dword ptr [0x11f750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750d4))), 0x11f7174fu);
  /* 11f7174f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71751 push 0x11f76698 */
  push32((uint32_t)(0x11f76698u));
  /* 11f71756 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71758u);
  /* 11f71758 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7175a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f7175c push 0x11f76678 */
  push32((uint32_t)(0x11f76678u));
  /* 11f71761 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71763 call dword ptr [0x11f750e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750e4))), 0x11f71769u);
  /* 11f71769 mov esi, dword ptr [0x11f750e8] */
  ESI = (r32((uint32_t)(0x11f750e8)));
  /* 11f7176f push 0xfffe7960 */
  push32((uint32_t)(0xfffe7960u));
  /* 11f71774 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f71776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71778 call esi */
  call_ind((uint32_t)(ESI), 0x11f7177au);
  /* 11f7177a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7177d push 0xffffb1e0 */
  push32((uint32_t)(0xffffb1e0u));
  /* 11f71782 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71786 call esi */
  call_ind((uint32_t)(ESI), 0x11f71788u);
  /* 11f71788 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 11f7178d push 5 */
  push32((uint32_t)(0x5u));
  /* 11f7178f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71791 call esi */
  call_ind((uint32_t)(ESI), 0x11f71793u);
  /* 11f71793 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11f71795 call dword ptr [0x11f750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750e0))), 0x11f7179bu);
  /* 11f7179b push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11f7179d call dword ptr [0x11f750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c4))), 0x11f717a3u);
  /* 11f717a3 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11f717a8 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f717aa call ebx */
  call_ind((uint32_t)(EBX), 0x11f717acu);
  /* 11f717ac add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f717af:;
  /* 11f717af mov esi, dword ptr [0x11f750b4] */
  ESI = (r32((uint32_t)(0x11f750b4)));
  /* 11f717b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f717b7 call esi */
  call_ind((uint32_t)(ESI), 0x11f717b9u);
  /* 11f717b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f717bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f717be je 0x11f71807 */
  if (C.zf) goto L_11f71807;
  /* 11f717c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f717c2 call esi */
  call_ind((uint32_t)(ESI), 0x11f717c4u);
  /* 11f717c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f717c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f717c9 jne 0x11f71807 */
  if (!C.zf) goto L_11f71807;
  /* 11f717cb push 6 */
  push32((uint32_t)(0x6u));
  /* 11f717cd call esi */
  call_ind((uint32_t)(ESI), 0x11f717cfu);
  /* 11f717cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f717d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f717d4 jne 0x11f71807 */
  if (!C.zf) goto L_11f71807;
  /* 11f717d6 push 0x11f76680 */
  push32((uint32_t)(0x11f76680u));
  /* 11f717db push 0x11f76678 */
  push32((uint32_t)(0x11f76678u));
  /* 11f717e0 call dword ptr [0x11f750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750f0))), 0x11f717e6u);
  /* 11f717e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f717e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f717eb je 0x11f71807 */
  if (C.zf) goto L_11f71807;
  /* 11f717ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11f717ef push 3 */
  push32((uint32_t)(0x3u));
  /* 11f717f1 call edi */
  call_ind((uint32_t)(EDI), 0x11f717f3u);
  /* 11f717f3 push 0x11f76290 */
  push32((uint32_t)(0x11f76290u));
  /* 11f717f8 call dword ptr [0x11f750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c0))), 0x11f717feu);
  /* 11f717fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71801 call dword ptr [0x11f750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750f4))), 0x11f71807u);
L_11f71807:;
  /* 11f71807 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71809 call esi */
  call_ind((uint32_t)(ESI), 0x11f7180bu);
  /* 11f7180b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7180e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71810 je 0x11f7183b */
  if (C.zf) goto L_11f7183b;
  /* 11f71812 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71814 call dword ptr [0x11f750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750ec))), 0x11f7181au);
  /* 11f7181a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7181d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f7181f je 0x11f7183b */
  if (C.zf) goto L_11f7183b;
  /* 11f71821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71823 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71825 call edi */
  call_ind((uint32_t)(EDI), 0x11f71827u);
  /* 11f71827 push 0x11f76288 */
  push32((uint32_t)(0x11f76288u));
  /* 11f7182c call dword ptr [0x11f750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c0))), 0x11f71832u);
  /* 11f71832 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71835 call dword ptr [0x11f750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750fc))), 0x11f7183bu);
L_11f7183b:;
  /* 11f7183b push 5 */
  push32((uint32_t)(0x5u));
  /* 11f7183d call esi */
  call_ind((uint32_t)(ESI), 0x11f7183fu);
  /* 11f7183f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71842 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71844 je 0x11f7186f */
  if (C.zf) goto L_11f7186f;
  /* 11f71846 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71848 call dword ptr [0x11f75100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75100))), 0x11f7184eu);
  /* 11f7184e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71851 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71853 je 0x11f7186f */
  if (C.zf) goto L_11f7186f;
  /* 11f71855 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71857 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f71859 call edi */
  call_ind((uint32_t)(EDI), 0x11f7185bu);
  /* 11f7185b push 0x11f76280 */
  push32((uint32_t)(0x11f76280u));
  /* 11f71860 call dword ptr [0x11f750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c0))), 0x11f71866u);
  /* 11f71866 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71869 call dword ptr [0x11f750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750fc))), 0x11f7186fu);
L_11f7186f:;
  /* 11f7186f push 6 */
  push32((uint32_t)(0x6u));
  /* 11f71871 call esi */
  call_ind((uint32_t)(ESI), 0x11f71873u);
  /* 11f71873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71876 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71878 je 0x11f718a5 */
  if (C.zf) goto L_11f718a5;
  /* 11f7187a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f7187c call esi */
  call_ind((uint32_t)(ESI), 0x11f7187eu);
  /* 11f7187e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71881 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71883 jne 0x11f718a5 */
  if (!C.zf) goto L_11f718a5;
  /* 11f71885 push 0x11f76680 */
  push32((uint32_t)(0x11f76680u));
  /* 11f7188a push 0x11f76768 */
  push32((uint32_t)(0x11f76768u));
  /* 11f7188f call dword ptr [0x11f750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750f0))), 0x11f71895u);
  /* 11f71895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7189a je 0x11f718a5 */
  if (C.zf) goto L_11f718a5;
  /* 11f7189c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7189e push 6 */
  push32((uint32_t)(0x6u));
  /* 11f718a0 call edi */
  call_ind((uint32_t)(EDI), 0x11f718a2u);
  /* 11f718a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f718a5:;
  /* 11f718a5 push 7 */
  push32((uint32_t)(0x7u));
  /* 11f718a7 call esi */
  call_ind((uint32_t)(ESI), 0x11f718a9u);
  /* 11f718a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f718ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f718ae je 0x11f71947 */
  if (C.zf) goto L_11f71947;
  /* 11f718b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f718b6 call esi */
  call_ind((uint32_t)(ESI), 0x11f718b8u);
  /* 11f718b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f718bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f718bd jne 0x11f71947 */
  if (!C.zf) goto L_11f71947;
  /* 11f718c3 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f718c5 call dword ptr [0x11f75100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75100))), 0x11f718cbu);
  /* 11f718cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f718ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f718d0 je 0x11f71947 */
  if (C.zf) goto L_11f71947;
  /* 11f718d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f718d4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11f718d6 call edi */
  call_ind((uint32_t)(EDI), 0x11f718d8u);
  /* 11f718d8 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11f718da call dword ptr [0x11f750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750e0))), 0x11f718e0u);
  /* 11f718e0 push 0x11f76278 */
  push32((uint32_t)(0x11f76278u));
  /* 11f718e5 call dword ptr [0x11f750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c0))), 0x11f718ebu);
  /* 11f718eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11f718ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11f718ef push 0x11f76678 */
  push32((uint32_t)(0x11f76678u));
  /* 11f718f4 call dword ptr [0x11f750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750f8))), 0x11f718fau);
  /* 11f718fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11f718fc push 0x11f766b8 */
  push32((uint32_t)(0x11f766b8u));
  /* 11f71901 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71903u);
  /* 11f71903 mov esi, dword ptr [0x11f75108] */
  ESI = (r32((uint32_t)(0x11f75108)));
  /* 11f71909 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f7190e push 0x11f76758 */
  push32((uint32_t)(0x11f76758u));
  /* 11f71913 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71915 call esi */
  call_ind((uint32_t)(ESI), 0x11f71917u);
  /* 11f71917 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71919 call dword ptr [0x11f7510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7510c))), 0x11f7191fu);
  /* 11f7191f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71921 push 0x11f766c0 */
  push32((uint32_t)(0x11f766c0u));
  /* 11f71926 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71928u);
  /* 11f71928 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11f7192a push 0x11f76760 */
  push32((uint32_t)(0x11f76760u));
  /* 11f7192f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71931 call esi */
  call_ind((uint32_t)(ESI), 0x11f71933u);
  /* 11f71933 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71936 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71938 call dword ptr [0x11f7510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7510c))), 0x11f7193eu);
  /* 11f7193e mov esi, dword ptr [0x11f750b4] */
  ESI = (r32((uint32_t)(0x11f750b4)));
  /* 11f71944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71947:;
  /* 11f71947 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f71949 call esi */
  call_ind((uint32_t)(ESI), 0x11f7194bu);
  /* 11f7194b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7194e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71950 je 0x11f7197d */
  if (C.zf) goto L_11f7197d;
  /* 11f71952 push 0x11f76680 */
  push32((uint32_t)(0x11f76680u));
  /* 11f71957 call dword ptr [0x11f75104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75104))), 0x11f7195du);
  /* 11f7195d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71962 jne 0x11f7197d */
  if (!C.zf) goto L_11f7197d;
  /* 11f71964 push eax */
  push32((uint32_t)(EAX));
  /* 11f71965 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f71967 call edi */
  call_ind((uint32_t)(EDI), 0x11f71969u);
  /* 11f71969 push 0x11f76270 */
  push32((uint32_t)(0x11f76270u));
  /* 11f7196e call dword ptr [0x11f750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750c0))), 0x11f71974u);
  /* 11f71974 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71977 call dword ptr [0x11f750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750fc))), 0x11f7197du);
L_11f7197d:;
  /* 11f7197d push 9 */
  push32((uint32_t)(0x9u));
  /* 11f7197f call esi */
  call_ind((uint32_t)(ESI), 0x11f71981u);
  /* 11f71981 mov esi, dword ptr [0x11f75114] */
  ESI = (r32((uint32_t)(0x11f75114)));
  /* 11f71987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7198a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f7198c je 0x11f719fe */
  if (C.zf) goto L_11f719fe;
  /* 11f7198e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71990 push 0x11f76770 */
  push32((uint32_t)(0x11f76770u));
  /* 11f71995 call dword ptr [0x11f75118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75118))), 0x11f7199bu);
  /* 11f7199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7199e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f719a0 je 0x11f719fe */
  if (C.zf) goto L_11f719fe;
  /* 11f719a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f719a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f719a6 call edi */
  call_ind((uint32_t)(EDI), 0x11f719a8u);
  /* 11f719a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f719aa push 0x11f76710 */
  push32((uint32_t)(0x11f76710u));
  /* 11f719af call ebp */
  call_ind((uint32_t)(EBP), 0x11f719b1u);
  /* 11f719b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f719b3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f719b5 push 0x11f76770 */
  push32((uint32_t)(0x11f76770u));
  /* 11f719ba push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719bc call esi */
  call_ind((uint32_t)(ESI), 0x11f719beu);
  /* 11f719be push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719c0 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f719c5 push 0x11f76780 */
  push32((uint32_t)(0x11f76780u));
  /* 11f719ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719cc call esi */
  call_ind((uint32_t)(ESI), 0x11f719ceu);
  /* 11f719ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719d0 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f719d5 push 0x11f76788 */
  push32((uint32_t)(0x11f76788u));
  /* 11f719da push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719dc call esi */
  call_ind((uint32_t)(ESI), 0x11f719deu);
  /* 11f719de add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f719e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f719e5 push 0x11f76790 */
  push32((uint32_t)(0x11f76790u));
  /* 11f719ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719ec call esi */
  call_ind((uint32_t)(ESI), 0x11f719eeu);
  /* 11f719ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719f0 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11f719f2 push 0x11f76798 */
  push32((uint32_t)(0x11f76798u));
  /* 11f719f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f719f9 call esi */
  call_ind((uint32_t)(ESI), 0x11f719fbu);
  /* 11f719fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f719fe:;
  /* 11f719fe push 0xa */
  push32((uint32_t)(0xau));
  /* 11f71a00 call dword ptr [0x11f750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750b4))), 0x11f71a06u);
  /* 11f71a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71a09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71a0b je 0x11f71a7d */
  if (C.zf) goto L_11f71a7d;
  /* 11f71a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71a0f push 0x11f76778 */
  push32((uint32_t)(0x11f76778u));
  /* 11f71a14 call dword ptr [0x11f75118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75118))), 0x11f71a1au);
  /* 11f71a1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71a1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71a1f je 0x11f71a7d */
  if (C.zf) goto L_11f71a7d;
  /* 11f71a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71a23 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f71a25 call edi */
  call_ind((uint32_t)(EDI), 0x11f71a27u);
  /* 11f71a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71a29 push 0x11f76718 */
  push32((uint32_t)(0x11f76718u));
  /* 11f71a2e call ebp */
  call_ind((uint32_t)(EBP), 0x11f71a30u);
  /* 11f71a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71a34 push 0x11f76778 */
  push32((uint32_t)(0x11f76778u));
  /* 11f71a39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a3b call esi */
  call_ind((uint32_t)(ESI), 0x11f71a3du);
  /* 11f71a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a3f push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71a44 push 0x11f76780 */
  push32((uint32_t)(0x11f76780u));
  /* 11f71a49 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a4b call esi */
  call_ind((uint32_t)(ESI), 0x11f71a4du);
  /* 11f71a4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a4f push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71a54 push 0x11f76788 */
  push32((uint32_t)(0x11f76788u));
  /* 11f71a59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a5b call esi */
  call_ind((uint32_t)(ESI), 0x11f71a5du);
  /* 11f71a5d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71a64 push 0x11f76790 */
  push32((uint32_t)(0x11f76790u));
  /* 11f71a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a6b call esi */
  call_ind((uint32_t)(ESI), 0x11f71a6du);
  /* 11f71a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a6f push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11f71a71 push 0x11f76798 */
  push32((uint32_t)(0x11f76798u));
  /* 11f71a76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a78 call esi */
  call_ind((uint32_t)(ESI), 0x11f71a7au);
  /* 11f71a7a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71a7d:;
  /* 11f71a7d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f71a7f call dword ptr [0x11f750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750b4))), 0x11f71a85u);
  /* 11f71a85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71a88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71a8a je 0x11f71b6e */
  if (C.zf) goto L_11f71b6e;
  /* 11f71a90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71a92 call dword ptr [0x11f75100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75100))), 0x11f71a98u);
  /* 11f71a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71a9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71a9d je 0x11f71b6e */
  if (C.zf) goto L_11f71b6e;
  /* 11f71aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71aa5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f71aa7 call edi */
  call_ind((uint32_t)(EDI), 0x11f71aa9u);
  /* 11f71aa9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71aab push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f71aad call edi */
  call_ind((uint32_t)(EDI), 0x11f71aafu);
  /* 11f71aaf call 0x11f71000 */
  push32(0x11f71ab4u); f_11f71000();
  /* 11f71ab4 add eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71ab9 push eax */
  push32((uint32_t)(EAX));
  /* 11f71aba push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71abc call ebx */
  call_ind((uint32_t)(EBX), 0x11f71abeu);
  /* 11f71abe push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f71ac3 push 0x11f767a8 */
  push32((uint32_t)(0x11f767a8u));
  /* 11f71ac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71aca push 0x11f76738 */
  push32((uint32_t)(0x11f76738u));
  /* 11f71acf push 0x11f76690 */
  push32((uint32_t)(0x11f76690u));
  /* 11f71ad4 push 0x11f76630 */
  push32((uint32_t)(0x11f76630u));
  /* 11f71ad9 call dword ptr [0x11f75110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75110))), 0x11f71adfu);
  /* 11f71adf push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71ae1 push 0x11f76630 */
  push32((uint32_t)(0x11f76630u));
  /* 11f71ae6 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71ae8u);
  /* 11f71ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71aea push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f71aef push 0x11f76648 */
  push32((uint32_t)(0x11f76648u));
  /* 11f71af4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71af6 call esi */
  call_ind((uint32_t)(ESI), 0x11f71af8u);
  /* 11f71af8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71afb push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71afd push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71b02 push 0x11f76650 */
  push32((uint32_t)(0x11f76650u));
  /* 11f71b07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b09 call esi */
  call_ind((uint32_t)(ESI), 0x11f71b0bu);
  /* 11f71b0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b0d push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71b12 push 0x11f76658 */
  push32((uint32_t)(0x11f76658u));
  /* 11f71b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b19 call esi */
  call_ind((uint32_t)(ESI), 0x11f71b1bu);
  /* 11f71b1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b1d push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71b22 push 0x11f76660 */
  push32((uint32_t)(0x11f76660u));
  /* 11f71b27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b29 call esi */
  call_ind((uint32_t)(ESI), 0x11f71b2bu);
  /* 11f71b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b2d push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71b32 push 0x11f76668 */
  push32((uint32_t)(0x11f76668u));
  /* 11f71b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b39 call esi */
  call_ind((uint32_t)(ESI), 0x11f71b3bu);
  /* 11f71b3b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71b3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b40 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f71b45 push 0x11f76670 */
  push32((uint32_t)(0x11f76670u));
  /* 11f71b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b4c call esi */
  call_ind((uint32_t)(ESI), 0x11f71b4eu);
  /* 11f71b4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b50 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11f71b52 push 0x11f76600 */
  push32((uint32_t)(0x11f76600u));
  /* 11f71b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b59 call esi */
  call_ind((uint32_t)(ESI), 0x11f71b5bu);
  /* 11f71b5b push 0x11f76620 */
  push32((uint32_t)(0x11f76620u));
  /* 11f71b60 push 0x11f76630 */
  push32((uint32_t)(0x11f76630u));
  /* 11f71b65 call dword ptr [0x11f75120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75120))), 0x11f71b6bu);
  /* 11f71b6b add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71b6e:;
  /* 11f71b6e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f71b70 call dword ptr [0x11f750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750b4))), 0x11f71b76u);
  /* 11f71b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71b79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71b7b je 0x11f71b9b */
  if (C.zf) goto L_11f71b9b;
  /* 11f71b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71b7f call dword ptr [0x11f75100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75100))), 0x11f71b85u);
  /* 11f71b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71b88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71b8a je 0x11f71b9b */
  if (C.zf) goto L_11f71b9b;
  /* 11f71b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71b8e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f71b90 call edi */
  call_ind((uint32_t)(EDI), 0x11f71b92u);
  /* 11f71b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71b94 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f71b96 call edi */
  call_ind((uint32_t)(EDI), 0x11f71b98u);
  /* 11f71b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71b9b:;
  /* 11f71b9b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f71b9d call dword ptr [0x11f750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750b4))), 0x11f71ba3u);
  /* 11f71ba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71ba6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71ba8 je 0x11f71cbf */
  if (C.zf) goto L_11f71cbf;
  /* 11f71bae push 3 */
  push32((uint32_t)(0x3u));
  /* 11f71bb0 call dword ptr [0x11f75100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75100))), 0x11f71bb6u);
  /* 11f71bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71bb9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71bbb je 0x11f71cbf */
  if (C.zf) goto L_11f71cbf;
  /* 11f71bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71bc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f71bc5 call edi */
  call_ind((uint32_t)(EDI), 0x11f71bc7u);
  /* 11f71bc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71bc9 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f71bcb call edi */
  call_ind((uint32_t)(EDI), 0x11f71bcdu);
  /* 11f71bcd call 0x11f71000 */
  push32(0x11f71bd2u); f_11f71000();
  /* 11f71bd2 add eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11f71bd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f71bda call ebx */
  call_ind((uint32_t)(EBX), 0x11f71bdcu);
  /* 11f71bdc mov ebx, dword ptr [0x11f75110] */
  EBX = (r32((uint32_t)(0x11f75110)));
  /* 11f71be2 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f71be7 push 0x11f767a0 */
  push32((uint32_t)(0x11f767a0u));
  /* 11f71bec push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71bee push 0x11f766a0 */
  push32((uint32_t)(0x11f766a0u));
  /* 11f71bf3 push 0x11f76688 */
  push32((uint32_t)(0x11f76688u));
  /* 11f71bf8 push 0x11f765f0 */
  push32((uint32_t)(0x11f765f0u));
  /* 11f71bfd call ebx */
  call_ind((uint32_t)(EBX), 0x11f71bffu);
  /* 11f71bff push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11f71c04 push 0x11f767a0 */
  push32((uint32_t)(0x11f767a0u));
  /* 11f71c09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c0b push 0x11f76748 */
  push32((uint32_t)(0x11f76748u));
  /* 11f71c10 push 0x11f76688 */
  push32((uint32_t)(0x11f76688u));
  /* 11f71c15 push 0x11f76740 */
  push32((uint32_t)(0x11f76740u));
  /* 11f71c1a call ebx */
  call_ind((uint32_t)(EBX), 0x11f71c1cu);
  /* 11f71c1c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71c21 push 0x11f765f0 */
  push32((uint32_t)(0x11f765f0u));
  /* 11f71c26 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71c28u);
  /* 11f71c28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71c2a push 0x11f76740 */
  push32((uint32_t)(0x11f76740u));
  /* 11f71c2f call ebp */
  call_ind((uint32_t)(EBP), 0x11f71c31u);
  /* 11f71c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71c33 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71c38 push 0x11f76608 */
  push32((uint32_t)(0x11f76608u));
  /* 11f71c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c3f call esi */
  call_ind((uint32_t)(ESI), 0x11f71c41u);
  /* 11f71c41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c43 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f71c48 push 0x11f76610 */
  push32((uint32_t)(0x11f76610u));
  /* 11f71c4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c4f call esi */
  call_ind((uint32_t)(ESI), 0x11f71c51u);
  /* 11f71c51 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71c55 push 0x11f76618 */
  push32((uint32_t)(0x11f76618u));
  /* 11f71c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c5c call esi */
  call_ind((uint32_t)(ESI), 0x11f71c5eu);
  /* 11f71c5e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c63 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f71c68 push 0x11f76628 */
  push32((uint32_t)(0x11f76628u));
  /* 11f71c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c6f call esi */
  call_ind((uint32_t)(ESI), 0x11f71c71u);
  /* 11f71c71 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c73 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11f71c78 push 0x11f76638 */
  push32((uint32_t)(0x11f76638u));
  /* 11f71c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c7f call esi */
  call_ind((uint32_t)(ESI), 0x11f71c81u);
  /* 11f71c81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71c85 push 0x11f76640 */
  push32((uint32_t)(0x11f76640u));
  /* 11f71c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c8c call esi */
  call_ind((uint32_t)(ESI), 0x11f71c8eu);
  /* 11f71c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c90 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11f71c92 push 0x11f76600 */
  push32((uint32_t)(0x11f76600u));
  /* 11f71c97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71c99 call esi */
  call_ind((uint32_t)(ESI), 0x11f71c9bu);
  /* 11f71c9b mov esi, dword ptr [0x11f75120] */
  ESI = (r32((uint32_t)(0x11f75120)));
  /* 11f71ca1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71ca4 push 0x11f765f8 */
  push32((uint32_t)(0x11f765f8u));
  /* 11f71ca9 push 0x11f765f0 */
  push32((uint32_t)(0x11f765f0u));
  /* 11f71cae call esi */
  call_ind((uint32_t)(ESI), 0x11f71cb0u);
  /* 11f71cb0 push 0x11f76750 */
  push32((uint32_t)(0x11f76750u));
  /* 11f71cb5 push 0x11f76740 */
  push32((uint32_t)(0x11f76740u));
  /* 11f71cba call esi */
  call_ind((uint32_t)(ESI), 0x11f71cbcu);
  /* 11f71cbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71cbf:;
  /* 11f71cbf mov ebp, dword ptr [0x11f750b4] */
  EBP = (r32((uint32_t)(0x11f750b4)));
  /* 11f71cc5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f71cc7 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71cc9u);
  /* 11f71cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71ccc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71cce je 0x11f71cee */
  if (C.zf) goto L_11f71cee;
  /* 11f71cd0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f71cd2 call dword ptr [0x11f75100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75100))), 0x11f71cd8u);
  /* 11f71cd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71cdb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71cdd je 0x11f71cee */
  if (C.zf) goto L_11f71cee;
  /* 11f71cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71ce1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f71ce3 call edi */
  call_ind((uint32_t)(EDI), 0x11f71ce5u);
  /* 11f71ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71ce7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f71ce9 call edi */
  call_ind((uint32_t)(EDI), 0x11f71cebu);
  /* 11f71ceb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71cee:;
  /* 11f71cee push 0xf */
  push32((uint32_t)(0xfu));
  /* 11f71cf0 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71cf2u);
  /* 11f71cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71cf5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71cf7 je 0x11f71d4c */
  if (C.zf) goto L_11f71d4c;
  /* 11f71cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71cfb push 0x11f767a8 */
  push32((uint32_t)(0x11f767a8u));
  /* 11f71d00 call dword ptr [0x11f75118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75118))), 0x11f71d06u);
  /* 11f71d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71d0b jne 0x11f71d4c */
  if (!C.zf) goto L_11f71d4c;
  /* 11f71d0d push eax */
  push32((uint32_t)(EAX));
  /* 11f71d0e push 0xf */
  push32((uint32_t)(0xfu));
  /* 11f71d10 call edi */
  call_ind((uint32_t)(EDI), 0x11f71d12u);
  /* 11f71d12 mov ebx, dword ptr [0x11f750c0] */
  EBX = (r32((uint32_t)(0x11f750c0)));
  /* 11f71d18 push 0x11f76268 */
  push32((uint32_t)(0x11f76268u));
  /* 11f71d1d call ebx */
  call_ind((uint32_t)(EBX), 0x11f71d1fu);
  /* 11f71d1f mov esi, dword ptr [0x11f750e8] */
  ESI = (r32((uint32_t)(0x11f750e8)));
  /* 11f71d25 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11f71d2a push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d2e call esi */
  call_ind((uint32_t)(ESI), 0x11f71d30u);
  /* 11f71d30 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11f71d35 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f71d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d39 call esi */
  call_ind((uint32_t)(ESI), 0x11f71d3bu);
  /* 11f71d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f71d3f call edi */
  call_ind((uint32_t)(EDI), 0x11f71d41u);
  /* 11f71d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d43 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f71d45 call edi */
  call_ind((uint32_t)(EDI), 0x11f71d47u);
  /* 11f71d47 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71d4a jmp 0x11f71d58 */
  goto L_11f71d58;
L_11f71d4c:;
  /* 11f71d4c mov ebx, dword ptr [0x11f750c0] */
  EBX = (r32((uint32_t)(0x11f750c0)));
  /* 11f71d52 mov esi, dword ptr [0x11f750e8] */
  ESI = (r32((uint32_t)(0x11f750e8)));
L_11f71d58:;
  /* 11f71d58 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f71d5a call ebp */
  call_ind((uint32_t)(EBP), 0x11f71d5cu);
  /* 11f71d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71d5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71d61 je 0x11f71da8 */
  if (C.zf) goto L_11f71da8;
  /* 11f71d63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f71d65 push 0x11f767a0 */
  push32((uint32_t)(0x11f767a0u));
  /* 11f71d6a call dword ptr [0x11f75118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75118))), 0x11f71d70u);
  /* 11f71d70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71d75 jne 0x11f71da8 */
  if (!C.zf) goto L_11f71da8;
  /* 11f71d77 push eax */
  push32((uint32_t)(EAX));
  /* 11f71d78 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f71d7a call edi */
  call_ind((uint32_t)(EDI), 0x11f71d7cu);
  /* 11f71d7c push 0x11f76260 */
  push32((uint32_t)(0x11f76260u));
  /* 11f71d81 call ebx */
  call_ind((uint32_t)(EBX), 0x11f71d83u);
  /* 11f71d83 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11f71d88 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d8c call esi */
  call_ind((uint32_t)(ESI), 0x11f71d8eu);
  /* 11f71d8e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11f71d93 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f71d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d97 call esi */
  call_ind((uint32_t)(ESI), 0x11f71d99u);
  /* 11f71d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71d9b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f71d9d call edi */
  call_ind((uint32_t)(EDI), 0x11f71d9fu);
  /* 11f71d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71da1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f71da3 call edi */
  call_ind((uint32_t)(EDI), 0x11f71da5u);
  /* 11f71da5 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71da8:;
  /* 11f71da8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f71daa call ebp */
  call_ind((uint32_t)(EBP), 0x11f71dacu);
  /* 11f71dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71daf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71db1 je 0x11f71dd6 */
  if (C.zf) goto L_11f71dd6;
  /* 11f71db3 mov esi, dword ptr [0x11f75100] */
  ESI = (r32((uint32_t)(0x11f75100)));
  /* 11f71db9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f71dbb call esi */
  call_ind((uint32_t)(ESI), 0x11f71dbdu);
  /* 11f71dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71dc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71dc2 je 0x11f71ddc */
  if (C.zf) goto L_11f71ddc;
  /* 11f71dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71dc6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f71dc8 call edi */
  call_ind((uint32_t)(EDI), 0x11f71dcau);
  /* 11f71dca push 0x11f76258 */
  push32((uint32_t)(0x11f76258u));
  /* 11f71dcf call ebx */
  call_ind((uint32_t)(EBX), 0x11f71dd1u);
  /* 11f71dd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71dd4 jmp 0x11f71ddc */
  goto L_11f71ddc;
L_11f71dd6:;
  /* 11f71dd6 mov esi, dword ptr [0x11f75100] */
  ESI = (r32((uint32_t)(0x11f75100)));
L_11f71ddc:;
  /* 11f71ddc push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f71dde call ebp */
  call_ind((uint32_t)(EBP), 0x11f71de0u);
  /* 11f71de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71de3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71de5 je 0x11f71e02 */
  if (C.zf) goto L_11f71e02;
  /* 11f71de7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f71de9 call esi */
  call_ind((uint32_t)(ESI), 0x11f71debu);
  /* 11f71deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71dee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71df0 je 0x11f71e02 */
  if (C.zf) goto L_11f71e02;
  /* 11f71df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71df4 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11f71df6 call edi */
  call_ind((uint32_t)(EDI), 0x11f71df8u);
  /* 11f71df8 push 0x11f76250 */
  push32((uint32_t)(0x11f76250u));
  /* 11f71dfd call ebx */
  call_ind((uint32_t)(EBX), 0x11f71dffu);
  /* 11f71dff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71e02:;
  /* 11f71e02 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f71e04 call ebp */
  call_ind((uint32_t)(EBP), 0x11f71e06u);
  /* 11f71e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71e09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71e0b je 0x11f71e28 */
  if (C.zf) goto L_11f71e28;
  /* 11f71e0d push 6 */
  push32((uint32_t)(0x6u));
  /* 11f71e0f call esi */
  call_ind((uint32_t)(ESI), 0x11f71e11u);
  /* 11f71e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71e14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f71e16 je 0x11f71e28 */
  if (C.zf) goto L_11f71e28;
  /* 11f71e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f71e1a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f71e1c call edi */
  call_ind((uint32_t)(EDI), 0x11f71e1eu);
  /* 11f71e1e push 0x11f76248 */
  push32((uint32_t)(0x11f76248u));
  /* 11f71e23 call ebx */
  call_ind((uint32_t)(EBX), 0x11f71e25u);
  /* 11f71e25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f71e28:;
  /* 11f71e28 pop edi */
  EDI = (pop32());
  /* 11f71e29 pop esi */
  ESI = (pop32());
  /* 11f71e2a pop ebp */
  EBP = (pop32());
  /* 11f71e2b pop ebx */
  EBX = (pop32());
  /* 11f71e2c ret  */
  ESPCHK(0x11f71370u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e30 @ 0x11f71e30 (20 bytes, 6 insns) */
void f_11f71e30(void) {
  FTRACE(0x11f71e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71e30 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f71e34 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f71e35 jne 0x11f71e3c */
  if (!C.zf) goto L_11f71e3c;
  /* 11f71e37 call 0x11f71050 */
  push32(0x11f71e3cu); f_11f71050();
L_11f71e3c:;
  /* 11f71e3c mov eax, 1 */
  EAX = (0x1u);
  /* 11f71e41 ret 0xc */
  ESPCHK(0x11f71e30u, _esp0);
  ESP += 16; return;
}

/* FUN_10001e50 @ 0x11f71e50 (217 bytes, 57 insns) */
void f_11f71e50(void) {
  FTRACE(0x11f71e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71e50 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f71e54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71e57 jne 0x11f71ee5 */
  if (!C.zf) goto L_11f71ee5;
  /* 11f71e5d call dword ptr [0x11f75088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75088))), 0x11f71e63u);
  /* 11f71e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71e65 mov dword ptr [0x11f767cc], eax */
  w32((uint32_t)(0x11f767cc), (EAX));
  /* 11f71e6a call 0x11f72884 */
  push32(0x11f71e6fu); f_11f72884();
  /* 11f71e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71e71 pop ecx */
  ECX = (pop32());
  /* 11f71e72 je 0x11f71eb0 */
  if (C.zf) goto L_11f71eb0;
  /* 11f71e74 mov eax, dword ptr [0x11f767cc] */
  EAX = (r32((uint32_t)(0x11f767cc)));
  /* 11f71e79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f71e7b mov cl, byte ptr [0x11f767cd] */
  CL = (r8((uint32_t)(0x11f767cd)));
  /* 11f71e81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f71e86 shr dword ptr [0x11f767cc], 0x10 */
  w32((uint32_t)(0x11f767cc), (sh_shr((uint32_t)(r32((uint32_t)(0x11f767cc))), (0x10u)&0x1f, 32)));
  /* 11f71e8d mov dword ptr [0x11f767d4], eax */
  w32((uint32_t)(0x11f767d4), (EAX));
  /* 11f71e92 mov dword ptr [0x11f767d8], ecx */
  w32((uint32_t)(0x11f767d8), (ECX));
  /* 11f71e98 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f71e9b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f71e9d mov dword ptr [0x11f767d0], eax */
  w32((uint32_t)(0x11f767d0), (EAX));
  /* 11f71ea2 call 0x11f72117 */
  push32(0x11f71ea7u); f_11f72117();
  /* 11f71ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71ea9 jne 0x11f71eb4 */
  if (!C.zf) goto L_11f71eb4;
  /* 11f71eab call 0x11f728c0 */
  push32(0x11f71eb0u); f_11f728c0();
L_11f71eb0:;
  /* 11f71eb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f71eb2 jmp 0x11f71f26 */
  goto L_11f71f26;
L_11f71eb4:;
  /* 11f71eb4 call dword ptr [0x11f75084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75084))), 0x11f71ebau);
  /* 11f71eba mov dword ptr [0x11f76d38], eax */
  w32((uint32_t)(0x11f76d38), (EAX));
  /* 11f71ebf call 0x11f72752 */
  push32(0x11f71ec4u); f_11f72752();
  /* 11f71ec4 mov dword ptr [0x11f767b8], eax */
  w32((uint32_t)(0x11f767b8), (EAX));
  /* 11f71ec9 call 0x11f7223c */
  push32(0x11f71eceu); f_11f7223c();
  /* 11f71ece call 0x11f72505 */
  push32(0x11f71ed3u); f_11f72505();
  /* 11f71ed3 call 0x11f7244c */
  push32(0x11f71ed8u); f_11f7244c();
  /* 11f71ed8 call 0x11f71ff9 */
  push32(0x11f71eddu); f_11f71ff9();
  /* 11f71edd inc dword ptr [0x11f767b4] */
  { uint32_t _r=(r32((uint32_t)(0x11f767b4)))+1; w32((uint32_t)(0x11f767b4), (_r)); fl_inc(_r,32); }
  /* 11f71ee3 jmp 0x11f71f23 */
  goto L_11f71f23;
L_11f71ee5:;
  /* 11f71ee5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f71ee7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71ee9 jne 0x11f71f17 */
  if (!C.zf) goto L_11f71f17;
  /* 11f71eeb cmp dword ptr [0x11f767b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f767b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71ef1 jle 0x11f71eb0 */
  if ((C.zf||C.sf!=C.of)) goto L_11f71eb0;
  /* 11f71ef3 dec dword ptr [0x11f767b4] */
  { uint32_t _r=(r32((uint32_t)(0x11f767b4)))-1; w32((uint32_t)(0x11f767b4), (_r)); fl_dec(_r,32); }
  /* 11f71ef9 cmp dword ptr [0x11f76804], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11f76804))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71eff jne 0x11f71f06 */
  if (!C.zf) goto L_11f71f06;
  /* 11f71f01 call 0x11f72037 */
  push32(0x11f71f06u); f_11f72037();
L_11f71f06:;
  /* 11f71f06 call 0x11f723f8 */
  push32(0x11f71f0bu); f_11f723f8();
  /* 11f71f0b call 0x11f7216b */
  push32(0x11f71f10u); f_11f7216b();
  /* 11f71f10 call 0x11f728c0 */
  push32(0x11f71f15u); f_11f728c0();
  /* 11f71f15 jmp 0x11f71f23 */
  goto L_11f71f23;
L_11f71f17:;
  /* 11f71f17 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71f1a jne 0x11f71f23 */
  if (!C.zf) goto L_11f71f23;
  /* 11f71f1c push ecx */
  push32((uint32_t)(ECX));
  /* 11f71f1d call 0x11f7219c */
  push32(0x11f71f22u); f_11f7219c();
  /* 11f71f22 pop ecx */
  ECX = (pop32());
L_11f71f23:;
  /* 11f71f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f71f25 pop eax */
  EAX = (pop32());
L_11f71f26:;
  /* 11f71f26 ret 0xc */
  ESPCHK(0x11f71e50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11f71f29 (157 bytes, 73 insns) */
void f_11f71f29(void) {
  FTRACE(0x11f71f29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71f29 push ebp */
  push32((uint32_t)(EBP));
  /* 11f71f2a mov ebp, esp */
  EBP = (ESP);
  /* 11f71f2c push ebx */
  push32((uint32_t)(EBX));
  /* 11f71f2d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f71f30 push esi */
  push32((uint32_t)(ESI));
  /* 11f71f31 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f71f34 push edi */
  push32((uint32_t)(EDI));
  /* 11f71f35 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f71f38 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f71f3a jne 0x11f71f45 */
  if (!C.zf) goto L_11f71f45;
  /* 11f71f3c cmp dword ptr [0x11f767b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f767b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71f43 jmp 0x11f71f6b */
  goto L_11f71f6b;
L_11f71f45:;
  /* 11f71f45 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71f48 je 0x11f71f4f */
  if (C.zf) goto L_11f71f4f;
  /* 11f71f4a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71f4d jne 0x11f71f71 */
  if (!C.zf) goto L_11f71f71;
L_11f71f4f:;
  /* 11f71f4f mov eax, dword ptr [0x11f76d3c] */
  EAX = (r32((uint32_t)(0x11f76d3c)));
  /* 11f71f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71f56 je 0x11f71f61 */
  if (C.zf) goto L_11f71f61;
  /* 11f71f58 push edi */
  push32((uint32_t)(EDI));
  /* 11f71f59 push esi */
  push32((uint32_t)(ESI));
  /* 11f71f5a push ebx */
  push32((uint32_t)(EBX));
  /* 11f71f5b call eax */
  call_ind((uint32_t)(EAX), 0x11f71f5du);
  /* 11f71f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71f5f je 0x11f71f6d */
  if (C.zf) goto L_11f71f6d;
L_11f71f61:;
  /* 11f71f61 push edi */
  push32((uint32_t)(EDI));
  /* 11f71f62 push esi */
  push32((uint32_t)(ESI));
  /* 11f71f63 push ebx */
  push32((uint32_t)(EBX));
  /* 11f71f64 call 0x11f71e50 */
  push32(0x11f71f69u); f_11f71e50();
  /* 11f71f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11f71f6b:;
  /* 11f71f6b jne 0x11f71f71 */
  if (!C.zf) goto L_11f71f71;
L_11f71f6d:;
  /* 11f71f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f71f6f jmp 0x11f71fbf */
  goto L_11f71fbf;
L_11f71f71:;
  /* 11f71f71 push edi */
  push32((uint32_t)(EDI));
  /* 11f71f72 push esi */
  push32((uint32_t)(ESI));
  /* 11f71f73 push ebx */
  push32((uint32_t)(EBX));
  /* 11f71f74 call 0x11f71e30 */
  push32(0x11f71f79u); f_11f71e30();
  /* 11f71f79 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71f7c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f71f7f jne 0x11f71f8d */
  if (!C.zf) goto L_11f71f8d;
  /* 11f71f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71f83 jne 0x11f71fbc */
  if (!C.zf) goto L_11f71fbc;
  /* 11f71f85 push edi */
  push32((uint32_t)(EDI));
  /* 11f71f86 push eax */
  push32((uint32_t)(EAX));
  /* 11f71f87 push ebx */
  push32((uint32_t)(EBX));
  /* 11f71f88 call 0x11f71e50 */
  push32(0x11f71f8du); f_11f71e50();
L_11f71f8d:;
  /* 11f71f8d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f71f8f je 0x11f71f96 */
  if (C.zf) goto L_11f71f96;
  /* 11f71f91 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71f94 jne 0x11f71fbc */
  if (!C.zf) goto L_11f71fbc;
L_11f71f96:;
  /* 11f71f96 push edi */
  push32((uint32_t)(EDI));
  /* 11f71f97 push esi */
  push32((uint32_t)(ESI));
  /* 11f71f98 push ebx */
  push32((uint32_t)(EBX));
  /* 11f71f99 call 0x11f71e50 */
  push32(0x11f71f9eu); f_11f71e50();
  /* 11f71f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71fa0 jne 0x11f71fa5 */
  if (!C.zf) goto L_11f71fa5;
  /* 11f71fa2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11f71fa5:;
  /* 11f71fa5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71fa9 je 0x11f71fbc */
  if (C.zf) goto L_11f71fbc;
  /* 11f71fab mov eax, dword ptr [0x11f76d3c] */
  EAX = (r32((uint32_t)(0x11f76d3c)));
  /* 11f71fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71fb2 je 0x11f71fbc */
  if (C.zf) goto L_11f71fbc;
  /* 11f71fb4 push edi */
  push32((uint32_t)(EDI));
  /* 11f71fb5 push esi */
  push32((uint32_t)(ESI));
  /* 11f71fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11f71fb7 call eax */
  call_ind((uint32_t)(EAX), 0x11f71fb9u);
  /* 11f71fb9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11f71fbc:;
  /* 11f71fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f71fbf:;
  /* 11f71fbf pop edi */
  EDI = (pop32());
  /* 11f71fc0 pop esi */
  ESI = (pop32());
  /* 11f71fc1 pop ebx */
  EBX = (pop32());
  /* 11f71fc2 pop ebp */
  EBP = (pop32());
  /* 11f71fc3 ret 0xc */
  ESPCHK(0x11f71f29u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11f71fc6 (48 bytes, 15 insns) */
void f_11f71fc6(void) {
  FTRACE(0x11f71fc6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71fc6 mov eax, dword ptr [0x11f767c0] */
  EAX = (r32((uint32_t)(0x11f767c0)));
  /* 11f71fcb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71fce je 0x11f71fdd */
  if (C.zf) goto L_11f71fdd;
  /* 11f71fd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f71fd2 jne 0x11f71fe2 */
  if (!C.zf) goto L_11f71fe2;
  /* 11f71fd4 cmp dword ptr [0x11f767c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f767c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f71fdb jne 0x11f71fe2 */
  if (!C.zf) goto L_11f71fe2;
L_11f71fdd:;
  /* 11f71fdd call 0x11f72935 */
  push32(0x11f71fe2u); f_11f72935();
L_11f71fe2:;
  /* 11f71fe2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f71fe6 call 0x11f7296e */
  push32(0x11f71febu); f_11f7296e();
  /* 11f71feb push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f71ff0 call dword ptr [0x11f762bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f762bc))), 0x11f71ff6u);
  /* 11f71ff6 pop ecx */
  ECX = (pop32());
  /* 11f71ff7 pop ecx */
  ECX = (pop32());
  /* 11f71ff8 ret  */
  ESPCHK(0x11f71fc6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff9 @ 0x11f71ff9 (45 bytes, 12 insns) */
void f_11f71ff9(void) {
  FTRACE(0x11f71ff9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f71ff9 mov eax, dword ptr [0x11f76d34] */
  EAX = (r32((uint32_t)(0x11f76d34)));
  /* 11f71ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72000 je 0x11f72004 */
  if (C.zf) goto L_11f72004;
  /* 11f72002 call eax */
  call_ind((uint32_t)(EAX), 0x11f72004u);
L_11f72004:;
  /* 11f72004 push 0x11f76010 */
  push32((uint32_t)(0x11f76010u));
  /* 11f72009 push 0x11f76008 */
  push32((uint32_t)(0x11f76008u));
  /* 11f7200e call 0x11f720fd */
  push32(0x11f72013u); f_11f720fd();
  /* 11f72013 push 0x11f76004 */
  push32((uint32_t)(0x11f76004u));
  /* 11f72018 push 0x11f76000 */
  push32((uint32_t)(0x11f76000u));
  /* 11f7201d call 0x11f720fd */
  push32(0x11f72022u); f_11f720fd();
  /* 11f72022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72025 ret  */
  ESPCHK(0x11f71ff9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11f72026 (17 bytes, 6 insns) */
void f_11f72026(void) {
  FTRACE(0x11f72026u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72026 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72028 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7202a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11f7202e call 0x11f72046 */
  push32(0x11f72033u); f_11f72046();
  /* 11f72033 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72036 ret  */
  ESPCHK(0x11f72026u, _esp0);
  ESP += 4; return;
}

/* FUN_10002037 @ 0x11f72037 (15 bytes, 6 insns) */
void f_11f72037(void) {
  FTRACE(0x11f72037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72037 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f72039 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7203b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7203d call 0x11f72046 */
  push32(0x11f72042u); f_11f72046();
  /* 11f72042 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72045 ret  */
  ESPCHK(0x11f72037u, _esp0);
  ESP += 4; return;
}

/* FUN_10002046 @ 0x11f72046 (163 bytes, 53 insns) */
void f_11f72046(void) {
  FTRACE(0x11f72046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72046 push edi */
  push32((uint32_t)(EDI));
  /* 11f72047 call 0x11f720eb */
  push32(0x11f7204cu); f_11f720eb();
  /* 11f7204c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7204e pop edi */
  EDI = (pop32());
  /* 11f7204f cmp dword ptr [0x11f76808], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f76808))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72055 jne 0x11f72068 */
  if (!C.zf) goto L_11f72068;
  /* 11f72057 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f7205b call dword ptr [0x11f75094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75094))), 0x11f72061u);
  /* 11f72061 push eax */
  push32((uint32_t)(EAX));
  /* 11f72062 call dword ptr [0x11f75090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75090))), 0x11f72068u);
L_11f72068:;
  /* 11f72068 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7206d push ebx */
  push32((uint32_t)(EBX));
  /* 11f7206e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f72072 mov dword ptr [0x11f76804], edi */
  w32((uint32_t)(0x11f76804), (EDI));
  /* 11f72078 mov byte ptr [0x11f76800], bl */
  w8((uint32_t)(0x11f76800), (BL));
  /* 11f7207e jne 0x11f720bc */
  if (!C.zf) goto L_11f720bc;
  /* 11f72080 mov eax, dword ptr [0x11f76d30] */
  EAX = (r32((uint32_t)(0x11f76d30)));
  /* 11f72085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72087 je 0x11f720ab */
  if (C.zf) goto L_11f720ab;
  /* 11f72089 mov ecx, dword ptr [0x11f76d2c] */
  ECX = (r32((uint32_t)(0x11f76d2c)));
  /* 11f7208f push esi */
  push32((uint32_t)(ESI));
  /* 11f72090 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11f72093 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72095 jb 0x11f720aa */
  if (C.cf) goto L_11f720aa;
L_11f72097:;
  /* 11f72097 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f72099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7209b je 0x11f7209f */
  if (C.zf) goto L_11f7209f;
  /* 11f7209d call eax */
  call_ind((uint32_t)(EAX), 0x11f7209fu);
L_11f7209f:;
  /* 11f7209f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f720a2 cmp esi, dword ptr [0x11f76d30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f76d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f720a8 jae 0x11f72097 */
  if (!C.cf) goto L_11f72097;
L_11f720aa:;
  /* 11f720aa pop esi */
  ESI = (pop32());
L_11f720ab:;
  /* 11f720ab push 0x11f76018 */
  push32((uint32_t)(0x11f76018u));
  /* 11f720b0 push 0x11f76014 */
  push32((uint32_t)(0x11f76014u));
  /* 11f720b5 call 0x11f720fd */
  push32(0x11f720bau); f_11f720fd();
  /* 11f720ba pop ecx */
  ECX = (pop32());
  /* 11f720bb pop ecx */
  ECX = (pop32());
L_11f720bc:;
  /* 11f720bc push 0x11f76020 */
  push32((uint32_t)(0x11f76020u));
  /* 11f720c1 push 0x11f7601c */
  push32((uint32_t)(0x11f7601cu));
  /* 11f720c6 call 0x11f720fd */
  push32(0x11f720cbu); f_11f720fd();
  /* 11f720cb pop ecx */
  ECX = (pop32());
  /* 11f720cc pop ecx */
  ECX = (pop32());
  /* 11f720cd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f720cf pop ebx */
  EBX = (pop32());
  /* 11f720d0 je 0x11f720d9 */
  if (C.zf) goto L_11f720d9;
  /* 11f720d2 call 0x11f720f4 */
  push32(0x11f720d7u); f_11f720f4();
  /* 11f720d7 pop edi */
  EDI = (pop32());
  /* 11f720d8 ret  */
  ESPCHK(0x11f72046u, _esp0);
  ESP += 4; return;
L_11f720d9:;
  /* 11f720d9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f720dd mov dword ptr [0x11f76808], edi */
  w32((uint32_t)(0x11f76808), (EDI));
  /* 11f720e3 call dword ptr [0x11f7508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7508c))), 0x11f720e9u);
  /* 11f720e9 pop edi */
  EDI = (pop32());
  /* 11f720ea ret  */
  ESPCHK(0x11f72046u, _esp0);
  ESP += 4; return;
}

/* FUN_100020eb @ 0x11f720eb (9 bytes, 4 insns) */
void f_11f720eb(void) {
  FTRACE(0x11f720ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f720eb push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f720ed call 0x11f72b56 */
  push32(0x11f720f2u); f_11f72b56();
  /* 11f720f2 pop ecx */
  ECX = (pop32());
  /* 11f720f3 ret  */
  ESPCHK(0x11f720ebu, _esp0);
  ESP += 4; return;
}

/* FUN_100020f4 @ 0x11f720f4 (9 bytes, 4 insns) */
void f_11f720f4(void) {
  FTRACE(0x11f720f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f720f4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11f720f6 call 0x11f72bb7 */
  push32(0x11f720fbu); f_11f72bb7();
  /* 11f720fb pop ecx */
  ECX = (pop32());
  /* 11f720fc ret  */
  ESPCHK(0x11f720f4u, _esp0);
  ESP += 4; return;
}

/* FUN_100020fd @ 0x11f720fd (26 bytes, 12 insns) */
void f_11f720fd(void) {
  FTRACE(0x11f720fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f720fd push esi */
  push32((uint32_t)(ESI));
  /* 11f720fe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11f72102:;
  /* 11f72102 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72106 jae 0x11f72115 */
  if (!C.cf) goto L_11f72115;
  /* 11f72108 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f7210a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7210c je 0x11f72110 */
  if (C.zf) goto L_11f72110;
  /* 11f7210e call eax */
  call_ind((uint32_t)(EAX), 0x11f72110u);
L_11f72110:;
  /* 11f72110 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72113 jmp 0x11f72102 */
  goto L_11f72102;
L_11f72115:;
  /* 11f72115 pop esi */
  ESI = (pop32());
  /* 11f72116 ret  */
  ESPCHK(0x11f720fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10002117 @ 0x11f72117 (84 bytes, 32 insns) */
void f_11f72117(void) {
  FTRACE(0x11f72117u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72117 push esi */
  push32((uint32_t)(ESI));
  /* 11f72118 call 0x11f72ac1 */
  push32(0x11f7211du); f_11f72ac1();
  /* 11f7211d call dword ptr [0x11f75004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75004))), 0x11f72123u);
  /* 11f72123 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72126 mov dword ptr [0x11f762c0], eax */
  w32((uint32_t)(0x11f762c0), (EAX));
  /* 11f7212b je 0x11f72167 */
  if (C.zf) goto L_11f72167;
  /* 11f7212d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11f7212f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f72131 call 0x11f72bcc */
  push32(0x11f72136u); f_11f72bcc();
  /* 11f72136 mov esi, eax */
  ESI = (EAX);
  /* 11f72138 pop ecx */
  ECX = (pop32());
  /* 11f72139 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f7213b pop ecx */
  ECX = (pop32());
  /* 11f7213c je 0x11f72167 */
  if (C.zf) goto L_11f72167;
  /* 11f7213e push esi */
  push32((uint32_t)(ESI));
  /* 11f7213f push dword ptr [0x11f762c0] */
  push32((uint32_t)(r32((uint32_t)(0x11f762c0))));
  /* 11f72145 call dword ptr [0x11f75000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75000))), 0x11f7214bu);
  /* 11f7214b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7214d je 0x11f72167 */
  if (C.zf) goto L_11f72167;
  /* 11f7214f push esi */
  push32((uint32_t)(ESI));
  /* 11f72150 call 0x11f72189 */
  push32(0x11f72155u); f_11f72189();
  /* 11f72155 pop ecx */
  ECX = (pop32());
  /* 11f72156 call dword ptr [0x11f75098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75098))), 0x11f7215cu);
  /* 11f7215c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f72160 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f72162 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f72164 pop eax */
  EAX = (pop32());
  /* 11f72165 pop esi */
  ESI = (pop32());
  /* 11f72166 ret  */
  ESPCHK(0x11f72117u, _esp0);
  ESP += 4; return;
L_11f72167:;
  /* 11f72167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72169 pop esi */
  ESI = (pop32());
  /* 11f7216a ret  */
  ESPCHK(0x11f72117u, _esp0);
  ESP += 4; return;
}

/* FUN_1000216b @ 0x11f7216b (30 bytes, 8 insns) */
void f_11f7216b(void) {
  FTRACE(0x11f7216bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7216b call 0x11f72aea */
  push32(0x11f72170u); f_11f72aea();
  /* 11f72170 mov eax, dword ptr [0x11f762c0] */
  EAX = (r32((uint32_t)(0x11f762c0)));
  /* 11f72175 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72178 je 0x11f72188 */
  if (C.zf) goto L_11f72188;
  /* 11f7217a push eax */
  push32((uint32_t)(EAX));
  /* 11f7217b call dword ptr [0x11f750a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750a0))), 0x11f72181u);
  /* 11f72181 or dword ptr [0x11f762c0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11f762c0)))|(0xffffffffu); w32((uint32_t)(0x11f762c0), (_r)); fl_logic(_r,32); }
L_11f72188:;
  /* 11f72188 ret  */
  ESPCHK(0x11f7216bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002189 @ 0x11f72189 (19 bytes, 4 insns) */
void f_11f72189(void) {
  FTRACE(0x11f72189u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72189 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f7218d mov dword ptr [eax + 0x50], 0x11f76440 */
  w32((uint32_t)(EAX + 0x50), (0x11f76440u));
  /* 11f72194 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11f7219b ret  */
  ESPCHK(0x11f72189u, _esp0);
  ESP += 4; return;
}

/* FUN_1000219c @ 0x11f7219c (160 bytes, 62 insns) */
void f_11f7219c(void) {
  FTRACE(0x11f7219cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7219c mov eax, dword ptr [0x11f762c0] */
  EAX = (r32((uint32_t)(0x11f762c0)));
  /* 11f721a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f721a4 je 0x11f7223b */
  if (C.zf) goto L_11f7223b;
  /* 11f721aa push esi */
  push32((uint32_t)(ESI));
  /* 11f721ab mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f721af test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f721b1 jne 0x11f721c0 */
  if (!C.zf) goto L_11f721c0;
  /* 11f721b3 push eax */
  push32((uint32_t)(EAX));
  /* 11f721b4 call dword ptr [0x11f750a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750a4))), 0x11f721bau);
  /* 11f721ba mov esi, eax */
  ESI = (EAX);
  /* 11f721bc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f721be je 0x11f7222c */
  if (C.zf) goto L_11f7222c;
L_11f721c0:;
  /* 11f721c0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11f721c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f721c5 je 0x11f721ce */
  if (C.zf) goto L_11f721ce;
  /* 11f721c7 push eax */
  push32((uint32_t)(EAX));
  /* 11f721c8 call 0x11f72c59 */
  push32(0x11f721cdu); f_11f72c59();
  /* 11f721cd pop ecx */
  ECX = (pop32());
L_11f721ce:;
  /* 11f721ce mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11f721d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f721d3 je 0x11f721dc */
  if (C.zf) goto L_11f721dc;
  /* 11f721d5 push eax */
  push32((uint32_t)(EAX));
  /* 11f721d6 call 0x11f72c59 */
  push32(0x11f721dbu); f_11f72c59();
  /* 11f721db pop ecx */
  ECX = (pop32());
L_11f721dc:;
  /* 11f721dc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11f721df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f721e1 je 0x11f721ea */
  if (C.zf) goto L_11f721ea;
  /* 11f721e3 push eax */
  push32((uint32_t)(EAX));
  /* 11f721e4 call 0x11f72c59 */
  push32(0x11f721e9u); f_11f72c59();
  /* 11f721e9 pop ecx */
  ECX = (pop32());
L_11f721ea:;
  /* 11f721ea mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11f721ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f721ef je 0x11f721f8 */
  if (C.zf) goto L_11f721f8;
  /* 11f721f1 push eax */
  push32((uint32_t)(EAX));
  /* 11f721f2 call 0x11f72c59 */
  push32(0x11f721f7u); f_11f72c59();
  /* 11f721f7 pop ecx */
  ECX = (pop32());
L_11f721f8:;
  /* 11f721f8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11f721fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f721fd je 0x11f72206 */
  if (C.zf) goto L_11f72206;
  /* 11f721ff push eax */
  push32((uint32_t)(EAX));
  /* 11f72200 call 0x11f72c59 */
  push32(0x11f72205u); f_11f72c59();
  /* 11f72205 pop ecx */
  ECX = (pop32());
L_11f72206:;
  /* 11f72206 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11f72209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7220b je 0x11f72214 */
  if (C.zf) goto L_11f72214;
  /* 11f7220d push eax */
  push32((uint32_t)(EAX));
  /* 11f7220e call 0x11f72c59 */
  push32(0x11f72213u); f_11f72c59();
  /* 11f72213 pop ecx */
  ECX = (pop32());
L_11f72214:;
  /* 11f72214 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11f72217 cmp eax, 0x11f76440 */
  { uint32_t _a=(EAX),_b=(0x11f76440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7221c je 0x11f72225 */
  if (C.zf) goto L_11f72225;
  /* 11f7221e push eax */
  push32((uint32_t)(EAX));
  /* 11f7221f call 0x11f72c59 */
  push32(0x11f72224u); f_11f72c59();
  /* 11f72224 pop ecx */
  ECX = (pop32());
L_11f72225:;
  /* 11f72225 push esi */
  push32((uint32_t)(ESI));
  /* 11f72226 call 0x11f72c59 */
  push32(0x11f7222bu); f_11f72c59();
  /* 11f7222b pop ecx */
  ECX = (pop32());
L_11f7222c:;
  /* 11f7222c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7222e push dword ptr [0x11f762c0] */
  push32((uint32_t)(r32((uint32_t)(0x11f762c0))));
  /* 11f72234 call dword ptr [0x11f75000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75000))), 0x11f7223au);
  /* 11f7223a pop esi */
  ESI = (pop32());
L_11f7223b:;
  /* 11f7223b ret  */
  ESPCHK(0x11f7219cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000223c @ 0x11f7223c (444 bytes, 150 insns) */
void f_11f7223c(void) {
  FTRACE(0x11f7223cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7223c push ebp */
  push32((uint32_t)(EBP));
  /* 11f7223d mov ebp, esp */
  EBP = (ESP);
  /* 11f7223f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72242 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72243 push esi */
  push32((uint32_t)(ESI));
  /* 11f72244 push edi */
  push32((uint32_t)(EDI));
  /* 11f72245 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f7224a call 0x11f72ca1 */
  push32(0x11f7224fu); f_11f72ca1();
  /* 11f7224f mov esi, eax */
  ESI = (EAX);
  /* 11f72251 pop ecx */
  ECX = (pop32());
  /* 11f72252 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72254 jne 0x11f7225e */
  if (!C.zf) goto L_11f7225e;
  /* 11f72256 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11f72258 call 0x11f71fc6 */
  push32(0x11f7225du); f_11f71fc6();
  /* 11f7225d pop ecx */
  ECX = (pop32());
L_11f7225e:;
  /* 11f7225e mov dword ptr [0x11f76c20], esi */
  w32((uint32_t)(0x11f76c20), (ESI));
  /* 11f72264 mov dword ptr [0x11f76d20], 0x20 */
  w32((uint32_t)(0x11f76d20), (0x20u));
  /* 11f7226e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11f72274:;
  /* 11f72274 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72276 jae 0x11f72296 */
  if (!C.cf) goto L_11f72296;
  /* 11f72278 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f7227c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f7227f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f72283 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11f72287 mov eax, dword ptr [0x11f76c20] */
  EAX = (r32((uint32_t)(0x11f76c20)));
  /* 11f7228c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7228f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72294 jmp 0x11f72274 */
  goto L_11f72274;
L_11f72296:;
  /* 11f72296 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11f72299 push eax */
  push32((uint32_t)(EAX));
  /* 11f7229a call dword ptr [0x11f7509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7509c))), 0x11f722a0u);
  /* 11f722a0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f722a5 je 0x11f7237c */
  if (C.zf) goto L_11f7237c;
  /* 11f722ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f722ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f722b0 je 0x11f7237c */
  if (C.zf) goto L_11f7237c;
  /* 11f722b6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11f722b8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11f722bb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11f722be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f722c1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11f722c6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f722c8 jl 0x11f722cc */
  if ((C.sf!=C.of)) goto L_11f722cc;
  /* 11f722ca mov edi, eax */
  EDI = (EAX);
L_11f722cc:;
  /* 11f722cc cmp dword ptr [0x11f76d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f76d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f722d2 jge 0x11f7232a */
  if ((C.sf==C.of)) goto L_11f7232a;
  /* 11f722d4 mov esi, 0x11f76c24 */
  ESI = (0x11f76c24u);
L_11f722d9:;
  /* 11f722d9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11f722de call 0x11f72ca1 */
  push32(0x11f722e3u); f_11f72ca1();
  /* 11f722e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f722e5 pop ecx */
  ECX = (pop32());
  /* 11f722e6 je 0x11f72324 */
  if (C.zf) goto L_11f72324;
  /* 11f722e8 add dword ptr [0x11f76d20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11f76d20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11f76d20), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f722ef mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f722f1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11f722f7:;
  /* 11f722f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f722f9 jae 0x11f72317 */
  if (!C.cf) goto L_11f72317;
  /* 11f722fb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f722ff or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f72302 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f72306 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11f7230a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f7230c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7230f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72315 jmp 0x11f722f7 */
  goto L_11f722f7;
L_11f72317:;
  /* 11f72317 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7231a cmp dword ptr [0x11f76d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f76d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72320 jl 0x11f722d9 */
  if ((C.sf!=C.of)) goto L_11f722d9;
  /* 11f72322 jmp 0x11f7232a */
  goto L_11f7232a;
L_11f72324:;
  /* 11f72324 mov edi, dword ptr [0x11f76d20] */
  EDI = (r32((uint32_t)(0x11f76d20)));
L_11f7232a:;
  /* 11f7232a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f7232c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f7232e jle 0x11f7237c */
  if ((C.zf||C.sf!=C.of)) goto L_11f7237c;
L_11f72330:;
  /* 11f72330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f72333 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f72335 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72338 je 0x11f72372 */
  if (C.zf) goto L_11f72372;
  /* 11f7233a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11f7233c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11f7233e je 0x11f72372 */
  if (C.zf) goto L_11f72372;
  /* 11f72340 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11f72342 jne 0x11f7234f */
  if (!C.zf) goto L_11f7234f;
  /* 11f72344 push ecx */
  push32((uint32_t)(ECX));
  /* 11f72345 call dword ptr [0x11f7507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7507c))), 0x11f7234bu);
  /* 11f7234b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7234d je 0x11f72372 */
  if (C.zf) goto L_11f72372;
L_11f7234f:;
  /* 11f7234f mov ecx, esi */
  ECX = (ESI);
  /* 11f72351 mov eax, esi */
  EAX = (ESI);
  /* 11f72353 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f72356 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f72359 mov ecx, dword ptr [ecx*4 + 0x11f76c20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11f76c20)));
  /* 11f72360 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11f72363 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11f72366 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f72369 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11f7236b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f7236d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11f7236f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11f72372:;
  /* 11f72372 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f72376 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f72377 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f72378 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7237a jl 0x11f72330 */
  if ((C.sf!=C.of)) goto L_11f72330;
L_11f7237c:;
  /* 11f7237c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f7237e:;
  /* 11f7237e mov ecx, dword ptr [0x11f76c20] */
  ECX = (r32((uint32_t)(0x11f76c20)));
  /* 11f72384 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11f72387 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7238b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f7238e jne 0x11f723dd */
  if (!C.zf) goto L_11f723dd;
  /* 11f72390 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f72392 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11f72396 jne 0x11f7239d */
  if (!C.zf) goto L_11f7239d;
  /* 11f72398 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11f7239a pop eax */
  EAX = (pop32());
  /* 11f7239b jmp 0x11f723a7 */
  goto L_11f723a7;
L_11f7239d:;
  /* 11f7239d mov eax, ebx */
  EAX = (EBX);
  /* 11f7239f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f723a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f723a2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f723a4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f723a7:;
  /* 11f723a7 push eax */
  push32((uint32_t)(EAX));
  /* 11f723a8 call dword ptr [0x11f75080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75080))), 0x11f723aeu);
  /* 11f723ae mov edi, eax */
  EDI = (EAX);
  /* 11f723b0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f723b3 je 0x11f723cc */
  if (C.zf) goto L_11f723cc;
  /* 11f723b5 push edi */
  push32((uint32_t)(EDI));
  /* 11f723b6 call dword ptr [0x11f7507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7507c))), 0x11f723bcu);
  /* 11f723bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f723be je 0x11f723cc */
  if (C.zf) goto L_11f723cc;
  /* 11f723c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f723c5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f723c7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f723ca jne 0x11f723d2 */
  if (!C.zf) goto L_11f723d2;
L_11f723cc:;
  /* 11f723cc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f723d0 jmp 0x11f723e1 */
  goto L_11f723e1;
L_11f723d2:;
  /* 11f723d2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f723d5 jne 0x11f723e1 */
  if (!C.zf) goto L_11f723e1;
  /* 11f723d7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11f723db jmp 0x11f723e1 */
  goto L_11f723e1;
L_11f723dd:;
  /* 11f723dd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11f723e1:;
  /* 11f723e1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f723e2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f723e5 jl 0x11f7237e */
  if ((C.sf!=C.of)) goto L_11f7237e;
  /* 11f723e7 push dword ptr [0x11f76d20] */
  push32((uint32_t)(r32((uint32_t)(0x11f76d20))));
  /* 11f723ed call dword ptr [0x11f750a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f750a8))), 0x11f723f3u);
  /* 11f723f3 pop edi */
  EDI = (pop32());
  /* 11f723f4 pop esi */
  ESI = (pop32());
  /* 11f723f5 pop ebx */
  EBX = (pop32());
  /* 11f723f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f723f7 ret  */
  ESPCHK(0x11f7223cu, _esp0);
  ESP += 4; return;
}

/* FUN_100023f8 @ 0x11f723f8 (84 bytes, 33 insns) */
void f_11f723f8(void) {
  FTRACE(0x11f723f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f723f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f723f9 push esi */
  push32((uint32_t)(ESI));
  /* 11f723fa push edi */
  push32((uint32_t)(EDI));
  /* 11f723fb mov esi, 0x11f76c20 */
  ESI = (0x11f76c20u);
L_11f72400:;
  /* 11f72400 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f72402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72404 je 0x11f7243d */
  if (C.zf) goto L_11f7243d;
  /* 11f72406 mov edi, eax */
  EDI = (EAX);
  /* 11f72408 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7240d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7240f jae 0x11f72432 */
  if (!C.cf) goto L_11f72432;
  /* 11f72411 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11f72414:;
  /* 11f72414 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72418 je 0x11f72421 */
  if (C.zf) goto L_11f72421;
  /* 11f7241a push ebx */
  push32((uint32_t)(EBX));
  /* 11f7241b call dword ptr [0x11f75074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75074))), 0x11f72421u);
L_11f72421:;
  /* 11f72421 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f72423 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72426 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7242b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7242e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72430 jb 0x11f72414 */
  if (C.cf) goto L_11f72414;
L_11f72432:;
  /* 11f72432 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f72434 call 0x11f72c59 */
  push32(0x11f72439u); f_11f72c59();
  /* 11f72439 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11f7243c pop ecx */
  ECX = (pop32());
L_11f7243d:;
  /* 11f7243d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72440 cmp esi, 0x11f76d20 */
  { uint32_t _a=(ESI),_b=(0x11f76d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72446 jl 0x11f72400 */
  if ((C.sf!=C.of)) goto L_11f72400;
  /* 11f72448 pop edi */
  EDI = (pop32());
  /* 11f72449 pop esi */
  ESI = (pop32());
  /* 11f7244a pop ebx */
  EBX = (pop32());
  /* 11f7244b ret  */
  ESPCHK(0x11f723f8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000244c @ 0x11f7244c (185 bytes, 71 insns) */
void f_11f7244c(void) {
  FTRACE(0x11f7244cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7244c push ebx */
  push32((uint32_t)(EBX));
  /* 11f7244d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f7244f cmp dword ptr [0x11f76d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f76d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72455 push esi */
  push32((uint32_t)(ESI));
  /* 11f72456 push edi */
  push32((uint32_t)(EDI));
  /* 11f72457 jne 0x11f7245e */
  if (!C.zf) goto L_11f7245e;
  /* 11f72459 call 0x11f73273 */
  push32(0x11f7245eu); f_11f73273();
L_11f7245e:;
  /* 11f7245e mov esi, dword ptr [0x11f767b8] */
  ESI = (r32((uint32_t)(0x11f767b8)));
  /* 11f72464 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11f72466:;
  /* 11f72466 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f72468 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7246a je 0x11f7247e */
  if (C.zf) goto L_11f7247e;
  /* 11f7246c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7246e je 0x11f72471 */
  if (C.zf) goto L_11f72471;
  /* 11f72470 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f72471:;
  /* 11f72471 push esi */
  push32((uint32_t)(ESI));
  /* 11f72472 call 0x11f72e20 */
  push32(0x11f72477u); f_11f72e20();
  /* 11f72477 pop ecx */
  ECX = (pop32());
  /* 11f72478 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11f7247c jmp 0x11f72466 */
  goto L_11f72466;
L_11f7247e:;
  /* 11f7247e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11f72485 push eax */
  push32((uint32_t)(EAX));
  /* 11f72486 call 0x11f72ca1 */
  push32(0x11f7248bu); f_11f72ca1();
  /* 11f7248b mov esi, eax */
  ESI = (EAX);
  /* 11f7248d pop ecx */
  ECX = (pop32());
  /* 11f7248e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72490 mov dword ptr [0x11f767e8], esi */
  w32((uint32_t)(0x11f767e8), (ESI));
  /* 11f72496 jne 0x11f724a0 */
  if (!C.zf) goto L_11f724a0;
  /* 11f72498 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f7249a call 0x11f71fc6 */
  push32(0x11f7249fu); f_11f71fc6();
  /* 11f7249f pop ecx */
  ECX = (pop32());
L_11f724a0:;
  /* 11f724a0 mov edi, dword ptr [0x11f767b8] */
  EDI = (r32((uint32_t)(0x11f767b8)));
  /* 11f724a6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f724a8 je 0x11f724e3 */
  if (C.zf) goto L_11f724e3;
  /* 11f724aa push ebp */
  push32((uint32_t)(EBP));
L_11f724ab:;
  /* 11f724ab push edi */
  push32((uint32_t)(EDI));
  /* 11f724ac call 0x11f72e20 */
  push32(0x11f724b1u); f_11f72e20();
  /* 11f724b1 mov ebp, eax */
  EBP = (EAX);
  /* 11f724b3 pop ecx */
  ECX = (pop32());
  /* 11f724b4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11f724b5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f724b8 je 0x11f724dc */
  if (C.zf) goto L_11f724dc;
  /* 11f724ba push ebp */
  push32((uint32_t)(EBP));
  /* 11f724bb call 0x11f72ca1 */
  push32(0x11f724c0u); f_11f72ca1();
  /* 11f724c0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f724c2 pop ecx */
  ECX = (pop32());
  /* 11f724c3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11f724c5 jne 0x11f724cf */
  if (!C.zf) goto L_11f724cf;
  /* 11f724c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f724c9 call 0x11f71fc6 */
  push32(0x11f724ceu); f_11f71fc6();
  /* 11f724ce pop ecx */
  ECX = (pop32());
L_11f724cf:;
  /* 11f724cf push edi */
  push32((uint32_t)(EDI));
  /* 11f724d0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f724d2 call 0x11f72d30 */
  push32(0x11f724d7u); f_11f72d30();
  /* 11f724d7 pop ecx */
  ECX = (pop32());
  /* 11f724d8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f724db pop ecx */
  ECX = (pop32());
L_11f724dc:;
  /* 11f724dc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f724de cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f724e0 jne 0x11f724ab */
  if (!C.zf) goto L_11f724ab;
  /* 11f724e2 pop ebp */
  EBP = (pop32());
L_11f724e3:;
  /* 11f724e3 push dword ptr [0x11f767b8] */
  push32((uint32_t)(r32((uint32_t)(0x11f767b8))));
  /* 11f724e9 call 0x11f72c59 */
  push32(0x11f724eeu); f_11f72c59();
  /* 11f724ee pop ecx */
  ECX = (pop32());
  /* 11f724ef mov dword ptr [0x11f767b8], ebx */
  w32((uint32_t)(0x11f767b8), (EBX));
  /* 11f724f5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11f724f7 pop edi */
  EDI = (pop32());
  /* 11f724f8 pop esi */
  ESI = (pop32());
  /* 11f724f9 mov dword ptr [0x11f76d24], 1 */
  w32((uint32_t)(0x11f76d24), (0x1u));
  /* 11f72503 pop ebx */
  EBX = (pop32());
  /* 11f72504 ret  */
  ESPCHK(0x11f7244cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002505 @ 0x11f72505 (153 bytes, 62 insns) */
void f_11f72505(void) {
  FTRACE(0x11f72505u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72505 push ebp */
  push32((uint32_t)(EBP));
  /* 11f72506 mov ebp, esp */
  EBP = (ESP);
  /* 11f72508 push ecx */
  push32((uint32_t)(ECX));
  /* 11f72509 push ecx */
  push32((uint32_t)(ECX));
  /* 11f7250a push ebx */
  push32((uint32_t)(EBX));
  /* 11f7250b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f7250d cmp dword ptr [0x11f76d28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f76d28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72513 push esi */
  push32((uint32_t)(ESI));
  /* 11f72514 push edi */
  push32((uint32_t)(EDI));
  /* 11f72515 jne 0x11f7251c */
  if (!C.zf) goto L_11f7251c;
  /* 11f72517 call 0x11f73273 */
  push32(0x11f7251cu); f_11f73273();
L_11f7251c:;
  /* 11f7251c mov esi, 0x11f7680c */
  ESI = (0x11f7680cu);
  /* 11f72521 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f72526 push esi */
  push32((uint32_t)(ESI));
  /* 11f72527 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72528 call dword ptr [0x11f75070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75070))), 0x11f7252eu);
  /* 11f7252e mov eax, dword ptr [0x11f76d38] */
  EAX = (r32((uint32_t)(0x11f76d38)));
  /* 11f72533 mov dword ptr [0x11f767f8], esi */
  w32((uint32_t)(0x11f767f8), (ESI));
  /* 11f72539 mov edi, esi */
  EDI = (ESI);
  /* 11f7253b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7253d je 0x11f72541 */
  if (C.zf) goto L_11f72541;
  /* 11f7253f mov edi, eax */
  EDI = (EAX);
L_11f72541:;
  /* 11f72541 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f72544 push eax */
  push32((uint32_t)(EAX));
  /* 11f72545 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f72548 push eax */
  push32((uint32_t)(EAX));
  /* 11f72549 push ebx */
  push32((uint32_t)(EBX));
  /* 11f7254a push ebx */
  push32((uint32_t)(EBX));
  /* 11f7254b push edi */
  push32((uint32_t)(EDI));
  /* 11f7254c call 0x11f7259e */
  push32(0x11f72551u); f_11f7259e();
  /* 11f72551 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f72554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f72557 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11f7255a push eax */
  push32((uint32_t)(EAX));
  /* 11f7255b call 0x11f72ca1 */
  push32(0x11f72560u); f_11f72ca1();
  /* 11f72560 mov esi, eax */
  ESI = (EAX);
  /* 11f72562 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72565 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72567 jne 0x11f72571 */
  if (!C.zf) goto L_11f72571;
  /* 11f72569 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f7256b call 0x11f71fc6 */
  push32(0x11f72570u); f_11f71fc6();
  /* 11f72570 pop ecx */
  ECX = (pop32());
L_11f72571:;
  /* 11f72571 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f72574 push eax */
  push32((uint32_t)(EAX));
  /* 11f72575 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11f72578 push eax */
  push32((uint32_t)(EAX));
  /* 11f72579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f7257c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11f7257f push eax */
  push32((uint32_t)(EAX));
  /* 11f72580 push esi */
  push32((uint32_t)(ESI));
  /* 11f72581 push edi */
  push32((uint32_t)(EDI));
  /* 11f72582 call 0x11f7259e */
  push32(0x11f72587u); f_11f7259e();
  /* 11f72587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f7258a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7258d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f7258e mov dword ptr [0x11f767e0], esi */
  w32((uint32_t)(0x11f767e0), (ESI));
  /* 11f72594 pop edi */
  EDI = (pop32());
  /* 11f72595 pop esi */
  ESI = (pop32());
  /* 11f72596 mov dword ptr [0x11f767dc], eax */
  w32((uint32_t)(0x11f767dc), (EAX));
  /* 11f7259b pop ebx */
  EBX = (pop32());
  /* 11f7259c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f7259d ret  */
  ESPCHK(0x11f72505u, _esp0);
  ESP += 4; return;
}

/* FUN_1000259e @ 0x11f7259e (436 bytes, 187 insns) */
void f_11f7259e(void) {
  FTRACE(0x11f7259eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7259e push ebp */
  push32((uint32_t)(EBP));
  /* 11f7259f mov ebp, esp */
  EBP = (ESP);
  /* 11f725a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f725a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f725a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f725a8 push esi */
  push32((uint32_t)(ESI));
  /* 11f725a9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f725ac mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11f725af push edi */
  push32((uint32_t)(EDI));
  /* 11f725b0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f725b3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11f725b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f725bc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f725be je 0x11f725c8 */
  if (C.zf) goto L_11f725c8;
  /* 11f725c0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f725c2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f725c5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f725c8:;
  /* 11f725c8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f725cb jne 0x11f72611 */
  if (!C.zf) goto L_11f72611;
L_11f725cd:;
  /* 11f725cd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f725d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f725d1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f725d4 je 0x11f725ff */
  if (C.zf) goto L_11f725ff;
  /* 11f725d6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f725d8 je 0x11f725ff */
  if (C.zf) goto L_11f725ff;
  /* 11f725da movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f725dd test byte ptr [edx + 0x11f76b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f76b01)))&(0x4u); fl_logic(_r,8); }
  /* 11f725e4 je 0x11f725f2 */
  if (C.zf) goto L_11f725f2;
  /* 11f725e6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f725e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f725ea je 0x11f725f2 */
  if (C.zf) goto L_11f725f2;
  /* 11f725ec mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f725ee mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f725f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f725f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f725f2:;
  /* 11f725f2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f725f4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f725f6 je 0x11f725cd */
  if (C.zf) goto L_11f725cd;
  /* 11f725f8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f725fa mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f725fc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f725fd jmp 0x11f725cd */
  goto L_11f725cd;
L_11f725ff:;
  /* 11f725ff inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f72601 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72603 je 0x11f72609 */
  if (C.zf) goto L_11f72609;
  /* 11f72605 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f72608 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f72609:;
  /* 11f72609 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7260c jne 0x11f72654 */
  if (!C.zf) goto L_11f72654;
  /* 11f7260e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7260f jmp 0x11f72654 */
  goto L_11f72654;
L_11f72611:;
  /* 11f72611 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f72613 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72615 je 0x11f7261c */
  if (C.zf) goto L_11f7261c;
  /* 11f72617 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f72619 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f7261b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f7261c:;
  /* 11f7261c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f7261e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7261f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f72622 test byte ptr [ebx + 0x11f76b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f76b01)))&(0x4u); fl_logic(_r,8); }
  /* 11f72629 je 0x11f72637 */
  if (C.zf) goto L_11f72637;
  /* 11f7262b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f7262d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f7262f je 0x11f72636 */
  if (C.zf) goto L_11f72636;
  /* 11f72631 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11f72633 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11f72635 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f72636:;
  /* 11f72636 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11f72637:;
  /* 11f72637 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7263a je 0x11f72645 */
  if (C.zf) goto L_11f72645;
  /* 11f7263c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f7263e je 0x11f72649 */
  if (C.zf) goto L_11f72649;
  /* 11f72640 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72643 jne 0x11f72611 */
  if (!C.zf) goto L_11f72611;
L_11f72645:;
  /* 11f72645 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f72647 jne 0x11f7264c */
  if (!C.zf) goto L_11f7264c;
L_11f72649:;
  /* 11f72649 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f7264a jmp 0x11f72654 */
  goto L_11f72654;
L_11f7264c:;
  /* 11f7264c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f7264e je 0x11f72654 */
  if (C.zf) goto L_11f72654;
  /* 11f72650 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11f72654:;
  /* 11f72654 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11f72658:;
  /* 11f72658 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7265b je 0x11f72741 */
  if (C.zf) goto L_11f72741;
L_11f72661:;
  /* 11f72661 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f72663 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72666 je 0x11f7266d */
  if (C.zf) goto L_11f7266d;
  /* 11f72668 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7266b jne 0x11f72670 */
  if (!C.zf) goto L_11f72670;
L_11f7266d:;
  /* 11f7266d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7266e jmp 0x11f72661 */
  goto L_11f72661;
L_11f72670:;
  /* 11f72670 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72673 je 0x11f72741 */
  if (C.zf) goto L_11f72741;
  /* 11f72679 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f7267b je 0x11f72685 */
  if (C.zf) goto L_11f72685;
  /* 11f7267d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11f7267f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72682 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f72685:;
  /* 11f72685 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f72688 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11f7268a:;
  /* 11f7268a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11f72691 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f72693:;
  /* 11f72693 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72696 jne 0x11f7269c */
  if (!C.zf) goto L_11f7269c;
  /* 11f72698 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72699 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f7269a jmp 0x11f72693 */
  goto L_11f72693;
L_11f7269c:;
  /* 11f7269c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7269f jne 0x11f726cd */
  if (!C.zf) goto L_11f726cd;
  /* 11f726a1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11f726a4 jne 0x11f726cb */
  if (!C.zf) goto L_11f726cb;
  /* 11f726a6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f726a8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f726ab je 0x11f726ba */
  if (C.zf) goto L_11f726ba;
  /* 11f726ad cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f726b1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11f726b4 jne 0x11f726ba */
  if (!C.zf) goto L_11f726ba;
  /* 11f726b6 mov eax, edx */
  EAX = (EDX);
  /* 11f726b8 jmp 0x11f726bd */
  goto L_11f726bd;
L_11f726ba:;
  /* 11f726ba mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11f726bd:;
  /* 11f726bd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f726c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f726c2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f726c5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11f726c8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11f726cb:;
  /* 11f726cb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11f726cd:;
  /* 11f726cd mov edx, ebx */
  EDX = (EBX);
  /* 11f726cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f726d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f726d2 je 0x11f726e2 */
  if (C.zf) goto L_11f726e2;
  /* 11f726d4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11f726d5:;
  /* 11f726d5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f726d7 je 0x11f726dd */
  if (C.zf) goto L_11f726dd;
  /* 11f726d9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11f726dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f726dd:;
  /* 11f726dd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f726df dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f726e0 jne 0x11f726d5 */
  if (!C.zf) goto L_11f726d5;
L_11f726e2:;
  /* 11f726e2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f726e4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f726e6 je 0x11f72732 */
  if (C.zf) goto L_11f72732;
  /* 11f726e8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f726ec jne 0x11f726f8 */
  if (!C.zf) goto L_11f726f8;
  /* 11f726ee cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f726f1 je 0x11f72732 */
  if (C.zf) goto L_11f72732;
  /* 11f726f3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f726f6 je 0x11f72732 */
  if (C.zf) goto L_11f72732;
L_11f726f8:;
  /* 11f726f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f726fc je 0x11f7272c */
  if (C.zf) goto L_11f7272c;
  /* 11f726fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72700 je 0x11f7271b */
  if (C.zf) goto L_11f7271b;
  /* 11f72702 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11f72705 test byte ptr [ebx + 0x11f76b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11f76b01)))&(0x4u); fl_logic(_r,8); }
  /* 11f7270c je 0x11f72714 */
  if (C.zf) goto L_11f72714;
  /* 11f7270e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f72710 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f72711 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72712 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f72714:;
  /* 11f72714 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11f72716 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11f72718 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f72719 jmp 0x11f7272a */
  goto L_11f7272a;
L_11f7271b:;
  /* 11f7271b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11f7271e test byte ptr [edx + 0x11f76b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11f76b01)))&(0x4u); fl_logic(_r,8); }
  /* 11f72725 je 0x11f7272a */
  if (C.zf) goto L_11f7272a;
  /* 11f72727 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72728 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f7272a:;
  /* 11f7272a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11f7272c:;
  /* 11f7272c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7272d jmp 0x11f7268a */
  goto L_11f7268a;
L_11f72732:;
  /* 11f72732 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72734 je 0x11f7273a */
  if (C.zf) goto L_11f7273a;
  /* 11f72736 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11f72739 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11f7273a:;
  /* 11f7273a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11f7273c jmp 0x11f72658 */
  goto L_11f72658;
L_11f72741:;
  /* 11f72741 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f72743 je 0x11f72748 */
  if (C.zf) goto L_11f72748;
  /* 11f72745 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f72748:;
  /* 11f72748 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f7274b pop edi */
  EDI = (pop32());
  /* 11f7274c pop esi */
  ESI = (pop32());
  /* 11f7274d pop ebx */
  EBX = (pop32());
  /* 11f7274e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11f72750 pop ebp */
  EBP = (pop32());
  /* 11f72751 ret  */
  ESPCHK(0x11f7259eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002752 @ 0x11f72752 (306 bytes, 132 insns) */
void f_11f72752(void) {
  FTRACE(0x11f72752u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72752 push ecx */
  push32((uint32_t)(ECX));
  /* 11f72753 push ecx */
  push32((uint32_t)(ECX));
  /* 11f72754 mov eax, dword ptr [0x11f76910] */
  EAX = (r32((uint32_t)(0x11f76910)));
  /* 11f72759 push ebx */
  push32((uint32_t)(EBX));
  /* 11f7275a push ebp */
  push32((uint32_t)(EBP));
  /* 11f7275b mov ebp, dword ptr [0x11f7505c] */
  EBP = (r32((uint32_t)(0x11f7505c)));
  /* 11f72761 push esi */
  push32((uint32_t)(ESI));
  /* 11f72762 push edi */
  push32((uint32_t)(EDI));
  /* 11f72763 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f72765 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f72767 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f72769 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7276b jne 0x11f727a0 */
  if (!C.zf) goto L_11f727a0;
  /* 11f7276d call ebp */
  call_ind((uint32_t)(EBP), 0x11f7276fu);
  /* 11f7276f mov esi, eax */
  ESI = (EAX);
  /* 11f72771 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72773 je 0x11f72781 */
  if (C.zf) goto L_11f72781;
  /* 11f72775 mov dword ptr [0x11f76910], 1 */
  w32((uint32_t)(0x11f76910), (0x1u));
  /* 11f7277f jmp 0x11f727a9 */
  goto L_11f727a9;
L_11f72781:;
  /* 11f72781 call dword ptr [0x11f7506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7506c))), 0x11f72787u);
  /* 11f72787 mov edi, eax */
  EDI = (EAX);
  /* 11f72789 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7278b je 0x11f7287b */
  if (C.zf) goto L_11f7287b;
  /* 11f72791 mov dword ptr [0x11f76910], 2 */
  w32((uint32_t)(0x11f76910), (0x2u));
  /* 11f7279b jmp 0x11f7282f */
  goto L_11f7282f;
L_11f727a0:;
  /* 11f727a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f727a3 jne 0x11f7282a */
  if (!C.zf) goto L_11f7282a;
L_11f727a9:;
  /* 11f727a9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f727ab jne 0x11f727b9 */
  if (!C.zf) goto L_11f727b9;
  /* 11f727ad call ebp */
  call_ind((uint32_t)(EBP), 0x11f727afu);
  /* 11f727af mov esi, eax */
  ESI = (EAX);
  /* 11f727b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f727b3 je 0x11f7287b */
  if (C.zf) goto L_11f7287b;
L_11f727b9:;
  /* 11f727b9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f727bc mov eax, esi */
  EAX = (ESI);
  /* 11f727be je 0x11f727ce */
  if (C.zf) goto L_11f727ce;
L_11f727c0:;
  /* 11f727c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f727c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f727c2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f727c5 jne 0x11f727c0 */
  if (!C.zf) goto L_11f727c0;
  /* 11f727c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f727c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f727c9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11f727cc jne 0x11f727c0 */
  if (!C.zf) goto L_11f727c0;
L_11f727ce:;
  /* 11f727ce sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f727d0 mov edi, dword ptr [0x11f75064] */
  EDI = (r32((uint32_t)(0x11f75064)));
  /* 11f727d6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f727d8 push ebx */
  push32((uint32_t)(EBX));
  /* 11f727d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11f727da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f727db push ebx */
  push32((uint32_t)(EBX));
  /* 11f727dc push ebx */
  push32((uint32_t)(EBX));
  /* 11f727dd push eax */
  push32((uint32_t)(EAX));
  /* 11f727de push esi */
  push32((uint32_t)(ESI));
  /* 11f727df push ebx */
  push32((uint32_t)(EBX));
  /* 11f727e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f727e1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11f727e5 call edi */
  call_ind((uint32_t)(EDI), 0x11f727e7u);
  /* 11f727e7 mov ebp, eax */
  EBP = (EAX);
  /* 11f727e9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f727eb je 0x11f7281f */
  if (C.zf) goto L_11f7281f;
  /* 11f727ed push ebp */
  push32((uint32_t)(EBP));
  /* 11f727ee call 0x11f72ca1 */
  push32(0x11f727f3u); f_11f72ca1();
  /* 11f727f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f727f5 pop ecx */
  ECX = (pop32());
  /* 11f727f6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11f727fa je 0x11f7281f */
  if (C.zf) goto L_11f7281f;
  /* 11f727fc push ebx */
  push32((uint32_t)(EBX));
  /* 11f727fd push ebx */
  push32((uint32_t)(EBX));
  /* 11f727fe push ebp */
  push32((uint32_t)(EBP));
  /* 11f727ff push eax */
  push32((uint32_t)(EAX));
  /* 11f72800 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11f72804 push esi */
  push32((uint32_t)(ESI));
  /* 11f72805 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72806 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72807 call edi */
  call_ind((uint32_t)(EDI), 0x11f72809u);
  /* 11f72809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7280b jne 0x11f7281b */
  if (!C.zf) goto L_11f7281b;
  /* 11f7280d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11f72811 call 0x11f72c59 */
  push32(0x11f72816u); f_11f72c59();
  /* 11f72816 pop ecx */
  ECX = (pop32());
  /* 11f72817 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11f7281b:;
  /* 11f7281b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11f7281f:;
  /* 11f7281f push esi */
  push32((uint32_t)(ESI));
  /* 11f72820 call dword ptr [0x11f75068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75068))), 0x11f72826u);
  /* 11f72826 mov eax, ebx */
  EAX = (EBX);
  /* 11f72828 jmp 0x11f7287d */
  goto L_11f7287d;
L_11f7282a:;
  /* 11f7282a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7282d jne 0x11f7287b */
  if (!C.zf) goto L_11f7287b;
L_11f7282f:;
  /* 11f7282f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72831 jne 0x11f7283f */
  if (!C.zf) goto L_11f7283f;
  /* 11f72833 call dword ptr [0x11f7506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7506c))), 0x11f72839u);
  /* 11f72839 mov edi, eax */
  EDI = (EAX);
  /* 11f7283b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7283d je 0x11f7287b */
  if (C.zf) goto L_11f7287b;
L_11f7283f:;
  /* 11f7283f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72841 mov eax, edi */
  EAX = (EDI);
  /* 11f72843 je 0x11f7284f */
  if (C.zf) goto L_11f7284f;
L_11f72845:;
  /* 11f72845 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72846 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72848 jne 0x11f72845 */
  if (!C.zf) goto L_11f72845;
  /* 11f7284a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7284b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7284d jne 0x11f72845 */
  if (!C.zf) goto L_11f72845;
L_11f7284f:;
  /* 11f7284f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72851 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72852 mov ebp, eax */
  EBP = (EAX);
  /* 11f72854 push ebp */
  push32((uint32_t)(EBP));
  /* 11f72855 call 0x11f72ca1 */
  push32(0x11f7285au); f_11f72ca1();
  /* 11f7285a mov esi, eax */
  ESI = (EAX);
  /* 11f7285c pop ecx */
  ECX = (pop32());
  /* 11f7285d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7285f jne 0x11f72865 */
  if (!C.zf) goto L_11f72865;
  /* 11f72861 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f72863 jmp 0x11f72870 */
  goto L_11f72870;
L_11f72865:;
  /* 11f72865 push ebp */
  push32((uint32_t)(EBP));
  /* 11f72866 push edi */
  push32((uint32_t)(EDI));
  /* 11f72867 push esi */
  push32((uint32_t)(ESI));
  /* 11f72868 call 0x11f73290 */
  push32(0x11f7286du); f_11f73290();
  /* 11f7286d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f72870:;
  /* 11f72870 push edi */
  push32((uint32_t)(EDI));
  /* 11f72871 call dword ptr [0x11f75078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75078))), 0x11f72877u);
  /* 11f72877 mov eax, esi */
  EAX = (ESI);
  /* 11f72879 jmp 0x11f7287d */
  goto L_11f7287d;
L_11f7287b:;
  /* 11f7287b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f7287d:;
  /* 11f7287d pop edi */
  EDI = (pop32());
  /* 11f7287e pop esi */
  ESI = (pop32());
  /* 11f7287f pop ebp */
  EBP = (pop32());
  /* 11f72880 pop ebx */
  EBX = (pop32());
  /* 11f72881 pop ecx */
  ECX = (pop32());
  /* 11f72882 pop ecx */
  ECX = (pop32());
  /* 11f72883 ret  */
  ESPCHK(0x11f72752u, _esp0);
  ESP += 4; return;
}

/* FUN_10002884 @ 0x11f72884 (60 bytes, 20 insns) */
void f_11f72884(void) {
  FTRACE(0x11f72884u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72886 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72888 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7288c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f72891 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f72894 push eax */
  push32((uint32_t)(EAX));
  /* 11f72895 call dword ptr [0x11f75060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75060))), 0x11f7289bu);
  /* 11f7289b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7289d mov dword ptr [0x11f76c08], eax */
  w32((uint32_t)(0x11f76c08), (EAX));
  /* 11f728a2 je 0x11f728b9 */
  if (C.zf) goto L_11f728b9;
  /* 11f728a4 call 0x11f735c5 */
  push32(0x11f728a9u); f_11f735c5();
  /* 11f728a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f728ab jne 0x11f728bc */
  if (!C.zf) goto L_11f728bc;
  /* 11f728ad push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f728b3 call dword ptr [0x11f75058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75058))), 0x11f728b9u);
L_11f728b9:;
  /* 11f728b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f728bb ret  */
  ESPCHK(0x11f72884u, _esp0);
  ESP += 4; return;
L_11f728bc:;
  /* 11f728bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11f728be pop eax */
  EAX = (pop32());
  /* 11f728bf ret  */
  ESPCHK(0x11f72884u, _esp0);
  ESP += 4; return;
}

/* FUN_100028c0 @ 0x11f728c0 (117 bytes, 38 insns) */
void f_11f728c0(void) {
  FTRACE(0x11f728c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f728c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f728c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f728c3 cmp dword ptr [0x11f769c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f769c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f728c9 push ebp */
  push32((uint32_t)(EBP));
  /* 11f728ca mov ebp, dword ptr [0x11f7504c] */
  EBP = (r32((uint32_t)(0x11f7504c)));
  /* 11f728d0 jle 0x11f72916 */
  if ((C.zf||C.sf!=C.of)) goto L_11f72916;
  /* 11f728d2 mov eax, dword ptr [0x11f769cc] */
  EAX = (r32((uint32_t)(0x11f769cc)));
  /* 11f728d7 push esi */
  push32((uint32_t)(ESI));
  /* 11f728d8 push edi */
  push32((uint32_t)(EDI));
  /* 11f728d9 mov edi, dword ptr [0x11f75050] */
  EDI = (r32((uint32_t)(0x11f75050)));
  /* 11f728df lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11f728e2:;
  /* 11f728e2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f728e7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f728ec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f728ee call edi */
  call_ind((uint32_t)(EDI), 0x11f728f0u);
  /* 11f728f0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f728f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f728f7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f728f9 call edi */
  call_ind((uint32_t)(EDI), 0x11f728fbu);
  /* 11f728fb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11f728fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72900 push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f72906 call ebp */
  call_ind((uint32_t)(EBP), 0x11f72908u);
  /* 11f72908 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7290b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f7290c cmp ebx, dword ptr [0x11f769c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f769c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72912 jl 0x11f728e2 */
  if ((C.sf!=C.of)) goto L_11f728e2;
  /* 11f72914 pop edi */
  EDI = (pop32());
  /* 11f72915 pop esi */
  ESI = (pop32());
L_11f72916:;
  /* 11f72916 push dword ptr [0x11f769cc] */
  push32((uint32_t)(r32((uint32_t)(0x11f769cc))));
  /* 11f7291c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7291e push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f72924 call ebp */
  call_ind((uint32_t)(EBP), 0x11f72926u);
  /* 11f72926 push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f7292c call dword ptr [0x11f75058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75058))), 0x11f72932u);
  /* 11f72932 pop ebp */
  EBP = (pop32());
  /* 11f72933 pop ebx */
  EBX = (pop32());
  /* 11f72934 ret  */
  ESPCHK(0x11f728c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002935 @ 0x11f72935 (57 bytes, 18 insns) */
void f_11f72935(void) {
  FTRACE(0x11f72935u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72935 mov eax, dword ptr [0x11f767c0] */
  EAX = (r32((uint32_t)(0x11f767c0)));
  /* 11f7293a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7293d je 0x11f7294c */
  if (C.zf) goto L_11f7294c;
  /* 11f7293f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72941 jne 0x11f7296d */
  if (!C.zf) goto L_11f7296d;
  /* 11f72943 cmp dword ptr [0x11f767c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f767c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7294a jne 0x11f7296d */
  if (!C.zf) goto L_11f7296d;
L_11f7294c:;
  /* 11f7294c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11f72951 call 0x11f7296e */
  push32(0x11f72956u); f_11f7296e();
  /* 11f72956 mov eax, dword ptr [0x11f76914] */
  EAX = (r32((uint32_t)(0x11f76914)));
  /* 11f7295b pop ecx */
  ECX = (pop32());
  /* 11f7295c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7295e je 0x11f72962 */
  if (C.zf) goto L_11f72962;
  /* 11f72960 call eax */
  call_ind((uint32_t)(EAX), 0x11f72962u);
L_11f72962:;
  /* 11f72962 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11f72967 call 0x11f7296e */
  push32(0x11f7296cu); f_11f7296e();
  /* 11f7296c pop ecx */
  ECX = (pop32());
L_11f7296d:;
  /* 11f7296d ret  */
  ESPCHK(0x11f72935u, _esp0);
  ESP += 4; return;
}

/* FUN_1000296e @ 0x11f7296e (339 bytes, 100 insns) */
void f_11f7296e(void) {
  FTRACE(0x11f7296eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7296e push ebp */
  push32((uint32_t)(EBP));
  /* 11f7296f mov ebp, esp */
  EBP = (ESP);
  /* 11f72971 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f7297a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f7297c mov eax, 0x11f762f0 */
  EAX = (0x11f762f0u);
L_11f72981:;
  /* 11f72981 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72983 je 0x11f72990 */
  if (C.zf) goto L_11f72990;
  /* 11f72985 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72988 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72989 cmp eax, 0x11f76380 */
  { uint32_t _a=(EAX),_b=(0x11f76380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7298e jl 0x11f72981 */
  if ((C.sf!=C.of)) goto L_11f72981;
L_11f72990:;
  /* 11f72990 push esi */
  push32((uint32_t)(ESI));
  /* 11f72991 mov esi, ecx */
  ESI = (ECX);
  /* 11f72993 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11f72996 cmp edx, dword ptr [esi + 0x11f762f0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11f762f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7299c jne 0x11f72abe */
  if (!C.zf) goto L_11f72abe;
  /* 11f729a2 mov eax, dword ptr [0x11f767c0] */
  EAX = (r32((uint32_t)(0x11f767c0)));
  /* 11f729a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f729aa je 0x11f72a98 */
  if (C.zf) goto L_11f72a98;
  /* 11f729b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f729b2 jne 0x11f729c1 */
  if (!C.zf) goto L_11f729c1;
  /* 11f729b4 cmp dword ptr [0x11f767c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f767c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f729bb je 0x11f72a98 */
  if (C.zf) goto L_11f72a98;
L_11f729c1:;
  /* 11f729c1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f729c7 je 0x11f72abe */
  if (C.zf) goto L_11f72abe;
  /* 11f729cd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f729d3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11f729d8 push eax */
  push32((uint32_t)(EAX));
  /* 11f729d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f729db call dword ptr [0x11f75070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75070))), 0x11f729e1u);
  /* 11f729e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f729e3 jne 0x11f729f8 */
  if (!C.zf) goto L_11f729f8;
  /* 11f729e5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f729eb push 0x11f75420 */
  push32((uint32_t)(0x11f75420u));
  /* 11f729f0 push eax */
  push32((uint32_t)(EAX));
  /* 11f729f1 call 0x11f72d30 */
  push32(0x11f729f6u); f_11f72d30();
  /* 11f729f6 pop ecx */
  ECX = (pop32());
  /* 11f729f7 pop ecx */
  ECX = (pop32());
L_11f729f8:;
  /* 11f729f8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f729fe push edi */
  push32((uint32_t)(EDI));
  /* 11f729ff push eax */
  push32((uint32_t)(EAX));
  /* 11f72a00 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11f72a06 call 0x11f72e20 */
  push32(0x11f72a0bu); f_11f72e20();
  /* 11f72a0b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72a0c pop ecx */
  ECX = (pop32());
  /* 11f72a0d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72a10 jbe 0x11f72a3b */
  if ((C.cf||C.zf)) goto L_11f72a3b;
  /* 11f72a12 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f72a18 push eax */
  push32((uint32_t)(EAX));
  /* 11f72a19 call 0x11f72e20 */
  push32(0x11f72a1eu); f_11f72e20();
  /* 11f72a1e mov edi, eax */
  EDI = (EAX);
  /* 11f72a20 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11f72a26 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72a29 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f72a2b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72a2d push 0x11f7541c */
  push32((uint32_t)(0x11f7541cu));
  /* 11f72a32 push edi */
  push32((uint32_t)(EDI));
  /* 11f72a33 call 0x11f73ea0 */
  push32(0x11f72a38u); f_11f73ea0();
  /* 11f72a38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f72a3b:;
  /* 11f72a3b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f72a41 push 0x11f75400 */
  push32((uint32_t)(0x11f75400u));
  /* 11f72a46 push eax */
  push32((uint32_t)(EAX));
  /* 11f72a47 call 0x11f72d30 */
  push32(0x11f72a4cu); f_11f72d30();
  /* 11f72a4c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f72a52 push edi */
  push32((uint32_t)(EDI));
  /* 11f72a53 push eax */
  push32((uint32_t)(EAX));
  /* 11f72a54 call 0x11f72d40 */
  push32(0x11f72a59u); f_11f72d40();
  /* 11f72a59 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f72a5f push 0x11f753fc */
  push32((uint32_t)(0x11f753fcu));
  /* 11f72a64 push eax */
  push32((uint32_t)(EAX));
  /* 11f72a65 call 0x11f72d40 */
  push32(0x11f72a6au); f_11f72d40();
  /* 11f72a6a push dword ptr [esi + 0x11f762f4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11f762f4))));
  /* 11f72a70 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f72a76 push eax */
  push32((uint32_t)(EAX));
  /* 11f72a77 call 0x11f72d40 */
  push32(0x11f72a7cu); f_11f72d40();
  /* 11f72a7c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11f72a81 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11f72a87 push 0x11f753d4 */
  push32((uint32_t)(0x11f753d4u));
  /* 11f72a8c push eax */
  push32((uint32_t)(EAX));
  /* 11f72a8d call 0x11f73e0e */
  push32(0x11f72a92u); f_11f73e0e();
  /* 11f72a92 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72a95 pop edi */
  EDI = (pop32());
  /* 11f72a96 jmp 0x11f72abe */
  goto L_11f72abe;
L_11f72a98:;
  /* 11f72a98 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f72a9b lea esi, [esi + 0x11f762f4] */
  ESI = ((uint32_t)(ESI + 0x11f762f4));
  /* 11f72aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72aa3 push eax */
  push32((uint32_t)(EAX));
  /* 11f72aa4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f72aa6 call 0x11f72e20 */
  push32(0x11f72aabu); f_11f72e20();
  /* 11f72aab pop ecx */
  ECX = (pop32());
  /* 11f72aac push eax */
  push32((uint32_t)(EAX));
  /* 11f72aad push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f72aaf push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11f72ab1 call dword ptr [0x11f75080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75080))), 0x11f72ab7u);
  /* 11f72ab7 push eax */
  push32((uint32_t)(EAX));
  /* 11f72ab8 call dword ptr [0x11f75054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75054))), 0x11f72abeu);
L_11f72abe:;
  /* 11f72abe pop esi */
  ESI = (pop32());
  /* 11f72abf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f72ac0 ret  */
  ESPCHK(0x11f7296eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ac1 @ 0x11f72ac1 (41 bytes, 12 insns) */
void f_11f72ac1(void) {
  FTRACE(0x11f72ac1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72ac1 push esi */
  push32((uint32_t)(ESI));
  /* 11f72ac2 mov esi, dword ptr [0x11f75044] */
  ESI = (r32((uint32_t)(0x11f75044)));
  /* 11f72ac8 push dword ptr [0x11f763c4] */
  push32((uint32_t)(r32((uint32_t)(0x11f763c4))));
  /* 11f72ace call esi */
  call_ind((uint32_t)(ESI), 0x11f72ad0u);
  /* 11f72ad0 push dword ptr [0x11f763b4] */
  push32((uint32_t)(r32((uint32_t)(0x11f763b4))));
  /* 11f72ad6 call esi */
  call_ind((uint32_t)(ESI), 0x11f72ad8u);
  /* 11f72ad8 push dword ptr [0x11f763a4] */
  push32((uint32_t)(r32((uint32_t)(0x11f763a4))));
  /* 11f72ade call esi */
  call_ind((uint32_t)(ESI), 0x11f72ae0u);
  /* 11f72ae0 push dword ptr [0x11f76384] */
  push32((uint32_t)(r32((uint32_t)(0x11f76384))));
  /* 11f72ae6 call esi */
  call_ind((uint32_t)(ESI), 0x11f72ae8u);
  /* 11f72ae8 pop esi */
  ESI = (pop32());
  /* 11f72ae9 ret  */
  ESPCHK(0x11f72ac1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002aea @ 0x11f72aea (108 bytes, 34 insns) */
void f_11f72aea(void) {
  FTRACE(0x11f72aeau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72aea push esi */
  push32((uint32_t)(ESI));
  /* 11f72aeb push edi */
  push32((uint32_t)(EDI));
  /* 11f72aec mov edi, dword ptr [0x11f75074] */
  EDI = (r32((uint32_t)(0x11f75074)));
  /* 11f72af2 mov esi, 0x11f76380 */
  ESI = (0x11f76380u);
L_11f72af7:;
  /* 11f72af7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f72af9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72afb je 0x11f72b28 */
  if (C.zf) goto L_11f72b28;
  /* 11f72afd cmp esi, 0x11f763c4 */
  { uint32_t _a=(ESI),_b=(0x11f763c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b03 je 0x11f72b28 */
  if (C.zf) goto L_11f72b28;
  /* 11f72b05 cmp esi, 0x11f763b4 */
  { uint32_t _a=(ESI),_b=(0x11f763b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b0b je 0x11f72b28 */
  if (C.zf) goto L_11f72b28;
  /* 11f72b0d cmp esi, 0x11f763a4 */
  { uint32_t _a=(ESI),_b=(0x11f763a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b13 je 0x11f72b28 */
  if (C.zf) goto L_11f72b28;
  /* 11f72b15 cmp esi, 0x11f76384 */
  { uint32_t _a=(ESI),_b=(0x11f76384u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b1b je 0x11f72b28 */
  if (C.zf) goto L_11f72b28;
  /* 11f72b1d push eax */
  push32((uint32_t)(EAX));
  /* 11f72b1e call edi */
  call_ind((uint32_t)(EDI), 0x11f72b20u);
  /* 11f72b20 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f72b22 call 0x11f72c59 */
  push32(0x11f72b27u); f_11f72c59();
  /* 11f72b27 pop ecx */
  ECX = (pop32());
L_11f72b28:;
  /* 11f72b28 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72b2b cmp esi, 0x11f76440 */
  { uint32_t _a=(ESI),_b=(0x11f76440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b31 jl 0x11f72af7 */
  if ((C.sf!=C.of)) goto L_11f72af7;
  /* 11f72b33 push dword ptr [0x11f763a4] */
  push32((uint32_t)(r32((uint32_t)(0x11f763a4))));
  /* 11f72b39 call edi */
  call_ind((uint32_t)(EDI), 0x11f72b3bu);
  /* 11f72b3b push dword ptr [0x11f763b4] */
  push32((uint32_t)(r32((uint32_t)(0x11f763b4))));
  /* 11f72b41 call edi */
  call_ind((uint32_t)(EDI), 0x11f72b43u);
  /* 11f72b43 push dword ptr [0x11f763c4] */
  push32((uint32_t)(r32((uint32_t)(0x11f763c4))));
  /* 11f72b49 call edi */
  call_ind((uint32_t)(EDI), 0x11f72b4bu);
  /* 11f72b4b push dword ptr [0x11f76384] */
  push32((uint32_t)(r32((uint32_t)(0x11f76384))));
  /* 11f72b51 call edi */
  call_ind((uint32_t)(EDI), 0x11f72b53u);
  /* 11f72b53 pop edi */
  EDI = (pop32());
  /* 11f72b54 pop esi */
  ESI = (pop32());
  /* 11f72b55 ret  */
  ESPCHK(0x11f72aeau, _esp0);
  ESP += 4; return;
}

/* FUN_10002b56 @ 0x11f72b56 (97 bytes, 37 insns) */
void f_11f72b56(void) {
  FTRACE(0x11f72b56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72b56 push ebp */
  push32((uint32_t)(EBP));
  /* 11f72b57 mov ebp, esp */
  EBP = (ESP);
  /* 11f72b59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f72b5c push esi */
  push32((uint32_t)(ESI));
  /* 11f72b5d cmp dword ptr [eax*4 + 0x11f76380], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11f76380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b65 lea esi, [eax*4 + 0x11f76380] */
  ESI = ((uint32_t)(EAX*4 + 0x11f76380));
  /* 11f72b6c jne 0x11f72bac */
  if (!C.zf) goto L_11f72bac;
  /* 11f72b6e push edi */
  push32((uint32_t)(EDI));
  /* 11f72b6f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f72b71 call 0x11f72ca1 */
  push32(0x11f72b76u); f_11f72ca1();
  /* 11f72b76 mov edi, eax */
  EDI = (EAX);
  /* 11f72b78 pop ecx */
  ECX = (pop32());
  /* 11f72b79 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f72b7b jne 0x11f72b85 */
  if (!C.zf) goto L_11f72b85;
  /* 11f72b7d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f72b7f call 0x11f71fc6 */
  push32(0x11f72b84u); f_11f71fc6();
  /* 11f72b84 pop ecx */
  ECX = (pop32());
L_11f72b85:;
  /* 11f72b85 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f72b87 call 0x11f72b56 */
  push32(0x11f72b8cu); f_11f72b56();
  /* 11f72b8c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72b8f pop ecx */
  ECX = (pop32());
  /* 11f72b90 push edi */
  push32((uint32_t)(EDI));
  /* 11f72b91 jne 0x11f72b9d */
  if (!C.zf) goto L_11f72b9d;
  /* 11f72b93 call dword ptr [0x11f75044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75044))), 0x11f72b99u);
  /* 11f72b99 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f72b9b jmp 0x11f72ba3 */
  goto L_11f72ba3;
L_11f72b9d:;
  /* 11f72b9d call 0x11f72c59 */
  push32(0x11f72ba2u); f_11f72c59();
  /* 11f72ba2 pop ecx */
  ECX = (pop32());
L_11f72ba3:;
  /* 11f72ba3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11f72ba5 call 0x11f72bb7 */
  push32(0x11f72baau); f_11f72bb7();
  /* 11f72baa pop ecx */
  ECX = (pop32());
  /* 11f72bab pop edi */
  EDI = (pop32());
L_11f72bac:;
  /* 11f72bac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11f72bae call dword ptr [0x11f75040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75040))), 0x11f72bb4u);
  /* 11f72bb4 pop esi */
  ESI = (pop32());
  /* 11f72bb5 pop ebp */
  EBP = (pop32());
  /* 11f72bb6 ret  */
  ESPCHK(0x11f72b56u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bb7 @ 0x11f72bb7 (21 bytes, 7 insns) */
void f_11f72bb7(void) {
  FTRACE(0x11f72bb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72bb7 push ebp */
  push32((uint32_t)(EBP));
  /* 11f72bb8 mov ebp, esp */
  EBP = (ESP);
  /* 11f72bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f72bbd push dword ptr [eax*4 + 0x11f76380] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11f76380))));
  /* 11f72bc4 call dword ptr [0x11f75048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75048))), 0x11f72bcau);
  /* 11f72bca pop ebp */
  EBP = (pop32());
  /* 11f72bcb ret  */
  ESPCHK(0x11f72bb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bcc @ 0x11f72bcc (141 bytes, 56 insns) */
void f_11f72bcc(void) {
  FTRACE(0x11f72bccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72bcc push ebx */
  push32((uint32_t)(EBX));
  /* 11f72bcd push esi */
  push32((uint32_t)(ESI));
  /* 11f72bce mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11f72bd2 push edi */
  push32((uint32_t)(EDI));
  /* 11f72bd3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f72bd8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72bdb mov ebx, esi */
  EBX = (ESI);
  /* 11f72bdd ja 0x11f72bec */
  if ((!C.cf&&!C.zf)) goto L_11f72bec;
  /* 11f72bdf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72be1 jne 0x11f72be6 */
  if (!C.zf) goto L_11f72be6;
  /* 11f72be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f72be5 pop esi */
  ESI = (pop32());
L_11f72be6:;
  /* 11f72be6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72be9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11f72bec:;
  /* 11f72bec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f72bee cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72bf1 ja 0x11f72c2d */
  if ((!C.cf&&!C.zf)) goto L_11f72c2d;
  /* 11f72bf3 cmp ebx, dword ptr [0x11f765d0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f765d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72bf9 ja 0x11f72c18 */
  if ((!C.cf&&!C.zf)) goto L_11f72c18;
  /* 11f72bfb push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72bfd call 0x11f72b56 */
  push32(0x11f72c02u); f_11f72b56();
  /* 11f72c02 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72c03 call 0x11f73959 */
  push32(0x11f72c08u); f_11f73959();
  /* 11f72c08 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72c0a mov edi, eax */
  EDI = (EAX);
  /* 11f72c0c call 0x11f72bb7 */
  push32(0x11f72c11u); f_11f72bb7();
  /* 11f72c11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72c14 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f72c16 jne 0x11f72c43 */
  if (!C.zf) goto L_11f72c43;
L_11f72c18:;
  /* 11f72c18 push esi */
  push32((uint32_t)(ESI));
  /* 11f72c19 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f72c1b push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f72c21 call dword ptr [0x11f7503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7503c))), 0x11f72c27u);
  /* 11f72c27 mov edi, eax */
  EDI = (EAX);
  /* 11f72c29 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f72c2b jne 0x11f72c4f */
  if (!C.zf) goto L_11f72c4f;
L_11f72c2d:;
  /* 11f72c2d cmp dword ptr [0x11f7698c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f7698c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72c34 je 0x11f72c4f */
  if (C.zf) goto L_11f72c4f;
  /* 11f72c36 push esi */
  push32((uint32_t)(ESI));
  /* 11f72c37 call 0x11f73ff8 */
  push32(0x11f72c3cu); f_11f73ff8();
  /* 11f72c3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72c3e pop ecx */
  ECX = (pop32());
  /* 11f72c3f je 0x11f72c55 */
  if (C.zf) goto L_11f72c55;
  /* 11f72c41 jmp 0x11f72bec */
  goto L_11f72bec;
L_11f72c43:;
  /* 11f72c43 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72c46 push edi */
  push32((uint32_t)(EDI));
  /* 11f72c47 call 0x11f73fa0 */
  push32(0x11f72c4cu); f_11f73fa0();
  /* 11f72c4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f72c4f:;
  /* 11f72c4f mov eax, edi */
  EAX = (EDI);
L_11f72c51:;
  /* 11f72c51 pop edi */
  EDI = (pop32());
  /* 11f72c52 pop esi */
  ESI = (pop32());
  /* 11f72c53 pop ebx */
  EBX = (pop32());
  /* 11f72c54 ret  */
  ESPCHK(0x11f72bccu, _esp0);
  ESP += 4; return;
L_11f72c55:;
  /* 11f72c55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72c57 jmp 0x11f72c51 */
  goto L_11f72c51;
}

/* FUN_10002c59 @ 0x11f72c59 (72 bytes, 29 insns) */
void f_11f72c59(void) {
  FTRACE(0x11f72c59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72c59 push esi */
  push32((uint32_t)(ESI));
  /* 11f72c5a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72c5e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72c60 je 0x11f72c9f */
  if (C.zf) goto L_11f72c9f;
  /* 11f72c62 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72c64 call 0x11f72b56 */
  push32(0x11f72c69u); f_11f72b56();
  /* 11f72c69 push esi */
  push32((uint32_t)(ESI));
  /* 11f72c6a call 0x11f73603 */
  push32(0x11f72c6fu); f_11f73603();
  /* 11f72c6f pop ecx */
  ECX = (pop32());
  /* 11f72c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72c72 pop ecx */
  ECX = (pop32());
  /* 11f72c73 je 0x11f72c88 */
  if (C.zf) goto L_11f72c88;
  /* 11f72c75 push esi */
  push32((uint32_t)(ESI));
  /* 11f72c76 push eax */
  push32((uint32_t)(EAX));
  /* 11f72c77 call 0x11f7362e */
  push32(0x11f72c7cu); f_11f7362e();
  /* 11f72c7c push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72c7e call 0x11f72bb7 */
  push32(0x11f72c83u); f_11f72bb7();
  /* 11f72c83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72c86 pop esi */
  ESI = (pop32());
  /* 11f72c87 ret  */
  ESPCHK(0x11f72c59u, _esp0);
  ESP += 4; return;
L_11f72c88:;
  /* 11f72c88 push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72c8a call 0x11f72bb7 */
  push32(0x11f72c8fu); f_11f72bb7();
  /* 11f72c8f pop ecx */
  ECX = (pop32());
  /* 11f72c90 push esi */
  push32((uint32_t)(ESI));
  /* 11f72c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72c93 push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f72c99 call dword ptr [0x11f7504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7504c))), 0x11f72c9fu);
L_11f72c9f:;
  /* 11f72c9f pop esi */
  ESI = (pop32());
  /* 11f72ca0 ret  */
  ESPCHK(0x11f72c59u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11f72ca1 (18 bytes, 6 insns) */
void f_11f72ca1(void) {
  FTRACE(0x11f72ca1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72ca1 push dword ptr [0x11f7698c] */
  push32((uint32_t)(r32((uint32_t)(0x11f7698c))));
  /* 11f72ca7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11f72cab call 0x11f72cb3 */
  push32(0x11f72cb0u); f_11f72cb3();
  /* 11f72cb0 pop ecx */
  ECX = (pop32());
  /* 11f72cb1 pop ecx */
  ECX = (pop32());
  /* 11f72cb2 ret  */
  ESPCHK(0x11f72ca1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11f72cb3 (44 bytes, 16 insns) */
void f_11f72cb3(void) {
  FTRACE(0x11f72cb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72cb3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72cb8 ja 0x11f72cdc */
  if ((!C.cf&&!C.zf)) goto L_11f72cdc;
L_11f72cba:;
  /* 11f72cba push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f72cbe call 0x11f72cdf */
  push32(0x11f72cc3u); f_11f72cdf();
  /* 11f72cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72cc5 pop ecx */
  ECX = (pop32());
  /* 11f72cc6 jne 0x11f72cde */
  if (!C.zf) goto L_11f72cde;
  /* 11f72cc8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72ccc je 0x11f72cde */
  if (C.zf) goto L_11f72cde;
  /* 11f72cce push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f72cd2 call 0x11f73ff8 */
  push32(0x11f72cd7u); f_11f73ff8();
  /* 11f72cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f72cd9 pop ecx */
  ECX = (pop32());
  /* 11f72cda jne 0x11f72cba */
  if (!C.zf) goto L_11f72cba;
L_11f72cdc:;
  /* 11f72cdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f72cde:;
  /* 11f72cde ret  */
  ESPCHK(0x11f72cb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cdf @ 0x11f72cdf (78 bytes, 30 insns) */
void f_11f72cdf(void) {
  FTRACE(0x11f72cdfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72cdf push esi */
  push32((uint32_t)(ESI));
  /* 11f72ce0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72ce4 cmp esi, dword ptr [0x11f765d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11f765d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72cea push edi */
  push32((uint32_t)(EDI));
  /* 11f72ceb ja 0x11f72d0e */
  if ((!C.cf&&!C.zf)) goto L_11f72d0e;
  /* 11f72ced push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72cef call 0x11f72b56 */
  push32(0x11f72cf4u); f_11f72b56();
  /* 11f72cf4 push esi */
  push32((uint32_t)(ESI));
  /* 11f72cf5 call 0x11f73959 */
  push32(0x11f72cfau); f_11f73959();
  /* 11f72cfa push 9 */
  push32((uint32_t)(0x9u));
  /* 11f72cfc mov edi, eax */
  EDI = (EAX);
  /* 11f72cfe call 0x11f72bb7 */
  push32(0x11f72d03u); f_11f72bb7();
  /* 11f72d03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72d06 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11f72d08 je 0x11f72d0e */
  if (C.zf) goto L_11f72d0e;
  /* 11f72d0a mov eax, edi */
  EAX = (EDI);
  /* 11f72d0c jmp 0x11f72d2a */
  goto L_11f72d2a;
L_11f72d0e:;
  /* 11f72d0e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f72d10 jne 0x11f72d15 */
  if (!C.zf) goto L_11f72d15;
  /* 11f72d12 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f72d14 pop esi */
  ESI = (pop32());
L_11f72d15:;
  /* 11f72d15 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72d18 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11f72d1b push esi */
  push32((uint32_t)(ESI));
  /* 11f72d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f72d1e push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f72d24 call dword ptr [0x11f7503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7503c))), 0x11f72d2au);
L_11f72d2a:;
  /* 11f72d2a pop edi */
  EDI = (pop32());
  /* 11f72d2b pop esi */
  ESI = (pop32());
  /* 11f72d2c ret  */
  ESPCHK(0x11f72cdfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d30 @ 0x11f72d30 (7 bytes, 3 insns) */
void f_11f72d30(void) {
  FTRACE(0x11f72d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72d30 push edi */
  push32((uint32_t)(EDI));
  /* 11f72d31 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72d35 jmp 0x11f72da1 */
  jmp_ind(0x11f72da1u); return;
}

/* FUN_10002d40 @ 0x11f72d40 (224 bytes, 84 insns) */
void f_11f72d40(void) {
  FTRACE(0x11f72d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72d40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f72d44 push edi */
  push32((uint32_t)(EDI));
  /* 11f72d45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f72d4b je 0x11f72d5c */
  if (C.zf) goto L_11f72d5c;
L_11f72d4d:;
  /* 11f72d4d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f72d4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72d50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f72d52 je 0x11f72d8f */
  if (C.zf) goto L_11f72d8f;
  /* 11f72d54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f72d5a jne 0x11f72d4d */
  if (!C.zf) goto L_11f72d4d;
L_11f72d5c:;
  /* 11f72d5c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f72d5e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f72d63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72d65 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f72d68 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72d6a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72d6d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f72d72 je 0x11f72d5c */
  if (C.zf) goto L_11f72d5c;
  /* 11f72d74 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f72d77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f72d79 je 0x11f72d9e */
  if (C.zf) goto L_11f72d9e;
  /* 11f72d7b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f72d7d je 0x11f72d99 */
  if (C.zf) goto L_11f72d99;
  /* 11f72d7f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f72d84 je 0x11f72d94 */
  if (C.zf) goto L_11f72d94;
  /* 11f72d86 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f72d8b je 0x11f72d8f */
  if (C.zf) goto L_11f72d8f;
  /* 11f72d8d jmp 0x11f72d5c */
  goto L_11f72d5c;
L_11f72d8f:;
  /* 11f72d8f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11f72d92 jmp 0x11f72da1 */
  goto L_11f72da1;
L_11f72d94:;
  /* 11f72d94 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11f72d97 jmp 0x11f72da1 */
  goto L_11f72da1;
L_11f72d99:;
  /* 11f72d99 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11f72d9c jmp 0x11f72da1 */
  goto L_11f72da1;
L_11f72d9e:;
  /* 11f72d9e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11f72da1:;
  /* 11f72da1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f72da5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f72dab je 0x11f72dc6 */
  if (C.zf) goto L_11f72dc6;
L_11f72dad:;
  /* 11f72dad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f72daf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72db0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f72db2 je 0x11f72e18 */
  if (C.zf) goto L_11f72e18;
  /* 11f72db4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f72db6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f72db7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f72dbd jne 0x11f72dad */
  if (!C.zf) goto L_11f72dad;
  /* 11f72dbf jmp 0x11f72dc6 */
  goto L_11f72dc6;
L_11f72dc1:;
  /* 11f72dc1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f72dc3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f72dc6:;
  /* 11f72dc6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f72dcb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f72dcd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72dcf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f72dd2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72dd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f72dd6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72dd9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f72dde je 0x11f72dc1 */
  if (C.zf) goto L_11f72dc1;
  /* 11f72de0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f72de2 je 0x11f72e18 */
  if (C.zf) goto L_11f72e18;
  /* 11f72de4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f72de6 je 0x11f72e0f */
  if (C.zf) goto L_11f72e0f;
  /* 11f72de8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f72dee je 0x11f72e02 */
  if (C.zf) goto L_11f72e02;
  /* 11f72df0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f72df6 je 0x11f72dfa */
  if (C.zf) goto L_11f72dfa;
  /* 11f72df8 jmp 0x11f72dc1 */
  goto L_11f72dc1;
L_11f72dfa:;
  /* 11f72dfa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f72dfc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72e00 pop edi */
  EDI = (pop32());
  /* 11f72e01 ret  */
  ESPCHK(0x11f72d40u, _esp0);
  ESP += 4; return;
L_11f72e02:;
  /* 11f72e02 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f72e05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72e09 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11f72e0d pop edi */
  EDI = (pop32());
  /* 11f72e0e ret  */
  ESPCHK(0x11f72d40u, _esp0);
  ESP += 4; return;
L_11f72e0f:;
  /* 11f72e0f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11f72e12 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72e16 pop edi */
  EDI = (pop32());
  /* 11f72e17 ret  */
  ESPCHK(0x11f72d40u, _esp0);
  ESP += 4; return;
L_11f72e18:;
  /* 11f72e18 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11f72e1a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f72e1e pop edi */
  EDI = (pop32());
  /* 11f72e1f ret  */
  ESPCHK(0x11f72d40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11f72e20 (123 bytes, 44 insns) */
void f_11f72e20(void) {
  FTRACE(0x11f72e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72e20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f72e24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f72e2a je 0x11f72e40 */
  if (C.zf) goto L_11f72e40;
L_11f72e2c:;
  /* 11f72e2c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11f72e2e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72e2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f72e31 je 0x11f72e73 */
  if (C.zf) goto L_11f72e73;
  /* 11f72e33 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11f72e39 jne 0x11f72e2c */
  if (!C.zf) goto L_11f72e2c;
  /* 11f72e3b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f72e40:;
  /* 11f72e40 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f72e42 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f72e47 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72e49 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f72e4c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72e4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72e51 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f72e56 je 0x11f72e40 */
  if (C.zf) goto L_11f72e40;
  /* 11f72e58 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f72e5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f72e5d je 0x11f72e91 */
  if (C.zf) goto L_11f72e91;
  /* 11f72e5f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11f72e61 je 0x11f72e87 */
  if (C.zf) goto L_11f72e87;
  /* 11f72e63 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f72e68 je 0x11f72e7d */
  if (C.zf) goto L_11f72e7d;
  /* 11f72e6a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f72e6f je 0x11f72e73 */
  if (C.zf) goto L_11f72e73;
  /* 11f72e71 jmp 0x11f72e40 */
  goto L_11f72e40;
L_11f72e73:;
  /* 11f72e73 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11f72e76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f72e7a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72e7c ret  */
  ESPCHK(0x11f72e20u, _esp0);
  ESP += 4; return;
L_11f72e7d:;
  /* 11f72e7d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11f72e80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f72e84 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72e86 ret  */
  ESPCHK(0x11f72e20u, _esp0);
  ESP += 4; return;
L_11f72e87:;
  /* 11f72e87 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11f72e8a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f72e8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72e90 ret  */
  ESPCHK(0x11f72e20u, _esp0);
  ESP += 4; return;
L_11f72e91:;
  /* 11f72e91 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11f72e94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f72e98 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72e9a ret  */
  ESPCHK(0x11f72e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e9b @ 0x11f72e9b (429 bytes, 143 insns) */
void f_11f72e9b(void) {
  FTRACE(0x11f72e9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f72e9b push ebp */
  push32((uint32_t)(EBP));
  /* 11f72e9c mov ebp, esp */
  EBP = (ESP);
  /* 11f72e9e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f72ea1 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72ea2 push esi */
  push32((uint32_t)(ESI));
  /* 11f72ea3 push edi */
  push32((uint32_t)(EDI));
  /* 11f72ea4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f72ea6 call 0x11f72b56 */
  push32(0x11f72eabu); f_11f72b56();
  /* 11f72eab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f72eae call 0x11f73048 */
  push32(0x11f72eb3u); f_11f73048();
  /* 11f72eb3 mov ebx, eax */
  EBX = (EAX);
  /* 11f72eb5 pop ecx */
  ECX = (pop32());
  /* 11f72eb6 cmp ebx, dword ptr [0x11f769d0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f769d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72ebc pop ecx */
  ECX = (pop32());
  /* 11f72ebd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f72ec0 jne 0x11f72ec9 */
  if (!C.zf) goto L_11f72ec9;
L_11f72ec2:;
  /* 11f72ec2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f72ec4 jmp 0x11f73039 */
  goto L_11f73039;
L_11f72ec9:;
  /* 11f72ec9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f72ecb je 0x11f73027 */
  if (C.zf) goto L_11f73027;
  /* 11f72ed1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f72ed3 mov eax, 0x11f764d8 */
  EAX = (0x11f764d8u);
L_11f72ed8:;
  /* 11f72ed8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72eda je 0x11f72f50 */
  if (C.zf) goto L_11f72f50;
  /* 11f72edc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72edf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f72ee0 cmp eax, 0x11f765c8 */
  { uint32_t _a=(EAX),_b=(0x11f765c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72ee5 jl 0x11f72ed8 */
  if ((C.sf!=C.of)) goto L_11f72ed8;
  /* 11f72ee7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f72eea push eax */
  push32((uint32_t)(EAX));
  /* 11f72eeb push ebx */
  push32((uint32_t)(EBX));
  /* 11f72eec call dword ptr [0x11f75034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75034))), 0x11f72ef2u);
  /* 11f72ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f72ef4 pop esi */
  ESI = (pop32());
  /* 11f72ef5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72ef7 jne 0x11f7301e */
  if (!C.zf) goto L_11f7301e;
  /* 11f72efd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f72eff and dword ptr [0x11f76c04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f76c04)))&(0x0u); w32((uint32_t)(0x11f76c04), (_r)); fl_logic(_r,32); }
  /* 11f72f06 pop ecx */
  ECX = (pop32());
  /* 11f72f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72f09 mov edi, 0x11f76b00 */
  EDI = (0x11f76b00u);
  /* 11f72f0e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72f11 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f72f13 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f72f14 mov dword ptr [0x11f769d0], ebx */
  w32((uint32_t)(0x11f769d0), (EBX));
  /* 11f72f1a jbe 0x11f7300b */
  if ((C.cf||C.zf)) goto L_11f7300b;
  /* 11f72f20 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72f24 je 0x11f72fe6 */
  if (C.zf) goto L_11f72fe6;
  /* 11f72f2a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11f72f2d:;
  /* 11f72f2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f72f2f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f72f31 je 0x11f72fe6 */
  if (C.zf) goto L_11f72fe6;
  /* 11f72f37 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11f72f3b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11f72f3e:;
  /* 11f72f3e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72f40 ja 0x11f72fda */
  if ((!C.cf&&!C.zf)) goto L_11f72fda;
  /* 11f72f46 or byte ptr [eax + 0x11f76b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(0x4u); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f72f4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72f4e jmp 0x11f72f3e */
  goto L_11f72f3e;
L_11f72f50:;
  /* 11f72f50 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f72f54 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f72f56 pop ecx */
  ECX = (pop32());
  /* 11f72f57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f72f59 mov edi, 0x11f76b00 */
  EDI = (0x11f76b00u);
  /* 11f72f5e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11f72f61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f72f63 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f72f66 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f72f67 lea ebx, [esi + 0x11f764e8] */
  EBX = ((uint32_t)(ESI + 0x11f764e8));
L_11f72f6d:;
  /* 11f72f6d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72f70 mov ecx, ebx */
  ECX = (EBX);
  /* 11f72f72 je 0x11f72fa0 */
  if (C.zf) goto L_11f72fa0;
L_11f72f74:;
  /* 11f72f74 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f72f77 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f72f79 je 0x11f72fa0 */
  if (C.zf) goto L_11f72fa0;
  /* 11f72f7b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11f72f7e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11f72f81 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72f83 ja 0x11f72f99 */
  if ((!C.cf&&!C.zf)) goto L_11f72f99;
  /* 11f72f85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f72f88 mov dl, byte ptr [edx + 0x11f764d0] */
  DL = (r8((uint32_t)(EDX + 0x11f764d0)));
L_11f72f8e:;
  /* 11f72f8e or byte ptr [eax + 0x11f76b01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(DL); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f72f94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72f95 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72f97 jbe 0x11f72f8e */
  if ((C.cf||C.zf)) goto L_11f72f8e;
L_11f72f99:;
  /* 11f72f99 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72f9a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72f9b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72f9e jne 0x11f72f74 */
  if (!C.zf) goto L_11f72f74;
L_11f72fa0:;
  /* 11f72fa0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f72fa3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f72fa6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72faa jb 0x11f72f6d */
  if (C.cf) goto L_11f72f6d;
  /* 11f72fac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f72faf mov dword ptr [0x11f769ec], 1 */
  w32((uint32_t)(0x11f769ec), (0x1u));
  /* 11f72fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11f72fba mov dword ptr [0x11f769d0], eax */
  w32((uint32_t)(0x11f769d0), (EAX));
  /* 11f72fbf call 0x11f73092 */
  push32(0x11f72fc4u); f_11f73092();
  /* 11f72fc4 lea esi, [esi + 0x11f764dc] */
  ESI = ((uint32_t)(ESI + 0x11f764dc));
  /* 11f72fca mov edi, 0x11f769e0 */
  EDI = (0x11f769e0u);
  /* 11f72fcf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f72fd0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f72fd1 pop ecx */
  ECX = (pop32());
  /* 11f72fd2 mov dword ptr [0x11f76c04], eax */
  w32((uint32_t)(0x11f76c04), (EAX));
  /* 11f72fd7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11f72fd8 jmp 0x11f7302c */
  goto L_11f7302c;
L_11f72fda:;
  /* 11f72fda inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72fdb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f72fdc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f72fe0 jne 0x11f72f2d */
  if (!C.zf) goto L_11f72f2d;
L_11f72fe6:;
  /* 11f72fe6 mov eax, esi */
  EAX = (ESI);
L_11f72fe8:;
  /* 11f72fe8 or byte ptr [eax + 0x11f76b01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(0x8u); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f72fef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f72ff0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f72ff5 jb 0x11f72fe8 */
  if (C.cf) goto L_11f72fe8;
  /* 11f72ff7 push ebx */
  push32((uint32_t)(EBX));
  /* 11f72ff8 call 0x11f73092 */
  push32(0x11f72ffdu); f_11f73092();
  /* 11f72ffd pop ecx */
  ECX = (pop32());
  /* 11f72ffe mov dword ptr [0x11f76c04], eax */
  w32((uint32_t)(0x11f76c04), (EAX));
  /* 11f73003 mov dword ptr [0x11f769ec], esi */
  w32((uint32_t)(0x11f769ec), (ESI));
  /* 11f73009 jmp 0x11f73012 */
  goto L_11f73012;
L_11f7300b:;
  /* 11f7300b and dword ptr [0x11f769ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f769ec)))&(0x0u); w32((uint32_t)(0x11f769ec), (_r)); fl_logic(_r,32); }
L_11f73012:;
  /* 11f73012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73014 mov edi, 0x11f769e0 */
  EDI = (0x11f769e0u);
  /* 11f73019 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f7301a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f7301b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f7301c jmp 0x11f7302c */
  goto L_11f7302c;
L_11f7301e:;
  /* 11f7301e cmp dword ptr [0x11f76978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f76978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73025 je 0x11f73036 */
  if (C.zf) goto L_11f73036;
L_11f73027:;
  /* 11f73027 call 0x11f730c5 */
  push32(0x11f7302cu); f_11f730c5();
L_11f7302c:;
  /* 11f7302c call 0x11f730ee */
  push32(0x11f73031u); f_11f730ee();
  /* 11f73031 jmp 0x11f72ec2 */
  goto L_11f72ec2;
L_11f73036:;
  /* 11f73036 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11f73039:;
  /* 11f73039 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f7303b call 0x11f72bb7 */
  push32(0x11f73040u); f_11f72bb7();
  /* 11f73040 pop ecx */
  ECX = (pop32());
  /* 11f73041 mov eax, esi */
  EAX = (ESI);
  /* 11f73043 pop edi */
  EDI = (pop32());
  /* 11f73044 pop esi */
  ESI = (pop32());
  /* 11f73045 pop ebx */
  EBX = (pop32());
  /* 11f73046 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73047 ret  */
  ESPCHK(0x11f72e9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003048 @ 0x11f73048 (74 bytes, 15 insns) */
void f_11f73048(void) {
  FTRACE(0x11f73048u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73048 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f7304c and dword ptr [0x11f76978], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f76978)))&(0x0u); w32((uint32_t)(0x11f76978), (_r)); fl_logic(_r,32); }
  /* 11f73053 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73056 jne 0x11f73068 */
  if (!C.zf) goto L_11f73068;
  /* 11f73058 mov dword ptr [0x11f76978], 1 */
  w32((uint32_t)(0x11f76978), (0x1u));
  /* 11f73062 jmp dword ptr [0x11f75038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f75038)))); return;
L_11f73068:;
  /* 11f73068 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7306b jne 0x11f7307d */
  if (!C.zf) goto L_11f7307d;
  /* 11f7306d mov dword ptr [0x11f76978], 1 */
  w32((uint32_t)(0x11f76978), (0x1u));
  /* 11f73077 jmp dword ptr [0x11f75030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f75030)))); return;
L_11f7307d:;
  /* 11f7307d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73080 jne 0x11f73091 */
  if (!C.zf) goto L_11f73091;
  /* 11f73082 mov eax, dword ptr [0x11f769a8] */
  EAX = (r32((uint32_t)(0x11f769a8)));
  /* 11f73087 mov dword ptr [0x11f76978], 1 */
  w32((uint32_t)(0x11f76978), (0x1u));
L_11f73091:;
  /* 11f73091 ret  */
  ESPCHK(0x11f73048u, _esp0);
  ESP += 4; return;
}

/* FUN_10003092 @ 0x11f73092 (51 bytes, 19 insns) */
void f_11f73092(void) {
  FTRACE(0x11f73092u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73092 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f73096 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7309b je 0x11f730bf */
  if (C.zf) goto L_11f730bf;
  /* 11f7309d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f730a0 je 0x11f730b9 */
  if (C.zf) goto L_11f730b9;
  /* 11f730a2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f730a5 je 0x11f730b3 */
  if (C.zf) goto L_11f730b3;
  /* 11f730a7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11f730a8 je 0x11f730ad */
  if (C.zf) goto L_11f730ad;
  /* 11f730aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f730ac ret  */
  ESPCHK(0x11f73092u, _esp0);
  ESP += 4; return;
L_11f730ad:;
  /* 11f730ad mov eax, 0x404 */
  EAX = (0x404u);
  /* 11f730b2 ret  */
  ESPCHK(0x11f73092u, _esp0);
  ESP += 4; return;
L_11f730b3:;
  /* 11f730b3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11f730b8 ret  */
  ESPCHK(0x11f73092u, _esp0);
  ESP += 4; return;
L_11f730b9:;
  /* 11f730b9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11f730be ret  */
  ESPCHK(0x11f73092u, _esp0);
  ESP += 4; return;
L_11f730bf:;
  /* 11f730bf mov eax, 0x411 */
  EAX = (0x411u);
  /* 11f730c4 ret  */
  ESPCHK(0x11f73092u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c5 @ 0x11f730c5 (41 bytes, 17 insns) */
void f_11f730c5(void) {
  FTRACE(0x11f730c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f730c5 push edi */
  push32((uint32_t)(EDI));
  /* 11f730c6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f730c8 pop ecx */
  ECX = (pop32());
  /* 11f730c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f730cb mov edi, 0x11f76b00 */
  EDI = (0x11f76b00u);
  /* 11f730d0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f730d2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11f730d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f730d5 mov edi, 0x11f769e0 */
  EDI = (0x11f769e0u);
  /* 11f730da mov dword ptr [0x11f769d0], eax */
  w32((uint32_t)(0x11f769d0), (EAX));
  /* 11f730df mov dword ptr [0x11f769ec], eax */
  w32((uint32_t)(0x11f769ec), (EAX));
  /* 11f730e4 mov dword ptr [0x11f76c04], eax */
  w32((uint32_t)(0x11f76c04), (EAX));
  /* 11f730e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f730ea stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f730eb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11f730ec pop edi */
  EDI = (pop32());
  /* 11f730ed ret  */
  ESPCHK(0x11f730c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100030ee @ 0x11f730ee (389 bytes, 124 insns) */
void f_11f730ee(void) {
  FTRACE(0x11f730eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f730ee push ebp */
  push32((uint32_t)(EBP));
  /* 11f730ef mov ebp, esp */
  EBP = (ESP);
  /* 11f730f1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f730f7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f730fa push esi */
  push32((uint32_t)(ESI));
  /* 11f730fb push eax */
  push32((uint32_t)(EAX));
  /* 11f730fc push dword ptr [0x11f769d0] */
  push32((uint32_t)(r32((uint32_t)(0x11f769d0))));
  /* 11f73102 call dword ptr [0x11f75034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75034))), 0x11f73108u);
  /* 11f73108 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7310b jne 0x11f73227 */
  if (!C.zf) goto L_11f73227;
  /* 11f73111 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73113 mov esi, 0x100 */
  ESI = (0x100u);
L_11f73118:;
  /* 11f73118 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11f7311f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f73120 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73122 jb 0x11f73118 */
  if (C.cf) goto L_11f73118;
  /* 11f73124 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11f73127 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11f7312e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f73130 je 0x11f73169 */
  if (C.zf) goto L_11f73169;
  /* 11f73132 push ebx */
  push32((uint32_t)(EBX));
  /* 11f73133 push edi */
  push32((uint32_t)(EDI));
  /* 11f73134 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11f73137:;
  /* 11f73137 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11f7313a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11f7313d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7313f ja 0x11f7315e */
  if ((!C.cf&&!C.zf)) goto L_11f7315e;
  /* 11f73141 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f73143 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11f7314a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f7314b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11f73150 mov ebx, ecx */
  EBX = (ECX);
  /* 11f73152 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73155 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f73157 mov ecx, ebx */
  ECX = (EBX);
  /* 11f73159 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f7315c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11f7315e:;
  /* 11f7315e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f7315f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f73160 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11f73163 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f73165 jne 0x11f73137 */
  if (!C.zf) goto L_11f73137;
  /* 11f73167 pop edi */
  EDI = (pop32());
  /* 11f73168 pop ebx */
  EBX = (pop32());
L_11f73169:;
  /* 11f73169 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7316b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11f73171 push dword ptr [0x11f76c04] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c04))));
  /* 11f73177 push dword ptr [0x11f769d0] */
  push32((uint32_t)(r32((uint32_t)(0x11f769d0))));
  /* 11f7317d push eax */
  push32((uint32_t)(EAX));
  /* 11f7317e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f73184 push esi */
  push32((uint32_t)(ESI));
  /* 11f73185 push eax */
  push32((uint32_t)(EAX));
  /* 11f73186 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f73188 call 0x11f74262 */
  push32(0x11f7318du); f_11f74262();
  /* 11f7318d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f7318f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11f73195 push dword ptr [0x11f769d0] */
  push32((uint32_t)(r32((uint32_t)(0x11f769d0))));
  /* 11f7319b push esi */
  push32((uint32_t)(ESI));
  /* 11f7319c push eax */
  push32((uint32_t)(EAX));
  /* 11f7319d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f731a3 push esi */
  push32((uint32_t)(ESI));
  /* 11f731a4 push eax */
  push32((uint32_t)(EAX));
  /* 11f731a5 push esi */
  push32((uint32_t)(ESI));
  /* 11f731a6 push dword ptr [0x11f76c04] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c04))));
  /* 11f731ac call 0x11f74013 */
  push32(0x11f731b1u); f_11f74013();
  /* 11f731b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f731b3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11f731b9 push dword ptr [0x11f769d0] */
  push32((uint32_t)(r32((uint32_t)(0x11f769d0))));
  /* 11f731bf push esi */
  push32((uint32_t)(ESI));
  /* 11f731c0 push eax */
  push32((uint32_t)(EAX));
  /* 11f731c1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11f731c7 push esi */
  push32((uint32_t)(ESI));
  /* 11f731c8 push eax */
  push32((uint32_t)(EAX));
  /* 11f731c9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f731ce push dword ptr [0x11f76c04] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c04))));
  /* 11f731d4 call 0x11f74013 */
  push32(0x11f731d9u); f_11f74013();
  /* 11f731d9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f731dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f731de lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11f731e4:;
  /* 11f731e4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11f731e7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11f731ea je 0x11f73202 */
  if (C.zf) goto L_11f73202;
  /* 11f731ec or byte ptr [eax + 0x11f76b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(0x10u); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f731f3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11f731fa:;
  /* 11f731fa mov byte ptr [eax + 0x11f76a00], dl */
  w8((uint32_t)(EAX + 0x11f76a00), (DL));
  /* 11f73200 jmp 0x11f7321e */
  goto L_11f7321e;
L_11f73202:;
  /* 11f73202 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11f73205 je 0x11f73217 */
  if (C.zf) goto L_11f73217;
  /* 11f73207 or byte ptr [eax + 0x11f76b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(0x20u); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f7320e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11f73215 jmp 0x11f731fa */
  goto L_11f731fa;
L_11f73217:;
  /* 11f73217 and byte ptr [eax + 0x11f76a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76a00)))&(0x0u); w8((uint32_t)(EAX + 0x11f76a00), (_r)); fl_logic(_r,8); }
L_11f7321e:;
  /* 11f7321e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7321f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f73220 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f73221 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73223 jb 0x11f731e4 */
  if (C.cf) goto L_11f731e4;
  /* 11f73225 jmp 0x11f73270 */
  goto L_11f73270;
L_11f73227:;
  /* 11f73227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73229 mov esi, 0x100 */
  ESI = (0x100u);
L_11f7322e:;
  /* 11f7322e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73231 jb 0x11f7324c */
  if (C.cf) goto L_11f7324c;
  /* 11f73233 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73236 ja 0x11f7324c */
  if ((!C.cf&&!C.zf)) goto L_11f7324c;
  /* 11f73238 or byte ptr [eax + 0x11f76b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(0x10u); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f7323f mov cl, al */
  CL = (AL);
  /* 11f73241 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11f73244:;
  /* 11f73244 mov byte ptr [eax + 0x11f76a00], cl */
  w8((uint32_t)(EAX + 0x11f76a00), (CL));
  /* 11f7324a jmp 0x11f7326b */
  goto L_11f7326b;
L_11f7324c:;
  /* 11f7324c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7324f jb 0x11f73264 */
  if (C.cf) goto L_11f73264;
  /* 11f73251 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73254 ja 0x11f73264 */
  if ((!C.cf&&!C.zf)) goto L_11f73264;
  /* 11f73256 or byte ptr [eax + 0x11f76b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76b01)))|(0x20u); w8((uint32_t)(EAX + 0x11f76b01), (_r)); fl_logic(_r,8); }
  /* 11f7325d mov cl, al */
  CL = (AL);
  /* 11f7325f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f73262 jmp 0x11f73244 */
  goto L_11f73244;
L_11f73264:;
  /* 11f73264 and byte ptr [eax + 0x11f76a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11f76a00)))&(0x0u); w8((uint32_t)(EAX + 0x11f76a00), (_r)); fl_logic(_r,8); }
L_11f7326b:;
  /* 11f7326b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7326c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7326e jb 0x11f7322e */
  if (C.cf) goto L_11f7322e;
L_11f73270:;
  /* 11f73270 pop esi */
  ESI = (pop32());
  /* 11f73271 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73272 ret  */
  ESPCHK(0x11f730eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003273 @ 0x11f73273 (28 bytes, 7 insns) */
void f_11f73273(void) {
  FTRACE(0x11f73273u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73273 cmp dword ptr [0x11f76d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f76d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7327a jne 0x11f7328e */
  if (!C.zf) goto L_11f7328e;
  /* 11f7327c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11f7327e call 0x11f72e9b */
  push32(0x11f73283u); f_11f72e9b();
  /* 11f73283 pop ecx */
  ECX = (pop32());
  /* 11f73284 mov dword ptr [0x11f76d28], 1 */
  w32((uint32_t)(0x11f76d28), (0x1u));
L_11f7328e:;
  /* 11f7328e ret  */
  ESPCHK(0x11f73273u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x11f73290 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11f73290(void) {
  FTRACE(0x11f73290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73290 push ebp */
  push32((uint32_t)(EBP));
  /* 11f73291 mov ebp, esp */
  EBP = (ESP);
  /* 11f73293 push edi */
  push32((uint32_t)(EDI));
  /* 11f73294 push esi */
  push32((uint32_t)(ESI));
  /* 11f73295 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f73298 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f7329b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f7329e mov eax, ecx */
  EAX = (ECX);
  /* 11f732a0 mov edx, ecx */
  EDX = (ECX);
  /* 11f732a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f732a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f732a6 jbe 0x11f732b0 */
  if ((C.cf||C.zf)) goto L_11f732b0;
  /* 11f732a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f732aa jb 0x11f73428 */
  if (C.cf) goto L_11f73428;
L_11f732b0:;
  /* 11f732b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f732b6 jne 0x11f732cc */
  if (!C.zf) goto L_11f732cc;
  /* 11f732b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f732bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f732be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f732c1 jb 0x11f732ec */
  if (C.cf) goto L_11f732ec;
  /* 11f732c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f732c5 jmp dword ptr [edx*4 + 0x11f733d8] */
  switch (EDX) {
    case 0: goto L_11f733e8;
    case 1: goto L_11f733f0;
    case 2: goto L_11f733fc;
    case 3: goto L_11f73410;
    default: x86_unimpl("switch@0x11f732c5 out of table"); return;
  }
L_11f732cc:;
  /* 11f732cc mov eax, edi */
  EAX = (EDI);
  /* 11f732ce mov edx, 3 */
  EDX = (0x3u);
  /* 11f732d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f732d6 jb 0x11f732e4 */
  if (C.cf) goto L_11f732e4;
  /* 11f732d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f732db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f732dd jmp dword ptr [eax*4 + 0x11f732f0] */
  switch (EAX) {
    case 1: goto L_11f73300;
    case 2: goto L_11f7332c;
    case 3: goto L_11f73350;
    default: x86_unimpl("switch@0x11f732dd out of table"); return;
  }
L_11f732e4:;
  /* 11f732e4 jmp dword ptr [ecx*4 + 0x11f733e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f733e8)))); return;
  /* 11f732eb nop  */
  /* nop */
L_11f732ec:;
  /* 11f732ec jmp dword ptr [ecx*4 + 0x11f7336c] */
  switch (ECX) {
    case 0: goto L_11f733cf;
    case 1: goto L_11f733bc;
    case 2: goto L_11f733b4;
    case 3: goto L_11f733ac;
    case 4: goto L_11f733a4;
    case 5: goto L_11f7339c;
    case 6: goto L_11f73394;
    case 7: goto L_11f7338c;
    default: x86_unimpl("switch@0x11f732ec out of table"); return;
  }
  /* 11f732f3 nop  */
  /* nop */
L_11f73300:;
  /* 11f73300 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f73302 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f73304 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73306 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f73309 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f7330c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f7330f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73312 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f73315 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73318 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7331b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7331e jb 0x11f732ec */
  if (C.cf) goto L_11f732ec;
  /* 11f73320 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f73322 jmp dword ptr [edx*4 + 0x11f733d8] */
  switch (EDX) {
    case 0: goto L_11f733e8;
    case 1: goto L_11f733f0;
    case 2: goto L_11f733fc;
    case 3: goto L_11f73410;
    default: x86_unimpl("switch@0x11f73322 out of table"); return;
  }
  /* 11f73329 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f7332c:;
  /* 11f7332c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f7332e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f73330 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73332 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f73335 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73338 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f7333b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7333e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73341 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73344 jb 0x11f732ec */
  if (C.cf) goto L_11f732ec;
  /* 11f73346 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f73348 jmp dword ptr [edx*4 + 0x11f733d8] */
  switch (EDX) {
    case 0: goto L_11f733e8;
    case 1: goto L_11f733f0;
    case 2: goto L_11f733fc;
    case 3: goto L_11f73410;
    default: x86_unimpl("switch@0x11f73348 out of table"); return;
  }
  /* 11f7334f nop  */
  /* nop */
L_11f73350:;
  /* 11f73350 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f73352 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f73354 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73356 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f73357 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f7335a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f7335b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7335e jb 0x11f732ec */
  if (C.cf) goto L_11f732ec;
  /* 11f73360 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f73362 jmp dword ptr [edx*4 + 0x11f733d8] */
  switch (EDX) {
    case 0: goto L_11f733e8;
    case 1: goto L_11f733f0;
    case 2: goto L_11f733fc;
    case 3: goto L_11f73410;
    default: x86_unimpl("switch@0x11f73362 out of table"); return;
  }
  /* 11f73369 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f7338c:;
  /* 11f7338c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f73390 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f73394:;
  /* 11f73394 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f73398 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f7339c:;
  /* 11f7339c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f733a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f733a4:;
  /* 11f733a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f733a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f733ac:;
  /* 11f733ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f733b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f733b4:;
  /* 11f733b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f733b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f733bc:;
  /* 11f733bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f733c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f733c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f733cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f733cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f733cf:;
  /* 11f733cf jmp dword ptr [edx*4 + 0x11f733d8] */
  switch (EDX) {
    case 0: goto L_11f733e8;
    case 1: goto L_11f733f0;
    case 2: goto L_11f733fc;
    case 3: goto L_11f73410;
    default: x86_unimpl("switch@0x11f733cf out of table"); return;
  }
  /* 11f733d6 mov edi, edi */
  EDI = (EDI);
L_11f733e8:;
  /* 11f733e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f733eb pop esi */
  ESI = (pop32());
  /* 11f733ec pop edi */
  EDI = (pop32());
  /* 11f733ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f733ee ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f733ef nop  */
  /* nop */
L_11f733f0:;
  /* 11f733f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f733f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f733f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f733f7 pop esi */
  ESI = (pop32());
  /* 11f733f8 pop edi */
  EDI = (pop32());
  /* 11f733f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f733fa ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f733fb nop  */
  /* nop */
L_11f733fc:;
  /* 11f733fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f733fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73400 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f73403 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f73406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73409 pop esi */
  ESI = (pop32());
  /* 11f7340a pop edi */
  EDI = (pop32());
  /* 11f7340b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f7340c ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f7340d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f73410:;
  /* 11f73410 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f73412 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73414 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f73417 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f7341a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f7341d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f73420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73423 pop esi */
  ESI = (pop32());
  /* 11f73424 pop edi */
  EDI = (pop32());
  /* 11f73425 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73426 ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f73427 nop  */
  /* nop */
L_11f73428:;
  /* 11f73428 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f7342c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f73430 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f73436 jne 0x11f7345c */
  if (!C.zf) goto L_11f7345c;
  /* 11f73438 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f7343b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f7343e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73441 jb 0x11f73450 */
  if (C.cf) goto L_11f73450;
  /* 11f73443 std  */
  C.df=1;
  /* 11f73444 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f73446 cld  */
  C.df=0;
  /* 11f73447 jmp dword ptr [edx*4 + 0x11f73570] */
  switch (EDX) {
    case 0: goto L_11f73580;
    case 1: goto L_11f73588;
    case 2: goto L_11f73598;
    case 3: goto L_11f735ac;
    default: x86_unimpl("switch@0x11f73447 out of table"); return;
  }
  /* 11f7344e mov edi, edi */
  EDI = (EDI);
L_11f73450:;
  /* 11f73450 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f73452 jmp dword ptr [ecx*4 + 0x11f73520] */
  switch (ECX) {
    case 0: goto L_11f73567;
    default: x86_unimpl("switch@0x11f73452 out of table"); return;
  }
  /* 11f73459 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f7345c:;
  /* 11f7345c mov eax, edi */
  EAX = (EDI);
  /* 11f7345e mov edx, 3 */
  EDX = (0x3u);
  /* 11f73463 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73466 jb 0x11f73474 */
  if (C.cf) goto L_11f73474;
  /* 11f73468 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f7346b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7346d jmp dword ptr [eax*4 + 0x11f73478] */
  switch (EAX) {
    case 1: goto L_11f73488;
    case 2: goto L_11f734a8;
    case 3: goto L_11f734d0;
    default: x86_unimpl("switch@0x11f7346d out of table"); return;
  }
L_11f73474:;
  /* 11f73474 jmp dword ptr [ecx*4 + 0x11f73570] */
  switch (ECX) {
    case 0: goto L_11f73580;
    case 1: goto L_11f73588;
    case 2: goto L_11f73598;
    case 3: goto L_11f735ac;
    default: x86_unimpl("switch@0x11f73474 out of table"); return;
  }
  /* 11f7347b nop  */
  /* nop */
L_11f73488:;
  /* 11f73488 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f7348b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f7348d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f73490 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f73491 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73494 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f73495 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73498 jb 0x11f73450 */
  if (C.cf) goto L_11f73450;
  /* 11f7349a std  */
  C.df=1;
  /* 11f7349b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f7349d cld  */
  C.df=0;
  /* 11f7349e jmp dword ptr [edx*4 + 0x11f73570] */
  switch (EDX) {
    case 0: goto L_11f73580;
    case 1: goto L_11f73588;
    case 2: goto L_11f73598;
    case 3: goto L_11f735ac;
    default: x86_unimpl("switch@0x11f7349e out of table"); return;
  }
  /* 11f734a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f734a8:;
  /* 11f734a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f734ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f734ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f734b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f734b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f734b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f734b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f734bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f734bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f734c2 jb 0x11f73450 */
  if (C.cf) goto L_11f73450;
  /* 11f734c4 std  */
  C.df=1;
  /* 11f734c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f734c7 cld  */
  C.df=0;
  /* 11f734c8 jmp dword ptr [edx*4 + 0x11f73570] */
  switch (EDX) {
    case 0: goto L_11f73580;
    case 1: goto L_11f73588;
    case 2: goto L_11f73598;
    case 3: goto L_11f735ac;
    default: x86_unimpl("switch@0x11f734c8 out of table"); return;
  }
  /* 11f734cf nop  */
  /* nop */
L_11f734d0:;
  /* 11f734d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f734d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f734d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f734d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f734db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f734de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f734e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f734e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f734e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f734ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f734ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f734f0 jb 0x11f73450 */
  if (C.cf) goto L_11f73450;
  /* 11f734f6 std  */
  C.df=1;
  /* 11f734f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f734f9 cld  */
  C.df=0;
  /* 11f734fa jmp dword ptr [edx*4 + 0x11f73570] */
  switch (EDX) {
    case 0: goto L_11f73580;
    case 1: goto L_11f73588;
    case 2: goto L_11f73598;
    case 3: goto L_11f735ac;
    default: x86_unimpl("switch@0x11f734fa out of table"); return;
  }
  /* 11f73501 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f73504 and al, 0x35 */
  { uint32_t _r=(AL)&(0x35u); AL = (_r); fl_logic(_r,8); }
  /* 11f73506 not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f73508 sub al, 0x35 */
  { uint32_t _a=(AL),_b=(0x35u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f7350a not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f7350c xor al, 0x35 */
  { uint32_t _r=(AL)^(0x35u); AL = (_r); fl_logic(_r,8); }
  /* 11f7350e not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f73510 cmp al, 0x35 */
  { uint32_t _a=(AL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f73512 not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f73514 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11f73515 xor eax, 0x354c11f7 */
  { uint32_t _r=(EAX)^(0x354c11f7u); EAX = (_r); fl_logic(_r,32); }
  /* 11f7351a not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f7351c push esp */
  push32((uint32_t)(ESP));
  /* 11f7351e not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f73524 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f73528 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f7352c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f73530 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f73534 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f73538 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f7353c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f73540 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f73544 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f73548 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f7354c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f73550 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f73554 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f73558 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f7355c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f73563 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73565 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f73567:;
  /* 11f73567 jmp dword ptr [edx*4 + 0x11f73570] */
  switch (EDX) {
    case 0: goto L_11f73580;
    case 1: goto L_11f73588;
    case 2: goto L_11f73598;
    case 3: goto L_11f735ac;
    default: x86_unimpl("switch@0x11f73567 out of table"); return;
  }
  /* 11f7356e mov edi, edi */
  EDI = (EDI);
L_11f73580:;
  /* 11f73580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73583 pop esi */
  ESI = (pop32());
  /* 11f73584 pop edi */
  EDI = (pop32());
  /* 11f73585 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73586 ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f73587 nop  */
  /* nop */
L_11f73588:;
  /* 11f73588 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f7358b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f7358e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73591 pop esi */
  ESI = (pop32());
  /* 11f73592 pop edi */
  EDI = (pop32());
  /* 11f73593 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73594 ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f73595 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f73598:;
  /* 11f73598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f7359b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f7359e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f735a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f735a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f735a7 pop esi */
  ESI = (pop32());
  /* 11f735a8 pop edi */
  EDI = (pop32());
  /* 11f735a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f735aa ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
  /* 11f735ab nop  */
  /* nop */
L_11f735ac:;
  /* 11f735ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f735af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f735b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f735b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f735b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f735bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f735be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f735c1 pop esi */
  ESI = (pop32());
  /* 11f735c2 pop edi */
  EDI = (pop32());
  /* 11f735c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f735c4 ret  */
  ESPCHK(0x11f73290u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c5 @ 0x11f735c5 (62 bytes, 15 insns) */
void f_11f735c5(void) {
  FTRACE(0x11f735c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f735c5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11f735ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11f735cc push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f735d2 call dword ptr [0x11f7503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7503c))), 0x11f735d8u);
  /* 11f735d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f735da mov dword ptr [0x11f769cc], eax */
  w32((uint32_t)(0x11f769cc), (EAX));
  /* 11f735df jne 0x11f735e2 */
  if (!C.zf) goto L_11f735e2;
  /* 11f735e1 ret  */
  ESPCHK(0x11f735c5u, _esp0);
  ESP += 4; return;
L_11f735e2:;
  /* 11f735e2 and dword ptr [0x11f769c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f769c4)))&(0x0u); w32((uint32_t)(0x11f769c4), (_r)); fl_logic(_r,32); }
  /* 11f735e9 and dword ptr [0x11f769c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f769c8)))&(0x0u); w32((uint32_t)(0x11f769c8), (_r)); fl_logic(_r,32); }
  /* 11f735f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f735f2 mov dword ptr [0x11f769c0], eax */
  w32((uint32_t)(0x11f769c0), (EAX));
  /* 11f735f7 mov dword ptr [0x11f769b8], 0x10 */
  w32((uint32_t)(0x11f769b8), (0x10u));
  /* 11f73601 pop eax */
  EAX = (pop32());
  /* 11f73602 ret  */
  ESPCHK(0x11f735c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003603 @ 0x11f73603 (43 bytes, 14 insns) */
void f_11f73603(void) {
  FTRACE(0x11f73603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73603 mov eax, dword ptr [0x11f769c8] */
  EAX = (r32((uint32_t)(0x11f769c8)));
  /* 11f73608 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11f7360b mov eax, dword ptr [0x11f769cc] */
  EAX = (r32((uint32_t)(0x11f769cc)));
  /* 11f73610 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11f73613:;
  /* 11f73613 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73615 jae 0x11f7362b */
  if (!C.cf) goto L_11f7362b;
  /* 11f73617 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f7361b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7361e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73624 jb 0x11f7362d */
  if (C.cf) goto L_11f7362d;
  /* 11f73626 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73629 jmp 0x11f73613 */
  goto L_11f73613;
L_11f7362b:;
  /* 11f7362b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f7362d:;
  /* 11f7362d ret  */
  ESPCHK(0x11f73603u, _esp0);
  ESP += 4; return;
}

/* FUN_1000362e @ 0x11f7362e (811 bytes, 264 insns) */
void f_11f7362e(void) {
  FTRACE(0x11f7362eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7362e push ebp */
  push32((uint32_t)(EBP));
  /* 11f7362f mov ebp, esp */
  EBP = (ESP);
  /* 11f73631 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f73634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f73637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f7363a push ebx */
  push32((uint32_t)(EBX));
  /* 11f7363b push esi */
  push32((uint32_t)(ESI));
  /* 11f7363c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f7363f mov esi, edx */
  ESI = (EDX);
  /* 11f73641 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f73644 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11f73647 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7364a push edi */
  push32((uint32_t)(EDI));
  /* 11f7364b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11f7364e mov ecx, esi */
  ECX = (ESI);
  /* 11f73650 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11f73653 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f73659 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f7365a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f7365d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f73664 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f73667 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f7366a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11f7366d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11f73670 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f73673 jne 0x11f736f4 */
  if (!C.zf) goto L_11f736f4;
  /* 11f73675 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f73678 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f7367a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f7367b pop edi */
  EDI = (pop32());
  /* 11f7367c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f7367f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73681 jbe 0x11f73686 */
  if ((C.cf||C.zf)) goto L_11f73686;
  /* 11f73683 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11f73686:;
  /* 11f73686 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f7368a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7368e jne 0x11f736d8 */
  if (!C.zf) goto L_11f736d8;
  /* 11f73690 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f73693 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73696 jae 0x11f736b4 */
  if (!C.cf) goto L_11f736b4;
  /* 11f73698 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f7369d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f7369f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f736a3 not edi */
  EDI = (~(EDI));
  /* 11f736a5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f736a9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f736ab jne 0x11f736d8 */
  if (!C.zf) goto L_11f736d8;
  /* 11f736ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f736b0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f736b2 jmp 0x11f736d8 */
  goto L_11f736d8;
L_11f736b4:;
  /* 11f736b4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f736b7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f736bc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f736be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f736c1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f736c5 not edi */
  EDI = (~(EDI));
  /* 11f736c7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f736ce dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f736d0 jne 0x11f736d8 */
  if (!C.zf) goto L_11f736d8;
  /* 11f736d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f736d5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f736d8:;
  /* 11f736d8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11f736dc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f736e0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f736e3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11f736e7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11f736eb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f736ee mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f736f1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11f736f4:;
  /* 11f736f4 mov edi, ebx */
  EDI = (EBX);
  /* 11f736f6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f736f9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f736fa cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f736fd jbe 0x11f73702 */
  if ((C.cf||C.zf)) goto L_11f73702;
  /* 11f736ff push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f73701 pop edi */
  EDI = (pop32());
L_11f73702:;
  /* 11f73702 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73705 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f73708 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f7370b jne 0x11f737b1 */
  if (!C.zf) goto L_11f737b1;
  /* 11f73711 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f73714 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73717 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f7371a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f7371c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f7371f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73720 pop edx */
  EDX = (pop32());
  /* 11f73721 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73723 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f73726 jbe 0x11f7372d */
  if ((C.cf||C.zf)) goto L_11f7372d;
  /* 11f73728 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11f7372b mov ecx, edx */
  ECX = (EDX);
L_11f7372d:;
  /* 11f7372d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73730 mov edi, ebx */
  EDI = (EBX);
  /* 11f73732 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11f73735 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11f73738 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f73739 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7373b jbe 0x11f7373f */
  if ((C.cf||C.zf)) goto L_11f7373f;
  /* 11f7373d mov edi, edx */
  EDI = (EDX);
L_11f7373f:;
  /* 11f7373f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73741 je 0x11f737ae */
  if (C.zf) goto L_11f737ae;
  /* 11f73743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f73746 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f73749 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7374c jne 0x11f73796 */
  if (!C.zf) goto L_11f73796;
  /* 11f7374e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f73751 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73754 jae 0x11f73772 */
  if (!C.cf) goto L_11f73772;
  /* 11f73756 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f7375b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f7375d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f73761 not edx */
  EDX = (~(EDX));
  /* 11f73763 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f73767 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f73769 jne 0x11f73796 */
  if (!C.zf) goto L_11f73796;
  /* 11f7376b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f7376e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f73770 jmp 0x11f73796 */
  goto L_11f73796;
L_11f73772:;
  /* 11f73772 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73775 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f7377a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f7377c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f7377f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11f73783 not edx */
  EDX = (~(EDX));
  /* 11f73785 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f7378c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11f7378e jne 0x11f73796 */
  if (!C.zf) goto L_11f73796;
  /* 11f73790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73793 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f73796:;
  /* 11f73796 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f73799 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f7379c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f7379f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f737a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f737a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f737a8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f737ab mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11f737ae:;
  /* 11f737ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11f737b1:;
  /* 11f737b1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f737b5 jne 0x11f737c0 */
  if (!C.zf) goto L_11f737c0;
  /* 11f737b7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f737ba je 0x11f73849 */
  if (C.zf) goto L_11f73849;
L_11f737c0:;
  /* 11f737c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f737c3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11f737c6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f737c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f737cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f737cf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11f737d2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f737d5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f737d8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f737db mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f737de mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f737e1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f737e4 jne 0x11f73849 */
  if (!C.zf) goto L_11f73849;
  /* 11f737e6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11f737ea cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f737ed mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11f737f0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f737f2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11f737f6 jae 0x11f7381d */
  if (!C.cf) goto L_11f7381d;
  /* 11f737f8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f737fc jne 0x11f7380c */
  if (!C.zf) goto L_11f7380c;
  /* 11f737fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f73803 mov ecx, edi */
  ECX = (EDI);
  /* 11f73805 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f73807 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f7380a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11f7380c:;
  /* 11f7380c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f73811 mov ecx, edi */
  ECX = (EDI);
  /* 11f73813 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f73815 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11f73819 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f7381b jmp 0x11f73846 */
  goto L_11f73846;
L_11f7381d:;
  /* 11f7381d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f73821 jne 0x11f73833 */
  if (!C.zf) goto L_11f73833;
  /* 11f73823 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f73826 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f7382b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f7382d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73830 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11f73833:;
  /* 11f73833 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f73836 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f7383b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f7383d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11f73844 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11f73846:;
  /* 11f73846 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11f73849:;
  /* 11f73849 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f7384c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11f7384e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11f73852 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11f73854 jne 0x11f73954 */
  if (!C.zf) goto L_11f73954;
  /* 11f7385a mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f7385f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73861 je 0x11f73946 */
  if (C.zf) goto L_11f73946;
  /* 11f73867 mov ecx, dword ptr [0x11f769bc] */
  ECX = (r32((uint32_t)(0x11f769bc)));
  /* 11f7386d mov edi, dword ptr [0x11f75050] */
  EDI = (r32((uint32_t)(0x11f75050)));
  /* 11f73873 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11f73876 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73879 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11f7387e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f73883 push ebx */
  push32((uint32_t)(EBX));
  /* 11f73884 push ecx */
  push32((uint32_t)(ECX));
  /* 11f73885 call edi */
  call_ind((uint32_t)(EDI), 0x11f73887u);
  /* 11f73887 mov ecx, dword ptr [0x11f769bc] */
  ECX = (r32((uint32_t)(0x11f769bc)));
  /* 11f7388d mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f73892 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f73897 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f73899 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f7389c mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f738a1 mov ecx, dword ptr [0x11f769bc] */
  ECX = (r32((uint32_t)(0x11f769bc)));
  /* 11f738a7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f738aa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11f738b2 mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f738b7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f738ba dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11f738bd mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f738c2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f738c5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f738c9 jne 0x11f738d4 */
  if (!C.zf) goto L_11f738d4;
  /* 11f738cb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f738cf mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
L_11f738d4:;
  /* 11f738d4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f738d8 jne 0x11f73946 */
  if (!C.zf) goto L_11f73946;
  /* 11f738da push ebx */
  push32((uint32_t)(EBX));
  /* 11f738db push 0 */
  push32((uint32_t)(0x0u));
  /* 11f738dd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11f738e0 call edi */
  call_ind((uint32_t)(EDI), 0x11f738e2u);
  /* 11f738e2 mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f738e7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11f738ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11f738ec push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f738f2 call dword ptr [0x11f7504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7504c))), 0x11f738f8u);
  /* 11f738f8 mov eax, dword ptr [0x11f769c8] */
  EAX = (r32((uint32_t)(0x11f769c8)));
  /* 11f738fd mov edx, dword ptr [0x11f769cc] */
  EDX = (r32((uint32_t)(0x11f769cc)));
  /* 11f73903 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f73906 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f73909 mov ecx, eax */
  ECX = (EAX);
  /* 11f7390b mov eax, dword ptr [0x11f769c4] */
  EAX = (r32((uint32_t)(0x11f769c4)));
  /* 11f73910 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f73912 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11f73916 push ecx */
  push32((uint32_t)(ECX));
  /* 11f73917 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11f7391a push ecx */
  push32((uint32_t)(ECX));
  /* 11f7391b push eax */
  push32((uint32_t)(EAX));
  /* 11f7391c call 0x11f743b0 */
  push32(0x11f73921u); f_11f743b0();
  /* 11f73921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73927 dec dword ptr [0x11f769c8] */
  { uint32_t _r=(r32((uint32_t)(0x11f769c8)))-1; w32((uint32_t)(0x11f769c8), (_r)); fl_dec(_r,32); }
  /* 11f7392d cmp eax, dword ptr [0x11f769c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f769c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73933 jbe 0x11f73938 */
  if ((C.cf||C.zf)) goto L_11f73938;
  /* 11f73935 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f73938:;
  /* 11f73938 mov ecx, dword ptr [0x11f769cc] */
  ECX = (r32((uint32_t)(0x11f769cc)));
  /* 11f7393e mov dword ptr [0x11f769c0], ecx */
  w32((uint32_t)(0x11f769c0), (ECX));
  /* 11f73944 jmp 0x11f73949 */
  goto L_11f73949;
L_11f73946:;
  /* 11f73946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11f73949:;
  /* 11f73949 mov dword ptr [0x11f769c4], eax */
  w32((uint32_t)(0x11f769c4), (EAX));
  /* 11f7394e mov dword ptr [0x11f769bc], esi */
  w32((uint32_t)(0x11f769bc), (ESI));
L_11f73954:;
  /* 11f73954 pop edi */
  EDI = (pop32());
  /* 11f73955 pop esi */
  ESI = (pop32());
  /* 11f73956 pop ebx */
  EBX = (pop32());
  /* 11f73957 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73958 ret  */
  ESPCHK(0x11f7362eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003959 @ 0x11f73959 (777 bytes, 275 insns) */
void f_11f73959(void) {
  FTRACE(0x11f73959u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73959 push ebp */
  push32((uint32_t)(EBP));
  /* 11f7395a mov ebp, esp */
  EBP = (ESP);
  /* 11f7395c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7395f mov eax, dword ptr [0x11f769c8] */
  EAX = (r32((uint32_t)(0x11f769c8)));
  /* 11f73964 mov edx, dword ptr [0x11f769cc] */
  EDX = (r32((uint32_t)(0x11f769cc)));
  /* 11f7396a push ebx */
  push32((uint32_t)(EBX));
  /* 11f7396b push esi */
  push32((uint32_t)(ESI));
  /* 11f7396c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f7396f push edi */
  push32((uint32_t)(EDI));
  /* 11f73970 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11f73973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73976 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f73979 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11f7397c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f7397f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f73982 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f73985 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73986 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73989 jge 0x11f73999 */
  if ((C.sf==C.of)) goto L_11f73999;
  /* 11f7398b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11f7398e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f73990 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f73994 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f73997 jmp 0x11f739a9 */
  goto L_11f739a9;
L_11f73999:;
  /* 11f73999 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7399c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f7399f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11f739a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f739a3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11f739a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f739a9:;
  /* 11f739a9 mov eax, dword ptr [0x11f769c0] */
  EAX = (r32((uint32_t)(0x11f769c0)));
  /* 11f739ae mov ebx, eax */
  EBX = (EAX);
  /* 11f739b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f739b2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f739b5 jae 0x11f739d0 */
  if (!C.cf) goto L_11f739d0;
L_11f739b7:;
  /* 11f739b7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f739ba mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f739bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f739bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f739c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f739c3 jne 0x11f739d0 */
  if (!C.zf) goto L_11f739d0;
  /* 11f739c5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f739c8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f739cb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f739ce jb 0x11f739b7 */
  if (C.cf) goto L_11f739b7;
L_11f739d0:;
  /* 11f739d0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f739d3 jne 0x11f73a4e */
  if (!C.zf) goto L_11f73a4e;
  /* 11f739d5 mov ebx, edx */
  EBX = (EDX);
L_11f739d7:;
  /* 11f739d7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f739d9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f739dc jae 0x11f739f3 */
  if (!C.cf) goto L_11f739f3;
  /* 11f739de mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11f739e1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11f739e3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f739e6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f739e8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f739ea jne 0x11f739f1 */
  if (!C.zf) goto L_11f739f1;
  /* 11f739ec add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f739ef jmp 0x11f739d7 */
  goto L_11f739d7;
L_11f739f1:;
  /* 11f739f1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f739f3:;
  /* 11f739f3 jne 0x11f73a4e */
  if (!C.zf) goto L_11f73a4e;
L_11f739f5:;
  /* 11f739f5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f739f8 jae 0x11f73a0b */
  if (!C.cf) goto L_11f73a0b;
  /* 11f739fa cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f739fe jne 0x11f73a08 */
  if (!C.zf) goto L_11f73a08;
  /* 11f73a00 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73a03 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f73a06 jmp 0x11f739f5 */
  goto L_11f739f5;
L_11f73a08:;
  /* 11f73a08 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f73a0b:;
  /* 11f73a0b jne 0x11f73a33 */
  if (!C.zf) goto L_11f73a33;
  /* 11f73a0d mov ebx, edx */
  EBX = (EDX);
L_11f73a0f:;
  /* 11f73a0f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73a11 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f73a14 jae 0x11f73a23 */
  if (!C.cf) goto L_11f73a23;
  /* 11f73a16 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73a1a jne 0x11f73a21 */
  if (!C.zf) goto L_11f73a21;
  /* 11f73a1c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73a1f jmp 0x11f73a0f */
  goto L_11f73a0f;
L_11f73a21:;
  /* 11f73a21 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11f73a23:;
  /* 11f73a23 jne 0x11f73a33 */
  if (!C.zf) goto L_11f73a33;
  /* 11f73a25 call 0x11f73c62 */
  push32(0x11f73a2au); f_11f73c62();
  /* 11f73a2a mov ebx, eax */
  EBX = (EAX);
  /* 11f73a2c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f73a2e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11f73a31 je 0x11f73a47 */
  if (C.zf) goto L_11f73a47;
L_11f73a33:;
  /* 11f73a33 push ebx */
  push32((uint32_t)(EBX));
  /* 11f73a34 call 0x11f73d13 */
  push32(0x11f73a39u); f_11f73d13();
  /* 11f73a39 pop ecx */
  ECX = (pop32());
  /* 11f73a3a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f73a3d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f73a3f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f73a42 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73a45 jne 0x11f73a4e */
  if (!C.zf) goto L_11f73a4e;
L_11f73a47:;
  /* 11f73a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73a49 jmp 0x11f73c5d */
  goto L_11f73c5d;
L_11f73a4e:;
  /* 11f73a4e mov dword ptr [0x11f769c0], ebx */
  w32((uint32_t)(0x11f769c0), (EBX));
  /* 11f73a54 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11f73a57 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f73a59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73a5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f73a5f je 0x11f73a75 */
  if (C.zf) goto L_11f73a75;
  /* 11f73a61 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f73a68 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f73a6c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f73a6f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11f73a71 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11f73a73 jne 0x11f73aac */
  if (!C.zf) goto L_11f73aac;
L_11f73a75:;
  /* 11f73a75 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11f73a7b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11f73a7e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f73a81 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11f73a84 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f73a88 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11f73a8b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f73a8d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f73a90 jne 0x11f73aa9 */
  if (!C.zf) goto L_11f73aa9;
L_11f73a92:;
  /* 11f73a92 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11f73a98 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11f73a9b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f73a9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73aa1 mov edi, esi */
  EDI = (ESI);
  /* 11f73aa3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11f73aa5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11f73aa7 je 0x11f73a92 */
  if (C.zf) goto L_11f73a92;
L_11f73aa9:;
  /* 11f73aa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11f73aac:;
  /* 11f73aac mov ecx, edx */
  ECX = (EDX);
  /* 11f73aae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f73ab0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f73ab6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f73abd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f73ac0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11f73ac4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11f73ac6 jne 0x11f73ad5 */
  if (!C.zf) goto L_11f73ad5;
  /* 11f73ac8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11f73acf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f73ad1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11f73ad4 pop edi */
  EDI = (pop32());
L_11f73ad5:;
  /* 11f73ad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f73ad7 jl 0x11f73ade */
  if ((C.sf!=C.of)) goto L_11f73ade;
  /* 11f73ad9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f73adb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f73adc jmp 0x11f73ad5 */
  goto L_11f73ad5;
L_11f73ade:;
  /* 11f73ade mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f73ae1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11f73ae5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11f73ae7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f73aea mov esi, ecx */
  ESI = (ECX);
  /* 11f73aec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f73aef sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11f73af2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f73af3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73af6 jle 0x11f73afb */
  if ((C.zf||C.sf!=C.of)) goto L_11f73afb;
  /* 11f73af8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f73afa pop esi */
  ESI = (pop32());
L_11f73afb:;
  /* 11f73afb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73afd je 0x11f73c10 */
  if (C.zf) goto L_11f73c10;
  /* 11f73b03 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f73b06 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73b09 jne 0x11f73b6c */
  if (!C.zf) goto L_11f73b6c;
  /* 11f73b0b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73b0e jge 0x11f73b3b */
  if ((C.sf==C.of)) goto L_11f73b3b;
  /* 11f73b10 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f73b15 mov ecx, edi */
  ECX = (EDI);
  /* 11f73b17 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f73b19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73b1c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f73b20 not ebx */
  EBX = (~(EBX));
  /* 11f73b22 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f73b25 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11f73b29 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11f73b2d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f73b2f jne 0x11f73b69 */
  if (!C.zf) goto L_11f73b69;
  /* 11f73b31 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73b34 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f73b37 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11f73b39 jmp 0x11f73b6c */
  goto L_11f73b6c;
L_11f73b3b:;
  /* 11f73b3b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11f73b3e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11f73b43 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11f73b45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73b48 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11f73b4c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f73b53 not ebx */
  EBX = (~(EBX));
  /* 11f73b55 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11f73b57 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11f73b59 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11f73b5c jne 0x11f73b69 */
  if (!C.zf) goto L_11f73b69;
  /* 11f73b5e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73b61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f73b64 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11f73b67 jmp 0x11f73b6c */
  goto L_11f73b6c;
L_11f73b69:;
  /* 11f73b69 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11f73b6c:;
  /* 11f73b6c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f73b6f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11f73b72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73b76 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11f73b79 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f73b7c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11f73b7f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11f73b82 je 0x11f73c1c */
  if (C.zf) goto L_11f73c1c;
  /* 11f73b88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f73b8b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11f73b8f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11f73b92 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11f73b95 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f73b98 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f73b9b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f73b9e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f73ba1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f73ba4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73ba7 jne 0x11f73c0d */
  if (!C.zf) goto L_11f73c0d;
  /* 11f73ba9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11f73bad cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73bb0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11f73bb3 jge 0x11f73bde */
  if ((C.sf==C.of)) goto L_11f73bde;
  /* 11f73bb5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f73bb7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f73bbb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f73bbf jne 0x11f73bcc */
  if (!C.zf) goto L_11f73bcc;
  /* 11f73bc1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f73bc6 mov ecx, esi */
  ECX = (ESI);
  /* 11f73bc8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f73bca or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11f73bcc:;
  /* 11f73bcc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f73bd1 mov ecx, esi */
  ECX = (ESI);
  /* 11f73bd3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f73bd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73bd8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f73bdc jmp 0x11f73c0d */
  goto L_11f73c0d;
L_11f73bde:;
  /* 11f73bde inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f73be0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f73be4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11f73be8 jne 0x11f73bf7 */
  if (!C.zf) goto L_11f73bf7;
  /* 11f73bea lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f73bed mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11f73bf2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11f73bf4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11f73bf7:;
  /* 11f73bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73bfa lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11f73c01 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11f73c04 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11f73c09 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11f73c0b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11f73c0d:;
  /* 11f73c0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f73c10:;
  /* 11f73c10 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f73c12 je 0x11f73c1f */
  if (C.zf) goto L_11f73c1f;
  /* 11f73c14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f73c16 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11f73c1a jmp 0x11f73c1f */
  goto L_11f73c1f;
L_11f73c1c:;
  /* 11f73c1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11f73c1f:;
  /* 11f73c1f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11f73c22 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73c24 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11f73c27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f73c29 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11f73c2d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11f73c30 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11f73c32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f73c34 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11f73c37 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f73c39 jne 0x11f73c55 */
  if (!C.zf) goto L_11f73c55;
  /* 11f73c3b cmp ebx, dword ptr [0x11f769c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11f769c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73c41 jne 0x11f73c55 */
  if (!C.zf) goto L_11f73c55;
  /* 11f73c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73c46 cmp ecx, dword ptr [0x11f769bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f769bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73c4c jne 0x11f73c55 */
  if (!C.zf) goto L_11f73c55;
  /* 11f73c4e and dword ptr [0x11f769c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11f769c4)))&(0x0u); w32((uint32_t)(0x11f769c4), (_r)); fl_logic(_r,32); }
L_11f73c55:;
  /* 11f73c55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73c58 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f73c5a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11f73c5d:;
  /* 11f73c5d pop edi */
  EDI = (pop32());
  /* 11f73c5e pop esi */
  ESI = (pop32());
  /* 11f73c5f pop ebx */
  EBX = (pop32());
  /* 11f73c60 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73c61 ret  */
  ESPCHK(0x11f73959u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c62 @ 0x11f73c62 (177 bytes, 53 insns) */
void f_11f73c62(void) {
  FTRACE(0x11f73c62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73c62 mov eax, dword ptr [0x11f769c8] */
  EAX = (r32((uint32_t)(0x11f769c8)));
  /* 11f73c67 mov ecx, dword ptr [0x11f769b8] */
  ECX = (r32((uint32_t)(0x11f769b8)));
  /* 11f73c6d push esi */
  push32((uint32_t)(ESI));
  /* 11f73c6e push edi */
  push32((uint32_t)(EDI));
  /* 11f73c6f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f73c71 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73c73 jne 0x11f73ca5 */
  if (!C.zf) goto L_11f73ca5;
  /* 11f73c75 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11f73c79 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f73c7c push eax */
  push32((uint32_t)(EAX));
  /* 11f73c7d push dword ptr [0x11f769cc] */
  push32((uint32_t)(r32((uint32_t)(0x11f769cc))));
  /* 11f73c83 push edi */
  push32((uint32_t)(EDI));
  /* 11f73c84 push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f73c8a call dword ptr [0x11f75028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75028))), 0x11f73c90u);
  /* 11f73c90 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73c92 je 0x11f73cf5 */
  if (C.zf) goto L_11f73cf5;
  /* 11f73c94 add dword ptr [0x11f769b8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11f769b8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11f769b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11f73c9b mov dword ptr [0x11f769cc], eax */
  w32((uint32_t)(0x11f769cc), (EAX));
  /* 11f73ca0 mov eax, dword ptr [0x11f769c8] */
  EAX = (r32((uint32_t)(0x11f769c8)));
L_11f73ca5:;
  /* 11f73ca5 mov ecx, dword ptr [0x11f769cc] */
  ECX = (r32((uint32_t)(0x11f769cc)));
  /* 11f73cab push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f73cb0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f73cb2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11f73cb5 push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f73cbb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11f73cbe call dword ptr [0x11f7503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7503c))), 0x11f73cc4u);
  /* 11f73cc4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73cc6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11f73cc9 je 0x11f73cf5 */
  if (C.zf) goto L_11f73cf5;
  /* 11f73ccb push 4 */
  push32((uint32_t)(0x4u));
  /* 11f73ccd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f73cd2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f73cd7 push edi */
  push32((uint32_t)(EDI));
  /* 11f73cd8 call dword ptr [0x11f7502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7502c))), 0x11f73cdeu);
  /* 11f73cde cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73ce0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11f73ce3 jne 0x11f73cf9 */
  if (!C.zf) goto L_11f73cf9;
  /* 11f73ce5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11f73ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11f73ce9 push dword ptr [0x11f76c08] */
  push32((uint32_t)(r32((uint32_t)(0x11f76c08))));
  /* 11f73cef call dword ptr [0x11f7504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7504c))), 0x11f73cf5u);
L_11f73cf5:;
  /* 11f73cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73cf7 jmp 0x11f73d10 */
  goto L_11f73d10;
L_11f73cf9:;
  /* 11f73cf9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f73cfd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11f73cff mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11f73d02 inc dword ptr [0x11f769c8] */
  { uint32_t _r=(r32((uint32_t)(0x11f769c8)))+1; w32((uint32_t)(0x11f769c8), (_r)); fl_inc(_r,32); }
  /* 11f73d08 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11f73d0b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11f73d0e mov eax, esi */
  EAX = (ESI);
L_11f73d10:;
  /* 11f73d10 pop edi */
  EDI = (pop32());
  /* 11f73d11 pop esi */
  ESI = (pop32());
  /* 11f73d12 ret  */
  ESPCHK(0x11f73c62u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d13 @ 0x11f73d13 (251 bytes, 85 insns) */
void f_11f73d13(void) {
  FTRACE(0x11f73d13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73d13 push ebp */
  push32((uint32_t)(EBP));
  /* 11f73d14 mov ebp, esp */
  EBP = (ESP);
  /* 11f73d16 push ecx */
  push32((uint32_t)(ECX));
  /* 11f73d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73d1a push ebx */
  push32((uint32_t)(EBX));
  /* 11f73d1b push esi */
  push32((uint32_t)(ESI));
  /* 11f73d1c push edi */
  push32((uint32_t)(EDI));
  /* 11f73d1d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11f73d20 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f73d23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11f73d25:;
  /* 11f73d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73d27 jl 0x11f73d2e */
  if ((C.sf!=C.of)) goto L_11f73d2e;
  /* 11f73d29 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f73d2b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11f73d2c jmp 0x11f73d25 */
  goto L_11f73d25;
L_11f73d2e:;
  /* 11f73d2e mov eax, ebx */
  EAX = (EBX);
  /* 11f73d30 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f73d32 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f73d38 pop edx */
  EDX = (pop32());
  /* 11f73d39 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11f73d40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f73d43:;
  /* 11f73d43 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11f73d46 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11f73d49 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73d4c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f73d4d jne 0x11f73d43 */
  if (!C.zf) goto L_11f73d43;
  /* 11f73d4f mov edi, ebx */
  EDI = (EBX);
  /* 11f73d51 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f73d53 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11f73d56 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73d59 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f73d5e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f73d63 push edi */
  push32((uint32_t)(EDI));
  /* 11f73d64 call dword ptr [0x11f7502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7502c))), 0x11f73d6au);
  /* 11f73d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73d6c jne 0x11f73d76 */
  if (!C.zf) goto L_11f73d76;
  /* 11f73d6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f73d71 jmp 0x11f73e09 */
  goto L_11f73e09;
L_11f73d76:;
  /* 11f73d76 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11f73d7c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73d7e ja 0x11f73dbc */
  if ((!C.cf&&!C.zf)) goto L_11f73dbc;
  /* 11f73d80 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11f73d83:;
  /* 11f73d83 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11f73d87 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11f73d8e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11f73d94 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11f73d9b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f73d9d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11f73da3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f73da6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11f73db0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73db5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11f73db8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73dba jbe 0x11f73d83 */
  if ((C.cf||C.zf)) goto L_11f73d83;
L_11f73dbc:;
  /* 11f73dbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f73dbf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11f73dc2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73dc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f73dc9 pop edi */
  EDI = (pop32());
  /* 11f73dca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f73dcd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f73dd0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11f73dd3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f73dd6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f73dd9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11f73dde mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11f73de5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11f73de8 mov cl, al */
  CL = (AL);
  /* 11f73dea inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11f73dec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f73dee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f73df1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11f73df4 jne 0x11f73df9 */
  if (!C.zf) goto L_11f73df9;
  /* 11f73df6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11f73df9:;
  /* 11f73df9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f73dfe mov ecx, ebx */
  ECX = (EBX);
  /* 11f73e00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f73e02 not edx */
  EDX = (~(EDX));
  /* 11f73e04 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11f73e07 mov eax, ebx */
  EAX = (EBX);
L_11f73e09:;
  /* 11f73e09 pop edi */
  EDI = (pop32());
  /* 11f73e0a pop esi */
  ESI = (pop32());
  /* 11f73e0b pop ebx */
  EBX = (pop32());
  /* 11f73e0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f73e0d ret  */
  ESPCHK(0x11f73d13u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e0e @ 0x11f73e0e (137 bytes, 50 insns) */
void f_11f73e0e(void) {
  FTRACE(0x11f73e0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73e0e push ebx */
  push32((uint32_t)(EBX));
  /* 11f73e0f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f73e11 cmp dword ptr [0x11f7697c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11f7697c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73e17 push esi */
  push32((uint32_t)(ESI));
  /* 11f73e18 push edi */
  push32((uint32_t)(EDI));
  /* 11f73e19 jne 0x11f73e5d */
  if (!C.zf) goto L_11f73e5d;
  /* 11f73e1b push 0x11f75468 */
  push32((uint32_t)(0x11f75468u));
  /* 11f73e20 call dword ptr [0x11f7501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7501c))), 0x11f73e26u);
  /* 11f73e26 mov edi, eax */
  EDI = (EAX);
  /* 11f73e28 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73e2a je 0x11f73e93 */
  if (C.zf) goto L_11f73e93;
  /* 11f73e2c mov esi, dword ptr [0x11f75020] */
  ESI = (r32((uint32_t)(0x11f75020)));
  /* 11f73e32 push 0x11f7545c */
  push32((uint32_t)(0x11f7545cu));
  /* 11f73e37 push edi */
  push32((uint32_t)(EDI));
  /* 11f73e38 call esi */
  call_ind((uint32_t)(ESI), 0x11f73e3au);
  /* 11f73e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73e3c mov dword ptr [0x11f7697c], eax */
  w32((uint32_t)(0x11f7697c), (EAX));
  /* 11f73e41 je 0x11f73e93 */
  if (C.zf) goto L_11f73e93;
  /* 11f73e43 push 0x11f7544c */
  push32((uint32_t)(0x11f7544cu));
  /* 11f73e48 push edi */
  push32((uint32_t)(EDI));
  /* 11f73e49 call esi */
  call_ind((uint32_t)(ESI), 0x11f73e4bu);
  /* 11f73e4b push 0x11f75438 */
  push32((uint32_t)(0x11f75438u));
  /* 11f73e50 push edi */
  push32((uint32_t)(EDI));
  /* 11f73e51 mov dword ptr [0x11f76980], eax */
  w32((uint32_t)(0x11f76980), (EAX));
  /* 11f73e56 call esi */
  call_ind((uint32_t)(ESI), 0x11f73e58u);
  /* 11f73e58 mov dword ptr [0x11f76984], eax */
  w32((uint32_t)(0x11f76984), (EAX));
L_11f73e5d:;
  /* 11f73e5d mov eax, dword ptr [0x11f76980] */
  EAX = (r32((uint32_t)(0x11f76980)));
  /* 11f73e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73e64 je 0x11f73e7c */
  if (C.zf) goto L_11f73e7c;
  /* 11f73e66 call eax */
  call_ind((uint32_t)(EAX), 0x11f73e68u);
  /* 11f73e68 mov ebx, eax */
  EBX = (EAX);
  /* 11f73e6a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11f73e6c je 0x11f73e7c */
  if (C.zf) goto L_11f73e7c;
  /* 11f73e6e mov eax, dword ptr [0x11f76984] */
  EAX = (r32((uint32_t)(0x11f76984)));
  /* 11f73e73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73e75 je 0x11f73e7c */
  if (C.zf) goto L_11f73e7c;
  /* 11f73e77 push ebx */
  push32((uint32_t)(EBX));
  /* 11f73e78 call eax */
  call_ind((uint32_t)(EAX), 0x11f73e7au);
  /* 11f73e7a mov ebx, eax */
  EBX = (EAX);
L_11f73e7c:;
  /* 11f73e7c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f73e80 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f73e84 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11f73e88 push ebx */
  push32((uint32_t)(EBX));
  /* 11f73e89 call dword ptr [0x11f7697c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7697c))), 0x11f73e8fu);
L_11f73e8f:;
  /* 11f73e8f pop edi */
  EDI = (pop32());
  /* 11f73e90 pop esi */
  ESI = (pop32());
  /* 11f73e91 pop ebx */
  EBX = (pop32());
  /* 11f73e92 ret  */
  ESPCHK(0x11f73e0eu, _esp0);
  ESP += 4; return;
L_11f73e93:;
  /* 11f73e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73e95 jmp 0x11f73e8f */
  goto L_11f73e8f;
}

/* _strncpy @ 0x11f73ea0 (254 bytes, 109 insns) */
void f_11f73ea0(void) {
  FTRACE(0x11f73ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73ea0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f73ea4 push edi */
  push32((uint32_t)(EDI));
  /* 11f73ea5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f73ea7 je 0x11f73f23 */
  if (C.zf) goto L_11f73f23;
  /* 11f73ea9 push esi */
  push32((uint32_t)(ESI));
  /* 11f73eaa push ebx */
  push32((uint32_t)(EBX));
  /* 11f73eab mov ebx, ecx */
  EBX = (ECX);
  /* 11f73ead mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11f73eb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f73eb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11f73ebb jne 0x11f73ec4 */
  if (!C.zf) goto L_11f73ec4;
  /* 11f73ebd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73ec0 jne 0x11f73f31 */
  if (!C.zf) goto L_11f73f31;
  /* 11f73ec2 jmp 0x11f73ee5 */
  goto L_11f73ee5;
L_11f73ec4:;
  /* 11f73ec4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f73ec6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f73ec7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73ec9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f73eca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73ecb je 0x11f73ef2 */
  if (C.zf) goto L_11f73ef2;
  /* 11f73ecd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f73ecf je 0x11f73efa */
  if (C.zf) goto L_11f73efa;
  /* 11f73ed1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11f73ed7 jne 0x11f73ec4 */
  if (!C.zf) goto L_11f73ec4;
  /* 11f73ed9 mov ebx, ecx */
  EBX = (ECX);
  /* 11f73edb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73ede jne 0x11f73f31 */
  if (!C.zf) goto L_11f73f31;
L_11f73ee0:;
  /* 11f73ee0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f73ee3 je 0x11f73ef2 */
  if (C.zf) goto L_11f73ef2;
L_11f73ee5:;
  /* 11f73ee5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f73ee7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f73ee8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73eea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f73eeb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11f73eed je 0x11f73f1e */
  if (C.zf) goto L_11f73f1e;
  /* 11f73eef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f73ef0 jne 0x11f73ee5 */
  if (!C.zf) goto L_11f73ee5;
L_11f73ef2:;
  /* 11f73ef2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f73ef6 pop ebx */
  EBX = (pop32());
  /* 11f73ef7 pop esi */
  ESI = (pop32());
  /* 11f73ef8 pop edi */
  EDI = (pop32());
  /* 11f73ef9 ret  */
  ESPCHK(0x11f73ea0u, _esp0);
  ESP += 4; return;
L_11f73efa:;
  /* 11f73efa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f73f00 je 0x11f73f14 */
  if (C.zf) goto L_11f73f14;
L_11f73f02:;
  /* 11f73f02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73f04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f73f05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73f06 je 0x11f73f96 */
  if (C.zf) goto L_11f73f96;
  /* 11f73f0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f73f12 jne 0x11f73f02 */
  if (!C.zf) goto L_11f73f02;
L_11f73f14:;
  /* 11f73f14 mov ebx, ecx */
  EBX = (ECX);
  /* 11f73f16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73f19 jne 0x11f73f87 */
  if (!C.zf) goto L_11f73f87;
L_11f73f1b:;
  /* 11f73f1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73f1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11f73f1e:;
  /* 11f73f1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11f73f1f jne 0x11f73f1b */
  if (!C.zf) goto L_11f73f1b;
  /* 11f73f21 pop ebx */
  EBX = (pop32());
  /* 11f73f22 pop esi */
  ESI = (pop32());
L_11f73f23:;
  /* 11f73f23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f73f27 pop edi */
  EDI = (pop32());
  /* 11f73f28 ret  */
  ESPCHK(0x11f73ea0u, _esp0);
  ESP += 4; return;
L_11f73f29:;
  /* 11f73f29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f73f2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73f2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73f2f je 0x11f73ee0 */
  if (C.zf) goto L_11f73ee0;
L_11f73f31:;
  /* 11f73f31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11f73f36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11f73f38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73f3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f73f3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73f3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11f73f41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73f44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11f73f49 je 0x11f73f29 */
  if (C.zf) goto L_11f73f29;
  /* 11f73f4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11f73f4d je 0x11f73f7b */
  if (C.zf) goto L_11f73f7b;
  /* 11f73f4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11f73f51 je 0x11f73f71 */
  if (C.zf) goto L_11f73f71;
  /* 11f73f53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11f73f59 je 0x11f73f67 */
  if (C.zf) goto L_11f73f67;
  /* 11f73f5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11f73f61 jne 0x11f73f29 */
  if (!C.zf) goto L_11f73f29;
  /* 11f73f63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f73f65 jmp 0x11f73f7f */
  goto L_11f73f7f;
L_11f73f67:;
  /* 11f73f67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f73f6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f73f6f jmp 0x11f73f7f */
  goto L_11f73f7f;
L_11f73f71:;
  /* 11f73f71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f73f77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11f73f79 jmp 0x11f73f7f */
  goto L_11f73f7f;
L_11f73f7b:;
  /* 11f73f7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f73f7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11f73f7f:;
  /* 11f73f7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73f82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73f84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73f85 je 0x11f73f91 */
  if (C.zf) goto L_11f73f91;
L_11f73f87:;
  /* 11f73f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f73f89:;
  /* 11f73f89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11f73f8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73f8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73f8f jne 0x11f73f89 */
  if (!C.zf) goto L_11f73f89;
L_11f73f91:;
  /* 11f73f91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11f73f94 jne 0x11f73f1b */
  if (!C.zf) goto L_11f73f1b;
L_11f73f96:;
  /* 11f73f96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f73f9a pop ebx */
  EBX = (pop32());
  /* 11f73f9b pop esi */
  ESI = (pop32());
  /* 11f73f9c pop edi */
  EDI = (pop32());
  /* 11f73f9d ret  */
  ESPCHK(0x11f73ea0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11f73fa0 (88 bytes, 40 insns) */
void f_11f73fa0(void) {
  FTRACE(0x11f73fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73fa0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f73fa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f73fa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f73faa je 0x11f73ff3 */
  if (C.zf) goto L_11f73ff3;
  /* 11f73fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f73fae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11f73fb2 push edi */
  push32((uint32_t)(EDI));
  /* 11f73fb3 mov edi, ecx */
  EDI = (ECX);
  /* 11f73fb5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f73fb8 jb 0x11f73fe7 */
  if (C.cf) goto L_11f73fe7;
  /* 11f73fba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f73fbc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f73fbf je 0x11f73fc9 */
  if (C.zf) goto L_11f73fc9;
  /* 11f73fc1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f73fc3:;
  /* 11f73fc3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73fc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f73fc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f73fc7 jne 0x11f73fc3 */
  if (!C.zf) goto L_11f73fc3;
L_11f73fc9:;
  /* 11f73fc9 mov ecx, eax */
  ECX = (EAX);
  /* 11f73fcb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11f73fce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73fd0 mov ecx, eax */
  ECX = (EAX);
  /* 11f73fd2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f73fd5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f73fd7 mov ecx, edx */
  ECX = (EDX);
  /* 11f73fd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f73fdc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f73fdf je 0x11f73fe7 */
  if (C.zf) goto L_11f73fe7;
  /* 11f73fe1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11f73fe3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f73fe5 je 0x11f73fed */
  if (C.zf) goto L_11f73fed;
L_11f73fe7:;
  /* 11f73fe7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f73fe9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f73fea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11f73feb jne 0x11f73fe7 */
  if (!C.zf) goto L_11f73fe7;
L_11f73fed:;
  /* 11f73fed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f73ff1 pop edi */
  EDI = (pop32());
  /* 11f73ff2 ret  */
  ESPCHK(0x11f73fa0u, _esp0);
  ESP += 4; return;
L_11f73ff3:;
  /* 11f73ff3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f73ff7 ret  */
  ESPCHK(0x11f73fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ff8 @ 0x11f73ff8 (27 bytes, 13 insns) */
void f_11f73ff8(void) {
  FTRACE(0x11f73ff8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f73ff8 mov eax, dword ptr [0x11f76988] */
  EAX = (r32((uint32_t)(0x11f76988)));
  /* 11f73ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f73fff je 0x11f74010 */
  if (C.zf) goto L_11f74010;
  /* 11f74001 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11f74005 call eax */
  call_ind((uint32_t)(EAX), 0x11f74007u);
  /* 11f74007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f74009 pop ecx */
  ECX = (pop32());
  /* 11f7400a je 0x11f74010 */
  if (C.zf) goto L_11f74010;
  /* 11f7400c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7400e pop eax */
  EAX = (pop32());
  /* 11f7400f ret  */
  ESPCHK(0x11f73ff8u, _esp0);
  ESP += 4; return;
L_11f74010:;
  /* 11f74010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f74012 ret  */
  ESPCHK(0x11f73ff8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004013 @ 0x11f74013 (511 bytes, 193 insns) */
void f_11f74013(void) {
  FTRACE(0x11f74013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f74013 push ebp */
  push32((uint32_t)(EBP));
  /* 11f74014 mov ebp, esp */
  EBP = (ESP);
  /* 11f74016 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f74018 push 0x11f75480 */
  push32((uint32_t)(0x11f75480u));
  /* 11f7401d push 0x11f747e0 */
  push32((uint32_t)(0x11f747e0u));
  /* 11f74022 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f74028 push eax */
  push32((uint32_t)(EAX));
  /* 11f74029 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f74030 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f74033 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74034 push esi */
  push32((uint32_t)(ESI));
  /* 11f74035 push edi */
  push32((uint32_t)(EDI));
  /* 11f74036 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f74039 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f7403b cmp dword ptr [0x11f769b0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11f769b0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74041 jne 0x11f74089 */
  if (!C.zf) goto L_11f74089;
  /* 11f74043 push edi */
  push32((uint32_t)(EDI));
  /* 11f74044 push edi */
  push32((uint32_t)(EDI));
  /* 11f74045 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f74047 pop ebx */
  EBX = (pop32());
  /* 11f74048 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74049 push 0x11f75478 */
  push32((uint32_t)(0x11f75478u));
  /* 11f7404e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11f74053 push esi */
  push32((uint32_t)(ESI));
  /* 11f74054 push edi */
  push32((uint32_t)(EDI));
  /* 11f74055 call dword ptr [0x11f75010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75010))), 0x11f7405bu);
  /* 11f7405b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7405d je 0x11f74067 */
  if (C.zf) goto L_11f74067;
  /* 11f7405f mov dword ptr [0x11f769b0], ebx */
  w32((uint32_t)(0x11f769b0), (EBX));
  /* 11f74065 jmp 0x11f74089 */
  goto L_11f74089;
L_11f74067:;
  /* 11f74067 push edi */
  push32((uint32_t)(EDI));
  /* 11f74068 push edi */
  push32((uint32_t)(EDI));
  /* 11f74069 push ebx */
  push32((uint32_t)(EBX));
  /* 11f7406a push 0x11f75474 */
  push32((uint32_t)(0x11f75474u));
  /* 11f7406f push esi */
  push32((uint32_t)(ESI));
  /* 11f74070 push edi */
  push32((uint32_t)(EDI));
  /* 11f74071 call dword ptr [0x11f75014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75014))), 0x11f74077u);
  /* 11f74077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f74079 je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f7407f mov dword ptr [0x11f769b0], 2 */
  w32((uint32_t)(0x11f769b0), (0x2u));
L_11f74089:;
  /* 11f74089 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7408c jle 0x11f7409e */
  if ((C.zf||C.sf!=C.of)) goto L_11f7409e;
  /* 11f7408e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f74091 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f74094 call 0x11f74237 */
  push32(0x11f74099u); f_11f74237();
  /* 11f74099 pop ecx */
  ECX = (pop32());
  /* 11f7409a pop ecx */
  ECX = (pop32());
  /* 11f7409b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f7409e:;
  /* 11f7409e mov eax, dword ptr [0x11f769b0] */
  EAX = (r32((uint32_t)(0x11f769b0)));
  /* 11f740a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f740a6 jne 0x11f740c5 */
  if (!C.zf) goto L_11f740c5;
  /* 11f740a8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f740ab push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f740ae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f740b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f740b4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f740b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f740ba call dword ptr [0x11f75014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75014))), 0x11f740c0u);
  /* 11f740c0 jmp 0x11f741a3 */
  goto L_11f741a3;
L_11f740c5:;
  /* 11f740c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f740c8 jne 0x11f741a1 */
  if (!C.zf) goto L_11f741a1;
  /* 11f740ce cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f740d1 jne 0x11f740db */
  if (!C.zf) goto L_11f740db;
  /* 11f740d3 mov eax, dword ptr [0x11f769a8] */
  EAX = (r32((uint32_t)(0x11f769a8)));
  /* 11f740d8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11f740db:;
  /* 11f740db push edi */
  push32((uint32_t)(EDI));
  /* 11f740dc push edi */
  push32((uint32_t)(EDI));
  /* 11f740dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f740e0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f740e3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f740e6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f740e8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f740ea and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f740ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f740ee push eax */
  push32((uint32_t)(EAX));
  /* 11f740ef push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f740f2 call dword ptr [0x11f75024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75024))), 0x11f740f8u);
  /* 11f740f8 mov ebx, eax */
  EBX = (EAX);
  /* 11f740fa mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11f740fd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f740ff je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f74105 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11f74108 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11f7410b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7410e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f74110 call 0x11f748c0 */
  push32(0x11f74115u); f_11f748c0();
  /* 11f74115 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f74118 mov eax, esp */
  EAX = (ESP);
  /* 11f7411a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f7411d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f74121 jmp 0x11f74136 */
  goto L_11f74136;
  /* 11f74123 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f74125 pop eax */
  EAX = (pop32());
  /* 11f74126 ret  */
  ESPCHK(0x11f74013u, _esp0);
  ESP += 4; return;
  /* 11f74127 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f7412a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f7412c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11f7412f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f74133 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11f74136:;
  /* 11f74136 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74139 je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f7413b push ebx */
  push32((uint32_t)(EBX));
  /* 11f7413c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f7413f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f74142 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f74145 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f74147 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f7414a call dword ptr [0x11f75024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75024))), 0x11f74150u);
  /* 11f74150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f74152 je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f74154 push edi */
  push32((uint32_t)(EDI));
  /* 11f74155 push edi */
  push32((uint32_t)(EDI));
  /* 11f74156 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74157 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f7415a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f7415d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f74160 call dword ptr [0x11f75010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75010))), 0x11f74166u);
  /* 11f74166 mov esi, eax */
  ESI = (EAX);
  /* 11f74168 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11f7416b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7416d je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f7416f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11f74173 je 0x11f741b5 */
  if (C.zf) goto L_11f741b5;
  /* 11f74175 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74178 je 0x11f74230 */
  if (C.zf) goto L_11f74230;
  /* 11f7417e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74181 jg 0x11f741a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f741a1;
  /* 11f74183 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f74186 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f74189 push ebx */
  push32((uint32_t)(EBX));
  /* 11f7418a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f7418d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f74190 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f74193 call dword ptr [0x11f75010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75010))), 0x11f74199u);
  /* 11f74199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f7419b jne 0x11f74230 */
  if (!C.zf) goto L_11f74230;
L_11f741a1:;
  /* 11f741a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f741a3:;
  /* 11f741a3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11f741a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f741a9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f741b0 pop edi */
  EDI = (pop32());
  /* 11f741b1 pop esi */
  ESI = (pop32());
  /* 11f741b2 pop ebx */
  EBX = (pop32());
  /* 11f741b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f741b4 ret  */
  ESPCHK(0x11f74013u, _esp0);
  ESP += 4; return;
L_11f741b5:;
  /* 11f741b5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f741bc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11f741bf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f741c2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f741c4 call 0x11f748c0 */
  push32(0x11f741c9u); f_11f748c0();
  /* 11f741c9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f741cc mov ebx, esp */
  EBX = (ESP);
  /* 11f741ce mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11f741d1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f741d5 jmp 0x11f741e9 */
  goto L_11f741e9;
  /* 11f741d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f741d9 pop eax */
  EAX = (pop32());
  /* 11f741da ret  */
  ESPCHK(0x11f74013u, _esp0);
  ESP += 4; return;
  /* 11f741db mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f741de xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11f741e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f741e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f741e6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11f741e9:;
  /* 11f741e9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f741eb je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f741ed push esi */
  push32((uint32_t)(ESI));
  /* 11f741ee push ebx */
  push32((uint32_t)(EBX));
  /* 11f741ef push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11f741f2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11f741f5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f741f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f741fb call dword ptr [0x11f75010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75010))), 0x11f74201u);
  /* 11f74201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f74203 je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
  /* 11f74205 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74208 push edi */
  push32((uint32_t)(EDI));
  /* 11f74209 push edi */
  push32((uint32_t)(EDI));
  /* 11f7420a jne 0x11f74210 */
  if (!C.zf) goto L_11f74210;
  /* 11f7420c push edi */
  push32((uint32_t)(EDI));
  /* 11f7420d push edi */
  push32((uint32_t)(EDI));
  /* 11f7420e jmp 0x11f74216 */
  goto L_11f74216;
L_11f74210:;
  /* 11f74210 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11f74213 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11f74216:;
  /* 11f74216 push esi */
  push32((uint32_t)(ESI));
  /* 11f74217 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74218 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f7421d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11f74220 call dword ptr [0x11f75064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75064))), 0x11f74226u);
  /* 11f74226 mov esi, eax */
  ESI = (EAX);
  /* 11f74228 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7422a je 0x11f741a1 */
  if (C.zf) goto L_11f741a1;
L_11f74230:;
  /* 11f74230 mov eax, esi */
  EAX = (ESI);
  /* 11f74232 jmp 0x11f741a3 */
  goto L_11f741a3;
}

/* FUN_10004237 @ 0x11f74237 (43 bytes, 20 insns) */
void f_11f74237(void) {
  FTRACE(0x11f74237u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f74237 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f7423b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f7423f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f74241 push esi */
  push32((uint32_t)(ESI));
  /* 11f74242 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11f74245 je 0x11f74254 */
  if (C.zf) goto L_11f74254;
L_11f74247:;
  /* 11f74247 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f7424a je 0x11f74254 */
  if (C.zf) goto L_11f74254;
  /* 11f7424c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f7424d mov esi, ecx */
  ESI = (ECX);
  /* 11f7424f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f74250 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11f74252 jne 0x11f74247 */
  if (!C.zf) goto L_11f74247;
L_11f74254:;
  /* 11f74254 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f74257 pop esi */
  ESI = (pop32());
  /* 11f74258 jne 0x11f7425f */
  if (!C.zf) goto L_11f7425f;
  /* 11f7425a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7425e ret  */
  ESPCHK(0x11f74237u, _esp0);
  ESP += 4; return;
L_11f7425f:;
  /* 11f7425f mov eax, edx */
  EAX = (EDX);
  /* 11f74261 ret  */
  ESPCHK(0x11f74237u, _esp0);
  ESP += 4; return;
}

/* FUN_10004262 @ 0x11f74262 (318 bytes, 123 insns) */
void f_11f74262(void) {
  FTRACE(0x11f74262u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f74262 push ebp */
  push32((uint32_t)(EBP));
  /* 11f74263 mov ebp, esp */
  EBP = (ESP);
  /* 11f74265 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f74267 push 0x11f75498 */
  push32((uint32_t)(0x11f75498u));
  /* 11f7426c push 0x11f747e0 */
  push32((uint32_t)(0x11f747e0u));
  /* 11f74271 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f74277 push eax */
  push32((uint32_t)(EAX));
  /* 11f74278 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f7427f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f74282 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74283 push esi */
  push32((uint32_t)(ESI));
  /* 11f74284 push edi */
  push32((uint32_t)(EDI));
  /* 11f74285 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f74288 mov eax, dword ptr [0x11f769b4] */
  EAX = (r32((uint32_t)(0x11f769b4)));
  /* 11f7428d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f7428f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74291 jne 0x11f742d1 */
  if (!C.zf) goto L_11f742d1;
  /* 11f74293 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f74296 push eax */
  push32((uint32_t)(EAX));
  /* 11f74297 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f74299 pop esi */
  ESI = (pop32());
  /* 11f7429a push esi */
  push32((uint32_t)(ESI));
  /* 11f7429b push 0x11f75478 */
  push32((uint32_t)(0x11f75478u));
  /* 11f742a0 push esi */
  push32((uint32_t)(ESI));
  /* 11f742a1 call dword ptr [0x11f7500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7500c))), 0x11f742a7u);
  /* 11f742a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f742a9 je 0x11f742af */
  if (C.zf) goto L_11f742af;
  /* 11f742ab mov eax, esi */
  EAX = (ESI);
  /* 11f742ad jmp 0x11f742cc */
  goto L_11f742cc;
L_11f742af:;
  /* 11f742af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f742b2 push eax */
  push32((uint32_t)(EAX));
  /* 11f742b3 push esi */
  push32((uint32_t)(ESI));
  /* 11f742b4 push 0x11f75474 */
  push32((uint32_t)(0x11f75474u));
  /* 11f742b9 push esi */
  push32((uint32_t)(ESI));
  /* 11f742ba push ebx */
  push32((uint32_t)(EBX));
  /* 11f742bb call dword ptr [0x11f75018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75018))), 0x11f742c1u);
  /* 11f742c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f742c3 je 0x11f74397 */
  if (C.zf) goto L_11f74397;
  /* 11f742c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f742cb pop eax */
  EAX = (pop32());
L_11f742cc:;
  /* 11f742cc mov dword ptr [0x11f769b4], eax */
  w32((uint32_t)(0x11f769b4), (EAX));
L_11f742d1:;
  /* 11f742d1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f742d4 jne 0x11f742fa */
  if (!C.zf) goto L_11f742fa;
  /* 11f742d6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f742d9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f742db jne 0x11f742e2 */
  if (!C.zf) goto L_11f742e2;
  /* 11f742dd mov eax, dword ptr [0x11f76998] */
  EAX = (r32((uint32_t)(0x11f76998)));
L_11f742e2:;
  /* 11f742e2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f742e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f742e8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f742eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f742ee push eax */
  push32((uint32_t)(EAX));
  /* 11f742ef call dword ptr [0x11f75018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75018))), 0x11f742f5u);
  /* 11f742f5 jmp 0x11f74399 */
  goto L_11f74399;
L_11f742fa:;
  /* 11f742fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f742fd jne 0x11f74397 */
  if (!C.zf) goto L_11f74397;
  /* 11f74303 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74306 jne 0x11f74310 */
  if (!C.zf) goto L_11f74310;
  /* 11f74308 mov eax, dword ptr [0x11f769a8] */
  EAX = (r32((uint32_t)(0x11f769a8)));
  /* 11f7430d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11f74310:;
  /* 11f74310 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74311 push ebx */
  push32((uint32_t)(EBX));
  /* 11f74312 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f74315 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f74318 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f7431b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f7431d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7431f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f74322 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f74323 push eax */
  push32((uint32_t)(EAX));
  /* 11f74324 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f74327 call dword ptr [0x11f75024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75024))), 0x11f7432du);
  /* 11f7432d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f74330 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74332 je 0x11f74397 */
  if (C.zf) goto L_11f74397;
  /* 11f74334 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11f74337 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11f7433a mov eax, edi */
  EAX = (EDI);
  /* 11f7433c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7433f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f74341 call 0x11f748c0 */
  push32(0x11f74346u); f_11f748c0();
  /* 11f74346 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f74349 mov esi, esp */
  ESI = (ESP);
  /* 11f7434b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11f7434e push edi */
  push32((uint32_t)(EDI));
  /* 11f7434f push ebx */
  push32((uint32_t)(EBX));
  /* 11f74350 push esi */
  push32((uint32_t)(ESI));
  /* 11f74351 call 0x11f73fa0 */
  push32(0x11f74356u); f_11f73fa0();
  /* 11f74356 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f74359 jmp 0x11f74366 */
  goto L_11f74366;
  /* 11f7435b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7435d pop eax */
  EAX = (pop32());
  /* 11f7435e ret  */
  ESPCHK(0x11f74262u, _esp0);
  ESP += 4; return;
  /* 11f7435f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f74362 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11f74364 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11f74366:;
  /* 11f74366 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11f7436a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7436c je 0x11f74397 */
  if (C.zf) goto L_11f74397;
  /* 11f7436e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11f74371 push esi */
  push32((uint32_t)(ESI));
  /* 11f74372 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11f74375 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11f74378 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f7437a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11f7437d call dword ptr [0x11f75024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f75024))), 0x11f74383u);
  /* 11f74383 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74385 je 0x11f74397 */
  if (C.zf) goto L_11f74397;
  /* 11f74387 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11f7438a push eax */
  push32((uint32_t)(EAX));
  /* 11f7438b push esi */
  push32((uint32_t)(ESI));
  /* 11f7438c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f7438f call dword ptr [0x11f7500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f7500c))), 0x11f74395u);
  /* 11f74395 jmp 0x11f74399 */
  goto L_11f74399;
L_11f74397:;
  /* 11f74397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f74399:;
  /* 11f74399 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11f7439c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f7439f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f743a6 pop edi */
  EDI = (pop32());
  /* 11f743a7 pop esi */
  ESI = (pop32());
  /* 11f743a8 pop ebx */
  EBX = (pop32());
  /* 11f743a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f743aa ret  */
  ESPCHK(0x11f74262u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x11f743b0 (664 bytes, 270 insns) [15 switch table(s)] */
void f_11f743b0(void) {
  FTRACE(0x11f743b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f743b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f743b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f743b3 push edi */
  push32((uint32_t)(EDI));
  /* 11f743b4 push esi */
  push32((uint32_t)(ESI));
  /* 11f743b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f743b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f743bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f743be mov eax, ecx */
  EAX = (ECX);
  /* 11f743c0 mov edx, ecx */
  EDX = (ECX);
  /* 11f743c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f743c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f743c6 jbe 0x11f743d0 */
  if ((C.cf||C.zf)) goto L_11f743d0;
  /* 11f743c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f743ca jb 0x11f74548 */
  if (C.cf) goto L_11f74548;
L_11f743d0:;
  /* 11f743d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f743d6 jne 0x11f743ec */
  if (!C.zf) goto L_11f743ec;
  /* 11f743d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f743db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f743de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f743e1 jb 0x11f7440c */
  if (C.cf) goto L_11f7440c;
  /* 11f743e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f743e5 jmp dword ptr [edx*4 + 0x11f744f8] */
  switch (EDX) {
    case 0: goto L_11f74508;
    case 1: goto L_11f74510;
    case 2: goto L_11f7451c;
    case 3: goto L_11f74530;
    default: x86_unimpl("switch@0x11f743e5 out of table"); return;
  }
L_11f743ec:;
  /* 11f743ec mov eax, edi */
  EAX = (EDI);
  /* 11f743ee mov edx, 3 */
  EDX = (0x3u);
  /* 11f743f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f743f6 jb 0x11f74404 */
  if (C.cf) goto L_11f74404;
  /* 11f743f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f743fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f743fd jmp dword ptr [eax*4 + 0x11f74410] */
  switch (EAX) {
    case 1: goto L_11f74420;
    case 2: goto L_11f7444c;
    case 3: goto L_11f74470;
    default: x86_unimpl("switch@0x11f743fd out of table"); return;
  }
L_11f74404:;
  /* 11f74404 jmp dword ptr [ecx*4 + 0x11f74508] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f74508)))); return;
  /* 11f7440b nop  */
  /* nop */
L_11f7440c:;
  /* 11f7440c jmp dword ptr [ecx*4 + 0x11f7448c] */
  switch (ECX) {
    case 0: goto L_11f744ef;
    case 1: goto L_11f744dc;
    case 2: goto L_11f744d4;
    case 3: goto L_11f744cc;
    case 4: goto L_11f744c4;
    case 5: goto L_11f744bc;
    case 6: goto L_11f744b4;
    case 7: goto L_11f744ac;
    default: x86_unimpl("switch@0x11f7440c out of table"); return;
  }
  /* 11f74413 nop  */
  /* nop */
L_11f74420:;
  /* 11f74420 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f74422 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f74424 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f74426 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f74429 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f7442c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f7442f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f74432 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f74435 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f74438 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7443b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7443e jb 0x11f7440c */
  if (C.cf) goto L_11f7440c;
  /* 11f74440 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f74442 jmp dword ptr [edx*4 + 0x11f744f8] */
  switch (EDX) {
    case 0: goto L_11f74508;
    case 1: goto L_11f74510;
    case 2: goto L_11f7451c;
    case 3: goto L_11f74530;
    default: x86_unimpl("switch@0x11f74442 out of table"); return;
  }
  /* 11f74449 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f7444c:;
  /* 11f7444c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f7444e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f74450 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f74452 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f74455 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f74458 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f7445b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7445e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f74461 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74464 jb 0x11f7440c */
  if (C.cf) goto L_11f7440c;
  /* 11f74466 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f74468 jmp dword ptr [edx*4 + 0x11f744f8] */
  switch (EDX) {
    case 0: goto L_11f74508;
    case 1: goto L_11f74510;
    case 2: goto L_11f7451c;
    case 3: goto L_11f74530;
    default: x86_unimpl("switch@0x11f74468 out of table"); return;
  }
  /* 11f7446f nop  */
  /* nop */
L_11f74470:;
  /* 11f74470 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f74472 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f74474 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f74476 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f74477 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f7447a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f7447b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7447e jb 0x11f7440c */
  if (C.cf) goto L_11f7440c;
  /* 11f74480 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f74482 jmp dword ptr [edx*4 + 0x11f744f8] */
  switch (EDX) {
    case 0: goto L_11f74508;
    case 1: goto L_11f74510;
    case 2: goto L_11f7451c;
    case 3: goto L_11f74530;
    default: x86_unimpl("switch@0x11f74482 out of table"); return;
  }
  /* 11f74489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f744ac:;
  /* 11f744ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f744b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f744b4:;
  /* 11f744b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f744b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f744bc:;
  /* 11f744bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f744c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f744c4:;
  /* 11f744c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f744c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f744cc:;
  /* 11f744cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f744d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f744d4:;
  /* 11f744d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f744d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f744dc:;
  /* 11f744dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f744e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f744e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f744eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f744ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f744ef:;
  /* 11f744ef jmp dword ptr [edx*4 + 0x11f744f8] */
  switch (EDX) {
    case 0: goto L_11f74508;
    case 1: goto L_11f74510;
    case 2: goto L_11f7451c;
    case 3: goto L_11f74530;
    default: x86_unimpl("switch@0x11f744ef out of table"); return;
  }
  /* 11f744f6 mov edi, edi */
  EDI = (EDI);
L_11f74508:;
  /* 11f74508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f7450b pop esi */
  ESI = (pop32());
  /* 11f7450c pop edi */
  EDI = (pop32());
  /* 11f7450d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f7450e ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f7450f nop  */
  /* nop */
L_11f74510:;
  /* 11f74510 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f74512 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f74514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f74517 pop esi */
  ESI = (pop32());
  /* 11f74518 pop edi */
  EDI = (pop32());
  /* 11f74519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f7451a ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f7451b nop  */
  /* nop */
L_11f7451c:;
  /* 11f7451c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f7451e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f74520 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f74523 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f74526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f74529 pop esi */
  ESI = (pop32());
  /* 11f7452a pop edi */
  EDI = (pop32());
  /* 11f7452b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f7452c ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f7452d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f74530:;
  /* 11f74530 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f74532 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f74534 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f74537 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f7453a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f7453d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f74540 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f74543 pop esi */
  ESI = (pop32());
  /* 11f74544 pop edi */
  EDI = (pop32());
  /* 11f74545 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f74546 ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f74547 nop  */
  /* nop */
L_11f74548:;
  /* 11f74548 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f7454c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f74550 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f74556 jne 0x11f7457c */
  if (!C.zf) goto L_11f7457c;
  /* 11f74558 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f7455b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f7455e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74561 jb 0x11f74570 */
  if (C.cf) goto L_11f74570;
  /* 11f74563 std  */
  C.df=1;
  /* 11f74564 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f74566 cld  */
  C.df=0;
  /* 11f74567 jmp dword ptr [edx*4 + 0x11f74690] */
  switch (EDX) {
    case 0: goto L_11f746a0;
    case 1: goto L_11f746a8;
    case 2: goto L_11f746b8;
    case 3: goto L_11f746cc;
    default: x86_unimpl("switch@0x11f74567 out of table"); return;
  }
  /* 11f7456e mov edi, edi */
  EDI = (EDI);
L_11f74570:;
  /* 11f74570 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f74572 jmp dword ptr [ecx*4 + 0x11f74640] */
  switch (ECX) {
    case 0: goto L_11f74687;
    default: x86_unimpl("switch@0x11f74572 out of table"); return;
  }
  /* 11f74579 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f7457c:;
  /* 11f7457c mov eax, edi */
  EAX = (EDI);
  /* 11f7457e mov edx, 3 */
  EDX = (0x3u);
  /* 11f74583 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74586 jb 0x11f74594 */
  if (C.cf) goto L_11f74594;
  /* 11f74588 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f7458b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7458d jmp dword ptr [eax*4 + 0x11f74598] */
  switch (EAX) {
    case 1: goto L_11f745a8;
    case 2: goto L_11f745c8;
    case 3: goto L_11f745f0;
    default: x86_unimpl("switch@0x11f7458d out of table"); return;
  }
L_11f74594:;
  /* 11f74594 jmp dword ptr [ecx*4 + 0x11f74690] */
  switch (ECX) {
    case 0: goto L_11f746a0;
    case 1: goto L_11f746a8;
    case 2: goto L_11f746b8;
    case 3: goto L_11f746cc;
    default: x86_unimpl("switch@0x11f74594 out of table"); return;
  }
  /* 11f7459b nop  */
  /* nop */
L_11f745a8:;
  /* 11f745a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f745ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f745ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f745b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f745b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f745b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f745b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f745b8 jb 0x11f74570 */
  if (C.cf) goto L_11f74570;
  /* 11f745ba std  */
  C.df=1;
  /* 11f745bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f745bd cld  */
  C.df=0;
  /* 11f745be jmp dword ptr [edx*4 + 0x11f74690] */
  switch (EDX) {
    case 0: goto L_11f746a0;
    case 1: goto L_11f746a8;
    case 2: goto L_11f746b8;
    case 3: goto L_11f746cc;
    default: x86_unimpl("switch@0x11f745be out of table"); return;
  }
  /* 11f745c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f745c8:;
  /* 11f745c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f745cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f745cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f745d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f745d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f745d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f745d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f745dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f745df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f745e2 jb 0x11f74570 */
  if (C.cf) goto L_11f74570;
  /* 11f745e4 std  */
  C.df=1;
  /* 11f745e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f745e7 cld  */
  C.df=0;
  /* 11f745e8 jmp dword ptr [edx*4 + 0x11f74690] */
  switch (EDX) {
    case 0: goto L_11f746a0;
    case 1: goto L_11f746a8;
    case 2: goto L_11f746b8;
    case 3: goto L_11f746cc;
    default: x86_unimpl("switch@0x11f745e8 out of table"); return;
  }
  /* 11f745ef nop  */
  /* nop */
L_11f745f0:;
  /* 11f745f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f745f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f745f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f745f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f745fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f745fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f74601 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f74604 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f74607 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7460a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f7460d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74610 jb 0x11f74570 */
  if (C.cf) goto L_11f74570;
  /* 11f74616 std  */
  C.df=1;
  /* 11f74617 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f74619 cld  */
  C.df=0;
  /* 11f7461a jmp dword ptr [edx*4 + 0x11f74690] */
  switch (EDX) {
    case 0: goto L_11f746a0;
    case 1: goto L_11f746a8;
    case 2: goto L_11f746b8;
    case 3: goto L_11f746cc;
    default: x86_unimpl("switch@0x11f7461a out of table"); return;
  }
  /* 11f74621 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f74624 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11f74625 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f74626 not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f74628 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11f74629 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f7462a not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f7462c push esp */
  push32((uint32_t)(ESP));
  /* 11f7462d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f7462e not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f74630 pop esp */
  ESP = (pop32());
  /* 11f74631 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f74632 not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f74634 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f74636 not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f74638 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11f74638");
  /* 11f74639 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f7463a not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f7463c je 0x11f74684 */
  if (C.zf) goto L_11f74684;
  /* 11f7463e not dword ptr [ecx] */
  w32((uint32_t)(ECX), (~(r32((uint32_t)(ECX)))));
  /* 11f74644 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f74648 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f7464c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f74650 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f74654 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f74658 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f7465c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f74660 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f74664 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f74668 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f7466c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f74670 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f74674 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f74678 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f7467c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f74683 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f74685 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f74687:;
  /* 11f74687 jmp dword ptr [edx*4 + 0x11f74690] */
  switch (EDX) {
    case 0: goto L_11f746a0;
    case 1: goto L_11f746a8;
    case 2: goto L_11f746b8;
    case 3: goto L_11f746cc;
    default: x86_unimpl("switch@0x11f74687 out of table"); return;
  }
  /* 11f7468e mov edi, edi */
  EDI = (EDI);
L_11f746a0:;
  /* 11f746a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f746a3 pop esi */
  ESI = (pop32());
  /* 11f746a4 pop edi */
  EDI = (pop32());
  /* 11f746a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f746a6 ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f746a7 nop  */
  /* nop */
L_11f746a8:;
  /* 11f746a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f746ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f746ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f746b1 pop esi */
  ESI = (pop32());
  /* 11f746b2 pop edi */
  EDI = (pop32());
  /* 11f746b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f746b4 ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f746b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f746b8:;
  /* 11f746b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f746bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f746be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f746c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f746c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f746c7 pop esi */
  ESI = (pop32());
  /* 11f746c8 pop edi */
  EDI = (pop32());
  /* 11f746c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f746ca ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
  /* 11f746cb nop  */
  /* nop */
L_11f746cc:;
  /* 11f746cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f746cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f746d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f746d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f746d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f746db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f746de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f746e1 pop esi */
  ESI = (pop32());
  /* 11f746e2 pop edi */
  EDI = (pop32());
  /* 11f746e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f746e4 ret  */
  ESPCHK(0x11f743b0u, _esp0);
  ESP += 4; return;
L_11f74684: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11f74684 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11f746e8 (32 bytes, 18 insns) */
void f_11f746e8(void) {
  FTRACE(0x11f746e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f746e8 push ebp */
  push32((uint32_t)(EBP));
  /* 11f746e9 mov ebp, esp */
  EBP = (ESP);
  /* 11f746eb push ebx */
  push32((uint32_t)(EBX));
  /* 11f746ec push esi */
  push32((uint32_t)(ESI));
  /* 11f746ed push edi */
  push32((uint32_t)(EDI));
  /* 11f746ee push ebp */
  push32((uint32_t)(EBP));
  /* 11f746ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11f746f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f746f3 push 0x11f74700 */
  push32((uint32_t)(0x11f74700u));
  /* 11f746f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11f746fb call 0x11f748f0 */
  push32(0x11f74700u); f_11f748f0();
  /* 11f74700 pop ebp */
  EBP = (pop32());
  /* 11f74701 pop edi */
  EDI = (pop32());
  /* 11f74702 pop esi */
  ESI = (pop32());
  /* 11f74703 pop ebx */
  EBX = (pop32());
  /* 11f74704 mov esp, ebp */
  ESP = (EBP);
  /* 11f74706 pop ebp */
  EBP = (pop32());
  /* 11f74707 ret  */
  ESPCHK(0x11f746e8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11f7472a (104 bytes, 33 insns) */
void f_11f7472a(void) {
  FTRACE(0x11f7472au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7472a push ebx */
  push32((uint32_t)(EBX));
  /* 11f7472b push esi */
  push32((uint32_t)(ESI));
  /* 11f7472c push edi */
  push32((uint32_t)(EDI));
  /* 11f7472d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f74731 push eax */
  push32((uint32_t)(EAX));
  /* 11f74732 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11f74734 push 0x11f74708 */
  push32((uint32_t)(0x11f74708u));
  /* 11f74739 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11f74740 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11f74747:;
  /* 11f74747 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11f7474b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f7474e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11f74751 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f74754 je 0x11f74784 */
  if (C.zf) goto L_11f74784;
  /* 11f74756 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7475a je 0x11f74784 */
  if (C.zf) goto L_11f74784;
  /* 11f7475c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11f7475f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11f74762 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11f74766 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11f74769 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f7476e jne 0x11f74782 */
  if (!C.zf) goto L_11f74782;
  /* 11f74770 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11f74775 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11f74779 call 0x11f747be */
  push32(0x11f7477eu); f_11f747be();
  /* 11f7477e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11f74782u);
L_11f74782:;
  /* 11f74782 jmp 0x11f74747 */
  goto L_11f74747;
L_11f74784:;
  /* 11f74784 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11f7478b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f7478e pop edi */
  EDI = (pop32());
  /* 11f7478f pop esi */
  ESI = (pop32());
  /* 11f74790 pop ebx */
  EBX = (pop32());
  /* 11f74791 ret  */
  ESPCHK(0x11f7472au, _esp0);
  ESP += 4; return;
}

/* FUN_100047be @ 0x11f747be (24 bytes, 10 insns) */
void f_11f747be(void) {
  FTRACE(0x11f747beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f747be push ebx */
  push32((uint32_t)(EBX));
  /* 11f747bf push ecx */
  push32((uint32_t)(ECX));
  /* 11f747c0 mov ebx, 0x11f765e0 */
  EBX = (0x11f765e0u);
  /* 11f747c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f747c8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11f747cb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11f747ce mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11f747d1 pop ecx */
  ECX = (pop32());
  /* 11f747d2 pop ebx */
  EBX = (pop32());
  /* 11f747d3 ret 4 */
  ESPCHK(0x11f747beu, _esp0);
  ESP += 8; return;
}

/* FUN_1000489d @ 0x11f7489d (27 bytes, 11 insns) */
void f_11f7489d(void) {
  FTRACE(0x11f7489du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f7489d push ebp */
  push32((uint32_t)(EBP));
  /* 11f7489e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f748a2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11f748a4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f748a7 push eax */
  push32((uint32_t)(EAX));
  /* 11f748a8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f748ab push eax */
  push32((uint32_t)(EAX));
  /* 11f748ac call 0x11f7472a */
  push32(0x11f748b1u); f_11f7472a();
  /* 11f748b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f748b4 pop ebp */
  EBP = (pop32());
  /* 11f748b5 ret 4 */
  ESPCHK(0x11f7489du, _esp0);
  ESP += 8; return;
}

/* FUN_100048c0 @ 0x11f748c0 (47 bytes, 17 insns) */
void f_11f748c0(void) {
  FTRACE(0x11f748c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f748c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f748c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f748c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11f748ca jb 0x11f748e0 */
  if (C.cf) goto L_11f748e0;
L_11f748cc:;
  /* 11f748cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f748d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f748d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f748d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f748de jae 0x11f748cc */
  if (!C.cf) goto L_11f748cc;
L_11f748e0:;
  /* 11f748e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f748e2 mov eax, esp */
  EAX = (ESP);
  /* 11f748e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11f748e6 mov esp, ecx */
  ESP = (ECX);
  /* 11f748e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f748ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f748ed push eax */
  push32((uint32_t)(EAX));
  /* 11f748ee ret  */
  ESPCHK(0x11f748c0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11f748f0 (6 bytes, 1 insns) */
void f_11f748f0(void) {
  FTRACE(0x11f748f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f748f0 jmp dword ptr [0x11f75008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11f75008)))); return;
}

