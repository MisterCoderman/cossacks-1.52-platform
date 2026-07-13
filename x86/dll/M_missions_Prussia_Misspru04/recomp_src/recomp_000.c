#include "recomp.h"

/* OnInit @ 0x10961000 (2405 bytes, 635 insns) */
void f_10961000(void) {
  FTRACE(0x10961000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10961000 push ebx */
  push32((uint32_t)(EBX));
  /* 10961001 push esi */
  push32((uint32_t)(ESI));
  /* 10961002 mov esi, dword ptr [0x10967108] */
  ESI = (r32((uint32_t)(0x10967108)));
  /* 10961008 push edi */
  push32((uint32_t)(EDI));
  /* 10961009 push 0x109687ac */
  push32((uint32_t)(0x109687acu));
  /* 1096100e push 0x10968dc0 */
  push32((uint32_t)(0x10968dc0u));
  /* 10961013 call esi */
  call_ind((uint32_t)(ESI), 0x10961015u);
  /* 10961015 push 0x109687a4 */
  push32((uint32_t)(0x109687a4u));
  /* 1096101a push 0x10968db8 */
  push32((uint32_t)(0x10968db8u));
  /* 1096101f call esi */
  call_ind((uint32_t)(ESI), 0x10961021u);
  /* 10961021 push 0x1096879c */
  push32((uint32_t)(0x1096879cu));
  /* 10961026 push 0x109692b0 */
  push32((uint32_t)(0x109692b0u));
  /* 1096102b call esi */
  call_ind((uint32_t)(ESI), 0x1096102du);
  /* 1096102d push 0x10968794 */
  push32((uint32_t)(0x10968794u));
  /* 10961032 push 0x109692a8 */
  push32((uint32_t)(0x109692a8u));
  /* 10961037 call esi */
  call_ind((uint32_t)(ESI), 0x10961039u);
  /* 10961039 push 0x1096878c */
  push32((uint32_t)(0x1096878cu));
  /* 1096103e push 0x10968f80 */
  push32((uint32_t)(0x10968f80u));
  /* 10961043 call esi */
  call_ind((uint32_t)(ESI), 0x10961045u);
  /* 10961045 push 0x10968784 */
  push32((uint32_t)(0x10968784u));
  /* 1096104a push 0x10968f90 */
  push32((uint32_t)(0x10968f90u));
  /* 1096104f call esi */
  call_ind((uint32_t)(ESI), 0x10961051u);
  /* 10961051 push 0x1096877c */
  push32((uint32_t)(0x1096877cu));
  /* 10961056 push 0x10968f88 */
  push32((uint32_t)(0x10968f88u));
  /* 1096105b call esi */
  call_ind((uint32_t)(ESI), 0x1096105du);
  /* 1096105d push 0x10968774 */
  push32((uint32_t)(0x10968774u));
  /* 10961062 push 0x10968fa8 */
  push32((uint32_t)(0x10968fa8u));
  /* 10961067 call esi */
  call_ind((uint32_t)(ESI), 0x10961069u);
  /* 10961069 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096106c push 0x1096876c */
  push32((uint32_t)(0x1096876cu));
  /* 10961071 push 0x10969068 */
  push32((uint32_t)(0x10969068u));
  /* 10961076 call esi */
  call_ind((uint32_t)(ESI), 0x10961078u);
  /* 10961078 push 0x10968764 */
  push32((uint32_t)(0x10968764u));
  /* 1096107d push 0x10969060 */
  push32((uint32_t)(0x10969060u));
  /* 10961082 call esi */
  call_ind((uint32_t)(ESI), 0x10961084u);
  /* 10961084 push 0x1096875c */
  push32((uint32_t)(0x1096875cu));
  /* 10961089 push 0x10969058 */
  push32((uint32_t)(0x10969058u));
  /* 1096108e call esi */
  call_ind((uint32_t)(ESI), 0x10961090u);
  /* 10961090 push 0x10968754 */
  push32((uint32_t)(0x10968754u));
  /* 10961095 push 0x10969050 */
  push32((uint32_t)(0x10969050u));
  /* 1096109a call esi */
  call_ind((uint32_t)(ESI), 0x1096109cu);
  /* 1096109c push 0x10968748 */
  push32((uint32_t)(0x10968748u));
  /* 109610a1 push 0x109691a8 */
  push32((uint32_t)(0x109691a8u));
  /* 109610a6 call esi */
  call_ind((uint32_t)(ESI), 0x109610a8u);
  /* 109610a8 push 0x1096873c */
  push32((uint32_t)(0x1096873cu));
  /* 109610ad push 0x109691b0 */
  push32((uint32_t)(0x109691b0u));
  /* 109610b2 call esi */
  call_ind((uint32_t)(ESI), 0x109610b4u);
  /* 109610b4 push 0x10968730 */
  push32((uint32_t)(0x10968730u));
  /* 109610b9 push 0x10969198 */
  push32((uint32_t)(0x10969198u));
  /* 109610be call esi */
  call_ind((uint32_t)(ESI), 0x109610c0u);
  /* 109610c0 push 0x10968724 */
  push32((uint32_t)(0x10968724u));
  /* 109610c5 push 0x109691a0 */
  push32((uint32_t)(0x109691a0u));
  /* 109610ca call esi */
  call_ind((uint32_t)(ESI), 0x109610ccu);
  /* 109610cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109610cf push 0x10968718 */
  push32((uint32_t)(0x10968718u));
  /* 109610d4 push 0x10968e28 */
  push32((uint32_t)(0x10968e28u));
  /* 109610d9 call esi */
  call_ind((uint32_t)(ESI), 0x109610dbu);
  /* 109610db push 0x1096870c */
  push32((uint32_t)(0x1096870cu));
  /* 109610e0 push 0x10968e30 */
  push32((uint32_t)(0x10968e30u));
  /* 109610e5 call esi */
  call_ind((uint32_t)(ESI), 0x109610e7u);
  /* 109610e7 push 0x10968700 */
  push32((uint32_t)(0x10968700u));
  /* 109610ec push 0x10968e38 */
  push32((uint32_t)(0x10968e38u));
  /* 109610f1 call esi */
  call_ind((uint32_t)(ESI), 0x109610f3u);
  /* 109610f3 push 0x109686f4 */
  push32((uint32_t)(0x109686f4u));
  /* 109610f8 push 0x10968e08 */
  push32((uint32_t)(0x10968e08u));
  /* 109610fd call esi */
  call_ind((uint32_t)(ESI), 0x109610ffu);
  /* 109610ff push 0x109686e8 */
  push32((uint32_t)(0x109686e8u));
  /* 10961104 push 0x10968e10 */
  push32((uint32_t)(0x10968e10u));
  /* 10961109 call esi */
  call_ind((uint32_t)(ESI), 0x1096110bu);
  /* 1096110b push 0x109686dc */
  push32((uint32_t)(0x109686dcu));
  /* 10961110 push 0x10968e18 */
  push32((uint32_t)(0x10968e18u));
  /* 10961115 call esi */
  call_ind((uint32_t)(ESI), 0x10961117u);
  /* 10961117 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 1096111c push 0x10969238 */
  push32((uint32_t)(0x10969238u));
  /* 10961121 call esi */
  call_ind((uint32_t)(ESI), 0x10961123u);
  /* 10961123 push 0x109686c4 */
  push32((uint32_t)(0x109686c4u));
  /* 10961128 push 0x10969248 */
  push32((uint32_t)(0x10969248u));
  /* 1096112d call esi */
  call_ind((uint32_t)(ESI), 0x1096112fu);
  /* 1096112f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961132 push 0x109686b8 */
  push32((uint32_t)(0x109686b8u));
  /* 10961137 push 0x10969258 */
  push32((uint32_t)(0x10969258u));
  /* 1096113c call esi */
  call_ind((uint32_t)(ESI), 0x1096113eu);
  /* 1096113e push 0x109686ac */
  push32((uint32_t)(0x109686acu));
  /* 10961143 push 0x10969220 */
  push32((uint32_t)(0x10969220u));
  /* 10961148 call esi */
  call_ind((uint32_t)(ESI), 0x1096114au);
  /* 1096114a push 0x109686a0 */
  push32((uint32_t)(0x109686a0u));
  /* 1096114f push 0x10969228 */
  push32((uint32_t)(0x10969228u));
  /* 10961154 call esi */
  call_ind((uint32_t)(ESI), 0x10961156u);
  /* 10961156 push 0x109686a0 */
  push32((uint32_t)(0x109686a0u));
  /* 1096115b push 0x10969228 */
  push32((uint32_t)(0x10969228u));
  /* 10961160 call esi */
  call_ind((uint32_t)(ESI), 0x10961162u);
  /* 10961162 push 0x10968698 */
  push32((uint32_t)(0x10968698u));
  /* 10961167 push 0x10969038 */
  push32((uint32_t)(0x10969038u));
  /* 1096116c call esi */
  call_ind((uint32_t)(ESI), 0x1096116eu);
  /* 1096116e push 0x1096868c */
  push32((uint32_t)(0x1096868cu));
  /* 10961173 push 0x10968fa0 */
  push32((uint32_t)(0x10968fa0u));
  /* 10961178 call esi */
  call_ind((uint32_t)(ESI), 0x1096117au);
  /* 1096117a push 0x10968680 */
  push32((uint32_t)(0x10968680u));
  /* 1096117f push 0x10968f98 */
  push32((uint32_t)(0x10968f98u));
  /* 10961184 call esi */
  call_ind((uint32_t)(ESI), 0x10961186u);
  /* 10961186 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 1096118b push 0x10969040 */
  push32((uint32_t)(0x10969040u));
  /* 10961190 call esi */
  call_ind((uint32_t)(ESI), 0x10961192u);
  /* 10961192 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961195 push 0x1096866c */
  push32((uint32_t)(0x1096866cu));
  /* 1096119a push 0x10968fc8 */
  push32((uint32_t)(0x10968fc8u));
  /* 1096119f call esi */
  call_ind((uint32_t)(ESI), 0x109611a1u);
  /* 109611a1 push 0x10968660 */
  push32((uint32_t)(0x10968660u));
  /* 109611a6 push 0x10968fc0 */
  push32((uint32_t)(0x10968fc0u));
  /* 109611ab call esi */
  call_ind((uint32_t)(ESI), 0x109611adu);
  /* 109611ad push 0x10968658 */
  push32((uint32_t)(0x10968658u));
  /* 109611b2 push 0x10969048 */
  push32((uint32_t)(0x10969048u));
  /* 109611b7 call esi */
  call_ind((uint32_t)(ESI), 0x109611b9u);
  /* 109611b9 push 0x1096864c */
  push32((uint32_t)(0x1096864cu));
  /* 109611be push 0x10968e88 */
  push32((uint32_t)(0x10968e88u));
  /* 109611c3 call esi */
  call_ind((uint32_t)(ESI), 0x109611c5u);
  /* 109611c5 push 0x10968640 */
  push32((uint32_t)(0x10968640u));
  /* 109611ca push 0x10968e78 */
  push32((uint32_t)(0x10968e78u));
  /* 109611cf call esi */
  call_ind((uint32_t)(ESI), 0x109611d1u);
  /* 109611d1 push 0x10968634 */
  push32((uint32_t)(0x10968634u));
  /* 109611d6 push 0x10968e98 */
  push32((uint32_t)(0x10968e98u));
  /* 109611db call esi */
  call_ind((uint32_t)(ESI), 0x109611ddu);
  /* 109611dd push 0x10968628 */
  push32((uint32_t)(0x10968628u));
  /* 109611e2 push 0x10968e90 */
  push32((uint32_t)(0x10968e90u));
  /* 109611e7 call esi */
  call_ind((uint32_t)(ESI), 0x109611e9u);
  /* 109611e9 push 0x10968620 */
  push32((uint32_t)(0x10968620u));
  /* 109611ee push 0x10968d90 */
  push32((uint32_t)(0x10968d90u));
  /* 109611f3 call esi */
  call_ind((uint32_t)(ESI), 0x109611f5u);
  /* 109611f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109611f8 push 0x10968618 */
  push32((uint32_t)(0x10968618u));
  /* 109611fd push 0x10968d98 */
  push32((uint32_t)(0x10968d98u));
  /* 10961202 call esi */
  call_ind((uint32_t)(ESI), 0x10961204u);
  /* 10961204 push 0x10968610 */
  push32((uint32_t)(0x10968610u));
  /* 10961209 push 0x10968da0 */
  push32((uint32_t)(0x10968da0u));
  /* 1096120e call esi */
  call_ind((uint32_t)(ESI), 0x10961210u);
  /* 10961210 push 0x10968608 */
  push32((uint32_t)(0x10968608u));
  /* 10961215 push 0x10968da8 */
  push32((uint32_t)(0x10968da8u));
  /* 1096121a call esi */
  call_ind((uint32_t)(ESI), 0x1096121cu);
  /* 1096121c push 0x10968600 */
  push32((uint32_t)(0x10968600u));
  /* 10961221 push 0x10968db0 */
  push32((uint32_t)(0x10968db0u));
  /* 10961226 call esi */
  call_ind((uint32_t)(ESI), 0x10961228u);
  /* 10961228 push 0x109685f8 */
  push32((uint32_t)(0x109685f8u));
  /* 1096122d push 0x10969008 */
  push32((uint32_t)(0x10969008u));
  /* 10961232 call esi */
  call_ind((uint32_t)(ESI), 0x10961234u);
  /* 10961234 push 0x109685ec */
  push32((uint32_t)(0x109685ecu));
  /* 10961239 push 0x109692c8 */
  push32((uint32_t)(0x109692c8u));
  /* 1096123e call esi */
  call_ind((uint32_t)(ESI), 0x10961240u);
  /* 10961240 push 0x109685e0 */
  push32((uint32_t)(0x109685e0u));
  /* 10961245 push 0x109692d8 */
  push32((uint32_t)(0x109692d8u));
  /* 1096124a call esi */
  call_ind((uint32_t)(ESI), 0x1096124cu);
  /* 1096124c push 0x109685d4 */
  push32((uint32_t)(0x109685d4u));
  /* 10961251 push 0x109692d0 */
  push32((uint32_t)(0x109692d0u));
  /* 10961256 call esi */
  call_ind((uint32_t)(ESI), 0x10961258u);
  /* 10961258 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096125b push 0x109685c8 */
  push32((uint32_t)(0x109685c8u));
  /* 10961260 push 0x109692c0 */
  push32((uint32_t)(0x109692c0u));
  /* 10961265 call esi */
  call_ind((uint32_t)(ESI), 0x10961267u);
  /* 10961267 push 0x109685bc */
  push32((uint32_t)(0x109685bcu));
  /* 1096126c push 0x109692b8 */
  push32((uint32_t)(0x109692b8u));
  /* 10961271 call esi */
  call_ind((uint32_t)(ESI), 0x10961273u);
  /* 10961273 push 0x109685b0 */
  push32((uint32_t)(0x109685b0u));
  /* 10961278 push 0x10968d60 */
  push32((uint32_t)(0x10968d60u));
  /* 1096127d call esi */
  call_ind((uint32_t)(ESI), 0x1096127fu);
  /* 1096127f push 0x109685a4 */
  push32((uint32_t)(0x109685a4u));
  /* 10961284 push 0x10969260 */
  push32((uint32_t)(0x10969260u));
  /* 10961289 call esi */
  call_ind((uint32_t)(ESI), 0x1096128bu);
  /* 1096128b push 0x10968598 */
  push32((uint32_t)(0x10968598u));
  /* 10961290 push 0x10969250 */
  push32((uint32_t)(0x10969250u));
  /* 10961295 call esi */
  call_ind((uint32_t)(ESI), 0x10961297u);
  /* 10961297 push 0x1096858c */
  push32((uint32_t)(0x1096858cu));
  /* 1096129c push 0x10969240 */
  push32((uint32_t)(0x10969240u));
  /* 109612a1 call esi */
  call_ind((uint32_t)(ESI), 0x109612a3u);
  /* 109612a3 push 0x10968580 */
  push32((uint32_t)(0x10968580u));
  /* 109612a8 push 0x10969230 */
  push32((uint32_t)(0x10969230u));
  /* 109612ad call esi */
  call_ind((uint32_t)(ESI), 0x109612afu);
  /* 109612af push 0x10968598 */
  push32((uint32_t)(0x10968598u));
  /* 109612b4 push 0x10969250 */
  push32((uint32_t)(0x10969250u));
  /* 109612b9 call esi */
  call_ind((uint32_t)(ESI), 0x109612bbu);
  /* 109612bb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109612be push 0x10968598 */
  push32((uint32_t)(0x10968598u));
  /* 109612c3 push 0x10969250 */
  push32((uint32_t)(0x10969250u));
  /* 109612c8 call esi */
  call_ind((uint32_t)(ESI), 0x109612cau);
  /* 109612ca push 0x10968578 */
  push32((uint32_t)(0x10968578u));
  /* 109612cf push 0x109691f0 */
  push32((uint32_t)(0x109691f0u));
  /* 109612d4 call esi */
  call_ind((uint32_t)(ESI), 0x109612d6u);
  /* 109612d6 push 0x10968570 */
  push32((uint32_t)(0x10968570u));
  /* 109612db push 0x10969200 */
  push32((uint32_t)(0x10969200u));
  /* 109612e0 call esi */
  call_ind((uint32_t)(ESI), 0x109612e2u);
  /* 109612e2 push 0x10968568 */
  push32((uint32_t)(0x10968568u));
  /* 109612e7 push 0x109691f8 */
  push32((uint32_t)(0x109691f8u));
  /* 109612ec call esi */
  call_ind((uint32_t)(ESI), 0x109612eeu);
  /* 109612ee push 0x10968560 */
  push32((uint32_t)(0x10968560u));
  /* 109612f3 push 0x10968f20 */
  push32((uint32_t)(0x10968f20u));
  /* 109612f8 call esi */
  call_ind((uint32_t)(ESI), 0x109612fau);
  /* 109612fa push 0x10968558 */
  push32((uint32_t)(0x10968558u));
  /* 109612ff push 0x10968f10 */
  push32((uint32_t)(0x10968f10u));
  /* 10961304 call esi */
  call_ind((uint32_t)(ESI), 0x10961306u);
  /* 10961306 push 0x1096854c */
  push32((uint32_t)(0x1096854cu));
  /* 1096130b push 0x10968e70 */
  push32((uint32_t)(0x10968e70u));
  /* 10961310 call esi */
  call_ind((uint32_t)(ESI), 0x10961312u);
  /* 10961312 push 0x10968540 */
  push32((uint32_t)(0x10968540u));
  /* 10961317 push 0x10968e68 */
  push32((uint32_t)(0x10968e68u));
  /* 1096131c call esi */
  call_ind((uint32_t)(ESI), 0x1096131eu);
  /* 1096131e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961321 push 0x10968534 */
  push32((uint32_t)(0x10968534u));
  /* 10961326 push 0x10968e80 */
  push32((uint32_t)(0x10968e80u));
  /* 1096132b call esi */
  call_ind((uint32_t)(ESI), 0x1096132du);
  /* 1096132d mov esi, dword ptr [0x10967118] */
  ESI = (r32((uint32_t)(0x10967118)));
  /* 10961333 push 0x10968528 */
  push32((uint32_t)(0x10968528u));
  /* 10961338 push 0x10968fd0 */
  push32((uint32_t)(0x10968fd0u));
  /* 1096133d call esi */
  call_ind((uint32_t)(ESI), 0x1096133fu);
  /* 1096133f push 0x1096851c */
  push32((uint32_t)(0x1096851cu));
  /* 10961344 push 0x10968fd8 */
  push32((uint32_t)(0x10968fd8u));
  /* 10961349 call esi */
  call_ind((uint32_t)(ESI), 0x1096134bu);
  /* 1096134b push 0x10968510 */
  push32((uint32_t)(0x10968510u));
  /* 10961350 push 0x10968fe0 */
  push32((uint32_t)(0x10968fe0u));
  /* 10961355 call esi */
  call_ind((uint32_t)(ESI), 0x10961357u);
  /* 10961357 push 0x10968504 */
  push32((uint32_t)(0x10968504u));
  /* 1096135c push 0x10969268 */
  push32((uint32_t)(0x10969268u));
  /* 10961361 call esi */
  call_ind((uint32_t)(ESI), 0x10961363u);
  /* 10961363 push 0x109684f8 */
  push32((uint32_t)(0x109684f8u));
  /* 10961368 push 0x10968fb0 */
  push32((uint32_t)(0x10968fb0u));
  /* 1096136d call esi */
  call_ind((uint32_t)(ESI), 0x1096136fu);
  /* 1096136f push 0x109684ec */
  push32((uint32_t)(0x109684ecu));
  /* 10961374 push 0x10968fb8 */
  push32((uint32_t)(0x10968fb8u));
  /* 10961379 call esi */
  call_ind((uint32_t)(ESI), 0x1096137bu);
  /* 1096137b push 0x109684e0 */
  push32((uint32_t)(0x109684e0u));
  /* 10961380 push 0x10969120 */
  push32((uint32_t)(0x10969120u));
  /* 10961385 call esi */
  call_ind((uint32_t)(ESI), 0x10961387u);
  /* 10961387 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096138a push 0x109684d4 */
  push32((uint32_t)(0x109684d4u));
  /* 1096138f push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 10961394 call esi */
  call_ind((uint32_t)(ESI), 0x10961396u);
  /* 10961396 push 0x109684c8 */
  push32((uint32_t)(0x109684c8u));
  /* 1096139b push 0x10969110 */
  push32((uint32_t)(0x10969110u));
  /* 109613a0 call esi */
  call_ind((uint32_t)(ESI), 0x109613a2u);
  /* 109613a2 push 0x109684bc */
  push32((uint32_t)(0x109684bcu));
  /* 109613a7 push 0x10969118 */
  push32((uint32_t)(0x10969118u));
  /* 109613ac call esi */
  call_ind((uint32_t)(ESI), 0x109613aeu);
  /* 109613ae push 0x109684b0 */
  push32((uint32_t)(0x109684b0u));
  /* 109613b3 push 0x10968ef0 */
  push32((uint32_t)(0x10968ef0u));
  /* 109613b8 call esi */
  call_ind((uint32_t)(ESI), 0x109613bau);
  /* 109613ba push 0x109684a4 */
  push32((uint32_t)(0x109684a4u));
  /* 109613bf push 0x10968ef8 */
  push32((uint32_t)(0x10968ef8u));
  /* 109613c4 call esi */
  call_ind((uint32_t)(ESI), 0x109613c6u);
  /* 109613c6 push 0x10968498 */
  push32((uint32_t)(0x10968498u));
  /* 109613cb push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 109613d0 call esi */
  call_ind((uint32_t)(ESI), 0x109613d2u);
  /* 109613d2 push 0x1096848c */
  push32((uint32_t)(0x1096848cu));
  /* 109613d7 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 109613dc call esi */
  call_ind((uint32_t)(ESI), 0x109613deu);
  /* 109613de push 0x10968480 */
  push32((uint32_t)(0x10968480u));
  /* 109613e3 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 109613e8 call esi */
  call_ind((uint32_t)(ESI), 0x109613eau);
  /* 109613ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109613ed push 0x10968474 */
  push32((uint32_t)(0x10968474u));
  /* 109613f2 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 109613f7 call esi */
  call_ind((uint32_t)(ESI), 0x109613f9u);
  /* 109613f9 push 0x10968468 */
  push32((uint32_t)(0x10968468u));
  /* 109613fe push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10961403 call esi */
  call_ind((uint32_t)(ESI), 0x10961405u);
  /* 10961405 push 0x1096845c */
  push32((uint32_t)(0x1096845cu));
  /* 1096140a push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 1096140f call esi */
  call_ind((uint32_t)(ESI), 0x10961411u);
  /* 10961411 push 0x10968450 */
  push32((uint32_t)(0x10968450u));
  /* 10961416 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 1096141b call esi */
  call_ind((uint32_t)(ESI), 0x1096141du);
  /* 1096141d push 0x10968444 */
  push32((uint32_t)(0x10968444u));
  /* 10961422 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10961427 call esi */
  call_ind((uint32_t)(ESI), 0x10961429u);
  /* 10961429 push 0x10968438 */
  push32((uint32_t)(0x10968438u));
  /* 1096142e push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 10961433 call esi */
  call_ind((uint32_t)(ESI), 0x10961435u);
  /* 10961435 push 0x1096842c */
  push32((uint32_t)(0x1096842cu));
  /* 1096143a push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 1096143f call esi */
  call_ind((uint32_t)(ESI), 0x10961441u);
  /* 10961441 push 0x10968420 */
  push32((uint32_t)(0x10968420u));
  /* 10961446 push 0x10969280 */
  push32((uint32_t)(0x10969280u));
  /* 1096144b call esi */
  call_ind((uint32_t)(ESI), 0x1096144du);
  /* 1096144d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961450 push 0x10968414 */
  push32((uint32_t)(0x10968414u));
  /* 10961455 push 0x10969278 */
  push32((uint32_t)(0x10969278u));
  /* 1096145a call esi */
  call_ind((uint32_t)(ESI), 0x1096145cu);
  /* 1096145c push 0x10968408 */
  push32((uint32_t)(0x10968408u));
  /* 10961461 push 0x10969290 */
  push32((uint32_t)(0x10969290u));
  /* 10961466 call esi */
  call_ind((uint32_t)(ESI), 0x10961468u);
  /* 10961468 push 0x109683fc */
  push32((uint32_t)(0x109683fcu));
  /* 1096146d push 0x10969288 */
  push32((uint32_t)(0x10969288u));
  /* 10961472 call esi */
  call_ind((uint32_t)(ESI), 0x10961474u);
  /* 10961474 push 0x109683f0 */
  push32((uint32_t)(0x109683f0u));
  /* 10961479 push 0x109692a0 */
  push32((uint32_t)(0x109692a0u));
  /* 1096147e call esi */
  call_ind((uint32_t)(ESI), 0x10961480u);
  /* 10961480 push 0x109683e4 */
  push32((uint32_t)(0x109683e4u));
  /* 10961485 push 0x10969298 */
  push32((uint32_t)(0x10969298u));
  /* 1096148a call esi */
  call_ind((uint32_t)(ESI), 0x1096148cu);
  /* 1096148c push 0x109683d4 */
  push32((uint32_t)(0x109683d4u));
  /* 10961491 push 0x109691c0 */
  push32((uint32_t)(0x109691c0u));
  /* 10961496 call esi */
  call_ind((uint32_t)(ESI), 0x10961498u);
  /* 10961498 push 0x109683c4 */
  push32((uint32_t)(0x109683c4u));
  /* 1096149d push 0x109691b8 */
  push32((uint32_t)(0x109691b8u));
  /* 109614a2 call esi */
  call_ind((uint32_t)(ESI), 0x109614a4u);
  /* 109614a4 push 0x109683b4 */
  push32((uint32_t)(0x109683b4u));
  /* 109614a9 push 0x109691e0 */
  push32((uint32_t)(0x109691e0u));
  /* 109614ae call esi */
  call_ind((uint32_t)(ESI), 0x109614b0u);
  /* 109614b0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109614b3 push 0x109683a4 */
  push32((uint32_t)(0x109683a4u));
  /* 109614b8 push 0x109691d8 */
  push32((uint32_t)(0x109691d8u));
  /* 109614bd call esi */
  call_ind((uint32_t)(ESI), 0x109614bfu);
  /* 109614bf push 0x10968394 */
  push32((uint32_t)(0x10968394u));
  /* 109614c4 push 0x109691d0 */
  push32((uint32_t)(0x109691d0u));
  /* 109614c9 call esi */
  call_ind((uint32_t)(ESI), 0x109614cbu);
  /* 109614cb push 0x10968384 */
  push32((uint32_t)(0x10968384u));
  /* 109614d0 push 0x109691c8 */
  push32((uint32_t)(0x109691c8u));
  /* 109614d5 call esi */
  call_ind((uint32_t)(ESI), 0x109614d7u);
  /* 109614d7 push 0x1096837c */
  push32((uint32_t)(0x1096837cu));
  /* 109614dc push 0x10969020 */
  push32((uint32_t)(0x10969020u));
  /* 109614e1 call esi */
  call_ind((uint32_t)(ESI), 0x109614e3u);
  /* 109614e3 push 0x10968370 */
  push32((uint32_t)(0x10968370u));
  /* 109614e8 push 0x10968e50 */
  push32((uint32_t)(0x10968e50u));
  /* 109614ed call esi */
  call_ind((uint32_t)(ESI), 0x109614efu);
  /* 109614ef push 0x10968360 */
  push32((uint32_t)(0x10968360u));
  /* 109614f4 push 0x10968eb8 */
  push32((uint32_t)(0x10968eb8u));
  /* 109614f9 call esi */
  call_ind((uint32_t)(ESI), 0x109614fbu);
  /* 109614fb push 0x10968350 */
  push32((uint32_t)(0x10968350u));
  /* 10961500 push 0x10968ec0 */
  push32((uint32_t)(0x10968ec0u));
  /* 10961505 call esi */
  call_ind((uint32_t)(ESI), 0x10961507u);
  /* 10961507 push 0x10968344 */
  push32((uint32_t)(0x10968344u));
  /* 1096150c push 0x10968e58 */
  push32((uint32_t)(0x10968e58u));
  /* 10961511 call esi */
  call_ind((uint32_t)(ESI), 0x10961513u);
  /* 10961513 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961516 push 0x10968334 */
  push32((uint32_t)(0x10968334u));
  /* 1096151b push 0x10968ed0 */
  push32((uint32_t)(0x10968ed0u));
  /* 10961520 call esi */
  call_ind((uint32_t)(ESI), 0x10961522u);
  /* 10961522 push 0x10968324 */
  push32((uint32_t)(0x10968324u));
  /* 10961527 push 0x10968ed8 */
  push32((uint32_t)(0x10968ed8u));
  /* 1096152c call esi */
  call_ind((uint32_t)(ESI), 0x1096152eu);
  /* 1096152e push 0x10968318 */
  push32((uint32_t)(0x10968318u));
  /* 10961533 push 0x10968e48 */
  push32((uint32_t)(0x10968e48u));
  /* 10961538 call esi */
  call_ind((uint32_t)(ESI), 0x1096153au);
  /* 1096153a push 0x10968308 */
  push32((uint32_t)(0x10968308u));
  /* 1096153f push 0x10968f78 */
  push32((uint32_t)(0x10968f78u));
  /* 10961544 call esi */
  call_ind((uint32_t)(ESI), 0x10961546u);
  /* 10961546 push 0x109682f8 */
  push32((uint32_t)(0x109682f8u));
  /* 1096154b push 0x10968f60 */
  push32((uint32_t)(0x10968f60u));
  /* 10961550 call esi */
  call_ind((uint32_t)(ESI), 0x10961552u);
  /* 10961552 push 0x109682e8 */
  push32((uint32_t)(0x109682e8u));
  /* 10961557 push 0x10968f68 */
  push32((uint32_t)(0x10968f68u));
  /* 1096155c call esi */
  call_ind((uint32_t)(ESI), 0x1096155eu);
  /* 1096155e push 0x109682d8 */
  push32((uint32_t)(0x109682d8u));
  /* 10961563 push 0x10968f70 */
  push32((uint32_t)(0x10968f70u));
  /* 10961568 call esi */
  call_ind((uint32_t)(ESI), 0x1096156au);
  /* 1096156a push 0x109682cc */
  push32((uint32_t)(0x109682ccu));
  /* 1096156f push 0x10969180 */
  push32((uint32_t)(0x10969180u));
  /* 10961574 call esi */
  call_ind((uint32_t)(ESI), 0x10961576u);
  /* 10961576 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961579 push 0x109682c0 */
  push32((uint32_t)(0x109682c0u));
  /* 1096157e push 0x10969188 */
  push32((uint32_t)(0x10969188u));
  /* 10961583 call esi */
  call_ind((uint32_t)(ESI), 0x10961585u);
  /* 10961585 push 0x109682b4 */
  push32((uint32_t)(0x109682b4u));
  /* 1096158a push 0x10969190 */
  push32((uint32_t)(0x10969190u));
  /* 1096158f call esi */
  call_ind((uint32_t)(ESI), 0x10961591u);
  /* 10961591 push 0x109682a4 */
  push32((uint32_t)(0x109682a4u));
  /* 10961596 push 0x10968df8 */
  push32((uint32_t)(0x10968df8u));
  /* 1096159b call esi */
  call_ind((uint32_t)(ESI), 0x1096159du);
  /* 1096159d push 0x10968294 */
  push32((uint32_t)(0x10968294u));
  /* 109615a2 push 0x10968de8 */
  push32((uint32_t)(0x10968de8u));
  /* 109615a7 call esi */
  call_ind((uint32_t)(ESI), 0x109615a9u);
  /* 109615a9 push 0x10968284 */
  push32((uint32_t)(0x10968284u));
  /* 109615ae push 0x10968df0 */
  push32((uint32_t)(0x10968df0u));
  /* 109615b3 call esi */
  call_ind((uint32_t)(ESI), 0x109615b5u);
  /* 109615b5 push 0x10968278 */
  push32((uint32_t)(0x10968278u));
  /* 109615ba push 0x10968e40 */
  push32((uint32_t)(0x10968e40u));
  /* 109615bf call esi */
  call_ind((uint32_t)(ESI), 0x109615c1u);
  /* 109615c1 push 0x1096826c */
  push32((uint32_t)(0x1096826cu));
  /* 109615c6 push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 109615cb call esi */
  call_ind((uint32_t)(ESI), 0x109615cdu);
  /* 109615cd push 0x10968260 */
  push32((uint32_t)(0x10968260u));
  /* 109615d2 push 0x10968f48 */
  push32((uint32_t)(0x10968f48u));
  /* 109615d7 call esi */
  call_ind((uint32_t)(ESI), 0x109615d9u);
  /* 109615d9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109615dc push 0x10968254 */
  push32((uint32_t)(0x10968254u));
  /* 109615e1 push 0x10969218 */
  push32((uint32_t)(0x10969218u));
  /* 109615e6 call esi */
  call_ind((uint32_t)(ESI), 0x109615e8u);
  /* 109615e8 push 0x10968248 */
  push32((uint32_t)(0x10968248u));
  /* 109615ed push 0x10969210 */
  push32((uint32_t)(0x10969210u));
  /* 109615f2 call esi */
  call_ind((uint32_t)(ESI), 0x109615f4u);
  /* 109615f4 push 0x1096823c */
  push32((uint32_t)(0x1096823cu));
  /* 109615f9 push 0x10968de0 */
  push32((uint32_t)(0x10968de0u));
  /* 109615fe call esi */
  call_ind((uint32_t)(ESI), 0x10961600u);
  /* 10961600 push 0x10968238 */
  push32((uint32_t)(0x10968238u));
  /* 10961605 push 0x10968f58 */
  push32((uint32_t)(0x10968f58u));
  /* 1096160a call esi */
  call_ind((uint32_t)(ESI), 0x1096160cu);
  /* 1096160c push 0x10968230 */
  push32((uint32_t)(0x10968230u));
  /* 10961611 push 0x10968e00 */
  push32((uint32_t)(0x10968e00u));
  /* 10961616 call esi */
  call_ind((uint32_t)(ESI), 0x10961618u);
  /* 10961618 push 0x1096822c */
  push32((uint32_t)(0x1096822cu));
  /* 1096161d push 0x109692e0 */
  push32((uint32_t)(0x109692e0u));
  /* 10961622 call esi */
  call_ind((uint32_t)(ESI), 0x10961624u);
  /* 10961624 mov edi, dword ptr [0x1096711c] */
  EDI = (r32((uint32_t)(0x1096711c)));
  /* 1096162a push 0x10969178 */
  push32((uint32_t)(0x10969178u));
  /* 1096162f call edi */
  call_ind((uint32_t)(EDI), 0x10961631u);
  /* 10961631 mov esi, dword ptr [0x10967114] */
  ESI = (r32((uint32_t)(0x10967114)));
  /* 10961637 push 0x10968220 */
  push32((uint32_t)(0x10968220u));
  /* 1096163c push 0x10968f50 */
  push32((uint32_t)(0x10968f50u));
  /* 10961641 call esi */
  call_ind((uint32_t)(ESI), 0x10961643u);
  /* 10961643 mov ebx, dword ptr [0x10967124] */
  EBX = (r32((uint32_t)(0x10967124)));
  /* 10961649 push 0x10968214 */
  push32((uint32_t)(0x10968214u));
  /* 1096164e push 0x10968f00 */
  push32((uint32_t)(0x10968f00u));
  /* 10961653 call ebx */
  call_ind((uint32_t)(EBX), 0x10961655u);
  /* 10961655 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961658 push 0x10968208 */
  push32((uint32_t)(0x10968208u));
  /* 1096165d push 0x10968dc8 */
  push32((uint32_t)(0x10968dc8u));
  /* 10961662 call ebx */
  call_ind((uint32_t)(EBX), 0x10961664u);
  /* 10961664 push 0x109691e8 */
  push32((uint32_t)(0x109691e8u));
  /* 10961669 call edi */
  call_ind((uint32_t)(EDI), 0x1096166bu);
  /* 1096166b push 0x109681f0 */
  push32((uint32_t)(0x109681f0u));
  /* 10961670 push 0x10969138 */
  push32((uint32_t)(0x10969138u));
  /* 10961675 call esi */
  call_ind((uint32_t)(ESI), 0x10961677u);
  /* 10961677 push 0x109681e4 */
  push32((uint32_t)(0x109681e4u));
  /* 1096167c push 0x10968dd0 */
  push32((uint32_t)(0x10968dd0u));
  /* 10961681 call ebx */
  call_ind((uint32_t)(EBX), 0x10961683u);
  /* 10961683 push 0x109681dc */
  push32((uint32_t)(0x109681dcu));
  /* 10961688 push 0x10968ee0 */
  push32((uint32_t)(0x10968ee0u));
  /* 1096168d call ebx */
  call_ind((uint32_t)(EBX), 0x1096168fu);
  /* 1096168f push 0x10968d88 */
  push32((uint32_t)(0x10968d88u));
  /* 10961694 call edi */
  call_ind((uint32_t)(EDI), 0x10961696u);
  /* 10961696 push 0x10968d80 */
  push32((uint32_t)(0x10968d80u));
  /* 1096169b call edi */
  call_ind((uint32_t)(EDI), 0x1096169du);
  /* 1096169d push 0x10968d70 */
  push32((uint32_t)(0x10968d70u));
  /* 109616a2 call edi */
  call_ind((uint32_t)(EDI), 0x109616a4u);
  /* 109616a4 push 0x10968d68 */
  push32((uint32_t)(0x10968d68u));
  /* 109616a9 call edi */
  call_ind((uint32_t)(EDI), 0x109616abu);
  /* 109616ab push 0x10968d78 */
  push32((uint32_t)(0x10968d78u));
  /* 109616b0 call edi */
  call_ind((uint32_t)(EDI), 0x109616b2u);
  /* 109616b2 push 0x10968ea0 */
  push32((uint32_t)(0x10968ea0u));
  /* 109616b7 call edi */
  call_ind((uint32_t)(EDI), 0x109616b9u);
  /* 109616b9 push 0x10968f08 */
  push32((uint32_t)(0x10968f08u));
  /* 109616be call edi */
  call_ind((uint32_t)(EDI), 0x109616c0u);
  /* 109616c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109616c3 push 0x10968ee8 */
  push32((uint32_t)(0x10968ee8u));
  /* 109616c8 call edi */
  call_ind((uint32_t)(EDI), 0x109616cau);
  /* 109616ca push 0x10968f28 */
  push32((uint32_t)(0x10968f28u));
  /* 109616cf call edi */
  call_ind((uint32_t)(EDI), 0x109616d1u);
  /* 109616d1 push 0x10968f18 */
  push32((uint32_t)(0x10968f18u));
  /* 109616d6 call edi */
  call_ind((uint32_t)(EDI), 0x109616d8u);
  /* 109616d8 push 0x10968e60 */
  push32((uint32_t)(0x10968e60u));
  /* 109616dd call edi */
  call_ind((uint32_t)(EDI), 0x109616dfu);
  /* 109616df push 0x109681cc */
  push32((uint32_t)(0x109681ccu));
  /* 109616e4 push 0x10969028 */
  push32((uint32_t)(0x10969028u));
  /* 109616e9 call esi */
  call_ind((uint32_t)(ESI), 0x109616ebu);
  /* 109616eb push 0x109681c0 */
  push32((uint32_t)(0x109681c0u));
  /* 109616f0 push 0x10968ea8 */
  push32((uint32_t)(0x10968ea8u));
  /* 109616f5 call ebx */
  call_ind((uint32_t)(EBX), 0x109616f7u);
  /* 109616f7 push 0x10969108 */
  push32((uint32_t)(0x10969108u));
  /* 109616fc call edi */
  call_ind((uint32_t)(EDI), 0x109616feu);
  /* 109616fe push 0x10968eb0 */
  push32((uint32_t)(0x10968eb0u));
  /* 10961703 call edi */
  call_ind((uint32_t)(EDI), 0x10961705u);
  /* 10961705 push 0x109681ac */
  push32((uint32_t)(0x109681acu));
  /* 1096170a push 0x10968f40 */
  push32((uint32_t)(0x10968f40u));
  /* 1096170f call esi */
  call_ind((uint32_t)(ESI), 0x10961711u);
  /* 10961711 push 0x109681a0 */
  push32((uint32_t)(0x109681a0u));
  /* 10961716 push 0x10969000 */
  push32((uint32_t)(0x10969000u));
  /* 1096171b call ebx */
  call_ind((uint32_t)(EBX), 0x1096171du);
  /* 1096171d push 0x10969270 */
  push32((uint32_t)(0x10969270u));
  /* 10961722 call edi */
  call_ind((uint32_t)(EDI), 0x10961724u);
  /* 10961724 push 0x10969100 */
  push32((uint32_t)(0x10969100u));
  /* 10961729 call edi */
  call_ind((uint32_t)(EDI), 0x1096172bu);
  /* 1096172b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096172e push 0x10968198 */
  push32((uint32_t)(0x10968198u));
  /* 10961733 push 0x10968ff0 */
  push32((uint32_t)(0x10968ff0u));
  /* 10961738 call ebx */
  call_ind((uint32_t)(EBX), 0x1096173au);
  /* 1096173a push 0x10968190 */
  push32((uint32_t)(0x10968190u));
  /* 1096173f push 0x10968fe8 */
  push32((uint32_t)(0x10968fe8u));
  /* 10961744 call ebx */
  call_ind((uint32_t)(EBX), 0x10961746u);
  /* 10961746 push 0x10968180 */
  push32((uint32_t)(0x10968180u));
  /* 1096174b push 0x10969130 */
  push32((uint32_t)(0x10969130u));
  /* 10961750 call esi */
  call_ind((uint32_t)(ESI), 0x10961752u);
  /* 10961752 push 0x10968170 */
  push32((uint32_t)(0x10968170u));
  /* 10961757 push 0x10968f30 */
  push32((uint32_t)(0x10968f30u));
  /* 1096175c call esi */
  call_ind((uint32_t)(ESI), 0x1096175eu);
  /* 1096175e push 0x10969018 */
  push32((uint32_t)(0x10969018u));
  /* 10961763 call edi */
  call_ind((uint32_t)(EDI), 0x10961765u);
  /* 10961765 push 0x10969010 */
  push32((uint32_t)(0x10969010u));
  /* 1096176a call edi */
  call_ind((uint32_t)(EDI), 0x1096176cu);
  /* 1096176c push 0x10968164 */
  push32((uint32_t)(0x10968164u));
  /* 10961771 push 0x10968f38 */
  push32((uint32_t)(0x10968f38u));
  /* 10961776 call esi */
  call_ind((uint32_t)(ESI), 0x10961778u);
  /* 10961778 push 0x10968154 */
  push32((uint32_t)(0x10968154u));
  /* 1096177d push 0x109690b0 */
  push32((uint32_t)(0x109690b0u));
  /* 10961782 call esi */
  call_ind((uint32_t)(ESI), 0x10961784u);
  /* 10961784 push 0x10968148 */
  push32((uint32_t)(0x10968148u));
  /* 10961789 push 0x10968ff8 */
  push32((uint32_t)(0x10968ff8u));
  /* 1096178e call ebx */
  call_ind((uint32_t)(EBX), 0x10961790u);
  /* 10961790 mov edi, dword ptr [0x10967128] */
  EDI = (r32((uint32_t)(0x10967128)));
  /* 10961796 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961799 push 0x10968140 */
  push32((uint32_t)(0x10968140u));
  /* 1096179e push 0x10968ec8 */
  push32((uint32_t)(0x10968ec8u));
  /* 109617a3 call edi */
  call_ind((uint32_t)(EDI), 0x109617a5u);
  /* 109617a5 push 0x10968138 */
  push32((uint32_t)(0x10968138u));
  /* 109617aa push 0x10968dd8 */
  push32((uint32_t)(0x10968dd8u));
  /* 109617af call edi */
  call_ind((uint32_t)(EDI), 0x109617b1u);
  /* 109617b1 push 0x10968120 */
  push32((uint32_t)(0x10968120u));
  /* 109617b6 push 0x109690b8 */
  push32((uint32_t)(0x109690b8u));
  /* 109617bb call esi */
  call_ind((uint32_t)(ESI), 0x109617bdu);
  /* 109617bd push 0x1096810c */
  push32((uint32_t)(0x1096810cu));
  /* 109617c2 push 0x109690c0 */
  push32((uint32_t)(0x109690c0u));
  /* 109617c7 call esi */
  call_ind((uint32_t)(ESI), 0x109617c9u);
  /* 109617c9 push 0x109680fc */
  push32((uint32_t)(0x109680fcu));
  /* 109617ce push 0x109690c8 */
  push32((uint32_t)(0x109690c8u));
  /* 109617d3 call esi */
  call_ind((uint32_t)(ESI), 0x109617d5u);
  /* 109617d5 push 0x109680ec */
  push32((uint32_t)(0x109680ecu));
  /* 109617da push 0x109690d0 */
  push32((uint32_t)(0x109690d0u));
  /* 109617df call esi */
  call_ind((uint32_t)(ESI), 0x109617e1u);
  /* 109617e1 push 0x109680d8 */
  push32((uint32_t)(0x109680d8u));
  /* 109617e6 push 0x109690d8 */
  push32((uint32_t)(0x109690d8u));
  /* 109617eb call esi */
  call_ind((uint32_t)(ESI), 0x109617edu);
  /* 109617ed push 0x109680cc */
  push32((uint32_t)(0x109680ccu));
  /* 109617f2 push 0x109690e0 */
  push32((uint32_t)(0x109690e0u));
  /* 109617f7 call esi */
  call_ind((uint32_t)(ESI), 0x109617f9u);
  /* 109617f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109617fc push 0x109680b8 */
  push32((uint32_t)(0x109680b8u));
  /* 10961801 push 0x109690e8 */
  push32((uint32_t)(0x109690e8u));
  /* 10961806 call esi */
  call_ind((uint32_t)(ESI), 0x10961808u);
  /* 10961808 push 0x109680ac */
  push32((uint32_t)(0x109680acu));
  /* 1096180d push 0x109690f0 */
  push32((uint32_t)(0x109690f0u));
  /* 10961812 call esi */
  call_ind((uint32_t)(ESI), 0x10961814u);
  /* 10961814 push 0x1096809c */
  push32((uint32_t)(0x1096809cu));
  /* 10961819 push 0x109690f8 */
  push32((uint32_t)(0x109690f8u));
  /* 1096181e call esi */
  call_ind((uint32_t)(ESI), 0x10961820u);
  /* 10961820 push 0x10968090 */
  push32((uint32_t)(0x10968090u));
  /* 10961825 push 0x10969140 */
  push32((uint32_t)(0x10969140u));
  /* 1096182a call esi */
  call_ind((uint32_t)(ESI), 0x1096182cu);
  /* 1096182c push 0x10968084 */
  push32((uint32_t)(0x10968084u));
  /* 10961831 push 0x10969148 */
  push32((uint32_t)(0x10969148u));
  /* 10961836 call esi */
  call_ind((uint32_t)(ESI), 0x10961838u);
  /* 10961838 push 0x10968078 */
  push32((uint32_t)(0x10968078u));
  /* 1096183d push 0x10969150 */
  push32((uint32_t)(0x10969150u));
  /* 10961842 call esi */
  call_ind((uint32_t)(ESI), 0x10961844u);
  /* 10961844 push 0x10968068 */
  push32((uint32_t)(0x10968068u));
  /* 10961849 push 0x10969158 */
  push32((uint32_t)(0x10969158u));
  /* 1096184e call esi */
  call_ind((uint32_t)(ESI), 0x10961850u);
  /* 10961850 push 0x1096805c */
  push32((uint32_t)(0x1096805cu));
  /* 10961855 push 0x10969160 */
  push32((uint32_t)(0x10969160u));
  /* 1096185a call esi */
  call_ind((uint32_t)(ESI), 0x1096185cu);
  /* 1096185c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096185f push 0x10968050 */
  push32((uint32_t)(0x10968050u));
  /* 10961864 push 0x10969168 */
  push32((uint32_t)(0x10969168u));
  /* 10961869 call esi */
  call_ind((uint32_t)(ESI), 0x1096186bu);
  /* 1096186b push 0x10968044 */
  push32((uint32_t)(0x10968044u));
  /* 10961870 push 0x10969170 */
  push32((uint32_t)(0x10969170u));
  /* 10961875 call esi */
  call_ind((uint32_t)(ESI), 0x10961877u);
  /* 10961877 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10961879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096187b call dword ptr [0x10967120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967120))), 0x10961881u);
  /* 10961881 mov esi, dword ptr [0x10967130] */
  ESI = (r32((uint32_t)(0x10967130)));
  /* 10961887 push 0x10968038 */
  push32((uint32_t)(0x10968038u));
  /* 1096188c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096188e call esi */
  call_ind((uint32_t)(ESI), 0x10961890u);
  /* 10961890 push 0x10968030 */
  push32((uint32_t)(0x10968030u));
  /* 10961895 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961897 call esi */
  call_ind((uint32_t)(ESI), 0x10961899u);
  /* 10961899 call dword ptr [0x10967134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967134))), 0x1096189fu);
  /* 1096189f mov esi, dword ptr [0x1096712c] */
  ESI = (r32((uint32_t)(0x1096712c)));
  /* 109618a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618a7 push 0x109690b8 */
  push32((uint32_t)(0x109690b8u));
  /* 109618ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109618ae call esi */
  call_ind((uint32_t)(ESI), 0x109618b0u);
  /* 109618b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618b2 push 0x109690c0 */
  push32((uint32_t)(0x109690c0u));
  /* 109618b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618b9 call esi */
  call_ind((uint32_t)(ESI), 0x109618bbu);
  /* 109618bb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109618be push 0 */
  push32((uint32_t)(0x0u));
  /* 109618c0 push 0x109690c8 */
  push32((uint32_t)(0x109690c8u));
  /* 109618c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618c7 call esi */
  call_ind((uint32_t)(ESI), 0x109618c9u);
  /* 109618c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618cb push 0x109690d0 */
  push32((uint32_t)(0x109690d0u));
  /* 109618d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618d2 call esi */
  call_ind((uint32_t)(ESI), 0x109618d4u);
  /* 109618d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618d6 push 0x109690d8 */
  push32((uint32_t)(0x109690d8u));
  /* 109618db push 0 */
  push32((uint32_t)(0x0u));
  /* 109618dd call esi */
  call_ind((uint32_t)(ESI), 0x109618dfu);
  /* 109618df push 0 */
  push32((uint32_t)(0x0u));
  /* 109618e1 push 0x109690e0 */
  push32((uint32_t)(0x109690e0u));
  /* 109618e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618e8 call esi */
  call_ind((uint32_t)(ESI), 0x109618eau);
  /* 109618ea push 0 */
  push32((uint32_t)(0x0u));
  /* 109618ec push 0x109690e8 */
  push32((uint32_t)(0x109690e8u));
  /* 109618f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618f3 call esi */
  call_ind((uint32_t)(ESI), 0x109618f5u);
  /* 109618f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109618f7 push 0x109690f0 */
  push32((uint32_t)(0x109690f0u));
  /* 109618fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109618fe call esi */
  call_ind((uint32_t)(ESI), 0x10961900u);
  /* 10961900 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961903 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961905 push 0x109690f8 */
  push32((uint32_t)(0x109690f8u));
  /* 1096190a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096190c call esi */
  call_ind((uint32_t)(ESI), 0x1096190eu);
  /* 1096190e push 0 */
  push32((uint32_t)(0x0u));
  /* 10961910 push 0x10969140 */
  push32((uint32_t)(0x10969140u));
  /* 10961915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961917 call esi */
  call_ind((uint32_t)(ESI), 0x10961919u);
  /* 10961919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096191b push 0x10969148 */
  push32((uint32_t)(0x10969148u));
  /* 10961920 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961922 call esi */
  call_ind((uint32_t)(ESI), 0x10961924u);
  /* 10961924 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961926 push 0x10969150 */
  push32((uint32_t)(0x10969150u));
  /* 1096192b push 0 */
  push32((uint32_t)(0x0u));
  /* 1096192d call esi */
  call_ind((uint32_t)(ESI), 0x1096192fu);
  /* 1096192f push 0 */
  push32((uint32_t)(0x0u));
  /* 10961931 push 0x10969158 */
  push32((uint32_t)(0x10969158u));
  /* 10961936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961938 call esi */
  call_ind((uint32_t)(ESI), 0x1096193au);
  /* 1096193a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096193c push 0x10969160 */
  push32((uint32_t)(0x10969160u));
  /* 10961941 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961943 call esi */
  call_ind((uint32_t)(ESI), 0x10961945u);
  /* 10961945 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096194a push 0x10969168 */
  push32((uint32_t)(0x10969168u));
  /* 1096194f push 0 */
  push32((uint32_t)(0x0u));
  /* 10961951 call esi */
  call_ind((uint32_t)(ESI), 0x10961953u);
  /* 10961953 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961955 push 0x10969170 */
  push32((uint32_t)(0x10969170u));
  /* 1096195a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096195c call esi */
  call_ind((uint32_t)(ESI), 0x1096195eu);
  /* 1096195e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961961 pop edi */
  EDI = (pop32());
  /* 10961962 pop esi */
  ESI = (pop32());
  /* 10961963 pop ebx */
  EBX = (pop32());
  /* 10961964 ret  */
  ESPCHK(0x10961000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001970 @ 0x10961970 (20 bytes, 6 insns) */
void f_10961970(void) {
  FTRACE(0x10961970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10961970 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10961974 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10961975 jne 0x1096197c */
  if (!C.zf) goto L_1096197c;
  /* 10961977 call 0x10961000 */
  push32(0x1096197cu); f_10961000();
L_1096197c:;
  /* 1096197c mov eax, 1 */
  EAX = (0x1u);
  /* 10961981 ret 0xc */
  ESPCHK(0x10961970u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10961990 (8982 bytes, 2881 insns) */
void f_10961990(void) {
  FTRACE(0x10961990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10961990 push ecx */
  push32((uint32_t)(ECX));
  /* 10961991 push ebx */
  push32((uint32_t)(EBX));
  /* 10961992 push ebp */
  push32((uint32_t)(EBP));
  /* 10961993 push esi */
  push32((uint32_t)(ESI));
  /* 10961994 push edi */
  push32((uint32_t)(EDI));
  /* 10961995 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961997 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x1096199du);
  /* 1096199d mov esi, dword ptr [0x109670b8] */
  ESI = (r32((uint32_t)(0x109670b8)));
  /* 109619a3 mov ebx, dword ptr [0x109670bc] */
  EBX = (r32((uint32_t)(0x109670bc)));
  /* 109619a9 mov ebp, dword ptr [0x109670b4] */
  EBP = (r32((uint32_t)(0x109670b4)));
  /* 109619af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109619b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109619b4 je 0x1096200b */
  if (C.zf) goto L_1096200b;
  /* 109619ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109619bc push 1 */
  push32((uint32_t)(0x1u));
  /* 109619be call esi */
  call_ind((uint32_t)(ESI), 0x109619c0u);
  /* 109619c0 push 0xea60 */
  push32((uint32_t)(0xea60u));
  /* 109619c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 109619c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109619c9 call ebx */
  call_ind((uint32_t)(EBX), 0x109619cbu);
  /* 109619cb push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 109619d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109619d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109619d4 call ebx */
  call_ind((uint32_t)(EBX), 0x109619d6u);
  /* 109619d6 push 0xafc8 */
  push32((uint32_t)(0xafc8u));
  /* 109619db push 0 */
  push32((uint32_t)(0x0u));
  /* 109619dd push 0 */
  push32((uint32_t)(0x0u));
  /* 109619df call ebx */
  call_ind((uint32_t)(EBX), 0x109619e1u);
  /* 109619e1 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 109619e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109619e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109619ea call ebx */
  call_ind((uint32_t)(EBX), 0x109619ecu);
  /* 109619ec push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 109619f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 109619f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109619f5 call ebx */
  call_ind((uint32_t)(EBX), 0x109619f7u);
  /* 109619f7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109619fa push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 109619ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10961a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961a03 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a05u);
  /* 10961a05 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a0a push 3 */
  push32((uint32_t)(0x3u));
  /* 10961a0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a0e call ebx */
  call_ind((uint32_t)(EBX), 0x10961a10u);
  /* 10961a10 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a19 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a1bu);
  /* 10961a1b push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961a22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a24 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a26u);
  /* 10961a26 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a2f call ebx */
  call_ind((uint32_t)(EBX), 0x10961a31u);
  /* 10961a31 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a36 push 5 */
  push32((uint32_t)(0x5u));
  /* 10961a38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a3a call ebx */
  call_ind((uint32_t)(EBX), 0x10961a3cu);
  /* 10961a3c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961a3f push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a44 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a48 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a4au);
  /* 10961a4a push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a4f push 3 */
  push32((uint32_t)(0x3u));
  /* 10961a51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a53 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a55u);
  /* 10961a55 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10961a5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a5e call ebx */
  call_ind((uint32_t)(EBX), 0x10961a60u);
  /* 10961a60 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a69 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a6bu);
  /* 10961a6b push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a72 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a74 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a76u);
  /* 10961a76 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a7b push 5 */
  push32((uint32_t)(0x5u));
  /* 10961a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a7f call ebx */
  call_ind((uint32_t)(EBX), 0x10961a81u);
  /* 10961a81 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961a84 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a89 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961a8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10961a8d call ebx */
  call_ind((uint32_t)(EBX), 0x10961a8fu);
  /* 10961a8f push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a94 push 3 */
  push32((uint32_t)(0x3u));
  /* 10961a96 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961a98 call ebx */
  call_ind((uint32_t)(EBX), 0x10961a9au);
  /* 10961a9a push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10961aa1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961aa3 call ebx */
  call_ind((uint32_t)(EBX), 0x10961aa5u);
  /* 10961aa5 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10961aac push 4 */
  push32((uint32_t)(0x4u));
  /* 10961aae call ebx */
  call_ind((uint32_t)(EBX), 0x10961ab0u);
  /* 10961ab0 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961ab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961ab7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961ab9 call ebx */
  call_ind((uint32_t)(EBX), 0x10961abbu);
  /* 10961abb push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961ac0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10961ac2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961ac4 call ebx */
  call_ind((uint32_t)(EBX), 0x10961ac6u);
  /* 10961ac6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961ac9 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10961ace push 4 */
  push32((uint32_t)(0x4u));
  /* 10961ad0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961ad2 call ebx */
  call_ind((uint32_t)(EBX), 0x10961ad4u);
  /* 10961ad4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961ad6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961ad8 push 0x10969020 */
  push32((uint32_t)(0x10969020u));
  /* 10961add call dword ptr [0x109670c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670c4))), 0x10961ae3u);
  /* 10961ae3 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10961ae8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961aea call ebp */
  call_ind((uint32_t)(EBP), 0x10961aecu);
  /* 10961aec push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 10961af1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961af3 call ebp */
  call_ind((uint32_t)(EBP), 0x10961af5u);
  /* 10961af5 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10961afa push 3 */
  push32((uint32_t)(0x3u));
  /* 10961afc call ebp */
  call_ind((uint32_t)(EBP), 0x10961afeu);
  /* 10961afe push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10961b03 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961b05 call ebp */
  call_ind((uint32_t)(EBP), 0x10961b07u);
  /* 10961b07 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10961b0c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10961b0e call ebp */
  call_ind((uint32_t)(EBP), 0x10961b10u);
  /* 10961b10 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961b13 push 0x6a4 */
  push32((uint32_t)(0x6a4u));
  /* 10961b18 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10961b1a call ebp */
  call_ind((uint32_t)(EBP), 0x10961b1cu);
  /* 10961b1c push 0x708 */
  push32((uint32_t)(0x708u));
  /* 10961b21 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10961b23 call ebp */
  call_ind((uint32_t)(EBP), 0x10961b25u);
  /* 10961b25 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10961b2a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10961b2c call ebp */
  call_ind((uint32_t)(EBP), 0x10961b2eu);
  /* 10961b2e push 0xf3c */
  push32((uint32_t)(0xf3cu));
  /* 10961b33 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10961b35 call ebp */
  call_ind((uint32_t)(EBP), 0x10961b37u);
  /* 10961b37 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10961b3c push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10961b3e call ebp */
  call_ind((uint32_t)(EBP), 0x10961b40u);
  /* 10961b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961b42 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10961b44 call esi */
  call_ind((uint32_t)(ESI), 0x10961b46u);
  /* 10961b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961b48 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10961b4a call esi */
  call_ind((uint32_t)(ESI), 0x10961b4cu);
  /* 10961b4c push 0x10968a2c */
  push32((uint32_t)(0x10968a2cu));
  /* 10961b51 call dword ptr [0x109670c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670c8))), 0x10961b57u);
  /* 10961b57 mov esi, dword ptr [0x109670c0] */
  ESI = (r32((uint32_t)(0x109670c0)));
  /* 10961b5d push 0x10968a24 */
  push32((uint32_t)(0x10968a24u));
  /* 10961b62 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961b67 call esi */
  call_ind((uint32_t)(ESI), 0x10961b69u);
  /* 10961b69 mov edi, dword ptr [0x109670d0] */
  EDI = (r32((uint32_t)(0x109670d0)));
  /* 10961b6f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961b72 push 0x10968dd8 */
  push32((uint32_t)(0x10968dd8u));
  /* 10961b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961b79 call edi */
  call_ind((uint32_t)(EDI), 0x10961b7bu);
  /* 10961b7b push 0x10968a0c */
  push32((uint32_t)(0x10968a0cu));
  /* 10961b80 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961b85 call esi */
  call_ind((uint32_t)(ESI), 0x10961b87u);
  /* 10961b87 push 0x109689f4 */
  push32((uint32_t)(0x109689f4u));
  /* 10961b8c push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961b91 call esi */
  call_ind((uint32_t)(ESI), 0x10961b93u);
  /* 10961b93 push 0x109689dc */
  push32((uint32_t)(0x109689dcu));
  /* 10961b98 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961b9d call esi */
  call_ind((uint32_t)(ESI), 0x10961b9fu);
  /* 10961b9f push 0x109689c4 */
  push32((uint32_t)(0x109689c4u));
  /* 10961ba4 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961ba9 call esi */
  call_ind((uint32_t)(ESI), 0x10961babu);
  /* 10961bab push 0x109689ac */
  push32((uint32_t)(0x109689acu));
  /* 10961bb0 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961bb5 call esi */
  call_ind((uint32_t)(ESI), 0x10961bb7u);
  /* 10961bb7 push 0x10968994 */
  push32((uint32_t)(0x10968994u));
  /* 10961bbc push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961bc1 call esi */
  call_ind((uint32_t)(ESI), 0x10961bc3u);
  /* 10961bc3 push 0x1096897c */
  push32((uint32_t)(0x1096897cu));
  /* 10961bc8 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961bcd call esi */
  call_ind((uint32_t)(ESI), 0x10961bcfu);
  /* 10961bcf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961bd2 push 0x10968964 */
  push32((uint32_t)(0x10968964u));
  /* 10961bd7 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961bdc call esi */
  call_ind((uint32_t)(ESI), 0x10961bdeu);
  /* 10961bde push 0x1096894c */
  push32((uint32_t)(0x1096894cu));
  /* 10961be3 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961be8 call esi */
  call_ind((uint32_t)(ESI), 0x10961beau);
  /* 10961bea push 0x10968934 */
  push32((uint32_t)(0x10968934u));
  /* 10961bef push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961bf4 call esi */
  call_ind((uint32_t)(ESI), 0x10961bf6u);
  /* 10961bf6 push 0x1096891c */
  push32((uint32_t)(0x1096891cu));
  /* 10961bfb push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c00 call esi */
  call_ind((uint32_t)(ESI), 0x10961c02u);
  /* 10961c02 push 0x10968904 */
  push32((uint32_t)(0x10968904u));
  /* 10961c07 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c0c call esi */
  call_ind((uint32_t)(ESI), 0x10961c0eu);
  /* 10961c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10961c10 call dword ptr [0x109670d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670d4))), 0x10961c16u);
  /* 10961c16 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961c19 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10961c1c jne 0x10961d33 */
  if (!C.zf) goto L_10961d33;
  /* 10961c22 push 0x109688f0 */
  push32((uint32_t)(0x109688f0u));
  /* 10961c27 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c2c call esi */
  call_ind((uint32_t)(ESI), 0x10961c2eu);
  /* 10961c2e push 0x109688dc */
  push32((uint32_t)(0x109688dcu));
  /* 10961c33 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c38 call esi */
  call_ind((uint32_t)(ESI), 0x10961c3au);
  /* 10961c3a push 0x109688c8 */
  push32((uint32_t)(0x109688c8u));
  /* 10961c3f push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c44 call esi */
  call_ind((uint32_t)(ESI), 0x10961c46u);
  /* 10961c46 push 0x109688b4 */
  push32((uint32_t)(0x109688b4u));
  /* 10961c4b push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c50 call esi */
  call_ind((uint32_t)(ESI), 0x10961c52u);
  /* 10961c52 push 0x109688a0 */
  push32((uint32_t)(0x109688a0u));
  /* 10961c57 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c5c call esi */
  call_ind((uint32_t)(ESI), 0x10961c5eu);
  /* 10961c5e push 0x1096888c */
  push32((uint32_t)(0x1096888cu));
  /* 10961c63 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c68 call esi */
  call_ind((uint32_t)(ESI), 0x10961c6au);
  /* 10961c6a push 0x10968878 */
  push32((uint32_t)(0x10968878u));
  /* 10961c6f push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c74 call esi */
  call_ind((uint32_t)(ESI), 0x10961c76u);
  /* 10961c76 push 0x10968864 */
  push32((uint32_t)(0x10968864u));
  /* 10961c7b push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c80 call esi */
  call_ind((uint32_t)(ESI), 0x10961c82u);
  /* 10961c82 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961c85 push 0x10968850 */
  push32((uint32_t)(0x10968850u));
  /* 10961c8a push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961c8f call esi */
  call_ind((uint32_t)(ESI), 0x10961c91u);
  /* 10961c91 push 0x10968848 */
  push32((uint32_t)(0x10968848u));
  /* 10961c96 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961c9b call esi */
  call_ind((uint32_t)(ESI), 0x10961c9du);
  /* 10961c9d push 0x10968840 */
  push32((uint32_t)(0x10968840u));
  /* 10961ca2 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961ca7 call esi */
  call_ind((uint32_t)(ESI), 0x10961ca9u);
  /* 10961ca9 push 0x10968838 */
  push32((uint32_t)(0x10968838u));
  /* 10961cae push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961cb3 call esi */
  call_ind((uint32_t)(ESI), 0x10961cb5u);
  /* 10961cb5 push 0x10968830 */
  push32((uint32_t)(0x10968830u));
  /* 10961cba push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961cbf call esi */
  call_ind((uint32_t)(ESI), 0x10961cc1u);
  /* 10961cc1 push 0x1096881c */
  push32((uint32_t)(0x1096881cu));
  /* 10961cc6 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961ccb call esi */
  call_ind((uint32_t)(ESI), 0x10961ccdu);
  /* 10961ccd push 0x10968804 */
  push32((uint32_t)(0x10968804u));
  /* 10961cd2 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961cd7 call esi */
  call_ind((uint32_t)(ESI), 0x10961cd9u);
  /* 10961cd9 push 0x109687ec */
  push32((uint32_t)(0x109687ecu));
  /* 10961cde push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961ce3 call esi */
  call_ind((uint32_t)(ESI), 0x10961ce5u);
  /* 10961ce5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961ce8 push 0x10968ec8 */
  push32((uint32_t)(0x10968ec8u));
  /* 10961ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10961cef call edi */
  call_ind((uint32_t)(EDI), 0x10961cf1u);
  /* 10961cf1 push 0xea60 */
  push32((uint32_t)(0xea60u));
  /* 10961cf6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10961cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961cfa call ebx */
  call_ind((uint32_t)(EBX), 0x10961cfcu);
  /* 10961cfc push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10961d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d05 call ebx */
  call_ind((uint32_t)(EBX), 0x10961d07u);
  /* 10961d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d0d call ebx */
  call_ind((uint32_t)(EBX), 0x10961d0fu);
  /* 10961d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d15 call ebx */
  call_ind((uint32_t)(EBX), 0x10961d17u);
  /* 10961d17 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10961d1c push 5 */
  push32((uint32_t)(0x5u));
  /* 10961d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d20 call ebx */
  call_ind((uint32_t)(EBX), 0x10961d22u);
  /* 10961d22 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961d25 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10961d2a push 4 */
  push32((uint32_t)(0x4u));
  /* 10961d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d2e call ebx */
  call_ind((uint32_t)(EBX), 0x10961d30u);
  /* 10961d30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10961d33:;
  /* 10961d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961d35 call dword ptr [0x109670d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670d4))), 0x10961d3bu);
  /* 10961d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961d3e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10961d41 jne 0x10961e3d */
  if (!C.zf) goto L_10961e3d;
  /* 10961d47 push 0x109688f0 */
  push32((uint32_t)(0x109688f0u));
  /* 10961d4c push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d51 call esi */
  call_ind((uint32_t)(ESI), 0x10961d53u);
  /* 10961d53 push 0x109688dc */
  push32((uint32_t)(0x109688dcu));
  /* 10961d58 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d5d call esi */
  call_ind((uint32_t)(ESI), 0x10961d5fu);
  /* 10961d5f push 0x109688c8 */
  push32((uint32_t)(0x109688c8u));
  /* 10961d64 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d69 call esi */
  call_ind((uint32_t)(ESI), 0x10961d6bu);
  /* 10961d6b push 0x109688b4 */
  push32((uint32_t)(0x109688b4u));
  /* 10961d70 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d75 call esi */
  call_ind((uint32_t)(ESI), 0x10961d77u);
  /* 10961d77 push 0x109688a0 */
  push32((uint32_t)(0x109688a0u));
  /* 10961d7c push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d81 call esi */
  call_ind((uint32_t)(ESI), 0x10961d83u);
  /* 10961d83 push 0x1096888c */
  push32((uint32_t)(0x1096888cu));
  /* 10961d88 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d8d call esi */
  call_ind((uint32_t)(ESI), 0x10961d8fu);
  /* 10961d8f push 0x10968878 */
  push32((uint32_t)(0x10968878u));
  /* 10961d94 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961d99 call esi */
  call_ind((uint32_t)(ESI), 0x10961d9bu);
  /* 10961d9b push 0x10968864 */
  push32((uint32_t)(0x10968864u));
  /* 10961da0 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961da5 call esi */
  call_ind((uint32_t)(ESI), 0x10961da7u);
  /* 10961da7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961daa push 0x10968850 */
  push32((uint32_t)(0x10968850u));
  /* 10961daf push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961db4 call esi */
  call_ind((uint32_t)(ESI), 0x10961db6u);
  /* 10961db6 push 0x109687e4 */
  push32((uint32_t)(0x109687e4u));
  /* 10961dbb push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961dc0 call esi */
  call_ind((uint32_t)(ESI), 0x10961dc2u);
  /* 10961dc2 push 0x109687dc */
  push32((uint32_t)(0x109687dcu));
  /* 10961dc7 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961dcc call esi */
  call_ind((uint32_t)(ESI), 0x10961dceu);
  /* 10961dce push 0x109687d4 */
  push32((uint32_t)(0x109687d4u));
  /* 10961dd3 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961dd8 call esi */
  call_ind((uint32_t)(ESI), 0x10961ddau);
  /* 10961dda push 0x10968848 */
  push32((uint32_t)(0x10968848u));
  /* 10961ddf push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961de4 call esi */
  call_ind((uint32_t)(ESI), 0x10961de6u);
  /* 10961de6 push 0x10968838 */
  push32((uint32_t)(0x10968838u));
  /* 10961deb push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961df0 call esi */
  call_ind((uint32_t)(ESI), 0x10961df2u);
  /* 10961df2 push 0x10968ec8 */
  push32((uint32_t)(0x10968ec8u));
  /* 10961df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961df9 call edi */
  call_ind((uint32_t)(EDI), 0x10961dfbu);
  /* 10961dfb push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10961e00 push 3 */
  push32((uint32_t)(0x3u));
  /* 10961e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e04 call ebx */
  call_ind((uint32_t)(EBX), 0x10961e06u);
  /* 10961e06 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961e09 push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10961e0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10961e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e12 call ebx */
  call_ind((uint32_t)(EBX), 0x10961e14u);
  /* 10961e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e1a call ebx */
  call_ind((uint32_t)(EBX), 0x10961e1cu);
  /* 10961e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10961e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e22 call ebx */
  call_ind((uint32_t)(EBX), 0x10961e24u);
  /* 10961e24 push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10961e29 push 5 */
  push32((uint32_t)(0x5u));
  /* 10961e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e2d call ebx */
  call_ind((uint32_t)(EBX), 0x10961e2fu);
  /* 10961e2f push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10961e34 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e38 call ebx */
  call_ind((uint32_t)(EBX), 0x10961e3au);
  /* 10961e3a add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10961e3d:;
  /* 10961e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10961e3f call dword ptr [0x109670d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670d4))), 0x10961e45u);
  /* 10961e45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961e48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10961e4b jne 0x10961f4a */
  if (!C.zf) goto L_10961f4a;
  /* 10961e51 push 0x109688f0 */
  push32((uint32_t)(0x109688f0u));
  /* 10961e56 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961e5b call esi */
  call_ind((uint32_t)(ESI), 0x10961e5du);
  /* 10961e5d push 0x109688dc */
  push32((uint32_t)(0x109688dcu));
  /* 10961e62 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961e67 call esi */
  call_ind((uint32_t)(ESI), 0x10961e69u);
  /* 10961e69 push 0x109688c8 */
  push32((uint32_t)(0x109688c8u));
  /* 10961e6e push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961e73 call esi */
  call_ind((uint32_t)(ESI), 0x10961e75u);
  /* 10961e75 push 0x109688b4 */
  push32((uint32_t)(0x109688b4u));
  /* 10961e7a push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961e7f call esi */
  call_ind((uint32_t)(ESI), 0x10961e81u);
  /* 10961e81 push 0x109688a0 */
  push32((uint32_t)(0x109688a0u));
  /* 10961e86 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961e8b call esi */
  call_ind((uint32_t)(ESI), 0x10961e8du);
  /* 10961e8d push 0x1096888c */
  push32((uint32_t)(0x1096888cu));
  /* 10961e92 push 0x10968678 */
  push32((uint32_t)(0x10968678u));
  /* 10961e97 call esi */
  call_ind((uint32_t)(ESI), 0x10961e99u);
  /* 10961e99 push 0x109687e4 */
  push32((uint32_t)(0x109687e4u));
  /* 10961e9e push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961ea3 call esi */
  call_ind((uint32_t)(ESI), 0x10961ea5u);
  /* 10961ea5 push 0x109687dc */
  push32((uint32_t)(0x109687dcu));
  /* 10961eaa push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961eaf call esi */
  call_ind((uint32_t)(ESI), 0x10961eb1u);
  /* 10961eb1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961eb4 push 0x109687d4 */
  push32((uint32_t)(0x109687d4u));
  /* 10961eb9 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961ebe call esi */
  call_ind((uint32_t)(ESI), 0x10961ec0u);
  /* 10961ec0 push 0x109687cc */
  push32((uint32_t)(0x109687ccu));
  /* 10961ec5 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961eca call esi */
  call_ind((uint32_t)(ESI), 0x10961eccu);
  /* 10961ecc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10961ed1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10961ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ed5 call ebx */
  call_ind((uint32_t)(EBX), 0x10961ed7u);
  /* 10961ed7 push 0xafc8 */
  push32((uint32_t)(0xafc8u));
  /* 10961edc push 1 */
  push32((uint32_t)(0x1u));
  /* 10961ede push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ee0 call ebx */
  call_ind((uint32_t)(EBX), 0x10961ee2u);
  /* 10961ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ee8 call ebx */
  call_ind((uint32_t)(EBX), 0x10961eeau);
  /* 10961eea push 0 */
  push32((uint32_t)(0x0u));
  /* 10961eec push 2 */
  push32((uint32_t)(0x2u));
  /* 10961eee push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ef0 call ebx */
  call_ind((uint32_t)(EBX), 0x10961ef2u);
  /* 10961ef2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961ef5 push 0xafc8 */
  push32((uint32_t)(0xafc8u));
  /* 10961efa push 5 */
  push32((uint32_t)(0x5u));
  /* 10961efc push 0 */
  push32((uint32_t)(0x0u));
  /* 10961efe call ebx */
  call_ind((uint32_t)(EBX), 0x10961f00u);
  /* 10961f00 push 0xafc8 */
  push32((uint32_t)(0xafc8u));
  /* 10961f05 push 4 */
  push32((uint32_t)(0x4u));
  /* 10961f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961f09 call ebx */
  call_ind((uint32_t)(EBX), 0x10961f0bu);
  /* 10961f0b mov edi, dword ptr [0x109670cc] */
  EDI = (r32((uint32_t)(0x109670cc)));
  /* 10961f11 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10961f13 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10961f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961f1a push 0x10968f50 */
  push32((uint32_t)(0x10968f50u));
  /* 10961f1f push 0x10968dc8 */
  push32((uint32_t)(0x10968dc8u));
  /* 10961f24 push 0x10969178 */
  push32((uint32_t)(0x10969178u));
  /* 10961f29 call edi */
  call_ind((uint32_t)(EDI), 0x10961f2bu);
  /* 10961f2b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10961f2d push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 10961f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961f34 push 0x10969138 */
  push32((uint32_t)(0x10969138u));
  /* 10961f39 push 0x10968ee0 */
  push32((uint32_t)(0x10968ee0u));
  /* 10961f3e push 0x109691e8 */
  push32((uint32_t)(0x109691e8u));
  /* 10961f43 call edi */
  call_ind((uint32_t)(EDI), 0x10961f45u);
  /* 10961f45 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961f48 jmp 0x10961f50 */
  goto L_10961f50;
L_10961f4a:;
  /* 10961f4a mov edi, dword ptr [0x109670cc] */
  EDI = (r32((uint32_t)(0x109670cc)));
L_10961f50:;
  /* 10961f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961f52 call dword ptr [0x109670d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670d4))), 0x10961f58u);
  /* 10961f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10961f5d jne 0x10962011 */
  if (!C.zf) goto L_10962011;
  /* 10961f63 push 0x109687e4 */
  push32((uint32_t)(0x109687e4u));
  /* 10961f68 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961f6d call esi */
  call_ind((uint32_t)(ESI), 0x10961f6fu);
  /* 10961f6f push 0x109687dc */
  push32((uint32_t)(0x109687dcu));
  /* 10961f74 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961f79 call esi */
  call_ind((uint32_t)(ESI), 0x10961f7bu);
  /* 10961f7b push 0x109687d4 */
  push32((uint32_t)(0x109687d4u));
  /* 10961f80 push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961f85 call esi */
  call_ind((uint32_t)(ESI), 0x10961f87u);
  /* 10961f87 push 0x109687cc */
  push32((uint32_t)(0x109687ccu));
  /* 10961f8c push 0x109686d0 */
  push32((uint32_t)(0x109686d0u));
  /* 10961f91 call esi */
  call_ind((uint32_t)(ESI), 0x10961f93u);
  /* 10961f93 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 10961f98 push 3 */
  push32((uint32_t)(0x3u));
  /* 10961f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10961f9c call ebx */
  call_ind((uint32_t)(EBX), 0x10961f9eu);
  /* 10961f9e push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10961fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10961fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fa7 call ebx */
  call_ind((uint32_t)(EBX), 0x10961fa9u);
  /* 10961fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fab push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fad push 0 */
  push32((uint32_t)(0x0u));
  /* 10961faf call ebx */
  call_ind((uint32_t)(EBX), 0x10961fb1u);
  /* 10961fb1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10961fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10961fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fba call ebx */
  call_ind((uint32_t)(EBX), 0x10961fbcu);
  /* 10961fbc push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10961fc1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10961fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fc5 call ebx */
  call_ind((uint32_t)(EBX), 0x10961fc7u);
  /* 10961fc7 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 10961fcc push 4 */
  push32((uint32_t)(0x4u));
  /* 10961fce push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fd0 call ebx */
  call_ind((uint32_t)(EBX), 0x10961fd2u);
  /* 10961fd2 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10961fd4 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10961fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961fdb push 0x10968f50 */
  push32((uint32_t)(0x10968f50u));
  /* 10961fe0 push 0x10968f00 */
  push32((uint32_t)(0x10968f00u));
  /* 10961fe5 push 0x10969178 */
  push32((uint32_t)(0x10969178u));
  /* 10961fea call edi */
  call_ind((uint32_t)(EDI), 0x10961fecu);
  /* 10961fec push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10961fee push 0x10968f48 */
  push32((uint32_t)(0x10968f48u));
  /* 10961ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10961ff5 push 0x10969138 */
  push32((uint32_t)(0x10969138u));
  /* 10961ffa push 0x10968dd0 */
  push32((uint32_t)(0x10968dd0u));
  /* 10961fff push 0x109691e8 */
  push32((uint32_t)(0x109691e8u));
  /* 10962004 call edi */
  call_ind((uint32_t)(EDI), 0x10962006u);
  /* 10962006 add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962009 jmp 0x10962011 */
  goto L_10962011;
L_1096200b:;
  /* 1096200b mov edi, dword ptr [0x109670cc] */
  EDI = (r32((uint32_t)(0x109670cc)));
L_10962011:;
  /* 10962011 mov esi, dword ptr [0x109670dc] */
  ESI = (r32((uint32_t)(0x109670dc)));
  /* 10962017 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962019 call esi */
  call_ind((uint32_t)(ESI), 0x1096201bu);
  /* 1096201b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096201e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962020 je 0x1096204b */
  if (C.zf) goto L_1096204b;
  /* 10962022 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10962027 push 0x10968fd0 */
  push32((uint32_t)(0x10968fd0u));
  /* 1096202c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096202e push 0x10969028 */
  push32((uint32_t)(0x10969028u));
  /* 10962033 push 0x10968ea8 */
  push32((uint32_t)(0x10968ea8u));
  /* 10962038 push 0x10968d88 */
  push32((uint32_t)(0x10968d88u));
  /* 1096203d call edi */
  call_ind((uint32_t)(EDI), 0x1096203fu);
  /* 1096203f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10962044 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962046 call ebp */
  call_ind((uint32_t)(EBP), 0x10962048u);
  /* 10962048 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096204b:;
  /* 1096204b push 2 */
  push32((uint32_t)(0x2u));
  /* 1096204d call esi */
  call_ind((uint32_t)(ESI), 0x1096204fu);
  /* 1096204f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962052 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962054 je 0x1096207f */
  if (C.zf) goto L_1096207f;
  /* 10962056 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1096205b push 0x10968fd8 */
  push32((uint32_t)(0x10968fd8u));
  /* 10962060 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962062 push 0x10969028 */
  push32((uint32_t)(0x10969028u));
  /* 10962067 push 0x10968ea8 */
  push32((uint32_t)(0x10968ea8u));
  /* 1096206c push 0x10968d80 */
  push32((uint32_t)(0x10968d80u));
  /* 10962071 call edi */
  call_ind((uint32_t)(EDI), 0x10962073u);
  /* 10962073 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10962078 push 2 */
  push32((uint32_t)(0x2u));
  /* 1096207a call ebp */
  call_ind((uint32_t)(EBP), 0x1096207cu);
  /* 1096207c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096207f:;
  /* 1096207f push 1 */
  push32((uint32_t)(0x1u));
  /* 10962081 push 0x10968d88 */
  push32((uint32_t)(0x10968d88u));
  /* 10962086 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x1096208cu);
  /* 1096208c mov edi, dword ptr [0x109670d8] */
  EDI = (r32((uint32_t)(0x109670d8)));
  /* 10962092 mov esi, dword ptr [0x109670e8] */
  ESI = (r32((uint32_t)(0x109670e8)));
  /* 10962098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096209b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096209d jle 0x109620cd */
  if ((C.zf||C.sf!=C.of)) goto L_109620cd;
  /* 1096209f push 0 */
  push32((uint32_t)(0x0u));
  /* 109620a1 push 0x10968d88 */
  push32((uint32_t)(0x10968d88u));
  /* 109620a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109620a8 call edi */
  call_ind((uint32_t)(EDI), 0x109620aau);
  /* 109620aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109620ac push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109620b1 push 0x10969120 */
  push32((uint32_t)(0x10969120u));
  /* 109620b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109620b8 call esi */
  call_ind((uint32_t)(ESI), 0x109620bau);
  /* 109620ba push 0x10968ea0 */
  push32((uint32_t)(0x10968ea0u));
  /* 109620bf push 0x10968d88 */
  push32((uint32_t)(0x10968d88u));
  /* 109620c4 call dword ptr [0x109670ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670ec))), 0x109620cau);
  /* 109620ca add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109620cd:;
  /* 109620cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109620cf push 0x10968d80 */
  push32((uint32_t)(0x10968d80u));
  /* 109620d4 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109620dau);
  /* 109620da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109620dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109620df jle 0x1096210f */
  if ((C.zf||C.sf!=C.of)) goto L_1096210f;
  /* 109620e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109620e3 push 0x10968d80 */
  push32((uint32_t)(0x10968d80u));
  /* 109620e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109620ea call edi */
  call_ind((uint32_t)(EDI), 0x109620ecu);
  /* 109620ec push 0 */
  push32((uint32_t)(0x0u));
  /* 109620ee push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109620f3 push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 109620f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109620fa call esi */
  call_ind((uint32_t)(ESI), 0x109620fcu);
  /* 109620fc push 0x10968f08 */
  push32((uint32_t)(0x10968f08u));
  /* 10962101 push 0x10968d80 */
  push32((uint32_t)(0x10968d80u));
  /* 10962106 call dword ptr [0x109670ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670ec))), 0x1096210cu);
  /* 1096210c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096210f:;
  /* 1096210f push 0x10968ea0 */
  push32((uint32_t)(0x10968ea0u));
  /* 10962114 push 0x10969120 */
  push32((uint32_t)(0x10969120u));
  /* 10962119 call dword ptr [0x109670e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e4))), 0x1096211fu);
  /* 1096211f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10962124 jle 0x10962141 */
  if ((C.zf||C.sf!=C.of)) goto L_10962141;
  /* 10962126 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962128 push 0x10968ea0 */
  push32((uint32_t)(0x10968ea0u));
  /* 1096212d push 1 */
  push32((uint32_t)(0x1u));
  /* 1096212f call edi */
  call_ind((uint32_t)(EDI), 0x10962131u);
  /* 10962131 push 0x10968dc0 */
  push32((uint32_t)(0x10968dc0u));
  /* 10962136 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962138 call dword ptr [0x109670f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f4))), 0x1096213eu);
  /* 1096213e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962141:;
  /* 10962141 push 0x10968f08 */
  push32((uint32_t)(0x10968f08u));
  /* 10962146 push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 1096214b call dword ptr [0x109670e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e4))), 0x10962151u);
  /* 10962151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10962156 jle 0x10962173 */
  if ((C.zf||C.sf!=C.of)) goto L_10962173;
  /* 10962158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096215a push 0x10968f08 */
  push32((uint32_t)(0x10968f08u));
  /* 1096215f push 1 */
  push32((uint32_t)(0x1u));
  /* 10962161 call edi */
  call_ind((uint32_t)(EDI), 0x10962163u);
  /* 10962163 push 0x10968db8 */
  push32((uint32_t)(0x10968db8u));
  /* 10962168 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096216a call dword ptr [0x109670f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f4))), 0x10962170u);
  /* 10962170 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962173:;
  /* 10962173 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10962175 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x1096217bu);
  /* 1096217b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096217e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962180 je 0x109621d9 */
  if (C.zf) goto L_109621d9;
  /* 10962182 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962184 push 0x10968db8 */
  push32((uint32_t)(0x10968db8u));
  /* 10962189 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x1096218fu);
  /* 1096218f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10962194 jne 0x109621d9 */
  if (!C.zf) goto L_109621d9;
  /* 10962196 push eax */
  push32((uint32_t)(EAX));
  /* 10962197 push 0x10968dc0 */
  push32((uint32_t)(0x10968dc0u));
  /* 1096219c call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109621a2u);
  /* 109621a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109621a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109621a7 jne 0x109621d9 */
  if (!C.zf) goto L_109621d9;
  /* 109621a9 push eax */
  push32((uint32_t)(EAX));
  /* 109621aa push 0xb */
  push32((uint32_t)(0xbu));
  /* 109621ac call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x109621b2u);
  /* 109621b2 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109621b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 109621b9 call ebp */
  call_ind((uint32_t)(EBP), 0x109621bbu);
  /* 109621bb push 0x672 */
  push32((uint32_t)(0x672u));
  /* 109621c0 push 6 */
  push32((uint32_t)(0x6u));
  /* 109621c2 call ebp */
  call_ind((uint32_t)(EBP), 0x109621c4u);
  /* 109621c4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 109621c9 push 7 */
  push32((uint32_t)(0x7u));
  /* 109621cb call ebp */
  call_ind((uint32_t)(EBP), 0x109621cdu);
  /* 109621cd push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 109621d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 109621d4 call ebp */
  call_ind((uint32_t)(EBP), 0x109621d6u);
  /* 109621d6 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109621d9:;
  /* 109621d9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109621db call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109621e1u);
  /* 109621e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109621e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109621e6 je 0x10962257 */
  if (C.zf) goto L_10962257;
  /* 109621e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 109621ea call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109621f0u);
  /* 109621f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109621f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109621f5 je 0x10962257 */
  if (C.zf) goto L_10962257;
  /* 109621f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109621f9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109621fb call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962201u);
  /* 10962201 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962203 push 0x10968f80 */
  push32((uint32_t)(0x10968f80u));
  /* 10962208 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096220a call edi */
  call_ind((uint32_t)(EDI), 0x1096220cu);
  /* 1096220c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096220e push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10962213 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962218 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096221a call esi */
  call_ind((uint32_t)(ESI), 0x1096221cu);
  /* 1096221c push 2 */
  push32((uint32_t)(0x2u));
  /* 1096221e push 0 */
  push32((uint32_t)(0x0u));
  /* 10962220 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962225 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962227 call esi */
  call_ind((uint32_t)(ESI), 0x10962229u);
  /* 10962229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096222b push 0x10969068 */
  push32((uint32_t)(0x10969068u));
  /* 10962230 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962232 call edi */
  call_ind((uint32_t)(EDI), 0x10962234u);
  /* 10962234 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962237 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962239 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 1096223e push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962245 call esi */
  call_ind((uint32_t)(ESI), 0x10962247u);
  /* 10962247 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096224b push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962250 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962252 call esi */
  call_ind((uint32_t)(ESI), 0x10962254u);
  /* 10962254 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962257:;
  /* 10962257 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10962259 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x1096225fu);
  /* 1096225f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962262 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962264 je 0x109622d5 */
  if (C.zf) goto L_109622d5;
  /* 10962266 push 6 */
  push32((uint32_t)(0x6u));
  /* 10962268 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x1096226eu);
  /* 1096226e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962271 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962273 je 0x109622d5 */
  if (C.zf) goto L_109622d5;
  /* 10962275 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962277 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10962279 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x1096227fu);
  /* 1096227f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962281 push 0x10968f90 */
  push32((uint32_t)(0x10968f90u));
  /* 10962286 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962288 call edi */
  call_ind((uint32_t)(EDI), 0x1096228au);
  /* 1096228a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096228c push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10962291 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10962296 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962298 call esi */
  call_ind((uint32_t)(ESI), 0x1096229au);
  /* 1096229a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096229c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096229e push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 109622a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109622a5 call esi */
  call_ind((uint32_t)(ESI), 0x109622a7u);
  /* 109622a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109622a9 push 0x10969060 */
  push32((uint32_t)(0x10969060u));
  /* 109622ae push 1 */
  push32((uint32_t)(0x1u));
  /* 109622b0 call edi */
  call_ind((uint32_t)(EDI), 0x109622b2u);
  /* 109622b2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109622b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109622b7 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 109622bc push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 109622c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109622c3 call esi */
  call_ind((uint32_t)(ESI), 0x109622c5u);
  /* 109622c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109622c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109622c9 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 109622ce push 1 */
  push32((uint32_t)(0x1u));
  /* 109622d0 call esi */
  call_ind((uint32_t)(ESI), 0x109622d2u);
  /* 109622d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109622d5:;
  /* 109622d5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 109622d7 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109622ddu);
  /* 109622dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109622e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109622e2 je 0x109623a6 */
  if (C.zf) goto L_109623a6;
  /* 109622e8 push 7 */
  push32((uint32_t)(0x7u));
  /* 109622ea call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109622f0u);
  /* 109622f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109622f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109622f5 je 0x109623a6 */
  if (C.zf) goto L_109623a6;
  /* 109622fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109622fd push 0xe */
  push32((uint32_t)(0xeu));
  /* 109622ff call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962305u);
  /* 10962305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962307 push 0x10968f88 */
  push32((uint32_t)(0x10968f88u));
  /* 1096230c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096230e call edi */
  call_ind((uint32_t)(EDI), 0x10962310u);
  /* 10962310 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962312 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10962317 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 1096231c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096231e call esi */
  call_ind((uint32_t)(ESI), 0x10962320u);
  /* 10962320 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962322 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10962324 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962329 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096232b call esi */
  call_ind((uint32_t)(ESI), 0x1096232du);
  /* 1096232d push 2 */
  push32((uint32_t)(0x2u));
  /* 1096232f push 0xcd */
  push32((uint32_t)(0xcdu));
  /* 10962334 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962339 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096233b call esi */
  call_ind((uint32_t)(ESI), 0x1096233du);
  /* 1096233d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962340 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962342 push 0x10969058 */
  push32((uint32_t)(0x10969058u));
  /* 10962347 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962349 call edi */
  call_ind((uint32_t)(EDI), 0x1096234bu);
  /* 1096234b push 0 */
  push32((uint32_t)(0x0u));
  /* 1096234d push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10962352 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10962357 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962359 call esi */
  call_ind((uint32_t)(ESI), 0x1096235bu);
  /* 1096235b push 2 */
  push32((uint32_t)(0x2u));
  /* 1096235d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1096235f push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962364 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962366 call esi */
  call_ind((uint32_t)(ESI), 0x10962368u);
  /* 10962368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1096236a push 0xcd */
  push32((uint32_t)(0xcdu));
  /* 1096236f push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962374 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962376 call esi */
  call_ind((uint32_t)(ESI), 0x10962378u);
  /* 10962378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096237a push 0x109692a8 */
  push32((uint32_t)(0x109692a8u));
  /* 1096237f push 1 */
  push32((uint32_t)(0x1u));
  /* 10962381 call edi */
  call_ind((uint32_t)(EDI), 0x10962383u);
  /* 10962383 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962388 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 1096238d push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962392 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962394 call esi */
  call_ind((uint32_t)(ESI), 0x10962396u);
  /* 10962396 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962398 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1096239a push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 1096239f push 1 */
  push32((uint32_t)(0x1u));
  /* 109623a1 call esi */
  call_ind((uint32_t)(ESI), 0x109623a3u);
  /* 109623a3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109623a6:;
  /* 109623a6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109623a8 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109623aeu);
  /* 109623ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109623b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109623b3 je 0x1096246d */
  if (C.zf) goto L_1096246d;
  /* 109623b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 109623bb call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109623c1u);
  /* 109623c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109623c4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109623c6 je 0x1096246d */
  if (C.zf) goto L_1096246d;
  /* 109623cc push 0 */
  push32((uint32_t)(0x0u));
  /* 109623ce push 0xf */
  push32((uint32_t)(0xfu));
  /* 109623d0 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x109623d6u);
  /* 109623d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109623d8 push 0x10968fa8 */
  push32((uint32_t)(0x10968fa8u));
  /* 109623dd push 1 */
  push32((uint32_t)(0x1u));
  /* 109623df call edi */
  call_ind((uint32_t)(EDI), 0x109623e1u);
  /* 109623e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109623e3 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 109623e8 push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 109623ed push 1 */
  push32((uint32_t)(0x1u));
  /* 109623ef call esi */
  call_ind((uint32_t)(ESI), 0x109623f1u);
  /* 109623f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109623f3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109623f8 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 109623fd push 1 */
  push32((uint32_t)(0x1u));
  /* 109623ff call esi */
  call_ind((uint32_t)(ESI), 0x10962401u);
  /* 10962401 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962403 push 0x10969050 */
  push32((uint32_t)(0x10969050u));
  /* 10962408 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096240a call edi */
  call_ind((uint32_t)(EDI), 0x1096240cu);
  /* 1096240c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096240f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962411 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10962416 push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 1096241b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096241d call esi */
  call_ind((uint32_t)(ESI), 0x1096241fu);
  /* 1096241f push 2 */
  push32((uint32_t)(0x2u));
  /* 10962421 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10962426 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 1096242b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096242d call esi */
  call_ind((uint32_t)(ESI), 0x1096242fu);
  /* 1096242f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962431 push 0x109692b0 */
  push32((uint32_t)(0x109692b0u));
  /* 10962436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962438 call edi */
  call_ind((uint32_t)(EDI), 0x1096243au);
  /* 1096243a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096243c push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10962441 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10962446 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962448 call esi */
  call_ind((uint32_t)(ESI), 0x1096244au);
  /* 1096244a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096244c push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1096244e push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962455 call esi */
  call_ind((uint32_t)(ESI), 0x10962457u);
  /* 10962457 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096245a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096245c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10962461 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962466 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962468 call esi */
  call_ind((uint32_t)(ESI), 0x1096246au);
  /* 1096246a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096246d:;
  /* 1096246d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1096246f call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962475u);
  /* 10962475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962478 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096247a je 0x109624a9 */
  if (C.zf) goto L_109624a9;
  /* 1096247c push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10962481 push 0x10968fe0 */
  push32((uint32_t)(0x10968fe0u));
  /* 10962486 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962488 push 0x10969028 */
  push32((uint32_t)(0x10969028u));
  /* 1096248d push 0x10968ea8 */
  push32((uint32_t)(0x10968ea8u));
  /* 10962492 push 0x10968d70 */
  push32((uint32_t)(0x10968d70u));
  /* 10962497 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x1096249du);
  /* 1096249d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 109624a2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109624a4 call ebp */
  call_ind((uint32_t)(EBP), 0x109624a6u);
  /* 109624a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109624a9:;
  /* 109624a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109624ab push 0x10968d70 */
  push32((uint32_t)(0x10968d70u));
  /* 109624b0 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109624b6u);
  /* 109624b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109624b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109624bb jle 0x109624fb */
  if ((C.zf||C.sf!=C.of)) goto L_109624fb;
  /* 109624bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109624bf push 0x10968d70 */
  push32((uint32_t)(0x10968d70u));
  /* 109624c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109624c6 call edi */
  call_ind((uint32_t)(EDI), 0x109624c8u);
  /* 109624c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109624ca push 0xaa */
  push32((uint32_t)(0xaau));
  /* 109624cf push 0x10969268 */
  push32((uint32_t)(0x10969268u));
  /* 109624d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109624d6 call esi */
  call_ind((uint32_t)(ESI), 0x109624d8u);
  /* 109624d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109624da push 0xaa */
  push32((uint32_t)(0xaau));
  /* 109624df push 0x10968ef8 */
  push32((uint32_t)(0x10968ef8u));
  /* 109624e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109624e6 call esi */
  call_ind((uint32_t)(ESI), 0x109624e8u);
  /* 109624e8 push 0x10968ee8 */
  push32((uint32_t)(0x10968ee8u));
  /* 109624ed push 0x10968d70 */
  push32((uint32_t)(0x10968d70u));
  /* 109624f2 call dword ptr [0x109670ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670ec))), 0x109624f8u);
  /* 109624f8 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109624fb:;
  /* 109624fb push 0x10968ee8 */
  push32((uint32_t)(0x10968ee8u));
  /* 10962500 push 0x10968ef8 */
  push32((uint32_t)(0x10968ef8u));
  /* 10962505 call dword ptr [0x109670e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e4))), 0x1096250bu);
  /* 1096250b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096250e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10962510 jle 0x1096252d */
  if ((C.zf||C.sf!=C.of)) goto L_1096252d;
  /* 10962512 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962514 push 0x10968ee8 */
  push32((uint32_t)(0x10968ee8u));
  /* 10962519 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096251b call edi */
  call_ind((uint32_t)(EDI), 0x1096251du);
  /* 1096251d push 0x109691a0 */
  push32((uint32_t)(0x109691a0u));
  /* 10962522 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962524 call dword ptr [0x109670f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f4))), 0x1096252au);
  /* 1096252a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096252d:;
  /* 1096252d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1096252f call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962535u);
  /* 10962535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962538 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096253a je 0x10962569 */
  if (C.zf) goto L_10962569;
  /* 1096253c push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10962541 push 0x10968fb0 */
  push32((uint32_t)(0x10968fb0u));
  /* 10962546 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962548 push 0x10969028 */
  push32((uint32_t)(0x10969028u));
  /* 1096254d push 0x10968ea8 */
  push32((uint32_t)(0x10968ea8u));
  /* 10962552 push 0x10968d68 */
  push32((uint32_t)(0x10968d68u));
  /* 10962557 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x1096255du);
  /* 1096255d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10962562 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10962564 call ebp */
  call_ind((uint32_t)(EBP), 0x10962566u);
  /* 10962566 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962569:;
  /* 10962569 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096256b push 0x10968d68 */
  push32((uint32_t)(0x10968d68u));
  /* 10962570 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x10962576u);
  /* 10962576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096257b jle 0x109625ab */
  if ((C.zf||C.sf!=C.of)) goto L_109625ab;
  /* 1096257d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096257f push 0x10968d68 */
  push32((uint32_t)(0x10968d68u));
  /* 10962584 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962586 call edi */
  call_ind((uint32_t)(EDI), 0x10962588u);
  /* 10962588 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096258a push 0x87 */
  push32((uint32_t)(0x87u));
  /* 1096258f push 0x10968ef0 */
  push32((uint32_t)(0x10968ef0u));
  /* 10962594 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962596 call esi */
  call_ind((uint32_t)(ESI), 0x10962598u);
  /* 10962598 push 0x10968f28 */
  push32((uint32_t)(0x10968f28u));
  /* 1096259d push 0x10968d68 */
  push32((uint32_t)(0x10968d68u));
  /* 109625a2 call dword ptr [0x109670ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670ec))), 0x109625a8u);
  /* 109625a8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109625ab:;
  /* 109625ab push 0x10968f28 */
  push32((uint32_t)(0x10968f28u));
  /* 109625b0 push 0x10968ef0 */
  push32((uint32_t)(0x10968ef0u));
  /* 109625b5 call dword ptr [0x109670e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e4))), 0x109625bbu);
  /* 109625bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109625be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109625c0 jle 0x109625dd */
  if ((C.zf||C.sf!=C.of)) goto L_109625dd;
  /* 109625c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109625c4 push 0x10968f28 */
  push32((uint32_t)(0x10968f28u));
  /* 109625c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109625cb call edi */
  call_ind((uint32_t)(EDI), 0x109625cdu);
  /* 109625cd push 0x10969198 */
  push32((uint32_t)(0x10969198u));
  /* 109625d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109625d4 call dword ptr [0x109670f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f4))), 0x109625dau);
  /* 109625da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109625dd:;
  /* 109625dd push 0xd */
  push32((uint32_t)(0xdu));
  /* 109625df call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109625e5u);
  /* 109625e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109625e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109625ea je 0x10962619 */
  if (C.zf) goto L_10962619;
  /* 109625ec push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109625f1 push 0x10968fb8 */
  push32((uint32_t)(0x10968fb8u));
  /* 109625f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109625f8 push 0x10969028 */
  push32((uint32_t)(0x10969028u));
  /* 109625fd push 0x10968ea8 */
  push32((uint32_t)(0x10968ea8u));
  /* 10962602 push 0x10968d78 */
  push32((uint32_t)(0x10968d78u));
  /* 10962607 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x1096260du);
  /* 1096260d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10962612 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10962614 call ebp */
  call_ind((uint32_t)(EBP), 0x10962616u);
  /* 10962616 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962619:;
  /* 10962619 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096261b push 0x10968d78 */
  push32((uint32_t)(0x10968d78u));
  /* 10962620 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x10962626u);
  /* 10962626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096262b jle 0x10962658 */
  if ((C.zf||C.sf!=C.of)) goto L_10962658;
  /* 1096262d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096262f push 0x10968d78 */
  push32((uint32_t)(0x10968d78u));
  /* 10962634 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962636 call edi */
  call_ind((uint32_t)(EDI), 0x10962638u);
  /* 10962638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096263a push 0x73 */
  push32((uint32_t)(0x73u));
  /* 1096263c push 0x10969110 */
  push32((uint32_t)(0x10969110u));
  /* 10962641 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962643 call esi */
  call_ind((uint32_t)(ESI), 0x10962645u);
  /* 10962645 push 0x10968f18 */
  push32((uint32_t)(0x10968f18u));
  /* 1096264a push 0x10968d78 */
  push32((uint32_t)(0x10968d78u));
  /* 1096264f call dword ptr [0x109670ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670ec))), 0x10962655u);
  /* 10962655 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962658:;
  /* 10962658 push 0x10968f18 */
  push32((uint32_t)(0x10968f18u));
  /* 1096265d push 0x10969110 */
  push32((uint32_t)(0x10969110u));
  /* 10962662 call dword ptr [0x109670e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e4))), 0x10962668u);
  /* 10962668 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096266b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096266d jle 0x1096268a */
  if ((C.zf||C.sf!=C.of)) goto L_1096268a;
  /* 1096266f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962671 push 0x10968f18 */
  push32((uint32_t)(0x10968f18u));
  /* 10962676 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962678 call edi */
  call_ind((uint32_t)(EDI), 0x1096267au);
  /* 1096267a push 0x109691a8 */
  push32((uint32_t)(0x109691a8u));
  /* 1096267f push 1 */
  push32((uint32_t)(0x1u));
  /* 10962681 call dword ptr [0x109670f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f4))), 0x10962687u);
  /* 10962687 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096268a:;
  /* 1096268a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1096268c call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962692u);
  /* 10962692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962695 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962697 je 0x10962942 */
  if (C.zf) goto L_10962942;
  /* 1096269d push 0xe */
  push32((uint32_t)(0xeu));
  /* 1096269f call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109626a5u);
  /* 109626a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109626a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109626aa je 0x10962942 */
  if (C.zf) goto L_10962942;
  /* 109626b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109626b2 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109626b4 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x109626bau);
  /* 109626ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109626bc push 0x10968e28 */
  push32((uint32_t)(0x10968e28u));
  /* 109626c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109626c3 call edi */
  call_ind((uint32_t)(EDI), 0x109626c5u);
  /* 109626c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109626c7 push 0x6c */
  push32((uint32_t)(0x6cu));
  /* 109626c9 push 0x109691c0 */
  push32((uint32_t)(0x109691c0u));
  /* 109626ce push 1 */
  push32((uint32_t)(0x1u));
  /* 109626d0 call dword ptr [0x109670f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f8))), 0x109626d6u);
  /* 109626d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109626d8 push 0x10968e30 */
  push32((uint32_t)(0x10968e30u));
  /* 109626dd push 1 */
  push32((uint32_t)(0x1u));
  /* 109626df call edi */
  call_ind((uint32_t)(EDI), 0x109626e1u);
  /* 109626e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109626e3 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109626e5 push 0x109691b8 */
  push32((uint32_t)(0x109691b8u));
  /* 109626ea push 1 */
  push32((uint32_t)(0x1u));
  /* 109626ec call dword ptr [0x109670f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f8))), 0x109626f2u);
  /* 109626f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109626f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109626f7 push 0x10968e38 */
  push32((uint32_t)(0x10968e38u));
  /* 109626fc push 1 */
  push32((uint32_t)(0x1u));
  /* 109626fe call edi */
  call_ind((uint32_t)(EDI), 0x10962700u);
  /* 10962700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962702 push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10962707 push 0x109691e0 */
  push32((uint32_t)(0x109691e0u));
  /* 1096270c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096270e call dword ptr [0x109670f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f8))), 0x10962714u);
  /* 10962714 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962716 push 0x10968e08 */
  push32((uint32_t)(0x10968e08u));
  /* 1096271b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096271d call edi */
  call_ind((uint32_t)(EDI), 0x1096271fu);
  /* 1096271f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962721 push 0x85 */
  push32((uint32_t)(0x85u));
  /* 10962726 push 0x109691d8 */
  push32((uint32_t)(0x109691d8u));
  /* 1096272b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096272d call dword ptr [0x109670f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f8))), 0x10962733u);
  /* 10962733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962735 push 0x10968e10 */
  push32((uint32_t)(0x10968e10u));
  /* 1096273a push 1 */
  push32((uint32_t)(0x1u));
  /* 1096273c call edi */
  call_ind((uint32_t)(EDI), 0x1096273eu);
  /* 1096273e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962741 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962743 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10962748 push 0x109691d0 */
  push32((uint32_t)(0x109691d0u));
  /* 1096274d push 1 */
  push32((uint32_t)(0x1u));
  /* 1096274f call dword ptr [0x109670f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f8))), 0x10962755u);
  /* 10962755 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962757 push 0x10968e18 */
  push32((uint32_t)(0x10968e18u));
  /* 1096275c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096275e call edi */
  call_ind((uint32_t)(EDI), 0x10962760u);
  /* 10962760 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962762 push 0xaf */
  push32((uint32_t)(0xafu));
  /* 10962767 push 0x109691c8 */
  push32((uint32_t)(0x109691c8u));
  /* 1096276c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096276e call dword ptr [0x109670f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f8))), 0x10962774u);
  /* 10962774 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962776 push 0x10969038 */
  push32((uint32_t)(0x10969038u));
  /* 1096277b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096277d call edi */
  call_ind((uint32_t)(EDI), 0x1096277fu);
  /* 1096277f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962781 push 0xbe */
  push32((uint32_t)(0xbeu));
  /* 10962786 push 0x10968e50 */
  push32((uint32_t)(0x10968e50u));
  /* 1096278b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096278d call esi */
  call_ind((uint32_t)(ESI), 0x1096278fu);
  /* 1096278f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962794 push 0x10968f98 */
  push32((uint32_t)(0x10968f98u));
  /* 10962799 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096279b call edi */
  call_ind((uint32_t)(EDI), 0x1096279du);
  /* 1096279d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096279f push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109627a4 push 0x10968ec0 */
  push32((uint32_t)(0x10968ec0u));
  /* 109627a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109627ab call esi */
  call_ind((uint32_t)(ESI), 0x109627adu);
  /* 109627ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109627af push 0x10968fa0 */
  push32((uint32_t)(0x10968fa0u));
  /* 109627b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109627b6 call edi */
  call_ind((uint32_t)(EDI), 0x109627b8u);
  /* 109627b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109627ba push 0x96 */
  push32((uint32_t)(0x96u));
  /* 109627bf push 0x10968eb8 */
  push32((uint32_t)(0x10968eb8u));
  /* 109627c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109627c6 call esi */
  call_ind((uint32_t)(ESI), 0x109627c8u);
  /* 109627c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109627ca push 0x10969040 */
  push32((uint32_t)(0x10969040u));
  /* 109627cf push 1 */
  push32((uint32_t)(0x1u));
  /* 109627d1 call edi */
  call_ind((uint32_t)(EDI), 0x109627d3u);
  /* 109627d3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109627d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109627d8 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 109627dd push 0x10968e58 */
  push32((uint32_t)(0x10968e58u));
  /* 109627e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109627e4 call esi */
  call_ind((uint32_t)(ESI), 0x109627e6u);
  /* 109627e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109627e8 push 0x10968fc8 */
  push32((uint32_t)(0x10968fc8u));
  /* 109627ed push 1 */
  push32((uint32_t)(0x1u));
  /* 109627ef call edi */
  call_ind((uint32_t)(EDI), 0x109627f1u);
  /* 109627f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109627f3 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 109627f8 push 0x10968ed0 */
  push32((uint32_t)(0x10968ed0u));
  /* 109627fd push 1 */
  push32((uint32_t)(0x1u));
  /* 109627ff call esi */
  call_ind((uint32_t)(ESI), 0x10962801u);
  /* 10962801 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962803 push 0x10968fc0 */
  push32((uint32_t)(0x10968fc0u));
  /* 10962808 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096280a call edi */
  call_ind((uint32_t)(EDI), 0x1096280cu);
  /* 1096280c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096280e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10962813 push 0x10968ed8 */
  push32((uint32_t)(0x10968ed8u));
  /* 10962818 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096281a call esi */
  call_ind((uint32_t)(ESI), 0x1096281cu);
  /* 1096281c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096281f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962821 push 0x10969048 */
  push32((uint32_t)(0x10969048u));
  /* 10962826 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962828 call edi */
  call_ind((uint32_t)(EDI), 0x1096282au);
  /* 1096282a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096282c push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1096282e push 0x10968e48 */
  push32((uint32_t)(0x10968e48u));
  /* 10962833 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962835 call esi */
  call_ind((uint32_t)(ESI), 0x10962837u);
  /* 10962837 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962839 push 0x10968e88 */
  push32((uint32_t)(0x10968e88u));
  /* 1096283e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962840 call edi */
  call_ind((uint32_t)(EDI), 0x10962842u);
  /* 10962842 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962844 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10962846 push 0x10968f78 */
  push32((uint32_t)(0x10968f78u));
  /* 1096284b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096284d call esi */
  call_ind((uint32_t)(ESI), 0x1096284fu);
  /* 1096284f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962851 push 0x10968e78 */
  push32((uint32_t)(0x10968e78u));
  /* 10962856 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962858 call edi */
  call_ind((uint32_t)(EDI), 0x1096285au);
  /* 1096285a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096285d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096285f push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10962861 push 0x10968f60 */
  push32((uint32_t)(0x10968f60u));
  /* 10962866 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962868 call esi */
  call_ind((uint32_t)(ESI), 0x1096286au);
  /* 1096286a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096286c push 0x10968e98 */
  push32((uint32_t)(0x10968e98u));
  /* 10962871 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962873 call edi */
  call_ind((uint32_t)(EDI), 0x10962875u);
  /* 10962875 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962877 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962879 push 0x10968f68 */
  push32((uint32_t)(0x10968f68u));
  /* 1096287e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962880 call esi */
  call_ind((uint32_t)(ESI), 0x10962882u);
  /* 10962882 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962884 push 0x10968e90 */
  push32((uint32_t)(0x10968e90u));
  /* 10962889 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096288b call edi */
  call_ind((uint32_t)(EDI), 0x1096288du);
  /* 1096288d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096288f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10962891 push 0x10968f70 */
  push32((uint32_t)(0x10968f70u));
  /* 10962896 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962898 call esi */
  call_ind((uint32_t)(ESI), 0x1096289au);
  /* 1096289a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096289d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096289f push 0x10969250 */
  push32((uint32_t)(0x10969250u));
  /* 109628a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109628a6 call edi */
  call_ind((uint32_t)(EDI), 0x109628a8u);
  /* 109628a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109628aa push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109628af push 0x10968df8 */
  push32((uint32_t)(0x10968df8u));
  /* 109628b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109628b6 call esi */
  call_ind((uint32_t)(ESI), 0x109628b8u);
  /* 109628b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109628ba push 0x109691f0 */
  push32((uint32_t)(0x109691f0u));
  /* 109628bf push 1 */
  push32((uint32_t)(0x1u));
  /* 109628c1 call edi */
  call_ind((uint32_t)(EDI), 0x109628c3u);
  /* 109628c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109628c5 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 109628ca push 0x10969180 */
  push32((uint32_t)(0x10969180u));
  /* 109628cf push 1 */
  push32((uint32_t)(0x1u));
  /* 109628d1 call esi */
  call_ind((uint32_t)(ESI), 0x109628d3u);
  /* 109628d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109628d5 push 0x10969240 */
  push32((uint32_t)(0x10969240u));
  /* 109628da push 1 */
  push32((uint32_t)(0x1u));
  /* 109628dc call edi */
  call_ind((uint32_t)(EDI), 0x109628deu);
  /* 109628de add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109628e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109628e3 push 0x84 */
  push32((uint32_t)(0x84u));
  /* 109628e8 push 0x10968de8 */
  push32((uint32_t)(0x10968de8u));
  /* 109628ed push 1 */
  push32((uint32_t)(0x1u));
  /* 109628ef call esi */
  call_ind((uint32_t)(ESI), 0x109628f1u);
  /* 109628f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109628f3 push 0x10969200 */
  push32((uint32_t)(0x10969200u));
  /* 109628f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109628fa call edi */
  call_ind((uint32_t)(EDI), 0x109628fcu);
  /* 109628fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109628fe push 0x84 */
  push32((uint32_t)(0x84u));
  /* 10962903 push 0x10969188 */
  push32((uint32_t)(0x10969188u));
  /* 10962908 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096290a call esi */
  call_ind((uint32_t)(ESI), 0x1096290cu);
  /* 1096290c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096290e push 0x10969230 */
  push32((uint32_t)(0x10969230u));
  /* 10962913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962915 call edi */
  call_ind((uint32_t)(EDI), 0x10962917u);
  /* 10962917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962919 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1096291b push 0x10968df0 */
  push32((uint32_t)(0x10968df0u));
  /* 10962920 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962922 call esi */
  call_ind((uint32_t)(ESI), 0x10962924u);
  /* 10962924 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962929 push 0x109691f8 */
  push32((uint32_t)(0x109691f8u));
  /* 1096292e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962930 call edi */
  call_ind((uint32_t)(EDI), 0x10962932u);
  /* 10962932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962934 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10962936 push 0x10969190 */
  push32((uint32_t)(0x10969190u));
  /* 1096293b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096293d call esi */
  call_ind((uint32_t)(ESI), 0x1096293fu);
  /* 1096293f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962942:;
  /* 10962942 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10962944 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x1096294au);
  /* 1096294a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096294d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096294f je 0x109629c0 */
  if (C.zf) goto L_109629c0;
  /* 10962951 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962953 push 0x10969280 */
  push32((uint32_t)(0x10969280u));
  /* 10962958 push 0x10968e28 */
  push32((uint32_t)(0x10968e28u));
  /* 1096295d call dword ptr [0x109670f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f0))), 0x10962963u);
  /* 10962963 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962965 push 0x10969278 */
  push32((uint32_t)(0x10969278u));
  /* 1096296a push 0x10968e30 */
  push32((uint32_t)(0x10968e30u));
  /* 1096296f call dword ptr [0x109670f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f0))), 0x10962975u);
  /* 10962975 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962977 push 0x10969290 */
  push32((uint32_t)(0x10969290u));
  /* 1096297c push 0x10968e38 */
  push32((uint32_t)(0x10968e38u));
  /* 10962981 call dword ptr [0x109670f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f0))), 0x10962987u);
  /* 10962987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962989 push 0x10969288 */
  push32((uint32_t)(0x10969288u));
  /* 1096298e push 0x10968e08 */
  push32((uint32_t)(0x10968e08u));
  /* 10962993 call dword ptr [0x109670f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f0))), 0x10962999u);
  /* 10962999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096299b push 0x109692a0 */
  push32((uint32_t)(0x109692a0u));
  /* 109629a0 push 0x10968e10 */
  push32((uint32_t)(0x10968e10u));
  /* 109629a5 call dword ptr [0x109670f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f0))), 0x109629abu);
  /* 109629ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109629ad push 0x10969298 */
  push32((uint32_t)(0x10969298u));
  /* 109629b2 push 0x10968e18 */
  push32((uint32_t)(0x10968e18u));
  /* 109629b7 call dword ptr [0x109670f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670f0))), 0x109629bdu);
  /* 109629bd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109629c0:;
  /* 109629c0 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109629c2 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109629c8u);
  /* 109629c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109629cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109629cd je 0x10962a2f */
  if (C.zf) goto L_10962a2f;
  /* 109629cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109629d1 push 0x109691a8 */
  push32((uint32_t)(0x109691a8u));
  /* 109629d6 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109629dcu);
  /* 109629dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109629df cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109629e2 jge 0x10962a2f */
  if ((C.sf==C.of)) goto L_10962a2f;
  /* 109629e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109629e6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109629e8 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x109629eeu);
  /* 109629ee push 0x258 */
  push32((uint32_t)(0x258u));
  /* 109629f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109629f5 call ebp */
  call_ind((uint32_t)(EBP), 0x109629f7u);
  /* 109629f7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 109629fc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109629fe call ebp */
  call_ind((uint32_t)(EBP), 0x10962a00u);
  /* 10962a00 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10962a05 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10962a07 call ebp */
  call_ind((uint32_t)(EBP), 0x10962a09u);
  /* 10962a09 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10962a0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10962a10 call ebp */
  call_ind((uint32_t)(EBP), 0x10962a12u);
  /* 10962a12 push 0x3e80 */
  push32((uint32_t)(0x3e80u));
  /* 10962a17 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10962a19 call ebp */
  call_ind((uint32_t)(EBP), 0x10962a1bu);
  /* 10962a1b push 0x4268 */
  push32((uint32_t)(0x4268u));
  /* 10962a20 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10962a22 call ebp */
  call_ind((uint32_t)(EBP), 0x10962a24u);
  /* 10962a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a2a call ebx */
  call_ind((uint32_t)(EBX), 0x10962a2cu);
  /* 10962a2c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962a2f:;
  /* 10962a2f push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10962a31 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962a37u);
  /* 10962a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962a3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962a3c je 0x10962baa */
  if (C.zf) goto L_10962baa;
  /* 10962a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a44 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962a4au);
  /* 10962a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962a4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962a4f je 0x10962baa */
  if (C.zf) goto L_10962baa;
  /* 10962a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a57 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10962a59 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962a5fu);
  /* 10962a5f push 0x10f446 */
  push32((uint32_t)(0x10f446u));
  /* 10962a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a68 call ebx */
  call_ind((uint32_t)(EBX), 0x10962a6au);
  /* 10962a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a6c push 0x10969008 */
  push32((uint32_t)(0x10969008u));
  /* 10962a71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a73 call edi */
  call_ind((uint32_t)(EDI), 0x10962a75u);
  /* 10962a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a77 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10962a79 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a80 call esi */
  call_ind((uint32_t)(ESI), 0x10962a82u);
  /* 10962a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a84 push 0x109692c8 */
  push32((uint32_t)(0x109692c8u));
  /* 10962a89 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a8b call edi */
  call_ind((uint32_t)(EDI), 0x10962a8du);
  /* 10962a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10962a8f push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962a91 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962a98 call esi */
  call_ind((uint32_t)(ESI), 0x10962a9au);
  /* 10962a9a add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10962a9f push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962aa1 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962aa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962aa8 call esi */
  call_ind((uint32_t)(ESI), 0x10962aaau);
  /* 10962aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10962aac push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10962ab1 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ab8 call esi */
  call_ind((uint32_t)(ESI), 0x10962abau);
  /* 10962aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10962abc push 0x10969008 */
  push32((uint32_t)(0x10969008u));
  /* 10962ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ac3 call edi */
  call_ind((uint32_t)(EDI), 0x10962ac5u);
  /* 10962ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962ac7 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962ac9 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962ace push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ad0 call esi */
  call_ind((uint32_t)(ESI), 0x10962ad2u);
  /* 10962ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962ad4 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962ad6 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10962adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10962add call esi */
  call_ind((uint32_t)(ESI), 0x10962adfu);
  /* 10962adf add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962ae4 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10962ae9 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962aee push 1 */
  push32((uint32_t)(0x1u));
  /* 10962af0 call esi */
  call_ind((uint32_t)(ESI), 0x10962af2u);
  /* 10962af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962af4 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962af6 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962afb push 1 */
  push32((uint32_t)(0x1u));
  /* 10962afd call esi */
  call_ind((uint32_t)(ESI), 0x10962affu);
  /* 10962aff push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b01 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10962b06 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962b0b push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b0d call esi */
  call_ind((uint32_t)(ESI), 0x10962b0fu);
  /* 10962b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962b11 push 0x10969260 */
  push32((uint32_t)(0x10969260u));
  /* 10962b16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b18 call edi */
  call_ind((uint32_t)(EDI), 0x10962b1au);
  /* 10962b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10962b1c push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962b1e push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b25 call esi */
  call_ind((uint32_t)(ESI), 0x10962b27u);
  /* 10962b27 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b2c push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962b2e push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10962b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b35 call esi */
  call_ind((uint32_t)(ESI), 0x10962b37u);
  /* 10962b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b39 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10962b3e push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b45 call esi */
  call_ind((uint32_t)(ESI), 0x10962b47u);
  /* 10962b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b49 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962b4b push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962b50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b52 call esi */
  call_ind((uint32_t)(ESI), 0x10962b54u);
  /* 10962b54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b56 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10962b5b push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b62 call esi */
  call_ind((uint32_t)(ESI), 0x10962b64u);
  /* 10962b64 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962b69 push 0x10968d90 */
  push32((uint32_t)(0x10968d90u));
  /* 10962b6e call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x10962b74u);
  /* 10962b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962b76 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962b78 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b7f call esi */
  call_ind((uint32_t)(ESI), 0x10962b81u);
  /* 10962b81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b83 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10962b85 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b8c call esi */
  call_ind((uint32_t)(ESI), 0x10962b8eu);
  /* 10962b8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10962b90 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10962b95 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962b9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962b9c call esi */
  call_ind((uint32_t)(ESI), 0x10962b9eu);
  /* 10962b9e push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10962ba3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10962ba5 call ebp */
  call_ind((uint32_t)(EBP), 0x10962ba7u);
  /* 10962ba7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962baa:;
  /* 10962baa push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10962bac call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962bb2u);
  /* 10962bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962bb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962bb7 je 0x10962bfb */
  if (C.zf) goto L_10962bfb;
  /* 10962bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962bbb push 0x109691a8 */
  push32((uint32_t)(0x109691a8u));
  /* 10962bc0 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x10962bc6u);
  /* 10962bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962bc9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10962bcc jl 0x10962bdd */
  if ((C.sf!=C.of)) goto L_10962bdd;
  /* 10962bce push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10962bd0 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962bd6u);
  /* 10962bd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962bd9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962bdb je 0x10962bfb */
  if (C.zf) goto L_10962bfb;
L_10962bdd:;
  /* 10962bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10962bdf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10962be1 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962be7u);
  /* 10962be7 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10962bec push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10962bee call ebp */
  call_ind((uint32_t)(EBP), 0x10962bf0u);
  /* 10962bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962bf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962bf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962bf6 call ebx */
  call_ind((uint32_t)(EBX), 0x10962bf8u);
  /* 10962bf8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962bfb:;
  /* 10962bfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10962bfd call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962c03u);
  /* 10962c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962c06 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962c08 je 0x10962ce7 */
  if (C.zf) goto L_10962ce7;
  /* 10962c0e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10962c10 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962c16u);
  /* 10962c16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962c19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962c1b je 0x10962ce7 */
  if (C.zf) goto L_10962ce7;
  /* 10962c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962c23 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10962c25 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962c2bu);
  /* 10962c2b push 0x3640c */
  push32((uint32_t)(0x3640cu));
  /* 10962c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c34 call ebx */
  call_ind((uint32_t)(EBX), 0x10962c36u);
  /* 10962c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962c38 push 0x10968d60 */
  push32((uint32_t)(0x10968d60u));
  /* 10962c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c3f call edi */
  call_ind((uint32_t)(EDI), 0x10962c41u);
  /* 10962c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962c43 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962c45 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962c4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c4c call esi */
  call_ind((uint32_t)(ESI), 0x10962c4eu);
  /* 10962c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10962c50 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962c55 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c5c call esi */
  call_ind((uint32_t)(ESI), 0x10962c5eu);
  /* 10962c5e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962c63 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10962c65 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c6c call esi */
  call_ind((uint32_t)(ESI), 0x10962c6eu);
  /* 10962c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10962c70 push 0x10968e90 */
  push32((uint32_t)(0x10968e90u));
  /* 10962c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c77 call edi */
  call_ind((uint32_t)(EDI), 0x10962c79u);
  /* 10962c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962c7b push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962c7d push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962c82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c84 call esi */
  call_ind((uint32_t)(ESI), 0x10962c86u);
  /* 10962c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962c88 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962c8d push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962c92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962c94 call esi */
  call_ind((uint32_t)(ESI), 0x10962c96u);
  /* 10962c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962c9a push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10962c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ca1 call esi */
  call_ind((uint32_t)(ESI), 0x10962ca3u);
  /* 10962ca3 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962ca8 push 0x10968e88 */
  push32((uint32_t)(0x10968e88u));
  /* 10962cad push 1 */
  push32((uint32_t)(0x1u));
  /* 10962caf call edi */
  call_ind((uint32_t)(EDI), 0x10962cb1u);
  /* 10962cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962cb3 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962cb5 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962cba push 1 */
  push32((uint32_t)(0x1u));
  /* 10962cbc call esi */
  call_ind((uint32_t)(ESI), 0x10962cbeu);
  /* 10962cbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10962cc0 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962cc5 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962cca push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ccc call esi */
  call_ind((uint32_t)(ESI), 0x10962cceu);
  /* 10962cce push 2 */
  push32((uint32_t)(0x2u));
  /* 10962cd0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10962cd2 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962cd9 call esi */
  call_ind((uint32_t)(ESI), 0x10962cdbu);
  /* 10962cdb push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10962ce0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10962ce2 call ebp */
  call_ind((uint32_t)(EBP), 0x10962ce4u);
  /* 10962ce4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962ce7:;
  /* 10962ce7 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10962ce9 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962cefu);
  /* 10962cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962cf2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962cf4 je 0x10962dcd */
  if (C.zf) goto L_10962dcd;
  /* 10962cfa push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10962cfc call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962d02u);
  /* 10962d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962d05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962d07 je 0x10962dcd */
  if (C.zf) goto L_10962dcd;
  /* 10962d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d0f push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10962d11 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962d17u);
  /* 10962d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d19 push 0x10968d98 */
  push32((uint32_t)(0x10968d98u));
  /* 10962d1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d20 call edi */
  call_ind((uint32_t)(EDI), 0x10962d22u);
  /* 10962d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d24 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962d29 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962d2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d30 call esi */
  call_ind((uint32_t)(ESI), 0x10962d32u);
  /* 10962d32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962d34 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962d36 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962d3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d3d call esi */
  call_ind((uint32_t)(ESI), 0x10962d3fu);
  /* 10962d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10962d41 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962d46 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962d4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d4d call esi */
  call_ind((uint32_t)(ESI), 0x10962d4fu);
  /* 10962d4f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d56 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10962d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d5d call esi */
  call_ind((uint32_t)(ESI), 0x10962d5fu);
  /* 10962d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10962d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d63 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10962d68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d6a call esi */
  call_ind((uint32_t)(ESI), 0x10962d6cu);
  /* 10962d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d6e push 0x109692d8 */
  push32((uint32_t)(0x109692d8u));
  /* 10962d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d75 call edi */
  call_ind((uint32_t)(EDI), 0x10962d77u);
  /* 10962d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962d79 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962d7e push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d85 call esi */
  call_ind((uint32_t)(ESI), 0x10962d87u);
  /* 10962d87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962d89 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962d8b push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962d92 call esi */
  call_ind((uint32_t)(ESI), 0x10962d94u);
  /* 10962d94 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962d97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962d99 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962d9e push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962da5 call esi */
  call_ind((uint32_t)(ESI), 0x10962da7u);
  /* 10962da7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962dab push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10962db0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962db2 call esi */
  call_ind((uint32_t)(ESI), 0x10962db4u);
  /* 10962db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962db8 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10962dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10962dbf call esi */
  call_ind((uint32_t)(ESI), 0x10962dc1u);
  /* 10962dc1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10962dc6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10962dc8 call ebp */
  call_ind((uint32_t)(EBP), 0x10962dcau);
  /* 10962dca add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962dcd:;
  /* 10962dcd push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10962dcf call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962dd5u);
  /* 10962dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962dd8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962dda je 0x10962ed7 */
  if (C.zf) goto L_10962ed7;
  /* 10962de0 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10962de2 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962de8u);
  /* 10962de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962deb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962ded je 0x10962ed7 */
  if (C.zf) goto L_10962ed7;
  /* 10962df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962df5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10962df7 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962dfdu);
  /* 10962dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10962dff push 0x10969230 */
  push32((uint32_t)(0x10969230u));
  /* 10962e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e06 call edi */
  call_ind((uint32_t)(EDI), 0x10962e08u);
  /* 10962e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e0a push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962e0c push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962e11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e13 call esi */
  call_ind((uint32_t)(ESI), 0x10962e15u);
  /* 10962e15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962e17 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10962e19 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e20 call esi */
  call_ind((uint32_t)(ESI), 0x10962e22u);
  /* 10962e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e24 push 0x109691f8 */
  push32((uint32_t)(0x109691f8u));
  /* 10962e29 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e2b call edi */
  call_ind((uint32_t)(EDI), 0x10962e2du);
  /* 10962e2d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e32 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962e34 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e3b call esi */
  call_ind((uint32_t)(ESI), 0x10962e3du);
  /* 10962e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10962e3f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10962e41 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10962e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e48 call esi */
  call_ind((uint32_t)(ESI), 0x10962e4au);
  /* 10962e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e4c push 0x10968e78 */
  push32((uint32_t)(0x10968e78u));
  /* 10962e51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e53 call edi */
  call_ind((uint32_t)(EDI), 0x10962e55u);
  /* 10962e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e57 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962e59 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962e5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e60 call esi */
  call_ind((uint32_t)(ESI), 0x10962e62u);
  /* 10962e62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962e64 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962e69 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e70 call esi */
  call_ind((uint32_t)(ESI), 0x10962e72u);
  /* 10962e72 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962e77 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10962e79 push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 10962e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e80 call esi */
  call_ind((uint32_t)(ESI), 0x10962e82u);
  /* 10962e82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e86 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962e8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e8d call esi */
  call_ind((uint32_t)(ESI), 0x10962e8fu);
  /* 10962e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e91 push 0x10968e98 */
  push32((uint32_t)(0x10968e98u));
  /* 10962e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962e98 call edi */
  call_ind((uint32_t)(EDI), 0x10962e9au);
  /* 10962e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10962e9c push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962e9e push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ea5 call esi */
  call_ind((uint32_t)(ESI), 0x10962ea7u);
  /* 10962ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962ea9 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962eae push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10962eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962eb5 call esi */
  call_ind((uint32_t)(ESI), 0x10962eb7u);
  /* 10962eb7 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962eba push 2 */
  push32((uint32_t)(0x2u));
  /* 10962ebc push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10962ebe push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 10962ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ec5 call esi */
  call_ind((uint32_t)(ESI), 0x10962ec7u);
  /* 10962ec7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962ecb push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962ed2 call esi */
  call_ind((uint32_t)(ESI), 0x10962ed4u);
  /* 10962ed4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962ed7:;
  /* 10962ed7 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10962ed9 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962edfu);
  /* 10962edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962ee2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962ee4 je 0x10962f43 */
  if (C.zf) goto L_10962f43;
  /* 10962ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962ee8 push 0x109691a0 */
  push32((uint32_t)(0x109691a0u));
  /* 10962eed call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x10962ef3u);
  /* 10962ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962ef6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10962ef9 jl 0x10962f0a */
  if ((C.sf!=C.of)) goto L_10962f0a;
  /* 10962efb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10962efd call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962f03u);
  /* 10962f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962f06 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962f08 je 0x10962f43 */
  if (C.zf) goto L_10962f43;
L_10962f0a:;
  /* 10962f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10962f0c push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10962f0e call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962f14u);
  /* 10962f14 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10962f19 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10962f1b call ebp */
  call_ind((uint32_t)(EBP), 0x10962f1du);
  /* 10962f1d push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10962f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962f24 call ebp */
  call_ind((uint32_t)(EBP), 0x10962f26u);
  /* 10962f26 push 0x4650 */
  push32((uint32_t)(0x4650u));
  /* 10962f2b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10962f2d call ebp */
  call_ind((uint32_t)(EBP), 0x10962f2fu);
  /* 10962f2f push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 10962f34 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10962f36 call ebp */
  call_ind((uint32_t)(EBP), 0x10962f38u);
  /* 10962f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962f3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10962f3e call ebx */
  call_ind((uint32_t)(EBX), 0x10962f40u);
  /* 10962f40 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962f43:;
  /* 10962f43 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10962f45 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10962f4bu);
  /* 10962f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962f4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962f50 je 0x10962ffa */
  if (C.zf) goto L_10962ffa;
  /* 10962f56 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10962f58 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10962f5eu);
  /* 10962f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962f61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10962f63 je 0x10962ffa */
  if (C.zf) goto L_10962ffa;
  /* 10962f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962f6b push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10962f6d call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10962f73u);
  /* 10962f73 push 0x51612 */
  push32((uint32_t)(0x51612u));
  /* 10962f78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10962f7c call ebx */
  call_ind((uint32_t)(EBX), 0x10962f7eu);
  /* 10962f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10962f80 push 0x10969038 */
  push32((uint32_t)(0x10969038u));
  /* 10962f85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962f87 call edi */
  call_ind((uint32_t)(EDI), 0x10962f89u);
  /* 10962f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962f8b push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962f8d push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962f92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962f94 call esi */
  call_ind((uint32_t)(ESI), 0x10962f96u);
  /* 10962f96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962f98 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962f9d push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10962fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962fa4 call esi */
  call_ind((uint32_t)(ESI), 0x10962fa6u);
  /* 10962fa6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10962fab push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10962fad push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10962fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962fb4 call esi */
  call_ind((uint32_t)(ESI), 0x10962fb6u);
  /* 10962fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962fb8 push 0x10969040 */
  push32((uint32_t)(0x10969040u));
  /* 10962fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10962fbf call edi */
  call_ind((uint32_t)(EDI), 0x10962fc1u);
  /* 10962fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962fc3 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10962fc5 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10962fca push 1 */
  push32((uint32_t)(0x1u));
  /* 10962fcc call esi */
  call_ind((uint32_t)(ESI), 0x10962fceu);
  /* 10962fce push 2 */
  push32((uint32_t)(0x2u));
  /* 10962fd0 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10962fd5 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10962fda push 1 */
  push32((uint32_t)(0x1u));
  /* 10962fdc call esi */
  call_ind((uint32_t)(ESI), 0x10962fdeu);
  /* 10962fde push 2 */
  push32((uint32_t)(0x2u));
  /* 10962fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10962fe2 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10962fe7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10962fe9 call esi */
  call_ind((uint32_t)(ESI), 0x10962febu);
  /* 10962feb add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10962fee push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10962ff3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10962ff5 call ebp */
  call_ind((uint32_t)(EBP), 0x10962ff7u);
  /* 10962ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10962ffa:;
  /* 10962ffa push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10962ffc call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963002u);
  /* 10963002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963005 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963007 je 0x1096313c */
  if (C.zf) goto L_1096313c;
  /* 1096300d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1096300f call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963015u);
  /* 10963015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963018 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096301a je 0x1096313c */
  if (C.zf) goto L_1096313c;
  /* 10963020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963022 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10963024 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x1096302au);
  /* 1096302a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096302c push 0x10968da0 */
  push32((uint32_t)(0x10968da0u));
  /* 10963031 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963033 call edi */
  call_ind((uint32_t)(EDI), 0x10963035u);
  /* 10963035 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963037 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10963039 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 1096303e push 1 */
  push32((uint32_t)(0x1u));
  /* 10963040 call esi */
  call_ind((uint32_t)(ESI), 0x10963042u);
  /* 10963042 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963044 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10963049 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 1096304e push 1 */
  push32((uint32_t)(0x1u));
  /* 10963050 call esi */
  call_ind((uint32_t)(ESI), 0x10963052u);
  /* 10963052 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963054 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963056 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 1096305b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096305d call esi */
  call_ind((uint32_t)(ESI), 0x1096305fu);
  /* 1096305f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963062 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963066 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 1096306b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096306d call esi */
  call_ind((uint32_t)(ESI), 0x1096306fu);
  /* 1096306f push 2 */
  push32((uint32_t)(0x2u));
  /* 10963071 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963073 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10963078 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096307a call esi */
  call_ind((uint32_t)(ESI), 0x1096307cu);
  /* 1096307c push 2 */
  push32((uint32_t)(0x2u));
  /* 1096307e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10963080 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 10963085 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963087 call esi */
  call_ind((uint32_t)(ESI), 0x10963089u);
  /* 10963089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096308b push 0x109692d0 */
  push32((uint32_t)(0x109692d0u));
  /* 10963090 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963092 call edi */
  call_ind((uint32_t)(EDI), 0x10963094u);
  /* 10963094 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963096 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10963098 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 1096309d push 1 */
  push32((uint32_t)(0x1u));
  /* 1096309f call esi */
  call_ind((uint32_t)(ESI), 0x109630a1u);
  /* 109630a1 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109630a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109630a6 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109630ab push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 109630b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109630b2 call esi */
  call_ind((uint32_t)(ESI), 0x109630b4u);
  /* 109630b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109630b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109630b8 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 109630bd push 1 */
  push32((uint32_t)(0x1u));
  /* 109630bf call esi */
  call_ind((uint32_t)(ESI), 0x109630c1u);
  /* 109630c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109630c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109630c5 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 109630ca push 1 */
  push32((uint32_t)(0x1u));
  /* 109630cc call esi */
  call_ind((uint32_t)(ESI), 0x109630ceu);
  /* 109630ce push 2 */
  push32((uint32_t)(0x2u));
  /* 109630d0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109630d2 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 109630d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109630d9 call esi */
  call_ind((uint32_t)(ESI), 0x109630dbu);
  /* 109630db add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109630de push 0 */
  push32((uint32_t)(0x0u));
  /* 109630e0 push 0x10969040 */
  push32((uint32_t)(0x10969040u));
  /* 109630e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109630e7 call edi */
  call_ind((uint32_t)(EDI), 0x109630e9u);
  /* 109630e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109630eb push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109630ed push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 109630f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109630f4 call esi */
  call_ind((uint32_t)(ESI), 0x109630f6u);
  /* 109630f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109630f8 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109630fd push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10963102 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963104 call esi */
  call_ind((uint32_t)(ESI), 0x10963106u);
  /* 10963106 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963108 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1096310a push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 1096310f push 1 */
  push32((uint32_t)(0x1u));
  /* 10963111 call esi */
  call_ind((uint32_t)(ESI), 0x10963113u);
  /* 10963113 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963115 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963117 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 1096311c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096311e call esi */
  call_ind((uint32_t)(ESI), 0x10963120u);
  /* 10963120 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963123 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963127 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 1096312c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096312e call esi */
  call_ind((uint32_t)(ESI), 0x10963130u);
  /* 10963130 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10963135 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10963137 call ebp */
  call_ind((uint32_t)(EBP), 0x10963139u);
  /* 10963139 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096313c:;
  /* 1096313c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1096313e call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963144u);
  /* 10963144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963147 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963149 je 0x109632b5 */
  if (C.zf) goto L_109632b5;
  /* 1096314f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10963151 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963157u);
  /* 10963157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096315a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096315c je 0x109632b5 */
  if (C.zf) goto L_109632b5;
  /* 10963162 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963164 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10963166 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x1096316cu);
  /* 1096316c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096316e push 0x10969250 */
  push32((uint32_t)(0x10969250u));
  /* 10963173 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963175 call edi */
  call_ind((uint32_t)(EDI), 0x10963177u);
  /* 10963177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963179 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 1096317b push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963180 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963182 call esi */
  call_ind((uint32_t)(ESI), 0x10963184u);
  /* 10963184 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963186 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10963188 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 1096318d push 1 */
  push32((uint32_t)(0x1u));
  /* 1096318f call esi */
  call_ind((uint32_t)(ESI), 0x10963191u);
  /* 10963191 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963193 push 0x109691f0 */
  push32((uint32_t)(0x109691f0u));
  /* 10963198 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096319a call edi */
  call_ind((uint32_t)(EDI), 0x1096319cu);
  /* 1096319c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096319f push 0 */
  push32((uint32_t)(0x0u));
  /* 109631a1 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109631a3 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 109631a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109631aa call esi */
  call_ind((uint32_t)(ESI), 0x109631acu);
  /* 109631ac push 2 */
  push32((uint32_t)(0x2u));
  /* 109631ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109631b0 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 109631b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109631b7 call esi */
  call_ind((uint32_t)(ESI), 0x109631b9u);
  /* 109631b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109631bb push 0x10969038 */
  push32((uint32_t)(0x10969038u));
  /* 109631c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109631c2 call edi */
  call_ind((uint32_t)(EDI), 0x109631c4u);
  /* 109631c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109631c6 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109631c8 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 109631cd push 1 */
  push32((uint32_t)(0x1u));
  /* 109631cf call esi */
  call_ind((uint32_t)(ESI), 0x109631d1u);
  /* 109631d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109631d3 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109631d8 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 109631dd push 1 */
  push32((uint32_t)(0x1u));
  /* 109631df call esi */
  call_ind((uint32_t)(ESI), 0x109631e1u);
  /* 109631e1 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109631e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109631e6 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 109631e8 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 109631ed push 1 */
  push32((uint32_t)(0x1u));
  /* 109631ef call esi */
  call_ind((uint32_t)(ESI), 0x109631f1u);
  /* 109631f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109631f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109631f5 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 109631fa push 1 */
  push32((uint32_t)(0x1u));
  /* 109631fc call esi */
  call_ind((uint32_t)(ESI), 0x109631feu);
  /* 109631fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10963200 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963202 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10963207 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963209 call esi */
  call_ind((uint32_t)(ESI), 0x1096320bu);
  /* 1096320b push 0 */
  push32((uint32_t)(0x0u));
  /* 1096320d push 0x10968fa0 */
  push32((uint32_t)(0x10968fa0u));
  /* 10963212 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963214 call edi */
  call_ind((uint32_t)(EDI), 0x10963216u);
  /* 10963216 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963218 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 1096321a push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 1096321f push 1 */
  push32((uint32_t)(0x1u));
  /* 10963221 call esi */
  call_ind((uint32_t)(ESI), 0x10963223u);
  /* 10963223 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963226 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963228 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1096322d push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10963232 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963234 call esi */
  call_ind((uint32_t)(ESI), 0x10963236u);
  /* 10963236 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963238 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1096323a push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 1096323f push 1 */
  push32((uint32_t)(0x1u));
  /* 10963241 call esi */
  call_ind((uint32_t)(ESI), 0x10963243u);
  /* 10963243 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963245 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963247 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 1096324c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096324e call esi */
  call_ind((uint32_t)(ESI), 0x10963250u);
  /* 10963250 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963254 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10963259 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096325b call esi */
  call_ind((uint32_t)(ESI), 0x1096325du);
  /* 1096325d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963260 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963262 push 0x10968f98 */
  push32((uint32_t)(0x10968f98u));
  /* 10963267 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963269 call edi */
  call_ind((uint32_t)(EDI), 0x1096326bu);
  /* 1096326b push 0 */
  push32((uint32_t)(0x0u));
  /* 1096326d push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 1096326f push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963274 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963276 call esi */
  call_ind((uint32_t)(ESI), 0x10963278u);
  /* 10963278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1096327a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1096327f push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10963284 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963286 call esi */
  call_ind((uint32_t)(ESI), 0x10963288u);
  /* 10963288 push 2 */
  push32((uint32_t)(0x2u));
  /* 1096328a push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1096328c push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10963291 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963293 call esi */
  call_ind((uint32_t)(ESI), 0x10963295u);
  /* 10963295 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963297 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963299 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 1096329e push 1 */
  push32((uint32_t)(0x1u));
  /* 109632a0 call esi */
  call_ind((uint32_t)(ESI), 0x109632a2u);
  /* 109632a2 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109632a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109632a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109632a9 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 109632ae push 1 */
  push32((uint32_t)(0x1u));
  /* 109632b0 call esi */
  call_ind((uint32_t)(ESI), 0x109632b2u);
  /* 109632b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109632b5:;
  /* 109632b5 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109632b7 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109632bdu);
  /* 109632bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109632c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109632c2 je 0x109632f7 */
  if (C.zf) goto L_109632f7;
  /* 109632c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109632c6 push 0x10969198 */
  push32((uint32_t)(0x10969198u));
  /* 109632cb call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109632d1u);
  /* 109632d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109632d4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109632d7 jge 0x109632f7 */
  if ((C.sf==C.of)) goto L_109632f7;
  /* 109632d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109632db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109632dd call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x109632e3u);
  /* 109632e3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 109632e8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109632ea call ebp */
  call_ind((uint32_t)(EBP), 0x109632ecu);
  /* 109632ec push 0 */
  push32((uint32_t)(0x0u));
  /* 109632ee push 1 */
  push32((uint32_t)(0x1u));
  /* 109632f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109632f2 call ebx */
  call_ind((uint32_t)(EBX), 0x109632f4u);
  /* 109632f4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109632f7:;
  /* 109632f7 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 109632f9 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109632ffu);
  /* 109632ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963302 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963304 je 0x10963433 */
  if (C.zf) goto L_10963433;
  /* 1096330a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1096330c call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963312u);
  /* 10963312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963315 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963317 je 0x10963433 */
  if (C.zf) goto L_10963433;
  /* 1096331d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096331f push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10963321 call dword ptr [0x109670b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b8))), 0x10963327u);
  /* 10963327 push 0x43d118 */
  push32((uint32_t)(0x43d118u));
  /* 1096332c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096332e push 1 */
  push32((uint32_t)(0x1u));
  /* 10963330 call ebx */
  call_ind((uint32_t)(EBX), 0x10963332u);
  /* 10963332 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963334 push 0x10969240 */
  push32((uint32_t)(0x10969240u));
  /* 10963339 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096333b call edi */
  call_ind((uint32_t)(EDI), 0x1096333du);
  /* 1096333d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096333f push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10963341 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963346 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963348 call esi */
  call_ind((uint32_t)(ESI), 0x1096334au);
  /* 1096334a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096334c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1096334e push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10963353 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963355 call esi */
  call_ind((uint32_t)(ESI), 0x10963357u);
  /* 10963357 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096335a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096335c push 0x10969200 */
  push32((uint32_t)(0x10969200u));
  /* 10963361 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963363 call edi */
  call_ind((uint32_t)(EDI), 0x10963365u);
  /* 10963365 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963367 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10963369 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 1096336e push 1 */
  push32((uint32_t)(0x1u));
  /* 10963370 call esi */
  call_ind((uint32_t)(ESI), 0x10963372u);
  /* 10963372 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963374 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10963376 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 1096337b push 1 */
  push32((uint32_t)(0x1u));
  /* 1096337d call esi */
  call_ind((uint32_t)(ESI), 0x1096337fu);
  /* 1096337f push 0 */
  push32((uint32_t)(0x0u));
  /* 10963381 push 0x10968fc8 */
  push32((uint32_t)(0x10968fc8u));
  /* 10963386 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963388 call edi */
  call_ind((uint32_t)(EDI), 0x1096338au);
  /* 1096338a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096338c push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 1096338e push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963393 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963395 call esi */
  call_ind((uint32_t)(ESI), 0x10963397u);
  /* 10963397 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096339a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096339c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109633a1 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 109633a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109633a8 call esi */
  call_ind((uint32_t)(ESI), 0x109633aau);
  /* 109633aa push 2 */
  push32((uint32_t)(0x2u));
  /* 109633ac push 0x46 */
  push32((uint32_t)(0x46u));
  /* 109633ae push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 109633b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109633b5 call esi */
  call_ind((uint32_t)(ESI), 0x109633b7u);
  /* 109633b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109633b9 push 0x10968fc0 */
  push32((uint32_t)(0x10968fc0u));
  /* 109633be push 1 */
  push32((uint32_t)(0x1u));
  /* 109633c0 call edi */
  call_ind((uint32_t)(EDI), 0x109633c2u);
  /* 109633c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109633c4 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109633c6 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 109633cb push 1 */
  push32((uint32_t)(0x1u));
  /* 109633cd call esi */
  call_ind((uint32_t)(ESI), 0x109633cfu);
  /* 109633cf push 2 */
  push32((uint32_t)(0x2u));
  /* 109633d1 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109633d6 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 109633db push 1 */
  push32((uint32_t)(0x1u));
  /* 109633dd call esi */
  call_ind((uint32_t)(ESI), 0x109633dfu);
  /* 109633df add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109633e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109633e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109633e6 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 109633eb push 1 */
  push32((uint32_t)(0x1u));
  /* 109633ed call esi */
  call_ind((uint32_t)(ESI), 0x109633efu);
  /* 109633ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109633f1 push 0x10969048 */
  push32((uint32_t)(0x10969048u));
  /* 109633f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109633f8 call edi */
  call_ind((uint32_t)(EDI), 0x109633fau);
  /* 109633fa push 2 */
  push32((uint32_t)(0x2u));
  /* 109633fc push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109633fe push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963403 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963405 call esi */
  call_ind((uint32_t)(ESI), 0x10963407u);
  /* 10963407 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963409 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1096340e push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10963413 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963415 call esi */
  call_ind((uint32_t)(ESI), 0x10963417u);
  /* 10963417 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096341b push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10963420 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963422 call esi */
  call_ind((uint32_t)(ESI), 0x10963424u);
  /* 10963424 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963427 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1096342c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1096342e call ebp */
  call_ind((uint32_t)(EBP), 0x10963430u);
  /* 10963430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963433:;
  /* 10963433 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10963435 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x1096343bu);
  /* 1096343b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096343e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963440 je 0x10963539 */
  if (C.zf) goto L_10963539;
  /* 10963446 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10963448 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x1096344eu);
  /* 1096344e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963451 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963453 je 0x10963539 */
  if (C.zf) goto L_10963539;
  /* 10963459 mov ebx, dword ptr [0x109670b8] */
  EBX = (r32((uint32_t)(0x109670b8)));
  /* 1096345f push 0 */
  push32((uint32_t)(0x0u));
  /* 10963461 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10963463 call ebx */
  call_ind((uint32_t)(EBX), 0x10963465u);
  /* 10963465 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963467 push 0x10968db0 */
  push32((uint32_t)(0x10968db0u));
  /* 1096346c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096346e call edi */
  call_ind((uint32_t)(EDI), 0x10963470u);
  /* 10963470 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963472 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10963474 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963479 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096347b call esi */
  call_ind((uint32_t)(ESI), 0x1096347du);
  /* 1096347d push 2 */
  push32((uint32_t)(0x2u));
  /* 1096347f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10963484 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10963489 push 1 */
  push32((uint32_t)(0x1u));
  /* 1096348b call esi */
  call_ind((uint32_t)(ESI), 0x1096348du);
  /* 1096348d push 2 */
  push32((uint32_t)(0x2u));
  /* 1096348f push 0 */
  push32((uint32_t)(0x0u));
  /* 10963491 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10963496 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963498 call esi */
  call_ind((uint32_t)(ESI), 0x1096349au);
  /* 1096349a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096349d push 2 */
  push32((uint32_t)(0x2u));
  /* 1096349f push 0 */
  push32((uint32_t)(0x0u));
  /* 109634a1 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 109634a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109634a8 call esi */
  call_ind((uint32_t)(ESI), 0x109634aau);
  /* 109634aa push 2 */
  push32((uint32_t)(0x2u));
  /* 109634ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109634ae push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 109634b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109634b5 call esi */
  call_ind((uint32_t)(ESI), 0x109634b7u);
  /* 109634b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109634b9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109634bb push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 109634c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109634c2 call esi */
  call_ind((uint32_t)(ESI), 0x109634c4u);
  /* 109634c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109634c6 push 0x109692b8 */
  push32((uint32_t)(0x109692b8u));
  /* 109634cb push 1 */
  push32((uint32_t)(0x1u));
  /* 109634cd call edi */
  call_ind((uint32_t)(EDI), 0x109634cfu);
  /* 109634cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109634d1 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 109634d3 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 109634d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109634da call esi */
  call_ind((uint32_t)(ESI), 0x109634dcu);
  /* 109634dc add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109634df push 2 */
  push32((uint32_t)(0x2u));
  /* 109634e1 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109634e6 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 109634eb push 1 */
  push32((uint32_t)(0x1u));
  /* 109634ed call esi */
  call_ind((uint32_t)(ESI), 0x109634efu);
  /* 109634ef push 2 */
  push32((uint32_t)(0x2u));
  /* 109634f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109634f3 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 109634f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109634fa call esi */
  call_ind((uint32_t)(ESI), 0x109634fcu);
  /* 109634fc push 2 */
  push32((uint32_t)(0x2u));
  /* 109634fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10963500 push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 10963505 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963507 call esi */
  call_ind((uint32_t)(ESI), 0x10963509u);
  /* 10963509 push 2 */
  push32((uint32_t)(0x2u));
  /* 1096350b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1096350d push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10963512 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963514 call esi */
  call_ind((uint32_t)(ESI), 0x10963516u);
  /* 10963516 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963519 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1096351e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10963520 call ebp */
  call_ind((uint32_t)(EBP), 0x10963522u);
  /* 10963522 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10963527 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10963529 call ebp */
  call_ind((uint32_t)(EBP), 0x1096352bu);
  /* 1096352b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10963530 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963532 call ebp */
  call_ind((uint32_t)(EBP), 0x10963534u);
  /* 10963534 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963537 jmp 0x1096353f */
  goto L_1096353f;
L_10963539:;
  /* 10963539 mov ebx, dword ptr [0x109670b8] */
  EBX = (r32((uint32_t)(0x109670b8)));
L_1096353f:;
  /* 1096353f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10963541 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963547u);
  /* 10963547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096354a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096354c je 0x109635c9 */
  if (C.zf) goto L_109635c9;
  /* 1096354e push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10963550 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963556u);
  /* 10963556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963559 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096355b je 0x109635c9 */
  if (C.zf) goto L_109635c9;
  /* 1096355d push 0 */
  push32((uint32_t)(0x0u));
  /* 1096355f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10963561 call ebx */
  call_ind((uint32_t)(EBX), 0x10963563u);
  /* 10963563 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10963568 push 0x10969218 */
  push32((uint32_t)(0x10969218u));
  /* 1096356d push 4 */
  push32((uint32_t)(0x4u));
  /* 1096356f push 0x10968f40 */
  push32((uint32_t)(0x10968f40u));
  /* 10963574 push 0x10969000 */
  push32((uint32_t)(0x10969000u));
  /* 10963579 push 0x10969108 */
  push32((uint32_t)(0x10969108u));
  /* 1096357e call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x10963584u);
  /* 10963584 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10963589 push 0x10968e00 */
  push32((uint32_t)(0x10968e00u));
  /* 1096358e push 4 */
  push32((uint32_t)(0x4u));
  /* 10963590 push 0x10969130 */
  push32((uint32_t)(0x10969130u));
  /* 10963595 push 0x10968fe8 */
  push32((uint32_t)(0x10968fe8u));
  /* 1096359a push 0x10969270 */
  push32((uint32_t)(0x10969270u));
  /* 1096359f call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x109635a5u);
  /* 109635a5 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109635aa push 0x109692e0 */
  push32((uint32_t)(0x109692e0u));
  /* 109635af push 4 */
  push32((uint32_t)(0x4u));
  /* 109635b1 push 0x10968f30 */
  push32((uint32_t)(0x10968f30u));
  /* 109635b6 push 0x10968ff0 */
  push32((uint32_t)(0x10968ff0u));
  /* 109635bb push 0x10969100 */
  push32((uint32_t)(0x10969100u));
  /* 109635c0 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x109635c6u);
  /* 109635c6 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109635c9:;
  /* 109635c9 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 109635cb call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109635d1u);
  /* 109635d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109635d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109635d6 je 0x10963699 */
  if (C.zf) goto L_10963699;
  /* 109635dc push 4 */
  push32((uint32_t)(0x4u));
  /* 109635de push 0x10969108 */
  push32((uint32_t)(0x10969108u));
  /* 109635e3 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109635e9u);
  /* 109635e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109635ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109635ee jle 0x10963699 */
  if ((C.zf||C.sf!=C.of)) goto L_10963699;
  /* 109635f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109635f6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 109635f8 call ebx */
  call_ind((uint32_t)(EBX), 0x109635fau);
  /* 109635fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109635fc push 0x10969108 */
  push32((uint32_t)(0x10969108u));
  /* 10963601 call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x10963607u);
  /* 10963607 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963609 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1096360e push 0x10968de0 */
  push32((uint32_t)(0x10968de0u));
  /* 10963613 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963615 call esi */
  call_ind((uint32_t)(ESI), 0x10963617u);
  /* 10963617 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963619 push 0xcc */
  push32((uint32_t)(0xccu));
  /* 1096361e push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 10963623 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963625 call esi */
  call_ind((uint32_t)(ESI), 0x10963627u);
  /* 10963627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963629 push 0x10969270 */
  push32((uint32_t)(0x10969270u));
  /* 1096362e call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x10963634u);
  /* 10963634 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963636 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1096363b push 0x10968de0 */
  push32((uint32_t)(0x10968de0u));
  /* 10963640 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963642 call esi */
  call_ind((uint32_t)(ESI), 0x10963644u);
  /* 10963644 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963647 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963649 push 0xcc */
  push32((uint32_t)(0xccu));
  /* 1096364e push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 10963653 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963655 call esi */
  call_ind((uint32_t)(ESI), 0x10963657u);
  /* 10963657 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963659 push 0x10969100 */
  push32((uint32_t)(0x10969100u));
  /* 1096365e call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x10963664u);
  /* 10963664 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963666 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1096366b push 0x10968de0 */
  push32((uint32_t)(0x10968de0u));
  /* 10963670 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963672 call esi */
  call_ind((uint32_t)(ESI), 0x10963674u);
  /* 10963674 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963676 push 0xcc */
  push32((uint32_t)(0xccu));
  /* 1096367b push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 10963680 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963682 call esi */
  call_ind((uint32_t)(ESI), 0x10963684u);
  /* 10963684 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10963689 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1096368b call ebp */
  call_ind((uint32_t)(EBP), 0x1096368du);
  /* 1096368d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963690 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963692 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10963694 call ebx */
  call_ind((uint32_t)(EBX), 0x10963696u);
  /* 10963696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963699:;
  /* 10963699 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1096369b call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109636a1u);
  /* 109636a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109636a4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109636a6 je 0x109636e1 */
  if (C.zf) goto L_109636e1;
  /* 109636a8 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109636aa call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109636b0u);
  /* 109636b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109636b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109636b5 je 0x109636e1 */
  if (C.zf) goto L_109636e1;
  /* 109636b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109636b9 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 109636bb call ebx */
  call_ind((uint32_t)(EBX), 0x109636bdu);
  /* 109636bd push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109636c2 push 0x10969218 */
  push32((uint32_t)(0x10969218u));
  /* 109636c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109636c9 push 0x10968f40 */
  push32((uint32_t)(0x10968f40u));
  /* 109636ce push 0x10969000 */
  push32((uint32_t)(0x10969000u));
  /* 109636d3 push 0x10968eb0 */
  push32((uint32_t)(0x10968eb0u));
  /* 109636d8 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x109636deu);
  /* 109636de add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109636e1:;
  /* 109636e1 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 109636e3 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109636e9u);
  /* 109636e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109636ec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109636ee je 0x10963749 */
  if (C.zf) goto L_10963749;
  /* 109636f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109636f2 push 0x10968eb0 */
  push32((uint32_t)(0x10968eb0u));
  /* 109636f7 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109636fdu);
  /* 109636fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963702 jle 0x10963749 */
  if ((C.zf||C.sf!=C.of)) goto L_10963749;
  /* 10963704 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963706 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10963708 call ebx */
  call_ind((uint32_t)(EBX), 0x1096370au);
  /* 1096370a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096370c push 0x10968eb0 */
  push32((uint32_t)(0x10968eb0u));
  /* 10963711 call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x10963717u);
  /* 10963717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963719 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1096371e push 0x10968de0 */
  push32((uint32_t)(0x10968de0u));
  /* 10963723 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963725 call esi */
  call_ind((uint32_t)(ESI), 0x10963727u);
  /* 10963727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963729 push 0xcc */
  push32((uint32_t)(0xccu));
  /* 1096372e push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 10963733 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963735 call esi */
  call_ind((uint32_t)(ESI), 0x10963737u);
  /* 10963737 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 1096373c push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1096373e call ebp */
  call_ind((uint32_t)(EBP), 0x10963740u);
  /* 10963740 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963742 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10963744 call ebx */
  call_ind((uint32_t)(EBX), 0x10963746u);
  /* 10963746 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963749:;
  /* 10963749 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1096374b call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963751u);
  /* 10963751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963754 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963756 je 0x10963791 */
  if (C.zf) goto L_10963791;
  /* 10963758 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1096375a call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963760u);
  /* 10963760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963763 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963765 je 0x10963791 */
  if (C.zf) goto L_10963791;
  /* 10963767 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963769 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1096376b call ebx */
  call_ind((uint32_t)(EBX), 0x1096376du);
  /* 1096376d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10963772 push 0x10969210 */
  push32((uint32_t)(0x10969210u));
  /* 10963777 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963779 push 0x10968f38 */
  push32((uint32_t)(0x10968f38u));
  /* 1096377e push 0x10968ff8 */
  push32((uint32_t)(0x10968ff8u));
  /* 10963783 push 0x10969018 */
  push32((uint32_t)(0x10969018u));
  /* 10963788 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x1096378eu);
  /* 1096378e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963791:;
  /* 10963791 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10963793 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963799u);
  /* 10963799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096379c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096379e je 0x109637e9 */
  if (C.zf) goto L_109637e9;
  /* 109637a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109637a2 push 0x10969018 */
  push32((uint32_t)(0x10969018u));
  /* 109637a7 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x109637adu);
  /* 109637ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109637b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109637b2 jle 0x109637e9 */
  if ((C.zf||C.sf!=C.of)) goto L_109637e9;
  /* 109637b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109637b6 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 109637b8 call ebx */
  call_ind((uint32_t)(EBX), 0x109637bau);
  /* 109637ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109637bc push 0x10969018 */
  push32((uint32_t)(0x10969018u));
  /* 109637c1 call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x109637c7u);
  /* 109637c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109637c9 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 109637ce push 0x10969120 */
  push32((uint32_t)(0x10969120u));
  /* 109637d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109637d5 call esi */
  call_ind((uint32_t)(ESI), 0x109637d7u);
  /* 109637d7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 109637dc push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109637de call ebp */
  call_ind((uint32_t)(EBP), 0x109637e0u);
  /* 109637e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109637e2 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 109637e4 call ebx */
  call_ind((uint32_t)(EBX), 0x109637e6u);
  /* 109637e6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109637e9:;
  /* 109637e9 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 109637eb call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109637f1u);
  /* 109637f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109637f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109637f6 je 0x10963831 */
  if (C.zf) goto L_10963831;
  /* 109637f8 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109637fa call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963800u);
  /* 10963800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963803 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963805 je 0x10963831 */
  if (C.zf) goto L_10963831;
  /* 10963807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963809 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1096380b call ebx */
  call_ind((uint32_t)(EBX), 0x1096380du);
  /* 1096380d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10963812 push 0x10969210 */
  push32((uint32_t)(0x10969210u));
  /* 10963817 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963819 push 0x109690b0 */
  push32((uint32_t)(0x109690b0u));
  /* 1096381e push 0x10968ff8 */
  push32((uint32_t)(0x10968ff8u));
  /* 10963823 push 0x10969010 */
  push32((uint32_t)(0x10969010u));
  /* 10963828 call dword ptr [0x109670cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670cc))), 0x1096382eu);
  /* 1096382e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963831:;
  /* 10963831 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10963833 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963839u);
  /* 10963839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096383c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1096383e je 0x10963885 */
  if (C.zf) goto L_10963885;
  /* 10963840 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963842 push 0x10969010 */
  push32((uint32_t)(0x10969010u));
  /* 10963847 call dword ptr [0x109670e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e0))), 0x1096384du);
  /* 1096384d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963852 jle 0x10963885 */
  if ((C.zf||C.sf!=C.of)) goto L_10963885;
  /* 10963854 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963856 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10963858 call ebx */
  call_ind((uint32_t)(EBX), 0x1096385au);
  /* 1096385a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096385c push 0x10969010 */
  push32((uint32_t)(0x10969010u));
  /* 10963861 call dword ptr [0x10967100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967100))), 0x10963867u);
  /* 10963867 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963869 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 1096386e push 0x10969120 */
  push32((uint32_t)(0x10969120u));
  /* 10963873 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963875 call esi */
  call_ind((uint32_t)(ESI), 0x10963877u);
  /* 10963877 push 0x109687c4 */
  push32((uint32_t)(0x109687c4u));
  /* 1096387c call dword ptr [0x109670c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670c8))), 0x10963882u);
  /* 10963882 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963885:;
  /* 10963885 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10963887 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x1096388du);
  /* 1096388d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963890 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963892 je 0x109638e3 */
  if (C.zf) goto L_109638e3;
  /* 10963894 push 0x10969108 */
  push32((uint32_t)(0x10969108u));
  /* 10963899 push 0x10969128 */
  push32((uint32_t)(0x10969128u));
  /* 1096389e call dword ptr [0x109670e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670e4))), 0x109638a4u);
  /* 109638a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109638a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109638a9 jle 0x109638e3 */
  if ((C.zf||C.sf!=C.of)) goto L_109638e3;
  /* 109638ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109638ad push 0x58 */
  push32((uint32_t)(0x58u));
  /* 109638af call ebx */
  call_ind((uint32_t)(EBX), 0x109638b1u);
  /* 109638b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109638b3 push 0x10968dc0 */
  push32((uint32_t)(0x10968dc0u));
  /* 109638b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109638ba call edi */
  call_ind((uint32_t)(EDI), 0x109638bcu);
  /* 109638bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109638be call dword ptr [0x10967104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967104))), 0x109638c4u);
  /* 109638c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109638c6 push 0x10968db8 */
  push32((uint32_t)(0x10968db8u));
  /* 109638cb push 0 */
  push32((uint32_t)(0x0u));
  /* 109638cd call edi */
  call_ind((uint32_t)(EDI), 0x109638cfu);
  /* 109638cf push 0 */
  push32((uint32_t)(0x0u));
  /* 109638d1 call dword ptr [0x10967104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967104))), 0x109638d7u);
  /* 109638d7 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 109638dc push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 109638de call ebp */
  call_ind((uint32_t)(EBP), 0x109638e0u);
  /* 109638e0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109638e3:;
  /* 109638e3 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 109638e5 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x109638ebu);
  /* 109638eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109638ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109638f0 je 0x10963a4a */
  if (C.zf) goto L_10963a4a;
  /* 109638f6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 109638f8 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x109638feu);
  /* 109638fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963901 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963903 je 0x10963a4a */
  if (C.zf) goto L_10963a4a;
  /* 10963909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096390b push 0x59 */
  push32((uint32_t)(0x59u));
  /* 1096390d call ebx */
  call_ind((uint32_t)(EBX), 0x1096390fu);
  /* 1096390f push 0 */
  push32((uint32_t)(0x0u));
  /* 10963911 push 0x10968eb0 */
  push32((uint32_t)(0x10968eb0u));
  /* 10963916 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963918 call edi */
  call_ind((uint32_t)(EDI), 0x1096391au);
  /* 1096391a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096391c push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 10963921 push 0x10969088 */
  push32((uint32_t)(0x10969088u));
  /* 10963926 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963928 call esi */
  call_ind((uint32_t)(ESI), 0x1096392au);
  /* 1096392a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096392c push 0xaa */
  push32((uint32_t)(0xaau));
  /* 10963931 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10963936 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963938 call esi */
  call_ind((uint32_t)(ESI), 0x1096393au);
  /* 1096393a push 2 */
  push32((uint32_t)(0x2u));
  /* 1096393c push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10963941 push 0x109690a0 */
  push32((uint32_t)(0x109690a0u));
  /* 10963946 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963948 call esi */
  call_ind((uint32_t)(ESI), 0x1096394au);
  /* 1096394a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096394d push 2 */
  push32((uint32_t)(0x2u));
  /* 1096394f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10963951 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10963956 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963958 call esi */
  call_ind((uint32_t)(ESI), 0x1096395au);
  /* 1096395a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096395c push 0x10969108 */
  push32((uint32_t)(0x10969108u));
  /* 10963961 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963963 call edi */
  call_ind((uint32_t)(EDI), 0x10963965u);
  /* 10963965 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963967 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 1096396c push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 10963971 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963973 call esi */
  call_ind((uint32_t)(ESI), 0x10963975u);
  /* 10963975 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963977 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 1096397c push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 10963981 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963983 call esi */
  call_ind((uint32_t)(ESI), 0x10963985u);
  /* 10963985 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963987 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 1096398c push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10963991 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963993 call esi */
  call_ind((uint32_t)(ESI), 0x10963995u);
  /* 10963995 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963998 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096399a push 0x10969018 */
  push32((uint32_t)(0x10969018u));
  /* 1096399f push 4 */
  push32((uint32_t)(0x4u));
  /* 109639a1 call edi */
  call_ind((uint32_t)(EDI), 0x109639a3u);
  /* 109639a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109639a5 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 109639aa push 0x10969078 */
  push32((uint32_t)(0x10969078u));
  /* 109639af push 4 */
  push32((uint32_t)(0x4u));
  /* 109639b1 call esi */
  call_ind((uint32_t)(ESI), 0x109639b3u);
  /* 109639b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109639b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109639b7 push 0x10969098 */
  push32((uint32_t)(0x10969098u));
  /* 109639bc push 4 */
  push32((uint32_t)(0x4u));
  /* 109639be call esi */
  call_ind((uint32_t)(ESI), 0x109639c0u);
  /* 109639c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109639c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109639c4 push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 109639c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109639cb call esi */
  call_ind((uint32_t)(ESI), 0x109639cdu);
  /* 109639cd push 0 */
  push32((uint32_t)(0x0u));
  /* 109639cf push 0x10969010 */
  push32((uint32_t)(0x10969010u));
  /* 109639d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 109639d6 call edi */
  call_ind((uint32_t)(EDI), 0x109639d8u);
  /* 109639d8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109639db push 0 */
  push32((uint32_t)(0x0u));
  /* 109639dd push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 109639e2 push 0x10969070 */
  push32((uint32_t)(0x10969070u));
  /* 109639e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109639e9 call esi */
  call_ind((uint32_t)(ESI), 0x109639ebu);
  /* 109639eb push 2 */
  push32((uint32_t)(0x2u));
  /* 109639ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109639ef push 0x10969030 */
  push32((uint32_t)(0x10969030u));
  /* 109639f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 109639f6 call esi */
  call_ind((uint32_t)(ESI), 0x109639f8u);
  /* 109639f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109639fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109639fc push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10963a01 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963a03 call esi */
  call_ind((uint32_t)(ESI), 0x10963a05u);
  /* 10963a05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10963a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a09 push 0x10969208 */
  push32((uint32_t)(0x10969208u));
  /* 10963a0e push 4 */
  push32((uint32_t)(0x4u));
  /* 10963a10 call esi */
  call_ind((uint32_t)(ESI), 0x10963a12u);
  /* 10963a12 mov edi, dword ptr [0x10967100] */
  EDI = (r32((uint32_t)(0x10967100)));
  /* 10963a18 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a1d push 0x10969270 */
  push32((uint32_t)(0x10969270u));
  /* 10963a22 call edi */
  call_ind((uint32_t)(EDI), 0x10963a24u);
  /* 10963a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a26 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10963a28 push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 10963a2d push 4 */
  push32((uint32_t)(0x4u));
  /* 10963a2f call esi */
  call_ind((uint32_t)(ESI), 0x10963a31u);
  /* 10963a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a33 push 0x10969100 */
  push32((uint32_t)(0x10969100u));
  /* 10963a38 call edi */
  call_ind((uint32_t)(EDI), 0x10963a3au);
  /* 10963a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a3c push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10963a3e push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 10963a43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10963a45 call esi */
  call_ind((uint32_t)(ESI), 0x10963a47u);
  /* 10963a47 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963a4a:;
  /* 10963a4a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10963a4c call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963a52u);
  /* 10963a52 mov edi, dword ptr [0x109670fc] */
  EDI = (r32((uint32_t)(0x109670fc)));
  /* 10963a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963a5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963a5d je 0x10963acb */
  if (C.zf) goto L_10963acb;
  /* 10963a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10963a61 push 0x10968f48 */
  push32((uint32_t)(0x10968f48u));
  /* 10963a66 call edi */
  call_ind((uint32_t)(EDI), 0x10963a68u);
  /* 10963a68 mov edx, eax */
  EDX = (EAX);
  /* 10963a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10963a6c push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 10963a71 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10963a75 call edi */
  call_ind((uint32_t)(EDI), 0x10963a77u);
  /* 10963a77 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10963a7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963a7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10963a80 cmp ecx, 0x28 */
  { uint32_t _a=(ECX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963a83 jle 0x10963ac5 */
  if ((C.zf||C.sf!=C.of)) goto L_10963ac5;
  /* 10963a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a87 push 0x10968f48 */
  push32((uint32_t)(0x10968f48u));
  /* 10963a8c call edi */
  call_ind((uint32_t)(EDI), 0x10963a8eu);
  /* 10963a8e mov edx, eax */
  EDX = (EAX);
  /* 10963a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963a92 push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 10963a97 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10963a9b call edi */
  call_ind((uint32_t)(EDI), 0x10963a9du);
  /* 10963a9d mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 10963aa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963aa4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10963aa6 cmp edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963aa9 jge 0x10963ac5 */
  if ((C.sf==C.of)) goto L_10963ac5;
  /* 10963aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10963aad push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10963aaf call ebx */
  call_ind((uint32_t)(EBX), 0x10963ab1u);
  /* 10963ab1 push 0x109687bc */
  push32((uint32_t)(0x109687bcu));
  /* 10963ab6 call dword ptr [0x109670c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670c8))), 0x10963abcu);
  /* 10963abc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963abf call dword ptr [0x1096710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096710c))), 0x10963ac5u);
L_10963ac5:;
  /* 10963ac5 mov edi, dword ptr [0x109670fc] */
  EDI = (r32((uint32_t)(0x109670fc)));
L_10963acb:;
  /* 10963acb push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10963acd call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963ad3u);
  /* 10963ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963ad6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963ad8 je 0x10963b16 */
  if (C.zf) goto L_10963b16;
  /* 10963ada push 4 */
  push32((uint32_t)(0x4u));
  /* 10963adc push 0x109692e8 */
  push32((uint32_t)(0x109692e8u));
  /* 10963ae1 call edi */
  call_ind((uint32_t)(EDI), 0x10963ae3u);
  /* 10963ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963ae6 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963ae9 jg 0x10963afc */
  if ((!C.zf&&C.sf==C.of)) goto L_10963afc;
  /* 10963aeb push 4 */
  push32((uint32_t)(0x4u));
  /* 10963aed push 0x109690a8 */
  push32((uint32_t)(0x109690a8u));
  /* 10963af2 call edi */
  call_ind((uint32_t)(EDI), 0x10963af4u);
  /* 10963af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963af7 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963afa jle 0x10963b16 */
  if ((C.zf||C.sf!=C.of)) goto L_10963b16;
L_10963afc:;
  /* 10963afc push 0 */
  push32((uint32_t)(0x0u));
  /* 10963afe push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10963b00 call ebx */
  call_ind((uint32_t)(EBX), 0x10963b02u);
  /* 10963b02 push 0x109687b4 */
  push32((uint32_t)(0x109687b4u));
  /* 10963b07 call dword ptr [0x109670c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670c8))), 0x10963b0du);
  /* 10963b0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b10 call dword ptr [0x10967110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967110))), 0x10963b16u);
L_10963b16:;
  /* 10963b16 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10963b18 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963b1eu);
  /* 10963b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963b23 je 0x10963b76 */
  if (C.zf) goto L_10963b76;
  /* 10963b25 mov edi, dword ptr [0x109670e0] */
  EDI = (r32((uint32_t)(0x109670e0)));
  /* 10963b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10963b2d push 0x109691a0 */
  push32((uint32_t)(0x109691a0u));
  /* 10963b32 call edi */
  call_ind((uint32_t)(EDI), 0x10963b34u);
  /* 10963b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b37 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963b3a jl 0x10963b5e */
  if ((C.sf!=C.of)) goto L_10963b5e;
  /* 10963b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10963b3e push 0x10969198 */
  push32((uint32_t)(0x10969198u));
  /* 10963b43 call edi */
  call_ind((uint32_t)(EDI), 0x10963b45u);
  /* 10963b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b48 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963b4b jl 0x10963b5e */
  if ((C.sf!=C.of)) goto L_10963b5e;
  /* 10963b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10963b4f push 0x109691a8 */
  push32((uint32_t)(0x109691a8u));
  /* 10963b54 call edi */
  call_ind((uint32_t)(EDI), 0x10963b56u);
  /* 10963b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b59 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963b5c jge 0x10963b70 */
  if ((C.sf==C.of)) goto L_10963b70;
L_10963b5e:;
  /* 10963b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10963b60 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10963b62 call ebx */
  call_ind((uint32_t)(EBX), 0x10963b64u);
  /* 10963b64 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10963b69 push 9 */
  push32((uint32_t)(0x9u));
  /* 10963b6b call ebp */
  call_ind((uint32_t)(EBP), 0x10963b6du);
  /* 10963b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963b70:;
  /* 10963b70 mov edi, dword ptr [0x109670fc] */
  EDI = (r32((uint32_t)(0x109670fc)));
L_10963b76:;
  /* 10963b76 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10963b78 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963b7eu);
  /* 10963b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963b83 je 0x10963bd7 */
  if (C.zf) goto L_10963bd7;
  /* 10963b85 push 9 */
  push32((uint32_t)(0x9u));
  /* 10963b87 call dword ptr [0x109670dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670dc))), 0x10963b8du);
  /* 10963b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963b90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963b92 je 0x10963bd7 */
  if (C.zf) goto L_10963bd7;
  /* 10963b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963b96 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10963b98 call ebx */
  call_ind((uint32_t)(EBX), 0x10963b9au);
  /* 10963b9a mov ebp, dword ptr [0x10967100] */
  EBP = (r32((uint32_t)(0x10967100)));
  /* 10963ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963ba2 push 0x10968f20 */
  push32((uint32_t)(0x10968f20u));
  /* 10963ba7 call ebp */
  call_ind((uint32_t)(EBP), 0x10963ba9u);
  /* 10963ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963bab push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10963bb0 push 0x10969090 */
  push32((uint32_t)(0x10969090u));
  /* 10963bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963bb7 call esi */
  call_ind((uint32_t)(ESI), 0x10963bb9u);
  /* 10963bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963bbb push 0x10968f10 */
  push32((uint32_t)(0x10968f10u));
  /* 10963bc0 call ebp */
  call_ind((uint32_t)(EBP), 0x10963bc2u);
  /* 10963bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963bc4 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10963bc9 push 0x10969080 */
  push32((uint32_t)(0x10969080u));
  /* 10963bce push 1 */
  push32((uint32_t)(0x1u));
  /* 10963bd0 call esi */
  call_ind((uint32_t)(ESI), 0x10963bd2u);
  /* 10963bd2 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963bd5 jmp 0x10963bdd */
  goto L_10963bdd;
L_10963bd7:;
  /* 10963bd7 mov ebp, dword ptr [0x10967100] */
  EBP = (r32((uint32_t)(0x10967100)));
L_10963bdd:;
  /* 10963bdd push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10963bdf call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963be5u);
  /* 10963be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963be8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963bea je 0x10963c1c */
  if (C.zf) goto L_10963c1c;
  /* 10963bec push 0 */
  push32((uint32_t)(0x0u));
  /* 10963bee push 0x10969110 */
  push32((uint32_t)(0x10969110u));
  /* 10963bf3 call edi */
  call_ind((uint32_t)(EDI), 0x10963bf5u);
  /* 10963bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963bf8 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963bfb jle 0x10963c1c */
  if ((C.zf||C.sf!=C.of)) goto L_10963c1c;
  /* 10963bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10963bff push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10963c01 call ebx */
  call_ind((uint32_t)(EBX), 0x10963c03u);
  /* 10963c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c05 push 0x10968e80 */
  push32((uint32_t)(0x10968e80u));
  /* 10963c0a call ebp */
  call_ind((uint32_t)(EBP), 0x10963c0cu);
  /* 10963c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c0e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10963c10 push 0x10969110 */
  push32((uint32_t)(0x10969110u));
  /* 10963c15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963c17 call esi */
  call_ind((uint32_t)(ESI), 0x10963c19u);
  /* 10963c19 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963c1c:;
  /* 10963c1c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10963c1e call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963c24u);
  /* 10963c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963c27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963c29 je 0x10963c5e */
  if (C.zf) goto L_10963c5e;
  /* 10963c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c2d push 0x10968ef0 */
  push32((uint32_t)(0x10968ef0u));
  /* 10963c32 call edi */
  call_ind((uint32_t)(EDI), 0x10963c34u);
  /* 10963c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963c37 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963c3a jle 0x10963c5e */
  if ((C.zf||C.sf!=C.of)) goto L_10963c5e;
  /* 10963c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c3e push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10963c40 call ebx */
  call_ind((uint32_t)(EBX), 0x10963c42u);
  /* 10963c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c44 push 0x10968e68 */
  push32((uint32_t)(0x10968e68u));
  /* 10963c49 call ebp */
  call_ind((uint32_t)(EBP), 0x10963c4bu);
  /* 10963c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c4d push 0x82 */
  push32((uint32_t)(0x82u));
  /* 10963c52 push 0x10968ef0 */
  push32((uint32_t)(0x10968ef0u));
  /* 10963c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963c59 call esi */
  call_ind((uint32_t)(ESI), 0x10963c5bu);
  /* 10963c5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963c5e:;
  /* 10963c5e push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10963c60 call dword ptr [0x109670b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670b0))), 0x10963c66u);
  /* 10963c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963c69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10963c6b je 0x10963ca0 */
  if (C.zf) goto L_10963ca0;
  /* 10963c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c6f push 0x10968ef8 */
  push32((uint32_t)(0x10968ef8u));
  /* 10963c74 call edi */
  call_ind((uint32_t)(EDI), 0x10963c76u);
  /* 10963c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963c79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963c7c jle 0x10963ca0 */
  if ((C.zf||C.sf!=C.of)) goto L_10963ca0;
  /* 10963c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c80 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10963c82 call ebx */
  call_ind((uint32_t)(EBX), 0x10963c84u);
  /* 10963c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c86 push 0x10968e70 */
  push32((uint32_t)(0x10968e70u));
  /* 10963c8b call ebp */
  call_ind((uint32_t)(EBP), 0x10963c8du);
  /* 10963c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10963c8f push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10963c94 push 0x10968ef8 */
  push32((uint32_t)(0x10968ef8u));
  /* 10963c99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963c9b call esi */
  call_ind((uint32_t)(ESI), 0x10963c9du);
  /* 10963c9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10963ca0:;
  /* 10963ca0 pop edi */
  EDI = (pop32());
  /* 10963ca1 pop esi */
  ESI = (pop32());
  /* 10963ca2 pop ebp */
  EBP = (pop32());
  /* 10963ca3 pop ebx */
  EBX = (pop32());
  /* 10963ca4 pop ecx */
  ECX = (pop32());
  /* 10963ca5 ret  */
  ESPCHK(0x10961990u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb0 @ 0x10963cb0 (217 bytes, 57 insns) */
void f_10963cb0(void) {
  FTRACE(0x10963cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963cb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10963cb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963cb7 jne 0x10963d45 */
  if (!C.zf) goto L_10963d45;
  /* 10963cbd call dword ptr [0x10967080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967080))), 0x10963cc3u);
  /* 10963cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963cc5 mov dword ptr [0x1096930c], eax */
  w32((uint32_t)(0x1096930c), (EAX));
  /* 10963cca call 0x109646e4 */
  push32(0x10963ccfu); f_109646e4();
  /* 10963ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963cd1 pop ecx */
  ECX = (pop32());
  /* 10963cd2 je 0x10963d10 */
  if (C.zf) goto L_10963d10;
  /* 10963cd4 mov eax, dword ptr [0x1096930c] */
  EAX = (r32((uint32_t)(0x1096930c)));
  /* 10963cd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10963cdb mov cl, byte ptr [0x1096930d] */
  CL = (r8((uint32_t)(0x1096930d)));
  /* 10963ce1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10963ce6 shr dword ptr [0x1096930c], 0x10 */
  w32((uint32_t)(0x1096930c), (sh_shr((uint32_t)(r32((uint32_t)(0x1096930c))), (0x10u)&0x1f, 32)));
  /* 10963ced mov dword ptr [0x10969314], eax */
  w32((uint32_t)(0x10969314), (EAX));
  /* 10963cf2 mov dword ptr [0x10969318], ecx */
  w32((uint32_t)(0x10969318), (ECX));
  /* 10963cf8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10963cfb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10963cfd mov dword ptr [0x10969310], eax */
  w32((uint32_t)(0x10969310), (EAX));
  /* 10963d02 call 0x10963f77 */
  push32(0x10963d07u); f_10963f77();
  /* 10963d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963d09 jne 0x10963d14 */
  if (!C.zf) goto L_10963d14;
  /* 10963d0b call 0x10964720 */
  push32(0x10963d10u); f_10964720();
L_10963d10:;
  /* 10963d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10963d12 jmp 0x10963d86 */
  goto L_10963d86;
L_10963d14:;
  /* 10963d14 call dword ptr [0x1096707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096707c))), 0x10963d1au);
  /* 10963d1a mov dword ptr [0x10969878], eax */
  w32((uint32_t)(0x10969878), (EAX));
  /* 10963d1f call 0x109645b2 */
  push32(0x10963d24u); f_109645b2();
  /* 10963d24 mov dword ptr [0x109692f8], eax */
  w32((uint32_t)(0x109692f8), (EAX));
  /* 10963d29 call 0x1096409c */
  push32(0x10963d2eu); f_1096409c();
  /* 10963d2e call 0x10964365 */
  push32(0x10963d33u); f_10964365();
  /* 10963d33 call 0x109642ac */
  push32(0x10963d38u); f_109642ac();
  /* 10963d38 call 0x10963e59 */
  push32(0x10963d3du); f_10963e59();
  /* 10963d3d inc dword ptr [0x109692f4] */
  { uint32_t _r=(r32((uint32_t)(0x109692f4)))+1; w32((uint32_t)(0x109692f4), (_r)); fl_inc(_r,32); }
  /* 10963d43 jmp 0x10963d83 */
  goto L_10963d83;
L_10963d45:;
  /* 10963d45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10963d47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963d49 jne 0x10963d77 */
  if (!C.zf) goto L_10963d77;
  /* 10963d4b cmp dword ptr [0x109692f4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x109692f4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963d51 jle 0x10963d10 */
  if ((C.zf||C.sf!=C.of)) goto L_10963d10;
  /* 10963d53 dec dword ptr [0x109692f4] */
  { uint32_t _r=(r32((uint32_t)(0x109692f4)))-1; w32((uint32_t)(0x109692f4), (_r)); fl_dec(_r,32); }
  /* 10963d59 cmp dword ptr [0x10969344], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10969344))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963d5f jne 0x10963d66 */
  if (!C.zf) goto L_10963d66;
  /* 10963d61 call 0x10963e97 */
  push32(0x10963d66u); f_10963e97();
L_10963d66:;
  /* 10963d66 call 0x10964258 */
  push32(0x10963d6bu); f_10964258();
  /* 10963d6b call 0x10963fcb */
  push32(0x10963d70u); f_10963fcb();
  /* 10963d70 call 0x10964720 */
  push32(0x10963d75u); f_10964720();
  /* 10963d75 jmp 0x10963d83 */
  goto L_10963d83;
L_10963d77:;
  /* 10963d77 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963d7a jne 0x10963d83 */
  if (!C.zf) goto L_10963d83;
  /* 10963d7c push ecx */
  push32((uint32_t)(ECX));
  /* 10963d7d call 0x10963ffc */
  push32(0x10963d82u); f_10963ffc();
  /* 10963d82 pop ecx */
  ECX = (pop32());
L_10963d83:;
  /* 10963d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963d85 pop eax */
  EAX = (pop32());
L_10963d86:;
  /* 10963d86 ret 0xc */
  ESPCHK(0x10963cb0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10963d89 (157 bytes, 73 insns) */
void f_10963d89(void) {
  FTRACE(0x10963d89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963d89 push ebp */
  push32((uint32_t)(EBP));
  /* 10963d8a mov ebp, esp */
  EBP = (ESP);
  /* 10963d8c push ebx */
  push32((uint32_t)(EBX));
  /* 10963d8d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10963d90 push esi */
  push32((uint32_t)(ESI));
  /* 10963d91 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10963d94 push edi */
  push32((uint32_t)(EDI));
  /* 10963d95 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10963d98 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10963d9a jne 0x10963da5 */
  if (!C.zf) goto L_10963da5;
  /* 10963d9c cmp dword ptr [0x109692f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109692f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963da3 jmp 0x10963dcb */
  goto L_10963dcb;
L_10963da5:;
  /* 10963da5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963da8 je 0x10963daf */
  if (C.zf) goto L_10963daf;
  /* 10963daa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963dad jne 0x10963dd1 */
  if (!C.zf) goto L_10963dd1;
L_10963daf:;
  /* 10963daf mov eax, dword ptr [0x1096987c] */
  EAX = (r32((uint32_t)(0x1096987c)));
  /* 10963db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963db6 je 0x10963dc1 */
  if (C.zf) goto L_10963dc1;
  /* 10963db8 push edi */
  push32((uint32_t)(EDI));
  /* 10963db9 push esi */
  push32((uint32_t)(ESI));
  /* 10963dba push ebx */
  push32((uint32_t)(EBX));
  /* 10963dbb call eax */
  call_ind((uint32_t)(EAX), 0x10963dbdu);
  /* 10963dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963dbf je 0x10963dcd */
  if (C.zf) goto L_10963dcd;
L_10963dc1:;
  /* 10963dc1 push edi */
  push32((uint32_t)(EDI));
  /* 10963dc2 push esi */
  push32((uint32_t)(ESI));
  /* 10963dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 10963dc4 call 0x10963cb0 */
  push32(0x10963dc9u); f_10963cb0();
  /* 10963dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10963dcb:;
  /* 10963dcb jne 0x10963dd1 */
  if (!C.zf) goto L_10963dd1;
L_10963dcd:;
  /* 10963dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10963dcf jmp 0x10963e1f */
  goto L_10963e1f;
L_10963dd1:;
  /* 10963dd1 push edi */
  push32((uint32_t)(EDI));
  /* 10963dd2 push esi */
  push32((uint32_t)(ESI));
  /* 10963dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 10963dd4 call 0x10961970 */
  push32(0x10963dd9u); f_10961970();
  /* 10963dd9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963ddc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10963ddf jne 0x10963ded */
  if (!C.zf) goto L_10963ded;
  /* 10963de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963de3 jne 0x10963e1c */
  if (!C.zf) goto L_10963e1c;
  /* 10963de5 push edi */
  push32((uint32_t)(EDI));
  /* 10963de6 push eax */
  push32((uint32_t)(EAX));
  /* 10963de7 push ebx */
  push32((uint32_t)(EBX));
  /* 10963de8 call 0x10963cb0 */
  push32(0x10963dedu); f_10963cb0();
L_10963ded:;
  /* 10963ded test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10963def je 0x10963df6 */
  if (C.zf) goto L_10963df6;
  /* 10963df1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963df4 jne 0x10963e1c */
  if (!C.zf) goto L_10963e1c;
L_10963df6:;
  /* 10963df6 push edi */
  push32((uint32_t)(EDI));
  /* 10963df7 push esi */
  push32((uint32_t)(ESI));
  /* 10963df8 push ebx */
  push32((uint32_t)(EBX));
  /* 10963df9 call 0x10963cb0 */
  push32(0x10963dfeu); f_10963cb0();
  /* 10963dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963e00 jne 0x10963e05 */
  if (!C.zf) goto L_10963e05;
  /* 10963e02 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10963e05:;
  /* 10963e05 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963e09 je 0x10963e1c */
  if (C.zf) goto L_10963e1c;
  /* 10963e0b mov eax, dword ptr [0x1096987c] */
  EAX = (r32((uint32_t)(0x1096987c)));
  /* 10963e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963e12 je 0x10963e1c */
  if (C.zf) goto L_10963e1c;
  /* 10963e14 push edi */
  push32((uint32_t)(EDI));
  /* 10963e15 push esi */
  push32((uint32_t)(ESI));
  /* 10963e16 push ebx */
  push32((uint32_t)(EBX));
  /* 10963e17 call eax */
  call_ind((uint32_t)(EAX), 0x10963e19u);
  /* 10963e19 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10963e1c:;
  /* 10963e1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10963e1f:;
  /* 10963e1f pop edi */
  EDI = (pop32());
  /* 10963e20 pop esi */
  ESI = (pop32());
  /* 10963e21 pop ebx */
  EBX = (pop32());
  /* 10963e22 pop ebp */
  EBP = (pop32());
  /* 10963e23 ret 0xc */
  ESPCHK(0x10963d89u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10963e26 (48 bytes, 15 insns) */
void f_10963e26(void) {
  FTRACE(0x10963e26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963e26 mov eax, dword ptr [0x10969300] */
  EAX = (r32((uint32_t)(0x10969300)));
  /* 10963e2b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963e2e je 0x10963e3d */
  if (C.zf) goto L_10963e3d;
  /* 10963e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963e32 jne 0x10963e42 */
  if (!C.zf) goto L_10963e42;
  /* 10963e34 cmp dword ptr [0x10969304], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10969304))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963e3b jne 0x10963e42 */
  if (!C.zf) goto L_10963e42;
L_10963e3d:;
  /* 10963e3d call 0x10964795 */
  push32(0x10963e42u); f_10964795();
L_10963e42:;
  /* 10963e42 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10963e46 call 0x109647ce */
  push32(0x10963e4bu); f_109647ce();
  /* 10963e4b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10963e50 call dword ptr [0x10968a34] */
  call_ind((uint32_t)(r32((uint32_t)(0x10968a34))), 0x10963e56u);
  /* 10963e56 pop ecx */
  ECX = (pop32());
  /* 10963e57 pop ecx */
  ECX = (pop32());
  /* 10963e58 ret  */
  ESPCHK(0x10963e26u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e59 @ 0x10963e59 (45 bytes, 12 insns) */
void f_10963e59(void) {
  FTRACE(0x10963e59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963e59 mov eax, dword ptr [0x10969874] */
  EAX = (r32((uint32_t)(0x10969874)));
  /* 10963e5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963e60 je 0x10963e64 */
  if (C.zf) goto L_10963e64;
  /* 10963e62 call eax */
  call_ind((uint32_t)(EAX), 0x10963e64u);
L_10963e64:;
  /* 10963e64 push 0x10968010 */
  push32((uint32_t)(0x10968010u));
  /* 10963e69 push 0x10968008 */
  push32((uint32_t)(0x10968008u));
  /* 10963e6e call 0x10963f5d */
  push32(0x10963e73u); f_10963f5d();
  /* 10963e73 push 0x10968004 */
  push32((uint32_t)(0x10968004u));
  /* 10963e78 push 0x10968000 */
  push32((uint32_t)(0x10968000u));
  /* 10963e7d call 0x10963f5d */
  push32(0x10963e82u); f_10963f5d();
  /* 10963e82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963e85 ret  */
  ESPCHK(0x10963e59u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10963e86 (17 bytes, 6 insns) */
void f_10963e86(void) {
  FTRACE(0x10963e86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963e88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963e8a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10963e8e call 0x10963ea6 */
  push32(0x10963e93u); f_10963ea6();
  /* 10963e93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963e96 ret  */
  ESPCHK(0x10963e86u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e97 @ 0x10963e97 (15 bytes, 6 insns) */
void f_10963e97(void) {
  FTRACE(0x10963e97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963e97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10963e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10963e9d call 0x10963ea6 */
  push32(0x10963ea2u); f_10963ea6();
  /* 10963ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10963ea5 ret  */
  ESPCHK(0x10963e97u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea6 @ 0x10963ea6 (163 bytes, 53 insns) */
void f_10963ea6(void) {
  FTRACE(0x10963ea6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963ea6 push edi */
  push32((uint32_t)(EDI));
  /* 10963ea7 call 0x10963f4b */
  push32(0x10963eacu); f_10963f4b();
  /* 10963eac push 1 */
  push32((uint32_t)(0x1u));
  /* 10963eae pop edi */
  EDI = (pop32());
  /* 10963eaf cmp dword ptr [0x10969348], edi */
  { uint32_t _a=(r32((uint32_t)(0x10969348))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963eb5 jne 0x10963ec8 */
  if (!C.zf) goto L_10963ec8;
  /* 10963eb7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10963ebb call dword ptr [0x1096708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096708c))), 0x10963ec1u);
  /* 10963ec1 push eax */
  push32((uint32_t)(EAX));
  /* 10963ec2 call dword ptr [0x10967088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967088))), 0x10963ec8u);
L_10963ec8:;
  /* 10963ec8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963ecd push ebx */
  push32((uint32_t)(EBX));
  /* 10963ece mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10963ed2 mov dword ptr [0x10969344], edi */
  w32((uint32_t)(0x10969344), (EDI));
  /* 10963ed8 mov byte ptr [0x10969340], bl */
  w8((uint32_t)(0x10969340), (BL));
  /* 10963ede jne 0x10963f1c */
  if (!C.zf) goto L_10963f1c;
  /* 10963ee0 mov eax, dword ptr [0x10969870] */
  EAX = (r32((uint32_t)(0x10969870)));
  /* 10963ee5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963ee7 je 0x10963f0b */
  if (C.zf) goto L_10963f0b;
  /* 10963ee9 mov ecx, dword ptr [0x1096986c] */
  ECX = (r32((uint32_t)(0x1096986c)));
  /* 10963eef push esi */
  push32((uint32_t)(ESI));
  /* 10963ef0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10963ef3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963ef5 jb 0x10963f0a */
  if (C.cf) goto L_10963f0a;
L_10963ef7:;
  /* 10963ef7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10963ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963efb je 0x10963eff */
  if (C.zf) goto L_10963eff;
  /* 10963efd call eax */
  call_ind((uint32_t)(EAX), 0x10963effu);
L_10963eff:;
  /* 10963eff sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10963f02 cmp esi, dword ptr [0x10969870] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10969870))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963f08 jae 0x10963ef7 */
  if (!C.cf) goto L_10963ef7;
L_10963f0a:;
  /* 10963f0a pop esi */
  ESI = (pop32());
L_10963f0b:;
  /* 10963f0b push 0x10968018 */
  push32((uint32_t)(0x10968018u));
  /* 10963f10 push 0x10968014 */
  push32((uint32_t)(0x10968014u));
  /* 10963f15 call 0x10963f5d */
  push32(0x10963f1au); f_10963f5d();
  /* 10963f1a pop ecx */
  ECX = (pop32());
  /* 10963f1b pop ecx */
  ECX = (pop32());
L_10963f1c:;
  /* 10963f1c push 0x10968020 */
  push32((uint32_t)(0x10968020u));
  /* 10963f21 push 0x1096801c */
  push32((uint32_t)(0x1096801cu));
  /* 10963f26 call 0x10963f5d */
  push32(0x10963f2bu); f_10963f5d();
  /* 10963f2b pop ecx */
  ECX = (pop32());
  /* 10963f2c pop ecx */
  ECX = (pop32());
  /* 10963f2d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10963f2f pop ebx */
  EBX = (pop32());
  /* 10963f30 je 0x10963f39 */
  if (C.zf) goto L_10963f39;
  /* 10963f32 call 0x10963f54 */
  push32(0x10963f37u); f_10963f54();
  /* 10963f37 pop edi */
  EDI = (pop32());
  /* 10963f38 ret  */
  ESPCHK(0x10963ea6u, _esp0);
  ESP += 4; return;
L_10963f39:;
  /* 10963f39 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10963f3d mov dword ptr [0x10969348], edi */
  w32((uint32_t)(0x10969348), (EDI));
  /* 10963f43 call dword ptr [0x10967084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967084))), 0x10963f49u);
  /* 10963f49 pop edi */
  EDI = (pop32());
  /* 10963f4a ret  */
  ESPCHK(0x10963ea6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f4b @ 0x10963f4b (9 bytes, 4 insns) */
void f_10963f4b(void) {
  FTRACE(0x10963f4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963f4b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10963f4d call 0x109649b6 */
  push32(0x10963f52u); f_109649b6();
  /* 10963f52 pop ecx */
  ECX = (pop32());
  /* 10963f53 ret  */
  ESPCHK(0x10963f4bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f54 @ 0x10963f54 (9 bytes, 4 insns) */
void f_10963f54(void) {
  FTRACE(0x10963f54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963f54 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10963f56 call 0x10964a17 */
  push32(0x10963f5bu); f_10964a17();
  /* 10963f5b pop ecx */
  ECX = (pop32());
  /* 10963f5c ret  */
  ESPCHK(0x10963f54u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f5d @ 0x10963f5d (26 bytes, 12 insns) */
void f_10963f5d(void) {
  FTRACE(0x10963f5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963f5d push esi */
  push32((uint32_t)(ESI));
  /* 10963f5e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10963f62:;
  /* 10963f62 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963f66 jae 0x10963f75 */
  if (!C.cf) goto L_10963f75;
  /* 10963f68 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10963f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963f6c je 0x10963f70 */
  if (C.zf) goto L_10963f70;
  /* 10963f6e call eax */
  call_ind((uint32_t)(EAX), 0x10963f70u);
L_10963f70:;
  /* 10963f70 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10963f73 jmp 0x10963f62 */
  goto L_10963f62;
L_10963f75:;
  /* 10963f75 pop esi */
  ESI = (pop32());
  /* 10963f76 ret  */
  ESPCHK(0x10963f5du, _esp0);
  ESP += 4; return;
}

/* FUN_10003f77 @ 0x10963f77 (84 bytes, 32 insns) */
void f_10963f77(void) {
  FTRACE(0x10963f77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963f77 push esi */
  push32((uint32_t)(ESI));
  /* 10963f78 call 0x10964921 */
  push32(0x10963f7du); f_10964921();
  /* 10963f7d call dword ptr [0x10967000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967000))), 0x10963f83u);
  /* 10963f83 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963f86 mov dword ptr [0x10968a38], eax */
  w32((uint32_t)(0x10968a38), (EAX));
  /* 10963f8b je 0x10963fc7 */
  if (C.zf) goto L_10963fc7;
  /* 10963f8d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10963f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10963f91 call 0x10964a2c */
  push32(0x10963f96u); f_10964a2c();
  /* 10963f96 mov esi, eax */
  ESI = (EAX);
  /* 10963f98 pop ecx */
  ECX = (pop32());
  /* 10963f99 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10963f9b pop ecx */
  ECX = (pop32());
  /* 10963f9c je 0x10963fc7 */
  if (C.zf) goto L_10963fc7;
  /* 10963f9e push esi */
  push32((uint32_t)(ESI));
  /* 10963f9f push dword ptr [0x10968a38] */
  push32((uint32_t)(r32((uint32_t)(0x10968a38))));
  /* 10963fa5 call dword ptr [0x10967094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967094))), 0x10963fabu);
  /* 10963fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10963fad je 0x10963fc7 */
  if (C.zf) goto L_10963fc7;
  /* 10963faf push esi */
  push32((uint32_t)(ESI));
  /* 10963fb0 call 0x10963fe9 */
  push32(0x10963fb5u); f_10963fe9();
  /* 10963fb5 pop ecx */
  ECX = (pop32());
  /* 10963fb6 call dword ptr [0x10967090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967090))), 0x10963fbcu);
  /* 10963fbc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10963fc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10963fc2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10963fc4 pop eax */
  EAX = (pop32());
  /* 10963fc5 pop esi */
  ESI = (pop32());
  /* 10963fc6 ret  */
  ESPCHK(0x10963f77u, _esp0);
  ESP += 4; return;
L_10963fc7:;
  /* 10963fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10963fc9 pop esi */
  ESI = (pop32());
  /* 10963fca ret  */
  ESPCHK(0x10963f77u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fcb @ 0x10963fcb (30 bytes, 8 insns) */
void f_10963fcb(void) {
  FTRACE(0x10963fcbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963fcb call 0x1096494a */
  push32(0x10963fd0u); f_1096494a();
  /* 10963fd0 mov eax, dword ptr [0x10968a38] */
  EAX = (r32((uint32_t)(0x10968a38)));
  /* 10963fd5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10963fd8 je 0x10963fe8 */
  if (C.zf) goto L_10963fe8;
  /* 10963fda push eax */
  push32((uint32_t)(EAX));
  /* 10963fdb call dword ptr [0x10967004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967004))), 0x10963fe1u);
  /* 10963fe1 or dword ptr [0x10968a38], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10968a38)))|(0xffffffffu); w32((uint32_t)(0x10968a38), (_r)); fl_logic(_r,32); }
L_10963fe8:;
  /* 10963fe8 ret  */
  ESPCHK(0x10963fcbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe9 @ 0x10963fe9 (19 bytes, 4 insns) */
void f_10963fe9(void) {
  FTRACE(0x10963fe9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963fe9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10963fed mov dword ptr [eax + 0x50], 0x10968bb8 */
  w32((uint32_t)(EAX + 0x50), (0x10968bb8u));
  /* 10963ff4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10963ffb ret  */
  ESPCHK(0x10963fe9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ffc @ 0x10963ffc (160 bytes, 62 insns) */
void f_10963ffc(void) {
  FTRACE(0x10963ffcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10963ffc mov eax, dword ptr [0x10968a38] */
  EAX = (r32((uint32_t)(0x10968a38)));
  /* 10964001 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964004 je 0x1096409b */
  if (C.zf) goto L_1096409b;
  /* 1096400a push esi */
  push32((uint32_t)(ESI));
  /* 1096400b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1096400f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964011 jne 0x10964020 */
  if (!C.zf) goto L_10964020;
  /* 10964013 push eax */
  push32((uint32_t)(EAX));
  /* 10964014 call dword ptr [0x10967098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967098))), 0x1096401au);
  /* 1096401a mov esi, eax */
  ESI = (EAX);
  /* 1096401c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1096401e je 0x1096408c */
  if (C.zf) goto L_1096408c;
L_10964020:;
  /* 10964020 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10964023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964025 je 0x1096402e */
  if (C.zf) goto L_1096402e;
  /* 10964027 push eax */
  push32((uint32_t)(EAX));
  /* 10964028 call 0x10964ab9 */
  push32(0x1096402du); f_10964ab9();
  /* 1096402d pop ecx */
  ECX = (pop32());
L_1096402e:;
  /* 1096402e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10964031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964033 je 0x1096403c */
  if (C.zf) goto L_1096403c;
  /* 10964035 push eax */
  push32((uint32_t)(EAX));
  /* 10964036 call 0x10964ab9 */
  push32(0x1096403bu); f_10964ab9();
  /* 1096403b pop ecx */
  ECX = (pop32());
L_1096403c:;
  /* 1096403c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1096403f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964041 je 0x1096404a */
  if (C.zf) goto L_1096404a;
  /* 10964043 push eax */
  push32((uint32_t)(EAX));
  /* 10964044 call 0x10964ab9 */
  push32(0x10964049u); f_10964ab9();
  /* 10964049 pop ecx */
  ECX = (pop32());
L_1096404a:;
  /* 1096404a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 1096404d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096404f je 0x10964058 */
  if (C.zf) goto L_10964058;
  /* 10964051 push eax */
  push32((uint32_t)(EAX));
  /* 10964052 call 0x10964ab9 */
  push32(0x10964057u); f_10964ab9();
  /* 10964057 pop ecx */
  ECX = (pop32());
L_10964058:;
  /* 10964058 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1096405b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096405d je 0x10964066 */
  if (C.zf) goto L_10964066;
  /* 1096405f push eax */
  push32((uint32_t)(EAX));
  /* 10964060 call 0x10964ab9 */
  push32(0x10964065u); f_10964ab9();
  /* 10964065 pop ecx */
  ECX = (pop32());
L_10964066:;
  /* 10964066 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10964069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096406b je 0x10964074 */
  if (C.zf) goto L_10964074;
  /* 1096406d push eax */
  push32((uint32_t)(EAX));
  /* 1096406e call 0x10964ab9 */
  push32(0x10964073u); f_10964ab9();
  /* 10964073 pop ecx */
  ECX = (pop32());
L_10964074:;
  /* 10964074 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10964077 cmp eax, 0x10968bb8 */
  { uint32_t _a=(EAX),_b=(0x10968bb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096407c je 0x10964085 */
  if (C.zf) goto L_10964085;
  /* 1096407e push eax */
  push32((uint32_t)(EAX));
  /* 1096407f call 0x10964ab9 */
  push32(0x10964084u); f_10964ab9();
  /* 10964084 pop ecx */
  ECX = (pop32());
L_10964085:;
  /* 10964085 push esi */
  push32((uint32_t)(ESI));
  /* 10964086 call 0x10964ab9 */
  push32(0x1096408bu); f_10964ab9();
  /* 1096408b pop ecx */
  ECX = (pop32());
L_1096408c:;
  /* 1096408c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096408e push dword ptr [0x10968a38] */
  push32((uint32_t)(r32((uint32_t)(0x10968a38))));
  /* 10964094 call dword ptr [0x10967094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967094))), 0x1096409au);
  /* 1096409a pop esi */
  ESI = (pop32());
L_1096409b:;
  /* 1096409b ret  */
  ESPCHK(0x10963ffcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000409c @ 0x1096409c (444 bytes, 150 insns) */
void f_1096409c(void) {
  FTRACE(0x1096409cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1096409c push ebp */
  push32((uint32_t)(EBP));
  /* 1096409d mov ebp, esp */
  EBP = (ESP);
  /* 1096409f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109640a2 push ebx */
  push32((uint32_t)(EBX));
  /* 109640a3 push esi */
  push32((uint32_t)(ESI));
  /* 109640a4 push edi */
  push32((uint32_t)(EDI));
  /* 109640a5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109640aa call 0x10964b01 */
  push32(0x109640afu); f_10964b01();
  /* 109640af mov esi, eax */
  ESI = (EAX);
  /* 109640b1 pop ecx */
  ECX = (pop32());
  /* 109640b2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109640b4 jne 0x109640be */
  if (!C.zf) goto L_109640be;
  /* 109640b6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109640b8 call 0x10963e26 */
  push32(0x109640bdu); f_10963e26();
  /* 109640bd pop ecx */
  ECX = (pop32());
L_109640be:;
  /* 109640be mov dword ptr [0x10969760], esi */
  w32((uint32_t)(0x10969760), (ESI));
  /* 109640c4 mov dword ptr [0x10969860], 0x20 */
  w32((uint32_t)(0x10969860), (0x20u));
  /* 109640ce lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_109640d4:;
  /* 109640d4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109640d6 jae 0x109640f6 */
  if (!C.cf) goto L_109640f6;
  /* 109640d8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 109640dc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 109640df and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 109640e3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 109640e7 mov eax, dword ptr [0x10969760] */
  EAX = (r32((uint32_t)(0x10969760)));
  /* 109640ec add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109640ef add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109640f4 jmp 0x109640d4 */
  goto L_109640d4;
L_109640f6:;
  /* 109640f6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 109640f9 push eax */
  push32((uint32_t)(EAX));
  /* 109640fa call dword ptr [0x109670a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670a8))), 0x10964100u);
  /* 10964100 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10964105 je 0x109641dc */
  if (C.zf) goto L_109641dc;
  /* 1096410b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1096410e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964110 je 0x109641dc */
  if (C.zf) goto L_109641dc;
  /* 10964116 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10964118 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1096411b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1096411e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10964121 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10964126 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964128 jl 0x1096412c */
  if ((C.sf!=C.of)) goto L_1096412c;
  /* 1096412a mov edi, eax */
  EDI = (EAX);
L_1096412c:;
  /* 1096412c cmp dword ptr [0x10969860], edi */
  { uint32_t _a=(r32((uint32_t)(0x10969860))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964132 jge 0x1096418a */
  if ((C.sf==C.of)) goto L_1096418a;
  /* 10964134 mov esi, 0x10969764 */
  ESI = (0x10969764u);
L_10964139:;
  /* 10964139 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1096413e call 0x10964b01 */
  push32(0x10964143u); f_10964b01();
  /* 10964143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964145 pop ecx */
  ECX = (pop32());
  /* 10964146 je 0x10964184 */
  if (C.zf) goto L_10964184;
  /* 10964148 add dword ptr [0x10969860], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10969860))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10969860), (_r)); fl_add(_a,_b,_r,32); }
  /* 1096414f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10964151 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10964157:;
  /* 10964157 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964159 jae 0x10964177 */
  if (!C.cf) goto L_10964177;
  /* 1096415b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1096415f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10964162 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10964166 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1096416a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1096416c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096416f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964175 jmp 0x10964157 */
  goto L_10964157;
L_10964177:;
  /* 10964177 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096417a cmp dword ptr [0x10969860], edi */
  { uint32_t _a=(r32((uint32_t)(0x10969860))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964180 jl 0x10964139 */
  if ((C.sf!=C.of)) goto L_10964139;
  /* 10964182 jmp 0x1096418a */
  goto L_1096418a;
L_10964184:;
  /* 10964184 mov edi, dword ptr [0x10969860] */
  EDI = (r32((uint32_t)(0x10969860)));
L_1096418a:;
  /* 1096418a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1096418c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1096418e jle 0x109641dc */
  if ((C.zf||C.sf!=C.of)) goto L_109641dc;
L_10964190:;
  /* 10964190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10964193 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10964195 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964198 je 0x109641d2 */
  if (C.zf) goto L_109641d2;
  /* 1096419a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1096419c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1096419e je 0x109641d2 */
  if (C.zf) goto L_109641d2;
  /* 109641a0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 109641a2 jne 0x109641af */
  if (!C.zf) goto L_109641af;
  /* 109641a4 push ecx */
  push32((uint32_t)(ECX));
  /* 109641a5 call dword ptr [0x1096709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096709c))), 0x109641abu);
  /* 109641ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109641ad je 0x109641d2 */
  if (C.zf) goto L_109641d2;
L_109641af:;
  /* 109641af mov ecx, esi */
  ECX = (ESI);
  /* 109641b1 mov eax, esi */
  EAX = (ESI);
  /* 109641b3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109641b6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109641b9 mov ecx, dword ptr [ecx*4 + 0x10969760] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10969760)));
  /* 109641c0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 109641c3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 109641c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109641c9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 109641cb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109641cd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 109641cf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_109641d2:;
  /* 109641d2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 109641d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109641d7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 109641d8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109641da jl 0x10964190 */
  if ((C.sf!=C.of)) goto L_10964190;
L_109641dc:;
  /* 109641dc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_109641de:;
  /* 109641de mov ecx, dword ptr [0x10969760] */
  ECX = (r32((uint32_t)(0x10969760)));
  /* 109641e4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 109641e7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109641eb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 109641ee jne 0x1096423d */
  if (!C.zf) goto L_1096423d;
  /* 109641f0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 109641f2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 109641f6 jne 0x109641fd */
  if (!C.zf) goto L_109641fd;
  /* 109641f8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 109641fa pop eax */
  EAX = (pop32());
  /* 109641fb jmp 0x10964207 */
  goto L_10964207;
L_109641fd:;
  /* 109641fd mov eax, ebx */
  EAX = (EBX);
  /* 109641ff dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10964200 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10964202 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964204 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10964207:;
  /* 10964207 push eax */
  push32((uint32_t)(EAX));
  /* 10964208 call dword ptr [0x109670a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670a4))), 0x1096420eu);
  /* 1096420e mov edi, eax */
  EDI = (EAX);
  /* 10964210 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964213 je 0x1096422c */
  if (C.zf) goto L_1096422c;
  /* 10964215 push edi */
  push32((uint32_t)(EDI));
  /* 10964216 call dword ptr [0x1096709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096709c))), 0x1096421cu);
  /* 1096421c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096421e je 0x1096422c */
  if (C.zf) goto L_1096422c;
  /* 10964220 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10964225 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10964227 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096422a jne 0x10964232 */
  if (!C.zf) goto L_10964232;
L_1096422c:;
  /* 1096422c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10964230 jmp 0x10964241 */
  goto L_10964241;
L_10964232:;
  /* 10964232 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964235 jne 0x10964241 */
  if (!C.zf) goto L_10964241;
  /* 10964237 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1096423b jmp 0x10964241 */
  goto L_10964241;
L_1096423d:;
  /* 1096423d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10964241:;
  /* 10964241 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10964242 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964245 jl 0x109641de */
  if ((C.sf!=C.of)) goto L_109641de;
  /* 10964247 push dword ptr [0x10969860] */
  push32((uint32_t)(r32((uint32_t)(0x10969860))));
  /* 1096424d call dword ptr [0x109670a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670a0))), 0x10964253u);
  /* 10964253 pop edi */
  EDI = (pop32());
  /* 10964254 pop esi */
  ESI = (pop32());
  /* 10964255 pop ebx */
  EBX = (pop32());
  /* 10964256 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10964257 ret  */
  ESPCHK(0x1096409cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004258 @ 0x10964258 (84 bytes, 33 insns) */
void f_10964258(void) {
  FTRACE(0x10964258u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964258 push ebx */
  push32((uint32_t)(EBX));
  /* 10964259 push esi */
  push32((uint32_t)(ESI));
  /* 1096425a push edi */
  push32((uint32_t)(EDI));
  /* 1096425b mov esi, 0x10969760 */
  ESI = (0x10969760u);
L_10964260:;
  /* 10964260 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10964262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964264 je 0x1096429d */
  if (C.zf) goto L_1096429d;
  /* 10964266 mov edi, eax */
  EDI = (EAX);
  /* 10964268 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096426d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096426f jae 0x10964292 */
  if (!C.cf) goto L_10964292;
  /* 10964271 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10964274:;
  /* 10964274 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964278 je 0x10964281 */
  if (C.zf) goto L_10964281;
  /* 1096427a push ebx */
  push32((uint32_t)(EBX));
  /* 1096427b call dword ptr [0x10967074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967074))), 0x10964281u);
L_10964281:;
  /* 10964281 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10964283 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10964286 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096428b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096428e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964290 jb 0x10964274 */
  if (C.cf) goto L_10964274;
L_10964292:;
  /* 10964292 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10964294 call 0x10964ab9 */
  push32(0x10964299u); f_10964ab9();
  /* 10964299 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1096429c pop ecx */
  ECX = (pop32());
L_1096429d:;
  /* 1096429d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109642a0 cmp esi, 0x10969860 */
  { uint32_t _a=(ESI),_b=(0x10969860u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109642a6 jl 0x10964260 */
  if ((C.sf!=C.of)) goto L_10964260;
  /* 109642a8 pop edi */
  EDI = (pop32());
  /* 109642a9 pop esi */
  ESI = (pop32());
  /* 109642aa pop ebx */
  EBX = (pop32());
  /* 109642ab ret  */
  ESPCHK(0x10964258u, _esp0);
  ESP += 4; return;
}

/* FUN_100042ac @ 0x109642ac (185 bytes, 71 insns) */
void f_109642ac(void) {
  FTRACE(0x109642acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109642ac push ebx */
  push32((uint32_t)(EBX));
  /* 109642ad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109642af cmp dword ptr [0x10969868], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10969868))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109642b5 push esi */
  push32((uint32_t)(ESI));
  /* 109642b6 push edi */
  push32((uint32_t)(EDI));
  /* 109642b7 jne 0x109642be */
  if (!C.zf) goto L_109642be;
  /* 109642b9 call 0x109650d3 */
  push32(0x109642beu); f_109650d3();
L_109642be:;
  /* 109642be mov esi, dword ptr [0x109692f8] */
  ESI = (r32((uint32_t)(0x109692f8)));
  /* 109642c4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_109642c6:;
  /* 109642c6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109642c8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109642ca je 0x109642de */
  if (C.zf) goto L_109642de;
  /* 109642cc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109642ce je 0x109642d1 */
  if (C.zf) goto L_109642d1;
  /* 109642d0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_109642d1:;
  /* 109642d1 push esi */
  push32((uint32_t)(ESI));
  /* 109642d2 call 0x10964c80 */
  push32(0x109642d7u); f_10964c80();
  /* 109642d7 pop ecx */
  ECX = (pop32());
  /* 109642d8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 109642dc jmp 0x109642c6 */
  goto L_109642c6;
L_109642de:;
  /* 109642de lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 109642e5 push eax */
  push32((uint32_t)(EAX));
  /* 109642e6 call 0x10964b01 */
  push32(0x109642ebu); f_10964b01();
  /* 109642eb mov esi, eax */
  ESI = (EAX);
  /* 109642ed pop ecx */
  ECX = (pop32());
  /* 109642ee cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109642f0 mov dword ptr [0x10969328], esi */
  w32((uint32_t)(0x10969328), (ESI));
  /* 109642f6 jne 0x10964300 */
  if (!C.zf) goto L_10964300;
  /* 109642f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 109642fa call 0x10963e26 */
  push32(0x109642ffu); f_10963e26();
  /* 109642ff pop ecx */
  ECX = (pop32());
L_10964300:;
  /* 10964300 mov edi, dword ptr [0x109692f8] */
  EDI = (r32((uint32_t)(0x109692f8)));
  /* 10964306 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964308 je 0x10964343 */
  if (C.zf) goto L_10964343;
  /* 1096430a push ebp */
  push32((uint32_t)(EBP));
L_1096430b:;
  /* 1096430b push edi */
  push32((uint32_t)(EDI));
  /* 1096430c call 0x10964c80 */
  push32(0x10964311u); f_10964c80();
  /* 10964311 mov ebp, eax */
  EBP = (EAX);
  /* 10964313 pop ecx */
  ECX = (pop32());
  /* 10964314 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10964315 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964318 je 0x1096433c */
  if (C.zf) goto L_1096433c;
  /* 1096431a push ebp */
  push32((uint32_t)(EBP));
  /* 1096431b call 0x10964b01 */
  push32(0x10964320u); f_10964b01();
  /* 10964320 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964322 pop ecx */
  ECX = (pop32());
  /* 10964323 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10964325 jne 0x1096432f */
  if (!C.zf) goto L_1096432f;
  /* 10964327 push 9 */
  push32((uint32_t)(0x9u));
  /* 10964329 call 0x10963e26 */
  push32(0x1096432eu); f_10963e26();
  /* 1096432e pop ecx */
  ECX = (pop32());
L_1096432f:;
  /* 1096432f push edi */
  push32((uint32_t)(EDI));
  /* 10964330 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10964332 call 0x10964b90 */
  push32(0x10964337u); f_10964b90();
  /* 10964337 pop ecx */
  ECX = (pop32());
  /* 10964338 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096433b pop ecx */
  ECX = (pop32());
L_1096433c:;
  /* 1096433c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096433e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964340 jne 0x1096430b */
  if (!C.zf) goto L_1096430b;
  /* 10964342 pop ebp */
  EBP = (pop32());
L_10964343:;
  /* 10964343 push dword ptr [0x109692f8] */
  push32((uint32_t)(r32((uint32_t)(0x109692f8))));
  /* 10964349 call 0x10964ab9 */
  push32(0x1096434eu); f_10964ab9();
  /* 1096434e pop ecx */
  ECX = (pop32());
  /* 1096434f mov dword ptr [0x109692f8], ebx */
  w32((uint32_t)(0x109692f8), (EBX));
  /* 10964355 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10964357 pop edi */
  EDI = (pop32());
  /* 10964358 pop esi */
  ESI = (pop32());
  /* 10964359 mov dword ptr [0x10969864], 1 */
  w32((uint32_t)(0x10969864), (0x1u));
  /* 10964363 pop ebx */
  EBX = (pop32());
  /* 10964364 ret  */
  ESPCHK(0x109642acu, _esp0);
  ESP += 4; return;
}

/* FUN_10004365 @ 0x10964365 (153 bytes, 62 insns) */
void f_10964365(void) {
  FTRACE(0x10964365u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964365 push ebp */
  push32((uint32_t)(EBP));
  /* 10964366 mov ebp, esp */
  EBP = (ESP);
  /* 10964368 push ecx */
  push32((uint32_t)(ECX));
  /* 10964369 push ecx */
  push32((uint32_t)(ECX));
  /* 1096436a push ebx */
  push32((uint32_t)(EBX));
  /* 1096436b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1096436d cmp dword ptr [0x10969868], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10969868))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964373 push esi */
  push32((uint32_t)(ESI));
  /* 10964374 push edi */
  push32((uint32_t)(EDI));
  /* 10964375 jne 0x1096437c */
  if (!C.zf) goto L_1096437c;
  /* 10964377 call 0x109650d3 */
  push32(0x1096437cu); f_109650d3();
L_1096437c:;
  /* 1096437c mov esi, 0x1096934c */
  ESI = (0x1096934cu);
  /* 10964381 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10964386 push esi */
  push32((uint32_t)(ESI));
  /* 10964387 push ebx */
  push32((uint32_t)(EBX));
  /* 10964388 call dword ptr [0x10967070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967070))), 0x1096438eu);
  /* 1096438e mov eax, dword ptr [0x10969878] */
  EAX = (r32((uint32_t)(0x10969878)));
  /* 10964393 mov dword ptr [0x10969338], esi */
  w32((uint32_t)(0x10969338), (ESI));
  /* 10964399 mov edi, esi */
  EDI = (ESI);
  /* 1096439b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1096439d je 0x109643a1 */
  if (C.zf) goto L_109643a1;
  /* 1096439f mov edi, eax */
  EDI = (EAX);
L_109643a1:;
  /* 109643a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109643a4 push eax */
  push32((uint32_t)(EAX));
  /* 109643a5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 109643a8 push eax */
  push32((uint32_t)(EAX));
  /* 109643a9 push ebx */
  push32((uint32_t)(EBX));
  /* 109643aa push ebx */
  push32((uint32_t)(EBX));
  /* 109643ab push edi */
  push32((uint32_t)(EDI));
  /* 109643ac call 0x109643fe */
  push32(0x109643b1u); f_109643fe();
  /* 109643b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109643b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109643b7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 109643ba push eax */
  push32((uint32_t)(EAX));
  /* 109643bb call 0x10964b01 */
  push32(0x109643c0u); f_10964b01();
  /* 109643c0 mov esi, eax */
  ESI = (EAX);
  /* 109643c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109643c5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109643c7 jne 0x109643d1 */
  if (!C.zf) goto L_109643d1;
  /* 109643c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 109643cb call 0x10963e26 */
  push32(0x109643d0u); f_10963e26();
  /* 109643d0 pop ecx */
  ECX = (pop32());
L_109643d1:;
  /* 109643d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109643d4 push eax */
  push32((uint32_t)(EAX));
  /* 109643d5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 109643d8 push eax */
  push32((uint32_t)(EAX));
  /* 109643d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109643dc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 109643df push eax */
  push32((uint32_t)(EAX));
  /* 109643e0 push esi */
  push32((uint32_t)(ESI));
  /* 109643e1 push edi */
  push32((uint32_t)(EDI));
  /* 109643e2 call 0x109643fe */
  push32(0x109643e7u); f_109643fe();
  /* 109643e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109643ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109643ed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 109643ee mov dword ptr [0x10969320], esi */
  w32((uint32_t)(0x10969320), (ESI));
  /* 109643f4 pop edi */
  EDI = (pop32());
  /* 109643f5 pop esi */
  ESI = (pop32());
  /* 109643f6 mov dword ptr [0x1096931c], eax */
  w32((uint32_t)(0x1096931c), (EAX));
  /* 109643fb pop ebx */
  EBX = (pop32());
  /* 109643fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109643fd ret  */
  ESPCHK(0x10964365u, _esp0);
  ESP += 4; return;
}

/* FUN_100043fe @ 0x109643fe (436 bytes, 187 insns) */
void f_109643fe(void) {
  FTRACE(0x109643feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109643fe push ebp */
  push32((uint32_t)(EBP));
  /* 109643ff mov ebp, esp */
  EBP = (ESP);
  /* 10964401 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10964404 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10964407 push ebx */
  push32((uint32_t)(EBX));
  /* 10964408 push esi */
  push32((uint32_t)(ESI));
  /* 10964409 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1096440c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1096440f push edi */
  push32((uint32_t)(EDI));
  /* 10964410 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10964413 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10964419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1096441c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1096441e je 0x10964428 */
  if (C.zf) goto L_10964428;
  /* 10964420 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10964422 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10964425 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10964428:;
  /* 10964428 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1096442b jne 0x10964471 */
  if (!C.zf) goto L_10964471;
L_1096442d:;
  /* 1096442d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10964430 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964431 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964434 je 0x1096445f */
  if (C.zf) goto L_1096445f;
  /* 10964436 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10964438 je 0x1096445f */
  if (C.zf) goto L_1096445f;
  /* 1096443a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1096443d test byte ptr [edx + 0x10969641], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10969641)))&(0x4u); fl_logic(_r,8); }
  /* 10964444 je 0x10964452 */
  if (C.zf) goto L_10964452;
  /* 10964446 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10964448 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1096444a je 0x10964452 */
  if (C.zf) goto L_10964452;
  /* 1096444c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1096444e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10964450 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10964451 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10964452:;
  /* 10964452 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10964454 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964456 je 0x1096442d */
  if (C.zf) goto L_1096442d;
  /* 10964458 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1096445a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1096445c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1096445d jmp 0x1096442d */
  goto L_1096442d;
L_1096445f:;
  /* 1096445f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10964461 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964463 je 0x10964469 */
  if (C.zf) goto L_10964469;
  /* 10964465 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10964468 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10964469:;
  /* 10964469 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1096446c jne 0x109644b4 */
  if (!C.zf) goto L_109644b4;
  /* 1096446e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1096446f jmp 0x109644b4 */
  goto L_109644b4;
L_10964471:;
  /* 10964471 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10964473 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964475 je 0x1096447c */
  if (C.zf) goto L_1096447c;
  /* 10964477 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10964479 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1096447b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1096447c:;
  /* 1096447c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1096447e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1096447f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10964482 test byte ptr [ebx + 0x10969641], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10969641)))&(0x4u); fl_logic(_r,8); }
  /* 10964489 je 0x10964497 */
  if (C.zf) goto L_10964497;
  /* 1096448b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1096448d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1096448f je 0x10964496 */
  if (C.zf) goto L_10964496;
  /* 10964491 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10964493 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10964495 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10964496:;
  /* 10964496 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10964497:;
  /* 10964497 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1096449a je 0x109644a5 */
  if (C.zf) goto L_109644a5;
  /* 1096449c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1096449e je 0x109644a9 */
  if (C.zf) goto L_109644a9;
  /* 109644a0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644a3 jne 0x10964471 */
  if (!C.zf) goto L_10964471;
L_109644a5:;
  /* 109644a5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109644a7 jne 0x109644ac */
  if (!C.zf) goto L_109644ac;
L_109644a9:;
  /* 109644a9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 109644aa jmp 0x109644b4 */
  goto L_109644b4;
L_109644ac:;
  /* 109644ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109644ae je 0x109644b4 */
  if (C.zf) goto L_109644b4;
  /* 109644b0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_109644b4:;
  /* 109644b4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_109644b8:;
  /* 109644b8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644bb je 0x109645a1 */
  if (C.zf) goto L_109645a1;
L_109644c1:;
  /* 109644c1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109644c3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644c6 je 0x109644cd */
  if (C.zf) goto L_109644cd;
  /* 109644c8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644cb jne 0x109644d0 */
  if (!C.zf) goto L_109644d0;
L_109644cd:;
  /* 109644cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109644ce jmp 0x109644c1 */
  goto L_109644c1;
L_109644d0:;
  /* 109644d0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644d3 je 0x109645a1 */
  if (C.zf) goto L_109645a1;
  /* 109644d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109644db je 0x109644e5 */
  if (C.zf) goto L_109644e5;
  /* 109644dd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 109644df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109644e2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_109644e5:;
  /* 109644e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109644e8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_109644ea:;
  /* 109644ea mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 109644f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_109644f3:;
  /* 109644f3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644f6 jne 0x109644fc */
  if (!C.zf) goto L_109644fc;
  /* 109644f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109644f9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 109644fa jmp 0x109644f3 */
  goto L_109644f3;
L_109644fc:;
  /* 109644fc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109644ff jne 0x1096452d */
  if (!C.zf) goto L_1096452d;
  /* 10964501 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10964504 jne 0x1096452b */
  if (!C.zf) goto L_1096452b;
  /* 10964506 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10964508 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096450b je 0x1096451a */
  if (C.zf) goto L_1096451a;
  /* 1096450d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964511 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10964514 jne 0x1096451a */
  if (!C.zf) goto L_1096451a;
  /* 10964516 mov eax, edx */
  EAX = (EDX);
  /* 10964518 jmp 0x1096451d */
  goto L_1096451d;
L_1096451a:;
  /* 1096451a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1096451d:;
  /* 1096451d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10964520 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10964522 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964525 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10964528 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1096452b:;
  /* 1096452b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1096452d:;
  /* 1096452d mov edx, ebx */
  EDX = (EBX);
  /* 1096452f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10964530 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10964532 je 0x10964542 */
  if (C.zf) goto L_10964542;
  /* 10964534 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10964535:;
  /* 10964535 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964537 je 0x1096453d */
  if (C.zf) goto L_1096453d;
  /* 10964539 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1096453c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1096453d:;
  /* 1096453d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1096453f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10964540 jne 0x10964535 */
  if (!C.zf) goto L_10964535;
L_10964542:;
  /* 10964542 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10964544 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10964546 je 0x10964592 */
  if (C.zf) goto L_10964592;
  /* 10964548 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096454c jne 0x10964558 */
  if (!C.zf) goto L_10964558;
  /* 1096454e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964551 je 0x10964592 */
  if (C.zf) goto L_10964592;
  /* 10964553 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964556 je 0x10964592 */
  if (C.zf) goto L_10964592;
L_10964558:;
  /* 10964558 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096455c je 0x1096458c */
  if (C.zf) goto L_1096458c;
  /* 1096455e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964560 je 0x1096457b */
  if (C.zf) goto L_1096457b;
  /* 10964562 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10964565 test byte ptr [ebx + 0x10969641], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10969641)))&(0x4u); fl_logic(_r,8); }
  /* 1096456c je 0x10964574 */
  if (C.zf) goto L_10964574;
  /* 1096456e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10964570 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10964571 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964572 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10964574:;
  /* 10964574 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10964576 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10964578 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10964579 jmp 0x1096458a */
  goto L_1096458a;
L_1096457b:;
  /* 1096457b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1096457e test byte ptr [edx + 0x10969641], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10969641)))&(0x4u); fl_logic(_r,8); }
  /* 10964585 je 0x1096458a */
  if (C.zf) goto L_1096458a;
  /* 10964587 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964588 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1096458a:;
  /* 1096458a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1096458c:;
  /* 1096458c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1096458d jmp 0x109644ea */
  goto L_109644ea;
L_10964592:;
  /* 10964592 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964594 je 0x1096459a */
  if (C.zf) goto L_1096459a;
  /* 10964596 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10964599 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1096459a:;
  /* 1096459a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1096459c jmp 0x109644b8 */
  goto L_109644b8;
L_109645a1:;
  /* 109645a1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109645a3 je 0x109645a8 */
  if (C.zf) goto L_109645a8;
  /* 109645a5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_109645a8:;
  /* 109645a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109645ab pop edi */
  EDI = (pop32());
  /* 109645ac pop esi */
  ESI = (pop32());
  /* 109645ad pop ebx */
  EBX = (pop32());
  /* 109645ae inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 109645b0 pop ebp */
  EBP = (pop32());
  /* 109645b1 ret  */
  ESPCHK(0x109643feu, _esp0);
  ESP += 4; return;
}

/* FUN_100045b2 @ 0x109645b2 (306 bytes, 132 insns) */
void f_109645b2(void) {
  FTRACE(0x109645b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109645b2 push ecx */
  push32((uint32_t)(ECX));
  /* 109645b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109645b4 mov eax, dword ptr [0x10969450] */
  EAX = (r32((uint32_t)(0x10969450)));
  /* 109645b9 push ebx */
  push32((uint32_t)(EBX));
  /* 109645ba push ebp */
  push32((uint32_t)(EBP));
  /* 109645bb mov ebp, dword ptr [0x1096705c] */
  EBP = (r32((uint32_t)(0x1096705c)));
  /* 109645c1 push esi */
  push32((uint32_t)(ESI));
  /* 109645c2 push edi */
  push32((uint32_t)(EDI));
  /* 109645c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109645c5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109645c7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109645c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109645cb jne 0x10964600 */
  if (!C.zf) goto L_10964600;
  /* 109645cd call ebp */
  call_ind((uint32_t)(EBP), 0x109645cfu);
  /* 109645cf mov esi, eax */
  ESI = (EAX);
  /* 109645d1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109645d3 je 0x109645e1 */
  if (C.zf) goto L_109645e1;
  /* 109645d5 mov dword ptr [0x10969450], 1 */
  w32((uint32_t)(0x10969450), (0x1u));
  /* 109645df jmp 0x10964609 */
  goto L_10964609;
L_109645e1:;
  /* 109645e1 call dword ptr [0x1096706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096706c))), 0x109645e7u);
  /* 109645e7 mov edi, eax */
  EDI = (EAX);
  /* 109645e9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109645eb je 0x109646db */
  if (C.zf) goto L_109646db;
  /* 109645f1 mov dword ptr [0x10969450], 2 */
  w32((uint32_t)(0x10969450), (0x2u));
  /* 109645fb jmp 0x1096468f */
  goto L_1096468f;
L_10964600:;
  /* 10964600 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964603 jne 0x1096468a */
  if (!C.zf) goto L_1096468a;
L_10964609:;
  /* 10964609 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096460b jne 0x10964619 */
  if (!C.zf) goto L_10964619;
  /* 1096460d call ebp */
  call_ind((uint32_t)(EBP), 0x1096460fu);
  /* 1096460f mov esi, eax */
  ESI = (EAX);
  /* 10964611 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964613 je 0x109646db */
  if (C.zf) goto L_109646db;
L_10964619:;
  /* 10964619 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1096461c mov eax, esi */
  EAX = (ESI);
  /* 1096461e je 0x1096462e */
  if (C.zf) goto L_1096462e;
L_10964620:;
  /* 10964620 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964621 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964622 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10964625 jne 0x10964620 */
  if (!C.zf) goto L_10964620;
  /* 10964627 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964628 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964629 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1096462c jne 0x10964620 */
  if (!C.zf) goto L_10964620;
L_1096462e:;
  /* 1096462e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964630 mov edi, dword ptr [0x10967064] */
  EDI = (r32((uint32_t)(0x10967064)));
  /* 10964636 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10964638 push ebx */
  push32((uint32_t)(EBX));
  /* 10964639 push ebx */
  push32((uint32_t)(EBX));
  /* 1096463a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1096463b push ebx */
  push32((uint32_t)(EBX));
  /* 1096463c push ebx */
  push32((uint32_t)(EBX));
  /* 1096463d push eax */
  push32((uint32_t)(EAX));
  /* 1096463e push esi */
  push32((uint32_t)(ESI));
  /* 1096463f push ebx */
  push32((uint32_t)(EBX));
  /* 10964640 push ebx */
  push32((uint32_t)(EBX));
  /* 10964641 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10964645 call edi */
  call_ind((uint32_t)(EDI), 0x10964647u);
  /* 10964647 mov ebp, eax */
  EBP = (EAX);
  /* 10964649 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096464b je 0x1096467f */
  if (C.zf) goto L_1096467f;
  /* 1096464d push ebp */
  push32((uint32_t)(EBP));
  /* 1096464e call 0x10964b01 */
  push32(0x10964653u); f_10964b01();
  /* 10964653 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964655 pop ecx */
  ECX = (pop32());
  /* 10964656 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1096465a je 0x1096467f */
  if (C.zf) goto L_1096467f;
  /* 1096465c push ebx */
  push32((uint32_t)(EBX));
  /* 1096465d push ebx */
  push32((uint32_t)(EBX));
  /* 1096465e push ebp */
  push32((uint32_t)(EBP));
  /* 1096465f push eax */
  push32((uint32_t)(EAX));
  /* 10964660 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10964664 push esi */
  push32((uint32_t)(ESI));
  /* 10964665 push ebx */
  push32((uint32_t)(EBX));
  /* 10964666 push ebx */
  push32((uint32_t)(EBX));
  /* 10964667 call edi */
  call_ind((uint32_t)(EDI), 0x10964669u);
  /* 10964669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096466b jne 0x1096467b */
  if (!C.zf) goto L_1096467b;
  /* 1096466d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10964671 call 0x10964ab9 */
  push32(0x10964676u); f_10964ab9();
  /* 10964676 pop ecx */
  ECX = (pop32());
  /* 10964677 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1096467b:;
  /* 1096467b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1096467f:;
  /* 1096467f push esi */
  push32((uint32_t)(ESI));
  /* 10964680 call dword ptr [0x10967068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967068))), 0x10964686u);
  /* 10964686 mov eax, ebx */
  EAX = (EBX);
  /* 10964688 jmp 0x109646dd */
  goto L_109646dd;
L_1096468a:;
  /* 1096468a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096468d jne 0x109646db */
  if (!C.zf) goto L_109646db;
L_1096468f:;
  /* 1096468f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964691 jne 0x1096469f */
  if (!C.zf) goto L_1096469f;
  /* 10964693 call dword ptr [0x1096706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096706c))), 0x10964699u);
  /* 10964699 mov edi, eax */
  EDI = (EAX);
  /* 1096469b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096469d je 0x109646db */
  if (C.zf) goto L_109646db;
L_1096469f:;
  /* 1096469f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109646a1 mov eax, edi */
  EAX = (EDI);
  /* 109646a3 je 0x109646af */
  if (C.zf) goto L_109646af;
L_109646a5:;
  /* 109646a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109646a6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109646a8 jne 0x109646a5 */
  if (!C.zf) goto L_109646a5;
  /* 109646aa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109646ab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109646ad jne 0x109646a5 */
  if (!C.zf) goto L_109646a5;
L_109646af:;
  /* 109646af sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109646b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109646b2 mov ebp, eax */
  EBP = (EAX);
  /* 109646b4 push ebp */
  push32((uint32_t)(EBP));
  /* 109646b5 call 0x10964b01 */
  push32(0x109646bau); f_10964b01();
  /* 109646ba mov esi, eax */
  ESI = (EAX);
  /* 109646bc pop ecx */
  ECX = (pop32());
  /* 109646bd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109646bf jne 0x109646c5 */
  if (!C.zf) goto L_109646c5;
  /* 109646c1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109646c3 jmp 0x109646d0 */
  goto L_109646d0;
L_109646c5:;
  /* 109646c5 push ebp */
  push32((uint32_t)(EBP));
  /* 109646c6 push edi */
  push32((uint32_t)(EDI));
  /* 109646c7 push esi */
  push32((uint32_t)(ESI));
  /* 109646c8 call 0x109650f0 */
  push32(0x109646cdu); f_109650f0();
  /* 109646cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109646d0:;
  /* 109646d0 push edi */
  push32((uint32_t)(EDI));
  /* 109646d1 call dword ptr [0x10967078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967078))), 0x109646d7u);
  /* 109646d7 mov eax, esi */
  EAX = (ESI);
  /* 109646d9 jmp 0x109646dd */
  goto L_109646dd;
L_109646db:;
  /* 109646db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109646dd:;
  /* 109646dd pop edi */
  EDI = (pop32());
  /* 109646de pop esi */
  ESI = (pop32());
  /* 109646df pop ebp */
  EBP = (pop32());
  /* 109646e0 pop ebx */
  EBX = (pop32());
  /* 109646e1 pop ecx */
  ECX = (pop32());
  /* 109646e2 pop ecx */
  ECX = (pop32());
  /* 109646e3 ret  */
  ESPCHK(0x109645b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100046e4 @ 0x109646e4 (60 bytes, 20 insns) */
void f_109646e4(void) {
  FTRACE(0x109646e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109646e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109646e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109646e8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109646ec push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109646f1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 109646f4 push eax */
  push32((uint32_t)(EAX));
  /* 109646f5 call dword ptr [0x10967060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967060))), 0x109646fbu);
  /* 109646fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109646fd mov dword ptr [0x10969748], eax */
  w32((uint32_t)(0x10969748), (EAX));
  /* 10964702 je 0x10964719 */
  if (C.zf) goto L_10964719;
  /* 10964704 call 0x10965425 */
  push32(0x10964709u); f_10965425();
  /* 10964709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096470b jne 0x1096471c */
  if (!C.zf) goto L_1096471c;
  /* 1096470d push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10964713 call dword ptr [0x10967058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967058))), 0x10964719u);
L_10964719:;
  /* 10964719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1096471b ret  */
  ESPCHK(0x109646e4u, _esp0);
  ESP += 4; return;
L_1096471c:;
  /* 1096471c push 1 */
  push32((uint32_t)(0x1u));
  /* 1096471e pop eax */
  EAX = (pop32());
  /* 1096471f ret  */
  ESPCHK(0x109646e4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004720 @ 0x10964720 (117 bytes, 38 insns) */
void f_10964720(void) {
  FTRACE(0x10964720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964720 push ebx */
  push32((uint32_t)(EBX));
  /* 10964721 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10964723 cmp dword ptr [0x10969508], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10969508))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964729 push ebp */
  push32((uint32_t)(EBP));
  /* 1096472a mov ebp, dword ptr [0x1096704c] */
  EBP = (r32((uint32_t)(0x1096704c)));
  /* 10964730 jle 0x10964776 */
  if ((C.zf||C.sf!=C.of)) goto L_10964776;
  /* 10964732 mov eax, dword ptr [0x1096950c] */
  EAX = (r32((uint32_t)(0x1096950c)));
  /* 10964737 push esi */
  push32((uint32_t)(ESI));
  /* 10964738 push edi */
  push32((uint32_t)(EDI));
  /* 10964739 mov edi, dword ptr [0x10967050] */
  EDI = (r32((uint32_t)(0x10967050)));
  /* 1096473f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10964742:;
  /* 10964742 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10964747 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1096474c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1096474e call edi */
  call_ind((uint32_t)(EDI), 0x10964750u);
  /* 10964750 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10964755 push 0 */
  push32((uint32_t)(0x0u));
  /* 10964757 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10964759 call edi */
  call_ind((uint32_t)(EDI), 0x1096475bu);
  /* 1096475b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1096475e push 0 */
  push32((uint32_t)(0x0u));
  /* 10964760 push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10964766 call ebp */
  call_ind((uint32_t)(EBP), 0x10964768u);
  /* 10964768 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096476b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1096476c cmp ebx, dword ptr [0x10969508] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10969508))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964772 jl 0x10964742 */
  if ((C.sf!=C.of)) goto L_10964742;
  /* 10964774 pop edi */
  EDI = (pop32());
  /* 10964775 pop esi */
  ESI = (pop32());
L_10964776:;
  /* 10964776 push dword ptr [0x1096950c] */
  push32((uint32_t)(r32((uint32_t)(0x1096950c))));
  /* 1096477c push 0 */
  push32((uint32_t)(0x0u));
  /* 1096477e push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10964784 call ebp */
  call_ind((uint32_t)(EBP), 0x10964786u);
  /* 10964786 push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 1096478c call dword ptr [0x10967058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967058))), 0x10964792u);
  /* 10964792 pop ebp */
  EBP = (pop32());
  /* 10964793 pop ebx */
  EBX = (pop32());
  /* 10964794 ret  */
  ESPCHK(0x10964720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004795 @ 0x10964795 (57 bytes, 18 insns) */
void f_10964795(void) {
  FTRACE(0x10964795u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964795 mov eax, dword ptr [0x10969300] */
  EAX = (r32((uint32_t)(0x10969300)));
  /* 1096479a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096479d je 0x109647ac */
  if (C.zf) goto L_109647ac;
  /* 1096479f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109647a1 jne 0x109647cd */
  if (!C.zf) goto L_109647cd;
  /* 109647a3 cmp dword ptr [0x10969304], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10969304))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109647aa jne 0x109647cd */
  if (!C.zf) goto L_109647cd;
L_109647ac:;
  /* 109647ac push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 109647b1 call 0x109647ce */
  push32(0x109647b6u); f_109647ce();
  /* 109647b6 mov eax, dword ptr [0x10969454] */
  EAX = (r32((uint32_t)(0x10969454)));
  /* 109647bb pop ecx */
  ECX = (pop32());
  /* 109647bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109647be je 0x109647c2 */
  if (C.zf) goto L_109647c2;
  /* 109647c0 call eax */
  call_ind((uint32_t)(EAX), 0x109647c2u);
L_109647c2:;
  /* 109647c2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 109647c7 call 0x109647ce */
  push32(0x109647ccu); f_109647ce();
  /* 109647cc pop ecx */
  ECX = (pop32());
L_109647cd:;
  /* 109647cd ret  */
  ESPCHK(0x10964795u, _esp0);
  ESP += 4; return;
}

/* FUN_100047ce @ 0x109647ce (339 bytes, 100 insns) */
void f_109647ce(void) {
  FTRACE(0x109647ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109647ce push ebp */
  push32((uint32_t)(EBP));
  /* 109647cf mov ebp, esp */
  EBP = (ESP);
  /* 109647d1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109647d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109647da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109647dc mov eax, 0x10968a68 */
  EAX = (0x10968a68u);
L_109647e1:;
  /* 109647e1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109647e3 je 0x109647f0 */
  if (C.zf) goto L_109647f0;
  /* 109647e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109647e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109647e9 cmp eax, 0x10968af8 */
  { uint32_t _a=(EAX),_b=(0x10968af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109647ee jl 0x109647e1 */
  if ((C.sf!=C.of)) goto L_109647e1;
L_109647f0:;
  /* 109647f0 push esi */
  push32((uint32_t)(ESI));
  /* 109647f1 mov esi, ecx */
  ESI = (ECX);
  /* 109647f3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 109647f6 cmp edx, dword ptr [esi + 0x10968a68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10968a68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109647fc jne 0x1096491e */
  if (!C.zf) goto L_1096491e;
  /* 10964802 mov eax, dword ptr [0x10969300] */
  EAX = (r32((uint32_t)(0x10969300)));
  /* 10964807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096480a je 0x109648f8 */
  if (C.zf) goto L_109648f8;
  /* 10964810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964812 jne 0x10964821 */
  if (!C.zf) goto L_10964821;
  /* 10964814 cmp dword ptr [0x10969304], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10969304))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096481b je 0x109648f8 */
  if (C.zf) goto L_109648f8;
L_10964821:;
  /* 10964821 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964827 je 0x1096491e */
  if (C.zf) goto L_1096491e;
  /* 1096482d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10964833 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10964838 push eax */
  push32((uint32_t)(EAX));
  /* 10964839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1096483b call dword ptr [0x10967070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967070))), 0x10964841u);
  /* 10964841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964843 jne 0x10964858 */
  if (!C.zf) goto L_10964858;
  /* 10964845 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1096484b push 0x10967418 */
  push32((uint32_t)(0x10967418u));
  /* 10964850 push eax */
  push32((uint32_t)(EAX));
  /* 10964851 call 0x10964b90 */
  push32(0x10964856u); f_10964b90();
  /* 10964856 pop ecx */
  ECX = (pop32());
  /* 10964857 pop ecx */
  ECX = (pop32());
L_10964858:;
  /* 10964858 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1096485e push edi */
  push32((uint32_t)(EDI));
  /* 1096485f push eax */
  push32((uint32_t)(EAX));
  /* 10964860 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10964866 call 0x10964c80 */
  push32(0x1096486bu); f_10964c80();
  /* 1096486b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1096486c pop ecx */
  ECX = (pop32());
  /* 1096486d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964870 jbe 0x1096489b */
  if ((C.cf||C.zf)) goto L_1096489b;
  /* 10964872 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10964878 push eax */
  push32((uint32_t)(EAX));
  /* 10964879 call 0x10964c80 */
  push32(0x1096487eu); f_10964c80();
  /* 1096487e mov edi, eax */
  EDI = (EAX);
  /* 10964880 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10964886 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964889 push 3 */
  push32((uint32_t)(0x3u));
  /* 1096488b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096488d push 0x10967414 */
  push32((uint32_t)(0x10967414u));
  /* 10964892 push edi */
  push32((uint32_t)(EDI));
  /* 10964893 call 0x10965d00 */
  push32(0x10964898u); f_10965d00();
  /* 10964898 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1096489b:;
  /* 1096489b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109648a1 push 0x109673f8 */
  push32((uint32_t)(0x109673f8u));
  /* 109648a6 push eax */
  push32((uint32_t)(EAX));
  /* 109648a7 call 0x10964b90 */
  push32(0x109648acu); f_10964b90();
  /* 109648ac lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109648b2 push edi */
  push32((uint32_t)(EDI));
  /* 109648b3 push eax */
  push32((uint32_t)(EAX));
  /* 109648b4 call 0x10964ba0 */
  push32(0x109648b9u); f_10964ba0();
  /* 109648b9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109648bf push 0x109673f4 */
  push32((uint32_t)(0x109673f4u));
  /* 109648c4 push eax */
  push32((uint32_t)(EAX));
  /* 109648c5 call 0x10964ba0 */
  push32(0x109648cau); f_10964ba0();
  /* 109648ca push dword ptr [esi + 0x10968a6c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10968a6c))));
  /* 109648d0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109648d6 push eax */
  push32((uint32_t)(EAX));
  /* 109648d7 call 0x10964ba0 */
  push32(0x109648dcu); f_10964ba0();
  /* 109648dc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 109648e1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109648e7 push 0x109673cc */
  push32((uint32_t)(0x109673ccu));
  /* 109648ec push eax */
  push32((uint32_t)(EAX));
  /* 109648ed call 0x10965c6e */
  push32(0x109648f2u); f_10965c6e();
  /* 109648f2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109648f5 pop edi */
  EDI = (pop32());
  /* 109648f6 jmp 0x1096491e */
  goto L_1096491e;
L_109648f8:;
  /* 109648f8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 109648fb lea esi, [esi + 0x10968a6c] */
  ESI = ((uint32_t)(ESI + 0x10968a6c));
  /* 10964901 push 0 */
  push32((uint32_t)(0x0u));
  /* 10964903 push eax */
  push32((uint32_t)(EAX));
  /* 10964904 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10964906 call 0x10964c80 */
  push32(0x1096490bu); f_10964c80();
  /* 1096490b pop ecx */
  ECX = (pop32());
  /* 1096490c push eax */
  push32((uint32_t)(EAX));
  /* 1096490d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1096490f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10964911 call dword ptr [0x109670a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109670a4))), 0x10964917u);
  /* 10964917 push eax */
  push32((uint32_t)(EAX));
  /* 10964918 call dword ptr [0x10967054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967054))), 0x1096491eu);
L_1096491e:;
  /* 1096491e pop esi */
  ESI = (pop32());
  /* 1096491f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10964920 ret  */
  ESPCHK(0x109647ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10004921 @ 0x10964921 (41 bytes, 12 insns) */
void f_10964921(void) {
  FTRACE(0x10964921u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964921 push esi */
  push32((uint32_t)(ESI));
  /* 10964922 mov esi, dword ptr [0x10967044] */
  ESI = (r32((uint32_t)(0x10967044)));
  /* 10964928 push dword ptr [0x10968b3c] */
  push32((uint32_t)(r32((uint32_t)(0x10968b3c))));
  /* 1096492e call esi */
  call_ind((uint32_t)(ESI), 0x10964930u);
  /* 10964930 push dword ptr [0x10968b2c] */
  push32((uint32_t)(r32((uint32_t)(0x10968b2c))));
  /* 10964936 call esi */
  call_ind((uint32_t)(ESI), 0x10964938u);
  /* 10964938 push dword ptr [0x10968b1c] */
  push32((uint32_t)(r32((uint32_t)(0x10968b1c))));
  /* 1096493e call esi */
  call_ind((uint32_t)(ESI), 0x10964940u);
  /* 10964940 push dword ptr [0x10968afc] */
  push32((uint32_t)(r32((uint32_t)(0x10968afc))));
  /* 10964946 call esi */
  call_ind((uint32_t)(ESI), 0x10964948u);
  /* 10964948 pop esi */
  ESI = (pop32());
  /* 10964949 ret  */
  ESPCHK(0x10964921u, _esp0);
  ESP += 4; return;
}

/* FUN_1000494a @ 0x1096494a (108 bytes, 34 insns) */
void f_1096494a(void) {
  FTRACE(0x1096494au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1096494a push esi */
  push32((uint32_t)(ESI));
  /* 1096494b push edi */
  push32((uint32_t)(EDI));
  /* 1096494c mov edi, dword ptr [0x10967074] */
  EDI = (r32((uint32_t)(0x10967074)));
  /* 10964952 mov esi, 0x10968af8 */
  ESI = (0x10968af8u);
L_10964957:;
  /* 10964957 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10964959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096495b je 0x10964988 */
  if (C.zf) goto L_10964988;
  /* 1096495d cmp esi, 0x10968b3c */
  { uint32_t _a=(ESI),_b=(0x10968b3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964963 je 0x10964988 */
  if (C.zf) goto L_10964988;
  /* 10964965 cmp esi, 0x10968b2c */
  { uint32_t _a=(ESI),_b=(0x10968b2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096496b je 0x10964988 */
  if (C.zf) goto L_10964988;
  /* 1096496d cmp esi, 0x10968b1c */
  { uint32_t _a=(ESI),_b=(0x10968b1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964973 je 0x10964988 */
  if (C.zf) goto L_10964988;
  /* 10964975 cmp esi, 0x10968afc */
  { uint32_t _a=(ESI),_b=(0x10968afcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096497b je 0x10964988 */
  if (C.zf) goto L_10964988;
  /* 1096497d push eax */
  push32((uint32_t)(EAX));
  /* 1096497e call edi */
  call_ind((uint32_t)(EDI), 0x10964980u);
  /* 10964980 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10964982 call 0x10964ab9 */
  push32(0x10964987u); f_10964ab9();
  /* 10964987 pop ecx */
  ECX = (pop32());
L_10964988:;
  /* 10964988 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096498b cmp esi, 0x10968bb8 */
  { uint32_t _a=(ESI),_b=(0x10968bb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964991 jl 0x10964957 */
  if ((C.sf!=C.of)) goto L_10964957;
  /* 10964993 push dword ptr [0x10968b1c] */
  push32((uint32_t)(r32((uint32_t)(0x10968b1c))));
  /* 10964999 call edi */
  call_ind((uint32_t)(EDI), 0x1096499bu);
  /* 1096499b push dword ptr [0x10968b2c] */
  push32((uint32_t)(r32((uint32_t)(0x10968b2c))));
  /* 109649a1 call edi */
  call_ind((uint32_t)(EDI), 0x109649a3u);
  /* 109649a3 push dword ptr [0x10968b3c] */
  push32((uint32_t)(r32((uint32_t)(0x10968b3c))));
  /* 109649a9 call edi */
  call_ind((uint32_t)(EDI), 0x109649abu);
  /* 109649ab push dword ptr [0x10968afc] */
  push32((uint32_t)(r32((uint32_t)(0x10968afc))));
  /* 109649b1 call edi */
  call_ind((uint32_t)(EDI), 0x109649b3u);
  /* 109649b3 pop edi */
  EDI = (pop32());
  /* 109649b4 pop esi */
  ESI = (pop32());
  /* 109649b5 ret  */
  ESPCHK(0x1096494au, _esp0);
  ESP += 4; return;
}

/* FUN_100049b6 @ 0x109649b6 (97 bytes, 37 insns) */
void f_109649b6(void) {
  FTRACE(0x109649b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109649b6 push ebp */
  push32((uint32_t)(EBP));
  /* 109649b7 mov ebp, esp */
  EBP = (ESP);
  /* 109649b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109649bc push esi */
  push32((uint32_t)(ESI));
  /* 109649bd cmp dword ptr [eax*4 + 0x10968af8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10968af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109649c5 lea esi, [eax*4 + 0x10968af8] */
  ESI = ((uint32_t)(EAX*4 + 0x10968af8));
  /* 109649cc jne 0x10964a0c */
  if (!C.zf) goto L_10964a0c;
  /* 109649ce push edi */
  push32((uint32_t)(EDI));
  /* 109649cf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109649d1 call 0x10964b01 */
  push32(0x109649d6u); f_10964b01();
  /* 109649d6 mov edi, eax */
  EDI = (EAX);
  /* 109649d8 pop ecx */
  ECX = (pop32());
  /* 109649d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109649db jne 0x109649e5 */
  if (!C.zf) goto L_109649e5;
  /* 109649dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109649df call 0x10963e26 */
  push32(0x109649e4u); f_10963e26();
  /* 109649e4 pop ecx */
  ECX = (pop32());
L_109649e5:;
  /* 109649e5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109649e7 call 0x109649b6 */
  push32(0x109649ecu); f_109649b6();
  /* 109649ec cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109649ef pop ecx */
  ECX = (pop32());
  /* 109649f0 push edi */
  push32((uint32_t)(EDI));
  /* 109649f1 jne 0x109649fd */
  if (!C.zf) goto L_109649fd;
  /* 109649f3 call dword ptr [0x10967044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967044))), 0x109649f9u);
  /* 109649f9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 109649fb jmp 0x10964a03 */
  goto L_10964a03;
L_109649fd:;
  /* 109649fd call 0x10964ab9 */
  push32(0x10964a02u); f_10964ab9();
  /* 10964a02 pop ecx */
  ECX = (pop32());
L_10964a03:;
  /* 10964a03 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10964a05 call 0x10964a17 */
  push32(0x10964a0au); f_10964a17();
  /* 10964a0a pop ecx */
  ECX = (pop32());
  /* 10964a0b pop edi */
  EDI = (pop32());
L_10964a0c:;
  /* 10964a0c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10964a0e call dword ptr [0x10967040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967040))), 0x10964a14u);
  /* 10964a14 pop esi */
  ESI = (pop32());
  /* 10964a15 pop ebp */
  EBP = (pop32());
  /* 10964a16 ret  */
  ESPCHK(0x109649b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a17 @ 0x10964a17 (21 bytes, 7 insns) */
void f_10964a17(void) {
  FTRACE(0x10964a17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964a17 push ebp */
  push32((uint32_t)(EBP));
  /* 10964a18 mov ebp, esp */
  EBP = (ESP);
  /* 10964a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10964a1d push dword ptr [eax*4 + 0x10968af8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10968af8))));
  /* 10964a24 call dword ptr [0x10967048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967048))), 0x10964a2au);
  /* 10964a2a pop ebp */
  EBP = (pop32());
  /* 10964a2b ret  */
  ESPCHK(0x10964a17u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a2c @ 0x10964a2c (141 bytes, 56 insns) */
void f_10964a2c(void) {
  FTRACE(0x10964a2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964a2c push ebx */
  push32((uint32_t)(EBX));
  /* 10964a2d push esi */
  push32((uint32_t)(ESI));
  /* 10964a2e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10964a32 push edi */
  push32((uint32_t)(EDI));
  /* 10964a33 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10964a38 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964a3b mov ebx, esi */
  EBX = (ESI);
  /* 10964a3d ja 0x10964a4c */
  if ((!C.cf&&!C.zf)) goto L_10964a4c;
  /* 10964a3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964a41 jne 0x10964a46 */
  if (!C.zf) goto L_10964a46;
  /* 10964a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10964a45 pop esi */
  ESI = (pop32());
L_10964a46:;
  /* 10964a46 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10964a49 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10964a4c:;
  /* 10964a4c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10964a4e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964a51 ja 0x10964a8d */
  if ((!C.cf&&!C.zf)) goto L_10964a8d;
  /* 10964a53 cmp ebx, dword ptr [0x10968d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10968d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964a59 ja 0x10964a78 */
  if ((!C.cf&&!C.zf)) goto L_10964a78;
  /* 10964a5b push 9 */
  push32((uint32_t)(0x9u));
  /* 10964a5d call 0x109649b6 */
  push32(0x10964a62u); f_109649b6();
  /* 10964a62 push ebx */
  push32((uint32_t)(EBX));
  /* 10964a63 call 0x109657b9 */
  push32(0x10964a68u); f_109657b9();
  /* 10964a68 push 9 */
  push32((uint32_t)(0x9u));
  /* 10964a6a mov edi, eax */
  EDI = (EAX);
  /* 10964a6c call 0x10964a17 */
  push32(0x10964a71u); f_10964a17();
  /* 10964a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10964a74 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10964a76 jne 0x10964aa3 */
  if (!C.zf) goto L_10964aa3;
L_10964a78:;
  /* 10964a78 push esi */
  push32((uint32_t)(ESI));
  /* 10964a79 push 8 */
  push32((uint32_t)(0x8u));
  /* 10964a7b push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10964a81 call dword ptr [0x1096703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096703c))), 0x10964a87u);
  /* 10964a87 mov edi, eax */
  EDI = (EAX);
  /* 10964a89 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10964a8b jne 0x10964aaf */
  if (!C.zf) goto L_10964aaf;
L_10964a8d:;
  /* 10964a8d cmp dword ptr [0x109694cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109694cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964a94 je 0x10964aaf */
  if (C.zf) goto L_10964aaf;
  /* 10964a96 push esi */
  push32((uint32_t)(ESI));
  /* 10964a97 call 0x10965e58 */
  push32(0x10964a9cu); f_10965e58();
  /* 10964a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964a9e pop ecx */
  ECX = (pop32());
  /* 10964a9f je 0x10964ab5 */
  if (C.zf) goto L_10964ab5;
  /* 10964aa1 jmp 0x10964a4c */
  goto L_10964a4c;
L_10964aa3:;
  /* 10964aa3 push ebx */
  push32((uint32_t)(EBX));
  /* 10964aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10964aa6 push edi */
  push32((uint32_t)(EDI));
  /* 10964aa7 call 0x10965e00 */
  push32(0x10964aacu); f_10965e00();
  /* 10964aac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10964aaf:;
  /* 10964aaf mov eax, edi */
  EAX = (EDI);
L_10964ab1:;
  /* 10964ab1 pop edi */
  EDI = (pop32());
  /* 10964ab2 pop esi */
  ESI = (pop32());
  /* 10964ab3 pop ebx */
  EBX = (pop32());
  /* 10964ab4 ret  */
  ESPCHK(0x10964a2cu, _esp0);
  ESP += 4; return;
L_10964ab5:;
  /* 10964ab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964ab7 jmp 0x10964ab1 */
  goto L_10964ab1;
}

/* FUN_10004ab9 @ 0x10964ab9 (72 bytes, 29 insns) */
void f_10964ab9(void) {
  FTRACE(0x10964ab9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964ab9 push esi */
  push32((uint32_t)(ESI));
  /* 10964aba mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10964abe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964ac0 je 0x10964aff */
  if (C.zf) goto L_10964aff;
  /* 10964ac2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10964ac4 call 0x109649b6 */
  push32(0x10964ac9u); f_109649b6();
  /* 10964ac9 push esi */
  push32((uint32_t)(ESI));
  /* 10964aca call 0x10965463 */
  push32(0x10964acfu); f_10965463();
  /* 10964acf pop ecx */
  ECX = (pop32());
  /* 10964ad0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964ad2 pop ecx */
  ECX = (pop32());
  /* 10964ad3 je 0x10964ae8 */
  if (C.zf) goto L_10964ae8;
  /* 10964ad5 push esi */
  push32((uint32_t)(ESI));
  /* 10964ad6 push eax */
  push32((uint32_t)(EAX));
  /* 10964ad7 call 0x1096548e */
  push32(0x10964adcu); f_1096548e();
  /* 10964adc push 9 */
  push32((uint32_t)(0x9u));
  /* 10964ade call 0x10964a17 */
  push32(0x10964ae3u); f_10964a17();
  /* 10964ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10964ae6 pop esi */
  ESI = (pop32());
  /* 10964ae7 ret  */
  ESPCHK(0x10964ab9u, _esp0);
  ESP += 4; return;
L_10964ae8:;
  /* 10964ae8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10964aea call 0x10964a17 */
  push32(0x10964aefu); f_10964a17();
  /* 10964aef pop ecx */
  ECX = (pop32());
  /* 10964af0 push esi */
  push32((uint32_t)(ESI));
  /* 10964af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10964af3 push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10964af9 call dword ptr [0x1096704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096704c))), 0x10964affu);
L_10964aff:;
  /* 10964aff pop esi */
  ESI = (pop32());
  /* 10964b00 ret  */
  ESPCHK(0x10964ab9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10964b01 (18 bytes, 6 insns) */
void f_10964b01(void) {
  FTRACE(0x10964b01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964b01 push dword ptr [0x109694cc] */
  push32((uint32_t)(r32((uint32_t)(0x109694cc))));
  /* 10964b07 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10964b0b call 0x10964b13 */
  push32(0x10964b10u); f_10964b13();
  /* 10964b10 pop ecx */
  ECX = (pop32());
  /* 10964b11 pop ecx */
  ECX = (pop32());
  /* 10964b12 ret  */
  ESPCHK(0x10964b01u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10964b13 (44 bytes, 16 insns) */
void f_10964b13(void) {
  FTRACE(0x10964b13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964b13 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964b18 ja 0x10964b3c */
  if ((!C.cf&&!C.zf)) goto L_10964b3c;
L_10964b1a:;
  /* 10964b1a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10964b1e call 0x10964b3f */
  push32(0x10964b23u); f_10964b3f();
  /* 10964b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964b25 pop ecx */
  ECX = (pop32());
  /* 10964b26 jne 0x10964b3e */
  if (!C.zf) goto L_10964b3e;
  /* 10964b28 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964b2c je 0x10964b3e */
  if (C.zf) goto L_10964b3e;
  /* 10964b2e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10964b32 call 0x10965e58 */
  push32(0x10964b37u); f_10965e58();
  /* 10964b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10964b39 pop ecx */
  ECX = (pop32());
  /* 10964b3a jne 0x10964b1a */
  if (!C.zf) goto L_10964b1a;
L_10964b3c:;
  /* 10964b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10964b3e:;
  /* 10964b3e ret  */
  ESPCHK(0x10964b13u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b3f @ 0x10964b3f (78 bytes, 30 insns) */
void f_10964b3f(void) {
  FTRACE(0x10964b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964b3f push esi */
  push32((uint32_t)(ESI));
  /* 10964b40 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10964b44 cmp esi, dword ptr [0x10968d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10968d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964b4a push edi */
  push32((uint32_t)(EDI));
  /* 10964b4b ja 0x10964b6e */
  if ((!C.cf&&!C.zf)) goto L_10964b6e;
  /* 10964b4d push 9 */
  push32((uint32_t)(0x9u));
  /* 10964b4f call 0x109649b6 */
  push32(0x10964b54u); f_109649b6();
  /* 10964b54 push esi */
  push32((uint32_t)(ESI));
  /* 10964b55 call 0x109657b9 */
  push32(0x10964b5au); f_109657b9();
  /* 10964b5a push 9 */
  push32((uint32_t)(0x9u));
  /* 10964b5c mov edi, eax */
  EDI = (EAX);
  /* 10964b5e call 0x10964a17 */
  push32(0x10964b63u); f_10964a17();
  /* 10964b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10964b66 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10964b68 je 0x10964b6e */
  if (C.zf) goto L_10964b6e;
  /* 10964b6a mov eax, edi */
  EAX = (EDI);
  /* 10964b6c jmp 0x10964b8a */
  goto L_10964b8a;
L_10964b6e:;
  /* 10964b6e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10964b70 jne 0x10964b75 */
  if (!C.zf) goto L_10964b75;
  /* 10964b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10964b74 pop esi */
  ESI = (pop32());
L_10964b75:;
  /* 10964b75 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10964b78 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10964b7b push esi */
  push32((uint32_t)(ESI));
  /* 10964b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10964b7e push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10964b84 call dword ptr [0x1096703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096703c))), 0x10964b8au);
L_10964b8a:;
  /* 10964b8a pop edi */
  EDI = (pop32());
  /* 10964b8b pop esi */
  ESI = (pop32());
  /* 10964b8c ret  */
  ESPCHK(0x10964b3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b90 @ 0x10964b90 (7 bytes, 3 insns) */
void f_10964b90(void) {
  FTRACE(0x10964b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964b90 push edi */
  push32((uint32_t)(EDI));
  /* 10964b91 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10964b95 jmp 0x10964c01 */
  jmp_ind(0x10964c01u); return;
}

/* FUN_10004ba0 @ 0x10964ba0 (224 bytes, 84 insns) */
void f_10964ba0(void) {
  FTRACE(0x10964ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964ba0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964ba4 push edi */
  push32((uint32_t)(EDI));
  /* 10964ba5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10964bab je 0x10964bbc */
  if (C.zf) goto L_10964bbc;
L_10964bad:;
  /* 10964bad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10964baf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964bb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10964bb2 je 0x10964bef */
  if (C.zf) goto L_10964bef;
  /* 10964bb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10964bba jne 0x10964bad */
  if (!C.zf) goto L_10964bad;
L_10964bbc:;
  /* 10964bbc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10964bbe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10964bc3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964bc5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10964bc8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10964bca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964bcd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10964bd2 je 0x10964bbc */
  if (C.zf) goto L_10964bbc;
  /* 10964bd4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10964bd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10964bd9 je 0x10964bfe */
  if (C.zf) goto L_10964bfe;
  /* 10964bdb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10964bdd je 0x10964bf9 */
  if (C.zf) goto L_10964bf9;
  /* 10964bdf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10964be4 je 0x10964bf4 */
  if (C.zf) goto L_10964bf4;
  /* 10964be6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10964beb je 0x10964bef */
  if (C.zf) goto L_10964bef;
  /* 10964bed jmp 0x10964bbc */
  goto L_10964bbc;
L_10964bef:;
  /* 10964bef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10964bf2 jmp 0x10964c01 */
  goto L_10964c01;
L_10964bf4:;
  /* 10964bf4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10964bf7 jmp 0x10964c01 */
  goto L_10964c01;
L_10964bf9:;
  /* 10964bf9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10964bfc jmp 0x10964c01 */
  goto L_10964c01;
L_10964bfe:;
  /* 10964bfe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10964c01:;
  /* 10964c01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10964c05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10964c0b je 0x10964c26 */
  if (C.zf) goto L_10964c26;
L_10964c0d:;
  /* 10964c0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10964c0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964c10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10964c12 je 0x10964c78 */
  if (C.zf) goto L_10964c78;
  /* 10964c14 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10964c16 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10964c17 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10964c1d jne 0x10964c0d */
  if (!C.zf) goto L_10964c0d;
  /* 10964c1f jmp 0x10964c26 */
  goto L_10964c26;
L_10964c21:;
  /* 10964c21 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10964c23 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10964c26:;
  /* 10964c26 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10964c2b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10964c2d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964c2f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10964c32 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10964c34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10964c36 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964c39 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10964c3e je 0x10964c21 */
  if (C.zf) goto L_10964c21;
  /* 10964c40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10964c42 je 0x10964c78 */
  if (C.zf) goto L_10964c78;
  /* 10964c44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10964c46 je 0x10964c6f */
  if (C.zf) goto L_10964c6f;
  /* 10964c48 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10964c4e je 0x10964c62 */
  if (C.zf) goto L_10964c62;
  /* 10964c50 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10964c56 je 0x10964c5a */
  if (C.zf) goto L_10964c5a;
  /* 10964c58 jmp 0x10964c21 */
  goto L_10964c21;
L_10964c5a:;
  /* 10964c5a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10964c5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10964c60 pop edi */
  EDI = (pop32());
  /* 10964c61 ret  */
  ESPCHK(0x10964ba0u, _esp0);
  ESP += 4; return;
L_10964c62:;
  /* 10964c62 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10964c65 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10964c69 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10964c6d pop edi */
  EDI = (pop32());
  /* 10964c6e ret  */
  ESPCHK(0x10964ba0u, _esp0);
  ESP += 4; return;
L_10964c6f:;
  /* 10964c6f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10964c72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10964c76 pop edi */
  EDI = (pop32());
  /* 10964c77 ret  */
  ESPCHK(0x10964ba0u, _esp0);
  ESP += 4; return;
L_10964c78:;
  /* 10964c78 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10964c7a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10964c7e pop edi */
  EDI = (pop32());
  /* 10964c7f ret  */
  ESPCHK(0x10964ba0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10964c80 (123 bytes, 44 insns) */
void f_10964c80(void) {
  FTRACE(0x10964c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964c80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964c84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10964c8a je 0x10964ca0 */
  if (C.zf) goto L_10964ca0;
L_10964c8c:;
  /* 10964c8c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10964c8e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10964c91 je 0x10964cd3 */
  if (C.zf) goto L_10964cd3;
  /* 10964c93 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10964c99 jne 0x10964c8c */
  if (!C.zf) goto L_10964c8c;
  /* 10964c9b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10964ca0:;
  /* 10964ca0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10964ca2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10964ca7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964ca9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10964cac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10964cae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964cb1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10964cb6 je 0x10964ca0 */
  if (C.zf) goto L_10964ca0;
  /* 10964cb8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10964cbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10964cbd je 0x10964cf1 */
  if (C.zf) goto L_10964cf1;
  /* 10964cbf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10964cc1 je 0x10964ce7 */
  if (C.zf) goto L_10964ce7;
  /* 10964cc3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10964cc8 je 0x10964cdd */
  if (C.zf) goto L_10964cdd;
  /* 10964cca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10964ccf je 0x10964cd3 */
  if (C.zf) goto L_10964cd3;
  /* 10964cd1 jmp 0x10964ca0 */
  goto L_10964ca0;
L_10964cd3:;
  /* 10964cd3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10964cd6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964cda sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964cdc ret  */
  ESPCHK(0x10964c80u, _esp0);
  ESP += 4; return;
L_10964cdd:;
  /* 10964cdd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10964ce0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964ce4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964ce6 ret  */
  ESPCHK(0x10964c80u, _esp0);
  ESP += 4; return;
L_10964ce7:;
  /* 10964ce7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10964cea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964cee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964cf0 ret  */
  ESPCHK(0x10964c80u, _esp0);
  ESP += 4; return;
L_10964cf1:;
  /* 10964cf1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10964cf4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964cf8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964cfa ret  */
  ESPCHK(0x10964c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cfb @ 0x10964cfb (429 bytes, 143 insns) */
void f_10964cfb(void) {
  FTRACE(0x10964cfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964cfb push ebp */
  push32((uint32_t)(EBP));
  /* 10964cfc mov ebp, esp */
  EBP = (ESP);
  /* 10964cfe sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964d01 push ebx */
  push32((uint32_t)(EBX));
  /* 10964d02 push esi */
  push32((uint32_t)(ESI));
  /* 10964d03 push edi */
  push32((uint32_t)(EDI));
  /* 10964d04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10964d06 call 0x109649b6 */
  push32(0x10964d0bu); f_109649b6();
  /* 10964d0b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10964d0e call 0x10964ea8 */
  push32(0x10964d13u); f_10964ea8();
  /* 10964d13 mov ebx, eax */
  EBX = (EAX);
  /* 10964d15 pop ecx */
  ECX = (pop32());
  /* 10964d16 cmp ebx, dword ptr [0x10969510] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10969510))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964d1c pop ecx */
  ECX = (pop32());
  /* 10964d1d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10964d20 jne 0x10964d29 */
  if (!C.zf) goto L_10964d29;
L_10964d22:;
  /* 10964d22 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10964d24 jmp 0x10964e99 */
  goto L_10964e99;
L_10964d29:;
  /* 10964d29 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10964d2b je 0x10964e87 */
  if (C.zf) goto L_10964e87;
  /* 10964d31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10964d33 mov eax, 0x10968c48 */
  EAX = (0x10968c48u);
L_10964d38:;
  /* 10964d38 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964d3a je 0x10964db0 */
  if (C.zf) goto L_10964db0;
  /* 10964d3c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964d3f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10964d40 cmp eax, 0x10968d38 */
  { uint32_t _a=(EAX),_b=(0x10968d38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964d45 jl 0x10964d38 */
  if ((C.sf!=C.of)) goto L_10964d38;
  /* 10964d47 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10964d4a push eax */
  push32((uint32_t)(EAX));
  /* 10964d4b push ebx */
  push32((uint32_t)(EBX));
  /* 10964d4c call dword ptr [0x10967034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967034))), 0x10964d52u);
  /* 10964d52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10964d54 pop esi */
  ESI = (pop32());
  /* 10964d55 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964d57 jne 0x10964e7e */
  if (!C.zf) goto L_10964e7e;
  /* 10964d5d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10964d5f and dword ptr [0x10969744], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10969744)))&(0x0u); w32((uint32_t)(0x10969744), (_r)); fl_logic(_r,32); }
  /* 10964d66 pop ecx */
  ECX = (pop32());
  /* 10964d67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964d69 mov edi, 0x10969640 */
  EDI = (0x10969640u);
  /* 10964d6e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964d71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10964d73 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10964d74 mov dword ptr [0x10969510], ebx */
  w32((uint32_t)(0x10969510), (EBX));
  /* 10964d7a jbe 0x10964e6b */
  if ((C.cf||C.zf)) goto L_10964e6b;
  /* 10964d80 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964d84 je 0x10964e46 */
  if (C.zf) goto L_10964e46;
  /* 10964d8a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10964d8d:;
  /* 10964d8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10964d8f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10964d91 je 0x10964e46 */
  if (C.zf) goto L_10964e46;
  /* 10964d97 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10964d9b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10964d9e:;
  /* 10964d9e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964da0 ja 0x10964e3a */
  if ((!C.cf&&!C.zf)) goto L_10964e3a;
  /* 10964da6 or byte ptr [eax + 0x10969641], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(0x4u); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 10964dad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964dae jmp 0x10964d9e */
  goto L_10964d9e;
L_10964db0:;
  /* 10964db0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10964db4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10964db6 pop ecx */
  ECX = (pop32());
  /* 10964db7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964db9 mov edi, 0x10969640 */
  EDI = (0x10969640u);
  /* 10964dbe lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10964dc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10964dc3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10964dc6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10964dc7 lea ebx, [esi + 0x10968c58] */
  EBX = ((uint32_t)(ESI + 0x10968c58));
L_10964dcd:;
  /* 10964dcd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964dd0 mov ecx, ebx */
  ECX = (EBX);
  /* 10964dd2 je 0x10964e00 */
  if (C.zf) goto L_10964e00;
L_10964dd4:;
  /* 10964dd4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10964dd7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10964dd9 je 0x10964e00 */
  if (C.zf) goto L_10964e00;
  /* 10964ddb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10964dde movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10964de1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964de3 ja 0x10964df9 */
  if ((!C.cf&&!C.zf)) goto L_10964df9;
  /* 10964de5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10964de8 mov dl, byte ptr [edx + 0x10968c40] */
  DL = (r8((uint32_t)(EDX + 0x10968c40)));
L_10964dee:;
  /* 10964dee or byte ptr [eax + 0x10969641], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(DL); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 10964df4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964df5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964df7 jbe 0x10964dee */
  if ((C.cf||C.zf)) goto L_10964dee;
L_10964df9:;
  /* 10964df9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964dfa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964dfb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964dfe jne 0x10964dd4 */
  if (!C.zf) goto L_10964dd4;
L_10964e00:;
  /* 10964e00 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10964e03 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10964e06 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964e0a jb 0x10964dcd */
  if (C.cf) goto L_10964dcd;
  /* 10964e0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10964e0f mov dword ptr [0x1096952c], 1 */
  w32((uint32_t)(0x1096952c), (0x1u));
  /* 10964e19 push eax */
  push32((uint32_t)(EAX));
  /* 10964e1a mov dword ptr [0x10969510], eax */
  w32((uint32_t)(0x10969510), (EAX));
  /* 10964e1f call 0x10964ef2 */
  push32(0x10964e24u); f_10964ef2();
  /* 10964e24 lea esi, [esi + 0x10968c4c] */
  ESI = ((uint32_t)(ESI + 0x10968c4c));
  /* 10964e2a mov edi, 0x10969520 */
  EDI = (0x10969520u);
  /* 10964e2f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10964e30 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10964e31 pop ecx */
  ECX = (pop32());
  /* 10964e32 mov dword ptr [0x10969744], eax */
  w32((uint32_t)(0x10969744), (EAX));
  /* 10964e37 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10964e38 jmp 0x10964e8c */
  goto L_10964e8c;
L_10964e3a:;
  /* 10964e3a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964e3b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964e3c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10964e40 jne 0x10964d8d */
  if (!C.zf) goto L_10964d8d;
L_10964e46:;
  /* 10964e46 mov eax, esi */
  EAX = (ESI);
L_10964e48:;
  /* 10964e48 or byte ptr [eax + 0x10969641], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(0x8u); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 10964e4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964e50 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964e55 jb 0x10964e48 */
  if (C.cf) goto L_10964e48;
  /* 10964e57 push ebx */
  push32((uint32_t)(EBX));
  /* 10964e58 call 0x10964ef2 */
  push32(0x10964e5du); f_10964ef2();
  /* 10964e5d pop ecx */
  ECX = (pop32());
  /* 10964e5e mov dword ptr [0x10969744], eax */
  w32((uint32_t)(0x10969744), (EAX));
  /* 10964e63 mov dword ptr [0x1096952c], esi */
  w32((uint32_t)(0x1096952c), (ESI));
  /* 10964e69 jmp 0x10964e72 */
  goto L_10964e72;
L_10964e6b:;
  /* 10964e6b and dword ptr [0x1096952c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1096952c)))&(0x0u); w32((uint32_t)(0x1096952c), (_r)); fl_logic(_r,32); }
L_10964e72:;
  /* 10964e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964e74 mov edi, 0x10969520 */
  EDI = (0x10969520u);
  /* 10964e79 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10964e7a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10964e7b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10964e7c jmp 0x10964e8c */
  goto L_10964e8c;
L_10964e7e:;
  /* 10964e7e cmp dword ptr [0x109694b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109694b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964e85 je 0x10964e96 */
  if (C.zf) goto L_10964e96;
L_10964e87:;
  /* 10964e87 call 0x10964f25 */
  push32(0x10964e8cu); f_10964f25();
L_10964e8c:;
  /* 10964e8c call 0x10964f4e */
  push32(0x10964e91u); f_10964f4e();
  /* 10964e91 jmp 0x10964d22 */
  goto L_10964d22;
L_10964e96:;
  /* 10964e96 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10964e99:;
  /* 10964e99 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10964e9b call 0x10964a17 */
  push32(0x10964ea0u); f_10964a17();
  /* 10964ea0 pop ecx */
  ECX = (pop32());
  /* 10964ea1 mov eax, esi */
  EAX = (ESI);
  /* 10964ea3 pop edi */
  EDI = (pop32());
  /* 10964ea4 pop esi */
  ESI = (pop32());
  /* 10964ea5 pop ebx */
  EBX = (pop32());
  /* 10964ea6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10964ea7 ret  */
  ESPCHK(0x10964cfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea8 @ 0x10964ea8 (74 bytes, 15 insns) */
void f_10964ea8(void) {
  FTRACE(0x10964ea8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964ea8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964eac and dword ptr [0x109694b8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x109694b8)))&(0x0u); w32((uint32_t)(0x109694b8), (_r)); fl_logic(_r,32); }
  /* 10964eb3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964eb6 jne 0x10964ec8 */
  if (!C.zf) goto L_10964ec8;
  /* 10964eb8 mov dword ptr [0x109694b8], 1 */
  w32((uint32_t)(0x109694b8), (0x1u));
  /* 10964ec2 jmp dword ptr [0x10967038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10967038)))); return;
L_10964ec8:;
  /* 10964ec8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964ecb jne 0x10964edd */
  if (!C.zf) goto L_10964edd;
  /* 10964ecd mov dword ptr [0x109694b8], 1 */
  w32((uint32_t)(0x109694b8), (0x1u));
  /* 10964ed7 jmp dword ptr [0x10967030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10967030)))); return;
L_10964edd:;
  /* 10964edd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964ee0 jne 0x10964ef1 */
  if (!C.zf) goto L_10964ef1;
  /* 10964ee2 mov eax, dword ptr [0x109694e8] */
  EAX = (r32((uint32_t)(0x109694e8)));
  /* 10964ee7 mov dword ptr [0x109694b8], 1 */
  w32((uint32_t)(0x109694b8), (0x1u));
L_10964ef1:;
  /* 10964ef1 ret  */
  ESPCHK(0x10964ea8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef2 @ 0x10964ef2 (51 bytes, 19 insns) */
void f_10964ef2(void) {
  FTRACE(0x10964ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964ef2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10964ef6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964efb je 0x10964f1f */
  if (C.zf) goto L_10964f1f;
  /* 10964efd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964f00 je 0x10964f19 */
  if (C.zf) goto L_10964f19;
  /* 10964f02 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964f05 je 0x10964f13 */
  if (C.zf) goto L_10964f13;
  /* 10964f07 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10964f08 je 0x10964f0d */
  if (C.zf) goto L_10964f0d;
  /* 10964f0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964f0c ret  */
  ESPCHK(0x10964ef2u, _esp0);
  ESP += 4; return;
L_10964f0d:;
  /* 10964f0d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10964f12 ret  */
  ESPCHK(0x10964ef2u, _esp0);
  ESP += 4; return;
L_10964f13:;
  /* 10964f13 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10964f18 ret  */
  ESPCHK(0x10964ef2u, _esp0);
  ESP += 4; return;
L_10964f19:;
  /* 10964f19 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10964f1e ret  */
  ESPCHK(0x10964ef2u, _esp0);
  ESP += 4; return;
L_10964f1f:;
  /* 10964f1f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10964f24 ret  */
  ESPCHK(0x10964ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f25 @ 0x10964f25 (41 bytes, 17 insns) */
void f_10964f25(void) {
  FTRACE(0x10964f25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964f25 push edi */
  push32((uint32_t)(EDI));
  /* 10964f26 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10964f28 pop ecx */
  ECX = (pop32());
  /* 10964f29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964f2b mov edi, 0x10969640 */
  EDI = (0x10969640u);
  /* 10964f30 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10964f32 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10964f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964f35 mov edi, 0x10969520 */
  EDI = (0x10969520u);
  /* 10964f3a mov dword ptr [0x10969510], eax */
  w32((uint32_t)(0x10969510), (EAX));
  /* 10964f3f mov dword ptr [0x1096952c], eax */
  w32((uint32_t)(0x1096952c), (EAX));
  /* 10964f44 mov dword ptr [0x10969744], eax */
  w32((uint32_t)(0x10969744), (EAX));
  /* 10964f49 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10964f4a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10964f4b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10964f4c pop edi */
  EDI = (pop32());
  /* 10964f4d ret  */
  ESPCHK(0x10964f25u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f4e @ 0x10964f4e (389 bytes, 124 insns) */
void f_10964f4e(void) {
  FTRACE(0x10964f4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10964f4e push ebp */
  push32((uint32_t)(EBP));
  /* 10964f4f mov ebp, esp */
  EBP = (ESP);
  /* 10964f51 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964f57 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10964f5a push esi */
  push32((uint32_t)(ESI));
  /* 10964f5b push eax */
  push32((uint32_t)(EAX));
  /* 10964f5c push dword ptr [0x10969510] */
  push32((uint32_t)(r32((uint32_t)(0x10969510))));
  /* 10964f62 call dword ptr [0x10967034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967034))), 0x10964f68u);
  /* 10964f68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964f6b jne 0x10965087 */
  if (!C.zf) goto L_10965087;
  /* 10964f71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10964f73 mov esi, 0x100 */
  ESI = (0x100u);
L_10964f78:;
  /* 10964f78 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10964f7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10964f80 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964f82 jb 0x10964f78 */
  if (C.cf) goto L_10964f78;
  /* 10964f84 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10964f87 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10964f8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10964f90 je 0x10964fc9 */
  if (C.zf) goto L_10964fc9;
  /* 10964f92 push ebx */
  push32((uint32_t)(EBX));
  /* 10964f93 push edi */
  push32((uint32_t)(EDI));
  /* 10964f94 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10964f97:;
  /* 10964f97 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10964f9a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10964f9d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10964f9f ja 0x10964fbe */
  if ((!C.cf&&!C.zf)) goto L_10964fbe;
  /* 10964fa1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10964fa3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10964faa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10964fab mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10964fb0 mov ebx, ecx */
  EBX = (ECX);
  /* 10964fb2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10964fb5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10964fb7 mov ecx, ebx */
  ECX = (EBX);
  /* 10964fb9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10964fbc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10964fbe:;
  /* 10964fbe inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10964fbf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10964fc0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10964fc3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10964fc5 jne 0x10964f97 */
  if (!C.zf) goto L_10964f97;
  /* 10964fc7 pop edi */
  EDI = (pop32());
  /* 10964fc8 pop ebx */
  EBX = (pop32());
L_10964fc9:;
  /* 10964fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10964fcb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10964fd1 push dword ptr [0x10969744] */
  push32((uint32_t)(r32((uint32_t)(0x10969744))));
  /* 10964fd7 push dword ptr [0x10969510] */
  push32((uint32_t)(r32((uint32_t)(0x10969510))));
  /* 10964fdd push eax */
  push32((uint32_t)(EAX));
  /* 10964fde lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10964fe4 push esi */
  push32((uint32_t)(ESI));
  /* 10964fe5 push eax */
  push32((uint32_t)(EAX));
  /* 10964fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10964fe8 call 0x109660c2 */
  push32(0x10964fedu); f_109660c2();
  /* 10964fed push 0 */
  push32((uint32_t)(0x0u));
  /* 10964fef lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10964ff5 push dword ptr [0x10969510] */
  push32((uint32_t)(r32((uint32_t)(0x10969510))));
  /* 10964ffb push esi */
  push32((uint32_t)(ESI));
  /* 10964ffc push eax */
  push32((uint32_t)(EAX));
  /* 10964ffd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10965003 push esi */
  push32((uint32_t)(ESI));
  /* 10965004 push eax */
  push32((uint32_t)(EAX));
  /* 10965005 push esi */
  push32((uint32_t)(ESI));
  /* 10965006 push dword ptr [0x10969744] */
  push32((uint32_t)(r32((uint32_t)(0x10969744))));
  /* 1096500c call 0x10965e73 */
  push32(0x10965011u); f_10965e73();
  /* 10965011 push 0 */
  push32((uint32_t)(0x0u));
  /* 10965013 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10965019 push dword ptr [0x10969510] */
  push32((uint32_t)(r32((uint32_t)(0x10969510))));
  /* 1096501f push esi */
  push32((uint32_t)(ESI));
  /* 10965020 push eax */
  push32((uint32_t)(EAX));
  /* 10965021 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10965027 push esi */
  push32((uint32_t)(ESI));
  /* 10965028 push eax */
  push32((uint32_t)(EAX));
  /* 10965029 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1096502e push dword ptr [0x10969744] */
  push32((uint32_t)(r32((uint32_t)(0x10969744))));
  /* 10965034 call 0x10965e73 */
  push32(0x10965039u); f_10965e73();
  /* 10965039 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1096503c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1096503e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10965044:;
  /* 10965044 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10965047 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1096504a je 0x10965062 */
  if (C.zf) goto L_10965062;
  /* 1096504c or byte ptr [eax + 0x10969641], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(0x10u); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 10965053 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1096505a:;
  /* 1096505a mov byte ptr [eax + 0x10969540], dl */
  w8((uint32_t)(EAX + 0x10969540), (DL));
  /* 10965060 jmp 0x1096507e */
  goto L_1096507e;
L_10965062:;
  /* 10965062 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10965065 je 0x10965077 */
  if (C.zf) goto L_10965077;
  /* 10965067 or byte ptr [eax + 0x10969641], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(0x20u); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 1096506e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10965075 jmp 0x1096505a */
  goto L_1096505a;
L_10965077:;
  /* 10965077 and byte ptr [eax + 0x10969540], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969540)))&(0x0u); w8((uint32_t)(EAX + 0x10969540), (_r)); fl_logic(_r,8); }
L_1096507e:;
  /* 1096507e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1096507f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10965080 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10965081 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965083 jb 0x10965044 */
  if (C.cf) goto L_10965044;
  /* 10965085 jmp 0x109650d0 */
  goto L_109650d0;
L_10965087:;
  /* 10965087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10965089 mov esi, 0x100 */
  ESI = (0x100u);
L_1096508e:;
  /* 1096508e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965091 jb 0x109650ac */
  if (C.cf) goto L_109650ac;
  /* 10965093 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965096 ja 0x109650ac */
  if ((!C.cf&&!C.zf)) goto L_109650ac;
  /* 10965098 or byte ptr [eax + 0x10969641], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(0x10u); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 1096509f mov cl, al */
  CL = (AL);
  /* 109650a1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_109650a4:;
  /* 109650a4 mov byte ptr [eax + 0x10969540], cl */
  w8((uint32_t)(EAX + 0x10969540), (CL));
  /* 109650aa jmp 0x109650cb */
  goto L_109650cb;
L_109650ac:;
  /* 109650ac cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109650af jb 0x109650c4 */
  if (C.cf) goto L_109650c4;
  /* 109650b1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109650b4 ja 0x109650c4 */
  if ((!C.cf&&!C.zf)) goto L_109650c4;
  /* 109650b6 or byte ptr [eax + 0x10969641], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969641)))|(0x20u); w8((uint32_t)(EAX + 0x10969641), (_r)); fl_logic(_r,8); }
  /* 109650bd mov cl, al */
  CL = (AL);
  /* 109650bf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 109650c2 jmp 0x109650a4 */
  goto L_109650a4;
L_109650c4:;
  /* 109650c4 and byte ptr [eax + 0x10969540], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10969540)))&(0x0u); w8((uint32_t)(EAX + 0x10969540), (_r)); fl_logic(_r,8); }
L_109650cb:;
  /* 109650cb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109650cc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109650ce jb 0x1096508e */
  if (C.cf) goto L_1096508e;
L_109650d0:;
  /* 109650d0 pop esi */
  ESI = (pop32());
  /* 109650d1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109650d2 ret  */
  ESPCHK(0x10964f4eu, _esp0);
  ESP += 4; return;
}

/* FUN_100050d3 @ 0x109650d3 (28 bytes, 7 insns) */
void f_109650d3(void) {
  FTRACE(0x109650d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109650d3 cmp dword ptr [0x10969868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10969868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109650da jne 0x109650ee */
  if (!C.zf) goto L_109650ee;
  /* 109650dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 109650de call 0x10964cfb */
  push32(0x109650e3u); f_10964cfb();
  /* 109650e3 pop ecx */
  ECX = (pop32());
  /* 109650e4 mov dword ptr [0x10969868], 1 */
  w32((uint32_t)(0x10969868), (0x1u));
L_109650ee:;
  /* 109650ee ret  */
  ESPCHK(0x109650d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100050f0 @ 0x109650f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_109650f0(void) {
  FTRACE(0x109650f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109650f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109650f1 mov ebp, esp */
  EBP = (ESP);
  /* 109650f3 push edi */
  push32((uint32_t)(EDI));
  /* 109650f4 push esi */
  push32((uint32_t)(ESI));
  /* 109650f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109650f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109650fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109650fe mov eax, ecx */
  EAX = (ECX);
  /* 10965100 mov edx, ecx */
  EDX = (ECX);
  /* 10965102 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965104 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965106 jbe 0x10965110 */
  if ((C.cf||C.zf)) goto L_10965110;
  /* 10965108 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096510a jb 0x10965288 */
  if (C.cf) goto L_10965288;
L_10965110:;
  /* 10965110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10965116 jne 0x1096512c */
  if (!C.zf) goto L_1096512c;
  /* 10965118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1096511b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1096511e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965121 jb 0x1096514c */
  if (C.cf) goto L_1096514c;
  /* 10965123 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10965125 jmp dword ptr [edx*4 + 0x10965238] */
  switch (EDX) {
    case 0: goto L_10965248;
    case 1: goto L_10965250;
    case 2: goto L_1096525c;
    case 3: goto L_10965270;
    default: x86_unimpl("switch@0x10965125 out of table"); return;
  }
L_1096512c:;
  /* 1096512c mov eax, edi */
  EAX = (EDI);
  /* 1096512e mov edx, 3 */
  EDX = (0x3u);
  /* 10965133 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10965136 jb 0x10965144 */
  if (C.cf) goto L_10965144;
  /* 10965138 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1096513b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096513d jmp dword ptr [eax*4 + 0x10965150] */
  switch (EAX) {
    case 1: goto L_10965160;
    case 2: goto L_1096518c;
    case 3: goto L_109651b0;
    default: x86_unimpl("switch@0x1096513d out of table"); return;
  }
L_10965144:;
  /* 10965144 jmp dword ptr [ecx*4 + 0x10965248] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10965248)))); return;
  /* 1096514b nop  */
  /* nop */
L_1096514c:;
  /* 1096514c jmp dword ptr [ecx*4 + 0x109651cc] */
  switch (ECX) {
    case 0: goto L_1096522f;
    case 1: goto L_1096521c;
    case 2: goto L_10965214;
    case 3: goto L_1096520c;
    case 4: goto L_10965204;
    case 5: goto L_109651fc;
    case 6: goto L_109651f4;
    case 7: goto L_109651ec;
    default: x86_unimpl("switch@0x1096514c out of table"); return;
  }
  /* 10965153 nop  */
  /* nop */
L_10965160:;
  /* 10965160 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10965162 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10965164 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965166 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10965169 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096516c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1096516f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965172 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10965175 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10965178 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096517b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096517e jb 0x1096514c */
  if (C.cf) goto L_1096514c;
  /* 10965180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10965182 jmp dword ptr [edx*4 + 0x10965238] */
  switch (EDX) {
    case 0: goto L_10965248;
    case 1: goto L_10965250;
    case 2: goto L_1096525c;
    case 3: goto L_10965270;
    default: x86_unimpl("switch@0x10965182 out of table"); return;
  }
  /* 10965189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1096518c:;
  /* 1096518c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1096518e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10965190 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965192 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10965195 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965198 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096519b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096519e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109651a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109651a4 jb 0x1096514c */
  if (C.cf) goto L_1096514c;
  /* 109651a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109651a8 jmp dword ptr [edx*4 + 0x10965238] */
  switch (EDX) {
    case 0: goto L_10965248;
    case 1: goto L_10965250;
    case 2: goto L_1096525c;
    case 3: goto L_10965270;
    default: x86_unimpl("switch@0x109651a8 out of table"); return;
  }
  /* 109651af nop  */
  /* nop */
L_109651b0:;
  /* 109651b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109651b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109651b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109651b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109651b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109651ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109651bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109651be jb 0x1096514c */
  if (C.cf) goto L_1096514c;
  /* 109651c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109651c2 jmp dword ptr [edx*4 + 0x10965238] */
  switch (EDX) {
    case 0: goto L_10965248;
    case 1: goto L_10965250;
    case 2: goto L_1096525c;
    case 3: goto L_10965270;
    default: x86_unimpl("switch@0x109651c2 out of table"); return;
  }
  /* 109651c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109651ec:;
  /* 109651ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 109651f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_109651f4:;
  /* 109651f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 109651f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_109651fc:;
  /* 109651fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10965200 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10965204:;
  /* 10965204 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10965208 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1096520c:;
  /* 1096520c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10965210 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10965214:;
  /* 10965214 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10965218 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1096521c:;
  /* 1096521c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10965220 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10965224 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1096522b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096522d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1096522f:;
  /* 1096522f jmp dword ptr [edx*4 + 0x10965238] */
  switch (EDX) {
    case 0: goto L_10965248;
    case 1: goto L_10965250;
    case 2: goto L_1096525c;
    case 3: goto L_10965270;
    default: x86_unimpl("switch@0x1096522f out of table"); return;
  }
  /* 10965236 mov edi, edi */
  EDI = (EDI);
L_10965248:;
  /* 10965248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1096524b pop esi */
  ESI = (pop32());
  /* 1096524c pop edi */
  EDI = (pop32());
  /* 1096524d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096524e ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 1096524f nop  */
  /* nop */
L_10965250:;
  /* 10965250 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10965252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965257 pop esi */
  ESI = (pop32());
  /* 10965258 pop edi */
  EDI = (pop32());
  /* 10965259 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096525a ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 1096525b nop  */
  /* nop */
L_1096525c:;
  /* 1096525c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1096525e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965260 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10965263 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10965266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965269 pop esi */
  ESI = (pop32());
  /* 1096526a pop edi */
  EDI = (pop32());
  /* 1096526b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096526c ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 1096526d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10965270:;
  /* 10965270 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10965272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965274 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10965277 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096527a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1096527d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10965280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965283 pop esi */
  ESI = (pop32());
  /* 10965284 pop edi */
  EDI = (pop32());
  /* 10965285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10965286 ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 10965287 nop  */
  /* nop */
L_10965288:;
  /* 10965288 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1096528c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10965290 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10965296 jne 0x109652bc */
  if (!C.zf) goto L_109652bc;
  /* 10965298 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1096529b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1096529e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109652a1 jb 0x109652b0 */
  if (C.cf) goto L_109652b0;
  /* 109652a3 std  */
  C.df=1;
  /* 109652a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109652a6 cld  */
  C.df=0;
  /* 109652a7 jmp dword ptr [edx*4 + 0x109653d0] */
  switch (EDX) {
    case 0: goto L_109653e0;
    case 1: goto L_109653e8;
    case 2: goto L_109653f8;
    case 3: goto L_1096540c;
    default: x86_unimpl("switch@0x109652a7 out of table"); return;
  }
  /* 109652ae mov edi, edi */
  EDI = (EDI);
L_109652b0:;
  /* 109652b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109652b2 jmp dword ptr [ecx*4 + 0x10965380] */
  switch (ECX) {
    case 0: goto L_109653c7;
    default: x86_unimpl("switch@0x109652b2 out of table"); return;
  }
  /* 109652b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109652bc:;
  /* 109652bc mov eax, edi */
  EAX = (EDI);
  /* 109652be mov edx, 3 */
  EDX = (0x3u);
  /* 109652c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109652c6 jb 0x109652d4 */
  if (C.cf) goto L_109652d4;
  /* 109652c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109652cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109652cd jmp dword ptr [eax*4 + 0x109652d8] */
  switch (EAX) {
    case 1: goto L_109652e8;
    case 2: goto L_10965308;
    case 3: goto L_10965330;
    default: x86_unimpl("switch@0x109652cd out of table"); return;
  }
L_109652d4:;
  /* 109652d4 jmp dword ptr [ecx*4 + 0x109653d0] */
  switch (ECX) {
    case 0: goto L_109653e0;
    case 1: goto L_109653e8;
    case 2: goto L_109653f8;
    case 3: goto L_1096540c;
    default: x86_unimpl("switch@0x109652d4 out of table"); return;
  }
  /* 109652db nop  */
  /* nop */
L_109652e8:;
  /* 109652e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109652eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109652ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109652f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 109652f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109652f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109652f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109652f8 jb 0x109652b0 */
  if (C.cf) goto L_109652b0;
  /* 109652fa std  */
  C.df=1;
  /* 109652fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109652fd cld  */
  C.df=0;
  /* 109652fe jmp dword ptr [edx*4 + 0x109653d0] */
  switch (EDX) {
    case 0: goto L_109653e0;
    case 1: goto L_109653e8;
    case 2: goto L_109653f8;
    case 3: goto L_1096540c;
    default: x86_unimpl("switch@0x109652fe out of table"); return;
  }
  /* 10965305 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10965308:;
  /* 10965308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096530b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1096530d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10965310 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10965313 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965316 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10965319 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096531c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096531f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965322 jb 0x109652b0 */
  if (C.cf) goto L_109652b0;
  /* 10965324 std  */
  C.df=1;
  /* 10965325 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10965327 cld  */
  C.df=0;
  /* 10965328 jmp dword ptr [edx*4 + 0x109653d0] */
  switch (EDX) {
    case 0: goto L_109653e0;
    case 1: goto L_109653e8;
    case 2: goto L_109653f8;
    case 3: goto L_1096540c;
    default: x86_unimpl("switch@0x10965328 out of table"); return;
  }
  /* 1096532f nop  */
  /* nop */
L_10965330:;
  /* 10965330 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10965333 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10965335 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10965338 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1096533b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1096533e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10965341 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965344 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10965347 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096534a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096534d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965350 jb 0x109652b0 */
  if (C.cf) goto L_109652b0;
  /* 10965356 std  */
  C.df=1;
  /* 10965357 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10965359 cld  */
  C.df=0;
  /* 1096535a jmp dword ptr [edx*4 + 0x109653d0] */
  switch (EDX) {
    case 0: goto L_109653e0;
    case 1: goto L_109653e8;
    case 2: goto L_109653f8;
    case 3: goto L_1096540c;
    default: x86_unimpl("switch@0x1096535a out of table"); return;
  }
  /* 10965361 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10965364 test byte ptr [ebx - 0x6a], dl */
  { uint32_t _r=(r8((uint32_t)(EBX + -0x6a)))&(DL); fl_logic(_r,8); }
  /* 10965367 adc byte ptr [ebx + edx*2 + 0x53941096], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*2 + 0x53941096))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*2 + 0x53941096), (_r)); fl_add(_a,_b,_r,8); }
  /* 1096536e xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 1096536f adc byte ptr [ebx + edx*2 + 0x53a41096], bl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*2 + 0x53a41096))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*2 + 0x53a41096), (_r)); fl_add(_a,_b,_r,8); }
  /* 10965376 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10965377 adc byte ptr [ebx + edx*2 + 0x53b41096], ch */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*2 + 0x53b41096))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*2 + 0x53b41096), (_r)); fl_add(_a,_b,_r,8); }
  /* 1096537e xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10965384 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10965388 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1096538c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10965390 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10965394 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10965398 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1096539c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109653a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109653a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109653a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109653ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 109653b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 109653b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 109653b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 109653bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109653c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109653c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109653c7:;
  /* 109653c7 jmp dword ptr [edx*4 + 0x109653d0] */
  switch (EDX) {
    case 0: goto L_109653e0;
    case 1: goto L_109653e8;
    case 2: goto L_109653f8;
    case 3: goto L_1096540c;
    default: x86_unimpl("switch@0x109653c7 out of table"); return;
  }
  /* 109653ce mov edi, edi */
  EDI = (EDI);
L_109653e0:;
  /* 109653e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109653e3 pop esi */
  ESI = (pop32());
  /* 109653e4 pop edi */
  EDI = (pop32());
  /* 109653e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109653e6 ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 109653e7 nop  */
  /* nop */
L_109653e8:;
  /* 109653e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109653eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109653ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109653f1 pop esi */
  ESI = (pop32());
  /* 109653f2 pop edi */
  EDI = (pop32());
  /* 109653f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109653f4 ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 109653f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109653f8:;
  /* 109653f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109653fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109653fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10965401 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10965404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965407 pop esi */
  ESI = (pop32());
  /* 10965408 pop edi */
  EDI = (pop32());
  /* 10965409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096540a ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
  /* 1096540b nop  */
  /* nop */
L_1096540c:;
  /* 1096540c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096540f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10965412 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10965415 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10965418 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1096541b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096541e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965421 pop esi */
  ESI = (pop32());
  /* 10965422 pop edi */
  EDI = (pop32());
  /* 10965423 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10965424 ret  */
  ESPCHK(0x109650f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005425 @ 0x10965425 (62 bytes, 15 insns) */
void f_10965425(void) {
  FTRACE(0x10965425u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965425 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1096542a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096542c push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10965432 call dword ptr [0x1096703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096703c))), 0x10965438u);
  /* 10965438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1096543a mov dword ptr [0x1096950c], eax */
  w32((uint32_t)(0x1096950c), (EAX));
  /* 1096543f jne 0x10965442 */
  if (!C.zf) goto L_10965442;
  /* 10965441 ret  */
  ESPCHK(0x10965425u, _esp0);
  ESP += 4; return;
L_10965442:;
  /* 10965442 and dword ptr [0x10969504], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10969504)))&(0x0u); w32((uint32_t)(0x10969504), (_r)); fl_logic(_r,32); }
  /* 10965449 and dword ptr [0x10969508], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10969508)))&(0x0u); w32((uint32_t)(0x10969508), (_r)); fl_logic(_r,32); }
  /* 10965450 push 1 */
  push32((uint32_t)(0x1u));
  /* 10965452 mov dword ptr [0x10969500], eax */
  w32((uint32_t)(0x10969500), (EAX));
  /* 10965457 mov dword ptr [0x109694f8], 0x10 */
  w32((uint32_t)(0x109694f8), (0x10u));
  /* 10965461 pop eax */
  EAX = (pop32());
  /* 10965462 ret  */
  ESPCHK(0x10965425u, _esp0);
  ESP += 4; return;
}

/* FUN_10005463 @ 0x10965463 (43 bytes, 14 insns) */
void f_10965463(void) {
  FTRACE(0x10965463u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965463 mov eax, dword ptr [0x10969508] */
  EAX = (r32((uint32_t)(0x10969508)));
  /* 10965468 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1096546b mov eax, dword ptr [0x1096950c] */
  EAX = (r32((uint32_t)(0x1096950c)));
  /* 10965470 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10965473:;
  /* 10965473 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965475 jae 0x1096548b */
  if (!C.cf) goto L_1096548b;
  /* 10965477 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1096547b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096547e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965484 jb 0x1096548d */
  if (C.cf) goto L_1096548d;
  /* 10965486 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965489 jmp 0x10965473 */
  goto L_10965473;
L_1096548b:;
  /* 1096548b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1096548d:;
  /* 1096548d ret  */
  ESPCHK(0x10965463u, _esp0);
  ESP += 4; return;
}

/* FUN_1000548e @ 0x1096548e (811 bytes, 264 insns) */
void f_1096548e(void) {
  FTRACE(0x1096548eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1096548e push ebp */
  push32((uint32_t)(EBP));
  /* 1096548f mov ebp, esp */
  EBP = (ESP);
  /* 10965491 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10965494 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10965497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1096549a push ebx */
  push32((uint32_t)(EBX));
  /* 1096549b push esi */
  push32((uint32_t)(ESI));
  /* 1096549c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1096549f mov esi, edx */
  ESI = (EDX);
  /* 109654a1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109654a4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 109654a7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109654aa push edi */
  push32((uint32_t)(EDI));
  /* 109654ab shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 109654ae mov ecx, esi */
  ECX = (ESI);
  /* 109654b0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 109654b3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109654b9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109654ba mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 109654bd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 109654c4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 109654c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109654ca mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 109654cd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 109654d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109654d3 jne 0x10965554 */
  if (!C.zf) goto L_10965554;
  /* 109654d5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109654d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109654da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109654db pop edi */
  EDI = (pop32());
  /* 109654dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109654df cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109654e1 jbe 0x109654e6 */
  if ((C.cf||C.zf)) goto L_109654e6;
  /* 109654e3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_109654e6:;
  /* 109654e6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 109654ea cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109654ee jne 0x10965538 */
  if (!C.zf) goto L_10965538;
  /* 109654f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109654f3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109654f6 jae 0x10965514 */
  if (!C.cf) goto L_10965514;
  /* 109654f8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 109654fd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 109654ff lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10965503 not edi */
  EDI = (~(EDI));
  /* 10965505 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10965509 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1096550b jne 0x10965538 */
  if (!C.zf) goto L_10965538;
  /* 1096550d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965510 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10965512 jmp 0x10965538 */
  goto L_10965538;
L_10965514:;
  /* 10965514 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965517 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1096551c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1096551e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10965521 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10965525 not edi */
  EDI = (~(EDI));
  /* 10965527 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1096552e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10965530 jne 0x10965538 */
  if (!C.zf) goto L_10965538;
  /* 10965532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965535 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10965538:;
  /* 10965538 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1096553c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10965540 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10965543 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10965547 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1096554b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096554e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10965551 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10965554:;
  /* 10965554 mov edi, ebx */
  EDI = (EBX);
  /* 10965556 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10965559 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1096555a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096555d jbe 0x10965562 */
  if ((C.cf||C.zf)) goto L_10965562;
  /* 1096555f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10965561 pop edi */
  EDI = (pop32());
L_10965562:;
  /* 10965562 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965565 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10965568 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1096556b jne 0x10965611 */
  if (!C.zf) goto L_10965611;
  /* 10965571 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10965574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965577 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1096557a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1096557c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1096557f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965580 pop edx */
  EDX = (pop32());
  /* 10965581 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965583 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10965586 jbe 0x1096558d */
  if ((C.cf||C.zf)) goto L_1096558d;
  /* 10965588 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1096558b mov ecx, edx */
  ECX = (EDX);
L_1096558d:;
  /* 1096558d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965590 mov edi, ebx */
  EDI = (EBX);
  /* 10965592 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10965595 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10965598 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10965599 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096559b jbe 0x1096559f */
  if ((C.cf||C.zf)) goto L_1096559f;
  /* 1096559d mov edi, edx */
  EDI = (EDX);
L_1096559f:;
  /* 1096559f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109655a1 je 0x1096560e */
  if (C.zf) goto L_1096560e;
  /* 109655a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109655a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109655a9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109655ac jne 0x109655f6 */
  if (!C.zf) goto L_109655f6;
  /* 109655ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109655b1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109655b4 jae 0x109655d2 */
  if (!C.cf) goto L_109655d2;
  /* 109655b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109655bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109655bd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 109655c1 not edx */
  EDX = (~(EDX));
  /* 109655c3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 109655c7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 109655c9 jne 0x109655f6 */
  if (!C.zf) goto L_109655f6;
  /* 109655cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109655ce and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 109655d0 jmp 0x109655f6 */
  goto L_109655f6;
L_109655d2:;
  /* 109655d2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109655d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109655da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109655dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109655df lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 109655e3 not edx */
  EDX = (~(EDX));
  /* 109655e5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 109655ec dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 109655ee jne 0x109655f6 */
  if (!C.zf) goto L_109655f6;
  /* 109655f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109655f3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_109655f6:;
  /* 109655f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109655f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109655fc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 109655ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10965602 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10965605 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10965608 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1096560b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1096560e:;
  /* 1096560e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10965611:;
  /* 10965611 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965615 jne 0x10965620 */
  if (!C.zf) goto L_10965620;
  /* 10965617 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096561a je 0x109656a9 */
  if (C.zf) goto L_109656a9;
L_10965620:;
  /* 10965620 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10965623 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10965626 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10965629 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1096562c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1096562f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10965632 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10965635 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10965638 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1096563b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1096563e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10965641 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965644 jne 0x109656a9 */
  if (!C.zf) goto L_109656a9;
  /* 10965646 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1096564a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096564d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10965650 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10965652 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10965656 jae 0x1096567d */
  if (!C.cf) goto L_1096567d;
  /* 10965658 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1096565c jne 0x1096566c */
  if (!C.zf) goto L_1096566c;
  /* 1096565e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10965663 mov ecx, edi */
  ECX = (EDI);
  /* 10965665 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10965667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1096566a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1096566c:;
  /* 1096566c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10965671 mov ecx, edi */
  ECX = (EDI);
  /* 10965673 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10965675 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10965679 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1096567b jmp 0x109656a6 */
  goto L_109656a6;
L_1096567d:;
  /* 1096567d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10965681 jne 0x10965693 */
  if (!C.zf) goto L_10965693;
  /* 10965683 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10965686 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1096568b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1096568d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965690 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10965693:;
  /* 10965693 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10965696 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1096569b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1096569d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 109656a4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_109656a6:;
  /* 109656a6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_109656a9:;
  /* 109656a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109656ac mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 109656ae mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 109656b2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 109656b4 jne 0x109657b4 */
  if (!C.zf) goto L_109657b4;
  /* 109656ba mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 109656bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109656c1 je 0x109657a6 */
  if (C.zf) goto L_109657a6;
  /* 109656c7 mov ecx, dword ptr [0x109694fc] */
  ECX = (r32((uint32_t)(0x109694fc)));
  /* 109656cd mov edi, dword ptr [0x10967050] */
  EDI = (r32((uint32_t)(0x10967050)));
  /* 109656d3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 109656d6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109656d9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 109656de push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 109656e3 push ebx */
  push32((uint32_t)(EBX));
  /* 109656e4 push ecx */
  push32((uint32_t)(ECX));
  /* 109656e5 call edi */
  call_ind((uint32_t)(EDI), 0x109656e7u);
  /* 109656e7 mov ecx, dword ptr [0x109694fc] */
  ECX = (r32((uint32_t)(0x109694fc)));
  /* 109656ed mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 109656f2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109656f7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109656f9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 109656fc mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 10965701 mov ecx, dword ptr [0x109694fc] */
  ECX = (r32((uint32_t)(0x109694fc)));
  /* 10965707 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1096570a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10965712 mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 10965717 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1096571a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1096571d mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 10965722 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10965725 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10965729 jne 0x10965734 */
  if (!C.zf) goto L_10965734;
  /* 1096572b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1096572f mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
L_10965734:;
  /* 10965734 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965738 jne 0x109657a6 */
  if (!C.zf) goto L_109657a6;
  /* 1096573a push ebx */
  push32((uint32_t)(EBX));
  /* 1096573b push 0 */
  push32((uint32_t)(0x0u));
  /* 1096573d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10965740 call edi */
  call_ind((uint32_t)(EDI), 0x10965742u);
  /* 10965742 mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 10965747 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1096574a push 0 */
  push32((uint32_t)(0x0u));
  /* 1096574c push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10965752 call dword ptr [0x1096704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096704c))), 0x10965758u);
  /* 10965758 mov eax, dword ptr [0x10969508] */
  EAX = (r32((uint32_t)(0x10969508)));
  /* 1096575d mov edx, dword ptr [0x1096950c] */
  EDX = (r32((uint32_t)(0x1096950c)));
  /* 10965763 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10965766 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10965769 mov ecx, eax */
  ECX = (EAX);
  /* 1096576b mov eax, dword ptr [0x10969504] */
  EAX = (r32((uint32_t)(0x10969504)));
  /* 10965770 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10965772 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10965776 push ecx */
  push32((uint32_t)(ECX));
  /* 10965777 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1096577a push ecx */
  push32((uint32_t)(ECX));
  /* 1096577b push eax */
  push32((uint32_t)(EAX));
  /* 1096577c call 0x10966210 */
  push32(0x10965781u); f_10966210();
  /* 10965781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965784 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10965787 dec dword ptr [0x10969508] */
  { uint32_t _r=(r32((uint32_t)(0x10969508)))-1; w32((uint32_t)(0x10969508), (_r)); fl_dec(_r,32); }
  /* 1096578d cmp eax, dword ptr [0x10969504] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10969504))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965793 jbe 0x10965798 */
  if ((C.cf||C.zf)) goto L_10965798;
  /* 10965795 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10965798:;
  /* 10965798 mov ecx, dword ptr [0x1096950c] */
  ECX = (r32((uint32_t)(0x1096950c)));
  /* 1096579e mov dword ptr [0x10969500], ecx */
  w32((uint32_t)(0x10969500), (ECX));
  /* 109657a4 jmp 0x109657a9 */
  goto L_109657a9;
L_109657a6:;
  /* 109657a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_109657a9:;
  /* 109657a9 mov dword ptr [0x10969504], eax */
  w32((uint32_t)(0x10969504), (EAX));
  /* 109657ae mov dword ptr [0x109694fc], esi */
  w32((uint32_t)(0x109694fc), (ESI));
L_109657b4:;
  /* 109657b4 pop edi */
  EDI = (pop32());
  /* 109657b5 pop esi */
  ESI = (pop32());
  /* 109657b6 pop ebx */
  EBX = (pop32());
  /* 109657b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109657b8 ret  */
  ESPCHK(0x1096548eu, _esp0);
  ESP += 4; return;
}

/* FUN_100057b9 @ 0x109657b9 (777 bytes, 275 insns) */
void f_109657b9(void) {
  FTRACE(0x109657b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109657b9 push ebp */
  push32((uint32_t)(EBP));
  /* 109657ba mov ebp, esp */
  EBP = (ESP);
  /* 109657bc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109657bf mov eax, dword ptr [0x10969508] */
  EAX = (r32((uint32_t)(0x10969508)));
  /* 109657c4 mov edx, dword ptr [0x1096950c] */
  EDX = (r32((uint32_t)(0x1096950c)));
  /* 109657ca push ebx */
  push32((uint32_t)(EBX));
  /* 109657cb push esi */
  push32((uint32_t)(ESI));
  /* 109657cc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109657cf push edi */
  push32((uint32_t)(EDI));
  /* 109657d0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 109657d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109657d6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 109657d9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 109657dc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 109657df mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109657e2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109657e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109657e6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109657e9 jge 0x109657f9 */
  if ((C.sf==C.of)) goto L_109657f9;
  /* 109657eb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 109657ee shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 109657f0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 109657f4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 109657f7 jmp 0x10965809 */
  goto L_10965809;
L_109657f9:;
  /* 109657f9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109657fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109657ff xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10965801 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10965803 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10965806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10965809:;
  /* 10965809 mov eax, dword ptr [0x10969500] */
  EAX = (r32((uint32_t)(0x10969500)));
  /* 1096580e mov ebx, eax */
  EBX = (EAX);
  /* 10965810 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965812 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10965815 jae 0x10965830 */
  if (!C.cf) goto L_10965830;
L_10965817:;
  /* 10965817 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1096581a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1096581c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1096581f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10965821 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10965823 jne 0x10965830 */
  if (!C.zf) goto L_10965830;
  /* 10965825 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965828 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096582b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1096582e jb 0x10965817 */
  if (C.cf) goto L_10965817;
L_10965830:;
  /* 10965830 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965833 jne 0x109658ae */
  if (!C.zf) goto L_109658ae;
  /* 10965835 mov ebx, edx */
  EBX = (EDX);
L_10965837:;
  /* 10965837 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965839 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1096583c jae 0x10965853 */
  if (!C.cf) goto L_10965853;
  /* 1096583e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10965841 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10965843 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10965846 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10965848 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1096584a jne 0x10965851 */
  if (!C.zf) goto L_10965851;
  /* 1096584c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096584f jmp 0x10965837 */
  goto L_10965837;
L_10965851:;
  /* 10965851 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10965853:;
  /* 10965853 jne 0x109658ae */
  if (!C.zf) goto L_109658ae;
L_10965855:;
  /* 10965855 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965858 jae 0x1096586b */
  if (!C.cf) goto L_1096586b;
  /* 1096585a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096585e jne 0x10965868 */
  if (!C.zf) goto L_10965868;
  /* 10965860 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965863 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10965866 jmp 0x10965855 */
  goto L_10965855;
L_10965868:;
  /* 10965868 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1096586b:;
  /* 1096586b jne 0x10965893 */
  if (!C.zf) goto L_10965893;
  /* 1096586d mov ebx, edx */
  EBX = (EDX);
L_1096586f:;
  /* 1096586f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965871 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10965874 jae 0x10965883 */
  if (!C.cf) goto L_10965883;
  /* 10965876 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096587a jne 0x10965881 */
  if (!C.zf) goto L_10965881;
  /* 1096587c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096587f jmp 0x1096586f */
  goto L_1096586f;
L_10965881:;
  /* 10965881 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10965883:;
  /* 10965883 jne 0x10965893 */
  if (!C.zf) goto L_10965893;
  /* 10965885 call 0x10965ac2 */
  push32(0x1096588au); f_10965ac2();
  /* 1096588a mov ebx, eax */
  EBX = (EAX);
  /* 1096588c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1096588e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10965891 je 0x109658a7 */
  if (C.zf) goto L_109658a7;
L_10965893:;
  /* 10965893 push ebx */
  push32((uint32_t)(EBX));
  /* 10965894 call 0x10965b73 */
  push32(0x10965899u); f_10965b73();
  /* 10965899 pop ecx */
  ECX = (pop32());
  /* 1096589a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1096589d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1096589f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 109658a2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109658a5 jne 0x109658ae */
  if (!C.zf) goto L_109658ae;
L_109658a7:;
  /* 109658a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109658a9 jmp 0x10965abd */
  goto L_10965abd;
L_109658ae:;
  /* 109658ae mov dword ptr [0x10969500], ebx */
  w32((uint32_t)(0x10969500), (EBX));
  /* 109658b4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 109658b7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 109658b9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109658bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109658bf je 0x109658d5 */
  if (C.zf) goto L_109658d5;
  /* 109658c1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 109658c8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 109658cc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 109658cf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 109658d1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 109658d3 jne 0x1096590c */
  if (!C.zf) goto L_1096590c;
L_109658d5:;
  /* 109658d5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 109658db mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 109658de and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 109658e1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 109658e4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109658e8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 109658eb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 109658ed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 109658f0 jne 0x10965909 */
  if (!C.zf) goto L_10965909;
L_109658f2:;
  /* 109658f2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 109658f8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 109658fb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 109658fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965901 mov edi, esi */
  EDI = (ESI);
  /* 10965903 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10965905 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10965907 je 0x109658f2 */
  if (C.zf) goto L_109658f2;
L_10965909:;
  /* 10965909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1096590c:;
  /* 1096590c mov ecx, edx */
  ECX = (EDX);
  /* 1096590e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10965910 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10965916 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1096591d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10965920 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10965924 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10965926 jne 0x10965935 */
  if (!C.zf) goto L_10965935;
  /* 10965928 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1096592f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10965931 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10965934 pop edi */
  EDI = (pop32());
L_10965935:;
  /* 10965935 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10965937 jl 0x1096593e */
  if ((C.sf!=C.of)) goto L_1096593e;
  /* 10965939 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1096593b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1096593c jmp 0x10965935 */
  goto L_10965935;
L_1096593e:;
  /* 1096593e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10965941 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10965945 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10965947 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096594a mov esi, ecx */
  ESI = (ECX);
  /* 1096594c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1096594f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10965952 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10965953 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965956 jle 0x1096595b */
  if ((C.zf||C.sf!=C.of)) goto L_1096595b;
  /* 10965958 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1096595a pop esi */
  ESI = (pop32());
L_1096595b:;
  /* 1096595b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096595d je 0x10965a70 */
  if (C.zf) goto L_10965a70;
  /* 10965963 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10965966 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965969 jne 0x109659cc */
  if (!C.zf) goto L_109659cc;
  /* 1096596b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096596e jge 0x1096599b */
  if ((C.sf==C.of)) goto L_1096599b;
  /* 10965970 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10965975 mov ecx, edi */
  ECX = (EDI);
  /* 10965977 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10965979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1096597c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10965980 not ebx */
  EBX = (~(EBX));
  /* 10965982 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10965985 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10965989 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1096598d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1096598f jne 0x109659c9 */
  if (!C.zf) goto L_109659c9;
  /* 10965991 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965994 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10965997 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10965999 jmp 0x109659cc */
  goto L_109659cc;
L_1096599b:;
  /* 1096599b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1096599e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109659a3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109659a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109659a8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 109659ac lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 109659b3 not ebx */
  EBX = (~(EBX));
  /* 109659b5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 109659b7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 109659b9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 109659bc jne 0x109659c9 */
  if (!C.zf) goto L_109659c9;
  /* 109659be mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 109659c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109659c4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 109659c7 jmp 0x109659cc */
  goto L_109659cc;
L_109659c9:;
  /* 109659c9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_109659cc:;
  /* 109659cc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 109659cf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 109659d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109659d6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 109659d9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 109659dc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 109659df mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 109659e2 je 0x10965a7c */
  if (C.zf) goto L_10965a7c;
  /* 109659e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109659eb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 109659ef lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 109659f2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 109659f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109659f8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 109659fb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 109659fe mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10965a01 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10965a04 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965a07 jne 0x10965a6d */
  if (!C.zf) goto L_10965a6d;
  /* 10965a09 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10965a0d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965a10 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10965a13 jge 0x10965a3e */
  if ((C.sf==C.of)) goto L_10965a3e;
  /* 10965a15 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10965a17 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10965a1b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10965a1f jne 0x10965a2c */
  if (!C.zf) goto L_10965a2c;
  /* 10965a21 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10965a26 mov ecx, esi */
  ECX = (ESI);
  /* 10965a28 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10965a2a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10965a2c:;
  /* 10965a2c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10965a31 mov ecx, esi */
  ECX = (ESI);
  /* 10965a33 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10965a35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965a38 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10965a3c jmp 0x10965a6d */
  goto L_10965a6d;
L_10965a3e:;
  /* 10965a3e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10965a40 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10965a44 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10965a48 jne 0x10965a57 */
  if (!C.zf) goto L_10965a57;
  /* 10965a4a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10965a4d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10965a52 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10965a54 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10965a57:;
  /* 10965a57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965a5a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10965a61 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10965a64 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10965a69 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10965a6b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10965a6d:;
  /* 10965a6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10965a70:;
  /* 10965a70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10965a72 je 0x10965a7f */
  if (C.zf) goto L_10965a7f;
  /* 10965a74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10965a76 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10965a7a jmp 0x10965a7f */
  goto L_10965a7f;
L_10965a7c:;
  /* 10965a7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10965a7f:;
  /* 10965a7f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10965a82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965a84 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10965a87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10965a89 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10965a8d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10965a90 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10965a92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10965a94 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10965a97 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10965a99 jne 0x10965ab5 */
  if (!C.zf) goto L_10965ab5;
  /* 10965a9b cmp ebx, dword ptr [0x10969504] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10969504))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965aa1 jne 0x10965ab5 */
  if (!C.zf) goto L_10965ab5;
  /* 10965aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965aa6 cmp ecx, dword ptr [0x109694fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109694fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965aac jne 0x10965ab5 */
  if (!C.zf) goto L_10965ab5;
  /* 10965aae and dword ptr [0x10969504], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10969504)))&(0x0u); w32((uint32_t)(0x10969504), (_r)); fl_logic(_r,32); }
L_10965ab5:;
  /* 10965ab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965ab8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10965aba lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10965abd:;
  /* 10965abd pop edi */
  EDI = (pop32());
  /* 10965abe pop esi */
  ESI = (pop32());
  /* 10965abf pop ebx */
  EBX = (pop32());
  /* 10965ac0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10965ac1 ret  */
  ESPCHK(0x109657b9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac2 @ 0x10965ac2 (177 bytes, 53 insns) */
void f_10965ac2(void) {
  FTRACE(0x10965ac2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965ac2 mov eax, dword ptr [0x10969508] */
  EAX = (r32((uint32_t)(0x10969508)));
  /* 10965ac7 mov ecx, dword ptr [0x109694f8] */
  ECX = (r32((uint32_t)(0x109694f8)));
  /* 10965acd push esi */
  push32((uint32_t)(ESI));
  /* 10965ace push edi */
  push32((uint32_t)(EDI));
  /* 10965acf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10965ad1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965ad3 jne 0x10965b05 */
  if (!C.zf) goto L_10965b05;
  /* 10965ad5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10965ad9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10965adc push eax */
  push32((uint32_t)(EAX));
  /* 10965add push dword ptr [0x1096950c] */
  push32((uint32_t)(r32((uint32_t)(0x1096950c))));
  /* 10965ae3 push edi */
  push32((uint32_t)(EDI));
  /* 10965ae4 push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10965aea call dword ptr [0x10967028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967028))), 0x10965af0u);
  /* 10965af0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965af2 je 0x10965b55 */
  if (C.zf) goto L_10965b55;
  /* 10965af4 add dword ptr [0x109694f8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x109694f8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x109694f8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10965afb mov dword ptr [0x1096950c], eax */
  w32((uint32_t)(0x1096950c), (EAX));
  /* 10965b00 mov eax, dword ptr [0x10969508] */
  EAX = (r32((uint32_t)(0x10969508)));
L_10965b05:;
  /* 10965b05 mov ecx, dword ptr [0x1096950c] */
  ECX = (r32((uint32_t)(0x1096950c)));
  /* 10965b0b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10965b10 push 8 */
  push32((uint32_t)(0x8u));
  /* 10965b12 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10965b15 push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10965b1b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10965b1e call dword ptr [0x1096703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096703c))), 0x10965b24u);
  /* 10965b24 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965b26 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10965b29 je 0x10965b55 */
  if (C.zf) goto L_10965b55;
  /* 10965b2b push 4 */
  push32((uint32_t)(0x4u));
  /* 10965b2d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10965b32 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10965b37 push edi */
  push32((uint32_t)(EDI));
  /* 10965b38 call dword ptr [0x1096702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096702c))), 0x10965b3eu);
  /* 10965b3e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965b40 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10965b43 jne 0x10965b59 */
  if (!C.zf) goto L_10965b59;
  /* 10965b45 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10965b48 push edi */
  push32((uint32_t)(EDI));
  /* 10965b49 push dword ptr [0x10969748] */
  push32((uint32_t)(r32((uint32_t)(0x10969748))));
  /* 10965b4f call dword ptr [0x1096704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096704c))), 0x10965b55u);
L_10965b55:;
  /* 10965b55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10965b57 jmp 0x10965b70 */
  goto L_10965b70;
L_10965b59:;
  /* 10965b59 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10965b5d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10965b5f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10965b62 inc dword ptr [0x10969508] */
  { uint32_t _r=(r32((uint32_t)(0x10969508)))+1; w32((uint32_t)(0x10969508), (_r)); fl_inc(_r,32); }
  /* 10965b68 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10965b6b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10965b6e mov eax, esi */
  EAX = (ESI);
L_10965b70:;
  /* 10965b70 pop edi */
  EDI = (pop32());
  /* 10965b71 pop esi */
  ESI = (pop32());
  /* 10965b72 ret  */
  ESPCHK(0x10965ac2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b73 @ 0x10965b73 (251 bytes, 85 insns) */
void f_10965b73(void) {
  FTRACE(0x10965b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965b73 push ebp */
  push32((uint32_t)(EBP));
  /* 10965b74 mov ebp, esp */
  EBP = (ESP);
  /* 10965b76 push ecx */
  push32((uint32_t)(ECX));
  /* 10965b77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965b7a push ebx */
  push32((uint32_t)(EBX));
  /* 10965b7b push esi */
  push32((uint32_t)(ESI));
  /* 10965b7c push edi */
  push32((uint32_t)(EDI));
  /* 10965b7d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10965b80 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10965b83 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10965b85:;
  /* 10965b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965b87 jl 0x10965b8e */
  if ((C.sf!=C.of)) goto L_10965b8e;
  /* 10965b89 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10965b8b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10965b8c jmp 0x10965b85 */
  goto L_10965b85;
L_10965b8e:;
  /* 10965b8e mov eax, ebx */
  EAX = (EBX);
  /* 10965b90 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10965b92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10965b98 pop edx */
  EDX = (pop32());
  /* 10965b99 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10965ba0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10965ba3:;
  /* 10965ba3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10965ba6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10965ba9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965bac dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10965bad jne 0x10965ba3 */
  if (!C.zf) goto L_10965ba3;
  /* 10965baf mov edi, ebx */
  EDI = (EBX);
  /* 10965bb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10965bb3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10965bb6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10965bb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10965bbe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10965bc3 push edi */
  push32((uint32_t)(EDI));
  /* 10965bc4 call dword ptr [0x1096702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096702c))), 0x10965bcau);
  /* 10965bca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965bcc jne 0x10965bd6 */
  if (!C.zf) goto L_10965bd6;
  /* 10965bce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10965bd1 jmp 0x10965c69 */
  goto L_10965c69;
L_10965bd6:;
  /* 10965bd6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10965bdc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965bde ja 0x10965c1c */
  if ((!C.cf&&!C.zf)) goto L_10965c1c;
  /* 10965be0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10965be3:;
  /* 10965be3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10965be7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10965bee lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10965bf4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10965bfb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10965bfd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10965c03 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10965c06 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10965c10 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965c15 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10965c18 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965c1a jbe 0x10965be3 */
  if ((C.cf||C.zf)) goto L_10965be3;
L_10965c1c:;
  /* 10965c1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10965c1f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10965c22 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10965c29 pop edi */
  EDI = (pop32());
  /* 10965c2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10965c2d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10965c30 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10965c33 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10965c36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10965c39 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10965c3e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10965c45 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10965c48 mov cl, al */
  CL = (AL);
  /* 10965c4a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10965c4c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10965c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10965c51 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10965c54 jne 0x10965c59 */
  if (!C.zf) goto L_10965c59;
  /* 10965c56 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10965c59:;
  /* 10965c59 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10965c5e mov ecx, ebx */
  ECX = (EBX);
  /* 10965c60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10965c62 not edx */
  EDX = (~(EDX));
  /* 10965c64 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10965c67 mov eax, ebx */
  EAX = (EBX);
L_10965c69:;
  /* 10965c69 pop edi */
  EDI = (pop32());
  /* 10965c6a pop esi */
  ESI = (pop32());
  /* 10965c6b pop ebx */
  EBX = (pop32());
  /* 10965c6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10965c6d ret  */
  ESPCHK(0x10965b73u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c6e @ 0x10965c6e (137 bytes, 50 insns) */
void f_10965c6e(void) {
  FTRACE(0x10965c6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965c6e push ebx */
  push32((uint32_t)(EBX));
  /* 10965c6f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10965c71 cmp dword ptr [0x109694bc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x109694bc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965c77 push esi */
  push32((uint32_t)(ESI));
  /* 10965c78 push edi */
  push32((uint32_t)(EDI));
  /* 10965c79 jne 0x10965cbd */
  if (!C.zf) goto L_10965cbd;
  /* 10965c7b push 0x10967460 */
  push32((uint32_t)(0x10967460u));
  /* 10965c80 call dword ptr [0x1096701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096701c))), 0x10965c86u);
  /* 10965c86 mov edi, eax */
  EDI = (EAX);
  /* 10965c88 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965c8a je 0x10965cf3 */
  if (C.zf) goto L_10965cf3;
  /* 10965c8c mov esi, dword ptr [0x10967020] */
  ESI = (r32((uint32_t)(0x10967020)));
  /* 10965c92 push 0x10967454 */
  push32((uint32_t)(0x10967454u));
  /* 10965c97 push edi */
  push32((uint32_t)(EDI));
  /* 10965c98 call esi */
  call_ind((uint32_t)(ESI), 0x10965c9au);
  /* 10965c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965c9c mov dword ptr [0x109694bc], eax */
  w32((uint32_t)(0x109694bc), (EAX));
  /* 10965ca1 je 0x10965cf3 */
  if (C.zf) goto L_10965cf3;
  /* 10965ca3 push 0x10967444 */
  push32((uint32_t)(0x10967444u));
  /* 10965ca8 push edi */
  push32((uint32_t)(EDI));
  /* 10965ca9 call esi */
  call_ind((uint32_t)(ESI), 0x10965cabu);
  /* 10965cab push 0x10967430 */
  push32((uint32_t)(0x10967430u));
  /* 10965cb0 push edi */
  push32((uint32_t)(EDI));
  /* 10965cb1 mov dword ptr [0x109694c0], eax */
  w32((uint32_t)(0x109694c0), (EAX));
  /* 10965cb6 call esi */
  call_ind((uint32_t)(ESI), 0x10965cb8u);
  /* 10965cb8 mov dword ptr [0x109694c4], eax */
  w32((uint32_t)(0x109694c4), (EAX));
L_10965cbd:;
  /* 10965cbd mov eax, dword ptr [0x109694c0] */
  EAX = (r32((uint32_t)(0x109694c0)));
  /* 10965cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965cc4 je 0x10965cdc */
  if (C.zf) goto L_10965cdc;
  /* 10965cc6 call eax */
  call_ind((uint32_t)(EAX), 0x10965cc8u);
  /* 10965cc8 mov ebx, eax */
  EBX = (EAX);
  /* 10965cca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10965ccc je 0x10965cdc */
  if (C.zf) goto L_10965cdc;
  /* 10965cce mov eax, dword ptr [0x109694c4] */
  EAX = (r32((uint32_t)(0x109694c4)));
  /* 10965cd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965cd5 je 0x10965cdc */
  if (C.zf) goto L_10965cdc;
  /* 10965cd7 push ebx */
  push32((uint32_t)(EBX));
  /* 10965cd8 call eax */
  call_ind((uint32_t)(EAX), 0x10965cdau);
  /* 10965cda mov ebx, eax */
  EBX = (EAX);
L_10965cdc:;
  /* 10965cdc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10965ce0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10965ce4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10965ce8 push ebx */
  push32((uint32_t)(EBX));
  /* 10965ce9 call dword ptr [0x109694bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109694bc))), 0x10965cefu);
L_10965cef:;
  /* 10965cef pop edi */
  EDI = (pop32());
  /* 10965cf0 pop esi */
  ESI = (pop32());
  /* 10965cf1 pop ebx */
  EBX = (pop32());
  /* 10965cf2 ret  */
  ESPCHK(0x10965c6eu, _esp0);
  ESP += 4; return;
L_10965cf3:;
  /* 10965cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10965cf5 jmp 0x10965cef */
  goto L_10965cef;
}

/* _strncpy @ 0x10965d00 (254 bytes, 109 insns) */
void f_10965d00(void) {
  FTRACE(0x10965d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965d00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10965d04 push edi */
  push32((uint32_t)(EDI));
  /* 10965d05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10965d07 je 0x10965d83 */
  if (C.zf) goto L_10965d83;
  /* 10965d09 push esi */
  push32((uint32_t)(ESI));
  /* 10965d0a push ebx */
  push32((uint32_t)(EBX));
  /* 10965d0b mov ebx, ecx */
  EBX = (ECX);
  /* 10965d0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10965d11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10965d17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10965d1b jne 0x10965d24 */
  if (!C.zf) goto L_10965d24;
  /* 10965d1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965d20 jne 0x10965d91 */
  if (!C.zf) goto L_10965d91;
  /* 10965d22 jmp 0x10965d45 */
  goto L_10965d45;
L_10965d24:;
  /* 10965d24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10965d26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10965d27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965d29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10965d2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965d2b je 0x10965d52 */
  if (C.zf) goto L_10965d52;
  /* 10965d2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10965d2f je 0x10965d5a */
  if (C.zf) goto L_10965d5a;
  /* 10965d31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10965d37 jne 0x10965d24 */
  if (!C.zf) goto L_10965d24;
  /* 10965d39 mov ebx, ecx */
  EBX = (ECX);
  /* 10965d3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965d3e jne 0x10965d91 */
  if (!C.zf) goto L_10965d91;
L_10965d40:;
  /* 10965d40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10965d43 je 0x10965d52 */
  if (C.zf) goto L_10965d52;
L_10965d45:;
  /* 10965d45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10965d47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10965d48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965d4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10965d4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10965d4d je 0x10965d7e */
  if (C.zf) goto L_10965d7e;
  /* 10965d4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10965d50 jne 0x10965d45 */
  if (!C.zf) goto L_10965d45;
L_10965d52:;
  /* 10965d52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10965d56 pop ebx */
  EBX = (pop32());
  /* 10965d57 pop esi */
  ESI = (pop32());
  /* 10965d58 pop edi */
  EDI = (pop32());
  /* 10965d59 ret  */
  ESPCHK(0x10965d00u, _esp0);
  ESP += 4; return;
L_10965d5a:;
  /* 10965d5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10965d60 je 0x10965d74 */
  if (C.zf) goto L_10965d74;
L_10965d62:;
  /* 10965d62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965d64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10965d65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965d66 je 0x10965df6 */
  if (C.zf) goto L_10965df6;
  /* 10965d6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10965d72 jne 0x10965d62 */
  if (!C.zf) goto L_10965d62;
L_10965d74:;
  /* 10965d74 mov ebx, ecx */
  EBX = (ECX);
  /* 10965d76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965d79 jne 0x10965de7 */
  if (!C.zf) goto L_10965de7;
L_10965d7b:;
  /* 10965d7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965d7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10965d7e:;
  /* 10965d7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10965d7f jne 0x10965d7b */
  if (!C.zf) goto L_10965d7b;
  /* 10965d81 pop ebx */
  EBX = (pop32());
  /* 10965d82 pop esi */
  ESI = (pop32());
L_10965d83:;
  /* 10965d83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10965d87 pop edi */
  EDI = (pop32());
  /* 10965d88 ret  */
  ESPCHK(0x10965d00u, _esp0);
  ESP += 4; return;
L_10965d89:;
  /* 10965d89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10965d8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10965d8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965d8f je 0x10965d40 */
  if (C.zf) goto L_10965d40;
L_10965d91:;
  /* 10965d91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10965d96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10965d98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965d9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10965d9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10965d9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10965da1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10965da4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10965da9 je 0x10965d89 */
  if (C.zf) goto L_10965d89;
  /* 10965dab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10965dad je 0x10965ddb */
  if (C.zf) goto L_10965ddb;
  /* 10965daf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10965db1 je 0x10965dd1 */
  if (C.zf) goto L_10965dd1;
  /* 10965db3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10965db9 je 0x10965dc7 */
  if (C.zf) goto L_10965dc7;
  /* 10965dbb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10965dc1 jne 0x10965d89 */
  if (!C.zf) goto L_10965d89;
  /* 10965dc3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10965dc5 jmp 0x10965ddf */
  goto L_10965ddf;
L_10965dc7:;
  /* 10965dc7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10965dcd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10965dcf jmp 0x10965ddf */
  goto L_10965ddf;
L_10965dd1:;
  /* 10965dd1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10965dd7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10965dd9 jmp 0x10965ddf */
  goto L_10965ddf;
L_10965ddb:;
  /* 10965ddb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10965ddd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10965ddf:;
  /* 10965ddf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10965de2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10965de4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965de5 je 0x10965df1 */
  if (C.zf) goto L_10965df1;
L_10965de7:;
  /* 10965de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10965de9:;
  /* 10965de9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10965deb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10965dee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965def jne 0x10965de9 */
  if (!C.zf) goto L_10965de9;
L_10965df1:;
  /* 10965df1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10965df4 jne 0x10965d7b */
  if (!C.zf) goto L_10965d7b;
L_10965df6:;
  /* 10965df6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10965dfa pop ebx */
  EBX = (pop32());
  /* 10965dfb pop esi */
  ESI = (pop32());
  /* 10965dfc pop edi */
  EDI = (pop32());
  /* 10965dfd ret  */
  ESPCHK(0x10965d00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10965e00 (88 bytes, 40 insns) */
void f_10965e00(void) {
  FTRACE(0x10965e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965e00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10965e04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10965e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10965e0a je 0x10965e53 */
  if (C.zf) goto L_10965e53;
  /* 10965e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10965e0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10965e12 push edi */
  push32((uint32_t)(EDI));
  /* 10965e13 mov edi, ecx */
  EDI = (ECX);
  /* 10965e15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965e18 jb 0x10965e47 */
  if (C.cf) goto L_10965e47;
  /* 10965e1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10965e1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10965e1f je 0x10965e29 */
  if (C.zf) goto L_10965e29;
  /* 10965e21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10965e23:;
  /* 10965e23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965e25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10965e26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10965e27 jne 0x10965e23 */
  if (!C.zf) goto L_10965e23;
L_10965e29:;
  /* 10965e29 mov ecx, eax */
  ECX = (EAX);
  /* 10965e2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10965e2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965e30 mov ecx, eax */
  ECX = (EAX);
  /* 10965e32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10965e35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965e37 mov ecx, edx */
  ECX = (EDX);
  /* 10965e39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10965e3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10965e3f je 0x10965e47 */
  if (C.zf) goto L_10965e47;
  /* 10965e41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10965e43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10965e45 je 0x10965e4d */
  if (C.zf) goto L_10965e4d;
L_10965e47:;
  /* 10965e47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10965e49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10965e4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10965e4b jne 0x10965e47 */
  if (!C.zf) goto L_10965e47;
L_10965e4d:;
  /* 10965e4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10965e51 pop edi */
  EDI = (pop32());
  /* 10965e52 ret  */
  ESPCHK(0x10965e00u, _esp0);
  ESP += 4; return;
L_10965e53:;
  /* 10965e53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10965e57 ret  */
  ESPCHK(0x10965e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e58 @ 0x10965e58 (27 bytes, 13 insns) */
void f_10965e58(void) {
  FTRACE(0x10965e58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965e58 mov eax, dword ptr [0x109694c8] */
  EAX = (r32((uint32_t)(0x109694c8)));
  /* 10965e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965e5f je 0x10965e70 */
  if (C.zf) goto L_10965e70;
  /* 10965e61 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10965e65 call eax */
  call_ind((uint32_t)(EAX), 0x10965e67u);
  /* 10965e67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965e69 pop ecx */
  ECX = (pop32());
  /* 10965e6a je 0x10965e70 */
  if (C.zf) goto L_10965e70;
  /* 10965e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10965e6e pop eax */
  EAX = (pop32());
  /* 10965e6f ret  */
  ESPCHK(0x10965e58u, _esp0);
  ESP += 4; return;
L_10965e70:;
  /* 10965e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10965e72 ret  */
  ESPCHK(0x10965e58u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e73 @ 0x10965e73 (511 bytes, 193 insns) */
void f_10965e73(void) {
  FTRACE(0x10965e73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10965e73 push ebp */
  push32((uint32_t)(EBP));
  /* 10965e74 mov ebp, esp */
  EBP = (ESP);
  /* 10965e76 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10965e78 push 0x10967478 */
  push32((uint32_t)(0x10967478u));
  /* 10965e7d push 0x10966640 */
  push32((uint32_t)(0x10966640u));
  /* 10965e82 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10965e88 push eax */
  push32((uint32_t)(EAX));
  /* 10965e89 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10965e90 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10965e93 push ebx */
  push32((uint32_t)(EBX));
  /* 10965e94 push esi */
  push32((uint32_t)(ESI));
  /* 10965e95 push edi */
  push32((uint32_t)(EDI));
  /* 10965e96 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10965e99 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10965e9b cmp dword ptr [0x109694f0], edi */
  { uint32_t _a=(r32((uint32_t)(0x109694f0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965ea1 jne 0x10965ee9 */
  if (!C.zf) goto L_10965ee9;
  /* 10965ea3 push edi */
  push32((uint32_t)(EDI));
  /* 10965ea4 push edi */
  push32((uint32_t)(EDI));
  /* 10965ea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10965ea7 pop ebx */
  EBX = (pop32());
  /* 10965ea8 push ebx */
  push32((uint32_t)(EBX));
  /* 10965ea9 push 0x10967470 */
  push32((uint32_t)(0x10967470u));
  /* 10965eae mov esi, 0x100 */
  ESI = (0x100u);
  /* 10965eb3 push esi */
  push32((uint32_t)(ESI));
  /* 10965eb4 push edi */
  push32((uint32_t)(EDI));
  /* 10965eb5 call dword ptr [0x10967010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967010))), 0x10965ebbu);
  /* 10965ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965ebd je 0x10965ec7 */
  if (C.zf) goto L_10965ec7;
  /* 10965ebf mov dword ptr [0x109694f0], ebx */
  w32((uint32_t)(0x109694f0), (EBX));
  /* 10965ec5 jmp 0x10965ee9 */
  goto L_10965ee9;
L_10965ec7:;
  /* 10965ec7 push edi */
  push32((uint32_t)(EDI));
  /* 10965ec8 push edi */
  push32((uint32_t)(EDI));
  /* 10965ec9 push ebx */
  push32((uint32_t)(EBX));
  /* 10965eca push 0x1096746c */
  push32((uint32_t)(0x1096746cu));
  /* 10965ecf push esi */
  push32((uint32_t)(ESI));
  /* 10965ed0 push edi */
  push32((uint32_t)(EDI));
  /* 10965ed1 call dword ptr [0x10967014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967014))), 0x10965ed7u);
  /* 10965ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965ed9 je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 10965edf mov dword ptr [0x109694f0], 2 */
  w32((uint32_t)(0x109694f0), (0x2u));
L_10965ee9:;
  /* 10965ee9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965eec jle 0x10965efe */
  if ((C.zf||C.sf!=C.of)) goto L_10965efe;
  /* 10965eee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10965ef1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10965ef4 call 0x10966097 */
  push32(0x10965ef9u); f_10966097();
  /* 10965ef9 pop ecx */
  ECX = (pop32());
  /* 10965efa pop ecx */
  ECX = (pop32());
  /* 10965efb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10965efe:;
  /* 10965efe mov eax, dword ptr [0x109694f0] */
  EAX = (r32((uint32_t)(0x109694f0)));
  /* 10965f03 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965f06 jne 0x10965f25 */
  if (!C.zf) goto L_10965f25;
  /* 10965f08 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10965f0b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10965f0e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10965f11 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10965f14 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10965f17 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10965f1a call dword ptr [0x10967014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967014))), 0x10965f20u);
  /* 10965f20 jmp 0x10966003 */
  goto L_10966003;
L_10965f25:;
  /* 10965f25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965f28 jne 0x10966001 */
  if (!C.zf) goto L_10966001;
  /* 10965f2e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965f31 jne 0x10965f3b */
  if (!C.zf) goto L_10965f3b;
  /* 10965f33 mov eax, dword ptr [0x109694e8] */
  EAX = (r32((uint32_t)(0x109694e8)));
  /* 10965f38 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10965f3b:;
  /* 10965f3b push edi */
  push32((uint32_t)(EDI));
  /* 10965f3c push edi */
  push32((uint32_t)(EDI));
  /* 10965f3d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10965f40 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10965f43 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10965f46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10965f48 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10965f4a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10965f4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10965f4e push eax */
  push32((uint32_t)(EAX));
  /* 10965f4f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10965f52 call dword ptr [0x10967024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967024))), 0x10965f58u);
  /* 10965f58 mov ebx, eax */
  EBX = (EAX);
  /* 10965f5a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10965f5d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965f5f je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 10965f65 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10965f68 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10965f6b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10965f6e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10965f70 call 0x10966720 */
  push32(0x10965f75u); f_10966720();
  /* 10965f75 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10965f78 mov eax, esp */
  EAX = (ESP);
  /* 10965f7a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10965f7d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10965f81 jmp 0x10965f96 */
  goto L_10965f96;
  /* 10965f83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10965f85 pop eax */
  EAX = (pop32());
  /* 10965f86 ret  */
  ESPCHK(0x10965e73u, _esp0);
  ESP += 4; return;
  /* 10965f87 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10965f8a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10965f8c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10965f8f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10965f93 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10965f96:;
  /* 10965f96 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965f99 je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 10965f9b push ebx */
  push32((uint32_t)(EBX));
  /* 10965f9c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10965f9f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10965fa2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10965fa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10965fa7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10965faa call dword ptr [0x10967024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967024))), 0x10965fb0u);
  /* 10965fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965fb2 je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 10965fb4 push edi */
  push32((uint32_t)(EDI));
  /* 10965fb5 push edi */
  push32((uint32_t)(EDI));
  /* 10965fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10965fb7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10965fba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10965fbd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10965fc0 call dword ptr [0x10967010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967010))), 0x10965fc6u);
  /* 10965fc6 mov esi, eax */
  ESI = (EAX);
  /* 10965fc8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10965fcb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965fcd je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 10965fcf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10965fd3 je 0x10966015 */
  if (C.zf) goto L_10966015;
  /* 10965fd5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965fd8 je 0x10966090 */
  if (C.zf) goto L_10966090;
  /* 10965fde cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10965fe1 jg 0x10966001 */
  if ((!C.zf&&C.sf==C.of)) goto L_10966001;
  /* 10965fe3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10965fe6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10965fe9 push ebx */
  push32((uint32_t)(EBX));
  /* 10965fea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10965fed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10965ff0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10965ff3 call dword ptr [0x10967010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967010))), 0x10965ff9u);
  /* 10965ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10965ffb jne 0x10966090 */
  if (!C.zf) goto L_10966090;
L_10966001:;
  /* 10966001 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10966003:;
  /* 10966003 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10966006 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10966009 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10966010 pop edi */
  EDI = (pop32());
  /* 10966011 pop esi */
  ESI = (pop32());
  /* 10966012 pop ebx */
  EBX = (pop32());
  /* 10966013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10966014 ret  */
  ESPCHK(0x10965e73u, _esp0);
  ESP += 4; return;
L_10966015:;
  /* 10966015 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1096601c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1096601f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10966022 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10966024 call 0x10966720 */
  push32(0x10966029u); f_10966720();
  /* 10966029 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1096602c mov ebx, esp */
  EBX = (ESP);
  /* 1096602e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10966031 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10966035 jmp 0x10966049 */
  goto L_10966049;
  /* 10966037 push 1 */
  push32((uint32_t)(0x1u));
  /* 10966039 pop eax */
  EAX = (pop32());
  /* 1096603a ret  */
  ESPCHK(0x10965e73u, _esp0);
  ESP += 4; return;
  /* 1096603b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1096603e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10966040 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10966042 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10966046 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10966049:;
  /* 10966049 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096604b je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 1096604d push esi */
  push32((uint32_t)(ESI));
  /* 1096604e push ebx */
  push32((uint32_t)(EBX));
  /* 1096604f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10966052 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10966055 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10966058 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1096605b call dword ptr [0x10967010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967010))), 0x10966061u);
  /* 10966061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10966063 je 0x10966001 */
  if (C.zf) goto L_10966001;
  /* 10966065 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966068 push edi */
  push32((uint32_t)(EDI));
  /* 10966069 push edi */
  push32((uint32_t)(EDI));
  /* 1096606a jne 0x10966070 */
  if (!C.zf) goto L_10966070;
  /* 1096606c push edi */
  push32((uint32_t)(EDI));
  /* 1096606d push edi */
  push32((uint32_t)(EDI));
  /* 1096606e jmp 0x10966076 */
  goto L_10966076;
L_10966070:;
  /* 10966070 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10966073 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10966076:;
  /* 10966076 push esi */
  push32((uint32_t)(ESI));
  /* 10966077 push ebx */
  push32((uint32_t)(EBX));
  /* 10966078 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1096607d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10966080 call dword ptr [0x10967064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967064))), 0x10966086u);
  /* 10966086 mov esi, eax */
  ESI = (EAX);
  /* 10966088 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096608a je 0x10966001 */
  if (C.zf) goto L_10966001;
L_10966090:;
  /* 10966090 mov eax, esi */
  EAX = (ESI);
  /* 10966092 jmp 0x10966003 */
  goto L_10966003;
}

/* FUN_10006097 @ 0x10966097 (43 bytes, 20 insns) */
void f_10966097(void) {
  FTRACE(0x10966097u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10966097 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1096609b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1096609f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109660a1 push esi */
  push32((uint32_t)(ESI));
  /* 109660a2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 109660a5 je 0x109660b4 */
  if (C.zf) goto L_109660b4;
L_109660a7:;
  /* 109660a7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109660aa je 0x109660b4 */
  if (C.zf) goto L_109660b4;
  /* 109660ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109660ad mov esi, ecx */
  ESI = (ECX);
  /* 109660af dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109660b0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109660b2 jne 0x109660a7 */
  if (!C.zf) goto L_109660a7;
L_109660b4:;
  /* 109660b4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109660b7 pop esi */
  ESI = (pop32());
  /* 109660b8 jne 0x109660bf */
  if (!C.zf) goto L_109660bf;
  /* 109660ba sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109660be ret  */
  ESPCHK(0x10966097u, _esp0);
  ESP += 4; return;
L_109660bf:;
  /* 109660bf mov eax, edx */
  EAX = (EDX);
  /* 109660c1 ret  */
  ESPCHK(0x10966097u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c2 @ 0x109660c2 (318 bytes, 123 insns) */
void f_109660c2(void) {
  FTRACE(0x109660c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109660c2 push ebp */
  push32((uint32_t)(EBP));
  /* 109660c3 mov ebp, esp */
  EBP = (ESP);
  /* 109660c5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109660c7 push 0x10967490 */
  push32((uint32_t)(0x10967490u));
  /* 109660cc push 0x10966640 */
  push32((uint32_t)(0x10966640u));
  /* 109660d1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109660d7 push eax */
  push32((uint32_t)(EAX));
  /* 109660d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109660df sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109660e2 push ebx */
  push32((uint32_t)(EBX));
  /* 109660e3 push esi */
  push32((uint32_t)(ESI));
  /* 109660e4 push edi */
  push32((uint32_t)(EDI));
  /* 109660e5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109660e8 mov eax, dword ptr [0x109694f4] */
  EAX = (r32((uint32_t)(0x109694f4)));
  /* 109660ed xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109660ef cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109660f1 jne 0x10966131 */
  if (!C.zf) goto L_10966131;
  /* 109660f3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 109660f6 push eax */
  push32((uint32_t)(EAX));
  /* 109660f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109660f9 pop esi */
  ESI = (pop32());
  /* 109660fa push esi */
  push32((uint32_t)(ESI));
  /* 109660fb push 0x10967470 */
  push32((uint32_t)(0x10967470u));
  /* 10966100 push esi */
  push32((uint32_t)(ESI));
  /* 10966101 call dword ptr [0x1096700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096700c))), 0x10966107u);
  /* 10966107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10966109 je 0x1096610f */
  if (C.zf) goto L_1096610f;
  /* 1096610b mov eax, esi */
  EAX = (ESI);
  /* 1096610d jmp 0x1096612c */
  goto L_1096612c;
L_1096610f:;
  /* 1096610f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10966112 push eax */
  push32((uint32_t)(EAX));
  /* 10966113 push esi */
  push32((uint32_t)(ESI));
  /* 10966114 push 0x1096746c */
  push32((uint32_t)(0x1096746cu));
  /* 10966119 push esi */
  push32((uint32_t)(ESI));
  /* 1096611a push ebx */
  push32((uint32_t)(EBX));
  /* 1096611b call dword ptr [0x10967018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967018))), 0x10966121u);
  /* 10966121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10966123 je 0x109661f7 */
  if (C.zf) goto L_109661f7;
  /* 10966129 push 2 */
  push32((uint32_t)(0x2u));
  /* 1096612b pop eax */
  EAX = (pop32());
L_1096612c:;
  /* 1096612c mov dword ptr [0x109694f4], eax */
  w32((uint32_t)(0x109694f4), (EAX));
L_10966131:;
  /* 10966131 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966134 jne 0x1096615a */
  if (!C.zf) goto L_1096615a;
  /* 10966136 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10966139 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096613b jne 0x10966142 */
  if (!C.zf) goto L_10966142;
  /* 1096613d mov eax, dword ptr [0x109694d8] */
  EAX = (r32((uint32_t)(0x109694d8)));
L_10966142:;
  /* 10966142 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10966145 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10966148 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1096614b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1096614e push eax */
  push32((uint32_t)(EAX));
  /* 1096614f call dword ptr [0x10967018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967018))), 0x10966155u);
  /* 10966155 jmp 0x109661f9 */
  goto L_109661f9;
L_1096615a:;
  /* 1096615a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096615d jne 0x109661f7 */
  if (!C.zf) goto L_109661f7;
  /* 10966163 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966166 jne 0x10966170 */
  if (!C.zf) goto L_10966170;
  /* 10966168 mov eax, dword ptr [0x109694e8] */
  EAX = (r32((uint32_t)(0x109694e8)));
  /* 1096616d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10966170:;
  /* 10966170 push ebx */
  push32((uint32_t)(EBX));
  /* 10966171 push ebx */
  push32((uint32_t)(EBX));
  /* 10966172 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10966175 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10966178 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1096617b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1096617d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096617f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10966182 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10966183 push eax */
  push32((uint32_t)(EAX));
  /* 10966184 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10966187 call dword ptr [0x10967024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967024))), 0x1096618du);
  /* 1096618d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10966190 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966192 je 0x109661f7 */
  if (C.zf) goto L_109661f7;
  /* 10966194 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10966197 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1096619a mov eax, edi */
  EAX = (EDI);
  /* 1096619c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096619f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109661a1 call 0x10966720 */
  push32(0x109661a6u); f_10966720();
  /* 109661a6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109661a9 mov esi, esp */
  ESI = (ESP);
  /* 109661ab mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 109661ae push edi */
  push32((uint32_t)(EDI));
  /* 109661af push ebx */
  push32((uint32_t)(EBX));
  /* 109661b0 push esi */
  push32((uint32_t)(ESI));
  /* 109661b1 call 0x10965e00 */
  push32(0x109661b6u); f_10965e00();
  /* 109661b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109661b9 jmp 0x109661c6 */
  goto L_109661c6;
  /* 109661bb push 1 */
  push32((uint32_t)(0x1u));
  /* 109661bd pop eax */
  EAX = (pop32());
  /* 109661be ret  */
  ESPCHK(0x109660c2u, _esp0);
  ESP += 4; return;
  /* 109661bf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109661c2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109661c4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_109661c6:;
  /* 109661c6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109661ca cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109661cc je 0x109661f7 */
  if (C.zf) goto L_109661f7;
  /* 109661ce push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 109661d1 push esi */
  push32((uint32_t)(ESI));
  /* 109661d2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109661d5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109661d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109661da push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 109661dd call dword ptr [0x10967024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10967024))), 0x109661e3u);
  /* 109661e3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109661e5 je 0x109661f7 */
  if (C.zf) goto L_109661f7;
  /* 109661e7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 109661ea push eax */
  push32((uint32_t)(EAX));
  /* 109661eb push esi */
  push32((uint32_t)(ESI));
  /* 109661ec push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109661ef call dword ptr [0x1096700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1096700c))), 0x109661f5u);
  /* 109661f5 jmp 0x109661f9 */
  goto L_109661f9;
L_109661f7:;
  /* 109661f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109661f9:;
  /* 109661f9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 109661fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109661ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10966206 pop edi */
  EDI = (pop32());
  /* 10966207 pop esi */
  ESI = (pop32());
  /* 10966208 pop ebx */
  EBX = (pop32());
  /* 10966209 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096620a ret  */
  ESPCHK(0x109660c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x10966210 (664 bytes, 261 insns) [15 switch table(s)] */
void f_10966210(void) {
  FTRACE(0x10966210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10966210 push ebp */
  push32((uint32_t)(EBP));
  /* 10966211 mov ebp, esp */
  EBP = (ESP);
  /* 10966213 push edi */
  push32((uint32_t)(EDI));
  /* 10966214 push esi */
  push32((uint32_t)(ESI));
  /* 10966215 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10966218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1096621b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1096621e mov eax, ecx */
  EAX = (ECX);
  /* 10966220 mov edx, ecx */
  EDX = (ECX);
  /* 10966222 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10966224 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966226 jbe 0x10966230 */
  if ((C.cf||C.zf)) goto L_10966230;
  /* 10966228 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096622a jb 0x109663a8 */
  if (C.cf) goto L_109663a8;
L_10966230:;
  /* 10966230 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10966236 jne 0x1096624c */
  if (!C.zf) goto L_1096624c;
  /* 10966238 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1096623b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1096623e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966241 jb 0x1096626c */
  if (C.cf) goto L_1096626c;
  /* 10966243 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10966245 jmp dword ptr [edx*4 + 0x10966358] */
  switch (EDX) {
    case 0: goto L_10966368;
    case 1: goto L_10966370;
    case 2: goto L_1096637c;
    case 3: goto L_10966390;
    default: x86_unimpl("switch@0x10966245 out of table"); return;
  }
L_1096624c:;
  /* 1096624c mov eax, edi */
  EAX = (EDI);
  /* 1096624e mov edx, 3 */
  EDX = (0x3u);
  /* 10966253 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10966256 jb 0x10966264 */
  if (C.cf) goto L_10966264;
  /* 10966258 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1096625b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1096625d jmp dword ptr [eax*4 + 0x10966270] */
  switch (EAX) {
    case 1: goto L_10966280;
    case 2: goto L_109662ac;
    case 3: goto L_109662d0;
    default: x86_unimpl("switch@0x1096625d out of table"); return;
  }
L_10966264:;
  /* 10966264 jmp dword ptr [ecx*4 + 0x10966368] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10966368)))); return;
  /* 1096626b nop  */
  /* nop */
L_1096626c:;
  /* 1096626c jmp dword ptr [ecx*4 + 0x109662ec] */
  switch (ECX) {
    case 0: goto L_1096634f;
    case 1: goto L_1096633c;
    case 2: goto L_10966334;
    case 3: goto L_1096632c;
    case 4: goto L_10966324;
    case 5: goto L_1096631c;
    case 6: goto L_10966314;
    case 7: goto L_1096630c;
    default: x86_unimpl("switch@0x1096626c out of table"); return;
  }
  /* 10966273 nop  */
  /* nop */
L_10966280:;
  /* 10966280 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10966282 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10966284 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10966286 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10966289 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096628c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1096628f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10966292 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10966295 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10966298 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096629b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096629e jb 0x1096626c */
  if (C.cf) goto L_1096626c;
  /* 109662a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109662a2 jmp dword ptr [edx*4 + 0x10966358] */
  switch (EDX) {
    case 0: goto L_10966368;
    case 1: goto L_10966370;
    case 2: goto L_1096637c;
    case 3: goto L_10966390;
    default: x86_unimpl("switch@0x109662a2 out of table"); return;
  }
  /* 109662a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109662ac:;
  /* 109662ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109662ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109662b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109662b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109662b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109662b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109662bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109662be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109662c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109662c4 jb 0x1096626c */
  if (C.cf) goto L_1096626c;
  /* 109662c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109662c8 jmp dword ptr [edx*4 + 0x10966358] */
  switch (EDX) {
    case 0: goto L_10966368;
    case 1: goto L_10966370;
    case 2: goto L_1096637c;
    case 3: goto L_10966390;
    default: x86_unimpl("switch@0x109662c8 out of table"); return;
  }
  /* 109662cf nop  */
  /* nop */
L_109662d0:;
  /* 109662d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109662d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109662d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109662d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109662d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109662da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109662db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109662de jb 0x1096626c */
  if (C.cf) goto L_1096626c;
  /* 109662e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109662e2 jmp dword ptr [edx*4 + 0x10966358] */
  switch (EDX) {
    case 0: goto L_10966368;
    case 1: goto L_10966370;
    case 2: goto L_1096637c;
    case 3: goto L_10966390;
    default: x86_unimpl("switch@0x109662e2 out of table"); return;
  }
  /* 109662e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1096630c:;
  /* 1096630c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10966310 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10966314:;
  /* 10966314 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10966318 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1096631c:;
  /* 1096631c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10966320 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10966324:;
  /* 10966324 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10966328 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1096632c:;
  /* 1096632c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10966330 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10966334:;
  /* 10966334 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10966338 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1096633c:;
  /* 1096633c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10966340 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10966344 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1096634b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1096634d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1096634f:;
  /* 1096634f jmp dword ptr [edx*4 + 0x10966358] */
  switch (EDX) {
    case 0: goto L_10966368;
    case 1: goto L_10966370;
    case 2: goto L_1096637c;
    case 3: goto L_10966390;
    default: x86_unimpl("switch@0x1096634f out of table"); return;
  }
  /* 10966356 mov edi, edi */
  EDI = (EDI);
L_10966368:;
  /* 10966368 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1096636b pop esi */
  ESI = (pop32());
  /* 1096636c pop edi */
  EDI = (pop32());
  /* 1096636d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096636e ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 1096636f nop  */
  /* nop */
L_10966370:;
  /* 10966370 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10966372 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10966374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966377 pop esi */
  ESI = (pop32());
  /* 10966378 pop edi */
  EDI = (pop32());
  /* 10966379 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096637a ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 1096637b nop  */
  /* nop */
L_1096637c:;
  /* 1096637c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1096637e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10966380 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10966383 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10966386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966389 pop esi */
  ESI = (pop32());
  /* 1096638a pop edi */
  EDI = (pop32());
  /* 1096638b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096638c ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 1096638d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10966390:;
  /* 10966390 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10966392 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10966394 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10966397 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096639a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1096639d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109663a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109663a3 pop esi */
  ESI = (pop32());
  /* 109663a4 pop edi */
  EDI = (pop32());
  /* 109663a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109663a6 ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 109663a7 nop  */
  /* nop */
L_109663a8:;
  /* 109663a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109663ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109663b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109663b6 jne 0x109663dc */
  if (!C.zf) goto L_109663dc;
  /* 109663b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109663bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109663be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109663c1 jb 0x109663d0 */
  if (C.cf) goto L_109663d0;
  /* 109663c3 std  */
  C.df=1;
  /* 109663c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109663c6 cld  */
  C.df=0;
  /* 109663c7 jmp dword ptr [edx*4 + 0x109664f0] */
  switch (EDX) {
    case 0: goto L_10966500;
    case 1: goto L_10966508;
    case 2: goto L_10966518;
    case 3: goto L_1096652c;
    default: x86_unimpl("switch@0x109663c7 out of table"); return;
  }
  /* 109663ce mov edi, edi */
  EDI = (EDI);
L_109663d0:;
  /* 109663d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109663d2 jmp dword ptr [ecx*4 + 0x109664a0] */
  switch (ECX) {
    case 0: goto L_109664e7;
    default: x86_unimpl("switch@0x109663d2 out of table"); return;
  }
  /* 109663d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109663dc:;
  /* 109663dc mov eax, edi */
  EAX = (EDI);
  /* 109663de mov edx, 3 */
  EDX = (0x3u);
  /* 109663e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109663e6 jb 0x109663f4 */
  if (C.cf) goto L_109663f4;
  /* 109663e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109663eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109663ed jmp dword ptr [eax*4 + 0x109663f8] */
  switch (EAX) {
    case 1: goto L_10966408;
    case 2: goto L_10966428;
    case 3: goto L_10966450;
    default: x86_unimpl("switch@0x109663ed out of table"); return;
  }
L_109663f4:;
  /* 109663f4 jmp dword ptr [ecx*4 + 0x109664f0] */
  switch (ECX) {
    case 0: goto L_10966500;
    case 1: goto L_10966508;
    case 2: goto L_10966518;
    case 3: goto L_1096652c;
    default: x86_unimpl("switch@0x109663f4 out of table"); return;
  }
  /* 109663fb nop  */
  /* nop */
L_10966408:;
  /* 10966408 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096640b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1096640d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10966410 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10966411 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10966414 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10966415 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966418 jb 0x109663d0 */
  if (C.cf) goto L_109663d0;
  /* 1096641a std  */
  C.df=1;
  /* 1096641b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1096641d cld  */
  C.df=0;
  /* 1096641e jmp dword ptr [edx*4 + 0x109664f0] */
  switch (EDX) {
    case 0: goto L_10966500;
    case 1: goto L_10966508;
    case 2: goto L_10966518;
    case 3: goto L_1096652c;
    default: x86_unimpl("switch@0x1096641e out of table"); return;
  }
  /* 10966425 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10966428:;
  /* 10966428 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096642b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1096642d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10966430 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10966433 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10966436 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10966439 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096643c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096643f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966442 jb 0x109663d0 */
  if (C.cf) goto L_109663d0;
  /* 10966444 std  */
  C.df=1;
  /* 10966445 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10966447 cld  */
  C.df=0;
  /* 10966448 jmp dword ptr [edx*4 + 0x109664f0] */
  switch (EDX) {
    case 0: goto L_10966500;
    case 1: goto L_10966508;
    case 2: goto L_10966518;
    case 3: goto L_1096652c;
    default: x86_unimpl("switch@0x10966448 out of table"); return;
  }
  /* 1096644f nop  */
  /* nop */
L_10966450:;
  /* 10966450 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10966453 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10966455 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10966458 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1096645b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1096645e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10966461 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10966464 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10966467 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096646a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1096646d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966470 jb 0x109663d0 */
  if (C.cf) goto L_109663d0;
  /* 10966476 std  */
  C.df=1;
  /* 10966477 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10966479 cld  */
  C.df=0;
  /* 1096647a jmp dword ptr [edx*4 + 0x109664f0] */
  switch (EDX) {
    case 0: goto L_10966500;
    case 1: goto L_10966508;
    case 2: goto L_10966518;
    case 3: goto L_1096652c;
    default: x86_unimpl("switch@0x1096647a out of table"); return;
  }
  /* 10966481 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10966484 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10966485 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10966487 adc byte ptr [esp + 0x64b41096], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + 0x64b41096))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + 0x64b41096), (_r)); fl_add(_a,_b,_r,8); }
  /* 1096648e xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 1096648f adc byte ptr [esp + 0x64c41096], bh */
  { uint32_t _a=(r8((uint32_t)(ESP + 0x64c41096))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + 0x64c41096), (_r)); fl_add(_a,_b,_r,8); }
  /* 10966496 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 10966497 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10966499 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 1096649b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1096649d xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 109664a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109664a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109664ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109664b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109664b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109664b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109664bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109664c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109664c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109664c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109664cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 109664d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 109664d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 109664d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 109664dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109664e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109664e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109664e7:;
  /* 109664e7 jmp dword ptr [edx*4 + 0x109664f0] */
  switch (EDX) {
    case 0: goto L_10966500;
    case 1: goto L_10966508;
    case 2: goto L_10966518;
    case 3: goto L_1096652c;
    default: x86_unimpl("switch@0x109664e7 out of table"); return;
  }
  /* 109664ee mov edi, edi */
  EDI = (EDI);
L_10966500:;
  /* 10966500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966503 pop esi */
  ESI = (pop32());
  /* 10966504 pop edi */
  EDI = (pop32());
  /* 10966505 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10966506 ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 10966507 nop  */
  /* nop */
L_10966508:;
  /* 10966508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096650b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1096650e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966511 pop esi */
  ESI = (pop32());
  /* 10966512 pop edi */
  EDI = (pop32());
  /* 10966513 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10966514 ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 10966515 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10966518:;
  /* 10966518 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096651b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1096651e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10966521 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10966524 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966527 pop esi */
  ESI = (pop32());
  /* 10966528 pop edi */
  EDI = (pop32());
  /* 10966529 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1096652a ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
  /* 1096652b nop  */
  /* nop */
L_1096652c:;
  /* 1096652c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1096652f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10966532 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10966535 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10966538 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1096653b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1096653e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966541 pop esi */
  ESI = (pop32());
  /* 10966542 pop edi */
  EDI = (pop32());
  /* 10966543 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10966544 ret  */
  ESPCHK(0x10966210u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10966548 (32 bytes, 18 insns) */
void f_10966548(void) {
  FTRACE(0x10966548u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10966548 push ebp */
  push32((uint32_t)(EBP));
  /* 10966549 mov ebp, esp */
  EBP = (ESP);
  /* 1096654b push ebx */
  push32((uint32_t)(EBX));
  /* 1096654c push esi */
  push32((uint32_t)(ESI));
  /* 1096654d push edi */
  push32((uint32_t)(EDI));
  /* 1096654e push ebp */
  push32((uint32_t)(EBP));
  /* 1096654f push 0 */
  push32((uint32_t)(0x0u));
  /* 10966551 push 0 */
  push32((uint32_t)(0x0u));
  /* 10966553 push 0x10966560 */
  push32((uint32_t)(0x10966560u));
  /* 10966558 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1096655b call 0x10966750 */
  push32(0x10966560u); f_10966750();
  /* 10966560 pop ebp */
  EBP = (pop32());
  /* 10966561 pop edi */
  EDI = (pop32());
  /* 10966562 pop esi */
  ESI = (pop32());
  /* 10966563 pop ebx */
  EBX = (pop32());
  /* 10966564 mov esp, ebp */
  ESP = (EBP);
  /* 10966566 pop ebp */
  EBP = (pop32());
  /* 10966567 ret  */
  ESPCHK(0x10966548u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1096658a (104 bytes, 33 insns) */
void f_1096658a(void) {
  FTRACE(0x1096658au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1096658a push ebx */
  push32((uint32_t)(EBX));
  /* 1096658b push esi */
  push32((uint32_t)(ESI));
  /* 1096658c push edi */
  push32((uint32_t)(EDI));
  /* 1096658d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10966591 push eax */
  push32((uint32_t)(EAX));
  /* 10966592 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10966594 push 0x10966568 */
  push32((uint32_t)(0x10966568u));
  /* 10966599 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 109665a0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_109665a7:;
  /* 109665a7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 109665ab mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 109665ae mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 109665b1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109665b4 je 0x109665e4 */
  if (C.zf) goto L_109665e4;
  /* 109665b6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109665ba je 0x109665e4 */
  if (C.zf) goto L_109665e4;
  /* 109665bc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 109665bf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 109665c2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 109665c6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 109665c9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109665ce jne 0x109665e2 */
  if (!C.zf) goto L_109665e2;
  /* 109665d0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 109665d5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 109665d9 call 0x1096661e */
  push32(0x109665deu); f_1096661e();
  /* 109665de call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x109665e2u);
L_109665e2:;
  /* 109665e2 jmp 0x109665a7 */
  goto L_109665a7;
L_109665e4:;
  /* 109665e4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 109665eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109665ee pop edi */
  EDI = (pop32());
  /* 109665ef pop esi */
  ESI = (pop32());
  /* 109665f0 pop ebx */
  EBX = (pop32());
  /* 109665f1 ret  */
  ESPCHK(0x1096658au, _esp0);
  ESP += 4; return;
}

/* FUN_1000661e @ 0x1096661e (24 bytes, 10 insns) */
void f_1096661e(void) {
  FTRACE(0x1096661eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1096661e push ebx */
  push32((uint32_t)(EBX));
  /* 1096661f push ecx */
  push32((uint32_t)(ECX));
  /* 10966620 mov ebx, 0x10968d50 */
  EBX = (0x10968d50u);
  /* 10966625 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10966628 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1096662b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1096662e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10966631 pop ecx */
  ECX = (pop32());
  /* 10966632 pop ebx */
  EBX = (pop32());
  /* 10966633 ret 4 */
  ESPCHK(0x1096661eu, _esp0);
  ESP += 8; return;
}

/* FUN_100066fd @ 0x109666fd (27 bytes, 11 insns) */
void f_109666fd(void) {
  FTRACE(0x109666fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109666fd push ebp */
  push32((uint32_t)(EBP));
  /* 109666fe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10966702 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10966704 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10966707 push eax */
  push32((uint32_t)(EAX));
  /* 10966708 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1096670b push eax */
  push32((uint32_t)(EAX));
  /* 1096670c call 0x1096658a */
  push32(0x10966711u); f_1096658a();
  /* 10966711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10966714 pop ebp */
  EBP = (pop32());
  /* 10966715 ret 4 */
  ESPCHK(0x109666fdu, _esp0);
  ESP += 8; return;
}

/* FUN_10006720 @ 0x10966720 (47 bytes, 17 insns) */
void f_10966720(void) {
  FTRACE(0x10966720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10966720 push ecx */
  push32((uint32_t)(ECX));
  /* 10966721 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10966726 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1096672a jb 0x10966740 */
  if (C.cf) goto L_10966740;
L_1096672c:;
  /* 1096672c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10966732 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10966737 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10966739 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1096673e jae 0x1096672c */
  if (!C.cf) goto L_1096672c;
L_10966740:;
  /* 10966740 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10966742 mov eax, esp */
  EAX = (ESP);
  /* 10966744 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10966746 mov esp, ecx */
  ESP = (ECX);
  /* 10966748 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1096674a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1096674d push eax */
  push32((uint32_t)(EAX));
  /* 1096674e ret  */
  ESPCHK(0x10966720u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10966750 (6 bytes, 1 insns) */
void f_10966750(void) {
  FTRACE(0x10966750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10966750 jmp dword ptr [0x10967008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10967008)))); return;
}

