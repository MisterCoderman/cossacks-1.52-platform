#include "recomp.h"

/* OnInit @ 0x10951000 (1778 bytes, 449 insns) */
void f_10951000(void) {
  FTRACE(0x10951000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10951000 push esi */
  push32((uint32_t)(ESI));
  /* 10951001 mov esi, dword ptr [0x10959118] */
  ESI = (r32((uint32_t)(0x10959118)));
  /* 10951007 push 0x1095a564 */
  push32((uint32_t)(0x1095a564u));
  /* 1095100c push 0x1095adf8 */
  push32((uint32_t)(0x1095adf8u));
  /* 10951011 call esi */
  call_ind((uint32_t)(ESI), 0x10951013u);
  /* 10951013 push 0x1095a55c */
  push32((uint32_t)(0x1095a55cu));
  /* 10951018 push 0x1095ae00 */
  push32((uint32_t)(0x1095ae00u));
  /* 1095101d call esi */
  call_ind((uint32_t)(ESI), 0x1095101fu);
  /* 1095101f push 0x1095a554 */
  push32((uint32_t)(0x1095a554u));
  /* 10951024 push 0x1095ae08 */
  push32((uint32_t)(0x1095ae08u));
  /* 10951029 call esi */
  call_ind((uint32_t)(ESI), 0x1095102bu);
  /* 1095102b push 0x1095a54c */
  push32((uint32_t)(0x1095a54cu));
  /* 10951030 push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 10951035 call esi */
  call_ind((uint32_t)(ESI), 0x10951037u);
  /* 10951037 push 0x1095a544 */
  push32((uint32_t)(0x1095a544u));
  /* 1095103c push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 10951041 call esi */
  call_ind((uint32_t)(ESI), 0x10951043u);
  /* 10951043 push 0x1095a53c */
  push32((uint32_t)(0x1095a53cu));
  /* 10951048 push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 1095104d call esi */
  call_ind((uint32_t)(ESI), 0x1095104fu);
  /* 1095104f push 0x1095a534 */
  push32((uint32_t)(0x1095a534u));
  /* 10951054 push 0x1095b040 */
  push32((uint32_t)(0x1095b040u));
  /* 10951059 call esi */
  call_ind((uint32_t)(ESI), 0x1095105bu);
  /* 1095105b push 0x1095a52c */
  push32((uint32_t)(0x1095a52cu));
  /* 10951060 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10951065 call esi */
  call_ind((uint32_t)(ESI), 0x10951067u);
  /* 10951067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095106a push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 1095106f push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10951074 call esi */
  call_ind((uint32_t)(ESI), 0x10951076u);
  /* 10951076 push 0x1095a514 */
  push32((uint32_t)(0x1095a514u));
  /* 1095107b push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10951080 call esi */
  call_ind((uint32_t)(ESI), 0x10951082u);
  /* 10951082 push 0x1095a508 */
  push32((uint32_t)(0x1095a508u));
  /* 10951087 push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 1095108c call esi */
  call_ind((uint32_t)(ESI), 0x1095108eu);
  /* 1095108e push 0x1095a4fc */
  push32((uint32_t)(0x1095a4fcu));
  /* 10951093 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10951098 call esi */
  call_ind((uint32_t)(ESI), 0x1095109au);
  /* 1095109a push 0x1095a4f4 */
  push32((uint32_t)(0x1095a4f4u));
  /* 1095109f push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 109510a4 call esi */
  call_ind((uint32_t)(ESI), 0x109510a6u);
  /* 109510a6 push 0x1095a4ec */
  push32((uint32_t)(0x1095a4ecu));
  /* 109510ab push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 109510b0 call esi */
  call_ind((uint32_t)(ESI), 0x109510b2u);
  /* 109510b2 push 0x1095a4e4 */
  push32((uint32_t)(0x1095a4e4u));
  /* 109510b7 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 109510bc call esi */
  call_ind((uint32_t)(ESI), 0x109510beu);
  /* 109510be push 0x1095a4dc */
  push32((uint32_t)(0x1095a4dcu));
  /* 109510c3 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 109510c8 call esi */
  call_ind((uint32_t)(ESI), 0x109510cau);
  /* 109510ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109510cd push 0x1095a4cc */
  push32((uint32_t)(0x1095a4ccu));
  /* 109510d2 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 109510d7 call esi */
  call_ind((uint32_t)(ESI), 0x109510d9u);
  /* 109510d9 push 0x1095a4bc */
  push32((uint32_t)(0x1095a4bcu));
  /* 109510de push 0x1095ad78 */
  push32((uint32_t)(0x1095ad78u));
  /* 109510e3 call esi */
  call_ind((uint32_t)(ESI), 0x109510e5u);
  /* 109510e5 push 0x1095a4b0 */
  push32((uint32_t)(0x1095a4b0u));
  /* 109510ea push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 109510ef call esi */
  call_ind((uint32_t)(ESI), 0x109510f1u);
  /* 109510f1 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 109510f6 push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 109510fb call esi */
  call_ind((uint32_t)(ESI), 0x109510fdu);
  /* 109510fd push 0x1095a4a0 */
  push32((uint32_t)(0x1095a4a0u));
  /* 10951102 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10951107 call esi */
  call_ind((uint32_t)(ESI), 0x10951109u);
  /* 10951109 push 0x1095a498 */
  push32((uint32_t)(0x1095a498u));
  /* 1095110e push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10951113 call esi */
  call_ind((uint32_t)(ESI), 0x10951115u);
  /* 10951115 push 0x1095a490 */
  push32((uint32_t)(0x1095a490u));
  /* 1095111a push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 1095111f call esi */
  call_ind((uint32_t)(ESI), 0x10951121u);
  /* 10951121 push 0x1095a488 */
  push32((uint32_t)(0x1095a488u));
  /* 10951126 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 1095112b call esi */
  call_ind((uint32_t)(ESI), 0x1095112du);
  /* 1095112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951130 push 0x1095a480 */
  push32((uint32_t)(0x1095a480u));
  /* 10951135 push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 1095113a call esi */
  call_ind((uint32_t)(ESI), 0x1095113cu);
  /* 1095113c push 0x1095a478 */
  push32((uint32_t)(0x1095a478u));
  /* 10951141 push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 10951146 call esi */
  call_ind((uint32_t)(ESI), 0x10951148u);
  /* 10951148 push 0x1095a470 */
  push32((uint32_t)(0x1095a470u));
  /* 1095114d push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 10951152 call esi */
  call_ind((uint32_t)(ESI), 0x10951154u);
  /* 10951154 push 0x1095a468 */
  push32((uint32_t)(0x1095a468u));
  /* 10951159 push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 1095115e call esi */
  call_ind((uint32_t)(ESI), 0x10951160u);
  /* 10951160 push 0x1095a460 */
  push32((uint32_t)(0x1095a460u));
  /* 10951165 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 1095116a call esi */
  call_ind((uint32_t)(ESI), 0x1095116cu);
  /* 1095116c push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951171 push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10951176 call esi */
  call_ind((uint32_t)(ESI), 0x10951178u);
  /* 10951178 push 0x1095a448 */
  push32((uint32_t)(0x1095a448u));
  /* 1095117d push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 10951182 call esi */
  call_ind((uint32_t)(ESI), 0x10951184u);
  /* 10951184 push 0x1095a43c */
  push32((uint32_t)(0x1095a43cu));
  /* 10951189 push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 1095118e call esi */
  call_ind((uint32_t)(ESI), 0x10951190u);
  /* 10951190 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951193 push 0x1095a430 */
  push32((uint32_t)(0x1095a430u));
  /* 10951198 push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 1095119d call esi */
  call_ind((uint32_t)(ESI), 0x1095119fu);
  /* 1095119f push 0x1095a428 */
  push32((uint32_t)(0x1095a428u));
  /* 109511a4 push 0x1095add0 */
  push32((uint32_t)(0x1095add0u));
  /* 109511a9 call esi */
  call_ind((uint32_t)(ESI), 0x109511abu);
  /* 109511ab push 0x1095a420 */
  push32((uint32_t)(0x1095a420u));
  /* 109511b0 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 109511b5 call esi */
  call_ind((uint32_t)(ESI), 0x109511b7u);
  /* 109511b7 push 0x1095a418 */
  push32((uint32_t)(0x1095a418u));
  /* 109511bc push 0x1095add8 */
  push32((uint32_t)(0x1095add8u));
  /* 109511c1 call esi */
  call_ind((uint32_t)(ESI), 0x109511c3u);
  /* 109511c3 push 0x1095a410 */
  push32((uint32_t)(0x1095a410u));
  /* 109511c8 push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 109511cd call esi */
  call_ind((uint32_t)(ESI), 0x109511cfu);
  /* 109511cf push 0x1095a408 */
  push32((uint32_t)(0x1095a408u));
  /* 109511d4 push 0x1095b1b0 */
  push32((uint32_t)(0x1095b1b0u));
  /* 109511d9 call esi */
  call_ind((uint32_t)(ESI), 0x109511dbu);
  /* 109511db push 0x1095a400 */
  push32((uint32_t)(0x1095a400u));
  /* 109511e0 push 0x1095b1b8 */
  push32((uint32_t)(0x1095b1b8u));
  /* 109511e5 call esi */
  call_ind((uint32_t)(ESI), 0x109511e7u);
  /* 109511e7 push 0x1095a3f8 */
  push32((uint32_t)(0x1095a3f8u));
  /* 109511ec push 0x1095b1c0 */
  push32((uint32_t)(0x1095b1c0u));
  /* 109511f1 call esi */
  call_ind((uint32_t)(ESI), 0x109511f3u);
  /* 109511f3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109511f6 push 0x1095a3f0 */
  push32((uint32_t)(0x1095a3f0u));
  /* 109511fb push 0x1095b1c8 */
  push32((uint32_t)(0x1095b1c8u));
  /* 10951200 call esi */
  call_ind((uint32_t)(ESI), 0x10951202u);
  /* 10951202 push 0x1095a3e8 */
  push32((uint32_t)(0x1095a3e8u));
  /* 10951207 push 0x1095afd8 */
  push32((uint32_t)(0x1095afd8u));
  /* 1095120c call esi */
  call_ind((uint32_t)(ESI), 0x1095120eu);
  /* 1095120e push 0x1095a3e0 */
  push32((uint32_t)(0x1095a3e0u));
  /* 10951213 push 0x1095afd0 */
  push32((uint32_t)(0x1095afd0u));
  /* 10951218 call esi */
  call_ind((uint32_t)(ESI), 0x1095121au);
  /* 1095121a push 0x1095a3d8 */
  push32((uint32_t)(0x1095a3d8u));
  /* 1095121f push 0x1095af48 */
  push32((uint32_t)(0x1095af48u));
  /* 10951224 call esi */
  call_ind((uint32_t)(ESI), 0x10951226u);
  /* 10951226 push 0x1095a3d0 */
  push32((uint32_t)(0x1095a3d0u));
  /* 1095122b push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 10951230 call esi */
  call_ind((uint32_t)(ESI), 0x10951232u);
  /* 10951232 push 0x1095a3c8 */
  push32((uint32_t)(0x1095a3c8u));
  /* 10951237 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 1095123c call esi */
  call_ind((uint32_t)(ESI), 0x1095123eu);
  /* 1095123e push 0x1095a3c0 */
  push32((uint32_t)(0x1095a3c0u));
  /* 10951243 push 0x1095adc8 */
  push32((uint32_t)(0x1095adc8u));
  /* 10951248 call esi */
  call_ind((uint32_t)(ESI), 0x1095124au);
  /* 1095124a push 0x1095a3b8 */
  push32((uint32_t)(0x1095a3b8u));
  /* 1095124f push 0x1095b1d8 */
  push32((uint32_t)(0x1095b1d8u));
  /* 10951254 call esi */
  call_ind((uint32_t)(ESI), 0x10951256u);
  /* 10951256 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951259 push 0x1095a3b0 */
  push32((uint32_t)(0x1095a3b0u));
  /* 1095125e push 0x1095b1d0 */
  push32((uint32_t)(0x1095b1d0u));
  /* 10951263 call esi */
  call_ind((uint32_t)(ESI), 0x10951265u);
  /* 10951265 push 0x1095a3a8 */
  push32((uint32_t)(0x1095a3a8u));
  /* 1095126a push 0x1095b058 */
  push32((uint32_t)(0x1095b058u));
  /* 1095126f call esi */
  call_ind((uint32_t)(ESI), 0x10951271u);
  /* 10951271 push 0x1095a3a0 */
  push32((uint32_t)(0x1095a3a0u));
  /* 10951276 push 0x1095b098 */
  push32((uint32_t)(0x1095b098u));
  /* 1095127b call esi */
  call_ind((uint32_t)(ESI), 0x1095127du);
  /* 1095127d push 0x1095a398 */
  push32((uint32_t)(0x1095a398u));
  /* 10951282 push 0x1095b0a8 */
  push32((uint32_t)(0x1095b0a8u));
  /* 10951287 call esi */
  call_ind((uint32_t)(ESI), 0x10951289u);
  /* 10951289 push 0x1095a390 */
  push32((uint32_t)(0x1095a390u));
  /* 1095128e push 0x1095af40 */
  push32((uint32_t)(0x1095af40u));
  /* 10951293 call esi */
  call_ind((uint32_t)(ESI), 0x10951295u);
  /* 10951295 mov esi, dword ptr [0x1095911c] */
  ESI = (r32((uint32_t)(0x1095911c)));
  /* 1095129b push 0x1095a388 */
  push32((uint32_t)(0x1095a388u));
  /* 109512a0 push 0x1095ae10 */
  push32((uint32_t)(0x1095ae10u));
  /* 109512a5 call esi */
  call_ind((uint32_t)(ESI), 0x109512a7u);
  /* 109512a7 push 0x1095a380 */
  push32((uint32_t)(0x1095a380u));
  /* 109512ac push 0x1095ae18 */
  push32((uint32_t)(0x1095ae18u));
  /* 109512b1 call esi */
  call_ind((uint32_t)(ESI), 0x109512b3u);
  /* 109512b3 push 0x1095a378 */
  push32((uint32_t)(0x1095a378u));
  /* 109512b8 push 0x1095ae20 */
  push32((uint32_t)(0x1095ae20u));
  /* 109512bd call esi */
  call_ind((uint32_t)(ESI), 0x109512bfu);
  /* 109512bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109512c2 push 0x1095a370 */
  push32((uint32_t)(0x1095a370u));
  /* 109512c7 push 0x1095b048 */
  push32((uint32_t)(0x1095b048u));
  /* 109512cc call esi */
  call_ind((uint32_t)(ESI), 0x109512ceu);
  /* 109512ce push 0x1095a368 */
  push32((uint32_t)(0x1095a368u));
  /* 109512d3 push 0x1095b050 */
  push32((uint32_t)(0x1095b050u));
  /* 109512d8 call esi */
  call_ind((uint32_t)(ESI), 0x109512dau);
  /* 109512da push 0x1095a360 */
  push32((uint32_t)(0x1095a360u));
  /* 109512df push 0x1095b060 */
  push32((uint32_t)(0x1095b060u));
  /* 109512e4 call esi */
  call_ind((uint32_t)(ESI), 0x109512e6u);
  /* 109512e6 push 0x1095a358 */
  push32((uint32_t)(0x1095a358u));
  /* 109512eb push 0x1095af68 */
  push32((uint32_t)(0x1095af68u));
  /* 109512f0 call esi */
  call_ind((uint32_t)(ESI), 0x109512f2u);
  /* 109512f2 push 0x1095a350 */
  push32((uint32_t)(0x1095a350u));
  /* 109512f7 push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 109512fc call esi */
  call_ind((uint32_t)(ESI), 0x109512feu);
  /* 109512fe push 0x1095a348 */
  push32((uint32_t)(0x1095a348u));
  /* 10951303 push 0x1095b030 */
  push32((uint32_t)(0x1095b030u));
  /* 10951308 call esi */
  call_ind((uint32_t)(ESI), 0x1095130au);
  /* 1095130a push 0x1095a340 */
  push32((uint32_t)(0x1095a340u));
  /* 1095130f push 0x1095b090 */
  push32((uint32_t)(0x1095b090u));
  /* 10951314 call esi */
  call_ind((uint32_t)(ESI), 0x10951316u);
  /* 10951316 push 0x1095a338 */
  push32((uint32_t)(0x1095a338u));
  /* 1095131b push 0x1095ad80 */
  push32((uint32_t)(0x1095ad80u));
  /* 10951320 call esi */
  call_ind((uint32_t)(ESI), 0x10951322u);
  /* 10951322 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951325 push 0x1095a330 */
  push32((uint32_t)(0x1095a330u));
  /* 1095132a push 0x1095ad90 */
  push32((uint32_t)(0x1095ad90u));
  /* 1095132f call esi */
  call_ind((uint32_t)(ESI), 0x10951331u);
  /* 10951331 push 0x1095a328 */
  push32((uint32_t)(0x1095a328u));
  /* 10951336 push 0x1095ad98 */
  push32((uint32_t)(0x1095ad98u));
  /* 1095133b call esi */
  call_ind((uint32_t)(ESI), 0x1095133du);
  /* 1095133d push 0x1095a320 */
  push32((uint32_t)(0x1095a320u));
  /* 10951342 push 0x1095ad88 */
  push32((uint32_t)(0x1095ad88u));
  /* 10951347 call esi */
  call_ind((uint32_t)(ESI), 0x10951349u);
  /* 10951349 push 0x1095a314 */
  push32((uint32_t)(0x1095a314u));
  /* 1095134e push 0x1095aee8 */
  push32((uint32_t)(0x1095aee8u));
  /* 10951353 call esi */
  call_ind((uint32_t)(ESI), 0x10951355u);
  /* 10951355 push 0x1095a308 */
  push32((uint32_t)(0x1095a308u));
  /* 1095135a push 0x1095aef8 */
  push32((uint32_t)(0x1095aef8u));
  /* 1095135f call esi */
  call_ind((uint32_t)(ESI), 0x10951361u);
  /* 10951361 push 0x1095a2fc */
  push32((uint32_t)(0x1095a2fcu));
  /* 10951366 push 0x1095ae98 */
  push32((uint32_t)(0x1095ae98u));
  /* 1095136b call esi */
  call_ind((uint32_t)(ESI), 0x1095136du);
  /* 1095136d push 0x1095a2f0 */
  push32((uint32_t)(0x1095a2f0u));
  /* 10951372 push 0x1095aec0 */
  push32((uint32_t)(0x1095aec0u));
  /* 10951377 call esi */
  call_ind((uint32_t)(ESI), 0x10951379u);
  /* 10951379 push 0x1095a2e4 */
  push32((uint32_t)(0x1095a2e4u));
  /* 1095137e push 0x1095aef0 */
  push32((uint32_t)(0x1095aef0u));
  /* 10951383 call esi */
  call_ind((uint32_t)(ESI), 0x10951385u);
  /* 10951385 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951388 push 0x1095a2d8 */
  push32((uint32_t)(0x1095a2d8u));
  /* 1095138d push 0x1095af00 */
  push32((uint32_t)(0x1095af00u));
  /* 10951392 call esi */
  call_ind((uint32_t)(ESI), 0x10951394u);
  /* 10951394 push 0x1095a2cc */
  push32((uint32_t)(0x1095a2ccu));
  /* 10951399 push 0x1095af10 */
  push32((uint32_t)(0x1095af10u));
  /* 1095139e call esi */
  call_ind((uint32_t)(ESI), 0x109513a0u);
  /* 109513a0 push 0x1095a2c0 */
  push32((uint32_t)(0x1095a2c0u));
  /* 109513a5 push 0x1095af28 */
  push32((uint32_t)(0x1095af28u));
  /* 109513aa call esi */
  call_ind((uint32_t)(ESI), 0x109513acu);
  /* 109513ac push 0x1095a2bc */
  push32((uint32_t)(0x1095a2bcu));
  /* 109513b1 push 0x1095b168 */
  push32((uint32_t)(0x1095b168u));
  /* 109513b6 call esi */
  call_ind((uint32_t)(ESI), 0x109513b8u);
  /* 109513b8 push 0x1095a2b8 */
  push32((uint32_t)(0x1095a2b8u));
  /* 109513bd push 0x1095b170 */
  push32((uint32_t)(0x1095b170u));
  /* 109513c2 call esi */
  call_ind((uint32_t)(ESI), 0x109513c4u);
  /* 109513c4 push 0x1095a2b4 */
  push32((uint32_t)(0x1095a2b4u));
  /* 109513c9 push 0x1095b178 */
  push32((uint32_t)(0x1095b178u));
  /* 109513ce call esi */
  call_ind((uint32_t)(ESI), 0x109513d0u);
  /* 109513d0 push 0x1095a2b0 */
  push32((uint32_t)(0x1095a2b0u));
  /* 109513d5 push 0x1095b180 */
  push32((uint32_t)(0x1095b180u));
  /* 109513da call esi */
  call_ind((uint32_t)(ESI), 0x109513dcu);
  /* 109513dc push 0x1095a2a8 */
  push32((uint32_t)(0x1095a2a8u));
  /* 109513e1 push 0x1095b0d8 */
  push32((uint32_t)(0x1095b0d8u));
  /* 109513e6 call esi */
  call_ind((uint32_t)(ESI), 0x109513e8u);
  /* 109513e8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109513eb push 0x1095a2a0 */
  push32((uint32_t)(0x1095a2a0u));
  /* 109513f0 push 0x1095b100 */
  push32((uint32_t)(0x1095b100u));
  /* 109513f5 call esi */
  call_ind((uint32_t)(ESI), 0x109513f7u);
  /* 109513f7 push 0x1095a298 */
  push32((uint32_t)(0x1095a298u));
  /* 109513fc push 0x1095b130 */
  push32((uint32_t)(0x1095b130u));
  /* 10951401 call esi */
  call_ind((uint32_t)(ESI), 0x10951403u);
  /* 10951403 push 0x1095a290 */
  push32((uint32_t)(0x1095a290u));
  /* 10951408 push 0x1095b160 */
  push32((uint32_t)(0x1095b160u));
  /* 1095140d call esi */
  call_ind((uint32_t)(ESI), 0x1095140fu);
  /* 1095140f push 0x1095a288 */
  push32((uint32_t)(0x1095a288u));
  /* 10951414 push 0x1095afe8 */
  push32((uint32_t)(0x1095afe8u));
  /* 10951419 call esi */
  call_ind((uint32_t)(ESI), 0x1095141bu);
  /* 1095141b push 0x1095a280 */
  push32((uint32_t)(0x1095a280u));
  /* 10951420 push 0x1095b000 */
  push32((uint32_t)(0x1095b000u));
  /* 10951425 call esi */
  call_ind((uint32_t)(ESI), 0x10951427u);
  /* 10951427 push 0x1095a278 */
  push32((uint32_t)(0x1095a278u));
  /* 1095142c push 0x1095b020 */
  push32((uint32_t)(0x1095b020u));
  /* 10951431 call esi */
  call_ind((uint32_t)(ESI), 0x10951433u);
  /* 10951433 push 0x1095a270 */
  push32((uint32_t)(0x1095a270u));
  /* 10951438 push 0x1095b028 */
  push32((uint32_t)(0x1095b028u));
  /* 1095143d call esi */
  call_ind((uint32_t)(ESI), 0x1095143fu);
  /* 1095143f push 0x1095a260 */
  push32((uint32_t)(0x1095a260u));
  /* 10951444 push 0x1095adb8 */
  push32((uint32_t)(0x1095adb8u));
  /* 10951449 call esi */
  call_ind((uint32_t)(ESI), 0x1095144bu);
  /* 1095144b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095144e push 0x1095a24c */
  push32((uint32_t)(0x1095a24cu));
  /* 10951453 push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 10951458 call esi */
  call_ind((uint32_t)(ESI), 0x1095145au);
  /* 1095145a push 0x1095a238 */
  push32((uint32_t)(0x1095a238u));
  /* 1095145f push 0x1095aea0 */
  push32((uint32_t)(0x1095aea0u));
  /* 10951464 call esi */
  call_ind((uint32_t)(ESI), 0x10951466u);
  /* 10951466 push 0x1095a228 */
  push32((uint32_t)(0x1095a228u));
  /* 1095146b push 0x1095ada8 */
  push32((uint32_t)(0x1095ada8u));
  /* 10951470 call esi */
  call_ind((uint32_t)(ESI), 0x10951472u);
  /* 10951472 push 0x1095a214 */
  push32((uint32_t)(0x1095a214u));
  /* 10951477 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 1095147c call esi */
  call_ind((uint32_t)(ESI), 0x1095147eu);
  /* 1095147e push 0x1095a200 */
  push32((uint32_t)(0x1095a200u));
  /* 10951483 push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 10951488 call esi */
  call_ind((uint32_t)(ESI), 0x1095148au);
  /* 1095148a push 0x1095a1f8 */
  push32((uint32_t)(0x1095a1f8u));
  /* 1095148f push 0x1095b008 */
  push32((uint32_t)(0x1095b008u));
  /* 10951494 call esi */
  call_ind((uint32_t)(ESI), 0x10951496u);
  /* 10951496 push 0x1095a1f0 */
  push32((uint32_t)(0x1095a1f0u));
  /* 1095149b push 0x1095b010 */
  push32((uint32_t)(0x1095b010u));
  /* 109514a0 call esi */
  call_ind((uint32_t)(ESI), 0x109514a2u);
  /* 109514a2 push 0x1095a1e8 */
  push32((uint32_t)(0x1095a1e8u));
  /* 109514a7 push 0x1095af50 */
  push32((uint32_t)(0x1095af50u));
  /* 109514ac call esi */
  call_ind((uint32_t)(ESI), 0x109514aeu);
  /* 109514ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109514b1 push 0x1095a1e0 */
  push32((uint32_t)(0x1095a1e0u));
  /* 109514b6 push 0x1095b190 */
  push32((uint32_t)(0x1095b190u));
  /* 109514bb call esi */
  call_ind((uint32_t)(ESI), 0x109514bdu);
  /* 109514bd push 0x1095a1d4 */
  push32((uint32_t)(0x1095a1d4u));
  /* 109514c2 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109514c7 call esi */
  call_ind((uint32_t)(ESI), 0x109514c9u);
  /* 109514c9 push 0x1095a1c8 */
  push32((uint32_t)(0x1095a1c8u));
  /* 109514ce push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109514d3 call esi */
  call_ind((uint32_t)(ESI), 0x109514d5u);
  /* 109514d5 push 0x1095a1bc */
  push32((uint32_t)(0x1095a1bcu));
  /* 109514da push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109514df call esi */
  call_ind((uint32_t)(ESI), 0x109514e1u);
  /* 109514e1 push 0x1095a1b0 */
  push32((uint32_t)(0x1095a1b0u));
  /* 109514e6 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109514eb call esi */
  call_ind((uint32_t)(ESI), 0x109514edu);
  /* 109514ed push 0x1095a1a8 */
  push32((uint32_t)(0x1095a1a8u));
  /* 109514f2 push 0x1095ad58 */
  push32((uint32_t)(0x1095ad58u));
  /* 109514f7 call esi */
  call_ind((uint32_t)(ESI), 0x109514f9u);
  /* 109514f9 push 0x1095a1a0 */
  push32((uint32_t)(0x1095a1a0u));
  /* 109514fe push 0x1095ad60 */
  push32((uint32_t)(0x1095ad60u));
  /* 10951503 call esi */
  call_ind((uint32_t)(ESI), 0x10951505u);
  /* 10951505 push 0x1095a198 */
  push32((uint32_t)(0x1095a198u));
  /* 1095150a push 0x1095ad70 */
  push32((uint32_t)(0x1095ad70u));
  /* 1095150f call esi */
  call_ind((uint32_t)(ESI), 0x10951511u);
  /* 10951511 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951514 push 0x1095a18c */
  push32((uint32_t)(0x1095a18cu));
  /* 10951519 push 0x1095ae58 */
  push32((uint32_t)(0x1095ae58u));
  /* 1095151e call esi */
  call_ind((uint32_t)(ESI), 0x10951520u);
  /* 10951520 push 0x1095a180 */
  push32((uint32_t)(0x1095a180u));
  /* 10951525 push 0x1095ae50 */
  push32((uint32_t)(0x1095ae50u));
  /* 1095152a call esi */
  call_ind((uint32_t)(ESI), 0x1095152cu);
  /* 1095152c push 0x1095a174 */
  push32((uint32_t)(0x1095a174u));
  /* 10951531 push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 10951536 call esi */
  call_ind((uint32_t)(ESI), 0x10951538u);
  /* 10951538 push 0x1095a168 */
  push32((uint32_t)(0x1095a168u));
  /* 1095153d push 0x1095ae68 */
  push32((uint32_t)(0x1095ae68u));
  /* 10951542 call esi */
  call_ind((uint32_t)(ESI), 0x10951544u);
  /* 10951544 push 0x1095a15c */
  push32((uint32_t)(0x1095a15cu));
  /* 10951549 push 0x1095ae28 */
  push32((uint32_t)(0x1095ae28u));
  /* 1095154e call esi */
  call_ind((uint32_t)(ESI), 0x10951550u);
  /* 10951550 push 0x1095a150 */
  push32((uint32_t)(0x1095a150u));
  /* 10951555 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 1095155a call esi */
  call_ind((uint32_t)(ESI), 0x1095155cu);
  /* 1095155c push 0x1095a144 */
  push32((uint32_t)(0x1095a144u));
  /* 10951561 push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10951566 call esi */
  call_ind((uint32_t)(ESI), 0x10951568u);
  /* 10951568 push 0x1095a138 */
  push32((uint32_t)(0x1095a138u));
  /* 1095156d push 0x1095ae40 */
  push32((uint32_t)(0x1095ae40u));
  /* 10951572 call esi */
  call_ind((uint32_t)(ESI), 0x10951574u);
  /* 10951574 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951577 push 0x1095a12c */
  push32((uint32_t)(0x1095a12cu));
  /* 1095157c push 0x1095ae48 */
  push32((uint32_t)(0x1095ae48u));
  /* 10951581 call esi */
  call_ind((uint32_t)(ESI), 0x10951583u);
  /* 10951583 push 0x1095a124 */
  push32((uint32_t)(0x1095a124u));
  /* 10951588 push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 1095158d call esi */
  call_ind((uint32_t)(ESI), 0x1095158fu);
  /* 1095158f push 0x1095a11c */
  push32((uint32_t)(0x1095a11cu));
  /* 10951594 push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10951599 call esi */
  call_ind((uint32_t)(ESI), 0x1095159bu);
  /* 1095159b push 0x1095a114 */
  push32((uint32_t)(0x1095a114u));
  /* 109515a0 push 0x1095b0b8 */
  push32((uint32_t)(0x1095b0b8u));
  /* 109515a5 call esi */
  call_ind((uint32_t)(ESI), 0x109515a7u);
  /* 109515a7 push 0x1095a10c */
  push32((uint32_t)(0x1095a10cu));
  /* 109515ac push 0x1095b0c0 */
  push32((uint32_t)(0x1095b0c0u));
  /* 109515b1 call esi */
  call_ind((uint32_t)(ESI), 0x109515b3u);
  /* 109515b3 push 0x1095a104 */
  push32((uint32_t)(0x1095a104u));
  /* 109515b8 push 0x1095b120 */
  push32((uint32_t)(0x1095b120u));
  /* 109515bd call esi */
  call_ind((uint32_t)(ESI), 0x109515bfu);
  /* 109515bf push 0x1095a0fc */
  push32((uint32_t)(0x1095a0fcu));
  /* 109515c4 push 0x1095b128 */
  push32((uint32_t)(0x1095b128u));
  /* 109515c9 call esi */
  call_ind((uint32_t)(ESI), 0x109515cbu);
  /* 109515cb push 0x1095a0f4 */
  push32((uint32_t)(0x1095a0f4u));
  /* 109515d0 push 0x1095b138 */
  push32((uint32_t)(0x1095b138u));
  /* 109515d5 call esi */
  call_ind((uint32_t)(ESI), 0x109515d7u);
  /* 109515d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109515da push 0x1095a0ec */
  push32((uint32_t)(0x1095a0ecu));
  /* 109515df push 0x1095b140 */
  push32((uint32_t)(0x1095b140u));
  /* 109515e4 call esi */
  call_ind((uint32_t)(ESI), 0x109515e6u);
  /* 109515e6 push 0x1095a0e4 */
  push32((uint32_t)(0x1095a0e4u));
  /* 109515eb push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 109515f0 call esi */
  call_ind((uint32_t)(ESI), 0x109515f2u);
  /* 109515f2 push 0x1095a0dc */
  push32((uint32_t)(0x1095a0dcu));
  /* 109515f7 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 109515fc call esi */
  call_ind((uint32_t)(ESI), 0x109515feu);
  /* 109515fe push 0x1095a0d4 */
  push32((uint32_t)(0x1095a0d4u));
  /* 10951603 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 10951608 call esi */
  call_ind((uint32_t)(ESI), 0x1095160au);
  /* 1095160a push 0x1095a0cc */
  push32((uint32_t)(0x1095a0ccu));
  /* 1095160f push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 10951614 call esi */
  call_ind((uint32_t)(ESI), 0x10951616u);
  /* 10951616 push 0x1095a0c4 */
  push32((uint32_t)(0x1095a0c4u));
  /* 1095161b push 0x1095b150 */
  push32((uint32_t)(0x1095b150u));
  /* 10951620 call esi */
  call_ind((uint32_t)(ESI), 0x10951622u);
  /* 10951622 push 0x1095a0b8 */
  push32((uint32_t)(0x1095a0b8u));
  /* 10951627 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 1095162c call esi */
  call_ind((uint32_t)(ESI), 0x1095162eu);
  /* 1095162e push 0x1095a0ac */
  push32((uint32_t)(0x1095a0acu));
  /* 10951633 push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10951638 call esi */
  call_ind((uint32_t)(ESI), 0x1095163au);
  /* 1095163a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095163d push 0x1095a0a0 */
  push32((uint32_t)(0x1095a0a0u));
  /* 10951642 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10951647 call esi */
  call_ind((uint32_t)(ESI), 0x10951649u);
  /* 10951649 push 0x1095a094 */
  push32((uint32_t)(0x1095a094u));
  /* 1095164e push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10951653 call esi */
  call_ind((uint32_t)(ESI), 0x10951655u);
  /* 10951655 push 0x1095a088 */
  push32((uint32_t)(0x1095a088u));
  /* 1095165a push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 1095165f call esi */
  call_ind((uint32_t)(ESI), 0x10951661u);
  /* 10951661 push 0x1095a07c */
  push32((uint32_t)(0x1095a07cu));
  /* 10951666 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 1095166b call esi */
  call_ind((uint32_t)(ESI), 0x1095166du);
  /* 1095166d push 0x1095a070 */
  push32((uint32_t)(0x1095a070u));
  /* 10951672 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10951677 call esi */
  call_ind((uint32_t)(ESI), 0x10951679u);
  /* 10951679 push 0x1095a068 */
  push32((uint32_t)(0x1095a068u));
  /* 1095167e push 0x1095afe0 */
  push32((uint32_t)(0x1095afe0u));
  /* 10951683 call esi */
  call_ind((uint32_t)(ESI), 0x10951685u);
  /* 10951685 push 0x1095a060 */
  push32((uint32_t)(0x1095a060u));
  /* 1095168a push 0x1095aff0 */
  push32((uint32_t)(0x1095aff0u));
  /* 1095168f call esi */
  call_ind((uint32_t)(ESI), 0x10951691u);
  /* 10951691 push 0x1095a058 */
  push32((uint32_t)(0x1095a058u));
  /* 10951696 push 0x1095aff8 */
  push32((uint32_t)(0x1095aff8u));
  /* 1095169b call esi */
  call_ind((uint32_t)(ESI), 0x1095169du);
  /* 1095169d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109516a0 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 109516a5 call dword ptr [0x10959120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959120))), 0x109516abu);
  /* 109516ab push 0x1095a04c */
  push32((uint32_t)(0x1095a04cu));
  /* 109516b0 push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 109516b5 call dword ptr [0x10959124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959124))), 0x109516bbu);
  /* 109516bb push 0x1095a044 */
  push32((uint32_t)(0x1095a044u));
  /* 109516c0 push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 109516c5 call dword ptr [0x10959128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959128))), 0x109516cbu);
  /* 109516cb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109516cd push 0 */
  push32((uint32_t)(0x0u));
  /* 109516cf call dword ptr [0x1095912c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095912c))), 0x109516d5u);
  /* 109516d5 mov esi, dword ptr [0x10959130] */
  ESI = (r32((uint32_t)(0x10959130)));
  /* 109516db push 0x1095a038 */
  push32((uint32_t)(0x1095a038u));
  /* 109516e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109516e2 call esi */
  call_ind((uint32_t)(ESI), 0x109516e4u);
  /* 109516e4 push 0x1095a030 */
  push32((uint32_t)(0x1095a030u));
  /* 109516e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109516eb call esi */
  call_ind((uint32_t)(ESI), 0x109516edu);
  /* 109516ed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109516f0 pop esi */
  ESI = (pop32());
  /* 109516f1 ret  */
  ESPCHK(0x10951000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001700 @ 0x10951700 (20 bytes, 6 insns) */
void f_10951700(void) {
  FTRACE(0x10951700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10951700 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10951704 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10951705 jne 0x1095170c */
  if (!C.zf) goto L_1095170c;
  /* 10951707 call 0x10951000 */
  push32(0x1095170cu); f_10951000();
L_1095170c:;
  /* 1095170c mov eax, 1 */
  EAX = (0x1u);
  /* 10951711 ret 0xc */
  ESPCHK(0x10951700u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10951720 (18924 bytes, 5896 insns) [2 switch table(s)] */
void f_10951720(void) {
  FTRACE(0x10951720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10951720 push ecx */
  push32((uint32_t)(ECX));
  /* 10951721 push ebx */
  push32((uint32_t)(EBX));
  /* 10951722 push ebp */
  push32((uint32_t)(EBP));
  /* 10951723 push esi */
  push32((uint32_t)(ESI));
  /* 10951724 push edi */
  push32((uint32_t)(EDI));
  /* 10951725 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951727 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095172du);
  /* 1095172d mov ebx, dword ptr [0x109590b4] */
  EBX = (r32((uint32_t)(0x109590b4)));
  /* 10951733 mov esi, dword ptr [0x109590b8] */
  ESI = (r32((uint32_t)(0x109590b8)));
  /* 10951739 mov edi, dword ptr [0x109590bc] */
  EDI = (r32((uint32_t)(0x109590bc)));
  /* 1095173f mov ebp, dword ptr [0x109590c0] */
  EBP = (r32((uint32_t)(0x109590c0)));
  /* 10951745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951748 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095174a je 0x10951f24 */
  if (C.zf) goto L_10951f24;
  /* 10951750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951752 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951754 call ebx */
  call_ind((uint32_t)(EBX), 0x10951756u);
  /* 10951756 push 0xea60 */
  push32((uint32_t)(0xea60u));
  /* 1095175b push 3 */
  push32((uint32_t)(0x3u));
  /* 1095175d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095175f call esi */
  call_ind((uint32_t)(ESI), 0x10951761u);
  /* 10951761 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10951766 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095176a call esi */
  call_ind((uint32_t)(ESI), 0x1095176cu);
  /* 1095176c push 0xafc8 */
  push32((uint32_t)(0xafc8u));
  /* 10951771 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951773 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951775 call esi */
  call_ind((uint32_t)(ESI), 0x10951777u);
  /* 10951777 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1095177c push 2 */
  push32((uint32_t)(0x2u));
  /* 1095177e push 0 */
  push32((uint32_t)(0x0u));
  /* 10951780 call esi */
  call_ind((uint32_t)(ESI), 0x10951782u);
  /* 10951782 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10951787 push 5 */
  push32((uint32_t)(0x5u));
  /* 10951789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095178b call esi */
  call_ind((uint32_t)(ESI), 0x1095178du);
  /* 1095178d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951790 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10951795 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951799 call esi */
  call_ind((uint32_t)(ESI), 0x1095179bu);
  /* 1095179b push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 109517a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109517a4 call esi */
  call_ind((uint32_t)(ESI), 0x109517a6u);
  /* 109517a6 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517ab push 1 */
  push32((uint32_t)(0x1u));
  /* 109517ad push 1 */
  push32((uint32_t)(0x1u));
  /* 109517af call esi */
  call_ind((uint32_t)(ESI), 0x109517b1u);
  /* 109517b1 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109517b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109517ba call esi */
  call_ind((uint32_t)(ESI), 0x109517bcu);
  /* 109517bc push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109517c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109517c5 call esi */
  call_ind((uint32_t)(ESI), 0x109517c7u);
  /* 109517c7 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517cc push 5 */
  push32((uint32_t)(0x5u));
  /* 109517ce push 1 */
  push32((uint32_t)(0x1u));
  /* 109517d0 call esi */
  call_ind((uint32_t)(ESI), 0x109517d2u);
  /* 109517d2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109517d5 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517da push 4 */
  push32((uint32_t)(0x4u));
  /* 109517dc push 1 */
  push32((uint32_t)(0x1u));
  /* 109517de call esi */
  call_ind((uint32_t)(ESI), 0x109517e0u);
  /* 109517e0 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 109517e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109517e9 call esi */
  call_ind((uint32_t)(ESI), 0x109517ebu);
  /* 109517eb push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109517f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109517f4 call esi */
  call_ind((uint32_t)(ESI), 0x109517f6u);
  /* 109517f6 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109517fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109517fd push 2 */
  push32((uint32_t)(0x2u));
  /* 109517ff call esi */
  call_ind((uint32_t)(ESI), 0x10951801u);
  /* 10951801 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10951806 push 2 */
  push32((uint32_t)(0x2u));
  /* 10951808 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095180a call esi */
  call_ind((uint32_t)(ESI), 0x1095180cu);
  /* 1095180c push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10951811 push 5 */
  push32((uint32_t)(0x5u));
  /* 10951813 push 2 */
  push32((uint32_t)(0x2u));
  /* 10951815 call esi */
  call_ind((uint32_t)(ESI), 0x10951817u);
  /* 10951817 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095181a push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1095181f push 4 */
  push32((uint32_t)(0x4u));
  /* 10951821 push 2 */
  push32((uint32_t)(0x2u));
  /* 10951823 call esi */
  call_ind((uint32_t)(ESI), 0x10951825u);
  /* 10951825 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1095182a push 3 */
  push32((uint32_t)(0x3u));
  /* 1095182c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095182e call esi */
  call_ind((uint32_t)(ESI), 0x10951830u);
  /* 10951830 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10951835 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951837 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951839 call esi */
  call_ind((uint32_t)(ESI), 0x1095183bu);
  /* 1095183b push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10951840 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951842 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951844 call esi */
  call_ind((uint32_t)(ESI), 0x10951846u);
  /* 10951846 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1095184b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095184d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095184f call esi */
  call_ind((uint32_t)(ESI), 0x10951851u);
  /* 10951851 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10951856 push 5 */
  push32((uint32_t)(0x5u));
  /* 10951858 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095185a call esi */
  call_ind((uint32_t)(ESI), 0x1095185cu);
  /* 1095185c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095185f push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10951864 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951866 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951868 call esi */
  call_ind((uint32_t)(ESI), 0x1095186au);
  /* 1095186a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1095186c push esi */
  push32((uint32_t)(ESI));
  /* 1095186d push 0xa */
  push32((uint32_t)(0xau));
  /* 1095186f mov dword ptr [0x1095af30], esi */
  w32((uint32_t)(0x1095af30), (ESI));
  /* 10951875 mov dword ptr [0x1095af34], esi */
  w32((uint32_t)(0x1095af34), (ESI));
  /* 1095187b mov dword ptr [0x1095af38], esi */
  w32((uint32_t)(0x1095af38), (ESI));
  /* 10951881 mov dword ptr [0x1095adc0], esi */
  w32((uint32_t)(0x1095adc0), (ESI));
  /* 10951887 mov dword ptr [0x1095ada0], esi */
  w32((uint32_t)(0x1095ada0), (ESI));
  /* 1095188d mov dword ptr [0x1095adc4], esi */
  w32((uint32_t)(0x1095adc4), (ESI));
  /* 10951893 mov dword ptr [0x1095ada4], esi */
  w32((uint32_t)(0x1095ada4), (ESI));
  /* 10951899 mov dword ptr [0x1095adf0], esi */
  w32((uint32_t)(0x1095adf0), (ESI));
  /* 1095189f call ebx */
  call_ind((uint32_t)(EBX), 0x109518a1u);
  /* 109518a1 push esi */
  push32((uint32_t)(ESI));
  /* 109518a2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109518a4 call ebx */
  call_ind((uint32_t)(EBX), 0x109518a6u);
  /* 109518a6 mov esi, dword ptr [0x109590c4] */
  ESI = (r32((uint32_t)(0x109590c4)));
  /* 109518ac push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109518b1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109518b3 call esi */
  call_ind((uint32_t)(ESI), 0x109518b5u);
  /* 109518b5 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109518ba push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109518bc call esi */
  call_ind((uint32_t)(ESI), 0x109518beu);
  /* 109518be push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109518c3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109518c5 call esi */
  call_ind((uint32_t)(ESI), 0x109518c7u);
  /* 109518c7 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 109518cc push 0xf */
  push32((uint32_t)(0xfu));
  /* 109518ce call esi */
  call_ind((uint32_t)(ESI), 0x109518d0u);
  /* 109518d0 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 109518d5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109518d7 call esi */
  call_ind((uint32_t)(ESI), 0x109518d9u);
  /* 109518d9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109518dc push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 109518e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 109518e3 call esi */
  call_ind((uint32_t)(ESI), 0x109518e5u);
  /* 109518e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109518e7 push 0x1095b1d8 */
  push32((uint32_t)(0x1095b1d8u));
  /* 109518ec call edi */
  call_ind((uint32_t)(EDI), 0x109518eeu);
  /* 109518ee push 1 */
  push32((uint32_t)(0x1u));
  /* 109518f0 call dword ptr [0x109590c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c8))), 0x109518f6u);
  /* 109518f6 push 0x1095aa20 */
  push32((uint32_t)(0x1095aa20u));
  /* 109518fb call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x10951901u);
  /* 10951901 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951903 call dword ptr [0x109590d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590d0))), 0x10951909u);
  /* 10951909 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095190c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095190f jne 0x10951a0e */
  if (!C.zf) goto L_10951a0e;
  /* 10951915 push 0x1095aa0c */
  push32((uint32_t)(0x1095aa0cu));
  /* 1095191a push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 1095191f call ebp */
  call_ind((uint32_t)(EBP), 0x10951921u);
  /* 10951921 push 0x1095a9f8 */
  push32((uint32_t)(0x1095a9f8u));
  /* 10951926 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 1095192b call ebp */
  call_ind((uint32_t)(EBP), 0x1095192du);
  /* 1095192d push 0x1095a9e4 */
  push32((uint32_t)(0x1095a9e4u));
  /* 10951932 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951937 call ebp */
  call_ind((uint32_t)(EBP), 0x10951939u);
  /* 10951939 push 0x1095a9d0 */
  push32((uint32_t)(0x1095a9d0u));
  /* 1095193e push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951943 call ebp */
  call_ind((uint32_t)(EBP), 0x10951945u);
  /* 10951945 push 0x1095a9bc */
  push32((uint32_t)(0x1095a9bcu));
  /* 1095194a push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 1095194f call ebp */
  call_ind((uint32_t)(EBP), 0x10951951u);
  /* 10951951 push 0x1095a9a8 */
  push32((uint32_t)(0x1095a9a8u));
  /* 10951956 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 1095195b call ebp */
  call_ind((uint32_t)(EBP), 0x1095195du);
  /* 1095195d push 0x1095a994 */
  push32((uint32_t)(0x1095a994u));
  /* 10951962 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951967 call ebp */
  call_ind((uint32_t)(EBP), 0x10951969u);
  /* 10951969 push 0x1095a980 */
  push32((uint32_t)(0x1095a980u));
  /* 1095196e push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951973 call ebp */
  call_ind((uint32_t)(EBP), 0x10951975u);
  /* 10951975 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951978 push 0x1095a964 */
  push32((uint32_t)(0x1095a964u));
  /* 1095197d push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951982 call ebp */
  call_ind((uint32_t)(EBP), 0x10951984u);
  /* 10951984 push 0x1095a948 */
  push32((uint32_t)(0x1095a948u));
  /* 10951989 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 1095198e call ebp */
  call_ind((uint32_t)(EBP), 0x10951990u);
  /* 10951990 push 0x1095a92c */
  push32((uint32_t)(0x1095a92cu));
  /* 10951995 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 1095199a call ebp */
  call_ind((uint32_t)(EBP), 0x1095199cu);
  /* 1095199c push 0x1095a910 */
  push32((uint32_t)(0x1095a910u));
  /* 109519a1 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519a6 call ebp */
  call_ind((uint32_t)(EBP), 0x109519a8u);
  /* 109519a8 push 0x1095a8f4 */
  push32((uint32_t)(0x1095a8f4u));
  /* 109519ad push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519b2 call ebp */
  call_ind((uint32_t)(EBP), 0x109519b4u);
  /* 109519b4 push 0x1095a8d8 */
  push32((uint32_t)(0x1095a8d8u));
  /* 109519b9 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519be call ebp */
  call_ind((uint32_t)(EBP), 0x109519c0u);
  /* 109519c0 push 0x1095a8c4 */
  push32((uint32_t)(0x1095a8c4u));
  /* 109519c5 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519ca call ebp */
  call_ind((uint32_t)(EBP), 0x109519ccu);
  /* 109519cc push 0x1095a8ac */
  push32((uint32_t)(0x1095a8acu));
  /* 109519d1 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519d6 call ebp */
  call_ind((uint32_t)(EBP), 0x109519d8u);
  /* 109519d8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109519db push 0x1095a894 */
  push32((uint32_t)(0x1095a894u));
  /* 109519e0 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519e5 call ebp */
  call_ind((uint32_t)(EBP), 0x109519e7u);
  /* 109519e7 push 0x1095a87c */
  push32((uint32_t)(0x1095a87cu));
  /* 109519ec push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519f1 call ebp */
  call_ind((uint32_t)(EBP), 0x109519f3u);
  /* 109519f3 push 0x1095a864 */
  push32((uint32_t)(0x1095a864u));
  /* 109519f8 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 109519fd call ebp */
  call_ind((uint32_t)(EBP), 0x109519ffu);
  /* 109519ff push 0x1095a84c */
  push32((uint32_t)(0x1095a84cu));
  /* 10951a04 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951a09 call ebp */
  call_ind((uint32_t)(EBP), 0x10951a0bu);
  /* 10951a0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10951a0e:;
  /* 10951a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10951a10 call dword ptr [0x109590d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590d0))), 0x10951a16u);
  /* 10951a16 mov esi, dword ptr [0x109590d4] */
  ESI = (r32((uint32_t)(0x109590d4)));
  /* 10951a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951a1f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10951a22 jne 0x10951b3e */
  if (!C.zf) goto L_10951b3e;
  /* 10951a28 push 0x1095aa0c */
  push32((uint32_t)(0x1095aa0cu));
  /* 10951a2d push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a32 call ebp */
  call_ind((uint32_t)(EBP), 0x10951a34u);
  /* 10951a34 push 0x1095a9f8 */
  push32((uint32_t)(0x1095a9f8u));
  /* 10951a39 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a3e call ebp */
  call_ind((uint32_t)(EBP), 0x10951a40u);
  /* 10951a40 push 0x1095a9e4 */
  push32((uint32_t)(0x1095a9e4u));
  /* 10951a45 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a4a call ebp */
  call_ind((uint32_t)(EBP), 0x10951a4cu);
  /* 10951a4c push 0x1095a9d0 */
  push32((uint32_t)(0x1095a9d0u));
  /* 10951a51 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a56 call ebp */
  call_ind((uint32_t)(EBP), 0x10951a58u);
  /* 10951a58 push 0x1095a838 */
  push32((uint32_t)(0x1095a838u));
  /* 10951a5d push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a62 call ebp */
  call_ind((uint32_t)(EBP), 0x10951a64u);
  /* 10951a64 push 0x1095a824 */
  push32((uint32_t)(0x1095a824u));
  /* 10951a69 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a6e call ebp */
  call_ind((uint32_t)(EBP), 0x10951a70u);
  /* 10951a70 push 0x1095a9bc */
  push32((uint32_t)(0x1095a9bcu));
  /* 10951a75 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a7a call ebp */
  call_ind((uint32_t)(EBP), 0x10951a7cu);
  /* 10951a7c push 0x1095a9a8 */
  push32((uint32_t)(0x1095a9a8u));
  /* 10951a81 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a86 call ebp */
  call_ind((uint32_t)(EBP), 0x10951a88u);
  /* 10951a88 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951a8b push 0x1095a994 */
  push32((uint32_t)(0x1095a994u));
  /* 10951a90 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951a95 call ebp */
  call_ind((uint32_t)(EBP), 0x10951a97u);
  /* 10951a97 push 0x1095a980 */
  push32((uint32_t)(0x1095a980u));
  /* 10951a9c push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951aa1 call ebp */
  call_ind((uint32_t)(EBP), 0x10951aa3u);
  /* 10951aa3 push 0x1095a810 */
  push32((uint32_t)(0x1095a810u));
  /* 10951aa8 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951aad call ebp */
  call_ind((uint32_t)(EBP), 0x10951aafu);
  /* 10951aaf push 0x1095a7fc */
  push32((uint32_t)(0x1095a7fcu));
  /* 10951ab4 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ab9 call ebp */
  call_ind((uint32_t)(EBP), 0x10951abbu);
  /* 10951abb push 0x1095a7e8 */
  push32((uint32_t)(0x1095a7e8u));
  /* 10951ac0 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ac5 call ebp */
  call_ind((uint32_t)(EBP), 0x10951ac7u);
  /* 10951ac7 push 0x1095a7d4 */
  push32((uint32_t)(0x1095a7d4u));
  /* 10951acc push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ad1 call ebp */
  call_ind((uint32_t)(EBP), 0x10951ad3u);
  /* 10951ad3 push 0x1095a7c0 */
  push32((uint32_t)(0x1095a7c0u));
  /* 10951ad8 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951add call ebp */
  call_ind((uint32_t)(EBP), 0x10951adfu);
  /* 10951adf push 0x1095a7ac */
  push32((uint32_t)(0x1095a7acu));
  /* 10951ae4 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ae9 call ebp */
  call_ind((uint32_t)(EBP), 0x10951aebu);
  /* 10951aeb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951aee push 0x1095a798 */
  push32((uint32_t)(0x1095a798u));
  /* 10951af3 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951af8 call ebp */
  call_ind((uint32_t)(EBP), 0x10951afau);
  /* 10951afa push 0x1095a964 */
  push32((uint32_t)(0x1095a964u));
  /* 10951aff push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951b04 call ebp */
  call_ind((uint32_t)(EBP), 0x10951b06u);
  /* 10951b06 push 0x1095a948 */
  push32((uint32_t)(0x1095a948u));
  /* 10951b0b push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951b10 call ebp */
  call_ind((uint32_t)(EBP), 0x10951b12u);
  /* 10951b12 push 0x1095a92c */
  push32((uint32_t)(0x1095a92cu));
  /* 10951b17 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951b1c call ebp */
  call_ind((uint32_t)(EBP), 0x10951b1eu);
  /* 10951b1e push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10951b23 push 0x1095afe0 */
  push32((uint32_t)(0x1095afe0u));
  /* 10951b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951b2a push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 10951b2f push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 10951b34 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 10951b39 call esi */
  call_ind((uint32_t)(ESI), 0x10951b3bu);
  /* 10951b3b add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10951b3e:;
  /* 10951b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10951b40 call dword ptr [0x109590d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590d0))), 0x10951b46u);
  /* 10951b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10951b4c jne 0x10951ca0 */
  if (!C.zf) goto L_10951ca0;
  /* 10951b52 push 0x1095aa0c */
  push32((uint32_t)(0x1095aa0cu));
  /* 10951b57 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951b5c call ebp */
  call_ind((uint32_t)(EBP), 0x10951b5eu);
  /* 10951b5e push 0x1095a9f8 */
  push32((uint32_t)(0x1095a9f8u));
  /* 10951b63 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951b68 call ebp */
  call_ind((uint32_t)(EBP), 0x10951b6au);
  /* 10951b6a push 0x1095a9e4 */
  push32((uint32_t)(0x1095a9e4u));
  /* 10951b6f push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951b74 call ebp */
  call_ind((uint32_t)(EBP), 0x10951b76u);
  /* 10951b76 push 0x1095a9d0 */
  push32((uint32_t)(0x1095a9d0u));
  /* 10951b7b push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951b80 call ebp */
  call_ind((uint32_t)(EBP), 0x10951b82u);
  /* 10951b82 push 0x1095a838 */
  push32((uint32_t)(0x1095a838u));
  /* 10951b87 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951b8c call ebp */
  call_ind((uint32_t)(EBP), 0x10951b8eu);
  /* 10951b8e push 0x1095a824 */
  push32((uint32_t)(0x1095a824u));
  /* 10951b93 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951b98 call ebp */
  call_ind((uint32_t)(EBP), 0x10951b9au);
  /* 10951b9a push 0x1095a9bc */
  push32((uint32_t)(0x1095a9bcu));
  /* 10951b9f push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ba4 call ebp */
  call_ind((uint32_t)(EBP), 0x10951ba6u);
  /* 10951ba6 push 0x1095a9a8 */
  push32((uint32_t)(0x1095a9a8u));
  /* 10951bab push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951bb0 call ebp */
  call_ind((uint32_t)(EBP), 0x10951bb2u);
  /* 10951bb2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951bb5 push 0x1095a994 */
  push32((uint32_t)(0x1095a994u));
  /* 10951bba push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951bbf call ebp */
  call_ind((uint32_t)(EBP), 0x10951bc1u);
  /* 10951bc1 push 0x1095a980 */
  push32((uint32_t)(0x1095a980u));
  /* 10951bc6 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951bcb call ebp */
  call_ind((uint32_t)(EBP), 0x10951bcdu);
  /* 10951bcd push 0x1095a810 */
  push32((uint32_t)(0x1095a810u));
  /* 10951bd2 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951bd7 call ebp */
  call_ind((uint32_t)(EBP), 0x10951bd9u);
  /* 10951bd9 push 0x1095a7fc */
  push32((uint32_t)(0x1095a7fcu));
  /* 10951bde push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951be3 call ebp */
  call_ind((uint32_t)(EBP), 0x10951be5u);
  /* 10951be5 push 0x1095a7e8 */
  push32((uint32_t)(0x1095a7e8u));
  /* 10951bea push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951bef call ebp */
  call_ind((uint32_t)(EBP), 0x10951bf1u);
  /* 10951bf1 push 0x1095a7d4 */
  push32((uint32_t)(0x1095a7d4u));
  /* 10951bf6 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951bfb call ebp */
  call_ind((uint32_t)(EBP), 0x10951bfdu);
  /* 10951bfd push 0x1095a7c0 */
  push32((uint32_t)(0x1095a7c0u));
  /* 10951c02 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c07 call ebp */
  call_ind((uint32_t)(EBP), 0x10951c09u);
  /* 10951c09 push 0x1095a7ac */
  push32((uint32_t)(0x1095a7acu));
  /* 10951c0e push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c13 call ebp */
  call_ind((uint32_t)(EBP), 0x10951c15u);
  /* 10951c15 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951c18 push 0x1095a798 */
  push32((uint32_t)(0x1095a798u));
  /* 10951c1d push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c22 call ebp */
  call_ind((uint32_t)(EBP), 0x10951c24u);
  /* 10951c24 push 0x1095a784 */
  push32((uint32_t)(0x1095a784u));
  /* 10951c29 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c2e call ebp */
  call_ind((uint32_t)(EBP), 0x10951c30u);
  /* 10951c30 push 0x1095a770 */
  push32((uint32_t)(0x1095a770u));
  /* 10951c35 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c3a call ebp */
  call_ind((uint32_t)(EBP), 0x10951c3cu);
  /* 10951c3c push 0x1095a75c */
  push32((uint32_t)(0x1095a75cu));
  /* 10951c41 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c46 call ebp */
  call_ind((uint32_t)(EBP), 0x10951c48u);
  /* 10951c48 push 0x1095a784 */
  push32((uint32_t)(0x1095a784u));
  /* 10951c4d push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951c52 call ebp */
  call_ind((uint32_t)(EBP), 0x10951c54u);
  /* 10951c54 push 0x1095a964 */
  push32((uint32_t)(0x1095a964u));
  /* 10951c59 push 0x1095a454 */
  push32((uint32_t)(0x1095a454u));
  /* 10951c5e call ebp */
  call_ind((uint32_t)(EBP), 0x10951c60u);
  /* 10951c60 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10951c65 push 0x1095aff0 */
  push32((uint32_t)(0x1095aff0u));
  /* 10951c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10951c6c push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 10951c71 push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 10951c76 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 10951c7b call esi */
  call_ind((uint32_t)(ESI), 0x10951c7du);
  /* 10951c7d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951c80 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10951c85 push 0x1095afe0 */
  push32((uint32_t)(0x1095afe0u));
  /* 10951c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10951c8c push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 10951c91 push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 10951c96 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 10951c9b call esi */
  call_ind((uint32_t)(ESI), 0x10951c9du);
  /* 10951c9d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10951ca0:;
  /* 10951ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951ca2 call dword ptr [0x109590d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590d0))), 0x10951ca8u);
  /* 10951ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10951cad jne 0x10951ec0 */
  if (!C.zf) goto L_10951ec0;
  /* 10951cb3 push 0x1095aa0c */
  push32((uint32_t)(0x1095aa0cu));
  /* 10951cb8 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951cbd call ebp */
  call_ind((uint32_t)(EBP), 0x10951cbfu);
  /* 10951cbf push 0x1095a9f8 */
  push32((uint32_t)(0x1095a9f8u));
  /* 10951cc4 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951cc9 call ebp */
  call_ind((uint32_t)(EBP), 0x10951ccbu);
  /* 10951ccb push 0x1095a9e4 */
  push32((uint32_t)(0x1095a9e4u));
  /* 10951cd0 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951cd5 call ebp */
  call_ind((uint32_t)(EBP), 0x10951cd7u);
  /* 10951cd7 push 0x1095a9d0 */
  push32((uint32_t)(0x1095a9d0u));
  /* 10951cdc push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ce1 call ebp */
  call_ind((uint32_t)(EBP), 0x10951ce3u);
  /* 10951ce3 push 0x1095a838 */
  push32((uint32_t)(0x1095a838u));
  /* 10951ce8 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951ced call ebp */
  call_ind((uint32_t)(EBP), 0x10951cefu);
  /* 10951cef push 0x1095a824 */
  push32((uint32_t)(0x1095a824u));
  /* 10951cf4 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951cf9 call ebp */
  call_ind((uint32_t)(EBP), 0x10951cfbu);
  /* 10951cfb push 0x1095a9bc */
  push32((uint32_t)(0x1095a9bcu));
  /* 10951d00 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d05 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d07u);
  /* 10951d07 push 0x1095a9a8 */
  push32((uint32_t)(0x1095a9a8u));
  /* 10951d0c push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d11 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d13u);
  /* 10951d13 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951d16 push 0x1095a994 */
  push32((uint32_t)(0x1095a994u));
  /* 10951d1b push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d20 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d22u);
  /* 10951d22 push 0x1095a980 */
  push32((uint32_t)(0x1095a980u));
  /* 10951d27 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d2c call ebp */
  call_ind((uint32_t)(EBP), 0x10951d2eu);
  /* 10951d2e push 0x1095a810 */
  push32((uint32_t)(0x1095a810u));
  /* 10951d33 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d38 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d3au);
  /* 10951d3a push 0x1095a7fc */
  push32((uint32_t)(0x1095a7fcu));
  /* 10951d3f push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d44 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d46u);
  /* 10951d46 push 0x1095a7e8 */
  push32((uint32_t)(0x1095a7e8u));
  /* 10951d4b push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d50 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d52u);
  /* 10951d52 push 0x1095a7d4 */
  push32((uint32_t)(0x1095a7d4u));
  /* 10951d57 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d5c call ebp */
  call_ind((uint32_t)(EBP), 0x10951d5eu);
  /* 10951d5e push 0x1095a7c0 */
  push32((uint32_t)(0x1095a7c0u));
  /* 10951d63 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d68 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d6au);
  /* 10951d6a push 0x1095a7ac */
  push32((uint32_t)(0x1095a7acu));
  /* 10951d6f push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d74 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d76u);
  /* 10951d76 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951d79 push 0x1095a798 */
  push32((uint32_t)(0x1095a798u));
  /* 10951d7e push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d83 call ebp */
  call_ind((uint32_t)(EBP), 0x10951d85u);
  /* 10951d85 push 0x1095a784 */
  push32((uint32_t)(0x1095a784u));
  /* 10951d8a push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d8f call ebp */
  call_ind((uint32_t)(EBP), 0x10951d91u);
  /* 10951d91 push 0x1095a770 */
  push32((uint32_t)(0x1095a770u));
  /* 10951d96 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951d9b call ebp */
  call_ind((uint32_t)(EBP), 0x10951d9du);
  /* 10951d9d push 0x1095a75c */
  push32((uint32_t)(0x1095a75cu));
  /* 10951da2 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951da7 call ebp */
  call_ind((uint32_t)(EBP), 0x10951da9u);
  /* 10951da9 push 0x1095a784 */
  push32((uint32_t)(0x1095a784u));
  /* 10951dae push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10951db3 call ebp */
  call_ind((uint32_t)(EBP), 0x10951db5u);
  /* 10951db5 push 0x1095a744 */
  push32((uint32_t)(0x1095a744u));
  /* 10951dba push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951dbf call ebp */
  call_ind((uint32_t)(EBP), 0x10951dc1u);
  /* 10951dc1 push 0x1095a72c */
  push32((uint32_t)(0x1095a72cu));
  /* 10951dc6 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951dcb call ebp */
  call_ind((uint32_t)(EBP), 0x10951dcdu);
  /* 10951dcd push 0x1095a714 */
  push32((uint32_t)(0x1095a714u));
  /* 10951dd2 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951dd7 call ebp */
  call_ind((uint32_t)(EBP), 0x10951dd9u);
  /* 10951dd9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951ddc push 0x1095a6fc */
  push32((uint32_t)(0x1095a6fcu));
  /* 10951de1 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951de6 call ebp */
  call_ind((uint32_t)(EBP), 0x10951de8u);
  /* 10951de8 push 0x1095a6e4 */
  push32((uint32_t)(0x1095a6e4u));
  /* 10951ded push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951df2 call ebp */
  call_ind((uint32_t)(EBP), 0x10951df4u);
  /* 10951df4 push 0x1095a6cc */
  push32((uint32_t)(0x1095a6ccu));
  /* 10951df9 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951dfe call ebp */
  call_ind((uint32_t)(EBP), 0x10951e00u);
  /* 10951e00 push 0x1095a6b4 */
  push32((uint32_t)(0x1095a6b4u));
  /* 10951e05 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e0a call ebp */
  call_ind((uint32_t)(EBP), 0x10951e0cu);
  /* 10951e0c push 0x1095a69c */
  push32((uint32_t)(0x1095a69cu));
  /* 10951e11 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e16 call ebp */
  call_ind((uint32_t)(EBP), 0x10951e18u);
  /* 10951e18 push 0x1095a684 */
  push32((uint32_t)(0x1095a684u));
  /* 10951e1d push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e22 call ebp */
  call_ind((uint32_t)(EBP), 0x10951e24u);
  /* 10951e24 push 0x1095a66c */
  push32((uint32_t)(0x1095a66cu));
  /* 10951e29 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e2e call ebp */
  call_ind((uint32_t)(EBP), 0x10951e30u);
  /* 10951e30 push 0x1095a654 */
  push32((uint32_t)(0x1095a654u));
  /* 10951e35 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e3a call ebp */
  call_ind((uint32_t)(EBP), 0x10951e3cu);
  /* 10951e3c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951e3f push 0x1095a63c */
  push32((uint32_t)(0x1095a63cu));
  /* 10951e44 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e49 call ebp */
  call_ind((uint32_t)(EBP), 0x10951e4bu);
  /* 10951e4b push 0x1095a624 */
  push32((uint32_t)(0x1095a624u));
  /* 10951e50 push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e55 call ebp */
  call_ind((uint32_t)(EBP), 0x10951e57u);
  /* 10951e57 push 0x1095a60c */
  push32((uint32_t)(0x1095a60cu));
  /* 10951e5c push 0x1095a4a4 */
  push32((uint32_t)(0x1095a4a4u));
  /* 10951e61 call ebp */
  call_ind((uint32_t)(EBP), 0x10951e63u);
  /* 10951e63 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10951e68 push 0x1095aff0 */
  push32((uint32_t)(0x1095aff0u));
  /* 10951e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10951e6f push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 10951e74 push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 10951e79 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 10951e7e call esi */
  call_ind((uint32_t)(ESI), 0x10951e80u);
  /* 10951e80 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10951e85 push 0x1095afe0 */
  push32((uint32_t)(0x1095afe0u));
  /* 10951e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10951e8c push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 10951e91 push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 10951e96 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 10951e9b call esi */
  call_ind((uint32_t)(ESI), 0x10951e9du);
  /* 10951e9d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951ea0 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10951ea5 push 0x1095aff8 */
  push32((uint32_t)(0x1095aff8u));
  /* 10951eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10951eac push 0x1095ae90 */
  push32((uint32_t)(0x1095ae90u));
  /* 10951eb1 push 0x1095b158 */
  push32((uint32_t)(0x1095b158u));
  /* 10951eb6 push 0x1095b018 */
  push32((uint32_t)(0x1095b018u));
  /* 10951ebb call esi */
  call_ind((uint32_t)(ESI), 0x10951ebdu);
  /* 10951ebd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10951ec0:;
  /* 10951ec0 mov esi, dword ptr [0x109590d8] */
  ESI = (r32((uint32_t)(0x109590d8)));
  /* 10951ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951ec8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10951eca push 0x1095adb8 */
  push32((uint32_t)(0x1095adb8u));
  /* 10951ecf call esi */
  call_ind((uint32_t)(ESI), 0x10951ed1u);
  /* 10951ed1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10951ed3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10951ed5 push 0x1095ada8 */
  push32((uint32_t)(0x1095ada8u));
  /* 10951eda call esi */
  call_ind((uint32_t)(ESI), 0x10951edcu);
  /* 10951edc push 3 */
  push32((uint32_t)(0x3u));
  /* 10951ede push 3 */
  push32((uint32_t)(0x3u));
  /* 10951ee0 push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 10951ee5 call esi */
  call_ind((uint32_t)(ESI), 0x10951ee7u);
  /* 10951ee7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951ee9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10951eeb push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 10951ef0 call esi */
  call_ind((uint32_t)(ESI), 0x10951ef2u);
  /* 10951ef2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10951ef4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10951ef6 push 0x1095aea0 */
  push32((uint32_t)(0x1095aea0u));
  /* 10951efb call esi */
  call_ind((uint32_t)(ESI), 0x10951efdu);
  /* 10951efd push 6 */
  push32((uint32_t)(0x6u));
  /* 10951eff push 3 */
  push32((uint32_t)(0x3u));
  /* 10951f01 push 0x1095ad58 */
  push32((uint32_t)(0x1095ad58u));
  /* 10951f06 call esi */
  call_ind((uint32_t)(ESI), 0x10951f08u);
  /* 10951f08 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951f0b push 7 */
  push32((uint32_t)(0x7u));
  /* 10951f0d push 3 */
  push32((uint32_t)(0x3u));
  /* 10951f0f push 0x1095ad60 */
  push32((uint32_t)(0x1095ad60u));
  /* 10951f14 call esi */
  call_ind((uint32_t)(ESI), 0x10951f16u);
  /* 10951f16 push 8 */
  push32((uint32_t)(0x8u));
  /* 10951f18 push 3 */
  push32((uint32_t)(0x3u));
  /* 10951f1a push 0x1095ad70 */
  push32((uint32_t)(0x1095ad70u));
  /* 10951f1f call esi */
  call_ind((uint32_t)(ESI), 0x10951f21u);
  /* 10951f21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10951f24:;
  /* 10951f24 push 0xa */
  push32((uint32_t)(0xau));
  /* 10951f26 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10951f2cu);
  /* 10951f2c mov esi, dword ptr [0x109590dc] */
  ESI = (r32((uint32_t)(0x109590dc)));
  /* 10951f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951f35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10951f37 je 0x10951faa */
  if (C.zf) goto L_10951faa;
  /* 10951f39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f3b push 0xa */
  push32((uint32_t)(0xau));
  /* 10951f3d call ebx */
  call_ind((uint32_t)(EBX), 0x10951f3fu);
  /* 10951f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f41 push 0x1095adf8 */
  push32((uint32_t)(0x1095adf8u));
  /* 10951f46 call edi */
  call_ind((uint32_t)(EDI), 0x10951f48u);
  /* 10951f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f4a push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10951f4c push 0x1095ae10 */
  push32((uint32_t)(0x1095ae10u));
  /* 10951f51 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951f53 call esi */
  call_ind((uint32_t)(ESI), 0x10951f55u);
  /* 10951f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f57 push 0x1095ae00 */
  push32((uint32_t)(0x1095ae00u));
  /* 10951f5c call edi */
  call_ind((uint32_t)(EDI), 0x10951f5eu);
  /* 10951f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f60 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10951f62 push 0x1095ae18 */
  push32((uint32_t)(0x1095ae18u));
  /* 10951f67 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951f69 call esi */
  call_ind((uint32_t)(ESI), 0x10951f6bu);
  /* 10951f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f6d push 0x1095ae08 */
  push32((uint32_t)(0x1095ae08u));
  /* 10951f72 call edi */
  call_ind((uint32_t)(EDI), 0x10951f74u);
  /* 10951f74 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f79 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10951f7b push 0x1095ae20 */
  push32((uint32_t)(0x1095ae20u));
  /* 10951f80 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951f82 call esi */
  call_ind((uint32_t)(ESI), 0x10951f84u);
  /* 10951f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f86 push 0x1095ad78 */
  push32((uint32_t)(0x1095ad78u));
  /* 10951f8b call edi */
  call_ind((uint32_t)(EDI), 0x10951f8du);
  /* 10951f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10951f8f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10951f91 push 0x1095b190 */
  push32((uint32_t)(0x1095b190u));
  /* 10951f96 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951f98 call esi */
  call_ind((uint32_t)(ESI), 0x10951f9au);
  /* 10951f9a push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10951f9f push 0xa */
  push32((uint32_t)(0xau));
  /* 10951fa1 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10951fa7u);
  /* 10951fa7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10951faa:;
  /* 10951faa push 0xb */
  push32((uint32_t)(0xbu));
  /* 10951fac call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10951fb2u);
  /* 10951fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951fb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10951fb7 je 0x1095202f */
  if (C.zf) goto L_1095202f;
  /* 10951fb9 push 0xa */
  push32((uint32_t)(0xau));
  /* 10951fbb call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10951fc1u);
  /* 10951fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10951fc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10951fc6 je 0x1095202f */
  if (C.zf) goto L_1095202f;
  /* 10951fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951fca push 0xb */
  push32((uint32_t)(0xbu));
  /* 10951fcc call ebx */
  call_ind((uint32_t)(EBX), 0x10951fceu);
  /* 10951fce push 0 */
  push32((uint32_t)(0x0u));
  /* 10951fd0 push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 10951fd5 call edi */
  call_ind((uint32_t)(EDI), 0x10951fd7u);
  /* 10951fd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951fd9 push 0x1095adf8 */
  push32((uint32_t)(0x1095adf8u));
  /* 10951fde call edi */
  call_ind((uint32_t)(EDI), 0x10951fe0u);
  /* 10951fe0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10951fe2 call dword ptr [0x109590e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e4))), 0x10951fe8u);
  /* 10951fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10951fea push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 10951fef call edi */
  call_ind((uint32_t)(EDI), 0x10951ff1u);
  /* 10951ff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10951ff3 push 0x1095ae00 */
  push32((uint32_t)(0x1095ae00u));
  /* 10951ff8 call edi */
  call_ind((uint32_t)(EDI), 0x10951ffau);
  /* 10951ffa push 4 */
  push32((uint32_t)(0x4u));
  /* 10951ffc call dword ptr [0x109590e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e4))), 0x10952002u);
  /* 10952002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952004 push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 10952009 call edi */
  call_ind((uint32_t)(EDI), 0x1095200bu);
  /* 1095200b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095200d push 0x1095ae08 */
  push32((uint32_t)(0x1095ae08u));
  /* 10952012 call edi */
  call_ind((uint32_t)(EDI), 0x10952014u);
  /* 10952014 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952017 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952019 call dword ptr [0x109590e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e4))), 0x1095201fu);
  /* 1095201f push 0x4e2 */
  push32((uint32_t)(0x4e2u));
  /* 10952024 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10952026 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x1095202cu);
  /* 1095202c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095202f:;
  /* 1095202f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10952031 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10952037u);
  /* 10952037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095203a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095203c je 0x109520ba */
  if (C.zf) goto L_109520ba;
  /* 1095203e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10952040 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10952046u);
  /* 10952046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952049 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095204b je 0x109520ba */
  if (C.zf) goto L_109520ba;
  /* 1095204d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095204f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10952051 call ebx */
  call_ind((uint32_t)(EBX), 0x10952053u);
  /* 10952053 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952055 push 0x1095adf8 */
  push32((uint32_t)(0x1095adf8u));
  /* 1095205a call edi */
  call_ind((uint32_t)(EDI), 0x1095205cu);
  /* 1095205c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095205e push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10952063 push 0x1095b048 */
  push32((uint32_t)(0x1095b048u));
  /* 10952068 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095206a call dword ptr [0x109590e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e8))), 0x10952070u);
  /* 10952070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952072 push 0x1095ae00 */
  push32((uint32_t)(0x1095ae00u));
  /* 10952077 call edi */
  call_ind((uint32_t)(EDI), 0x10952079u);
  /* 10952079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095207b push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10952080 push 0x1095b050 */
  push32((uint32_t)(0x1095b050u));
  /* 10952085 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952087 call dword ptr [0x109590e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e8))), 0x1095208du);
  /* 1095208d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095208f push 0x1095ae08 */
  push32((uint32_t)(0x1095ae08u));
  /* 10952094 call edi */
  call_ind((uint32_t)(EDI), 0x10952096u);
  /* 10952096 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095209b push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109520a0 push 0x1095b060 */
  push32((uint32_t)(0x1095b060u));
  /* 109520a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 109520a7 call dword ptr [0x109590e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e8))), 0x109520adu);
  /* 109520ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109520af push 0xc */
  push32((uint32_t)(0xcu));
  /* 109520b1 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109520b7u);
  /* 109520b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109520ba:;
  /* 109520ba push 0xd */
  push32((uint32_t)(0xdu));
  /* 109520bc call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109520c2u);
  /* 109520c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109520c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109520c7 je 0x1095210e */
  if (C.zf) goto L_1095210e;
  /* 109520c9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109520cb call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109520d1u);
  /* 109520d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109520d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109520d6 je 0x1095210e */
  if (C.zf) goto L_1095210e;
  /* 109520d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109520da push 0x1095adf8 */
  push32((uint32_t)(0x1095adf8u));
  /* 109520df call edi */
  call_ind((uint32_t)(EDI), 0x109520e1u);
  /* 109520e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 109520e3 call dword ptr [0x109590ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590ec))), 0x109520e9u);
  /* 109520e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109520ec cmp al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109520ee jne 0x1095210e */
  if (!C.zf) goto L_1095210e;
  /* 109520f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109520f2 call dword ptr [0x109590f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f0))), 0x109520f8u);
  /* 109520f8 push 0x41a */
  push32((uint32_t)(0x41au));
  /* 109520fd push 0xd */
  push32((uint32_t)(0xdu));
  /* 109520ff call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10952105u);
  /* 10952105 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952107 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10952109 call ebx */
  call_ind((uint32_t)(EBX), 0x1095210bu);
  /* 1095210b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095210e:;
  /* 1095210e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10952110 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10952116u);
  /* 10952116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952119 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095211b je 0x10952155 */
  if (C.zf) goto L_10952155;
  /* 1095211d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1095211f call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10952125u);
  /* 10952125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952128 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095212a je 0x10952155 */
  if (C.zf) goto L_10952155;
  /* 1095212c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095212e push 0x1095ae00 */
  push32((uint32_t)(0x1095ae00u));
  /* 10952133 call edi */
  call_ind((uint32_t)(EDI), 0x10952135u);
  /* 10952135 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952137 call dword ptr [0x109590ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590ec))), 0x1095213du);
  /* 1095213d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952140 cmp al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10952142 jne 0x10952155 */
  if (!C.zf) goto L_10952155;
  /* 10952144 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952146 call dword ptr [0x109590f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f0))), 0x1095214cu);
  /* 1095214c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095214e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10952150 call ebx */
  call_ind((uint32_t)(EBX), 0x10952152u);
  /* 10952152 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10952155:;
  /* 10952155 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10952157 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095215du);
  /* 1095215d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952160 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10952162 je 0x1095219c */
  if (C.zf) goto L_1095219c;
  /* 10952164 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10952166 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x1095216cu);
  /* 1095216c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095216f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10952171 je 0x1095219c */
  if (C.zf) goto L_1095219c;
  /* 10952173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952175 push 0x1095ae08 */
  push32((uint32_t)(0x1095ae08u));
  /* 1095217a call edi */
  call_ind((uint32_t)(EDI), 0x1095217cu);
  /* 1095217c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095217e call dword ptr [0x109590ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590ec))), 0x10952184u);
  /* 10952184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952187 cmp al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10952189 jne 0x1095219c */
  if (!C.zf) goto L_1095219c;
  /* 1095218b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095218d call dword ptr [0x109590f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f0))), 0x10952193u);
  /* 10952193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952195 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10952197 call ebx */
  call_ind((uint32_t)(EBX), 0x10952199u);
  /* 10952199 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095219c:;
  /* 1095219c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1095219e call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109521a4u);
  /* 109521a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109521a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109521a9 je 0x10952346 */
  if (C.zf) goto L_10952346;
  /* 109521af push 0xd */
  push32((uint32_t)(0xdu));
  /* 109521b1 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109521b7u);
  /* 109521b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109521ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109521bc je 0x10952346 */
  if (C.zf) goto L_10952346;
  /* 109521c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109521c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109521c6 call ebx */
  call_ind((uint32_t)(EBX), 0x109521c8u);
  /* 109521c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109521ca push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 109521cf call edi */
  call_ind((uint32_t)(EDI), 0x109521d1u);
  /* 109521d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109521d3 push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 109521d8 call edi */
  call_ind((uint32_t)(EDI), 0x109521dau);
  /* 109521da push 1 */
  push32((uint32_t)(0x1u));
  /* 109521dc push 0x1095b040 */
  push32((uint32_t)(0x1095b040u));
  /* 109521e1 call edi */
  call_ind((uint32_t)(EDI), 0x109521e3u);
  /* 109521e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109521e5 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 109521ea push 0x1095b030 */
  push32((uint32_t)(0x1095b030u));
  /* 109521ef push 4 */
  push32((uint32_t)(0x4u));
  /* 109521f1 call esi */
  call_ind((uint32_t)(ESI), 0x109521f3u);
  /* 109521f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109521f5 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109521fa push 0x1095af68 */
  push32((uint32_t)(0x1095af68u));
  /* 109521ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10952201 call esi */
  call_ind((uint32_t)(ESI), 0x10952203u);
  /* 10952203 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952206 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952208 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1095220a push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 1095220f push 4 */
  push32((uint32_t)(0x4u));
  /* 10952211 call esi */
  call_ind((uint32_t)(ESI), 0x10952213u);
  /* 10952213 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952215 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10952217 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 1095221c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095221e call esi */
  call_ind((uint32_t)(ESI), 0x10952220u);
  /* 10952220 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952222 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10952224 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10952229 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095222b call esi */
  call_ind((uint32_t)(ESI), 0x1095222du);
  /* 1095222d push 2 */
  push32((uint32_t)(0x2u));
  /* 1095222f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10952231 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10952236 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952238 call esi */
  call_ind((uint32_t)(ESI), 0x1095223au);
  /* 1095223a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095223d push 2 */
  push32((uint32_t)(0x2u));
  /* 1095223f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10952241 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952246 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952248 call esi */
  call_ind((uint32_t)(ESI), 0x1095224au);
  /* 1095224a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095224c push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 10952251 call edi */
  call_ind((uint32_t)(EDI), 0x10952253u);
  /* 10952253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952255 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 1095225a push 0x1095b090 */
  push32((uint32_t)(0x1095b090u));
  /* 1095225f push 4 */
  push32((uint32_t)(0x4u));
  /* 10952261 call dword ptr [0x109590e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e8))), 0x10952267u);
  /* 10952267 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952269 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095226e push 0x1095af68 */
  push32((uint32_t)(0x1095af68u));
  /* 10952273 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952275 call esi */
  call_ind((uint32_t)(ESI), 0x10952277u);
  /* 10952277 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952279 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1095227b push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 10952280 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952282 call esi */
  call_ind((uint32_t)(ESI), 0x10952284u);
  /* 10952284 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952287 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952289 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1095228b push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10952290 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952292 call esi */
  call_ind((uint32_t)(ESI), 0x10952294u);
  /* 10952294 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952296 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10952298 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 1095229d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095229f call esi */
  call_ind((uint32_t)(ESI), 0x109522a1u);
  /* 109522a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109522a3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 109522a5 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109522aa push 4 */
  push32((uint32_t)(0x4u));
  /* 109522ac call esi */
  call_ind((uint32_t)(ESI), 0x109522aeu);
  /* 109522ae push 2 */
  push32((uint32_t)(0x2u));
  /* 109522b0 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 109522b2 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109522b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109522b9 call esi */
  call_ind((uint32_t)(ESI), 0x109522bbu);
  /* 109522bb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109522be push 0 */
  push32((uint32_t)(0x0u));
  /* 109522c0 push 0x1095b1b0 */
  push32((uint32_t)(0x1095b1b0u));
  /* 109522c5 call edi */
  call_ind((uint32_t)(EDI), 0x109522c7u);
  /* 109522c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109522c9 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109522ce call edi */
  call_ind((uint32_t)(EDI), 0x109522d0u);
  /* 109522d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109522d2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109522d4 push 0x1095af68 */
  push32((uint32_t)(0x1095af68u));
  /* 109522d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109522db call esi */
  call_ind((uint32_t)(ESI), 0x109522ddu);
  /* 109522dd push 0 */
  push32((uint32_t)(0x0u));
  /* 109522df push 0x1095add0 */
  push32((uint32_t)(0x1095add0u));
  /* 109522e4 call edi */
  call_ind((uint32_t)(EDI), 0x109522e6u);
  /* 109522e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109522e8 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109522ed call edi */
  call_ind((uint32_t)(EDI), 0x109522efu);
  /* 109522ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109522f1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109522f3 push 0x1095af68 */
  push32((uint32_t)(0x1095af68u));
  /* 109522f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109522fa call esi */
  call_ind((uint32_t)(ESI), 0x109522fcu);
  /* 109522fc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109522ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10952301 push 0x1095b1c0 */
  push32((uint32_t)(0x1095b1c0u));
  /* 10952306 call edi */
  call_ind((uint32_t)(EDI), 0x10952308u);
  /* 10952308 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095230a push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 1095230f call edi */
  call_ind((uint32_t)(EDI), 0x10952311u);
  /* 10952311 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952313 push 0xd7 */
  push32((uint32_t)(0xd7u));
  /* 10952318 push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 1095231d push 1 */
  push32((uint32_t)(0x1u));
  /* 1095231f call esi */
  call_ind((uint32_t)(ESI), 0x10952321u);
  /* 10952321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952323 push 0x1095add8 */
  push32((uint32_t)(0x1095add8u));
  /* 10952328 call edi */
  call_ind((uint32_t)(EDI), 0x1095232au);
  /* 1095232a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095232c push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10952331 call edi */
  call_ind((uint32_t)(EDI), 0x10952333u);
  /* 10952333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952335 push 0xd7 */
  push32((uint32_t)(0xd7u));
  /* 1095233a push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 1095233f push 1 */
  push32((uint32_t)(0x1u));
  /* 10952341 call esi */
  call_ind((uint32_t)(ESI), 0x10952343u);
  /* 10952343 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10952346:;
  /* 10952346 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10952348 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095234eu);
  /* 1095234e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952351 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10952353 je 0x10952462 */
  if (C.zf) goto L_10952462;
  /* 10952359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095235b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1095235d call ebx */
  call_ind((uint32_t)(EBX), 0x1095235fu);
  /* 1095235f push 0 */
  push32((uint32_t)(0x0u));
  /* 10952361 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10952366 call edi */
  call_ind((uint32_t)(EDI), 0x10952368u);
  /* 10952368 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095236a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095236f push 0x1095ad80 */
  push32((uint32_t)(0x1095ad80u));
  /* 10952374 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952376 call esi */
  call_ind((uint32_t)(ESI), 0x10952378u);
  /* 10952378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095237a push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 1095237f call edi */
  call_ind((uint32_t)(EDI), 0x10952381u);
  /* 10952381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952383 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952388 push 0x1095ad90 */
  push32((uint32_t)(0x1095ad90u));
  /* 1095238d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095238f call esi */
  call_ind((uint32_t)(ESI), 0x10952391u);
  /* 10952391 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952393 push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10952398 call edi */
  call_ind((uint32_t)(EDI), 0x1095239au);
  /* 1095239a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095239d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095239f push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109523a4 push 0x1095ad98 */
  push32((uint32_t)(0x1095ad98u));
  /* 109523a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109523ab call esi */
  call_ind((uint32_t)(ESI), 0x109523adu);
  /* 109523ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109523af push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 109523b4 call edi */
  call_ind((uint32_t)(EDI), 0x109523b6u);
  /* 109523b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109523b8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109523bd push 0x1095ad88 */
  push32((uint32_t)(0x1095ad88u));
  /* 109523c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109523c4 call esi */
  call_ind((uint32_t)(ESI), 0x109523c6u);
  /* 109523c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109523c8 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 109523cd call edi */
  call_ind((uint32_t)(EDI), 0x109523cfu);
  /* 109523cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109523d1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109523d6 push 0x1095b168 */
  push32((uint32_t)(0x1095b168u));
  /* 109523db push 4 */
  push32((uint32_t)(0x4u));
  /* 109523dd call esi */
  call_ind((uint32_t)(ESI), 0x109523dfu);
  /* 109523df add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109523e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109523e4 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 109523e9 call edi */
  call_ind((uint32_t)(EDI), 0x109523ebu);
  /* 109523eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109523ed push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109523f2 push 0x1095b170 */
  push32((uint32_t)(0x1095b170u));
  /* 109523f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109523f9 call esi */
  call_ind((uint32_t)(ESI), 0x109523fbu);
  /* 109523fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109523fd push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10952402 call edi */
  call_ind((uint32_t)(EDI), 0x10952404u);
  /* 10952404 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952406 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095240b push 0x1095b178 */
  push32((uint32_t)(0x1095b178u));
  /* 10952410 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952412 call esi */
  call_ind((uint32_t)(ESI), 0x10952414u);
  /* 10952414 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952416 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 1095241b call edi */
  call_ind((uint32_t)(EDI), 0x1095241du);
  /* 1095241d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095241f push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952424 push 0x1095b180 */
  push32((uint32_t)(0x1095b180u));
  /* 10952429 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095242b call esi */
  call_ind((uint32_t)(ESI), 0x1095242du);
  /* 1095242d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952430 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952432 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10952437 call edi */
  call_ind((uint32_t)(EDI), 0x10952439u);
  /* 10952439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095243b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095243d push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 10952442 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952444 call esi */
  call_ind((uint32_t)(ESI), 0x10952446u);
  /* 10952446 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952448 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 1095244d call edi */
  call_ind((uint32_t)(EDI), 0x1095244fu);
  /* 1095244f push 0 */
  push32((uint32_t)(0x0u));
  /* 10952451 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952456 push 0x1095ad58 */
  push32((uint32_t)(0x1095ad58u));
  /* 1095245b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095245d call esi */
  call_ind((uint32_t)(ESI), 0x1095245fu);
  /* 1095245f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10952462:;
  /* 10952462 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10952464 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095246au);
  /* 1095246a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095246d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095246f je 0x109524b4 */
  if (C.zf) goto L_109524b4;
  /* 10952471 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10952476 push 0x1095b180 */
  push32((uint32_t)(0x1095b180u));
  /* 1095247b call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10952481u);
  /* 10952481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10952486 jle 0x109524b4 */
  if ((C.zf||C.sf!=C.of)) goto L_109524b4;
  /* 10952488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095248a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1095248c call ebx */
  call_ind((uint32_t)(EBX), 0x1095248eu);
  /* 1095248e push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10952493 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10952495 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x1095249bu);
  /* 1095249b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1095249d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1095249f call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109524a5u);
  /* 109524a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109524a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109524a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109524ab call dword ptr [0x109590b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b8))), 0x109524b1u);
  /* 109524b1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109524b4:;
  /* 109524b4 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109524b6 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109524bcu);
  /* 109524bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109524bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109524c1 je 0x10952687 */
  if (C.zf) goto L_10952687;
  /* 109524c7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109524c9 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109524cfu);
  /* 109524cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109524d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109524d4 je 0x10952687 */
  if (C.zf) goto L_10952687;
  /* 109524da push 0 */
  push32((uint32_t)(0x0u));
  /* 109524dc push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109524de call ebx */
  call_ind((uint32_t)(EBX), 0x109524e0u);
  /* 109524e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109524e2 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 109524e7 call edi */
  call_ind((uint32_t)(EDI), 0x109524e9u);
  /* 109524e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109524eb push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109524f0 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109524f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 109524f7 call esi */
  call_ind((uint32_t)(ESI), 0x109524f9u);
  /* 109524f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109524fb push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952500 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10952505 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952507 call esi */
  call_ind((uint32_t)(ESI), 0x10952509u);
  /* 10952509 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095250b push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952510 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10952515 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952517 call esi */
  call_ind((uint32_t)(ESI), 0x10952519u);
  /* 10952519 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095251c push 2 */
  push32((uint32_t)(0x2u));
  /* 1095251e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952523 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952528 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095252a call esi */
  call_ind((uint32_t)(ESI), 0x1095252cu);
  /* 1095252c push 2 */
  push32((uint32_t)(0x2u));
  /* 1095252e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952533 push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10952538 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095253a call esi */
  call_ind((uint32_t)(ESI), 0x1095253cu);
  /* 1095253c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095253e push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10952543 call edi */
  call_ind((uint32_t)(EDI), 0x10952545u);
  /* 10952545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952547 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095254c push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10952551 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952553 call esi */
  call_ind((uint32_t)(ESI), 0x10952555u);
  /* 10952555 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952557 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095255c push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10952561 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952563 call esi */
  call_ind((uint32_t)(ESI), 0x10952565u);
  /* 10952565 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952568 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095256a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095256f push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10952574 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952576 call esi */
  call_ind((uint32_t)(ESI), 0x10952578u);
  /* 10952578 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095257a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095257f push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952584 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952586 call esi */
  call_ind((uint32_t)(ESI), 0x10952588u);
  /* 10952588 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095258a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095258f push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10952594 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952596 call esi */
  call_ind((uint32_t)(ESI), 0x10952598u);
  /* 10952598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095259a push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 1095259f call edi */
  call_ind((uint32_t)(EDI), 0x109525a1u);
  /* 109525a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109525a3 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109525a8 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109525ad push 4 */
  push32((uint32_t)(0x4u));
  /* 109525af call esi */
  call_ind((uint32_t)(ESI), 0x109525b1u);
  /* 109525b1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109525b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109525b6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109525bb push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109525c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109525c2 call esi */
  call_ind((uint32_t)(ESI), 0x109525c4u);
  /* 109525c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109525c6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109525cb push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109525d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109525d2 call esi */
  call_ind((uint32_t)(ESI), 0x109525d4u);
  /* 109525d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109525d6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109525db push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109525e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109525e2 call esi */
  call_ind((uint32_t)(ESI), 0x109525e4u);
  /* 109525e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109525e6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109525eb push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 109525f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109525f2 call esi */
  call_ind((uint32_t)(ESI), 0x109525f4u);
  /* 109525f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109525f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109525f9 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 109525fe call edi */
  call_ind((uint32_t)(EDI), 0x10952600u);
  /* 10952600 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952602 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952607 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095260c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095260e call esi */
  call_ind((uint32_t)(ESI), 0x10952610u);
  /* 10952610 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952612 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952617 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 1095261c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095261e call esi */
  call_ind((uint32_t)(ESI), 0x10952620u);
  /* 10952620 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952622 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952627 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095262c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095262e call esi */
  call_ind((uint32_t)(ESI), 0x10952630u);
  /* 10952630 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952632 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952637 push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 1095263c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095263e call esi */
  call_ind((uint32_t)(ESI), 0x10952640u);
  /* 10952640 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952643 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952645 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 1095264a call edi */
  call_ind((uint32_t)(EDI), 0x1095264cu);
  /* 1095264c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095264e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952653 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952658 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095265a call esi */
  call_ind((uint32_t)(ESI), 0x1095265cu);
  /* 1095265c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095265e push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10952663 call edi */
  call_ind((uint32_t)(EDI), 0x10952665u);
  /* 10952665 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952667 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095266c push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952671 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952673 call esi */
  call_ind((uint32_t)(ESI), 0x10952675u);
  /* 10952675 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1095267a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095267c push 4 */
  push32((uint32_t)(0x4u));
  /* 1095267e call dword ptr [0x109590b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b8))), 0x10952684u);
  /* 10952684 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10952687:;
  /* 10952687 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10952689 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095268fu);
  /* 1095268f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952692 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10952694 je 0x1095273e */
  if (C.zf) goto L_1095273e;
  /* 1095269a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1095269c call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109526a2u);
  /* 109526a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109526a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109526a7 je 0x1095273e */
  if (C.zf) goto L_1095273e;
  /* 109526ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109526af push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109526b1 call ebx */
  call_ind((uint32_t)(EBX), 0x109526b3u);
  /* 109526b3 push 0x1095a604 */
  push32((uint32_t)(0x1095a604u));
  /* 109526b8 call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x109526beu);
  /* 109526be push 0 */
  push32((uint32_t)(0x0u));
  /* 109526c0 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 109526c5 call edi */
  call_ind((uint32_t)(EDI), 0x109526c7u);
  /* 109526c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109526c9 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109526ce push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109526d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109526d5 call esi */
  call_ind((uint32_t)(ESI), 0x109526d7u);
  /* 109526d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109526d9 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 109526de call edi */
  call_ind((uint32_t)(EDI), 0x109526e0u);
  /* 109526e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109526e2 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109526e7 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109526ec push 4 */
  push32((uint32_t)(0x4u));
  /* 109526ee call esi */
  call_ind((uint32_t)(ESI), 0x109526f0u);
  /* 109526f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109526f2 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 109526f7 call edi */
  call_ind((uint32_t)(EDI), 0x109526f9u);
  /* 109526f9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109526fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109526fe push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952703 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10952708 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095270a call esi */
  call_ind((uint32_t)(ESI), 0x1095270cu);
  /* 1095270c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095270e push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10952713 call edi */
  call_ind((uint32_t)(EDI), 0x10952715u);
  /* 10952715 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952717 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095271c push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952721 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952723 call esi */
  call_ind((uint32_t)(ESI), 0x10952725u);
  /* 10952725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952727 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 1095272c call edi */
  call_ind((uint32_t)(EDI), 0x1095272eu);
  /* 1095272e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952730 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952732 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 10952737 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952739 call esi */
  call_ind((uint32_t)(ESI), 0x1095273bu);
  /* 1095273b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095273e:;
  /* 1095273e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10952740 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10952746u);
  /* 10952746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952749 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095274b je 0x10952a4d */
  if (C.zf) goto L_10952a4d;
  /* 10952751 push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 10952756 push 0x1095adb8 */
  push32((uint32_t)(0x1095adb8u));
  /* 1095275b call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10952761u);
  /* 10952761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10952766 jne 0x10952783 */
  if (!C.zf) goto L_10952783;
  /* 10952768 push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 1095276d push 0x1095adb8 */
  push32((uint32_t)(0x1095adb8u));
  /* 10952772 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10952778u);
  /* 10952778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095277b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095277d jle 0x10952a4d */
  if ((C.zf||C.sf!=C.of)) goto L_10952a4d;
L_10952783:;
  /* 10952783 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952785 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10952787 call ebx */
  call_ind((uint32_t)(EBX), 0x10952789u);
  /* 10952789 push 0x1095a5f4 */
  push32((uint32_t)(0x1095a5f4u));
  /* 1095278e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952790 push 0x1095a5ec */
  push32((uint32_t)(0x1095a5ecu));
  /* 10952795 push 9 */
  push32((uint32_t)(0x9u));
  /* 10952797 call dword ptr [0x109590f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f8))), 0x1095279du);
  /* 1095279d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109527a0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109527a3 ja 0x10952a4d */
  if ((!C.cf&&!C.zf)) goto L_10952a4d;
  /* 109527a9 jmp dword ptr [eax*4 + 0x1095610c] */
  switch (EAX) {
    case 0: goto L_109527b0;
    case 1: goto L_109527c8;
    case 2: goto L_1095292f;
    case 3: goto L_109529c0;
    case 4: goto L_10952abf;
    case 5: goto L_10952b09;
    case 6: goto L_10952c0a;
    case 7: goto L_10952d4e;
    case 8: goto L_10952e79;
    case 9: goto L_10952f9e;
    default: x86_unimpl("switch@0x109527a9 out of table"); return;
  }
L_109527b0:;
  /* 109527b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109527b2 push 0xa */
  push32((uint32_t)(0xau));
  /* 109527b4 call ebx */
  call_ind((uint32_t)(EBX), 0x109527b6u);
  /* 109527b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109527b9 mov dword ptr [0x1095adf0], 1 */
  w32((uint32_t)(0x1095adf0), (0x1u));
  /* 109527c3 jmp 0x10952a4d */
  goto L_10952a4d;
L_109527c8:;
  /* 109527c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109527ca push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 109527cf call edi */
  call_ind((uint32_t)(EDI), 0x109527d1u);
  /* 109527d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109527d3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109527d8 push 0x1095b008 */
  push32((uint32_t)(0x1095b008u));
  /* 109527dd push 4 */
  push32((uint32_t)(0x4u));
  /* 109527df call esi */
  call_ind((uint32_t)(ESI), 0x109527e1u);
  /* 109527e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109527e3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109527e8 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109527ed push 4 */
  push32((uint32_t)(0x4u));
  /* 109527ef call esi */
  call_ind((uint32_t)(ESI), 0x109527f1u);
  /* 109527f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109527f3 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109527f8 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109527fd push 4 */
  push32((uint32_t)(0x4u));
  /* 109527ff call esi */
  call_ind((uint32_t)(ESI), 0x10952801u);
  /* 10952801 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952803 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952808 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 1095280d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095280f call esi */
  call_ind((uint32_t)(ESI), 0x10952811u);
  /* 10952811 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952814 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952816 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095281b push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10952820 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952822 call esi */
  call_ind((uint32_t)(ESI), 0x10952824u);
  /* 10952824 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952826 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095282b push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10952830 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952832 call esi */
  call_ind((uint32_t)(ESI), 0x10952834u);
  /* 10952834 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952836 call dword ptr [0x109590fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590fc))), 0x1095283cu);
  /* 1095283c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095283e push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 10952843 call edi */
  call_ind((uint32_t)(EDI), 0x10952845u);
  /* 10952845 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952847 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1095284c push 0x1095b010 */
  push32((uint32_t)(0x1095b010u));
  /* 10952851 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952853 call esi */
  call_ind((uint32_t)(ESI), 0x10952855u);
  /* 10952855 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952857 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1095285c push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10952861 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952863 call esi */
  call_ind((uint32_t)(ESI), 0x10952865u);
  /* 10952865 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952868 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095286a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095286f push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10952874 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952876 call esi */
  call_ind((uint32_t)(ESI), 0x10952878u);
  /* 10952878 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095287a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095287f push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10952884 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952886 call esi */
  call_ind((uint32_t)(ESI), 0x10952888u);
  /* 10952888 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095288a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095288f push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10952894 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952896 call esi */
  call_ind((uint32_t)(ESI), 0x10952898u);
  /* 10952898 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095289a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095289f push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 109528a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 109528a6 call esi */
  call_ind((uint32_t)(ESI), 0x109528a8u);
  /* 109528a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109528ab push 4 */
  push32((uint32_t)(0x4u));
  /* 109528ad call dword ptr [0x109590fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590fc))), 0x109528b3u);
  /* 109528b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109528b5 push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 109528ba call edi */
  call_ind((uint32_t)(EDI), 0x109528bcu);
  /* 109528bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109528be push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109528c3 push 0x1095af50 */
  push32((uint32_t)(0x1095af50u));
  /* 109528c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109528ca call esi */
  call_ind((uint32_t)(ESI), 0x109528ccu);
  /* 109528cc push 2 */
  push32((uint32_t)(0x2u));
  /* 109528ce push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109528d3 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109528d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109528da call esi */
  call_ind((uint32_t)(ESI), 0x109528dcu);
  /* 109528dc push 2 */
  push32((uint32_t)(0x2u));
  /* 109528de push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109528e3 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109528e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109528ea call esi */
  call_ind((uint32_t)(ESI), 0x109528ecu);
  /* 109528ec push 2 */
  push32((uint32_t)(0x2u));
  /* 109528ee push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109528f3 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109528f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109528fa call esi */
  call_ind((uint32_t)(ESI), 0x109528fcu);
  /* 109528fc add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109528ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10952901 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952906 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 1095290b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095290d call esi */
  call_ind((uint32_t)(ESI), 0x1095290fu);
  /* 1095290f push 2 */
  push32((uint32_t)(0x2u));
  /* 10952911 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952916 push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 1095291b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095291d call esi */
  call_ind((uint32_t)(ESI), 0x1095291fu);
  /* 1095291f push 4 */
  push32((uint32_t)(0x4u));
  /* 10952921 call dword ptr [0x109590fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590fc))), 0x10952927u);
  /* 10952927 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095292a jmp 0x10952a4d */
  goto L_10952a4d;
L_1095292f:;
  /* 1095292f push 0 */
  push32((uint32_t)(0x0u));
  /* 10952931 push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 10952936 call edi */
  call_ind((uint32_t)(EDI), 0x10952938u);
  /* 10952938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095293a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1095293f push 0x1095b008 */
  push32((uint32_t)(0x1095b008u));
  /* 10952944 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952946 call esi */
  call_ind((uint32_t)(ESI), 0x10952948u);
  /* 10952948 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095294a call dword ptr [0x109590fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590fc))), 0x10952950u);
  /* 10952950 push 1 */
  push32((uint32_t)(0x1u));
  /* 10952952 push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 10952957 call edi */
  call_ind((uint32_t)(EDI), 0x10952959u);
  /* 10952959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095295b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10952960 push 0x1095b010 */
  push32((uint32_t)(0x1095b010u));
  /* 10952965 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952967 call esi */
  call_ind((uint32_t)(ESI), 0x10952969u);
  /* 10952969 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095296b call dword ptr [0x109590fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590fc))), 0x10952971u);
  /* 10952971 push 1 */
  push32((uint32_t)(0x1u));
  /* 10952973 push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 10952978 call edi */
  call_ind((uint32_t)(EDI), 0x1095297au);
  /* 1095297a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095297d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095297f push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10952984 push 0x1095af50 */
  push32((uint32_t)(0x1095af50u));
  /* 10952989 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095298b call esi */
  call_ind((uint32_t)(ESI), 0x1095298du);
  /* 1095298d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095298f call dword ptr [0x109590fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590fc))), 0x10952995u);
  /* 10952995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952997 push 0x1095ad78 */
  push32((uint32_t)(0x1095ad78u));
  /* 1095299c call edi */
  call_ind((uint32_t)(EDI), 0x1095299eu);
  /* 1095299e push 0 */
  push32((uint32_t)(0x0u));
  /* 109529a0 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 109529a2 push 0x1095aea0 */
  push32((uint32_t)(0x1095aea0u));
  /* 109529a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109529a9 call esi */
  call_ind((uint32_t)(ESI), 0x109529abu);
  /* 109529ab push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 109529b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109529b2 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109529b8u);
  /* 109529b8 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109529bb jmp 0x10952a4d */
  goto L_10952a4d;
L_109529c0:;
  /* 109529c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109529c2 push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 109529c7 call edi */
  call_ind((uint32_t)(EDI), 0x109529c9u);
  /* 109529c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109529cb push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 109529d0 call edi */
  call_ind((uint32_t)(EDI), 0x109529d2u);
  /* 109529d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109529d4 push 0x1095b040 */
  push32((uint32_t)(0x1095b040u));
  /* 109529d9 call edi */
  call_ind((uint32_t)(EDI), 0x109529dbu);
  /* 109529db push 0 */
  push32((uint32_t)(0x0u));
  /* 109529dd push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109529e2 push 0x1095b028 */
  push32((uint32_t)(0x1095b028u));
  /* 109529e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109529e9 call esi */
  call_ind((uint32_t)(ESI), 0x109529ebu);
  /* 109529eb push 2 */
  push32((uint32_t)(0x2u));
  /* 109529ed push 0xc6 */
  push32((uint32_t)(0xc6u));
  /* 109529f2 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 109529f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109529f9 call esi */
  call_ind((uint32_t)(ESI), 0x109529fbu);
  /* 109529fb push 2 */
  push32((uint32_t)(0x2u));
  /* 109529fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109529ff push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 10952a04 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952a06 call esi */
  call_ind((uint32_t)(ESI), 0x10952a08u);
  /* 10952a08 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10952a0d push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 10952a12 call edi */
  call_ind((uint32_t)(EDI), 0x10952a14u);
  /* 10952a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10952a16 push 0x1095b040 */
  push32((uint32_t)(0x1095b040u));
  /* 10952a1b call edi */
  call_ind((uint32_t)(EDI), 0x10952a1du);
  /* 10952a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10952a1f push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952a24 push 0x1095b028 */
  push32((uint32_t)(0x1095b028u));
  /* 10952a29 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952a2b call esi */
  call_ind((uint32_t)(ESI), 0x10952a2du);
  /* 10952a2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10952a2f push 0xc6 */
  push32((uint32_t)(0xc6u));
  /* 10952a34 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 10952a39 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952a3b call esi */
  call_ind((uint32_t)(ESI), 0x10952a3du);
  /* 10952a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10952a3f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10952a41 push 0x1095b0d0 */
  push32((uint32_t)(0x1095b0d0u));
  /* 10952a46 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952a48 call esi */
  call_ind((uint32_t)(ESI), 0x10952a4au);
  /* 10952a4a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10952a4d:;
  /* 10952a4d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10952a4f call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10952a55u);
  /* 10952a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952a58 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10952a5a je 0x109530b4 */
  if (C.zf) goto L_109530b4;
  /* 10952a60 push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 10952a65 push 0x1095ada8 */
  push32((uint32_t)(0x1095ada8u));
  /* 10952a6a call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10952a70u);
  /* 10952a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10952a75 jg 0x10952a92 */
  if ((!C.zf&&C.sf==C.of)) goto L_10952a92;
  /* 10952a77 push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 10952a7c push 0x1095ada8 */
  push32((uint32_t)(0x1095ada8u));
  /* 10952a81 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10952a87u);
  /* 10952a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10952a8c jle 0x109530b4 */
  if ((C.zf||C.sf!=C.of)) goto L_109530b4;
L_10952a92:;
  /* 10952a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952a94 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10952a96 call ebx */
  call_ind((uint32_t)(EBX), 0x10952a98u);
  /* 10952a98 push 0x1095a5c8 */
  push32((uint32_t)(0x1095a5c8u));
  /* 10952a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10952a9f push 0x1095a5ec */
  push32((uint32_t)(0x1095a5ecu));
  /* 10952aa4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10952aa6 call dword ptr [0x109590f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f8))), 0x10952aacu);
  /* 10952aac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952aaf cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10952ab2 ja 0x109530b4 */
  if ((!C.cf&&!C.zf)) goto L_109530b4;
  /* 10952ab8 jmp dword ptr [eax*4 + 0x1095611c] */
  switch (EAX) {
    case 0: goto L_10952abf;
    case 1: goto L_10952b09;
    case 2: goto L_10952c0a;
    case 3: goto L_10952d4e;
    case 4: goto L_10952e79;
    case 5: goto L_10952f9e;
    default: x86_unimpl("switch@0x10952ab8 out of table"); return;
  }
L_10952abf:;
  /* 10952abf push 1 */
  push32((uint32_t)(0x1u));
  /* 10952ac1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10952ac3 call ebx */
  call_ind((uint32_t)(EBX), 0x10952ac5u);
  /* 10952ac5 push 0x1095a5c0 */
  push32((uint32_t)(0x1095a5c0u));
  /* 10952aca push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952acf call ebp */
  call_ind((uint32_t)(EBP), 0x10952ad1u);
  /* 10952ad1 push 0x1095a5b8 */
  push32((uint32_t)(0x1095a5b8u));
  /* 10952ad6 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952adb call ebp */
  call_ind((uint32_t)(EBP), 0x10952addu);
  /* 10952add push 0x1095a5b0 */
  push32((uint32_t)(0x1095a5b0u));
  /* 10952ae2 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952ae7 call ebp */
  call_ind((uint32_t)(EBP), 0x10952ae9u);
  /* 10952ae9 push 0x1095a5a8 */
  push32((uint32_t)(0x1095a5a8u));
  /* 10952aee push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952af3 call ebp */
  call_ind((uint32_t)(EBP), 0x10952af5u);
  /* 10952af5 push 0x1095a5a0 */
  push32((uint32_t)(0x1095a5a0u));
  /* 10952afa push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952aff call ebp */
  call_ind((uint32_t)(EBP), 0x10952b01u);
  /* 10952b01 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952b04 jmp 0x109530b4 */
  goto L_109530b4;
L_10952b09:;
  /* 10952b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b0b push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10952b10 call edi */
  call_ind((uint32_t)(EDI), 0x10952b12u);
  /* 10952b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b14 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952b19 push 0x1095aee8 */
  push32((uint32_t)(0x1095aee8u));
  /* 10952b1e push 4 */
  push32((uint32_t)(0x4u));
  /* 10952b20 call esi */
  call_ind((uint32_t)(ESI), 0x10952b22u);
  /* 10952b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b24 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10952b29 call edi */
  call_ind((uint32_t)(EDI), 0x10952b2bu);
  /* 10952b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b2d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952b32 push 0x1095aef8 */
  push32((uint32_t)(0x1095aef8u));
  /* 10952b37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952b39 call esi */
  call_ind((uint32_t)(ESI), 0x10952b3bu);
  /* 10952b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b3d push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10952b42 call edi */
  call_ind((uint32_t)(EDI), 0x10952b44u);
  /* 10952b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b46 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952b4b push 0x1095ae98 */
  push32((uint32_t)(0x1095ae98u));
  /* 10952b50 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952b52 call esi */
  call_ind((uint32_t)(ESI), 0x10952b54u);
  /* 10952b54 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b59 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10952b5e call edi */
  call_ind((uint32_t)(EDI), 0x10952b60u);
  /* 10952b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b62 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952b67 push 0x1095aec0 */
  push32((uint32_t)(0x1095aec0u));
  /* 10952b6c push 4 */
  push32((uint32_t)(0x4u));
  /* 10952b6e call esi */
  call_ind((uint32_t)(ESI), 0x10952b70u);
  /* 10952b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b72 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 10952b77 call edi */
  call_ind((uint32_t)(EDI), 0x10952b79u);
  /* 10952b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b7b push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952b80 push 0x1095afe8 */
  push32((uint32_t)(0x1095afe8u));
  /* 10952b85 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952b87 call esi */
  call_ind((uint32_t)(ESI), 0x10952b89u);
  /* 10952b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b8b push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10952b90 call edi */
  call_ind((uint32_t)(EDI), 0x10952b92u);
  /* 10952b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952b94 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952b99 push 0x1095b000 */
  push32((uint32_t)(0x1095b000u));
  /* 10952b9e push 4 */
  push32((uint32_t)(0x4u));
  /* 10952ba0 call esi */
  call_ind((uint32_t)(ESI), 0x10952ba2u);
  /* 10952ba2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ba7 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10952bac call edi */
  call_ind((uint32_t)(EDI), 0x10952baeu);
  /* 10952bae push 0 */
  push32((uint32_t)(0x0u));
  /* 10952bb0 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952bb5 push 0x1095b020 */
  push32((uint32_t)(0x1095b020u));
  /* 10952bba push 4 */
  push32((uint32_t)(0x4u));
  /* 10952bbc call esi */
  call_ind((uint32_t)(ESI), 0x10952bbeu);
  /* 10952bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10952bc0 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10952bc5 call edi */
  call_ind((uint32_t)(EDI), 0x10952bc7u);
  /* 10952bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952bc9 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952bce push 0x1095b028 */
  push32((uint32_t)(0x1095b028u));
  /* 10952bd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952bd5 call esi */
  call_ind((uint32_t)(ESI), 0x10952bd7u);
  /* 10952bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952bd9 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10952bde call edi */
  call_ind((uint32_t)(EDI), 0x10952be0u);
  /* 10952be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952be4 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 10952be9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952beb call esi */
  call_ind((uint32_t)(ESI), 0x10952bedu);
  /* 10952bed add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952bf2 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10952bf7 call edi */
  call_ind((uint32_t)(EDI), 0x10952bf9u);
  /* 10952bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952bfb push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c00 push 0x1095ad60 */
  push32((uint32_t)(0x1095ad60u));
  /* 10952c05 jmp 0x10952d06 */
  goto L_10952d06;
L_10952c0a:;
  /* 10952c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c0c push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10952c11 call edi */
  call_ind((uint32_t)(EDI), 0x10952c13u);
  /* 10952c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c15 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c1a push 0x1095aef0 */
  push32((uint32_t)(0x1095aef0u));
  /* 10952c1f push 4 */
  push32((uint32_t)(0x4u));
  /* 10952c21 call esi */
  call_ind((uint32_t)(ESI), 0x10952c23u);
  /* 10952c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c25 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10952c2a call edi */
  call_ind((uint32_t)(EDI), 0x10952c2cu);
  /* 10952c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c2e push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c33 push 0x1095af00 */
  push32((uint32_t)(0x1095af00u));
  /* 10952c38 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952c3a call esi */
  call_ind((uint32_t)(ESI), 0x10952c3cu);
  /* 10952c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c3e push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10952c43 call edi */
  call_ind((uint32_t)(EDI), 0x10952c45u);
  /* 10952c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c47 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c4c push 0x1095af10 */
  push32((uint32_t)(0x1095af10u));
  /* 10952c51 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952c53 call esi */
  call_ind((uint32_t)(ESI), 0x10952c55u);
  /* 10952c55 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c5a push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10952c5f call edi */
  call_ind((uint32_t)(EDI), 0x10952c61u);
  /* 10952c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c63 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c68 push 0x1095af28 */
  push32((uint32_t)(0x1095af28u));
  /* 10952c6d push 4 */
  push32((uint32_t)(0x4u));
  /* 10952c6f call esi */
  call_ind((uint32_t)(ESI), 0x10952c71u);
  /* 10952c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c73 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 10952c78 call edi */
  call_ind((uint32_t)(EDI), 0x10952c7au);
  /* 10952c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c7c push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c81 push 0x1095b0d8 */
  push32((uint32_t)(0x1095b0d8u));
  /* 10952c86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952c88 call esi */
  call_ind((uint32_t)(ESI), 0x10952c8au);
  /* 10952c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c8c push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10952c91 call edi */
  call_ind((uint32_t)(EDI), 0x10952c93u);
  /* 10952c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952c95 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952c9a push 0x1095b100 */
  push32((uint32_t)(0x1095b100u));
  /* 10952c9f push 4 */
  push32((uint32_t)(0x4u));
  /* 10952ca1 call esi */
  call_ind((uint32_t)(ESI), 0x10952ca3u);
  /* 10952ca3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ca8 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10952cad call edi */
  call_ind((uint32_t)(EDI), 0x10952cafu);
  /* 10952caf push 0 */
  push32((uint32_t)(0x0u));
  /* 10952cb1 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952cb6 push 0x1095b130 */
  push32((uint32_t)(0x1095b130u));
  /* 10952cbb push 4 */
  push32((uint32_t)(0x4u));
  /* 10952cbd call esi */
  call_ind((uint32_t)(ESI), 0x10952cbfu);
  /* 10952cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10952cc1 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10952cc6 call edi */
  call_ind((uint32_t)(EDI), 0x10952cc8u);
  /* 10952cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952cca push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952ccf push 0x1095b160 */
  push32((uint32_t)(0x1095b160u));
  /* 10952cd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952cd6 call esi */
  call_ind((uint32_t)(ESI), 0x10952cd8u);
  /* 10952cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952cda push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10952cdf call edi */
  call_ind((uint32_t)(EDI), 0x10952ce1u);
  /* 10952ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ce5 push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 10952cea push 4 */
  push32((uint32_t)(0x4u));
  /* 10952cec call esi */
  call_ind((uint32_t)(ESI), 0x10952ceeu);
  /* 10952cee add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952cf3 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10952cf8 call edi */
  call_ind((uint32_t)(EDI), 0x10952cfau);
  /* 10952cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10952cfc push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952d01 push 0x1095ad70 */
  push32((uint32_t)(0x1095ad70u));
L_10952d06:;
  /* 10952d06 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952d08 call esi */
  call_ind((uint32_t)(ESI), 0x10952d0au);
  /* 10952d0a push 0x1095a5c0 */
  push32((uint32_t)(0x1095a5c0u));
  /* 10952d0f push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952d14 call ebp */
  call_ind((uint32_t)(EBP), 0x10952d16u);
  /* 10952d16 push 0x1095a5b8 */
  push32((uint32_t)(0x1095a5b8u));
  /* 10952d1b push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952d20 call ebp */
  call_ind((uint32_t)(EBP), 0x10952d22u);
  /* 10952d22 push 0x1095a5b0 */
  push32((uint32_t)(0x1095a5b0u));
  /* 10952d27 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952d2c call ebp */
  call_ind((uint32_t)(EBP), 0x10952d2eu);
  /* 10952d2e push 0x1095a5a8 */
  push32((uint32_t)(0x1095a5a8u));
  /* 10952d33 push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952d38 call ebp */
  call_ind((uint32_t)(EBP), 0x10952d3au);
  /* 10952d3a push 0x1095a5a0 */
  push32((uint32_t)(0x1095a5a0u));
  /* 10952d3f push 0x1095a520 */
  push32((uint32_t)(0x1095a520u));
  /* 10952d44 call ebp */
  call_ind((uint32_t)(EBP), 0x10952d46u);
  /* 10952d46 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952d49 jmp 0x109530b4 */
  goto L_109530b4;
L_10952d4e:;
  /* 10952d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d50 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10952d55 call edi */
  call_ind((uint32_t)(EDI), 0x10952d57u);
  /* 10952d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d59 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952d5e push 0x1095ad80 */
  push32((uint32_t)(0x1095ad80u));
  /* 10952d63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952d65 call esi */
  call_ind((uint32_t)(ESI), 0x10952d67u);
  /* 10952d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d69 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10952d6e call edi */
  call_ind((uint32_t)(EDI), 0x10952d70u);
  /* 10952d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d72 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952d77 push 0x1095ad90 */
  push32((uint32_t)(0x1095ad90u));
  /* 10952d7c push 4 */
  push32((uint32_t)(0x4u));
  /* 10952d7e call esi */
  call_ind((uint32_t)(ESI), 0x10952d80u);
  /* 10952d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d82 push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10952d87 call edi */
  call_ind((uint32_t)(EDI), 0x10952d89u);
  /* 10952d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d8b push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952d90 push 0x1095ad98 */
  push32((uint32_t)(0x1095ad98u));
  /* 10952d95 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952d97 call esi */
  call_ind((uint32_t)(ESI), 0x10952d99u);
  /* 10952d99 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10952d9e push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10952da3 call edi */
  call_ind((uint32_t)(EDI), 0x10952da5u);
  /* 10952da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952da7 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952dac push 0x1095ad88 */
  push32((uint32_t)(0x1095ad88u));
  /* 10952db1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952db3 call esi */
  call_ind((uint32_t)(ESI), 0x10952db5u);
  /* 10952db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952db7 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 10952dbc call edi */
  call_ind((uint32_t)(EDI), 0x10952dbeu);
  /* 10952dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10952dc0 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952dc5 push 0x1095b168 */
  push32((uint32_t)(0x1095b168u));
  /* 10952dca push 4 */
  push32((uint32_t)(0x4u));
  /* 10952dcc call esi */
  call_ind((uint32_t)(ESI), 0x10952dceu);
  /* 10952dce push 0 */
  push32((uint32_t)(0x0u));
  /* 10952dd0 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10952dd5 call edi */
  call_ind((uint32_t)(EDI), 0x10952dd7u);
  /* 10952dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952dd9 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952dde push 0x1095b170 */
  push32((uint32_t)(0x1095b170u));
  /* 10952de3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952de5 call esi */
  call_ind((uint32_t)(ESI), 0x10952de7u);
  /* 10952de7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952dea push 0 */
  push32((uint32_t)(0x0u));
  /* 10952dec push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10952df1 call edi */
  call_ind((uint32_t)(EDI), 0x10952df3u);
  /* 10952df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952df5 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952dfa push 0x1095b178 */
  push32((uint32_t)(0x1095b178u));
  /* 10952dff push 4 */
  push32((uint32_t)(0x4u));
  /* 10952e01 call esi */
  call_ind((uint32_t)(ESI), 0x10952e03u);
  /* 10952e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e05 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10952e0a call edi */
  call_ind((uint32_t)(EDI), 0x10952e0cu);
  /* 10952e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e0e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952e13 push 0x1095b180 */
  push32((uint32_t)(0x1095b180u));
  /* 10952e18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952e1a call esi */
  call_ind((uint32_t)(ESI), 0x10952e1cu);
  /* 10952e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e1e push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10952e23 call edi */
  call_ind((uint32_t)(EDI), 0x10952e25u);
  /* 10952e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e29 push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 10952e2e push 4 */
  push32((uint32_t)(0x4u));
  /* 10952e30 call esi */
  call_ind((uint32_t)(ESI), 0x10952e32u);
  /* 10952e32 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e37 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10952e3c call edi */
  call_ind((uint32_t)(EDI), 0x10952e3eu);
  /* 10952e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e40 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10952e45 push 0x1095ad58 */
  push32((uint32_t)(0x1095ad58u));
  /* 10952e4a push 4 */
  push32((uint32_t)(0x4u));
  /* 10952e4c call esi */
  call_ind((uint32_t)(ESI), 0x10952e4eu);
  /* 10952e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e50 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10952e52 call ebx */
  call_ind((uint32_t)(EBX), 0x10952e54u);
  /* 10952e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e56 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10952e58 call ebx */
  call_ind((uint32_t)(EBX), 0x10952e5au);
  /* 10952e5a push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10952e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10952e61 mov dword ptr [0x1095adc0], 1 */
  w32((uint32_t)(0x1095adc0), (0x1u));
  /* 10952e6b call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10952e71u);
  /* 10952e71 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952e74 jmp 0x109530b4 */
  goto L_109530b4;
L_10952e79:;
  /* 10952e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e7b push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10952e80 call edi */
  call_ind((uint32_t)(EDI), 0x10952e82u);
  /* 10952e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e84 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952e89 push 0x1095aee8 */
  push32((uint32_t)(0x1095aee8u));
  /* 10952e8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10952e90 call esi */
  call_ind((uint32_t)(ESI), 0x10952e92u);
  /* 10952e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e94 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10952e99 call edi */
  call_ind((uint32_t)(EDI), 0x10952e9bu);
  /* 10952e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10952e9d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952ea2 push 0x1095aef8 */
  push32((uint32_t)(0x1095aef8u));
  /* 10952ea7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952ea9 call esi */
  call_ind((uint32_t)(ESI), 0x10952eabu);
  /* 10952eab push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ead push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10952eb2 call edi */
  call_ind((uint32_t)(EDI), 0x10952eb4u);
  /* 10952eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952eb6 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952ebb push 0x1095ae98 */
  push32((uint32_t)(0x1095ae98u));
  /* 10952ec0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952ec2 call esi */
  call_ind((uint32_t)(ESI), 0x10952ec4u);
  /* 10952ec4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ec9 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10952ece call edi */
  call_ind((uint32_t)(EDI), 0x10952ed0u);
  /* 10952ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ed2 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952ed7 push 0x1095aec0 */
  push32((uint32_t)(0x1095aec0u));
  /* 10952edc push 4 */
  push32((uint32_t)(0x4u));
  /* 10952ede call esi */
  call_ind((uint32_t)(ESI), 0x10952ee0u);
  /* 10952ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ee2 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 10952ee7 call edi */
  call_ind((uint32_t)(EDI), 0x10952ee9u);
  /* 10952ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952eeb push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952ef0 push 0x1095afe8 */
  push32((uint32_t)(0x1095afe8u));
  /* 10952ef5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952ef7 call esi */
  call_ind((uint32_t)(ESI), 0x10952ef9u);
  /* 10952ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952efb push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10952f00 call edi */
  call_ind((uint32_t)(EDI), 0x10952f02u);
  /* 10952f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f04 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952f09 push 0x1095b000 */
  push32((uint32_t)(0x1095b000u));
  /* 10952f0e push 4 */
  push32((uint32_t)(0x4u));
  /* 10952f10 call esi */
  call_ind((uint32_t)(ESI), 0x10952f12u);
  /* 10952f12 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f17 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10952f1c call edi */
  call_ind((uint32_t)(EDI), 0x10952f1eu);
  /* 10952f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f20 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952f25 push 0x1095b020 */
  push32((uint32_t)(0x1095b020u));
  /* 10952f2a push 4 */
  push32((uint32_t)(0x4u));
  /* 10952f2c call esi */
  call_ind((uint32_t)(ESI), 0x10952f2eu);
  /* 10952f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f30 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10952f35 call edi */
  call_ind((uint32_t)(EDI), 0x10952f37u);
  /* 10952f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f39 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952f3e push 0x1095b028 */
  push32((uint32_t)(0x1095b028u));
  /* 10952f43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952f45 call esi */
  call_ind((uint32_t)(ESI), 0x10952f47u);
  /* 10952f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f49 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10952f4e call edi */
  call_ind((uint32_t)(EDI), 0x10952f50u);
  /* 10952f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f54 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 10952f59 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952f5b call esi */
  call_ind((uint32_t)(ESI), 0x10952f5du);
  /* 10952f5d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f62 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10952f67 call edi */
  call_ind((uint32_t)(EDI), 0x10952f69u);
  /* 10952f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f6b push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10952f70 push 0x1095ad60 */
  push32((uint32_t)(0x1095ad60u));
  /* 10952f75 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952f77 call esi */
  call_ind((uint32_t)(ESI), 0x10952f79u);
  /* 10952f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952f7b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10952f7d call ebx */
  call_ind((uint32_t)(EBX), 0x10952f7fu);
  /* 10952f7f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10952f84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10952f86 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10952f8cu);
  /* 10952f8c add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952f8f mov dword ptr [0x1095adc4], 1 */
  w32((uint32_t)(0x1095adc4), (0x1u));
  /* 10952f99 jmp 0x109530b4 */
  goto L_109530b4;
L_10952f9e:;
  /* 10952f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fa0 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10952fa5 call edi */
  call_ind((uint32_t)(EDI), 0x10952fa7u);
  /* 10952fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fa9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10952fae push 0x1095aef0 */
  push32((uint32_t)(0x1095aef0u));
  /* 10952fb3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952fb5 call esi */
  call_ind((uint32_t)(ESI), 0x10952fb7u);
  /* 10952fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fb9 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10952fbe call edi */
  call_ind((uint32_t)(EDI), 0x10952fc0u);
  /* 10952fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fc2 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10952fc7 push 0x1095af00 */
  push32((uint32_t)(0x1095af00u));
  /* 10952fcc push 4 */
  push32((uint32_t)(0x4u));
  /* 10952fce call esi */
  call_ind((uint32_t)(ESI), 0x10952fd0u);
  /* 10952fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fd2 push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10952fd7 call edi */
  call_ind((uint32_t)(EDI), 0x10952fd9u);
  /* 10952fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fdb push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10952fe0 push 0x1095af10 */
  push32((uint32_t)(0x1095af10u));
  /* 10952fe5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10952fe7 call esi */
  call_ind((uint32_t)(ESI), 0x10952fe9u);
  /* 10952fe9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10952fec push 0 */
  push32((uint32_t)(0x0u));
  /* 10952fee push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10952ff3 call edi */
  call_ind((uint32_t)(EDI), 0x10952ff5u);
  /* 10952ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10952ff7 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10952ffc push 0x1095af28 */
  push32((uint32_t)(0x1095af28u));
  /* 10953001 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953003 call esi */
  call_ind((uint32_t)(ESI), 0x10953005u);
  /* 10953005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953007 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 1095300c call edi */
  call_ind((uint32_t)(EDI), 0x1095300eu);
  /* 1095300e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953010 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10953015 push 0x1095b0d8 */
  push32((uint32_t)(0x1095b0d8u));
  /* 1095301a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095301c call esi */
  call_ind((uint32_t)(ESI), 0x1095301eu);
  /* 1095301e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953020 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10953025 call edi */
  call_ind((uint32_t)(EDI), 0x10953027u);
  /* 10953027 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953029 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1095302e push 0x1095b100 */
  push32((uint32_t)(0x1095b100u));
  /* 10953033 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953035 call esi */
  call_ind((uint32_t)(ESI), 0x10953037u);
  /* 10953037 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095303a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095303c push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10953041 call edi */
  call_ind((uint32_t)(EDI), 0x10953043u);
  /* 10953043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953045 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1095304a push 0x1095b130 */
  push32((uint32_t)(0x1095b130u));
  /* 1095304f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953051 call esi */
  call_ind((uint32_t)(ESI), 0x10953053u);
  /* 10953053 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953055 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 1095305a call edi */
  call_ind((uint32_t)(EDI), 0x1095305cu);
  /* 1095305c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095305e push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10953063 push 0x1095b160 */
  push32((uint32_t)(0x1095b160u));
  /* 10953068 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095306a call esi */
  call_ind((uint32_t)(ESI), 0x1095306cu);
  /* 1095306c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095306e push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10953073 call edi */
  call_ind((uint32_t)(EDI), 0x10953075u);
  /* 10953075 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953077 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953079 push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 1095307e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953080 call esi */
  call_ind((uint32_t)(ESI), 0x10953082u);
  /* 10953082 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953087 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 1095308c call edi */
  call_ind((uint32_t)(EDI), 0x1095308eu);
  /* 1095308e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953090 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10953095 push 0x1095ad70 */
  push32((uint32_t)(0x1095ad70u));
  /* 1095309a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095309c call esi */
  call_ind((uint32_t)(ESI), 0x1095309eu);
  /* 1095309e push 0 */
  push32((uint32_t)(0x0u));
  /* 109530a0 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 109530a2 call ebx */
  call_ind((uint32_t)(EBX), 0x109530a4u);
  /* 109530a4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 109530a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 109530ab call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109530b1u);
  /* 109530b1 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109530b4:;
  /* 109530b4 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109530b6 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109530bcu);
  /* 109530bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109530bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109530c1 je 0x10953108 */
  if (C.zf) goto L_10953108;
  /* 109530c3 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 109530c8 push 0x1095b028 */
  push32((uint32_t)(0x1095b028u));
  /* 109530cd call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x109530d3u);
  /* 109530d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109530d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109530d8 jle 0x10953108 */
  if ((C.zf||C.sf!=C.of)) goto L_10953108;
  /* 109530da push 0 */
  push32((uint32_t)(0x0u));
  /* 109530dc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109530de call ebx */
  call_ind((uint32_t)(EBX), 0x109530e0u);
  /* 109530e0 mov ebp, dword ptr [0x109590c4] */
  EBP = (r32((uint32_t)(0x109590c4)));
  /* 109530e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109530e8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109530ea call ebp */
  call_ind((uint32_t)(EBP), 0x109530ecu);
  /* 109530ec push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109530f1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109530f3 call ebp */
  call_ind((uint32_t)(EBP), 0x109530f5u);
  /* 109530f5 mov ebp, dword ptr [0x109590b8] */
  EBP = (r32((uint32_t)(0x109590b8)));
  /* 109530fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109530fd push 1 */
  push32((uint32_t)(0x1u));
  /* 109530ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10953101 call ebp */
  call_ind((uint32_t)(EBP), 0x10953103u);
  /* 10953103 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953106 jmp 0x1095310e */
  goto L_1095310e;
L_10953108:;
  /* 10953108 mov ebp, dword ptr [0x109590b8] */
  EBP = (r32((uint32_t)(0x109590b8)));
L_1095310e:;
  /* 1095310e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10953110 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10953116u);
  /* 10953116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953119 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095311b je 0x109531d6 */
  if (C.zf) goto L_109531d6;
  /* 10953121 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10953123 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10953129u);
  /* 10953129 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095312c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095312e je 0x109531d6 */
  if (C.zf) goto L_109531d6;
  /* 10953134 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953136 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10953138 call ebx */
  call_ind((uint32_t)(EBX), 0x1095313au);
  /* 1095313a push 0x1095a604 */
  push32((uint32_t)(0x1095a604u));
  /* 1095313f call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x10953145u);
  /* 10953145 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953147 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 1095314c call edi */
  call_ind((uint32_t)(EDI), 0x1095314eu);
  /* 1095314e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953150 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953155 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 1095315a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095315c call esi */
  call_ind((uint32_t)(ESI), 0x1095315eu);
  /* 1095315e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953160 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10953165 call edi */
  call_ind((uint32_t)(EDI), 0x10953167u);
  /* 10953167 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953169 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095316e push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953173 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953175 call esi */
  call_ind((uint32_t)(ESI), 0x10953177u);
  /* 10953177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953179 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 1095317e call edi */
  call_ind((uint32_t)(EDI), 0x10953180u);
  /* 10953180 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953185 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095318a push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095318f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953191 call esi */
  call_ind((uint32_t)(ESI), 0x10953193u);
  /* 10953193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953195 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 1095319a call edi */
  call_ind((uint32_t)(EDI), 0x1095319cu);
  /* 1095319c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095319e push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109531a3 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109531a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109531aa call esi */
  call_ind((uint32_t)(ESI), 0x109531acu);
  /* 109531ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109531ae push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 109531b3 call edi */
  call_ind((uint32_t)(EDI), 0x109531b5u);
  /* 109531b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109531b7 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109531bc push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109531c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 109531c3 call esi */
  call_ind((uint32_t)(ESI), 0x109531c5u);
  /* 109531c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109531c8 push 0x7cc86 */
  push32((uint32_t)(0x7cc86u));
  /* 109531cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109531cf push 4 */
  push32((uint32_t)(0x4u));
  /* 109531d1 call ebp */
  call_ind((uint32_t)(EBP), 0x109531d3u);
  /* 109531d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109531d6:;
  /* 109531d6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109531d8 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109531deu);
  /* 109531de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109531e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109531e3 je 0x10953360 */
  if (C.zf) goto L_10953360;
  /* 109531e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109531eb call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109531f1u);
  /* 109531f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109531f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109531f6 je 0x10953360 */
  if (C.zf) goto L_10953360;
  /* 109531fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109531fe push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10953200 call ebx */
  call_ind((uint32_t)(EBX), 0x10953202u);
  /* 10953202 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953204 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10953209 call edi */
  call_ind((uint32_t)(EDI), 0x1095320bu);
  /* 1095320b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095320d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953212 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953217 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953219 call esi */
  call_ind((uint32_t)(ESI), 0x1095321bu);
  /* 1095321b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095321d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953222 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953227 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953229 call esi */
  call_ind((uint32_t)(ESI), 0x1095322bu);
  /* 1095322b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095322d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953232 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953237 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953239 call esi */
  call_ind((uint32_t)(ESI), 0x1095323bu);
  /* 1095323b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095323e push 2 */
  push32((uint32_t)(0x2u));
  /* 10953240 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953245 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095324a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095324c call esi */
  call_ind((uint32_t)(ESI), 0x1095324eu);
  /* 1095324e push 2 */
  push32((uint32_t)(0x2u));
  /* 10953250 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953255 push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 1095325a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095325c call esi */
  call_ind((uint32_t)(ESI), 0x1095325eu);
  /* 1095325e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953260 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10953265 call edi */
  call_ind((uint32_t)(EDI), 0x10953267u);
  /* 10953267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953269 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095326e push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953273 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953275 call esi */
  call_ind((uint32_t)(ESI), 0x10953277u);
  /* 10953277 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953279 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095327e push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953283 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953285 call esi */
  call_ind((uint32_t)(ESI), 0x10953287u);
  /* 10953287 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095328a push 2 */
  push32((uint32_t)(0x2u));
  /* 1095328c push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953291 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953296 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953298 call esi */
  call_ind((uint32_t)(ESI), 0x1095329au);
  /* 1095329a push 2 */
  push32((uint32_t)(0x2u));
  /* 1095329c push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109532a1 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 109532a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 109532a8 call esi */
  call_ind((uint32_t)(ESI), 0x109532aau);
  /* 109532aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109532ac push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 109532b1 call edi */
  call_ind((uint32_t)(EDI), 0x109532b3u);
  /* 109532b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109532b5 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109532ba push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109532bf push 4 */
  push32((uint32_t)(0x4u));
  /* 109532c1 call esi */
  call_ind((uint32_t)(ESI), 0x109532c3u);
  /* 109532c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109532c5 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109532ca push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109532cf push 4 */
  push32((uint32_t)(0x4u));
  /* 109532d1 call esi */
  call_ind((uint32_t)(ESI), 0x109532d3u);
  /* 109532d3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109532d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109532d8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109532dd push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109532e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109532e4 call esi */
  call_ind((uint32_t)(ESI), 0x109532e6u);
  /* 109532e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109532e8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109532ed push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 109532f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109532f4 call esi */
  call_ind((uint32_t)(ESI), 0x109532f6u);
  /* 109532f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109532f8 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 109532fd call edi */
  call_ind((uint32_t)(EDI), 0x109532ffu);
  /* 109532ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10953301 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953306 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095330b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095330d call esi */
  call_ind((uint32_t)(ESI), 0x1095330fu);
  /* 1095330f push 2 */
  push32((uint32_t)(0x2u));
  /* 10953311 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953316 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095331b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095331d call esi */
  call_ind((uint32_t)(ESI), 0x1095331fu);
  /* 1095331f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953322 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953324 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953329 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 1095332e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953330 call esi */
  call_ind((uint32_t)(ESI), 0x10953332u);
  /* 10953332 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953334 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953339 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 1095333e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953340 call esi */
  call_ind((uint32_t)(ESI), 0x10953342u);
  /* 10953342 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953344 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953349 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 1095334e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953350 call esi */
  call_ind((uint32_t)(ESI), 0x10953352u);
  /* 10953352 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10953357 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953359 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095335b call ebp */
  call_ind((uint32_t)(EBP), 0x1095335du);
  /* 1095335d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10953360:;
  /* 10953360 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10953362 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10953368u);
  /* 10953368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095336b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095336d je 0x109533ae */
  if (C.zf) goto L_109533ae;
  /* 1095336f push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10953374 push 0x1095b160 */
  push32((uint32_t)(0x1095b160u));
  /* 10953379 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x1095337fu);
  /* 1095337f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953384 jle 0x109533ae */
  if ((C.zf||C.sf!=C.of)) goto L_109533ae;
  /* 10953386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953388 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1095338a call ebx */
  call_ind((uint32_t)(EBX), 0x1095338cu);
  /* 1095338c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1095338e push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10953390 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10953396u);
  /* 10953396 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 1095339b push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1095339d call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109533a3u);
  /* 109533a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109533a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109533a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109533a9 call ebp */
  call_ind((uint32_t)(EBP), 0x109533abu);
  /* 109533ab add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109533ae:;
  /* 109533ae push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109533b0 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109533b6u);
  /* 109533b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109533b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109533bb je 0x10953468 */
  if (C.zf) goto L_10953468;
  /* 109533c1 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 109533c3 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109533c9u);
  /* 109533c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109533cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109533ce je 0x10953468 */
  if (C.zf) goto L_10953468;
  /* 109533d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109533d6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109533d8 call ebx */
  call_ind((uint32_t)(EBX), 0x109533dau);
  /* 109533da push 0x1095a604 */
  push32((uint32_t)(0x1095a604u));
  /* 109533df call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x109533e5u);
  /* 109533e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109533e7 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 109533ec call edi */
  call_ind((uint32_t)(EDI), 0x109533eeu);
  /* 109533ee push 0 */
  push32((uint32_t)(0x0u));
  /* 109533f0 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109533f5 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109533fa push 4 */
  push32((uint32_t)(0x4u));
  /* 109533fc call esi */
  call_ind((uint32_t)(ESI), 0x109533feu);
  /* 109533fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10953400 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10953405 call edi */
  call_ind((uint32_t)(EDI), 0x10953407u);
  /* 10953407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953409 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095340e push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953413 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953415 call esi */
  call_ind((uint32_t)(ESI), 0x10953417u);
  /* 10953417 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953419 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 1095341e call edi */
  call_ind((uint32_t)(EDI), 0x10953420u);
  /* 10953420 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953423 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953425 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095342a push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095342f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953431 call esi */
  call_ind((uint32_t)(ESI), 0x10953433u);
  /* 10953433 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953435 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 1095343a call edi */
  call_ind((uint32_t)(EDI), 0x1095343cu);
  /* 1095343c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095343e push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953443 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953448 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095344a call esi */
  call_ind((uint32_t)(ESI), 0x1095344cu);
  /* 1095344c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095344e push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10953453 call edi */
  call_ind((uint32_t)(EDI), 0x10953455u);
  /* 10953455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953457 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095345c push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953461 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953463 call esi */
  call_ind((uint32_t)(ESI), 0x10953465u);
  /* 10953465 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10953468:;
  /* 10953468 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1095346a call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10953470u);
  /* 10953470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953473 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953475 je 0x109535c7 */
  if (C.zf) goto L_109535c7;
  /* 1095347b push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1095347d call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10953483u);
  /* 10953483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953486 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953488 je 0x109535c7 */
  if (C.zf) goto L_109535c7;
  /* 1095348e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953490 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10953492 call ebx */
  call_ind((uint32_t)(EBX), 0x10953494u);
  /* 10953494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953496 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 1095349b call edi */
  call_ind((uint32_t)(EDI), 0x1095349du);
  /* 1095349d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095349f push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109534a4 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109534a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109534ab call esi */
  call_ind((uint32_t)(ESI), 0x109534adu);
  /* 109534ad push 2 */
  push32((uint32_t)(0x2u));
  /* 109534af push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109534b4 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109534b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109534bb call esi */
  call_ind((uint32_t)(ESI), 0x109534bdu);
  /* 109534bd push 2 */
  push32((uint32_t)(0x2u));
  /* 109534bf push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109534c4 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109534c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109534cb call esi */
  call_ind((uint32_t)(ESI), 0x109534cdu);
  /* 109534cd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109534d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109534d2 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109534d7 push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 109534dc push 4 */
  push32((uint32_t)(0x4u));
  /* 109534de call esi */
  call_ind((uint32_t)(ESI), 0x109534e0u);
  /* 109534e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109534e2 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 109534e7 call edi */
  call_ind((uint32_t)(EDI), 0x109534e9u);
  /* 109534e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109534eb push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109534f0 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109534f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 109534f7 call esi */
  call_ind((uint32_t)(ESI), 0x109534f9u);
  /* 109534f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109534fb push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953500 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953505 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953507 call esi */
  call_ind((uint32_t)(ESI), 0x10953509u);
  /* 10953509 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095350b push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953510 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953515 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953517 call esi */
  call_ind((uint32_t)(ESI), 0x10953519u);
  /* 10953519 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095351c push 2 */
  push32((uint32_t)(0x2u));
  /* 1095351e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953523 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10953528 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095352a call esi */
  call_ind((uint32_t)(ESI), 0x1095352cu);
  /* 1095352c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095352e push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10953533 call edi */
  call_ind((uint32_t)(EDI), 0x10953535u);
  /* 10953535 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953537 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095353c push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953541 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953543 call esi */
  call_ind((uint32_t)(ESI), 0x10953545u);
  /* 10953545 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953547 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095354c push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953551 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953553 call esi */
  call_ind((uint32_t)(ESI), 0x10953555u);
  /* 10953555 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953557 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095355c push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953561 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953563 call esi */
  call_ind((uint32_t)(ESI), 0x10953565u);
  /* 10953565 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953568 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095356a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095356f push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10953574 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953576 call esi */
  call_ind((uint32_t)(ESI), 0x10953578u);
  /* 10953578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095357a push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 1095357f call edi */
  call_ind((uint32_t)(EDI), 0x10953581u);
  /* 10953581 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953583 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953588 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095358d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095358f call esi */
  call_ind((uint32_t)(ESI), 0x10953591u);
  /* 10953591 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953593 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953598 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095359d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095359f call esi */
  call_ind((uint32_t)(ESI), 0x109535a1u);
  /* 109535a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109535a3 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109535a8 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109535ad push 4 */
  push32((uint32_t)(0x4u));
  /* 109535af call esi */
  call_ind((uint32_t)(ESI), 0x109535b1u);
  /* 109535b1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109535b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109535b6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109535bb push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 109535c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109535c2 call esi */
  call_ind((uint32_t)(ESI), 0x109535c4u);
  /* 109535c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109535c7:;
  /* 109535c7 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109535c9 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109535cfu);
  /* 109535cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109535d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109535d4 je 0x10953875 */
  if (C.zf) goto L_10953875;
  /* 109535da push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 109535df push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 109535e4 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x109535eau);
  /* 109535ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109535ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109535ef jle 0x10953875 */
  if ((C.zf||C.sf!=C.of)) goto L_10953875;
  /* 109535f5 push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 109535fa push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 109535ff call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10953605u);
  /* 10953605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095360a jg 0x10953627 */
  if ((!C.zf&&C.sf==C.of)) goto L_10953627;
  /* 1095360c push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 10953611 push 0x1095ad68 */
  push32((uint32_t)(0x1095ad68u));
  /* 10953616 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x1095361cu);
  /* 1095361c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095361f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953621 jle 0x10953875 */
  if ((C.zf||C.sf!=C.of)) goto L_10953875;
L_10953627:;
  /* 10953627 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953629 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x1095362fu);
  /* 1095362f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953632 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953634 je 0x10953875 */
  if (C.zf) goto L_10953875;
  /* 1095363a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095363c push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1095363e call ebx */
  call_ind((uint32_t)(EBX), 0x10953640u);
  /* 10953640 push 0x1095a598 */
  push32((uint32_t)(0x1095a598u));
  /* 10953645 call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x1095364bu);
  /* 1095364b push 0x1095a58c */
  push32((uint32_t)(0x1095a58cu));
  /* 10953650 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953652 push 0x1095a584 */
  push32((uint32_t)(0x1095a584u));
  /* 10953657 push 8 */
  push32((uint32_t)(0x8u));
  /* 10953659 call dword ptr [0x109590f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f8))), 0x1095365fu);
  /* 1095365f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953662 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10953665 je 0x10953689 */
  if (C.zf) goto L_10953689;
  /* 10953667 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10953668 jne 0x10953875 */
  if (!C.zf) goto L_10953875;
  /* 1095366e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10953673 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953675 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x1095367bu);
  /* 1095367b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095367d push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1095367f call ebx */
  call_ind((uint32_t)(EBX), 0x10953681u);
  /* 10953681 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953684 jmp 0x10953875 */
  goto L_10953875;
L_10953689:;
  /* 10953689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095368b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095368d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095368f call ebp */
  call_ind((uint32_t)(EBP), 0x10953691u);
  /* 10953691 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953693 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10953698 call edi */
  call_ind((uint32_t)(EDI), 0x1095369au);
  /* 1095369a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095369c push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109536a1 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109536a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 109536a8 call esi */
  call_ind((uint32_t)(ESI), 0x109536aau);
  /* 109536aa push 2 */
  push32((uint32_t)(0x2u));
  /* 109536ac push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109536b1 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109536b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 109536b8 call esi */
  call_ind((uint32_t)(ESI), 0x109536bau);
  /* 109536ba push 2 */
  push32((uint32_t)(0x2u));
  /* 109536bc push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109536c1 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109536c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 109536c8 call esi */
  call_ind((uint32_t)(ESI), 0x109536cau);
  /* 109536ca add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109536cd push 2 */
  push32((uint32_t)(0x2u));
  /* 109536cf push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109536d4 push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 109536d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109536db call esi */
  call_ind((uint32_t)(ESI), 0x109536ddu);
  /* 109536dd push 0 */
  push32((uint32_t)(0x0u));
  /* 109536df push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 109536e4 call edi */
  call_ind((uint32_t)(EDI), 0x109536e6u);
  /* 109536e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109536e8 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109536ed push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109536f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109536f4 call esi */
  call_ind((uint32_t)(ESI), 0x109536f6u);
  /* 109536f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109536f8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109536fd push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953702 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953704 call esi */
  call_ind((uint32_t)(ESI), 0x10953706u);
  /* 10953706 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953708 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095370d push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953712 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953714 call esi */
  call_ind((uint32_t)(ESI), 0x10953716u);
  /* 10953716 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953719 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095371b push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953720 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10953725 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953727 call esi */
  call_ind((uint32_t)(ESI), 0x10953729u);
  /* 10953729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095372b push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10953730 call edi */
  call_ind((uint32_t)(EDI), 0x10953732u);
  /* 10953732 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953734 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953739 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095373e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953740 call esi */
  call_ind((uint32_t)(ESI), 0x10953742u);
  /* 10953742 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953744 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953749 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095374e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953750 call esi */
  call_ind((uint32_t)(ESI), 0x10953752u);
  /* 10953752 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953754 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953759 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 1095375e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953760 call esi */
  call_ind((uint32_t)(ESI), 0x10953762u);
  /* 10953762 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953765 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953767 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095376c push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10953771 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953773 call esi */
  call_ind((uint32_t)(ESI), 0x10953775u);
  /* 10953775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953777 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 1095377c call edi */
  call_ind((uint32_t)(EDI), 0x1095377eu);
  /* 1095377e push 0 */
  push32((uint32_t)(0x0u));
  /* 10953780 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953785 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095378a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095378c call esi */
  call_ind((uint32_t)(ESI), 0x1095378eu);
  /* 1095378e push 2 */
  push32((uint32_t)(0x2u));
  /* 10953790 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953795 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095379a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095379c call esi */
  call_ind((uint32_t)(ESI), 0x1095379eu);
  /* 1095379e push 2 */
  push32((uint32_t)(0x2u));
  /* 109537a0 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109537a5 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109537aa push 4 */
  push32((uint32_t)(0x4u));
  /* 109537ac call esi */
  call_ind((uint32_t)(ESI), 0x109537aeu);
  /* 109537ae add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109537b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109537b3 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109537b8 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 109537bd push 4 */
  push32((uint32_t)(0x4u));
  /* 109537bf call esi */
  call_ind((uint32_t)(ESI), 0x109537c1u);
  /* 109537c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109537c3 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 109537c8 call edi */
  call_ind((uint32_t)(EDI), 0x109537cau);
  /* 109537ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109537cc push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109537d1 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109537d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 109537d8 call esi */
  call_ind((uint32_t)(ESI), 0x109537dau);
  /* 109537da push 0 */
  push32((uint32_t)(0x0u));
  /* 109537dc push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 109537e1 call edi */
  call_ind((uint32_t)(EDI), 0x109537e3u);
  /* 109537e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109537e5 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109537ea push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109537ef push 4 */
  push32((uint32_t)(0x4u));
  /* 109537f1 call esi */
  call_ind((uint32_t)(ESI), 0x109537f3u);
  /* 109537f3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109537f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109537f8 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 109537fd call edi */
  call_ind((uint32_t)(EDI), 0x109537ffu);
  /* 109537ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10953801 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953806 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095380b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095380d call esi */
  call_ind((uint32_t)(ESI), 0x1095380fu);
  /* 1095380f push 0 */
  push32((uint32_t)(0x0u));
  /* 10953811 push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10953816 call edi */
  call_ind((uint32_t)(EDI), 0x10953818u);
  /* 10953818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095381a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095381f push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953824 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953826 call esi */
  call_ind((uint32_t)(ESI), 0x10953828u);
  /* 10953828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095382a push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 1095382f call edi */
  call_ind((uint32_t)(EDI), 0x10953831u);
  /* 10953831 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953833 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953838 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 1095383d push 4 */
  push32((uint32_t)(0x4u));
  /* 1095383f call esi */
  call_ind((uint32_t)(ESI), 0x10953841u);
  /* 10953841 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953844 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953846 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 1095384b call edi */
  call_ind((uint32_t)(EDI), 0x1095384du);
  /* 1095384d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095384f push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953854 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953859 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095385b call esi */
  call_ind((uint32_t)(ESI), 0x1095385du);
  /* 1095385d push 0xad9c6 */
  push32((uint32_t)(0xad9c6u));
  /* 10953862 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953864 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953866 mov dword ptr [0x1095ada0], 1 */
  w32((uint32_t)(0x1095ada0), (0x1u));
  /* 10953870 call ebp */
  call_ind((uint32_t)(EBP), 0x10953872u);
  /* 10953872 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10953875:;
  /* 10953875 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10953877 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095387du);
  /* 1095387d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953880 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953882 je 0x10953b23 */
  if (C.zf) goto L_10953b23;
  /* 10953888 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 1095388d push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 10953892 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x10953898u);
  /* 10953898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095389b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095389d jle 0x10953b23 */
  if ((C.zf||C.sf!=C.of)) goto L_10953b23;
  /* 109538a3 push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 109538a8 push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 109538ad call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x109538b3u);
  /* 109538b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109538b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109538b8 jg 0x109538d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_109538d5;
  /* 109538ba push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 109538bf push 0x1095adb0 */
  push32((uint32_t)(0x1095adb0u));
  /* 109538c4 call dword ptr [0x109590f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f4))), 0x109538cau);
  /* 109538ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109538cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109538cf jle 0x10953b23 */
  if ((C.zf||C.sf!=C.of)) goto L_10953b23;
L_109538d5:;
  /* 109538d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109538d7 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109538ddu);
  /* 109538dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109538e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109538e2 je 0x10953b23 */
  if (C.zf) goto L_10953b23;
  /* 109538e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109538ea push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109538ec call ebx */
  call_ind((uint32_t)(EBX), 0x109538eeu);
  /* 109538ee push 0x1095a598 */
  push32((uint32_t)(0x1095a598u));
  /* 109538f3 call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x109538f9u);
  /* 109538f9 push 0x1095a58c */
  push32((uint32_t)(0x1095a58cu));
  /* 109538fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10953900 push 0x1095a584 */
  push32((uint32_t)(0x1095a584u));
  /* 10953905 push 8 */
  push32((uint32_t)(0x8u));
  /* 10953907 call dword ptr [0x109590f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f8))), 0x1095390du);
  /* 1095390d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953910 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10953913 je 0x10953937 */
  if (C.zf) goto L_10953937;
  /* 10953915 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10953916 jne 0x10953b23 */
  if (!C.zf) goto L_10953b23;
  /* 1095391c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10953921 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953923 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10953929u);
  /* 10953929 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095392b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1095392d call ebx */
  call_ind((uint32_t)(EBX), 0x1095392fu);
  /* 1095392f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953932 jmp 0x10953b23 */
  goto L_10953b23;
L_10953937:;
  /* 10953937 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953939 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095393b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095393d call ebp */
  call_ind((uint32_t)(EBP), 0x1095393fu);
  /* 1095393f push 0 */
  push32((uint32_t)(0x0u));
  /* 10953941 push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10953946 call edi */
  call_ind((uint32_t)(EDI), 0x10953948u);
  /* 10953948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095394a push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095394f push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953954 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953956 call esi */
  call_ind((uint32_t)(ESI), 0x10953958u);
  /* 10953958 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095395a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095395f push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953964 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953966 call esi */
  call_ind((uint32_t)(ESI), 0x10953968u);
  /* 10953968 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095396a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1095396f push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953974 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953976 call esi */
  call_ind((uint32_t)(ESI), 0x10953978u);
  /* 10953978 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095397b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095397d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953982 push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10953987 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953989 call esi */
  call_ind((uint32_t)(ESI), 0x1095398bu);
  /* 1095398b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095398d push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10953992 call edi */
  call_ind((uint32_t)(EDI), 0x10953994u);
  /* 10953994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953996 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1095399b push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109539a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109539a2 call esi */
  call_ind((uint32_t)(ESI), 0x109539a4u);
  /* 109539a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109539a6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109539ab push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109539b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109539b2 call esi */
  call_ind((uint32_t)(ESI), 0x109539b4u);
  /* 109539b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109539b6 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109539bb push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109539c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109539c2 call esi */
  call_ind((uint32_t)(ESI), 0x109539c4u);
  /* 109539c4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109539c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109539c9 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109539ce push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 109539d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109539d5 call esi */
  call_ind((uint32_t)(ESI), 0x109539d7u);
  /* 109539d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109539d9 push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 109539de call edi */
  call_ind((uint32_t)(EDI), 0x109539e0u);
  /* 109539e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109539e2 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109539e7 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 109539ec push 4 */
  push32((uint32_t)(0x4u));
  /* 109539ee call esi */
  call_ind((uint32_t)(ESI), 0x109539f0u);
  /* 109539f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109539f2 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109539f7 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109539fc push 4 */
  push32((uint32_t)(0x4u));
  /* 109539fe call esi */
  call_ind((uint32_t)(ESI), 0x10953a00u);
  /* 10953a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953a02 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953a07 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953a0c push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a0e call esi */
  call_ind((uint32_t)(ESI), 0x10953a10u);
  /* 10953a10 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953a15 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953a1a push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10953a1f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a21 call esi */
  call_ind((uint32_t)(ESI), 0x10953a23u);
  /* 10953a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953a25 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10953a2a call edi */
  call_ind((uint32_t)(EDI), 0x10953a2cu);
  /* 10953a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10953a2e push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953a33 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953a38 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a3a call esi */
  call_ind((uint32_t)(ESI), 0x10953a3cu);
  /* 10953a3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10953a3e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953a43 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953a48 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a4a call esi */
  call_ind((uint32_t)(ESI), 0x10953a4cu);
  /* 10953a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10953a4e push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953a53 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953a58 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a5a call esi */
  call_ind((uint32_t)(ESI), 0x10953a5cu);
  /* 10953a5c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953a5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10953a61 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953a66 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 10953a6b push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a6d call esi */
  call_ind((uint32_t)(ESI), 0x10953a6fu);
  /* 10953a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10953a71 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10953a76 call edi */
  call_ind((uint32_t)(EDI), 0x10953a78u);
  /* 10953a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953a7a push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953a7f push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953a84 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a86 call esi */
  call_ind((uint32_t)(ESI), 0x10953a88u);
  /* 10953a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953a8a push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 10953a8f call edi */
  call_ind((uint32_t)(EDI), 0x10953a91u);
  /* 10953a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953a93 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953a98 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953a9d push 4 */
  push32((uint32_t)(0x4u));
  /* 10953a9f call esi */
  call_ind((uint32_t)(ESI), 0x10953aa1u);
  /* 10953aa1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953aa6 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10953aab call edi */
  call_ind((uint32_t)(EDI), 0x10953aadu);
  /* 10953aad push 0 */
  push32((uint32_t)(0x0u));
  /* 10953aaf push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953ab4 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953ab9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953abb call esi */
  call_ind((uint32_t)(ESI), 0x10953abdu);
  /* 10953abd push 0 */
  push32((uint32_t)(0x0u));
  /* 10953abf push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10953ac4 call edi */
  call_ind((uint32_t)(EDI), 0x10953ac6u);
  /* 10953ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953ac8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953acd push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953ad2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ad4 call esi */
  call_ind((uint32_t)(ESI), 0x10953ad6u);
  /* 10953ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953ad8 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10953add call edi */
  call_ind((uint32_t)(EDI), 0x10953adfu);
  /* 10953adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10953ae1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953ae6 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953aeb push 4 */
  push32((uint32_t)(0x4u));
  /* 10953aed call esi */
  call_ind((uint32_t)(ESI), 0x10953aefu);
  /* 10953aef add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953af4 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10953af9 call edi */
  call_ind((uint32_t)(EDI), 0x10953afbu);
  /* 10953afb push 0 */
  push32((uint32_t)(0x0u));
  /* 10953afd push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953b02 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953b09 call esi */
  call_ind((uint32_t)(ESI), 0x10953b0bu);
  /* 10953b0b push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10953b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953b12 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953b14 mov dword ptr [0x1095ada4], 1 */
  w32((uint32_t)(0x1095ada4), (0x1u));
  /* 10953b1e call ebp */
  call_ind((uint32_t)(EBP), 0x10953b20u);
  /* 10953b20 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10953b23:;
  /* 10953b23 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10953b25 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10953b2bu);
  /* 10953b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953b2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953b30 je 0x10953de0 */
  if (C.zf) goto L_10953de0;
  /* 10953b36 mov ebp, dword ptr [0x109590f4] */
  EBP = (r32((uint32_t)(0x109590f4)));
  /* 10953b3c push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10953b41 push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 10953b46 call ebp */
  call_ind((uint32_t)(EBP), 0x10953b48u);
  /* 10953b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953b4d jle 0x10953de6 */
  if ((C.zf||C.sf!=C.of)) goto L_10953de6;
  /* 10953b53 push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 10953b58 push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 10953b5d call ebp */
  call_ind((uint32_t)(EBP), 0x10953b5fu);
  /* 10953b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953b64 jg 0x10953b7d */
  if ((!C.zf&&C.sf==C.of)) goto L_10953b7d;
  /* 10953b66 push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 10953b6b push 0x1095ad50 */
  push32((uint32_t)(0x1095ad50u));
  /* 10953b70 call ebp */
  call_ind((uint32_t)(EBP), 0x10953b72u);
  /* 10953b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953b75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953b77 jle 0x10953de6 */
  if ((C.zf||C.sf!=C.of)) goto L_10953de6;
L_10953b7d:;
  /* 10953b7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10953b7f call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10953b85u);
  /* 10953b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953b88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953b8a je 0x10953de6 */
  if (C.zf) goto L_10953de6;
  /* 10953b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953b92 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10953b94 call ebx */
  call_ind((uint32_t)(EBX), 0x10953b96u);
  /* 10953b96 push 0x1095a598 */
  push32((uint32_t)(0x1095a598u));
  /* 10953b9b call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x10953ba1u);
  /* 10953ba1 push 0x1095a58c */
  push32((uint32_t)(0x1095a58cu));
  /* 10953ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953ba8 push 0x1095a584 */
  push32((uint32_t)(0x1095a584u));
  /* 10953bad push 8 */
  push32((uint32_t)(0x8u));
  /* 10953baf call dword ptr [0x109590f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f8))), 0x10953bb5u);
  /* 10953bb5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953bb8 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10953bbb je 0x10953bdf */
  if (C.zf) goto L_10953bdf;
  /* 10953bbd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10953bbe jne 0x10953de6 */
  if (!C.zf) goto L_10953de6;
  /* 10953bc4 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10953bc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10953bcb call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10953bd1u);
  /* 10953bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953bd3 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10953bd5 call ebx */
  call_ind((uint32_t)(EBX), 0x10953bd7u);
  /* 10953bd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953bda jmp 0x10953de6 */
  goto L_10953de6;
L_10953bdf:;
  /* 10953bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10953be1 push 0x1095af20 */
  push32((uint32_t)(0x1095af20u));
  /* 10953be6 call edi */
  call_ind((uint32_t)(EDI), 0x10953be8u);
  /* 10953be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953bea push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10953bef push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 10953bf4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953bf6 call esi */
  call_ind((uint32_t)(ESI), 0x10953bf8u);
  /* 10953bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953bfa push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 10953bff call edi */
  call_ind((uint32_t)(EDI), 0x10953c01u);
  /* 10953c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c03 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c08 push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 10953c0d push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c0f call esi */
  call_ind((uint32_t)(ESI), 0x10953c11u);
  /* 10953c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c13 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10953c18 call edi */
  call_ind((uint32_t)(EDI), 0x10953c1au);
  /* 10953c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c1c push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c21 push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10953c26 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c28 call esi */
  call_ind((uint32_t)(ESI), 0x10953c2au);
  /* 10953c2a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c2f push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 10953c34 call edi */
  call_ind((uint32_t)(EDI), 0x10953c36u);
  /* 10953c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c38 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c3d push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10953c42 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c44 call esi */
  call_ind((uint32_t)(ESI), 0x10953c46u);
  /* 10953c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c48 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 10953c4d call edi */
  call_ind((uint32_t)(EDI), 0x10953c4fu);
  /* 10953c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c51 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c56 push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10953c5b push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c5d call esi */
  call_ind((uint32_t)(ESI), 0x10953c5fu);
  /* 10953c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c61 push 0x1095b038 */
  push32((uint32_t)(0x1095b038u));
  /* 10953c66 call edi */
  call_ind((uint32_t)(EDI), 0x10953c68u);
  /* 10953c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953c6a push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c6f push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953c74 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c76 call esi */
  call_ind((uint32_t)(ESI), 0x10953c78u);
  /* 10953c78 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953c7b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953c7d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c82 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953c87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c89 call esi */
  call_ind((uint32_t)(ESI), 0x10953c8bu);
  /* 10953c8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953c8d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953c92 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953c97 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953c99 call esi */
  call_ind((uint32_t)(ESI), 0x10953c9bu);
  /* 10953c9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953c9d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953ca2 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 10953ca7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ca9 call esi */
  call_ind((uint32_t)(ESI), 0x10953cabu);
  /* 10953cab push 0 */
  push32((uint32_t)(0x0u));
  /* 10953cad push 0x1095afc8 */
  push32((uint32_t)(0x1095afc8u));
  /* 10953cb2 call edi */
  call_ind((uint32_t)(EDI), 0x10953cb4u);
  /* 10953cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953cb6 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10953cbb push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953cc0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953cc2 call esi */
  call_ind((uint32_t)(ESI), 0x10953cc4u);
  /* 10953cc4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953cc9 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953cce push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953cd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953cd5 call esi */
  call_ind((uint32_t)(ESI), 0x10953cd7u);
  /* 10953cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953cd9 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953cde push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953ce3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ce5 call esi */
  call_ind((uint32_t)(ESI), 0x10953ce7u);
  /* 10953ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953ce9 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953cee push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10953cf3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953cf5 call esi */
  call_ind((uint32_t)(ESI), 0x10953cf7u);
  /* 10953cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953cf9 push 0x1095afb8 */
  push32((uint32_t)(0x1095afb8u));
  /* 10953cfe call edi */
  call_ind((uint32_t)(EDI), 0x10953d00u);
  /* 10953d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953d02 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10953d07 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953d0c push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d0e call esi */
  call_ind((uint32_t)(ESI), 0x10953d10u);
  /* 10953d10 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953d13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953d15 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953d1a push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953d1f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d21 call esi */
  call_ind((uint32_t)(ESI), 0x10953d23u);
  /* 10953d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953d25 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953d2a push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953d2f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d31 call esi */
  call_ind((uint32_t)(ESI), 0x10953d33u);
  /* 10953d33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953d35 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953d3a push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10953d3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d41 call esi */
  call_ind((uint32_t)(ESI), 0x10953d43u);
  /* 10953d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953d45 push 0x1095afb0 */
  push32((uint32_t)(0x1095afb0u));
  /* 10953d4a call edi */
  call_ind((uint32_t)(EDI), 0x10953d4cu);
  /* 10953d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10953d4e push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10953d53 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953d58 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d5a call esi */
  call_ind((uint32_t)(ESI), 0x10953d5cu);
  /* 10953d5c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10953d61 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953d66 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953d6b push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d6d call esi */
  call_ind((uint32_t)(ESI), 0x10953d6fu);
  /* 10953d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10953d71 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953d76 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d7d call esi */
  call_ind((uint32_t)(ESI), 0x10953d7fu);
  /* 10953d7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10953d81 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953d86 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10953d8b push 4 */
  push32((uint32_t)(0x4u));
  /* 10953d8d call esi */
  call_ind((uint32_t)(ESI), 0x10953d8fu);
  /* 10953d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10953d91 push 0x1095afc0 */
  push32((uint32_t)(0x1095afc0u));
  /* 10953d96 call edi */
  call_ind((uint32_t)(EDI), 0x10953d98u);
  /* 10953d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953d9a push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10953d9f push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953da4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953da6 call esi */
  call_ind((uint32_t)(ESI), 0x10953da8u);
  /* 10953da8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953dab push 2 */
  push32((uint32_t)(0x2u));
  /* 10953dad push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953db2 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953db7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953db9 call esi */
  call_ind((uint32_t)(ESI), 0x10953dbbu);
  /* 10953dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 10953dbd push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953dc2 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953dc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953dc9 call esi */
  call_ind((uint32_t)(ESI), 0x10953dcbu);
  /* 10953dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10953dcd push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953dd2 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 10953dd7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953dd9 call esi */
  call_ind((uint32_t)(ESI), 0x10953ddbu);
  /* 10953ddb add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953dde jmp 0x10953de6 */
  goto L_10953de6;
L_10953de0:;
  /* 10953de0 mov ebp, dword ptr [0x109590f4] */
  EBP = (r32((uint32_t)(0x109590f4)));
L_10953de6:;
  /* 10953de6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10953de8 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10953deeu);
  /* 10953dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953df1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953df3 je 0x10953f95 */
  if (C.zf) goto L_10953f95;
  /* 10953df9 push 0x1095ad78 */
  push32((uint32_t)(0x1095ad78u));
  /* 10953dfe push 0x1095aea0 */
  push32((uint32_t)(0x1095aea0u));
  /* 10953e03 call ebp */
  call_ind((uint32_t)(EBP), 0x10953e05u);
  /* 10953e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953e0a jle 0x10953f95 */
  if ((C.zf||C.sf!=C.of)) goto L_10953f95;
  /* 10953e10 push 0x1095b0a0 */
  push32((uint32_t)(0x1095b0a0u));
  /* 10953e15 push 0x1095aea0 */
  push32((uint32_t)(0x1095aea0u));
  /* 10953e1a call ebp */
  call_ind((uint32_t)(EBP), 0x10953e1cu);
  /* 10953e1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953e21 jg 0x10953e3a */
  if ((!C.zf&&C.sf==C.of)) goto L_10953e3a;
  /* 10953e23 push 0x1095b068 */
  push32((uint32_t)(0x1095b068u));
  /* 10953e28 push 0x1095aea0 */
  push32((uint32_t)(0x1095aea0u));
  /* 10953e2d call ebp */
  call_ind((uint32_t)(EBP), 0x10953e2fu);
  /* 10953e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953e34 jle 0x10953f95 */
  if ((C.zf||C.sf!=C.of)) goto L_10953f95;
L_10953e3a:;
  /* 10953e3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10953e3c call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10953e42u);
  /* 10953e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953e45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953e47 je 0x10953f95 */
  if (C.zf) goto L_10953f95;
  /* 10953e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10953e4f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10953e51 call ebx */
  call_ind((uint32_t)(EBX), 0x10953e53u);
  /* 10953e53 push 0x1095a57c */
  push32((uint32_t)(0x1095a57cu));
  /* 10953e58 call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x10953e5eu);
  /* 10953e5e push 0x1095a58c */
  push32((uint32_t)(0x1095a58cu));
  /* 10953e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953e65 push 0x1095a584 */
  push32((uint32_t)(0x1095a584u));
  /* 10953e6a push 8 */
  push32((uint32_t)(0x8u));
  /* 10953e6c call dword ptr [0x109590f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590f8))), 0x10953e72u);
  /* 10953e72 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953e75 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10953e78 je 0x10953e9c */
  if (C.zf) goto L_10953e9c;
  /* 10953e7a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10953e7b jne 0x10953f95 */
  if (!C.zf) goto L_10953f95;
  /* 10953e81 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10953e86 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953e88 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10953e8eu);
  /* 10953e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10953e90 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10953e92 call ebx */
  call_ind((uint32_t)(EBX), 0x10953e94u);
  /* 10953e94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953e97 jmp 0x10953f95 */
  goto L_10953f95;
L_10953e9c:;
  /* 10953e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10953e9e push 0x1095aeb0 */
  push32((uint32_t)(0x1095aeb0u));
  /* 10953ea3 call edi */
  call_ind((uint32_t)(EDI), 0x10953ea5u);
  /* 10953ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10953ea7 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10953eac push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953eb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953eb3 call esi */
  call_ind((uint32_t)(ESI), 0x10953eb5u);
  /* 10953eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953eb7 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953ebc push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953ec1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ec3 call esi */
  call_ind((uint32_t)(ESI), 0x10953ec5u);
  /* 10953ec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953ec7 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953ecc push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10953ed1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ed3 call esi */
  call_ind((uint32_t)(ESI), 0x10953ed5u);
  /* 10953ed5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10953ed7 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953edc push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 10953ee1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ee3 call esi */
  call_ind((uint32_t)(ESI), 0x10953ee5u);
  /* 10953ee5 mov ebp, dword ptr [0x109590fc] */
  EBP = (r32((uint32_t)(0x109590fc)));
  /* 10953eeb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953eee push 4 */
  push32((uint32_t)(0x4u));
  /* 10953ef0 call ebp */
  call_ind((uint32_t)(EBP), 0x10953ef2u);
  /* 10953ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953ef4 push 0x1095aea8 */
  push32((uint32_t)(0x1095aea8u));
  /* 10953ef9 call edi */
  call_ind((uint32_t)(EDI), 0x10953efbu);
  /* 10953efb push 0 */
  push32((uint32_t)(0x0u));
  /* 10953efd push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10953f02 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953f07 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f09 call esi */
  call_ind((uint32_t)(ESI), 0x10953f0bu);
  /* 10953f0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953f0d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953f12 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953f17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f19 call esi */
  call_ind((uint32_t)(ESI), 0x10953f1bu);
  /* 10953f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953f1d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953f22 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953f27 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f29 call esi */
  call_ind((uint32_t)(ESI), 0x10953f2bu);
  /* 10953f2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953f2d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953f32 push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10953f37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f39 call esi */
  call_ind((uint32_t)(ESI), 0x10953f3bu);
  /* 10953f3b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953f3e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f40 call ebp */
  call_ind((uint32_t)(EBP), 0x10953f42u);
  /* 10953f42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10953f44 push 0x1095af18 */
  push32((uint32_t)(0x1095af18u));
  /* 10953f49 call edi */
  call_ind((uint32_t)(EDI), 0x10953f4bu);
  /* 10953f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10953f4d push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10953f52 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10953f57 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f59 call esi */
  call_ind((uint32_t)(ESI), 0x10953f5bu);
  /* 10953f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953f5d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953f62 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10953f67 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f69 call esi */
  call_ind((uint32_t)(ESI), 0x10953f6bu);
  /* 10953f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953f6d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953f72 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10953f77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f79 call esi */
  call_ind((uint32_t)(ESI), 0x10953f7bu);
  /* 10953f7b push 2 */
  push32((uint32_t)(0x2u));
  /* 10953f7d push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10953f82 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10953f87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f89 call esi */
  call_ind((uint32_t)(ESI), 0x10953f8bu);
  /* 10953f8b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953f8e push 4 */
  push32((uint32_t)(0x4u));
  /* 10953f90 call ebp */
  call_ind((uint32_t)(EBP), 0x10953f92u);
  /* 10953f92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10953f95:;
  /* 10953f95 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10953f97 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10953f9du);
  /* 10953f9d mov ebp, dword ptr [0x10959100] */
  EBP = (r32((uint32_t)(0x10959100)));
  /* 10953fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953fa6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10953fa8 je 0x10954051 */
  if (C.zf) goto L_10954051;
  /* 10953fae push 4 */
  push32((uint32_t)(0x4u));
  /* 10953fb0 push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 10953fb5 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10953fbbu);
  /* 10953fbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953fc0 jg 0x10953ffe */
  if ((!C.zf&&C.sf==C.of)) goto L_10953ffe;
  /* 10953fc2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953fc4 push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 10953fc9 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10953fcfu);
  /* 10953fcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953fd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953fd4 jg 0x10953ffe */
  if ((!C.zf&&C.sf==C.of)) goto L_10953ffe;
  /* 10953fd6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10953fd8 push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 10953fdd call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10953fe3u);
  /* 10953fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953fe8 jg 0x10953ffe */
  if ((!C.zf&&C.sf==C.of)) goto L_10953ffe;
  /* 10953fea push 4 */
  push32((uint32_t)(0x4u));
  /* 10953fec push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 10953ff1 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10953ff7u);
  /* 10953ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10953ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10953ffc jle 0x10954051 */
  if ((C.zf||C.sf!=C.of)) goto L_10954051;
L_10953ffe:;
  /* 10953ffe push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10954000 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10954006u);
  /* 10954006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954009 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095400b je 0x10954051 */
  if (C.zf) goto L_10954051;
  /* 1095400d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095400f push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 10954014 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954016 call ebp */
  call_ind((uint32_t)(EBP), 0x10954018u);
  /* 10954018 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095401a push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 1095401f push 4 */
  push32((uint32_t)(0x4u));
  /* 10954021 call ebp */
  call_ind((uint32_t)(EBP), 0x10954023u);
  /* 10954023 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954025 push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 1095402a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095402c call ebp */
  call_ind((uint32_t)(EBP), 0x1095402eu);
  /* 1095402e push 1 */
  push32((uint32_t)(0x1u));
  /* 10954030 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 10954035 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954037 call ebp */
  call_ind((uint32_t)(EBP), 0x10954039u);
  /* 10954039 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095403b call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x10954041u);
  /* 10954041 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10954046 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10954048 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x1095404eu);
  /* 1095404e add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954051:;
  /* 10954051 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10954053 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10954059u);
  /* 10954059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095405c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095405e je 0x10954107 */
  if (C.zf) goto L_10954107;
  /* 10954064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954066 push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 1095406b call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10954071u);
  /* 10954071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954076 jg 0x109540b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109540b4;
  /* 10954078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095407a push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 1095407f call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10954085u);
  /* 10954085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095408a jg 0x109540b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109540b4;
  /* 1095408c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095408e push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 10954093 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10954099u);
  /* 10954099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095409c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095409e jg 0x109540b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109540b4;
  /* 109540a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109540a2 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 109540a7 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109540adu);
  /* 109540ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109540b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109540b2 jle 0x10954107 */
  if ((C.zf||C.sf!=C.of)) goto L_10954107;
L_109540b4:;
  /* 109540b4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109540b6 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109540bcu);
  /* 109540bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109540bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109540c1 je 0x10954107 */
  if (C.zf) goto L_10954107;
  /* 109540c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109540c5 push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 109540ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109540cc call ebp */
  call_ind((uint32_t)(EBP), 0x109540ceu);
  /* 109540ce push 1 */
  push32((uint32_t)(0x1u));
  /* 109540d0 push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 109540d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109540d7 call ebp */
  call_ind((uint32_t)(EBP), 0x109540d9u);
  /* 109540d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109540db push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 109540e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109540e2 call ebp */
  call_ind((uint32_t)(EBP), 0x109540e4u);
  /* 109540e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109540e6 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 109540eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109540ed call ebp */
  call_ind((uint32_t)(EBP), 0x109540efu);
  /* 109540ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109540f1 call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x109540f7u);
  /* 109540f7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109540fc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109540fe call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10954104u);
  /* 10954104 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954107:;
  /* 10954107 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954109 push 0x1095b058 */
  push32((uint32_t)(0x1095b058u));
  /* 1095410e call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10954114u);
  /* 10954114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954119 jle 0x1095414d */
  if ((C.zf||C.sf!=C.of)) goto L_1095414d;
  /* 1095411b push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1095411d call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10954123u);
  /* 10954123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954126 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954128 je 0x1095414d */
  if (C.zf) goto L_1095414d;
  /* 1095412a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095412c push 0x1095b058 */
  push32((uint32_t)(0x1095b058u));
  /* 10954131 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954133 call ebp */
  call_ind((uint32_t)(EBP), 0x10954135u);
  /* 10954135 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954137 call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x1095413du);
  /* 1095413d push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10954142 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10954144 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x1095414au);
  /* 1095414a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095414d:;
  /* 1095414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095414f push 0x1095b058 */
  push32((uint32_t)(0x1095b058u));
  /* 10954154 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x1095415au);
  /* 1095415a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095415d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095415f jle 0x10954193 */
  if ((C.zf||C.sf!=C.of)) goto L_10954193;
  /* 10954161 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10954163 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10954169u);
  /* 10954169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095416c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095416e je 0x10954193 */
  if (C.zf) goto L_10954193;
  /* 10954170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954172 push 0x1095b058 */
  push32((uint32_t)(0x1095b058u));
  /* 10954177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954179 call ebp */
  call_ind((uint32_t)(EBP), 0x1095417bu);
  /* 1095417b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095417d call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x10954183u);
  /* 10954183 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10954188 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1095418a call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10954190u);
  /* 10954190 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954193:;
  /* 10954193 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954195 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 1095419a call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109541a0u);
  /* 109541a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109541a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109541a5 jg 0x109541e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_109541e3;
  /* 109541a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109541a9 push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 109541ae call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109541b4u);
  /* 109541b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109541b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109541b9 jg 0x109541e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_109541e3;
  /* 109541bb push 0 */
  push32((uint32_t)(0x0u));
  /* 109541bd push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 109541c2 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109541c8u);
  /* 109541c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109541cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109541cd jg 0x109541e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_109541e3;
  /* 109541cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109541d1 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 109541d6 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109541dcu);
  /* 109541dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109541df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109541e1 jle 0x10954236 */
  if ((C.zf||C.sf!=C.of)) goto L_10954236;
L_109541e3:;
  /* 109541e3 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 109541e5 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109541ebu);
  /* 109541eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109541ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109541f0 je 0x10954236 */
  if (C.zf) goto L_10954236;
  /* 109541f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109541f4 push 0x1095b088 */
  push32((uint32_t)(0x1095b088u));
  /* 109541f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109541fb call ebp */
  call_ind((uint32_t)(EBP), 0x109541fdu);
  /* 109541fd push 1 */
  push32((uint32_t)(0x1u));
  /* 109541ff push 0x1095b080 */
  push32((uint32_t)(0x1095b080u));
  /* 10954204 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954206 call ebp */
  call_ind((uint32_t)(EBP), 0x10954208u);
  /* 10954208 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095420a push 0x1095b078 */
  push32((uint32_t)(0x1095b078u));
  /* 1095420f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954211 call ebp */
  call_ind((uint32_t)(EBP), 0x10954213u);
  /* 10954213 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954215 push 0x1095b070 */
  push32((uint32_t)(0x1095b070u));
  /* 1095421a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095421c call ebp */
  call_ind((uint32_t)(EBP), 0x1095421eu);
  /* 1095421e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954220 call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x10954226u);
  /* 10954226 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1095422b push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1095422d call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10954233u);
  /* 10954233 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954236:;
  /* 10954236 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954238 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095423eu);
  /* 1095423e mov ebp, dword ptr [0x1095910c] */
  EBP = (r32((uint32_t)(0x1095910c)));
  /* 10954244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954247 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954249 je 0x1095464e */
  if (C.zf) goto L_1095464e;
  /* 1095424f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954251 push 0x1095b150 */
  push32((uint32_t)(0x1095b150u));
  /* 10954256 call ebp */
  call_ind((uint32_t)(EBP), 0x10954258u);
  /* 10954258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095425b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095425e jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 10954264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954266 push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 1095426b call ebp */
  call_ind((uint32_t)(EBP), 0x1095426du);
  /* 1095426d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954270 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954273 jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 10954279 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095427b push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 10954280 call ebp */
  call_ind((uint32_t)(EBP), 0x10954282u);
  /* 10954282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954285 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954288 jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 1095428a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095428c push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 10954291 call ebp */
  call_ind((uint32_t)(EBP), 0x10954293u);
  /* 10954293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954296 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954299 jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 1095429b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095429d push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 109542a2 call ebp */
  call_ind((uint32_t)(EBP), 0x109542a4u);
  /* 109542a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109542a7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109542aa jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 109542ac push 4 */
  push32((uint32_t)(0x4u));
  /* 109542ae push 0x1095b150 */
  push32((uint32_t)(0x1095b150u));
  /* 109542b3 call ebp */
  call_ind((uint32_t)(EBP), 0x109542b5u);
  /* 109542b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109542b8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109542bb jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 109542bd push 4 */
  push32((uint32_t)(0x4u));
  /* 109542bf push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 109542c4 call ebp */
  call_ind((uint32_t)(EBP), 0x109542c6u);
  /* 109542c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109542c9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109542cc jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 109542ce push 4 */
  push32((uint32_t)(0x4u));
  /* 109542d0 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 109542d5 call ebp */
  call_ind((uint32_t)(EBP), 0x109542d7u);
  /* 109542d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109542da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109542dd jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 109542df push 4 */
  push32((uint32_t)(0x4u));
  /* 109542e1 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 109542e6 call ebp */
  call_ind((uint32_t)(EBP), 0x109542e8u);
  /* 109542e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109542eb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109542ee jg 0x10954305 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954305;
  /* 109542f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109542f2 push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 109542f7 call ebp */
  call_ind((uint32_t)(EBP), 0x109542f9u);
  /* 109542f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109542fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109542ff jle 0x1095464e */
  if ((C.zf||C.sf!=C.of)) goto L_1095464e;
L_10954305:;
  /* 10954305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954307 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954309 call ebx */
  call_ind((uint32_t)(EBX), 0x1095430bu);
  /* 1095430b push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1095430d call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10954313u);
  /* 10954313 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954316 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954318 je 0x10954461 */
  if (C.zf) goto L_10954461;
  /* 1095431e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954320 push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10954325 call edi */
  call_ind((uint32_t)(EDI), 0x10954327u);
  /* 10954327 mov ebp, dword ptr [0x109590e8] */
  EBP = (r32((uint32_t)(0x109590e8)));
  /* 1095432d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095432f push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10954331 push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 10954336 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954338 call ebp */
  call_ind((uint32_t)(EBP), 0x1095433au);
  /* 1095433a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095433c push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 10954341 call edi */
  call_ind((uint32_t)(EDI), 0x10954343u);
  /* 10954343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954345 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954347 push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 1095434c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095434e call ebp */
  call_ind((uint32_t)(EBP), 0x10954350u);
  /* 10954350 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954352 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 10954357 call edi */
  call_ind((uint32_t)(EDI), 0x10954359u);
  /* 10954359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095435b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095435d push 0x1095b0b8 */
  push32((uint32_t)(0x1095b0b8u));
  /* 10954362 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954364 call ebp */
  call_ind((uint32_t)(EBP), 0x10954366u);
  /* 10954366 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095436b push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 10954370 call edi */
  call_ind((uint32_t)(EDI), 0x10954372u);
  /* 10954372 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954374 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10954376 push 0x1095b0c0 */
  push32((uint32_t)(0x1095b0c0u));
  /* 1095437b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095437d call ebp */
  call_ind((uint32_t)(EBP), 0x1095437fu);
  /* 1095437f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954381 push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 10954386 call edi */
  call_ind((uint32_t)(EDI), 0x10954388u);
  /* 10954388 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095438a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1095438c push 0x1095b120 */
  push32((uint32_t)(0x1095b120u));
  /* 10954391 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954393 call ebp */
  call_ind((uint32_t)(EBP), 0x10954395u);
  /* 10954395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954397 push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 1095439c call edi */
  call_ind((uint32_t)(EDI), 0x1095439eu);
  /* 1095439e push 0 */
  push32((uint32_t)(0x0u));
  /* 109543a0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109543a2 push 0x1095b128 */
  push32((uint32_t)(0x1095b128u));
  /* 109543a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109543a9 call ebp */
  call_ind((uint32_t)(EBP), 0x109543abu);
  /* 109543ab add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109543ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109543b0 push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 109543b5 call edi */
  call_ind((uint32_t)(EDI), 0x109543b7u);
  /* 109543b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109543b9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109543bb push 0x1095b138 */
  push32((uint32_t)(0x1095b138u));
  /* 109543c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109543c2 call ebp */
  call_ind((uint32_t)(EBP), 0x109543c4u);
  /* 109543c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109543c6 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 109543cb call edi */
  call_ind((uint32_t)(EDI), 0x109543cdu);
  /* 109543cd push 0 */
  push32((uint32_t)(0x0u));
  /* 109543cf push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109543d1 push 0x1095b140 */
  push32((uint32_t)(0x1095b140u));
  /* 109543d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109543d8 call ebp */
  call_ind((uint32_t)(EBP), 0x109543dau);
  /* 109543da push 0 */
  push32((uint32_t)(0x0u));
  /* 109543dc push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 109543e1 call edi */
  call_ind((uint32_t)(EDI), 0x109543e3u);
  /* 109543e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109543e5 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109543ea call edi */
  call_ind((uint32_t)(EDI), 0x109543ecu);
  /* 109543ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109543ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109543f1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109543f3 push 0x1095ae28 */
  push32((uint32_t)(0x1095ae28u));
  /* 109543f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109543fa call esi */
  call_ind((uint32_t)(ESI), 0x109543fcu);
  /* 109543fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109543fe push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 10954403 call edi */
  call_ind((uint32_t)(EDI), 0x10954405u);
  /* 10954405 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954407 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 1095440c call edi */
  call_ind((uint32_t)(EDI), 0x1095440eu);
  /* 1095440e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954410 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954412 push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 10954417 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954419 call esi */
  call_ind((uint32_t)(ESI), 0x1095441bu);
  /* 1095441b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095441d push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10954422 call edi */
  call_ind((uint32_t)(EDI), 0x10954424u);
  /* 10954424 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954426 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 1095442b call edi */
  call_ind((uint32_t)(EDI), 0x1095442du);
  /* 1095442d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954430 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954432 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954434 push 0x1095ae40 */
  push32((uint32_t)(0x1095ae40u));
  /* 10954439 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095443b call esi */
  call_ind((uint32_t)(ESI), 0x1095443du);
  /* 1095443d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095443f push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 10954444 call edi */
  call_ind((uint32_t)(EDI), 0x10954446u);
  /* 10954446 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954448 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 1095444d call edi */
  call_ind((uint32_t)(EDI), 0x1095444fu);
  /* 1095444f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954451 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954453 push 0x1095ae58 */
  push32((uint32_t)(0x1095ae58u));
  /* 10954458 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095445a call esi */
  call_ind((uint32_t)(ESI), 0x1095445cu);
  /* 1095445c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095445f jmp 0x10954467 */
  goto L_10954467;
L_10954461:;
  /* 10954461 mov ebp, dword ptr [0x109590e8] */
  EBP = (r32((uint32_t)(0x109590e8)));
L_10954467:;
  /* 10954467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954469 push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 1095446e call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954474u);
  /* 10954474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954477 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095447a jle 0x109544ab */
  if ((C.zf||C.sf!=C.of)) goto L_109544ab;
  /* 1095447c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095447e push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 10954483 call edi */
  call_ind((uint32_t)(EDI), 0x10954485u);
  /* 10954485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954487 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10954489 push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 1095448e push 1 */
  push32((uint32_t)(0x1u));
  /* 10954490 call esi */
  call_ind((uint32_t)(ESI), 0x10954492u);
  /* 10954492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954494 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 10954499 call edi */
  call_ind((uint32_t)(EDI), 0x1095449bu);
  /* 1095449b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095449d push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1095449f push 0x1095ae48 */
  push32((uint32_t)(0x1095ae48u));
  /* 109544a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109544a6 call esi */
  call_ind((uint32_t)(ESI), 0x109544a8u);
  /* 109544a8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109544ab:;
  /* 109544ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109544ad push 0x1095ae50 */
  push32((uint32_t)(0x1095ae50u));
  /* 109544b2 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109544b8u);
  /* 109544b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109544bb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109544be jle 0x109544ef */
  if ((C.zf||C.sf!=C.of)) goto L_109544ef;
  /* 109544c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109544c2 push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 109544c7 call edi */
  call_ind((uint32_t)(EDI), 0x109544c9u);
  /* 109544c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109544cb push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109544cd push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 109544d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109544d4 call esi */
  call_ind((uint32_t)(ESI), 0x109544d6u);
  /* 109544d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109544d8 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 109544dd call edi */
  call_ind((uint32_t)(EDI), 0x109544dfu);
  /* 109544df push 0 */
  push32((uint32_t)(0x0u));
  /* 109544e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 109544e3 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 109544e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109544ea call esi */
  call_ind((uint32_t)(ESI), 0x109544ecu);
  /* 109544ec add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109544ef:;
  /* 109544ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109544f1 push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 109544f6 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109544fcu);
  /* 109544fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109544ff cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954502 jle 0x10954533 */
  if ((C.zf||C.sf!=C.of)) goto L_10954533;
  /* 10954504 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954506 push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 1095450b call edi */
  call_ind((uint32_t)(EDI), 0x1095450du);
  /* 1095450d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095450f push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10954511 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 10954516 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954518 call esi */
  call_ind((uint32_t)(ESI), 0x1095451au);
  /* 1095451a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095451c push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 10954521 call edi */
  call_ind((uint32_t)(EDI), 0x10954523u);
  /* 10954523 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954525 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10954527 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 1095452c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095452e call esi */
  call_ind((uint32_t)(ESI), 0x10954530u);
  /* 10954530 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954533:;
  /* 10954533 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954535 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 1095453a call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954540u);
  /* 10954540 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954543 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954546 jle 0x10954577 */
  if ((C.zf||C.sf!=C.of)) goto L_10954577;
  /* 10954548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095454a push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 1095454f call edi */
  call_ind((uint32_t)(EDI), 0x10954551u);
  /* 10954551 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954553 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954555 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 1095455a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095455c call esi */
  call_ind((uint32_t)(ESI), 0x1095455eu);
  /* 1095455e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954560 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 10954565 call edi */
  call_ind((uint32_t)(EDI), 0x10954567u);
  /* 10954567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954569 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095456b push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 10954570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954572 call esi */
  call_ind((uint32_t)(ESI), 0x10954574u);
  /* 10954574 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954577:;
  /* 10954577 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954579 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 1095457e call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954584u);
  /* 10954584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954587 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095458a jle 0x109545bb */
  if ((C.zf||C.sf!=C.of)) goto L_109545bb;
  /* 1095458c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095458e push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 10954593 call edi */
  call_ind((uint32_t)(EDI), 0x10954595u);
  /* 10954595 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954597 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10954599 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 1095459e push 1 */
  push32((uint32_t)(0x1u));
  /* 109545a0 call esi */
  call_ind((uint32_t)(ESI), 0x109545a2u);
  /* 109545a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109545a4 push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 109545a9 call edi */
  call_ind((uint32_t)(EDI), 0x109545abu);
  /* 109545ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109545ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109545af push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 109545b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109545b6 call esi */
  call_ind((uint32_t)(ESI), 0x109545b8u);
  /* 109545b8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109545bb:;
  /* 109545bb push 0 */
  push32((uint32_t)(0x0u));
  /* 109545bd push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 109545c2 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109545c8u);
  /* 109545c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109545cb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109545ce jle 0x109545ff */
  if ((C.zf||C.sf!=C.of)) goto L_109545ff;
  /* 109545d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109545d2 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 109545d7 call edi */
  call_ind((uint32_t)(EDI), 0x109545d9u);
  /* 109545d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109545db push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109545dd push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 109545e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109545e4 call esi */
  call_ind((uint32_t)(ESI), 0x109545e6u);
  /* 109545e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109545e8 push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 109545ed call edi */
  call_ind((uint32_t)(EDI), 0x109545efu);
  /* 109545ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109545f1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109545f3 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 109545f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109545fa call esi */
  call_ind((uint32_t)(ESI), 0x109545fcu);
  /* 109545fc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109545ff:;
  /* 109545ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10954601 push 0x1095b150 */
  push32((uint32_t)(0x1095b150u));
  /* 10954606 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095460cu);
  /* 1095460c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095460f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954612 jle 0x10954643 */
  if ((C.zf||C.sf!=C.of)) goto L_10954643;
  /* 10954614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954616 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 1095461b call edi */
  call_ind((uint32_t)(EDI), 0x1095461du);
  /* 1095461d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095461f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954621 push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 10954626 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954628 call esi */
  call_ind((uint32_t)(ESI), 0x1095462au);
  /* 1095462a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095462c push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 10954631 call edi */
  call_ind((uint32_t)(EDI), 0x10954633u);
  /* 10954633 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954635 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954637 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 1095463c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095463e call esi */
  call_ind((uint32_t)(ESI), 0x10954640u);
  /* 10954640 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954643:;
  /* 10954643 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954645 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10954647 call ebx */
  call_ind((uint32_t)(EBX), 0x10954649u);
  /* 10954649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095464c jmp 0x10954654 */
  goto L_10954654;
L_1095464e:;
  /* 1095464e mov ebp, dword ptr [0x109590e8] */
  EBP = (r32((uint32_t)(0x109590e8)));
L_10954654:;
  /* 10954654 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10954656 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095465cu);
  /* 1095465c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095465f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954661 je 0x10954a5d */
  if (C.zf) goto L_10954a5d;
  /* 10954667 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954669 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095466fu);
  /* 1095466f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954672 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954674 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 1095467a push 4 */
  push32((uint32_t)(0x4u));
  /* 1095467c push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10954681 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954687u);
  /* 10954687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095468a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095468c jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954692 push eax */
  push32((uint32_t)(EAX));
  /* 10954693 push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10954698 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095469eu);
  /* 1095469e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109546a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109546a3 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109546a9 push eax */
  push32((uint32_t)(EAX));
  /* 109546aa push 0x1095ae50 */
  push32((uint32_t)(0x1095ae50u));
  /* 109546af call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109546b5u);
  /* 109546b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109546b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109546ba jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109546c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109546c2 push 0x1095ae50 */
  push32((uint32_t)(0x1095ae50u));
  /* 109546c7 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109546cdu);
  /* 109546cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109546d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109546d2 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109546d8 push eax */
  push32((uint32_t)(EAX));
  /* 109546d9 push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 109546de call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109546e4u);
  /* 109546e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109546e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109546e9 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109546ef push eax */
  push32((uint32_t)(EAX));
  /* 109546f0 push 0x1095b150 */
  push32((uint32_t)(0x1095b150u));
  /* 109546f5 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109546fbu);
  /* 109546fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109546fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954700 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954706 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954708 push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 1095470d call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954713u);
  /* 10954713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954718 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 1095471e push eax */
  push32((uint32_t)(EAX));
  /* 1095471f push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 10954724 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095472au);
  /* 1095472a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095472d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095472f jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954735 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954737 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 1095473c call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954742u);
  /* 10954742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954747 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 1095474d push eax */
  push32((uint32_t)(EAX));
  /* 1095474e push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 10954753 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954759u);
  /* 10954759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095475c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095475e jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954764 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954766 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 1095476b call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954771u);
  /* 10954771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954776 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 1095477c push eax */
  push32((uint32_t)(EAX));
  /* 1095477d push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 10954782 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954788u);
  /* 10954788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095478b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095478d jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954793 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954795 push 0x1095b148 */
  push32((uint32_t)(0x1095b148u));
  /* 1095479a call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109547a0u);
  /* 109547a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109547a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109547a5 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109547ab push 4 */
  push32((uint32_t)(0x4u));
  /* 109547ad push 0x1095b150 */
  push32((uint32_t)(0x1095b150u));
  /* 109547b2 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109547b8u);
  /* 109547b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109547bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109547bd jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109547c3 push eax */
  push32((uint32_t)(EAX));
  /* 109547c4 push 0x1095ae40 */
  push32((uint32_t)(0x1095ae40u));
  /* 109547c9 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109547cfu);
  /* 109547cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109547d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109547d4 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109547da push 4 */
  push32((uint32_t)(0x4u));
  /* 109547dc push 0x1095ae40 */
  push32((uint32_t)(0x1095ae40u));
  /* 109547e1 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109547e7u);
  /* 109547e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109547ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109547ec jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109547f2 push eax */
  push32((uint32_t)(EAX));
  /* 109547f3 push 0x1095ae48 */
  push32((uint32_t)(0x1095ae48u));
  /* 109547f8 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109547feu);
  /* 109547fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954803 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954809 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095480b push 0x1095ae48 */
  push32((uint32_t)(0x1095ae48u));
  /* 10954810 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954816u);
  /* 10954816 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095481b jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954821 push eax */
  push32((uint32_t)(EAX));
  /* 10954822 push 0x1095ae28 */
  push32((uint32_t)(0x1095ae28u));
  /* 10954827 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095482du);
  /* 1095482d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954832 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954838 push 4 */
  push32((uint32_t)(0x4u));
  /* 1095483a push 0x1095ae28 */
  push32((uint32_t)(0x1095ae28u));
  /* 1095483f call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954845u);
  /* 10954845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095484a jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954850 push eax */
  push32((uint32_t)(EAX));
  /* 10954851 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10954856 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095485cu);
  /* 1095485c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095485f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954861 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954867 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954869 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 1095486e call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954874u);
  /* 10954874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954879 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 1095487f push eax */
  push32((uint32_t)(EAX));
  /* 10954880 push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 10954885 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095488bu);
  /* 1095488b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095488e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954890 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 10954896 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954898 push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 1095489d call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109548a3u);
  /* 109548a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109548a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109548a8 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109548ae push eax */
  push32((uint32_t)(EAX));
  /* 109548af push 0x1095ae68 */
  push32((uint32_t)(0x1095ae68u));
  /* 109548b4 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109548bau);
  /* 109548ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109548bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109548bf jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109548c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 109548c7 push 0x1095ae68 */
  push32((uint32_t)(0x1095ae68u));
  /* 109548cc call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109548d2u);
  /* 109548d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109548d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109548d7 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109548dd push eax */
  push32((uint32_t)(EAX));
  /* 109548de push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 109548e3 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109548e9u);
  /* 109548e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109548ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109548ee jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 109548f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 109548f6 push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 109548fb call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954901u);
  /* 10954901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954906 jne 0x10954a5d */
  if (!C.zf) goto L_10954a5d;
  /* 1095490c push eax */
  push32((uint32_t)(EAX));
  /* 1095490d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1095490f call ebx */
  call_ind((uint32_t)(EBX), 0x10954911u);
  /* 10954911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954913 push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10954918 call edi */
  call_ind((uint32_t)(EDI), 0x1095491au);
  /* 1095491a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095491c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095491e push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 10954923 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954925 call ebp */
  call_ind((uint32_t)(EBP), 0x10954927u);
  /* 10954927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954929 push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 1095492e call edi */
  call_ind((uint32_t)(EDI), 0x10954930u);
  /* 10954930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954932 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954934 push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10954939 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095493b call ebp */
  call_ind((uint32_t)(EBP), 0x1095493du);
  /* 1095493d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095493f push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 10954944 call edi */
  call_ind((uint32_t)(EDI), 0x10954946u);
  /* 10954946 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095494b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095494d push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10954952 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954954 call ebp */
  call_ind((uint32_t)(EBP), 0x10954956u);
  /* 10954956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954958 push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 1095495d call edi */
  call_ind((uint32_t)(EDI), 0x1095495fu);
  /* 1095495f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954961 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954963 push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10954968 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095496a call ebp */
  call_ind((uint32_t)(EBP), 0x1095496cu);
  /* 1095496c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095496e push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 10954973 call edi */
  call_ind((uint32_t)(EDI), 0x10954975u);
  /* 10954975 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954977 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10954979 push 0x1095b120 */
  push32((uint32_t)(0x1095b120u));
  /* 1095497e push 1 */
  push32((uint32_t)(0x1u));
  /* 10954980 call ebp */
  call_ind((uint32_t)(EBP), 0x10954982u);
  /* 10954982 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954987 push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 1095498c call edi */
  call_ind((uint32_t)(EDI), 0x1095498eu);
  /* 1095498e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954990 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954992 push 0x1095b128 */
  push32((uint32_t)(0x1095b128u));
  /* 10954997 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954999 call ebp */
  call_ind((uint32_t)(EBP), 0x1095499bu);
  /* 1095499b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095499d push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 109549a2 call edi */
  call_ind((uint32_t)(EDI), 0x109549a4u);
  /* 109549a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109549a6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109549a8 push 0x1095b138 */
  push32((uint32_t)(0x1095b138u));
  /* 109549ad push 1 */
  push32((uint32_t)(0x1u));
  /* 109549af call ebp */
  call_ind((uint32_t)(EBP), 0x109549b1u);
  /* 109549b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109549b3 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 109549b8 call edi */
  call_ind((uint32_t)(EDI), 0x109549bau);
  /* 109549ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109549bc push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109549be push 0x1095b140 */
  push32((uint32_t)(0x1095b140u));
  /* 109549c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109549c5 call ebp */
  call_ind((uint32_t)(EBP), 0x109549c7u);
  /* 109549c7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109549ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109549cc push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 109549d1 call edi */
  call_ind((uint32_t)(EDI), 0x109549d3u);
  /* 109549d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109549d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109549d7 push 0x1095ae68 */
  push32((uint32_t)(0x1095ae68u));
  /* 109549dc push 1 */
  push32((uint32_t)(0x1u));
  /* 109549de call ebp */
  call_ind((uint32_t)(EBP), 0x109549e0u);
  /* 109549e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109549e2 push 0x1095af58 */
  push32((uint32_t)(0x1095af58u));
  /* 109549e7 call edi */
  call_ind((uint32_t)(EDI), 0x109549e9u);
  /* 109549e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109549eb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109549ed push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 109549f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109549f4 call ebp */
  call_ind((uint32_t)(EBP), 0x109549f6u);
  /* 109549f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109549f8 push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 109549fd call edi */
  call_ind((uint32_t)(EDI), 0x109549ffu);
  /* 109549ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a01 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10954a03 push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 10954a08 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954a0a call ebp */
  call_ind((uint32_t)(EBP), 0x10954a0cu);
  /* 10954a0c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a11 push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 10954a16 call edi */
  call_ind((uint32_t)(EDI), 0x10954a18u);
  /* 10954a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a1a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954a1c push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10954a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954a23 call ebp */
  call_ind((uint32_t)(EBP), 0x10954a25u);
  /* 10954a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a27 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 10954a2c call edi */
  call_ind((uint32_t)(EDI), 0x10954a2eu);
  /* 10954a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a30 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954a32 push 0x1095b0b8 */
  push32((uint32_t)(0x1095b0b8u));
  /* 10954a37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954a39 call ebp */
  call_ind((uint32_t)(EBP), 0x10954a3bu);
  /* 10954a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a3d push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 10954a42 call edi */
  call_ind((uint32_t)(EDI), 0x10954a44u);
  /* 10954a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a46 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10954a48 push 0x1095b0c0 */
  push32((uint32_t)(0x1095b0c0u));
  /* 10954a4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10954a4f call ebp */
  call_ind((uint32_t)(EBP), 0x10954a51u);
  /* 10954a51 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954a56 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954a58 call ebx */
  call_ind((uint32_t)(EBX), 0x10954a5au);
  /* 10954a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10954a5d:;
  /* 10954a5d push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10954a5f call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10954a65u);
  /* 10954a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954a68 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954a6a je 0x10954b94 */
  if (C.zf) goto L_10954b94;
  /* 10954a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954a72 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954a77 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954a7du);
  /* 10954a7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954a80 cmp eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954a83 jg 0x10954a9e */
  if ((!C.zf&&C.sf==C.of)) goto L_10954a9e;
  /* 10954a85 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954a87 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954a8c call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954a92u);
  /* 10954a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954a95 cmp eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954a98 jle 0x10954b94 */
  if ((C.zf||C.sf!=C.of)) goto L_10954b94;
L_10954a9e:;
  /* 10954a9e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10954aa0 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10954aa6u);
  /* 10954aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954aa9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954aab je 0x10954b94 */
  if (C.zf) goto L_10954b94;
  /* 10954ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ab3 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10954ab5 call ebx */
  call_ind((uint32_t)(EBX), 0x10954ab7u);
  /* 10954ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ab9 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954abb call ebx */
  call_ind((uint32_t)(EBX), 0x10954abdu);
  /* 10954abd push 0 */
  push32((uint32_t)(0x0u));
  /* 10954abf push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 10954ac4 call edi */
  call_ind((uint32_t)(EDI), 0x10954ac6u);
  /* 10954ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ac8 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10954acd push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954ad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954ad4 call esi */
  call_ind((uint32_t)(ESI), 0x10954ad6u);
  /* 10954ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ad8 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 10954add call edi */
  call_ind((uint32_t)(EDI), 0x10954adfu);
  /* 10954adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ae1 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10954ae6 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 10954aed call esi */
  call_ind((uint32_t)(ESI), 0x10954aefu);
  /* 10954aef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954af4 push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10954af9 call edi */
  call_ind((uint32_t)(EDI), 0x10954afbu);
  /* 10954afb push 1 */
  push32((uint32_t)(0x1u));
  /* 10954afd push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954b02 call edi */
  call_ind((uint32_t)(EDI), 0x10954b04u);
  /* 10954b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b06 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954b08 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954b0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b0f call esi */
  call_ind((uint32_t)(ESI), 0x10954b11u);
  /* 10954b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b13 push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 10954b18 call edi */
  call_ind((uint32_t)(EDI), 0x10954b1au);
  /* 10954b1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b1c push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954b21 call edi */
  call_ind((uint32_t)(EDI), 0x10954b23u);
  /* 10954b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b25 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954b27 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954b2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b2e call esi */
  call_ind((uint32_t)(ESI), 0x10954b30u);
  /* 10954b30 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b35 push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 10954b3a call edi */
  call_ind((uint32_t)(EDI), 0x10954b3cu);
  /* 10954b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b3e push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954b43 call edi */
  call_ind((uint32_t)(EDI), 0x10954b45u);
  /* 10954b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b47 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954b49 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b50 call esi */
  call_ind((uint32_t)(ESI), 0x10954b52u);
  /* 10954b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b54 push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 10954b59 call edi */
  call_ind((uint32_t)(EDI), 0x10954b5bu);
  /* 10954b5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b5d push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954b62 call edi */
  call_ind((uint32_t)(EDI), 0x10954b64u);
  /* 10954b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954b66 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954b68 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b6f call esi */
  call_ind((uint32_t)(ESI), 0x10954b71u);
  /* 10954b71 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954b74 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10954b79 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10954b7b call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10954b81u);
  /* 10954b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954b83 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10954b85 call ebx */
  call_ind((uint32_t)(EBX), 0x10954b87u);
  /* 10954b87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954b8a mov dword ptr [0x1095af30], 1 */
  w32((uint32_t)(0x1095af30), (0x1u));
L_10954b94:;
  /* 10954b94 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10954b96 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10954b9cu);
  /* 10954b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954b9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954ba1 je 0x10954cc8 */
  if (C.zf) goto L_10954cc8;
  /* 10954ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ba9 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954bae call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954bb4u);
  /* 10954bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954bb7 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954bba jg 0x10954bd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954bd5;
  /* 10954bbc push 4 */
  push32((uint32_t)(0x4u));
  /* 10954bbe push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954bc3 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954bc9u);
  /* 10954bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954bcc cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954bcf jle 0x10954cc8 */
  if ((C.zf||C.sf!=C.of)) goto L_10954cc8;
L_10954bd5:;
  /* 10954bd5 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10954bd7 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10954bddu);
  /* 10954bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954be0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954be2 je 0x10954cc8 */
  if (C.zf) goto L_10954cc8;
  /* 10954be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954bea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10954bec call ebx */
  call_ind((uint32_t)(EBX), 0x10954beeu);
  /* 10954bee push 0 */
  push32((uint32_t)(0x0u));
  /* 10954bf0 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954bf2 call ebx */
  call_ind((uint32_t)(EBX), 0x10954bf4u);
  /* 10954bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954bf6 push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10954bfb call edi */
  call_ind((uint32_t)(EDI), 0x10954bfdu);
  /* 10954bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10954bff push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10954c04 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954c09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c0b call esi */
  call_ind((uint32_t)(ESI), 0x10954c0du);
  /* 10954c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c0f push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 10954c14 call edi */
  call_ind((uint32_t)(EDI), 0x10954c16u);
  /* 10954c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c18 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954c1a push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c21 call esi */
  call_ind((uint32_t)(ESI), 0x10954c23u);
  /* 10954c23 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c28 push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10954c2d call edi */
  call_ind((uint32_t)(EDI), 0x10954c2fu);
  /* 10954c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c31 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954c36 call edi */
  call_ind((uint32_t)(EDI), 0x10954c38u);
  /* 10954c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c3a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954c3c push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c43 call esi */
  call_ind((uint32_t)(ESI), 0x10954c45u);
  /* 10954c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c47 push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 10954c4c call edi */
  call_ind((uint32_t)(EDI), 0x10954c4eu);
  /* 10954c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c50 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954c55 call edi */
  call_ind((uint32_t)(EDI), 0x10954c57u);
  /* 10954c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c59 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954c5b push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954c60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c62 call esi */
  call_ind((uint32_t)(ESI), 0x10954c64u);
  /* 10954c64 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c69 push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 10954c6e call edi */
  call_ind((uint32_t)(EDI), 0x10954c70u);
  /* 10954c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c72 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954c77 call edi */
  call_ind((uint32_t)(EDI), 0x10954c79u);
  /* 10954c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c7b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954c7d push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954c82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c84 call esi */
  call_ind((uint32_t)(ESI), 0x10954c86u);
  /* 10954c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c88 push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 10954c8d call edi */
  call_ind((uint32_t)(EDI), 0x10954c8fu);
  /* 10954c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10954c91 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954c96 call edi */
  call_ind((uint32_t)(EDI), 0x10954c98u);
  /* 10954c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954c9a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954c9c push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954ca1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954ca3 call esi */
  call_ind((uint32_t)(ESI), 0x10954ca5u);
  /* 10954ca5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954ca8 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10954cad push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10954caf call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10954cb5u);
  /* 10954cb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954cb7 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10954cb9 call ebx */
  call_ind((uint32_t)(EBX), 0x10954cbbu);
  /* 10954cbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954cbe mov dword ptr [0x1095af34], 1 */
  w32((uint32_t)(0x1095af34), (0x1u));
L_10954cc8:;
  /* 10954cc8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10954cca call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10954cd0u);
  /* 10954cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954cd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954cd5 je 0x10954dfc */
  if (C.zf) goto L_10954dfc;
  /* 10954cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10954cdd push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954ce2 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954ce8u);
  /* 10954ce8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954ceb cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954cee jg 0x10954d09 */
  if ((!C.zf&&C.sf==C.of)) goto L_10954d09;
  /* 10954cf0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954cf2 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954cf7 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954cfdu);
  /* 10954cfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954d00 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954d03 jle 0x10954dfc */
  if ((C.zf||C.sf!=C.of)) goto L_10954dfc;
L_10954d09:;
  /* 10954d09 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10954d0b call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10954d11u);
  /* 10954d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954d14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954d16 je 0x10954dfc */
  if (C.zf) goto L_10954dfc;
  /* 10954d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d1e push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10954d20 call ebx */
  call_ind((uint32_t)(EBX), 0x10954d22u);
  /* 10954d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d24 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954d26 call ebx */
  call_ind((uint32_t)(EBX), 0x10954d28u);
  /* 10954d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d2a push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10954d2f call edi */
  call_ind((uint32_t)(EDI), 0x10954d31u);
  /* 10954d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d33 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10954d38 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10954d3f call esi */
  call_ind((uint32_t)(ESI), 0x10954d41u);
  /* 10954d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d43 push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 10954d48 call edi */
  call_ind((uint32_t)(EDI), 0x10954d4au);
  /* 10954d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d4c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954d4e push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954d55 call esi */
  call_ind((uint32_t)(ESI), 0x10954d57u);
  /* 10954d57 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d5c push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10954d61 call edi */
  call_ind((uint32_t)(EDI), 0x10954d63u);
  /* 10954d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954d65 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954d6a call edi */
  call_ind((uint32_t)(EDI), 0x10954d6cu);
  /* 10954d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d6e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954d70 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954d75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954d77 call esi */
  call_ind((uint32_t)(ESI), 0x10954d79u);
  /* 10954d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d7b push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 10954d80 call edi */
  call_ind((uint32_t)(EDI), 0x10954d82u);
  /* 10954d82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954d84 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954d89 call edi */
  call_ind((uint32_t)(EDI), 0x10954d8bu);
  /* 10954d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954d8f push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954d94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954d96 call esi */
  call_ind((uint32_t)(ESI), 0x10954d98u);
  /* 10954d98 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10954d9d push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 10954da2 call edi */
  call_ind((uint32_t)(EDI), 0x10954da4u);
  /* 10954da4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954da6 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954dab call edi */
  call_ind((uint32_t)(EDI), 0x10954dadu);
  /* 10954dad push 0 */
  push32((uint32_t)(0x0u));
  /* 10954daf push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954db1 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954db6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954db8 call esi */
  call_ind((uint32_t)(ESI), 0x10954dbau);
  /* 10954dba push 0 */
  push32((uint32_t)(0x0u));
  /* 10954dbc push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 10954dc1 call edi */
  call_ind((uint32_t)(EDI), 0x10954dc3u);
  /* 10954dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954dc5 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10954dca call edi */
  call_ind((uint32_t)(EDI), 0x10954dccu);
  /* 10954dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10954dce push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954dd0 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954dd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954dd7 call esi */
  call_ind((uint32_t)(ESI), 0x10954dd9u);
  /* 10954dd9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954ddc push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10954de1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10954de3 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10954de9u);
  /* 10954de9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954deb push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10954ded call ebx */
  call_ind((uint32_t)(EBX), 0x10954defu);
  /* 10954def add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954df2 mov dword ptr [0x1095af38], 1 */
  w32((uint32_t)(0x1095af38), (0x1u));
L_10954dfc:;
  /* 10954dfc push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10954dfe call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10954e04u);
  /* 10954e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10954e09 je 0x10955027 */
  if (C.zf) goto L_10955027;
  /* 10954e0f push 4 */
  push32((uint32_t)(0x4u));
  /* 10954e11 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954e16 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954e1cu);
  /* 10954e1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954e21 jne 0x10955027 */
  if (!C.zf) goto L_10955027;
  /* 10954e27 push eax */
  push32((uint32_t)(EAX));
  /* 10954e28 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10954e2d call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954e33u);
  /* 10954e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954e38 jne 0x10955027 */
  if (!C.zf) goto L_10955027;
  /* 10954e3e push 4 */
  push32((uint32_t)(0x4u));
  /* 10954e40 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954e45 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954e4bu);
  /* 10954e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954e50 jne 0x10955027 */
  if (!C.zf) goto L_10955027;
  /* 10954e56 push eax */
  push32((uint32_t)(EAX));
  /* 10954e57 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10954e5c call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954e62u);
  /* 10954e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954e67 jne 0x10955027 */
  if (!C.zf) goto L_10955027;
  /* 10954e6d push eax */
  push32((uint32_t)(EAX));
  /* 10954e6e push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954e73 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954e79u);
  /* 10954e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954e7e jne 0x10955027 */
  if (!C.zf) goto L_10955027;
  /* 10954e84 push 4 */
  push32((uint32_t)(0x4u));
  /* 10954e86 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10954e8b call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10954e91u);
  /* 10954e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10954e96 jne 0x10955027 */
  if (!C.zf) goto L_10955027;
  /* 10954e9c mov ecx, dword ptr [0x1095af30] */
  ECX = (r32((uint32_t)(0x1095af30)));
  /* 10954ea2 mov eax, 1 */
  EAX = (0x1u);
  /* 10954ea7 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954ea9 je 0x10954ebf */
  if (C.zf) goto L_10954ebf;
  /* 10954eab cmp dword ptr [0x1095af34], eax */
  { uint32_t _a=(r32((uint32_t)(0x1095af34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954eb1 je 0x10954ebf */
  if (C.zf) goto L_10954ebf;
  /* 10954eb3 cmp dword ptr [0x1095af38], eax */
  { uint32_t _a=(r32((uint32_t)(0x1095af38))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10954eb9 jne 0x10955027 */
  if (!C.zf) goto L_10955027;
L_10954ebf:;
  /* 10954ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ec1 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10954ec3 call ebx */
  call_ind((uint32_t)(EBX), 0x10954ec5u);
  /* 10954ec5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954ec7 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10954ec9 call ebx */
  call_ind((uint32_t)(EBX), 0x10954ecbu);
  /* 10954ecb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10954ecd push eax */
  push32((uint32_t)(EAX));
  /* 10954ece push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 10954ed3 mov dword ptr [0x1095af30], eax */
  w32((uint32_t)(0x1095af30), (EAX));
  /* 10954ed8 mov dword ptr [0x1095af34], eax */
  w32((uint32_t)(0x1095af34), (EAX));
  /* 10954edd mov dword ptr [0x1095af38], eax */
  w32((uint32_t)(0x1095af38), (EAX));
  /* 10954ee2 call edi */
  call_ind((uint32_t)(EDI), 0x10954ee4u);
  /* 10954ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ee6 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10954ee8 push 0x1095ae60 */
  push32((uint32_t)(0x1095ae60u));
  /* 10954eed push 1 */
  push32((uint32_t)(0x1u));
  /* 10954eef call esi */
  call_ind((uint32_t)(ESI), 0x10954ef1u);
  /* 10954ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ef3 push 0x1095af60 */
  push32((uint32_t)(0x1095af60u));
  /* 10954ef8 call edi */
  call_ind((uint32_t)(EDI), 0x10954efau);
  /* 10954efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10954efc push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954efe push 0x1095ae48 */
  push32((uint32_t)(0x1095ae48u));
  /* 10954f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f05 call esi */
  call_ind((uint32_t)(ESI), 0x10954f07u);
  /* 10954f07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f0c push 0x1095b0e8 */
  push32((uint32_t)(0x1095b0e8u));
  /* 10954f11 call edi */
  call_ind((uint32_t)(EDI), 0x10954f13u);
  /* 10954f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f15 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954f17 push 0x1095b188 */
  push32((uint32_t)(0x1095b188u));
  /* 10954f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f1e call esi */
  call_ind((uint32_t)(ESI), 0x10954f20u);
  /* 10954f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f22 push 0x1095b0f8 */
  push32((uint32_t)(0x1095b0f8u));
  /* 10954f27 call edi */
  call_ind((uint32_t)(EDI), 0x10954f29u);
  /* 10954f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f2b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954f2d push 0x1095b198 */
  push32((uint32_t)(0x1095b198u));
  /* 10954f32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f34 call esi */
  call_ind((uint32_t)(ESI), 0x10954f36u);
  /* 10954f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f38 push 0x1095b0f0 */
  push32((uint32_t)(0x1095b0f0u));
  /* 10954f3d call edi */
  call_ind((uint32_t)(EDI), 0x10954f3fu);
  /* 10954f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f41 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954f43 push 0x1095b1a0 */
  push32((uint32_t)(0x1095b1a0u));
  /* 10954f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f4a call esi */
  call_ind((uint32_t)(ESI), 0x10954f4cu);
  /* 10954f4c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f51 push 0x1095b0e0 */
  push32((uint32_t)(0x1095b0e0u));
  /* 10954f56 call edi */
  call_ind((uint32_t)(EDI), 0x10954f58u);
  /* 10954f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f5a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954f5c push 0x1095b1a8 */
  push32((uint32_t)(0x1095b1a8u));
  /* 10954f61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f63 call esi */
  call_ind((uint32_t)(ESI), 0x10954f65u);
  /* 10954f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f67 push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10954f6c call edi */
  call_ind((uint32_t)(EDI), 0x10954f6eu);
  /* 10954f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f70 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10954f72 push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 10954f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f79 call ebp */
  call_ind((uint32_t)(EBP), 0x10954f7bu);
  /* 10954f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f7d push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 10954f82 call edi */
  call_ind((uint32_t)(EDI), 0x10954f84u);
  /* 10954f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f86 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954f88 push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10954f8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10954f8f call ebp */
  call_ind((uint32_t)(EBP), 0x10954f91u);
  /* 10954f91 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f96 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 10954f9b call edi */
  call_ind((uint32_t)(EDI), 0x10954f9du);
  /* 10954f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10954f9f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954fa1 push 0x1095b0b8 */
  push32((uint32_t)(0x1095b0b8u));
  /* 10954fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954fa8 call ebp */
  call_ind((uint32_t)(EBP), 0x10954faau);
  /* 10954faa push 0 */
  push32((uint32_t)(0x0u));
  /* 10954fac push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 10954fb1 call edi */
  call_ind((uint32_t)(EDI), 0x10954fb3u);
  /* 10954fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954fb5 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10954fb7 push 0x1095b0c0 */
  push32((uint32_t)(0x1095b0c0u));
  /* 10954fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10954fbe call ebp */
  call_ind((uint32_t)(EBP), 0x10954fc0u);
  /* 10954fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954fc2 push 0x1095af90 */
  push32((uint32_t)(0x1095af90u));
  /* 10954fc7 call edi */
  call_ind((uint32_t)(EDI), 0x10954fc9u);
  /* 10954fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954fcb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10954fcd push 0x1095b120 */
  push32((uint32_t)(0x1095b120u));
  /* 10954fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10954fd4 call ebp */
  call_ind((uint32_t)(EBP), 0x10954fd6u);
  /* 10954fd6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10954fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954fdb push 0x1095afa0 */
  push32((uint32_t)(0x1095afa0u));
  /* 10954fe0 call edi */
  call_ind((uint32_t)(EDI), 0x10954fe2u);
  /* 10954fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954fe4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954fe6 push 0x1095b128 */
  push32((uint32_t)(0x1095b128u));
  /* 10954feb push 1 */
  push32((uint32_t)(0x1u));
  /* 10954fed call ebp */
  call_ind((uint32_t)(EBP), 0x10954fefu);
  /* 10954fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ff1 push 0x1095af98 */
  push32((uint32_t)(0x1095af98u));
  /* 10954ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10954ff8u);
  /* 10954ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10954ffa push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10954ffc push 0x1095b138 */
  push32((uint32_t)(0x1095b138u));
  /* 10955001 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955003 call ebp */
  call_ind((uint32_t)(EBP), 0x10955005u);
  /* 10955005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955007 push 0x1095afa8 */
  push32((uint32_t)(0x1095afa8u));
  /* 1095500c call edi */
  call_ind((uint32_t)(EDI), 0x1095500eu);
  /* 1095500e push 0 */
  push32((uint32_t)(0x0u));
  /* 10955010 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10955012 push 0x1095b140 */
  push32((uint32_t)(0x1095b140u));
  /* 10955017 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955019 call ebp */
  call_ind((uint32_t)(EBP), 0x1095501bu);
  /* 1095501b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095501e push 1 */
  push32((uint32_t)(0x1u));
  /* 10955020 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10955022 call ebx */
  call_ind((uint32_t)(EBX), 0x10955024u);
  /* 10955024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955027:;
  /* 10955027 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10955029 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095502fu);
  /* 1095502f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955032 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955034 je 0x109550ba */
  if (C.zf) goto L_109550ba;
  /* 1095503a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095503c push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10955041 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10955047u);
  /* 10955047 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095504a cmp eax, 0x12 */
  { uint32_t _a=(EAX),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095504d jge 0x109550ba */
  if ((C.sf==C.of)) goto L_109550ba;
  /* 1095504f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955051 push 0x1095af78 */
  push32((uint32_t)(0x1095af78u));
  /* 10955056 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x1095505cu);
  /* 1095505c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095505f cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955062 jle 0x109550ba */
  if ((C.zf||C.sf!=C.of)) goto L_109550ba;
  /* 10955064 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10955066 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x1095506cu);
  /* 1095506c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095506f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955071 je 0x109550ba */
  if (C.zf) goto L_109550ba;
  /* 10955073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955075 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10955077 call ebx */
  call_ind((uint32_t)(EBX), 0x10955079u);
  /* 10955079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095507b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1095507d call ebx */
  call_ind((uint32_t)(EBX), 0x1095507fu);
  /* 1095507f push 0 */
  push32((uint32_t)(0x0u));
  /* 10955081 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10955083 call ebx */
  call_ind((uint32_t)(EBX), 0x10955085u);
  /* 10955085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955087 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10955089 call ebx */
  call_ind((uint32_t)(EBX), 0x1095508bu);
  /* 1095508b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095508d push 0x1095af48 */
  push32((uint32_t)(0x1095af48u));
  /* 10955092 call edi */
  call_ind((uint32_t)(EDI), 0x10955094u);
  /* 10955094 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955096 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955098 push 0x1095b0c8 */
  push32((uint32_t)(0x1095b0c8u));
  /* 1095509d push 1 */
  push32((uint32_t)(0x1u));
  /* 1095509f call esi */
  call_ind((uint32_t)(ESI), 0x109550a1u);
  /* 109550a1 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109550a6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109550a8 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109550aeu);
  /* 109550ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109550b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109550b3 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 109550b5 call ebx */
  call_ind((uint32_t)(EBX), 0x109550b7u);
  /* 109550b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109550ba:;
  /* 109550ba push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109550bc call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109550c2u);
  /* 109550c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109550c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109550c7 je 0x1095514d */
  if (C.zf) goto L_1095514d;
  /* 109550cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109550cf push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 109550d4 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109550dau);
  /* 109550da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109550dd cmp eax, 0x12 */
  { uint32_t _a=(EAX),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109550e0 jge 0x1095514d */
  if ((C.sf==C.of)) goto L_1095514d;
  /* 109550e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109550e4 push 0x1095af70 */
  push32((uint32_t)(0x1095af70u));
  /* 109550e9 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x109550efu);
  /* 109550ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109550f2 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109550f5 jle 0x1095514d */
  if ((C.zf||C.sf!=C.of)) goto L_1095514d;
  /* 109550f7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109550f9 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109550ffu);
  /* 109550ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955102 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955104 je 0x1095514d */
  if (C.zf) goto L_1095514d;
  /* 10955106 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955108 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1095510a call ebx */
  call_ind((uint32_t)(EBX), 0x1095510cu);
  /* 1095510c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095510e push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10955110 call ebx */
  call_ind((uint32_t)(EBX), 0x10955112u);
  /* 10955112 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955114 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10955116 call ebx */
  call_ind((uint32_t)(EBX), 0x10955118u);
  /* 10955118 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095511a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1095511c call ebx */
  call_ind((uint32_t)(EBX), 0x1095511eu);
  /* 1095511e push 0 */
  push32((uint32_t)(0x0u));
  /* 10955120 push 0x1095af48 */
  push32((uint32_t)(0x1095af48u));
  /* 10955125 call edi */
  call_ind((uint32_t)(EDI), 0x10955127u);
  /* 10955127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955129 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095512b push 0x1095b0b0 */
  push32((uint32_t)(0x1095b0b0u));
  /* 10955130 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955132 call esi */
  call_ind((uint32_t)(ESI), 0x10955134u);
  /* 10955134 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10955139 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1095513b call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10955141u);
  /* 10955141 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955144 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955146 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10955148 call ebx */
  call_ind((uint32_t)(EBX), 0x1095514au);
  /* 1095514a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095514d:;
  /* 1095514d push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1095514f call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955155u);
  /* 10955155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955158 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095515a je 0x109551e0 */
  if (C.zf) goto L_109551e0;
  /* 10955160 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955162 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 10955167 call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x1095516du);
  /* 1095516d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955170 cmp eax, 0x12 */
  { uint32_t _a=(EAX),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955173 jge 0x109551e0 */
  if ((C.sf==C.of)) goto L_109551e0;
  /* 10955175 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955177 push 0x1095af88 */
  push32((uint32_t)(0x1095af88u));
  /* 1095517c call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10955182u);
  /* 10955182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955185 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955188 jle 0x109551e0 */
  if ((C.zf||C.sf!=C.of)) goto L_109551e0;
  /* 1095518a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1095518c call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955192u);
  /* 10955192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955195 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955197 je 0x109551e0 */
  if (C.zf) goto L_109551e0;
  /* 10955199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095519b push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1095519d call ebx */
  call_ind((uint32_t)(EBX), 0x1095519fu);
  /* 1095519f push 0 */
  push32((uint32_t)(0x0u));
  /* 109551a1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109551a3 call ebx */
  call_ind((uint32_t)(EBX), 0x109551a5u);
  /* 109551a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109551a7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 109551a9 call ebx */
  call_ind((uint32_t)(EBX), 0x109551abu);
  /* 109551ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109551ad push 0x34 */
  push32((uint32_t)(0x34u));
  /* 109551af call ebx */
  call_ind((uint32_t)(EBX), 0x109551b1u);
  /* 109551b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109551b3 push 0x1095af48 */
  push32((uint32_t)(0x1095af48u));
  /* 109551b8 call edi */
  call_ind((uint32_t)(EDI), 0x109551bau);
  /* 109551ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109551bc push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109551be push 0x1095b0b8 */
  push32((uint32_t)(0x1095b0b8u));
  /* 109551c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109551c5 call esi */
  call_ind((uint32_t)(ESI), 0x109551c7u);
  /* 109551c7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109551cc push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109551ce call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109551d4u);
  /* 109551d4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109551d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109551d9 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 109551db call ebx */
  call_ind((uint32_t)(EBX), 0x109551ddu);
  /* 109551dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109551e0:;
  /* 109551e0 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 109551e2 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109551e8u);
  /* 109551e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109551eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109551ed je 0x10955273 */
  if (C.zf) goto L_10955273;
  /* 109551f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109551f5 push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 109551fa call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10955200u);
  /* 10955200 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955203 cmp eax, 0x12 */
  { uint32_t _a=(EAX),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955206 jge 0x10955273 */
  if ((C.sf==C.of)) goto L_10955273;
  /* 10955208 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095520a push 0x1095af80 */
  push32((uint32_t)(0x1095af80u));
  /* 1095520f call dword ptr [0x10959104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959104))), 0x10955215u);
  /* 10955215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955218 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095521b jle 0x10955273 */
  if ((C.zf||C.sf!=C.of)) goto L_10955273;
  /* 1095521d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1095521f call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955225u);
  /* 10955225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955228 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095522a je 0x10955273 */
  if (C.zf) goto L_10955273;
  /* 1095522c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095522e push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10955230 call ebx */
  call_ind((uint32_t)(EBX), 0x10955232u);
  /* 10955232 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955234 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10955236 call ebx */
  call_ind((uint32_t)(EBX), 0x10955238u);
  /* 10955238 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095523a push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1095523c call ebx */
  call_ind((uint32_t)(EBX), 0x1095523eu);
  /* 1095523e push 0 */
  push32((uint32_t)(0x0u));
  /* 10955240 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10955242 call ebx */
  call_ind((uint32_t)(EBX), 0x10955244u);
  /* 10955244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955246 push 0x1095af48 */
  push32((uint32_t)(0x1095af48u));
  /* 1095524b call edi */
  call_ind((uint32_t)(EDI), 0x1095524du);
  /* 1095524d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095524f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955251 push 0x1095b0c0 */
  push32((uint32_t)(0x1095b0c0u));
  /* 10955256 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955258 call esi */
  call_ind((uint32_t)(ESI), 0x1095525au);
  /* 1095525a push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1095525f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10955261 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10955267u);
  /* 10955267 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095526a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095526c push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1095526e call ebx */
  call_ind((uint32_t)(EBX), 0x10955270u);
  /* 10955270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955273:;
  /* 10955273 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10955275 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x1095527bu);
  /* 1095527b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095527e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955280 je 0x109553d2 */
  if (C.zf) goto L_109553d2;
  /* 10955286 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955288 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 1095528d call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955293u);
  /* 10955293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955296 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955299 jg 0x109552b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109552b4;
  /* 1095529b push 4 */
  push32((uint32_t)(0x4u));
  /* 1095529d push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109552a2 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109552a8u);
  /* 109552a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109552ab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109552ae jle 0x109553d2 */
  if ((C.zf||C.sf!=C.of)) goto L_109553d2;
L_109552b4:;
  /* 109552b4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109552b6 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109552bcu);
  /* 109552bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109552bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109552c1 je 0x109553d2 */
  if (C.zf) goto L_109553d2;
  /* 109552c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109552c9 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 109552cb call ebx */
  call_ind((uint32_t)(EBX), 0x109552cdu);
  /* 109552cd mov eax, dword ptr [0x1095adf0] */
  EAX = (r32((uint32_t)(0x1095adf0)));
  /* 109552d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109552d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109552d7 jne 0x10955337 */
  if (!C.zf) goto L_10955337;
  /* 109552d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109552db push 0x1095b1b0 */
  push32((uint32_t)(0x1095b1b0u));
  /* 109552e0 call edi */
  call_ind((uint32_t)(EDI), 0x109552e2u);
  /* 109552e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109552e4 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109552e9 call edi */
  call_ind((uint32_t)(EDI), 0x109552ebu);
  /* 109552eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109552ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109552ef push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109552f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109552f6 call esi */
  call_ind((uint32_t)(ESI), 0x109552f8u);
  /* 109552f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109552fa push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109552fc push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955301 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955303 call esi */
  call_ind((uint32_t)(ESI), 0x10955305u);
  /* 10955305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955307 push 0x1095b1c0 */
  push32((uint32_t)(0x1095b1c0u));
  /* 1095530c call edi */
  call_ind((uint32_t)(EDI), 0x1095530eu);
  /* 1095530e push 1 */
  push32((uint32_t)(0x1u));
  /* 10955310 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955315 call edi */
  call_ind((uint32_t)(EDI), 0x10955317u);
  /* 10955317 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095531a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095531c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095531e push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955323 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955325 call esi */
  call_ind((uint32_t)(ESI), 0x10955327u);
  /* 10955327 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955329 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095532b push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955330 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955332 call esi */
  call_ind((uint32_t)(ESI), 0x10955334u);
  /* 10955334 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955337:;
  /* 10955337 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955339 push 0x1095b1b8 */
  push32((uint32_t)(0x1095b1b8u));
  /* 1095533e call edi */
  call_ind((uint32_t)(EDI), 0x10955340u);
  /* 10955340 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955342 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955347 call edi */
  call_ind((uint32_t)(EDI), 0x10955349u);
  /* 10955349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095534b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095534d push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10955352 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955354 call esi */
  call_ind((uint32_t)(ESI), 0x10955356u);
  /* 10955356 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955358 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095535a push 0x1095b108 */
  push32((uint32_t)(0x1095b108u));
  /* 1095535f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955361 call esi */
  call_ind((uint32_t)(ESI), 0x10955363u);
  /* 10955363 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955365 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955367 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 1095536c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095536e call esi */
  call_ind((uint32_t)(ESI), 0x10955370u);
  /* 10955370 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955373 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955375 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955377 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 1095537c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095537e call esi */
  call_ind((uint32_t)(ESI), 0x10955380u);
  /* 10955380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955382 push 0x1095b1c8 */
  push32((uint32_t)(0x1095b1c8u));
  /* 10955387 call edi */
  call_ind((uint32_t)(EDI), 0x10955389u);
  /* 10955389 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095538b push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955390 call edi */
  call_ind((uint32_t)(EDI), 0x10955392u);
  /* 10955392 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955394 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955396 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 1095539b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095539d call esi */
  call_ind((uint32_t)(ESI), 0x1095539fu);
  /* 1095539f push 2 */
  push32((uint32_t)(0x2u));
  /* 109553a1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109553a3 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109553a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109553aa call esi */
  call_ind((uint32_t)(ESI), 0x109553acu);
  /* 109553ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109553af push 2 */
  push32((uint32_t)(0x2u));
  /* 109553b1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109553b3 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109553b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109553ba call esi */
  call_ind((uint32_t)(ESI), 0x109553bcu);
  /* 109553bc push 0x258 */
  push32((uint32_t)(0x258u));
  /* 109553c1 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109553c3 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109553c9u);
  /* 109553c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109553cb push 0x35 */
  push32((uint32_t)(0x35u));
  /* 109553cd call ebx */
  call_ind((uint32_t)(EBX), 0x109553cfu);
  /* 109553cf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109553d2:;
  /* 109553d2 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 109553d4 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109553dau);
  /* 109553da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109553dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109553df je 0x1095553e */
  if (C.zf) goto L_1095553e;
  /* 109553e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109553e7 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 109553ec call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109553f2u);
  /* 109553f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109553f5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109553f8 jg 0x10955413 */
  if ((!C.zf&&C.sf==C.of)) goto L_10955413;
  /* 109553fa push 4 */
  push32((uint32_t)(0x4u));
  /* 109553fc push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955401 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955407u);
  /* 10955407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095540a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095540d jle 0x1095553e */
  if ((C.zf||C.sf!=C.of)) goto L_1095553e;
L_10955413:;
  /* 10955413 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10955415 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x1095541bu);
  /* 1095541b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095541e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955420 je 0x1095553e */
  if (C.zf) goto L_1095553e;
  /* 10955426 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955428 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1095542a call ebx */
  call_ind((uint32_t)(EBX), 0x1095542cu);
  /* 1095542c mov eax, dword ptr [0x1095adf0] */
  EAX = (r32((uint32_t)(0x1095adf0)));
  /* 10955431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10955436 jne 0x10955496 */
  if (!C.zf) goto L_10955496;
  /* 10955438 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095543a push 0x1095b1b0 */
  push32((uint32_t)(0x1095b1b0u));
  /* 1095543f call edi */
  call_ind((uint32_t)(EDI), 0x10955441u);
  /* 10955441 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955443 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955448 call edi */
  call_ind((uint32_t)(EDI), 0x1095544au);
  /* 1095544a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095544c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095544e push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955455 call esi */
  call_ind((uint32_t)(ESI), 0x10955457u);
  /* 10955457 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955459 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095545b push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955460 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955462 call esi */
  call_ind((uint32_t)(ESI), 0x10955464u);
  /* 10955464 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955466 push 0x1095b1c0 */
  push32((uint32_t)(0x1095b1c0u));
  /* 1095546b call edi */
  call_ind((uint32_t)(EDI), 0x1095546du);
  /* 1095546d push 1 */
  push32((uint32_t)(0x1u));
  /* 1095546f push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955474 call edi */
  call_ind((uint32_t)(EDI), 0x10955476u);
  /* 10955476 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095547b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095547d push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955482 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955484 call esi */
  call_ind((uint32_t)(ESI), 0x10955486u);
  /* 10955486 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955488 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095548a push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 1095548f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955491 call esi */
  call_ind((uint32_t)(ESI), 0x10955493u);
  /* 10955493 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955496:;
  /* 10955496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955498 push 0x1095b1b8 */
  push32((uint32_t)(0x1095b1b8u));
  /* 1095549d call edi */
  call_ind((uint32_t)(EDI), 0x1095549fu);
  /* 1095549f push 1 */
  push32((uint32_t)(0x1u));
  /* 109554a1 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109554a6 call edi */
  call_ind((uint32_t)(EDI), 0x109554a8u);
  /* 109554a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109554aa push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109554ac push 0x1095ae48 */
  push32((uint32_t)(0x1095ae48u));
  /* 109554b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109554b3 call esi */
  call_ind((uint32_t)(ESI), 0x109554b5u);
  /* 109554b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109554b7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109554b9 push 0x1095b118 */
  push32((uint32_t)(0x1095b118u));
  /* 109554be push 1 */
  push32((uint32_t)(0x1u));
  /* 109554c0 call esi */
  call_ind((uint32_t)(ESI), 0x109554c2u);
  /* 109554c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109554c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109554c6 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 109554cb push 1 */
  push32((uint32_t)(0x1u));
  /* 109554cd call esi */
  call_ind((uint32_t)(ESI), 0x109554cfu);
  /* 109554cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109554d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109554d4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109554d6 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 109554db push 1 */
  push32((uint32_t)(0x1u));
  /* 109554dd call esi */
  call_ind((uint32_t)(ESI), 0x109554dfu);
  /* 109554df push 0 */
  push32((uint32_t)(0x0u));
  /* 109554e1 push 0x1095b1c8 */
  push32((uint32_t)(0x1095b1c8u));
  /* 109554e6 call edi */
  call_ind((uint32_t)(EDI), 0x109554e8u);
  /* 109554e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109554ea push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109554ef call edi */
  call_ind((uint32_t)(EDI), 0x109554f1u);
  /* 109554f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109554f3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109554f5 push 0x1095ae50 */
  push32((uint32_t)(0x1095ae50u));
  /* 109554fa push 1 */
  push32((uint32_t)(0x1u));
  /* 109554fc call esi */
  call_ind((uint32_t)(ESI), 0x109554feu);
  /* 109554fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10955500 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955502 push 0x1095b110 */
  push32((uint32_t)(0x1095b110u));
  /* 10955507 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955509 call esi */
  call_ind((uint32_t)(ESI), 0x1095550bu);
  /* 1095550b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095550e push 2 */
  push32((uint32_t)(0x2u));
  /* 10955510 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955512 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955517 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955519 call esi */
  call_ind((uint32_t)(ESI), 0x1095551bu);
  /* 1095551b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095551d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095551f push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955524 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955526 call esi */
  call_ind((uint32_t)(ESI), 0x10955528u);
  /* 10955528 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 1095552d push 0xf */
  push32((uint32_t)(0xfu));
  /* 1095552f call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10955535u);
  /* 10955535 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955537 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10955539 call ebx */
  call_ind((uint32_t)(EBX), 0x1095553bu);
  /* 1095553b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095553e:;
  /* 1095553e push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10955540 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955546u);
  /* 10955546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955549 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095554b je 0x10955690 */
  if (C.zf) goto L_10955690;
  /* 10955551 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955553 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955558 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095555eu);
  /* 1095555e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955561 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955564 jg 0x1095557f */
  if ((!C.zf&&C.sf==C.of)) goto L_1095557f;
  /* 10955566 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955568 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 1095556d call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955573u);
  /* 10955573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955576 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955579 jle 0x10955690 */
  if ((C.zf||C.sf!=C.of)) goto L_10955690;
L_1095557f:;
  /* 1095557f push 0xf */
  push32((uint32_t)(0xfu));
  /* 10955581 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955587u);
  /* 10955587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095558a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095558c je 0x10955690 */
  if (C.zf) goto L_10955690;
  /* 10955592 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955594 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10955596 call ebx */
  call_ind((uint32_t)(EBX), 0x10955598u);
  /* 10955598 mov eax, dword ptr [0x1095adf0] */
  EAX = (r32((uint32_t)(0x1095adf0)));
  /* 1095559d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109555a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109555a2 jne 0x10955602 */
  if (!C.zf) goto L_10955602;
  /* 109555a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109555a6 push 0x1095b1b0 */
  push32((uint32_t)(0x1095b1b0u));
  /* 109555ab call edi */
  call_ind((uint32_t)(EDI), 0x109555adu);
  /* 109555ad push 1 */
  push32((uint32_t)(0x1u));
  /* 109555af push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109555b4 call edi */
  call_ind((uint32_t)(EDI), 0x109555b6u);
  /* 109555b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109555b8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109555ba push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 109555bf push 1 */
  push32((uint32_t)(0x1u));
  /* 109555c1 call esi */
  call_ind((uint32_t)(ESI), 0x109555c3u);
  /* 109555c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109555c5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109555c7 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109555cc push 1 */
  push32((uint32_t)(0x1u));
  /* 109555ce call esi */
  call_ind((uint32_t)(ESI), 0x109555d0u);
  /* 109555d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109555d2 push 0x1095b1c0 */
  push32((uint32_t)(0x1095b1c0u));
  /* 109555d7 call edi */
  call_ind((uint32_t)(EDI), 0x109555d9u);
  /* 109555d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109555db push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109555e0 call edi */
  call_ind((uint32_t)(EDI), 0x109555e2u);
  /* 109555e2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109555e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109555e7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109555e9 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109555ee push 1 */
  push32((uint32_t)(0x1u));
  /* 109555f0 call esi */
  call_ind((uint32_t)(ESI), 0x109555f2u);
  /* 109555f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109555f4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109555f6 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109555fb push 1 */
  push32((uint32_t)(0x1u));
  /* 109555fd call esi */
  call_ind((uint32_t)(ESI), 0x109555ffu);
  /* 109555ff add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955602:;
  /* 10955602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955604 push 0x1095b1b8 */
  push32((uint32_t)(0x1095b1b8u));
  /* 10955609 call edi */
  call_ind((uint32_t)(EDI), 0x1095560bu);
  /* 1095560b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095560d push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955612 call edi */
  call_ind((uint32_t)(EDI), 0x10955614u);
  /* 10955614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955616 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955618 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 1095561d push 1 */
  push32((uint32_t)(0x1u));
  /* 1095561f call esi */
  call_ind((uint32_t)(ESI), 0x10955621u);
  /* 10955621 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955623 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955625 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 1095562a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095562c call esi */
  call_ind((uint32_t)(ESI), 0x1095562eu);
  /* 1095562e push 2 */
  push32((uint32_t)(0x2u));
  /* 10955630 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955632 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955637 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955639 call esi */
  call_ind((uint32_t)(ESI), 0x1095563bu);
  /* 1095563b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095563e push 0 */
  push32((uint32_t)(0x0u));
  /* 10955640 push 0x1095b1c8 */
  push32((uint32_t)(0x1095b1c8u));
  /* 10955645 call edi */
  call_ind((uint32_t)(EDI), 0x10955647u);
  /* 10955647 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955649 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 1095564e call edi */
  call_ind((uint32_t)(EDI), 0x10955650u);
  /* 10955650 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955652 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955654 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10955659 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095565b call esi */
  call_ind((uint32_t)(ESI), 0x1095565du);
  /* 1095565d push 2 */
  push32((uint32_t)(0x2u));
  /* 1095565f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955661 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955666 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955668 call esi */
  call_ind((uint32_t)(ESI), 0x1095566au);
  /* 1095566a push 2 */
  push32((uint32_t)(0x2u));
  /* 1095566c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095566e push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955673 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955675 call esi */
  call_ind((uint32_t)(ESI), 0x10955677u);
  /* 10955677 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095567a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1095567f push 0xf */
  push32((uint32_t)(0xfu));
  /* 10955681 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10955687u);
  /* 10955687 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955689 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1095568b call ebx */
  call_ind((uint32_t)(EBX), 0x1095568du);
  /* 1095568d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955690:;
  /* 10955690 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10955692 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955698u);
  /* 10955698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095569b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095569d je 0x1095579b */
  if (C.zf) goto L_1095579b;
  /* 109556a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109556a5 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 109556aa call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109556b0u);
  /* 109556b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109556b3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109556b6 jg 0x109556d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_109556d1;
  /* 109556b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109556ba push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 109556bf call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109556c5u);
  /* 109556c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109556c8 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109556cb jle 0x1095579b */
  if ((C.zf||C.sf!=C.of)) goto L_1095579b;
L_109556d1:;
  /* 109556d1 cmp dword ptr [0x1095adf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1095adf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109556d8 jne 0x1095579b */
  if (!C.zf) goto L_1095579b;
  /* 109556de push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109556e0 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109556e6u);
  /* 109556e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109556e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109556eb je 0x1095579b */
  if (C.zf) goto L_1095579b;
  /* 109556f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109556f3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109556f5 call ebx */
  call_ind((uint32_t)(EBX), 0x109556f7u);
  /* 109556f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109556f9 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 109556fe call edi */
  call_ind((uint32_t)(EDI), 0x10955700u);
  /* 10955700 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955702 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955707 call edi */
  call_ind((uint32_t)(EDI), 0x10955709u);
  /* 10955709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095570b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955710 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955715 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955717 call esi */
  call_ind((uint32_t)(ESI), 0x10955719u);
  /* 10955719 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095571b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955720 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955725 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955727 call esi */
  call_ind((uint32_t)(ESI), 0x10955729u);
  /* 10955729 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095572b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095572d push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955732 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955734 call esi */
  call_ind((uint32_t)(ESI), 0x10955736u);
  /* 10955736 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955739 push 2 */
  push32((uint32_t)(0x2u));
  /* 1095573b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1095573d push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955742 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955744 call esi */
  call_ind((uint32_t)(ESI), 0x10955746u);
  /* 10955746 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955748 push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 1095574d call edi */
  call_ind((uint32_t)(EDI), 0x1095574fu);
  /* 1095574f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955751 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955756 call edi */
  call_ind((uint32_t)(EDI), 0x10955758u);
  /* 10955758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095575a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095575f push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10955764 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955766 call esi */
  call_ind((uint32_t)(ESI), 0x10955768u);
  /* 10955768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095576a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095576f push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10955774 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955776 call esi */
  call_ind((uint32_t)(ESI), 0x10955778u);
  /* 10955778 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095577b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095577d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955782 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955787 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955789 call esi */
  call_ind((uint32_t)(ESI), 0x1095578bu);
  /* 1095578b push 2 */
  push32((uint32_t)(0x2u));
  /* 1095578d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1095578f push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955794 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955796 call esi */
  call_ind((uint32_t)(ESI), 0x10955798u);
  /* 10955798 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095579b:;
  /* 1095579b push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1095579d call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109557a3u);
  /* 109557a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109557a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109557a8 je 0x109557ea */
  if (C.zf) goto L_109557ea;
  /* 109557aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109557ac push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 109557b1 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109557b7u);
  /* 109557b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109557ba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109557bd jg 0x109557d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109557d4;
  /* 109557bf push 4 */
  push32((uint32_t)(0x4u));
  /* 109557c1 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 109557c6 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109557ccu);
  /* 109557cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109557cf cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109557d2 jle 0x109557ea */
  if ((C.zf||C.sf!=C.of)) goto L_109557ea;
L_109557d4:;
  /* 109557d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109557d6 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 109557d8 call ebx */
  call_ind((uint32_t)(EBX), 0x109557dau);
  /* 109557da push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 109557df push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 109557e1 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x109557e7u);
  /* 109557e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109557ea:;
  /* 109557ea push 0x39 */
  push32((uint32_t)(0x39u));
  /* 109557ec call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x109557f2u);
  /* 109557f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109557f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109557f7 je 0x1095598f */
  if (C.zf) goto L_1095598f;
  /* 109557fd push 0 */
  push32((uint32_t)(0x0u));
  /* 109557ff push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955804 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095580au);
  /* 1095580a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095580d cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955810 jg 0x1095582b */
  if ((!C.zf&&C.sf==C.of)) goto L_1095582b;
  /* 10955812 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955814 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955819 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x1095581fu);
  /* 1095581f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955822 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955825 jle 0x1095598f */
  if ((C.zf||C.sf!=C.of)) goto L_1095598f;
L_1095582b:;
  /* 1095582b push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1095582d call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955833u);
  /* 10955833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955836 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955838 je 0x1095598f */
  if (C.zf) goto L_1095598f;
  /* 1095583e mov eax, dword ptr [0x1095adf0] */
  EAX = (r32((uint32_t)(0x1095adf0)));
  /* 10955843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10955845 jne 0x1095598f */
  if (!C.zf) goto L_1095598f;
  /* 1095584b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095584d push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1095584f call ebx */
  call_ind((uint32_t)(EBX), 0x10955851u);
  /* 10955851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955853 push 0x1095add0 */
  push32((uint32_t)(0x1095add0u));
  /* 10955858 call edi */
  call_ind((uint32_t)(EDI), 0x1095585au);
  /* 1095585a push 1 */
  push32((uint32_t)(0x1u));
  /* 1095585c push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955861 call edi */
  call_ind((uint32_t)(EDI), 0x10955863u);
  /* 10955863 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955865 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095586a push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 1095586f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955871 call esi */
  call_ind((uint32_t)(ESI), 0x10955873u);
  /* 10955873 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955875 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095587a push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 1095587f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955881 call esi */
  call_ind((uint32_t)(ESI), 0x10955883u);
  /* 10955883 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955885 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095588a push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 1095588f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955891 call esi */
  call_ind((uint32_t)(ESI), 0x10955893u);
  /* 10955893 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955896 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955898 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1095589d push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 109558a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109558a4 call esi */
  call_ind((uint32_t)(ESI), 0x109558a6u);
  /* 109558a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109558a8 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 109558ad call edi */
  call_ind((uint32_t)(EDI), 0x109558afu);
  /* 109558af push 1 */
  push32((uint32_t)(0x1u));
  /* 109558b1 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 109558b6 call edi */
  call_ind((uint32_t)(EDI), 0x109558b8u);
  /* 109558b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109558ba push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109558bf push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109558c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109558c6 call esi */
  call_ind((uint32_t)(ESI), 0x109558c8u);
  /* 109558c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109558ca push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109558cf push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 109558d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109558d6 call esi */
  call_ind((uint32_t)(ESI), 0x109558d8u);
  /* 109558d8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109558db push 2 */
  push32((uint32_t)(0x2u));
  /* 109558dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109558e2 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 109558e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109558e9 call esi */
  call_ind((uint32_t)(ESI), 0x109558ebu);
  /* 109558eb push 2 */
  push32((uint32_t)(0x2u));
  /* 109558ed push 0x28 */
  push32((uint32_t)(0x28u));
  /* 109558ef push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 109558f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109558f6 call esi */
  call_ind((uint32_t)(ESI), 0x109558f8u);
  /* 109558f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109558fa push 0x1095add8 */
  push32((uint32_t)(0x1095add8u));
  /* 109558ff call edi */
  call_ind((uint32_t)(EDI), 0x10955901u);
  /* 10955901 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955903 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955908 call edi */
  call_ind((uint32_t)(EDI), 0x1095590au);
  /* 1095590a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095590c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955911 push 0x1095b128 */
  push32((uint32_t)(0x1095b128u));
  /* 10955916 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955918 call esi */
  call_ind((uint32_t)(ESI), 0x1095591au);
  /* 1095591a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095591d push 2 */
  push32((uint32_t)(0x2u));
  /* 1095591f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955924 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955929 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095592b call esi */
  call_ind((uint32_t)(ESI), 0x1095592du);
  /* 1095592d push 2 */
  push32((uint32_t)(0x2u));
  /* 1095592f push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955931 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10955936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955938 call esi */
  call_ind((uint32_t)(ESI), 0x1095593au);
  /* 1095593a push 0 */
  push32((uint32_t)(0x0u));
  /* 1095593c push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 10955941 call edi */
  call_ind((uint32_t)(EDI), 0x10955943u);
  /* 10955943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955945 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 1095594a call edi */
  call_ind((uint32_t)(EDI), 0x1095594cu);
  /* 1095594c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095594e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955953 push 0x1095ae50 */
  push32((uint32_t)(0x1095ae50u));
  /* 10955958 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095595a call esi */
  call_ind((uint32_t)(ESI), 0x1095595cu);
  /* 1095595c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095595f push 0 */
  push32((uint32_t)(0x0u));
  /* 10955961 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955966 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 1095596b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095596d call esi */
  call_ind((uint32_t)(ESI), 0x1095596fu);
  /* 1095596f push 2 */
  push32((uint32_t)(0x2u));
  /* 10955971 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955976 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 1095597b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095597d call esi */
  call_ind((uint32_t)(ESI), 0x1095597fu);
  /* 1095597f push 2 */
  push32((uint32_t)(0x2u));
  /* 10955981 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955983 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095598a call esi */
  call_ind((uint32_t)(ESI), 0x1095598cu);
  /* 1095598c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095598f:;
  /* 1095598f push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10955991 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955997u);
  /* 10955997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095599a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095599c je 0x10955a8d */
  if (C.zf) goto L_10955a8d;
  /* 109559a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109559a4 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109559a9 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109559afu);
  /* 109559af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109559b2 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109559b5 jg 0x109559d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_109559d0;
  /* 109559b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109559b9 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 109559be call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x109559c4u);
  /* 109559c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109559c7 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109559ca jle 0x10955a8d */
  if ((C.zf||C.sf!=C.of)) goto L_10955a8d;
L_109559d0:;
  /* 109559d0 cmp dword ptr [0x1095adf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1095adf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109559d7 jne 0x10955a8d */
  if (!C.zf) goto L_10955a8d;
  /* 109559dd push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109559df call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109559e5u);
  /* 109559e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109559e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109559ea je 0x10955a8d */
  if (C.zf) goto L_10955a8d;
  /* 109559f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109559f2 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 109559f4 call ebx */
  call_ind((uint32_t)(EBX), 0x109559f6u);
  /* 109559f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109559f8 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 109559fd call edi */
  call_ind((uint32_t)(EDI), 0x109559ffu);
  /* 109559ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a01 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955a06 call edi */
  call_ind((uint32_t)(EDI), 0x10955a08u);
  /* 10955a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955a0a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955a0f push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a16 call esi */
  call_ind((uint32_t)(ESI), 0x10955a18u);
  /* 10955a18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955a1a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955a1f push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a26 call esi */
  call_ind((uint32_t)(ESI), 0x10955a28u);
  /* 10955a28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955a2a push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955a2c push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955a31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a33 call esi */
  call_ind((uint32_t)(ESI), 0x10955a35u);
  /* 10955a35 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955a3a push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 10955a3f call edi */
  call_ind((uint32_t)(EDI), 0x10955a41u);
  /* 10955a41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a43 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955a48 call edi */
  call_ind((uint32_t)(EDI), 0x10955a4au);
  /* 10955a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10955a4c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955a51 push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10955a56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a58 call esi */
  call_ind((uint32_t)(ESI), 0x10955a5au);
  /* 10955a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10955a5c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955a61 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10955a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a68 call esi */
  call_ind((uint32_t)(ESI), 0x10955a6au);
  /* 10955a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10955a6c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955a71 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955a76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a78 call esi */
  call_ind((uint32_t)(ESI), 0x10955a7au);
  /* 10955a7a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10955a7f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955a81 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955a86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955a88 call esi */
  call_ind((uint32_t)(ESI), 0x10955a8au);
  /* 10955a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955a8d:;
  /* 10955a8d push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10955a8f call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955a95u);
  /* 10955a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955a98 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955a9a je 0x10955adc */
  if (C.zf) goto L_10955adc;
  /* 10955a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10955a9e push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955aa3 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955aa9u);
  /* 10955aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955aac cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955aaf jg 0x10955ac6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10955ac6;
  /* 10955ab1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955ab3 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955ab8 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955abeu);
  /* 10955abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955ac1 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955ac4 jle 0x10955adc */
  if ((C.zf||C.sf!=C.of)) goto L_10955adc;
L_10955ac6:;
  /* 10955ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955ac8 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10955aca call ebx */
  call_ind((uint32_t)(EBX), 0x10955accu);
  /* 10955acc push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10955ad1 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10955ad3 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10955ad9u);
  /* 10955ad9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955adc:;
  /* 10955adc push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10955ade call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955ae4u);
  /* 10955ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955ae7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955ae9 je 0x10955c78 */
  if (C.zf) goto L_10955c78;
  /* 10955aef push 0 */
  push32((uint32_t)(0x0u));
  /* 10955af1 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955af6 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955afcu);
  /* 10955afc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955aff cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955b02 jg 0x10955b1d */
  if ((!C.zf&&C.sf==C.of)) goto L_10955b1d;
  /* 10955b04 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955b06 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955b0b call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955b11u);
  /* 10955b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955b14 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955b17 jle 0x10955c78 */
  if ((C.zf||C.sf!=C.of)) goto L_10955c78;
L_10955b1d:;
  /* 10955b1d push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10955b1f call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955b25u);
  /* 10955b25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955b28 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955b2a je 0x10955c78 */
  if (C.zf) goto L_10955c78;
  /* 10955b30 mov eax, dword ptr [0x1095adf0] */
  EAX = (r32((uint32_t)(0x1095adf0)));
  /* 10955b35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10955b37 jne 0x10955c78 */
  if (!C.zf) goto L_10955c78;
  /* 10955b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10955b3f push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10955b41 call ebx */
  call_ind((uint32_t)(EBX), 0x10955b43u);
  /* 10955b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955b45 push 0x1095add0 */
  push32((uint32_t)(0x1095add0u));
  /* 10955b4a call edi */
  call_ind((uint32_t)(EDI), 0x10955b4cu);
  /* 10955b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10955b4e push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955b53 call edi */
  call_ind((uint32_t)(EDI), 0x10955b55u);
  /* 10955b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955b57 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955b5c push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955b61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955b63 call esi */
  call_ind((uint32_t)(ESI), 0x10955b65u);
  /* 10955b65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955b69 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10955b70 call esi */
  call_ind((uint32_t)(ESI), 0x10955b72u);
  /* 10955b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955b76 push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10955b7d call esi */
  call_ind((uint32_t)(ESI), 0x10955b7fu);
  /* 10955b7f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955b82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955b84 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955b89 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10955b8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10955b90 call esi */
  call_ind((uint32_t)(ESI), 0x10955b92u);
  /* 10955b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955b94 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 10955b99 call edi */
  call_ind((uint32_t)(EDI), 0x10955b9bu);
  /* 10955b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10955b9d push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955ba2 call edi */
  call_ind((uint32_t)(EDI), 0x10955ba4u);
  /* 10955ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955ba6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955bab push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955bb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955bb2 call esi */
  call_ind((uint32_t)(ESI), 0x10955bb4u);
  /* 10955bb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955bb6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955bbb push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955bc2 call esi */
  call_ind((uint32_t)(ESI), 0x10955bc4u);
  /* 10955bc4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955bcb push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955bd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955bd2 call esi */
  call_ind((uint32_t)(ESI), 0x10955bd4u);
  /* 10955bd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955bd6 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955bd8 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955bdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10955bdf call esi */
  call_ind((uint32_t)(ESI), 0x10955be1u);
  /* 10955be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955be3 push 0x1095add8 */
  push32((uint32_t)(0x1095add8u));
  /* 10955be8 call edi */
  call_ind((uint32_t)(EDI), 0x10955beau);
  /* 10955bea push 1 */
  push32((uint32_t)(0x1u));
  /* 10955bec push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955bf1 call edi */
  call_ind((uint32_t)(EDI), 0x10955bf3u);
  /* 10955bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955bf5 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955bfa push 0x1095b140 */
  push32((uint32_t)(0x1095b140u));
  /* 10955bff push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c01 call esi */
  call_ind((uint32_t)(ESI), 0x10955c03u);
  /* 10955c03 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955c06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955c08 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955c0d push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955c12 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c14 call esi */
  call_ind((uint32_t)(ESI), 0x10955c16u);
  /* 10955c16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955c18 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955c1a push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10955c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c21 call esi */
  call_ind((uint32_t)(ESI), 0x10955c23u);
  /* 10955c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955c25 push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 10955c2a call edi */
  call_ind((uint32_t)(EDI), 0x10955c2cu);
  /* 10955c2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c2e push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955c33 call edi */
  call_ind((uint32_t)(EDI), 0x10955c35u);
  /* 10955c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955c37 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955c3c push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10955c41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c43 call esi */
  call_ind((uint32_t)(ESI), 0x10955c45u);
  /* 10955c45 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955c4a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955c4f push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10955c54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c56 call esi */
  call_ind((uint32_t)(ESI), 0x10955c58u);
  /* 10955c58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955c5a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955c5f push 0x1095ae70 */
  push32((uint32_t)(0x1095ae70u));
  /* 10955c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c66 call esi */
  call_ind((uint32_t)(ESI), 0x10955c68u);
  /* 10955c68 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955c6a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955c6c push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955c71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955c73 call esi */
  call_ind((uint32_t)(ESI), 0x10955c75u);
  /* 10955c75 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955c78:;
  /* 10955c78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10955c7a call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955c80u);
  /* 10955c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955c83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955c85 je 0x10955d76 */
  if (C.zf) goto L_10955d76;
  /* 10955c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10955c8d push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955c92 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955c98u);
  /* 10955c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955c9b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955c9e jg 0x10955cb9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10955cb9;
  /* 10955ca0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955ca2 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955ca7 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955cadu);
  /* 10955cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955cb0 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955cb3 jle 0x10955d76 */
  if ((C.zf||C.sf!=C.of)) goto L_10955d76;
L_10955cb9:;
  /* 10955cb9 cmp dword ptr [0x1095adf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1095adf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955cc0 jne 0x10955d76 */
  if (!C.zf) goto L_10955d76;
  /* 10955cc6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10955cc8 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955cceu);
  /* 10955cce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955cd1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955cd3 je 0x10955d76 */
  if (C.zf) goto L_10955d76;
  /* 10955cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955cdb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10955cdd call ebx */
  call_ind((uint32_t)(EBX), 0x10955cdfu);
  /* 10955cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10955ce1 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 10955ce6 call edi */
  call_ind((uint32_t)(EDI), 0x10955ce8u);
  /* 10955ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955cea push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955cef call edi */
  call_ind((uint32_t)(EDI), 0x10955cf1u);
  /* 10955cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955cf3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955cf8 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955cfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10955cff call esi */
  call_ind((uint32_t)(ESI), 0x10955d01u);
  /* 10955d01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955d03 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955d08 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d0f call esi */
  call_ind((uint32_t)(ESI), 0x10955d11u);
  /* 10955d11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955d13 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955d15 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955d1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d1c call esi */
  call_ind((uint32_t)(ESI), 0x10955d1eu);
  /* 10955d1e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955d23 push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 10955d28 call edi */
  call_ind((uint32_t)(EDI), 0x10955d2au);
  /* 10955d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d2c push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955d31 call edi */
  call_ind((uint32_t)(EDI), 0x10955d33u);
  /* 10955d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955d35 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955d3a push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10955d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d41 call esi */
  call_ind((uint32_t)(ESI), 0x10955d43u);
  /* 10955d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955d45 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955d4a push 0x1095ae58 */
  push32((uint32_t)(0x1095ae58u));
  /* 10955d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d51 call esi */
  call_ind((uint32_t)(ESI), 0x10955d53u);
  /* 10955d53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955d55 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955d5a push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d61 call esi */
  call_ind((uint32_t)(ESI), 0x10955d63u);
  /* 10955d63 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955d68 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955d6a push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10955d71 call esi */
  call_ind((uint32_t)(ESI), 0x10955d73u);
  /* 10955d73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955d76:;
  /* 10955d76 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10955d78 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955d7eu);
  /* 10955d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955d81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955d83 je 0x10955dc5 */
  if (C.zf) goto L_10955dc5;
  /* 10955d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955d87 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955d8c call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955d92u);
  /* 10955d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955d95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955d98 jg 0x10955daf */
  if ((!C.zf&&C.sf==C.of)) goto L_10955daf;
  /* 10955d9a push 4 */
  push32((uint32_t)(0x4u));
  /* 10955d9c push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955da1 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955da7u);
  /* 10955da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955daa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955dad jle 0x10955dc5 */
  if ((C.zf||C.sf!=C.of)) goto L_10955dc5;
L_10955daf:;
  /* 10955daf push 0 */
  push32((uint32_t)(0x0u));
  /* 10955db1 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10955db3 call ebx */
  call_ind((uint32_t)(EBX), 0x10955db5u);
  /* 10955db5 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10955dba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10955dbc call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10955dc2u);
  /* 10955dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955dc5:;
  /* 10955dc5 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10955dc7 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955dcdu);
  /* 10955dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955dd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955dd2 je 0x10955f44 */
  if (C.zf) goto L_10955f44;
  /* 10955dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955dda push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955ddf call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955de5u);
  /* 10955de5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955de8 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955deb jg 0x10955e06 */
  if ((!C.zf&&C.sf==C.of)) goto L_10955e06;
  /* 10955ded push 4 */
  push32((uint32_t)(0x4u));
  /* 10955def push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955df4 call dword ptr [0x1095910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095910c))), 0x10955dfau);
  /* 10955dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955dfd cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955e00 jle 0x10955f44 */
  if ((C.zf||C.sf!=C.of)) goto L_10955f44;
L_10955e06:;
  /* 10955e06 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10955e08 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10955e0eu);
  /* 10955e0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955e11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955e13 je 0x10955f44 */
  if (C.zf) goto L_10955f44;
  /* 10955e19 mov eax, dword ptr [0x1095adf0] */
  EAX = (r32((uint32_t)(0x1095adf0)));
  /* 10955e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10955e20 jne 0x10955f44 */
  if (!C.zf) goto L_10955f44;
  /* 10955e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955e28 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10955e2a call ebx */
  call_ind((uint32_t)(EBX), 0x10955e2cu);
  /* 10955e2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10955e2e push 0x1095add0 */
  push32((uint32_t)(0x1095add0u));
  /* 10955e33 call edi */
  call_ind((uint32_t)(EDI), 0x10955e35u);
  /* 10955e35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e37 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955e3c call edi */
  call_ind((uint32_t)(EDI), 0x10955e3eu);
  /* 10955e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10955e40 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955e45 push 0x1095ae78 */
  push32((uint32_t)(0x1095ae78u));
  /* 10955e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e4c call esi */
  call_ind((uint32_t)(ESI), 0x10955e4eu);
  /* 10955e4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10955e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955e52 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e59 call esi */
  call_ind((uint32_t)(ESI), 0x10955e5bu);
  /* 10955e5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10955e5d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955e62 push 0x1095aec8 */
  push32((uint32_t)(0x1095aec8u));
  /* 10955e67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e69 call esi */
  call_ind((uint32_t)(ESI), 0x10955e6bu);
  /* 10955e6b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10955e70 push 0x1095ade0 */
  push32((uint32_t)(0x1095ade0u));
  /* 10955e75 call edi */
  call_ind((uint32_t)(EDI), 0x10955e77u);
  /* 10955e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e79 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955e7e call edi */
  call_ind((uint32_t)(EDI), 0x10955e80u);
  /* 10955e80 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955e82 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955e87 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955e8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e8e call esi */
  call_ind((uint32_t)(ESI), 0x10955e90u);
  /* 10955e90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955e94 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955e99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955e9b call esi */
  call_ind((uint32_t)(ESI), 0x10955e9du);
  /* 10955e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10955e9f push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955ea1 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10955ea6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955ea8 call esi */
  call_ind((uint32_t)(ESI), 0x10955eaau);
  /* 10955eaa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955ead push 0 */
  push32((uint32_t)(0x0u));
  /* 10955eaf push 0x1095add8 */
  push32((uint32_t)(0x1095add8u));
  /* 10955eb4 call edi */
  call_ind((uint32_t)(EDI), 0x10955eb6u);
  /* 10955eb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955eb8 push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955ebd call edi */
  call_ind((uint32_t)(EDI), 0x10955ebfu);
  /* 10955ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 10955ec1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955ec6 push 0x1095b140 */
  push32((uint32_t)(0x1095b140u));
  /* 10955ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 10955ecd call esi */
  call_ind((uint32_t)(ESI), 0x10955ecfu);
  /* 10955ecf push 2 */
  push32((uint32_t)(0x2u));
  /* 10955ed1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955ed6 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955edb push 1 */
  push32((uint32_t)(0x1u));
  /* 10955edd call esi */
  call_ind((uint32_t)(ESI), 0x10955edfu);
  /* 10955edf push 2 */
  push32((uint32_t)(0x2u));
  /* 10955ee1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10955ee3 push 0x1095aed0 */
  push32((uint32_t)(0x1095aed0u));
  /* 10955ee8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955eea call esi */
  call_ind((uint32_t)(ESI), 0x10955eecu);
  /* 10955eec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955eef push 0 */
  push32((uint32_t)(0x0u));
  /* 10955ef1 push 0x1095ade8 */
  push32((uint32_t)(0x1095ade8u));
  /* 10955ef6 call edi */
  call_ind((uint32_t)(EDI), 0x10955ef8u);
  /* 10955ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10955efa push 0x1095b1e0 */
  push32((uint32_t)(0x1095b1e0u));
  /* 10955eff call edi */
  call_ind((uint32_t)(EDI), 0x10955f01u);
  /* 10955f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955f03 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955f08 push 0x1095ae38 */
  push32((uint32_t)(0x1095ae38u));
  /* 10955f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10955f0f call esi */
  call_ind((uint32_t)(ESI), 0x10955f11u);
  /* 10955f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955f13 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955f18 push 0x1095ae30 */
  push32((uint32_t)(0x1095ae30u));
  /* 10955f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10955f1f call esi */
  call_ind((uint32_t)(ESI), 0x10955f21u);
  /* 10955f21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955f23 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10955f28 push 0x1095ae80 */
  push32((uint32_t)(0x1095ae80u));
  /* 10955f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10955f2f call esi */
  call_ind((uint32_t)(ESI), 0x10955f31u);
  /* 10955f31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955f34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10955f36 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10955f38 push 0x1095aee0 */
  push32((uint32_t)(0x1095aee0u));
  /* 10955f3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10955f3f call esi */
  call_ind((uint32_t)(ESI), 0x10955f41u);
  /* 10955f41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955f44:;
  /* 10955f44 mov esi, dword ptr [0x10959104] */
  ESI = (r32((uint32_t)(0x10959104)));
  /* 10955f4a push 4 */
  push32((uint32_t)(0x4u));
  /* 10955f4c push 0x1095adc8 */
  push32((uint32_t)(0x1095adc8u));
  /* 10955f51 call esi */
  call_ind((uint32_t)(ESI), 0x10955f53u);
  /* 10955f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10955f58 jle 0x10955f74 */
  if ((C.zf||C.sf!=C.of)) goto L_10955f74;
  /* 10955f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10955f5c push 0x1095adc8 */
  push32((uint32_t)(0x1095adc8u));
  /* 10955f61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955f63 call dword ptr [0x10959100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959100))), 0x10955f69u);
  /* 10955f69 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955f6b call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x10955f71u);
  /* 10955f71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955f74:;
  /* 10955f74 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955f76 push 0x1095b1d0 */
  push32((uint32_t)(0x1095b1d0u));
  /* 10955f7b call esi */
  call_ind((uint32_t)(ESI), 0x10955f7du);
  /* 10955f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955f80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10955f82 jle 0x10955f9e */
  if ((C.zf||C.sf!=C.of)) goto L_10955f9e;
  /* 10955f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955f86 push 0x1095b1d0 */
  push32((uint32_t)(0x1095b1d0u));
  /* 10955f8b push 4 */
  push32((uint32_t)(0x4u));
  /* 10955f8d call dword ptr [0x10959100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959100))), 0x10955f93u);
  /* 10955f93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10955f95 call dword ptr [0x10959108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959108))), 0x10955f9bu);
  /* 10955f9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10955f9e:;
  /* 10955f9e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10955fa0 call dword ptr [0x109590b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b0))), 0x10955fa6u);
  /* 10955fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955fa9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10955fab je 0x10956021 */
  if (C.zf) goto L_10956021;
  /* 10955fad push 1 */
  push32((uint32_t)(0x1u));
  /* 10955faf push 0x1095b098 */
  push32((uint32_t)(0x1095b098u));
  /* 10955fb4 call esi */
  call_ind((uint32_t)(ESI), 0x10955fb6u);
  /* 10955fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955fb9 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955fbc jge 0x10956021 */
  if ((C.sf==C.of)) goto L_10956021;
  /* 10955fbe push 4 */
  push32((uint32_t)(0x4u));
  /* 10955fc0 push 0x1095b0a8 */
  push32((uint32_t)(0x1095b0a8u));
  /* 10955fc5 call esi */
  call_ind((uint32_t)(ESI), 0x10955fc7u);
  /* 10955fc7 mov edx, eax */
  EDX = (EAX);
  /* 10955fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955fcb push 0x1095af40 */
  push32((uint32_t)(0x1095af40u));
  /* 10955fd0 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10955fd4 call esi */
  call_ind((uint32_t)(ESI), 0x10955fd6u);
  /* 10955fd6 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10955fda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10955fdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10955fdf cmp ecx, 0x64 */
  { uint32_t _a=(ECX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10955fe2 jle 0x1095601b */
  if ((C.zf||C.sf!=C.of)) goto L_1095601b;
  /* 10955fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955fe6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10955fe8 call ebx */
  call_ind((uint32_t)(EBX), 0x10955feau);
  /* 10955fea push 0x1095a574 */
  push32((uint32_t)(0x1095a574u));
  /* 10955fef call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x10955ff5u);
  /* 10955ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10955ff7 push 0x1095b098 */
  push32((uint32_t)(0x1095b098u));
  /* 10955ffc call edi */
  call_ind((uint32_t)(EDI), 0x10955ffeu);
  /* 10955ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10956000 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10956002 push 0x1095aed8 */
  push32((uint32_t)(0x1095aed8u));
  /* 10956007 push 1 */
  push32((uint32_t)(0x1u));
  /* 10956009 call ebp */
  call_ind((uint32_t)(EBP), 0x1095600bu);
  /* 1095600b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10956010 push 5 */
  push32((uint32_t)(0x5u));
  /* 10956012 call dword ptr [0x109590c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590c4))), 0x10956018u);
  /* 10956018 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1095601b:;
  /* 1095601b mov esi, dword ptr [0x10959104] */
  ESI = (r32((uint32_t)(0x10959104)));
L_10956021:;
  /* 10956021 mov ebp, dword ptr [0x109590b0] */
  EBP = (r32((uint32_t)(0x109590b0)));
  /* 10956027 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10956029 call ebp */
  call_ind((uint32_t)(EBP), 0x1095602bu);
  /* 1095602b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095602e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10956030 je 0x10956077 */
  if (C.zf) goto L_10956077;
  /* 10956032 push 4 */
  push32((uint32_t)(0x4u));
  /* 10956034 push 0x1095b0a8 */
  push32((uint32_t)(0x1095b0a8u));
  /* 10956039 call esi */
  call_ind((uint32_t)(ESI), 0x1095603bu);
  /* 1095603b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095603d push 0x1095af40 */
  push32((uint32_t)(0x1095af40u));
  /* 10956042 mov edi, eax */
  EDI = (EAX);
  /* 10956044 call esi */
  call_ind((uint32_t)(ESI), 0x10956046u);
  /* 10956046 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956048 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095604a push 0x1095b098 */
  push32((uint32_t)(0x1095b098u));
  /* 1095604f lea edi, [edi + edi*4] */
  EDI = ((uint32_t)(EDI + EDI*4));
  /* 10956052 shl edi, 1 */
  EDI = (sh_shl((uint32_t)(EDI), (0x1u)&0x1f, 32));
  /* 10956054 call esi */
  call_ind((uint32_t)(ESI), 0x10956056u);
  /* 10956056 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956059 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095605b jge 0x10956077 */
  if ((C.sf==C.of)) goto L_10956077;
  /* 1095605d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095605f push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10956061 call ebx */
  call_ind((uint32_t)(EBX), 0x10956063u);
  /* 10956063 push 0x1095a56c */
  push32((uint32_t)(0x1095a56cu));
  /* 10956068 call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x1095606eu);
  /* 1095606e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956071 call dword ptr [0x10959110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959110))), 0x10956077u);
L_10956077:;
  /* 10956077 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10956079 call ebp */
  call_ind((uint32_t)(EBP), 0x1095607bu);
  /* 1095607b mov edi, dword ptr [0x10959114] */
  EDI = (r32((uint32_t)(0x10959114)));
  /* 10956081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956084 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10956086 je 0x109560a2 */
  if (C.zf) goto L_109560a2;
  /* 10956088 push 5 */
  push32((uint32_t)(0x5u));
  /* 1095608a call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x10956090u);
  /* 10956090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956093 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10956095 je 0x109560a2 */
  if (C.zf) goto L_109560a2;
  /* 10956097 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956099 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1095609b call ebx */
  call_ind((uint32_t)(EBX), 0x1095609du);
  /* 1095609d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109560a0 call edi */
  call_ind((uint32_t)(EDI), 0x109560a2u);
L_109560a2:;
  /* 109560a2 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109560a4 call ebp */
  call_ind((uint32_t)(EBP), 0x109560a6u);
  /* 109560a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109560a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109560ab je 0x109560d4 */
  if (C.zf) goto L_109560d4;
  /* 109560ad push 1 */
  push32((uint32_t)(0x1u));
  /* 109560af push 0x1095b098 */
  push32((uint32_t)(0x1095b098u));
  /* 109560b4 call esi */
  call_ind((uint32_t)(ESI), 0x109560b6u);
  /* 109560b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109560b9 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109560bc jge 0x109560d4 */
  if ((C.sf==C.of)) goto L_109560d4;
  /* 109560be push 0 */
  push32((uint32_t)(0x0u));
  /* 109560c0 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 109560c2 call ebx */
  call_ind((uint32_t)(EBX), 0x109560c4u);
  /* 109560c4 push 0x1095a574 */
  push32((uint32_t)(0x1095a574u));
  /* 109560c9 call dword ptr [0x109590cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590cc))), 0x109560cfu);
  /* 109560cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109560d2 call edi */
  call_ind((uint32_t)(EDI), 0x109560d4u);
L_109560d4:;
  /* 109560d4 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 109560d6 call ebp */
  call_ind((uint32_t)(EBP), 0x109560d8u);
  /* 109560d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109560db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109560dd je 0x10956106 */
  if (C.zf) goto L_10956106;
  /* 109560df push 0 */
  push32((uint32_t)(0x0u));
  /* 109560e1 call dword ptr [0x109590e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590e0))), 0x109560e7u);
  /* 109560e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109560ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109560ec je 0x10956106 */
  if (C.zf) goto L_10956106;
  /* 109560ee push 0 */
  push32((uint32_t)(0x0u));
  /* 109560f0 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 109560f2 call ebx */
  call_ind((uint32_t)(EBX), 0x109560f4u);
  /* 109560f4 push 0xad9c6 */
  push32((uint32_t)(0xad9c6u));
  /* 109560f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109560fb push 4 */
  push32((uint32_t)(0x4u));
  /* 109560fd call dword ptr [0x109590b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590b8))), 0x10956103u);
  /* 10956103 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10956106:;
  /* 10956106 pop edi */
  EDI = (pop32());
  /* 10956107 pop esi */
  ESI = (pop32());
  /* 10956108 pop ebp */
  EBP = (pop32());
  /* 10956109 pop ebx */
  EBX = (pop32());
  /* 1095610a pop ecx */
  ECX = (pop32());
  /* 1095610b ret  */
  ESPCHK(0x10951720u, _esp0);
  ESP += 4; return;
}

/* FUN_10006140 @ 0x10956140 (217 bytes, 57 insns) */
void f_10956140(void) {
  FTRACE(0x10956140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956140 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10956144 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956147 jne 0x109561d5 */
  if (!C.zf) goto L_109561d5;
  /* 1095614d call dword ptr [0x1095907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095907c))), 0x10956153u);
  /* 10956153 push 1 */
  push32((uint32_t)(0x1u));
  /* 10956155 mov dword ptr [0x1095b204], eax */
  w32((uint32_t)(0x1095b204), (EAX));
  /* 1095615a call 0x10956b74 */
  push32(0x1095615fu); f_10956b74();
  /* 1095615f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956161 pop ecx */
  ECX = (pop32());
  /* 10956162 je 0x109561a0 */
  if (C.zf) goto L_109561a0;
  /* 10956164 mov eax, dword ptr [0x1095b204] */
  EAX = (r32((uint32_t)(0x1095b204)));
  /* 10956169 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1095616b mov cl, byte ptr [0x1095b205] */
  CL = (r8((uint32_t)(0x1095b205)));
  /* 10956171 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10956176 shr dword ptr [0x1095b204], 0x10 */
  w32((uint32_t)(0x1095b204), (sh_shr((uint32_t)(r32((uint32_t)(0x1095b204))), (0x10u)&0x1f, 32)));
  /* 1095617d mov dword ptr [0x1095b20c], eax */
  w32((uint32_t)(0x1095b20c), (EAX));
  /* 10956182 mov dword ptr [0x1095b210], ecx */
  w32((uint32_t)(0x1095b210), (ECX));
  /* 10956188 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1095618b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095618d mov dword ptr [0x1095b208], eax */
  w32((uint32_t)(0x1095b208), (EAX));
  /* 10956192 call 0x10956407 */
  push32(0x10956197u); f_10956407();
  /* 10956197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956199 jne 0x109561a4 */
  if (!C.zf) goto L_109561a4;
  /* 1095619b call 0x10956bb0 */
  push32(0x109561a0u); f_10956bb0();
L_109561a0:;
  /* 109561a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109561a2 jmp 0x10956216 */
  goto L_10956216;
L_109561a4:;
  /* 109561a4 call dword ptr [0x10959078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959078))), 0x109561aau);
  /* 109561aa mov dword ptr [0x1095b758], eax */
  w32((uint32_t)(0x1095b758), (EAX));
  /* 109561af call 0x10956a42 */
  push32(0x109561b4u); f_10956a42();
  /* 109561b4 mov dword ptr [0x1095b1f0], eax */
  w32((uint32_t)(0x1095b1f0), (EAX));
  /* 109561b9 call 0x1095652c */
  push32(0x109561beu); f_1095652c();
  /* 109561be call 0x109567f5 */
  push32(0x109561c3u); f_109567f5();
  /* 109561c3 call 0x1095673c */
  push32(0x109561c8u); f_1095673c();
  /* 109561c8 call 0x109562e9 */
  push32(0x109561cdu); f_109562e9();
  /* 109561cd inc dword ptr [0x1095b1ec] */
  { uint32_t _r=(r32((uint32_t)(0x1095b1ec)))+1; w32((uint32_t)(0x1095b1ec), (_r)); fl_inc(_r,32); }
  /* 109561d3 jmp 0x10956213 */
  goto L_10956213;
L_109561d5:;
  /* 109561d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109561d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109561d9 jne 0x10956207 */
  if (!C.zf) goto L_10956207;
  /* 109561db cmp dword ptr [0x1095b1ec], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1095b1ec))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109561e1 jle 0x109561a0 */
  if ((C.zf||C.sf!=C.of)) goto L_109561a0;
  /* 109561e3 dec dword ptr [0x1095b1ec] */
  { uint32_t _r=(r32((uint32_t)(0x1095b1ec)))-1; w32((uint32_t)(0x1095b1ec), (_r)); fl_dec(_r,32); }
  /* 109561e9 cmp dword ptr [0x1095b23c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1095b23c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109561ef jne 0x109561f6 */
  if (!C.zf) goto L_109561f6;
  /* 109561f1 call 0x10956327 */
  push32(0x109561f6u); f_10956327();
L_109561f6:;
  /* 109561f6 call 0x109566e8 */
  push32(0x109561fbu); f_109566e8();
  /* 109561fb call 0x1095645b */
  push32(0x10956200u); f_1095645b();
  /* 10956200 call 0x10956bb0 */
  push32(0x10956205u); f_10956bb0();
  /* 10956205 jmp 0x10956213 */
  goto L_10956213;
L_10956207:;
  /* 10956207 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095620a jne 0x10956213 */
  if (!C.zf) goto L_10956213;
  /* 1095620c push ecx */
  push32((uint32_t)(ECX));
  /* 1095620d call 0x1095648c */
  push32(0x10956212u); f_1095648c();
  /* 10956212 pop ecx */
  ECX = (pop32());
L_10956213:;
  /* 10956213 push 1 */
  push32((uint32_t)(0x1u));
  /* 10956215 pop eax */
  EAX = (pop32());
L_10956216:;
  /* 10956216 ret 0xc */
  ESPCHK(0x10956140u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10956219 (157 bytes, 73 insns) */
void f_10956219(void) {
  FTRACE(0x10956219u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956219 push ebp */
  push32((uint32_t)(EBP));
  /* 1095621a mov ebp, esp */
  EBP = (ESP);
  /* 1095621c push ebx */
  push32((uint32_t)(EBX));
  /* 1095621d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10956220 push esi */
  push32((uint32_t)(ESI));
  /* 10956221 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10956224 push edi */
  push32((uint32_t)(EDI));
  /* 10956225 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10956228 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1095622a jne 0x10956235 */
  if (!C.zf) goto L_10956235;
  /* 1095622c cmp dword ptr [0x1095b1ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1095b1ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956233 jmp 0x1095625b */
  goto L_1095625b;
L_10956235:;
  /* 10956235 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956238 je 0x1095623f */
  if (C.zf) goto L_1095623f;
  /* 1095623a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095623d jne 0x10956261 */
  if (!C.zf) goto L_10956261;
L_1095623f:;
  /* 1095623f mov eax, dword ptr [0x1095b75c] */
  EAX = (r32((uint32_t)(0x1095b75c)));
  /* 10956244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956246 je 0x10956251 */
  if (C.zf) goto L_10956251;
  /* 10956248 push edi */
  push32((uint32_t)(EDI));
  /* 10956249 push esi */
  push32((uint32_t)(ESI));
  /* 1095624a push ebx */
  push32((uint32_t)(EBX));
  /* 1095624b call eax */
  call_ind((uint32_t)(EAX), 0x1095624du);
  /* 1095624d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095624f je 0x1095625d */
  if (C.zf) goto L_1095625d;
L_10956251:;
  /* 10956251 push edi */
  push32((uint32_t)(EDI));
  /* 10956252 push esi */
  push32((uint32_t)(ESI));
  /* 10956253 push ebx */
  push32((uint32_t)(EBX));
  /* 10956254 call 0x10956140 */
  push32(0x10956259u); f_10956140();
  /* 10956259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1095625b:;
  /* 1095625b jne 0x10956261 */
  if (!C.zf) goto L_10956261;
L_1095625d:;
  /* 1095625d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1095625f jmp 0x109562af */
  goto L_109562af;
L_10956261:;
  /* 10956261 push edi */
  push32((uint32_t)(EDI));
  /* 10956262 push esi */
  push32((uint32_t)(ESI));
  /* 10956263 push ebx */
  push32((uint32_t)(EBX));
  /* 10956264 call 0x10951700 */
  push32(0x10956269u); f_10951700();
  /* 10956269 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095626c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1095626f jne 0x1095627d */
  if (!C.zf) goto L_1095627d;
  /* 10956271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956273 jne 0x109562ac */
  if (!C.zf) goto L_109562ac;
  /* 10956275 push edi */
  push32((uint32_t)(EDI));
  /* 10956276 push eax */
  push32((uint32_t)(EAX));
  /* 10956277 push ebx */
  push32((uint32_t)(EBX));
  /* 10956278 call 0x10956140 */
  push32(0x1095627du); f_10956140();
L_1095627d:;
  /* 1095627d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1095627f je 0x10956286 */
  if (C.zf) goto L_10956286;
  /* 10956281 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956284 jne 0x109562ac */
  if (!C.zf) goto L_109562ac;
L_10956286:;
  /* 10956286 push edi */
  push32((uint32_t)(EDI));
  /* 10956287 push esi */
  push32((uint32_t)(ESI));
  /* 10956288 push ebx */
  push32((uint32_t)(EBX));
  /* 10956289 call 0x10956140 */
  push32(0x1095628eu); f_10956140();
  /* 1095628e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956290 jne 0x10956295 */
  if (!C.zf) goto L_10956295;
  /* 10956292 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10956295:;
  /* 10956295 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956299 je 0x109562ac */
  if (C.zf) goto L_109562ac;
  /* 1095629b mov eax, dword ptr [0x1095b75c] */
  EAX = (r32((uint32_t)(0x1095b75c)));
  /* 109562a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109562a2 je 0x109562ac */
  if (C.zf) goto L_109562ac;
  /* 109562a4 push edi */
  push32((uint32_t)(EDI));
  /* 109562a5 push esi */
  push32((uint32_t)(ESI));
  /* 109562a6 push ebx */
  push32((uint32_t)(EBX));
  /* 109562a7 call eax */
  call_ind((uint32_t)(EAX), 0x109562a9u);
  /* 109562a9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_109562ac:;
  /* 109562ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_109562af:;
  /* 109562af pop edi */
  EDI = (pop32());
  /* 109562b0 pop esi */
  ESI = (pop32());
  /* 109562b1 pop ebx */
  EBX = (pop32());
  /* 109562b2 pop ebp */
  EBP = (pop32());
  /* 109562b3 ret 0xc */
  ESPCHK(0x10956219u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x109562b6 (48 bytes, 15 insns) */
void f_109562b6(void) {
  FTRACE(0x109562b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109562b6 mov eax, dword ptr [0x1095b1f8] */
  EAX = (r32((uint32_t)(0x1095b1f8)));
  /* 109562bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109562be je 0x109562cd */
  if (C.zf) goto L_109562cd;
  /* 109562c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109562c2 jne 0x109562d2 */
  if (!C.zf) goto L_109562d2;
  /* 109562c4 cmp dword ptr [0x1095b1fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1095b1fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109562cb jne 0x109562d2 */
  if (!C.zf) goto L_109562d2;
L_109562cd:;
  /* 109562cd call 0x10956c25 */
  push32(0x109562d2u); f_10956c25();
L_109562d2:;
  /* 109562d2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 109562d6 call 0x10956c5e */
  push32(0x109562dbu); f_10956c5e();
  /* 109562db push 0xff */
  push32((uint32_t)(0xffu));
  /* 109562e0 call dword ptr [0x1095aa28] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095aa28))), 0x109562e6u);
  /* 109562e6 pop ecx */
  ECX = (pop32());
  /* 109562e7 pop ecx */
  ECX = (pop32());
  /* 109562e8 ret  */
  ESPCHK(0x109562b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e9 @ 0x109562e9 (45 bytes, 12 insns) */
void f_109562e9(void) {
  FTRACE(0x109562e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109562e9 mov eax, dword ptr [0x1095b754] */
  EAX = (r32((uint32_t)(0x1095b754)));
  /* 109562ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109562f0 je 0x109562f4 */
  if (C.zf) goto L_109562f4;
  /* 109562f2 call eax */
  call_ind((uint32_t)(EAX), 0x109562f4u);
L_109562f4:;
  /* 109562f4 push 0x1095a010 */
  push32((uint32_t)(0x1095a010u));
  /* 109562f9 push 0x1095a008 */
  push32((uint32_t)(0x1095a008u));
  /* 109562fe call 0x109563ed */
  push32(0x10956303u); f_109563ed();
  /* 10956303 push 0x1095a004 */
  push32((uint32_t)(0x1095a004u));
  /* 10956308 push 0x1095a000 */
  push32((uint32_t)(0x1095a000u));
  /* 1095630d call 0x109563ed */
  push32(0x10956312u); f_109563ed();
  /* 10956312 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956315 ret  */
  ESPCHK(0x109562e9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10956316 (17 bytes, 6 insns) */
void f_10956316(void) {
  FTRACE(0x10956316u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956318 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095631a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1095631e call 0x10956336 */
  push32(0x10956323u); f_10956336();
  /* 10956323 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956326 ret  */
  ESPCHK(0x10956316u, _esp0);
  ESP += 4; return;
}

/* FUN_10006327 @ 0x10956327 (15 bytes, 6 insns) */
void f_10956327(void) {
  FTRACE(0x10956327u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956327 push 1 */
  push32((uint32_t)(0x1u));
  /* 10956329 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095632b push 0 */
  push32((uint32_t)(0x0u));
  /* 1095632d call 0x10956336 */
  push32(0x10956332u); f_10956336();
  /* 10956332 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956335 ret  */
  ESPCHK(0x10956327u, _esp0);
  ESP += 4; return;
}

/* FUN_10006336 @ 0x10956336 (163 bytes, 53 insns) */
void f_10956336(void) {
  FTRACE(0x10956336u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956336 push edi */
  push32((uint32_t)(EDI));
  /* 10956337 call 0x109563db */
  push32(0x1095633cu); f_109563db();
  /* 1095633c push 1 */
  push32((uint32_t)(0x1u));
  /* 1095633e pop edi */
  EDI = (pop32());
  /* 1095633f cmp dword ptr [0x1095b240], edi */
  { uint32_t _a=(r32((uint32_t)(0x1095b240))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956345 jne 0x10956358 */
  if (!C.zf) goto L_10956358;
  /* 10956347 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1095634b call dword ptr [0x10959088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959088))), 0x10956351u);
  /* 10956351 push eax */
  push32((uint32_t)(EAX));
  /* 10956352 call dword ptr [0x10959084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959084))), 0x10956358u);
L_10956358:;
  /* 10956358 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095635d push ebx */
  push32((uint32_t)(EBX));
  /* 1095635e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10956362 mov dword ptr [0x1095b23c], edi */
  w32((uint32_t)(0x1095b23c), (EDI));
  /* 10956368 mov byte ptr [0x1095b238], bl */
  w8((uint32_t)(0x1095b238), (BL));
  /* 1095636e jne 0x109563ac */
  if (!C.zf) goto L_109563ac;
  /* 10956370 mov eax, dword ptr [0x1095b750] */
  EAX = (r32((uint32_t)(0x1095b750)));
  /* 10956375 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956377 je 0x1095639b */
  if (C.zf) goto L_1095639b;
  /* 10956379 mov ecx, dword ptr [0x1095b74c] */
  ECX = (r32((uint32_t)(0x1095b74c)));
  /* 1095637f push esi */
  push32((uint32_t)(ESI));
  /* 10956380 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10956383 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956385 jb 0x1095639a */
  if (C.cf) goto L_1095639a;
L_10956387:;
  /* 10956387 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10956389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095638b je 0x1095638f */
  if (C.zf) goto L_1095638f;
  /* 1095638d call eax */
  call_ind((uint32_t)(EAX), 0x1095638fu);
L_1095638f:;
  /* 1095638f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956392 cmp esi, dword ptr [0x1095b750] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1095b750))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956398 jae 0x10956387 */
  if (!C.cf) goto L_10956387;
L_1095639a:;
  /* 1095639a pop esi */
  ESI = (pop32());
L_1095639b:;
  /* 1095639b push 0x1095a018 */
  push32((uint32_t)(0x1095a018u));
  /* 109563a0 push 0x1095a014 */
  push32((uint32_t)(0x1095a014u));
  /* 109563a5 call 0x109563ed */
  push32(0x109563aau); f_109563ed();
  /* 109563aa pop ecx */
  ECX = (pop32());
  /* 109563ab pop ecx */
  ECX = (pop32());
L_109563ac:;
  /* 109563ac push 0x1095a020 */
  push32((uint32_t)(0x1095a020u));
  /* 109563b1 push 0x1095a01c */
  push32((uint32_t)(0x1095a01cu));
  /* 109563b6 call 0x109563ed */
  push32(0x109563bbu); f_109563ed();
  /* 109563bb pop ecx */
  ECX = (pop32());
  /* 109563bc pop ecx */
  ECX = (pop32());
  /* 109563bd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 109563bf pop ebx */
  EBX = (pop32());
  /* 109563c0 je 0x109563c9 */
  if (C.zf) goto L_109563c9;
  /* 109563c2 call 0x109563e4 */
  push32(0x109563c7u); f_109563e4();
  /* 109563c7 pop edi */
  EDI = (pop32());
  /* 109563c8 ret  */
  ESPCHK(0x10956336u, _esp0);
  ESP += 4; return;
L_109563c9:;
  /* 109563c9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 109563cd mov dword ptr [0x1095b240], edi */
  w32((uint32_t)(0x1095b240), (EDI));
  /* 109563d3 call dword ptr [0x10959080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959080))), 0x109563d9u);
  /* 109563d9 pop edi */
  EDI = (pop32());
  /* 109563da ret  */
  ESPCHK(0x10956336u, _esp0);
  ESP += 4; return;
}

/* FUN_100063db @ 0x109563db (9 bytes, 4 insns) */
void f_109563db(void) {
  FTRACE(0x109563dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109563db push 0xd */
  push32((uint32_t)(0xdu));
  /* 109563dd call 0x10956e46 */
  push32(0x109563e2u); f_10956e46();
  /* 109563e2 pop ecx */
  ECX = (pop32());
  /* 109563e3 ret  */
  ESPCHK(0x109563dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100063e4 @ 0x109563e4 (9 bytes, 4 insns) */
void f_109563e4(void) {
  FTRACE(0x109563e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109563e4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109563e6 call 0x10956ea7 */
  push32(0x109563ebu); f_10956ea7();
  /* 109563eb pop ecx */
  ECX = (pop32());
  /* 109563ec ret  */
  ESPCHK(0x109563e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100063ed @ 0x109563ed (26 bytes, 12 insns) */
void f_109563ed(void) {
  FTRACE(0x109563edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109563ed push esi */
  push32((uint32_t)(ESI));
  /* 109563ee mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_109563f2:;
  /* 109563f2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109563f6 jae 0x10956405 */
  if (!C.cf) goto L_10956405;
  /* 109563f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109563fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109563fc je 0x10956400 */
  if (C.zf) goto L_10956400;
  /* 109563fe call eax */
  call_ind((uint32_t)(EAX), 0x10956400u);
L_10956400:;
  /* 10956400 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956403 jmp 0x109563f2 */
  goto L_109563f2;
L_10956405:;
  /* 10956405 pop esi */
  ESI = (pop32());
  /* 10956406 ret  */
  ESPCHK(0x109563edu, _esp0);
  ESP += 4; return;
}

/* FUN_10006407 @ 0x10956407 (84 bytes, 32 insns) */
void f_10956407(void) {
  FTRACE(0x10956407u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956407 push esi */
  push32((uint32_t)(ESI));
  /* 10956408 call 0x10956db1 */
  push32(0x1095640du); f_10956db1();
  /* 1095640d call dword ptr [0x10959004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959004))), 0x10956413u);
  /* 10956413 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956416 mov dword ptr [0x1095aa2c], eax */
  w32((uint32_t)(0x1095aa2c), (EAX));
  /* 1095641b je 0x10956457 */
  if (C.zf) goto L_10956457;
  /* 1095641d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1095641f push 1 */
  push32((uint32_t)(0x1u));
  /* 10956421 call 0x10956ebc */
  push32(0x10956426u); f_10956ebc();
  /* 10956426 mov esi, eax */
  ESI = (EAX);
  /* 10956428 pop ecx */
  ECX = (pop32());
  /* 10956429 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1095642b pop ecx */
  ECX = (pop32());
  /* 1095642c je 0x10956457 */
  if (C.zf) goto L_10956457;
  /* 1095642e push esi */
  push32((uint32_t)(ESI));
  /* 1095642f push dword ptr [0x1095aa2c] */
  push32((uint32_t)(r32((uint32_t)(0x1095aa2c))));
  /* 10956435 call dword ptr [0x10959090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959090))), 0x1095643bu);
  /* 1095643b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095643d je 0x10956457 */
  if (C.zf) goto L_10956457;
  /* 1095643f push esi */
  push32((uint32_t)(ESI));
  /* 10956440 call 0x10956479 */
  push32(0x10956445u); f_10956479();
  /* 10956445 pop ecx */
  ECX = (pop32());
  /* 10956446 call dword ptr [0x1095908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095908c))), 0x1095644cu);
  /* 1095644c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10956450 push 1 */
  push32((uint32_t)(0x1u));
  /* 10956452 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10956454 pop eax */
  EAX = (pop32());
  /* 10956455 pop esi */
  ESI = (pop32());
  /* 10956456 ret  */
  ESPCHK(0x10956407u, _esp0);
  ESP += 4; return;
L_10956457:;
  /* 10956457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10956459 pop esi */
  ESI = (pop32());
  /* 1095645a ret  */
  ESPCHK(0x10956407u, _esp0);
  ESP += 4; return;
}

/* FUN_1000645b @ 0x1095645b (30 bytes, 8 insns) */
void f_1095645b(void) {
  FTRACE(0x1095645bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095645b call 0x10956dda */
  push32(0x10956460u); f_10956dda();
  /* 10956460 mov eax, dword ptr [0x1095aa2c] */
  EAX = (r32((uint32_t)(0x1095aa2c)));
  /* 10956465 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956468 je 0x10956478 */
  if (C.zf) goto L_10956478;
  /* 1095646a push eax */
  push32((uint32_t)(EAX));
  /* 1095646b call dword ptr [0x10959000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959000))), 0x10956471u);
  /* 10956471 or dword ptr [0x1095aa2c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1095aa2c)))|(0xffffffffu); w32((uint32_t)(0x1095aa2c), (_r)); fl_logic(_r,32); }
L_10956478:;
  /* 10956478 ret  */
  ESPCHK(0x1095645bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006479 @ 0x10956479 (19 bytes, 4 insns) */
void f_10956479(void) {
  FTRACE(0x10956479u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956479 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1095647d mov dword ptr [eax + 0x50], 0x1095aba8 */
  w32((uint32_t)(EAX + 0x50), (0x1095aba8u));
  /* 10956484 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 1095648b ret  */
  ESPCHK(0x10956479u, _esp0);
  ESP += 4; return;
}

/* FUN_1000648c @ 0x1095648c (160 bytes, 62 insns) */
void f_1095648c(void) {
  FTRACE(0x1095648cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095648c mov eax, dword ptr [0x1095aa2c] */
  EAX = (r32((uint32_t)(0x1095aa2c)));
  /* 10956491 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956494 je 0x1095652b */
  if (C.zf) goto L_1095652b;
  /* 1095649a push esi */
  push32((uint32_t)(ESI));
  /* 1095649b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1095649f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109564a1 jne 0x109564b0 */
  if (!C.zf) goto L_109564b0;
  /* 109564a3 push eax */
  push32((uint32_t)(EAX));
  /* 109564a4 call dword ptr [0x1095909c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095909c))), 0x109564aau);
  /* 109564aa mov esi, eax */
  ESI = (EAX);
  /* 109564ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109564ae je 0x1095651c */
  if (C.zf) goto L_1095651c;
L_109564b0:;
  /* 109564b0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 109564b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109564b5 je 0x109564be */
  if (C.zf) goto L_109564be;
  /* 109564b7 push eax */
  push32((uint32_t)(EAX));
  /* 109564b8 call 0x10956f49 */
  push32(0x109564bdu); f_10956f49();
  /* 109564bd pop ecx */
  ECX = (pop32());
L_109564be:;
  /* 109564be mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 109564c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109564c3 je 0x109564cc */
  if (C.zf) goto L_109564cc;
  /* 109564c5 push eax */
  push32((uint32_t)(EAX));
  /* 109564c6 call 0x10956f49 */
  push32(0x109564cbu); f_10956f49();
  /* 109564cb pop ecx */
  ECX = (pop32());
L_109564cc:;
  /* 109564cc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 109564cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109564d1 je 0x109564da */
  if (C.zf) goto L_109564da;
  /* 109564d3 push eax */
  push32((uint32_t)(EAX));
  /* 109564d4 call 0x10956f49 */
  push32(0x109564d9u); f_10956f49();
  /* 109564d9 pop ecx */
  ECX = (pop32());
L_109564da:;
  /* 109564da mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 109564dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109564df je 0x109564e8 */
  if (C.zf) goto L_109564e8;
  /* 109564e1 push eax */
  push32((uint32_t)(EAX));
  /* 109564e2 call 0x10956f49 */
  push32(0x109564e7u); f_10956f49();
  /* 109564e7 pop ecx */
  ECX = (pop32());
L_109564e8:;
  /* 109564e8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 109564eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109564ed je 0x109564f6 */
  if (C.zf) goto L_109564f6;
  /* 109564ef push eax */
  push32((uint32_t)(EAX));
  /* 109564f0 call 0x10956f49 */
  push32(0x109564f5u); f_10956f49();
  /* 109564f5 pop ecx */
  ECX = (pop32());
L_109564f6:;
  /* 109564f6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 109564f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109564fb je 0x10956504 */
  if (C.zf) goto L_10956504;
  /* 109564fd push eax */
  push32((uint32_t)(EAX));
  /* 109564fe call 0x10956f49 */
  push32(0x10956503u); f_10956f49();
  /* 10956503 pop ecx */
  ECX = (pop32());
L_10956504:;
  /* 10956504 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10956507 cmp eax, 0x1095aba8 */
  { uint32_t _a=(EAX),_b=(0x1095aba8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095650c je 0x10956515 */
  if (C.zf) goto L_10956515;
  /* 1095650e push eax */
  push32((uint32_t)(EAX));
  /* 1095650f call 0x10956f49 */
  push32(0x10956514u); f_10956f49();
  /* 10956514 pop ecx */
  ECX = (pop32());
L_10956515:;
  /* 10956515 push esi */
  push32((uint32_t)(ESI));
  /* 10956516 call 0x10956f49 */
  push32(0x1095651bu); f_10956f49();
  /* 1095651b pop ecx */
  ECX = (pop32());
L_1095651c:;
  /* 1095651c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095651e push dword ptr [0x1095aa2c] */
  push32((uint32_t)(r32((uint32_t)(0x1095aa2c))));
  /* 10956524 call dword ptr [0x10959090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959090))), 0x1095652au);
  /* 1095652a pop esi */
  ESI = (pop32());
L_1095652b:;
  /* 1095652b ret  */
  ESPCHK(0x1095648cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000652c @ 0x1095652c (444 bytes, 150 insns) */
void f_1095652c(void) {
  FTRACE(0x1095652cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095652c push ebp */
  push32((uint32_t)(EBP));
  /* 1095652d mov ebp, esp */
  EBP = (ESP);
  /* 1095652f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956532 push ebx */
  push32((uint32_t)(EBX));
  /* 10956533 push esi */
  push32((uint32_t)(ESI));
  /* 10956534 push edi */
  push32((uint32_t)(EDI));
  /* 10956535 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1095653a call 0x10956f91 */
  push32(0x1095653fu); f_10956f91();
  /* 1095653f mov esi, eax */
  ESI = (EAX);
  /* 10956541 pop ecx */
  ECX = (pop32());
  /* 10956542 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10956544 jne 0x1095654e */
  if (!C.zf) goto L_1095654e;
  /* 10956546 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10956548 call 0x109562b6 */
  push32(0x1095654du); f_109562b6();
  /* 1095654d pop ecx */
  ECX = (pop32());
L_1095654e:;
  /* 1095654e mov dword ptr [0x1095b640], esi */
  w32((uint32_t)(0x1095b640), (ESI));
  /* 10956554 mov dword ptr [0x1095b740], 0x20 */
  w32((uint32_t)(0x1095b740), (0x20u));
  /* 1095655e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10956564:;
  /* 10956564 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956566 jae 0x10956586 */
  if (!C.cf) goto L_10956586;
  /* 10956568 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1095656c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1095656f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10956573 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10956577 mov eax, dword ptr [0x1095b640] */
  EAX = (r32((uint32_t)(0x1095b640)));
  /* 1095657c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095657f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10956584 jmp 0x10956564 */
  goto L_10956564;
L_10956586:;
  /* 10956586 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10956589 push eax */
  push32((uint32_t)(EAX));
  /* 1095658a call dword ptr [0x10959094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959094))), 0x10956590u);
  /* 10956590 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10956595 je 0x1095666c */
  if (C.zf) goto L_1095666c;
  /* 1095659b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1095659e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109565a0 je 0x1095666c */
  if (C.zf) goto L_1095666c;
  /* 109565a6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 109565a8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 109565ab lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 109565ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109565b1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 109565b6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109565b8 jl 0x109565bc */
  if ((C.sf!=C.of)) goto L_109565bc;
  /* 109565ba mov edi, eax */
  EDI = (EAX);
L_109565bc:;
  /* 109565bc cmp dword ptr [0x1095b740], edi */
  { uint32_t _a=(r32((uint32_t)(0x1095b740))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109565c2 jge 0x1095661a */
  if ((C.sf==C.of)) goto L_1095661a;
  /* 109565c4 mov esi, 0x1095b644 */
  ESI = (0x1095b644u);
L_109565c9:;
  /* 109565c9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109565ce call 0x10956f91 */
  push32(0x109565d3u); f_10956f91();
  /* 109565d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109565d5 pop ecx */
  ECX = (pop32());
  /* 109565d6 je 0x10956614 */
  if (C.zf) goto L_10956614;
  /* 109565d8 add dword ptr [0x1095b740], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1095b740))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1095b740), (_r)); fl_add(_a,_b,_r,32); }
  /* 109565df mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 109565e1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_109565e7:;
  /* 109565e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109565e9 jae 0x10956607 */
  if (!C.cf) goto L_10956607;
  /* 109565eb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 109565ef or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 109565f2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 109565f6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 109565fa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 109565fc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109565ff add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10956605 jmp 0x109565e7 */
  goto L_109565e7;
L_10956607:;
  /* 10956607 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095660a cmp dword ptr [0x1095b740], edi */
  { uint32_t _a=(r32((uint32_t)(0x1095b740))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956610 jl 0x109565c9 */
  if ((C.sf!=C.of)) goto L_109565c9;
  /* 10956612 jmp 0x1095661a */
  goto L_1095661a;
L_10956614:;
  /* 10956614 mov edi, dword ptr [0x1095b740] */
  EDI = (r32((uint32_t)(0x1095b740)));
L_1095661a:;
  /* 1095661a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1095661c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1095661e jle 0x1095666c */
  if ((C.zf||C.sf!=C.of)) goto L_1095666c;
L_10956620:;
  /* 10956620 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10956623 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10956625 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956628 je 0x10956662 */
  if (C.zf) goto L_10956662;
  /* 1095662a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1095662c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1095662e je 0x10956662 */
  if (C.zf) goto L_10956662;
  /* 10956630 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10956632 jne 0x1095663f */
  if (!C.zf) goto L_1095663f;
  /* 10956634 push ecx */
  push32((uint32_t)(ECX));
  /* 10956635 call dword ptr [0x109590a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590a8))), 0x1095663bu);
  /* 1095663b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095663d je 0x10956662 */
  if (C.zf) goto L_10956662;
L_1095663f:;
  /* 1095663f mov ecx, esi */
  ECX = (ESI);
  /* 10956641 mov eax, esi */
  EAX = (ESI);
  /* 10956643 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10956646 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10956649 mov ecx, dword ptr [ecx*4 + 0x1095b640] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1095b640)));
  /* 10956650 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10956653 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10956656 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10956659 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1095665b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1095665d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1095665f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10956662:;
  /* 10956662 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10956666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10956667 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10956668 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095666a jl 0x10956620 */
  if ((C.sf!=C.of)) goto L_10956620;
L_1095666c:;
  /* 1095666c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1095666e:;
  /* 1095666e mov ecx, dword ptr [0x1095b640] */
  ECX = (r32((uint32_t)(0x1095b640)));
  /* 10956674 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10956677 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095667b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1095667e jne 0x109566cd */
  if (!C.zf) goto L_109566cd;
  /* 10956680 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10956682 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10956686 jne 0x1095668d */
  if (!C.zf) goto L_1095668d;
  /* 10956688 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1095668a pop eax */
  EAX = (pop32());
  /* 1095668b jmp 0x10956697 */
  goto L_10956697;
L_1095668d:;
  /* 1095668d mov eax, ebx */
  EAX = (EBX);
  /* 1095668f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10956690 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10956692 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956694 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10956697:;
  /* 10956697 push eax */
  push32((uint32_t)(EAX));
  /* 10956698 call dword ptr [0x109590a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590a4))), 0x1095669eu);
  /* 1095669e mov edi, eax */
  EDI = (EAX);
  /* 109566a0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109566a3 je 0x109566bc */
  if (C.zf) goto L_109566bc;
  /* 109566a5 push edi */
  push32((uint32_t)(EDI));
  /* 109566a6 call dword ptr [0x109590a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590a8))), 0x109566acu);
  /* 109566ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109566ae je 0x109566bc */
  if (C.zf) goto L_109566bc;
  /* 109566b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109566b5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 109566b7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109566ba jne 0x109566c2 */
  if (!C.zf) goto L_109566c2;
L_109566bc:;
  /* 109566bc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 109566c0 jmp 0x109566d1 */
  goto L_109566d1;
L_109566c2:;
  /* 109566c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109566c5 jne 0x109566d1 */
  if (!C.zf) goto L_109566d1;
  /* 109566c7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 109566cb jmp 0x109566d1 */
  goto L_109566d1;
L_109566cd:;
  /* 109566cd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_109566d1:;
  /* 109566d1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 109566d2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109566d5 jl 0x1095666e */
  if ((C.sf!=C.of)) goto L_1095666e;
  /* 109566d7 push dword ptr [0x1095b740] */
  push32((uint32_t)(r32((uint32_t)(0x1095b740))));
  /* 109566dd call dword ptr [0x109590a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590a0))), 0x109566e3u);
  /* 109566e3 pop edi */
  EDI = (pop32());
  /* 109566e4 pop esi */
  ESI = (pop32());
  /* 109566e5 pop ebx */
  EBX = (pop32());
  /* 109566e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109566e7 ret  */
  ESPCHK(0x1095652cu, _esp0);
  ESP += 4; return;
}

/* FUN_100066e8 @ 0x109566e8 (84 bytes, 33 insns) */
void f_109566e8(void) {
  FTRACE(0x109566e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109566e8 push ebx */
  push32((uint32_t)(EBX));
  /* 109566e9 push esi */
  push32((uint32_t)(ESI));
  /* 109566ea push edi */
  push32((uint32_t)(EDI));
  /* 109566eb mov esi, 0x1095b640 */
  ESI = (0x1095b640u);
L_109566f0:;
  /* 109566f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109566f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109566f4 je 0x1095672d */
  if (C.zf) goto L_1095672d;
  /* 109566f6 mov edi, eax */
  EDI = (EAX);
  /* 109566f8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109566fd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109566ff jae 0x10956722 */
  if (!C.cf) goto L_10956722;
  /* 10956701 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10956704:;
  /* 10956704 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956708 je 0x10956711 */
  if (C.zf) goto L_10956711;
  /* 1095670a push ebx */
  push32((uint32_t)(EBX));
  /* 1095670b call dword ptr [0x10959098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959098))), 0x10956711u);
L_10956711:;
  /* 10956711 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10956713 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956716 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095671b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095671e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956720 jb 0x10956704 */
  if (C.cf) goto L_10956704;
L_10956722:;
  /* 10956722 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956724 call 0x10956f49 */
  push32(0x10956729u); f_10956f49();
  /* 10956729 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1095672c pop ecx */
  ECX = (pop32());
L_1095672d:;
  /* 1095672d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956730 cmp esi, 0x1095b740 */
  { uint32_t _a=(ESI),_b=(0x1095b740u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956736 jl 0x109566f0 */
  if ((C.sf!=C.of)) goto L_109566f0;
  /* 10956738 pop edi */
  EDI = (pop32());
  /* 10956739 pop esi */
  ESI = (pop32());
  /* 1095673a pop ebx */
  EBX = (pop32());
  /* 1095673b ret  */
  ESPCHK(0x109566e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000673c @ 0x1095673c (185 bytes, 71 insns) */
void f_1095673c(void) {
  FTRACE(0x1095673cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095673c push ebx */
  push32((uint32_t)(EBX));
  /* 1095673d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1095673f cmp dword ptr [0x1095b748], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1095b748))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956745 push esi */
  push32((uint32_t)(ESI));
  /* 10956746 push edi */
  push32((uint32_t)(EDI));
  /* 10956747 jne 0x1095674e */
  if (!C.zf) goto L_1095674e;
  /* 10956749 call 0x10957563 */
  push32(0x1095674eu); f_10957563();
L_1095674e:;
  /* 1095674e mov esi, dword ptr [0x1095b1f0] */
  ESI = (r32((uint32_t)(0x1095b1f0)));
  /* 10956754 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10956756:;
  /* 10956756 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10956758 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095675a je 0x1095676e */
  if (C.zf) goto L_1095676e;
  /* 1095675c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095675e je 0x10956761 */
  if (C.zf) goto L_10956761;
  /* 10956760 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10956761:;
  /* 10956761 push esi */
  push32((uint32_t)(ESI));
  /* 10956762 call 0x10957110 */
  push32(0x10956767u); f_10957110();
  /* 10956767 pop ecx */
  ECX = (pop32());
  /* 10956768 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1095676c jmp 0x10956756 */
  goto L_10956756;
L_1095676e:;
  /* 1095676e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10956775 push eax */
  push32((uint32_t)(EAX));
  /* 10956776 call 0x10956f91 */
  push32(0x1095677bu); f_10956f91();
  /* 1095677b mov esi, eax */
  ESI = (EAX);
  /* 1095677d pop ecx */
  ECX = (pop32());
  /* 1095677e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956780 mov dword ptr [0x1095b220], esi */
  w32((uint32_t)(0x1095b220), (ESI));
  /* 10956786 jne 0x10956790 */
  if (!C.zf) goto L_10956790;
  /* 10956788 push 9 */
  push32((uint32_t)(0x9u));
  /* 1095678a call 0x109562b6 */
  push32(0x1095678fu); f_109562b6();
  /* 1095678f pop ecx */
  ECX = (pop32());
L_10956790:;
  /* 10956790 mov edi, dword ptr [0x1095b1f0] */
  EDI = (r32((uint32_t)(0x1095b1f0)));
  /* 10956796 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956798 je 0x109567d3 */
  if (C.zf) goto L_109567d3;
  /* 1095679a push ebp */
  push32((uint32_t)(EBP));
L_1095679b:;
  /* 1095679b push edi */
  push32((uint32_t)(EDI));
  /* 1095679c call 0x10957110 */
  push32(0x109567a1u); f_10957110();
  /* 109567a1 mov ebp, eax */
  EBP = (EAX);
  /* 109567a3 pop ecx */
  ECX = (pop32());
  /* 109567a4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 109567a5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109567a8 je 0x109567cc */
  if (C.zf) goto L_109567cc;
  /* 109567aa push ebp */
  push32((uint32_t)(EBP));
  /* 109567ab call 0x10956f91 */
  push32(0x109567b0u); f_10956f91();
  /* 109567b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109567b2 pop ecx */
  ECX = (pop32());
  /* 109567b3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 109567b5 jne 0x109567bf */
  if (!C.zf) goto L_109567bf;
  /* 109567b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 109567b9 call 0x109562b6 */
  push32(0x109567beu); f_109562b6();
  /* 109567be pop ecx */
  ECX = (pop32());
L_109567bf:;
  /* 109567bf push edi */
  push32((uint32_t)(EDI));
  /* 109567c0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109567c2 call 0x10957020 */
  push32(0x109567c7u); f_10957020();
  /* 109567c7 pop ecx */
  ECX = (pop32());
  /* 109567c8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109567cb pop ecx */
  ECX = (pop32());
L_109567cc:;
  /* 109567cc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109567ce cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109567d0 jne 0x1095679b */
  if (!C.zf) goto L_1095679b;
  /* 109567d2 pop ebp */
  EBP = (pop32());
L_109567d3:;
  /* 109567d3 push dword ptr [0x1095b1f0] */
  push32((uint32_t)(r32((uint32_t)(0x1095b1f0))));
  /* 109567d9 call 0x10956f49 */
  push32(0x109567deu); f_10956f49();
  /* 109567de pop ecx */
  ECX = (pop32());
  /* 109567df mov dword ptr [0x1095b1f0], ebx */
  w32((uint32_t)(0x1095b1f0), (EBX));
  /* 109567e5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 109567e7 pop edi */
  EDI = (pop32());
  /* 109567e8 pop esi */
  ESI = (pop32());
  /* 109567e9 mov dword ptr [0x1095b744], 1 */
  w32((uint32_t)(0x1095b744), (0x1u));
  /* 109567f3 pop ebx */
  EBX = (pop32());
  /* 109567f4 ret  */
  ESPCHK(0x1095673cu, _esp0);
  ESP += 4; return;
}

/* FUN_100067f5 @ 0x109567f5 (153 bytes, 62 insns) */
void f_109567f5(void) {
  FTRACE(0x109567f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109567f5 push ebp */
  push32((uint32_t)(EBP));
  /* 109567f6 mov ebp, esp */
  EBP = (ESP);
  /* 109567f8 push ecx */
  push32((uint32_t)(ECX));
  /* 109567f9 push ecx */
  push32((uint32_t)(ECX));
  /* 109567fa push ebx */
  push32((uint32_t)(EBX));
  /* 109567fb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109567fd cmp dword ptr [0x1095b748], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1095b748))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956803 push esi */
  push32((uint32_t)(ESI));
  /* 10956804 push edi */
  push32((uint32_t)(EDI));
  /* 10956805 jne 0x1095680c */
  if (!C.zf) goto L_1095680c;
  /* 10956807 call 0x10957563 */
  push32(0x1095680cu); f_10957563();
L_1095680c:;
  /* 1095680c mov esi, 0x1095b244 */
  ESI = (0x1095b244u);
  /* 10956811 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10956816 push esi */
  push32((uint32_t)(ESI));
  /* 10956817 push ebx */
  push32((uint32_t)(EBX));
  /* 10956818 call dword ptr [0x10959074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959074))), 0x1095681eu);
  /* 1095681e mov eax, dword ptr [0x1095b758] */
  EAX = (r32((uint32_t)(0x1095b758)));
  /* 10956823 mov dword ptr [0x1095b230], esi */
  w32((uint32_t)(0x1095b230), (ESI));
  /* 10956829 mov edi, esi */
  EDI = (ESI);
  /* 1095682b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095682d je 0x10956831 */
  if (C.zf) goto L_10956831;
  /* 1095682f mov edi, eax */
  EDI = (EAX);
L_10956831:;
  /* 10956831 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10956834 push eax */
  push32((uint32_t)(EAX));
  /* 10956835 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10956838 push eax */
  push32((uint32_t)(EAX));
  /* 10956839 push ebx */
  push32((uint32_t)(EBX));
  /* 1095683a push ebx */
  push32((uint32_t)(EBX));
  /* 1095683b push edi */
  push32((uint32_t)(EDI));
  /* 1095683c call 0x1095688e */
  push32(0x10956841u); f_1095688e();
  /* 10956841 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10956844 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10956847 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1095684a push eax */
  push32((uint32_t)(EAX));
  /* 1095684b call 0x10956f91 */
  push32(0x10956850u); f_10956f91();
  /* 10956850 mov esi, eax */
  ESI = (EAX);
  /* 10956852 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956855 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956857 jne 0x10956861 */
  if (!C.zf) goto L_10956861;
  /* 10956859 push 8 */
  push32((uint32_t)(0x8u));
  /* 1095685b call 0x109562b6 */
  push32(0x10956860u); f_109562b6();
  /* 10956860 pop ecx */
  ECX = (pop32());
L_10956861:;
  /* 10956861 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10956864 push eax */
  push32((uint32_t)(EAX));
  /* 10956865 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10956868 push eax */
  push32((uint32_t)(EAX));
  /* 10956869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1095686c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1095686f push eax */
  push32((uint32_t)(EAX));
  /* 10956870 push esi */
  push32((uint32_t)(ESI));
  /* 10956871 push edi */
  push32((uint32_t)(EDI));
  /* 10956872 call 0x1095688e */
  push32(0x10956877u); f_1095688e();
  /* 10956877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1095687a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1095687d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1095687e mov dword ptr [0x1095b218], esi */
  w32((uint32_t)(0x1095b218), (ESI));
  /* 10956884 pop edi */
  EDI = (pop32());
  /* 10956885 pop esi */
  ESI = (pop32());
  /* 10956886 mov dword ptr [0x1095b214], eax */
  w32((uint32_t)(0x1095b214), (EAX));
  /* 1095688b pop ebx */
  EBX = (pop32());
  /* 1095688c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1095688d ret  */
  ESPCHK(0x109567f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000688e @ 0x1095688e (436 bytes, 187 insns) */
void f_1095688e(void) {
  FTRACE(0x1095688eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095688e push ebp */
  push32((uint32_t)(EBP));
  /* 1095688f mov ebp, esp */
  EBP = (ESP);
  /* 10956891 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10956894 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10956897 push ebx */
  push32((uint32_t)(EBX));
  /* 10956898 push esi */
  push32((uint32_t)(ESI));
  /* 10956899 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1095689c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1095689f push edi */
  push32((uint32_t)(EDI));
  /* 109568a0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 109568a3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 109568a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109568ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109568ae je 0x109568b8 */
  if (C.zf) goto L_109568b8;
  /* 109568b0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 109568b2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109568b5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_109568b8:;
  /* 109568b8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109568bb jne 0x10956901 */
  if (!C.zf) goto L_10956901;
L_109568bd:;
  /* 109568bd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 109568c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109568c1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109568c4 je 0x109568ef */
  if (C.zf) goto L_109568ef;
  /* 109568c6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109568c8 je 0x109568ef */
  if (C.zf) goto L_109568ef;
  /* 109568ca movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 109568cd test byte ptr [edx + 0x1095b521], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1095b521)))&(0x4u); fl_logic(_r,8); }
  /* 109568d4 je 0x109568e2 */
  if (C.zf) goto L_109568e2;
  /* 109568d6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109568d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109568da je 0x109568e2 */
  if (C.zf) goto L_109568e2;
  /* 109568dc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109568de mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109568e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109568e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109568e2:;
  /* 109568e2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109568e4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109568e6 je 0x109568bd */
  if (C.zf) goto L_109568bd;
  /* 109568e8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109568ea mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109568ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109568ed jmp 0x109568bd */
  goto L_109568bd;
L_109568ef:;
  /* 109568ef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109568f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109568f3 je 0x109568f9 */
  if (C.zf) goto L_109568f9;
  /* 109568f5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 109568f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109568f9:;
  /* 109568f9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109568fc jne 0x10956944 */
  if (!C.zf) goto L_10956944;
  /* 109568fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109568ff jmp 0x10956944 */
  goto L_10956944;
L_10956901:;
  /* 10956901 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10956903 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10956905 je 0x1095690c */
  if (C.zf) goto L_1095690c;
  /* 10956907 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10956909 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1095690b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1095690c:;
  /* 1095690c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1095690e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1095690f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10956912 test byte ptr [ebx + 0x1095b521], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1095b521)))&(0x4u); fl_logic(_r,8); }
  /* 10956919 je 0x10956927 */
  if (C.zf) goto L_10956927;
  /* 1095691b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1095691d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1095691f je 0x10956926 */
  if (C.zf) goto L_10956926;
  /* 10956921 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10956923 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10956925 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10956926:;
  /* 10956926 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10956927:;
  /* 10956927 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095692a je 0x10956935 */
  if (C.zf) goto L_10956935;
  /* 1095692c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1095692e je 0x10956939 */
  if (C.zf) goto L_10956939;
  /* 10956930 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956933 jne 0x10956901 */
  if (!C.zf) goto L_10956901;
L_10956935:;
  /* 10956935 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10956937 jne 0x1095693c */
  if (!C.zf) goto L_1095693c;
L_10956939:;
  /* 10956939 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1095693a jmp 0x10956944 */
  goto L_10956944;
L_1095693c:;
  /* 1095693c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1095693e je 0x10956944 */
  if (C.zf) goto L_10956944;
  /* 10956940 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10956944:;
  /* 10956944 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10956948:;
  /* 10956948 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095694b je 0x10956a31 */
  if (C.zf) goto L_10956a31;
L_10956951:;
  /* 10956951 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10956953 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956956 je 0x1095695d */
  if (C.zf) goto L_1095695d;
  /* 10956958 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095695b jne 0x10956960 */
  if (!C.zf) goto L_10956960;
L_1095695d:;
  /* 1095695d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1095695e jmp 0x10956951 */
  goto L_10956951;
L_10956960:;
  /* 10956960 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956963 je 0x10956a31 */
  if (C.zf) goto L_10956a31;
  /* 10956969 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1095696b je 0x10956975 */
  if (C.zf) goto L_10956975;
  /* 1095696d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1095696f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956972 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10956975:;
  /* 10956975 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10956978 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1095697a:;
  /* 1095697a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10956981 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10956983:;
  /* 10956983 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956986 jne 0x1095698c */
  if (!C.zf) goto L_1095698c;
  /* 10956988 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956989 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1095698a jmp 0x10956983 */
  goto L_10956983;
L_1095698c:;
  /* 1095698c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095698f jne 0x109569bd */
  if (!C.zf) goto L_109569bd;
  /* 10956991 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10956994 jne 0x109569bb */
  if (!C.zf) goto L_109569bb;
  /* 10956996 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10956998 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095699b je 0x109569aa */
  if (C.zf) goto L_109569aa;
  /* 1095699d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109569a1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 109569a4 jne 0x109569aa */
  if (!C.zf) goto L_109569aa;
  /* 109569a6 mov eax, edx */
  EAX = (EDX);
  /* 109569a8 jmp 0x109569ad */
  goto L_109569ad;
L_109569aa:;
  /* 109569aa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_109569ad:;
  /* 109569ad mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 109569b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109569b2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109569b5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 109569b8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_109569bb:;
  /* 109569bb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_109569bd:;
  /* 109569bd mov edx, ebx */
  EDX = (EBX);
  /* 109569bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109569c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109569c2 je 0x109569d2 */
  if (C.zf) goto L_109569d2;
  /* 109569c4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_109569c5:;
  /* 109569c5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109569c7 je 0x109569cd */
  if (C.zf) goto L_109569cd;
  /* 109569c9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 109569cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109569cd:;
  /* 109569cd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109569cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109569d0 jne 0x109569c5 */
  if (!C.zf) goto L_109569c5;
L_109569d2:;
  /* 109569d2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109569d4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109569d6 je 0x10956a22 */
  if (C.zf) goto L_10956a22;
  /* 109569d8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109569dc jne 0x109569e8 */
  if (!C.zf) goto L_109569e8;
  /* 109569de cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109569e1 je 0x10956a22 */
  if (C.zf) goto L_10956a22;
  /* 109569e3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109569e6 je 0x10956a22 */
  if (C.zf) goto L_10956a22;
L_109569e8:;
  /* 109569e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109569ec je 0x10956a1c */
  if (C.zf) goto L_10956a1c;
  /* 109569ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109569f0 je 0x10956a0b */
  if (C.zf) goto L_10956a0b;
  /* 109569f2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 109569f5 test byte ptr [ebx + 0x1095b521], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1095b521)))&(0x4u); fl_logic(_r,8); }
  /* 109569fc je 0x10956a04 */
  if (C.zf) goto L_10956a04;
  /* 109569fe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10956a00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10956a01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956a02 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10956a04:;
  /* 10956a04 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10956a06 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10956a08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10956a09 jmp 0x10956a1a */
  goto L_10956a1a;
L_10956a0b:;
  /* 10956a0b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10956a0e test byte ptr [edx + 0x1095b521], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1095b521)))&(0x4u); fl_logic(_r,8); }
  /* 10956a15 je 0x10956a1a */
  if (C.zf) goto L_10956a1a;
  /* 10956a17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956a18 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10956a1a:;
  /* 10956a1a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10956a1c:;
  /* 10956a1c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956a1d jmp 0x1095697a */
  goto L_1095697a;
L_10956a22:;
  /* 10956a22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10956a24 je 0x10956a2a */
  if (C.zf) goto L_10956a2a;
  /* 10956a26 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10956a29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10956a2a:;
  /* 10956a2a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10956a2c jmp 0x10956948 */
  goto L_10956948;
L_10956a31:;
  /* 10956a31 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10956a33 je 0x10956a38 */
  if (C.zf) goto L_10956a38;
  /* 10956a35 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10956a38:;
  /* 10956a38 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10956a3b pop edi */
  EDI = (pop32());
  /* 10956a3c pop esi */
  ESI = (pop32());
  /* 10956a3d pop ebx */
  EBX = (pop32());
  /* 10956a3e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10956a40 pop ebp */
  EBP = (pop32());
  /* 10956a41 ret  */
  ESPCHK(0x1095688eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006a42 @ 0x10956a42 (306 bytes, 132 insns) */
void f_10956a42(void) {
  FTRACE(0x10956a42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956a42 push ecx */
  push32((uint32_t)(ECX));
  /* 10956a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10956a44 mov eax, dword ptr [0x1095b348] */
  EAX = (r32((uint32_t)(0x1095b348)));
  /* 10956a49 push ebx */
  push32((uint32_t)(EBX));
  /* 10956a4a push ebp */
  push32((uint32_t)(EBP));
  /* 10956a4b mov ebp, dword ptr [0x10959060] */
  EBP = (r32((uint32_t)(0x10959060)));
  /* 10956a51 push esi */
  push32((uint32_t)(ESI));
  /* 10956a52 push edi */
  push32((uint32_t)(EDI));
  /* 10956a53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10956a55 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10956a57 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10956a59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956a5b jne 0x10956a90 */
  if (!C.zf) goto L_10956a90;
  /* 10956a5d call ebp */
  call_ind((uint32_t)(EBP), 0x10956a5fu);
  /* 10956a5f mov esi, eax */
  ESI = (EAX);
  /* 10956a61 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956a63 je 0x10956a71 */
  if (C.zf) goto L_10956a71;
  /* 10956a65 mov dword ptr [0x1095b348], 1 */
  w32((uint32_t)(0x1095b348), (0x1u));
  /* 10956a6f jmp 0x10956a99 */
  goto L_10956a99;
L_10956a71:;
  /* 10956a71 call dword ptr [0x10959064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959064))), 0x10956a77u);
  /* 10956a77 mov edi, eax */
  EDI = (EAX);
  /* 10956a79 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956a7b je 0x10956b6b */
  if (C.zf) goto L_10956b6b;
  /* 10956a81 mov dword ptr [0x1095b348], 2 */
  w32((uint32_t)(0x1095b348), (0x2u));
  /* 10956a8b jmp 0x10956b1f */
  goto L_10956b1f;
L_10956a90:;
  /* 10956a90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956a93 jne 0x10956b1a */
  if (!C.zf) goto L_10956b1a;
L_10956a99:;
  /* 10956a99 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956a9b jne 0x10956aa9 */
  if (!C.zf) goto L_10956aa9;
  /* 10956a9d call ebp */
  call_ind((uint32_t)(EBP), 0x10956a9fu);
  /* 10956a9f mov esi, eax */
  ESI = (EAX);
  /* 10956aa1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956aa3 je 0x10956b6b */
  if (C.zf) goto L_10956b6b;
L_10956aa9:;
  /* 10956aa9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10956aac mov eax, esi */
  EAX = (ESI);
  /* 10956aae je 0x10956abe */
  if (C.zf) goto L_10956abe;
L_10956ab0:;
  /* 10956ab0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956ab1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956ab2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10956ab5 jne 0x10956ab0 */
  if (!C.zf) goto L_10956ab0;
  /* 10956ab7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956ab8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956ab9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10956abc jne 0x10956ab0 */
  if (!C.zf) goto L_10956ab0;
L_10956abe:;
  /* 10956abe sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956ac0 mov edi, dword ptr [0x10959068] */
  EDI = (r32((uint32_t)(0x10959068)));
  /* 10956ac6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10956ac8 push ebx */
  push32((uint32_t)(EBX));
  /* 10956ac9 push ebx */
  push32((uint32_t)(EBX));
  /* 10956aca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956acb push ebx */
  push32((uint32_t)(EBX));
  /* 10956acc push ebx */
  push32((uint32_t)(EBX));
  /* 10956acd push eax */
  push32((uint32_t)(EAX));
  /* 10956ace push esi */
  push32((uint32_t)(ESI));
  /* 10956acf push ebx */
  push32((uint32_t)(EBX));
  /* 10956ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 10956ad1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10956ad5 call edi */
  call_ind((uint32_t)(EDI), 0x10956ad7u);
  /* 10956ad7 mov ebp, eax */
  EBP = (EAX);
  /* 10956ad9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956adb je 0x10956b0f */
  if (C.zf) goto L_10956b0f;
  /* 10956add push ebp */
  push32((uint32_t)(EBP));
  /* 10956ade call 0x10956f91 */
  push32(0x10956ae3u); f_10956f91();
  /* 10956ae3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956ae5 pop ecx */
  ECX = (pop32());
  /* 10956ae6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10956aea je 0x10956b0f */
  if (C.zf) goto L_10956b0f;
  /* 10956aec push ebx */
  push32((uint32_t)(EBX));
  /* 10956aed push ebx */
  push32((uint32_t)(EBX));
  /* 10956aee push ebp */
  push32((uint32_t)(EBP));
  /* 10956aef push eax */
  push32((uint32_t)(EAX));
  /* 10956af0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10956af4 push esi */
  push32((uint32_t)(ESI));
  /* 10956af5 push ebx */
  push32((uint32_t)(EBX));
  /* 10956af6 push ebx */
  push32((uint32_t)(EBX));
  /* 10956af7 call edi */
  call_ind((uint32_t)(EDI), 0x10956af9u);
  /* 10956af9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956afb jne 0x10956b0b */
  if (!C.zf) goto L_10956b0b;
  /* 10956afd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10956b01 call 0x10956f49 */
  push32(0x10956b06u); f_10956f49();
  /* 10956b06 pop ecx */
  ECX = (pop32());
  /* 10956b07 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10956b0b:;
  /* 10956b0b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10956b0f:;
  /* 10956b0f push esi */
  push32((uint32_t)(ESI));
  /* 10956b10 call dword ptr [0x1095906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095906c))), 0x10956b16u);
  /* 10956b16 mov eax, ebx */
  EAX = (EBX);
  /* 10956b18 jmp 0x10956b6d */
  goto L_10956b6d;
L_10956b1a:;
  /* 10956b1a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956b1d jne 0x10956b6b */
  if (!C.zf) goto L_10956b6b;
L_10956b1f:;
  /* 10956b1f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956b21 jne 0x10956b2f */
  if (!C.zf) goto L_10956b2f;
  /* 10956b23 call dword ptr [0x10959064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959064))), 0x10956b29u);
  /* 10956b29 mov edi, eax */
  EDI = (EAX);
  /* 10956b2b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956b2d je 0x10956b6b */
  if (C.zf) goto L_10956b6b;
L_10956b2f:;
  /* 10956b2f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956b31 mov eax, edi */
  EAX = (EDI);
  /* 10956b33 je 0x10956b3f */
  if (C.zf) goto L_10956b3f;
L_10956b35:;
  /* 10956b35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956b36 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956b38 jne 0x10956b35 */
  if (!C.zf) goto L_10956b35;
  /* 10956b3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956b3b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10956b3d jne 0x10956b35 */
  if (!C.zf) goto L_10956b35;
L_10956b3f:;
  /* 10956b3f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956b41 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956b42 mov ebp, eax */
  EBP = (EAX);
  /* 10956b44 push ebp */
  push32((uint32_t)(EBP));
  /* 10956b45 call 0x10956f91 */
  push32(0x10956b4au); f_10956f91();
  /* 10956b4a mov esi, eax */
  ESI = (EAX);
  /* 10956b4c pop ecx */
  ECX = (pop32());
  /* 10956b4d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956b4f jne 0x10956b55 */
  if (!C.zf) goto L_10956b55;
  /* 10956b51 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10956b53 jmp 0x10956b60 */
  goto L_10956b60;
L_10956b55:;
  /* 10956b55 push ebp */
  push32((uint32_t)(EBP));
  /* 10956b56 push edi */
  push32((uint32_t)(EDI));
  /* 10956b57 push esi */
  push32((uint32_t)(ESI));
  /* 10956b58 call 0x10957580 */
  push32(0x10956b5du); f_10957580();
  /* 10956b5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10956b60:;
  /* 10956b60 push edi */
  push32((uint32_t)(EDI));
  /* 10956b61 call dword ptr [0x10959070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959070))), 0x10956b67u);
  /* 10956b67 mov eax, esi */
  EAX = (ESI);
  /* 10956b69 jmp 0x10956b6d */
  goto L_10956b6d;
L_10956b6b:;
  /* 10956b6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10956b6d:;
  /* 10956b6d pop edi */
  EDI = (pop32());
  /* 10956b6e pop esi */
  ESI = (pop32());
  /* 10956b6f pop ebp */
  EBP = (pop32());
  /* 10956b70 pop ebx */
  EBX = (pop32());
  /* 10956b71 pop ecx */
  ECX = (pop32());
  /* 10956b72 pop ecx */
  ECX = (pop32());
  /* 10956b73 ret  */
  ESPCHK(0x10956a42u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b74 @ 0x10956b74 (60 bytes, 20 insns) */
void f_10956b74(void) {
  FTRACE(0x10956b74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10956b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956b78 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956b7c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10956b81 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10956b84 push eax */
  push32((uint32_t)(EAX));
  /* 10956b85 call dword ptr [0x10959058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959058))), 0x10956b8bu);
  /* 10956b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956b8d mov dword ptr [0x1095b628], eax */
  w32((uint32_t)(0x1095b628), (EAX));
  /* 10956b92 je 0x10956ba9 */
  if (C.zf) goto L_10956ba9;
  /* 10956b94 call 0x109578b5 */
  push32(0x10956b99u); f_109578b5();
  /* 10956b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956b9b jne 0x10956bac */
  if (!C.zf) goto L_10956bac;
  /* 10956b9d push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10956ba3 call dword ptr [0x1095905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095905c))), 0x10956ba9u);
L_10956ba9:;
  /* 10956ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10956bab ret  */
  ESPCHK(0x10956b74u, _esp0);
  ESP += 4; return;
L_10956bac:;
  /* 10956bac push 1 */
  push32((uint32_t)(0x1u));
  /* 10956bae pop eax */
  EAX = (pop32());
  /* 10956baf ret  */
  ESPCHK(0x10956b74u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x10956bb0 (117 bytes, 38 insns) */
void f_10956bb0(void) {
  FTRACE(0x10956bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10956bb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10956bb3 cmp dword ptr [0x1095b400], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1095b400))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956bb9 push ebp */
  push32((uint32_t)(EBP));
  /* 10956bba mov ebp, dword ptr [0x10959050] */
  EBP = (r32((uint32_t)(0x10959050)));
  /* 10956bc0 jle 0x10956c06 */
  if ((C.zf||C.sf!=C.of)) goto L_10956c06;
  /* 10956bc2 mov eax, dword ptr [0x1095b404] */
  EAX = (r32((uint32_t)(0x1095b404)));
  /* 10956bc7 push esi */
  push32((uint32_t)(ESI));
  /* 10956bc8 push edi */
  push32((uint32_t)(EDI));
  /* 10956bc9 mov edi, dword ptr [0x10959054] */
  EDI = (r32((uint32_t)(0x10959054)));
  /* 10956bcf lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10956bd2:;
  /* 10956bd2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10956bd7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10956bdc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956bde call edi */
  call_ind((uint32_t)(EDI), 0x10956be0u);
  /* 10956be0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10956be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956be7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956be9 call edi */
  call_ind((uint32_t)(EDI), 0x10956bebu);
  /* 10956beb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10956bee push 0 */
  push32((uint32_t)(0x0u));
  /* 10956bf0 push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10956bf6 call ebp */
  call_ind((uint32_t)(EBP), 0x10956bf8u);
  /* 10956bf8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956bfb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10956bfc cmp ebx, dword ptr [0x1095b400] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1095b400))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c02 jl 0x10956bd2 */
  if ((C.sf!=C.of)) goto L_10956bd2;
  /* 10956c04 pop edi */
  EDI = (pop32());
  /* 10956c05 pop esi */
  ESI = (pop32());
L_10956c06:;
  /* 10956c06 push dword ptr [0x1095b404] */
  push32((uint32_t)(r32((uint32_t)(0x1095b404))));
  /* 10956c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10956c0e push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10956c14 call ebp */
  call_ind((uint32_t)(EBP), 0x10956c16u);
  /* 10956c16 push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10956c1c call dword ptr [0x1095905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095905c))), 0x10956c22u);
  /* 10956c22 pop ebp */
  EBP = (pop32());
  /* 10956c23 pop ebx */
  EBX = (pop32());
  /* 10956c24 ret  */
  ESPCHK(0x10956bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c25 @ 0x10956c25 (57 bytes, 18 insns) */
void f_10956c25(void) {
  FTRACE(0x10956c25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956c25 mov eax, dword ptr [0x1095b1f8] */
  EAX = (r32((uint32_t)(0x1095b1f8)));
  /* 10956c2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c2d je 0x10956c3c */
  if (C.zf) goto L_10956c3c;
  /* 10956c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956c31 jne 0x10956c5d */
  if (!C.zf) goto L_10956c5d;
  /* 10956c33 cmp dword ptr [0x1095b1fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1095b1fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c3a jne 0x10956c5d */
  if (!C.zf) goto L_10956c5d;
L_10956c3c:;
  /* 10956c3c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10956c41 call 0x10956c5e */
  push32(0x10956c46u); f_10956c5e();
  /* 10956c46 mov eax, dword ptr [0x1095b34c] */
  EAX = (r32((uint32_t)(0x1095b34c)));
  /* 10956c4b pop ecx */
  ECX = (pop32());
  /* 10956c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956c4e je 0x10956c52 */
  if (C.zf) goto L_10956c52;
  /* 10956c50 call eax */
  call_ind((uint32_t)(EAX), 0x10956c52u);
L_10956c52:;
  /* 10956c52 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10956c57 call 0x10956c5e */
  push32(0x10956c5cu); f_10956c5e();
  /* 10956c5c pop ecx */
  ECX = (pop32());
L_10956c5d:;
  /* 10956c5d ret  */
  ESPCHK(0x10956c25u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c5e @ 0x10956c5e (339 bytes, 100 insns) */
void f_10956c5e(void) {
  FTRACE(0x10956c5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956c5e push ebp */
  push32((uint32_t)(EBP));
  /* 10956c5f mov ebp, esp */
  EBP = (ESP);
  /* 10956c61 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10956c6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10956c6c mov eax, 0x1095aa58 */
  EAX = (0x1095aa58u);
L_10956c71:;
  /* 10956c71 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c73 je 0x10956c80 */
  if (C.zf) goto L_10956c80;
  /* 10956c75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10956c78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10956c79 cmp eax, 0x1095aae8 */
  { uint32_t _a=(EAX),_b=(0x1095aae8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c7e jl 0x10956c71 */
  if ((C.sf!=C.of)) goto L_10956c71;
L_10956c80:;
  /* 10956c80 push esi */
  push32((uint32_t)(ESI));
  /* 10956c81 mov esi, ecx */
  ESI = (ECX);
  /* 10956c83 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10956c86 cmp edx, dword ptr [esi + 0x1095aa58] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x1095aa58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c8c jne 0x10956dae */
  if (!C.zf) goto L_10956dae;
  /* 10956c92 mov eax, dword ptr [0x1095b1f8] */
  EAX = (r32((uint32_t)(0x1095b1f8)));
  /* 10956c97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956c9a je 0x10956d88 */
  if (C.zf) goto L_10956d88;
  /* 10956ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956ca2 jne 0x10956cb1 */
  if (!C.zf) goto L_10956cb1;
  /* 10956ca4 cmp dword ptr [0x1095b1fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1095b1fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956cab je 0x10956d88 */
  if (C.zf) goto L_10956d88;
L_10956cb1:;
  /* 10956cb1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956cb7 je 0x10956dae */
  if (C.zf) goto L_10956dae;
  /* 10956cbd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10956cc3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10956cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10956cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956ccb call dword ptr [0x10959074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959074))), 0x10956cd1u);
  /* 10956cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956cd3 jne 0x10956ce8 */
  if (!C.zf) goto L_10956ce8;
  /* 10956cd5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10956cdb push 0x10959410 */
  push32((uint32_t)(0x10959410u));
  /* 10956ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10956ce1 call 0x10957020 */
  push32(0x10956ce6u); f_10957020();
  /* 10956ce6 pop ecx */
  ECX = (pop32());
  /* 10956ce7 pop ecx */
  ECX = (pop32());
L_10956ce8:;
  /* 10956ce8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10956cee push edi */
  push32((uint32_t)(EDI));
  /* 10956cef push eax */
  push32((uint32_t)(EAX));
  /* 10956cf0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10956cf6 call 0x10957110 */
  push32(0x10956cfbu); f_10957110();
  /* 10956cfb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10956cfc pop ecx */
  ECX = (pop32());
  /* 10956cfd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956d00 jbe 0x10956d2b */
  if ((C.cf||C.zf)) goto L_10956d2b;
  /* 10956d02 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10956d08 push eax */
  push32((uint32_t)(EAX));
  /* 10956d09 call 0x10957110 */
  push32(0x10956d0eu); f_10957110();
  /* 10956d0e mov edi, eax */
  EDI = (EAX);
  /* 10956d10 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10956d16 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10956d19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10956d1b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956d1d push 0x1095940c */
  push32((uint32_t)(0x1095940cu));
  /* 10956d22 push edi */
  push32((uint32_t)(EDI));
  /* 10956d23 call 0x10958190 */
  push32(0x10956d28u); f_10958190();
  /* 10956d28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10956d2b:;
  /* 10956d2b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10956d31 push 0x109593f0 */
  push32((uint32_t)(0x109593f0u));
  /* 10956d36 push eax */
  push32((uint32_t)(EAX));
  /* 10956d37 call 0x10957020 */
  push32(0x10956d3cu); f_10957020();
  /* 10956d3c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10956d42 push edi */
  push32((uint32_t)(EDI));
  /* 10956d43 push eax */
  push32((uint32_t)(EAX));
  /* 10956d44 call 0x10957030 */
  push32(0x10956d49u); f_10957030();
  /* 10956d49 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10956d4f push 0x109593ec */
  push32((uint32_t)(0x109593ecu));
  /* 10956d54 push eax */
  push32((uint32_t)(EAX));
  /* 10956d55 call 0x10957030 */
  push32(0x10956d5au); f_10957030();
  /* 10956d5a push dword ptr [esi + 0x1095aa5c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1095aa5c))));
  /* 10956d60 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10956d66 push eax */
  push32((uint32_t)(EAX));
  /* 10956d67 call 0x10957030 */
  push32(0x10956d6cu); f_10957030();
  /* 10956d6c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10956d71 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10956d77 push 0x109593c4 */
  push32((uint32_t)(0x109593c4u));
  /* 10956d7c push eax */
  push32((uint32_t)(EAX));
  /* 10956d7d call 0x109580fe */
  push32(0x10956d82u); f_109580fe();
  /* 10956d82 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956d85 pop edi */
  EDI = (pop32());
  /* 10956d86 jmp 0x10956dae */
  goto L_10956dae;
L_10956d88:;
  /* 10956d88 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10956d8b lea esi, [esi + 0x1095aa5c] */
  ESI = ((uint32_t)(ESI + 0x1095aa5c));
  /* 10956d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956d93 push eax */
  push32((uint32_t)(EAX));
  /* 10956d94 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956d96 call 0x10957110 */
  push32(0x10956d9bu); f_10957110();
  /* 10956d9b pop ecx */
  ECX = (pop32());
  /* 10956d9c push eax */
  push32((uint32_t)(EAX));
  /* 10956d9d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956d9f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10956da1 call dword ptr [0x109590a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109590a4))), 0x10956da7u);
  /* 10956da7 push eax */
  push32((uint32_t)(EAX));
  /* 10956da8 call dword ptr [0x1095904c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095904c))), 0x10956daeu);
L_10956dae:;
  /* 10956dae pop esi */
  ESI = (pop32());
  /* 10956daf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10956db0 ret  */
  ESPCHK(0x10956c5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006db1 @ 0x10956db1 (41 bytes, 12 insns) */
void f_10956db1(void) {
  FTRACE(0x10956db1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956db1 push esi */
  push32((uint32_t)(ESI));
  /* 10956db2 mov esi, dword ptr [0x10959048] */
  ESI = (r32((uint32_t)(0x10959048)));
  /* 10956db8 push dword ptr [0x1095ab2c] */
  push32((uint32_t)(r32((uint32_t)(0x1095ab2c))));
  /* 10956dbe call esi */
  call_ind((uint32_t)(ESI), 0x10956dc0u);
  /* 10956dc0 push dword ptr [0x1095ab1c] */
  push32((uint32_t)(r32((uint32_t)(0x1095ab1c))));
  /* 10956dc6 call esi */
  call_ind((uint32_t)(ESI), 0x10956dc8u);
  /* 10956dc8 push dword ptr [0x1095ab0c] */
  push32((uint32_t)(r32((uint32_t)(0x1095ab0c))));
  /* 10956dce call esi */
  call_ind((uint32_t)(ESI), 0x10956dd0u);
  /* 10956dd0 push dword ptr [0x1095aaec] */
  push32((uint32_t)(r32((uint32_t)(0x1095aaec))));
  /* 10956dd6 call esi */
  call_ind((uint32_t)(ESI), 0x10956dd8u);
  /* 10956dd8 pop esi */
  ESI = (pop32());
  /* 10956dd9 ret  */
  ESPCHK(0x10956db1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dda @ 0x10956dda (108 bytes, 34 insns) */
void f_10956dda(void) {
  FTRACE(0x10956ddau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956dda push esi */
  push32((uint32_t)(ESI));
  /* 10956ddb push edi */
  push32((uint32_t)(EDI));
  /* 10956ddc mov edi, dword ptr [0x10959098] */
  EDI = (r32((uint32_t)(0x10959098)));
  /* 10956de2 mov esi, 0x1095aae8 */
  ESI = (0x1095aae8u);
L_10956de7:;
  /* 10956de7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10956de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956deb je 0x10956e18 */
  if (C.zf) goto L_10956e18;
  /* 10956ded cmp esi, 0x1095ab2c */
  { uint32_t _a=(ESI),_b=(0x1095ab2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956df3 je 0x10956e18 */
  if (C.zf) goto L_10956e18;
  /* 10956df5 cmp esi, 0x1095ab1c */
  { uint32_t _a=(ESI),_b=(0x1095ab1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956dfb je 0x10956e18 */
  if (C.zf) goto L_10956e18;
  /* 10956dfd cmp esi, 0x1095ab0c */
  { uint32_t _a=(ESI),_b=(0x1095ab0cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956e03 je 0x10956e18 */
  if (C.zf) goto L_10956e18;
  /* 10956e05 cmp esi, 0x1095aaec */
  { uint32_t _a=(ESI),_b=(0x1095aaecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956e0b je 0x10956e18 */
  if (C.zf) goto L_10956e18;
  /* 10956e0d push eax */
  push32((uint32_t)(EAX));
  /* 10956e0e call edi */
  call_ind((uint32_t)(EDI), 0x10956e10u);
  /* 10956e10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956e12 call 0x10956f49 */
  push32(0x10956e17u); f_10956f49();
  /* 10956e17 pop ecx */
  ECX = (pop32());
L_10956e18:;
  /* 10956e18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956e1b cmp esi, 0x1095aba8 */
  { uint32_t _a=(ESI),_b=(0x1095aba8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956e21 jl 0x10956de7 */
  if ((C.sf!=C.of)) goto L_10956de7;
  /* 10956e23 push dword ptr [0x1095ab0c] */
  push32((uint32_t)(r32((uint32_t)(0x1095ab0c))));
  /* 10956e29 call edi */
  call_ind((uint32_t)(EDI), 0x10956e2bu);
  /* 10956e2b push dword ptr [0x1095ab1c] */
  push32((uint32_t)(r32((uint32_t)(0x1095ab1c))));
  /* 10956e31 call edi */
  call_ind((uint32_t)(EDI), 0x10956e33u);
  /* 10956e33 push dword ptr [0x1095ab2c] */
  push32((uint32_t)(r32((uint32_t)(0x1095ab2c))));
  /* 10956e39 call edi */
  call_ind((uint32_t)(EDI), 0x10956e3bu);
  /* 10956e3b push dword ptr [0x1095aaec] */
  push32((uint32_t)(r32((uint32_t)(0x1095aaec))));
  /* 10956e41 call edi */
  call_ind((uint32_t)(EDI), 0x10956e43u);
  /* 10956e43 pop edi */
  EDI = (pop32());
  /* 10956e44 pop esi */
  ESI = (pop32());
  /* 10956e45 ret  */
  ESPCHK(0x10956ddau, _esp0);
  ESP += 4; return;
}

/* FUN_10006e46 @ 0x10956e46 (97 bytes, 37 insns) */
void f_10956e46(void) {
  FTRACE(0x10956e46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956e46 push ebp */
  push32((uint32_t)(EBP));
  /* 10956e47 mov ebp, esp */
  EBP = (ESP);
  /* 10956e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10956e4c push esi */
  push32((uint32_t)(ESI));
  /* 10956e4d cmp dword ptr [eax*4 + 0x1095aae8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1095aae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956e55 lea esi, [eax*4 + 0x1095aae8] */
  ESI = ((uint32_t)(EAX*4 + 0x1095aae8));
  /* 10956e5c jne 0x10956e9c */
  if (!C.zf) goto L_10956e9c;
  /* 10956e5e push edi */
  push32((uint32_t)(EDI));
  /* 10956e5f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10956e61 call 0x10956f91 */
  push32(0x10956e66u); f_10956f91();
  /* 10956e66 mov edi, eax */
  EDI = (EAX);
  /* 10956e68 pop ecx */
  ECX = (pop32());
  /* 10956e69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10956e6b jne 0x10956e75 */
  if (!C.zf) goto L_10956e75;
  /* 10956e6d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10956e6f call 0x109562b6 */
  push32(0x10956e74u); f_109562b6();
  /* 10956e74 pop ecx */
  ECX = (pop32());
L_10956e75:;
  /* 10956e75 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10956e77 call 0x10956e46 */
  push32(0x10956e7cu); f_10956e46();
  /* 10956e7c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956e7f pop ecx */
  ECX = (pop32());
  /* 10956e80 push edi */
  push32((uint32_t)(EDI));
  /* 10956e81 jne 0x10956e8d */
  if (!C.zf) goto L_10956e8d;
  /* 10956e83 call dword ptr [0x10959048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959048))), 0x10956e89u);
  /* 10956e89 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10956e8b jmp 0x10956e93 */
  goto L_10956e93;
L_10956e8d:;
  /* 10956e8d call 0x10956f49 */
  push32(0x10956e92u); f_10956f49();
  /* 10956e92 pop ecx */
  ECX = (pop32());
L_10956e93:;
  /* 10956e93 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10956e95 call 0x10956ea7 */
  push32(0x10956e9au); f_10956ea7();
  /* 10956e9a pop ecx */
  ECX = (pop32());
  /* 10956e9b pop edi */
  EDI = (pop32());
L_10956e9c:;
  /* 10956e9c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10956e9e call dword ptr [0x10959044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959044))), 0x10956ea4u);
  /* 10956ea4 pop esi */
  ESI = (pop32());
  /* 10956ea5 pop ebp */
  EBP = (pop32());
  /* 10956ea6 ret  */
  ESPCHK(0x10956e46u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea7 @ 0x10956ea7 (21 bytes, 7 insns) */
void f_10956ea7(void) {
  FTRACE(0x10956ea7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956ea7 push ebp */
  push32((uint32_t)(EBP));
  /* 10956ea8 mov ebp, esp */
  EBP = (ESP);
  /* 10956eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10956ead push dword ptr [eax*4 + 0x1095aae8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x1095aae8))));
  /* 10956eb4 call dword ptr [0x10959040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959040))), 0x10956ebau);
  /* 10956eba pop ebp */
  EBP = (pop32());
  /* 10956ebb ret  */
  ESPCHK(0x10956ea7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ebc @ 0x10956ebc (141 bytes, 56 insns) */
void f_10956ebc(void) {
  FTRACE(0x10956ebcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956ebc push ebx */
  push32((uint32_t)(EBX));
  /* 10956ebd push esi */
  push32((uint32_t)(ESI));
  /* 10956ebe mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10956ec2 push edi */
  push32((uint32_t)(EDI));
  /* 10956ec3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10956ec8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956ecb mov ebx, esi */
  EBX = (ESI);
  /* 10956ecd ja 0x10956edc */
  if ((!C.cf&&!C.zf)) goto L_10956edc;
  /* 10956ecf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10956ed1 jne 0x10956ed6 */
  if (!C.zf) goto L_10956ed6;
  /* 10956ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10956ed5 pop esi */
  ESI = (pop32());
L_10956ed6:;
  /* 10956ed6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10956ed9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10956edc:;
  /* 10956edc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10956ede cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956ee1 ja 0x10956f1d */
  if ((!C.cf&&!C.zf)) goto L_10956f1d;
  /* 10956ee3 cmp ebx, dword ptr [0x1095ad30] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1095ad30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956ee9 ja 0x10956f08 */
  if ((!C.cf&&!C.zf)) goto L_10956f08;
  /* 10956eeb push 9 */
  push32((uint32_t)(0x9u));
  /* 10956eed call 0x10956e46 */
  push32(0x10956ef2u); f_10956e46();
  /* 10956ef2 push ebx */
  push32((uint32_t)(EBX));
  /* 10956ef3 call 0x10957c49 */
  push32(0x10956ef8u); f_10957c49();
  /* 10956ef8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10956efa mov edi, eax */
  EDI = (EAX);
  /* 10956efc call 0x10956ea7 */
  push32(0x10956f01u); f_10956ea7();
  /* 10956f01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956f04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10956f06 jne 0x10956f33 */
  if (!C.zf) goto L_10956f33;
L_10956f08:;
  /* 10956f08 push esi */
  push32((uint32_t)(ESI));
  /* 10956f09 push 8 */
  push32((uint32_t)(0x8u));
  /* 10956f0b push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10956f11 call dword ptr [0x1095903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095903c))), 0x10956f17u);
  /* 10956f17 mov edi, eax */
  EDI = (EAX);
  /* 10956f19 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10956f1b jne 0x10956f3f */
  if (!C.zf) goto L_10956f3f;
L_10956f1d:;
  /* 10956f1d cmp dword ptr [0x1095b3c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1095b3c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956f24 je 0x10956f3f */
  if (C.zf) goto L_10956f3f;
  /* 10956f26 push esi */
  push32((uint32_t)(ESI));
  /* 10956f27 call 0x109582e8 */
  push32(0x10956f2cu); f_109582e8();
  /* 10956f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956f2e pop ecx */
  ECX = (pop32());
  /* 10956f2f je 0x10956f45 */
  if (C.zf) goto L_10956f45;
  /* 10956f31 jmp 0x10956edc */
  goto L_10956edc;
L_10956f33:;
  /* 10956f33 push ebx */
  push32((uint32_t)(EBX));
  /* 10956f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956f36 push edi */
  push32((uint32_t)(EDI));
  /* 10956f37 call 0x10958290 */
  push32(0x10956f3cu); f_10958290();
  /* 10956f3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10956f3f:;
  /* 10956f3f mov eax, edi */
  EAX = (EDI);
L_10956f41:;
  /* 10956f41 pop edi */
  EDI = (pop32());
  /* 10956f42 pop esi */
  ESI = (pop32());
  /* 10956f43 pop ebx */
  EBX = (pop32());
  /* 10956f44 ret  */
  ESPCHK(0x10956ebcu, _esp0);
  ESP += 4; return;
L_10956f45:;
  /* 10956f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10956f47 jmp 0x10956f41 */
  goto L_10956f41;
}

/* FUN_10006f49 @ 0x10956f49 (72 bytes, 29 insns) */
void f_10956f49(void) {
  FTRACE(0x10956f49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956f49 push esi */
  push32((uint32_t)(ESI));
  /* 10956f4a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10956f4e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10956f50 je 0x10956f8f */
  if (C.zf) goto L_10956f8f;
  /* 10956f52 push 9 */
  push32((uint32_t)(0x9u));
  /* 10956f54 call 0x10956e46 */
  push32(0x10956f59u); f_10956e46();
  /* 10956f59 push esi */
  push32((uint32_t)(ESI));
  /* 10956f5a call 0x109578f3 */
  push32(0x10956f5fu); f_109578f3();
  /* 10956f5f pop ecx */
  ECX = (pop32());
  /* 10956f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956f62 pop ecx */
  ECX = (pop32());
  /* 10956f63 je 0x10956f78 */
  if (C.zf) goto L_10956f78;
  /* 10956f65 push esi */
  push32((uint32_t)(ESI));
  /* 10956f66 push eax */
  push32((uint32_t)(EAX));
  /* 10956f67 call 0x1095791e */
  push32(0x10956f6cu); f_1095791e();
  /* 10956f6c push 9 */
  push32((uint32_t)(0x9u));
  /* 10956f6e call 0x10956ea7 */
  push32(0x10956f73u); f_10956ea7();
  /* 10956f73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956f76 pop esi */
  ESI = (pop32());
  /* 10956f77 ret  */
  ESPCHK(0x10956f49u, _esp0);
  ESP += 4; return;
L_10956f78:;
  /* 10956f78 push 9 */
  push32((uint32_t)(0x9u));
  /* 10956f7a call 0x10956ea7 */
  push32(0x10956f7fu); f_10956ea7();
  /* 10956f7f pop ecx */
  ECX = (pop32());
  /* 10956f80 push esi */
  push32((uint32_t)(ESI));
  /* 10956f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10956f83 push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10956f89 call dword ptr [0x10959050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959050))), 0x10956f8fu);
L_10956f8f:;
  /* 10956f8f pop esi */
  ESI = (pop32());
  /* 10956f90 ret  */
  ESPCHK(0x10956f49u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10956f91 (18 bytes, 6 insns) */
void f_10956f91(void) {
  FTRACE(0x10956f91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956f91 push dword ptr [0x1095b3c4] */
  push32((uint32_t)(r32((uint32_t)(0x1095b3c4))));
  /* 10956f97 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10956f9b call 0x10956fa3 */
  push32(0x10956fa0u); f_10956fa3();
  /* 10956fa0 pop ecx */
  ECX = (pop32());
  /* 10956fa1 pop ecx */
  ECX = (pop32());
  /* 10956fa2 ret  */
  ESPCHK(0x10956f91u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10956fa3 (44 bytes, 16 insns) */
void f_10956fa3(void) {
  FTRACE(0x10956fa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956fa3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956fa8 ja 0x10956fcc */
  if ((!C.cf&&!C.zf)) goto L_10956fcc;
L_10956faa:;
  /* 10956faa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10956fae call 0x10956fcf */
  push32(0x10956fb3u); f_10956fcf();
  /* 10956fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956fb5 pop ecx */
  ECX = (pop32());
  /* 10956fb6 jne 0x10956fce */
  if (!C.zf) goto L_10956fce;
  /* 10956fb8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956fbc je 0x10956fce */
  if (C.zf) goto L_10956fce;
  /* 10956fbe push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10956fc2 call 0x109582e8 */
  push32(0x10956fc7u); f_109582e8();
  /* 10956fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10956fc9 pop ecx */
  ECX = (pop32());
  /* 10956fca jne 0x10956faa */
  if (!C.zf) goto L_10956faa;
L_10956fcc:;
  /* 10956fcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10956fce:;
  /* 10956fce ret  */
  ESPCHK(0x10956fa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fcf @ 0x10956fcf (78 bytes, 30 insns) */
void f_10956fcf(void) {
  FTRACE(0x10956fcfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10956fcf push esi */
  push32((uint32_t)(ESI));
  /* 10956fd0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10956fd4 cmp esi, dword ptr [0x1095ad30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1095ad30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10956fda push edi */
  push32((uint32_t)(EDI));
  /* 10956fdb ja 0x10956ffe */
  if ((!C.cf&&!C.zf)) goto L_10956ffe;
  /* 10956fdd push 9 */
  push32((uint32_t)(0x9u));
  /* 10956fdf call 0x10956e46 */
  push32(0x10956fe4u); f_10956e46();
  /* 10956fe4 push esi */
  push32((uint32_t)(ESI));
  /* 10956fe5 call 0x10957c49 */
  push32(0x10956feau); f_10957c49();
  /* 10956fea push 9 */
  push32((uint32_t)(0x9u));
  /* 10956fec mov edi, eax */
  EDI = (EAX);
  /* 10956fee call 0x10956ea7 */
  push32(0x10956ff3u); f_10956ea7();
  /* 10956ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10956ff6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10956ff8 je 0x10956ffe */
  if (C.zf) goto L_10956ffe;
  /* 10956ffa mov eax, edi */
  EAX = (EDI);
  /* 10956ffc jmp 0x1095701a */
  goto L_1095701a;
L_10956ffe:;
  /* 10956ffe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10957000 jne 0x10957005 */
  if (!C.zf) goto L_10957005;
  /* 10957002 push 1 */
  push32((uint32_t)(0x1u));
  /* 10957004 pop esi */
  ESI = (pop32());
L_10957005:;
  /* 10957005 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10957008 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1095700b push esi */
  push32((uint32_t)(ESI));
  /* 1095700c push 0 */
  push32((uint32_t)(0x0u));
  /* 1095700e push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10957014 call dword ptr [0x1095903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095903c))), 0x1095701au);
L_1095701a:;
  /* 1095701a pop edi */
  EDI = (pop32());
  /* 1095701b pop esi */
  ESI = (pop32());
  /* 1095701c ret  */
  ESPCHK(0x10956fcfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x10957020 (7 bytes, 3 insns) */
void f_10957020(void) {
  FTRACE(0x10957020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957020 push edi */
  push32((uint32_t)(EDI));
  /* 10957021 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10957025 jmp 0x10957091 */
  jmp_ind(0x10957091u); return;
}

/* FUN_10007030 @ 0x10957030 (224 bytes, 84 insns) */
void f_10957030(void) {
  FTRACE(0x10957030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957030 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10957034 push edi */
  push32((uint32_t)(EDI));
  /* 10957035 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1095703b je 0x1095704c */
  if (C.zf) goto L_1095704c;
L_1095703d:;
  /* 1095703d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1095703f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10957040 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10957042 je 0x1095707f */
  if (C.zf) goto L_1095707f;
  /* 10957044 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1095704a jne 0x1095703d */
  if (!C.zf) goto L_1095703d;
L_1095704c:;
  /* 1095704c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1095704e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10957053 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957055 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10957058 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1095705a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095705d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10957062 je 0x1095704c */
  if (C.zf) goto L_1095704c;
  /* 10957064 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10957067 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10957069 je 0x1095708e */
  if (C.zf) goto L_1095708e;
  /* 1095706b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1095706d je 0x10957089 */
  if (C.zf) goto L_10957089;
  /* 1095706f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10957074 je 0x10957084 */
  if (C.zf) goto L_10957084;
  /* 10957076 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1095707b je 0x1095707f */
  if (C.zf) goto L_1095707f;
  /* 1095707d jmp 0x1095704c */
  goto L_1095704c;
L_1095707f:;
  /* 1095707f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10957082 jmp 0x10957091 */
  goto L_10957091;
L_10957084:;
  /* 10957084 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10957087 jmp 0x10957091 */
  goto L_10957091;
L_10957089:;
  /* 10957089 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1095708c jmp 0x10957091 */
  goto L_10957091;
L_1095708e:;
  /* 1095708e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10957091:;
  /* 10957091 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10957095 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1095709b je 0x109570b6 */
  if (C.zf) goto L_109570b6;
L_1095709d:;
  /* 1095709d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1095709f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109570a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109570a2 je 0x10957108 */
  if (C.zf) goto L_10957108;
  /* 109570a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 109570a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109570a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109570ad jne 0x1095709d */
  if (!C.zf) goto L_1095709d;
  /* 109570af jmp 0x109570b6 */
  goto L_109570b6;
L_109570b1:;
  /* 109570b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109570b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109570b6:;
  /* 109570b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109570bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109570bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109570bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109570c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109570c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109570c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109570c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 109570ce je 0x109570b1 */
  if (C.zf) goto L_109570b1;
  /* 109570d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109570d2 je 0x10957108 */
  if (C.zf) goto L_10957108;
  /* 109570d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 109570d6 je 0x109570ff */
  if (C.zf) goto L_109570ff;
  /* 109570d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 109570de je 0x109570f2 */
  if (C.zf) goto L_109570f2;
  /* 109570e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 109570e6 je 0x109570ea */
  if (C.zf) goto L_109570ea;
  /* 109570e8 jmp 0x109570b1 */
  goto L_109570b1;
L_109570ea:;
  /* 109570ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109570ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109570f0 pop edi */
  EDI = (pop32());
  /* 109570f1 ret  */
  ESPCHK(0x10957030u, _esp0);
  ESP += 4; return;
L_109570f2:;
  /* 109570f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 109570f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109570f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 109570fd pop edi */
  EDI = (pop32());
  /* 109570fe ret  */
  ESPCHK(0x10957030u, _esp0);
  ESP += 4; return;
L_109570ff:;
  /* 109570ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10957102 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10957106 pop edi */
  EDI = (pop32());
  /* 10957107 ret  */
  ESPCHK(0x10957030u, _esp0);
  ESP += 4; return;
L_10957108:;
  /* 10957108 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1095710a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1095710e pop edi */
  EDI = (pop32());
  /* 1095710f ret  */
  ESPCHK(0x10957030u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10957110 (123 bytes, 44 insns) */
void f_10957110(void) {
  FTRACE(0x10957110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957110 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10957114 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1095711a je 0x10957130 */
  if (C.zf) goto L_10957130;
L_1095711c:;
  /* 1095711c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1095711e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1095711f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10957121 je 0x10957163 */
  if (C.zf) goto L_10957163;
  /* 10957123 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10957129 jne 0x1095711c */
  if (!C.zf) goto L_1095711c;
  /* 1095712b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10957130:;
  /* 10957130 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10957132 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10957137 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957139 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1095713c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1095713e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957141 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10957146 je 0x10957130 */
  if (C.zf) goto L_10957130;
  /* 10957148 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1095714b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1095714d je 0x10957181 */
  if (C.zf) goto L_10957181;
  /* 1095714f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10957151 je 0x10957177 */
  if (C.zf) goto L_10957177;
  /* 10957153 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10957158 je 0x1095716d */
  if (C.zf) goto L_1095716d;
  /* 1095715a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1095715f je 0x10957163 */
  if (C.zf) goto L_10957163;
  /* 10957161 jmp 0x10957130 */
  goto L_10957130;
L_10957163:;
  /* 10957163 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10957166 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1095716a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095716c ret  */
  ESPCHK(0x10957110u, _esp0);
  ESP += 4; return;
L_1095716d:;
  /* 1095716d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10957170 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10957174 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957176 ret  */
  ESPCHK(0x10957110u, _esp0);
  ESP += 4; return;
L_10957177:;
  /* 10957177 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1095717a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1095717e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957180 ret  */
  ESPCHK(0x10957110u, _esp0);
  ESP += 4; return;
L_10957181:;
  /* 10957181 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10957184 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10957188 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095718a ret  */
  ESPCHK(0x10957110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000718b @ 0x1095718b (429 bytes, 143 insns) */
void f_1095718b(void) {
  FTRACE(0x1095718bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095718b push ebp */
  push32((uint32_t)(EBP));
  /* 1095718c mov ebp, esp */
  EBP = (ESP);
  /* 1095718e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957191 push ebx */
  push32((uint32_t)(EBX));
  /* 10957192 push esi */
  push32((uint32_t)(ESI));
  /* 10957193 push edi */
  push32((uint32_t)(EDI));
  /* 10957194 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10957196 call 0x10956e46 */
  push32(0x1095719bu); f_10956e46();
  /* 1095719b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1095719e call 0x10957338 */
  push32(0x109571a3u); f_10957338();
  /* 109571a3 mov ebx, eax */
  EBX = (EAX);
  /* 109571a5 pop ecx */
  ECX = (pop32());
  /* 109571a6 cmp ebx, dword ptr [0x1095b408] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1095b408))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109571ac pop ecx */
  ECX = (pop32());
  /* 109571ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 109571b0 jne 0x109571b9 */
  if (!C.zf) goto L_109571b9;
L_109571b2:;
  /* 109571b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109571b4 jmp 0x10957329 */
  goto L_10957329;
L_109571b9:;
  /* 109571b9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 109571bb je 0x10957317 */
  if (C.zf) goto L_10957317;
  /* 109571c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109571c3 mov eax, 0x1095ac38 */
  EAX = (0x1095ac38u);
L_109571c8:;
  /* 109571c8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109571ca je 0x10957240 */
  if (C.zf) goto L_10957240;
  /* 109571cc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109571cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109571d0 cmp eax, 0x1095ad28 */
  { uint32_t _a=(EAX),_b=(0x1095ad28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109571d5 jl 0x109571c8 */
  if ((C.sf!=C.of)) goto L_109571c8;
  /* 109571d7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 109571da push eax */
  push32((uint32_t)(EAX));
  /* 109571db push ebx */
  push32((uint32_t)(EBX));
  /* 109571dc call dword ptr [0x10959038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959038))), 0x109571e2u);
  /* 109571e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109571e4 pop esi */
  ESI = (pop32());
  /* 109571e5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109571e7 jne 0x1095730e */
  if (!C.zf) goto L_1095730e;
  /* 109571ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109571ef and dword ptr [0x1095b624], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1095b624)))&(0x0u); w32((uint32_t)(0x1095b624), (_r)); fl_logic(_r,32); }
  /* 109571f6 pop ecx */
  ECX = (pop32());
  /* 109571f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109571f9 mov edi, 0x1095b520 */
  EDI = (0x1095b520u);
  /* 109571fe cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957201 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10957203 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10957204 mov dword ptr [0x1095b408], ebx */
  w32((uint32_t)(0x1095b408), (EBX));
  /* 1095720a jbe 0x109572fb */
  if ((C.cf||C.zf)) goto L_109572fb;
  /* 10957210 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957214 je 0x109572d6 */
  if (C.zf) goto L_109572d6;
  /* 1095721a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1095721d:;
  /* 1095721d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1095721f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10957221 je 0x109572d6 */
  if (C.zf) goto L_109572d6;
  /* 10957227 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1095722b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1095722e:;
  /* 1095722e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957230 ja 0x109572ca */
  if ((!C.cf&&!C.zf)) goto L_109572ca;
  /* 10957236 or byte ptr [eax + 0x1095b521], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(0x4u); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 1095723d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1095723e jmp 0x1095722e */
  goto L_1095722e;
L_10957240:;
  /* 10957240 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10957244 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10957246 pop ecx */
  ECX = (pop32());
  /* 10957247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10957249 mov edi, 0x1095b520 */
  EDI = (0x1095b520u);
  /* 1095724e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10957251 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10957253 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10957256 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10957257 lea ebx, [esi + 0x1095ac48] */
  EBX = ((uint32_t)(ESI + 0x1095ac48));
L_1095725d:;
  /* 1095725d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957260 mov ecx, ebx */
  ECX = (EBX);
  /* 10957262 je 0x10957290 */
  if (C.zf) goto L_10957290;
L_10957264:;
  /* 10957264 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10957267 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10957269 je 0x10957290 */
  if (C.zf) goto L_10957290;
  /* 1095726b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1095726e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10957271 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957273 ja 0x10957289 */
  if ((!C.cf&&!C.zf)) goto L_10957289;
  /* 10957275 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957278 mov dl, byte ptr [edx + 0x1095ac30] */
  DL = (r8((uint32_t)(EDX + 0x1095ac30)));
L_1095727e:;
  /* 1095727e or byte ptr [eax + 0x1095b521], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(DL); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 10957284 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10957285 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957287 jbe 0x1095727e */
  if ((C.cf||C.zf)) goto L_1095727e;
L_10957289:;
  /* 10957289 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1095728a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1095728b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095728e jne 0x10957264 */
  if (!C.zf) goto L_10957264;
L_10957290:;
  /* 10957290 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10957293 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957296 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095729a jb 0x1095725d */
  if (C.cf) goto L_1095725d;
  /* 1095729c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1095729f mov dword ptr [0x1095b41c], 1 */
  w32((uint32_t)(0x1095b41c), (0x1u));
  /* 109572a9 push eax */
  push32((uint32_t)(EAX));
  /* 109572aa mov dword ptr [0x1095b408], eax */
  w32((uint32_t)(0x1095b408), (EAX));
  /* 109572af call 0x10957382 */
  push32(0x109572b4u); f_10957382();
  /* 109572b4 lea esi, [esi + 0x1095ac3c] */
  ESI = ((uint32_t)(ESI + 0x1095ac3c));
  /* 109572ba mov edi, 0x1095b410 */
  EDI = (0x1095b410u);
  /* 109572bf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 109572c0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 109572c1 pop ecx */
  ECX = (pop32());
  /* 109572c2 mov dword ptr [0x1095b624], eax */
  w32((uint32_t)(0x1095b624), (EAX));
  /* 109572c7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 109572c8 jmp 0x1095731c */
  goto L_1095731c;
L_109572ca:;
  /* 109572ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109572cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109572cc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109572d0 jne 0x1095721d */
  if (!C.zf) goto L_1095721d;
L_109572d6:;
  /* 109572d6 mov eax, esi */
  EAX = (ESI);
L_109572d8:;
  /* 109572d8 or byte ptr [eax + 0x1095b521], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(0x8u); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 109572df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109572e0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109572e5 jb 0x109572d8 */
  if (C.cf) goto L_109572d8;
  /* 109572e7 push ebx */
  push32((uint32_t)(EBX));
  /* 109572e8 call 0x10957382 */
  push32(0x109572edu); f_10957382();
  /* 109572ed pop ecx */
  ECX = (pop32());
  /* 109572ee mov dword ptr [0x1095b624], eax */
  w32((uint32_t)(0x1095b624), (EAX));
  /* 109572f3 mov dword ptr [0x1095b41c], esi */
  w32((uint32_t)(0x1095b41c), (ESI));
  /* 109572f9 jmp 0x10957302 */
  goto L_10957302;
L_109572fb:;
  /* 109572fb and dword ptr [0x1095b41c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1095b41c)))&(0x0u); w32((uint32_t)(0x1095b41c), (_r)); fl_logic(_r,32); }
L_10957302:;
  /* 10957302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10957304 mov edi, 0x1095b410 */
  EDI = (0x1095b410u);
  /* 10957309 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1095730a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1095730b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1095730c jmp 0x1095731c */
  goto L_1095731c;
L_1095730e:;
  /* 1095730e cmp dword ptr [0x1095b3b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1095b3b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957315 je 0x10957326 */
  if (C.zf) goto L_10957326;
L_10957317:;
  /* 10957317 call 0x109573b5 */
  push32(0x1095731cu); f_109573b5();
L_1095731c:;
  /* 1095731c call 0x109573de */
  push32(0x10957321u); f_109573de();
  /* 10957321 jmp 0x109571b2 */
  goto L_109571b2;
L_10957326:;
  /* 10957326 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10957329:;
  /* 10957329 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1095732b call 0x10956ea7 */
  push32(0x10957330u); f_10956ea7();
  /* 10957330 pop ecx */
  ECX = (pop32());
  /* 10957331 mov eax, esi */
  EAX = (ESI);
  /* 10957333 pop edi */
  EDI = (pop32());
  /* 10957334 pop esi */
  ESI = (pop32());
  /* 10957335 pop ebx */
  EBX = (pop32());
  /* 10957336 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957337 ret  */
  ESPCHK(0x1095718bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007338 @ 0x10957338 (74 bytes, 15 insns) */
void f_10957338(void) {
  FTRACE(0x10957338u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957338 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1095733c and dword ptr [0x1095b3b0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1095b3b0)))&(0x0u); w32((uint32_t)(0x1095b3b0), (_r)); fl_logic(_r,32); }
  /* 10957343 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957346 jne 0x10957358 */
  if (!C.zf) goto L_10957358;
  /* 10957348 mov dword ptr [0x1095b3b0], 1 */
  w32((uint32_t)(0x1095b3b0), (0x1u));
  /* 10957352 jmp dword ptr [0x10959030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10959030)))); return;
L_10957358:;
  /* 10957358 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095735b jne 0x1095736d */
  if (!C.zf) goto L_1095736d;
  /* 1095735d mov dword ptr [0x1095b3b0], 1 */
  w32((uint32_t)(0x1095b3b0), (0x1u));
  /* 10957367 jmp dword ptr [0x10959034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10959034)))); return;
L_1095736d:;
  /* 1095736d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957370 jne 0x10957381 */
  if (!C.zf) goto L_10957381;
  /* 10957372 mov eax, dword ptr [0x1095b3e0] */
  EAX = (r32((uint32_t)(0x1095b3e0)));
  /* 10957377 mov dword ptr [0x1095b3b0], 1 */
  w32((uint32_t)(0x1095b3b0), (0x1u));
L_10957381:;
  /* 10957381 ret  */
  ESPCHK(0x10957338u, _esp0);
  ESP += 4; return;
}

/* FUN_10007382 @ 0x10957382 (51 bytes, 19 insns) */
void f_10957382(void) {
  FTRACE(0x10957382u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957382 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10957386 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095738b je 0x109573af */
  if (C.zf) goto L_109573af;
  /* 1095738d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957390 je 0x109573a9 */
  if (C.zf) goto L_109573a9;
  /* 10957392 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957395 je 0x109573a3 */
  if (C.zf) goto L_109573a3;
  /* 10957397 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10957398 je 0x1095739d */
  if (C.zf) goto L_1095739d;
  /* 1095739a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1095739c ret  */
  ESPCHK(0x10957382u, _esp0);
  ESP += 4; return;
L_1095739d:;
  /* 1095739d mov eax, 0x404 */
  EAX = (0x404u);
  /* 109573a2 ret  */
  ESPCHK(0x10957382u, _esp0);
  ESP += 4; return;
L_109573a3:;
  /* 109573a3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 109573a8 ret  */
  ESPCHK(0x10957382u, _esp0);
  ESP += 4; return;
L_109573a9:;
  /* 109573a9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 109573ae ret  */
  ESPCHK(0x10957382u, _esp0);
  ESP += 4; return;
L_109573af:;
  /* 109573af mov eax, 0x411 */
  EAX = (0x411u);
  /* 109573b4 ret  */
  ESPCHK(0x10957382u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b5 @ 0x109573b5 (41 bytes, 17 insns) */
void f_109573b5(void) {
  FTRACE(0x109573b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109573b5 push edi */
  push32((uint32_t)(EDI));
  /* 109573b6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109573b8 pop ecx */
  ECX = (pop32());
  /* 109573b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109573bb mov edi, 0x1095b520 */
  EDI = (0x1095b520u);
  /* 109573c0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109573c2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 109573c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109573c5 mov edi, 0x1095b410 */
  EDI = (0x1095b410u);
  /* 109573ca mov dword ptr [0x1095b408], eax */
  w32((uint32_t)(0x1095b408), (EAX));
  /* 109573cf mov dword ptr [0x1095b41c], eax */
  w32((uint32_t)(0x1095b41c), (EAX));
  /* 109573d4 mov dword ptr [0x1095b624], eax */
  w32((uint32_t)(0x1095b624), (EAX));
  /* 109573d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 109573da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 109573db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 109573dc pop edi */
  EDI = (pop32());
  /* 109573dd ret  */
  ESPCHK(0x109573b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100073de @ 0x109573de (389 bytes, 124 insns) */
void f_109573de(void) {
  FTRACE(0x109573deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109573de push ebp */
  push32((uint32_t)(EBP));
  /* 109573df mov ebp, esp */
  EBP = (ESP);
  /* 109573e1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109573e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 109573ea push esi */
  push32((uint32_t)(ESI));
  /* 109573eb push eax */
  push32((uint32_t)(EAX));
  /* 109573ec push dword ptr [0x1095b408] */
  push32((uint32_t)(r32((uint32_t)(0x1095b408))));
  /* 109573f2 call dword ptr [0x10959038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959038))), 0x109573f8u);
  /* 109573f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109573fb jne 0x10957517 */
  if (!C.zf) goto L_10957517;
  /* 10957401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10957403 mov esi, 0x100 */
  ESI = (0x100u);
L_10957408:;
  /* 10957408 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1095740f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10957410 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957412 jb 0x10957408 */
  if (C.cf) goto L_10957408;
  /* 10957414 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10957417 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1095741e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10957420 je 0x10957459 */
  if (C.zf) goto L_10957459;
  /* 10957422 push ebx */
  push32((uint32_t)(EBX));
  /* 10957423 push edi */
  push32((uint32_t)(EDI));
  /* 10957424 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10957427:;
  /* 10957427 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1095742a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1095742d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095742f ja 0x1095744e */
  if ((!C.cf&&!C.zf)) goto L_1095744e;
  /* 10957431 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957433 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1095743a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1095743b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10957440 mov ebx, ecx */
  EBX = (ECX);
  /* 10957442 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10957445 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10957447 mov ecx, ebx */
  ECX = (EBX);
  /* 10957449 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1095744c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1095744e:;
  /* 1095744e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1095744f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10957450 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10957453 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10957455 jne 0x10957427 */
  if (!C.zf) goto L_10957427;
  /* 10957457 pop edi */
  EDI = (pop32());
  /* 10957458 pop ebx */
  EBX = (pop32());
L_10957459:;
  /* 10957459 push 0 */
  push32((uint32_t)(0x0u));
  /* 1095745b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10957461 push dword ptr [0x1095b624] */
  push32((uint32_t)(r32((uint32_t)(0x1095b624))));
  /* 10957467 push dword ptr [0x1095b408] */
  push32((uint32_t)(r32((uint32_t)(0x1095b408))));
  /* 1095746d push eax */
  push32((uint32_t)(EAX));
  /* 1095746e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10957474 push esi */
  push32((uint32_t)(ESI));
  /* 10957475 push eax */
  push32((uint32_t)(EAX));
  /* 10957476 push 1 */
  push32((uint32_t)(0x1u));
  /* 10957478 call 0x10958552 */
  push32(0x1095747du); f_10958552();
  /* 1095747d push 0 */
  push32((uint32_t)(0x0u));
  /* 1095747f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10957485 push dword ptr [0x1095b408] */
  push32((uint32_t)(r32((uint32_t)(0x1095b408))));
  /* 1095748b push esi */
  push32((uint32_t)(ESI));
  /* 1095748c push eax */
  push32((uint32_t)(EAX));
  /* 1095748d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10957493 push esi */
  push32((uint32_t)(ESI));
  /* 10957494 push eax */
  push32((uint32_t)(EAX));
  /* 10957495 push esi */
  push32((uint32_t)(ESI));
  /* 10957496 push dword ptr [0x1095b624] */
  push32((uint32_t)(r32((uint32_t)(0x1095b624))));
  /* 1095749c call 0x10958303 */
  push32(0x109574a1u); f_10958303();
  /* 109574a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109574a3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 109574a9 push dword ptr [0x1095b408] */
  push32((uint32_t)(r32((uint32_t)(0x1095b408))));
  /* 109574af push esi */
  push32((uint32_t)(ESI));
  /* 109574b0 push eax */
  push32((uint32_t)(EAX));
  /* 109574b1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 109574b7 push esi */
  push32((uint32_t)(ESI));
  /* 109574b8 push eax */
  push32((uint32_t)(EAX));
  /* 109574b9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 109574be push dword ptr [0x1095b624] */
  push32((uint32_t)(r32((uint32_t)(0x1095b624))));
  /* 109574c4 call 0x10958303 */
  push32(0x109574c9u); f_10958303();
  /* 109574c9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109574cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109574ce lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_109574d4:;
  /* 109574d4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 109574d7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 109574da je 0x109574f2 */
  if (C.zf) goto L_109574f2;
  /* 109574dc or byte ptr [eax + 0x1095b521], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(0x10u); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 109574e3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_109574ea:;
  /* 109574ea mov byte ptr [eax + 0x1095b420], dl */
  w8((uint32_t)(EAX + 0x1095b420), (DL));
  /* 109574f0 jmp 0x1095750e */
  goto L_1095750e;
L_109574f2:;
  /* 109574f2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 109574f5 je 0x10957507 */
  if (C.zf) goto L_10957507;
  /* 109574f7 or byte ptr [eax + 0x1095b521], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(0x20u); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 109574fe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10957505 jmp 0x109574ea */
  goto L_109574ea;
L_10957507:;
  /* 10957507 and byte ptr [eax + 0x1095b420], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b420)))&(0x0u); w8((uint32_t)(EAX + 0x1095b420), (_r)); fl_logic(_r,8); }
L_1095750e:;
  /* 1095750e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1095750f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10957510 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10957511 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957513 jb 0x109574d4 */
  if (C.cf) goto L_109574d4;
  /* 10957515 jmp 0x10957560 */
  goto L_10957560;
L_10957517:;
  /* 10957517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10957519 mov esi, 0x100 */
  ESI = (0x100u);
L_1095751e:;
  /* 1095751e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957521 jb 0x1095753c */
  if (C.cf) goto L_1095753c;
  /* 10957523 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957526 ja 0x1095753c */
  if ((!C.cf&&!C.zf)) goto L_1095753c;
  /* 10957528 or byte ptr [eax + 0x1095b521], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(0x10u); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 1095752f mov cl, al */
  CL = (AL);
  /* 10957531 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10957534:;
  /* 10957534 mov byte ptr [eax + 0x1095b420], cl */
  w8((uint32_t)(EAX + 0x1095b420), (CL));
  /* 1095753a jmp 0x1095755b */
  goto L_1095755b;
L_1095753c:;
  /* 1095753c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095753f jb 0x10957554 */
  if (C.cf) goto L_10957554;
  /* 10957541 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957544 ja 0x10957554 */
  if ((!C.cf&&!C.zf)) goto L_10957554;
  /* 10957546 or byte ptr [eax + 0x1095b521], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b521)))|(0x20u); w8((uint32_t)(EAX + 0x1095b521), (_r)); fl_logic(_r,8); }
  /* 1095754d mov cl, al */
  CL = (AL);
  /* 1095754f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10957552 jmp 0x10957534 */
  goto L_10957534;
L_10957554:;
  /* 10957554 and byte ptr [eax + 0x1095b420], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1095b420)))&(0x0u); w8((uint32_t)(EAX + 0x1095b420), (_r)); fl_logic(_r,8); }
L_1095755b:;
  /* 1095755b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1095755c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095755e jb 0x1095751e */
  if (C.cf) goto L_1095751e;
L_10957560:;
  /* 10957560 pop esi */
  ESI = (pop32());
  /* 10957561 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957562 ret  */
  ESPCHK(0x109573deu, _esp0);
  ESP += 4; return;
}

/* FUN_10007563 @ 0x10957563 (28 bytes, 7 insns) */
void f_10957563(void) {
  FTRACE(0x10957563u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957563 cmp dword ptr [0x1095b748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1095b748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095756a jne 0x1095757e */
  if (!C.zf) goto L_1095757e;
  /* 1095756c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1095756e call 0x1095718b */
  push32(0x10957573u); f_1095718b();
  /* 10957573 pop ecx */
  ECX = (pop32());
  /* 10957574 mov dword ptr [0x1095b748], 1 */
  w32((uint32_t)(0x1095b748), (0x1u));
L_1095757e:;
  /* 1095757e ret  */
  ESPCHK(0x10957563u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x10957580 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10957580(void) {
  FTRACE(0x10957580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957580 push ebp */
  push32((uint32_t)(EBP));
  /* 10957581 mov ebp, esp */
  EBP = (ESP);
  /* 10957583 push edi */
  push32((uint32_t)(EDI));
  /* 10957584 push esi */
  push32((uint32_t)(ESI));
  /* 10957585 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10957588 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1095758b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1095758e mov eax, ecx */
  EAX = (ECX);
  /* 10957590 mov edx, ecx */
  EDX = (ECX);
  /* 10957592 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957594 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957596 jbe 0x109575a0 */
  if ((C.cf||C.zf)) goto L_109575a0;
  /* 10957598 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095759a jb 0x10957718 */
  if (C.cf) goto L_10957718;
L_109575a0:;
  /* 109575a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109575a6 jne 0x109575bc */
  if (!C.zf) goto L_109575bc;
  /* 109575a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109575ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109575ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109575b1 jb 0x109575dc */
  if (C.cf) goto L_109575dc;
  /* 109575b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109575b5 jmp dword ptr [edx*4 + 0x109576c8] */
  switch (EDX) {
    case 0: goto L_109576d8;
    case 1: goto L_109576e0;
    case 2: goto L_109576ec;
    case 3: goto L_10957700;
    default: x86_unimpl("switch@0x109575b5 out of table"); return;
  }
L_109575bc:;
  /* 109575bc mov eax, edi */
  EAX = (EDI);
  /* 109575be mov edx, 3 */
  EDX = (0x3u);
  /* 109575c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109575c6 jb 0x109575d4 */
  if (C.cf) goto L_109575d4;
  /* 109575c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109575cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109575cd jmp dword ptr [eax*4 + 0x109575e0] */
  switch (EAX) {
    case 1: goto L_109575f0;
    case 2: goto L_1095761c;
    case 3: goto L_10957640;
    default: x86_unimpl("switch@0x109575cd out of table"); return;
  }
L_109575d4:;
  /* 109575d4 jmp dword ptr [ecx*4 + 0x109576d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x109576d8)))); return;
  /* 109575db nop  */
  /* nop */
L_109575dc:;
  /* 109575dc jmp dword ptr [ecx*4 + 0x1095765c] */
  switch (ECX) {
    case 0: goto L_109576bf;
    case 1: goto L_109576ac;
    case 2: goto L_109576a4;
    case 3: goto L_1095769c;
    case 4: goto L_10957694;
    case 5: goto L_1095768c;
    case 6: goto L_10957684;
    case 7: goto L_1095767c;
    default: x86_unimpl("switch@0x109575dc out of table"); return;
  }
  /* 109575e3 nop  */
  /* nop */
L_109575f0:;
  /* 109575f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109575f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109575f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109575f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109575f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109575fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109575ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10957602 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10957605 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10957608 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095760b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095760e jb 0x109575dc */
  if (C.cf) goto L_109575dc;
  /* 10957610 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10957612 jmp dword ptr [edx*4 + 0x109576c8] */
  switch (EDX) {
    case 0: goto L_109576d8;
    case 1: goto L_109576e0;
    case 2: goto L_109576ec;
    case 3: goto L_10957700;
    default: x86_unimpl("switch@0x10957612 out of table"); return;
  }
  /* 10957619 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1095761c:;
  /* 1095761c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1095761e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10957620 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10957622 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10957625 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10957628 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1095762b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095762e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10957631 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957634 jb 0x109575dc */
  if (C.cf) goto L_109575dc;
  /* 10957636 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10957638 jmp dword ptr [edx*4 + 0x109576c8] */
  switch (EDX) {
    case 0: goto L_109576d8;
    case 1: goto L_109576e0;
    case 2: goto L_109576ec;
    case 3: goto L_10957700;
    default: x86_unimpl("switch@0x10957638 out of table"); return;
  }
  /* 1095763f nop  */
  /* nop */
L_10957640:;
  /* 10957640 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10957642 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10957644 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10957646 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10957647 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1095764a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1095764b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095764e jb 0x109575dc */
  if (C.cf) goto L_109575dc;
  /* 10957650 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10957652 jmp dword ptr [edx*4 + 0x109576c8] */
  switch (EDX) {
    case 0: goto L_109576d8;
    case 1: goto L_109576e0;
    case 2: goto L_109576ec;
    case 3: goto L_10957700;
    default: x86_unimpl("switch@0x10957652 out of table"); return;
  }
  /* 10957659 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1095767c:;
  /* 1095767c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10957680 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10957684:;
  /* 10957684 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10957688 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1095768c:;
  /* 1095768c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10957690 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10957694:;
  /* 10957694 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10957698 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1095769c:;
  /* 1095769c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 109576a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_109576a4:;
  /* 109576a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 109576a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_109576ac:;
  /* 109576ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 109576b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 109576b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109576bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109576bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109576bf:;
  /* 109576bf jmp dword ptr [edx*4 + 0x109576c8] */
  switch (EDX) {
    case 0: goto L_109576d8;
    case 1: goto L_109576e0;
    case 2: goto L_109576ec;
    case 3: goto L_10957700;
    default: x86_unimpl("switch@0x109576bf out of table"); return;
  }
  /* 109576c6 mov edi, edi */
  EDI = (EDI);
L_109576d8:;
  /* 109576d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109576db pop esi */
  ESI = (pop32());
  /* 109576dc pop edi */
  EDI = (pop32());
  /* 109576dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109576de ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 109576df nop  */
  /* nop */
L_109576e0:;
  /* 109576e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109576e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109576e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109576e7 pop esi */
  ESI = (pop32());
  /* 109576e8 pop edi */
  EDI = (pop32());
  /* 109576e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109576ea ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 109576eb nop  */
  /* nop */
L_109576ec:;
  /* 109576ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109576ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109576f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109576f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109576f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109576f9 pop esi */
  ESI = (pop32());
  /* 109576fa pop edi */
  EDI = (pop32());
  /* 109576fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109576fc ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 109576fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10957700:;
  /* 10957700 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10957702 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10957704 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10957707 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1095770a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1095770d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10957710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957713 pop esi */
  ESI = (pop32());
  /* 10957714 pop edi */
  EDI = (pop32());
  /* 10957715 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957716 ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 10957717 nop  */
  /* nop */
L_10957718:;
  /* 10957718 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1095771c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10957720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10957726 jne 0x1095774c */
  if (!C.zf) goto L_1095774c;
  /* 10957728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1095772b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1095772e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957731 jb 0x10957740 */
  if (C.cf) goto L_10957740;
  /* 10957733 std  */
  C.df=1;
  /* 10957734 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10957736 cld  */
  C.df=0;
  /* 10957737 jmp dword ptr [edx*4 + 0x10957860] */
  switch (EDX) {
    case 0: goto L_10957870;
    case 1: goto L_10957878;
    case 2: goto L_10957888;
    case 3: goto L_1095789c;
    default: x86_unimpl("switch@0x10957737 out of table"); return;
  }
  /* 1095773e mov edi, edi */
  EDI = (EDI);
L_10957740:;
  /* 10957740 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10957742 jmp dword ptr [ecx*4 + 0x10957810] */
  switch (ECX) {
    case 0: goto L_10957857;
    default: x86_unimpl("switch@0x10957742 out of table"); return;
  }
  /* 10957749 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1095774c:;
  /* 1095774c mov eax, edi */
  EAX = (EDI);
  /* 1095774e mov edx, 3 */
  EDX = (0x3u);
  /* 10957753 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957756 jb 0x10957764 */
  if (C.cf) goto L_10957764;
  /* 10957758 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1095775b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095775d jmp dword ptr [eax*4 + 0x10957768] */
  switch (EAX) {
    case 1: goto L_10957778;
    case 2: goto L_10957798;
    case 3: goto L_109577c0;
    default: x86_unimpl("switch@0x1095775d out of table"); return;
  }
L_10957764:;
  /* 10957764 jmp dword ptr [ecx*4 + 0x10957860] */
  switch (ECX) {
    case 0: goto L_10957870;
    case 1: goto L_10957878;
    case 2: goto L_10957888;
    case 3: goto L_1095789c;
    default: x86_unimpl("switch@0x10957764 out of table"); return;
  }
  /* 1095776b nop  */
  /* nop */
L_10957778:;
  /* 10957778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095777b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1095777d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10957780 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10957781 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10957784 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10957785 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957788 jb 0x10957740 */
  if (C.cf) goto L_10957740;
  /* 1095778a std  */
  C.df=1;
  /* 1095778b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1095778d cld  */
  C.df=0;
  /* 1095778e jmp dword ptr [edx*4 + 0x10957860] */
  switch (EDX) {
    case 0: goto L_10957870;
    case 1: goto L_10957878;
    case 2: goto L_10957888;
    case 3: goto L_1095789c;
    default: x86_unimpl("switch@0x1095778e out of table"); return;
  }
  /* 10957795 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10957798:;
  /* 10957798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095779b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1095779d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109577a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109577a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109577a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109577a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109577ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109577af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109577b2 jb 0x10957740 */
  if (C.cf) goto L_10957740;
  /* 109577b4 std  */
  C.df=1;
  /* 109577b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109577b7 cld  */
  C.df=0;
  /* 109577b8 jmp dword ptr [edx*4 + 0x10957860] */
  switch (EDX) {
    case 0: goto L_10957870;
    case 1: goto L_10957878;
    case 2: goto L_10957888;
    case 3: goto L_1095789c;
    default: x86_unimpl("switch@0x109577b8 out of table"); return;
  }
  /* 109577bf nop  */
  /* nop */
L_109577c0:;
  /* 109577c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109577c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109577c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109577c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109577cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109577ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109577d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109577d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109577d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109577da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109577dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109577e0 jb 0x10957740 */
  if (C.cf) goto L_10957740;
  /* 109577e6 std  */
  C.df=1;
  /* 109577e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109577e9 cld  */
  C.df=0;
  /* 109577ea jmp dword ptr [edx*4 + 0x10957860] */
  switch (EDX) {
    case 0: goto L_10957870;
    case 1: goto L_10957878;
    case 2: goto L_10957888;
    case 3: goto L_1095789c;
    default: x86_unimpl("switch@0x109577ea out of table"); return;
  }
  /* 109577f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 109577f4 adc al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 109577f6 xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 109577f7 adc byte ptr [eax + edi*2], bl */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*2))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 109577fa xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 109577fb adc byte ptr [eax + edi*2], ah */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*2))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 109577fe xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 109577ff adc byte ptr [eax + edi*2], ch */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*2))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 10957802 xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 10957803 adc byte ptr [eax + edi*2], dh */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*2))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 10957806 xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 10957807 adc byte ptr [eax + edi*2], bh */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*2))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 1095780a xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 1095780b adc byte ptr [eax + edi*2 - 0x6b], al */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*2 + -0x6b))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + EDI*2 + -0x6b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10957814 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10957818 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1095781c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10957820 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10957824 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10957828 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1095782c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10957830 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10957834 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10957838 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1095783c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10957840 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10957844 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10957848 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1095784c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10957853 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10957855 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10957857:;
  /* 10957857 jmp dword ptr [edx*4 + 0x10957860] */
  switch (EDX) {
    case 0: goto L_10957870;
    case 1: goto L_10957878;
    case 2: goto L_10957888;
    case 3: goto L_1095789c;
    default: x86_unimpl("switch@0x10957857 out of table"); return;
  }
  /* 1095785e mov edi, edi */
  EDI = (EDI);
L_10957870:;
  /* 10957870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957873 pop esi */
  ESI = (pop32());
  /* 10957874 pop edi */
  EDI = (pop32());
  /* 10957875 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957876 ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 10957877 nop  */
  /* nop */
L_10957878:;
  /* 10957878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095787b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1095787e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957881 pop esi */
  ESI = (pop32());
  /* 10957882 pop edi */
  EDI = (pop32());
  /* 10957883 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957884 ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 10957885 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10957888:;
  /* 10957888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095788b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1095788e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10957891 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10957894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957897 pop esi */
  ESI = (pop32());
  /* 10957898 pop edi */
  EDI = (pop32());
  /* 10957899 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1095789a ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
  /* 1095789b nop  */
  /* nop */
L_1095789c:;
  /* 1095789c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095789f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109578a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109578a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109578a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109578ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109578ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109578b1 pop esi */
  ESI = (pop32());
  /* 109578b2 pop edi */
  EDI = (pop32());
  /* 109578b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109578b4 ret  */
  ESPCHK(0x10957580u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b5 @ 0x109578b5 (62 bytes, 15 insns) */
void f_109578b5(void) {
  FTRACE(0x109578b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109578b5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 109578ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109578bc push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 109578c2 call dword ptr [0x1095903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095903c))), 0x109578c8u);
  /* 109578c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109578ca mov dword ptr [0x1095b404], eax */
  w32((uint32_t)(0x1095b404), (EAX));
  /* 109578cf jne 0x109578d2 */
  if (!C.zf) goto L_109578d2;
  /* 109578d1 ret  */
  ESPCHK(0x109578b5u, _esp0);
  ESP += 4; return;
L_109578d2:;
  /* 109578d2 and dword ptr [0x1095b3fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1095b3fc)))&(0x0u); w32((uint32_t)(0x1095b3fc), (_r)); fl_logic(_r,32); }
  /* 109578d9 and dword ptr [0x1095b400], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1095b400)))&(0x0u); w32((uint32_t)(0x1095b400), (_r)); fl_logic(_r,32); }
  /* 109578e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109578e2 mov dword ptr [0x1095b3f8], eax */
  w32((uint32_t)(0x1095b3f8), (EAX));
  /* 109578e7 mov dword ptr [0x1095b3f0], 0x10 */
  w32((uint32_t)(0x1095b3f0), (0x10u));
  /* 109578f1 pop eax */
  EAX = (pop32());
  /* 109578f2 ret  */
  ESPCHK(0x109578b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f3 @ 0x109578f3 (43 bytes, 14 insns) */
void f_109578f3(void) {
  FTRACE(0x109578f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109578f3 mov eax, dword ptr [0x1095b400] */
  EAX = (r32((uint32_t)(0x1095b400)));
  /* 109578f8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 109578fb mov eax, dword ptr [0x1095b404] */
  EAX = (r32((uint32_t)(0x1095b404)));
  /* 10957900 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10957903:;
  /* 10957903 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957905 jae 0x1095791b */
  if (!C.cf) goto L_1095791b;
  /* 10957907 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1095790b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095790e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957914 jb 0x1095791d */
  if (C.cf) goto L_1095791d;
  /* 10957916 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957919 jmp 0x10957903 */
  goto L_10957903;
L_1095791b:;
  /* 1095791b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1095791d:;
  /* 1095791d ret  */
  ESPCHK(0x109578f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000791e @ 0x1095791e (811 bytes, 264 insns) */
void f_1095791e(void) {
  FTRACE(0x1095791eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1095791e push ebp */
  push32((uint32_t)(EBP));
  /* 1095791f mov ebp, esp */
  EBP = (ESP);
  /* 10957921 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957924 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10957927 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1095792a push ebx */
  push32((uint32_t)(EBX));
  /* 1095792b push esi */
  push32((uint32_t)(ESI));
  /* 1095792c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1095792f mov esi, edx */
  ESI = (EDX);
  /* 10957931 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957934 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10957937 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095793a push edi */
  push32((uint32_t)(EDI));
  /* 1095793b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1095793e mov ecx, esi */
  ECX = (ESI);
  /* 10957940 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10957943 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10957949 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1095794a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1095794d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10957954 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10957957 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1095795a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1095795d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10957960 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10957963 jne 0x109579e4 */
  if (!C.zf) goto L_109579e4;
  /* 10957965 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10957968 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1095796a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1095796b pop edi */
  EDI = (pop32());
  /* 1095796c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1095796f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957971 jbe 0x10957976 */
  if ((C.cf||C.zf)) goto L_10957976;
  /* 10957973 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10957976:;
  /* 10957976 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1095797a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095797e jne 0x109579c8 */
  if (!C.zf) goto L_109579c8;
  /* 10957980 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10957983 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957986 jae 0x109579a4 */
  if (!C.cf) goto L_109579a4;
  /* 10957988 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1095798d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1095798f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10957993 not edi */
  EDI = (~(EDI));
  /* 10957995 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10957999 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1095799b jne 0x109579c8 */
  if (!C.zf) goto L_109579c8;
  /* 1095799d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109579a0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 109579a2 jmp 0x109579c8 */
  goto L_109579c8;
L_109579a4:;
  /* 109579a4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109579a7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 109579ac shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 109579ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109579b1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 109579b5 not edi */
  EDI = (~(EDI));
  /* 109579b7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 109579be dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 109579c0 jne 0x109579c8 */
  if (!C.zf) goto L_109579c8;
  /* 109579c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109579c5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_109579c8:;
  /* 109579c8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 109579cc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 109579d0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 109579d3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 109579d7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 109579db add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109579de mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 109579e1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_109579e4:;
  /* 109579e4 mov edi, ebx */
  EDI = (EBX);
  /* 109579e6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 109579e9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109579ea cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109579ed jbe 0x109579f2 */
  if ((C.cf||C.zf)) goto L_109579f2;
  /* 109579ef push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109579f1 pop edi */
  EDI = (pop32());
L_109579f2:;
  /* 109579f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109579f5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109579f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109579fb jne 0x10957aa1 */
  if (!C.zf) goto L_10957aa1;
  /* 10957a01 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957a04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957a07 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10957a0a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10957a0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10957a0f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10957a10 pop edx */
  EDX = (pop32());
  /* 10957a11 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957a13 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10957a16 jbe 0x10957a1d */
  if ((C.cf||C.zf)) goto L_10957a1d;
  /* 10957a18 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10957a1b mov ecx, edx */
  ECX = (EDX);
L_10957a1d:;
  /* 10957a1d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957a20 mov edi, ebx */
  EDI = (EBX);
  /* 10957a22 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10957a25 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10957a28 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10957a29 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957a2b jbe 0x10957a2f */
  if ((C.cf||C.zf)) goto L_10957a2f;
  /* 10957a2d mov edi, edx */
  EDI = (EDX);
L_10957a2f:;
  /* 10957a2f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957a31 je 0x10957a9e */
  if (C.zf) goto L_10957a9e;
  /* 10957a33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10957a36 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10957a39 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957a3c jne 0x10957a86 */
  if (!C.zf) goto L_10957a86;
  /* 10957a3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10957a41 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957a44 jae 0x10957a62 */
  if (!C.cf) goto L_10957a62;
  /* 10957a46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10957a4b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10957a4d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10957a51 not edx */
  EDX = (~(EDX));
  /* 10957a53 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10957a57 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10957a59 jne 0x10957a86 */
  if (!C.zf) goto L_10957a86;
  /* 10957a5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957a5e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10957a60 jmp 0x10957a86 */
  goto L_10957a86;
L_10957a62:;
  /* 10957a62 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957a65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10957a6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10957a6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10957a6f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10957a73 not edx */
  EDX = (~(EDX));
  /* 10957a75 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10957a7c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10957a7e jne 0x10957a86 */
  if (!C.zf) goto L_10957a86;
  /* 10957a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957a83 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10957a86:;
  /* 10957a86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10957a89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10957a8c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10957a8f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10957a92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10957a95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10957a98 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10957a9b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10957a9e:;
  /* 10957a9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10957aa1:;
  /* 10957aa1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957aa5 jne 0x10957ab0 */
  if (!C.zf) goto L_10957ab0;
  /* 10957aa7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957aaa je 0x10957b39 */
  if (C.zf) goto L_10957b39;
L_10957ab0:;
  /* 10957ab0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10957ab3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10957ab6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10957ab9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10957abc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10957abf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10957ac2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10957ac5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10957ac8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10957acb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10957ace mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10957ad1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957ad4 jne 0x10957b39 */
  if (!C.zf) goto L_10957b39;
  /* 10957ad6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10957ada cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957add mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10957ae0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10957ae2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10957ae6 jae 0x10957b0d */
  if (!C.cf) goto L_10957b0d;
  /* 10957ae8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957aec jne 0x10957afc */
  if (!C.zf) goto L_10957afc;
  /* 10957aee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10957af3 mov ecx, edi */
  ECX = (EDI);
  /* 10957af5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10957af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957afa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10957afc:;
  /* 10957afc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10957b01 mov ecx, edi */
  ECX = (EDI);
  /* 10957b03 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10957b05 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10957b09 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10957b0b jmp 0x10957b36 */
  goto L_10957b36;
L_10957b0d:;
  /* 10957b0d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957b11 jne 0x10957b23 */
  if (!C.zf) goto L_10957b23;
  /* 10957b13 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10957b16 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10957b1b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10957b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957b20 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10957b23:;
  /* 10957b23 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10957b26 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10957b2b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10957b2d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10957b34 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10957b36:;
  /* 10957b36 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10957b39:;
  /* 10957b39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10957b3c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10957b3e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10957b42 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10957b44 jne 0x10957c44 */
  if (!C.zf) goto L_10957c44;
  /* 10957b4a mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957b4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10957b51 je 0x10957c36 */
  if (C.zf) goto L_10957c36;
  /* 10957b57 mov ecx, dword ptr [0x1095b3f4] */
  ECX = (r32((uint32_t)(0x1095b3f4)));
  /* 10957b5d mov edi, dword ptr [0x10959054] */
  EDI = (r32((uint32_t)(0x10959054)));
  /* 10957b63 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10957b66 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957b69 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10957b6e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10957b73 push ebx */
  push32((uint32_t)(EBX));
  /* 10957b74 push ecx */
  push32((uint32_t)(ECX));
  /* 10957b75 call edi */
  call_ind((uint32_t)(EDI), 0x10957b77u);
  /* 10957b77 mov ecx, dword ptr [0x1095b3f4] */
  ECX = (r32((uint32_t)(0x1095b3f4)));
  /* 10957b7d mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957b82 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10957b87 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10957b89 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10957b8c mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957b91 mov ecx, dword ptr [0x1095b3f4] */
  ECX = (r32((uint32_t)(0x1095b3f4)));
  /* 10957b97 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10957b9a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10957ba2 mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957ba7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10957baa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10957bad mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957bb2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10957bb5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957bb9 jne 0x10957bc4 */
  if (!C.zf) goto L_10957bc4;
  /* 10957bbb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10957bbf mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
L_10957bc4:;
  /* 10957bc4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957bc8 jne 0x10957c36 */
  if (!C.zf) goto L_10957c36;
  /* 10957bca push ebx */
  push32((uint32_t)(EBX));
  /* 10957bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10957bcd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10957bd0 call edi */
  call_ind((uint32_t)(EDI), 0x10957bd2u);
  /* 10957bd2 mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957bd7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10957bda push 0 */
  push32((uint32_t)(0x0u));
  /* 10957bdc push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10957be2 call dword ptr [0x10959050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959050))), 0x10957be8u);
  /* 10957be8 mov eax, dword ptr [0x1095b400] */
  EAX = (r32((uint32_t)(0x1095b400)));
  /* 10957bed mov edx, dword ptr [0x1095b404] */
  EDX = (r32((uint32_t)(0x1095b404)));
  /* 10957bf3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10957bf6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10957bf9 mov ecx, eax */
  ECX = (EAX);
  /* 10957bfb mov eax, dword ptr [0x1095b3fc] */
  EAX = (r32((uint32_t)(0x1095b3fc)));
  /* 10957c00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957c02 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10957c06 push ecx */
  push32((uint32_t)(ECX));
  /* 10957c07 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10957c0a push ecx */
  push32((uint32_t)(ECX));
  /* 10957c0b push eax */
  push32((uint32_t)(EAX));
  /* 10957c0c call 0x109586a0 */
  push32(0x10957c11u); f_109586a0();
  /* 10957c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957c14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10957c17 dec dword ptr [0x1095b400] */
  { uint32_t _r=(r32((uint32_t)(0x1095b400)))-1; w32((uint32_t)(0x1095b400), (_r)); fl_dec(_r,32); }
  /* 10957c1d cmp eax, dword ptr [0x1095b3fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1095b3fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957c23 jbe 0x10957c28 */
  if ((C.cf||C.zf)) goto L_10957c28;
  /* 10957c25 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10957c28:;
  /* 10957c28 mov ecx, dword ptr [0x1095b404] */
  ECX = (r32((uint32_t)(0x1095b404)));
  /* 10957c2e mov dword ptr [0x1095b3f8], ecx */
  w32((uint32_t)(0x1095b3f8), (ECX));
  /* 10957c34 jmp 0x10957c39 */
  goto L_10957c39;
L_10957c36:;
  /* 10957c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10957c39:;
  /* 10957c39 mov dword ptr [0x1095b3fc], eax */
  w32((uint32_t)(0x1095b3fc), (EAX));
  /* 10957c3e mov dword ptr [0x1095b3f4], esi */
  w32((uint32_t)(0x1095b3f4), (ESI));
L_10957c44:;
  /* 10957c44 pop edi */
  EDI = (pop32());
  /* 10957c45 pop esi */
  ESI = (pop32());
  /* 10957c46 pop ebx */
  EBX = (pop32());
  /* 10957c47 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957c48 ret  */
  ESPCHK(0x1095791eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007c49 @ 0x10957c49 (777 bytes, 275 insns) */
void f_10957c49(void) {
  FTRACE(0x10957c49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957c49 push ebp */
  push32((uint32_t)(EBP));
  /* 10957c4a mov ebp, esp */
  EBP = (ESP);
  /* 10957c4c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957c4f mov eax, dword ptr [0x1095b400] */
  EAX = (r32((uint32_t)(0x1095b400)));
  /* 10957c54 mov edx, dword ptr [0x1095b404] */
  EDX = (r32((uint32_t)(0x1095b404)));
  /* 10957c5a push ebx */
  push32((uint32_t)(EBX));
  /* 10957c5b push esi */
  push32((uint32_t)(ESI));
  /* 10957c5c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10957c5f push edi */
  push32((uint32_t)(EDI));
  /* 10957c60 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10957c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957c66 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10957c69 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10957c6c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10957c6f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10957c72 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10957c75 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10957c76 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957c79 jge 0x10957c89 */
  if ((C.sf==C.of)) goto L_10957c89;
  /* 10957c7b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10957c7e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10957c80 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10957c84 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10957c87 jmp 0x10957c99 */
  goto L_10957c99;
L_10957c89:;
  /* 10957c89 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957c8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10957c8f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10957c91 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10957c93 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10957c96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10957c99:;
  /* 10957c99 mov eax, dword ptr [0x1095b3f8] */
  EAX = (r32((uint32_t)(0x1095b3f8)));
  /* 10957c9e mov ebx, eax */
  EBX = (EAX);
  /* 10957ca0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957ca2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10957ca5 jae 0x10957cc0 */
  if (!C.cf) goto L_10957cc0;
L_10957ca7:;
  /* 10957ca7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10957caa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10957cac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10957caf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10957cb1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10957cb3 jne 0x10957cc0 */
  if (!C.zf) goto L_10957cc0;
  /* 10957cb5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957cb8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957cbb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10957cbe jb 0x10957ca7 */
  if (C.cf) goto L_10957ca7;
L_10957cc0:;
  /* 10957cc0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957cc3 jne 0x10957d3e */
  if (!C.zf) goto L_10957d3e;
  /* 10957cc5 mov ebx, edx */
  EBX = (EDX);
L_10957cc7:;
  /* 10957cc7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957cc9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10957ccc jae 0x10957ce3 */
  if (!C.cf) goto L_10957ce3;
  /* 10957cce mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10957cd1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10957cd3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10957cd6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10957cd8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10957cda jne 0x10957ce1 */
  if (!C.zf) goto L_10957ce1;
  /* 10957cdc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957cdf jmp 0x10957cc7 */
  goto L_10957cc7;
L_10957ce1:;
  /* 10957ce1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10957ce3:;
  /* 10957ce3 jne 0x10957d3e */
  if (!C.zf) goto L_10957d3e;
L_10957ce5:;
  /* 10957ce5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957ce8 jae 0x10957cfb */
  if (!C.cf) goto L_10957cfb;
  /* 10957cea cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957cee jne 0x10957cf8 */
  if (!C.zf) goto L_10957cf8;
  /* 10957cf0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957cf3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10957cf6 jmp 0x10957ce5 */
  goto L_10957ce5;
L_10957cf8:;
  /* 10957cf8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10957cfb:;
  /* 10957cfb jne 0x10957d23 */
  if (!C.zf) goto L_10957d23;
  /* 10957cfd mov ebx, edx */
  EBX = (EDX);
L_10957cff:;
  /* 10957cff cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957d01 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10957d04 jae 0x10957d13 */
  if (!C.cf) goto L_10957d13;
  /* 10957d06 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957d0a jne 0x10957d11 */
  if (!C.zf) goto L_10957d11;
  /* 10957d0c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957d0f jmp 0x10957cff */
  goto L_10957cff;
L_10957d11:;
  /* 10957d11 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10957d13:;
  /* 10957d13 jne 0x10957d23 */
  if (!C.zf) goto L_10957d23;
  /* 10957d15 call 0x10957f52 */
  push32(0x10957d1au); f_10957f52();
  /* 10957d1a mov ebx, eax */
  EBX = (EAX);
  /* 10957d1c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10957d1e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10957d21 je 0x10957d37 */
  if (C.zf) goto L_10957d37;
L_10957d23:;
  /* 10957d23 push ebx */
  push32((uint32_t)(EBX));
  /* 10957d24 call 0x10958003 */
  push32(0x10957d29u); f_10958003();
  /* 10957d29 pop ecx */
  ECX = (pop32());
  /* 10957d2a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10957d2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10957d2f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10957d32 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957d35 jne 0x10957d3e */
  if (!C.zf) goto L_10957d3e;
L_10957d37:;
  /* 10957d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10957d39 jmp 0x10957f4d */
  goto L_10957f4d;
L_10957d3e:;
  /* 10957d3e mov dword ptr [0x1095b3f8], ebx */
  w32((uint32_t)(0x1095b3f8), (EBX));
  /* 10957d44 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10957d47 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10957d49 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957d4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10957d4f je 0x10957d65 */
  if (C.zf) goto L_10957d65;
  /* 10957d51 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10957d58 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10957d5c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10957d5f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10957d61 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10957d63 jne 0x10957d9c */
  if (!C.zf) goto L_10957d9c;
L_10957d65:;
  /* 10957d65 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10957d6b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10957d6e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10957d71 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10957d74 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10957d78 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10957d7b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10957d7d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10957d80 jne 0x10957d99 */
  if (!C.zf) goto L_10957d99;
L_10957d82:;
  /* 10957d82 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10957d88 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10957d8b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10957d8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957d91 mov edi, esi */
  EDI = (ESI);
  /* 10957d93 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10957d95 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10957d97 je 0x10957d82 */
  if (C.zf) goto L_10957d82;
L_10957d99:;
  /* 10957d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10957d9c:;
  /* 10957d9c mov ecx, edx */
  ECX = (EDX);
  /* 10957d9e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10957da0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10957da6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10957dad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10957db0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10957db4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10957db6 jne 0x10957dc5 */
  if (!C.zf) goto L_10957dc5;
  /* 10957db8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10957dbf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10957dc1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10957dc4 pop edi */
  EDI = (pop32());
L_10957dc5:;
  /* 10957dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10957dc7 jl 0x10957dce */
  if ((C.sf!=C.of)) goto L_10957dce;
  /* 10957dc9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10957dcb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10957dcc jmp 0x10957dc5 */
  goto L_10957dc5;
L_10957dce:;
  /* 10957dce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10957dd1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10957dd5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10957dd7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10957dda mov esi, ecx */
  ESI = (ECX);
  /* 10957ddc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10957ddf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10957de2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10957de3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957de6 jle 0x10957deb */
  if ((C.zf||C.sf!=C.of)) goto L_10957deb;
  /* 10957de8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10957dea pop esi */
  ESI = (pop32());
L_10957deb:;
  /* 10957deb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957ded je 0x10957f00 */
  if (C.zf) goto L_10957f00;
  /* 10957df3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10957df6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957df9 jne 0x10957e5c */
  if (!C.zf) goto L_10957e5c;
  /* 10957dfb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957dfe jge 0x10957e2b */
  if ((C.sf==C.of)) goto L_10957e2b;
  /* 10957e00 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10957e05 mov ecx, edi */
  ECX = (EDI);
  /* 10957e07 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10957e09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957e0c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10957e10 not ebx */
  EBX = (~(EBX));
  /* 10957e12 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10957e15 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10957e19 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10957e1d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10957e1f jne 0x10957e59 */
  if (!C.zf) goto L_10957e59;
  /* 10957e21 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957e24 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10957e27 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10957e29 jmp 0x10957e5c */
  goto L_10957e5c;
L_10957e2b:;
  /* 10957e2b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10957e2e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10957e33 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10957e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957e38 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10957e3c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10957e43 not ebx */
  EBX = (~(EBX));
  /* 10957e45 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10957e47 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10957e49 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10957e4c jne 0x10957e59 */
  if (!C.zf) goto L_10957e59;
  /* 10957e4e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10957e51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10957e54 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10957e57 jmp 0x10957e5c */
  goto L_10957e5c;
L_10957e59:;
  /* 10957e59 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10957e5c:;
  /* 10957e5c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10957e5f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10957e62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957e66 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10957e69 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10957e6c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10957e6f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10957e72 je 0x10957f0c */
  if (C.zf) goto L_10957f0c;
  /* 10957e78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10957e7b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10957e7f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10957e82 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10957e85 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10957e88 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10957e8b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10957e8e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10957e91 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10957e94 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957e97 jne 0x10957efd */
  if (!C.zf) goto L_10957efd;
  /* 10957e99 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10957e9d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957ea0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10957ea3 jge 0x10957ece */
  if ((C.sf==C.of)) goto L_10957ece;
  /* 10957ea5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10957ea7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957eab mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10957eaf jne 0x10957ebc */
  if (!C.zf) goto L_10957ebc;
  /* 10957eb1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10957eb6 mov ecx, esi */
  ECX = (ESI);
  /* 10957eb8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10957eba or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10957ebc:;
  /* 10957ebc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10957ec1 mov ecx, esi */
  ECX = (ESI);
  /* 10957ec3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10957ec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957ec8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10957ecc jmp 0x10957efd */
  goto L_10957efd;
L_10957ece:;
  /* 10957ece inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10957ed0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10957ed4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10957ed8 jne 0x10957ee7 */
  if (!C.zf) goto L_10957ee7;
  /* 10957eda lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10957edd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10957ee2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10957ee4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10957ee7:;
  /* 10957ee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957eea lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10957ef1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10957ef4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10957ef9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10957efb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10957efd:;
  /* 10957efd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10957f00:;
  /* 10957f00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10957f02 je 0x10957f0f */
  if (C.zf) goto L_10957f0f;
  /* 10957f04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10957f06 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10957f0a jmp 0x10957f0f */
  goto L_10957f0f;
L_10957f0c:;
  /* 10957f0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10957f0f:;
  /* 10957f0f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10957f12 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10957f14 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10957f17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10957f19 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10957f1d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10957f20 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10957f22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10957f24 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10957f27 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10957f29 jne 0x10957f45 */
  if (!C.zf) goto L_10957f45;
  /* 10957f2b cmp ebx, dword ptr [0x1095b3fc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1095b3fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957f31 jne 0x10957f45 */
  if (!C.zf) goto L_10957f45;
  /* 10957f33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957f36 cmp ecx, dword ptr [0x1095b3f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1095b3f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957f3c jne 0x10957f45 */
  if (!C.zf) goto L_10957f45;
  /* 10957f3e and dword ptr [0x1095b3fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1095b3fc)))&(0x0u); w32((uint32_t)(0x1095b3fc), (_r)); fl_logic(_r,32); }
L_10957f45:;
  /* 10957f45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10957f48 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10957f4a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10957f4d:;
  /* 10957f4d pop edi */
  EDI = (pop32());
  /* 10957f4e pop esi */
  ESI = (pop32());
  /* 10957f4f pop ebx */
  EBX = (pop32());
  /* 10957f50 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10957f51 ret  */
  ESPCHK(0x10957c49u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f52 @ 0x10957f52 (177 bytes, 53 insns) */
void f_10957f52(void) {
  FTRACE(0x10957f52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10957f52 mov eax, dword ptr [0x1095b400] */
  EAX = (r32((uint32_t)(0x1095b400)));
  /* 10957f57 mov ecx, dword ptr [0x1095b3f0] */
  ECX = (r32((uint32_t)(0x1095b3f0)));
  /* 10957f5d push esi */
  push32((uint32_t)(ESI));
  /* 10957f5e push edi */
  push32((uint32_t)(EDI));
  /* 10957f5f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10957f61 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957f63 jne 0x10957f95 */
  if (!C.zf) goto L_10957f95;
  /* 10957f65 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10957f69 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10957f6c push eax */
  push32((uint32_t)(EAX));
  /* 10957f6d push dword ptr [0x1095b404] */
  push32((uint32_t)(r32((uint32_t)(0x1095b404))));
  /* 10957f73 push edi */
  push32((uint32_t)(EDI));
  /* 10957f74 push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10957f7a call dword ptr [0x10959028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959028))), 0x10957f80u);
  /* 10957f80 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957f82 je 0x10957fe5 */
  if (C.zf) goto L_10957fe5;
  /* 10957f84 add dword ptr [0x1095b3f0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1095b3f0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1095b3f0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10957f8b mov dword ptr [0x1095b404], eax */
  w32((uint32_t)(0x1095b404), (EAX));
  /* 10957f90 mov eax, dword ptr [0x1095b400] */
  EAX = (r32((uint32_t)(0x1095b400)));
L_10957f95:;
  /* 10957f95 mov ecx, dword ptr [0x1095b404] */
  ECX = (r32((uint32_t)(0x1095b404)));
  /* 10957f9b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10957fa0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10957fa2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10957fa5 push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10957fab lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10957fae call dword ptr [0x1095903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095903c))), 0x10957fb4u);
  /* 10957fb4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957fb6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10957fb9 je 0x10957fe5 */
  if (C.zf) goto L_10957fe5;
  /* 10957fbb push 4 */
  push32((uint32_t)(0x4u));
  /* 10957fbd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10957fc2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10957fc7 push edi */
  push32((uint32_t)(EDI));
  /* 10957fc8 call dword ptr [0x1095902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095902c))), 0x10957fceu);
  /* 10957fce cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10957fd0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10957fd3 jne 0x10957fe9 */
  if (!C.zf) goto L_10957fe9;
  /* 10957fd5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10957fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10957fd9 push dword ptr [0x1095b628] */
  push32((uint32_t)(r32((uint32_t)(0x1095b628))));
  /* 10957fdf call dword ptr [0x10959050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959050))), 0x10957fe5u);
L_10957fe5:;
  /* 10957fe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10957fe7 jmp 0x10958000 */
  goto L_10958000;
L_10957fe9:;
  /* 10957fe9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10957fed mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10957fef mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10957ff2 inc dword ptr [0x1095b400] */
  { uint32_t _r=(r32((uint32_t)(0x1095b400)))+1; w32((uint32_t)(0x1095b400), (_r)); fl_inc(_r,32); }
  /* 10957ff8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10957ffb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10957ffe mov eax, esi */
  EAX = (ESI);
L_10958000:;
  /* 10958000 pop edi */
  EDI = (pop32());
  /* 10958001 pop esi */
  ESI = (pop32());
  /* 10958002 ret  */
  ESPCHK(0x10957f52u, _esp0);
  ESP += 4; return;
}

/* FUN_10008003 @ 0x10958003 (251 bytes, 85 insns) */
void f_10958003(void) {
  FTRACE(0x10958003u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958003 push ebp */
  push32((uint32_t)(EBP));
  /* 10958004 mov ebp, esp */
  EBP = (ESP);
  /* 10958006 push ecx */
  push32((uint32_t)(ECX));
  /* 10958007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1095800a push ebx */
  push32((uint32_t)(EBX));
  /* 1095800b push esi */
  push32((uint32_t)(ESI));
  /* 1095800c push edi */
  push32((uint32_t)(EDI));
  /* 1095800d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10958010 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10958013 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10958015:;
  /* 10958015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10958017 jl 0x1095801e */
  if ((C.sf!=C.of)) goto L_1095801e;
  /* 10958019 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1095801b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1095801c jmp 0x10958015 */
  goto L_10958015;
L_1095801e:;
  /* 1095801e mov eax, ebx */
  EAX = (EBX);
  /* 10958020 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10958022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10958028 pop edx */
  EDX = (pop32());
  /* 10958029 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10958030 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10958033:;
  /* 10958033 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10958036 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10958039 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095803c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1095803d jne 0x10958033 */
  if (!C.zf) goto L_10958033;
  /* 1095803f mov edi, ebx */
  EDI = (EBX);
  /* 10958041 push 4 */
  push32((uint32_t)(0x4u));
  /* 10958043 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10958046 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10958049 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1095804e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10958053 push edi */
  push32((uint32_t)(EDI));
  /* 10958054 call dword ptr [0x1095902c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095902c))), 0x1095805au);
  /* 1095805a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095805c jne 0x10958066 */
  if (!C.zf) goto L_10958066;
  /* 1095805e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10958061 jmp 0x109580f9 */
  goto L_109580f9;
L_10958066:;
  /* 10958066 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1095806c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095806e ja 0x109580ac */
  if ((!C.cf&&!C.zf)) goto L_109580ac;
  /* 10958070 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10958073:;
  /* 10958073 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10958077 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1095807e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10958084 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1095808b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1095808d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10958093 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10958096 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 109580a0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109580a5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 109580a8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109580aa jbe 0x10958073 */
  if ((C.cf||C.zf)) goto L_10958073;
L_109580ac:;
  /* 109580ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109580af lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 109580b2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109580b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109580b9 pop edi */
  EDI = (pop32());
  /* 109580ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 109580bd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 109580c0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 109580c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 109580c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 109580c9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 109580ce mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 109580d5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 109580d8 mov cl, al */
  CL = (AL);
  /* 109580da inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 109580dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109580de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109580e1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 109580e4 jne 0x109580e9 */
  if (!C.zf) goto L_109580e9;
  /* 109580e6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_109580e9:;
  /* 109580e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109580ee mov ecx, ebx */
  ECX = (EBX);
  /* 109580f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109580f2 not edx */
  EDX = (~(EDX));
  /* 109580f4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 109580f7 mov eax, ebx */
  EAX = (EBX);
L_109580f9:;
  /* 109580f9 pop edi */
  EDI = (pop32());
  /* 109580fa pop esi */
  ESI = (pop32());
  /* 109580fb pop ebx */
  EBX = (pop32());
  /* 109580fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109580fd ret  */
  ESPCHK(0x10958003u, _esp0);
  ESP += 4; return;
}

/* FUN_100080fe @ 0x109580fe (137 bytes, 50 insns) */
void f_109580fe(void) {
  FTRACE(0x109580feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109580fe push ebx */
  push32((uint32_t)(EBX));
  /* 109580ff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10958101 cmp dword ptr [0x1095b3b4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1095b3b4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958107 push esi */
  push32((uint32_t)(ESI));
  /* 10958108 push edi */
  push32((uint32_t)(EDI));
  /* 10958109 jne 0x1095814d */
  if (!C.zf) goto L_1095814d;
  /* 1095810b push 0x10959458 */
  push32((uint32_t)(0x10959458u));
  /* 10958110 call dword ptr [0x10959020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959020))), 0x10958116u);
  /* 10958116 mov edi, eax */
  EDI = (EAX);
  /* 10958118 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095811a je 0x10958183 */
  if (C.zf) goto L_10958183;
  /* 1095811c mov esi, dword ptr [0x10959024] */
  ESI = (r32((uint32_t)(0x10959024)));
  /* 10958122 push 0x1095944c */
  push32((uint32_t)(0x1095944cu));
  /* 10958127 push edi */
  push32((uint32_t)(EDI));
  /* 10958128 call esi */
  call_ind((uint32_t)(ESI), 0x1095812au);
  /* 1095812a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095812c mov dword ptr [0x1095b3b4], eax */
  w32((uint32_t)(0x1095b3b4), (EAX));
  /* 10958131 je 0x10958183 */
  if (C.zf) goto L_10958183;
  /* 10958133 push 0x1095943c */
  push32((uint32_t)(0x1095943cu));
  /* 10958138 push edi */
  push32((uint32_t)(EDI));
  /* 10958139 call esi */
  call_ind((uint32_t)(ESI), 0x1095813bu);
  /* 1095813b push 0x10959428 */
  push32((uint32_t)(0x10959428u));
  /* 10958140 push edi */
  push32((uint32_t)(EDI));
  /* 10958141 mov dword ptr [0x1095b3b8], eax */
  w32((uint32_t)(0x1095b3b8), (EAX));
  /* 10958146 call esi */
  call_ind((uint32_t)(ESI), 0x10958148u);
  /* 10958148 mov dword ptr [0x1095b3bc], eax */
  w32((uint32_t)(0x1095b3bc), (EAX));
L_1095814d:;
  /* 1095814d mov eax, dword ptr [0x1095b3b8] */
  EAX = (r32((uint32_t)(0x1095b3b8)));
  /* 10958152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10958154 je 0x1095816c */
  if (C.zf) goto L_1095816c;
  /* 10958156 call eax */
  call_ind((uint32_t)(EAX), 0x10958158u);
  /* 10958158 mov ebx, eax */
  EBX = (EAX);
  /* 1095815a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1095815c je 0x1095816c */
  if (C.zf) goto L_1095816c;
  /* 1095815e mov eax, dword ptr [0x1095b3bc] */
  EAX = (r32((uint32_t)(0x1095b3bc)));
  /* 10958163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10958165 je 0x1095816c */
  if (C.zf) goto L_1095816c;
  /* 10958167 push ebx */
  push32((uint32_t)(EBX));
  /* 10958168 call eax */
  call_ind((uint32_t)(EAX), 0x1095816au);
  /* 1095816a mov ebx, eax */
  EBX = (EAX);
L_1095816c:;
  /* 1095816c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10958170 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10958174 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10958178 push ebx */
  push32((uint32_t)(EBX));
  /* 10958179 call dword ptr [0x1095b3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095b3b4))), 0x1095817fu);
L_1095817f:;
  /* 1095817f pop edi */
  EDI = (pop32());
  /* 10958180 pop esi */
  ESI = (pop32());
  /* 10958181 pop ebx */
  EBX = (pop32());
  /* 10958182 ret  */
  ESPCHK(0x109580feu, _esp0);
  ESP += 4; return;
L_10958183:;
  /* 10958183 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10958185 jmp 0x1095817f */
  goto L_1095817f;
}

/* _strncpy @ 0x10958190 (254 bytes, 109 insns) */
void f_10958190(void) {
  FTRACE(0x10958190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958190 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10958194 push edi */
  push32((uint32_t)(EDI));
  /* 10958195 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10958197 je 0x10958213 */
  if (C.zf) goto L_10958213;
  /* 10958199 push esi */
  push32((uint32_t)(ESI));
  /* 1095819a push ebx */
  push32((uint32_t)(EBX));
  /* 1095819b mov ebx, ecx */
  EBX = (ECX);
  /* 1095819d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 109581a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 109581a7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 109581ab jne 0x109581b4 */
  if (!C.zf) goto L_109581b4;
  /* 109581ad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109581b0 jne 0x10958221 */
  if (!C.zf) goto L_10958221;
  /* 109581b2 jmp 0x109581d5 */
  goto L_109581d5;
L_109581b4:;
  /* 109581b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109581b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109581b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109581b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109581ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109581bb je 0x109581e2 */
  if (C.zf) goto L_109581e2;
  /* 109581bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109581bf je 0x109581ea */
  if (C.zf) goto L_109581ea;
  /* 109581c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 109581c7 jne 0x109581b4 */
  if (!C.zf) goto L_109581b4;
  /* 109581c9 mov ebx, ecx */
  EBX = (ECX);
  /* 109581cb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109581ce jne 0x10958221 */
  if (!C.zf) goto L_10958221;
L_109581d0:;
  /* 109581d0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 109581d3 je 0x109581e2 */
  if (C.zf) goto L_109581e2;
L_109581d5:;
  /* 109581d5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109581d7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109581d8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109581da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109581db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109581dd je 0x1095820e */
  if (C.zf) goto L_1095820e;
  /* 109581df dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109581e0 jne 0x109581d5 */
  if (!C.zf) goto L_109581d5;
L_109581e2:;
  /* 109581e2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109581e6 pop ebx */
  EBX = (pop32());
  /* 109581e7 pop esi */
  ESI = (pop32());
  /* 109581e8 pop edi */
  EDI = (pop32());
  /* 109581e9 ret  */
  ESPCHK(0x10958190u, _esp0);
  ESP += 4; return;
L_109581ea:;
  /* 109581ea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109581f0 je 0x10958204 */
  if (C.zf) goto L_10958204;
L_109581f2:;
  /* 109581f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109581f4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109581f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109581f6 je 0x10958286 */
  if (C.zf) goto L_10958286;
  /* 109581fc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10958202 jne 0x109581f2 */
  if (!C.zf) goto L_109581f2;
L_10958204:;
  /* 10958204 mov ebx, ecx */
  EBX = (ECX);
  /* 10958206 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10958209 jne 0x10958277 */
  if (!C.zf) goto L_10958277;
L_1095820b:;
  /* 1095820b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1095820d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1095820e:;
  /* 1095820e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1095820f jne 0x1095820b */
  if (!C.zf) goto L_1095820b;
  /* 10958211 pop ebx */
  EBX = (pop32());
  /* 10958212 pop esi */
  ESI = (pop32());
L_10958213:;
  /* 10958213 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10958217 pop edi */
  EDI = (pop32());
  /* 10958218 ret  */
  ESPCHK(0x10958190u, _esp0);
  ESP += 4; return;
L_10958219:;
  /* 10958219 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1095821b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095821e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1095821f je 0x109581d0 */
  if (C.zf) goto L_109581d0;
L_10958221:;
  /* 10958221 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10958226 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10958228 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095822a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1095822d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1095822f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10958231 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10958234 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10958239 je 0x10958219 */
  if (C.zf) goto L_10958219;
  /* 1095823b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1095823d je 0x1095826b */
  if (C.zf) goto L_1095826b;
  /* 1095823f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10958241 je 0x10958261 */
  if (C.zf) goto L_10958261;
  /* 10958243 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10958249 je 0x10958257 */
  if (C.zf) goto L_10958257;
  /* 1095824b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10958251 jne 0x10958219 */
  if (!C.zf) goto L_10958219;
  /* 10958253 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10958255 jmp 0x1095826f */
  goto L_1095826f;
L_10958257:;
  /* 10958257 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1095825d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1095825f jmp 0x1095826f */
  goto L_1095826f;
L_10958261:;
  /* 10958261 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10958267 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10958269 jmp 0x1095826f */
  goto L_1095826f;
L_1095826b:;
  /* 1095826b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1095826d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1095826f:;
  /* 1095826f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10958272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10958274 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10958275 je 0x10958281 */
  if (C.zf) goto L_10958281;
L_10958277:;
  /* 10958277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10958279:;
  /* 10958279 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1095827b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095827e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1095827f jne 0x10958279 */
  if (!C.zf) goto L_10958279;
L_10958281:;
  /* 10958281 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10958284 jne 0x1095820b */
  if (!C.zf) goto L_1095820b;
L_10958286:;
  /* 10958286 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1095828a pop ebx */
  EBX = (pop32());
  /* 1095828b pop esi */
  ESI = (pop32());
  /* 1095828c pop edi */
  EDI = (pop32());
  /* 1095828d ret  */
  ESPCHK(0x10958190u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10958290 (88 bytes, 40 insns) */
void f_10958290(void) {
  FTRACE(0x10958290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958290 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10958294 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10958298 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1095829a je 0x109582e3 */
  if (C.zf) goto L_109582e3;
  /* 1095829c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1095829e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 109582a2 push edi */
  push32((uint32_t)(EDI));
  /* 109582a3 mov edi, ecx */
  EDI = (ECX);
  /* 109582a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109582a8 jb 0x109582d7 */
  if (C.cf) goto L_109582d7;
  /* 109582aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109582ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 109582af je 0x109582b9 */
  if (C.zf) goto L_109582b9;
  /* 109582b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_109582b3:;
  /* 109582b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109582b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109582b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109582b7 jne 0x109582b3 */
  if (!C.zf) goto L_109582b3;
L_109582b9:;
  /* 109582b9 mov ecx, eax */
  ECX = (EAX);
  /* 109582bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 109582be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109582c0 mov ecx, eax */
  ECX = (EAX);
  /* 109582c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109582c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109582c7 mov ecx, edx */
  ECX = (EDX);
  /* 109582c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109582cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109582cf je 0x109582d7 */
  if (C.zf) goto L_109582d7;
  /* 109582d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109582d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109582d5 je 0x109582dd */
  if (C.zf) goto L_109582dd;
L_109582d7:;
  /* 109582d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109582d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109582da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 109582db jne 0x109582d7 */
  if (!C.zf) goto L_109582d7;
L_109582dd:;
  /* 109582dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109582e1 pop edi */
  EDI = (pop32());
  /* 109582e2 ret  */
  ESPCHK(0x10958290u, _esp0);
  ESP += 4; return;
L_109582e3:;
  /* 109582e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 109582e7 ret  */
  ESPCHK(0x10958290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082e8 @ 0x109582e8 (27 bytes, 13 insns) */
void f_109582e8(void) {
  FTRACE(0x109582e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109582e8 mov eax, dword ptr [0x1095b3c0] */
  EAX = (r32((uint32_t)(0x1095b3c0)));
  /* 109582ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109582ef je 0x10958300 */
  if (C.zf) goto L_10958300;
  /* 109582f1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 109582f5 call eax */
  call_ind((uint32_t)(EAX), 0x109582f7u);
  /* 109582f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109582f9 pop ecx */
  ECX = (pop32());
  /* 109582fa je 0x10958300 */
  if (C.zf) goto L_10958300;
  /* 109582fc push 1 */
  push32((uint32_t)(0x1u));
  /* 109582fe pop eax */
  EAX = (pop32());
  /* 109582ff ret  */
  ESPCHK(0x109582e8u, _esp0);
  ESP += 4; return;
L_10958300:;
  /* 10958300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10958302 ret  */
  ESPCHK(0x109582e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008303 @ 0x10958303 (511 bytes, 193 insns) */
void f_10958303(void) {
  FTRACE(0x10958303u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958303 push ebp */
  push32((uint32_t)(EBP));
  /* 10958304 mov ebp, esp */
  EBP = (ESP);
  /* 10958306 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10958308 push 0x10959470 */
  push32((uint32_t)(0x10959470u));
  /* 1095830d push 0x10958ad0 */
  push32((uint32_t)(0x10958ad0u));
  /* 10958312 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10958318 push eax */
  push32((uint32_t)(EAX));
  /* 10958319 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10958320 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10958323 push ebx */
  push32((uint32_t)(EBX));
  /* 10958324 push esi */
  push32((uint32_t)(ESI));
  /* 10958325 push edi */
  push32((uint32_t)(EDI));
  /* 10958326 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10958329 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1095832b cmp dword ptr [0x1095b3e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x1095b3e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958331 jne 0x10958379 */
  if (!C.zf) goto L_10958379;
  /* 10958333 push edi */
  push32((uint32_t)(EDI));
  /* 10958334 push edi */
  push32((uint32_t)(EDI));
  /* 10958335 push 1 */
  push32((uint32_t)(0x1u));
  /* 10958337 pop ebx */
  EBX = (pop32());
  /* 10958338 push ebx */
  push32((uint32_t)(EBX));
  /* 10958339 push 0x10959468 */
  push32((uint32_t)(0x10959468u));
  /* 1095833e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10958343 push esi */
  push32((uint32_t)(ESI));
  /* 10958344 push edi */
  push32((uint32_t)(EDI));
  /* 10958345 call dword ptr [0x10959014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959014))), 0x1095834bu);
  /* 1095834b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095834d je 0x10958357 */
  if (C.zf) goto L_10958357;
  /* 1095834f mov dword ptr [0x1095b3e8], ebx */
  w32((uint32_t)(0x1095b3e8), (EBX));
  /* 10958355 jmp 0x10958379 */
  goto L_10958379;
L_10958357:;
  /* 10958357 push edi */
  push32((uint32_t)(EDI));
  /* 10958358 push edi */
  push32((uint32_t)(EDI));
  /* 10958359 push ebx */
  push32((uint32_t)(EBX));
  /* 1095835a push 0x10959464 */
  push32((uint32_t)(0x10959464u));
  /* 1095835f push esi */
  push32((uint32_t)(ESI));
  /* 10958360 push edi */
  push32((uint32_t)(EDI));
  /* 10958361 call dword ptr [0x10959018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959018))), 0x10958367u);
  /* 10958367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10958369 je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 1095836f mov dword ptr [0x1095b3e8], 2 */
  w32((uint32_t)(0x1095b3e8), (0x2u));
L_10958379:;
  /* 10958379 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095837c jle 0x1095838e */
  if ((C.zf||C.sf!=C.of)) goto L_1095838e;
  /* 1095837e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10958381 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10958384 call 0x10958527 */
  push32(0x10958389u); f_10958527();
  /* 10958389 pop ecx */
  ECX = (pop32());
  /* 1095838a pop ecx */
  ECX = (pop32());
  /* 1095838b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1095838e:;
  /* 1095838e mov eax, dword ptr [0x1095b3e8] */
  EAX = (r32((uint32_t)(0x1095b3e8)));
  /* 10958393 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958396 jne 0x109583b5 */
  if (!C.zf) goto L_109583b5;
  /* 10958398 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1095839b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1095839e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 109583a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109583a4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109583a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109583aa call dword ptr [0x10959018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959018))), 0x109583b0u);
  /* 109583b0 jmp 0x10958493 */
  goto L_10958493;
L_109583b5:;
  /* 109583b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109583b8 jne 0x10958491 */
  if (!C.zf) goto L_10958491;
  /* 109583be cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109583c1 jne 0x109583cb */
  if (!C.zf) goto L_109583cb;
  /* 109583c3 mov eax, dword ptr [0x1095b3e0] */
  EAX = (r32((uint32_t)(0x1095b3e0)));
  /* 109583c8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_109583cb:;
  /* 109583cb push edi */
  push32((uint32_t)(EDI));
  /* 109583cc push edi */
  push32((uint32_t)(EDI));
  /* 109583cd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 109583d0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109583d3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 109583d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109583d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109583da and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 109583dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109583de push eax */
  push32((uint32_t)(EAX));
  /* 109583df push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 109583e2 call dword ptr [0x1095901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095901c))), 0x109583e8u);
  /* 109583e8 mov ebx, eax */
  EBX = (EAX);
  /* 109583ea mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 109583ed cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109583ef je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 109583f5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 109583f8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 109583fb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109583fe and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10958400 call 0x10958bb0 */
  push32(0x10958405u); f_10958bb0();
  /* 10958405 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10958408 mov eax, esp */
  EAX = (ESP);
  /* 1095840a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1095840d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10958411 jmp 0x10958426 */
  goto L_10958426;
  /* 10958413 push 1 */
  push32((uint32_t)(0x1u));
  /* 10958415 pop eax */
  EAX = (pop32());
  /* 10958416 ret  */
  ESPCHK(0x10958303u, _esp0);
  ESP += 4; return;
  /* 10958417 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1095841a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1095841c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1095841f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10958423 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10958426:;
  /* 10958426 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958429 je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 1095842b push ebx */
  push32((uint32_t)(EBX));
  /* 1095842c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1095842f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10958432 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10958435 push 1 */
  push32((uint32_t)(0x1u));
  /* 10958437 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1095843a call dword ptr [0x1095901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095901c))), 0x10958440u);
  /* 10958440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10958442 je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 10958444 push edi */
  push32((uint32_t)(EDI));
  /* 10958445 push edi */
  push32((uint32_t)(EDI));
  /* 10958446 push ebx */
  push32((uint32_t)(EBX));
  /* 10958447 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1095844a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1095844d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10958450 call dword ptr [0x10959014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959014))), 0x10958456u);
  /* 10958456 mov esi, eax */
  ESI = (EAX);
  /* 10958458 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1095845b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095845d je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 1095845f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10958463 je 0x109584a5 */
  if (C.zf) goto L_109584a5;
  /* 10958465 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958468 je 0x10958520 */
  if (C.zf) goto L_10958520;
  /* 1095846e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958471 jg 0x10958491 */
  if ((!C.zf&&C.sf==C.of)) goto L_10958491;
  /* 10958473 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10958476 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10958479 push ebx */
  push32((uint32_t)(EBX));
  /* 1095847a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1095847d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10958480 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10958483 call dword ptr [0x10959014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959014))), 0x10958489u);
  /* 10958489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1095848b jne 0x10958520 */
  if (!C.zf) goto L_10958520;
L_10958491:;
  /* 10958491 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10958493:;
  /* 10958493 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10958496 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10958499 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109584a0 pop edi */
  EDI = (pop32());
  /* 109584a1 pop esi */
  ESI = (pop32());
  /* 109584a2 pop ebx */
  EBX = (pop32());
  /* 109584a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109584a4 ret  */
  ESPCHK(0x10958303u, _esp0);
  ESP += 4; return;
L_109584a5:;
  /* 109584a5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109584ac lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 109584af add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109584b2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109584b4 call 0x10958bb0 */
  push32(0x109584b9u); f_10958bb0();
  /* 109584b9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109584bc mov ebx, esp */
  EBX = (ESP);
  /* 109584be mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 109584c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109584c5 jmp 0x109584d9 */
  goto L_109584d9;
  /* 109584c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109584c9 pop eax */
  EAX = (pop32());
  /* 109584ca ret  */
  ESPCHK(0x10958303u, _esp0);
  ESP += 4; return;
  /* 109584cb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109584ce xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109584d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109584d2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109584d6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_109584d9:;
  /* 109584d9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109584db je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 109584dd push esi */
  push32((uint32_t)(ESI));
  /* 109584de push ebx */
  push32((uint32_t)(EBX));
  /* 109584df push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 109584e2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 109584e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109584e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109584eb call dword ptr [0x10959014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959014))), 0x109584f1u);
  /* 109584f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109584f3 je 0x10958491 */
  if (C.zf) goto L_10958491;
  /* 109584f5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109584f8 push edi */
  push32((uint32_t)(EDI));
  /* 109584f9 push edi */
  push32((uint32_t)(EDI));
  /* 109584fa jne 0x10958500 */
  if (!C.zf) goto L_10958500;
  /* 109584fc push edi */
  push32((uint32_t)(EDI));
  /* 109584fd push edi */
  push32((uint32_t)(EDI));
  /* 109584fe jmp 0x10958506 */
  goto L_10958506;
L_10958500:;
  /* 10958500 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10958503 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10958506:;
  /* 10958506 push esi */
  push32((uint32_t)(ESI));
  /* 10958507 push ebx */
  push32((uint32_t)(EBX));
  /* 10958508 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1095850d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10958510 call dword ptr [0x10959068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959068))), 0x10958516u);
  /* 10958516 mov esi, eax */
  ESI = (EAX);
  /* 10958518 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095851a je 0x10958491 */
  if (C.zf) goto L_10958491;
L_10958520:;
  /* 10958520 mov eax, esi */
  EAX = (ESI);
  /* 10958522 jmp 0x10958493 */
  goto L_10958493;
}

/* FUN_10008527 @ 0x10958527 (43 bytes, 20 insns) */
void f_10958527(void) {
  FTRACE(0x10958527u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958527 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1095852b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1095852f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10958531 push esi */
  push32((uint32_t)(ESI));
  /* 10958532 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10958535 je 0x10958544 */
  if (C.zf) goto L_10958544;
L_10958537:;
  /* 10958537 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1095853a je 0x10958544 */
  if (C.zf) goto L_10958544;
  /* 1095853c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1095853d mov esi, ecx */
  ESI = (ECX);
  /* 1095853f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10958540 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10958542 jne 0x10958537 */
  if (!C.zf) goto L_10958537;
L_10958544:;
  /* 10958544 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10958547 pop esi */
  ESI = (pop32());
  /* 10958548 jne 0x1095854f */
  if (!C.zf) goto L_1095854f;
  /* 1095854a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095854e ret  */
  ESPCHK(0x10958527u, _esp0);
  ESP += 4; return;
L_1095854f:;
  /* 1095854f mov eax, edx */
  EAX = (EDX);
  /* 10958551 ret  */
  ESPCHK(0x10958527u, _esp0);
  ESP += 4; return;
}

/* FUN_10008552 @ 0x10958552 (318 bytes, 123 insns) */
void f_10958552(void) {
  FTRACE(0x10958552u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958552 push ebp */
  push32((uint32_t)(EBP));
  /* 10958553 mov ebp, esp */
  EBP = (ESP);
  /* 10958555 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10958557 push 0x10959488 */
  push32((uint32_t)(0x10959488u));
  /* 1095855c push 0x10958ad0 */
  push32((uint32_t)(0x10958ad0u));
  /* 10958561 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10958567 push eax */
  push32((uint32_t)(EAX));
  /* 10958568 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1095856f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10958572 push ebx */
  push32((uint32_t)(EBX));
  /* 10958573 push esi */
  push32((uint32_t)(ESI));
  /* 10958574 push edi */
  push32((uint32_t)(EDI));
  /* 10958575 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10958578 mov eax, dword ptr [0x1095b3ec] */
  EAX = (r32((uint32_t)(0x1095b3ec)));
  /* 1095857d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1095857f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958581 jne 0x109585c1 */
  if (!C.zf) goto L_109585c1;
  /* 10958583 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10958586 push eax */
  push32((uint32_t)(EAX));
  /* 10958587 push 1 */
  push32((uint32_t)(0x1u));
  /* 10958589 pop esi */
  ESI = (pop32());
  /* 1095858a push esi */
  push32((uint32_t)(ESI));
  /* 1095858b push 0x10959468 */
  push32((uint32_t)(0x10959468u));
  /* 10958590 push esi */
  push32((uint32_t)(ESI));
  /* 10958591 call dword ptr [0x1095900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095900c))), 0x10958597u);
  /* 10958597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10958599 je 0x1095859f */
  if (C.zf) goto L_1095859f;
  /* 1095859b mov eax, esi */
  EAX = (ESI);
  /* 1095859d jmp 0x109585bc */
  goto L_109585bc;
L_1095859f:;
  /* 1095859f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 109585a2 push eax */
  push32((uint32_t)(EAX));
  /* 109585a3 push esi */
  push32((uint32_t)(ESI));
  /* 109585a4 push 0x10959464 */
  push32((uint32_t)(0x10959464u));
  /* 109585a9 push esi */
  push32((uint32_t)(ESI));
  /* 109585aa push ebx */
  push32((uint32_t)(EBX));
  /* 109585ab call dword ptr [0x10959010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959010))), 0x109585b1u);
  /* 109585b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109585b3 je 0x10958687 */
  if (C.zf) goto L_10958687;
  /* 109585b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109585bb pop eax */
  EAX = (pop32());
L_109585bc:;
  /* 109585bc mov dword ptr [0x1095b3ec], eax */
  w32((uint32_t)(0x1095b3ec), (EAX));
L_109585c1:;
  /* 109585c1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109585c4 jne 0x109585ea */
  if (!C.zf) goto L_109585ea;
  /* 109585c6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109585c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109585cb jne 0x109585d2 */
  if (!C.zf) goto L_109585d2;
  /* 109585cd mov eax, dword ptr [0x1095b3d0] */
  EAX = (r32((uint32_t)(0x1095b3d0)));
L_109585d2:;
  /* 109585d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 109585d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109585d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109585db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109585de push eax */
  push32((uint32_t)(EAX));
  /* 109585df call dword ptr [0x10959010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10959010))), 0x109585e5u);
  /* 109585e5 jmp 0x10958689 */
  goto L_10958689;
L_109585ea:;
  /* 109585ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109585ed jne 0x10958687 */
  if (!C.zf) goto L_10958687;
  /* 109585f3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109585f6 jne 0x10958600 */
  if (!C.zf) goto L_10958600;
  /* 109585f8 mov eax, dword ptr [0x1095b3e0] */
  EAX = (r32((uint32_t)(0x1095b3e0)));
  /* 109585fd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10958600:;
  /* 10958600 push ebx */
  push32((uint32_t)(EBX));
  /* 10958601 push ebx */
  push32((uint32_t)(EBX));
  /* 10958602 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10958605 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10958608 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1095860b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1095860d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095860f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10958612 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10958613 push eax */
  push32((uint32_t)(EAX));
  /* 10958614 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10958617 call dword ptr [0x1095901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095901c))), 0x1095861du);
  /* 1095861d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10958620 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958622 je 0x10958687 */
  if (C.zf) goto L_10958687;
  /* 10958624 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10958627 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1095862a mov eax, edi */
  EAX = (EDI);
  /* 1095862c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1095862f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10958631 call 0x10958bb0 */
  push32(0x10958636u); f_10958bb0();
  /* 10958636 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10958639 mov esi, esp */
  ESI = (ESP);
  /* 1095863b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1095863e push edi */
  push32((uint32_t)(EDI));
  /* 1095863f push ebx */
  push32((uint32_t)(EBX));
  /* 10958640 push esi */
  push32((uint32_t)(ESI));
  /* 10958641 call 0x10958290 */
  push32(0x10958646u); f_10958290();
  /* 10958646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10958649 jmp 0x10958656 */
  goto L_10958656;
  /* 1095864b push 1 */
  push32((uint32_t)(0x1u));
  /* 1095864d pop eax */
  EAX = (pop32());
  /* 1095864e ret  */
  ESPCHK(0x10958552u, _esp0);
  ESP += 4; return;
  /* 1095864f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10958652 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10958654 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10958656:;
  /* 10958656 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1095865a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095865c je 0x10958687 */
  if (C.zf) goto L_10958687;
  /* 1095865e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10958661 push esi */
  push32((uint32_t)(ESI));
  /* 10958662 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10958665 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10958668 push 1 */
  push32((uint32_t)(0x1u));
  /* 1095866a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1095866d call dword ptr [0x1095901c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095901c))), 0x10958673u);
  /* 10958673 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958675 je 0x10958687 */
  if (C.zf) goto L_10958687;
  /* 10958677 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1095867a push eax */
  push32((uint32_t)(EAX));
  /* 1095867b push esi */
  push32((uint32_t)(ESI));
  /* 1095867c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1095867f call dword ptr [0x1095900c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1095900c))), 0x10958685u);
  /* 10958685 jmp 0x10958689 */
  goto L_10958689;
L_10958687:;
  /* 10958687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10958689:;
  /* 10958689 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1095868c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1095868f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10958696 pop edi */
  EDI = (pop32());
  /* 10958697 pop esi */
  ESI = (pop32());
  /* 10958698 pop ebx */
  EBX = (pop32());
  /* 10958699 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1095869a ret  */
  ESPCHK(0x10958552u, _esp0);
  ESP += 4; return;
}

/* FUN_100086a0 @ 0x109586a0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_109586a0(void) {
  FTRACE(0x109586a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109586a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109586a1 mov ebp, esp */
  EBP = (ESP);
  /* 109586a3 push edi */
  push32((uint32_t)(EDI));
  /* 109586a4 push esi */
  push32((uint32_t)(ESI));
  /* 109586a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109586a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109586ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109586ae mov eax, ecx */
  EAX = (ECX);
  /* 109586b0 mov edx, ecx */
  EDX = (ECX);
  /* 109586b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109586b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109586b6 jbe 0x109586c0 */
  if ((C.cf||C.zf)) goto L_109586c0;
  /* 109586b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109586ba jb 0x10958838 */
  if (C.cf) goto L_10958838;
L_109586c0:;
  /* 109586c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109586c6 jne 0x109586dc */
  if (!C.zf) goto L_109586dc;
  /* 109586c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109586cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109586ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109586d1 jb 0x109586fc */
  if (C.cf) goto L_109586fc;
  /* 109586d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109586d5 jmp dword ptr [edx*4 + 0x109587e8] */
  switch (EDX) {
    case 0: goto L_109587f8;
    case 1: goto L_10958800;
    case 2: goto L_1095880c;
    case 3: goto L_10958820;
    default: x86_unimpl("switch@0x109586d5 out of table"); return;
  }
L_109586dc:;
  /* 109586dc mov eax, edi */
  EAX = (EDI);
  /* 109586de mov edx, 3 */
  EDX = (0x3u);
  /* 109586e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109586e6 jb 0x109586f4 */
  if (C.cf) goto L_109586f4;
  /* 109586e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109586eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109586ed jmp dword ptr [eax*4 + 0x10958700] */
  switch (EAX) {
    case 1: goto L_10958710;
    case 2: goto L_1095873c;
    case 3: goto L_10958760;
    default: x86_unimpl("switch@0x109586ed out of table"); return;
  }
L_109586f4:;
  /* 109586f4 jmp dword ptr [ecx*4 + 0x109587f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x109587f8)))); return;
  /* 109586fb nop  */
  /* nop */
L_109586fc:;
  /* 109586fc jmp dword ptr [ecx*4 + 0x1095877c] */
  switch (ECX) {
    case 0: goto L_109587df;
    case 1: goto L_109587cc;
    case 2: goto L_109587c4;
    case 3: goto L_109587bc;
    case 4: goto L_109587b4;
    case 5: goto L_109587ac;
    case 6: goto L_109587a4;
    case 7: goto L_1095879c;
    default: x86_unimpl("switch@0x109586fc out of table"); return;
  }
  /* 10958703 nop  */
  /* nop */
L_10958710:;
  /* 10958710 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10958712 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10958714 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10958716 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10958719 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1095871c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1095871f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10958722 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10958725 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10958728 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095872b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095872e jb 0x109586fc */
  if (C.cf) goto L_109586fc;
  /* 10958730 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10958732 jmp dword ptr [edx*4 + 0x109587e8] */
  switch (EDX) {
    case 0: goto L_109587f8;
    case 1: goto L_10958800;
    case 2: goto L_1095880c;
    case 3: goto L_10958820;
    default: x86_unimpl("switch@0x10958732 out of table"); return;
  }
  /* 10958739 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1095873c:;
  /* 1095873c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1095873e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10958740 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10958742 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10958745 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10958748 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1095874b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1095874e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10958751 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958754 jb 0x109586fc */
  if (C.cf) goto L_109586fc;
  /* 10958756 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10958758 jmp dword ptr [edx*4 + 0x109587e8] */
  switch (EDX) {
    case 0: goto L_109587f8;
    case 1: goto L_10958800;
    case 2: goto L_1095880c;
    case 3: goto L_10958820;
    default: x86_unimpl("switch@0x10958758 out of table"); return;
  }
  /* 1095875f nop  */
  /* nop */
L_10958760:;
  /* 10958760 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10958762 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10958764 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10958766 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10958767 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1095876a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1095876b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1095876e jb 0x109586fc */
  if (C.cf) goto L_109586fc;
  /* 10958770 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10958772 jmp dword ptr [edx*4 + 0x109587e8] */
  switch (EDX) {
    case 0: goto L_109587f8;
    case 1: goto L_10958800;
    case 2: goto L_1095880c;
    case 3: goto L_10958820;
    default: x86_unimpl("switch@0x10958772 out of table"); return;
  }
  /* 10958779 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1095879c:;
  /* 1095879c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 109587a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_109587a4:;
  /* 109587a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 109587a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_109587ac:;
  /* 109587ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 109587b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_109587b4:;
  /* 109587b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 109587b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_109587bc:;
  /* 109587bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 109587c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_109587c4:;
  /* 109587c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 109587c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_109587cc:;
  /* 109587cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 109587d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 109587d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109587db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109587dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109587df:;
  /* 109587df jmp dword ptr [edx*4 + 0x109587e8] */
  switch (EDX) {
    case 0: goto L_109587f8;
    case 1: goto L_10958800;
    case 2: goto L_1095880c;
    case 3: goto L_10958820;
    default: x86_unimpl("switch@0x109587df out of table"); return;
  }
  /* 109587e6 mov edi, edi */
  EDI = (EDI);
L_109587f8:;
  /* 109587f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109587fb pop esi */
  ESI = (pop32());
  /* 109587fc pop edi */
  EDI = (pop32());
  /* 109587fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109587fe ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 109587ff nop  */
  /* nop */
L_10958800:;
  /* 10958800 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10958802 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10958804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10958807 pop esi */
  ESI = (pop32());
  /* 10958808 pop edi */
  EDI = (pop32());
  /* 10958809 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1095880a ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 1095880b nop  */
  /* nop */
L_1095880c:;
  /* 1095880c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1095880e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10958810 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10958813 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10958816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10958819 pop esi */
  ESI = (pop32());
  /* 1095881a pop edi */
  EDI = (pop32());
  /* 1095881b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1095881c ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 1095881d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10958820:;
  /* 10958820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10958822 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10958824 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10958827 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1095882a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1095882d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10958830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10958833 pop esi */
  ESI = (pop32());
  /* 10958834 pop edi */
  EDI = (pop32());
  /* 10958835 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10958836 ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 10958837 nop  */
  /* nop */
L_10958838:;
  /* 10958838 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1095883c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10958840 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10958846 jne 0x1095886c */
  if (!C.zf) goto L_1095886c;
  /* 10958848 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1095884b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1095884e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958851 jb 0x10958860 */
  if (C.cf) goto L_10958860;
  /* 10958853 std  */
  C.df=1;
  /* 10958854 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10958856 cld  */
  C.df=0;
  /* 10958857 jmp dword ptr [edx*4 + 0x10958980] */
  switch (EDX) {
    case 0: goto L_10958990;
    case 1: goto L_10958998;
    case 2: goto L_109589a8;
    case 3: goto L_109589bc;
    default: x86_unimpl("switch@0x10958857 out of table"); return;
  }
  /* 1095885e mov edi, edi */
  EDI = (EDI);
L_10958860:;
  /* 10958860 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10958862 jmp dword ptr [ecx*4 + 0x10958930] */
  switch (ECX) {
    case 0: goto L_10958977;
    default: x86_unimpl("switch@0x10958862 out of table"); return;
  }
  /* 10958869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1095886c:;
  /* 1095886c mov eax, edi */
  EAX = (EDI);
  /* 1095886e mov edx, 3 */
  EDX = (0x3u);
  /* 10958873 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958876 jb 0x10958884 */
  if (C.cf) goto L_10958884;
  /* 10958878 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1095887b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1095887d jmp dword ptr [eax*4 + 0x10958888] */
  switch (EAX) {
    case 1: goto L_10958898;
    case 2: goto L_109588b8;
    case 3: goto L_109588e0;
    default: x86_unimpl("switch@0x1095887d out of table"); return;
  }
L_10958884:;
  /* 10958884 jmp dword ptr [ecx*4 + 0x10958980] */
  switch (ECX) {
    case 0: goto L_10958990;
    case 1: goto L_10958998;
    case 2: goto L_109589a8;
    case 3: goto L_109589bc;
    default: x86_unimpl("switch@0x10958884 out of table"); return;
  }
  /* 1095888b nop  */
  /* nop */
L_10958898:;
  /* 10958898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095889b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1095889d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109588a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 109588a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109588a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109588a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109588a8 jb 0x10958860 */
  if (C.cf) goto L_10958860;
  /* 109588aa std  */
  C.df=1;
  /* 109588ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109588ad cld  */
  C.df=0;
  /* 109588ae jmp dword ptr [edx*4 + 0x10958980] */
  switch (EDX) {
    case 0: goto L_10958990;
    case 1: goto L_10958998;
    case 2: goto L_109589a8;
    case 3: goto L_109589bc;
    default: x86_unimpl("switch@0x109588ae out of table"); return;
  }
  /* 109588b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109588b8:;
  /* 109588b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109588bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109588bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109588c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109588c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109588c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109588c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109588cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109588cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109588d2 jb 0x10958860 */
  if (C.cf) goto L_10958860;
  /* 109588d4 std  */
  C.df=1;
  /* 109588d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109588d7 cld  */
  C.df=0;
  /* 109588d8 jmp dword ptr [edx*4 + 0x10958980] */
  switch (EDX) {
    case 0: goto L_10958990;
    case 1: goto L_10958998;
    case 2: goto L_109589a8;
    case 3: goto L_109589bc;
    default: x86_unimpl("switch@0x109588d8 out of table"); return;
  }
  /* 109588df nop  */
  /* nop */
L_109588e0:;
  /* 109588e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109588e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109588e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109588e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109588eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109588ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109588f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109588f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109588f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109588fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109588fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958900 jb 0x10958860 */
  if (C.cf) goto L_10958860;
  /* 10958906 std  */
  C.df=1;
  /* 10958907 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10958909 cld  */
  C.df=0;
  /* 1095890a jmp dword ptr [edx*4 + 0x10958980] */
  switch (EDX) {
    case 0: goto L_10958990;
    case 1: goto L_10958998;
    case 2: goto L_109589a8;
    case 3: goto L_109589bc;
    default: x86_unimpl("switch@0x1095890a out of table"); return;
  }
  /* 10958911 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10958914 xor al, 0x89 */
  { uint32_t _r=(AL)^(0x89u); AL = (_r); fl_logic(_r,8); }
  /* 10958916 xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 10958917 adc byte ptr [ecx + ecx*4], bh */
  { uint32_t _a=(r8((uint32_t)(ECX + ECX*4))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ECX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1095891a xchg ebp, eax */
  { uint32_t _t=(EBP); EBP = (EAX); EAX = (_t); }
  /* 1095891b adc byte ptr [ecx + ecx*4 - 0x6b], al */
  { uint32_t _a=(r8((uint32_t)(ECX + ECX*4 + -0x6b))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ECX*4 + -0x6b), (_r)); fl_add(_a,_b,_r,8); }
  /* 1095891f adc byte ptr [ecx + ecx*4 - 0x6b], cl */
  { uint32_t _a=(r8((uint32_t)(ECX + ECX*4 + -0x6b))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ECX*4 + -0x6b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10958923 adc byte ptr [ecx + ecx*4 - 0x6b], dl */
  { uint32_t _a=(r8((uint32_t)(ECX + ECX*4 + -0x6b))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ECX*4 + -0x6b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10958927 adc byte ptr [ecx + ecx*4 - 0x6b], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + ECX*4 + -0x6b))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ECX*4 + -0x6b), (_r)); fl_add(_a,_b,_r,8); }
  /* 1095892b adc byte ptr [ecx + ecx*4 - 0x6b], ah */
  { uint32_t _a=(r8((uint32_t)(ECX + ECX*4 + -0x6b))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ECX*4 + -0x6b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10958934 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10958938 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1095893c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10958940 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10958944 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10958948 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1095894c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10958950 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10958954 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10958958 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1095895c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10958960 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10958964 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10958968 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1095896c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10958973 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10958975 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10958977:;
  /* 10958977 jmp dword ptr [edx*4 + 0x10958980] */
  switch (EDX) {
    case 0: goto L_10958990;
    case 1: goto L_10958998;
    case 2: goto L_109589a8;
    case 3: goto L_109589bc;
    default: x86_unimpl("switch@0x10958977 out of table"); return;
  }
  /* 1095897e mov edi, edi */
  EDI = (EDI);
L_10958990:;
  /* 10958990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10958993 pop esi */
  ESI = (pop32());
  /* 10958994 pop edi */
  EDI = (pop32());
  /* 10958995 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10958996 ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 10958997 nop  */
  /* nop */
L_10958998:;
  /* 10958998 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1095899b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1095899e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109589a1 pop esi */
  ESI = (pop32());
  /* 109589a2 pop edi */
  EDI = (pop32());
  /* 109589a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109589a4 ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 109589a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109589a8:;
  /* 109589a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109589ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109589ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109589b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109589b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109589b7 pop esi */
  ESI = (pop32());
  /* 109589b8 pop edi */
  EDI = (pop32());
  /* 109589b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109589ba ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
  /* 109589bb nop  */
  /* nop */
L_109589bc:;
  /* 109589bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109589bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109589c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109589c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109589c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109589cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109589ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109589d1 pop esi */
  ESI = (pop32());
  /* 109589d2 pop edi */
  EDI = (pop32());
  /* 109589d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109589d4 ret  */
  ESPCHK(0x109586a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x109589d8 (32 bytes, 18 insns) */
void f_109589d8(void) {
  FTRACE(0x109589d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109589d8 push ebp */
  push32((uint32_t)(EBP));
  /* 109589d9 mov ebp, esp */
  EBP = (ESP);
  /* 109589db push ebx */
  push32((uint32_t)(EBX));
  /* 109589dc push esi */
  push32((uint32_t)(ESI));
  /* 109589dd push edi */
  push32((uint32_t)(EDI));
  /* 109589de push ebp */
  push32((uint32_t)(EBP));
  /* 109589df push 0 */
  push32((uint32_t)(0x0u));
  /* 109589e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109589e3 push 0x109589f0 */
  push32((uint32_t)(0x109589f0u));
  /* 109589e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109589eb call 0x10958be0 */
  push32(0x109589f0u); f_10958be0();
  /* 109589f0 pop ebp */
  EBP = (pop32());
  /* 109589f1 pop edi */
  EDI = (pop32());
  /* 109589f2 pop esi */
  ESI = (pop32());
  /* 109589f3 pop ebx */
  EBX = (pop32());
  /* 109589f4 mov esp, ebp */
  ESP = (EBP);
  /* 109589f6 pop ebp */
  EBP = (pop32());
  /* 109589f7 ret  */
  ESPCHK(0x109589d8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10958a1a (104 bytes, 33 insns) */
void f_10958a1a(void) {
  FTRACE(0x10958a1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958a1a push ebx */
  push32((uint32_t)(EBX));
  /* 10958a1b push esi */
  push32((uint32_t)(ESI));
  /* 10958a1c push edi */
  push32((uint32_t)(EDI));
  /* 10958a1d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10958a21 push eax */
  push32((uint32_t)(EAX));
  /* 10958a22 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10958a24 push 0x109589f8 */
  push32((uint32_t)(0x109589f8u));
  /* 10958a29 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10958a30 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10958a37:;
  /* 10958a37 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10958a3b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10958a3e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10958a41 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958a44 je 0x10958a74 */
  if (C.zf) goto L_10958a74;
  /* 10958a46 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958a4a je 0x10958a74 */
  if (C.zf) goto L_10958a74;
  /* 10958a4c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10958a4f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10958a52 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10958a56 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10958a59 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958a5e jne 0x10958a72 */
  if (!C.zf) goto L_10958a72;
  /* 10958a60 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10958a65 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10958a69 call 0x10958aae */
  push32(0x10958a6eu); f_10958aae();
  /* 10958a6e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10958a72u);
L_10958a72:;
  /* 10958a72 jmp 0x10958a37 */
  goto L_10958a37;
L_10958a74:;
  /* 10958a74 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10958a7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10958a7e pop edi */
  EDI = (pop32());
  /* 10958a7f pop esi */
  ESI = (pop32());
  /* 10958a80 pop ebx */
  EBX = (pop32());
  /* 10958a81 ret  */
  ESPCHK(0x10958a1au, _esp0);
  ESP += 4; return;
}

/* FUN_10008aae @ 0x10958aae (24 bytes, 10 insns) */
void f_10958aae(void) {
  FTRACE(0x10958aaeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958aae push ebx */
  push32((uint32_t)(EBX));
  /* 10958aaf push ecx */
  push32((uint32_t)(ECX));
  /* 10958ab0 mov ebx, 0x1095ad40 */
  EBX = (0x1095ad40u);
  /* 10958ab5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10958ab8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10958abb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10958abe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10958ac1 pop ecx */
  ECX = (pop32());
  /* 10958ac2 pop ebx */
  EBX = (pop32());
  /* 10958ac3 ret 4 */
  ESPCHK(0x10958aaeu, _esp0);
  ESP += 8; return;
}

/* FUN_10008b8d @ 0x10958b8d (27 bytes, 11 insns) */
void f_10958b8d(void) {
  FTRACE(0x10958b8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958b8d push ebp */
  push32((uint32_t)(EBP));
  /* 10958b8e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10958b92 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10958b94 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10958b97 push eax */
  push32((uint32_t)(EAX));
  /* 10958b98 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10958b9b push eax */
  push32((uint32_t)(EAX));
  /* 10958b9c call 0x10958a1a */
  push32(0x10958ba1u); f_10958a1a();
  /* 10958ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10958ba4 pop ebp */
  EBP = (pop32());
  /* 10958ba5 ret 4 */
  ESPCHK(0x10958b8du, _esp0);
  ESP += 8; return;
}

/* FUN_10008bb0 @ 0x10958bb0 (47 bytes, 17 insns) */
void f_10958bb0(void) {
  FTRACE(0x10958bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10958bb1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958bb6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10958bba jb 0x10958bd0 */
  if (C.cf) goto L_10958bd0;
L_10958bbc:;
  /* 10958bbc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10958bc2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10958bc7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10958bc9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10958bce jae 0x10958bbc */
  if (!C.cf) goto L_10958bbc;
L_10958bd0:;
  /* 10958bd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10958bd2 mov eax, esp */
  EAX = (ESP);
  /* 10958bd4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10958bd6 mov esp, ecx */
  ESP = (ECX);
  /* 10958bd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10958bda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10958bdd push eax */
  push32((uint32_t)(EAX));
  /* 10958bde ret  */
  ESPCHK(0x10958bb0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10958be0 (6 bytes, 1 insns) */
void f_10958be0(void) {
  FTRACE(0x10958be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10958be0 jmp dword ptr [0x10959008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10959008)))); return;
}

