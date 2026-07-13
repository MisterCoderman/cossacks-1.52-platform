#include "recomp.h"

/* FUN_10001000 @ 0x11b01000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11b01000(void) {
  FTRACE(0x11b01000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b01000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01002 call dword ptr [0x11b06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06140))), 0x11b01008u);
  /* 11b01008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0100e ja 0x11b0102f */
  if ((!C.cf&&!C.zf)) goto L_11b0102f;
  /* 11b01010 jmp dword ptr [eax*4 + 0x11b01038] */
  switch (EAX) {
    case 0: goto L_11b01017;
    case 1: goto L_11b0101d;
    case 2: goto L_11b01023;
    case 3: goto L_11b01029;
    default: x86_unimpl("switch@0x11b01010 out of table"); return;
  }
L_11b01017:;
  /* 11b01017 mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 11b0101c ret  */
  ESPCHK(0x11b01000u, _esp0);
  ESP += 4; return;
L_11b0101d:;
  /* 11b0101d mov eax, 0x1388 */
  EAX = (0x1388u);
  /* 11b01022 ret  */
  ESPCHK(0x11b01000u, _esp0);
  ESP += 4; return;
L_11b01023:;
  /* 11b01023 mov eax, 0xdac */
  EAX = (0xdacu);
  /* 11b01028 ret  */
  ESPCHK(0x11b01000u, _esp0);
  ESP += 4; return;
L_11b01029:;
  /* 11b01029 mov eax, 0xbb8 */
  EAX = (0xbb8u);
  /* 11b0102e ret  */
  ESPCHK(0x11b01000u, _esp0);
  ESP += 4; return;
L_11b0102f:;
  /* 11b0102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11b01034 ret  */
  ESPCHK(0x11b01000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11b01050 (923 bytes, 242 insns) */
void f_11b01050(void) {
  FTRACE(0x11b01050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b01050 push esi */
  push32((uint32_t)(ESI));
  /* 11b01051 mov esi, dword ptr [0x11b0611c] */
  ESI = (r32((uint32_t)(0x11b0611c)));
  /* 11b01057 push edi */
  push32((uint32_t)(EDI));
  /* 11b01058 push 0x11b072c0 */
  push32((uint32_t)(0x11b072c0u));
  /* 11b0105d push 0x11b07680 */
  push32((uint32_t)(0x11b07680u));
  /* 11b01062 call esi */
  call_ind((uint32_t)(ESI), 0x11b01064u);
  /* 11b01064 push 0x11b072b8 */
  push32((uint32_t)(0x11b072b8u));
  /* 11b01069 push 0x11b076d0 */
  push32((uint32_t)(0x11b076d0u));
  /* 11b0106e call esi */
  call_ind((uint32_t)(ESI), 0x11b01070u);
  /* 11b01070 push 0x11b072b0 */
  push32((uint32_t)(0x11b072b0u));
  /* 11b01075 push 0x11b076d8 */
  push32((uint32_t)(0x11b076d8u));
  /* 11b0107a call esi */
  call_ind((uint32_t)(ESI), 0x11b0107cu);
  /* 11b0107c push 0x11b072a8 */
  push32((uint32_t)(0x11b072a8u));
  /* 11b01081 push 0x11b076e0 */
  push32((uint32_t)(0x11b076e0u));
  /* 11b01086 call esi */
  call_ind((uint32_t)(ESI), 0x11b01088u);
  /* 11b01088 push 0x11b072a0 */
  push32((uint32_t)(0x11b072a0u));
  /* 11b0108d push 0x11b076e8 */
  push32((uint32_t)(0x11b076e8u));
  /* 11b01092 call esi */
  call_ind((uint32_t)(ESI), 0x11b01094u);
  /* 11b01094 push 0x11b07298 */
  push32((uint32_t)(0x11b07298u));
  /* 11b01099 push 0x11b07820 */
  push32((uint32_t)(0x11b07820u));
  /* 11b0109e call esi */
  call_ind((uint32_t)(ESI), 0x11b010a0u);
  /* 11b010a0 push 0x11b07290 */
  push32((uint32_t)(0x11b07290u));
  /* 11b010a5 push 0x11b07818 */
  push32((uint32_t)(0x11b07818u));
  /* 11b010aa call esi */
  call_ind((uint32_t)(ESI), 0x11b010acu);
  /* 11b010ac push 0x11b07288 */
  push32((uint32_t)(0x11b07288u));
  /* 11b010b1 push 0x11b07830 */
  push32((uint32_t)(0x11b07830u));
  /* 11b010b6 call esi */
  call_ind((uint32_t)(ESI), 0x11b010b8u);
  /* 11b010b8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b010bb push 0x11b07280 */
  push32((uint32_t)(0x11b07280u));
  /* 11b010c0 push 0x11b07828 */
  push32((uint32_t)(0x11b07828u));
  /* 11b010c5 call esi */
  call_ind((uint32_t)(ESI), 0x11b010c7u);
  /* 11b010c7 push 0x11b07278 */
  push32((uint32_t)(0x11b07278u));
  /* 11b010cc push 0x11b07840 */
  push32((uint32_t)(0x11b07840u));
  /* 11b010d1 call esi */
  call_ind((uint32_t)(ESI), 0x11b010d3u);
  /* 11b010d3 push 0x11b07270 */
  push32((uint32_t)(0x11b07270u));
  /* 11b010d8 push 0x11b07838 */
  push32((uint32_t)(0x11b07838u));
  /* 11b010dd call esi */
  call_ind((uint32_t)(ESI), 0x11b010dfu);
  /* 11b010df mov esi, dword ptr [0x11b06120] */
  ESI = (r32((uint32_t)(0x11b06120)));
  /* 11b010e5 push 0x11b07268 */
  push32((uint32_t)(0x11b07268u));
  /* 11b010ea push 0x11b07858 */
  push32((uint32_t)(0x11b07858u));
  /* 11b010ef call esi */
  call_ind((uint32_t)(ESI), 0x11b010f1u);
  /* 11b010f1 push 0x11b07260 */
  push32((uint32_t)(0x11b07260u));
  /* 11b010f6 push 0x11b07860 */
  push32((uint32_t)(0x11b07860u));
  /* 11b010fb call esi */
  call_ind((uint32_t)(ESI), 0x11b010fdu);
  /* 11b010fd push 0x11b07258 */
  push32((uint32_t)(0x11b07258u));
  /* 11b01102 push 0x11b07758 */
  push32((uint32_t)(0x11b07758u));
  /* 11b01107 call esi */
  call_ind((uint32_t)(ESI), 0x11b01109u);
  /* 11b01109 push 0x11b07250 */
  push32((uint32_t)(0x11b07250u));
  /* 11b0110e push 0x11b07760 */
  push32((uint32_t)(0x11b07760u));
  /* 11b01113 call esi */
  call_ind((uint32_t)(ESI), 0x11b01115u);
  /* 11b01115 push 0x11b07248 */
  push32((uint32_t)(0x11b07248u));
  /* 11b0111a push 0x11b07768 */
  push32((uint32_t)(0x11b07768u));
  /* 11b0111f call esi */
  call_ind((uint32_t)(ESI), 0x11b01121u);
  /* 11b01121 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01124 push 0x11b07240 */
  push32((uint32_t)(0x11b07240u));
  /* 11b01129 push 0x11b07770 */
  push32((uint32_t)(0x11b07770u));
  /* 11b0112e call esi */
  call_ind((uint32_t)(ESI), 0x11b01130u);
  /* 11b01130 push 0x11b07238 */
  push32((uint32_t)(0x11b07238u));
  /* 11b01135 push 0x11b07778 */
  push32((uint32_t)(0x11b07778u));
  /* 11b0113a call esi */
  call_ind((uint32_t)(ESI), 0x11b0113cu);
  /* 11b0113c push 0x11b07230 */
  push32((uint32_t)(0x11b07230u));
  /* 11b01141 push 0x11b07780 */
  push32((uint32_t)(0x11b07780u));
  /* 11b01146 call esi */
  call_ind((uint32_t)(ESI), 0x11b01148u);
  /* 11b01148 push 0x11b07228 */
  push32((uint32_t)(0x11b07228u));
  /* 11b0114d push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01152 call esi */
  call_ind((uint32_t)(ESI), 0x11b01154u);
  /* 11b01154 push 0x11b07220 */
  push32((uint32_t)(0x11b07220u));
  /* 11b01159 push 0x11b076f8 */
  push32((uint32_t)(0x11b076f8u));
  /* 11b0115e call esi */
  call_ind((uint32_t)(ESI), 0x11b01160u);
  /* 11b01160 push 0x11b07218 */
  push32((uint32_t)(0x11b07218u));
  /* 11b01165 push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b0116a call esi */
  call_ind((uint32_t)(ESI), 0x11b0116cu);
  /* 11b0116c push 0x11b07210 */
  push32((uint32_t)(0x11b07210u));
  /* 11b01171 push 0x11b07708 */
  push32((uint32_t)(0x11b07708u));
  /* 11b01176 call esi */
  call_ind((uint32_t)(ESI), 0x11b01178u);
  /* 11b01178 push 0x11b07208 */
  push32((uint32_t)(0x11b07208u));
  /* 11b0117d push 0x11b07718 */
  push32((uint32_t)(0x11b07718u));
  /* 11b01182 call esi */
  call_ind((uint32_t)(ESI), 0x11b01184u);
  /* 11b01184 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01187 push 0x11b07200 */
  push32((uint32_t)(0x11b07200u));
  /* 11b0118c push 0x11b07728 */
  push32((uint32_t)(0x11b07728u));
  /* 11b01191 call esi */
  call_ind((uint32_t)(ESI), 0x11b01193u);
  /* 11b01193 push 0x11b071f8 */
  push32((uint32_t)(0x11b071f8u));
  /* 11b01198 push 0x11b07738 */
  push32((uint32_t)(0x11b07738u));
  /* 11b0119d call esi */
  call_ind((uint32_t)(ESI), 0x11b0119fu);
  /* 11b0119f push 0x11b071f0 */
  push32((uint32_t)(0x11b071f0u));
  /* 11b011a4 push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b011a9 call esi */
  call_ind((uint32_t)(ESI), 0x11b011abu);
  /* 11b011ab push 0x11b071e8 */
  push32((uint32_t)(0x11b071e8u));
  /* 11b011b0 push 0x11b07720 */
  push32((uint32_t)(0x11b07720u));
  /* 11b011b5 call esi */
  call_ind((uint32_t)(ESI), 0x11b011b7u);
  /* 11b011b7 push 0x11b071e0 */
  push32((uint32_t)(0x11b071e0u));
  /* 11b011bc push 0x11b07730 */
  push32((uint32_t)(0x11b07730u));
  /* 11b011c1 call esi */
  call_ind((uint32_t)(ESI), 0x11b011c3u);
  /* 11b011c3 push 0x11b071d8 */
  push32((uint32_t)(0x11b071d8u));
  /* 11b011c8 push 0x11b07740 */
  push32((uint32_t)(0x11b07740u));
  /* 11b011cd call esi */
  call_ind((uint32_t)(ESI), 0x11b011cfu);
  /* 11b011cf push 0x11b071d0 */
  push32((uint32_t)(0x11b071d0u));
  /* 11b011d4 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b011d9 call esi */
  call_ind((uint32_t)(ESI), 0x11b011dbu);
  /* 11b011db push 0x11b071c8 */
  push32((uint32_t)(0x11b071c8u));
  /* 11b011e0 push 0x11b07670 */
  push32((uint32_t)(0x11b07670u));
  /* 11b011e5 call esi */
  call_ind((uint32_t)(ESI), 0x11b011e7u);
  /* 11b011e7 mov esi, dword ptr [0x11b06124] */
  ESI = (r32((uint32_t)(0x11b06124)));
  /* 11b011ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b011f0 push 0x11b071c0 */
  push32((uint32_t)(0x11b071c0u));
  /* 11b011f5 push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b011fa call esi */
  call_ind((uint32_t)(ESI), 0x11b011fcu);
  /* 11b011fc push 0x11b071b8 */
  push32((uint32_t)(0x11b071b8u));
  /* 11b01201 push 0x11b07698 */
  push32((uint32_t)(0x11b07698u));
  /* 11b01206 call esi */
  call_ind((uint32_t)(ESI), 0x11b01208u);
  /* 11b01208 push 0x11b071b0 */
  push32((uint32_t)(0x11b071b0u));
  /* 11b0120d push 0x11b07748 */
  push32((uint32_t)(0x11b07748u));
  /* 11b01212 call dword ptr [0x11b06128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06128))), 0x11b01218u);
  /* 11b01218 mov esi, dword ptr [0x11b0612c] */
  ESI = (r32((uint32_t)(0x11b0612c)));
  /* 11b0121e push 0x11b0719c */
  push32((uint32_t)(0x11b0719cu));
  /* 11b01223 push 0x11b07788 */
  push32((uint32_t)(0x11b07788u));
  /* 11b01228 call esi */
  call_ind((uint32_t)(ESI), 0x11b0122au);
  /* 11b0122a push 0x11b07190 */
  push32((uint32_t)(0x11b07190u));
  /* 11b0122f push 0x11b07790 */
  push32((uint32_t)(0x11b07790u));
  /* 11b01234 call esi */
  call_ind((uint32_t)(ESI), 0x11b01236u);
  /* 11b01236 push 0x11b07180 */
  push32((uint32_t)(0x11b07180u));
  /* 11b0123b push 0x11b07798 */
  push32((uint32_t)(0x11b07798u));
  /* 11b01240 call esi */
  call_ind((uint32_t)(ESI), 0x11b01242u);
  /* 11b01242 push 0x11b0716c */
  push32((uint32_t)(0x11b0716cu));
  /* 11b01247 push 0x11b077a0 */
  push32((uint32_t)(0x11b077a0u));
  /* 11b0124c call esi */
  call_ind((uint32_t)(ESI), 0x11b0124eu);
  /* 11b0124e push 0x11b07160 */
  push32((uint32_t)(0x11b07160u));
  /* 11b01253 push 0x11b077a8 */
  push32((uint32_t)(0x11b077a8u));
  /* 11b01258 call esi */
  call_ind((uint32_t)(ESI), 0x11b0125au);
  /* 11b0125a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0125d push 0x11b07154 */
  push32((uint32_t)(0x11b07154u));
  /* 11b01262 push 0x11b077b0 */
  push32((uint32_t)(0x11b077b0u));
  /* 11b01267 call esi */
  call_ind((uint32_t)(ESI), 0x11b01269u);
  /* 11b01269 push 0x11b07148 */
  push32((uint32_t)(0x11b07148u));
  /* 11b0126e push 0x11b077b8 */
  push32((uint32_t)(0x11b077b8u));
  /* 11b01273 call esi */
  call_ind((uint32_t)(ESI), 0x11b01275u);
  /* 11b01275 push 0x11b07130 */
  push32((uint32_t)(0x11b07130u));
  /* 11b0127a push 0x11b077c0 */
  push32((uint32_t)(0x11b077c0u));
  /* 11b0127f call esi */
  call_ind((uint32_t)(ESI), 0x11b01281u);
  /* 11b01281 push 0x11b0711c */
  push32((uint32_t)(0x11b0711cu));
  /* 11b01286 push 0x11b077c8 */
  push32((uint32_t)(0x11b077c8u));
  /* 11b0128b call esi */
  call_ind((uint32_t)(ESI), 0x11b0128du);
  /* 11b0128d push 0x11b07108 */
  push32((uint32_t)(0x11b07108u));
  /* 11b01292 push 0x11b077d0 */
  push32((uint32_t)(0x11b077d0u));
  /* 11b01297 call esi */
  call_ind((uint32_t)(ESI), 0x11b01299u);
  /* 11b01299 push 0x11b070f8 */
  push32((uint32_t)(0x11b070f8u));
  /* 11b0129e push 0x11b077d8 */
  push32((uint32_t)(0x11b077d8u));
  /* 11b012a3 call esi */
  call_ind((uint32_t)(ESI), 0x11b012a5u);
  /* 11b012a5 push 0x11b070e4 */
  push32((uint32_t)(0x11b070e4u));
  /* 11b012aa push 0x11b077e0 */
  push32((uint32_t)(0x11b077e0u));
  /* 11b012af call esi */
  call_ind((uint32_t)(ESI), 0x11b012b1u);
  /* 11b012b1 push 0x11b070d0 */
  push32((uint32_t)(0x11b070d0u));
  /* 11b012b6 push 0x11b077e8 */
  push32((uint32_t)(0x11b077e8u));
  /* 11b012bb call esi */
  call_ind((uint32_t)(ESI), 0x11b012bdu);
  /* 11b012bd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b012c0 push 0x11b070b8 */
  push32((uint32_t)(0x11b070b8u));
  /* 11b012c5 push 0x11b077f0 */
  push32((uint32_t)(0x11b077f0u));
  /* 11b012ca call esi */
  call_ind((uint32_t)(ESI), 0x11b012ccu);
  /* 11b012cc push 0x11b070a4 */
  push32((uint32_t)(0x11b070a4u));
  /* 11b012d1 push 0x11b077f8 */
  push32((uint32_t)(0x11b077f8u));
  /* 11b012d6 call esi */
  call_ind((uint32_t)(ESI), 0x11b012d8u);
  /* 11b012d8 push 0x11b07098 */
  push32((uint32_t)(0x11b07098u));
  /* 11b012dd push 0x11b07800 */
  push32((uint32_t)(0x11b07800u));
  /* 11b012e2 call esi */
  call_ind((uint32_t)(ESI), 0x11b012e4u);
  /* 11b012e4 push 0x11b07088 */
  push32((uint32_t)(0x11b07088u));
  /* 11b012e9 push 0x11b07808 */
  push32((uint32_t)(0x11b07808u));
  /* 11b012ee call esi */
  call_ind((uint32_t)(ESI), 0x11b012f0u);
  /* 11b012f0 push 0x11b07074 */
  push32((uint32_t)(0x11b07074u));
  /* 11b012f5 push 0x11b07810 */
  push32((uint32_t)(0x11b07810u));
  /* 11b012fa call esi */
  call_ind((uint32_t)(ESI), 0x11b012fcu);
  /* 11b012fc push 0x11b07068 */
  push32((uint32_t)(0x11b07068u));
  /* 11b01301 push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b01306 call esi */
  call_ind((uint32_t)(ESI), 0x11b01308u);
  /* 11b01308 push 0x11b0705c */
  push32((uint32_t)(0x11b0705cu));
  /* 11b0130d push 0x11b07678 */
  push32((uint32_t)(0x11b07678u));
  /* 11b01312 call esi */
  call_ind((uint32_t)(ESI), 0x11b01314u);
  /* 11b01314 mov esi, dword ptr [0x11b06130] */
  ESI = (r32((uint32_t)(0x11b06130)));
  /* 11b0131a push 0x11b07054 */
  push32((uint32_t)(0x11b07054u));
  /* 11b0131f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01321 call esi */
  call_ind((uint32_t)(ESI), 0x11b01323u);
  /* 11b01323 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01326 push 0x11b07048 */
  push32((uint32_t)(0x11b07048u));
  /* 11b0132b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0132d call esi */
  call_ind((uint32_t)(ESI), 0x11b0132fu);
  /* 11b0132f push 0x11b07054 */
  push32((uint32_t)(0x11b07054u));
  /* 11b01334 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01336 call esi */
  call_ind((uint32_t)(ESI), 0x11b01338u);
  /* 11b01338 mov esi, dword ptr [0x11b06134] */
  ESI = (r32((uint32_t)(0x11b06134)));
  /* 11b0133e push 0x11b07040 */
  push32((uint32_t)(0x11b07040u));
  /* 11b01343 push 0x11b07038 */
  push32((uint32_t)(0x11b07038u));
  /* 11b01348 call esi */
  call_ind((uint32_t)(ESI), 0x11b0134au);
  /* 11b0134a push 0x11b07030 */
  push32((uint32_t)(0x11b07030u));
  /* 11b0134f push 0x11b07038 */
  push32((uint32_t)(0x11b07038u));
  /* 11b01354 call esi */
  call_ind((uint32_t)(ESI), 0x11b01356u);
  /* 11b01356 mov esi, dword ptr [0x11b06138] */
  ESI = (r32((uint32_t)(0x11b06138)));
  /* 11b0135c push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01361 call esi */
  call_ind((uint32_t)(ESI), 0x11b01363u);
  /* 11b01363 mov edi, dword ptr [0x11b0613c] */
  EDI = (r32((uint32_t)(0x11b0613c)));
  /* 11b01369 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b0136b push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01370 call edi */
  call_ind((uint32_t)(EDI), 0x11b01372u);
  /* 11b01372 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01377 call esi */
  call_ind((uint32_t)(ESI), 0x11b01379u);
  /* 11b01379 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b0137b push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01380 call edi */
  call_ind((uint32_t)(EDI), 0x11b01382u);
  /* 11b01382 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01387 call esi */
  call_ind((uint32_t)(ESI), 0x11b01389u);
  /* 11b01389 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b0138b push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01390 call edi */
  call_ind((uint32_t)(EDI), 0x11b01392u);
  /* 11b01392 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01395 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b0139a call esi */
  call_ind((uint32_t)(ESI), 0x11b0139cu);
  /* 11b0139c push 8 */
  push32((uint32_t)(0x8u));
  /* 11b0139e push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b013a3 call edi */
  call_ind((uint32_t)(EDI), 0x11b013a5u);
  /* 11b013a5 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b013aa call esi */
  call_ind((uint32_t)(ESI), 0x11b013acu);
  /* 11b013ac push 8 */
  push32((uint32_t)(0x8u));
  /* 11b013ae push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b013b3 call edi */
  call_ind((uint32_t)(EDI), 0x11b013b5u);
  /* 11b013b5 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b013ba call esi */
  call_ind((uint32_t)(ESI), 0x11b013bcu);
  /* 11b013bc push 8 */
  push32((uint32_t)(0x8u));
  /* 11b013be push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b013c3 call edi */
  call_ind((uint32_t)(EDI), 0x11b013c5u);
  /* 11b013c5 push 0x11b07690 */
  push32((uint32_t)(0x11b07690u));
  /* 11b013ca call esi */
  call_ind((uint32_t)(ESI), 0x11b013ccu);
  /* 11b013cc push 8 */
  push32((uint32_t)(0x8u));
  /* 11b013ce push 0x11b07690 */
  push32((uint32_t)(0x11b07690u));
  /* 11b013d3 call edi */
  call_ind((uint32_t)(EDI), 0x11b013d5u);
  /* 11b013d5 push 0x11b07688 */
  push32((uint32_t)(0x11b07688u));
  /* 11b013da call esi */
  call_ind((uint32_t)(ESI), 0x11b013dcu);
  /* 11b013dc push 8 */
  push32((uint32_t)(0x8u));
  /* 11b013de push 0x11b07688 */
  push32((uint32_t)(0x11b07688u));
  /* 11b013e3 call edi */
  call_ind((uint32_t)(EDI), 0x11b013e5u);
  /* 11b013e5 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b013e8 pop edi */
  EDI = (pop32());
  /* 11b013e9 pop esi */
  ESI = (pop32());
  /* 11b013ea ret  */
  ESPCHK(0x11b01050u, _esp0);
  ESP += 4; return;
}

/* FUN_100013f0 @ 0x11b013f0 (20 bytes, 6 insns) */
void f_11b013f0(void) {
  FTRACE(0x11b013f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b013f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b013f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b013f5 jne 0x11b013fc */
  if (!C.zf) goto L_11b013fc;
  /* 11b013f7 call 0x11b01050 */
  push32(0x11b013fcu); f_11b01050();
L_11b013fc:;
  /* 11b013fc mov eax, 1 */
  EAX = (0x1u);
  /* 11b01401 ret 0xc */
  ESPCHK(0x11b013f0u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x11b01410 (5243 bytes, 1740 insns) */
void f_11b01410(void) {
  FTRACE(0x11b01410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b01410 push ebx */
  push32((uint32_t)(EBX));
  /* 11b01411 push ebp */
  push32((uint32_t)(EBP));
  /* 11b01412 push esi */
  push32((uint32_t)(ESI));
  /* 11b01413 push edi */
  push32((uint32_t)(EDI));
  /* 11b01414 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01416 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b0141cu);
  /* 11b0141c mov ebx, dword ptr [0x11b060b4] */
  EBX = (r32((uint32_t)(0x11b060b4)));
  /* 11b01422 mov edi, dword ptr [0x11b060b8] */
  EDI = (r32((uint32_t)(0x11b060b8)));
  /* 11b01428 mov esi, dword ptr [0x11b060bc] */
  ESI = (r32((uint32_t)(0x11b060bc)));
  /* 11b0142e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01431 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01433 je 0x11b01774 */
  if (C.zf) goto L_11b01774;
  /* 11b01439 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0143b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0143d call ebx */
  call_ind((uint32_t)(EBX), 0x11b0143fu);
  /* 11b0143f push 0x11b0733c */
  push32((uint32_t)(0x11b0733cu));
  /* 11b01444 call edi */
  call_ind((uint32_t)(EDI), 0x11b01446u);
  /* 11b01446 push 0x11b07334 */
  push32((uint32_t)(0x11b07334u));
  /* 11b0144b call edi */
  call_ind((uint32_t)(EDI), 0x11b0144du);
  /* 11b0144d mov edi, dword ptr [0x11b060c0] */
  EDI = (r32((uint32_t)(0x11b060c0)));
  /* 11b01453 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01455 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01457 push 0x11b07758 */
  push32((uint32_t)(0x11b07758u));
  /* 11b0145c call edi */
  call_ind((uint32_t)(EDI), 0x11b0145eu);
  /* 11b0145e push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01460 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01462 push 0x11b07760 */
  push32((uint32_t)(0x11b07760u));
  /* 11b01467 call edi */
  call_ind((uint32_t)(EDI), 0x11b01469u);
  /* 11b01469 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b0146b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0146d push 0x11b07768 */
  push32((uint32_t)(0x11b07768u));
  /* 11b01472 call edi */
  call_ind((uint32_t)(EDI), 0x11b01474u);
  /* 11b01474 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01476 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01478 push 0x11b07770 */
  push32((uint32_t)(0x11b07770u));
  /* 11b0147d call edi */
  call_ind((uint32_t)(EDI), 0x11b0147fu);
  /* 11b0147f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01482 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01484 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01486 push 0x11b07778 */
  push32((uint32_t)(0x11b07778u));
  /* 11b0148b call edi */
  call_ind((uint32_t)(EDI), 0x11b0148du);
  /* 11b0148d push 6 */
  push32((uint32_t)(0x6u));
  /* 11b0148f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01491 push 0x11b07780 */
  push32((uint32_t)(0x11b07780u));
  /* 11b01496 call edi */
  call_ind((uint32_t)(EDI), 0x11b01498u);
  /* 11b01498 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b0149d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0149f call esi */
  call_ind((uint32_t)(ESI), 0x11b014a1u);
  /* 11b014a1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b014a8 call esi */
  call_ind((uint32_t)(ESI), 0x11b014aau);
  /* 11b014aa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014af push 3 */
  push32((uint32_t)(0x3u));
  /* 11b014b1 call esi */
  call_ind((uint32_t)(ESI), 0x11b014b3u);
  /* 11b014b3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b014ba call esi */
  call_ind((uint32_t)(ESI), 0x11b014bcu);
  /* 11b014bc push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b014c3 call esi */
  call_ind((uint32_t)(ESI), 0x11b014c5u);
  /* 11b014c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b014c8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014cd push 6 */
  push32((uint32_t)(0x6u));
  /* 11b014cf call esi */
  call_ind((uint32_t)(ESI), 0x11b014d1u);
  /* 11b014d1 call 0x11b01000 */
  push32(0x11b014d6u); f_11b01000();
  /* 11b014d6 push eax */
  push32((uint32_t)(EAX));
  /* 11b014d7 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b014d9 call esi */
  call_ind((uint32_t)(ESI), 0x11b014dbu);
  /* 11b014db call 0x11b01000 */
  push32(0x11b014e0u); f_11b01000();
  /* 11b014e0 push eax */
  push32((uint32_t)(EAX));
  /* 11b014e1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b014e3 call esi */
  call_ind((uint32_t)(ESI), 0x11b014e5u);
  /* 11b014e5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014ea push 9 */
  push32((uint32_t)(0x9u));
  /* 11b014ec call esi */
  call_ind((uint32_t)(ESI), 0x11b014eeu);
  /* 11b014ee push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014f3 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b014f5 call esi */
  call_ind((uint32_t)(ESI), 0x11b014f7u);
  /* 11b014f7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b014fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b014fe call esi */
  call_ind((uint32_t)(ESI), 0x11b01500u);
  /* 11b01500 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b01505 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b01507 call esi */
  call_ind((uint32_t)(ESI), 0x11b01509u);
  /* 11b01509 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b0150e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b01510 call esi */
  call_ind((uint32_t)(ESI), 0x11b01512u);
  /* 11b01512 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01515 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b0151a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b0151c call esi */
  call_ind((uint32_t)(ESI), 0x11b0151eu);
  /* 11b0151e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b01523 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b01525 call esi */
  call_ind((uint32_t)(ESI), 0x11b01527u);
  /* 11b01527 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b0152c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b0152e call esi */
  call_ind((uint32_t)(ESI), 0x11b01530u);
  /* 11b01530 mov edi, dword ptr [0x11b060c4] */
  EDI = (r32((uint32_t)(0x11b060c4)));
  /* 11b01536 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b01538 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0153a call edi */
  call_ind((uint32_t)(EDI), 0x11b0153cu);
  /* 11b0153c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b0153e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01540 call edi */
  call_ind((uint32_t)(EDI), 0x11b01542u);
  /* 11b01542 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b01544 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01546 call edi */
  call_ind((uint32_t)(EDI), 0x11b01548u);
  /* 11b01548 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11b0154a push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0154c call edi */
  call_ind((uint32_t)(EDI), 0x11b0154eu);
  /* 11b0154e push 0x11b076d8 */
  push32((uint32_t)(0x11b076d8u));
  /* 11b01553 call dword ptr [0x11b060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060c8))), 0x11b01559u);
  /* 11b01559 mov edi, dword ptr [0x11b060cc] */
  EDI = (r32((uint32_t)(0x11b060cc)));
  /* 11b0155f push 0x11b076d0 */
  push32((uint32_t)(0x11b076d0u));
  /* 11b01564 call edi */
  call_ind((uint32_t)(EDI), 0x11b01566u);
  /* 11b01566 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01569 push 0x11b076e0 */
  push32((uint32_t)(0x11b076e0u));
  /* 11b0156e call edi */
  call_ind((uint32_t)(EDI), 0x11b01570u);
  /* 11b01570 push 0x11b076e8 */
  push32((uint32_t)(0x11b076e8u));
  /* 11b01575 call edi */
  call_ind((uint32_t)(EDI), 0x11b01577u);
  /* 11b01577 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01579 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0157b call dword ptr [0x11b060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060d0))), 0x11b01581u);
  /* 11b01581 mov edi, dword ptr [0x11b060d4] */
  EDI = (r32((uint32_t)(0x11b060d4)));
  /* 11b01587 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b0158c push 3 */
  push32((uint32_t)(0x3u));
  /* 11b0158e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01590 call edi */
  call_ind((uint32_t)(EDI), 0x11b01592u);
  /* 11b01592 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b01597 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01599 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0159b call edi */
  call_ind((uint32_t)(EDI), 0x11b0159du);
  /* 11b0159d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b015a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b015a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b015a6 call edi */
  call_ind((uint32_t)(EDI), 0x11b015a8u);
  /* 11b015a8 push 0x1194 */
  push32((uint32_t)(0x1194u));
  /* 11b015ad push 5 */
  push32((uint32_t)(0x5u));
  /* 11b015af push 1 */
  push32((uint32_t)(0x1u));
  /* 11b015b1 call edi */
  call_ind((uint32_t)(EDI), 0x11b015b3u);
  /* 11b015b3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b015b6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b015bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b015bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b015bf call edi */
  call_ind((uint32_t)(EDI), 0x11b015c1u);
  /* 11b015c1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b015c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b015c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b015ca call edi */
  call_ind((uint32_t)(EDI), 0x11b015ccu);
  /* 11b015cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b015ce call dword ptr [0x11b06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06140))), 0x11b015d4u);
  /* 11b015d4 mov ebp, dword ptr [0x11b060d8] */
  EBP = (r32((uint32_t)(0x11b060d8)));
  /* 11b015da add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b015dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b015df jne 0x11b0163a */
  if (!C.zf) goto L_11b0163a;
  /* 11b015e1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b015e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b015e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b015ea call edi */
  call_ind((uint32_t)(EDI), 0x11b015ecu);
  /* 11b015ec push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b015f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b015f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b015f5 call edi */
  call_ind((uint32_t)(EDI), 0x11b015f7u);
  /* 11b015f7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b015fc push 4 */
  push32((uint32_t)(0x4u));
  /* 11b015fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01600 call edi */
  call_ind((uint32_t)(EDI), 0x11b01602u);
  /* 11b01602 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b01607 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01609 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0160b call edi */
  call_ind((uint32_t)(EDI), 0x11b0160du);
  /* 11b0160d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b01612 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01614 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01616 call edi */
  call_ind((uint32_t)(EDI), 0x11b01618u);
  /* 11b01618 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11b0161d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b0161f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01621 call edi */
  call_ind((uint32_t)(EDI), 0x11b01623u);
  /* 11b01623 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01628 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0162a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0162c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0162e push 0x11b07328 */
  push32((uint32_t)(0x11b07328u));
  /* 11b01633 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01635 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01637u);
  /* 11b01637 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0163a:;
  /* 11b0163a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0163c call dword ptr [0x11b06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06140))), 0x11b01642u);
  /* 11b01642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01645 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b01648 jne 0x11b016a3 */
  if (!C.zf) goto L_11b016a3;
  /* 11b0164a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b0164f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01651 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01653 call edi */
  call_ind((uint32_t)(EDI), 0x11b01655u);
  /* 11b01655 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b0165a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0165c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0165e call edi */
  call_ind((uint32_t)(EDI), 0x11b01660u);
  /* 11b01660 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b01665 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01669 call edi */
  call_ind((uint32_t)(EDI), 0x11b0166bu);
  /* 11b0166b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b01670 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01674 call edi */
  call_ind((uint32_t)(EDI), 0x11b01676u);
  /* 11b01676 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b0167b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0167d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0167f call edi */
  call_ind((uint32_t)(EDI), 0x11b01681u);
  /* 11b01681 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11b01686 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01688 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0168a call edi */
  call_ind((uint32_t)(EDI), 0x11b0168cu);
  /* 11b0168c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0168f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01691 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01697 push 0x11b07328 */
  push32((uint32_t)(0x11b07328u));
  /* 11b0169c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0169e call ebp */
  call_ind((uint32_t)(EBP), 0x11b016a0u);
  /* 11b016a0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b016a3:;
  /* 11b016a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016a5 call dword ptr [0x11b06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06140))), 0x11b016abu);
  /* 11b016ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b016ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b016b1 jne 0x11b0170c */
  if (!C.zf) goto L_11b0170c;
  /* 11b016b3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b016b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b016ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016bc call edi */
  call_ind((uint32_t)(EDI), 0x11b016beu);
  /* 11b016be push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b016c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b016c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016c7 call edi */
  call_ind((uint32_t)(EDI), 0x11b016c9u);
  /* 11b016c9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b016ce push 4 */
  push32((uint32_t)(0x4u));
  /* 11b016d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016d2 call edi */
  call_ind((uint32_t)(EDI), 0x11b016d4u);
  /* 11b016d4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b016d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b016db push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016dd call edi */
  call_ind((uint32_t)(EDI), 0x11b016dfu);
  /* 11b016df push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b016e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016e8 call edi */
  call_ind((uint32_t)(EDI), 0x11b016eau);
  /* 11b016ea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b016ef push 2 */
  push32((uint32_t)(0x2u));
  /* 11b016f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b016f3 call edi */
  call_ind((uint32_t)(EDI), 0x11b016f5u);
  /* 11b016f5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b016f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b016fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11b016fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b016fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01700 push 0x11b07328 */
  push32((uint32_t)(0x11b07328u));
  /* 11b01705 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01707 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01709u);
  /* 11b01709 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0170c:;
  /* 11b0170c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0170e call dword ptr [0x11b06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06140))), 0x11b01714u);
  /* 11b01714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01717 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0171a jne 0x11b01774 */
  if (!C.zf) goto L_11b01774;
  /* 11b0171c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b01721 push eax */
  push32((uint32_t)(EAX));
  /* 11b01722 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01724 call edi */
  call_ind((uint32_t)(EDI), 0x11b01726u);
  /* 11b01726 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b0172b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0172d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0172f call edi */
  call_ind((uint32_t)(EDI), 0x11b01731u);
  /* 11b01731 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b01736 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01738 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0173a call edi */
  call_ind((uint32_t)(EDI), 0x11b0173cu);
  /* 11b0173c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b01741 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01745 call edi */
  call_ind((uint32_t)(EDI), 0x11b01747u);
  /* 11b01747 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b0174c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0174e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01750 call edi */
  call_ind((uint32_t)(EDI), 0x11b01752u);
  /* 11b01752 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11b01757 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01759 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0175b call edi */
  call_ind((uint32_t)(EDI), 0x11b0175du);
  /* 11b0175d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01760 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01762 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01764 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01766 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01768 push 0x11b07328 */
  push32((uint32_t)(0x11b07328u));
  /* 11b0176d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0176f call ebp */
  call_ind((uint32_t)(EBP), 0x11b01771u);
  /* 11b01771 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01774:;
  /* 11b01774 mov edi, dword ptr [0x11b060dc] */
  EDI = (r32((uint32_t)(0x11b060dc)));
  /* 11b0177a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0177c push 0x11b07788 */
  push32((uint32_t)(0x11b07788u));
  /* 11b01781 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01783 call edi */
  call_ind((uint32_t)(EDI), 0x11b01785u);
  /* 11b01785 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01787 push 0x11b07790 */
  push32((uint32_t)(0x11b07790u));
  /* 11b0178c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0178e call edi */
  call_ind((uint32_t)(EDI), 0x11b01790u);
  /* 11b01790 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01792 push 0x11b07798 */
  push32((uint32_t)(0x11b07798u));
  /* 11b01797 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01799 call edi */
  call_ind((uint32_t)(EDI), 0x11b0179bu);
  /* 11b0179b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0179d push 0x11b077a0 */
  push32((uint32_t)(0x11b077a0u));
  /* 11b017a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017a4 call edi */
  call_ind((uint32_t)(EDI), 0x11b017a6u);
  /* 11b017a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017a8 push 0x11b077a8 */
  push32((uint32_t)(0x11b077a8u));
  /* 11b017ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017af call edi */
  call_ind((uint32_t)(EDI), 0x11b017b1u);
  /* 11b017b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017b3 push 0x11b077b0 */
  push32((uint32_t)(0x11b077b0u));
  /* 11b017b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017ba call edi */
  call_ind((uint32_t)(EDI), 0x11b017bcu);
  /* 11b017bc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b017bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017c1 push 0x11b077b8 */
  push32((uint32_t)(0x11b077b8u));
  /* 11b017c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017c8 call edi */
  call_ind((uint32_t)(EDI), 0x11b017cau);
  /* 11b017ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017cc push 0x11b077c0 */
  push32((uint32_t)(0x11b077c0u));
  /* 11b017d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017d3 call edi */
  call_ind((uint32_t)(EDI), 0x11b017d5u);
  /* 11b017d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017d7 push 0x11b077c8 */
  push32((uint32_t)(0x11b077c8u));
  /* 11b017dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017de call edi */
  call_ind((uint32_t)(EDI), 0x11b017e0u);
  /* 11b017e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017e2 push 0x11b077d0 */
  push32((uint32_t)(0x11b077d0u));
  /* 11b017e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017e9 call edi */
  call_ind((uint32_t)(EDI), 0x11b017ebu);
  /* 11b017eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017ed push 0x11b077d8 */
  push32((uint32_t)(0x11b077d8u));
  /* 11b017f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017f4 call edi */
  call_ind((uint32_t)(EDI), 0x11b017f6u);
  /* 11b017f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017f8 push 0x11b077e0 */
  push32((uint32_t)(0x11b077e0u));
  /* 11b017fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b017ff call edi */
  call_ind((uint32_t)(EDI), 0x11b01801u);
  /* 11b01801 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01806 push 0x11b077e8 */
  push32((uint32_t)(0x11b077e8u));
  /* 11b0180b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0180d call edi */
  call_ind((uint32_t)(EDI), 0x11b0180fu);
  /* 11b0180f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01811 push 0x11b077f0 */
  push32((uint32_t)(0x11b077f0u));
  /* 11b01816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01818 call edi */
  call_ind((uint32_t)(EDI), 0x11b0181au);
  /* 11b0181a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0181c push 0x11b077f8 */
  push32((uint32_t)(0x11b077f8u));
  /* 11b01821 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01823 call edi */
  call_ind((uint32_t)(EDI), 0x11b01825u);
  /* 11b01825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01827 push 0x11b07800 */
  push32((uint32_t)(0x11b07800u));
  /* 11b0182c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0182e call edi */
  call_ind((uint32_t)(EDI), 0x11b01830u);
  /* 11b01830 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01832 push 0x11b07808 */
  push32((uint32_t)(0x11b07808u));
  /* 11b01837 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01839 call edi */
  call_ind((uint32_t)(EDI), 0x11b0183bu);
  /* 11b0183b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0183d push 0x11b07810 */
  push32((uint32_t)(0x11b07810u));
  /* 11b01842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01844 call edi */
  call_ind((uint32_t)(EDI), 0x11b01846u);
  /* 11b01846 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01849 push 0x11b07748 */
  push32((uint32_t)(0x11b07748u));
  /* 11b0184e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01850 call dword ptr [0x11b060e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060e0))), 0x11b01856u);
  /* 11b01856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01858 push 0x11b07820 */
  push32((uint32_t)(0x11b07820u));
  /* 11b0185d mov ebp, dword ptr [0x11b060e4] */
  EBP = (r32((uint32_t)(0x11b060e4)));
  /* 11b01863 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01865u);
  /* 11b01865 mov edi, dword ptr [0x11b060e8] */
  EDI = (r32((uint32_t)(0x11b060e8)));
  /* 11b0186b push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01870 push 0x11b07820 */
  push32((uint32_t)(0x11b07820u));
  /* 11b01875 call edi */
  call_ind((uint32_t)(EDI), 0x11b01877u);
  /* 11b01877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01879 push 0x11b07818 */
  push32((uint32_t)(0x11b07818u));
  /* 11b0187e call ebp */
  call_ind((uint32_t)(EBP), 0x11b01880u);
  /* 11b01880 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01885 push 0x11b07818 */
  push32((uint32_t)(0x11b07818u));
  /* 11b0188a call edi */
  call_ind((uint32_t)(EDI), 0x11b0188cu);
  /* 11b0188c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0188e push 0x11b07830 */
  push32((uint32_t)(0x11b07830u));
  /* 11b01893 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01895u);
  /* 11b01895 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b0189a push 0x11b07830 */
  push32((uint32_t)(0x11b07830u));
  /* 11b0189f call edi */
  call_ind((uint32_t)(EDI), 0x11b018a1u);
  /* 11b018a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b018a3 push 0x11b07828 */
  push32((uint32_t)(0x11b07828u));
  /* 11b018a8 call ebp */
  call_ind((uint32_t)(EBP), 0x11b018aau);
  /* 11b018aa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b018ad push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b018b2 push 0x11b07828 */
  push32((uint32_t)(0x11b07828u));
  /* 11b018b7 call edi */
  call_ind((uint32_t)(EDI), 0x11b018b9u);
  /* 11b018b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b018bb push 0x11b07840 */
  push32((uint32_t)(0x11b07840u));
  /* 11b018c0 call ebp */
  call_ind((uint32_t)(EBP), 0x11b018c2u);
  /* 11b018c2 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b018c7 push 0x11b07840 */
  push32((uint32_t)(0x11b07840u));
  /* 11b018cc call edi */
  call_ind((uint32_t)(EDI), 0x11b018ceu);
  /* 11b018ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11b018d0 push 0x11b07838 */
  push32((uint32_t)(0x11b07838u));
  /* 11b018d5 call ebp */
  call_ind((uint32_t)(EBP), 0x11b018d7u);
  /* 11b018d7 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b018dc push 0x11b07838 */
  push32((uint32_t)(0x11b07838u));
  /* 11b018e1 call edi */
  call_ind((uint32_t)(EDI), 0x11b018e3u);
  /* 11b018e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b018e5 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b018ebu);
  /* 11b018eb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b018ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b018f0 je 0x11b0191b */
  if (C.zf) goto L_11b0191b;
  /* 11b018f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b018f4 call dword ptr [0x11b060ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060ec))), 0x11b018fau);
  /* 11b018fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b018fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b018ff je 0x11b0191b */
  if (C.zf) goto L_11b0191b;
  /* 11b01901 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01903 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01905 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01907u);
  /* 11b01907 push 0x11b07320 */
  push32((uint32_t)(0x11b07320u));
  /* 11b0190c call dword ptr [0x11b060b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b8))), 0x11b01912u);
  /* 11b01912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01915 call dword ptr [0x11b060f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f0))), 0x11b0191bu);
L_11b0191b:;
  /* 11b0191b mov edi, dword ptr [0x11b060b0] */
  EDI = (r32((uint32_t)(0x11b060b0)));
  /* 11b01921 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01923 call edi */
  call_ind((uint32_t)(EDI), 0x11b01925u);
  /* 11b01925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01928 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0192a je 0x11b01955 */
  if (C.zf) goto L_11b01955;
  /* 11b0192c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0192e call dword ptr [0x11b060ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060ec))), 0x11b01934u);
  /* 11b01934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01937 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01939 je 0x11b01955 */
  if (C.zf) goto L_11b01955;
  /* 11b0193b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0193d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b0193f call ebx */
  call_ind((uint32_t)(EBX), 0x11b01941u);
  /* 11b01941 push 0x11b07318 */
  push32((uint32_t)(0x11b07318u));
  /* 11b01946 call dword ptr [0x11b060b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b8))), 0x11b0194cu);
  /* 11b0194c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0194f call dword ptr [0x11b060f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f4))), 0x11b01955u);
L_11b01955:;
  /* 11b01955 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01957 call edi */
  call_ind((uint32_t)(EDI), 0x11b01959u);
  /* 11b01959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0195c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0195e je 0x11b01989 */
  if (C.zf) goto L_11b01989;
  /* 11b01960 push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01965 push 0x11b076f8 */
  push32((uint32_t)(0x11b076f8u));
  /* 11b0196a call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01970u);
  /* 11b01970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01975 je 0x11b01989 */
  if (C.zf) goto L_11b01989;
  /* 11b01977 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b0197c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0197e call esi */
  call_ind((uint32_t)(ESI), 0x11b01980u);
  /* 11b01980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01982 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01984 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01986u);
  /* 11b01986 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01989:;
  /* 11b01989 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0198b call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01991u);
  /* 11b01991 mov edi, dword ptr [0x11b06100] */
  EDI = (r32((uint32_t)(0x11b06100)));
  /* 11b01997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0199a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0199c je 0x11b019ed */
  if (C.zf) goto L_11b019ed;
  /* 11b0199e push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b019a3 push 0x11b076f8 */
  push32((uint32_t)(0x11b076f8u));
  /* 11b019a8 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b019aeu);
  /* 11b019ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b019b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b019b3 je 0x11b019ed */
  if (C.zf) goto L_11b019ed;
  /* 11b019b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b019b7 push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b019bc call ebp */
  call_ind((uint32_t)(EBP), 0x11b019beu);
  /* 11b019be push 0 */
  push32((uint32_t)(0x0u));
  /* 11b019c0 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b019c5 push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b019ca push 4 */
  push32((uint32_t)(0x4u));
  /* 11b019cc call edi */
  call_ind((uint32_t)(EDI), 0x11b019ceu);
  /* 11b019ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11b019d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b019d2 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b019d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b019d9 call edi */
  call_ind((uint32_t)(EDI), 0x11b019dbu);
  /* 11b019db push 1 */
  push32((uint32_t)(0x1u));
  /* 11b019dd push 5 */
  push32((uint32_t)(0x5u));
  /* 11b019df call ebx */
  call_ind((uint32_t)(EBX), 0x11b019e1u);
  /* 11b019e1 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b019e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b019e8 call esi */
  call_ind((uint32_t)(ESI), 0x11b019eau);
  /* 11b019ea add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b019ed:;
  /* 11b019ed push 5 */
  push32((uint32_t)(0x5u));
  /* 11b019ef call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b019f5u);
  /* 11b019f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b019f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b019fa je 0x11b01a25 */
  if (C.zf) goto L_11b01a25;
  /* 11b019fc push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01a01 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01a06 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01a0cu);
  /* 11b01a0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01a11 je 0x11b01a25 */
  if (C.zf) goto L_11b01a25;
  /* 11b01a13 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01a18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01a1a call esi */
  call_ind((uint32_t)(ESI), 0x11b01a1cu);
  /* 11b01a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01a1e push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01a20 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01a22u);
  /* 11b01a22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01a25:;
  /* 11b01a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01a27 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01a2du);
  /* 11b01a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01a30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01a32 je 0x11b01a92 */
  if (C.zf) goto L_11b01a92;
  /* 11b01a34 push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01a39 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01a3e call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01a44u);
  /* 11b01a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01a49 je 0x11b01a92 */
  if (C.zf) goto L_11b01a92;
  /* 11b01a4b push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b01a50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01a54 call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01a5au);
  /* 11b01a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01a5c push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b01a61 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01a63u);
  /* 11b01a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01a65 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b01a6a push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01a6f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01a71 call edi */
  call_ind((uint32_t)(EDI), 0x11b01a73u);
  /* 11b01a73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01a75 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b01a77 push 0x11b076f8 */
  push32((uint32_t)(0x11b076f8u));
  /* 11b01a7c push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01a7e call edi */
  call_ind((uint32_t)(EDI), 0x11b01a80u);
  /* 11b01a80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01a82 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01a84 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01a86u);
  /* 11b01a86 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01a8d call esi */
  call_ind((uint32_t)(ESI), 0x11b01a8fu);
  /* 11b01a8f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01a92:;
  /* 11b01a92 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b01a94 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01a9au);
  /* 11b01a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01a9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01a9f je 0x11b01aca */
  if (C.zf) goto L_11b01aca;
  /* 11b01aa1 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01aa6 push 0x11b07708 */
  push32((uint32_t)(0x11b07708u));
  /* 11b01aab call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01ab1u);
  /* 11b01ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01ab6 je 0x11b01aca */
  if (C.zf) goto L_11b01aca;
  /* 11b01ab8 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01abd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01abf call esi */
  call_ind((uint32_t)(ESI), 0x11b01ac1u);
  /* 11b01ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01ac3 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b01ac5 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01ac7u);
  /* 11b01ac7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01aca:;
  /* 11b01aca push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01acc call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01ad2u);
  /* 11b01ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01ad5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01ad7 je 0x11b01b3b */
  if (C.zf) goto L_11b01b3b;
  /* 11b01ad9 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01ade push 0x11b07708 */
  push32((uint32_t)(0x11b07708u));
  /* 11b01ae3 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01ae9u);
  /* 11b01ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01aee je 0x11b01b3b */
  if (C.zf) goto L_11b01b3b;
  /* 11b01af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01af2 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01af7 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01af9u);
  /* 11b01af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01afb push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b01b00 push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b01b05 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01b07 call edi */
  call_ind((uint32_t)(EDI), 0x11b01b09u);
  /* 11b01b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01b0b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b01b10 push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01b15 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01b17 call edi */
  call_ind((uint32_t)(EDI), 0x11b01b19u);
  /* 11b01b19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01b1d push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01b22 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01b24 call edi */
  call_ind((uint32_t)(EDI), 0x11b01b26u);
  /* 11b01b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01b28 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b01b2a call ebx */
  call_ind((uint32_t)(EBX), 0x11b01b2cu);
  /* 11b01b2c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01b2f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01b34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01b36 call esi */
  call_ind((uint32_t)(ESI), 0x11b01b38u);
  /* 11b01b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01b3b:;
  /* 11b01b3b push 7 */
  push32((uint32_t)(0x7u));
  /* 11b01b3d call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01b43u);
  /* 11b01b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01b46 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01b48 je 0x11b01b73 */
  if (C.zf) goto L_11b01b73;
  /* 11b01b4a push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01b4f push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01b54 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01b5au);
  /* 11b01b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01b5f je 0x11b01b73 */
  if (C.zf) goto L_11b01b73;
  /* 11b01b61 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01b68 call esi */
  call_ind((uint32_t)(ESI), 0x11b01b6au);
  /* 11b01b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01b6c push 7 */
  push32((uint32_t)(0x7u));
  /* 11b01b6e call ebx */
  call_ind((uint32_t)(EBX), 0x11b01b70u);
  /* 11b01b70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01b73:;
  /* 11b01b73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01b75 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01b7bu);
  /* 11b01b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01b7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01b80 je 0x11b01bff */
  if (C.zf) goto L_11b01bff;
  /* 11b01b82 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01b87 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01b8c call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01b92u);
  /* 11b01b92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01b95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01b97 je 0x11b01bff */
  if (C.zf) goto L_11b01bff;
  /* 11b01b99 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b01b9e push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01ba2 call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01ba8u);
  /* 11b01ba8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b01bad push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01baf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01bb1 call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01bb7u);
  /* 11b01bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01bb9 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b01bbe call ebp */
  call_ind((uint32_t)(EBP), 0x11b01bc0u);
  /* 11b01bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01bc2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b01bc4 push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01bc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01bcb call edi */
  call_ind((uint32_t)(EDI), 0x11b01bcdu);
  /* 11b01bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01bcf push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b01bd4 push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b01bd9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01bdb call edi */
  call_ind((uint32_t)(EDI), 0x11b01bddu);
  /* 11b01bdd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01be2 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11b01be4 push 0x11b07708 */
  push32((uint32_t)(0x11b07708u));
  /* 11b01be9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01beb call edi */
  call_ind((uint32_t)(EDI), 0x11b01bedu);
  /* 11b01bed push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01bef push 6 */
  push32((uint32_t)(0x6u));
  /* 11b01bf1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01bf3u);
  /* 11b01bf3 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01bfa call esi */
  call_ind((uint32_t)(ESI), 0x11b01bfcu);
  /* 11b01bfc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01bff:;
  /* 11b01bff push 8 */
  push32((uint32_t)(0x8u));
  /* 11b01c01 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01c07u);
  /* 11b01c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01c0a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01c0c je 0x11b01c37 */
  if (C.zf) goto L_11b01c37;
  /* 11b01c0e push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01c13 push 0x11b07708 */
  push32((uint32_t)(0x11b07708u));
  /* 11b01c18 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01c1eu);
  /* 11b01c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01c23 je 0x11b01c37 */
  if (C.zf) goto L_11b01c37;
  /* 11b01c25 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01c2a push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01c2c call esi */
  call_ind((uint32_t)(ESI), 0x11b01c2eu);
  /* 11b01c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01c30 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b01c32 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01c34u);
  /* 11b01c34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01c37:;
  /* 11b01c37 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01c39 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01c3fu);
  /* 11b01c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01c42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01c44 je 0x11b01cb8 */
  if (C.zf) goto L_11b01cb8;
  /* 11b01c46 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01c4b push 0x11b07728 */
  push32((uint32_t)(0x11b07728u));
  /* 11b01c50 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01c56u);
  /* 11b01c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01c5b je 0x11b01cb8 */
  if (C.zf) goto L_11b01cb8;
  /* 11b01c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01c5f push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01c64 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01c66u);
  /* 11b01c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01c68 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b01c6d push 0x11b07718 */
  push32((uint32_t)(0x11b07718u));
  /* 11b01c72 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01c74 call edi */
  call_ind((uint32_t)(EDI), 0x11b01c76u);
  /* 11b01c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01c78 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b01c7d push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b01c82 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01c84 call edi */
  call_ind((uint32_t)(EDI), 0x11b01c86u);
  /* 11b01c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01c88 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b01c8d push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01c92 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01c94 call edi */
  call_ind((uint32_t)(EDI), 0x11b01c96u);
  /* 11b01c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01c9a push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01c9f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01ca1 call edi */
  call_ind((uint32_t)(EDI), 0x11b01ca3u);
  /* 11b01ca3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01ca8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b01caa call ebx */
  call_ind((uint32_t)(EBX), 0x11b01cacu);
  /* 11b01cac push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01cb1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01cb3 call esi */
  call_ind((uint32_t)(ESI), 0x11b01cb5u);
  /* 11b01cb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01cb8:;
  /* 11b01cb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b01cba call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01cc0u);
  /* 11b01cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01cc3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01cc5 je 0x11b01cf0 */
  if (C.zf) goto L_11b01cf0;
  /* 11b01cc7 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01ccc push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01cd1 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01cd7u);
  /* 11b01cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01cdc je 0x11b01cf0 */
  if (C.zf) goto L_11b01cf0;
  /* 11b01cde push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01ce3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01ce5 call esi */
  call_ind((uint32_t)(ESI), 0x11b01ce7u);
  /* 11b01ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01ce9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b01ceb call ebx */
  call_ind((uint32_t)(EBX), 0x11b01cedu);
  /* 11b01ced add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01cf0:;
  /* 11b01cf0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01cf2 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01cf8u);
  /* 11b01cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01cfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01cfd je 0x11b01d7a */
  if (C.zf) goto L_11b01d7a;
  /* 11b01cff push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01d04 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01d09 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01d0fu);
  /* 11b01d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01d14 je 0x11b01d7a */
  if (C.zf) goto L_11b01d7a;
  /* 11b01d16 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b01d1b push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01d1f call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01d25u);
  /* 11b01d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01d27 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b01d2c call ebp */
  call_ind((uint32_t)(EBP), 0x11b01d2eu);
  /* 11b01d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01d30 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b01d32 push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01d37 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01d39 call edi */
  call_ind((uint32_t)(EDI), 0x11b01d3bu);
  /* 11b01d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01d3d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b01d3f push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b01d44 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01d46 call edi */
  call_ind((uint32_t)(EDI), 0x11b01d48u);
  /* 11b01d48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01d4a push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b01d4f push 0x11b07718 */
  push32((uint32_t)(0x11b07718u));
  /* 11b01d54 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01d56 call edi */
  call_ind((uint32_t)(EDI), 0x11b01d58u);
  /* 11b01d58 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01d5b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01d5d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b01d5f push 0x11b07728 */
  push32((uint32_t)(0x11b07728u));
  /* 11b01d64 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01d66 call edi */
  call_ind((uint32_t)(EDI), 0x11b01d68u);
  /* 11b01d68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01d6a push 8 */
  push32((uint32_t)(0x8u));
  /* 11b01d6c call ebx */
  call_ind((uint32_t)(EBX), 0x11b01d6eu);
  /* 11b01d6e push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01d73 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01d75 call esi */
  call_ind((uint32_t)(ESI), 0x11b01d77u);
  /* 11b01d77 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01d7a:;
  /* 11b01d7a push 0xa */
  push32((uint32_t)(0xau));
  /* 11b01d7c call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01d82u);
  /* 11b01d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01d85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01d87 je 0x11b01db2 */
  if (C.zf) goto L_11b01db2;
  /* 11b01d89 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b01d8e push 0x11b07738 */
  push32((uint32_t)(0x11b07738u));
  /* 11b01d93 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01d99u);
  /* 11b01d99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01d9e je 0x11b01db2 */
  if (C.zf) goto L_11b01db2;
  /* 11b01da0 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01da5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01da7 call esi */
  call_ind((uint32_t)(ESI), 0x11b01da9u);
  /* 11b01da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01dab push 0xa */
  push32((uint32_t)(0xau));
  /* 11b01dad call ebx */
  call_ind((uint32_t)(EBX), 0x11b01dafu);
  /* 11b01daf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01db2:;
  /* 11b01db2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01db4 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01dbau);
  /* 11b01dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01dbd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01dbf je 0x11b01e33 */
  if (C.zf) goto L_11b01e33;
  /* 11b01dc1 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b01dc6 push 0x11b07738 */
  push32((uint32_t)(0x11b07738u));
  /* 11b01dcb call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01dd1u);
  /* 11b01dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01dd6 je 0x11b01e33 */
  if (C.zf) goto L_11b01e33;
  /* 11b01dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01dda push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b01ddf call ebp */
  call_ind((uint32_t)(EBP), 0x11b01de1u);
  /* 11b01de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01de3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b01de8 push 0x11b07718 */
  push32((uint32_t)(0x11b07718u));
  /* 11b01ded push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01def call edi */
  call_ind((uint32_t)(EDI), 0x11b01df1u);
  /* 11b01df1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01df3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b01df8 push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b01dfd push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01dff call edi */
  call_ind((uint32_t)(EDI), 0x11b01e01u);
  /* 11b01e01 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01e03 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b01e08 push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01e0d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01e0f call edi */
  call_ind((uint32_t)(EDI), 0x11b01e11u);
  /* 11b01e11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01e15 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01e1a push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01e1c call edi */
  call_ind((uint32_t)(EDI), 0x11b01e1eu);
  /* 11b01e1e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01e21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01e23 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b01e25 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01e27u);
  /* 11b01e27 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01e2c push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01e2e call esi */
  call_ind((uint32_t)(ESI), 0x11b01e30u);
  /* 11b01e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01e33:;
  /* 11b01e33 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b01e35 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01e3bu);
  /* 11b01e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01e3e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01e40 je 0x11b01e6b */
  if (C.zf) goto L_11b01e6b;
  /* 11b01e42 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b01e47 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01e4c call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01e52u);
  /* 11b01e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01e57 je 0x11b01e6b */
  if (C.zf) goto L_11b01e6b;
  /* 11b01e59 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01e5e push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01e60 call esi */
  call_ind((uint32_t)(ESI), 0x11b01e62u);
  /* 11b01e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01e64 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b01e66 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01e68u);
  /* 11b01e68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01e6b:;
  /* 11b01e6b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01e6d call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01e73u);
  /* 11b01e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01e76 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01e78 je 0x11b01f0b */
  if (C.zf) goto L_11b01f0b;
  /* 11b01e7e push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b01e83 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01e88 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01e8eu);
  /* 11b01e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01e93 je 0x11b01f0b */
  if (C.zf) goto L_11b01f0b;
  /* 11b01e95 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b01e9a push 3 */
  push32((uint32_t)(0x3u));
  /* 11b01e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01e9e call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01ea4u);
  /* 11b01ea4 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b01ea9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01eab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01ead call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01eb3u);
  /* 11b01eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01eb5 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b01eba call ebp */
  call_ind((uint32_t)(EBP), 0x11b01ebcu);
  /* 11b01ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01ebe push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b01ec0 push 0x11b076f0 */
  push32((uint32_t)(0x11b076f0u));
  /* 11b01ec5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01ec7 call edi */
  call_ind((uint32_t)(EDI), 0x11b01ec9u);
  /* 11b01ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01ecb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b01ecd push 0x11b07700 */
  push32((uint32_t)(0x11b07700u));
  /* 11b01ed2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01ed4 call edi */
  call_ind((uint32_t)(EDI), 0x11b01ed6u);
  /* 11b01ed6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01ed9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01edb push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11b01ee0 push 0x11b07718 */
  push32((uint32_t)(0x11b07718u));
  /* 11b01ee5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01ee7 call edi */
  call_ind((uint32_t)(EDI), 0x11b01ee9u);
  /* 11b01ee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b01eeb push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b01ef0 push 0x11b07738 */
  push32((uint32_t)(0x11b07738u));
  /* 11b01ef5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01ef7 call edi */
  call_ind((uint32_t)(EDI), 0x11b01ef9u);
  /* 11b01ef9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01efb push 0xa */
  push32((uint32_t)(0xau));
  /* 11b01efd call ebx */
  call_ind((uint32_t)(EBX), 0x11b01effu);
  /* 11b01eff push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01f04 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01f06 call esi */
  call_ind((uint32_t)(ESI), 0x11b01f08u);
  /* 11b01f08 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01f0b:;
  /* 11b01f0b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b01f0d call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01f13u);
  /* 11b01f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01f16 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01f18 je 0x11b01f43 */
  if (C.zf) goto L_11b01f43;
  /* 11b01f1a push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b01f1f push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b01f24 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01f2au);
  /* 11b01f2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01f2f je 0x11b01f43 */
  if (C.zf) goto L_11b01f43;
  /* 11b01f31 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01f36 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01f38 call esi */
  call_ind((uint32_t)(ESI), 0x11b01f3au);
  /* 11b01f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01f3c push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b01f3e call ebx */
  call_ind((uint32_t)(EBX), 0x11b01f40u);
  /* 11b01f40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01f43:;
  /* 11b01f43 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01f45 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01f4bu);
  /* 11b01f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01f4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01f50 je 0x11b01f91 */
  if (C.zf) goto L_11b01f91;
  /* 11b01f52 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b01f57 push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b01f5c call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01f62u);
  /* 11b01f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01f67 je 0x11b01f91 */
  if (C.zf) goto L_11b01f91;
  /* 11b01f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01f6b push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b01f70 call ebp */
  call_ind((uint32_t)(EBP), 0x11b01f72u);
  /* 11b01f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01f74 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b01f76 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01f7b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01f7d call edi */
  call_ind((uint32_t)(EDI), 0x11b01f7fu);
  /* 11b01f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b01f81 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b01f83 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01f85u);
  /* 11b01f85 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b01f8a push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01f8c call esi */
  call_ind((uint32_t)(ESI), 0x11b01f8eu);
  /* 11b01f8e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01f91:;
  /* 11b01f91 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b01f93 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b01f99u);
  /* 11b01f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01f9c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01f9e je 0x11b01fc9 */
  if (C.zf) goto L_11b01fc9;
  /* 11b01fa0 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b01fa5 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01faa call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01fb0u);
  /* 11b01fb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01fb5 je 0x11b01fc9 */
  if (C.zf) goto L_11b01fc9;
  /* 11b01fb7 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b01fbc push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01fbe call esi */
  call_ind((uint32_t)(ESI), 0x11b01fc0u);
  /* 11b01fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01fc2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b01fc4 call ebx */
  call_ind((uint32_t)(EBX), 0x11b01fc6u);
  /* 11b01fc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b01fc9:;
  /* 11b01fc9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b01fcb call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b01fd1u);
  /* 11b01fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01fd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b01fd6 je 0x11b02029 */
  if (C.zf) goto L_11b02029;
  /* 11b01fd8 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b01fdd push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b01fe2 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b01fe8u);
  /* 11b01fe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b01feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b01fed je 0x11b02029 */
  if (C.zf) goto L_11b02029;
  /* 11b01fef push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b01ff4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b01ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b01ff8 call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b01ffeu);
  /* 11b01ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02000 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b02005 call ebp */
  call_ind((uint32_t)(EBP), 0x11b02007u);
  /* 11b02007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02009 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b0200e push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b02013 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02015 call edi */
  call_ind((uint32_t)(EDI), 0x11b02017u);
  /* 11b02017 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02019 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b0201b call ebx */
  call_ind((uint32_t)(EBX), 0x11b0201du);
  /* 11b0201d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b02022 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b02024 call esi */
  call_ind((uint32_t)(ESI), 0x11b02026u);
  /* 11b02026 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02029:;
  /* 11b02029 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b0202b call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02031u);
  /* 11b02031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02034 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02036 je 0x11b02061 */
  if (C.zf) goto L_11b02061;
  /* 11b02038 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b0203d push 0x11b07740 */
  push32((uint32_t)(0x11b07740u));
  /* 11b02042 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b02048u);
  /* 11b02048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0204b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0204d je 0x11b02061 */
  if (C.zf) goto L_11b02061;
  /* 11b0204f push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b02054 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b02056 call esi */
  call_ind((uint32_t)(ESI), 0x11b02058u);
  /* 11b02058 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0205a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b0205c call ebx */
  call_ind((uint32_t)(EBX), 0x11b0205eu);
  /* 11b0205e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02061:;
  /* 11b02061 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b02063 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b02069u);
  /* 11b02069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0206c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0206e je 0x11b020e2 */
  if (C.zf) goto L_11b020e2;
  /* 11b02070 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b02075 push 0x11b07740 */
  push32((uint32_t)(0x11b07740u));
  /* 11b0207a call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b02080u);
  /* 11b02080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02085 je 0x11b020e2 */
  if (C.zf) goto L_11b020e2;
  /* 11b02087 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02089 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b0208e call ebp */
  call_ind((uint32_t)(EBP), 0x11b02090u);
  /* 11b02090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02092 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b02097 push 0x11b07730 */
  push32((uint32_t)(0x11b07730u));
  /* 11b0209c push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0209e call edi */
  call_ind((uint32_t)(EDI), 0x11b020a0u);
  /* 11b020a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b020a2 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b020a7 push 0x11b07720 */
  push32((uint32_t)(0x11b07720u));
  /* 11b020ac push 4 */
  push32((uint32_t)(0x4u));
  /* 11b020ae call edi */
  call_ind((uint32_t)(EDI), 0x11b020b0u);
  /* 11b020b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b020b2 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b020b7 push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b020bc push 4 */
  push32((uint32_t)(0x4u));
  /* 11b020be call edi */
  call_ind((uint32_t)(EDI), 0x11b020c0u);
  /* 11b020c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b020c2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b020c4 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b020c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b020cb call edi */
  call_ind((uint32_t)(EDI), 0x11b020cdu);
  /* 11b020cd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b020d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b020d2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b020d4 call ebx */
  call_ind((uint32_t)(EBX), 0x11b020d6u);
  /* 11b020d6 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b020db push 6 */
  push32((uint32_t)(0x6u));
  /* 11b020dd call esi */
  call_ind((uint32_t)(ESI), 0x11b020dfu);
  /* 11b020df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b020e2:;
  /* 11b020e2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b020e4 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b020eau);
  /* 11b020ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b020ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b020ef je 0x11b0211a */
  if (C.zf) goto L_11b0211a;
  /* 11b020f1 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b020f6 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b020fb call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b02101u);
  /* 11b02101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02106 je 0x11b0211a */
  if (C.zf) goto L_11b0211a;
  /* 11b02108 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b0210d push 6 */
  push32((uint32_t)(0x6u));
  /* 11b0210f call esi */
  call_ind((uint32_t)(ESI), 0x11b02111u);
  /* 11b02111 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02113 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b02115 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02117u);
  /* 11b02117 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0211a:;
  /* 11b0211a push 6 */
  push32((uint32_t)(0x6u));
  /* 11b0211c call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b02122u);
  /* 11b02122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02125 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02127 je 0x11b021b7 */
  if (C.zf) goto L_11b021b7;
  /* 11b0212d push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b02132 push 0x11b07750 */
  push32((uint32_t)(0x11b07750u));
  /* 11b02137 call dword ptr [0x11b060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060f8))), 0x11b0213du);
  /* 11b0213d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02142 je 0x11b021b7 */
  if (C.zf) goto L_11b021b7;
  /* 11b02144 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b02149 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b0214b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0214d call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b02153u);
  /* 11b02153 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b02158 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0215a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0215c call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b02162u);
  /* 11b02162 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02164 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b02169 call ebp */
  call_ind((uint32_t)(EBP), 0x11b0216bu);
  /* 11b0216b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0216d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b0216f push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b02174 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02176 call edi */
  call_ind((uint32_t)(EDI), 0x11b02178u);
  /* 11b02178 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b0217a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b0217c push 0x11b07720 */
  push32((uint32_t)(0x11b07720u));
  /* 11b02181 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02183 call edi */
  call_ind((uint32_t)(EDI), 0x11b02185u);
  /* 11b02185 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02188 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b0218a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0218c push 0x11b07730 */
  push32((uint32_t)(0x11b07730u));
  /* 11b02191 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02193 call edi */
  call_ind((uint32_t)(EDI), 0x11b02195u);
  /* 11b02195 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b02197 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b0219c push 0x11b07740 */
  push32((uint32_t)(0x11b07740u));
  /* 11b021a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b021a3 call edi */
  call_ind((uint32_t)(EDI), 0x11b021a5u);
  /* 11b021a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b021a7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b021a9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b021abu);
  /* 11b021ab push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b021b0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b021b2 call esi */
  call_ind((uint32_t)(ESI), 0x11b021b4u);
  /* 11b021b4 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b021b7:;
  /* 11b021b7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b021b9 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b021bfu);
  /* 11b021bf mov edi, dword ptr [0x11b06108] */
  EDI = (r32((uint32_t)(0x11b06108)));
  /* 11b021c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b021c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b021ca je 0x11b02266 */
  if (C.zf) goto L_11b02266;
  /* 11b021d0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b021d2 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b021d8u);
  /* 11b021d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b021db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b021dd je 0x11b02266 */
  if (C.zf) goto L_11b02266;
  /* 11b021e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b021e5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b021e7 call ebx */
  call_ind((uint32_t)(EBX), 0x11b021e9u);
  /* 11b021e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b021eb push 0x11b07858 */
  push32((uint32_t)(0x11b07858u));
  /* 11b021f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b021f2 push 0x11b07678 */
  push32((uint32_t)(0x11b07678u));
  /* 11b021f7 push 0x11b07698 */
  push32((uint32_t)(0x11b07698u));
  /* 11b021fc push 0x11b07690 */
  push32((uint32_t)(0x11b07690u));
  /* 11b02201 call dword ptr [0x11b0610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0610c))), 0x11b02207u);
  /* 11b02207 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02209 push 0x11b07690 */
  push32((uint32_t)(0x11b07690u));
  /* 11b0220e call ebp */
  call_ind((uint32_t)(EBP), 0x11b02210u);
  /* 11b02210 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02212 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b02217 push 0x11b07780 */
  push32((uint32_t)(0x11b07780u));
  /* 11b0221c push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0221e call edi */
  call_ind((uint32_t)(EDI), 0x11b02220u);
  /* 11b02220 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b02222 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b02227 push 0x11b07760 */
  push32((uint32_t)(0x11b07760u));
  /* 11b0222c push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0222e call edi */
  call_ind((uint32_t)(EDI), 0x11b02230u);
  /* 11b02230 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02233 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b02235 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b0223a push 0x11b07778 */
  push32((uint32_t)(0x11b07778u));
  /* 11b0223f push 5 */
  push32((uint32_t)(0x5u));
  /* 11b02241 call edi */
  call_ind((uint32_t)(EDI), 0x11b02243u);
  /* 11b02243 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b02245 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11b0224a push 0x11b07670 */
  push32((uint32_t)(0x11b07670u));
  /* 11b0224f push 5 */
  push32((uint32_t)(0x5u));
  /* 11b02251 call edi */
  call_ind((uint32_t)(EDI), 0x11b02253u);
  /* 11b02253 call 0x11b01000 */
  push32(0x11b02258u); f_11b01000();
  /* 11b02258 push eax */
  push32((uint32_t)(EAX));
  /* 11b02259 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b0225b call esi */
  call_ind((uint32_t)(ESI), 0x11b0225du);
  /* 11b0225d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0225f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b02261 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02263u);
  /* 11b02263 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02266:;
  /* 11b02266 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b02268 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b0226eu);
  /* 11b0226e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02271 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02273 je 0x11b02312 */
  if (C.zf) goto L_11b02312;
  /* 11b02279 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b0227b call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b02281u);
  /* 11b02281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02284 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02286 je 0x11b02312 */
  if (C.zf) goto L_11b02312;
  /* 11b0228c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0228e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b02290 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02292u);
  /* 11b02292 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b02297 push 0x11b07860 */
  push32((uint32_t)(0x11b07860u));
  /* 11b0229c push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0229e push 0x11b07678 */
  push32((uint32_t)(0x11b07678u));
  /* 11b022a3 push 0x11b07698 */
  push32((uint32_t)(0x11b07698u));
  /* 11b022a8 push 0x11b07688 */
  push32((uint32_t)(0x11b07688u));
  /* 11b022ad call dword ptr [0x11b0610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0610c))), 0x11b022b3u);
  /* 11b022b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b022b5 push 0x11b07688 */
  push32((uint32_t)(0x11b07688u));
  /* 11b022ba call ebp */
  call_ind((uint32_t)(EBP), 0x11b022bcu);
  /* 11b022bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11b022be push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b022c3 push 0x11b07770 */
  push32((uint32_t)(0x11b07770u));
  /* 11b022c8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b022ca call edi */
  call_ind((uint32_t)(EDI), 0x11b022ccu);
  /* 11b022cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b022ce push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b022d3 push 0x11b07768 */
  push32((uint32_t)(0x11b07768u));
  /* 11b022d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b022da call edi */
  call_ind((uint32_t)(EDI), 0x11b022dcu);
  /* 11b022dc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b022df push 2 */
  push32((uint32_t)(0x2u));
  /* 11b022e1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b022e6 push 0x11b07758 */
  push32((uint32_t)(0x11b07758u));
  /* 11b022eb push 5 */
  push32((uint32_t)(0x5u));
  /* 11b022ed call edi */
  call_ind((uint32_t)(EDI), 0x11b022efu);
  /* 11b022ef push 2 */
  push32((uint32_t)(0x2u));
  /* 11b022f1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b022f6 push 0x11b07670 */
  push32((uint32_t)(0x11b07670u));
  /* 11b022fb push 5 */
  push32((uint32_t)(0x5u));
  /* 11b022fd call edi */
  call_ind((uint32_t)(EDI), 0x11b022ffu);
  /* 11b022ff call 0x11b01000 */
  push32(0x11b02304u); f_11b01000();
  /* 11b02304 push eax */
  push32((uint32_t)(EAX));
  /* 11b02305 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b02307 call esi */
  call_ind((uint32_t)(ESI), 0x11b02309u);
  /* 11b02309 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0230b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b0230d call ebx */
  call_ind((uint32_t)(EBX), 0x11b0230fu);
  /* 11b0230f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02312:;
  /* 11b02312 mov edi, dword ptr [0x11b060b0] */
  EDI = (r32((uint32_t)(0x11b060b0)));
  /* 11b02318 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b0231a call edi */
  call_ind((uint32_t)(EDI), 0x11b0231cu);
  /* 11b0231c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0231f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02321 je 0x11b0234a */
  if (C.zf) goto L_11b0234a;
  /* 11b02323 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b02325 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b0232bu);
  /* 11b0232b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0232e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02330 je 0x11b0234a */
  if (C.zf) goto L_11b0234a;
  /* 11b02332 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02334 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b02336 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02338u);
  /* 11b02338 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b0233d push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0233f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02341 call dword ptr [0x11b06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06104))), 0x11b02347u);
  /* 11b02347 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0234a:;
  /* 11b0234a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b0234c call edi */
  call_ind((uint32_t)(EDI), 0x11b0234eu);
  /* 11b0234e mov edi, dword ptr [0x11b06110] */
  EDI = (r32((uint32_t)(0x11b06110)));
  /* 11b02354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02357 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02359 je 0x11b0238e */
  if (C.zf) goto L_11b0238e;
  /* 11b0235b push 5 */
  push32((uint32_t)(0x5u));
  /* 11b0235d push 0x11b07858 */
  push32((uint32_t)(0x11b07858u));
  /* 11b02362 call edi */
  call_ind((uint32_t)(EDI), 0x11b02364u);
  /* 11b02364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02369 jne 0x11b0238e */
  if (!C.zf) goto L_11b0238e;
  /* 11b0236b push eax */
  push32((uint32_t)(EAX));
  /* 11b0236c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11b0236e call ebx */
  call_ind((uint32_t)(EBX), 0x11b02370u);
  /* 11b02370 mov ebp, dword ptr [0x11b060b8] */
  EBP = (r32((uint32_t)(0x11b060b8)));
  /* 11b02376 push 0x11b07310 */
  push32((uint32_t)(0x11b07310u));
  /* 11b0237b call ebp */
  call_ind((uint32_t)(EBP), 0x11b0237du);
  /* 11b0237d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0237f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b02381 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02383u);
  /* 11b02383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02385 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b02387 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02389u);
  /* 11b02389 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0238c jmp 0x11b02394 */
  goto L_11b02394;
L_11b0238e:;
  /* 11b0238e mov ebp, dword ptr [0x11b060b8] */
  EBP = (r32((uint32_t)(0x11b060b8)));
L_11b02394:;
  /* 11b02394 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b02396 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b0239cu);
  /* 11b0239c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0239f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b023a1 je 0x11b023ce */
  if (C.zf) goto L_11b023ce;
  /* 11b023a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b023a5 push 0x11b07860 */
  push32((uint32_t)(0x11b07860u));
  /* 11b023aa call edi */
  call_ind((uint32_t)(EDI), 0x11b023acu);
  /* 11b023ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b023af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b023b1 jne 0x11b023ce */
  if (!C.zf) goto L_11b023ce;
  /* 11b023b3 push eax */
  push32((uint32_t)(EAX));
  /* 11b023b4 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11b023b6 call ebx */
  call_ind((uint32_t)(EBX), 0x11b023b8u);
  /* 11b023b8 push 0x11b07308 */
  push32((uint32_t)(0x11b07308u));
  /* 11b023bd call ebp */
  call_ind((uint32_t)(EBP), 0x11b023bfu);
  /* 11b023bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b023c1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11b023c3 call ebx */
  call_ind((uint32_t)(EBX), 0x11b023c5u);
  /* 11b023c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b023c7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b023c9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b023cbu);
  /* 11b023cb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b023ce:;
  /* 11b023ce push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b023d0 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b023d6u);
  /* 11b023d6 mov edi, dword ptr [0x11b06114] */
  EDI = (r32((uint32_t)(0x11b06114)));
  /* 11b023dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b023df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b023e1 je 0x11b0240a */
  if (C.zf) goto L_11b0240a;
  /* 11b023e3 push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b023e8 call edi */
  call_ind((uint32_t)(EDI), 0x11b023eau);
  /* 11b023ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b023ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b023ef jne 0x11b0240a */
  if (!C.zf) goto L_11b0240a;
  /* 11b023f1 push 0x11b07300 */
  push32((uint32_t)(0x11b07300u));
  /* 11b023f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11b023f8u);
  /* 11b023f8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b023fd push 9 */
  push32((uint32_t)(0x9u));
  /* 11b023ff call esi */
  call_ind((uint32_t)(ESI), 0x11b02401u);
  /* 11b02401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02403 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b02405 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02407u);
  /* 11b02407 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0240a:;
  /* 11b0240a push 9 */
  push32((uint32_t)(0x9u));
  /* 11b0240c call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b02412u);
  /* 11b02412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02415 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02417 je 0x11b02455 */
  if (C.zf) goto L_11b02455;
  /* 11b02419 push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b0241e call edi */
  call_ind((uint32_t)(EDI), 0x11b02420u);
  /* 11b02420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02423 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02425 jne 0x11b02455 */
  if (!C.zf) goto L_11b02455;
  /* 11b02427 mov edi, dword ptr [0x11b0610c] */
  EDI = (r32((uint32_t)(0x11b0610c)));
  /* 11b0242d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b0242f push 0x11b076f8 */
  push32((uint32_t)(0x11b076f8u));
  /* 11b02434 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02436 push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b0243b push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b02440 push 0x11b076a8 */
  push32((uint32_t)(0x11b076a8u));
  /* 11b02445 call edi */
  call_ind((uint32_t)(EDI), 0x11b02447u);
  /* 11b02447 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b0244c push 9 */
  push32((uint32_t)(0x9u));
  /* 11b0244e call esi */
  call_ind((uint32_t)(ESI), 0x11b02450u);
  /* 11b02450 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02453 jmp 0x11b0245b */
  goto L_11b0245b;
L_11b02455:;
  /* 11b02455 mov edi, dword ptr [0x11b0610c] */
  EDI = (r32((uint32_t)(0x11b0610c)));
L_11b0245b:;
  /* 11b0245b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b0245d call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02463u);
  /* 11b02463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02466 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02468 je 0x11b02495 */
  if (C.zf) goto L_11b02495;
  /* 11b0246a push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b0246f call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b02475u);
  /* 11b02475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0247a jne 0x11b02495 */
  if (!C.zf) goto L_11b02495;
  /* 11b0247c push 0x11b07300 */
  push32((uint32_t)(0x11b07300u));
  /* 11b02481 call ebp */
  call_ind((uint32_t)(EBP), 0x11b02483u);
  /* 11b02483 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b02488 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b0248a call esi */
  call_ind((uint32_t)(ESI), 0x11b0248cu);
  /* 11b0248c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0248e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b02490 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02492u);
  /* 11b02492 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02495:;
  /* 11b02495 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b02497 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b0249du);
  /* 11b0249d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b024a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b024a2 je 0x11b024e2 */
  if (C.zf) goto L_11b024e2;
  /* 11b024a4 push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b024a9 call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b024afu);
  /* 11b024af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b024b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b024b4 jne 0x11b024e2 */
  if (!C.zf) goto L_11b024e2;
  /* 11b024b6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b024bb push 0x11b07708 */
  push32((uint32_t)(0x11b07708u));
  /* 11b024c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b024c2 push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b024c7 push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b024cc push 0x11b076a0 */
  push32((uint32_t)(0x11b076a0u));
  /* 11b024d1 call edi */
  call_ind((uint32_t)(EDI), 0x11b024d3u);
  /* 11b024d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b024d5 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b024d7 call esi */
  call_ind((uint32_t)(ESI), 0x11b024d9u);
  /* 11b024d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b024db push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11b024dd call ebx */
  call_ind((uint32_t)(EBX), 0x11b024dfu);
  /* 11b024df add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b024e2:;
  /* 11b024e2 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b024e4 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b024eau);
  /* 11b024ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b024ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b024ef je 0x11b0251c */
  if (C.zf) goto L_11b0251c;
  /* 11b024f1 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b024f6 call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b024fcu);
  /* 11b024fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b024ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02501 jne 0x11b0251c */
  if (!C.zf) goto L_11b0251c;
  /* 11b02503 push 0x11b07300 */
  push32((uint32_t)(0x11b07300u));
  /* 11b02508 call ebp */
  call_ind((uint32_t)(EBP), 0x11b0250au);
  /* 11b0250a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11b0250f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b02511 call esi */
  call_ind((uint32_t)(ESI), 0x11b02513u);
  /* 11b02513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02515 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b02517 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02519u);
  /* 11b02519 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0251c:;
  /* 11b0251c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b0251e call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b02524u);
  /* 11b02524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02527 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02529 je 0x11b02566 */
  if (C.zf) goto L_11b02566;
  /* 11b0252b push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b02530 call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b02536u);
  /* 11b02536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0253b jne 0x11b02566 */
  if (!C.zf) goto L_11b02566;
  /* 11b0253d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11b0253f push 0x11b07728 */
  push32((uint32_t)(0x11b07728u));
  /* 11b02544 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02546 push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b0254b push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b02550 push 0x11b076b8 */
  push32((uint32_t)(0x11b076b8u));
  /* 11b02555 call edi */
  call_ind((uint32_t)(EDI), 0x11b02557u);
  /* 11b02557 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b02559 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b0255b call esi */
  call_ind((uint32_t)(ESI), 0x11b0255du);
  /* 11b0255d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b0255f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b02561 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02563u);
  /* 11b02563 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02566:;
  /* 11b02566 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b02568 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b0256eu);
  /* 11b0256e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02571 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02573 je 0x11b025a0 */
  if (C.zf) goto L_11b025a0;
  /* 11b02575 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b0257a call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b02580u);
  /* 11b02580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02585 jne 0x11b025a0 */
  if (!C.zf) goto L_11b025a0;
  /* 11b02587 push 0x11b07300 */
  push32((uint32_t)(0x11b07300u));
  /* 11b0258c call ebp */
  call_ind((uint32_t)(EBP), 0x11b0258eu);
  /* 11b0258e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b02593 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b02595 call esi */
  call_ind((uint32_t)(ESI), 0x11b02597u);
  /* 11b02597 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02599 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b0259b call ebx */
  call_ind((uint32_t)(EBX), 0x11b0259du);
  /* 11b0259d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b025a0:;
  /* 11b025a0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b025a2 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b025a8u);
  /* 11b025a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b025ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b025ad je 0x11b025ed */
  if (C.zf) goto L_11b025ed;
  /* 11b025af push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b025b4 call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b025bau);
  /* 11b025ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b025bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b025bf jne 0x11b025ed */
  if (!C.zf) goto L_11b025ed;
  /* 11b025c1 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b025c6 push 0x11b07738 */
  push32((uint32_t)(0x11b07738u));
  /* 11b025cb push 4 */
  push32((uint32_t)(0x4u));
  /* 11b025cd push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b025d2 push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b025d7 push 0x11b076b0 */
  push32((uint32_t)(0x11b076b0u));
  /* 11b025dc call edi */
  call_ind((uint32_t)(EDI), 0x11b025deu);
  /* 11b025de push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b025e0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b025e2 call esi */
  call_ind((uint32_t)(ESI), 0x11b025e4u);
  /* 11b025e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b025e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b025e8 call ebx */
  call_ind((uint32_t)(EBX), 0x11b025eau);
  /* 11b025ea add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b025ed:;
  /* 11b025ed push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11b025ef call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b025f5u);
  /* 11b025f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b025f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b025fa je 0x11b02627 */
  if (C.zf) goto L_11b02627;
  /* 11b025fc push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b02601 call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b02607u);
  /* 11b02607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0260a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0260c jne 0x11b02627 */
  if (!C.zf) goto L_11b02627;
  /* 11b0260e push 0x11b072f8 */
  push32((uint32_t)(0x11b072f8u));
  /* 11b02613 call ebp */
  call_ind((uint32_t)(EBP), 0x11b02615u);
  /* 11b02615 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b0261a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b0261c call esi */
  call_ind((uint32_t)(ESI), 0x11b0261eu);
  /* 11b0261e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02620 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11b02622 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02624u);
  /* 11b02624 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02627:;
  /* 11b02627 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b02629 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b0262fu);
  /* 11b0262f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02632 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02634 je 0x11b02677 */
  if (C.zf) goto L_11b02677;
  /* 11b02636 push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b0263b call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b02641u);
  /* 11b02641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02646 jne 0x11b02677 */
  if (!C.zf) goto L_11b02677;
  /* 11b02648 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b0264d push 0x11b07710 */
  push32((uint32_t)(0x11b07710u));
  /* 11b02652 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02654 push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b02659 push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b0265e push 0x11b076c8 */
  push32((uint32_t)(0x11b076c8u));
  /* 11b02663 call edi */
  call_ind((uint32_t)(EDI), 0x11b02665u);
  /* 11b02665 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11b0266a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b0266c call esi */
  call_ind((uint32_t)(ESI), 0x11b0266eu);
  /* 11b0266e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02670 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11b02672 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02674u);
  /* 11b02674 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02677:;
  /* 11b02677 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b02679 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b0267fu);
  /* 11b0267f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02682 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02684 je 0x11b026b1 */
  if (C.zf) goto L_11b026b1;
  /* 11b02686 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b0268b call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b02691u);
  /* 11b02691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02696 jne 0x11b026b1 */
  if (!C.zf) goto L_11b026b1;
  /* 11b02698 push 0x11b072f8 */
  push32((uint32_t)(0x11b072f8u));
  /* 11b0269d call ebp */
  call_ind((uint32_t)(EBP), 0x11b0269fu);
  /* 11b0269f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11b026a4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b026a6 call esi */
  call_ind((uint32_t)(ESI), 0x11b026a8u);
  /* 11b026a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b026aa push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b026ac call ebx */
  call_ind((uint32_t)(EBX), 0x11b026aeu);
  /* 11b026ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b026b1:;
  /* 11b026b1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b026b3 call dword ptr [0x11b060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060fc))), 0x11b026b9u);
  /* 11b026b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b026bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b026be je 0x11b026fe */
  if (C.zf) goto L_11b026fe;
  /* 11b026c0 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b026c5 call dword ptr [0x11b06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06114))), 0x11b026cbu);
  /* 11b026cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b026ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b026d0 jne 0x11b026fe */
  if (!C.zf) goto L_11b026fe;
  /* 11b026d2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b026d7 push 0x11b07740 */
  push32((uint32_t)(0x11b07740u));
  /* 11b026dc push 4 */
  push32((uint32_t)(0x4u));
  /* 11b026de push 0x11b07848 */
  push32((uint32_t)(0x11b07848u));
  /* 11b026e3 push 0x11b07850 */
  push32((uint32_t)(0x11b07850u));
  /* 11b026e8 push 0x11b076c0 */
  push32((uint32_t)(0x11b076c0u));
  /* 11b026ed call edi */
  call_ind((uint32_t)(EDI), 0x11b026efu);
  /* 11b026ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b026f1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b026f3 call esi */
  call_ind((uint32_t)(ESI), 0x11b026f5u);
  /* 11b026f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b026f7 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b026f9 call ebx */
  call_ind((uint32_t)(EBX), 0x11b026fbu);
  /* 11b026fb add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b026fe:;
  /* 11b026fe push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11b02700 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02706u);
  /* 11b02706 mov esi, dword ptr [0x11b06118] */
  ESI = (r32((uint32_t)(0x11b06118)));
  /* 11b0270c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0270f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02711 je 0x11b0274a */
  if (C.zf) goto L_11b0274a;
  /* 11b02713 mov edi, dword ptr [0x11b06110] */
  EDI = (r32((uint32_t)(0x11b06110)));
  /* 11b02719 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0271b push 0x11b07758 */
  push32((uint32_t)(0x11b07758u));
  /* 11b02720 call edi */
  call_ind((uint32_t)(EDI), 0x11b02722u);
  /* 11b02722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02727 jne 0x11b02750 */
  if (!C.zf) goto L_11b02750;
  /* 11b02729 push eax */
  push32((uint32_t)(EAX));
  /* 11b0272a push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 11b0272c call ebx */
  call_ind((uint32_t)(EBX), 0x11b0272eu);
  /* 11b0272e push 0x11b072f0 */
  push32((uint32_t)(0x11b072f0u));
  /* 11b02733 call ebp */
  call_ind((uint32_t)(EBP), 0x11b02735u);
  /* 11b02735 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02737 call esi */
  call_ind((uint32_t)(ESI), 0x11b02739u);
  /* 11b02739 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0273b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0273d call ebx */
  call_ind((uint32_t)(EBX), 0x11b0273fu);
  /* 11b0273f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02741 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b02743 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02745u);
  /* 11b02745 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02748 jmp 0x11b02750 */
  goto L_11b02750;
L_11b0274a:;
  /* 11b0274a mov edi, dword ptr [0x11b06110] */
  EDI = (r32((uint32_t)(0x11b06110)));
L_11b02750:;
  /* 11b02750 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11b02752 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02758u);
  /* 11b02758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0275b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0275d je 0x11b0278e */
  if (C.zf) goto L_11b0278e;
  /* 11b0275f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02761 push 0x11b07760 */
  push32((uint32_t)(0x11b07760u));
  /* 11b02766 call edi */
  call_ind((uint32_t)(EDI), 0x11b02768u);
  /* 11b02768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0276b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0276d jne 0x11b0278e */
  if (!C.zf) goto L_11b0278e;
  /* 11b0276f push eax */
  push32((uint32_t)(EAX));
  /* 11b02770 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11b02772 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02774u);
  /* 11b02774 push 0x11b072e8 */
  push32((uint32_t)(0x11b072e8u));
  /* 11b02779 call ebp */
  call_ind((uint32_t)(EBP), 0x11b0277bu);
  /* 11b0277b push 2 */
  push32((uint32_t)(0x2u));
  /* 11b0277d call esi */
  call_ind((uint32_t)(ESI), 0x11b0277fu);
  /* 11b0277f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02781 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b02783 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02785u);
  /* 11b02785 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02787 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b02789 call ebx */
  call_ind((uint32_t)(EBX), 0x11b0278bu);
  /* 11b0278b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0278e:;
  /* 11b0278e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11b02790 call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02796u);
  /* 11b02796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02799 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0279b je 0x11b027cc */
  if (C.zf) goto L_11b027cc;
  /* 11b0279d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0279f push 0x11b07768 */
  push32((uint32_t)(0x11b07768u));
  /* 11b027a4 call edi */
  call_ind((uint32_t)(EDI), 0x11b027a6u);
  /* 11b027a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b027a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b027ab jne 0x11b027cc */
  if (!C.zf) goto L_11b027cc;
  /* 11b027ad push eax */
  push32((uint32_t)(EAX));
  /* 11b027ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11b027b0 call ebx */
  call_ind((uint32_t)(EBX), 0x11b027b2u);
  /* 11b027b2 push 0x11b072e0 */
  push32((uint32_t)(0x11b072e0u));
  /* 11b027b7 call ebp */
  call_ind((uint32_t)(EBP), 0x11b027b9u);
  /* 11b027b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b027bb call esi */
  call_ind((uint32_t)(ESI), 0x11b027bdu);
  /* 11b027bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b027bf push 8 */
  push32((uint32_t)(0x8u));
  /* 11b027c1 call ebx */
  call_ind((uint32_t)(EBX), 0x11b027c3u);
  /* 11b027c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b027c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b027c7 call ebx */
  call_ind((uint32_t)(EBX), 0x11b027c9u);
  /* 11b027c9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b027cc:;
  /* 11b027cc push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b027ce call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b027d4u);
  /* 11b027d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b027d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b027d9 je 0x11b0280a */
  if (C.zf) goto L_11b0280a;
  /* 11b027db push 4 */
  push32((uint32_t)(0x4u));
  /* 11b027dd push 0x11b07770 */
  push32((uint32_t)(0x11b07770u));
  /* 11b027e2 call edi */
  call_ind((uint32_t)(EDI), 0x11b027e4u);
  /* 11b027e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b027e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b027e9 jne 0x11b0280a */
  if (!C.zf) goto L_11b0280a;
  /* 11b027eb push eax */
  push32((uint32_t)(EAX));
  /* 11b027ec push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11b027ee call ebx */
  call_ind((uint32_t)(EBX), 0x11b027f0u);
  /* 11b027f0 push 0x11b072d8 */
  push32((uint32_t)(0x11b072d8u));
  /* 11b027f5 call ebp */
  call_ind((uint32_t)(EBP), 0x11b027f7u);
  /* 11b027f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b027f9 call esi */
  call_ind((uint32_t)(ESI), 0x11b027fbu);
  /* 11b027fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b027fd push 0xa */
  push32((uint32_t)(0xau));
  /* 11b027ff call ebx */
  call_ind((uint32_t)(EBX), 0x11b02801u);
  /* 11b02801 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02803 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11b02805 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02807u);
  /* 11b02807 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0280a:;
  /* 11b0280a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b0280c call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02812u);
  /* 11b02812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02815 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02817 je 0x11b02848 */
  if (C.zf) goto L_11b02848;
  /* 11b02819 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0281b push 0x11b07778 */
  push32((uint32_t)(0x11b07778u));
  /* 11b02820 call edi */
  call_ind((uint32_t)(EDI), 0x11b02822u);
  /* 11b02822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02827 jne 0x11b02848 */
  if (!C.zf) goto L_11b02848;
  /* 11b02829 push eax */
  push32((uint32_t)(EAX));
  /* 11b0282a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b0282c call ebx */
  call_ind((uint32_t)(EBX), 0x11b0282eu);
  /* 11b0282e push 0x11b072d0 */
  push32((uint32_t)(0x11b072d0u));
  /* 11b02833 call ebp */
  call_ind((uint32_t)(EBP), 0x11b02835u);
  /* 11b02835 push 5 */
  push32((uint32_t)(0x5u));
  /* 11b02837 call esi */
  call_ind((uint32_t)(ESI), 0x11b02839u);
  /* 11b02839 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0283b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b0283d call ebx */
  call_ind((uint32_t)(EBX), 0x11b0283fu);
  /* 11b0283f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02841 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b02843 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02845u);
  /* 11b02845 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02848:;
  /* 11b02848 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11b0284a call dword ptr [0x11b060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060b0))), 0x11b02850u);
  /* 11b02850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02853 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b02855 je 0x11b02886 */
  if (C.zf) goto L_11b02886;
  /* 11b02857 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b02859 push 0x11b07780 */
  push32((uint32_t)(0x11b07780u));
  /* 11b0285e call edi */
  call_ind((uint32_t)(EDI), 0x11b02860u);
  /* 11b02860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02865 jne 0x11b02886 */
  if (!C.zf) goto L_11b02886;
  /* 11b02867 push eax */
  push32((uint32_t)(EAX));
  /* 11b02868 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11b0286a call ebx */
  call_ind((uint32_t)(EBX), 0x11b0286cu);
  /* 11b0286c push 0x11b072c8 */
  push32((uint32_t)(0x11b072c8u));
  /* 11b02871 call ebp */
  call_ind((uint32_t)(EBP), 0x11b02873u);
  /* 11b02873 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b02875 call esi */
  call_ind((uint32_t)(ESI), 0x11b02877u);
  /* 11b02877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02879 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11b0287b call ebx */
  call_ind((uint32_t)(EBX), 0x11b0287du);
  /* 11b0287d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0287f push 0xf */
  push32((uint32_t)(0xfu));
  /* 11b02881 call ebx */
  call_ind((uint32_t)(EBX), 0x11b02883u);
  /* 11b02883 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b02886:;
  /* 11b02886 pop edi */
  EDI = (pop32());
  /* 11b02887 pop esi */
  ESI = (pop32());
  /* 11b02888 pop ebp */
  EBP = (pop32());
  /* 11b02889 pop ebx */
  EBX = (pop32());
  /* 11b0288a ret  */
  ESPCHK(0x11b01410u, _esp0);
  ESP += 4; return;
}

/* FUN_10002890 @ 0x11b02890 (217 bytes, 57 insns) */
void f_11b02890(void) {
  FTRACE(0x11b02890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02890 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b02894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02897 jne 0x11b02925 */
  if (!C.zf) goto L_11b02925;
  /* 11b0289d call dword ptr [0x11b0608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0608c))), 0x11b028a3u);
  /* 11b028a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b028a5 mov dword ptr [0x11b07884], eax */
  w32((uint32_t)(0x11b07884), (EAX));
  /* 11b028aa call 0x11b032c4 */
  push32(0x11b028afu); f_11b032c4();
  /* 11b028af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b028b1 pop ecx */
  ECX = (pop32());
  /* 11b028b2 je 0x11b028f0 */
  if (C.zf) goto L_11b028f0;
  /* 11b028b4 mov eax, dword ptr [0x11b07884] */
  EAX = (r32((uint32_t)(0x11b07884)));
  /* 11b028b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b028bb mov cl, byte ptr [0x11b07885] */
  CL = (r8((uint32_t)(0x11b07885)));
  /* 11b028c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b028c6 shr dword ptr [0x11b07884], 0x10 */
  w32((uint32_t)(0x11b07884), (sh_shr((uint32_t)(r32((uint32_t)(0x11b07884))), (0x10u)&0x1f, 32)));
  /* 11b028cd mov dword ptr [0x11b0788c], eax */
  w32((uint32_t)(0x11b0788c), (EAX));
  /* 11b028d2 mov dword ptr [0x11b07890], ecx */
  w32((uint32_t)(0x11b07890), (ECX));
  /* 11b028d8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b028db add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b028dd mov dword ptr [0x11b07888], eax */
  w32((uint32_t)(0x11b07888), (EAX));
  /* 11b028e2 call 0x11b02b57 */
  push32(0x11b028e7u); f_11b02b57();
  /* 11b028e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b028e9 jne 0x11b028f4 */
  if (!C.zf) goto L_11b028f4;
  /* 11b028eb call 0x11b03300 */
  push32(0x11b028f0u); f_11b03300();
L_11b028f0:;
  /* 11b028f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b028f2 jmp 0x11b02966 */
  goto L_11b02966;
L_11b028f4:;
  /* 11b028f4 call dword ptr [0x11b06088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06088))), 0x11b028fau);
  /* 11b028fa mov dword ptr [0x11b07dd8], eax */
  w32((uint32_t)(0x11b07dd8), (EAX));
  /* 11b028ff call 0x11b03192 */
  push32(0x11b02904u); f_11b03192();
  /* 11b02904 mov dword ptr [0x11b07870], eax */
  w32((uint32_t)(0x11b07870), (EAX));
  /* 11b02909 call 0x11b02c7c */
  push32(0x11b0290eu); f_11b02c7c();
  /* 11b0290e call 0x11b02f45 */
  push32(0x11b02913u); f_11b02f45();
  /* 11b02913 call 0x11b02e8c */
  push32(0x11b02918u); f_11b02e8c();
  /* 11b02918 call 0x11b02a39 */
  push32(0x11b0291du); f_11b02a39();
  /* 11b0291d inc dword ptr [0x11b0786c] */
  { uint32_t _r=(r32((uint32_t)(0x11b0786c)))+1; w32((uint32_t)(0x11b0786c), (_r)); fl_inc(_r,32); }
  /* 11b02923 jmp 0x11b02963 */
  goto L_11b02963;
L_11b02925:;
  /* 11b02925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b02927 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02929 jne 0x11b02957 */
  if (!C.zf) goto L_11b02957;
  /* 11b0292b cmp dword ptr [0x11b0786c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11b0786c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02931 jle 0x11b028f0 */
  if ((C.zf||C.sf!=C.of)) goto L_11b028f0;
  /* 11b02933 dec dword ptr [0x11b0786c] */
  { uint32_t _r=(r32((uint32_t)(0x11b0786c)))-1; w32((uint32_t)(0x11b0786c), (_r)); fl_dec(_r,32); }
  /* 11b02939 cmp dword ptr [0x11b078bc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11b078bc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0293f jne 0x11b02946 */
  if (!C.zf) goto L_11b02946;
  /* 11b02941 call 0x11b02a77 */
  push32(0x11b02946u); f_11b02a77();
L_11b02946:;
  /* 11b02946 call 0x11b02e38 */
  push32(0x11b0294bu); f_11b02e38();
  /* 11b0294b call 0x11b02bab */
  push32(0x11b02950u); f_11b02bab();
  /* 11b02950 call 0x11b03300 */
  push32(0x11b02955u); f_11b03300();
  /* 11b02955 jmp 0x11b02963 */
  goto L_11b02963;
L_11b02957:;
  /* 11b02957 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0295a jne 0x11b02963 */
  if (!C.zf) goto L_11b02963;
  /* 11b0295c push ecx */
  push32((uint32_t)(ECX));
  /* 11b0295d call 0x11b02bdc */
  push32(0x11b02962u); f_11b02bdc();
  /* 11b02962 pop ecx */
  ECX = (pop32());
L_11b02963:;
  /* 11b02963 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02965 pop eax */
  EAX = (pop32());
L_11b02966:;
  /* 11b02966 ret 0xc */
  ESPCHK(0x11b02890u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11b02969 (157 bytes, 73 insns) */
void f_11b02969(void) {
  FTRACE(0x11b02969u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02969 push ebp */
  push32((uint32_t)(EBP));
  /* 11b0296a mov ebp, esp */
  EBP = (ESP);
  /* 11b0296c push ebx */
  push32((uint32_t)(EBX));
  /* 11b0296d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b02970 push esi */
  push32((uint32_t)(ESI));
  /* 11b02971 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b02974 push edi */
  push32((uint32_t)(EDI));
  /* 11b02975 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b02978 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b0297a jne 0x11b02985 */
  if (!C.zf) goto L_11b02985;
  /* 11b0297c cmp dword ptr [0x11b0786c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b0786c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02983 jmp 0x11b029ab */
  goto L_11b029ab;
L_11b02985:;
  /* 11b02985 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02988 je 0x11b0298f */
  if (C.zf) goto L_11b0298f;
  /* 11b0298a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0298d jne 0x11b029b1 */
  if (!C.zf) goto L_11b029b1;
L_11b0298f:;
  /* 11b0298f mov eax, dword ptr [0x11b07ddc] */
  EAX = (r32((uint32_t)(0x11b07ddc)));
  /* 11b02994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02996 je 0x11b029a1 */
  if (C.zf) goto L_11b029a1;
  /* 11b02998 push edi */
  push32((uint32_t)(EDI));
  /* 11b02999 push esi */
  push32((uint32_t)(ESI));
  /* 11b0299a push ebx */
  push32((uint32_t)(EBX));
  /* 11b0299b call eax */
  call_ind((uint32_t)(EAX), 0x11b0299du);
  /* 11b0299d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0299f je 0x11b029ad */
  if (C.zf) goto L_11b029ad;
L_11b029a1:;
  /* 11b029a1 push edi */
  push32((uint32_t)(EDI));
  /* 11b029a2 push esi */
  push32((uint32_t)(ESI));
  /* 11b029a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b029a4 call 0x11b02890 */
  push32(0x11b029a9u); f_11b02890();
  /* 11b029a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11b029ab:;
  /* 11b029ab jne 0x11b029b1 */
  if (!C.zf) goto L_11b029b1;
L_11b029ad:;
  /* 11b029ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b029af jmp 0x11b029ff */
  goto L_11b029ff;
L_11b029b1:;
  /* 11b029b1 push edi */
  push32((uint32_t)(EDI));
  /* 11b029b2 push esi */
  push32((uint32_t)(ESI));
  /* 11b029b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b029b4 call 0x11b013f0 */
  push32(0x11b029b9u); f_11b013f0();
  /* 11b029b9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b029bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b029bf jne 0x11b029cd */
  if (!C.zf) goto L_11b029cd;
  /* 11b029c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b029c3 jne 0x11b029fc */
  if (!C.zf) goto L_11b029fc;
  /* 11b029c5 push edi */
  push32((uint32_t)(EDI));
  /* 11b029c6 push eax */
  push32((uint32_t)(EAX));
  /* 11b029c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b029c8 call 0x11b02890 */
  push32(0x11b029cdu); f_11b02890();
L_11b029cd:;
  /* 11b029cd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b029cf je 0x11b029d6 */
  if (C.zf) goto L_11b029d6;
  /* 11b029d1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b029d4 jne 0x11b029fc */
  if (!C.zf) goto L_11b029fc;
L_11b029d6:;
  /* 11b029d6 push edi */
  push32((uint32_t)(EDI));
  /* 11b029d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b029d8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b029d9 call 0x11b02890 */
  push32(0x11b029deu); f_11b02890();
  /* 11b029de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b029e0 jne 0x11b029e5 */
  if (!C.zf) goto L_11b029e5;
  /* 11b029e2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11b029e5:;
  /* 11b029e5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b029e9 je 0x11b029fc */
  if (C.zf) goto L_11b029fc;
  /* 11b029eb mov eax, dword ptr [0x11b07ddc] */
  EAX = (r32((uint32_t)(0x11b07ddc)));
  /* 11b029f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b029f2 je 0x11b029fc */
  if (C.zf) goto L_11b029fc;
  /* 11b029f4 push edi */
  push32((uint32_t)(EDI));
  /* 11b029f5 push esi */
  push32((uint32_t)(ESI));
  /* 11b029f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b029f7 call eax */
  call_ind((uint32_t)(EAX), 0x11b029f9u);
  /* 11b029f9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11b029fc:;
  /* 11b029fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11b029ff:;
  /* 11b029ff pop edi */
  EDI = (pop32());
  /* 11b02a00 pop esi */
  ESI = (pop32());
  /* 11b02a01 pop ebx */
  EBX = (pop32());
  /* 11b02a02 pop ebp */
  EBP = (pop32());
  /* 11b02a03 ret 0xc */
  ESPCHK(0x11b02969u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11b02a06 (48 bytes, 15 insns) */
void f_11b02a06(void) {
  FTRACE(0x11b02a06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02a06 mov eax, dword ptr [0x11b07878] */
  EAX = (r32((uint32_t)(0x11b07878)));
  /* 11b02a0b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02a0e je 0x11b02a1d */
  if (C.zf) goto L_11b02a1d;
  /* 11b02a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02a12 jne 0x11b02a22 */
  if (!C.zf) goto L_11b02a22;
  /* 11b02a14 cmp dword ptr [0x11b0787c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b0787c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02a1b jne 0x11b02a22 */
  if (!C.zf) goto L_11b02a22;
L_11b02a1d:;
  /* 11b02a1d call 0x11b03375 */
  push32(0x11b02a22u); f_11b03375();
L_11b02a22:;
  /* 11b02a22 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b02a26 call 0x11b033ae */
  push32(0x11b02a2bu); f_11b033ae();
  /* 11b02a2b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b02a30 call dword ptr [0x11b07344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b07344))), 0x11b02a36u);
  /* 11b02a36 pop ecx */
  ECX = (pop32());
  /* 11b02a37 pop ecx */
  ECX = (pop32());
  /* 11b02a38 ret  */
  ESPCHK(0x11b02a06u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a39 @ 0x11b02a39 (45 bytes, 12 insns) */
void f_11b02a39(void) {
  FTRACE(0x11b02a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02a39 mov eax, dword ptr [0x11b07dd4] */
  EAX = (r32((uint32_t)(0x11b07dd4)));
  /* 11b02a3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02a40 je 0x11b02a44 */
  if (C.zf) goto L_11b02a44;
  /* 11b02a42 call eax */
  call_ind((uint32_t)(EAX), 0x11b02a44u);
L_11b02a44:;
  /* 11b02a44 push 0x11b07010 */
  push32((uint32_t)(0x11b07010u));
  /* 11b02a49 push 0x11b07008 */
  push32((uint32_t)(0x11b07008u));
  /* 11b02a4e call 0x11b02b3d */
  push32(0x11b02a53u); f_11b02b3d();
  /* 11b02a53 push 0x11b07004 */
  push32((uint32_t)(0x11b07004u));
  /* 11b02a58 push 0x11b07000 */
  push32((uint32_t)(0x11b07000u));
  /* 11b02a5d call 0x11b02b3d */
  push32(0x11b02a62u); f_11b02b3d();
  /* 11b02a62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02a65 ret  */
  ESPCHK(0x11b02a39u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11b02a66 (17 bytes, 6 insns) */
void f_11b02a66(void) {
  FTRACE(0x11b02a66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02a68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02a6a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11b02a6e call 0x11b02a86 */
  push32(0x11b02a73u); f_11b02a86();
  /* 11b02a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02a76 ret  */
  ESPCHK(0x11b02a66u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a77 @ 0x11b02a77 (15 bytes, 6 insns) */
void f_11b02a77(void) {
  FTRACE(0x11b02a77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02a7d call 0x11b02a86 */
  push32(0x11b02a82u); f_11b02a86();
  /* 11b02a82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02a85 ret  */
  ESPCHK(0x11b02a77u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a86 @ 0x11b02a86 (163 bytes, 53 insns) */
void f_11b02a86(void) {
  FTRACE(0x11b02a86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02a86 push edi */
  push32((uint32_t)(EDI));
  /* 11b02a87 call 0x11b02b2b */
  push32(0x11b02a8cu); f_11b02b2b();
  /* 11b02a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02a8e pop edi */
  EDI = (pop32());
  /* 11b02a8f cmp dword ptr [0x11b078c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b078c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02a95 jne 0x11b02aa8 */
  if (!C.zf) goto L_11b02aa8;
  /* 11b02a97 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b02a9b call dword ptr [0x11b06098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06098))), 0x11b02aa1u);
  /* 11b02aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11b02aa2 call dword ptr [0x11b06094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06094))), 0x11b02aa8u);
L_11b02aa8:;
  /* 11b02aa8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02aad push ebx */
  push32((uint32_t)(EBX));
  /* 11b02aae mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b02ab2 mov dword ptr [0x11b078bc], edi */
  w32((uint32_t)(0x11b078bc), (EDI));
  /* 11b02ab8 mov byte ptr [0x11b078b8], bl */
  w8((uint32_t)(0x11b078b8), (BL));
  /* 11b02abe jne 0x11b02afc */
  if (!C.zf) goto L_11b02afc;
  /* 11b02ac0 mov eax, dword ptr [0x11b07dd0] */
  EAX = (r32((uint32_t)(0x11b07dd0)));
  /* 11b02ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02ac7 je 0x11b02aeb */
  if (C.zf) goto L_11b02aeb;
  /* 11b02ac9 mov ecx, dword ptr [0x11b07dcc] */
  ECX = (r32((uint32_t)(0x11b07dcc)));
  /* 11b02acf push esi */
  push32((uint32_t)(ESI));
  /* 11b02ad0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11b02ad3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02ad5 jb 0x11b02aea */
  if (C.cf) goto L_11b02aea;
L_11b02ad7:;
  /* 11b02ad7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b02ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02adb je 0x11b02adf */
  if (C.zf) goto L_11b02adf;
  /* 11b02add call eax */
  call_ind((uint32_t)(EAX), 0x11b02adfu);
L_11b02adf:;
  /* 11b02adf sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b02ae2 cmp esi, dword ptr [0x11b07dd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b07dd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02ae8 jae 0x11b02ad7 */
  if (!C.cf) goto L_11b02ad7;
L_11b02aea:;
  /* 11b02aea pop esi */
  ESI = (pop32());
L_11b02aeb:;
  /* 11b02aeb push 0x11b07018 */
  push32((uint32_t)(0x11b07018u));
  /* 11b02af0 push 0x11b07014 */
  push32((uint32_t)(0x11b07014u));
  /* 11b02af5 call 0x11b02b3d */
  push32(0x11b02afau); f_11b02b3d();
  /* 11b02afa pop ecx */
  ECX = (pop32());
  /* 11b02afb pop ecx */
  ECX = (pop32());
L_11b02afc:;
  /* 11b02afc push 0x11b07020 */
  push32((uint32_t)(0x11b07020u));
  /* 11b02b01 push 0x11b0701c */
  push32((uint32_t)(0x11b0701cu));
  /* 11b02b06 call 0x11b02b3d */
  push32(0x11b02b0bu); f_11b02b3d();
  /* 11b02b0b pop ecx */
  ECX = (pop32());
  /* 11b02b0c pop ecx */
  ECX = (pop32());
  /* 11b02b0d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b02b0f pop ebx */
  EBX = (pop32());
  /* 11b02b10 je 0x11b02b19 */
  if (C.zf) goto L_11b02b19;
  /* 11b02b12 call 0x11b02b34 */
  push32(0x11b02b17u); f_11b02b34();
  /* 11b02b17 pop edi */
  EDI = (pop32());
  /* 11b02b18 ret  */
  ESPCHK(0x11b02a86u, _esp0);
  ESP += 4; return;
L_11b02b19:;
  /* 11b02b19 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b02b1d mov dword ptr [0x11b078c0], edi */
  w32((uint32_t)(0x11b078c0), (EDI));
  /* 11b02b23 call dword ptr [0x11b06090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06090))), 0x11b02b29u);
  /* 11b02b29 pop edi */
  EDI = (pop32());
  /* 11b02b2a ret  */
  ESPCHK(0x11b02a86u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b2b @ 0x11b02b2b (9 bytes, 4 insns) */
void f_11b02b2b(void) {
  FTRACE(0x11b02b2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02b2b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b02b2d call 0x11b03596 */
  push32(0x11b02b32u); f_11b03596();
  /* 11b02b32 pop ecx */
  ECX = (pop32());
  /* 11b02b33 ret  */
  ESPCHK(0x11b02b2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b34 @ 0x11b02b34 (9 bytes, 4 insns) */
void f_11b02b34(void) {
  FTRACE(0x11b02b34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02b34 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b02b36 call 0x11b035f7 */
  push32(0x11b02b3bu); f_11b035f7();
  /* 11b02b3b pop ecx */
  ECX = (pop32());
  /* 11b02b3c ret  */
  ESPCHK(0x11b02b34u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b3d @ 0x11b02b3d (26 bytes, 12 insns) */
void f_11b02b3d(void) {
  FTRACE(0x11b02b3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02b3d push esi */
  push32((uint32_t)(ESI));
  /* 11b02b3e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11b02b42:;
  /* 11b02b42 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02b46 jae 0x11b02b55 */
  if (!C.cf) goto L_11b02b55;
  /* 11b02b48 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b02b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02b4c je 0x11b02b50 */
  if (C.zf) goto L_11b02b50;
  /* 11b02b4e call eax */
  call_ind((uint32_t)(EAX), 0x11b02b50u);
L_11b02b50:;
  /* 11b02b50 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02b53 jmp 0x11b02b42 */
  goto L_11b02b42;
L_11b02b55:;
  /* 11b02b55 pop esi */
  ESI = (pop32());
  /* 11b02b56 ret  */
  ESPCHK(0x11b02b3du, _esp0);
  ESP += 4; return;
}

/* FUN_10002b57 @ 0x11b02b57 (84 bytes, 32 insns) */
void f_11b02b57(void) {
  FTRACE(0x11b02b57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02b57 push esi */
  push32((uint32_t)(ESI));
  /* 11b02b58 call 0x11b03501 */
  push32(0x11b02b5du); f_11b03501();
  /* 11b02b5d call dword ptr [0x11b060a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060a0))), 0x11b02b63u);
  /* 11b02b63 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02b66 mov dword ptr [0x11b07348], eax */
  w32((uint32_t)(0x11b07348), (EAX));
  /* 11b02b6b je 0x11b02ba7 */
  if (C.zf) goto L_11b02ba7;
  /* 11b02b6d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b02b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02b71 call 0x11b0360c */
  push32(0x11b02b76u); f_11b0360c();
  /* 11b02b76 mov esi, eax */
  ESI = (EAX);
  /* 11b02b78 pop ecx */
  ECX = (pop32());
  /* 11b02b79 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b02b7b pop ecx */
  ECX = (pop32());
  /* 11b02b7c je 0x11b02ba7 */
  if (C.zf) goto L_11b02ba7;
  /* 11b02b7e push esi */
  push32((uint32_t)(ESI));
  /* 11b02b7f push dword ptr [0x11b07348] */
  push32((uint32_t)(r32((uint32_t)(0x11b07348))));
  /* 11b02b85 call dword ptr [0x11b06000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06000))), 0x11b02b8bu);
  /* 11b02b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02b8d je 0x11b02ba7 */
  if (C.zf) goto L_11b02ba7;
  /* 11b02b8f push esi */
  push32((uint32_t)(ESI));
  /* 11b02b90 call 0x11b02bc9 */
  push32(0x11b02b95u); f_11b02bc9();
  /* 11b02b95 pop ecx */
  ECX = (pop32());
  /* 11b02b96 call dword ptr [0x11b06004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06004))), 0x11b02b9cu);
  /* 11b02b9c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b02ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b02ba2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b02ba4 pop eax */
  EAX = (pop32());
  /* 11b02ba5 pop esi */
  ESI = (pop32());
  /* 11b02ba6 ret  */
  ESPCHK(0x11b02b57u, _esp0);
  ESP += 4; return;
L_11b02ba7:;
  /* 11b02ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b02ba9 pop esi */
  ESI = (pop32());
  /* 11b02baa ret  */
  ESPCHK(0x11b02b57u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bab @ 0x11b02bab (30 bytes, 8 insns) */
void f_11b02bab(void) {
  FTRACE(0x11b02babu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02bab call 0x11b0352a */
  push32(0x11b02bb0u); f_11b0352a();
  /* 11b02bb0 mov eax, dword ptr [0x11b07348] */
  EAX = (r32((uint32_t)(0x11b07348)));
  /* 11b02bb5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02bb8 je 0x11b02bc8 */
  if (C.zf) goto L_11b02bc8;
  /* 11b02bba push eax */
  push32((uint32_t)(EAX));
  /* 11b02bbb call dword ptr [0x11b060a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060a4))), 0x11b02bc1u);
  /* 11b02bc1 or dword ptr [0x11b07348], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11b07348)))|(0xffffffffu); w32((uint32_t)(0x11b07348), (_r)); fl_logic(_r,32); }
L_11b02bc8:;
  /* 11b02bc8 ret  */
  ESPCHK(0x11b02babu, _esp0);
  ESP += 4; return;
}

/* FUN_10002bc9 @ 0x11b02bc9 (19 bytes, 4 insns) */
void f_11b02bc9(void) {
  FTRACE(0x11b02bc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02bc9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b02bcd mov dword ptr [eax + 0x50], 0x11b074c8 */
  w32((uint32_t)(EAX + 0x50), (0x11b074c8u));
  /* 11b02bd4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11b02bdb ret  */
  ESPCHK(0x11b02bc9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bdc @ 0x11b02bdc (160 bytes, 62 insns) */
void f_11b02bdc(void) {
  FTRACE(0x11b02bdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02bdc mov eax, dword ptr [0x11b07348] */
  EAX = (r32((uint32_t)(0x11b07348)));
  /* 11b02be1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02be4 je 0x11b02c7b */
  if (C.zf) goto L_11b02c7b;
  /* 11b02bea push esi */
  push32((uint32_t)(ESI));
  /* 11b02beb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b02bef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b02bf1 jne 0x11b02c00 */
  if (!C.zf) goto L_11b02c00;
  /* 11b02bf3 push eax */
  push32((uint32_t)(EAX));
  /* 11b02bf4 call dword ptr [0x11b060a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b060a8))), 0x11b02bfau);
  /* 11b02bfa mov esi, eax */
  ESI = (EAX);
  /* 11b02bfc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b02bfe je 0x11b02c6c */
  if (C.zf) goto L_11b02c6c;
L_11b02c00:;
  /* 11b02c00 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11b02c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02c05 je 0x11b02c0e */
  if (C.zf) goto L_11b02c0e;
  /* 11b02c07 push eax */
  push32((uint32_t)(EAX));
  /* 11b02c08 call 0x11b03699 */
  push32(0x11b02c0du); f_11b03699();
  /* 11b02c0d pop ecx */
  ECX = (pop32());
L_11b02c0e:;
  /* 11b02c0e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11b02c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02c13 je 0x11b02c1c */
  if (C.zf) goto L_11b02c1c;
  /* 11b02c15 push eax */
  push32((uint32_t)(EAX));
  /* 11b02c16 call 0x11b03699 */
  push32(0x11b02c1bu); f_11b03699();
  /* 11b02c1b pop ecx */
  ECX = (pop32());
L_11b02c1c:;
  /* 11b02c1c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11b02c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02c21 je 0x11b02c2a */
  if (C.zf) goto L_11b02c2a;
  /* 11b02c23 push eax */
  push32((uint32_t)(EAX));
  /* 11b02c24 call 0x11b03699 */
  push32(0x11b02c29u); f_11b03699();
  /* 11b02c29 pop ecx */
  ECX = (pop32());
L_11b02c2a:;
  /* 11b02c2a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11b02c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02c2f je 0x11b02c38 */
  if (C.zf) goto L_11b02c38;
  /* 11b02c31 push eax */
  push32((uint32_t)(EAX));
  /* 11b02c32 call 0x11b03699 */
  push32(0x11b02c37u); f_11b03699();
  /* 11b02c37 pop ecx */
  ECX = (pop32());
L_11b02c38:;
  /* 11b02c38 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11b02c3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02c3d je 0x11b02c46 */
  if (C.zf) goto L_11b02c46;
  /* 11b02c3f push eax */
  push32((uint32_t)(EAX));
  /* 11b02c40 call 0x11b03699 */
  push32(0x11b02c45u); f_11b03699();
  /* 11b02c45 pop ecx */
  ECX = (pop32());
L_11b02c46:;
  /* 11b02c46 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11b02c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02c4b je 0x11b02c54 */
  if (C.zf) goto L_11b02c54;
  /* 11b02c4d push eax */
  push32((uint32_t)(EAX));
  /* 11b02c4e call 0x11b03699 */
  push32(0x11b02c53u); f_11b03699();
  /* 11b02c53 pop ecx */
  ECX = (pop32());
L_11b02c54:;
  /* 11b02c54 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11b02c57 cmp eax, 0x11b074c8 */
  { uint32_t _a=(EAX),_b=(0x11b074c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02c5c je 0x11b02c65 */
  if (C.zf) goto L_11b02c65;
  /* 11b02c5e push eax */
  push32((uint32_t)(EAX));
  /* 11b02c5f call 0x11b03699 */
  push32(0x11b02c64u); f_11b03699();
  /* 11b02c64 pop ecx */
  ECX = (pop32());
L_11b02c65:;
  /* 11b02c65 push esi */
  push32((uint32_t)(ESI));
  /* 11b02c66 call 0x11b03699 */
  push32(0x11b02c6bu); f_11b03699();
  /* 11b02c6b pop ecx */
  ECX = (pop32());
L_11b02c6c:;
  /* 11b02c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b02c6e push dword ptr [0x11b07348] */
  push32((uint32_t)(r32((uint32_t)(0x11b07348))));
  /* 11b02c74 call dword ptr [0x11b06000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06000))), 0x11b02c7au);
  /* 11b02c7a pop esi */
  ESI = (pop32());
L_11b02c7b:;
  /* 11b02c7b ret  */
  ESPCHK(0x11b02bdcu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c7c @ 0x11b02c7c (444 bytes, 150 insns) */
void f_11b02c7c(void) {
  FTRACE(0x11b02c7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02c7c push ebp */
  push32((uint32_t)(EBP));
  /* 11b02c7d mov ebp, esp */
  EBP = (ESP);
  /* 11b02c7f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b02c82 push ebx */
  push32((uint32_t)(EBX));
  /* 11b02c83 push esi */
  push32((uint32_t)(ESI));
  /* 11b02c84 push edi */
  push32((uint32_t)(EDI));
  /* 11b02c85 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b02c8a call 0x11b036e1 */
  push32(0x11b02c8fu); f_11b036e1();
  /* 11b02c8f mov esi, eax */
  ESI = (EAX);
  /* 11b02c91 pop ecx */
  ECX = (pop32());
  /* 11b02c92 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b02c94 jne 0x11b02c9e */
  if (!C.zf) goto L_11b02c9e;
  /* 11b02c96 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b02c98 call 0x11b02a06 */
  push32(0x11b02c9du); f_11b02a06();
  /* 11b02c9d pop ecx */
  ECX = (pop32());
L_11b02c9e:;
  /* 11b02c9e mov dword ptr [0x11b07cc0], esi */
  w32((uint32_t)(0x11b07cc0), (ESI));
  /* 11b02ca4 mov dword ptr [0x11b07dc0], 0x20 */
  w32((uint32_t)(0x11b07dc0), (0x20u));
  /* 11b02cae lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11b02cb4:;
  /* 11b02cb4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02cb6 jae 0x11b02cd6 */
  if (!C.cf) goto L_11b02cd6;
  /* 11b02cb8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b02cbc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b02cbf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b02cc3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11b02cc7 mov eax, dword ptr [0x11b07cc0] */
  EAX = (r32((uint32_t)(0x11b07cc0)));
  /* 11b02ccc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02ccf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02cd4 jmp 0x11b02cb4 */
  goto L_11b02cb4;
L_11b02cd6:;
  /* 11b02cd6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11b02cd9 push eax */
  push32((uint32_t)(EAX));
  /* 11b02cda call dword ptr [0x11b0607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0607c))), 0x11b02ce0u);
  /* 11b02ce0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b02ce5 je 0x11b02dbc */
  if (C.zf) goto L_11b02dbc;
  /* 11b02ceb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b02cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02cf0 je 0x11b02dbc */
  if (C.zf) goto L_11b02dbc;
  /* 11b02cf6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11b02cf8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11b02cfb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11b02cfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b02d01 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11b02d06 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02d08 jl 0x11b02d0c */
  if ((C.sf!=C.of)) goto L_11b02d0c;
  /* 11b02d0a mov edi, eax */
  EDI = (EAX);
L_11b02d0c:;
  /* 11b02d0c cmp dword ptr [0x11b07dc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b07dc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02d12 jge 0x11b02d6a */
  if ((C.sf==C.of)) goto L_11b02d6a;
  /* 11b02d14 mov esi, 0x11b07cc4 */
  ESI = (0x11b07cc4u);
L_11b02d19:;
  /* 11b02d19 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b02d1e call 0x11b036e1 */
  push32(0x11b02d23u); f_11b036e1();
  /* 11b02d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02d25 pop ecx */
  ECX = (pop32());
  /* 11b02d26 je 0x11b02d64 */
  if (C.zf) goto L_11b02d64;
  /* 11b02d28 add dword ptr [0x11b07dc0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11b07dc0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11b07dc0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b02d2f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b02d31 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11b02d37:;
  /* 11b02d37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02d39 jae 0x11b02d57 */
  if (!C.cf) goto L_11b02d57;
  /* 11b02d3b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b02d3f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b02d42 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b02d46 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11b02d4a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b02d4c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02d4f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02d55 jmp 0x11b02d37 */
  goto L_11b02d37;
L_11b02d57:;
  /* 11b02d57 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02d5a cmp dword ptr [0x11b07dc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b07dc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02d60 jl 0x11b02d19 */
  if ((C.sf!=C.of)) goto L_11b02d19;
  /* 11b02d62 jmp 0x11b02d6a */
  goto L_11b02d6a;
L_11b02d64:;
  /* 11b02d64 mov edi, dword ptr [0x11b07dc0] */
  EDI = (r32((uint32_t)(0x11b07dc0)));
L_11b02d6a:;
  /* 11b02d6a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b02d6c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b02d6e jle 0x11b02dbc */
  if ((C.zf||C.sf!=C.of)) goto L_11b02dbc;
L_11b02d70:;
  /* 11b02d70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b02d73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b02d75 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02d78 je 0x11b02db2 */
  if (C.zf) goto L_11b02db2;
  /* 11b02d7a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11b02d7c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11b02d7e je 0x11b02db2 */
  if (C.zf) goto L_11b02db2;
  /* 11b02d80 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11b02d82 jne 0x11b02d8f */
  if (!C.zf) goto L_11b02d8f;
  /* 11b02d84 push ecx */
  push32((uint32_t)(ECX));
  /* 11b02d85 call dword ptr [0x11b06080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06080))), 0x11b02d8bu);
  /* 11b02d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02d8d je 0x11b02db2 */
  if (C.zf) goto L_11b02db2;
L_11b02d8f:;
  /* 11b02d8f mov ecx, esi */
  ECX = (ESI);
  /* 11b02d91 mov eax, esi */
  EAX = (ESI);
  /* 11b02d93 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11b02d96 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b02d99 mov ecx, dword ptr [ecx*4 + 0x11b07cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11b07cc0)));
  /* 11b02da0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11b02da3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11b02da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b02da9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11b02dab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b02dad mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11b02daf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11b02db2:;
  /* 11b02db2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b02db6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b02db7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b02db8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02dba jl 0x11b02d70 */
  if ((C.sf!=C.of)) goto L_11b02d70;
L_11b02dbc:;
  /* 11b02dbc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b02dbe:;
  /* 11b02dbe mov ecx, dword ptr [0x11b07cc0] */
  ECX = (r32((uint32_t)(0x11b07cc0)));
  /* 11b02dc4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11b02dc7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02dcb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11b02dce jne 0x11b02e1d */
  if (!C.zf) goto L_11b02e1d;
  /* 11b02dd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b02dd2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11b02dd6 jne 0x11b02ddd */
  if (!C.zf) goto L_11b02ddd;
  /* 11b02dd8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11b02dda pop eax */
  EAX = (pop32());
  /* 11b02ddb jmp 0x11b02de7 */
  goto L_11b02de7;
L_11b02ddd:;
  /* 11b02ddd mov eax, ebx */
  EAX = (EBX);
  /* 11b02ddf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b02de0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b02de2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b02de4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b02de7:;
  /* 11b02de7 push eax */
  push32((uint32_t)(EAX));
  /* 11b02de8 call dword ptr [0x11b06084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06084))), 0x11b02deeu);
  /* 11b02dee mov edi, eax */
  EDI = (EAX);
  /* 11b02df0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02df3 je 0x11b02e0c */
  if (C.zf) goto L_11b02e0c;
  /* 11b02df5 push edi */
  push32((uint32_t)(EDI));
  /* 11b02df6 call dword ptr [0x11b06080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06080))), 0x11b02dfcu);
  /* 11b02dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02dfe je 0x11b02e0c */
  if (C.zf) goto L_11b02e0c;
  /* 11b02e00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b02e05 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b02e07 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e0a jne 0x11b02e12 */
  if (!C.zf) goto L_11b02e12;
L_11b02e0c:;
  /* 11b02e0c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b02e10 jmp 0x11b02e21 */
  goto L_11b02e21;
L_11b02e12:;
  /* 11b02e12 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e15 jne 0x11b02e21 */
  if (!C.zf) goto L_11b02e21;
  /* 11b02e17 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11b02e1b jmp 0x11b02e21 */
  goto L_11b02e21;
L_11b02e1d:;
  /* 11b02e1d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11b02e21:;
  /* 11b02e21 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b02e22 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e25 jl 0x11b02dbe */
  if ((C.sf!=C.of)) goto L_11b02dbe;
  /* 11b02e27 push dword ptr [0x11b07dc0] */
  push32((uint32_t)(r32((uint32_t)(0x11b07dc0))));
  /* 11b02e2d call dword ptr [0x11b0609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0609c))), 0x11b02e33u);
  /* 11b02e33 pop edi */
  EDI = (pop32());
  /* 11b02e34 pop esi */
  ESI = (pop32());
  /* 11b02e35 pop ebx */
  EBX = (pop32());
  /* 11b02e36 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b02e37 ret  */
  ESPCHK(0x11b02c7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e38 @ 0x11b02e38 (84 bytes, 33 insns) */
void f_11b02e38(void) {
  FTRACE(0x11b02e38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02e38 push ebx */
  push32((uint32_t)(EBX));
  /* 11b02e39 push esi */
  push32((uint32_t)(ESI));
  /* 11b02e3a push edi */
  push32((uint32_t)(EDI));
  /* 11b02e3b mov esi, 0x11b07cc0 */
  ESI = (0x11b07cc0u);
L_11b02e40:;
  /* 11b02e40 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b02e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b02e44 je 0x11b02e7d */
  if (C.zf) goto L_11b02e7d;
  /* 11b02e46 mov edi, eax */
  EDI = (EAX);
  /* 11b02e48 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02e4d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e4f jae 0x11b02e72 */
  if (!C.cf) goto L_11b02e72;
  /* 11b02e51 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11b02e54:;
  /* 11b02e54 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e58 je 0x11b02e61 */
  if (C.zf) goto L_11b02e61;
  /* 11b02e5a push ebx */
  push32((uint32_t)(EBX));
  /* 11b02e5b call dword ptr [0x11b06078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06078))), 0x11b02e61u);
L_11b02e61:;
  /* 11b02e61 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b02e63 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02e66 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02e6b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02e6e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e70 jb 0x11b02e54 */
  if (C.cf) goto L_11b02e54;
L_11b02e72:;
  /* 11b02e72 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b02e74 call 0x11b03699 */
  push32(0x11b02e79u); f_11b03699();
  /* 11b02e79 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11b02e7c pop ecx */
  ECX = (pop32());
L_11b02e7d:;
  /* 11b02e7d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02e80 cmp esi, 0x11b07dc0 */
  { uint32_t _a=(ESI),_b=(0x11b07dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e86 jl 0x11b02e40 */
  if ((C.sf!=C.of)) goto L_11b02e40;
  /* 11b02e88 pop edi */
  EDI = (pop32());
  /* 11b02e89 pop esi */
  ESI = (pop32());
  /* 11b02e8a pop ebx */
  EBX = (pop32());
  /* 11b02e8b ret  */
  ESPCHK(0x11b02e38u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e8c @ 0x11b02e8c (185 bytes, 71 insns) */
void f_11b02e8c(void) {
  FTRACE(0x11b02e8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02e8c push ebx */
  push32((uint32_t)(EBX));
  /* 11b02e8d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b02e8f cmp dword ptr [0x11b07dc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b07dc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02e95 push esi */
  push32((uint32_t)(ESI));
  /* 11b02e96 push edi */
  push32((uint32_t)(EDI));
  /* 11b02e97 jne 0x11b02e9e */
  if (!C.zf) goto L_11b02e9e;
  /* 11b02e99 call 0x11b03cb3 */
  push32(0x11b02e9eu); f_11b03cb3();
L_11b02e9e:;
  /* 11b02e9e mov esi, dword ptr [0x11b07870] */
  ESI = (r32((uint32_t)(0x11b07870)));
  /* 11b02ea4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11b02ea6:;
  /* 11b02ea6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b02ea8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b02eaa je 0x11b02ebe */
  if (C.zf) goto L_11b02ebe;
  /* 11b02eac cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b02eae je 0x11b02eb1 */
  if (C.zf) goto L_11b02eb1;
  /* 11b02eb0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b02eb1:;
  /* 11b02eb1 push esi */
  push32((uint32_t)(ESI));
  /* 11b02eb2 call 0x11b03860 */
  push32(0x11b02eb7u); f_11b03860();
  /* 11b02eb7 pop ecx */
  ECX = (pop32());
  /* 11b02eb8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11b02ebc jmp 0x11b02ea6 */
  goto L_11b02ea6;
L_11b02ebe:;
  /* 11b02ebe lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11b02ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11b02ec6 call 0x11b036e1 */
  push32(0x11b02ecbu); f_11b036e1();
  /* 11b02ecb mov esi, eax */
  ESI = (EAX);
  /* 11b02ecd pop ecx */
  ECX = (pop32());
  /* 11b02ece cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02ed0 mov dword ptr [0x11b078a0], esi */
  w32((uint32_t)(0x11b078a0), (ESI));
  /* 11b02ed6 jne 0x11b02ee0 */
  if (!C.zf) goto L_11b02ee0;
  /* 11b02ed8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b02eda call 0x11b02a06 */
  push32(0x11b02edfu); f_11b02a06();
  /* 11b02edf pop ecx */
  ECX = (pop32());
L_11b02ee0:;
  /* 11b02ee0 mov edi, dword ptr [0x11b07870] */
  EDI = (r32((uint32_t)(0x11b07870)));
  /* 11b02ee6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b02ee8 je 0x11b02f23 */
  if (C.zf) goto L_11b02f23;
  /* 11b02eea push ebp */
  push32((uint32_t)(EBP));
L_11b02eeb:;
  /* 11b02eeb push edi */
  push32((uint32_t)(EDI));
  /* 11b02eec call 0x11b03860 */
  push32(0x11b02ef1u); f_11b03860();
  /* 11b02ef1 mov ebp, eax */
  EBP = (EAX);
  /* 11b02ef3 pop ecx */
  ECX = (pop32());
  /* 11b02ef4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11b02ef5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b02ef8 je 0x11b02f1c */
  if (C.zf) goto L_11b02f1c;
  /* 11b02efa push ebp */
  push32((uint32_t)(EBP));
  /* 11b02efb call 0x11b036e1 */
  push32(0x11b02f00u); f_11b036e1();
  /* 11b02f00 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02f02 pop ecx */
  ECX = (pop32());
  /* 11b02f03 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11b02f05 jne 0x11b02f0f */
  if (!C.zf) goto L_11b02f0f;
  /* 11b02f07 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b02f09 call 0x11b02a06 */
  push32(0x11b02f0eu); f_11b02a06();
  /* 11b02f0e pop ecx */
  ECX = (pop32());
L_11b02f0f:;
  /* 11b02f0f push edi */
  push32((uint32_t)(EDI));
  /* 11b02f10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b02f12 call 0x11b03770 */
  push32(0x11b02f17u); f_11b03770();
  /* 11b02f17 pop ecx */
  ECX = (pop32());
  /* 11b02f18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02f1b pop ecx */
  ECX = (pop32());
L_11b02f1c:;
  /* 11b02f1c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02f1e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b02f20 jne 0x11b02eeb */
  if (!C.zf) goto L_11b02eeb;
  /* 11b02f22 pop ebp */
  EBP = (pop32());
L_11b02f23:;
  /* 11b02f23 push dword ptr [0x11b07870] */
  push32((uint32_t)(r32((uint32_t)(0x11b07870))));
  /* 11b02f29 call 0x11b03699 */
  push32(0x11b02f2eu); f_11b03699();
  /* 11b02f2e pop ecx */
  ECX = (pop32());
  /* 11b02f2f mov dword ptr [0x11b07870], ebx */
  w32((uint32_t)(0x11b07870), (EBX));
  /* 11b02f35 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11b02f37 pop edi */
  EDI = (pop32());
  /* 11b02f38 pop esi */
  ESI = (pop32());
  /* 11b02f39 mov dword ptr [0x11b07dc4], 1 */
  w32((uint32_t)(0x11b07dc4), (0x1u));
  /* 11b02f43 pop ebx */
  EBX = (pop32());
  /* 11b02f44 ret  */
  ESPCHK(0x11b02e8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f45 @ 0x11b02f45 (153 bytes, 62 insns) */
void f_11b02f45(void) {
  FTRACE(0x11b02f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02f45 push ebp */
  push32((uint32_t)(EBP));
  /* 11b02f46 mov ebp, esp */
  EBP = (ESP);
  /* 11b02f48 push ecx */
  push32((uint32_t)(ECX));
  /* 11b02f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11b02f4a push ebx */
  push32((uint32_t)(EBX));
  /* 11b02f4b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b02f4d cmp dword ptr [0x11b07dc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b07dc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02f53 push esi */
  push32((uint32_t)(ESI));
  /* 11b02f54 push edi */
  push32((uint32_t)(EDI));
  /* 11b02f55 jne 0x11b02f5c */
  if (!C.zf) goto L_11b02f5c;
  /* 11b02f57 call 0x11b03cb3 */
  push32(0x11b02f5cu); f_11b03cb3();
L_11b02f5c:;
  /* 11b02f5c mov esi, 0x11b078c4 */
  ESI = (0x11b078c4u);
  /* 11b02f61 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b02f66 push esi */
  push32((uint32_t)(ESI));
  /* 11b02f67 push ebx */
  push32((uint32_t)(EBX));
  /* 11b02f68 call dword ptr [0x11b06074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06074))), 0x11b02f6eu);
  /* 11b02f6e mov eax, dword ptr [0x11b07dd8] */
  EAX = (r32((uint32_t)(0x11b07dd8)));
  /* 11b02f73 mov dword ptr [0x11b078b0], esi */
  w32((uint32_t)(0x11b078b0), (ESI));
  /* 11b02f79 mov edi, esi */
  EDI = (ESI);
  /* 11b02f7b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b02f7d je 0x11b02f81 */
  if (C.zf) goto L_11b02f81;
  /* 11b02f7f mov edi, eax */
  EDI = (EAX);
L_11b02f81:;
  /* 11b02f81 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b02f84 push eax */
  push32((uint32_t)(EAX));
  /* 11b02f85 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b02f88 push eax */
  push32((uint32_t)(EAX));
  /* 11b02f89 push ebx */
  push32((uint32_t)(EBX));
  /* 11b02f8a push ebx */
  push32((uint32_t)(EBX));
  /* 11b02f8b push edi */
  push32((uint32_t)(EDI));
  /* 11b02f8c call 0x11b02fde */
  push32(0x11b02f91u); f_11b02fde();
  /* 11b02f91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b02f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b02f97 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11b02f9a push eax */
  push32((uint32_t)(EAX));
  /* 11b02f9b call 0x11b036e1 */
  push32(0x11b02fa0u); f_11b036e1();
  /* 11b02fa0 mov esi, eax */
  ESI = (EAX);
  /* 11b02fa2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02fa5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b02fa7 jne 0x11b02fb1 */
  if (!C.zf) goto L_11b02fb1;
  /* 11b02fa9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b02fab call 0x11b02a06 */
  push32(0x11b02fb0u); f_11b02a06();
  /* 11b02fb0 pop ecx */
  ECX = (pop32());
L_11b02fb1:;
  /* 11b02fb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11b02fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11b02fb5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11b02fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11b02fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b02fbc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11b02fbf push eax */
  push32((uint32_t)(EAX));
  /* 11b02fc0 push esi */
  push32((uint32_t)(ESI));
  /* 11b02fc1 push edi */
  push32((uint32_t)(EDI));
  /* 11b02fc2 call 0x11b02fde */
  push32(0x11b02fc7u); f_11b02fde();
  /* 11b02fc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b02fca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b02fcd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b02fce mov dword ptr [0x11b07898], esi */
  w32((uint32_t)(0x11b07898), (ESI));
  /* 11b02fd4 pop edi */
  EDI = (pop32());
  /* 11b02fd5 pop esi */
  ESI = (pop32());
  /* 11b02fd6 mov dword ptr [0x11b07894], eax */
  w32((uint32_t)(0x11b07894), (EAX));
  /* 11b02fdb pop ebx */
  EBX = (pop32());
  /* 11b02fdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b02fdd ret  */
  ESPCHK(0x11b02f45u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fde @ 0x11b02fde (436 bytes, 187 insns) */
void f_11b02fde(void) {
  FTRACE(0x11b02fdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b02fde push ebp */
  push32((uint32_t)(EBP));
  /* 11b02fdf mov ebp, esp */
  EBP = (ESP);
  /* 11b02fe1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b02fe4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b02fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b02fe8 push esi */
  push32((uint32_t)(ESI));
  /* 11b02fe9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b02fec mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11b02fef push edi */
  push32((uint32_t)(EDI));
  /* 11b02ff0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b02ff3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11b02ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b02ffc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b02ffe je 0x11b03008 */
  if (C.zf) goto L_11b03008;
  /* 11b03000 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11b03002 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03005 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b03008:;
  /* 11b03008 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b0300b jne 0x11b03051 */
  if (!C.zf) goto L_11b03051;
L_11b0300d:;
  /* 11b0300d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b03010 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03011 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03014 je 0x11b0303f */
  if (C.zf) goto L_11b0303f;
  /* 11b03016 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b03018 je 0x11b0303f */
  if (C.zf) goto L_11b0303f;
  /* 11b0301a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11b0301d test byte ptr [edx + 0x11b07ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11b07ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11b03024 je 0x11b03032 */
  if (C.zf) goto L_11b03032;
  /* 11b03026 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b03028 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b0302a je 0x11b03032 */
  if (C.zf) goto L_11b03032;
  /* 11b0302c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b0302e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b03030 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b03031 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b03032:;
  /* 11b03032 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b03034 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03036 je 0x11b0300d */
  if (C.zf) goto L_11b0300d;
  /* 11b03038 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b0303a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b0303c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b0303d jmp 0x11b0300d */
  goto L_11b0300d;
L_11b0303f:;
  /* 11b0303f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b03041 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03043 je 0x11b03049 */
  if (C.zf) goto L_11b03049;
  /* 11b03045 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11b03048 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b03049:;
  /* 11b03049 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b0304c jne 0x11b03094 */
  if (!C.zf) goto L_11b03094;
  /* 11b0304e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0304f jmp 0x11b03094 */
  goto L_11b03094;
L_11b03051:;
  /* 11b03051 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b03053 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03055 je 0x11b0305c */
  if (C.zf) goto L_11b0305c;
  /* 11b03057 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b03059 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b0305b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b0305c:;
  /* 11b0305c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b0305e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0305f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11b03062 test byte ptr [ebx + 0x11b07ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11b07ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11b03069 je 0x11b03077 */
  if (C.zf) goto L_11b03077;
  /* 11b0306b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b0306d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b0306f je 0x11b03076 */
  if (C.zf) goto L_11b03076;
  /* 11b03071 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11b03073 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11b03075 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b03076:;
  /* 11b03076 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b03077:;
  /* 11b03077 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b0307a je 0x11b03085 */
  if (C.zf) goto L_11b03085;
  /* 11b0307c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b0307e je 0x11b03089 */
  if (C.zf) goto L_11b03089;
  /* 11b03080 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03083 jne 0x11b03051 */
  if (!C.zf) goto L_11b03051;
L_11b03085:;
  /* 11b03085 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b03087 jne 0x11b0308c */
  if (!C.zf) goto L_11b0308c;
L_11b03089:;
  /* 11b03089 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b0308a jmp 0x11b03094 */
  goto L_11b03094;
L_11b0308c:;
  /* 11b0308c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b0308e je 0x11b03094 */
  if (C.zf) goto L_11b03094;
  /* 11b03090 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11b03094:;
  /* 11b03094 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11b03098:;
  /* 11b03098 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b0309b je 0x11b03181 */
  if (C.zf) goto L_11b03181;
L_11b030a1:;
  /* 11b030a1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b030a3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b030a6 je 0x11b030ad */
  if (C.zf) goto L_11b030ad;
  /* 11b030a8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b030ab jne 0x11b030b0 */
  if (!C.zf) goto L_11b030b0;
L_11b030ad:;
  /* 11b030ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b030ae jmp 0x11b030a1 */
  goto L_11b030a1;
L_11b030b0:;
  /* 11b030b0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b030b3 je 0x11b03181 */
  if (C.zf) goto L_11b03181;
  /* 11b030b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b030bb je 0x11b030c5 */
  if (C.zf) goto L_11b030c5;
  /* 11b030bd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11b030bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b030c2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b030c5:;
  /* 11b030c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b030c8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11b030ca:;
  /* 11b030ca mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11b030d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b030d3:;
  /* 11b030d3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b030d6 jne 0x11b030dc */
  if (!C.zf) goto L_11b030dc;
  /* 11b030d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b030d9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b030da jmp 0x11b030d3 */
  goto L_11b030d3;
L_11b030dc:;
  /* 11b030dc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b030df jne 0x11b0310d */
  if (!C.zf) goto L_11b0310d;
  /* 11b030e1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11b030e4 jne 0x11b0310b */
  if (!C.zf) goto L_11b0310b;
  /* 11b030e6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b030e8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b030eb je 0x11b030fa */
  if (C.zf) goto L_11b030fa;
  /* 11b030ed cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b030f1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11b030f4 jne 0x11b030fa */
  if (!C.zf) goto L_11b030fa;
  /* 11b030f6 mov eax, edx */
  EAX = (EDX);
  /* 11b030f8 jmp 0x11b030fd */
  goto L_11b030fd;
L_11b030fa:;
  /* 11b030fa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11b030fd:;
  /* 11b030fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b03100 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03102 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03105 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b03108 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11b0310b:;
  /* 11b0310b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11b0310d:;
  /* 11b0310d mov edx, ebx */
  EDX = (EBX);
  /* 11b0310f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b03110 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b03112 je 0x11b03122 */
  if (C.zf) goto L_11b03122;
  /* 11b03114 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11b03115:;
  /* 11b03115 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03117 je 0x11b0311d */
  if (C.zf) goto L_11b0311d;
  /* 11b03119 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11b0311c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b0311d:;
  /* 11b0311d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b0311f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b03120 jne 0x11b03115 */
  if (!C.zf) goto L_11b03115;
L_11b03122:;
  /* 11b03122 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b03124 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b03126 je 0x11b03172 */
  if (C.zf) goto L_11b03172;
  /* 11b03128 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0312c jne 0x11b03138 */
  if (!C.zf) goto L_11b03138;
  /* 11b0312e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03131 je 0x11b03172 */
  if (C.zf) goto L_11b03172;
  /* 11b03133 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03136 je 0x11b03172 */
  if (C.zf) goto L_11b03172;
L_11b03138:;
  /* 11b03138 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0313c je 0x11b0316c */
  if (C.zf) goto L_11b0316c;
  /* 11b0313e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03140 je 0x11b0315b */
  if (C.zf) goto L_11b0315b;
  /* 11b03142 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11b03145 test byte ptr [ebx + 0x11b07ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11b07ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11b0314c je 0x11b03154 */
  if (C.zf) goto L_11b03154;
  /* 11b0314e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b03150 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b03151 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03152 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b03154:;
  /* 11b03154 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11b03156 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11b03158 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b03159 jmp 0x11b0316a */
  goto L_11b0316a;
L_11b0315b:;
  /* 11b0315b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11b0315e test byte ptr [edx + 0x11b07ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11b07ba1)))&(0x4u); fl_logic(_r,8); }
  /* 11b03165 je 0x11b0316a */
  if (C.zf) goto L_11b0316a;
  /* 11b03167 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03168 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b0316a:;
  /* 11b0316a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11b0316c:;
  /* 11b0316c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0316d jmp 0x11b030ca */
  goto L_11b030ca;
L_11b03172:;
  /* 11b03172 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03174 je 0x11b0317a */
  if (C.zf) goto L_11b0317a;
  /* 11b03176 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11b03179 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11b0317a:;
  /* 11b0317a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11b0317c jmp 0x11b03098 */
  goto L_11b03098;
L_11b03181:;
  /* 11b03181 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b03183 je 0x11b03188 */
  if (C.zf) goto L_11b03188;
  /* 11b03185 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11b03188:;
  /* 11b03188 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b0318b pop edi */
  EDI = (pop32());
  /* 11b0318c pop esi */
  ESI = (pop32());
  /* 11b0318d pop ebx */
  EBX = (pop32());
  /* 11b0318e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11b03190 pop ebp */
  EBP = (pop32());
  /* 11b03191 ret  */
  ESPCHK(0x11b02fdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003192 @ 0x11b03192 (306 bytes, 132 insns) */
void f_11b03192(void) {
  FTRACE(0x11b03192u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03192 push ecx */
  push32((uint32_t)(ECX));
  /* 11b03193 push ecx */
  push32((uint32_t)(ECX));
  /* 11b03194 mov eax, dword ptr [0x11b079c8] */
  EAX = (r32((uint32_t)(0x11b079c8)));
  /* 11b03199 push ebx */
  push32((uint32_t)(EBX));
  /* 11b0319a push ebp */
  push32((uint32_t)(EBP));
  /* 11b0319b mov ebp, dword ptr [0x11b06060] */
  EBP = (r32((uint32_t)(0x11b06060)));
  /* 11b031a1 push esi */
  push32((uint32_t)(ESI));
  /* 11b031a2 push edi */
  push32((uint32_t)(EDI));
  /* 11b031a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b031a5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b031a7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b031a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b031ab jne 0x11b031e0 */
  if (!C.zf) goto L_11b031e0;
  /* 11b031ad call ebp */
  call_ind((uint32_t)(EBP), 0x11b031afu);
  /* 11b031af mov esi, eax */
  ESI = (EAX);
  /* 11b031b1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b031b3 je 0x11b031c1 */
  if (C.zf) goto L_11b031c1;
  /* 11b031b5 mov dword ptr [0x11b079c8], 1 */
  w32((uint32_t)(0x11b079c8), (0x1u));
  /* 11b031bf jmp 0x11b031e9 */
  goto L_11b031e9;
L_11b031c1:;
  /* 11b031c1 call dword ptr [0x11b06064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06064))), 0x11b031c7u);
  /* 11b031c7 mov edi, eax */
  EDI = (EAX);
  /* 11b031c9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b031cb je 0x11b032bb */
  if (C.zf) goto L_11b032bb;
  /* 11b031d1 mov dword ptr [0x11b079c8], 2 */
  w32((uint32_t)(0x11b079c8), (0x2u));
  /* 11b031db jmp 0x11b0326f */
  goto L_11b0326f;
L_11b031e0:;
  /* 11b031e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b031e3 jne 0x11b0326a */
  if (!C.zf) goto L_11b0326a;
L_11b031e9:;
  /* 11b031e9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b031eb jne 0x11b031f9 */
  if (!C.zf) goto L_11b031f9;
  /* 11b031ed call ebp */
  call_ind((uint32_t)(EBP), 0x11b031efu);
  /* 11b031ef mov esi, eax */
  ESI = (EAX);
  /* 11b031f1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b031f3 je 0x11b032bb */
  if (C.zf) goto L_11b032bb;
L_11b031f9:;
  /* 11b031f9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b031fc mov eax, esi */
  EAX = (ESI);
  /* 11b031fe je 0x11b0320e */
  if (C.zf) goto L_11b0320e;
L_11b03200:;
  /* 11b03200 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03201 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03202 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b03205 jne 0x11b03200 */
  if (!C.zf) goto L_11b03200;
  /* 11b03207 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03208 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03209 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b0320c jne 0x11b03200 */
  if (!C.zf) goto L_11b03200;
L_11b0320e:;
  /* 11b0320e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03210 mov edi, dword ptr [0x11b06068] */
  EDI = (r32((uint32_t)(0x11b06068)));
  /* 11b03216 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b03218 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03219 push ebx */
  push32((uint32_t)(EBX));
  /* 11b0321a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0321b push ebx */
  push32((uint32_t)(EBX));
  /* 11b0321c push ebx */
  push32((uint32_t)(EBX));
  /* 11b0321d push eax */
  push32((uint32_t)(EAX));
  /* 11b0321e push esi */
  push32((uint32_t)(ESI));
  /* 11b0321f push ebx */
  push32((uint32_t)(EBX));
  /* 11b03220 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03221 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11b03225 call edi */
  call_ind((uint32_t)(EDI), 0x11b03227u);
  /* 11b03227 mov ebp, eax */
  EBP = (EAX);
  /* 11b03229 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0322b je 0x11b0325f */
  if (C.zf) goto L_11b0325f;
  /* 11b0322d push ebp */
  push32((uint32_t)(EBP));
  /* 11b0322e call 0x11b036e1 */
  push32(0x11b03233u); f_11b036e1();
  /* 11b03233 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03235 pop ecx */
  ECX = (pop32());
  /* 11b03236 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11b0323a je 0x11b0325f */
  if (C.zf) goto L_11b0325f;
  /* 11b0323c push ebx */
  push32((uint32_t)(EBX));
  /* 11b0323d push ebx */
  push32((uint32_t)(EBX));
  /* 11b0323e push ebp */
  push32((uint32_t)(EBP));
  /* 11b0323f push eax */
  push32((uint32_t)(EAX));
  /* 11b03240 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11b03244 push esi */
  push32((uint32_t)(ESI));
  /* 11b03245 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03246 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03247 call edi */
  call_ind((uint32_t)(EDI), 0x11b03249u);
  /* 11b03249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0324b jne 0x11b0325b */
  if (!C.zf) goto L_11b0325b;
  /* 11b0324d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11b03251 call 0x11b03699 */
  push32(0x11b03256u); f_11b03699();
  /* 11b03256 pop ecx */
  ECX = (pop32());
  /* 11b03257 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11b0325b:;
  /* 11b0325b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11b0325f:;
  /* 11b0325f push esi */
  push32((uint32_t)(ESI));
  /* 11b03260 call dword ptr [0x11b0606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0606c))), 0x11b03266u);
  /* 11b03266 mov eax, ebx */
  EAX = (EBX);
  /* 11b03268 jmp 0x11b032bd */
  goto L_11b032bd;
L_11b0326a:;
  /* 11b0326a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0326d jne 0x11b032bb */
  if (!C.zf) goto L_11b032bb;
L_11b0326f:;
  /* 11b0326f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03271 jne 0x11b0327f */
  if (!C.zf) goto L_11b0327f;
  /* 11b03273 call dword ptr [0x11b06064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06064))), 0x11b03279u);
  /* 11b03279 mov edi, eax */
  EDI = (EAX);
  /* 11b0327b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0327d je 0x11b032bb */
  if (C.zf) goto L_11b032bb;
L_11b0327f:;
  /* 11b0327f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03281 mov eax, edi */
  EAX = (EDI);
  /* 11b03283 je 0x11b0328f */
  if (C.zf) goto L_11b0328f;
L_11b03285:;
  /* 11b03285 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03286 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03288 jne 0x11b03285 */
  if (!C.zf) goto L_11b03285;
  /* 11b0328a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0328b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b0328d jne 0x11b03285 */
  if (!C.zf) goto L_11b03285;
L_11b0328f:;
  /* 11b0328f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03291 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03292 mov ebp, eax */
  EBP = (EAX);
  /* 11b03294 push ebp */
  push32((uint32_t)(EBP));
  /* 11b03295 call 0x11b036e1 */
  push32(0x11b0329au); f_11b036e1();
  /* 11b0329a mov esi, eax */
  ESI = (EAX);
  /* 11b0329c pop ecx */
  ECX = (pop32());
  /* 11b0329d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0329f jne 0x11b032a5 */
  if (!C.zf) goto L_11b032a5;
  /* 11b032a1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b032a3 jmp 0x11b032b0 */
  goto L_11b032b0;
L_11b032a5:;
  /* 11b032a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11b032a6 push edi */
  push32((uint32_t)(EDI));
  /* 11b032a7 push esi */
  push32((uint32_t)(ESI));
  /* 11b032a8 call 0x11b03cd0 */
  push32(0x11b032adu); f_11b03cd0();
  /* 11b032ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b032b0:;
  /* 11b032b0 push edi */
  push32((uint32_t)(EDI));
  /* 11b032b1 call dword ptr [0x11b06070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06070))), 0x11b032b7u);
  /* 11b032b7 mov eax, esi */
  EAX = (ESI);
  /* 11b032b9 jmp 0x11b032bd */
  goto L_11b032bd;
L_11b032bb:;
  /* 11b032bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b032bd:;
  /* 11b032bd pop edi */
  EDI = (pop32());
  /* 11b032be pop esi */
  ESI = (pop32());
  /* 11b032bf pop ebp */
  EBP = (pop32());
  /* 11b032c0 pop ebx */
  EBX = (pop32());
  /* 11b032c1 pop ecx */
  ECX = (pop32());
  /* 11b032c2 pop ecx */
  ECX = (pop32());
  /* 11b032c3 ret  */
  ESPCHK(0x11b03192u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c4 @ 0x11b032c4 (60 bytes, 20 insns) */
void f_11b032c4(void) {
  FTRACE(0x11b032c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b032c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b032c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b032c8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b032cc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b032d1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b032d4 push eax */
  push32((uint32_t)(EAX));
  /* 11b032d5 call dword ptr [0x11b06058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06058))), 0x11b032dbu);
  /* 11b032db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b032dd mov dword ptr [0x11b07ca8], eax */
  w32((uint32_t)(0x11b07ca8), (EAX));
  /* 11b032e2 je 0x11b032f9 */
  if (C.zf) goto L_11b032f9;
  /* 11b032e4 call 0x11b04005 */
  push32(0x11b032e9u); f_11b04005();
  /* 11b032e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b032eb jne 0x11b032fc */
  if (!C.zf) goto L_11b032fc;
  /* 11b032ed push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b032f3 call dword ptr [0x11b0605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0605c))), 0x11b032f9u);
L_11b032f9:;
  /* 11b032f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b032fb ret  */
  ESPCHK(0x11b032c4u, _esp0);
  ESP += 4; return;
L_11b032fc:;
  /* 11b032fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b032fe pop eax */
  EAX = (pop32());
  /* 11b032ff ret  */
  ESPCHK(0x11b032c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x11b03300 (117 bytes, 38 insns) */
void f_11b03300(void) {
  FTRACE(0x11b03300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03300 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03301 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b03303 cmp dword ptr [0x11b07a80], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b07a80))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03309 push ebp */
  push32((uint32_t)(EBP));
  /* 11b0330a mov ebp, dword ptr [0x11b06050] */
  EBP = (r32((uint32_t)(0x11b06050)));
  /* 11b03310 jle 0x11b03356 */
  if ((C.zf||C.sf!=C.of)) goto L_11b03356;
  /* 11b03312 mov eax, dword ptr [0x11b07a84] */
  EAX = (r32((uint32_t)(0x11b07a84)));
  /* 11b03317 push esi */
  push32((uint32_t)(ESI));
  /* 11b03318 push edi */
  push32((uint32_t)(EDI));
  /* 11b03319 mov edi, dword ptr [0x11b06054] */
  EDI = (r32((uint32_t)(0x11b06054)));
  /* 11b0331f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11b03322:;
  /* 11b03322 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b03327 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b0332c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b0332e call edi */
  call_ind((uint32_t)(EDI), 0x11b03330u);
  /* 11b03330 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b03335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b03337 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b03339 call edi */
  call_ind((uint32_t)(EDI), 0x11b0333bu);
  /* 11b0333b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11b0333e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b03340 push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b03346 call ebp */
  call_ind((uint32_t)(EBP), 0x11b03348u);
  /* 11b03348 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0334b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b0334c cmp ebx, dword ptr [0x11b07a80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b07a80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03352 jl 0x11b03322 */
  if ((C.sf!=C.of)) goto L_11b03322;
  /* 11b03354 pop edi */
  EDI = (pop32());
  /* 11b03355 pop esi */
  ESI = (pop32());
L_11b03356:;
  /* 11b03356 push dword ptr [0x11b07a84] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a84))));
  /* 11b0335c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0335e push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b03364 call ebp */
  call_ind((uint32_t)(EBP), 0x11b03366u);
  /* 11b03366 push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b0336c call dword ptr [0x11b0605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0605c))), 0x11b03372u);
  /* 11b03372 pop ebp */
  EBP = (pop32());
  /* 11b03373 pop ebx */
  EBX = (pop32());
  /* 11b03374 ret  */
  ESPCHK(0x11b03300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003375 @ 0x11b03375 (57 bytes, 18 insns) */
void f_11b03375(void) {
  FTRACE(0x11b03375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03375 mov eax, dword ptr [0x11b07878] */
  EAX = (r32((uint32_t)(0x11b07878)));
  /* 11b0337a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0337d je 0x11b0338c */
  if (C.zf) goto L_11b0338c;
  /* 11b0337f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b03381 jne 0x11b033ad */
  if (!C.zf) goto L_11b033ad;
  /* 11b03383 cmp dword ptr [0x11b0787c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b0787c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0338a jne 0x11b033ad */
  if (!C.zf) goto L_11b033ad;
L_11b0338c:;
  /* 11b0338c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11b03391 call 0x11b033ae */
  push32(0x11b03396u); f_11b033ae();
  /* 11b03396 mov eax, dword ptr [0x11b079cc] */
  EAX = (r32((uint32_t)(0x11b079cc)));
  /* 11b0339b pop ecx */
  ECX = (pop32());
  /* 11b0339c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0339e je 0x11b033a2 */
  if (C.zf) goto L_11b033a2;
  /* 11b033a0 call eax */
  call_ind((uint32_t)(EAX), 0x11b033a2u);
L_11b033a2:;
  /* 11b033a2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b033a7 call 0x11b033ae */
  push32(0x11b033acu); f_11b033ae();
  /* 11b033ac pop ecx */
  ECX = (pop32());
L_11b033ad:;
  /* 11b033ad ret  */
  ESPCHK(0x11b03375u, _esp0);
  ESP += 4; return;
}

/* FUN_100033ae @ 0x11b033ae (339 bytes, 100 insns) */
void f_11b033ae(void) {
  FTRACE(0x11b033aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b033ae push ebp */
  push32((uint32_t)(EBP));
  /* 11b033af mov ebp, esp */
  EBP = (ESP);
  /* 11b033b1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b033b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b033ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b033bc mov eax, 0x11b07378 */
  EAX = (0x11b07378u);
L_11b033c1:;
  /* 11b033c1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b033c3 je 0x11b033d0 */
  if (C.zf) goto L_11b033d0;
  /* 11b033c5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b033c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b033c9 cmp eax, 0x11b07408 */
  { uint32_t _a=(EAX),_b=(0x11b07408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b033ce jl 0x11b033c1 */
  if ((C.sf!=C.of)) goto L_11b033c1;
L_11b033d0:;
  /* 11b033d0 push esi */
  push32((uint32_t)(ESI));
  /* 11b033d1 mov esi, ecx */
  ESI = (ECX);
  /* 11b033d3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11b033d6 cmp edx, dword ptr [esi + 0x11b07378] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11b07378))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b033dc jne 0x11b034fe */
  if (!C.zf) goto L_11b034fe;
  /* 11b033e2 mov eax, dword ptr [0x11b07878] */
  EAX = (r32((uint32_t)(0x11b07878)));
  /* 11b033e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b033ea je 0x11b034d8 */
  if (C.zf) goto L_11b034d8;
  /* 11b033f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b033f2 jne 0x11b03401 */
  if (!C.zf) goto L_11b03401;
  /* 11b033f4 cmp dword ptr [0x11b0787c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b0787c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b033fb je 0x11b034d8 */
  if (C.zf) goto L_11b034d8;
L_11b03401:;
  /* 11b03401 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03407 je 0x11b034fe */
  if (C.zf) goto L_11b034fe;
  /* 11b0340d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b03413 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b03418 push eax */
  push32((uint32_t)(EAX));
  /* 11b03419 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0341b call dword ptr [0x11b06074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06074))), 0x11b03421u);
  /* 11b03421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b03423 jne 0x11b03438 */
  if (!C.zf) goto L_11b03438;
  /* 11b03425 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b0342b push 0x11b06420 */
  push32((uint32_t)(0x11b06420u));
  /* 11b03430 push eax */
  push32((uint32_t)(EAX));
  /* 11b03431 call 0x11b03770 */
  push32(0x11b03436u); f_11b03770();
  /* 11b03436 pop ecx */
  ECX = (pop32());
  /* 11b03437 pop ecx */
  ECX = (pop32());
L_11b03438:;
  /* 11b03438 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b0343e push edi */
  push32((uint32_t)(EDI));
  /* 11b0343f push eax */
  push32((uint32_t)(EAX));
  /* 11b03440 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11b03446 call 0x11b03860 */
  push32(0x11b0344bu); f_11b03860();
  /* 11b0344b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0344c pop ecx */
  ECX = (pop32());
  /* 11b0344d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03450 jbe 0x11b0347b */
  if ((C.cf||C.zf)) goto L_11b0347b;
  /* 11b03452 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b03458 push eax */
  push32((uint32_t)(EAX));
  /* 11b03459 call 0x11b03860 */
  push32(0x11b0345eu); f_11b03860();
  /* 11b0345e mov edi, eax */
  EDI = (EAX);
  /* 11b03460 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11b03466 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03469 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b0346b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0346d push 0x11b0641c */
  push32((uint32_t)(0x11b0641cu));
  /* 11b03472 push edi */
  push32((uint32_t)(EDI));
  /* 11b03473 call 0x11b048e0 */
  push32(0x11b03478u); f_11b048e0();
  /* 11b03478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0347b:;
  /* 11b0347b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b03481 push 0x11b06400 */
  push32((uint32_t)(0x11b06400u));
  /* 11b03486 push eax */
  push32((uint32_t)(EAX));
  /* 11b03487 call 0x11b03770 */
  push32(0x11b0348cu); f_11b03770();
  /* 11b0348c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b03492 push edi */
  push32((uint32_t)(EDI));
  /* 11b03493 push eax */
  push32((uint32_t)(EAX));
  /* 11b03494 call 0x11b03780 */
  push32(0x11b03499u); f_11b03780();
  /* 11b03499 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b0349f push 0x11b063fc */
  push32((uint32_t)(0x11b063fcu));
  /* 11b034a4 push eax */
  push32((uint32_t)(EAX));
  /* 11b034a5 call 0x11b03780 */
  push32(0x11b034aau); f_11b03780();
  /* 11b034aa push dword ptr [esi + 0x11b0737c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11b0737c))));
  /* 11b034b0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b034b6 push eax */
  push32((uint32_t)(EAX));
  /* 11b034b7 call 0x11b03780 */
  push32(0x11b034bcu); f_11b03780();
  /* 11b034bc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11b034c1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11b034c7 push 0x11b063d4 */
  push32((uint32_t)(0x11b063d4u));
  /* 11b034cc push eax */
  push32((uint32_t)(EAX));
  /* 11b034cd call 0x11b0484e */
  push32(0x11b034d2u); f_11b0484e();
  /* 11b034d2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b034d5 pop edi */
  EDI = (pop32());
  /* 11b034d6 jmp 0x11b034fe */
  goto L_11b034fe;
L_11b034d8:;
  /* 11b034d8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b034db lea esi, [esi + 0x11b0737c] */
  ESI = ((uint32_t)(ESI + 0x11b0737c));
  /* 11b034e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b034e3 push eax */
  push32((uint32_t)(EAX));
  /* 11b034e4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b034e6 call 0x11b03860 */
  push32(0x11b034ebu); f_11b03860();
  /* 11b034eb pop ecx */
  ECX = (pop32());
  /* 11b034ec push eax */
  push32((uint32_t)(EAX));
  /* 11b034ed push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b034ef push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b034f1 call dword ptr [0x11b06084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06084))), 0x11b034f7u);
  /* 11b034f7 push eax */
  push32((uint32_t)(EAX));
  /* 11b034f8 call dword ptr [0x11b0604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0604c))), 0x11b034feu);
L_11b034fe:;
  /* 11b034fe pop esi */
  ESI = (pop32());
  /* 11b034ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03500 ret  */
  ESPCHK(0x11b033aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003501 @ 0x11b03501 (41 bytes, 12 insns) */
void f_11b03501(void) {
  FTRACE(0x11b03501u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03501 push esi */
  push32((uint32_t)(ESI));
  /* 11b03502 mov esi, dword ptr [0x11b06048] */
  ESI = (r32((uint32_t)(0x11b06048)));
  /* 11b03508 push dword ptr [0x11b0744c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0744c))));
  /* 11b0350e call esi */
  call_ind((uint32_t)(ESI), 0x11b03510u);
  /* 11b03510 push dword ptr [0x11b0743c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0743c))));
  /* 11b03516 call esi */
  call_ind((uint32_t)(ESI), 0x11b03518u);
  /* 11b03518 push dword ptr [0x11b0742c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0742c))));
  /* 11b0351e call esi */
  call_ind((uint32_t)(ESI), 0x11b03520u);
  /* 11b03520 push dword ptr [0x11b0740c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0740c))));
  /* 11b03526 call esi */
  call_ind((uint32_t)(ESI), 0x11b03528u);
  /* 11b03528 pop esi */
  ESI = (pop32());
  /* 11b03529 ret  */
  ESPCHK(0x11b03501u, _esp0);
  ESP += 4; return;
}

/* FUN_1000352a @ 0x11b0352a (108 bytes, 34 insns) */
void f_11b0352a(void) {
  FTRACE(0x11b0352au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b0352a push esi */
  push32((uint32_t)(ESI));
  /* 11b0352b push edi */
  push32((uint32_t)(EDI));
  /* 11b0352c mov edi, dword ptr [0x11b06078] */
  EDI = (r32((uint32_t)(0x11b06078)));
  /* 11b03532 mov esi, 0x11b07408 */
  ESI = (0x11b07408u);
L_11b03537:;
  /* 11b03537 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b03539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0353b je 0x11b03568 */
  if (C.zf) goto L_11b03568;
  /* 11b0353d cmp esi, 0x11b0744c */
  { uint32_t _a=(ESI),_b=(0x11b0744cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03543 je 0x11b03568 */
  if (C.zf) goto L_11b03568;
  /* 11b03545 cmp esi, 0x11b0743c */
  { uint32_t _a=(ESI),_b=(0x11b0743cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0354b je 0x11b03568 */
  if (C.zf) goto L_11b03568;
  /* 11b0354d cmp esi, 0x11b0742c */
  { uint32_t _a=(ESI),_b=(0x11b0742cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03553 je 0x11b03568 */
  if (C.zf) goto L_11b03568;
  /* 11b03555 cmp esi, 0x11b0740c */
  { uint32_t _a=(ESI),_b=(0x11b0740cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0355b je 0x11b03568 */
  if (C.zf) goto L_11b03568;
  /* 11b0355d push eax */
  push32((uint32_t)(EAX));
  /* 11b0355e call edi */
  call_ind((uint32_t)(EDI), 0x11b03560u);
  /* 11b03560 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b03562 call 0x11b03699 */
  push32(0x11b03567u); f_11b03699();
  /* 11b03567 pop ecx */
  ECX = (pop32());
L_11b03568:;
  /* 11b03568 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0356b cmp esi, 0x11b074c8 */
  { uint32_t _a=(ESI),_b=(0x11b074c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03571 jl 0x11b03537 */
  if ((C.sf!=C.of)) goto L_11b03537;
  /* 11b03573 push dword ptr [0x11b0742c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0742c))));
  /* 11b03579 call edi */
  call_ind((uint32_t)(EDI), 0x11b0357bu);
  /* 11b0357b push dword ptr [0x11b0743c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0743c))));
  /* 11b03581 call edi */
  call_ind((uint32_t)(EDI), 0x11b03583u);
  /* 11b03583 push dword ptr [0x11b0744c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0744c))));
  /* 11b03589 call edi */
  call_ind((uint32_t)(EDI), 0x11b0358bu);
  /* 11b0358b push dword ptr [0x11b0740c] */
  push32((uint32_t)(r32((uint32_t)(0x11b0740c))));
  /* 11b03591 call edi */
  call_ind((uint32_t)(EDI), 0x11b03593u);
  /* 11b03593 pop edi */
  EDI = (pop32());
  /* 11b03594 pop esi */
  ESI = (pop32());
  /* 11b03595 ret  */
  ESPCHK(0x11b0352au, _esp0);
  ESP += 4; return;
}

/* FUN_10003596 @ 0x11b03596 (97 bytes, 37 insns) */
void f_11b03596(void) {
  FTRACE(0x11b03596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03596 push ebp */
  push32((uint32_t)(EBP));
  /* 11b03597 mov ebp, esp */
  EBP = (ESP);
  /* 11b03599 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b0359c push esi */
  push32((uint32_t)(ESI));
  /* 11b0359d cmp dword ptr [eax*4 + 0x11b07408], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11b07408))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b035a5 lea esi, [eax*4 + 0x11b07408] */
  ESI = ((uint32_t)(EAX*4 + 0x11b07408));
  /* 11b035ac jne 0x11b035ec */
  if (!C.zf) goto L_11b035ec;
  /* 11b035ae push edi */
  push32((uint32_t)(EDI));
  /* 11b035af push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b035b1 call 0x11b036e1 */
  push32(0x11b035b6u); f_11b036e1();
  /* 11b035b6 mov edi, eax */
  EDI = (EAX);
  /* 11b035b8 pop ecx */
  ECX = (pop32());
  /* 11b035b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b035bb jne 0x11b035c5 */
  if (!C.zf) goto L_11b035c5;
  /* 11b035bd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b035bf call 0x11b02a06 */
  push32(0x11b035c4u); f_11b02a06();
  /* 11b035c4 pop ecx */
  ECX = (pop32());
L_11b035c5:;
  /* 11b035c5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b035c7 call 0x11b03596 */
  push32(0x11b035ccu); f_11b03596();
  /* 11b035cc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b035cf pop ecx */
  ECX = (pop32());
  /* 11b035d0 push edi */
  push32((uint32_t)(EDI));
  /* 11b035d1 jne 0x11b035dd */
  if (!C.zf) goto L_11b035dd;
  /* 11b035d3 call dword ptr [0x11b06048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06048))), 0x11b035d9u);
  /* 11b035d9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b035db jmp 0x11b035e3 */
  goto L_11b035e3;
L_11b035dd:;
  /* 11b035dd call 0x11b03699 */
  push32(0x11b035e2u); f_11b03699();
  /* 11b035e2 pop ecx */
  ECX = (pop32());
L_11b035e3:;
  /* 11b035e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b035e5 call 0x11b035f7 */
  push32(0x11b035eau); f_11b035f7();
  /* 11b035ea pop ecx */
  ECX = (pop32());
  /* 11b035eb pop edi */
  EDI = (pop32());
L_11b035ec:;
  /* 11b035ec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11b035ee call dword ptr [0x11b06044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06044))), 0x11b035f4u);
  /* 11b035f4 pop esi */
  ESI = (pop32());
  /* 11b035f5 pop ebp */
  EBP = (pop32());
  /* 11b035f6 ret  */
  ESPCHK(0x11b03596u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f7 @ 0x11b035f7 (21 bytes, 7 insns) */
void f_11b035f7(void) {
  FTRACE(0x11b035f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b035f7 push ebp */
  push32((uint32_t)(EBP));
  /* 11b035f8 mov ebp, esp */
  EBP = (ESP);
  /* 11b035fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b035fd push dword ptr [eax*4 + 0x11b07408] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11b07408))));
  /* 11b03604 call dword ptr [0x11b06040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06040))), 0x11b0360au);
  /* 11b0360a pop ebp */
  EBP = (pop32());
  /* 11b0360b ret  */
  ESPCHK(0x11b035f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000360c @ 0x11b0360c (141 bytes, 56 insns) */
void f_11b0360c(void) {
  FTRACE(0x11b0360cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b0360c push ebx */
  push32((uint32_t)(EBX));
  /* 11b0360d push esi */
  push32((uint32_t)(ESI));
  /* 11b0360e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11b03612 push edi */
  push32((uint32_t)(EDI));
  /* 11b03613 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b03618 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0361b mov ebx, esi */
  EBX = (ESI);
  /* 11b0361d ja 0x11b0362c */
  if ((!C.cf&&!C.zf)) goto L_11b0362c;
  /* 11b0361f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03621 jne 0x11b03626 */
  if (!C.zf) goto L_11b03626;
  /* 11b03623 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b03625 pop esi */
  ESI = (pop32());
L_11b03626:;
  /* 11b03626 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03629 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11b0362c:;
  /* 11b0362c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b0362e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03631 ja 0x11b0366d */
  if ((!C.cf&&!C.zf)) goto L_11b0366d;
  /* 11b03633 cmp ebx, dword ptr [0x11b07650] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b07650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03639 ja 0x11b03658 */
  if ((!C.cf&&!C.zf)) goto L_11b03658;
  /* 11b0363b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b0363d call 0x11b03596 */
  push32(0x11b03642u); f_11b03596();
  /* 11b03642 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03643 call 0x11b04399 */
  push32(0x11b03648u); f_11b04399();
  /* 11b03648 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b0364a mov edi, eax */
  EDI = (EAX);
  /* 11b0364c call 0x11b035f7 */
  push32(0x11b03651u); f_11b035f7();
  /* 11b03651 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03654 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b03656 jne 0x11b03683 */
  if (!C.zf) goto L_11b03683;
L_11b03658:;
  /* 11b03658 push esi */
  push32((uint32_t)(ESI));
  /* 11b03659 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b0365b push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b03661 call dword ptr [0x11b0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0603c))), 0x11b03667u);
  /* 11b03667 mov edi, eax */
  EDI = (EAX);
  /* 11b03669 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b0366b jne 0x11b0368f */
  if (!C.zf) goto L_11b0368f;
L_11b0366d:;
  /* 11b0366d cmp dword ptr [0x11b07a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b07a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03674 je 0x11b0368f */
  if (C.zf) goto L_11b0368f;
  /* 11b03676 push esi */
  push32((uint32_t)(ESI));
  /* 11b03677 call 0x11b04a38 */
  push32(0x11b0367cu); f_11b04a38();
  /* 11b0367c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0367e pop ecx */
  ECX = (pop32());
  /* 11b0367f je 0x11b03695 */
  if (C.zf) goto L_11b03695;
  /* 11b03681 jmp 0x11b0362c */
  goto L_11b0362c;
L_11b03683:;
  /* 11b03683 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03684 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b03686 push edi */
  push32((uint32_t)(EDI));
  /* 11b03687 call 0x11b049e0 */
  push32(0x11b0368cu); f_11b049e0();
  /* 11b0368c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b0368f:;
  /* 11b0368f mov eax, edi */
  EAX = (EDI);
L_11b03691:;
  /* 11b03691 pop edi */
  EDI = (pop32());
  /* 11b03692 pop esi */
  ESI = (pop32());
  /* 11b03693 pop ebx */
  EBX = (pop32());
  /* 11b03694 ret  */
  ESPCHK(0x11b0360cu, _esp0);
  ESP += 4; return;
L_11b03695:;
  /* 11b03695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03697 jmp 0x11b03691 */
  goto L_11b03691;
}

/* FUN_10003699 @ 0x11b03699 (72 bytes, 29 insns) */
void f_11b03699(void) {
  FTRACE(0x11b03699u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03699 push esi */
  push32((uint32_t)(ESI));
  /* 11b0369a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b0369e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b036a0 je 0x11b036df */
  if (C.zf) goto L_11b036df;
  /* 11b036a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b036a4 call 0x11b03596 */
  push32(0x11b036a9u); f_11b03596();
  /* 11b036a9 push esi */
  push32((uint32_t)(ESI));
  /* 11b036aa call 0x11b04043 */
  push32(0x11b036afu); f_11b04043();
  /* 11b036af pop ecx */
  ECX = (pop32());
  /* 11b036b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b036b2 pop ecx */
  ECX = (pop32());
  /* 11b036b3 je 0x11b036c8 */
  if (C.zf) goto L_11b036c8;
  /* 11b036b5 push esi */
  push32((uint32_t)(ESI));
  /* 11b036b6 push eax */
  push32((uint32_t)(EAX));
  /* 11b036b7 call 0x11b0406e */
  push32(0x11b036bcu); f_11b0406e();
  /* 11b036bc push 9 */
  push32((uint32_t)(0x9u));
  /* 11b036be call 0x11b035f7 */
  push32(0x11b036c3u); f_11b035f7();
  /* 11b036c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b036c6 pop esi */
  ESI = (pop32());
  /* 11b036c7 ret  */
  ESPCHK(0x11b03699u, _esp0);
  ESP += 4; return;
L_11b036c8:;
  /* 11b036c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b036ca call 0x11b035f7 */
  push32(0x11b036cfu); f_11b035f7();
  /* 11b036cf pop ecx */
  ECX = (pop32());
  /* 11b036d0 push esi */
  push32((uint32_t)(ESI));
  /* 11b036d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b036d3 push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b036d9 call dword ptr [0x11b06050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06050))), 0x11b036dfu);
L_11b036df:;
  /* 11b036df pop esi */
  ESI = (pop32());
  /* 11b036e0 ret  */
  ESPCHK(0x11b03699u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11b036e1 (18 bytes, 6 insns) */
void f_11b036e1(void) {
  FTRACE(0x11b036e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b036e1 push dword ptr [0x11b07a44] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a44))));
  /* 11b036e7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11b036eb call 0x11b036f3 */
  push32(0x11b036f0u); f_11b036f3();
  /* 11b036f0 pop ecx */
  ECX = (pop32());
  /* 11b036f1 pop ecx */
  ECX = (pop32());
  /* 11b036f2 ret  */
  ESPCHK(0x11b036e1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11b036f3 (44 bytes, 16 insns) */
void f_11b036f3(void) {
  FTRACE(0x11b036f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b036f3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b036f8 ja 0x11b0371c */
  if ((!C.cf&&!C.zf)) goto L_11b0371c;
L_11b036fa:;
  /* 11b036fa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b036fe call 0x11b0371f */
  push32(0x11b03703u); f_11b0371f();
  /* 11b03703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b03705 pop ecx */
  ECX = (pop32());
  /* 11b03706 jne 0x11b0371e */
  if (!C.zf) goto L_11b0371e;
  /* 11b03708 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0370c je 0x11b0371e */
  if (C.zf) goto L_11b0371e;
  /* 11b0370e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b03712 call 0x11b04a38 */
  push32(0x11b03717u); f_11b04a38();
  /* 11b03717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b03719 pop ecx */
  ECX = (pop32());
  /* 11b0371a jne 0x11b036fa */
  if (!C.zf) goto L_11b036fa;
L_11b0371c:;
  /* 11b0371c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b0371e:;
  /* 11b0371e ret  */
  ESPCHK(0x11b036f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000371f @ 0x11b0371f (78 bytes, 30 insns) */
void f_11b0371f(void) {
  FTRACE(0x11b0371fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b0371f push esi */
  push32((uint32_t)(ESI));
  /* 11b03720 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b03724 cmp esi, dword ptr [0x11b07650] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11b07650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0372a push edi */
  push32((uint32_t)(EDI));
  /* 11b0372b ja 0x11b0374e */
  if ((!C.cf&&!C.zf)) goto L_11b0374e;
  /* 11b0372d push 9 */
  push32((uint32_t)(0x9u));
  /* 11b0372f call 0x11b03596 */
  push32(0x11b03734u); f_11b03596();
  /* 11b03734 push esi */
  push32((uint32_t)(ESI));
  /* 11b03735 call 0x11b04399 */
  push32(0x11b0373au); f_11b04399();
  /* 11b0373a push 9 */
  push32((uint32_t)(0x9u));
  /* 11b0373c mov edi, eax */
  EDI = (EAX);
  /* 11b0373e call 0x11b035f7 */
  push32(0x11b03743u); f_11b035f7();
  /* 11b03743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03746 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11b03748 je 0x11b0374e */
  if (C.zf) goto L_11b0374e;
  /* 11b0374a mov eax, edi */
  EAX = (EDI);
  /* 11b0374c jmp 0x11b0376a */
  goto L_11b0376a;
L_11b0374e:;
  /* 11b0374e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b03750 jne 0x11b03755 */
  if (!C.zf) goto L_11b03755;
  /* 11b03752 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b03754 pop esi */
  ESI = (pop32());
L_11b03755:;
  /* 11b03755 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03758 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11b0375b push esi */
  push32((uint32_t)(ESI));
  /* 11b0375c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0375e push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b03764 call dword ptr [0x11b0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0603c))), 0x11b0376au);
L_11b0376a:;
  /* 11b0376a pop edi */
  EDI = (pop32());
  /* 11b0376b pop esi */
  ESI = (pop32());
  /* 11b0376c ret  */
  ESPCHK(0x11b0371fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x11b03770 (7 bytes, 3 insns) */
void f_11b03770(void) {
  FTRACE(0x11b03770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03770 push edi */
  push32((uint32_t)(EDI));
  /* 11b03771 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b03775 jmp 0x11b037e1 */
  jmp_ind(0x11b037e1u); return;
}

/* FUN_10003780 @ 0x11b03780 (224 bytes, 84 insns) */
void f_11b03780(void) {
  FTRACE(0x11b03780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03780 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b03784 push edi */
  push32((uint32_t)(EDI));
  /* 11b03785 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b0378b je 0x11b0379c */
  if (C.zf) goto L_11b0379c;
L_11b0378d:;
  /* 11b0378d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b0378f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b03790 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b03792 je 0x11b037cf */
  if (C.zf) goto L_11b037cf;
  /* 11b03794 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b0379a jne 0x11b0378d */
  if (!C.zf) goto L_11b0378d;
L_11b0379c:;
  /* 11b0379c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b0379e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b037a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b037a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b037a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b037aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b037ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b037b2 je 0x11b0379c */
  if (C.zf) goto L_11b0379c;
  /* 11b037b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b037b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b037b9 je 0x11b037de */
  if (C.zf) goto L_11b037de;
  /* 11b037bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b037bd je 0x11b037d9 */
  if (C.zf) goto L_11b037d9;
  /* 11b037bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b037c4 je 0x11b037d4 */
  if (C.zf) goto L_11b037d4;
  /* 11b037c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b037cb je 0x11b037cf */
  if (C.zf) goto L_11b037cf;
  /* 11b037cd jmp 0x11b0379c */
  goto L_11b0379c;
L_11b037cf:;
  /* 11b037cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11b037d2 jmp 0x11b037e1 */
  goto L_11b037e1;
L_11b037d4:;
  /* 11b037d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11b037d7 jmp 0x11b037e1 */
  goto L_11b037e1;
L_11b037d9:;
  /* 11b037d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11b037dc jmp 0x11b037e1 */
  goto L_11b037e1;
L_11b037de:;
  /* 11b037de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11b037e1:;
  /* 11b037e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b037e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b037eb je 0x11b03806 */
  if (C.zf) goto L_11b03806;
L_11b037ed:;
  /* 11b037ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b037ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b037f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b037f2 je 0x11b03858 */
  if (C.zf) goto L_11b03858;
  /* 11b037f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b037f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b037f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b037fd jne 0x11b037ed */
  if (!C.zf) goto L_11b037ed;
  /* 11b037ff jmp 0x11b03806 */
  goto L_11b03806;
L_11b03801:;
  /* 11b03801 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b03803 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b03806:;
  /* 11b03806 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b0380b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b0380d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0380f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b03812 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03814 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b03816 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03819 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b0381e je 0x11b03801 */
  if (C.zf) goto L_11b03801;
  /* 11b03820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b03822 je 0x11b03858 */
  if (C.zf) goto L_11b03858;
  /* 11b03824 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b03826 je 0x11b0384f */
  if (C.zf) goto L_11b0384f;
  /* 11b03828 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b0382e je 0x11b03842 */
  if (C.zf) goto L_11b03842;
  /* 11b03830 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b03836 je 0x11b0383a */
  if (C.zf) goto L_11b0383a;
  /* 11b03838 jmp 0x11b03801 */
  goto L_11b03801;
L_11b0383a:;
  /* 11b0383a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b0383c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b03840 pop edi */
  EDI = (pop32());
  /* 11b03841 ret  */
  ESPCHK(0x11b03780u, _esp0);
  ESP += 4; return;
L_11b03842:;
  /* 11b03842 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b03845 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b03849 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11b0384d pop edi */
  EDI = (pop32());
  /* 11b0384e ret  */
  ESPCHK(0x11b03780u, _esp0);
  ESP += 4; return;
L_11b0384f:;
  /* 11b0384f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b03852 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b03856 pop edi */
  EDI = (pop32());
  /* 11b03857 ret  */
  ESPCHK(0x11b03780u, _esp0);
  ESP += 4; return;
L_11b03858:;
  /* 11b03858 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b0385a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b0385e pop edi */
  EDI = (pop32());
  /* 11b0385f ret  */
  ESPCHK(0x11b03780u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11b03860 (123 bytes, 44 insns) */
void f_11b03860(void) {
  FTRACE(0x11b03860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03860 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b03864 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b0386a je 0x11b03880 */
  if (C.zf) goto L_11b03880;
L_11b0386c:;
  /* 11b0386c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b0386e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b0386f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b03871 je 0x11b038b3 */
  if (C.zf) goto L_11b038b3;
  /* 11b03873 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b03879 jne 0x11b0386c */
  if (!C.zf) goto L_11b0386c;
  /* 11b0387b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b03880:;
  /* 11b03880 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b03882 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b03887 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03889 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b0388c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b0388e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03891 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b03896 je 0x11b03880 */
  if (C.zf) goto L_11b03880;
  /* 11b03898 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b0389b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0389d je 0x11b038d1 */
  if (C.zf) goto L_11b038d1;
  /* 11b0389f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b038a1 je 0x11b038c7 */
  if (C.zf) goto L_11b038c7;
  /* 11b038a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b038a8 je 0x11b038bd */
  if (C.zf) goto L_11b038bd;
  /* 11b038aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b038af je 0x11b038b3 */
  if (C.zf) goto L_11b038b3;
  /* 11b038b1 jmp 0x11b03880 */
  goto L_11b03880;
L_11b038b3:;
  /* 11b038b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11b038b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b038ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b038bc ret  */
  ESPCHK(0x11b03860u, _esp0);
  ESP += 4; return;
L_11b038bd:;
  /* 11b038bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11b038c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b038c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b038c6 ret  */
  ESPCHK(0x11b03860u, _esp0);
  ESP += 4; return;
L_11b038c7:;
  /* 11b038c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11b038ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b038ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b038d0 ret  */
  ESPCHK(0x11b03860u, _esp0);
  ESP += 4; return;
L_11b038d1:;
  /* 11b038d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11b038d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b038d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b038da ret  */
  ESPCHK(0x11b03860u, _esp0);
  ESP += 4; return;
}

/* FUN_100038db @ 0x11b038db (429 bytes, 143 insns) */
void f_11b038db(void) {
  FTRACE(0x11b038dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b038db push ebp */
  push32((uint32_t)(EBP));
  /* 11b038dc mov ebp, esp */
  EBP = (ESP);
  /* 11b038de sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b038e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11b038e2 push esi */
  push32((uint32_t)(ESI));
  /* 11b038e3 push edi */
  push32((uint32_t)(EDI));
  /* 11b038e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b038e6 call 0x11b03596 */
  push32(0x11b038ebu); f_11b03596();
  /* 11b038eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b038ee call 0x11b03a88 */
  push32(0x11b038f3u); f_11b03a88();
  /* 11b038f3 mov ebx, eax */
  EBX = (EAX);
  /* 11b038f5 pop ecx */
  ECX = (pop32());
  /* 11b038f6 cmp ebx, dword ptr [0x11b07a88] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b07a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b038fc pop ecx */
  ECX = (pop32());
  /* 11b038fd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b03900 jne 0x11b03909 */
  if (!C.zf) goto L_11b03909;
L_11b03902:;
  /* 11b03902 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b03904 jmp 0x11b03a79 */
  goto L_11b03a79;
L_11b03909:;
  /* 11b03909 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b0390b je 0x11b03a67 */
  if (C.zf) goto L_11b03a67;
  /* 11b03911 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03913 mov eax, 0x11b07558 */
  EAX = (0x11b07558u);
L_11b03918:;
  /* 11b03918 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0391a je 0x11b03990 */
  if (C.zf) goto L_11b03990;
  /* 11b0391c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0391f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b03920 cmp eax, 0x11b07648 */
  { uint32_t _a=(EAX),_b=(0x11b07648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03925 jl 0x11b03918 */
  if ((C.sf!=C.of)) goto L_11b03918;
  /* 11b03927 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b0392a push eax */
  push32((uint32_t)(EAX));
  /* 11b0392b push ebx */
  push32((uint32_t)(EBX));
  /* 11b0392c call dword ptr [0x11b06038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06038))), 0x11b03932u);
  /* 11b03932 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b03934 pop esi */
  ESI = (pop32());
  /* 11b03935 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03937 jne 0x11b03a5e */
  if (!C.zf) goto L_11b03a5e;
  /* 11b0393d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b0393f and dword ptr [0x11b07ca4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b07ca4)))&(0x0u); w32((uint32_t)(0x11b07ca4), (_r)); fl_logic(_r,32); }
  /* 11b03946 pop ecx */
  ECX = (pop32());
  /* 11b03947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03949 mov edi, 0x11b07ba0 */
  EDI = (0x11b07ba0u);
  /* 11b0394e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03951 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b03953 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b03954 mov dword ptr [0x11b07a88], ebx */
  w32((uint32_t)(0x11b07a88), (EBX));
  /* 11b0395a jbe 0x11b03a4b */
  if ((C.cf||C.zf)) goto L_11b03a4b;
  /* 11b03960 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03964 je 0x11b03a26 */
  if (C.zf) goto L_11b03a26;
  /* 11b0396a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11b0396d:;
  /* 11b0396d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b0396f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b03971 je 0x11b03a26 */
  if (C.zf) goto L_11b03a26;
  /* 11b03977 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11b0397b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11b0397e:;
  /* 11b0397e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03980 ja 0x11b03a1a */
  if ((!C.cf&&!C.zf)) goto L_11b03a1a;
  /* 11b03986 or byte ptr [eax + 0x11b07ba1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(0x4u); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b0398d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b0398e jmp 0x11b0397e */
  goto L_11b0397e;
L_11b03990:;
  /* 11b03990 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b03994 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b03996 pop ecx */
  ECX = (pop32());
  /* 11b03997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03999 mov edi, 0x11b07ba0 */
  EDI = (0x11b07ba0u);
  /* 11b0399e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11b039a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b039a3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b039a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b039a7 lea ebx, [esi + 0x11b07568] */
  EBX = ((uint32_t)(ESI + 0x11b07568));
L_11b039ad:;
  /* 11b039ad cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b039b0 mov ecx, ebx */
  ECX = (EBX);
  /* 11b039b2 je 0x11b039e0 */
  if (C.zf) goto L_11b039e0;
L_11b039b4:;
  /* 11b039b4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b039b7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b039b9 je 0x11b039e0 */
  if (C.zf) goto L_11b039e0;
  /* 11b039bb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11b039be movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11b039c1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b039c3 ja 0x11b039d9 */
  if ((!C.cf&&!C.zf)) goto L_11b039d9;
  /* 11b039c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b039c8 mov dl, byte ptr [edx + 0x11b07550] */
  DL = (r8((uint32_t)(EDX + 0x11b07550)));
L_11b039ce:;
  /* 11b039ce or byte ptr [eax + 0x11b07ba1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(DL); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b039d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b039d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b039d7 jbe 0x11b039ce */
  if ((C.cf||C.zf)) goto L_11b039ce;
L_11b039d9:;
  /* 11b039d9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b039da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b039db cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b039de jne 0x11b039b4 */
  if (!C.zf) goto L_11b039b4;
L_11b039e0:;
  /* 11b039e0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b039e3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b039e6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b039ea jb 0x11b039ad */
  if (C.cf) goto L_11b039ad;
  /* 11b039ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b039ef mov dword ptr [0x11b07a9c], 1 */
  w32((uint32_t)(0x11b07a9c), (0x1u));
  /* 11b039f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b039fa mov dword ptr [0x11b07a88], eax */
  w32((uint32_t)(0x11b07a88), (EAX));
  /* 11b039ff call 0x11b03ad2 */
  push32(0x11b03a04u); f_11b03ad2();
  /* 11b03a04 lea esi, [esi + 0x11b0755c] */
  ESI = ((uint32_t)(ESI + 0x11b0755c));
  /* 11b03a0a mov edi, 0x11b07a90 */
  EDI = (0x11b07a90u);
  /* 11b03a0f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b03a10 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b03a11 pop ecx */
  ECX = (pop32());
  /* 11b03a12 mov dword ptr [0x11b07ca4], eax */
  w32((uint32_t)(0x11b07ca4), (EAX));
  /* 11b03a17 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11b03a18 jmp 0x11b03a6c */
  goto L_11b03a6c;
L_11b03a1a:;
  /* 11b03a1a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b03a1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b03a1c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b03a20 jne 0x11b0396d */
  if (!C.zf) goto L_11b0396d;
L_11b03a26:;
  /* 11b03a26 mov eax, esi */
  EAX = (ESI);
L_11b03a28:;
  /* 11b03a28 or byte ptr [eax + 0x11b07ba1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(0x8u); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b03a2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03a30 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03a35 jb 0x11b03a28 */
  if (C.cf) goto L_11b03a28;
  /* 11b03a37 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03a38 call 0x11b03ad2 */
  push32(0x11b03a3du); f_11b03ad2();
  /* 11b03a3d pop ecx */
  ECX = (pop32());
  /* 11b03a3e mov dword ptr [0x11b07ca4], eax */
  w32((uint32_t)(0x11b07ca4), (EAX));
  /* 11b03a43 mov dword ptr [0x11b07a9c], esi */
  w32((uint32_t)(0x11b07a9c), (ESI));
  /* 11b03a49 jmp 0x11b03a52 */
  goto L_11b03a52;
L_11b03a4b:;
  /* 11b03a4b and dword ptr [0x11b07a9c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b07a9c)))&(0x0u); w32((uint32_t)(0x11b07a9c), (_r)); fl_logic(_r,32); }
L_11b03a52:;
  /* 11b03a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03a54 mov edi, 0x11b07a90 */
  EDI = (0x11b07a90u);
  /* 11b03a59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b03a5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b03a5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b03a5c jmp 0x11b03a6c */
  goto L_11b03a6c;
L_11b03a5e:;
  /* 11b03a5e cmp dword ptr [0x11b07a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b07a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03a65 je 0x11b03a76 */
  if (C.zf) goto L_11b03a76;
L_11b03a67:;
  /* 11b03a67 call 0x11b03b05 */
  push32(0x11b03a6cu); f_11b03b05();
L_11b03a6c:;
  /* 11b03a6c call 0x11b03b2e */
  push32(0x11b03a71u); f_11b03b2e();
  /* 11b03a71 jmp 0x11b03902 */
  goto L_11b03902;
L_11b03a76:;
  /* 11b03a76 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11b03a79:;
  /* 11b03a79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b03a7b call 0x11b035f7 */
  push32(0x11b03a80u); f_11b035f7();
  /* 11b03a80 pop ecx */
  ECX = (pop32());
  /* 11b03a81 mov eax, esi */
  EAX = (ESI);
  /* 11b03a83 pop edi */
  EDI = (pop32());
  /* 11b03a84 pop esi */
  ESI = (pop32());
  /* 11b03a85 pop ebx */
  EBX = (pop32());
  /* 11b03a86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03a87 ret  */
  ESPCHK(0x11b038dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003a88 @ 0x11b03a88 (74 bytes, 15 insns) */
void f_11b03a88(void) {
  FTRACE(0x11b03a88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03a88 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b03a8c and dword ptr [0x11b07a30], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b07a30)))&(0x0u); w32((uint32_t)(0x11b07a30), (_r)); fl_logic(_r,32); }
  /* 11b03a93 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03a96 jne 0x11b03aa8 */
  if (!C.zf) goto L_11b03aa8;
  /* 11b03a98 mov dword ptr [0x11b07a30], 1 */
  w32((uint32_t)(0x11b07a30), (0x1u));
  /* 11b03aa2 jmp dword ptr [0x11b06030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b06030)))); return;
L_11b03aa8:;
  /* 11b03aa8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03aab jne 0x11b03abd */
  if (!C.zf) goto L_11b03abd;
  /* 11b03aad mov dword ptr [0x11b07a30], 1 */
  w32((uint32_t)(0x11b07a30), (0x1u));
  /* 11b03ab7 jmp dword ptr [0x11b06034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b06034)))); return;
L_11b03abd:;
  /* 11b03abd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03ac0 jne 0x11b03ad1 */
  if (!C.zf) goto L_11b03ad1;
  /* 11b03ac2 mov eax, dword ptr [0x11b07a60] */
  EAX = (r32((uint32_t)(0x11b07a60)));
  /* 11b03ac7 mov dword ptr [0x11b07a30], 1 */
  w32((uint32_t)(0x11b07a30), (0x1u));
L_11b03ad1:;
  /* 11b03ad1 ret  */
  ESPCHK(0x11b03a88u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ad2 @ 0x11b03ad2 (51 bytes, 19 insns) */
void f_11b03ad2(void) {
  FTRACE(0x11b03ad2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03ad2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b03ad6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03adb je 0x11b03aff */
  if (C.zf) goto L_11b03aff;
  /* 11b03add sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03ae0 je 0x11b03af9 */
  if (C.zf) goto L_11b03af9;
  /* 11b03ae2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03ae5 je 0x11b03af3 */
  if (C.zf) goto L_11b03af3;
  /* 11b03ae7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b03ae8 je 0x11b03aed */
  if (C.zf) goto L_11b03aed;
  /* 11b03aea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03aec ret  */
  ESPCHK(0x11b03ad2u, _esp0);
  ESP += 4; return;
L_11b03aed:;
  /* 11b03aed mov eax, 0x404 */
  EAX = (0x404u);
  /* 11b03af2 ret  */
  ESPCHK(0x11b03ad2u, _esp0);
  ESP += 4; return;
L_11b03af3:;
  /* 11b03af3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11b03af8 ret  */
  ESPCHK(0x11b03ad2u, _esp0);
  ESP += 4; return;
L_11b03af9:;
  /* 11b03af9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11b03afe ret  */
  ESPCHK(0x11b03ad2u, _esp0);
  ESP += 4; return;
L_11b03aff:;
  /* 11b03aff mov eax, 0x411 */
  EAX = (0x411u);
  /* 11b03b04 ret  */
  ESPCHK(0x11b03ad2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b05 @ 0x11b03b05 (41 bytes, 17 insns) */
void f_11b03b05(void) {
  FTRACE(0x11b03b05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03b05 push edi */
  push32((uint32_t)(EDI));
  /* 11b03b06 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b03b08 pop ecx */
  ECX = (pop32());
  /* 11b03b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03b0b mov edi, 0x11b07ba0 */
  EDI = (0x11b07ba0u);
  /* 11b03b10 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b03b12 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b03b13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03b15 mov edi, 0x11b07a90 */
  EDI = (0x11b07a90u);
  /* 11b03b1a mov dword ptr [0x11b07a88], eax */
  w32((uint32_t)(0x11b07a88), (EAX));
  /* 11b03b1f mov dword ptr [0x11b07a9c], eax */
  w32((uint32_t)(0x11b07a9c), (EAX));
  /* 11b03b24 mov dword ptr [0x11b07ca4], eax */
  w32((uint32_t)(0x11b07ca4), (EAX));
  /* 11b03b29 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b03b2a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b03b2b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11b03b2c pop edi */
  EDI = (pop32());
  /* 11b03b2d ret  */
  ESPCHK(0x11b03b05u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b2e @ 0x11b03b2e (389 bytes, 124 insns) */
void f_11b03b2e(void) {
  FTRACE(0x11b03b2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03b2e push ebp */
  push32((uint32_t)(EBP));
  /* 11b03b2f mov ebp, esp */
  EBP = (ESP);
  /* 11b03b31 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03b37 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b03b3a push esi */
  push32((uint32_t)(ESI));
  /* 11b03b3b push eax */
  push32((uint32_t)(EAX));
  /* 11b03b3c push dword ptr [0x11b07a88] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a88))));
  /* 11b03b42 call dword ptr [0x11b06038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06038))), 0x11b03b48u);
  /* 11b03b48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03b4b jne 0x11b03c67 */
  if (!C.zf) goto L_11b03c67;
  /* 11b03b51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03b53 mov esi, 0x100 */
  ESI = (0x100u);
L_11b03b58:;
  /* 11b03b58 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11b03b5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03b60 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03b62 jb 0x11b03b58 */
  if (C.cf) goto L_11b03b58;
  /* 11b03b64 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11b03b67 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11b03b6e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b03b70 je 0x11b03ba9 */
  if (C.zf) goto L_11b03ba9;
  /* 11b03b72 push ebx */
  push32((uint32_t)(EBX));
  /* 11b03b73 push edi */
  push32((uint32_t)(EDI));
  /* 11b03b74 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11b03b77:;
  /* 11b03b77 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11b03b7a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11b03b7d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03b7f ja 0x11b03b9e */
  if ((!C.cf&&!C.zf)) goto L_11b03b9e;
  /* 11b03b81 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03b83 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11b03b8a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b03b8b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11b03b90 mov ebx, ecx */
  EBX = (ECX);
  /* 11b03b92 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03b95 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b03b97 mov ecx, ebx */
  ECX = (EBX);
  /* 11b03b99 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b03b9c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11b03b9e:;
  /* 11b03b9e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b03b9f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b03ba0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11b03ba3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b03ba5 jne 0x11b03b77 */
  if (!C.zf) goto L_11b03b77;
  /* 11b03ba7 pop edi */
  EDI = (pop32());
  /* 11b03ba8 pop ebx */
  EBX = (pop32());
L_11b03ba9:;
  /* 11b03ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b03bab lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11b03bb1 push dword ptr [0x11b07ca4] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca4))));
  /* 11b03bb7 push dword ptr [0x11b07a88] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a88))));
  /* 11b03bbd push eax */
  push32((uint32_t)(EAX));
  /* 11b03bbe lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b03bc4 push esi */
  push32((uint32_t)(ESI));
  /* 11b03bc5 push eax */
  push32((uint32_t)(EAX));
  /* 11b03bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b03bc8 call 0x11b04ca2 */
  push32(0x11b03bcdu); f_11b04ca2();
  /* 11b03bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b03bcf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11b03bd5 push dword ptr [0x11b07a88] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a88))));
  /* 11b03bdb push esi */
  push32((uint32_t)(ESI));
  /* 11b03bdc push eax */
  push32((uint32_t)(EAX));
  /* 11b03bdd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b03be3 push esi */
  push32((uint32_t)(ESI));
  /* 11b03be4 push eax */
  push32((uint32_t)(EAX));
  /* 11b03be5 push esi */
  push32((uint32_t)(ESI));
  /* 11b03be6 push dword ptr [0x11b07ca4] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca4))));
  /* 11b03bec call 0x11b04a53 */
  push32(0x11b03bf1u); f_11b04a53();
  /* 11b03bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b03bf3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11b03bf9 push dword ptr [0x11b07a88] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a88))));
  /* 11b03bff push esi */
  push32((uint32_t)(ESI));
  /* 11b03c00 push eax */
  push32((uint32_t)(EAX));
  /* 11b03c01 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11b03c07 push esi */
  push32((uint32_t)(ESI));
  /* 11b03c08 push eax */
  push32((uint32_t)(EAX));
  /* 11b03c09 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11b03c0e push dword ptr [0x11b07ca4] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca4))));
  /* 11b03c14 call 0x11b04a53 */
  push32(0x11b03c19u); f_11b04a53();
  /* 11b03c19 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03c1e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11b03c24:;
  /* 11b03c24 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b03c27 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11b03c2a je 0x11b03c42 */
  if (C.zf) goto L_11b03c42;
  /* 11b03c2c or byte ptr [eax + 0x11b07ba1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(0x10u); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b03c33 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11b03c3a:;
  /* 11b03c3a mov byte ptr [eax + 0x11b07aa0], dl */
  w8((uint32_t)(EAX + 0x11b07aa0), (DL));
  /* 11b03c40 jmp 0x11b03c5e */
  goto L_11b03c5e;
L_11b03c42:;
  /* 11b03c42 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11b03c45 je 0x11b03c57 */
  if (C.zf) goto L_11b03c57;
  /* 11b03c47 or byte ptr [eax + 0x11b07ba1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(0x20u); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b03c4e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11b03c55 jmp 0x11b03c3a */
  goto L_11b03c3a;
L_11b03c57:;
  /* 11b03c57 and byte ptr [eax + 0x11b07aa0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07aa0)))&(0x0u); w8((uint32_t)(EAX + 0x11b07aa0), (_r)); fl_logic(_r,8); }
L_11b03c5e:;
  /* 11b03c5e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03c5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b03c60 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b03c61 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03c63 jb 0x11b03c24 */
  if (C.cf) goto L_11b03c24;
  /* 11b03c65 jmp 0x11b03cb0 */
  goto L_11b03cb0;
L_11b03c67:;
  /* 11b03c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b03c69 mov esi, 0x100 */
  ESI = (0x100u);
L_11b03c6e:;
  /* 11b03c6e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03c71 jb 0x11b03c8c */
  if (C.cf) goto L_11b03c8c;
  /* 11b03c73 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03c76 ja 0x11b03c8c */
  if ((!C.cf&&!C.zf)) goto L_11b03c8c;
  /* 11b03c78 or byte ptr [eax + 0x11b07ba1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(0x10u); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b03c7f mov cl, al */
  CL = (AL);
  /* 11b03c81 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11b03c84:;
  /* 11b03c84 mov byte ptr [eax + 0x11b07aa0], cl */
  w8((uint32_t)(EAX + 0x11b07aa0), (CL));
  /* 11b03c8a jmp 0x11b03cab */
  goto L_11b03cab;
L_11b03c8c:;
  /* 11b03c8c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03c8f jb 0x11b03ca4 */
  if (C.cf) goto L_11b03ca4;
  /* 11b03c91 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03c94 ja 0x11b03ca4 */
  if ((!C.cf&&!C.zf)) goto L_11b03ca4;
  /* 11b03c96 or byte ptr [eax + 0x11b07ba1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07ba1)))|(0x20u); w8((uint32_t)(EAX + 0x11b07ba1), (_r)); fl_logic(_r,8); }
  /* 11b03c9d mov cl, al */
  CL = (AL);
  /* 11b03c9f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b03ca2 jmp 0x11b03c84 */
  goto L_11b03c84;
L_11b03ca4:;
  /* 11b03ca4 and byte ptr [eax + 0x11b07aa0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11b07aa0)))&(0x0u); w8((uint32_t)(EAX + 0x11b07aa0), (_r)); fl_logic(_r,8); }
L_11b03cab:;
  /* 11b03cab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b03cac cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03cae jb 0x11b03c6e */
  if (C.cf) goto L_11b03c6e;
L_11b03cb0:;
  /* 11b03cb0 pop esi */
  ESI = (pop32());
  /* 11b03cb1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03cb2 ret  */
  ESPCHK(0x11b03b2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb3 @ 0x11b03cb3 (28 bytes, 7 insns) */
void f_11b03cb3(void) {
  FTRACE(0x11b03cb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03cb3 cmp dword ptr [0x11b07dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b07dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03cba jne 0x11b03cce */
  if (!C.zf) goto L_11b03cce;
  /* 11b03cbc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11b03cbe call 0x11b038db */
  push32(0x11b03cc3u); f_11b038db();
  /* 11b03cc3 pop ecx */
  ECX = (pop32());
  /* 11b03cc4 mov dword ptr [0x11b07dc8], 1 */
  w32((uint32_t)(0x11b07dc8), (0x1u));
L_11b03cce:;
  /* 11b03cce ret  */
  ESPCHK(0x11b03cb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x11b03cd0 (664 bytes, 267 insns) [15 switch table(s)] */
void f_11b03cd0(void) {
  FTRACE(0x11b03cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b03cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b03cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b03cd3 push edi */
  push32((uint32_t)(EDI));
  /* 11b03cd4 push esi */
  push32((uint32_t)(ESI));
  /* 11b03cd5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b03cd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b03cdb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03cde mov eax, ecx */
  EAX = (ECX);
  /* 11b03ce0 mov edx, ecx */
  EDX = (ECX);
  /* 11b03ce2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03ce4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03ce6 jbe 0x11b03cf0 */
  if ((C.cf||C.zf)) goto L_11b03cf0;
  /* 11b03ce8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03cea jb 0x11b03e68 */
  if (C.cf) goto L_11b03e68;
L_11b03cf0:;
  /* 11b03cf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b03cf6 jne 0x11b03d0c */
  if (!C.zf) goto L_11b03d0c;
  /* 11b03cf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03cfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b03cfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03d01 jb 0x11b03d2c */
  if (C.cf) goto L_11b03d2c;
  /* 11b03d03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03d05 jmp dword ptr [edx*4 + 0x11b03e18] */
  switch (EDX) {
    case 0: goto L_11b03e28;
    case 1: goto L_11b03e30;
    case 2: goto L_11b03e3c;
    case 3: goto L_11b03e50;
    default: x86_unimpl("switch@0x11b03d05 out of table"); return;
  }
L_11b03d0c:;
  /* 11b03d0c mov eax, edi */
  EAX = (EDI);
  /* 11b03d0e mov edx, 3 */
  EDX = (0x3u);
  /* 11b03d13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03d16 jb 0x11b03d24 */
  if (C.cf) goto L_11b03d24;
  /* 11b03d18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b03d1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03d1d jmp dword ptr [eax*4 + 0x11b03d30] */
  switch (EAX) {
    case 1: goto L_11b03d40;
    case 2: goto L_11b03d6c;
    case 3: goto L_11b03d90;
    default: x86_unimpl("switch@0x11b03d1d out of table"); return;
  }
L_11b03d24:;
  /* 11b03d24 jmp dword ptr [ecx*4 + 0x11b03e28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b03e28)))); return;
  /* 11b03d2b nop  */
  /* nop */
L_11b03d2c:;
  /* 11b03d2c jmp dword ptr [ecx*4 + 0x11b03dac] */
  switch (ECX) {
    case 0: goto L_11b03e0f;
    case 1: goto L_11b03dfc;
    case 2: goto L_11b03df4;
    case 3: goto L_11b03dec;
    case 4: goto L_11b03de4;
    case 5: goto L_11b03ddc;
    case 6: goto L_11b03dd4;
    case 7: goto L_11b03dcc;
    default: x86_unimpl("switch@0x11b03d2c out of table"); return;
  }
  /* 11b03d33 nop  */
  /* nop */
L_11b03d40:;
  /* 11b03d40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03d42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b03d44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b03d46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b03d49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b03d4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b03d4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03d52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b03d55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03d58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03d5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03d5e jb 0x11b03d2c */
  if (C.cf) goto L_11b03d2c;
  /* 11b03d60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03d62 jmp dword ptr [edx*4 + 0x11b03e18] */
  switch (EDX) {
    case 0: goto L_11b03e28;
    case 1: goto L_11b03e30;
    case 2: goto L_11b03e3c;
    case 3: goto L_11b03e50;
    default: x86_unimpl("switch@0x11b03d62 out of table"); return;
  }
  /* 11b03d69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b03d6c:;
  /* 11b03d6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03d6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b03d70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b03d72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b03d75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03d78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b03d7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03d7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03d81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03d84 jb 0x11b03d2c */
  if (C.cf) goto L_11b03d2c;
  /* 11b03d86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03d88 jmp dword ptr [edx*4 + 0x11b03e18] */
  switch (EDX) {
    case 0: goto L_11b03e28;
    case 1: goto L_11b03e30;
    case 2: goto L_11b03e3c;
    case 3: goto L_11b03e50;
    default: x86_unimpl("switch@0x11b03d88 out of table"); return;
  }
  /* 11b03d8f nop  */
  /* nop */
L_11b03d90:;
  /* 11b03d90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03d92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b03d94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b03d96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b03d97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03d9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b03d9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03d9e jb 0x11b03d2c */
  if (C.cf) goto L_11b03d2c;
  /* 11b03da0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03da2 jmp dword ptr [edx*4 + 0x11b03e18] */
  switch (EDX) {
    case 0: goto L_11b03e28;
    case 1: goto L_11b03e30;
    case 2: goto L_11b03e3c;
    case 3: goto L_11b03e50;
    default: x86_unimpl("switch@0x11b03da2 out of table"); return;
  }
  /* 11b03da9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b03dcc:;
  /* 11b03dcc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b03dd0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b03dd4:;
  /* 11b03dd4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b03dd8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b03ddc:;
  /* 11b03ddc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b03de0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b03de4:;
  /* 11b03de4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b03de8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b03dec:;
  /* 11b03dec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b03df0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b03df4:;
  /* 11b03df4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b03df8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b03dfc:;
  /* 11b03dfc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b03e00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b03e04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b03e0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03e0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b03e0f:;
  /* 11b03e0f jmp dword ptr [edx*4 + 0x11b03e18] */
  switch (EDX) {
    case 0: goto L_11b03e28;
    case 1: goto L_11b03e30;
    case 2: goto L_11b03e3c;
    case 3: goto L_11b03e50;
    default: x86_unimpl("switch@0x11b03e0f out of table"); return;
  }
  /* 11b03e16 mov edi, edi */
  EDI = (EDI);
L_11b03e28:;
  /* 11b03e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03e2b pop esi */
  ESI = (pop32());
  /* 11b03e2c pop edi */
  EDI = (pop32());
  /* 11b03e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03e2e ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03e2f nop  */
  /* nop */
L_11b03e30:;
  /* 11b03e30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b03e32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b03e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03e37 pop esi */
  ESI = (pop32());
  /* 11b03e38 pop edi */
  EDI = (pop32());
  /* 11b03e39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03e3a ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03e3b nop  */
  /* nop */
L_11b03e3c:;
  /* 11b03e3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b03e3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b03e40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b03e43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b03e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03e49 pop esi */
  ESI = (pop32());
  /* 11b03e4a pop edi */
  EDI = (pop32());
  /* 11b03e4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03e4c ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03e4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b03e50:;
  /* 11b03e50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b03e52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b03e54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b03e57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b03e5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b03e5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b03e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03e63 pop esi */
  ESI = (pop32());
  /* 11b03e64 pop edi */
  EDI = (pop32());
  /* 11b03e65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03e66 ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03e67 nop  */
  /* nop */
L_11b03e68:;
  /* 11b03e68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b03e6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b03e70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b03e76 jne 0x11b03e9c */
  if (!C.zf) goto L_11b03e9c;
  /* 11b03e78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03e7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b03e7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03e81 jb 0x11b03e90 */
  if (C.cf) goto L_11b03e90;
  /* 11b03e83 std  */
  C.df=1;
  /* 11b03e84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03e86 cld  */
  C.df=0;
  /* 11b03e87 jmp dword ptr [edx*4 + 0x11b03fb0] */
  switch (EDX) {
    case 0: goto L_11b03fc0;
    case 1: goto L_11b03fc8;
    case 2: goto L_11b03fd8;
    case 3: goto L_11b03fec;
    default: x86_unimpl("switch@0x11b03e87 out of table"); return;
  }
  /* 11b03e8e mov edi, edi */
  EDI = (EDI);
L_11b03e90:;
  /* 11b03e90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b03e92 jmp dword ptr [ecx*4 + 0x11b03f60] */
  switch (ECX) {
    case 0: goto L_11b03fa7;
    default: x86_unimpl("switch@0x11b03e92 out of table"); return;
  }
  /* 11b03e99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b03e9c:;
  /* 11b03e9c mov eax, edi */
  EAX = (EDI);
  /* 11b03e9e mov edx, 3 */
  EDX = (0x3u);
  /* 11b03ea3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03ea6 jb 0x11b03eb4 */
  if (C.cf) goto L_11b03eb4;
  /* 11b03ea8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b03eab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03ead jmp dword ptr [eax*4 + 0x11b03eb8] */
  switch (EAX) {
    case 1: goto L_11b03ec8;
    case 2: goto L_11b03ee8;
    case 3: goto L_11b03f10;
    default: x86_unimpl("switch@0x11b03ead out of table"); return;
  }
L_11b03eb4:;
  /* 11b03eb4 jmp dword ptr [ecx*4 + 0x11b03fb0] */
  switch (ECX) {
    case 0: goto L_11b03fc0;
    case 1: goto L_11b03fc8;
    case 2: goto L_11b03fd8;
    case 3: goto L_11b03fec;
    default: x86_unimpl("switch@0x11b03eb4 out of table"); return;
  }
  /* 11b03ebb nop  */
  /* nop */
L_11b03ec8:;
  /* 11b03ec8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b03ecb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03ecd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b03ed0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b03ed1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03ed4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b03ed5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03ed8 jb 0x11b03e90 */
  if (C.cf) goto L_11b03e90;
  /* 11b03eda std  */
  C.df=1;
  /* 11b03edb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03edd cld  */
  C.df=0;
  /* 11b03ede jmp dword ptr [edx*4 + 0x11b03fb0] */
  switch (EDX) {
    case 0: goto L_11b03fc0;
    case 1: goto L_11b03fc8;
    case 2: goto L_11b03fd8;
    case 3: goto L_11b03fec;
    default: x86_unimpl("switch@0x11b03ede out of table"); return;
  }
  /* 11b03ee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b03ee8:;
  /* 11b03ee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b03eeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03eed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b03ef0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b03ef3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03ef6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b03ef9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03efc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03eff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03f02 jb 0x11b03e90 */
  if (C.cf) goto L_11b03e90;
  /* 11b03f04 std  */
  C.df=1;
  /* 11b03f05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03f07 cld  */
  C.df=0;
  /* 11b03f08 jmp dword ptr [edx*4 + 0x11b03fb0] */
  switch (EDX) {
    case 0: goto L_11b03fc0;
    case 1: goto L_11b03fc8;
    case 2: goto L_11b03fd8;
    case 3: goto L_11b03fec;
    default: x86_unimpl("switch@0x11b03f08 out of table"); return;
  }
  /* 11b03f0f nop  */
  /* nop */
L_11b03f10:;
  /* 11b03f10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b03f13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b03f15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b03f18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b03f1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b03f1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b03f21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b03f24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b03f27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03f2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b03f2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b03f30 jb 0x11b03e90 */
  if (C.cf) goto L_11b03e90;
  /* 11b03f36 std  */
  C.df=1;
  /* 11b03f37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b03f39 cld  */
  C.df=0;
  /* 11b03f3a jmp dword ptr [edx*4 + 0x11b03fb0] */
  switch (EDX) {
    case 0: goto L_11b03fc0;
    case 1: goto L_11b03fc8;
    case 2: goto L_11b03fd8;
    case 3: goto L_11b03fec;
    default: x86_unimpl("switch@0x11b03f3a out of table"); return;
  }
  /* 11b03f41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b03f44 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11b03f46 mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f48 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11b03f48");
  /* 11b03f49 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11b03f4a mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f4c je 0x11b03f8d */
  if (C.zf) goto L_11b03f8d;
  /* 11b03f4e mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f50 jl 0x11b03f91 */
  if ((C.sf!=C.of)) goto L_11b03f91;
  /* 11b03f52 mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f54 test byte ptr [edi], bh */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(C.b.b.h); fl_logic(_r,8); }
  /* 11b03f56 mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f59 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11b03f5a mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f5c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11b03f5d aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11b03f5e mov al, 0x11 */
  AL = (0x11u);
  /* 11b03f64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b03f68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b03f6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b03f70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b03f74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b03f78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b03f7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b03f80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b03f84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b03f88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b03f8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b03f90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b03f94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b03f98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b03f9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b03fa3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b03fa5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b03fa7:;
  /* 11b03fa7 jmp dword ptr [edx*4 + 0x11b03fb0] */
  switch (EDX) {
    case 0: goto L_11b03fc0;
    case 1: goto L_11b03fc8;
    case 2: goto L_11b03fd8;
    case 3: goto L_11b03fec;
    default: x86_unimpl("switch@0x11b03fa7 out of table"); return;
  }
  /* 11b03fae mov edi, edi */
  EDI = (EDI);
L_11b03fc0:;
  /* 11b03fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03fc3 pop esi */
  ESI = (pop32());
  /* 11b03fc4 pop edi */
  EDI = (pop32());
  /* 11b03fc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03fc6 ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03fc7 nop  */
  /* nop */
L_11b03fc8:;
  /* 11b03fc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b03fcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b03fce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03fd1 pop esi */
  ESI = (pop32());
  /* 11b03fd2 pop edi */
  EDI = (pop32());
  /* 11b03fd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03fd4 ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03fd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b03fd8:;
  /* 11b03fd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b03fdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b03fde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b03fe1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b03fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b03fe7 pop esi */
  ESI = (pop32());
  /* 11b03fe8 pop edi */
  EDI = (pop32());
  /* 11b03fe9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b03fea ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
  /* 11b03feb nop  */
  /* nop */
L_11b03fec:;
  /* 11b03fec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b03fef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b03ff2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b03ff5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b03ff8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b03ffb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b03ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04001 pop esi */
  ESI = (pop32());
  /* 11b04002 pop edi */
  EDI = (pop32());
  /* 11b04003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04004 ret  */
  ESPCHK(0x11b03cd0u, _esp0);
  ESP += 4; return;
L_11b03f8d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11b03f8d (unresolved jump table)"); return;
L_11b03f91: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11b03f91 (unresolved jump table)"); return;
}

/* FUN_10004005 @ 0x11b04005 (62 bytes, 15 insns) */
void f_11b04005(void) {
  FTRACE(0x11b04005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04005 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11b0400a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0400c push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b04012 call dword ptr [0x11b0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0603c))), 0x11b04018u);
  /* 11b04018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0401a mov dword ptr [0x11b07a84], eax */
  w32((uint32_t)(0x11b07a84), (EAX));
  /* 11b0401f jne 0x11b04022 */
  if (!C.zf) goto L_11b04022;
  /* 11b04021 ret  */
  ESPCHK(0x11b04005u, _esp0);
  ESP += 4; return;
L_11b04022:;
  /* 11b04022 and dword ptr [0x11b07a7c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b07a7c)))&(0x0u); w32((uint32_t)(0x11b07a7c), (_r)); fl_logic(_r,32); }
  /* 11b04029 and dword ptr [0x11b07a80], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b07a80)))&(0x0u); w32((uint32_t)(0x11b07a80), (_r)); fl_logic(_r,32); }
  /* 11b04030 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04032 mov dword ptr [0x11b07a78], eax */
  w32((uint32_t)(0x11b07a78), (EAX));
  /* 11b04037 mov dword ptr [0x11b07a70], 0x10 */
  w32((uint32_t)(0x11b07a70), (0x10u));
  /* 11b04041 pop eax */
  EAX = (pop32());
  /* 11b04042 ret  */
  ESPCHK(0x11b04005u, _esp0);
  ESP += 4; return;
}

/* FUN_10004043 @ 0x11b04043 (43 bytes, 14 insns) */
void f_11b04043(void) {
  FTRACE(0x11b04043u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04043 mov eax, dword ptr [0x11b07a80] */
  EAX = (r32((uint32_t)(0x11b07a80)));
  /* 11b04048 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11b0404b mov eax, dword ptr [0x11b07a84] */
  EAX = (r32((uint32_t)(0x11b07a84)));
  /* 11b04050 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11b04053:;
  /* 11b04053 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04055 jae 0x11b0406b */
  if (!C.cf) goto L_11b0406b;
  /* 11b04057 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b0405b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0405e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04064 jb 0x11b0406d */
  if (C.cf) goto L_11b0406d;
  /* 11b04066 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04069 jmp 0x11b04053 */
  goto L_11b04053;
L_11b0406b:;
  /* 11b0406b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b0406d:;
  /* 11b0406d ret  */
  ESPCHK(0x11b04043u, _esp0);
  ESP += 4; return;
}

/* FUN_1000406e @ 0x11b0406e (811 bytes, 264 insns) */
void f_11b0406e(void) {
  FTRACE(0x11b0406eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b0406e push ebp */
  push32((uint32_t)(EBP));
  /* 11b0406f mov ebp, esp */
  EBP = (ESP);
  /* 11b04071 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04074 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b04077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b0407a push ebx */
  push32((uint32_t)(EBX));
  /* 11b0407b push esi */
  push32((uint32_t)(ESI));
  /* 11b0407c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b0407f mov esi, edx */
  ESI = (EDX);
  /* 11b04081 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04084 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11b04087 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0408a push edi */
  push32((uint32_t)(EDI));
  /* 11b0408b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11b0408e mov ecx, esi */
  ECX = (ESI);
  /* 11b04090 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11b04093 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b04099 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b0409a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b0409d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b040a4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11b040a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b040aa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11b040ad test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11b040b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b040b3 jne 0x11b04134 */
  if (!C.zf) goto L_11b04134;
  /* 11b040b5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b040b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b040ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b040bb pop edi */
  EDI = (pop32());
  /* 11b040bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b040bf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b040c1 jbe 0x11b040c6 */
  if ((C.cf||C.zf)) goto L_11b040c6;
  /* 11b040c3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11b040c6:;
  /* 11b040c6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11b040ca cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b040ce jne 0x11b04118 */
  if (!C.zf) goto L_11b04118;
  /* 11b040d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b040d3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b040d6 jae 0x11b040f4 */
  if (!C.cf) goto L_11b040f4;
  /* 11b040d8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b040dd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b040df lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11b040e3 not edi */
  EDI = (~(EDI));
  /* 11b040e5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b040e9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b040eb jne 0x11b04118 */
  if (!C.zf) goto L_11b04118;
  /* 11b040ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b040f0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b040f2 jmp 0x11b04118 */
  goto L_11b04118;
L_11b040f4:;
  /* 11b040f4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b040f7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b040fc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b040fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b04101 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11b04105 not edi */
  EDI = (~(EDI));
  /* 11b04107 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b0410e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b04110 jne 0x11b04118 */
  if (!C.zf) goto L_11b04118;
  /* 11b04112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04115 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b04118:;
  /* 11b04118 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11b0411c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11b04120 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11b04123 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11b04127 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11b0412b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0412e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11b04131 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11b04134:;
  /* 11b04134 mov edi, ebx */
  EDI = (EBX);
  /* 11b04136 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11b04139 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b0413a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0413d jbe 0x11b04142 */
  if ((C.cf||C.zf)) goto L_11b04142;
  /* 11b0413f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b04141 pop edi */
  EDI = (pop32());
L_11b04142:;
  /* 11b04142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b04145 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b04148 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b0414b jne 0x11b041f1 */
  if (!C.zf) goto L_11b041f1;
  /* 11b04151 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04154 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b04157 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b0415a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b0415c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b0415f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b04160 pop edx */
  EDX = (pop32());
  /* 11b04161 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04163 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b04166 jbe 0x11b0416d */
  if ((C.cf||C.zf)) goto L_11b0416d;
  /* 11b04168 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11b0416b mov ecx, edx */
  ECX = (EDX);
L_11b0416d:;
  /* 11b0416d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04170 mov edi, ebx */
  EDI = (EBX);
  /* 11b04172 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11b04175 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11b04178 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b04179 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0417b jbe 0x11b0417f */
  if ((C.cf||C.zf)) goto L_11b0417f;
  /* 11b0417d mov edi, edx */
  EDI = (EDX);
L_11b0417f:;
  /* 11b0417f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04181 je 0x11b041ee */
  if (C.zf) goto L_11b041ee;
  /* 11b04183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b04186 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b04189 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0418c jne 0x11b041d6 */
  if (!C.zf) goto L_11b041d6;
  /* 11b0418e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b04191 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04194 jae 0x11b041b2 */
  if (!C.cf) goto L_11b041b2;
  /* 11b04196 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b0419b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b0419d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11b041a1 not edx */
  EDX = (~(EDX));
  /* 11b041a3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b041a7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b041a9 jne 0x11b041d6 */
  if (!C.zf) goto L_11b041d6;
  /* 11b041ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b041ae and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b041b0 jmp 0x11b041d6 */
  goto L_11b041d6;
L_11b041b2:;
  /* 11b041b2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b041b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b041ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b041bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b041bf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11b041c3 not edx */
  EDX = (~(EDX));
  /* 11b041c5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b041cc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11b041ce jne 0x11b041d6 */
  if (!C.zf) goto L_11b041d6;
  /* 11b041d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b041d3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b041d6:;
  /* 11b041d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b041d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b041dc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b041df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b041e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b041e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b041e8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b041eb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11b041ee:;
  /* 11b041ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11b041f1:;
  /* 11b041f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b041f5 jne 0x11b04200 */
  if (!C.zf) goto L_11b04200;
  /* 11b041f7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b041fa je 0x11b04289 */
  if (C.zf) goto L_11b04289;
L_11b04200:;
  /* 11b04200 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b04203 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11b04206 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b04209 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b0420c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b0420f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11b04212 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b04215 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b04218 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b0421b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b0421e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b04221 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04224 jne 0x11b04289 */
  if (!C.zf) goto L_11b04289;
  /* 11b04226 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11b0422a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0422d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11b04230 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b04232 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11b04236 jae 0x11b0425d */
  if (!C.cf) goto L_11b0425d;
  /* 11b04238 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b0423c jne 0x11b0424c */
  if (!C.zf) goto L_11b0424c;
  /* 11b0423e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b04243 mov ecx, edi */
  ECX = (EDI);
  /* 11b04245 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b04247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b0424a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11b0424c:;
  /* 11b0424c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b04251 mov ecx, edi */
  ECX = (EDI);
  /* 11b04253 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b04255 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11b04259 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b0425b jmp 0x11b04286 */
  goto L_11b04286;
L_11b0425d:;
  /* 11b0425d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b04261 jne 0x11b04273 */
  if (!C.zf) goto L_11b04273;
  /* 11b04263 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b04266 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b0426b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b0426d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04270 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11b04273:;
  /* 11b04273 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b04276 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b0427b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b0427d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11b04284 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11b04286:;
  /* 11b04286 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11b04289:;
  /* 11b04289 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b0428c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11b0428e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11b04292 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11b04294 jne 0x11b04394 */
  if (!C.zf) goto L_11b04394;
  /* 11b0429a mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b0429f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b042a1 je 0x11b04386 */
  if (C.zf) goto L_11b04386;
  /* 11b042a7 mov ecx, dword ptr [0x11b07a74] */
  ECX = (r32((uint32_t)(0x11b07a74)));
  /* 11b042ad mov edi, dword ptr [0x11b06054] */
  EDI = (r32((uint32_t)(0x11b06054)));
  /* 11b042b3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11b042b6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b042b9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11b042be push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b042c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b042c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b042c5 call edi */
  call_ind((uint32_t)(EDI), 0x11b042c7u);
  /* 11b042c7 mov ecx, dword ptr [0x11b07a74] */
  ECX = (r32((uint32_t)(0x11b07a74)));
  /* 11b042cd mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b042d2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b042d7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b042d9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b042dc mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b042e1 mov ecx, dword ptr [0x11b07a74] */
  ECX = (r32((uint32_t)(0x11b07a74)));
  /* 11b042e7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b042ea and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11b042f2 mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b042f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b042fa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11b042fd mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b04302 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b04305 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b04309 jne 0x11b04314 */
  if (!C.zf) goto L_11b04314;
  /* 11b0430b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b0430f mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
L_11b04314:;
  /* 11b04314 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04318 jne 0x11b04386 */
  if (!C.zf) goto L_11b04386;
  /* 11b0431a push ebx */
  push32((uint32_t)(EBX));
  /* 11b0431b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0431d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11b04320 call edi */
  call_ind((uint32_t)(EDI), 0x11b04322u);
  /* 11b04322 mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b04327 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11b0432a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b0432c push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b04332 call dword ptr [0x11b06050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06050))), 0x11b04338u);
  /* 11b04338 mov eax, dword ptr [0x11b07a80] */
  EAX = (r32((uint32_t)(0x11b07a80)));
  /* 11b0433d mov edx, dword ptr [0x11b07a84] */
  EDX = (r32((uint32_t)(0x11b07a84)));
  /* 11b04343 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b04346 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b04349 mov ecx, eax */
  ECX = (EAX);
  /* 11b0434b mov eax, dword ptr [0x11b07a7c] */
  EAX = (r32((uint32_t)(0x11b07a7c)));
  /* 11b04350 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04352 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11b04356 push ecx */
  push32((uint32_t)(ECX));
  /* 11b04357 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11b0435a push ecx */
  push32((uint32_t)(ECX));
  /* 11b0435b push eax */
  push32((uint32_t)(EAX));
  /* 11b0435c call 0x11b04df0 */
  push32(0x11b04361u); f_11b04df0();
  /* 11b04361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04364 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04367 dec dword ptr [0x11b07a80] */
  { uint32_t _r=(r32((uint32_t)(0x11b07a80)))-1; w32((uint32_t)(0x11b07a80), (_r)); fl_dec(_r,32); }
  /* 11b0436d cmp eax, dword ptr [0x11b07a7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b07a7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04373 jbe 0x11b04378 */
  if ((C.cf||C.zf)) goto L_11b04378;
  /* 11b04375 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11b04378:;
  /* 11b04378 mov ecx, dword ptr [0x11b07a84] */
  ECX = (r32((uint32_t)(0x11b07a84)));
  /* 11b0437e mov dword ptr [0x11b07a78], ecx */
  w32((uint32_t)(0x11b07a78), (ECX));
  /* 11b04384 jmp 0x11b04389 */
  goto L_11b04389;
L_11b04386:;
  /* 11b04386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11b04389:;
  /* 11b04389 mov dword ptr [0x11b07a7c], eax */
  w32((uint32_t)(0x11b07a7c), (EAX));
  /* 11b0438e mov dword ptr [0x11b07a74], esi */
  w32((uint32_t)(0x11b07a74), (ESI));
L_11b04394:;
  /* 11b04394 pop edi */
  EDI = (pop32());
  /* 11b04395 pop esi */
  ESI = (pop32());
  /* 11b04396 pop ebx */
  EBX = (pop32());
  /* 11b04397 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04398 ret  */
  ESPCHK(0x11b0406eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004399 @ 0x11b04399 (777 bytes, 275 insns) */
void f_11b04399(void) {
  FTRACE(0x11b04399u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04399 push ebp */
  push32((uint32_t)(EBP));
  /* 11b0439a mov ebp, esp */
  EBP = (ESP);
  /* 11b0439c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0439f mov eax, dword ptr [0x11b07a80] */
  EAX = (r32((uint32_t)(0x11b07a80)));
  /* 11b043a4 mov edx, dword ptr [0x11b07a84] */
  EDX = (r32((uint32_t)(0x11b07a84)));
  /* 11b043aa push ebx */
  push32((uint32_t)(EBX));
  /* 11b043ab push esi */
  push32((uint32_t)(ESI));
  /* 11b043ac lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b043af push edi */
  push32((uint32_t)(EDI));
  /* 11b043b0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11b043b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b043b6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b043b9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11b043bc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b043bf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b043c2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b043c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b043c6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b043c9 jge 0x11b043d9 */
  if ((C.sf==C.of)) goto L_11b043d9;
  /* 11b043cb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11b043ce shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b043d0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b043d4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11b043d7 jmp 0x11b043e9 */
  goto L_11b043e9;
L_11b043d9:;
  /* 11b043d9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b043dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b043df xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11b043e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b043e3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11b043e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b043e9:;
  /* 11b043e9 mov eax, dword ptr [0x11b07a78] */
  EAX = (r32((uint32_t)(0x11b07a78)));
  /* 11b043ee mov ebx, eax */
  EBX = (EAX);
  /* 11b043f0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b043f2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b043f5 jae 0x11b04410 */
  if (!C.cf) goto L_11b04410;
L_11b043f7:;
  /* 11b043f7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b043fa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11b043fc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b043ff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b04401 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b04403 jne 0x11b04410 */
  if (!C.zf) goto L_11b04410;
  /* 11b04405 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04408 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0440b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b0440e jb 0x11b043f7 */
  if (C.cf) goto L_11b043f7;
L_11b04410:;
  /* 11b04410 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04413 jne 0x11b0448e */
  if (!C.zf) goto L_11b0448e;
  /* 11b04415 mov ebx, edx */
  EBX = (EDX);
L_11b04417:;
  /* 11b04417 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04419 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b0441c jae 0x11b04433 */
  if (!C.cf) goto L_11b04433;
  /* 11b0441e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11b04421 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11b04423 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b04426 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b04428 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b0442a jne 0x11b04431 */
  if (!C.zf) goto L_11b04431;
  /* 11b0442c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0442f jmp 0x11b04417 */
  goto L_11b04417;
L_11b04431:;
  /* 11b04431 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b04433:;
  /* 11b04433 jne 0x11b0448e */
  if (!C.zf) goto L_11b0448e;
L_11b04435:;
  /* 11b04435 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04438 jae 0x11b0444b */
  if (!C.cf) goto L_11b0444b;
  /* 11b0443a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0443e jne 0x11b04448 */
  if (!C.zf) goto L_11b04448;
  /* 11b04440 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04443 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b04446 jmp 0x11b04435 */
  goto L_11b04435;
L_11b04448:;
  /* 11b04448 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b0444b:;
  /* 11b0444b jne 0x11b04473 */
  if (!C.zf) goto L_11b04473;
  /* 11b0444d mov ebx, edx */
  EBX = (EDX);
L_11b0444f:;
  /* 11b0444f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04451 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b04454 jae 0x11b04463 */
  if (!C.cf) goto L_11b04463;
  /* 11b04456 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0445a jne 0x11b04461 */
  if (!C.zf) goto L_11b04461;
  /* 11b0445c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0445f jmp 0x11b0444f */
  goto L_11b0444f;
L_11b04461:;
  /* 11b04461 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11b04463:;
  /* 11b04463 jne 0x11b04473 */
  if (!C.zf) goto L_11b04473;
  /* 11b04465 call 0x11b046a2 */
  push32(0x11b0446au); f_11b046a2();
  /* 11b0446a mov ebx, eax */
  EBX = (EAX);
  /* 11b0446c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b0446e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11b04471 je 0x11b04487 */
  if (C.zf) goto L_11b04487;
L_11b04473:;
  /* 11b04473 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04474 call 0x11b04753 */
  push32(0x11b04479u); f_11b04753();
  /* 11b04479 pop ecx */
  ECX = (pop32());
  /* 11b0447a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b0447d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b0447f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b04482 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04485 jne 0x11b0448e */
  if (!C.zf) goto L_11b0448e;
L_11b04487:;
  /* 11b04487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b04489 jmp 0x11b0469d */
  goto L_11b0469d;
L_11b0448e:;
  /* 11b0448e mov dword ptr [0x11b07a78], ebx */
  w32((uint32_t)(0x11b07a78), (EBX));
  /* 11b04494 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11b04497 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b04499 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0449c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b0449f je 0x11b044b5 */
  if (C.zf) goto L_11b044b5;
  /* 11b044a1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11b044a8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11b044ac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b044af and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11b044b1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11b044b3 jne 0x11b044ec */
  if (!C.zf) goto L_11b044ec;
L_11b044b5:;
  /* 11b044b5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11b044bb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11b044be and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b044c1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11b044c4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b044c8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11b044cb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11b044cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b044d0 jne 0x11b044e9 */
  if (!C.zf) goto L_11b044e9;
L_11b044d2:;
  /* 11b044d2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11b044d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11b044db and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b044de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b044e1 mov edi, esi */
  EDI = (ESI);
  /* 11b044e3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11b044e5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11b044e7 je 0x11b044d2 */
  if (C.zf) goto L_11b044d2;
L_11b044e9:;
  /* 11b044e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11b044ec:;
  /* 11b044ec mov ecx, edx */
  ECX = (EDX);
  /* 11b044ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b044f0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b044f6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b044fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b04500 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11b04504 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11b04506 jne 0x11b04515 */
  if (!C.zf) goto L_11b04515;
  /* 11b04508 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11b0450f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b04511 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11b04514 pop edi */
  EDI = (pop32());
L_11b04515:;
  /* 11b04515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b04517 jl 0x11b0451e */
  if ((C.sf!=C.of)) goto L_11b0451e;
  /* 11b04519 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b0451b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b0451c jmp 0x11b04515 */
  goto L_11b04515;
L_11b0451e:;
  /* 11b0451e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b04521 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11b04525 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b04527 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0452a mov esi, ecx */
  ESI = (ECX);
  /* 11b0452c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b0452f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11b04532 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b04533 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04536 jle 0x11b0453b */
  if ((C.zf||C.sf!=C.of)) goto L_11b0453b;
  /* 11b04538 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b0453a pop esi */
  ESI = (pop32());
L_11b0453b:;
  /* 11b0453b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0453d je 0x11b04650 */
  if (C.zf) goto L_11b04650;
  /* 11b04543 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b04546 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04549 jne 0x11b045ac */
  if (!C.zf) goto L_11b045ac;
  /* 11b0454b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0454e jge 0x11b0457b */
  if ((C.sf==C.of)) goto L_11b0457b;
  /* 11b04550 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b04555 mov ecx, edi */
  ECX = (EDI);
  /* 11b04557 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b04559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b0455c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11b04560 not ebx */
  EBX = (~(EBX));
  /* 11b04562 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11b04565 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11b04569 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11b0456d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11b0456f jne 0x11b045a9 */
  if (!C.zf) goto L_11b045a9;
  /* 11b04571 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04574 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b04577 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11b04579 jmp 0x11b045ac */
  goto L_11b045ac;
L_11b0457b:;
  /* 11b0457b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11b0457e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11b04583 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11b04585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b04588 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11b0458c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11b04593 not ebx */
  EBX = (~(EBX));
  /* 11b04595 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11b04597 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11b04599 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11b0459c jne 0x11b045a9 */
  if (!C.zf) goto L_11b045a9;
  /* 11b0459e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b045a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b045a4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11b045a7 jmp 0x11b045ac */
  goto L_11b045ac;
L_11b045a9:;
  /* 11b045a9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11b045ac:;
  /* 11b045ac mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b045af mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11b045b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b045b6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11b045b9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b045bc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11b045bf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11b045c2 je 0x11b0465c */
  if (C.zf) goto L_11b0465c;
  /* 11b045c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b045cb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11b045cf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11b045d2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11b045d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b045d8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b045db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b045de mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b045e1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b045e4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b045e7 jne 0x11b0464d */
  if (!C.zf) goto L_11b0464d;
  /* 11b045e9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11b045ed cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b045f0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11b045f3 jge 0x11b0461e */
  if ((C.sf==C.of)) goto L_11b0461e;
  /* 11b045f5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b045f7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b045fb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b045ff jne 0x11b0460c */
  if (!C.zf) goto L_11b0460c;
  /* 11b04601 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b04606 mov ecx, esi */
  ECX = (ESI);
  /* 11b04608 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b0460a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11b0460c:;
  /* 11b0460c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b04611 mov ecx, esi */
  ECX = (ESI);
  /* 11b04613 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b04615 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b04618 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b0461c jmp 0x11b0464d */
  goto L_11b0464d;
L_11b0461e:;
  /* 11b0461e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b04620 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b04624 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11b04628 jne 0x11b04637 */
  if (!C.zf) goto L_11b04637;
  /* 11b0462a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b0462d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11b04632 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11b04634 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11b04637:;
  /* 11b04637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b0463a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11b04641 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11b04644 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11b04649 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11b0464b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11b0464d:;
  /* 11b0464d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11b04650:;
  /* 11b04650 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b04652 je 0x11b0465f */
  if (C.zf) goto L_11b0465f;
  /* 11b04654 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b04656 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11b0465a jmp 0x11b0465f */
  goto L_11b0465f;
L_11b0465c:;
  /* 11b0465c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11b0465f:;
  /* 11b0465f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11b04662 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04664 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11b04667 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b04669 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11b0466d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11b04670 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11b04672 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b04674 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11b04677 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b04679 jne 0x11b04695 */
  if (!C.zf) goto L_11b04695;
  /* 11b0467b cmp ebx, dword ptr [0x11b07a7c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11b07a7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04681 jne 0x11b04695 */
  if (!C.zf) goto L_11b04695;
  /* 11b04683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b04686 cmp ecx, dword ptr [0x11b07a74] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b07a74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0468c jne 0x11b04695 */
  if (!C.zf) goto L_11b04695;
  /* 11b0468e and dword ptr [0x11b07a7c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11b07a7c)))&(0x0u); w32((uint32_t)(0x11b07a7c), (_r)); fl_logic(_r,32); }
L_11b04695:;
  /* 11b04695 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b04698 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b0469a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11b0469d:;
  /* 11b0469d pop edi */
  EDI = (pop32());
  /* 11b0469e pop esi */
  ESI = (pop32());
  /* 11b0469f pop ebx */
  EBX = (pop32());
  /* 11b046a0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b046a1 ret  */
  ESPCHK(0x11b04399u, _esp0);
  ESP += 4; return;
}

/* FUN_100046a2 @ 0x11b046a2 (177 bytes, 53 insns) */
void f_11b046a2(void) {
  FTRACE(0x11b046a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b046a2 mov eax, dword ptr [0x11b07a80] */
  EAX = (r32((uint32_t)(0x11b07a80)));
  /* 11b046a7 mov ecx, dword ptr [0x11b07a70] */
  ECX = (r32((uint32_t)(0x11b07a70)));
  /* 11b046ad push esi */
  push32((uint32_t)(ESI));
  /* 11b046ae push edi */
  push32((uint32_t)(EDI));
  /* 11b046af xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b046b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b046b3 jne 0x11b046e5 */
  if (!C.zf) goto L_11b046e5;
  /* 11b046b5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11b046b9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b046bc push eax */
  push32((uint32_t)(EAX));
  /* 11b046bd push dword ptr [0x11b07a84] */
  push32((uint32_t)(r32((uint32_t)(0x11b07a84))));
  /* 11b046c3 push edi */
  push32((uint32_t)(EDI));
  /* 11b046c4 push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b046ca call dword ptr [0x11b06028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06028))), 0x11b046d0u);
  /* 11b046d0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b046d2 je 0x11b04735 */
  if (C.zf) goto L_11b04735;
  /* 11b046d4 add dword ptr [0x11b07a70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11b07a70))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11b07a70), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b046db mov dword ptr [0x11b07a84], eax */
  w32((uint32_t)(0x11b07a84), (EAX));
  /* 11b046e0 mov eax, dword ptr [0x11b07a80] */
  EAX = (r32((uint32_t)(0x11b07a80)));
L_11b046e5:;
  /* 11b046e5 mov ecx, dword ptr [0x11b07a84] */
  ECX = (r32((uint32_t)(0x11b07a84)));
  /* 11b046eb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11b046f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b046f2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11b046f5 push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b046fb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11b046fe call dword ptr [0x11b0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0603c))), 0x11b04704u);
  /* 11b04704 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04706 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11b04709 je 0x11b04735 */
  if (C.zf) goto L_11b04735;
  /* 11b0470b push 4 */
  push32((uint32_t)(0x4u));
  /* 11b0470d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11b04712 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b04717 push edi */
  push32((uint32_t)(EDI));
  /* 11b04718 call dword ptr [0x11b0602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0602c))), 0x11b0471eu);
  /* 11b0471e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04720 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11b04723 jne 0x11b04739 */
  if (!C.zf) goto L_11b04739;
  /* 11b04725 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11b04728 push edi */
  push32((uint32_t)(EDI));
  /* 11b04729 push dword ptr [0x11b07ca8] */
  push32((uint32_t)(r32((uint32_t)(0x11b07ca8))));
  /* 11b0472f call dword ptr [0x11b06050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06050))), 0x11b04735u);
L_11b04735:;
  /* 11b04735 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b04737 jmp 0x11b04750 */
  goto L_11b04750;
L_11b04739:;
  /* 11b04739 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b0473d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11b0473f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11b04742 inc dword ptr [0x11b07a80] */
  { uint32_t _r=(r32((uint32_t)(0x11b07a80)))+1; w32((uint32_t)(0x11b07a80), (_r)); fl_inc(_r,32); }
  /* 11b04748 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11b0474b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11b0474e mov eax, esi */
  EAX = (ESI);
L_11b04750:;
  /* 11b04750 pop edi */
  EDI = (pop32());
  /* 11b04751 pop esi */
  ESI = (pop32());
  /* 11b04752 ret  */
  ESPCHK(0x11b046a2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004753 @ 0x11b04753 (251 bytes, 85 insns) */
void f_11b04753(void) {
  FTRACE(0x11b04753u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04753 push ebp */
  push32((uint32_t)(EBP));
  /* 11b04754 mov ebp, esp */
  EBP = (ESP);
  /* 11b04756 push ecx */
  push32((uint32_t)(ECX));
  /* 11b04757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b0475a push ebx */
  push32((uint32_t)(EBX));
  /* 11b0475b push esi */
  push32((uint32_t)(ESI));
  /* 11b0475c push edi */
  push32((uint32_t)(EDI));
  /* 11b0475d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11b04760 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b04763 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11b04765:;
  /* 11b04765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04767 jl 0x11b0476e */
  if ((C.sf!=C.of)) goto L_11b0476e;
  /* 11b04769 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b0476b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11b0476c jmp 0x11b04765 */
  goto L_11b04765;
L_11b0476e:;
  /* 11b0476e mov eax, ebx */
  EAX = (EBX);
  /* 11b04770 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11b04772 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b04778 pop edx */
  EDX = (pop32());
  /* 11b04779 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11b04780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b04783:;
  /* 11b04783 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11b04786 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11b04789 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0478c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b0478d jne 0x11b04783 */
  if (!C.zf) goto L_11b04783;
  /* 11b0478f mov edi, ebx */
  EDI = (EBX);
  /* 11b04791 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b04793 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11b04796 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04799 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b0479e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b047a3 push edi */
  push32((uint32_t)(EDI));
  /* 11b047a4 call dword ptr [0x11b0602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0602c))), 0x11b047aau);
  /* 11b047aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b047ac jne 0x11b047b6 */
  if (!C.zf) goto L_11b047b6;
  /* 11b047ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b047b1 jmp 0x11b04849 */
  goto L_11b04849;
L_11b047b6:;
  /* 11b047b6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11b047bc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b047be ja 0x11b047fc */
  if ((!C.cf&&!C.zf)) goto L_11b047fc;
  /* 11b047c0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11b047c3:;
  /* 11b047c3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11b047c7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11b047ce lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11b047d4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11b047db mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b047dd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11b047e3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b047e6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11b047f0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b047f5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11b047f8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b047fa jbe 0x11b047c3 */
  if ((C.cf||C.zf)) goto L_11b047c3;
L_11b047fc:;
  /* 11b047fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b047ff lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11b04802 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04807 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04809 pop edi */
  EDI = (pop32());
  /* 11b0480a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b0480d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b04810 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11b04813 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b04816 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b04819 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11b0481e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11b04825 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11b04828 mov cl, al */
  CL = (AL);
  /* 11b0482a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11b0482c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0482e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04831 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11b04834 jne 0x11b04839 */
  if (!C.zf) goto L_11b04839;
  /* 11b04836 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11b04839:;
  /* 11b04839 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b0483e mov ecx, ebx */
  ECX = (EBX);
  /* 11b04840 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b04842 not edx */
  EDX = (~(EDX));
  /* 11b04844 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11b04847 mov eax, ebx */
  EAX = (EBX);
L_11b04849:;
  /* 11b04849 pop edi */
  EDI = (pop32());
  /* 11b0484a pop esi */
  ESI = (pop32());
  /* 11b0484b pop ebx */
  EBX = (pop32());
  /* 11b0484c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b0484d ret  */
  ESPCHK(0x11b04753u, _esp0);
  ESP += 4; return;
}

/* FUN_1000484e @ 0x11b0484e (137 bytes, 50 insns) */
void f_11b0484e(void) {
  FTRACE(0x11b0484eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b0484e push ebx */
  push32((uint32_t)(EBX));
  /* 11b0484f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b04851 cmp dword ptr [0x11b07a34], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11b07a34))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04857 push esi */
  push32((uint32_t)(ESI));
  /* 11b04858 push edi */
  push32((uint32_t)(EDI));
  /* 11b04859 jne 0x11b0489d */
  if (!C.zf) goto L_11b0489d;
  /* 11b0485b push 0x11b06468 */
  push32((uint32_t)(0x11b06468u));
  /* 11b04860 call dword ptr [0x11b06020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06020))), 0x11b04866u);
  /* 11b04866 mov edi, eax */
  EDI = (EAX);
  /* 11b04868 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0486a je 0x11b048d3 */
  if (C.zf) goto L_11b048d3;
  /* 11b0486c mov esi, dword ptr [0x11b06024] */
  ESI = (r32((uint32_t)(0x11b06024)));
  /* 11b04872 push 0x11b0645c */
  push32((uint32_t)(0x11b0645cu));
  /* 11b04877 push edi */
  push32((uint32_t)(EDI));
  /* 11b04878 call esi */
  call_ind((uint32_t)(ESI), 0x11b0487au);
  /* 11b0487a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b0487c mov dword ptr [0x11b07a34], eax */
  w32((uint32_t)(0x11b07a34), (EAX));
  /* 11b04881 je 0x11b048d3 */
  if (C.zf) goto L_11b048d3;
  /* 11b04883 push 0x11b0644c */
  push32((uint32_t)(0x11b0644cu));
  /* 11b04888 push edi */
  push32((uint32_t)(EDI));
  /* 11b04889 call esi */
  call_ind((uint32_t)(ESI), 0x11b0488bu);
  /* 11b0488b push 0x11b06438 */
  push32((uint32_t)(0x11b06438u));
  /* 11b04890 push edi */
  push32((uint32_t)(EDI));
  /* 11b04891 mov dword ptr [0x11b07a38], eax */
  w32((uint32_t)(0x11b07a38), (EAX));
  /* 11b04896 call esi */
  call_ind((uint32_t)(ESI), 0x11b04898u);
  /* 11b04898 mov dword ptr [0x11b07a3c], eax */
  w32((uint32_t)(0x11b07a3c), (EAX));
L_11b0489d:;
  /* 11b0489d mov eax, dword ptr [0x11b07a38] */
  EAX = (r32((uint32_t)(0x11b07a38)));
  /* 11b048a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b048a4 je 0x11b048bc */
  if (C.zf) goto L_11b048bc;
  /* 11b048a6 call eax */
  call_ind((uint32_t)(EAX), 0x11b048a8u);
  /* 11b048a8 mov ebx, eax */
  EBX = (EAX);
  /* 11b048aa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11b048ac je 0x11b048bc */
  if (C.zf) goto L_11b048bc;
  /* 11b048ae mov eax, dword ptr [0x11b07a3c] */
  EAX = (r32((uint32_t)(0x11b07a3c)));
  /* 11b048b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b048b5 je 0x11b048bc */
  if (C.zf) goto L_11b048bc;
  /* 11b048b7 push ebx */
  push32((uint32_t)(EBX));
  /* 11b048b8 call eax */
  call_ind((uint32_t)(EAX), 0x11b048bau);
  /* 11b048ba mov ebx, eax */
  EBX = (EAX);
L_11b048bc:;
  /* 11b048bc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b048c0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b048c4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11b048c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11b048c9 call dword ptr [0x11b07a34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b07a34))), 0x11b048cfu);
L_11b048cf:;
  /* 11b048cf pop edi */
  EDI = (pop32());
  /* 11b048d0 pop esi */
  ESI = (pop32());
  /* 11b048d1 pop ebx */
  EBX = (pop32());
  /* 11b048d2 ret  */
  ESPCHK(0x11b0484eu, _esp0);
  ESP += 4; return;
L_11b048d3:;
  /* 11b048d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b048d5 jmp 0x11b048cf */
  goto L_11b048cf;
}

/* _strncpy @ 0x11b048e0 (254 bytes, 109 insns) */
void f_11b048e0(void) {
  FTRACE(0x11b048e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b048e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b048e4 push edi */
  push32((uint32_t)(EDI));
  /* 11b048e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b048e7 je 0x11b04963 */
  if (C.zf) goto L_11b04963;
  /* 11b048e9 push esi */
  push32((uint32_t)(ESI));
  /* 11b048ea push ebx */
  push32((uint32_t)(EBX));
  /* 11b048eb mov ebx, ecx */
  EBX = (ECX);
  /* 11b048ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11b048f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b048f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b048fb jne 0x11b04904 */
  if (!C.zf) goto L_11b04904;
  /* 11b048fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04900 jne 0x11b04971 */
  if (!C.zf) goto L_11b04971;
  /* 11b04902 jmp 0x11b04925 */
  goto L_11b04925;
L_11b04904:;
  /* 11b04904 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04906 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b04907 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b0490a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b0490b je 0x11b04932 */
  if (C.zf) goto L_11b04932;
  /* 11b0490d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0490f je 0x11b0493a */
  if (C.zf) goto L_11b0493a;
  /* 11b04911 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b04917 jne 0x11b04904 */
  if (!C.zf) goto L_11b04904;
  /* 11b04919 mov ebx, ecx */
  EBX = (ECX);
  /* 11b0491b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b0491e jne 0x11b04971 */
  if (!C.zf) goto L_11b04971;
L_11b04920:;
  /* 11b04920 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b04923 je 0x11b04932 */
  if (C.zf) goto L_11b04932;
L_11b04925:;
  /* 11b04925 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04927 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b04928 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b0492a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b0492b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b0492d je 0x11b0495e */
  if (C.zf) goto L_11b0495e;
  /* 11b0492f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b04930 jne 0x11b04925 */
  if (!C.zf) goto L_11b04925;
L_11b04932:;
  /* 11b04932 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b04936 pop ebx */
  EBX = (pop32());
  /* 11b04937 pop esi */
  ESI = (pop32());
  /* 11b04938 pop edi */
  EDI = (pop32());
  /* 11b04939 ret  */
  ESPCHK(0x11b048e0u, _esp0);
  ESP += 4; return;
L_11b0493a:;
  /* 11b0493a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b04940 je 0x11b04954 */
  if (C.zf) goto L_11b04954;
L_11b04942:;
  /* 11b04942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04944 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b04945 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b04946 je 0x11b049d6 */
  if (C.zf) goto L_11b049d6;
  /* 11b0494c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b04952 jne 0x11b04942 */
  if (!C.zf) goto L_11b04942;
L_11b04954:;
  /* 11b04954 mov ebx, ecx */
  EBX = (ECX);
  /* 11b04956 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04959 jne 0x11b049c7 */
  if (!C.zf) goto L_11b049c7;
L_11b0495b:;
  /* 11b0495b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b0495d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b0495e:;
  /* 11b0495e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b0495f jne 0x11b0495b */
  if (!C.zf) goto L_11b0495b;
  /* 11b04961 pop ebx */
  EBX = (pop32());
  /* 11b04962 pop esi */
  ESI = (pop32());
L_11b04963:;
  /* 11b04963 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b04967 pop edi */
  EDI = (pop32());
  /* 11b04968 ret  */
  ESPCHK(0x11b048e0u, _esp0);
  ESP += 4; return;
L_11b04969:;
  /* 11b04969 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b0496b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0496e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b0496f je 0x11b04920 */
  if (C.zf) goto L_11b04920;
L_11b04971:;
  /* 11b04971 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b04976 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b04978 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b0497a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b0497d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b0497f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11b04981 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04984 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b04989 je 0x11b04969 */
  if (C.zf) goto L_11b04969;
  /* 11b0498b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b0498d je 0x11b049bb */
  if (C.zf) goto L_11b049bb;
  /* 11b0498f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b04991 je 0x11b049b1 */
  if (C.zf) goto L_11b049b1;
  /* 11b04993 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b04999 je 0x11b049a7 */
  if (C.zf) goto L_11b049a7;
  /* 11b0499b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b049a1 jne 0x11b04969 */
  if (!C.zf) goto L_11b04969;
  /* 11b049a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b049a5 jmp 0x11b049bf */
  goto L_11b049bf;
L_11b049a7:;
  /* 11b049a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b049ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b049af jmp 0x11b049bf */
  goto L_11b049bf;
L_11b049b1:;
  /* 11b049b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b049b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b049b9 jmp 0x11b049bf */
  goto L_11b049bf;
L_11b049bb:;
  /* 11b049bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b049bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11b049bf:;
  /* 11b049bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b049c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b049c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b049c5 je 0x11b049d1 */
  if (C.zf) goto L_11b049d1;
L_11b049c7:;
  /* 11b049c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b049c9:;
  /* 11b049c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b049cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b049ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b049cf jne 0x11b049c9 */
  if (!C.zf) goto L_11b049c9;
L_11b049d1:;
  /* 11b049d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b049d4 jne 0x11b0495b */
  if (!C.zf) goto L_11b0495b;
L_11b049d6:;
  /* 11b049d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b049da pop ebx */
  EBX = (pop32());
  /* 11b049db pop esi */
  ESI = (pop32());
  /* 11b049dc pop edi */
  EDI = (pop32());
  /* 11b049dd ret  */
  ESPCHK(0x11b048e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11b049e0 (88 bytes, 40 insns) */
void f_11b049e0(void) {
  FTRACE(0x11b049e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b049e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b049e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b049e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b049ea je 0x11b04a33 */
  if (C.zf) goto L_11b04a33;
  /* 11b049ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b049ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b049f2 push edi */
  push32((uint32_t)(EDI));
  /* 11b049f3 mov edi, ecx */
  EDI = (ECX);
  /* 11b049f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b049f8 jb 0x11b04a27 */
  if (C.cf) goto L_11b04a27;
  /* 11b049fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b049fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b049ff je 0x11b04a09 */
  if (C.zf) goto L_11b04a09;
  /* 11b04a01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11b04a03:;
  /* 11b04a03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04a05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b04a06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b04a07 jne 0x11b04a03 */
  if (!C.zf) goto L_11b04a03;
L_11b04a09:;
  /* 11b04a09 mov ecx, eax */
  ECX = (EAX);
  /* 11b04a0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b04a0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04a10 mov ecx, eax */
  ECX = (EAX);
  /* 11b04a12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b04a15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04a17 mov ecx, edx */
  ECX = (EDX);
  /* 11b04a19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b04a1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04a1f je 0x11b04a27 */
  if (C.zf) goto L_11b04a27;
  /* 11b04a21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b04a23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b04a25 je 0x11b04a2d */
  if (C.zf) goto L_11b04a2d;
L_11b04a27:;
  /* 11b04a27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04a29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b04a2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b04a2b jne 0x11b04a27 */
  if (!C.zf) goto L_11b04a27;
L_11b04a2d:;
  /* 11b04a2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b04a31 pop edi */
  EDI = (pop32());
  /* 11b04a32 ret  */
  ESPCHK(0x11b049e0u, _esp0);
  ESP += 4; return;
L_11b04a33:;
  /* 11b04a33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b04a37 ret  */
  ESPCHK(0x11b049e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a38 @ 0x11b04a38 (27 bytes, 13 insns) */
void f_11b04a38(void) {
  FTRACE(0x11b04a38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04a38 mov eax, dword ptr [0x11b07a40] */
  EAX = (r32((uint32_t)(0x11b07a40)));
  /* 11b04a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04a3f je 0x11b04a50 */
  if (C.zf) goto L_11b04a50;
  /* 11b04a41 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11b04a45 call eax */
  call_ind((uint32_t)(EAX), 0x11b04a47u);
  /* 11b04a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04a49 pop ecx */
  ECX = (pop32());
  /* 11b04a4a je 0x11b04a50 */
  if (C.zf) goto L_11b04a50;
  /* 11b04a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04a4e pop eax */
  EAX = (pop32());
  /* 11b04a4f ret  */
  ESPCHK(0x11b04a38u, _esp0);
  ESP += 4; return;
L_11b04a50:;
  /* 11b04a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b04a52 ret  */
  ESPCHK(0x11b04a38u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a53 @ 0x11b04a53 (511 bytes, 193 insns) */
void f_11b04a53(void) {
  FTRACE(0x11b04a53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04a53 push ebp */
  push32((uint32_t)(EBP));
  /* 11b04a54 mov ebp, esp */
  EBP = (ESP);
  /* 11b04a56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b04a58 push 0x11b06480 */
  push32((uint32_t)(0x11b06480u));
  /* 11b04a5d push 0x11b05220 */
  push32((uint32_t)(0x11b05220u));
  /* 11b04a62 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b04a68 push eax */
  push32((uint32_t)(EAX));
  /* 11b04a69 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b04a70 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04a73 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04a74 push esi */
  push32((uint32_t)(ESI));
  /* 11b04a75 push edi */
  push32((uint32_t)(EDI));
  /* 11b04a76 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b04a79 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b04a7b cmp dword ptr [0x11b07a68], edi */
  { uint32_t _a=(r32((uint32_t)(0x11b07a68))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04a81 jne 0x11b04ac9 */
  if (!C.zf) goto L_11b04ac9;
  /* 11b04a83 push edi */
  push32((uint32_t)(EDI));
  /* 11b04a84 push edi */
  push32((uint32_t)(EDI));
  /* 11b04a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04a87 pop ebx */
  EBX = (pop32());
  /* 11b04a88 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04a89 push 0x11b06478 */
  push32((uint32_t)(0x11b06478u));
  /* 11b04a8e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11b04a93 push esi */
  push32((uint32_t)(ESI));
  /* 11b04a94 push edi */
  push32((uint32_t)(EDI));
  /* 11b04a95 call dword ptr [0x11b06014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06014))), 0x11b04a9bu);
  /* 11b04a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04a9d je 0x11b04aa7 */
  if (C.zf) goto L_11b04aa7;
  /* 11b04a9f mov dword ptr [0x11b07a68], ebx */
  w32((uint32_t)(0x11b07a68), (EBX));
  /* 11b04aa5 jmp 0x11b04ac9 */
  goto L_11b04ac9;
L_11b04aa7:;
  /* 11b04aa7 push edi */
  push32((uint32_t)(EDI));
  /* 11b04aa8 push edi */
  push32((uint32_t)(EDI));
  /* 11b04aa9 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04aaa push 0x11b06474 */
  push32((uint32_t)(0x11b06474u));
  /* 11b04aaf push esi */
  push32((uint32_t)(ESI));
  /* 11b04ab0 push edi */
  push32((uint32_t)(EDI));
  /* 11b04ab1 call dword ptr [0x11b06018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06018))), 0x11b04ab7u);
  /* 11b04ab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04ab9 je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04abf mov dword ptr [0x11b07a68], 2 */
  w32((uint32_t)(0x11b07a68), (0x2u));
L_11b04ac9:;
  /* 11b04ac9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04acc jle 0x11b04ade */
  if ((C.zf||C.sf!=C.of)) goto L_11b04ade;
  /* 11b04ace push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b04ad1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04ad4 call 0x11b04c77 */
  push32(0x11b04ad9u); f_11b04c77();
  /* 11b04ad9 pop ecx */
  ECX = (pop32());
  /* 11b04ada pop ecx */
  ECX = (pop32());
  /* 11b04adb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11b04ade:;
  /* 11b04ade mov eax, dword ptr [0x11b07a68] */
  EAX = (r32((uint32_t)(0x11b07a68)));
  /* 11b04ae3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04ae6 jne 0x11b04b05 */
  if (!C.zf) goto L_11b04b05;
  /* 11b04ae8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b04aeb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b04aee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b04af1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04af4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04af7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b04afa call dword ptr [0x11b06018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06018))), 0x11b04b00u);
  /* 11b04b00 jmp 0x11b04be3 */
  goto L_11b04be3;
L_11b04b05:;
  /* 11b04b05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04b08 jne 0x11b04be1 */
  if (!C.zf) goto L_11b04be1;
  /* 11b04b0e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04b11 jne 0x11b04b1b */
  if (!C.zf) goto L_11b04b1b;
  /* 11b04b13 mov eax, dword ptr [0x11b07a60] */
  EAX = (r32((uint32_t)(0x11b07a60)));
  /* 11b04b18 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11b04b1b:;
  /* 11b04b1b push edi */
  push32((uint32_t)(EDI));
  /* 11b04b1c push edi */
  push32((uint32_t)(EDI));
  /* 11b04b1d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b04b20 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04b23 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b04b26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b04b28 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04b2a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b04b2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b04b2e push eax */
  push32((uint32_t)(EAX));
  /* 11b04b2f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b04b32 call dword ptr [0x11b0601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0601c))), 0x11b04b38u);
  /* 11b04b38 mov ebx, eax */
  EBX = (EAX);
  /* 11b04b3a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11b04b3d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04b3f je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04b45 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11b04b48 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11b04b4b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04b4e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b04b50 call 0x11b05300 */
  push32(0x11b04b55u); f_11b05300();
  /* 11b04b55 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b04b58 mov eax, esp */
  EAX = (ESP);
  /* 11b04b5a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b04b5d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b04b61 jmp 0x11b04b76 */
  goto L_11b04b76;
  /* 11b04b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04b65 pop eax */
  EAX = (pop32());
  /* 11b04b66 ret  */
  ESPCHK(0x11b04a53u, _esp0);
  ESP += 4; return;
  /* 11b04b67 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b04b6a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b04b6c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11b04b6f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b04b73 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11b04b76:;
  /* 11b04b76 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04b79 je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04b7b push ebx */
  push32((uint32_t)(EBX));
  /* 11b04b7c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b04b7f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b04b82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04b85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04b87 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b04b8a call dword ptr [0x11b0601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0601c))), 0x11b04b90u);
  /* 11b04b90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04b92 je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04b94 push edi */
  push32((uint32_t)(EDI));
  /* 11b04b95 push edi */
  push32((uint32_t)(EDI));
  /* 11b04b96 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04b97 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b04b9a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04b9d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b04ba0 call dword ptr [0x11b06014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06014))), 0x11b04ba6u);
  /* 11b04ba6 mov esi, eax */
  ESI = (EAX);
  /* 11b04ba8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11b04bab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04bad je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04baf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11b04bb3 je 0x11b04bf5 */
  if (C.zf) goto L_11b04bf5;
  /* 11b04bb5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04bb8 je 0x11b04c70 */
  if (C.zf) goto L_11b04c70;
  /* 11b04bbe cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04bc1 jg 0x11b04be1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b04be1;
  /* 11b04bc3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b04bc6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b04bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04bca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b04bcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04bd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b04bd3 call dword ptr [0x11b06014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06014))), 0x11b04bd9u);
  /* 11b04bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04bdb jne 0x11b04c70 */
  if (!C.zf) goto L_11b04c70;
L_11b04be1:;
  /* 11b04be1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b04be3:;
  /* 11b04be3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11b04be6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b04be9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b04bf0 pop edi */
  EDI = (pop32());
  /* 11b04bf1 pop esi */
  ESI = (pop32());
  /* 11b04bf2 pop ebx */
  EBX = (pop32());
  /* 11b04bf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04bf4 ret  */
  ESPCHK(0x11b04a53u, _esp0);
  ESP += 4; return;
L_11b04bf5:;
  /* 11b04bf5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b04bfc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11b04bff add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04c02 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b04c04 call 0x11b05300 */
  push32(0x11b04c09u); f_11b05300();
  /* 11b04c09 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b04c0c mov ebx, esp */
  EBX = (ESP);
  /* 11b04c0e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11b04c11 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b04c15 jmp 0x11b04c29 */
  goto L_11b04c29;
  /* 11b04c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04c19 pop eax */
  EAX = (pop32());
  /* 11b04c1a ret  */
  ESPCHK(0x11b04a53u, _esp0);
  ESP += 4; return;
  /* 11b04c1b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b04c1e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11b04c20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b04c22 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b04c26 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11b04c29:;
  /* 11b04c29 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04c2b je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04c2d push esi */
  push32((uint32_t)(ESI));
  /* 11b04c2e push ebx */
  push32((uint32_t)(EBX));
  /* 11b04c2f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11b04c32 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11b04c35 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04c38 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b04c3b call dword ptr [0x11b06014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06014))), 0x11b04c41u);
  /* 11b04c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04c43 je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
  /* 11b04c45 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04c48 push edi */
  push32((uint32_t)(EDI));
  /* 11b04c49 push edi */
  push32((uint32_t)(EDI));
  /* 11b04c4a jne 0x11b04c50 */
  if (!C.zf) goto L_11b04c50;
  /* 11b04c4c push edi */
  push32((uint32_t)(EDI));
  /* 11b04c4d push edi */
  push32((uint32_t)(EDI));
  /* 11b04c4e jmp 0x11b04c56 */
  goto L_11b04c56;
L_11b04c50:;
  /* 11b04c50 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11b04c53 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11b04c56:;
  /* 11b04c56 push esi */
  push32((uint32_t)(ESI));
  /* 11b04c57 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04c58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b04c5d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11b04c60 call dword ptr [0x11b06068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06068))), 0x11b04c66u);
  /* 11b04c66 mov esi, eax */
  ESI = (EAX);
  /* 11b04c68 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04c6a je 0x11b04be1 */
  if (C.zf) goto L_11b04be1;
L_11b04c70:;
  /* 11b04c70 mov eax, esi */
  EAX = (ESI);
  /* 11b04c72 jmp 0x11b04be3 */
  goto L_11b04be3;
}

/* FUN_10004c77 @ 0x11b04c77 (43 bytes, 20 insns) */
void f_11b04c77(void) {
  FTRACE(0x11b04c77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04c77 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b04c7b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b04c7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b04c81 push esi */
  push32((uint32_t)(ESI));
  /* 11b04c82 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11b04c85 je 0x11b04c94 */
  if (C.zf) goto L_11b04c94;
L_11b04c87:;
  /* 11b04c87 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b04c8a je 0x11b04c94 */
  if (C.zf) goto L_11b04c94;
  /* 11b04c8c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b04c8d mov esi, ecx */
  ESI = (ECX);
  /* 11b04c8f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b04c90 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11b04c92 jne 0x11b04c87 */
  if (!C.zf) goto L_11b04c87;
L_11b04c94:;
  /* 11b04c94 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b04c97 pop esi */
  ESI = (pop32());
  /* 11b04c98 jne 0x11b04c9f */
  if (!C.zf) goto L_11b04c9f;
  /* 11b04c9a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04c9e ret  */
  ESPCHK(0x11b04c77u, _esp0);
  ESP += 4; return;
L_11b04c9f:;
  /* 11b04c9f mov eax, edx */
  EAX = (EDX);
  /* 11b04ca1 ret  */
  ESPCHK(0x11b04c77u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca2 @ 0x11b04ca2 (318 bytes, 123 insns) */
void f_11b04ca2(void) {
  FTRACE(0x11b04ca2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04ca2 push ebp */
  push32((uint32_t)(EBP));
  /* 11b04ca3 mov ebp, esp */
  EBP = (ESP);
  /* 11b04ca5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b04ca7 push 0x11b06498 */
  push32((uint32_t)(0x11b06498u));
  /* 11b04cac push 0x11b05220 */
  push32((uint32_t)(0x11b05220u));
  /* 11b04cb1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b04cb7 push eax */
  push32((uint32_t)(EAX));
  /* 11b04cb8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b04cbf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04cc2 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04cc3 push esi */
  push32((uint32_t)(ESI));
  /* 11b04cc4 push edi */
  push32((uint32_t)(EDI));
  /* 11b04cc5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b04cc8 mov eax, dword ptr [0x11b07a6c] */
  EAX = (r32((uint32_t)(0x11b07a6c)));
  /* 11b04ccd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b04ccf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04cd1 jne 0x11b04d11 */
  if (!C.zf) goto L_11b04d11;
  /* 11b04cd3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b04cd6 push eax */
  push32((uint32_t)(EAX));
  /* 11b04cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04cd9 pop esi */
  ESI = (pop32());
  /* 11b04cda push esi */
  push32((uint32_t)(ESI));
  /* 11b04cdb push 0x11b06478 */
  push32((uint32_t)(0x11b06478u));
  /* 11b04ce0 push esi */
  push32((uint32_t)(ESI));
  /* 11b04ce1 call dword ptr [0x11b0600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0600c))), 0x11b04ce7u);
  /* 11b04ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04ce9 je 0x11b04cef */
  if (C.zf) goto L_11b04cef;
  /* 11b04ceb mov eax, esi */
  EAX = (ESI);
  /* 11b04ced jmp 0x11b04d0c */
  goto L_11b04d0c;
L_11b04cef:;
  /* 11b04cef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b04cf2 push eax */
  push32((uint32_t)(EAX));
  /* 11b04cf3 push esi */
  push32((uint32_t)(ESI));
  /* 11b04cf4 push 0x11b06474 */
  push32((uint32_t)(0x11b06474u));
  /* 11b04cf9 push esi */
  push32((uint32_t)(ESI));
  /* 11b04cfa push ebx */
  push32((uint32_t)(EBX));
  /* 11b04cfb call dword ptr [0x11b06010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06010))), 0x11b04d01u);
  /* 11b04d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b04d03 je 0x11b04dd7 */
  if (C.zf) goto L_11b04dd7;
  /* 11b04d09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b04d0b pop eax */
  EAX = (pop32());
L_11b04d0c:;
  /* 11b04d0c mov dword ptr [0x11b07a6c], eax */
  w32((uint32_t)(0x11b07a6c), (EAX));
L_11b04d11:;
  /* 11b04d11 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04d14 jne 0x11b04d3a */
  if (!C.zf) goto L_11b04d3a;
  /* 11b04d16 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b04d19 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04d1b jne 0x11b04d22 */
  if (!C.zf) goto L_11b04d22;
  /* 11b04d1d mov eax, dword ptr [0x11b07a50] */
  EAX = (r32((uint32_t)(0x11b07a50)));
L_11b04d22:;
  /* 11b04d22 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b04d25 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04d28 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04d2b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b04d2e push eax */
  push32((uint32_t)(EAX));
  /* 11b04d2f call dword ptr [0x11b06010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b06010))), 0x11b04d35u);
  /* 11b04d35 jmp 0x11b04dd9 */
  goto L_11b04dd9;
L_11b04d3a:;
  /* 11b04d3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04d3d jne 0x11b04dd7 */
  if (!C.zf) goto L_11b04dd7;
  /* 11b04d43 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04d46 jne 0x11b04d50 */
  if (!C.zf) goto L_11b04d50;
  /* 11b04d48 mov eax, dword ptr [0x11b07a60] */
  EAX = (r32((uint32_t)(0x11b07a60)));
  /* 11b04d4d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11b04d50:;
  /* 11b04d50 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04d51 push ebx */
  push32((uint32_t)(EBX));
  /* 11b04d52 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04d55 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04d58 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b04d5b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b04d5d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04d5f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b04d62 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b04d63 push eax */
  push32((uint32_t)(EAX));
  /* 11b04d64 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b04d67 call dword ptr [0x11b0601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0601c))), 0x11b04d6du);
  /* 11b04d6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b04d70 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04d72 je 0x11b04dd7 */
  if (C.zf) goto L_11b04dd7;
  /* 11b04d74 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11b04d77 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11b04d7a mov eax, edi */
  EAX = (EDI);
  /* 11b04d7c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04d7f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b04d81 call 0x11b05300 */
  push32(0x11b04d86u); f_11b05300();
  /* 11b04d86 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b04d89 mov esi, esp */
  ESI = (ESP);
  /* 11b04d8b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11b04d8e push edi */
  push32((uint32_t)(EDI));
  /* 11b04d8f push ebx */
  push32((uint32_t)(EBX));
  /* 11b04d90 push esi */
  push32((uint32_t)(ESI));
  /* 11b04d91 call 0x11b049e0 */
  push32(0x11b04d96u); f_11b049e0();
  /* 11b04d96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04d99 jmp 0x11b04da6 */
  goto L_11b04da6;
  /* 11b04d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04d9d pop eax */
  EAX = (pop32());
  /* 11b04d9e ret  */
  ESPCHK(0x11b04ca2u, _esp0);
  ESP += 4; return;
  /* 11b04d9f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b04da2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11b04da4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11b04da6:;
  /* 11b04da6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11b04daa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04dac je 0x11b04dd7 */
  if (C.zf) goto L_11b04dd7;
  /* 11b04dae push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11b04db1 push esi */
  push32((uint32_t)(ESI));
  /* 11b04db2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b04db5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11b04db8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b04dba push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11b04dbd call dword ptr [0x11b0601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0601c))), 0x11b04dc3u);
  /* 11b04dc3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04dc5 je 0x11b04dd7 */
  if (C.zf) goto L_11b04dd7;
  /* 11b04dc7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11b04dca push eax */
  push32((uint32_t)(EAX));
  /* 11b04dcb push esi */
  push32((uint32_t)(ESI));
  /* 11b04dcc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b04dcf call dword ptr [0x11b0600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b0600c))), 0x11b04dd5u);
  /* 11b04dd5 jmp 0x11b04dd9 */
  goto L_11b04dd9;
L_11b04dd7:;
  /* 11b04dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b04dd9:;
  /* 11b04dd9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11b04ddc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b04ddf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b04de6 pop edi */
  EDI = (pop32());
  /* 11b04de7 pop esi */
  ESI = (pop32());
  /* 11b04de8 pop ebx */
  EBX = (pop32());
  /* 11b04de9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04dea ret  */
  ESPCHK(0x11b04ca2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004df0 @ 0x11b04df0 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11b04df0(void) {
  FTRACE(0x11b04df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b04df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b04df1 mov ebp, esp */
  EBP = (ESP);
  /* 11b04df3 push edi */
  push32((uint32_t)(EDI));
  /* 11b04df4 push esi */
  push32((uint32_t)(ESI));
  /* 11b04df5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b04df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b04dfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04dfe mov eax, ecx */
  EAX = (ECX);
  /* 11b04e00 mov edx, ecx */
  EDX = (ECX);
  /* 11b04e02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04e04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04e06 jbe 0x11b04e10 */
  if ((C.cf||C.zf)) goto L_11b04e10;
  /* 11b04e08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04e0a jb 0x11b04f88 */
  if (C.cf) goto L_11b04f88;
L_11b04e10:;
  /* 11b04e10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b04e16 jne 0x11b04e2c */
  if (!C.zf) goto L_11b04e2c;
  /* 11b04e18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04e1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b04e1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04e21 jb 0x11b04e4c */
  if (C.cf) goto L_11b04e4c;
  /* 11b04e23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b04e25 jmp dword ptr [edx*4 + 0x11b04f38] */
  switch (EDX) {
    case 0: goto L_11b04f48;
    case 1: goto L_11b04f50;
    case 2: goto L_11b04f5c;
    case 3: goto L_11b04f70;
    default: x86_unimpl("switch@0x11b04e25 out of table"); return;
  }
L_11b04e2c:;
  /* 11b04e2c mov eax, edi */
  EAX = (EDI);
  /* 11b04e2e mov edx, 3 */
  EDX = (0x3u);
  /* 11b04e33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04e36 jb 0x11b04e44 */
  if (C.cf) goto L_11b04e44;
  /* 11b04e38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b04e3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04e3d jmp dword ptr [eax*4 + 0x11b04e50] */
  switch (EAX) {
    case 1: goto L_11b04e60;
    case 2: goto L_11b04e8c;
    case 3: goto L_11b04eb0;
    default: x86_unimpl("switch@0x11b04e3d out of table"); return;
  }
L_11b04e44:;
  /* 11b04e44 jmp dword ptr [ecx*4 + 0x11b04f48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b04f48)))); return;
  /* 11b04e4b nop  */
  /* nop */
L_11b04e4c:;
  /* 11b04e4c jmp dword ptr [ecx*4 + 0x11b04ecc] */
  switch (ECX) {
    case 0: goto L_11b04f2f;
    case 1: goto L_11b04f1c;
    case 2: goto L_11b04f14;
    case 3: goto L_11b04f0c;
    case 4: goto L_11b04f04;
    case 5: goto L_11b04efc;
    case 6: goto L_11b04ef4;
    case 7: goto L_11b04eec;
    default: x86_unimpl("switch@0x11b04e4c out of table"); return;
  }
  /* 11b04e53 nop  */
  /* nop */
L_11b04e60:;
  /* 11b04e60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b04e62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04e64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04e66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b04e69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b04e6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b04e6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04e72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b04e75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04e78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04e7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04e7e jb 0x11b04e4c */
  if (C.cf) goto L_11b04e4c;
  /* 11b04e80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b04e82 jmp dword ptr [edx*4 + 0x11b04f38] */
  switch (EDX) {
    case 0: goto L_11b04f48;
    case 1: goto L_11b04f50;
    case 2: goto L_11b04f5c;
    case 3: goto L_11b04f70;
    default: x86_unimpl("switch@0x11b04e82 out of table"); return;
  }
  /* 11b04e89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b04e8c:;
  /* 11b04e8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b04e8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04e90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04e92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b04e95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04e98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b04e9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04e9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04ea1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04ea4 jb 0x11b04e4c */
  if (C.cf) goto L_11b04e4c;
  /* 11b04ea6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b04ea8 jmp dword ptr [edx*4 + 0x11b04f38] */
  switch (EDX) {
    case 0: goto L_11b04f48;
    case 1: goto L_11b04f50;
    case 2: goto L_11b04f5c;
    case 3: goto L_11b04f70;
    default: x86_unimpl("switch@0x11b04ea8 out of table"); return;
  }
  /* 11b04eaf nop  */
  /* nop */
L_11b04eb0:;
  /* 11b04eb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b04eb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04eb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b04eb7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04eba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b04ebb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04ebe jb 0x11b04e4c */
  if (C.cf) goto L_11b04e4c;
  /* 11b04ec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b04ec2 jmp dword ptr [edx*4 + 0x11b04f38] */
  switch (EDX) {
    case 0: goto L_11b04f48;
    case 1: goto L_11b04f50;
    case 2: goto L_11b04f5c;
    case 3: goto L_11b04f70;
    default: x86_unimpl("switch@0x11b04ec2 out of table"); return;
  }
  /* 11b04ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b04eec:;
  /* 11b04eec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b04ef0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b04ef4:;
  /* 11b04ef4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b04ef8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b04efc:;
  /* 11b04efc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b04f00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b04f04:;
  /* 11b04f04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b04f08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b04f0c:;
  /* 11b04f0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b04f10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b04f14:;
  /* 11b04f14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b04f18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b04f1c:;
  /* 11b04f1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b04f20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b04f24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b04f2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b04f2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b04f2f:;
  /* 11b04f2f jmp dword ptr [edx*4 + 0x11b04f38] */
  switch (EDX) {
    case 0: goto L_11b04f48;
    case 1: goto L_11b04f50;
    case 2: goto L_11b04f5c;
    case 3: goto L_11b04f70;
    default: x86_unimpl("switch@0x11b04f2f out of table"); return;
  }
  /* 11b04f36 mov edi, edi */
  EDI = (EDI);
L_11b04f48:;
  /* 11b04f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04f4b pop esi */
  ESI = (pop32());
  /* 11b04f4c pop edi */
  EDI = (pop32());
  /* 11b04f4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04f4e ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b04f4f nop  */
  /* nop */
L_11b04f50:;
  /* 11b04f50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04f52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04f57 pop esi */
  ESI = (pop32());
  /* 11b04f58 pop edi */
  EDI = (pop32());
  /* 11b04f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04f5a ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b04f5b nop  */
  /* nop */
L_11b04f5c:;
  /* 11b04f5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04f5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04f60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b04f63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b04f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04f69 pop esi */
  ESI = (pop32());
  /* 11b04f6a pop edi */
  EDI = (pop32());
  /* 11b04f6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04f6c ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b04f6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b04f70:;
  /* 11b04f70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b04f72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b04f74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b04f77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b04f7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b04f7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b04f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b04f83 pop esi */
  ESI = (pop32());
  /* 11b04f84 pop edi */
  EDI = (pop32());
  /* 11b04f85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b04f86 ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b04f87 nop  */
  /* nop */
L_11b04f88:;
  /* 11b04f88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b04f8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b04f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b04f96 jne 0x11b04fbc */
  if (!C.zf) goto L_11b04fbc;
  /* 11b04f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b04f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04fa1 jb 0x11b04fb0 */
  if (C.cf) goto L_11b04fb0;
  /* 11b04fa3 std  */
  C.df=1;
  /* 11b04fa4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b04fa6 cld  */
  C.df=0;
  /* 11b04fa7 jmp dword ptr [edx*4 + 0x11b050d0] */
  switch (EDX) {
    case 0: goto L_11b050e0;
    case 1: goto L_11b050e8;
    case 2: goto L_11b050f8;
    case 3: goto L_11b0510c;
    default: x86_unimpl("switch@0x11b04fa7 out of table"); return;
  }
  /* 11b04fae mov edi, edi */
  EDI = (EDI);
L_11b04fb0:;
  /* 11b04fb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b04fb2 jmp dword ptr [ecx*4 + 0x11b05080] */
  switch (ECX) {
    case 0: goto L_11b050c7;
    default: x86_unimpl("switch@0x11b04fb2 out of table"); return;
  }
  /* 11b04fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b04fbc:;
  /* 11b04fbc mov eax, edi */
  EAX = (EDI);
  /* 11b04fbe mov edx, 3 */
  EDX = (0x3u);
  /* 11b04fc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04fc6 jb 0x11b04fd4 */
  if (C.cf) goto L_11b04fd4;
  /* 11b04fc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b04fcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b04fcd jmp dword ptr [eax*4 + 0x11b04fd8] */
  switch (EAX) {
    case 1: goto L_11b04fe8;
    case 2: goto L_11b05008;
    case 3: goto L_11b05030;
    default: x86_unimpl("switch@0x11b04fcd out of table"); return;
  }
L_11b04fd4:;
  /* 11b04fd4 jmp dword ptr [ecx*4 + 0x11b050d0] */
  switch (ECX) {
    case 0: goto L_11b050e0;
    case 1: goto L_11b050e8;
    case 2: goto L_11b050f8;
    case 3: goto L_11b0510c;
    default: x86_unimpl("switch@0x11b04fd4 out of table"); return;
  }
  /* 11b04fdb nop  */
  /* nop */
L_11b04fe8:;
  /* 11b04fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b04feb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b04fed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b04ff0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b04ff1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b04ff4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b04ff5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b04ff8 jb 0x11b04fb0 */
  if (C.cf) goto L_11b04fb0;
  /* 11b04ffa std  */
  C.df=1;
  /* 11b04ffb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b04ffd cld  */
  C.df=0;
  /* 11b04ffe jmp dword ptr [edx*4 + 0x11b050d0] */
  switch (EDX) {
    case 0: goto L_11b050e0;
    case 1: goto L_11b050e8;
    case 2: goto L_11b050f8;
    case 3: goto L_11b0510c;
    default: x86_unimpl("switch@0x11b04ffe out of table"); return;
  }
  /* 11b05005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b05008:;
  /* 11b05008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b0500b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b0500d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b05010 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b05013 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b05016 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b05019 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0501c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0501f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b05022 jb 0x11b04fb0 */
  if (C.cf) goto L_11b04fb0;
  /* 11b05024 std  */
  C.df=1;
  /* 11b05025 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b05027 cld  */
  C.df=0;
  /* 11b05028 jmp dword ptr [edx*4 + 0x11b050d0] */
  switch (EDX) {
    case 0: goto L_11b050e0;
    case 1: goto L_11b050e8;
    case 2: goto L_11b050f8;
    case 3: goto L_11b0510c;
    default: x86_unimpl("switch@0x11b05028 out of table"); return;
  }
  /* 11b0502f nop  */
  /* nop */
L_11b05030:;
  /* 11b05030 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b05033 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b05035 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b05038 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b0503b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b0503e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b05041 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b05044 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b05047 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0504a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b0504d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b05050 jb 0x11b04fb0 */
  if (C.cf) goto L_11b04fb0;
  /* 11b05056 std  */
  C.df=1;
  /* 11b05057 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b05059 cld  */
  C.df=0;
  /* 11b0505a jmp dword ptr [edx*4 + 0x11b050d0] */
  switch (EDX) {
    case 0: goto L_11b050e0;
    case 1: goto L_11b050e8;
    case 2: goto L_11b050f8;
    case 3: goto L_11b0510c;
    default: x86_unimpl("switch@0x11b0505a out of table"); return;
  }
  /* 11b05061 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b05064 test byte ptr [eax - 0x50], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + -0x50)))&(DL); fl_logic(_r,8); }
  /* 11b05067 adc dword ptr [eax + edx*2 + 0x509411b0], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*2 + 0x509411b0))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EDX*2 + 0x509411b0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b0506e mov al, 0x11 */
  AL = (0x11u);
  /* 11b05070 pushfd  */
  x86_unimpl("pushfd @ 0x11b05070");
  /* 11b05071 push eax */
  push32((uint32_t)(EAX));
  /* 11b05072 mov al, 0x11 */
  AL = (0x11u);
  /* 11b05074 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11b05075 push eax */
  push32((uint32_t)(EAX));
  /* 11b05076 mov al, 0x11 */
  AL = (0x11u);
  /* 11b05078 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11b05079 push eax */
  push32((uint32_t)(EAX));
  /* 11b0507a mov al, 0x11 */
  AL = (0x11u);
  /* 11b0507c mov ah, 0x50 */
  AH = (0x50u);
  /* 11b0507e mov al, 0x11 */
  AL = (0x11u);
  /* 11b05084 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b05088 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b0508c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b05090 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b05094 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b05098 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b0509c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b050a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b050a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b050a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b050ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b050b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b050b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b050b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b050bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b050c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b050c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b050c7:;
  /* 11b050c7 jmp dword ptr [edx*4 + 0x11b050d0] */
  switch (EDX) {
    case 0: goto L_11b050e0;
    case 1: goto L_11b050e8;
    case 2: goto L_11b050f8;
    case 3: goto L_11b0510c;
    default: x86_unimpl("switch@0x11b050c7 out of table"); return;
  }
  /* 11b050ce mov edi, edi */
  EDI = (EDI);
L_11b050e0:;
  /* 11b050e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b050e3 pop esi */
  ESI = (pop32());
  /* 11b050e4 pop edi */
  EDI = (pop32());
  /* 11b050e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b050e6 ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b050e7 nop  */
  /* nop */
L_11b050e8:;
  /* 11b050e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b050eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b050ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b050f1 pop esi */
  ESI = (pop32());
  /* 11b050f2 pop edi */
  EDI = (pop32());
  /* 11b050f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b050f4 ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b050f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b050f8:;
  /* 11b050f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b050fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b050fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b05101 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b05104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b05107 pop esi */
  ESI = (pop32());
  /* 11b05108 pop edi */
  EDI = (pop32());
  /* 11b05109 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b0510a ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
  /* 11b0510b nop  */
  /* nop */
L_11b0510c:;
  /* 11b0510c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b0510f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b05112 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b05115 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b05118 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b0511b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b0511e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b05121 pop esi */
  ESI = (pop32());
  /* 11b05122 pop edi */
  EDI = (pop32());
  /* 11b05123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b05124 ret  */
  ESPCHK(0x11b04df0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11b05128 (32 bytes, 18 insns) */
void f_11b05128(void) {
  FTRACE(0x11b05128u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b05128 push ebp */
  push32((uint32_t)(EBP));
  /* 11b05129 mov ebp, esp */
  EBP = (ESP);
  /* 11b0512b push ebx */
  push32((uint32_t)(EBX));
  /* 11b0512c push esi */
  push32((uint32_t)(ESI));
  /* 11b0512d push edi */
  push32((uint32_t)(EDI));
  /* 11b0512e push ebp */
  push32((uint32_t)(EBP));
  /* 11b0512f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b05131 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b05133 push 0x11b05140 */
  push32((uint32_t)(0x11b05140u));
  /* 11b05138 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b0513b call 0x11b05330 */
  push32(0x11b05140u); f_11b05330();
  /* 11b05140 pop ebp */
  EBP = (pop32());
  /* 11b05141 pop edi */
  EDI = (pop32());
  /* 11b05142 pop esi */
  ESI = (pop32());
  /* 11b05143 pop ebx */
  EBX = (pop32());
  /* 11b05144 mov esp, ebp */
  ESP = (EBP);
  /* 11b05146 pop ebp */
  EBP = (pop32());
  /* 11b05147 ret  */
  ESPCHK(0x11b05128u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11b0516a (104 bytes, 33 insns) */
void f_11b0516a(void) {
  FTRACE(0x11b0516au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b0516a push ebx */
  push32((uint32_t)(EBX));
  /* 11b0516b push esi */
  push32((uint32_t)(ESI));
  /* 11b0516c push edi */
  push32((uint32_t)(EDI));
  /* 11b0516d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b05171 push eax */
  push32((uint32_t)(EAX));
  /* 11b05172 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11b05174 push 0x11b05148 */
  push32((uint32_t)(0x11b05148u));
  /* 11b05179 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11b05180 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11b05187:;
  /* 11b05187 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11b0518b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b0518e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11b05191 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b05194 je 0x11b051c4 */
  if (C.zf) goto L_11b051c4;
  /* 11b05196 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0519a je 0x11b051c4 */
  if (C.zf) goto L_11b051c4;
  /* 11b0519c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11b0519f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11b051a2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11b051a6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b051a9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b051ae jne 0x11b051c2 */
  if (!C.zf) goto L_11b051c2;
  /* 11b051b0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11b051b5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11b051b9 call 0x11b051fe */
  push32(0x11b051beu); f_11b051fe();
  /* 11b051be call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11b051c2u);
L_11b051c2:;
  /* 11b051c2 jmp 0x11b05187 */
  goto L_11b05187;
L_11b051c4:;
  /* 11b051c4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11b051cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b051ce pop edi */
  EDI = (pop32());
  /* 11b051cf pop esi */
  ESI = (pop32());
  /* 11b051d0 pop ebx */
  EBX = (pop32());
  /* 11b051d1 ret  */
  ESPCHK(0x11b0516au, _esp0);
  ESP += 4; return;
}

/* FUN_100051fe @ 0x11b051fe (24 bytes, 10 insns) */
void f_11b051fe(void) {
  FTRACE(0x11b051feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b051fe push ebx */
  push32((uint32_t)(EBX));
  /* 11b051ff push ecx */
  push32((uint32_t)(ECX));
  /* 11b05200 mov ebx, 0x11b07660 */
  EBX = (0x11b07660u);
  /* 11b05205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b05208 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b0520b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11b0520e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11b05211 pop ecx */
  ECX = (pop32());
  /* 11b05212 pop ebx */
  EBX = (pop32());
  /* 11b05213 ret 4 */
  ESPCHK(0x11b051feu, _esp0);
  ESP += 8; return;
}

/* FUN_100052dd @ 0x11b052dd (27 bytes, 11 insns) */
void f_11b052dd(void) {
  FTRACE(0x11b052ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b052dd push ebp */
  push32((uint32_t)(EBP));
  /* 11b052de mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b052e2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11b052e4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b052e7 push eax */
  push32((uint32_t)(EAX));
  /* 11b052e8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b052eb push eax */
  push32((uint32_t)(EAX));
  /* 11b052ec call 0x11b0516a */
  push32(0x11b052f1u); f_11b0516a();
  /* 11b052f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b052f4 pop ebp */
  EBP = (pop32());
  /* 11b052f5 ret 4 */
  ESPCHK(0x11b052ddu, _esp0);
  ESP += 8; return;
}

/* FUN_10005300 @ 0x11b05300 (47 bytes, 17 insns) */
void f_11b05300(void) {
  FTRACE(0x11b05300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b05300 push ecx */
  push32((uint32_t)(ECX));
  /* 11b05301 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b05306 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11b0530a jb 0x11b05320 */
  if (C.cf) goto L_11b05320;
L_11b0530c:;
  /* 11b0530c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b05312 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b05317 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b05319 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b0531e jae 0x11b0530c */
  if (!C.cf) goto L_11b0530c;
L_11b05320:;
  /* 11b05320 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b05322 mov eax, esp */
  EAX = (ESP);
  /* 11b05324 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b05326 mov esp, ecx */
  ESP = (ECX);
  /* 11b05328 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b0532a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b0532d push eax */
  push32((uint32_t)(EAX));
  /* 11b0532e ret  */
  ESPCHK(0x11b05300u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11b05330 (6 bytes, 1 insns) */
void f_11b05330(void) {
  FTRACE(0x11b05330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b05330 jmp dword ptr [0x11b06008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11b06008)))); return;
}

