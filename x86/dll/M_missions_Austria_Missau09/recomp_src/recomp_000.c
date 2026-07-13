#include "recomp.h"

/* FUN_10001000 @ 0x10381000 (20 bytes, 6 insns) */
void f_10381000(void) {
  FTRACE(0x10381000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10381000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10381004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10381005 jne 0x1038100c */
  if (!C.zf) goto L_1038100c;
  /* 10381007 call 0x10381020 */
  push32(0x1038100cu); f_10381020();
L_1038100c:;
  /* 1038100c mov eax, 1 */
  EAX = (0x1u);
  /* 10381011 ret 0xc */
  ESPCHK(0x10381000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10381020 (2944 bytes, 841 insns) */
void f_10381020(void) {
  FTRACE(0x10381020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10381020 push esi */
  push32((uint32_t)(ESI));
  /* 10381021 mov esi, dword ptr [0x10388158] */
  ESI = (r32((uint32_t)(0x10388158)));
  /* 10381027 push edi */
  push32((uint32_t)(EDI));
  /* 10381028 push 0x103895d0 */
  push32((uint32_t)(0x103895d0u));
  /* 1038102d push 0x10389c20 */
  push32((uint32_t)(0x10389c20u));
  /* 10381032 call esi */
  call_ind((uint32_t)(ESI), 0x10381034u);
  /* 10381034 push 0x103895cc */
  push32((uint32_t)(0x103895ccu));
  /* 10381039 push 0x10389c28 */
  push32((uint32_t)(0x10389c28u));
  /* 1038103e call esi */
  call_ind((uint32_t)(ESI), 0x10381040u);
  /* 10381040 push 0x103895c8 */
  push32((uint32_t)(0x103895c8u));
  /* 10381045 push 0x10389c38 */
  push32((uint32_t)(0x10389c38u));
  /* 1038104a call esi */
  call_ind((uint32_t)(ESI), 0x1038104cu);
  /* 1038104c push 0x103895c4 */
  push32((uint32_t)(0x103895c4u));
  /* 10381051 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10381056 call esi */
  call_ind((uint32_t)(ESI), 0x10381058u);
  /* 10381058 push 0x103895c0 */
  push32((uint32_t)(0x103895c0u));
  /* 1038105d push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 10381062 call esi */
  call_ind((uint32_t)(ESI), 0x10381064u);
  /* 10381064 push 0x103895bc */
  push32((uint32_t)(0x103895bcu));
  /* 10381069 push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 1038106e call esi */
  call_ind((uint32_t)(ESI), 0x10381070u);
  /* 10381070 push 0x103895b8 */
  push32((uint32_t)(0x103895b8u));
  /* 10381075 push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 1038107a call esi */
  call_ind((uint32_t)(ESI), 0x1038107cu);
  /* 1038107c push 0x103895b4 */
  push32((uint32_t)(0x103895b4u));
  /* 10381081 push 0x10389c60 */
  push32((uint32_t)(0x10389c60u));
  /* 10381086 call esi */
  call_ind((uint32_t)(ESI), 0x10381088u);
  /* 10381088 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038108b push 0x103895b0 */
  push32((uint32_t)(0x103895b0u));
  /* 10381090 push 0x10389c68 */
  push32((uint32_t)(0x10389c68u));
  /* 10381095 call esi */
  call_ind((uint32_t)(ESI), 0x10381097u);
  /* 10381097 push 0x103895ac */
  push32((uint32_t)(0x103895acu));
  /* 1038109c push 0x10389d18 */
  push32((uint32_t)(0x10389d18u));
  /* 103810a1 call esi */
  call_ind((uint32_t)(ESI), 0x103810a3u);
  /* 103810a3 push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 103810a8 push 0x10389d20 */
  push32((uint32_t)(0x10389d20u));
  /* 103810ad call esi */
  call_ind((uint32_t)(ESI), 0x103810afu);
  /* 103810af push 0x103895a4 */
  push32((uint32_t)(0x103895a4u));
  /* 103810b4 push 0x10389d30 */
  push32((uint32_t)(0x10389d30u));
  /* 103810b9 call esi */
  call_ind((uint32_t)(ESI), 0x103810bbu);
  /* 103810bb push 0x103895a0 */
  push32((uint32_t)(0x103895a0u));
  /* 103810c0 push 0x10389d38 */
  push32((uint32_t)(0x10389d38u));
  /* 103810c5 call esi */
  call_ind((uint32_t)(ESI), 0x103810c7u);
  /* 103810c7 push 0x1038959c */
  push32((uint32_t)(0x1038959cu));
  /* 103810cc push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 103810d1 call esi */
  call_ind((uint32_t)(ESI), 0x103810d3u);
  /* 103810d3 push 0x10389598 */
  push32((uint32_t)(0x10389598u));
  /* 103810d8 push 0x10389d58 */
  push32((uint32_t)(0x10389d58u));
  /* 103810dd call esi */
  call_ind((uint32_t)(ESI), 0x103810dfu);
  /* 103810df push 0x10389594 */
  push32((uint32_t)(0x10389594u));
  /* 103810e4 push 0x10389d68 */
  push32((uint32_t)(0x10389d68u));
  /* 103810e9 call esi */
  call_ind((uint32_t)(ESI), 0x103810ebu);
  /* 103810eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103810ee push 0x10389590 */
  push32((uint32_t)(0x10389590u));
  /* 103810f3 push 0x10389d78 */
  push32((uint32_t)(0x10389d78u));
  /* 103810f8 call esi */
  call_ind((uint32_t)(ESI), 0x103810fau);
  /* 103810fa push 0x1038958c */
  push32((uint32_t)(0x1038958cu));
  /* 103810ff push 0x10389d90 */
  push32((uint32_t)(0x10389d90u));
  /* 10381104 call esi */
  call_ind((uint32_t)(ESI), 0x10381106u);
  /* 10381106 push 0x10389588 */
  push32((uint32_t)(0x10389588u));
  /* 1038110b push 0x10389da8 */
  push32((uint32_t)(0x10389da8u));
  /* 10381110 call esi */
  call_ind((uint32_t)(ESI), 0x10381112u);
  /* 10381112 push 0x10389584 */
  push32((uint32_t)(0x10389584u));
  /* 10381117 push 0x10389d40 */
  push32((uint32_t)(0x10389d40u));
  /* 1038111c call esi */
  call_ind((uint32_t)(ESI), 0x1038111eu);
  /* 1038111e push 0x10389580 */
  push32((uint32_t)(0x10389580u));
  /* 10381123 push 0x10389d50 */
  push32((uint32_t)(0x10389d50u));
  /* 10381128 call esi */
  call_ind((uint32_t)(ESI), 0x1038112au);
  /* 1038112a push 0x1038957c */
  push32((uint32_t)(0x1038957cu));
  /* 1038112f push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 10381134 call esi */
  call_ind((uint32_t)(ESI), 0x10381136u);
  /* 10381136 push 0x10389578 */
  push32((uint32_t)(0x10389578u));
  /* 1038113b push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 10381140 call esi */
  call_ind((uint32_t)(ESI), 0x10381142u);
  /* 10381142 push 0x10389574 */
  push32((uint32_t)(0x10389574u));
  /* 10381147 push 0x10389da0 */
  push32((uint32_t)(0x10389da0u));
  /* 1038114c call esi */
  call_ind((uint32_t)(ESI), 0x1038114eu);
  /* 1038114e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381151 push 0x1038956c */
  push32((uint32_t)(0x1038956cu));
  /* 10381156 push 0x1038a000 */
  push32((uint32_t)(0x1038a000u));
  /* 1038115b call esi */
  call_ind((uint32_t)(ESI), 0x1038115du);
  /* 1038115d push 0x10389564 */
  push32((uint32_t)(0x10389564u));
  /* 10381162 push 0x1038a008 */
  push32((uint32_t)(0x1038a008u));
  /* 10381167 call esi */
  call_ind((uint32_t)(ESI), 0x10381169u);
  /* 10381169 push 0x1038955c */
  push32((uint32_t)(0x1038955cu));
  /* 1038116e push 0x1038a010 */
  push32((uint32_t)(0x1038a010u));
  /* 10381173 call esi */
  call_ind((uint32_t)(ESI), 0x10381175u);
  /* 10381175 push 0x10389554 */
  push32((uint32_t)(0x10389554u));
  /* 1038117a push 0x1038a018 */
  push32((uint32_t)(0x1038a018u));
  /* 1038117f call esi */
  call_ind((uint32_t)(ESI), 0x10381181u);
  /* 10381181 push 0x10389550 */
  push32((uint32_t)(0x10389550u));
  /* 10381186 push 0x10389db8 */
  push32((uint32_t)(0x10389db8u));
  /* 1038118b call esi */
  call_ind((uint32_t)(ESI), 0x1038118du);
  /* 1038118d push 0x10389548 */
  push32((uint32_t)(0x10389548u));
  /* 10381192 push 0x1038a020 */
  push32((uint32_t)(0x1038a020u));
  /* 10381197 call esi */
  call_ind((uint32_t)(ESI), 0x10381199u);
  /* 10381199 push 0x10389540 */
  push32((uint32_t)(0x10389540u));
  /* 1038119e push 0x1038a028 */
  push32((uint32_t)(0x1038a028u));
  /* 103811a3 call esi */
  call_ind((uint32_t)(ESI), 0x103811a5u);
  /* 103811a5 push 0x10389538 */
  push32((uint32_t)(0x10389538u));
  /* 103811aa push 0x1038a030 */
  push32((uint32_t)(0x1038a030u));
  /* 103811af call esi */
  call_ind((uint32_t)(ESI), 0x103811b1u);
  /* 103811b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103811b4 push 0x10389534 */
  push32((uint32_t)(0x10389534u));
  /* 103811b9 push 0x10389dc8 */
  push32((uint32_t)(0x10389dc8u));
  /* 103811be call esi */
  call_ind((uint32_t)(ESI), 0x103811c0u);
  /* 103811c0 push 0x1038952c */
  push32((uint32_t)(0x1038952cu));
  /* 103811c5 push 0x1038a040 */
  push32((uint32_t)(0x1038a040u));
  /* 103811ca call esi */
  call_ind((uint32_t)(ESI), 0x103811ccu);
  /* 103811cc push 0x10389524 */
  push32((uint32_t)(0x10389524u));
  /* 103811d1 push 0x1038a048 */
  push32((uint32_t)(0x1038a048u));
  /* 103811d6 call esi */
  call_ind((uint32_t)(ESI), 0x103811d8u);
  /* 103811d8 push 0x1038951c */
  push32((uint32_t)(0x1038951cu));
  /* 103811dd push 0x1038a050 */
  push32((uint32_t)(0x1038a050u));
  /* 103811e2 call esi */
  call_ind((uint32_t)(ESI), 0x103811e4u);
  /* 103811e4 push 0x10389514 */
  push32((uint32_t)(0x10389514u));
  /* 103811e9 push 0x1038a058 */
  push32((uint32_t)(0x1038a058u));
  /* 103811ee call esi */
  call_ind((uint32_t)(ESI), 0x103811f0u);
  /* 103811f0 push 0x10389510 */
  push32((uint32_t)(0x10389510u));
  /* 103811f5 push 0x10389dd8 */
  push32((uint32_t)(0x10389dd8u));
  /* 103811fa call esi */
  call_ind((uint32_t)(ESI), 0x103811fcu);
  /* 103811fc push 0x10389508 */
  push32((uint32_t)(0x10389508u));
  /* 10381201 push 0x1038a060 */
  push32((uint32_t)(0x1038a060u));
  /* 10381206 call esi */
  call_ind((uint32_t)(ESI), 0x10381208u);
  /* 10381208 push 0x10389504 */
  push32((uint32_t)(0x10389504u));
  /* 1038120d push 0x10389de8 */
  push32((uint32_t)(0x10389de8u));
  /* 10381212 call esi */
  call_ind((uint32_t)(ESI), 0x10381214u);
  /* 10381214 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381217 push 0x103894fc */
  push32((uint32_t)(0x103894fcu));
  /* 1038121c push 0x1038a068 */
  push32((uint32_t)(0x1038a068u));
  /* 10381221 call esi */
  call_ind((uint32_t)(ESI), 0x10381223u);
  /* 10381223 push 0x103894f8 */
  push32((uint32_t)(0x103894f8u));
  /* 10381228 push 0x10389d80 */
  push32((uint32_t)(0x10389d80u));
  /* 1038122d call esi */
  call_ind((uint32_t)(ESI), 0x1038122fu);
  /* 1038122f push 0x103894f4 */
  push32((uint32_t)(0x103894f4u));
  /* 10381234 push 0x10389d98 */
  push32((uint32_t)(0x10389d98u));
  /* 10381239 call esi */
  call_ind((uint32_t)(ESI), 0x1038123bu);
  /* 1038123b push 0x103894f0 */
  push32((uint32_t)(0x103894f0u));
  /* 10381240 push 0x10389db0 */
  push32((uint32_t)(0x10389db0u));
  /* 10381245 call esi */
  call_ind((uint32_t)(ESI), 0x10381247u);
  /* 10381247 push 0x103894ec */
  push32((uint32_t)(0x103894ecu));
  /* 1038124c push 0x10389dc0 */
  push32((uint32_t)(0x10389dc0u));
  /* 10381251 call esi */
  call_ind((uint32_t)(ESI), 0x10381253u);
  /* 10381253 push 0x103894e8 */
  push32((uint32_t)(0x103894e8u));
  /* 10381258 push 0x10389dd0 */
  push32((uint32_t)(0x10389dd0u));
  /* 1038125d call esi */
  call_ind((uint32_t)(ESI), 0x1038125fu);
  /* 1038125f push 0x103894e4 */
  push32((uint32_t)(0x103894e4u));
  /* 10381264 push 0x10389de0 */
  push32((uint32_t)(0x10389de0u));
  /* 10381269 call esi */
  call_ind((uint32_t)(ESI), 0x1038126bu);
  /* 1038126b push 0x103894e0 */
  push32((uint32_t)(0x103894e0u));
  /* 10381270 push 0x10389df0 */
  push32((uint32_t)(0x10389df0u));
  /* 10381275 call esi */
  call_ind((uint32_t)(ESI), 0x10381277u);
  /* 10381277 mov esi, dword ptr [0x10388150] */
  ESI = (r32((uint32_t)(0x10388150)));
  /* 1038127d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381280 push 0x103894dc */
  push32((uint32_t)(0x103894dcu));
  /* 10381285 push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 1038128a call esi */
  call_ind((uint32_t)(ESI), 0x1038128cu);
  /* 1038128c push 0x103894d8 */
  push32((uint32_t)(0x103894d8u));
  /* 10381291 push 0x10389e00 */
  push32((uint32_t)(0x10389e00u));
  /* 10381296 call esi */
  call_ind((uint32_t)(ESI), 0x10381298u);
  /* 10381298 push 0x103894d4 */
  push32((uint32_t)(0x103894d4u));
  /* 1038129d push 0x10389e08 */
  push32((uint32_t)(0x10389e08u));
  /* 103812a2 call esi */
  call_ind((uint32_t)(ESI), 0x103812a4u);
  /* 103812a4 push 0x103894d0 */
  push32((uint32_t)(0x103894d0u));
  /* 103812a9 push 0x10389e10 */
  push32((uint32_t)(0x10389e10u));
  /* 103812ae call esi */
  call_ind((uint32_t)(ESI), 0x103812b0u);
  /* 103812b0 push 0x103894cc */
  push32((uint32_t)(0x103894ccu));
  /* 103812b5 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 103812ba call esi */
  call_ind((uint32_t)(ESI), 0x103812bcu);
  /* 103812bc push 0x103894c8 */
  push32((uint32_t)(0x103894c8u));
  /* 103812c1 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 103812c6 call esi */
  call_ind((uint32_t)(ESI), 0x103812c8u);
  /* 103812c8 push 0x103894c4 */
  push32((uint32_t)(0x103894c4u));
  /* 103812cd push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 103812d2 call esi */
  call_ind((uint32_t)(ESI), 0x103812d4u);
  /* 103812d4 push 0x103894c0 */
  push32((uint32_t)(0x103894c0u));
  /* 103812d9 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 103812de call esi */
  call_ind((uint32_t)(ESI), 0x103812e0u);
  /* 103812e0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103812e3 push 0x103894bc */
  push32((uint32_t)(0x103894bcu));
  /* 103812e8 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 103812ed call esi */
  call_ind((uint32_t)(ESI), 0x103812efu);
  /* 103812ef push 0x103894b8 */
  push32((uint32_t)(0x103894b8u));
  /* 103812f4 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 103812f9 call esi */
  call_ind((uint32_t)(ESI), 0x103812fbu);
  /* 103812fb push 0x103894b4 */
  push32((uint32_t)(0x103894b4u));
  /* 10381300 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10381305 call esi */
  call_ind((uint32_t)(ESI), 0x10381307u);
  /* 10381307 push 0x103894b0 */
  push32((uint32_t)(0x103894b0u));
  /* 1038130c push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 10381311 call esi */
  call_ind((uint32_t)(ESI), 0x10381313u);
  /* 10381313 push 0x103894ac */
  push32((uint32_t)(0x103894acu));
  /* 10381318 push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 1038131d call esi */
  call_ind((uint32_t)(ESI), 0x1038131fu);
  /* 1038131f push 0x103894a8 */
  push32((uint32_t)(0x103894a8u));
  /* 10381324 push 0x10389f20 */
  push32((uint32_t)(0x10389f20u));
  /* 10381329 call esi */
  call_ind((uint32_t)(ESI), 0x1038132bu);
  /* 1038132b push 0x103894a4 */
  push32((uint32_t)(0x103894a4u));
  /* 10381330 push 0x10389f30 */
  push32((uint32_t)(0x10389f30u));
  /* 10381335 call esi */
  call_ind((uint32_t)(ESI), 0x10381337u);
  /* 10381337 push 0x103894a0 */
  push32((uint32_t)(0x103894a0u));
  /* 1038133c push 0x10389f40 */
  push32((uint32_t)(0x10389f40u));
  /* 10381341 call esi */
  call_ind((uint32_t)(ESI), 0x10381343u);
  /* 10381343 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381346 push 0x1038949c */
  push32((uint32_t)(0x1038949cu));
  /* 1038134b push 0x10389f50 */
  push32((uint32_t)(0x10389f50u));
  /* 10381350 call esi */
  call_ind((uint32_t)(ESI), 0x10381352u);
  /* 10381352 push 0x10389498 */
  push32((uint32_t)(0x10389498u));
  /* 10381357 push 0x10389fb0 */
  push32((uint32_t)(0x10389fb0u));
  /* 1038135c call esi */
  call_ind((uint32_t)(ESI), 0x1038135eu);
  /* 1038135e push 0x10389494 */
  push32((uint32_t)(0x10389494u));
  /* 10381363 push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 10381368 call esi */
  call_ind((uint32_t)(ESI), 0x1038136au);
  /* 1038136a push 0x10389490 */
  push32((uint32_t)(0x10389490u));
  /* 1038136f push 0x10389f18 */
  push32((uint32_t)(0x10389f18u));
  /* 10381374 call esi */
  call_ind((uint32_t)(ESI), 0x10381376u);
  /* 10381376 push 0x1038948c */
  push32((uint32_t)(0x1038948cu));
  /* 1038137b push 0x10389f28 */
  push32((uint32_t)(0x10389f28u));
  /* 10381380 call esi */
  call_ind((uint32_t)(ESI), 0x10381382u);
  /* 10381382 push 0x10389488 */
  push32((uint32_t)(0x10389488u));
  /* 10381387 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 1038138c call esi */
  call_ind((uint32_t)(ESI), 0x1038138eu);
  /* 1038138e push 0x10389484 */
  push32((uint32_t)(0x10389484u));
  /* 10381393 push 0x10389f48 */
  push32((uint32_t)(0x10389f48u));
  /* 10381398 call esi */
  call_ind((uint32_t)(ESI), 0x1038139au);
  /* 1038139a push 0x10389480 */
  push32((uint32_t)(0x10389480u));
  /* 1038139f push 0x10389fa8 */
  push32((uint32_t)(0x10389fa8u));
  /* 103813a4 call esi */
  call_ind((uint32_t)(ESI), 0x103813a6u);
  /* 103813a6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103813a9 push 0x1038947c */
  push32((uint32_t)(0x1038947cu));
  /* 103813ae push 0x10389fc0 */
  push32((uint32_t)(0x10389fc0u));
  /* 103813b3 call esi */
  call_ind((uint32_t)(ESI), 0x103813b5u);
  /* 103813b5 push 0x10389474 */
  push32((uint32_t)(0x10389474u));
  /* 103813ba push 0x1038a0a0 */
  push32((uint32_t)(0x1038a0a0u));
  /* 103813bf call esi */
  call_ind((uint32_t)(ESI), 0x103813c1u);
  /* 103813c1 push 0x10389470 */
  push32((uint32_t)(0x10389470u));
  /* 103813c6 push 0x10389fd8 */
  push32((uint32_t)(0x10389fd8u));
  /* 103813cb call esi */
  call_ind((uint32_t)(ESI), 0x103813cdu);
  /* 103813cd push 0x10389468 */
  push32((uint32_t)(0x10389468u));
  /* 103813d2 push 0x1038a0a8 */
  push32((uint32_t)(0x1038a0a8u));
  /* 103813d7 call esi */
  call_ind((uint32_t)(ESI), 0x103813d9u);
  /* 103813d9 push 0x10389464 */
  push32((uint32_t)(0x10389464u));
  /* 103813de push 0x10389fe8 */
  push32((uint32_t)(0x10389fe8u));
  /* 103813e3 call esi */
  call_ind((uint32_t)(ESI), 0x103813e5u);
  /* 103813e5 push 0x1038945c */
  push32((uint32_t)(0x1038945cu));
  /* 103813ea push 0x1038a0b0 */
  push32((uint32_t)(0x1038a0b0u));
  /* 103813ef call esi */
  call_ind((uint32_t)(ESI), 0x103813f1u);
  /* 103813f1 push 0x10389454 */
  push32((uint32_t)(0x10389454u));
  /* 103813f6 push 0x1038a0b8 */
  push32((uint32_t)(0x1038a0b8u));
  /* 103813fb call esi */
  call_ind((uint32_t)(ESI), 0x103813fdu);
  /* 103813fd push 0x10389450 */
  push32((uint32_t)(0x10389450u));
  /* 10381402 push 0x10389ff0 */
  push32((uint32_t)(0x10389ff0u));
  /* 10381407 call esi */
  call_ind((uint32_t)(ESI), 0x10381409u);
  /* 10381409 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038140c push 0x1038944c */
  push32((uint32_t)(0x1038944cu));
  /* 10381411 push 0x10389ff8 */
  push32((uint32_t)(0x10389ff8u));
  /* 10381416 call esi */
  call_ind((uint32_t)(ESI), 0x10381418u);
  /* 10381418 push 0x10389448 */
  push32((uint32_t)(0x10389448u));
  /* 1038141d push 0x10389fb8 */
  push32((uint32_t)(0x10389fb8u));
  /* 10381422 call esi */
  call_ind((uint32_t)(ESI), 0x10381424u);
  /* 10381424 push 0x10389444 */
  push32((uint32_t)(0x10389444u));
  /* 10381429 push 0x10389fd0 */
  push32((uint32_t)(0x10389fd0u));
  /* 1038142e call esi */
  call_ind((uint32_t)(ESI), 0x10381430u);
  /* 10381430 push 0x10389440 */
  push32((uint32_t)(0x10389440u));
  /* 10381435 push 0x10389fe0 */
  push32((uint32_t)(0x10389fe0u));
  /* 1038143a call esi */
  call_ind((uint32_t)(ESI), 0x1038143cu);
  /* 1038143c mov esi, dword ptr [0x10388160] */
  ESI = (r32((uint32_t)(0x10388160)));
  /* 10381442 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10381444 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381446 call esi */
  call_ind((uint32_t)(ESI), 0x10381448u);
  /* 10381448 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1038144a push 4 */
  push32((uint32_t)(0x4u));
  /* 1038144c call esi */
  call_ind((uint32_t)(ESI), 0x1038144eu);
  /* 1038144e mov edi, dword ptr [0x10388164] */
  EDI = (r32((uint32_t)(0x10388164)));
  /* 10381454 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10381459 call edi */
  call_ind((uint32_t)(EDI), 0x1038145bu);
  /* 1038145b push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 10381460 call edi */
  call_ind((uint32_t)(EDI), 0x10381462u);
  /* 10381462 push 0x10389c10 */
  push32((uint32_t)(0x10389c10u));
  /* 10381467 call edi */
  call_ind((uint32_t)(EDI), 0x10381469u);
  /* 10381469 push 0x10389c18 */
  push32((uint32_t)(0x10389c18u));
  /* 1038146e call edi */
  call_ind((uint32_t)(EDI), 0x10381470u);
  /* 10381470 mov esi, dword ptr [0x1038815c] */
  ESI = (r32((uint32_t)(0x1038815c)));
  /* 10381476 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381479 push 4 */
  push32((uint32_t)(0x4u));
  /* 1038147b push 0x10389ed0 */
  push32((uint32_t)(0x10389ed0u));
  /* 10381480 call esi */
  call_ind((uint32_t)(ESI), 0x10381482u);
  /* 10381482 push 4 */
  push32((uint32_t)(0x4u));
  /* 10381484 push 0x10389ed4 */
  push32((uint32_t)(0x10389ed4u));
  /* 10381489 call esi */
  call_ind((uint32_t)(ESI), 0x1038148bu);
  /* 1038148b push 4 */
  push32((uint32_t)(0x4u));
  /* 1038148d push 0x10389d28 */
  push32((uint32_t)(0x10389d28u));
  /* 10381492 call esi */
  call_ind((uint32_t)(ESI), 0x10381494u);
  /* 10381494 push 4 */
  push32((uint32_t)(0x4u));
  /* 10381496 push 0x1038a078 */
  push32((uint32_t)(0x1038a078u));
  /* 1038149b call esi */
  call_ind((uint32_t)(ESI), 0x1038149du);
  /* 1038149d push 4 */
  push32((uint32_t)(0x4u));
  /* 1038149f push 0x1038a074 */
  push32((uint32_t)(0x1038a074u));
  /* 103814a4 call esi */
  call_ind((uint32_t)(ESI), 0x103814a6u);
  /* 103814a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 103814a8 push 0x10389ed8 */
  push32((uint32_t)(0x10389ed8u));
  /* 103814ad call esi */
  call_ind((uint32_t)(ESI), 0x103814afu);
  /* 103814af push 4 */
  push32((uint32_t)(0x4u));
  /* 103814b1 push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 103814b6 call esi */
  call_ind((uint32_t)(ESI), 0x103814b8u);
  /* 103814b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 103814ba push 0x10389a80 */
  push32((uint32_t)(0x10389a80u));
  /* 103814bf call esi */
  call_ind((uint32_t)(ESI), 0x103814c1u);
  /* 103814c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103814c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 103814c6 push 0x10389c30 */
  push32((uint32_t)(0x10389c30u));
  /* 103814cb call esi */
  call_ind((uint32_t)(ESI), 0x103814cdu);
  /* 103814cd push 4 */
  push32((uint32_t)(0x4u));
  /* 103814cf push 0x1038a0c0 */
  push32((uint32_t)(0x1038a0c0u));
  /* 103814d4 call esi */
  call_ind((uint32_t)(ESI), 0x103814d6u);
  /* 103814d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 103814d8 push 0x1038a090 */
  push32((uint32_t)(0x1038a090u));
  /* 103814dd call esi */
  call_ind((uint32_t)(ESI), 0x103814dfu);
  /* 103814df push 4 */
  push32((uint32_t)(0x4u));
  /* 103814e1 push 0x1038a07c */
  push32((uint32_t)(0x1038a07cu));
  /* 103814e6 call esi */
  call_ind((uint32_t)(ESI), 0x103814e8u);
  /* 103814e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 103814ea push 0x1038a038 */
  push32((uint32_t)(0x1038a038u));
  /* 103814ef call esi */
  call_ind((uint32_t)(ESI), 0x103814f1u);
  /* 103814f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103814f3 push 0x10389c78 */
  push32((uint32_t)(0x10389c78u));
  /* 103814f8 call esi */
  call_ind((uint32_t)(ESI), 0x103814fau);
  /* 103814fa push 8 */
  push32((uint32_t)(0x8u));
  /* 103814fc push 0x1038a080 */
  push32((uint32_t)(0x1038a080u));
  /* 10381501 call esi */
  call_ind((uint32_t)(ESI), 0x10381503u);
  /* 10381503 push 8 */
  push32((uint32_t)(0x8u));
  /* 10381505 push 0x1038a088 */
  push32((uint32_t)(0x1038a088u));
  /* 1038150a call esi */
  call_ind((uint32_t)(ESI), 0x1038150cu);
  /* 1038150c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038150f push 0x10389ce0 */
  push32((uint32_t)(0x10389ce0u));
  /* 10381514 call edi */
  call_ind((uint32_t)(EDI), 0x10381516u);
  /* 10381516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1038151b mov dword ptr [0x10389a90], eax */
  w32((uint32_t)(0x10389a90), (EAX));
L_10381520:;
  /* 10381520 lea eax, [eax*8 + 0x10389ce8] */
  EAX = ((uint32_t)(EAX*8 + 0x10389ce8));
  /* 10381527 push eax */
  push32((uint32_t)(EAX));
  /* 10381528 call edi */
  call_ind((uint32_t)(EDI), 0x1038152au);
  /* 1038152a mov ecx, dword ptr [0x10389a90] */
  ECX = (r32((uint32_t)(0x10389a90)));
  /* 10381530 lea edx, [ecx*8 + 0x10389c80] */
  EDX = ((uint32_t)(ECX*8 + 0x10389c80));
  /* 10381537 push edx */
  push32((uint32_t)(EDX));
  /* 10381538 call edi */
  call_ind((uint32_t)(EDI), 0x1038153au);
  /* 1038153a mov eax, dword ptr [0x10389a90] */
  EAX = (r32((uint32_t)(0x10389a90)));
  /* 1038153f push 8 */
  push32((uint32_t)(0x8u));
  /* 10381541 lea ecx, [eax*8 + 0x10389cb0] */
  ECX = ((uint32_t)(EAX*8 + 0x10389cb0));
  /* 10381548 push ecx */
  push32((uint32_t)(ECX));
  /* 10381549 call esi */
  call_ind((uint32_t)(ESI), 0x1038154bu);
  /* 1038154b mov eax, dword ptr [0x10389a90] */
  EAX = (r32((uint32_t)(0x10389a90)));
  /* 10381550 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381553 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10381554 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10381557 mov dword ptr [0x10389a90], eax */
  w32((uint32_t)(0x10389a90), (EAX));
  /* 1038155c jl 0x10381520 */
  if ((C.sf!=C.of)) goto L_10381520;
  /* 1038155e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10381560 mov dword ptr [0x10389a90], eax */
  w32((uint32_t)(0x10389a90), (EAX));
L_10381565:;
  /* 10381565 lea edx, [eax*4 + 0x10389f58] */
  EDX = ((uint32_t)(EAX*4 + 0x10389f58));
  /* 1038156c push 4 */
  push32((uint32_t)(0x4u));
  /* 1038156e push edx */
  push32((uint32_t)(EDX));
  /* 1038156f call esi */
  call_ind((uint32_t)(ESI), 0x10381571u);
  /* 10381571 mov eax, dword ptr [0x10389a90] */
  EAX = (r32((uint32_t)(0x10389a90)));
  /* 10381576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381579 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1038157a cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038157d mov dword ptr [0x10389a90], eax */
  w32((uint32_t)(0x10389a90), (EAX));
  /* 10381582 jl 0x10381565 */
  if ((C.sf!=C.of)) goto L_10381565;
  /* 10381584 mov esi, dword ptr [0x1038816c] */
  ESI = (r32((uint32_t)(0x1038816c)));
  /* 1038158a push 0x10389434 */
  push32((uint32_t)(0x10389434u));
  /* 1038158f push 0x10389c70 */
  push32((uint32_t)(0x10389c70u));
  /* 10381594 call esi */
  call_ind((uint32_t)(ESI), 0x10381596u);
  /* 10381596 push 0x10389420 */
  push32((uint32_t)(0x10389420u));
  /* 1038159b push 0x10389ef0 */
  push32((uint32_t)(0x10389ef0u));
  /* 103815a0 call esi */
  call_ind((uint32_t)(ESI), 0x103815a2u);
  /* 103815a2 push 0x1038940c */
  push32((uint32_t)(0x1038940cu));
  /* 103815a7 push 0x10389a88 */
  push32((uint32_t)(0x10389a88u));
  /* 103815ac call esi */
  call_ind((uint32_t)(ESI), 0x103815aeu);
  /* 103815ae push 0x10389400 */
  push32((uint32_t)(0x10389400u));
  /* 103815b3 push 0x1038a0c8 */
  push32((uint32_t)(0x1038a0c8u));
  /* 103815b8 call esi */
  call_ind((uint32_t)(ESI), 0x103815bau);
  /* 103815ba push 0x103893f0 */
  push32((uint32_t)(0x103893f0u));
  /* 103815bf push 0x10389b50 */
  push32((uint32_t)(0x10389b50u));
  /* 103815c4 call esi */
  call_ind((uint32_t)(ESI), 0x103815c6u);
  /* 103815c6 push 0x103893e4 */
  push32((uint32_t)(0x103893e4u));
  /* 103815cb push 0x10389b58 */
  push32((uint32_t)(0x10389b58u));
  /* 103815d0 call esi */
  call_ind((uint32_t)(ESI), 0x103815d2u);
  /* 103815d2 push 0x103893d8 */
  push32((uint32_t)(0x103893d8u));
  /* 103815d7 push 0x1038a098 */
  push32((uint32_t)(0x1038a098u));
  /* 103815dc call dword ptr [0x10388170] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388170))), 0x103815e2u);
  /* 103815e2 push 0x103893cc */
  push32((uint32_t)(0x103893ccu));
  /* 103815e7 push 0x10389ba0 */
  push32((uint32_t)(0x10389ba0u));
  /* 103815ec call esi */
  call_ind((uint32_t)(ESI), 0x103815eeu);
  /* 103815ee add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103815f1 push 0x103893bc */
  push32((uint32_t)(0x103893bcu));
  /* 103815f6 push 0x10389bb0 */
  push32((uint32_t)(0x10389bb0u));
  /* 103815fb call esi */
  call_ind((uint32_t)(ESI), 0x103815fdu);
  /* 103815fd push 0x103893b0 */
  push32((uint32_t)(0x103893b0u));
  /* 10381602 push 0x10389bc0 */
  push32((uint32_t)(0x10389bc0u));
  /* 10381607 call esi */
  call_ind((uint32_t)(ESI), 0x10381609u);
  /* 10381609 push 0x103893a4 */
  push32((uint32_t)(0x103893a4u));
  /* 1038160e push 0x10389bd0 */
  push32((uint32_t)(0x10389bd0u));
  /* 10381613 call esi */
  call_ind((uint32_t)(ESI), 0x10381615u);
  /* 10381615 push 0x10389398 */
  push32((uint32_t)(0x10389398u));
  /* 1038161a push 0x10389bd8 */
  push32((uint32_t)(0x10389bd8u));
  /* 1038161f call esi */
  call_ind((uint32_t)(ESI), 0x10381621u);
  /* 10381621 push 0x10389388 */
  push32((uint32_t)(0x10389388u));
  /* 10381626 push 0x10389be0 */
  push32((uint32_t)(0x10389be0u));
  /* 1038162b call esi */
  call_ind((uint32_t)(ESI), 0x1038162du);
  /* 1038162d push 0x10389378 */
  push32((uint32_t)(0x10389378u));
  /* 10381632 push 0x10389be8 */
  push32((uint32_t)(0x10389be8u));
  /* 10381637 call esi */
  call_ind((uint32_t)(ESI), 0x10381639u);
  /* 10381639 push 0x1038936c */
  push32((uint32_t)(0x1038936cu));
  /* 1038163e push 0x10389bf0 */
  push32((uint32_t)(0x10389bf0u));
  /* 10381643 call esi */
  call_ind((uint32_t)(ESI), 0x10381645u);
  /* 10381645 push 0x10389354 */
  push32((uint32_t)(0x10389354u));
  /* 1038164a push 0x10389bf8 */
  push32((uint32_t)(0x10389bf8u));
  /* 1038164f call esi */
  call_ind((uint32_t)(ESI), 0x10381651u);
  /* 10381651 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381654 push 0x10389340 */
  push32((uint32_t)(0x10389340u));
  /* 10381659 push 0x10389b60 */
  push32((uint32_t)(0x10389b60u));
  /* 1038165e call esi */
  call_ind((uint32_t)(ESI), 0x10381660u);
  /* 10381660 push 0x10389330 */
  push32((uint32_t)(0x10389330u));
  /* 10381665 push 0x10389b68 */
  push32((uint32_t)(0x10389b68u));
  /* 1038166a call esi */
  call_ind((uint32_t)(ESI), 0x1038166cu);
  /* 1038166c push 0x10389320 */
  push32((uint32_t)(0x10389320u));
  /* 10381671 push 0x10389b70 */
  push32((uint32_t)(0x10389b70u));
  /* 10381676 call esi */
  call_ind((uint32_t)(ESI), 0x10381678u);
  /* 10381678 push 0x1038930c */
  push32((uint32_t)(0x1038930cu));
  /* 1038167d push 0x10389b78 */
  push32((uint32_t)(0x10389b78u));
  /* 10381682 call esi */
  call_ind((uint32_t)(ESI), 0x10381684u);
  /* 10381684 push 0x10389300 */
  push32((uint32_t)(0x10389300u));
  /* 10381689 push 0x10389b88 */
  push32((uint32_t)(0x10389b88u));
  /* 1038168e call esi */
  call_ind((uint32_t)(ESI), 0x10381690u);
  /* 10381690 push 0x103892ec */
  push32((uint32_t)(0x103892ecu));
  /* 10381695 push 0x10389b90 */
  push32((uint32_t)(0x10389b90u));
  /* 1038169a call esi */
  call_ind((uint32_t)(ESI), 0x1038169cu);
  /* 1038169c push 0x103892e0 */
  push32((uint32_t)(0x103892e0u));
  /* 103816a1 push 0x10389b98 */
  push32((uint32_t)(0x10389b98u));
  /* 103816a6 call esi */
  call_ind((uint32_t)(ESI), 0x103816a8u);
  /* 103816a8 push 0x103892d0 */
  push32((uint32_t)(0x103892d0u));
  /* 103816ad push 0x10389ba8 */
  push32((uint32_t)(0x10389ba8u));
  /* 103816b2 call esi */
  call_ind((uint32_t)(ESI), 0x103816b4u);
  /* 103816b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103816b7 push 0x103892c4 */
  push32((uint32_t)(0x103892c4u));
  /* 103816bc push 0x10389bb8 */
  push32((uint32_t)(0x10389bb8u));
  /* 103816c1 call esi */
  call_ind((uint32_t)(ESI), 0x103816c3u);
  /* 103816c3 push 0x103892b8 */
  push32((uint32_t)(0x103892b8u));
  /* 103816c8 push 0x10389bc8 */
  push32((uint32_t)(0x10389bc8u));
  /* 103816cd call esi */
  call_ind((uint32_t)(ESI), 0x103816cfu);
  /* 103816cf push 0x103892ac */
  push32((uint32_t)(0x103892acu));
  /* 103816d4 push 0x10389b80 */
  push32((uint32_t)(0x10389b80u));
  /* 103816d9 call esi */
  call_ind((uint32_t)(ESI), 0x103816dbu);
  /* 103816db push 0x10389298 */
  push32((uint32_t)(0x10389298u));
  /* 103816e0 push 0x10389e40 */
  push32((uint32_t)(0x10389e40u));
  /* 103816e5 call esi */
  call_ind((uint32_t)(ESI), 0x103816e7u);
  /* 103816e7 push 0x10389288 */
  push32((uint32_t)(0x10389288u));
  /* 103816ec push 0x10389e48 */
  push32((uint32_t)(0x10389e48u));
  /* 103816f1 call esi */
  call_ind((uint32_t)(ESI), 0x103816f3u);
  /* 103816f3 push 0x1038927c */
  push32((uint32_t)(0x1038927cu));
  /* 103816f8 push 0x10389e50 */
  push32((uint32_t)(0x10389e50u));
  /* 103816fd call esi */
  call_ind((uint32_t)(ESI), 0x103816ffu);
  /* 103816ff push 0x10389270 */
  push32((uint32_t)(0x10389270u));
  /* 10381704 push 0x10389e58 */
  push32((uint32_t)(0x10389e58u));
  /* 10381709 call esi */
  call_ind((uint32_t)(ESI), 0x1038170bu);
  /* 1038170b push 0x10389264 */
  push32((uint32_t)(0x10389264u));
  /* 10381710 push 0x10389e68 */
  push32((uint32_t)(0x10389e68u));
  /* 10381715 call esi */
  call_ind((uint32_t)(ESI), 0x10381717u);
  /* 10381717 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038171a push 0x10389254 */
  push32((uint32_t)(0x10389254u));
  /* 1038171f push 0x10389e78 */
  push32((uint32_t)(0x10389e78u));
  /* 10381724 call esi */
  call_ind((uint32_t)(ESI), 0x10381726u);
  /* 10381726 push 0x10389244 */
  push32((uint32_t)(0x10389244u));
  /* 1038172b push 0x10389e88 */
  push32((uint32_t)(0x10389e88u));
  /* 10381730 call esi */
  call_ind((uint32_t)(ESI), 0x10381732u);
  /* 10381732 push 0x10389234 */
  push32((uint32_t)(0x10389234u));
  /* 10381737 push 0x10389e98 */
  push32((uint32_t)(0x10389e98u));
  /* 1038173c call esi */
  call_ind((uint32_t)(ESI), 0x1038173eu);
  /* 1038173e push 0x10389220 */
  push32((uint32_t)(0x10389220u));
  /* 10381743 push 0x10389ea8 */
  push32((uint32_t)(0x10389ea8u));
  /* 10381748 call esi */
  call_ind((uint32_t)(ESI), 0x1038174au);
  /* 1038174a push 0x10389214 */
  push32((uint32_t)(0x10389214u));
  /* 1038174f push 0x10389a98 */
  push32((uint32_t)(0x10389a98u));
  /* 10381754 call esi */
  call_ind((uint32_t)(ESI), 0x10381756u);
  /* 10381756 push 0x10389204 */
  push32((uint32_t)(0x10389204u));
  /* 1038175b push 0x10389aa0 */
  push32((uint32_t)(0x10389aa0u));
  /* 10381760 call esi */
  call_ind((uint32_t)(ESI), 0x10381762u);
  /* 10381762 push 0x103891f0 */
  push32((uint32_t)(0x103891f0u));
  /* 10381767 push 0x10389aa8 */
  push32((uint32_t)(0x10389aa8u));
  /* 1038176c call esi */
  call_ind((uint32_t)(ESI), 0x1038176eu);
  /* 1038176e push 0x103891dc */
  push32((uint32_t)(0x103891dcu));
  /* 10381773 push 0x10389ab0 */
  push32((uint32_t)(0x10389ab0u));
  /* 10381778 call esi */
  call_ind((uint32_t)(ESI), 0x1038177au);
  /* 1038177a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038177d push 0x103891cc */
  push32((uint32_t)(0x103891ccu));
  /* 10381782 push 0x10389ac0 */
  push32((uint32_t)(0x10389ac0u));
  /* 10381787 call esi */
  call_ind((uint32_t)(ESI), 0x10381789u);
  /* 10381789 push 0x103891b4 */
  push32((uint32_t)(0x103891b4u));
  /* 1038178e push 0x10389ac8 */
  push32((uint32_t)(0x10389ac8u));
  /* 10381793 call esi */
  call_ind((uint32_t)(ESI), 0x10381795u);
  /* 10381795 push 0x103891a8 */
  push32((uint32_t)(0x103891a8u));
  /* 1038179a push 0x10389ad0 */
  push32((uint32_t)(0x10389ad0u));
  /* 1038179f call esi */
  call_ind((uint32_t)(ESI), 0x103817a1u);
  /* 103817a1 push 0x10389198 */
  push32((uint32_t)(0x10389198u));
  /* 103817a6 push 0x10389ad8 */
  push32((uint32_t)(0x10389ad8u));
  /* 103817ab call esi */
  call_ind((uint32_t)(ESI), 0x103817adu);
  /* 103817ad push 0x1038918c */
  push32((uint32_t)(0x1038918cu));
  /* 103817b2 push 0x10389ae0 */
  push32((uint32_t)(0x10389ae0u));
  /* 103817b7 call esi */
  call_ind((uint32_t)(ESI), 0x103817b9u);
  /* 103817b9 push 0x10389180 */
  push32((uint32_t)(0x10389180u));
  /* 103817be push 0x10389ae8 */
  push32((uint32_t)(0x10389ae8u));
  /* 103817c3 call esi */
  call_ind((uint32_t)(ESI), 0x103817c5u);
  /* 103817c5 push 0x10389174 */
  push32((uint32_t)(0x10389174u));
  /* 103817ca push 0x10389ab8 */
  push32((uint32_t)(0x10389ab8u));
  /* 103817cf call esi */
  call_ind((uint32_t)(ESI), 0x103817d1u);
  /* 103817d1 push 0x10389160 */
  push32((uint32_t)(0x10389160u));
  /* 103817d6 push 0x10389e60 */
  push32((uint32_t)(0x10389e60u));
  /* 103817db call esi */
  call_ind((uint32_t)(ESI), 0x103817ddu);
  /* 103817dd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103817e0 push 0x10389150 */
  push32((uint32_t)(0x10389150u));
  /* 103817e5 push 0x10389e70 */
  push32((uint32_t)(0x10389e70u));
  /* 103817ea call esi */
  call_ind((uint32_t)(ESI), 0x103817ecu);
  /* 103817ec push 0x10389144 */
  push32((uint32_t)(0x10389144u));
  /* 103817f1 push 0x10389e80 */
  push32((uint32_t)(0x10389e80u));
  /* 103817f6 call esi */
  call_ind((uint32_t)(ESI), 0x103817f8u);
  /* 103817f8 push 0x10389138 */
  push32((uint32_t)(0x10389138u));
  /* 103817fd push 0x10389e90 */
  push32((uint32_t)(0x10389e90u));
  /* 10381802 call esi */
  call_ind((uint32_t)(ESI), 0x10381804u);
  /* 10381804 push 0x1038912c */
  push32((uint32_t)(0x1038912cu));
  /* 10381809 push 0x10389ea0 */
  push32((uint32_t)(0x10389ea0u));
  /* 1038180e call esi */
  call_ind((uint32_t)(ESI), 0x10381810u);
  /* 10381810 push 0x1038911c */
  push32((uint32_t)(0x1038911cu));
  /* 10381815 push 0x10389eb0 */
  push32((uint32_t)(0x10389eb0u));
  /* 1038181a call esi */
  call_ind((uint32_t)(ESI), 0x1038181cu);
  /* 1038181c push 0x1038910c */
  push32((uint32_t)(0x1038910cu));
  /* 10381821 push 0x10389eb8 */
  push32((uint32_t)(0x10389eb8u));
  /* 10381826 call esi */
  call_ind((uint32_t)(ESI), 0x10381828u);
  /* 10381828 push 0x10389100 */
  push32((uint32_t)(0x10389100u));
  /* 1038182d push 0x10389ec0 */
  push32((uint32_t)(0x10389ec0u));
  /* 10381832 call esi */
  call_ind((uint32_t)(ESI), 0x10381834u);
  /* 10381834 push 0x103890e8 */
  push32((uint32_t)(0x103890e8u));
  /* 10381839 push 0x10389ec8 */
  push32((uint32_t)(0x10389ec8u));
  /* 1038183e call esi */
  call_ind((uint32_t)(ESI), 0x10381840u);
  /* 10381840 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381843 push 0x103890d4 */
  push32((uint32_t)(0x103890d4u));
  /* 10381848 push 0x10389af0 */
  push32((uint32_t)(0x10389af0u));
  /* 1038184d call esi */
  call_ind((uint32_t)(ESI), 0x1038184fu);
  /* 1038184f push 0x103890c4 */
  push32((uint32_t)(0x103890c4u));
  /* 10381854 push 0x10389af8 */
  push32((uint32_t)(0x10389af8u));
  /* 10381859 call esi */
  call_ind((uint32_t)(ESI), 0x1038185bu);
  /* 1038185b push 0x103890b4 */
  push32((uint32_t)(0x103890b4u));
  /* 10381860 push 0x10389b00 */
  push32((uint32_t)(0x10389b00u));
  /* 10381865 call esi */
  call_ind((uint32_t)(ESI), 0x10381867u);
  /* 10381867 push 0x103890a0 */
  push32((uint32_t)(0x103890a0u));
  /* 1038186c push 0x10389b08 */
  push32((uint32_t)(0x10389b08u));
  /* 10381871 call esi */
  call_ind((uint32_t)(ESI), 0x10381873u);
  /* 10381873 push 0x10389094 */
  push32((uint32_t)(0x10389094u));
  /* 10381878 push 0x10389b10 */
  push32((uint32_t)(0x10389b10u));
  /* 1038187d call esi */
  call_ind((uint32_t)(ESI), 0x1038187fu);
  /* 1038187f push 0x10389080 */
  push32((uint32_t)(0x10389080u));
  /* 10381884 push 0x10389b20 */
  push32((uint32_t)(0x10389b20u));
  /* 10381889 call esi */
  call_ind((uint32_t)(ESI), 0x1038188bu);
  /* 1038188b push 0x10389074 */
  push32((uint32_t)(0x10389074u));
  /* 10381890 push 0x10389b28 */
  push32((uint32_t)(0x10389b28u));
  /* 10381895 call esi */
  call_ind((uint32_t)(ESI), 0x10381897u);
  /* 10381897 push 0x10389064 */
  push32((uint32_t)(0x10389064u));
  /* 1038189c push 0x10389b30 */
  push32((uint32_t)(0x10389b30u));
  /* 103818a1 call esi */
  call_ind((uint32_t)(ESI), 0x103818a3u);
  /* 103818a3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103818a6 push 0x10389058 */
  push32((uint32_t)(0x10389058u));
  /* 103818ab push 0x10389b38 */
  push32((uint32_t)(0x10389b38u));
  /* 103818b0 call esi */
  call_ind((uint32_t)(ESI), 0x103818b2u);
  /* 103818b2 push 0x1038904c */
  push32((uint32_t)(0x1038904cu));
  /* 103818b7 push 0x10389b40 */
  push32((uint32_t)(0x10389b40u));
  /* 103818bc call esi */
  call_ind((uint32_t)(ESI), 0x103818beu);
  /* 103818be push 0x10389040 */
  push32((uint32_t)(0x10389040u));
  /* 103818c3 push 0x10389b18 */
  push32((uint32_t)(0x10389b18u));
  /* 103818c8 call esi */
  call_ind((uint32_t)(ESI), 0x103818cau);
  /* 103818ca mov esi, dword ptr [0x10388168] */
  ESI = (r32((uint32_t)(0x10388168)));
  /* 103818d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103818d2 push 0x10389ba0 */
  push32((uint32_t)(0x10389ba0u));
  /* 103818d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103818d9 call esi */
  call_ind((uint32_t)(ESI), 0x103818dbu);
  /* 103818db push 0 */
  push32((uint32_t)(0x0u));
  /* 103818dd push 0x10389bb0 */
  push32((uint32_t)(0x10389bb0u));
  /* 103818e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103818e4 call esi */
  call_ind((uint32_t)(ESI), 0x103818e6u);
  /* 103818e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103818e8 push 0x10389bc0 */
  push32((uint32_t)(0x10389bc0u));
  /* 103818ed push 0 */
  push32((uint32_t)(0x0u));
  /* 103818ef call esi */
  call_ind((uint32_t)(ESI), 0x103818f1u);
  /* 103818f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103818f3 push 0x10389bd0 */
  push32((uint32_t)(0x10389bd0u));
  /* 103818f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103818fa call esi */
  call_ind((uint32_t)(ESI), 0x103818fcu);
  /* 103818fc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103818ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10381901 push 0x10389bd8 */
  push32((uint32_t)(0x10389bd8u));
  /* 10381906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381908 call esi */
  call_ind((uint32_t)(ESI), 0x1038190au);
  /* 1038190a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038190c push 0x10389be0 */
  push32((uint32_t)(0x10389be0u));
  /* 10381911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381913 call esi */
  call_ind((uint32_t)(ESI), 0x10381915u);
  /* 10381915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381917 push 0x10389be8 */
  push32((uint32_t)(0x10389be8u));
  /* 1038191c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038191e call esi */
  call_ind((uint32_t)(ESI), 0x10381920u);
  /* 10381920 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381922 push 0x10389bf0 */
  push32((uint32_t)(0x10389bf0u));
  /* 10381927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381929 call esi */
  call_ind((uint32_t)(ESI), 0x1038192bu);
  /* 1038192b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038192d push 0x10389bf8 */
  push32((uint32_t)(0x10389bf8u));
  /* 10381932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381934 call esi */
  call_ind((uint32_t)(ESI), 0x10381936u);
  /* 10381936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381938 push 0x10389b60 */
  push32((uint32_t)(0x10389b60u));
  /* 1038193d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038193f call esi */
  call_ind((uint32_t)(ESI), 0x10381941u);
  /* 10381941 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381944 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381946 push 0x10389b68 */
  push32((uint32_t)(0x10389b68u));
  /* 1038194b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038194d call esi */
  call_ind((uint32_t)(ESI), 0x1038194fu);
  /* 1038194f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381951 push 0x10389b70 */
  push32((uint32_t)(0x10389b70u));
  /* 10381956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381958 call esi */
  call_ind((uint32_t)(ESI), 0x1038195au);
  /* 1038195a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038195c push 0x10389b78 */
  push32((uint32_t)(0x10389b78u));
  /* 10381961 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381963 call esi */
  call_ind((uint32_t)(ESI), 0x10381965u);
  /* 10381965 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381967 push 0x10389b88 */
  push32((uint32_t)(0x10389b88u));
  /* 1038196c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038196e call esi */
  call_ind((uint32_t)(ESI), 0x10381970u);
  /* 10381970 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381972 push 0x10389b90 */
  push32((uint32_t)(0x10389b90u));
  /* 10381977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381979 call esi */
  call_ind((uint32_t)(ESI), 0x1038197bu);
  /* 1038197b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038197d push 0x10389b98 */
  push32((uint32_t)(0x10389b98u));
  /* 10381982 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381984 call esi */
  call_ind((uint32_t)(ESI), 0x10381986u);
  /* 10381986 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038198b push 0x10389ba8 */
  push32((uint32_t)(0x10389ba8u));
  /* 10381990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381992 call esi */
  call_ind((uint32_t)(ESI), 0x10381994u);
  /* 10381994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381996 push 0x10389bb8 */
  push32((uint32_t)(0x10389bb8u));
  /* 1038199b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038199d call esi */
  call_ind((uint32_t)(ESI), 0x1038199fu);
  /* 1038199f push 0 */
  push32((uint32_t)(0x0u));
  /* 103819a1 push 0x10389bc8 */
  push32((uint32_t)(0x10389bc8u));
  /* 103819a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819a8 call esi */
  call_ind((uint32_t)(ESI), 0x103819aau);
  /* 103819aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103819ac push 0x10389b80 */
  push32((uint32_t)(0x10389b80u));
  /* 103819b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819b3 call esi */
  call_ind((uint32_t)(ESI), 0x103819b5u);
  /* 103819b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819b7 push 0x10389e40 */
  push32((uint32_t)(0x10389e40u));
  /* 103819bc push 0 */
  push32((uint32_t)(0x0u));
  /* 103819be call esi */
  call_ind((uint32_t)(ESI), 0x103819c0u);
  /* 103819c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819c2 push 0x10389e48 */
  push32((uint32_t)(0x10389e48u));
  /* 103819c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819c9 call esi */
  call_ind((uint32_t)(ESI), 0x103819cbu);
  /* 103819cb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103819ce push 0 */
  push32((uint32_t)(0x0u));
  /* 103819d0 push 0x10389e50 */
  push32((uint32_t)(0x10389e50u));
  /* 103819d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819d7 call esi */
  call_ind((uint32_t)(ESI), 0x103819d9u);
  /* 103819d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819db push 0x10389e58 */
  push32((uint32_t)(0x10389e58u));
  /* 103819e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819e2 call esi */
  call_ind((uint32_t)(ESI), 0x103819e4u);
  /* 103819e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819e6 push 0x10389e68 */
  push32((uint32_t)(0x10389e68u));
  /* 103819eb push 0 */
  push32((uint32_t)(0x0u));
  /* 103819ed call esi */
  call_ind((uint32_t)(ESI), 0x103819efu);
  /* 103819ef push 0 */
  push32((uint32_t)(0x0u));
  /* 103819f1 push 0x10389e78 */
  push32((uint32_t)(0x10389e78u));
  /* 103819f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103819f8 call esi */
  call_ind((uint32_t)(ESI), 0x103819fau);
  /* 103819fa push 0 */
  push32((uint32_t)(0x0u));
  /* 103819fc push 0x10389e88 */
  push32((uint32_t)(0x10389e88u));
  /* 10381a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a03 call esi */
  call_ind((uint32_t)(ESI), 0x10381a05u);
  /* 10381a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a07 push 0x10389e98 */
  push32((uint32_t)(0x10389e98u));
  /* 10381a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a0e call esi */
  call_ind((uint32_t)(ESI), 0x10381a10u);
  /* 10381a10 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a15 push 0x10389ea8 */
  push32((uint32_t)(0x10389ea8u));
  /* 10381a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a1c call esi */
  call_ind((uint32_t)(ESI), 0x10381a1eu);
  /* 10381a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a20 push 0x10389a98 */
  push32((uint32_t)(0x10389a98u));
  /* 10381a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a27 call esi */
  call_ind((uint32_t)(ESI), 0x10381a29u);
  /* 10381a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a2b push 0x10389aa0 */
  push32((uint32_t)(0x10389aa0u));
  /* 10381a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a32 call esi */
  call_ind((uint32_t)(ESI), 0x10381a34u);
  /* 10381a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a36 push 0x10389aa8 */
  push32((uint32_t)(0x10389aa8u));
  /* 10381a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a3d call esi */
  call_ind((uint32_t)(ESI), 0x10381a3fu);
  /* 10381a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a41 push 0x10389ab0 */
  push32((uint32_t)(0x10389ab0u));
  /* 10381a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a48 call esi */
  call_ind((uint32_t)(ESI), 0x10381a4au);
  /* 10381a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a4c push 0x10389ac0 */
  push32((uint32_t)(0x10389ac0u));
  /* 10381a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a53 call esi */
  call_ind((uint32_t)(ESI), 0x10381a55u);
  /* 10381a55 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a5a push 0x10389ac8 */
  push32((uint32_t)(0x10389ac8u));
  /* 10381a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a61 call esi */
  call_ind((uint32_t)(ESI), 0x10381a63u);
  /* 10381a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a65 push 0x10389ad0 */
  push32((uint32_t)(0x10389ad0u));
  /* 10381a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a6c call esi */
  call_ind((uint32_t)(ESI), 0x10381a6eu);
  /* 10381a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a70 push 0x10389ad8 */
  push32((uint32_t)(0x10389ad8u));
  /* 10381a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a77 call esi */
  call_ind((uint32_t)(ESI), 0x10381a79u);
  /* 10381a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a7b push 0x10389ae0 */
  push32((uint32_t)(0x10389ae0u));
  /* 10381a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a82 call esi */
  call_ind((uint32_t)(ESI), 0x10381a84u);
  /* 10381a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a86 push 0x10389ae8 */
  push32((uint32_t)(0x10389ae8u));
  /* 10381a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a8d call esi */
  call_ind((uint32_t)(ESI), 0x10381a8fu);
  /* 10381a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a91 push 0x10389ab8 */
  push32((uint32_t)(0x10389ab8u));
  /* 10381a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a98 call esi */
  call_ind((uint32_t)(ESI), 0x10381a9au);
  /* 10381a9a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10381a9f push 0x10389e60 */
  push32((uint32_t)(0x10389e60u));
  /* 10381aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381aa6 call esi */
  call_ind((uint32_t)(ESI), 0x10381aa8u);
  /* 10381aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381aaa push 0x10389e70 */
  push32((uint32_t)(0x10389e70u));
  /* 10381aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ab1 call esi */
  call_ind((uint32_t)(ESI), 0x10381ab3u);
  /* 10381ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ab5 push 0x10389e80 */
  push32((uint32_t)(0x10389e80u));
  /* 10381aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10381abc call esi */
  call_ind((uint32_t)(ESI), 0x10381abeu);
  /* 10381abe push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ac0 push 0x10389e90 */
  push32((uint32_t)(0x10389e90u));
  /* 10381ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ac7 call esi */
  call_ind((uint32_t)(ESI), 0x10381ac9u);
  /* 10381ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381acb push 0x10389ea0 */
  push32((uint32_t)(0x10389ea0u));
  /* 10381ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ad2 call esi */
  call_ind((uint32_t)(ESI), 0x10381ad4u);
  /* 10381ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ad6 push 0x10389eb0 */
  push32((uint32_t)(0x10389eb0u));
  /* 10381adb push 0 */
  push32((uint32_t)(0x0u));
  /* 10381add call esi */
  call_ind((uint32_t)(ESI), 0x10381adfu);
  /* 10381adf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ae4 push 0x10389eb8 */
  push32((uint32_t)(0x10389eb8u));
  /* 10381ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381aeb call esi */
  call_ind((uint32_t)(ESI), 0x10381aedu);
  /* 10381aed push 0 */
  push32((uint32_t)(0x0u));
  /* 10381aef push 0x10389ec0 */
  push32((uint32_t)(0x10389ec0u));
  /* 10381af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381af6 call esi */
  call_ind((uint32_t)(ESI), 0x10381af8u);
  /* 10381af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381afa push 0x10389ec8 */
  push32((uint32_t)(0x10389ec8u));
  /* 10381aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b01 call esi */
  call_ind((uint32_t)(ESI), 0x10381b03u);
  /* 10381b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b05 push 0x10389af0 */
  push32((uint32_t)(0x10389af0u));
  /* 10381b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b0c call esi */
  call_ind((uint32_t)(ESI), 0x10381b0eu);
  /* 10381b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b10 push 0x10389af8 */
  push32((uint32_t)(0x10389af8u));
  /* 10381b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b17 call esi */
  call_ind((uint32_t)(ESI), 0x10381b19u);
  /* 10381b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b1b push 0x10389b00 */
  push32((uint32_t)(0x10389b00u));
  /* 10381b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b22 call esi */
  call_ind((uint32_t)(ESI), 0x10381b24u);
  /* 10381b24 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b29 push 0x10389b08 */
  push32((uint32_t)(0x10389b08u));
  /* 10381b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b30 call esi */
  call_ind((uint32_t)(ESI), 0x10381b32u);
  /* 10381b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b34 push 0x10389b10 */
  push32((uint32_t)(0x10389b10u));
  /* 10381b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b3b call esi */
  call_ind((uint32_t)(ESI), 0x10381b3du);
  /* 10381b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b3f push 0x10389b20 */
  push32((uint32_t)(0x10389b20u));
  /* 10381b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b46 call esi */
  call_ind((uint32_t)(ESI), 0x10381b48u);
  /* 10381b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b4a push 0x10389b28 */
  push32((uint32_t)(0x10389b28u));
  /* 10381b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b51 call esi */
  call_ind((uint32_t)(ESI), 0x10381b53u);
  /* 10381b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b55 push 0x10389b30 */
  push32((uint32_t)(0x10389b30u));
  /* 10381b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b5c call esi */
  call_ind((uint32_t)(ESI), 0x10381b5eu);
  /* 10381b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b60 push 0x10389b38 */
  push32((uint32_t)(0x10389b38u));
  /* 10381b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b67 call esi */
  call_ind((uint32_t)(ESI), 0x10381b69u);
  /* 10381b69 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b6e push 0x10389b40 */
  push32((uint32_t)(0x10389b40u));
  /* 10381b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b75 call esi */
  call_ind((uint32_t)(ESI), 0x10381b77u);
  /* 10381b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b79 push 0x10389b18 */
  push32((uint32_t)(0x10389b18u));
  /* 10381b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381b80 call esi */
  call_ind((uint32_t)(ESI), 0x10381b82u);
  /* 10381b82 mov esi, dword ptr [0x10388178] */
  ESI = (r32((uint32_t)(0x10388178)));
  /* 10381b88 push 0x10389038 */
  push32((uint32_t)(0x10389038u));
  /* 10381b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10381b8f call esi */
  call_ind((uint32_t)(ESI), 0x10381b91u);
  /* 10381b91 push 0x10389030 */
  push32((uint32_t)(0x10389030u));
  /* 10381b96 push 5 */
  push32((uint32_t)(0x5u));
  /* 10381b98 call esi */
  call_ind((uint32_t)(ESI), 0x10381b9au);
  /* 10381b9a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381b9d pop edi */
  EDI = (pop32());
  /* 10381b9e pop esi */
  ESI = (pop32());
  /* 10381b9f ret  */
  ESPCHK(0x10381020u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ba0 @ 0x10381ba0 (21 bytes, 6 insns) */
void f_10381ba0(void) {
  FTRACE(0x10381ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10381ba0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10381ba4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10381ba8 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10381bac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10381bae mov dword ptr [0x10389b48], edx */
  w32((uint32_t)(0x10389b48), (EDX));
  /* 10381bb4 ret  */
  ESPCHK(0x10381ba0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10381bc0 (11751 bytes, 3556 insns) */
void f_10381bc0(void) {
  FTRACE(0x10381bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10381bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10381bc1 push ebx */
  push32((uint32_t)(EBX));
  /* 10381bc2 push ebp */
  push32((uint32_t)(EBP));
  /* 10381bc3 push esi */
  push32((uint32_t)(ESI));
  /* 10381bc4 push edi */
  push32((uint32_t)(EDI));
  /* 10381bc5 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10381bc7 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10381bcdu);
  /* 10381bcd mov esi, dword ptr [0x10388174] */
  ESI = (r32((uint32_t)(0x10388174)));
  /* 10381bd3 mov ebp, dword ptr [0x103880b4] */
  EBP = (r32((uint32_t)(0x103880b4)));
  /* 10381bd9 mov ebx, dword ptr [0x103880b8] */
  EBX = (r32((uint32_t)(0x103880b8)));
  /* 10381bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381be2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10381be4 je 0x10381ff3 */
  if (C.zf) goto L_10381ff3;
  /* 10381bea mov ecx, 0x14 */
  ECX = (0x14u);
  /* 10381bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10381bf1 mov edi, 0x10389f58 */
  EDI = (0x10389f58u);
  /* 10381bf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10381bf8 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10381bfa mov eax, 0x13 */
  EAX = (0x13u);
  /* 10381bff push edx */
  push32((uint32_t)(EDX));
  /* 10381c00 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10381c02 mov dword ptr [0x10389d28], edx */
  w32((uint32_t)(0x10389d28), (EDX));
  /* 10381c08 mov dword ptr [0x10389a90], 0x14 */
  w32((uint32_t)(0x10389a90), (0x14u));
  /* 10381c12 mov dword ptr [0x1038a078], edx */
  w32((uint32_t)(0x1038a078), (EDX));
  /* 10381c18 mov dword ptr [0x1038a074], edx */
  w32((uint32_t)(0x1038a074), (EDX));
  /* 10381c1e mov dword ptr [0x10389ed8], edx */
  w32((uint32_t)(0x10389ed8), (EDX));
  /* 10381c24 mov dword ptr [0x10389a80], edx */
  w32((uint32_t)(0x10389a80), (EDX));
  /* 10381c2a mov dword ptr [0x10389c30], edx */
  w32((uint32_t)(0x10389c30), (EDX));
  /* 10381c30 mov dword ptr [0x1038a070], edx */
  w32((uint32_t)(0x1038a070), (EDX));
  /* 10381c36 mov dword ptr [0x1038a090], edx */
  w32((uint32_t)(0x1038a090), (EDX));
  /* 10381c3c mov dword ptr [0x10389ed0], edx */
  w32((uint32_t)(0x10389ed0), (EDX));
  /* 10381c42 mov dword ptr [0x10389ed4], edx */
  w32((uint32_t)(0x10389ed4), (EDX));
  /* 10381c48 mov dword ptr [0x1038a038], edx */
  w32((uint32_t)(0x1038a038), (EDX));
  /* 10381c4e mov dword ptr [0x1038a07c], eax */
  w32((uint32_t)(0x1038a07c), (EAX));
  /* 10381c53 mov dword ptr [0x10389c78], eax */
  w32((uint32_t)(0x10389c78), (EAX));
  /* 10381c58 call dword ptr [0x103880bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880bc))), 0x10381c5eu);
  /* 10381c5e mov edi, dword ptr [0x103880b0] */
  EDI = (r32((uint32_t)(0x103880b0)));
  /* 10381c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381c66 call edi */
  call_ind((uint32_t)(EDI), 0x10381c68u);
  /* 10381c68 mov ecx, 4 */
  ECX = (0x4u);
  /* 10381c6d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10381c6f lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10381c72 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10381c75 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10381c78 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10381c7b push eax */
  push32((uint32_t)(EAX));
  /* 10381c7c push 3 */
  push32((uint32_t)(0x3u));
  /* 10381c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381c80 call esi */
  call_ind((uint32_t)(ESI), 0x10381c82u);
  /* 10381c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381c84 call edi */
  call_ind((uint32_t)(EDI), 0x10381c86u);
  /* 10381c86 mov ecx, 6 */
  ECX = (0x6u);
  /* 10381c8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10381c8d lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10381c90 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10381c93 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10381c96 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10381c99 push ecx */
  push32((uint32_t)(ECX));
  /* 10381c9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10381c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10381c9e call esi */
  call_ind((uint32_t)(ESI), 0x10381ca0u);
  /* 10381ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ca6 call esi */
  call_ind((uint32_t)(ESI), 0x10381ca8u);
  /* 10381ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381caa push 2 */
  push32((uint32_t)(0x2u));
  /* 10381cac push 0 */
  push32((uint32_t)(0x0u));
  /* 10381cae call esi */
  call_ind((uint32_t)(ESI), 0x10381cb0u);
  /* 10381cb0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381cb5 call edi */
  call_ind((uint32_t)(EDI), 0x10381cb7u);
  /* 10381cb7 mov ecx, 6 */
  ECX = (0x6u);
  /* 10381cbc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10381cbe lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10381cc1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10381cc4 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10381cc7 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10381cca push edx */
  push32((uint32_t)(EDX));
  /* 10381ccb push 5 */
  push32((uint32_t)(0x5u));
  /* 10381ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ccf call esi */
  call_ind((uint32_t)(ESI), 0x10381cd1u);
  /* 10381cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381cd3 call edi */
  call_ind((uint32_t)(EDI), 0x10381cd5u);
  /* 10381cd5 mov ecx, 6 */
  ECX = (0x6u);
  /* 10381cda sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10381cdc lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10381cdf lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10381ce2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10381ce5 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10381ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10381ce9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10381ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ced call esi */
  call_ind((uint32_t)(ESI), 0x10381cefu);
  /* 10381cef push 0x55d4a80 */
  push32((uint32_t)(0x55d4a80u));
  /* 10381cf4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10381cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381cf8 call esi */
  call_ind((uint32_t)(ESI), 0x10381cfau);
  /* 10381cfa push 0x55d4a80 */
  push32((uint32_t)(0x55d4a80u));
  /* 10381cff push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d03 call esi */
  call_ind((uint32_t)(ESI), 0x10381d05u);
  /* 10381d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381d09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d0b call esi */
  call_ind((uint32_t)(ESI), 0x10381d0du);
  /* 10381d0d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d16 call esi */
  call_ind((uint32_t)(ESI), 0x10381d18u);
  /* 10381d18 push 0x55d4a80 */
  push32((uint32_t)(0x55d4a80u));
  /* 10381d1d push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d21 call esi */
  call_ind((uint32_t)(ESI), 0x10381d23u);
  /* 10381d23 push 0x55d4a80 */
  push32((uint32_t)(0x55d4a80u));
  /* 10381d28 push 4 */
  push32((uint32_t)(0x4u));
  /* 10381d2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d2c call esi */
  call_ind((uint32_t)(ESI), 0x10381d2eu);
  /* 10381d2e push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10381d33 push 3 */
  push32((uint32_t)(0x3u));
  /* 10381d35 push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d37 call esi */
  call_ind((uint32_t)(ESI), 0x10381d39u);
  /* 10381d39 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10381d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10381d40 push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d42 call esi */
  call_ind((uint32_t)(ESI), 0x10381d44u);
  /* 10381d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381d48 push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d4a call esi */
  call_ind((uint32_t)(ESI), 0x10381d4cu);
  /* 10381d4c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381d51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381d53 push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d55 call esi */
  call_ind((uint32_t)(ESI), 0x10381d57u);
  /* 10381d57 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10381d5c push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d5e push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d60 call esi */
  call_ind((uint32_t)(ESI), 0x10381d62u);
  /* 10381d62 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10381d67 push 4 */
  push32((uint32_t)(0x4u));
  /* 10381d69 push 5 */
  push32((uint32_t)(0x5u));
  /* 10381d6b call esi */
  call_ind((uint32_t)(ESI), 0x10381d6du);
  /* 10381d6d mov edi, dword ptr [0x103880c4] */
  EDI = (r32((uint32_t)(0x103880c4)));
  /* 10381d73 push 0x10389738 */
  push32((uint32_t)(0x10389738u));
  /* 10381d78 push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 10381d7d call edi */
  call_ind((uint32_t)(EDI), 0x10381d7fu);
  /* 10381d7f push 0x10389724 */
  push32((uint32_t)(0x10389724u));
  /* 10381d84 push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 10381d89 call edi */
  call_ind((uint32_t)(EDI), 0x10381d8bu);
  /* 10381d8b push 0x10389710 */
  push32((uint32_t)(0x10389710u));
  /* 10381d90 push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 10381d95 call edi */
  call_ind((uint32_t)(EDI), 0x10381d97u);
  /* 10381d97 push 0x103896fc */
  push32((uint32_t)(0x103896fcu));
  /* 10381d9c push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 10381da1 call edi */
  call_ind((uint32_t)(EDI), 0x10381da3u);
  /* 10381da3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381da6 push 0x103896e8 */
  push32((uint32_t)(0x103896e8u));
  /* 10381dab push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 10381db0 call edi */
  call_ind((uint32_t)(EDI), 0x10381db2u);
  /* 10381db2 push 0x103896d4 */
  push32((uint32_t)(0x103896d4u));
  /* 10381db7 push 0x103895a8 */
  push32((uint32_t)(0x103895a8u));
  /* 10381dbc call edi */
  call_ind((uint32_t)(EDI), 0x10381dbeu);
  /* 10381dbe push 0x103896cc */
  push32((uint32_t)(0x103896ccu));
  /* 10381dc3 push 0x103895a0 */
  push32((uint32_t)(0x103895a0u));
  /* 10381dc8 call edi */
  call_ind((uint32_t)(EDI), 0x10381dcau);
  /* 10381dca push 0x103896c4 */
  push32((uint32_t)(0x103896c4u));
  /* 10381dcf push 0x103895b4 */
  push32((uint32_t)(0x103895b4u));
  /* 10381dd4 call edi */
  call_ind((uint32_t)(EDI), 0x10381dd6u);
  /* 10381dd6 push 0x103896bc */
  push32((uint32_t)(0x103896bcu));
  /* 10381ddb push 0x1038952c */
  push32((uint32_t)(0x1038952cu));
  /* 10381de0 call edi */
  call_ind((uint32_t)(EDI), 0x10381de2u);
  /* 10381de2 push 0x103896b4 */
  push32((uint32_t)(0x103896b4u));
  /* 10381de7 push 0x1038952c */
  push32((uint32_t)(0x1038952cu));
  /* 10381dec call edi */
  call_ind((uint32_t)(EDI), 0x10381deeu);
  /* 10381dee push 0x103896ac */
  push32((uint32_t)(0x103896acu));
  /* 10381df3 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10381df9u);
  /* 10381df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381dfb call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10381e01u);
  /* 10381e01 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10381e06 jne 0x10381e35 */
  if (!C.zf) goto L_10381e35;
  /* 10381e08 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10381e0d push 3 */
  push32((uint32_t)(0x3u));
  /* 10381e0f push eax */
  push32((uint32_t)(EAX));
  /* 10381e10 call esi */
  call_ind((uint32_t)(ESI), 0x10381e12u);
  /* 10381e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e14 push 0x10389dd0 */
  push32((uint32_t)(0x10389dd0u));
  /* 10381e19 call ebp */
  call_ind((uint32_t)(EBP), 0x10381e1bu);
  /* 10381e1b mov esi, dword ptr [0x103880c0] */
  ESI = (r32((uint32_t)(0x103880c0)));
  /* 10381e21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e23 call esi */
  call_ind((uint32_t)(ESI), 0x10381e25u);
  /* 10381e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e27 push 0x10389de0 */
  push32((uint32_t)(0x10389de0u));
  /* 10381e2c call ebp */
  call_ind((uint32_t)(EBP), 0x10381e2eu);
  /* 10381e2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e30 call esi */
  call_ind((uint32_t)(ESI), 0x10381e32u);
  /* 10381e32 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10381e35:;
  /* 10381e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e37 push 0x10389df0 */
  push32((uint32_t)(0x10389df0u));
  /* 10381e3c call ebp */
  call_ind((uint32_t)(EBP), 0x10381e3eu);
  /* 10381e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e42 call dword ptr [0x103880d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d0))), 0x10381e48u);
  /* 10381e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e4a push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10381e4f call ebp */
  call_ind((uint32_t)(EBP), 0x10381e51u);
  /* 10381e51 mov esi, dword ptr [0x103880d4] */
  ESI = (r32((uint32_t)(0x103880d4)));
  /* 10381e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e59 call esi */
  call_ind((uint32_t)(ESI), 0x10381e5bu);
  /* 10381e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e5d push 0x10389d58 */
  push32((uint32_t)(0x10389d58u));
  /* 10381e62 call ebp */
  call_ind((uint32_t)(EBP), 0x10381e64u);
  /* 10381e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e66 call esi */
  call_ind((uint32_t)(ESI), 0x10381e68u);
  /* 10381e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e6a push 0x10389d68 */
  push32((uint32_t)(0x10389d68u));
  /* 10381e6f call ebp */
  call_ind((uint32_t)(EBP), 0x10381e71u);
  /* 10381e71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e73 call esi */
  call_ind((uint32_t)(ESI), 0x10381e75u);
  /* 10381e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e77 push 0x10389d78 */
  push32((uint32_t)(0x10389d78u));
  /* 10381e7c call ebp */
  call_ind((uint32_t)(EBP), 0x10381e7eu);
  /* 10381e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e80 call esi */
  call_ind((uint32_t)(ESI), 0x10381e82u);
  /* 10381e82 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e87 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10381e8c call ebp */
  call_ind((uint32_t)(EBP), 0x10381e8eu);
  /* 10381e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10381e90 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10381e92 push 0x10389e08 */
  push32((uint32_t)(0x10389e08u));
  /* 10381e97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381e99 call ebx */
  call_ind((uint32_t)(EBX), 0x10381e9bu);
  /* 10381e9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10381e9d push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 10381ea2 push 0x10389e10 */
  push32((uint32_t)(0x10389e10u));
  /* 10381ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381ea9 call ebx */
  call_ind((uint32_t)(EBX), 0x10381eabu);
  /* 10381eab push 2 */
  push32((uint32_t)(0x2u));
  /* 10381ead push 0 */
  push32((uint32_t)(0x0u));
  /* 10381eaf push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10381eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381eb6 call ebx */
  call_ind((uint32_t)(EBX), 0x10381eb8u);
  /* 10381eb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381eba push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ebc push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10381ec1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381ec3 call ebx */
  call_ind((uint32_t)(EBX), 0x10381ec5u);
  /* 10381ec5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381eca push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10381ecc push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10381ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381ed3 call ebx */
  call_ind((uint32_t)(EBX), 0x10381ed5u);
  /* 10381ed5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381ed7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10381ed9 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10381ede push 1 */
  push32((uint32_t)(0x1u));
  /* 10381ee0 call ebx */
  call_ind((uint32_t)(EBX), 0x10381ee2u);
  /* 10381ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381ee4 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10381ee9 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10381eee push 1 */
  push32((uint32_t)(0x1u));
  /* 10381ef0 call ebx */
  call_ind((uint32_t)(EBX), 0x10381ef2u);
  /* 10381ef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381ef6 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 10381efb push 1 */
  push32((uint32_t)(0x1u));
  /* 10381efd call ebx */
  call_ind((uint32_t)(EBX), 0x10381effu);
  /* 10381eff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381f04 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 10381f09 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10381f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f10 call ebx */
  call_ind((uint32_t)(EBX), 0x10381f12u);
  /* 10381f12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381f14 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10381f19 push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 10381f1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f20 call ebx */
  call_ind((uint32_t)(EBX), 0x10381f22u);
  /* 10381f22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10381f24 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10381f29 push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 10381f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f30 call ebx */
  call_ind((uint32_t)(EBX), 0x10381f32u);
  /* 10381f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381f34 push 0x10389d40 */
  push32((uint32_t)(0x10389d40u));
  /* 10381f39 call ebp */
  call_ind((uint32_t)(EBP), 0x10381f3bu);
  /* 10381f3b mov esi, dword ptr [0x103880cc] */
  ESI = (r32((uint32_t)(0x103880cc)));
  /* 10381f41 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10381f43 push 0x10389f18 */
  push32((uint32_t)(0x10389f18u));
  /* 10381f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f4a call esi */
  call_ind((uint32_t)(ESI), 0x10381f4cu);
  /* 10381f4c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10381f51 push 0x10389d50 */
  push32((uint32_t)(0x10389d50u));
  /* 10381f56 call ebp */
  call_ind((uint32_t)(EBP), 0x10381f58u);
  /* 10381f58 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10381f5a push 0x10389f28 */
  push32((uint32_t)(0x10389f28u));
  /* 10381f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f61 call esi */
  call_ind((uint32_t)(ESI), 0x10381f63u);
  /* 10381f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381f65 push 0x1038a018 */
  push32((uint32_t)(0x1038a018u));
  /* 10381f6a call ebp */
  call_ind((uint32_t)(EBP), 0x10381f6cu);
  /* 10381f6c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10381f6e push 0x1038a0a0 */
  push32((uint32_t)(0x1038a0a0u));
  /* 10381f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f75 call esi */
  call_ind((uint32_t)(ESI), 0x10381f77u);
  /* 10381f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381f79 push 0x1038a030 */
  push32((uint32_t)(0x1038a030u));
  /* 10381f7e call ebp */
  call_ind((uint32_t)(EBP), 0x10381f80u);
  /* 10381f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381f82 push 0x1038a0a8 */
  push32((uint32_t)(0x1038a0a8u));
  /* 10381f87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381f89 call esi */
  call_ind((uint32_t)(ESI), 0x10381f8bu);
  /* 10381f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10381f8d push 0x1038a050 */
  push32((uint32_t)(0x1038a050u));
  /* 10381f92 call ebp */
  call_ind((uint32_t)(EBP), 0x10381f94u);
  /* 10381f94 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10381f97 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 10381f9c push 0x1038a0b0 */
  push32((uint32_t)(0x1038a0b0u));
  /* 10381fa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10381fa5u);
  /* 10381fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10381fa7 push 0x1038a058 */
  push32((uint32_t)(0x1038a058u));
  /* 10381fac call ebp */
  call_ind((uint32_t)(EBP), 0x10381faeu);
  /* 10381fae push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10381fb3 push 0x1038a0b8 */
  push32((uint32_t)(0x1038a0b8u));
  /* 10381fb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381fba call esi */
  call_ind((uint32_t)(ESI), 0x10381fbcu);
  /* 10381fbc push 0x10389dc8 */
  push32((uint32_t)(0x10389dc8u));
  /* 10381fc1 call dword ptr [0x103880dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880dc))), 0x10381fc7u);
  /* 10381fc7 mov esi, dword ptr [0x103880e0] */
  ESI = (r32((uint32_t)(0x103880e0)));
  /* 10381fcd push 0x10389da0 */
  push32((uint32_t)(0x10389da0u));
  /* 10381fd2 call esi */
  call_ind((uint32_t)(ESI), 0x10381fd4u);
  /* 10381fd4 push 0x1038a000 */
  push32((uint32_t)(0x1038a000u));
  /* 10381fd9 call esi */
  call_ind((uint32_t)(ESI), 0x10381fdbu);
  /* 10381fdb push 0x10389db8 */
  push32((uint32_t)(0x10389db8u));
  /* 10381fe0 call dword ptr [0x103880d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d8))), 0x10381fe6u);
  /* 10381fe6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10381fe8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10381fea call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10381ff0u);
  /* 10381ff0 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10381ff3:;
  /* 10381ff3 mov ecx, dword ptr [0x10389d28] */
  ECX = (r32((uint32_t)(0x10389d28)));
  /* 10381ff9 mov edi, dword ptr [0x103880ec] */
  EDI = (r32((uint32_t)(0x103880ec)));
  /* 10381fff cmp dword ptr [ecx*4 + 0x10389f58], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10389f58))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382007 jne 0x103820ab */
  if (!C.zf) goto L_103820ab;
  /* 1038200d mov eax, dword ptr [0x1038a070] */
  EAX = (r32((uint32_t)(0x1038a070)));
  /* 10382012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382014 jne 0x103820ab */
  if (!C.zf) goto L_103820ab;
  /* 1038201a mov eax, dword ptr [0x10389a80] */
  EAX = (r32((uint32_t)(0x10389a80)));
  /* 1038201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382021 jne 0x103820ab */
  if (!C.zf) goto L_103820ab;
  /* 10382027 mov eax, dword ptr [0x10389c30] */
  EAX = (r32((uint32_t)(0x10389c30)));
  /* 1038202c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038202e jne 0x103820ab */
  if (!C.zf) goto L_103820ab;
  /* 10382030 mov eax, dword ptr [0x10389ed8] */
  EAX = (r32((uint32_t)(0x10389ed8)));
  /* 10382035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382037 jne 0x103820ab */
  if (!C.zf) goto L_103820ab;
  /* 10382039 push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 1038203e call edi */
  call_ind((uint32_t)(EDI), 0x10382040u);
  /* 10382040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382043 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382045 je 0x103820ab */
  if (C.zf) goto L_103820ab;
  /* 10382047 push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 1038204c call edi */
  call_ind((uint32_t)(EDI), 0x1038204eu);
  /* 1038204e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382051 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382053 je 0x103820ab */
  if (C.zf) goto L_103820ab;
  /* 10382055 push 0x10389c60 */
  push32((uint32_t)(0x10389c60u));
  /* 1038205a call edi */
  call_ind((uint32_t)(EDI), 0x1038205cu);
  /* 1038205c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038205f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382061 je 0x103820ab */
  if (C.zf) goto L_103820ab;
  /* 10382063 push 0x10389c68 */
  push32((uint32_t)(0x10389c68u));
  /* 10382068 call edi */
  call_ind((uint32_t)(EDI), 0x1038206au);
  /* 1038206a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038206d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038206f je 0x103820ab */
  if (C.zf) goto L_103820ab;
  /* 10382071 push 0x10389d18 */
  push32((uint32_t)(0x10389d18u));
  /* 10382076 call edi */
  call_ind((uint32_t)(EDI), 0x10382078u);
  /* 10382078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038207b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038207d je 0x103820ab */
  if (C.zf) goto L_103820ab;
  /* 1038207f push 0x10389d20 */
  push32((uint32_t)(0x10389d20u));
  /* 10382084 call edi */
  call_ind((uint32_t)(EDI), 0x10382086u);
  /* 10382086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382089 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038208b je 0x103820ab */
  if (C.zf) goto L_103820ab;
  /* 1038208d mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 10382093 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10382095 push 7 */
  push32((uint32_t)(0x7u));
  /* 10382097 mov dword ptr [edx*4 + 0x10389f58], 2 */
  w32((uint32_t)(EDX*4 + 0x10389f58), (0x2u));
  /* 103820a2 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x103820a8u);
  /* 103820a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103820ab:;
  /* 103820ab mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 103820b0 mov esi, dword ptr [0x103880e4] */
  ESI = (r32((uint32_t)(0x103880e4)));
  /* 103820b6 cmp dword ptr [eax*4 + 0x10389f58], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10389f58))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103820be jne 0x103822f3 */
  if (!C.zf) goto L_103822f3;
  /* 103820c4 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 103820c6 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103820ccu);
  /* 103820cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103820cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103820d1 je 0x103822f3 */
  if (C.zf) goto L_103822f3;
  /* 103820d7 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 103820d9 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103820dfu);
  /* 103820df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103820e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103820e4 je 0x103822f3 */
  if (C.zf) goto L_103822f3;
  /* 103820ea mov eax, dword ptr [0x10389a80] */
  EAX = (r32((uint32_t)(0x10389a80)));
  /* 103820ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103820f1 jle 0x1038215e */
  if ((C.zf||C.sf!=C.of)) goto L_1038215e;
  /* 103820f3 push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 103820f8 call edi */
  call_ind((uint32_t)(EDI), 0x103820fau);
  /* 103820fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103820fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103820ff je 0x10382124 */
  if (C.zf) goto L_10382124;
  /* 10382101 mov ecx, dword ptr [0x10389a80] */
  ECX = (r32((uint32_t)(0x10389a80)));
  /* 10382107 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10382108 mov dword ptr [0x10389a80], ecx */
  w32((uint32_t)(0x10389a80), (ECX));
  /* 1038210e mov ecx, dword ptr [0x10389b48] */
  ECX = (r32((uint32_t)(0x10389b48)));
  /* 10382114 push ecx */
  push32((uint32_t)(ECX));
  /* 10382115 push 0x10389ef0 */
  push32((uint32_t)(0x10389ef0u));
  /* 1038211a push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 1038211f call esi */
  call_ind((uint32_t)(ESI), 0x10382121u);
  /* 10382121 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382124:;
  /* 10382124 mov eax, dword ptr [0x10389a80] */
  EAX = (r32((uint32_t)(0x10389a80)));
  /* 10382129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038212b jle 0x1038215e */
  if ((C.zf||C.sf!=C.of)) goto L_1038215e;
  /* 1038212d push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 10382132 call edi */
  call_ind((uint32_t)(EDI), 0x10382134u);
  /* 10382134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382137 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382139 je 0x1038215e */
  if (C.zf) goto L_1038215e;
  /* 1038213b mov edx, dword ptr [0x10389b48] */
  EDX = (r32((uint32_t)(0x10389b48)));
  /* 10382141 mov ecx, dword ptr [0x10389a80] */
  ECX = (r32((uint32_t)(0x10389a80)));
  /* 10382147 push edx */
  push32((uint32_t)(EDX));
  /* 10382148 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10382149 push 0x10389ef0 */
  push32((uint32_t)(0x10389ef0u));
  /* 1038214e push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 10382153 mov dword ptr [0x10389a80], ecx */
  w32((uint32_t)(0x10389a80), (ECX));
  /* 10382159 call esi */
  call_ind((uint32_t)(ESI), 0x1038215bu);
  /* 1038215b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038215e:;
  /* 1038215e mov eax, dword ptr [0x10389c30] */
  EAX = (r32((uint32_t)(0x10389c30)));
  /* 10382163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382165 jle 0x103821d1 */
  if ((C.zf||C.sf!=C.of)) goto L_103821d1;
  /* 10382167 push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 1038216c call edi */
  call_ind((uint32_t)(EDI), 0x1038216eu);
  /* 1038216e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382171 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382173 je 0x10382197 */
  if (C.zf) goto L_10382197;
  /* 10382175 mov eax, dword ptr [0x10389b48] */
  EAX = (r32((uint32_t)(0x10389b48)));
  /* 1038217a mov edx, dword ptr [0x10389c30] */
  EDX = (r32((uint32_t)(0x10389c30)));
  /* 10382180 push eax */
  push32((uint32_t)(EAX));
  /* 10382181 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10382182 push 0x10389a88 */
  push32((uint32_t)(0x10389a88u));
  /* 10382187 push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 1038218c mov dword ptr [0x10389c30], edx */
  w32((uint32_t)(0x10389c30), (EDX));
  /* 10382192 call esi */
  call_ind((uint32_t)(ESI), 0x10382194u);
  /* 10382194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382197:;
  /* 10382197 mov eax, dword ptr [0x10389c30] */
  EAX = (r32((uint32_t)(0x10389c30)));
  /* 1038219c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038219e jle 0x103821d1 */
  if ((C.zf||C.sf!=C.of)) goto L_103821d1;
  /* 103821a0 push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 103821a5 call edi */
  call_ind((uint32_t)(EDI), 0x103821a7u);
  /* 103821a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103821aa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103821ac je 0x103821d1 */
  if (C.zf) goto L_103821d1;
  /* 103821ae mov ecx, dword ptr [0x10389c30] */
  ECX = (r32((uint32_t)(0x10389c30)));
  /* 103821b4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103821b5 mov dword ptr [0x10389c30], ecx */
  w32((uint32_t)(0x10389c30), (ECX));
  /* 103821bb mov ecx, dword ptr [0x10389b48] */
  ECX = (r32((uint32_t)(0x10389b48)));
  /* 103821c1 push ecx */
  push32((uint32_t)(ECX));
  /* 103821c2 push 0x10389a88 */
  push32((uint32_t)(0x10389a88u));
  /* 103821c7 push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 103821cc call esi */
  call_ind((uint32_t)(ESI), 0x103821ceu);
  /* 103821ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103821d1:;
  /* 103821d1 mov eax, dword ptr [0x1038a0c0] */
  EAX = (r32((uint32_t)(0x1038a0c0)));
  /* 103821d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103821d8 jle 0x10382244 */
  if ((C.zf||C.sf!=C.of)) goto L_10382244;
  /* 103821da push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 103821df call edi */
  call_ind((uint32_t)(EDI), 0x103821e1u);
  /* 103821e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103821e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103821e6 je 0x1038220b */
  if (C.zf) goto L_1038220b;
  /* 103821e8 mov edx, dword ptr [0x10389b48] */
  EDX = (r32((uint32_t)(0x10389b48)));
  /* 103821ee mov ecx, dword ptr [0x1038a0c0] */
  ECX = (r32((uint32_t)(0x1038a0c0)));
  /* 103821f4 push edx */
  push32((uint32_t)(EDX));
  /* 103821f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103821f6 push 0x10389b50 */
  push32((uint32_t)(0x10389b50u));
  /* 103821fb push 0x10389c50 */
  push32((uint32_t)(0x10389c50u));
  /* 10382200 mov dword ptr [0x1038a0c0], ecx */
  w32((uint32_t)(0x1038a0c0), (ECX));
  /* 10382206 call esi */
  call_ind((uint32_t)(ESI), 0x10382208u);
  /* 10382208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038220b:;
  /* 1038220b mov eax, dword ptr [0x1038a0c0] */
  EAX = (r32((uint32_t)(0x1038a0c0)));
  /* 10382210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382212 jle 0x10382244 */
  if ((C.zf||C.sf!=C.of)) goto L_10382244;
  /* 10382214 push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 10382219 call edi */
  call_ind((uint32_t)(EDI), 0x1038221bu);
  /* 1038221b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038221e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382220 je 0x10382244 */
  if (C.zf) goto L_10382244;
  /* 10382222 mov eax, dword ptr [0x10389b48] */
  EAX = (r32((uint32_t)(0x10389b48)));
  /* 10382227 mov edx, dword ptr [0x1038a0c0] */
  EDX = (r32((uint32_t)(0x1038a0c0)));
  /* 1038222d push eax */
  push32((uint32_t)(EAX));
  /* 1038222e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1038222f push 0x10389b50 */
  push32((uint32_t)(0x10389b50u));
  /* 10382234 push 0x10389c58 */
  push32((uint32_t)(0x10389c58u));
  /* 10382239 mov dword ptr [0x1038a0c0], edx */
  w32((uint32_t)(0x1038a0c0), (EDX));
  /* 1038223f call esi */
  call_ind((uint32_t)(ESI), 0x10382241u);
  /* 10382241 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382244:;
  /* 10382244 mov eax, dword ptr [0x1038a070] */
  EAX = (r32((uint32_t)(0x1038a070)));
  /* 10382249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038224b jle 0x103822f3 */
  if ((C.zf||C.sf!=C.of)) goto L_103822f3;
  /* 10382251 push 0x10389c60 */
  push32((uint32_t)(0x10389c60u));
  /* 10382256 call edi */
  call_ind((uint32_t)(EDI), 0x10382258u);
  /* 10382258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038225b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038225d je 0x10382282 */
  if (C.zf) goto L_10382282;
  /* 1038225f mov ecx, dword ptr [0x1038a070] */
  ECX = (r32((uint32_t)(0x1038a070)));
  /* 10382265 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10382266 mov dword ptr [0x1038a070], ecx */
  w32((uint32_t)(0x1038a070), (ECX));
  /* 1038226c mov ecx, dword ptr [0x10389b48] */
  ECX = (r32((uint32_t)(0x10389b48)));
  /* 10382272 push ecx */
  push32((uint32_t)(ECX));
  /* 10382273 push 0x1038a0c8 */
  push32((uint32_t)(0x1038a0c8u));
  /* 10382278 push 0x10389c60 */
  push32((uint32_t)(0x10389c60u));
  /* 1038227d call esi */
  call_ind((uint32_t)(ESI), 0x1038227fu);
  /* 1038227f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382282:;
  /* 10382282 mov eax, dword ptr [0x1038a070] */
  EAX = (r32((uint32_t)(0x1038a070)));
  /* 10382287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382289 jle 0x103822f3 */
  if ((C.zf||C.sf!=C.of)) goto L_103822f3;
  /* 1038228b push 0x10389c68 */
  push32((uint32_t)(0x10389c68u));
  /* 10382290 call edi */
  call_ind((uint32_t)(EDI), 0x10382292u);
  /* 10382292 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382295 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382297 je 0x103822bc */
  if (C.zf) goto L_103822bc;
  /* 10382299 mov edx, dword ptr [0x10389b48] */
  EDX = (r32((uint32_t)(0x10389b48)));
  /* 1038229f mov ecx, dword ptr [0x1038a070] */
  ECX = (r32((uint32_t)(0x1038a070)));
  /* 103822a5 push edx */
  push32((uint32_t)(EDX));
  /* 103822a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103822a7 push 0x1038a0c8 */
  push32((uint32_t)(0x1038a0c8u));
  /* 103822ac push 0x10389c68 */
  push32((uint32_t)(0x10389c68u));
  /* 103822b1 mov dword ptr [0x1038a070], ecx */
  w32((uint32_t)(0x1038a070), (ECX));
  /* 103822b7 call esi */
  call_ind((uint32_t)(ESI), 0x103822b9u);
  /* 103822b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103822bc:;
  /* 103822bc mov eax, dword ptr [0x1038a070] */
  EAX = (r32((uint32_t)(0x1038a070)));
  /* 103822c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103822c3 jle 0x103822f3 */
  if ((C.zf||C.sf!=C.of)) goto L_103822f3;
  /* 103822c5 push 0x10389d18 */
  push32((uint32_t)(0x10389d18u));
  /* 103822ca call edi */
  call_ind((uint32_t)(EDI), 0x103822ccu);
  /* 103822cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103822cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103822d1 je 0x103822f3 */
  if (C.zf) goto L_103822f3;
  /* 103822d3 mov eax, dword ptr [0x1038a070] */
  EAX = (r32((uint32_t)(0x1038a070)));
  /* 103822d8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103822d9 mov dword ptr [0x1038a070], eax */
  w32((uint32_t)(0x1038a070), (EAX));
  /* 103822de mov eax, dword ptr [0x10389b48] */
  EAX = (r32((uint32_t)(0x10389b48)));
  /* 103822e3 push eax */
  push32((uint32_t)(EAX));
  /* 103822e4 push 0x1038a0c8 */
  push32((uint32_t)(0x1038a0c8u));
  /* 103822e9 push 0x10389d18 */
  push32((uint32_t)(0x10389d18u));
  /* 103822ee call esi */
  call_ind((uint32_t)(ESI), 0x103822f0u);
  /* 103822f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103822f3:;
  /* 103822f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103822f5 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103822fbu);
  /* 103822fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103822fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382300 je 0x1038232e */
  if (C.zf) goto L_1038232e;
  /* 10382302 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382304 push 0x10389b58 */
  push32((uint32_t)(0x10389b58u));
  /* 10382309 call dword ptr [0x103880f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f4))), 0x1038230fu);
  /* 1038230f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382314 jle 0x1038232e */
  if ((C.zf||C.sf!=C.of)) goto L_1038232e;
  /* 10382316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382318 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038231a call dword ptr [0x103880bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880bc))), 0x10382320u);
  /* 10382320 push 0x103896a4 */
  push32((uint32_t)(0x103896a4u));
  /* 10382325 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x1038232bu);
  /* 1038232b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038232e:;
  /* 1038232e push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382333 push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 10382338 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x1038233eu);
  /* 1038233e mov esi, dword ptr [0x103880f0] */
  ESI = (r32((uint32_t)(0x103880f0)));
  /* 10382344 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382346 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 1038234b mov edi, eax */
  EDI = (EAX);
  /* 1038234d call esi */
  call_ind((uint32_t)(ESI), 0x1038234fu);
  /* 1038234f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382352 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382354 jne 0x10382471 */
  if (!C.zf) goto L_10382471;
  /* 1038235a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038235c push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382361 call esi */
  call_ind((uint32_t)(ESI), 0x10382363u);
  /* 10382363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382368 jle 0x10382471 */
  if ((C.zf||C.sf!=C.of)) goto L_10382471;
  /* 1038236e push 0 */
  push32((uint32_t)(0x0u));
  /* 10382370 call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10382376u);
  /* 10382376 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10382379 mov edi, 0x9c4 */
  EDI = (0x9c4u);
  /* 1038237e push 0 */
  push32((uint32_t)(0x0u));
  /* 10382380 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382385 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10382388 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 1038238b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038238d call esi */
  call_ind((uint32_t)(ESI), 0x1038238fu);
  /* 1038238f imul edi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10382392 push edi */
  push32((uint32_t)(EDI));
  /* 10382393 push 3 */
  push32((uint32_t)(0x3u));
  /* 10382395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382397 call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x1038239du);
  /* 1038239d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038239f call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x103823a5u);
  /* 103823a5 mov edi, 6 */
  EDI = (0x6u);
  /* 103823aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103823ac push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 103823b1 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103823b3 call esi */
  call_ind((uint32_t)(ESI), 0x103823b5u);
  /* 103823b5 imul edi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103823b8 lea edi, [edi + edi*4] */
  EDI = ((uint32_t)(EDI + EDI*4));
  /* 103823bb lea edx, [edi + edi*4] */
  EDX = ((uint32_t)(EDI + EDI*4));
  /* 103823be shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103823c0 push edx */
  push32((uint32_t)(EDX));
  /* 103823c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103823c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103823c5 call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x103823cbu);
  /* 103823cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103823cd call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x103823d3u);
  /* 103823d3 mov edi, 7 */
  EDI = (0x7u);
  /* 103823d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103823da push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 103823df sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103823e1 call esi */
  call_ind((uint32_t)(ESI), 0x103823e3u);
  /* 103823e3 imul edi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103823e6 lea edi, [edi + edi*4] */
  EDI = ((uint32_t)(EDI + EDI*4));
  /* 103823e9 lea eax, [edi + edi*4] */
  EAX = ((uint32_t)(EDI + EDI*4));
  /* 103823ec shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103823ef push eax */
  push32((uint32_t)(EAX));
  /* 103823f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 103823f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103823f4 call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x103823fau);
  /* 103823fa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103823fd push 0 */
  push32((uint32_t)(0x0u));
  /* 103823ff call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10382405u);
  /* 10382405 mov edi, 7 */
  EDI = (0x7u);
  /* 1038240a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038240c push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382411 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10382413 call esi */
  call_ind((uint32_t)(ESI), 0x10382415u);
  /* 10382415 imul edi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10382418 lea edi, [edi + edi*4] */
  EDI = ((uint32_t)(EDI + EDI*4));
  /* 1038241b lea ecx, [edi + edi*4] */
  ECX = ((uint32_t)(EDI + EDI*4));
  /* 1038241e shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10382421 push ecx */
  push32((uint32_t)(ECX));
  /* 10382422 push 5 */
  push32((uint32_t)(0x5u));
  /* 10382424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382426 call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x1038242cu);
  /* 1038242c push 0x1038969c */
  push32((uint32_t)(0x1038969cu));
  /* 10382431 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10382437u);
  /* 10382437 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382439 push 0x10389ce0 */
  push32((uint32_t)(0x10389ce0u));
  /* 1038243e push 0 */
  push32((uint32_t)(0x0u));
  /* 10382440 call dword ptr [0x10388104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388104))), 0x10382446u);
  /* 10382446 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382448 call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x1038244eu);
  /* 1038244e push 0 */
  push32((uint32_t)(0x0u));
  /* 10382450 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382457 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x1038245du);
  /* 1038245d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038245f call dword ptr [0x10388110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388110))), 0x10382465u);
  /* 10382465 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382467 push 0x10389ce0 */
  push32((uint32_t)(0x10389ce0u));
  /* 1038246c call ebp */
  call_ind((uint32_t)(EBP), 0x1038246eu);
  /* 1038246e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382471:;
  /* 10382471 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382473 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382479u);
  /* 10382479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038247c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038247e je 0x103824f7 */
  if (C.zf) goto L_103824f7;
  /* 10382480 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382485 push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 1038248a call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10382490u);
  /* 10382490 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382492 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382497 mov edi, eax */
  EDI = (EAX);
  /* 10382499 call esi */
  call_ind((uint32_t)(ESI), 0x1038249bu);
  /* 1038249b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038249e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103824a0 jne 0x103824f7 */
  if (!C.zf) goto L_103824f7;
  /* 103824a2 mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
  /* 103824a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103824aa push 2 */
  push32((uint32_t)(0x2u));
  /* 103824ac call edi */
  call_ind((uint32_t)(EDI), 0x103824aeu);
  /* 103824ae push 0xe */
  push32((uint32_t)(0xeu));
  /* 103824b0 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103824b6u);
  /* 103824b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103824b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103824bb push 1 */
  push32((uint32_t)(0x1u));
  /* 103824bd je 0x103824cc */
  if (C.zf) goto L_103824cc;
  /* 103824bf push 2 */
  push32((uint32_t)(0x2u));
  /* 103824c1 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x103824c7u);
  /* 103824c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103824ca jmp 0x103824ee */
  goto L_103824ee;
L_103824cc:;
  /* 103824cc push 0xe */
  push32((uint32_t)(0xeu));
  /* 103824ce call edi */
  call_ind((uint32_t)(EDI), 0x103824d0u);
  /* 103824d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103824d2 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 103824d7 call ebp */
  call_ind((uint32_t)(EBP), 0x103824d9u);
  /* 103824d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 103824db call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x103824e1u);
  /* 103824e1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103824e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103824e5 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x103824ebu);
  /* 103824eb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103824ee:;
  /* 103824ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103824f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 103824f2 call edi */
  call_ind((uint32_t)(EDI), 0x103824f4u);
  /* 103824f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103824f7:;
  /* 103824f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103824f9 call dword ptr [0x10388108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388108))), 0x103824ffu);
  /* 103824ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382502 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382504 je 0x10382525 */
  if (C.zf) goto L_10382525;
  /* 10382506 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382508 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 1038250d push 1 */
  push32((uint32_t)(0x1u));
  /* 1038250f call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10382515u);
  /* 10382515 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382519 push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 1038251e push 1 */
  push32((uint32_t)(0x1u));
  /* 10382520 call ebx */
  call_ind((uint32_t)(EBX), 0x10382522u);
  /* 10382522 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382525:;
  /* 10382525 push 3 */
  push32((uint32_t)(0x3u));
  /* 10382527 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038252du);
  /* 1038252d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382530 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382532 jne 0x10382639 */
  if (!C.zf) goto L_10382639;
  /* 10382538 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 1038253d push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 10382542 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10382548u);
  /* 10382548 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038254a push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 1038254f mov edi, eax */
  EDI = (EAX);
  /* 10382551 call esi */
  call_ind((uint32_t)(ESI), 0x10382553u);
  /* 10382553 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382556 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382558 jne 0x10382639 */
  if (!C.zf) goto L_10382639;
  /* 1038255e push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382563 push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 10382568 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x1038256eu);
  /* 1038256e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382573 jle 0x10382639 */
  if ((C.zf||C.sf!=C.of)) goto L_10382639;
  /* 10382579 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038257b push 3 */
  push32((uint32_t)(0x3u));
  /* 1038257d call dword ptr [0x103880bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880bc))), 0x10382583u);
  /* 10382583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382585 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 1038258a call esi */
  call_ind((uint32_t)(ESI), 0x1038258cu);
  /* 1038258c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1038258f mov edi, dword ptr [0x10388100] */
  EDI = (r32((uint32_t)(0x10388100)));
  /* 10382595 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10382598 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 1038259b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1038259e push edx */
  push32((uint32_t)(EDX));
  /* 1038259f push 3 */
  push32((uint32_t)(0x3u));
  /* 103825a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103825a3 call edi */
  call_ind((uint32_t)(EDI), 0x103825a5u);
  /* 103825a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103825a7 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 103825ac call esi */
  call_ind((uint32_t)(ESI), 0x103825aeu);
  /* 103825ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103825b1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103825b4 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 103825b7 push eax */
  push32((uint32_t)(EAX));
  /* 103825b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103825ba push 1 */
  push32((uint32_t)(0x1u));
  /* 103825bc call edi */
  call_ind((uint32_t)(EDI), 0x103825beu);
  /* 103825be push 0 */
  push32((uint32_t)(0x0u));
  /* 103825c0 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 103825c5 call esi */
  call_ind((uint32_t)(ESI), 0x103825c7u);
  /* 103825c7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103825ca lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103825cd lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103825d0 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103825d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103825d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 103825d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103825d8 call edi */
  call_ind((uint32_t)(EDI), 0x103825dau);
  /* 103825da add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103825dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103825df push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 103825e4 call esi */
  call_ind((uint32_t)(ESI), 0x103825e6u);
  /* 103825e6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103825e9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103825ec lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 103825ef shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 103825f2 push edx */
  push32((uint32_t)(EDX));
  /* 103825f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 103825f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103825f7 call edi */
  call_ind((uint32_t)(EDI), 0x103825f9u);
  /* 103825f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 103825fb call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x10382601u);
  /* 10382601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382603 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382608 call esi */
  call_ind((uint32_t)(ESI), 0x1038260au);
  /* 1038260a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038260d cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382610 jne 0x1038261f */
  if (!C.zf) goto L_1038261f;
  /* 10382612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382614 push 4 */
  push32((uint32_t)(0x4u));
  /* 10382616 call dword ptr [0x103880bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880bc))), 0x1038261cu);
  /* 1038261c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038261f:;
  /* 1038261f push 0 */
  push32((uint32_t)(0x0u));
  /* 10382621 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382626 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382628 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x1038262eu);
  /* 1038262e push 1 */
  push32((uint32_t)(0x1u));
  /* 10382630 call dword ptr [0x10388110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388110))), 0x10382636u);
  /* 10382636 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382639:;
  /* 10382639 mov edi, dword ptr [0x10388118] */
  EDI = (r32((uint32_t)(0x10388118)));
  /* 1038263f push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 10382644 call edi */
  call_ind((uint32_t)(EDI), 0x10382646u);
  /* 10382646 mov esi, dword ptr [0x1038811c] */
  ESI = (r32((uint32_t)(0x1038811c)));
  /* 1038264c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038264f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382651 jle 0x103826ad */
  if ((C.zf||C.sf!=C.of)) goto L_103826ad;
  /* 10382653 push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 10382658 call edi */
  call_ind((uint32_t)(EDI), 0x1038265au);
  /* 1038265a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038265d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038265f jle 0x103826ad */
  if ((C.zf||C.sf!=C.of)) goto L_103826ad;
  /* 10382661 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382663 call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x10382669u);
  /* 10382669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038266c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038266e je 0x103826ad */
  if (C.zf) goto L_103826ad;
  /* 10382670 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10382675 push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 1038267a push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 1038267f push 0x1038a080 */
  push32((uint32_t)(0x1038a080u));
  /* 10382684 call dword ptr [0x10388124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388124))), 0x1038268au);
  /* 1038268a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038268c push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 10382691 call ebp */
  call_ind((uint32_t)(EBP), 0x10382693u);
  /* 10382693 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382695 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10382697 push 0x1038a080 */
  push32((uint32_t)(0x1038a080u));
  /* 1038269c push 1 */
  push32((uint32_t)(0x1u));
  /* 1038269e call esi */
  call_ind((uint32_t)(ESI), 0x103826a0u);
  /* 103826a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 103826a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103826a4 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x103826aau);
  /* 103826aa add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103826ad:;
  /* 103826ad push 4 */
  push32((uint32_t)(0x4u));
  /* 103826af call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103826b5u);
  /* 103826b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103826b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103826ba je 0x10382734 */
  if (C.zf) goto L_10382734;
  /* 103826bc push 0x10389c40 */
  push32((uint32_t)(0x10389c40u));
  /* 103826c1 call edi */
  call_ind((uint32_t)(EDI), 0x103826c3u);
  /* 103826c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103826c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103826c8 jne 0x10382734 */
  if (!C.zf) goto L_10382734;
  /* 103826ca mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
  /* 103826d0 push eax */
  push32((uint32_t)(EAX));
  /* 103826d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103826d3 call edi */
  call_ind((uint32_t)(EDI), 0x103826d5u);
  /* 103826d5 push 0x10389694 */
  push32((uint32_t)(0x10389694u));
  /* 103826da call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103826e0u);
  /* 103826e0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103826e2 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103826e8u);
  /* 103826e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103826eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103826ed push 1 */
  push32((uint32_t)(0x1u));
  /* 103826ef je 0x10382707 */
  if (C.zf) goto L_10382707;
  /* 103826f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 103826f3 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x103826f9u);
  /* 103826f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103826fc push 0 */
  push32((uint32_t)(0x0u));
  /* 103826fe push 6 */
  push32((uint32_t)(0x6u));
  /* 10382700 call edi */
  call_ind((uint32_t)(EDI), 0x10382702u);
  /* 10382702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382705 jmp 0x1038273a */
  goto L_1038273a;
L_10382707:;
  /* 10382707 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10382709 call edi */
  call_ind((uint32_t)(EDI), 0x1038270bu);
  /* 1038270b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038270d push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10382712 call ebp */
  call_ind((uint32_t)(EBP), 0x10382714u);
  /* 10382714 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382716 call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x1038271cu);
  /* 1038271c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1038271e push 3 */
  push32((uint32_t)(0x3u));
  /* 10382720 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10382726u);
  /* 10382726 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038272b push 6 */
  push32((uint32_t)(0x6u));
  /* 1038272d call edi */
  call_ind((uint32_t)(EDI), 0x1038272fu);
  /* 1038272f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382732 jmp 0x1038273a */
  goto L_1038273a;
L_10382734:;
  /* 10382734 mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
L_1038273a:;
  /* 1038273a push 3 */
  push32((uint32_t)(0x3u));
  /* 1038273c call dword ptr [0x10388108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388108))), 0x10382742u);
  /* 10382742 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382745 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382747 je 0x10382778 */
  if (C.zf) goto L_10382778;
  /* 10382749 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038274b push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 10382750 call ebp */
  call_ind((uint32_t)(EBP), 0x10382752u);
  /* 10382752 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382754 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10382756 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 1038275b push 1 */
  push32((uint32_t)(0x1u));
  /* 1038275d call esi */
  call_ind((uint32_t)(ESI), 0x1038275fu);
  /* 1038275f push 0 */
  push32((uint32_t)(0x0u));
  /* 10382761 push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 10382766 call ebp */
  call_ind((uint32_t)(EBP), 0x10382768u);
  /* 10382768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038276a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1038276c push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 10382771 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382773 call esi */
  call_ind((uint32_t)(ESI), 0x10382775u);
  /* 10382775 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382778:;
  /* 10382778 push 6 */
  push32((uint32_t)(0x6u));
  /* 1038277a call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382780u);
  /* 10382780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382783 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382785 jne 0x10382886 */
  if (!C.zf) goto L_10382886;
  /* 1038278b push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 10382790 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10382796u);
  /* 10382796 push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 1038279b push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 103827a0 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103827a4 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x103827aau);
  /* 103827aa mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103827ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103827b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103827b3 jne 0x10382886 */
  if (!C.zf) goto L_10382886;
  /* 103827b9 push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 103827be call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103827c4u);
  /* 103827c4 push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 103827c9 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 103827ce mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103827d2 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x103827d8u);
  /* 103827d8 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103827dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103827df cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103827e1 jne 0x10382886 */
  if (!C.zf) goto L_10382886;
  /* 103827e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103827e9 push 6 */
  push32((uint32_t)(0x6u));
  /* 103827eb call edi */
  call_ind((uint32_t)(EDI), 0x103827edu);
  /* 103827ed push 0 */
  push32((uint32_t)(0x0u));
  /* 103827ef push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 103827f4 call ebp */
  call_ind((uint32_t)(EBP), 0x103827f6u);
  /* 103827f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103827f8 push 0x10389c48 */
  push32((uint32_t)(0x10389c48u));
  /* 103827fd call ebp */
  call_ind((uint32_t)(EBP), 0x103827ffu);
  /* 103827ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10382801 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10382803 push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 10382808 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038280a call esi */
  call_ind((uint32_t)(ESI), 0x1038280cu);
  /* 1038280c push 2 */
  push32((uint32_t)(0x2u));
  /* 1038280e push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10382810 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10382815 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382817 call esi */
  call_ind((uint32_t)(ESI), 0x10382819u);
  /* 10382819 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038281b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10382820 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 10382825 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382827 call esi */
  call_ind((uint32_t)(ESI), 0x10382829u);
  /* 10382829 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038282c push 2 */
  push32((uint32_t)(0x2u));
  /* 1038282e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10382830 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10382835 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382837 call esi */
  call_ind((uint32_t)(ESI), 0x10382839u);
  /* 10382839 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038283b push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10382840 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10382845 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382847 call esi */
  call_ind((uint32_t)(ESI), 0x10382849u);
  /* 10382849 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038284b push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10382850 push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10382855 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382857 call esi */
  call_ind((uint32_t)(ESI), 0x10382859u);
  /* 10382859 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038285b push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1038285d push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10382862 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382864 call esi */
  call_ind((uint32_t)(ESI), 0x10382866u);
  /* 10382866 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382869 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038286b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1038286d push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10382872 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382874 call esi */
  call_ind((uint32_t)(ESI), 0x10382876u);
  /* 10382876 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382878 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1038287a push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 1038287f push 1 */
  push32((uint32_t)(0x1u));
  /* 10382881 call esi */
  call_ind((uint32_t)(ESI), 0x10382883u);
  /* 10382883 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382886:;
  /* 10382886 push 5 */
  push32((uint32_t)(0x5u));
  /* 10382888 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038288eu);
  /* 1038288e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382891 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382893 je 0x103828c0 */
  if (C.zf) goto L_103828c0;
  /* 10382895 push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 1038289a push 0x10389f48 */
  push32((uint32_t)(0x10389f48u));
  /* 1038289f call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x103828a5u);
  /* 103828a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103828a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103828aa jle 0x103828c0 */
  if ((C.zf||C.sf!=C.of)) goto L_103828c0;
  /* 103828ac push 0 */
  push32((uint32_t)(0x0u));
  /* 103828ae push 5 */
  push32((uint32_t)(0x5u));
  /* 103828b0 call edi */
  call_ind((uint32_t)(EDI), 0x103828b2u);
  /* 103828b2 push 0x1038968c */
  push32((uint32_t)(0x1038968cu));
  /* 103828b7 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103828bdu);
  /* 103828bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103828c0:;
  /* 103828c0 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 103828c2 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103828c8u);
  /* 103828c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103828cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103828cd je 0x103828f4 */
  if (C.zf) goto L_103828f4;
  /* 103828cf push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 103828d4 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103828dau);
  /* 103828da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103828dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103828df jne 0x103828f4 */
  if (!C.zf) goto L_103828f4;
  /* 103828e1 push eax */
  push32((uint32_t)(EAX));
  /* 103828e2 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 103828e4 call edi */
  call_ind((uint32_t)(EDI), 0x103828e6u);
  /* 103828e6 push 0x10389684 */
  push32((uint32_t)(0x10389684u));
  /* 103828eb call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103828f1u);
  /* 103828f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103828f4:;
  /* 103828f4 push 7 */
  push32((uint32_t)(0x7u));
  /* 103828f6 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103828fcu);
  /* 103828fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103828ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382901 je 0x103829e4 */
  if (C.zf) goto L_103829e4;
  /* 10382907 push 5 */
  push32((uint32_t)(0x5u));
  /* 10382909 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038290fu);
  /* 1038290f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382912 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382914 jne 0x103829e4 */
  if (!C.zf) goto L_103829e4;
  /* 1038291a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038291c call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10382922u);
  /* 10382922 mov edi, eax */
  EDI = (EAX);
  /* 10382924 push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 10382929 add edi, 7 */
  { uint32_t _a=(EDI),_b=(0x7u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038292c call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10382932u);
  /* 10382932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382935 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382937 jge 0x103829de */
  if ((C.sf==C.of)) goto L_103829de;
  /* 1038293d mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
  /* 10382943 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382945 push 7 */
  push32((uint32_t)(0x7u));
  /* 10382947 call edi */
  call_ind((uint32_t)(EDI), 0x10382949u);
  /* 10382949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038294b push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 10382950 call ebp */
  call_ind((uint32_t)(EBP), 0x10382952u);
  /* 10382952 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382956 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 1038295b push 1 */
  push32((uint32_t)(0x1u));
  /* 1038295d call ebx */
  call_ind((uint32_t)(EBX), 0x1038295fu);
  /* 1038295f push 2 */
  push32((uint32_t)(0x2u));
  /* 10382961 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382963 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10382968 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038296a call ebx */
  call_ind((uint32_t)(EBX), 0x1038296cu);
  /* 1038296c push 2 */
  push32((uint32_t)(0x2u));
  /* 1038296e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10382970 push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10382975 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382977 call ebx */
  call_ind((uint32_t)(EBX), 0x10382979u);
  /* 10382979 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038297c push 2 */
  push32((uint32_t)(0x2u));
  /* 1038297e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10382980 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10382985 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382987 call ebx */
  call_ind((uint32_t)(EBX), 0x10382989u);
  /* 10382989 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038298b push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10382990 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10382995 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382997 call ebx */
  call_ind((uint32_t)(EBX), 0x10382999u);
  /* 10382999 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038299b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038299d push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 103829a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103829a4 call ebx */
  call_ind((uint32_t)(EBX), 0x103829a6u);
  /* 103829a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103829a8 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 103829ad push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 103829b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103829b4 call ebx */
  call_ind((uint32_t)(EBX), 0x103829b6u);
  /* 103829b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103829b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103829bb push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 103829c0 push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 103829c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103829c7 call ebx */
  call_ind((uint32_t)(EBX), 0x103829c9u);
  /* 103829c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103829cb push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 103829d0 push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 103829d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103829d7 call ebx */
  call_ind((uint32_t)(EBX), 0x103829d9u);
  /* 103829d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103829dc jmp 0x103829e4 */
  goto L_103829e4;
L_103829de:;
  /* 103829de mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
L_103829e4:;
  /* 103829e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 103829e6 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103829ecu);
  /* 103829ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103829ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103829f1 je 0x10382a77 */
  if (C.zf) goto L_10382a77;
  /* 103829f7 push 7 */
  push32((uint32_t)(0x7u));
  /* 103829f9 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103829ffu);
  /* 103829ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382a02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382a04 jne 0x10382a77 */
  if (!C.zf) goto L_10382a77;
  /* 10382a06 push 0x10389d60 */
  push32((uint32_t)(0x10389d60u));
  /* 10382a0b push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 10382a10 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10382a16u);
  /* 10382a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382a1b jle 0x10382a77 */
  if ((C.zf||C.sf!=C.of)) goto L_10382a77;
  /* 10382a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10382a1f push 8 */
  push32((uint32_t)(0x8u));
  /* 10382a21 call edi */
  call_ind((uint32_t)(EDI), 0x10382a23u);
  /* 10382a23 push 0x1038967c */
  push32((uint32_t)(0x1038967cu));
  /* 10382a28 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10382a2eu);
  /* 10382a2e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10382a30 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382a36u);
  /* 10382a36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382a39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382a3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10382a3d je 0x10382a4c */
  if (C.zf) goto L_10382a4c;
  /* 10382a3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10382a41 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10382a47u);
  /* 10382a47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382a4a jmp 0x10382a6e */
  goto L_10382a6e;
L_10382a4c:;
  /* 10382a4c push 0xe */
  push32((uint32_t)(0xeu));
  /* 10382a4e call edi */
  call_ind((uint32_t)(EDI), 0x10382a50u);
  /* 10382a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382a52 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10382a57 call ebp */
  call_ind((uint32_t)(EBP), 0x10382a59u);
  /* 10382a59 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382a5b call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x10382a61u);
  /* 10382a61 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10382a63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10382a65 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10382a6bu);
  /* 10382a6b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382a6e:;
  /* 10382a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10382a70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10382a72 call edi */
  call_ind((uint32_t)(EDI), 0x10382a74u);
  /* 10382a74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382a77:;
  /* 10382a77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10382a79 call dword ptr [0x10388108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388108))), 0x10382a7fu);
  /* 10382a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382a82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382a84 je 0x10382a9f */
  if (C.zf) goto L_10382a9f;
  /* 10382a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382a88 push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 10382a8d call ebp */
  call_ind((uint32_t)(EBP), 0x10382a8fu);
  /* 10382a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10382a91 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10382a93 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 10382a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382a9a call esi */
  call_ind((uint32_t)(ESI), 0x10382a9cu);
  /* 10382a9c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382a9f:;
  /* 10382a9f push 9 */
  push32((uint32_t)(0x9u));
  /* 10382aa1 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382aa7u);
  /* 10382aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382aaa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382aac jne 0x10382b76 */
  if (!C.zf) goto L_10382b76;
  /* 10382ab2 push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 10382ab7 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10382abdu);
  /* 10382abd push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 10382ac2 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 10382ac7 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10382acb call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10382ad1u);
  /* 10382ad1 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10382ad5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382ad8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382ada jne 0x10382b76 */
  if (!C.zf) goto L_10382b76;
  /* 10382ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10382ae4 call edi */
  call_ind((uint32_t)(EDI), 0x10382ae6u);
  /* 10382ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382ae8 push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 10382aed call ebp */
  call_ind((uint32_t)(EBP), 0x10382aefu);
  /* 10382aef push 0 */
  push32((uint32_t)(0x0u));
  /* 10382af1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10382af3 push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 10382af8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382afa call esi */
  call_ind((uint32_t)(ESI), 0x10382afcu);
  /* 10382afc push 2 */
  push32((uint32_t)(0x2u));
  /* 10382afe push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10382b00 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10382b05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b07 call esi */
  call_ind((uint32_t)(ESI), 0x10382b09u);
  /* 10382b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b0b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10382b10 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 10382b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b17 call esi */
  call_ind((uint32_t)(ESI), 0x10382b19u);
  /* 10382b19 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382b1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b1e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10382b20 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10382b25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b27 call esi */
  call_ind((uint32_t)(ESI), 0x10382b29u);
  /* 10382b29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b2b push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10382b30 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10382b35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b37 call esi */
  call_ind((uint32_t)(ESI), 0x10382b39u);
  /* 10382b39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b3b push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10382b40 push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10382b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b47 call esi */
  call_ind((uint32_t)(ESI), 0x10382b49u);
  /* 10382b49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b4b push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10382b4d push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10382b52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b54 call esi */
  call_ind((uint32_t)(ESI), 0x10382b56u);
  /* 10382b56 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382b59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b5b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10382b5d push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10382b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b64 call esi */
  call_ind((uint32_t)(ESI), 0x10382b66u);
  /* 10382b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382b68 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10382b6a push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 10382b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10382b71 call esi */
  call_ind((uint32_t)(ESI), 0x10382b73u);
  /* 10382b73 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382b76:;
  /* 10382b76 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10382b78 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382b7eu);
  /* 10382b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382b81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382b83 je 0x10382bcf */
  if (C.zf) goto L_10382bcf;
  /* 10382b85 call dword ptr [0x10388128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388128))), 0x10382b8bu);
  /* 10382b8b cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382b90 jle 0x10382bcf */
  if ((C.zf||C.sf!=C.of)) goto L_10382bcf;
  /* 10382b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382b94 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10382b96 call edi */
  call_ind((uint32_t)(EDI), 0x10382b98u);
  /* 10382b98 push 0x10389674 */
  push32((uint32_t)(0x10389674u));
  /* 10382b9d call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10382ba3u);
  /* 10382ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382ba5 call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10382babu);
  /* 10382bab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382bb0 jne 0x10382bcf */
  if (!C.zf) goto L_10382bcf;
  /* 10382bb2 push 0x1038966c */
  push32((uint32_t)(0x1038966cu));
  /* 10382bb7 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10382bbdu);
  /* 10382bbd push 3 */
  push32((uint32_t)(0x3u));
  /* 10382bbf push 3 */
  push32((uint32_t)(0x3u));
  /* 10382bc1 push 0x10389fe8 */
  push32((uint32_t)(0x10389fe8u));
  /* 10382bc6 call dword ptr [0x10388120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388120))), 0x10382bccu);
  /* 10382bcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382bcf:;
  /* 10382bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10382bd1 call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10382bd7u);
  /* 10382bd7 mov ecx, dword ptr [0x1038a090] */
  ECX = (r32((uint32_t)(0x1038a090)));
  /* 10382bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382be0 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10382be3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10382be5 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 10382be8 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10382beb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10382bee lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10382bf1 lea edi, [edx*8 + 0x1f40] */
  EDI = ((uint32_t)(EDX*8 + 0x1f40));
  /* 10382bf8 call dword ptr [0x10388128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388128))), 0x10382bfeu);
  /* 10382bfe cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382c00 jle 0x10382d81 */
  if ((C.zf||C.sf!=C.of)) goto L_10382d81;
  /* 10382c06 mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 10382c0b mov ecx, dword ptr [eax*4 + 0x10389f58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10389f58)));
  /* 10382c12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10382c14 jne 0x10382d81 */
  if (!C.zf) goto L_10382d81;
  /* 10382c1a cmp dword ptr [0x1038a090], 6 */
  { uint32_t _a=(r32((uint32_t)(0x1038a090))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382c21 jge 0x10382d81 */
  if ((C.sf==C.of)) goto L_10382d81;
  /* 10382c27 push 8 */
  push32((uint32_t)(0x8u));
  /* 10382c29 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382c2fu);
  /* 10382c2f mov edi, dword ptr [0x103880b0] */
  EDI = (r32((uint32_t)(0x103880b0)));
  /* 10382c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382c38 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10382c3c je 0x10382ca5 */
  if (C.zf) goto L_10382ca5;
  /* 10382c3e call edi */
  call_ind((uint32_t)(EDI), 0x10382c40u);
  /* 10382c40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382c45 jle 0x10382c7e */
  if ((C.zf||C.sf!=C.of)) goto L_10382c7e;
  /* 10382c47 mov ecx, dword ptr [0x1038a090] */
  ECX = (r32((uint32_t)(0x1038a090)));
  /* 10382c4d lea edx, [ecx*8 + 0x10389ce8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ce8));
  /* 10382c54 push edx */
  push32((uint32_t)(EDX));
  /* 10382c55 push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 10382c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10382c5c call edi */
  call_ind((uint32_t)(EDI), 0x10382c5eu);
  /* 10382c5e mov edi, dword ptr [0x1038a090] */
  EDI = (r32((uint32_t)(0x1038a090)));
  /* 10382c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382c67 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10382c69 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10382c6c lea ecx, [eax + eax + 0x15] */
  ECX = ((uint32_t)(EAX + EAX*1 + 0x15));
  /* 10382c70 push ecx */
  push32((uint32_t)(ECX));
  /* 10382c71 call 0x10381ba0 */
  push32(0x10382c76u); f_10381ba0();
  /* 10382c76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382c79 jmp 0x10382d61 */
  goto L_10382d61;
L_10382c7e:;
  /* 10382c7e mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382c83 lea edx, [eax*8 + 0x10389ce8] */
  EDX = ((uint32_t)(EAX*8 + 0x10389ce8));
  /* 10382c8a lea eax, [eax*4 + 0xa] */
  EAX = ((uint32_t)(EAX*4 + 0xa));
  /* 10382c91 push edx */
  push32((uint32_t)(EDX));
  /* 10382c92 push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 10382c97 push eax */
  push32((uint32_t)(EAX));
  /* 10382c98 call 0x10381ba0 */
  push32(0x10382c9du); f_10381ba0();
  /* 10382c9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382ca0 jmp 0x10382d61 */
  goto L_10382d61;
L_10382ca5:;
  /* 10382ca5 call edi */
  call_ind((uint32_t)(EDI), 0x10382ca7u);
  /* 10382ca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382cac jle 0x10382d15 */
  if ((C.zf||C.sf!=C.of)) goto L_10382d15;
  /* 10382cae mov ecx, dword ptr [0x1038a090] */
  ECX = (r32((uint32_t)(0x1038a090)));
  /* 10382cb4 lea edx, [ecx*8 + 0x10389ce8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ce8));
  /* 10382cbb push edx */
  push32((uint32_t)(EDX));
  /* 10382cbc push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 10382cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382cc3 call edi */
  call_ind((uint32_t)(EDI), 0x10382cc5u);
  /* 10382cc5 mov ecx, dword ptr [0x1038a090] */
  ECX = (r32((uint32_t)(0x1038a090)));
  /* 10382ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382cce lea eax, [eax + ecx + 3] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x3));
  /* 10382cd2 lea edx, [eax + eax*2] */
  EDX = ((uint32_t)(EAX + EAX*2));
  /* 10382cd5 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10382cd8 push edx */
  push32((uint32_t)(EDX));
  /* 10382cd9 call 0x10381ba0 */
  push32(0x10382cdeu); f_10381ba0();
  /* 10382cde mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382ce3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382ce6 lea ecx, [eax*8 + 0x10389ce8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ce8));
  /* 10382ced push ecx */
  push32((uint32_t)(ECX));
  /* 10382cee push 0x1038a0c0 */
  push32((uint32_t)(0x1038a0c0u));
  /* 10382cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382cf5 call edi */
  call_ind((uint32_t)(EDI), 0x10382cf7u);
  /* 10382cf7 mov edx, dword ptr [0x1038a090] */
  EDX = (r32((uint32_t)(0x1038a090)));
  /* 10382cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382d00 lea eax, [eax + edx + 3] */
  EAX = ((uint32_t)(EAX + EDX*1 + 0x3));
  /* 10382d04 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10382d07 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10382d0a push eax */
  push32((uint32_t)(EAX));
  /* 10382d0b call 0x10381ba0 */
  push32(0x10382d10u); f_10381ba0();
  /* 10382d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382d13 jmp 0x10382d61 */
  goto L_10382d61;
L_10382d15:;
  /* 10382d15 mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382d1a lea edx, [eax*8] */
  EDX = ((uint32_t)(EAX*8));
  /* 10382d21 lea ecx, [eax*8 + 0x10389ce8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ce8));
  /* 10382d28 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10382d2a push ecx */
  push32((uint32_t)(ECX));
  /* 10382d2b add edx, 0xa */
  { uint32_t _a=(EDX),_b=(0xau),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10382d2e push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 10382d33 push edx */
  push32((uint32_t)(EDX));
  /* 10382d34 call 0x10381ba0 */
  push32(0x10382d39u); f_10381ba0();
  /* 10382d39 mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382d3e lea edx, [eax*8] */
  EDX = ((uint32_t)(EAX*8));
  /* 10382d45 lea ecx, [eax*8 + 0x10389ce8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ce8));
  /* 10382d4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10382d4e push ecx */
  push32((uint32_t)(ECX));
  /* 10382d4f push 0x1038a0c0 */
  push32((uint32_t)(0x1038a0c0u));
  /* 10382d54 lea eax, [edx + edx + 0x14] */
  EAX = ((uint32_t)(EDX + EDX*1 + 0x14));
  /* 10382d58 push eax */
  push32((uint32_t)(EAX));
  /* 10382d59 call 0x10381ba0 */
  push32(0x10382d5eu); f_10381ba0();
  /* 10382d5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382d61:;
  /* 10382d61 mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 10382d66 mov dword ptr [0x1038a07c], eax */
  w32((uint32_t)(0x1038a07c), (EAX));
  /* 10382d6b mov dword ptr [eax*4 + 0x10389f58], 1 */
  w32((uint32_t)(EAX*4 + 0x10389f58), (0x1u));
  /* 10382d76 mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382d7b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10382d7c mov dword ptr [0x1038a090], eax */
  w32((uint32_t)(0x1038a090), (EAX));
L_10382d81:;
  /* 10382d81 mov ecx, dword ptr [0x1038a07c] */
  ECX = (r32((uint32_t)(0x1038a07c)));
  /* 10382d87 cmp dword ptr [ecx*4 + 0x10389f58], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10389f58))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382d8f jne 0x10382dfb */
  if (!C.zf) goto L_10382dfb;
  /* 10382d91 push 7 */
  push32((uint32_t)(0x7u));
  /* 10382d93 call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x10382d99u);
  /* 10382d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382d9c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382d9e je 0x10382dfb */
  if (C.zf) goto L_10382dfb;
  /* 10382da0 mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 10382da6 mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
  /* 10382dac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10382dad push 0 */
  push32((uint32_t)(0x0u));
  /* 10382daf mov dword ptr [0x10389d28], edx */
  w32((uint32_t)(0x10389d28), (EDX));
  /* 10382db5 mov dl, byte ptr [0x1038a090] */
  DL = (r8((uint32_t)(0x1038a090)));
  /* 10382dbb add dl, 0x27 */
  { uint32_t _a=(DL),_b=(0x27u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382dbe push edx */
  push32((uint32_t)(EDX));
  /* 10382dbf call edi */
  call_ind((uint32_t)(EDI), 0x10382dc1u);
  /* 10382dc1 mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382dc8 mov dword ptr [0x1038a07c], 0x13 */
  w32((uint32_t)(0x1038a07c), (0x13u));
  /* 10382dd2 lea ecx, [eax*8 + 0x10389ce0] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ce0));
  /* 10382dd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10382dda call ebp */
  call_ind((uint32_t)(EBP), 0x10382ddcu);
  /* 10382ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 10382dde push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10382de0 push 0x10389fe0 */
  push32((uint32_t)(0x10389fe0u));
  /* 10382de5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382de7 call esi */
  call_ind((uint32_t)(ESI), 0x10382de9u);
  /* 10382de9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10382dee push 8 */
  push32((uint32_t)(0x8u));
  /* 10382df0 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10382df6u);
  /* 10382df6 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382df9 jmp 0x10382e01 */
  goto L_10382e01;
L_10382dfb:;
  /* 10382dfb mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
L_10382e01:;
  /* 10382e01 mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382e06 add al, 0x27 */
  { uint32_t _a=(AL),_b=(0x27u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382e08 push eax */
  push32((uint32_t)(EAX));
  /* 10382e09 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382e0fu);
  /* 10382e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382e12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382e14 jne 0x10382e95 */
  if (!C.zf) goto L_10382e95;
  /* 10382e16 mov edx, dword ptr [0x1038a090] */
  EDX = (r32((uint32_t)(0x1038a090)));
  /* 10382e1c lea eax, [edx*8 + 0x10389ce0] */
  EAX = ((uint32_t)(EDX*8 + 0x10389ce0));
  /* 10382e23 push eax */
  push32((uint32_t)(EAX));
  /* 10382e24 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10382e2au);
  /* 10382e2a mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 10382e2e mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382e33 lea ecx, [eax*8 + 0x10389ce0] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ce0));
  /* 10382e3a push ecx */
  push32((uint32_t)(ECX));
  /* 10382e3b push 0x10389fe0 */
  push32((uint32_t)(0x10389fe0u));
  /* 10382e40 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10382e46u);
  /* 10382e46 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10382e4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382e4d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382e4f jne 0x10382e95 */
  if (!C.zf) goto L_10382e95;
  /* 10382e51 push 8 */
  push32((uint32_t)(0x8u));
  /* 10382e53 call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x10382e59u);
  /* 10382e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382e5c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382e5e jne 0x10382e95 */
  if (!C.zf) goto L_10382e95;
  /* 10382e60 mov edx, dword ptr [0x1038a090] */
  EDX = (r32((uint32_t)(0x1038a090)));
  /* 10382e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382e68 lea eax, [edx*8 + 0x10389ce0] */
  EAX = ((uint32_t)(EDX*8 + 0x10389ce0));
  /* 10382e6f push eax */
  push32((uint32_t)(EAX));
  /* 10382e70 call ebp */
  call_ind((uint32_t)(EBP), 0x10382e72u);
  /* 10382e72 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382e74 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10382e79 push 0x10389f28 */
  push32((uint32_t)(0x10389f28u));
  /* 10382e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10382e80 call esi */
  call_ind((uint32_t)(ESI), 0x10382e82u);
  /* 10382e82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382e84 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10382e89 push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 10382e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10382e90 call esi */
  call_ind((uint32_t)(ESI), 0x10382e92u);
  /* 10382e92 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382e95:;
  /* 10382e95 mov cl, byte ptr [0x1038a090] */
  CL = (r8((uint32_t)(0x1038a090)));
  /* 10382e9b add cl, 0x31 */
  { uint32_t _a=(CL),_b=(0x31u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382e9e push ecx */
  push32((uint32_t)(ECX));
  /* 10382e9f call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382ea5u);
  /* 10382ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382ea8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382eaa je 0x10382f0d */
  if (C.zf) goto L_10382f0d;
  /* 10382eac mov dl, byte ptr [0x1038a090] */
  DL = (r8((uint32_t)(0x1038a090)));
  /* 10382eb2 add dl, 0x27 */
  { uint32_t _a=(DL),_b=(0x27u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382eb5 push edx */
  push32((uint32_t)(EDX));
  /* 10382eb6 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382ebcu);
  /* 10382ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382ebf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382ec1 jne 0x10382f0d */
  if (!C.zf) goto L_10382f0d;
  /* 10382ec3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10382ec5 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382ecbu);
  /* 10382ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382ece test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382ed0 je 0x10382f0d */
  if (C.zf) goto L_10382f0d;
  /* 10382ed2 mov eax, dword ptr [0x1038a090] */
  EAX = (r32((uint32_t)(0x1038a090)));
  /* 10382ed7 lea ecx, [eax*8 + 0x10389ce0] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ce0));
  /* 10382ede push ecx */
  push32((uint32_t)(ECX));
  /* 10382edf push 0x10389f48 */
  push32((uint32_t)(0x10389f48u));
  /* 10382ee4 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10382eeau);
  /* 10382eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10382eef jle 0x10382f0d */
  if ((C.zf||C.sf!=C.of)) goto L_10382f0d;
  /* 10382ef1 mov dl, byte ptr [0x1038a090] */
  DL = (r8((uint32_t)(0x1038a090)));
  /* 10382ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382ef9 add dl, 0x31 */
  { uint32_t _a=(DL),_b=(0x31u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382efc push edx */
  push32((uint32_t)(EDX));
  /* 10382efd call edi */
  call_ind((uint32_t)(EDI), 0x10382effu);
  /* 10382eff push 0x1038968c */
  push32((uint32_t)(0x1038968cu));
  /* 10382f04 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10382f0au);
  /* 10382f0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10382f0d:;
  /* 10382f0d mov al, byte ptr [0x1038a090] */
  AL = (r8((uint32_t)(0x1038a090)));
  /* 10382f12 add al, 0x3b */
  { uint32_t _a=(AL),_b=(0x3bu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382f14 push eax */
  push32((uint32_t)(EAX));
  /* 10382f15 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382f1bu);
  /* 10382f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382f1e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382f20 je 0x10383009 */
  if (C.zf) goto L_10383009;
  /* 10382f26 mov cl, byte ptr [0x1038a090] */
  CL = (r8((uint32_t)(0x1038a090)));
  /* 10382f2c add cl, 0x31 */
  { uint32_t _a=(CL),_b=(0x31u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382f2f push ecx */
  push32((uint32_t)(ECX));
  /* 10382f30 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10382f36u);
  /* 10382f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382f39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10382f3b jne 0x10383009 */
  if (!C.zf) goto L_10383009;
  /* 10382f41 mov edx, dword ptr [0x1038a090] */
  EDX = (r32((uint32_t)(0x1038a090)));
  /* 10382f47 lea eax, [edx*8 + 0x10389ce0] */
  EAX = ((uint32_t)(EDX*8 + 0x10389ce0));
  /* 10382f4e push eax */
  push32((uint32_t)(EAX));
  /* 10382f4f call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10382f55u);
  /* 10382f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382f58 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10382f5b jge 0x10383009 */
  if ((C.sf==C.of)) goto L_10383009;
  /* 10382f61 mov al, byte ptr [0x1038a090] */
  AL = (r8((uint32_t)(0x1038a090)));
  /* 10382f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382f68 add al, 0x3b */
  { uint32_t _a=(AL),_b=(0x3bu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10382f6a push eax */
  push32((uint32_t)(EAX));
  /* 10382f6b call edi */
  call_ind((uint32_t)(EDI), 0x10382f6du);
  /* 10382f6d mov ecx, dword ptr [0x1038a090] */
  ECX = (r32((uint32_t)(0x1038a090)));
  /* 10382f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382f75 lea edx, [ecx*8 + 0x10389ce0] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ce0));
  /* 10382f7c push edx */
  push32((uint32_t)(EDX));
  /* 10382f7d call ebp */
  call_ind((uint32_t)(EBP), 0x10382f7fu);
  /* 10382f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10382f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382f83 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10382f88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382f8a call ebx */
  call_ind((uint32_t)(EBX), 0x10382f8cu);
  /* 10382f8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10382f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10382f90 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10382f95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382f97 call ebx */
  call_ind((uint32_t)(EBX), 0x10382f99u);
  /* 10382f99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382f9b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10382f9d push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10382fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382fa4 call ebx */
  call_ind((uint32_t)(EBX), 0x10382fa6u);
  /* 10382fa6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382fab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10382fad push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10382fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382fb4 call ebx */
  call_ind((uint32_t)(EBX), 0x10382fb6u);
  /* 10382fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382fb8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10382fbd push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10382fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382fc4 call ebx */
  call_ind((uint32_t)(EBX), 0x10382fc6u);
  /* 10382fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10382fca push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 10382fcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10382fd1 call ebx */
  call_ind((uint32_t)(EBX), 0x10382fd3u);
  /* 10382fd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382fd5 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 10382fda push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10382fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 10382fe1 call ebx */
  call_ind((uint32_t)(EBX), 0x10382fe3u);
  /* 10382fe3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10382fe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382fe8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10382fed push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 10382ff2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10382ff4 call ebx */
  call_ind((uint32_t)(EBX), 0x10382ff6u);
  /* 10382ff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10382ff8 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10382ffd push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 10383002 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383004 call ebx */
  call_ind((uint32_t)(EBX), 0x10383006u);
  /* 10383006 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383009:;
  /* 10383009 push 8 */
  push32((uint32_t)(0x8u));
  /* 1038300b call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383011u);
  /* 10383011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383014 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383016 je 0x103830ab */
  if (C.zf) goto L_103830ab;
  /* 1038301c mov al, byte ptr [0x1038a090] */
  AL = (r8((uint32_t)(0x1038a090)));
  /* 10383021 add al, 0x3b */
  { uint32_t _a=(AL),_b=(0x3bu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10383023 push eax */
  push32((uint32_t)(EAX));
  /* 10383024 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038302au);
  /* 1038302a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038302d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038302f jne 0x103830ab */
  if (!C.zf) goto L_103830ab;
  /* 10383031 mov ecx, dword ptr [0x1038a090] */
  ECX = (r32((uint32_t)(0x1038a090)));
  /* 10383037 lea edx, [ecx*8 + 0x10389ce0] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ce0));
  /* 1038303e push edx */
  push32((uint32_t)(EDX));
  /* 1038303f push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 10383044 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x1038304au);
  /* 1038304a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038304d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038304f jle 0x103830ab */
  if ((C.zf||C.sf!=C.of)) goto L_103830ab;
  /* 10383051 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383053 push 8 */
  push32((uint32_t)(0x8u));
  /* 10383055 call edi */
  call_ind((uint32_t)(EDI), 0x10383057u);
  /* 10383057 push 0x1038967c */
  push32((uint32_t)(0x1038967cu));
  /* 1038305c call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10383062u);
  /* 10383062 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383064 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038306au);
  /* 1038306a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038306d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038306f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383071 je 0x10383080 */
  if (C.zf) goto L_10383080;
  /* 10383073 push 4 */
  push32((uint32_t)(0x4u));
  /* 10383075 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x1038307bu);
  /* 1038307b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038307e jmp 0x103830a2 */
  goto L_103830a2;
L_10383080:;
  /* 10383080 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383082 call edi */
  call_ind((uint32_t)(EDI), 0x10383084u);
  /* 10383084 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383086 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 1038308b call ebp */
  call_ind((uint32_t)(EBP), 0x1038308du);
  /* 1038308d push 1 */
  push32((uint32_t)(0x1u));
  /* 1038308f call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x10383095u);
  /* 10383095 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10383097 push 4 */
  push32((uint32_t)(0x4u));
  /* 10383099 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x1038309fu);
  /* 1038309f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103830a2:;
  /* 103830a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103830a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103830a6 call edi */
  call_ind((uint32_t)(EDI), 0x103830a8u);
  /* 103830a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103830ab:;
  /* 103830ab push 4 */
  push32((uint32_t)(0x4u));
  /* 103830ad call dword ptr [0x10388108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388108))), 0x103830b3u);
  /* 103830b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103830b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103830b8 je 0x103830d3 */
  if (C.zf) goto L_103830d3;
  /* 103830ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103830bc push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 103830c1 call ebp */
  call_ind((uint32_t)(EBP), 0x103830c3u);
  /* 103830c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103830c5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103830c7 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 103830cc push 1 */
  push32((uint32_t)(0x1u));
  /* 103830ce call esi */
  call_ind((uint32_t)(ESI), 0x103830d0u);
  /* 103830d0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103830d3:;
  /* 103830d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 103830d5 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103830dbu);
  /* 103830db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103830de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103830e0 jne 0x103831aa */
  if (!C.zf) goto L_103831aa;
  /* 103830e6 push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 103830eb call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103830f1u);
  /* 103830f1 push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 103830f6 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 103830fb mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103830ff call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10383105u);
  /* 10383105 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10383109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038310c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038310e jne 0x103831aa */
  if (!C.zf) goto L_103831aa;
  /* 10383114 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383116 push 9 */
  push32((uint32_t)(0x9u));
  /* 10383118 call edi */
  call_ind((uint32_t)(EDI), 0x1038311au);
  /* 1038311a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038311c push 0x10389d70 */
  push32((uint32_t)(0x10389d70u));
  /* 10383121 call ebp */
  call_ind((uint32_t)(EBP), 0x10383123u);
  /* 10383123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383125 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10383127 push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 1038312c push 1 */
  push32((uint32_t)(0x1u));
  /* 1038312e call esi */
  call_ind((uint32_t)(ESI), 0x10383130u);
  /* 10383130 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383132 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10383134 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10383139 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038313b call esi */
  call_ind((uint32_t)(ESI), 0x1038313du);
  /* 1038313d push 2 */
  push32((uint32_t)(0x2u));
  /* 1038313f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10383144 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 10383149 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038314b call esi */
  call_ind((uint32_t)(ESI), 0x1038314du);
  /* 1038314d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383150 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383152 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10383154 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10383159 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038315b call esi */
  call_ind((uint32_t)(ESI), 0x1038315du);
  /* 1038315d push 2 */
  push32((uint32_t)(0x2u));
  /* 1038315f push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10383164 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10383169 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038316b call esi */
  call_ind((uint32_t)(ESI), 0x1038316du);
  /* 1038316d push 2 */
  push32((uint32_t)(0x2u));
  /* 1038316f push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10383174 push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10383179 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038317b call esi */
  call_ind((uint32_t)(ESI), 0x1038317du);
  /* 1038317d push 2 */
  push32((uint32_t)(0x2u));
  /* 1038317f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10383181 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10383186 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383188 call esi */
  call_ind((uint32_t)(ESI), 0x1038318au);
  /* 1038318a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038318d push 2 */
  push32((uint32_t)(0x2u));
  /* 1038318f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10383191 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10383196 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383198 call esi */
  call_ind((uint32_t)(ESI), 0x1038319au);
  /* 1038319a push 2 */
  push32((uint32_t)(0x2u));
  /* 1038319c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1038319e push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 103831a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103831a5 call esi */
  call_ind((uint32_t)(ESI), 0x103831a7u);
  /* 103831a7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103831aa:;
  /* 103831aa call dword ptr [0x10388128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388128))), 0x103831b0u);
  /* 103831b0 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 103831b6 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 103831b9 lea edx, [ecx + edx*2] */
  EDX = ((uint32_t)(ECX + EDX*2));
  /* 103831bc lea edx, [edx + edx*4] */
  EDX = ((uint32_t)(EDX + EDX*4));
  /* 103831bf lea edx, [edx + edx*4] */
  EDX = ((uint32_t)(EDX + EDX*4));
  /* 103831c2 lea edx, [edx + edx*4] */
  EDX = ((uint32_t)(EDX + EDX*4));
  /* 103831c5 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103831c8 add edx, 0x2710 */
  { uint32_t _a=(EDX),_b=(0x2710u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103831ce cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103831d0 jle 0x10383226 */
  if ((C.zf||C.sf!=C.of)) goto L_10383226;
  /* 103831d2 mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 103831d7 mov edx, dword ptr [eax*4 + 0x10389f58] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10389f58)));
  /* 103831de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103831e0 jne 0x10383226 */
  if (!C.zf) goto L_10383226;
  /* 103831e2 cmp ecx, 6 */
  { uint32_t _a=(ECX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103831e5 jge 0x10383226 */
  if ((C.sf==C.of)) goto L_10383226;
  /* 103831e7 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 103831ea lea edx, [ecx*8 + 0x10389c80] */
  EDX = ((uint32_t)(ECX*8 + 0x10389c80));
  /* 103831f1 push edx */
  push32((uint32_t)(EDX));
  /* 103831f2 push 0x10389c30 */
  push32((uint32_t)(0x10389c30u));
  /* 103831f7 lea ecx, [eax + eax + 0x15] */
  ECX = ((uint32_t)(EAX + EAX*1 + 0x15));
  /* 103831fb push ecx */
  push32((uint32_t)(ECX));
  /* 103831fc call 0x10381ba0 */
  push32(0x10383201u); f_10381ba0();
  /* 10383201 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 10383207 mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 1038320c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038320f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10383210 mov dword ptr [eax*4 + 0x10389f58], 1 */
  w32((uint32_t)(EAX*4 + 0x10389f58), (0x1u));
  /* 1038321b mov dword ptr [0x10389c78], eax */
  w32((uint32_t)(0x10389c78), (EAX));
  /* 10383220 mov dword ptr [0x1038a038], ecx */
  w32((uint32_t)(0x1038a038), (ECX));
L_10383226:;
  /* 10383226 mov edx, dword ptr [0x10389c78] */
  EDX = (r32((uint32_t)(0x10389c78)));
  /* 1038322c cmp dword ptr [edx*4 + 0x10389f58], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX*4 + 0x10389f58))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10383234 jne 0x10383332 */
  if (!C.zf) goto L_10383332;
  /* 1038323a push 7 */
  push32((uint32_t)(0x7u));
  /* 1038323c call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x10383242u);
  /* 10383242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383245 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383247 je 0x1038332c */
  if (C.zf) goto L_1038332c;
  /* 1038324d mov al, byte ptr [0x1038a038] */
  AL = (r8((uint32_t)(0x1038a038)));
  /* 10383252 mov ecx, dword ptr [0x10389d28] */
  ECX = (r32((uint32_t)(0x10389d28)));
  /* 10383258 add al, 0x4f */
  { uint32_t _a=(AL),_b=(0x4fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1038325a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1038325b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038325d push eax */
  push32((uint32_t)(EAX));
  /* 1038325e mov dword ptr [0x10389d28], ecx */
  w32((uint32_t)(0x10389d28), (ECX));
  /* 10383264 call edi */
  call_ind((uint32_t)(EDI), 0x10383266u);
  /* 10383266 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 1038326c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038326e mov dword ptr [0x10389c78], 0x13 */
  w32((uint32_t)(0x10389c78), (0x13u));
  /* 10383278 lea edx, [ecx*8 + 0x10389c78] */
  EDX = ((uint32_t)(ECX*8 + 0x10389c78));
  /* 1038327f push edx */
  push32((uint32_t)(EDX));
  /* 10383280 call ebp */
  call_ind((uint32_t)(EBP), 0x10383282u);
  /* 10383282 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383284 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10383286 push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 1038328b push 1 */
  push32((uint32_t)(0x1u));
  /* 1038328d call esi */
  call_ind((uint32_t)(ESI), 0x1038328fu);
  /* 1038328f push 2 */
  push32((uint32_t)(0x2u));
  /* 10383291 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10383293 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 10383298 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038329a call esi */
  call_ind((uint32_t)(ESI), 0x1038329cu);
  /* 1038329c push 2 */
  push32((uint32_t)(0x2u));
  /* 1038329e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103832a3 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 103832a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103832aa call esi */
  call_ind((uint32_t)(ESI), 0x103832acu);
  /* 103832ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103832af push 2 */
  push32((uint32_t)(0x2u));
  /* 103832b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103832b3 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 103832b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103832ba call esi */
  call_ind((uint32_t)(ESI), 0x103832bcu);
  /* 103832bc push 2 */
  push32((uint32_t)(0x2u));
  /* 103832be push 0x96 */
  push32((uint32_t)(0x96u));
  /* 103832c3 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 103832c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103832ca call esi */
  call_ind((uint32_t)(ESI), 0x103832ccu);
  /* 103832cc push 2 */
  push32((uint32_t)(0x2u));
  /* 103832ce push 0x96 */
  push32((uint32_t)(0x96u));
  /* 103832d3 push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 103832d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103832da call esi */
  call_ind((uint32_t)(ESI), 0x103832dcu);
  /* 103832dc push 2 */
  push32((uint32_t)(0x2u));
  /* 103832de push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103832e0 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 103832e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103832e7 call esi */
  call_ind((uint32_t)(ESI), 0x103832e9u);
  /* 103832e9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103832ec push 2 */
  push32((uint32_t)(0x2u));
  /* 103832ee push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103832f3 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 103832f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103832fa call esi */
  call_ind((uint32_t)(ESI), 0x103832fcu);
  /* 103832fc push 2 */
  push32((uint32_t)(0x2u));
  /* 103832fe push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10383300 push 0x10389e10 */
  push32((uint32_t)(0x10389e10u));
  /* 10383305 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383307 call esi */
  call_ind((uint32_t)(ESI), 0x10383309u);
  /* 10383309 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038330b push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10383310 push 0x10389e08 */
  push32((uint32_t)(0x10389e08u));
  /* 10383315 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383317 call esi */
  call_ind((uint32_t)(ESI), 0x10383319u);
  /* 10383319 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038331b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10383320 push 0x10389e00 */
  push32((uint32_t)(0x10389e00u));
  /* 10383325 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383327 call esi */
  call_ind((uint32_t)(ESI), 0x10383329u);
  /* 10383329 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038332c:;
  /* 1038332c mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
L_10383332:;
  /* 10383332 add cl, 0x45 */
  { uint32_t _a=(CL),_b=(0x45u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10383335 push ecx */
  push32((uint32_t)(ECX));
  /* 10383336 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038333cu);
  /* 1038333c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038333f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383341 je 0x103834b0 */
  if (C.zf) goto L_103834b0;
  /* 10383347 mov al, byte ptr [0x1038a038] */
  AL = (r8((uint32_t)(0x1038a038)));
  /* 1038334c add al, 0x4f */
  { uint32_t _a=(AL),_b=(0x4fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1038334e push eax */
  push32((uint32_t)(EAX));
  /* 1038334f call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383355u);
  /* 10383355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383358 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038335a jne 0x103834b0 */
  if (!C.zf) goto L_103834b0;
  /* 10383360 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 10383366 lea edi, [ecx*8 + 0x10389c78] */
  EDI = ((uint32_t)(ECX*8 + 0x10389c78));
  /* 1038336d push edi */
  push32((uint32_t)(EDI));
  /* 1038336e push 0x10389e00 */
  push32((uint32_t)(0x10389e00u));
  /* 10383373 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10383379u);
  /* 10383379 mov edx, eax */
  EDX = (EAX);
  /* 1038337b push edi */
  push32((uint32_t)(EDI));
  /* 1038337c mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 10383380 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383386u);
  /* 10383386 mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 1038338a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038338d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038338f jne 0x103834aa */
  if (!C.zf) goto L_103834aa;
  /* 10383395 mov al, byte ptr [0x1038a038] */
  AL = (r8((uint32_t)(0x1038a038)));
  /* 1038339a mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
  /* 103833a0 add al, 0x45 */
  { uint32_t _a=(AL),_b=(0x45u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103833a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103833a4 push eax */
  push32((uint32_t)(EAX));
  /* 103833a5 call edi */
  call_ind((uint32_t)(EDI), 0x103833a7u);
  /* 103833a7 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 103833ad push 0 */
  push32((uint32_t)(0x0u));
  /* 103833af push 0x10389fb0 */
  push32((uint32_t)(0x10389fb0u));
  /* 103833b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103833b6 push 0x10389b58 */
  push32((uint32_t)(0x10389b58u));
  /* 103833bb lea edx, [ecx*8 + 0x10389ca8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ca8));
  /* 103833c2 push 0x1038a098 */
  push32((uint32_t)(0x1038a098u));
  /* 103833c7 push edx */
  push32((uint32_t)(EDX));
  /* 103833c8 call dword ptr [0x10388130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388130))), 0x103833ceu);
  /* 103833ce mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 103833d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103833d5 lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 103833dc push ecx */
  push32((uint32_t)(ECX));
  /* 103833dd call ebp */
  call_ind((uint32_t)(EBP), 0x103833dfu);
  /* 103833df push 0 */
  push32((uint32_t)(0x0u));
  /* 103833e1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103833e3 push 0x10389e08 */
  push32((uint32_t)(0x10389e08u));
  /* 103833e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103833ea call ebx */
  call_ind((uint32_t)(EBX), 0x103833ecu);
  /* 103833ec push 2 */
  push32((uint32_t)(0x2u));
  /* 103833ee push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 103833f3 push 0x10389e10 */
  push32((uint32_t)(0x10389e10u));
  /* 103833f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103833fa call ebx */
  call_ind((uint32_t)(EBX), 0x103833fcu);
  /* 103833fc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103833ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10383401 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383403 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10383408 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038340a call ebx */
  call_ind((uint32_t)(EBX), 0x1038340cu);
  /* 1038340c push 2 */
  push32((uint32_t)(0x2u));
  /* 1038340e push 0 */
  push32((uint32_t)(0x0u));
  /* 10383410 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10383415 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383417 call ebx */
  call_ind((uint32_t)(EBX), 0x10383419u);
  /* 10383419 push 2 */
  push32((uint32_t)(0x2u));
  /* 1038341b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1038341d push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10383422 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383424 call ebx */
  call_ind((uint32_t)(EBX), 0x10383426u);
  /* 10383426 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383428 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1038342a push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 1038342f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383431 call ebx */
  call_ind((uint32_t)(EBX), 0x10383433u);
  /* 10383433 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383436 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383438 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1038343d push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10383442 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383444 call ebx */
  call_ind((uint32_t)(EBX), 0x10383446u);
  /* 10383446 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038344a push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 1038344f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383451 call ebx */
  call_ind((uint32_t)(EBX), 0x10383453u);
  /* 10383453 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383455 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 1038345a push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 1038345f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383461 call ebx */
  call_ind((uint32_t)(EBX), 0x10383463u);
  /* 10383463 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383465 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1038346a push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 1038346f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383471 call ebx */
  call_ind((uint32_t)(EBX), 0x10383473u);
  /* 10383473 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383476 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383478 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1038347d push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 10383482 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383484 call ebx */
  call_ind((uint32_t)(EBX), 0x10383486u);
  /* 10383486 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038348a push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 1038348f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383491 call ebx */
  call_ind((uint32_t)(EBX), 0x10383493u);
  /* 10383493 mov dl, byte ptr [0x1038a038] */
  DL = (r8((uint32_t)(0x1038a038)));
  /* 10383499 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038349b add dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1038349e push edx */
  push32((uint32_t)(EDX));
  /* 1038349f call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x103834a5u);
  /* 103834a5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103834a8 jmp 0x103834b0 */
  goto L_103834b0;
L_103834aa:;
  /* 103834aa mov edi, dword ptr [0x103880bc] */
  EDI = (r32((uint32_t)(0x103880bc)));
L_103834b0:;
  /* 103834b0 mov al, byte ptr [0x1038a038] */
  AL = (r8((uint32_t)(0x1038a038)));
  /* 103834b5 add al, 9 */
  { uint32_t _a=(AL),_b=(0x9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103834b7 push eax */
  push32((uint32_t)(EAX));
  /* 103834b8 call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x103834beu);
  /* 103834be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103834c1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103834c3 je 0x10383553 */
  if (C.zf) goto L_10383553;
  /* 103834c9 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 103834cf mov ebx, dword ptr [0x10388118] */
  EBX = (r32((uint32_t)(0x10388118)));
  /* 103834d5 lea eax, [ecx*8 + 0x10389ca8] */
  EAX = ((uint32_t)(ECX*8 + 0x10389ca8));
  /* 103834dc push eax */
  push32((uint32_t)(EAX));
  /* 103834dd call ebx */
  call_ind((uint32_t)(EBX), 0x103834dfu);
  /* 103834df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103834e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103834e4 jle 0x10383553 */
  if ((C.zf||C.sf!=C.of)) goto L_10383553;
  /* 103834e6 mov edx, dword ptr [0x1038a038] */
  EDX = (r32((uint32_t)(0x1038a038)));
  /* 103834ec lea eax, [edx*8 + 0x10389c78] */
  EAX = ((uint32_t)(EDX*8 + 0x10389c78));
  /* 103834f3 push eax */
  push32((uint32_t)(EAX));
  /* 103834f4 call ebx */
  call_ind((uint32_t)(EBX), 0x103834f6u);
  /* 103834f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103834f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103834fb jle 0x10383553 */
  if ((C.zf||C.sf!=C.of)) goto L_10383553;
  /* 103834fd mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 10383502 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10383507 lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 1038350e push ecx */
  push32((uint32_t)(ECX));
  /* 1038350f push 0x10389f10 */
  push32((uint32_t)(0x10389f10u));
  /* 10383514 push 0x1038a080 */
  push32((uint32_t)(0x1038a080u));
  /* 10383519 call dword ptr [0x10388124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388124))), 0x1038351fu);
  /* 1038351f mov edx, dword ptr [0x1038a038] */
  EDX = (r32((uint32_t)(0x1038a038)));
  /* 10383525 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383527 lea eax, [edx*8 + 0x10389c78] */
  EAX = ((uint32_t)(EDX*8 + 0x10389c78));
  /* 1038352e push eax */
  push32((uint32_t)(EAX));
  /* 1038352f call ebp */
  call_ind((uint32_t)(EBP), 0x10383531u);
  /* 10383531 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383533 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10383535 push 0x1038a080 */
  push32((uint32_t)(0x1038a080u));
  /* 1038353a push 1 */
  push32((uint32_t)(0x1u));
  /* 1038353c call esi */
  call_ind((uint32_t)(ESI), 0x1038353eu);
  /* 1038353e mov cl, byte ptr [0x1038a038] */
  CL = (r8((uint32_t)(0x1038a038)));
  /* 10383544 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10383546 add cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10383549 push ecx */
  push32((uint32_t)(ECX));
  /* 1038354a call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10383550u);
  /* 10383550 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383553:;
  /* 10383553 mov dl, byte ptr [0x1038a038] */
  DL = (r8((uint32_t)(0x1038a038)));
  /* 10383559 add dl, 0x45 */
  { uint32_t _a=(DL),_b=(0x45u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1038355c push edx */
  push32((uint32_t)(EDX));
  /* 1038355d call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383563u);
  /* 10383563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383566 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383568 jne 0x1038370f */
  if (!C.zf) goto L_1038370f;
  /* 1038356e mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 10383573 lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 1038357a push ecx */
  push32((uint32_t)(ECX));
  /* 1038357b push 0x10389df8 */
  push32((uint32_t)(0x10389df8u));
  /* 10383580 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10383586u);
  /* 10383586 mov edx, dword ptr [0x1038a038] */
  EDX = (r32((uint32_t)(0x1038a038)));
  /* 1038358c mov ebx, eax */
  EBX = (EAX);
  /* 1038358e push 0 */
  push32((uint32_t)(0x0u));
  /* 10383590 lea eax, [edx*8 + 0x10389ca8] */
  EAX = ((uint32_t)(EDX*8 + 0x10389ca8));
  /* 10383597 push eax */
  push32((uint32_t)(EAX));
  /* 10383598 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x1038359eu);
  /* 1038359e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103835a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103835a3 jne 0x1038370f */
  if (!C.zf) goto L_1038370f;
  /* 103835a9 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 103835af push 0 */
  push32((uint32_t)(0x0u));
  /* 103835b1 lea edx, [ecx*8 + 0x10389ca8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ca8));
  /* 103835b8 push edx */
  push32((uint32_t)(EDX));
  /* 103835b9 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x103835bfu);
  /* 103835bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103835c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103835c4 jle 0x1038370f */
  if ((C.zf||C.sf!=C.of)) goto L_1038370f;
  /* 103835ca mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 103835cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103835d1 lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 103835d8 push ecx */
  push32((uint32_t)(ECX));
  /* 103835d9 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x103835dfu);
  /* 103835df push 0 */
  push32((uint32_t)(0x0u));
  /* 103835e1 mov ebx, eax */
  EBX = (EAX);
  /* 103835e3 call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x103835e9u);
  /* 103835e9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103835ec lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 103835ef mov eax, 0x9c4 */
  EAX = (0x9c4u);
  /* 103835f4 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 103835f7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103835f9 imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103835fc push ebx */
  push32((uint32_t)(EBX));
  /* 103835fd push 3 */
  push32((uint32_t)(0x3u));
  /* 103835ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10383601 call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x10383607u);
  /* 10383607 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 1038360d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038360f lea edx, [ecx*8 + 0x10389ca8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ca8));
  /* 10383616 push edx */
  push32((uint32_t)(EDX));
  /* 10383617 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x1038361du);
  /* 1038361d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038361f mov ebx, eax */
  EBX = (EAX);
  /* 10383621 call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10383627u);
  /* 10383627 mov ecx, 6 */
  ECX = (0x6u);
  /* 1038362c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038362e imul ebx, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10383631 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 10383634 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10383637 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10383639 push edx */
  push32((uint32_t)(EDX));
  /* 1038363a push 1 */
  push32((uint32_t)(0x1u));
  /* 1038363c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038363e call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x10383644u);
  /* 10383644 mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 10383649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038364b lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 10383652 push ecx */
  push32((uint32_t)(ECX));
  /* 10383653 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383659u);
  /* 10383659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038365b mov ebx, eax */
  EBX = (EAX);
  /* 1038365d call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x10383663u);
  /* 10383663 mov edx, 7 */
  EDX = (0x7u);
  /* 10383668 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038366a imul ebx, edx */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1038366d lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 10383670 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10383673 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10383676 push eax */
  push32((uint32_t)(EAX));
  /* 10383677 push 4 */
  push32((uint32_t)(0x4u));
  /* 10383679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038367b call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x10383681u);
  /* 10383681 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 10383687 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038368a lea edx, [ecx*8 + 0x10389ca8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ca8));
  /* 10383691 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383693 push edx */
  push32((uint32_t)(EDX));
  /* 10383694 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x1038369au);
  /* 1038369a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038369c mov ebx, eax */
  EBX = (EAX);
  /* 1038369e call dword ptr [0x103880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880b0))), 0x103836a4u);
  /* 103836a4 mov ecx, 7 */
  ECX = (0x7u);
  /* 103836a9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103836ab imul ebx, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103836ae lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 103836b1 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 103836b4 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 103836b7 push edx */
  push32((uint32_t)(EDX));
  /* 103836b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 103836ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103836bc call dword ptr [0x10388100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388100))), 0x103836c2u);
  /* 103836c2 push 0x1038969c */
  push32((uint32_t)(0x1038969cu));
  /* 103836c7 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103836cdu);
  /* 103836cd push 0 */
  push32((uint32_t)(0x0u));
  /* 103836cf push 0x10389ce0 */
  push32((uint32_t)(0x10389ce0u));
  /* 103836d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103836d6 call dword ptr [0x10388104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388104))), 0x103836dcu);
  /* 103836dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103836de call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x103836e4u);
  /* 103836e4 mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 103836e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103836eb lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 103836f2 push ecx */
  push32((uint32_t)(ECX));
  /* 103836f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103836f5 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x103836fbu);
  /* 103836fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103836fd call dword ptr [0x10388110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388110))), 0x10383703u);
  /* 10383703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383705 push 0x10389ce0 */
  push32((uint32_t)(0x10389ce0u));
  /* 1038370a call ebp */
  call_ind((uint32_t)(EBP), 0x1038370cu);
  /* 1038370c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038370f:;
  /* 1038370f mov dl, byte ptr [0x1038a038] */
  DL = (r8((uint32_t)(0x1038a038)));
  /* 10383715 add dl, 0x45 */
  { uint32_t _a=(DL),_b=(0x45u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10383718 push edx */
  push32((uint32_t)(EDX));
  /* 10383719 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038371fu);
  /* 1038371f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383722 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383724 jne 0x103837ab */
  if (!C.zf) goto L_103837ab;
  /* 1038372a mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 1038372f lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 10383736 push ecx */
  push32((uint32_t)(ECX));
  /* 10383737 push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 1038373c call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x10383742u);
  /* 10383742 mov edx, dword ptr [0x1038a038] */
  EDX = (r32((uint32_t)(0x1038a038)));
  /* 10383748 mov ebx, eax */
  EBX = (EAX);
  /* 1038374a push 1 */
  push32((uint32_t)(0x1u));
  /* 1038374c lea eax, [edx*8 + 0x10389ca8] */
  EAX = ((uint32_t)(EDX*8 + 0x10389ca8));
  /* 10383753 push eax */
  push32((uint32_t)(EAX));
  /* 10383754 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x1038375au);
  /* 1038375a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038375d cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038375f jne 0x103837ab */
  if (!C.zf) goto L_103837ab;
  /* 10383761 mov ecx, dword ptr [0x1038a038] */
  ECX = (r32((uint32_t)(0x1038a038)));
  /* 10383767 lea edx, [ecx*8 + 0x10389ca8] */
  EDX = ((uint32_t)(ECX*8 + 0x10389ca8));
  /* 1038376e push edx */
  push32((uint32_t)(EDX));
  /* 1038376f push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 10383774 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x1038377au);
  /* 1038377a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038377d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038377f jle 0x103837ab */
  if ((C.zf||C.sf!=C.of)) goto L_103837ab;
  /* 10383781 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383783 call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x10383789u);
  /* 10383789 mov eax, dword ptr [0x1038a038] */
  EAX = (r32((uint32_t)(0x1038a038)));
  /* 1038378e push 0 */
  push32((uint32_t)(0x0u));
  /* 10383790 lea ecx, [eax*8 + 0x10389ca8] */
  ECX = ((uint32_t)(EAX*8 + 0x10389ca8));
  /* 10383797 push ecx */
  push32((uint32_t)(ECX));
  /* 10383798 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038379a call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x103837a0u);
  /* 103837a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103837a2 call dword ptr [0x10388110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388110))), 0x103837a8u);
  /* 103837a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103837ab:;
  /* 103837ab push 0xa */
  push32((uint32_t)(0xau));
  /* 103837ad call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103837b3u);
  /* 103837b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103837b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103837b8 je 0x10383877 */
  if (C.zf) goto L_10383877;
  /* 103837be call dword ptr [0x10388128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388128))), 0x103837c4u);
  /* 103837c4 cmp eax, 0x14438 */
  { uint32_t _a=(EAX),_b=(0x14438u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103837c9 jle 0x10383877 */
  if ((C.zf||C.sf!=C.of)) goto L_10383877;
  /* 103837cf mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 103837d5 mov eax, dword ptr [edx*4 + 0x10389f58] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10389f58)));
  /* 103837dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103837de jne 0x10383877 */
  if (!C.zf) goto L_10383877;
  /* 103837e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103837e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 103837e8 call edi */
  call_ind((uint32_t)(EDI), 0x103837eau);
  /* 103837ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103837ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 103837ee call edi */
  call_ind((uint32_t)(EDI), 0x103837f0u);
  /* 103837f0 mov ebx, dword ptr [0x103880b0] */
  EBX = (r32((uint32_t)(0x103880b0)));
  /* 103837f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103837f9 mov dword ptr [0x10389ed8], 4 */
  w32((uint32_t)(0x10389ed8), (0x4u));
  /* 10383803 push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 10383808 push 0x10389a80 */
  push32((uint32_t)(0x10389a80u));
  /* 1038380d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038380f call ebx */
  call_ind((uint32_t)(EBX), 0x10383811u);
  /* 10383811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383814 lea eax, [eax*8 + 0x18] */
  EAX = ((uint32_t)(EAX*8 + 0x18));
  /* 1038381b push eax */
  push32((uint32_t)(EAX));
  /* 1038381c call 0x10381ba0 */
  push32(0x10383821u); f_10381ba0();
  /* 10383821 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383824 push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 10383829 push 0x10389c30 */
  push32((uint32_t)(0x10389c30u));
  /* 1038382e push 0 */
  push32((uint32_t)(0x0u));
  /* 10383830 call ebx */
  call_ind((uint32_t)(EBX), 0x10383832u);
  /* 10383832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383835 lea ecx, [eax*4 + 0xc] */
  ECX = ((uint32_t)(EAX*4 + 0xc));
  /* 1038383c push ecx */
  push32((uint32_t)(ECX));
  /* 1038383d call 0x10381ba0 */
  push32(0x10383842u); f_10381ba0();
  /* 10383842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383845 push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 1038384a push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 1038384f push 0 */
  push32((uint32_t)(0x0u));
  /* 10383851 call ebx */
  call_ind((uint32_t)(EBX), 0x10383853u);
  /* 10383853 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10383856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383859 lea edx, [eax + eax*2] */
  EDX = ((uint32_t)(EAX + EAX*2));
  /* 1038385c push edx */
  push32((uint32_t)(EDX));
  /* 1038385d call 0x10381ba0 */
  push32(0x10383862u); f_10381ba0();
  /* 10383862 mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 10383867 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038386a mov dword ptr [eax*4 + 0x10389f58], 1 */
  w32((uint32_t)(EAX*4 + 0x10389f58), (0x1u));
  /* 10383875 jmp 0x1038387d */
  goto L_1038387d;
L_10383877:;
  /* 10383877 mov ebx, dword ptr [0x103880b0] */
  EBX = (r32((uint32_t)(0x103880b0)));
L_1038387d:;
  /* 1038387d mov eax, dword ptr [0x10389ed8] */
  EAX = (r32((uint32_t)(0x10389ed8)));
  /* 10383882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383884 jle 0x103838bd */
  if ((C.zf||C.sf!=C.of)) goto L_103838bd;
  /* 10383886 push 0x10389d20 */
  push32((uint32_t)(0x10389d20u));
  /* 1038388b call dword ptr [0x103880ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880ec))), 0x10383891u);
  /* 10383891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383894 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383896 je 0x103838bd */
  if (C.zf) goto L_103838bd;
  /* 10383898 mov ecx, dword ptr [0x10389ed8] */
  ECX = (r32((uint32_t)(0x10389ed8)));
  /* 1038389e push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 103838a3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103838a4 push 0x10389c70 */
  push32((uint32_t)(0x10389c70u));
  /* 103838a9 push 0x10389d20 */
  push32((uint32_t)(0x10389d20u));
  /* 103838ae mov dword ptr [0x10389ed8], ecx */
  w32((uint32_t)(0x10389ed8), (ECX));
  /* 103838b4 call dword ptr [0x103880e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e4))), 0x103838bau);
  /* 103838ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103838bd:;
  /* 103838bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 103838bf call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103838c5u);
  /* 103838c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103838c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103838ca jne 0x10383941 */
  if (!C.zf) goto L_10383941;
  /* 103838cc mov ecx, dword ptr [0x10389d28] */
  ECX = (r32((uint32_t)(0x10389d28)));
  /* 103838d2 cmp dword ptr [ecx*4 + 0x10389f58], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10389f58))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103838da jne 0x10383941 */
  if (!C.zf) goto L_10383941;
  /* 103838dc push 1 */
  push32((uint32_t)(0x1u));
  /* 103838de push 0xb */
  push32((uint32_t)(0xbu));
  /* 103838e0 call edi */
  call_ind((uint32_t)(EDI), 0x103838e2u);
  /* 103838e2 mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 103838e7 push 0x10389664 */
  push32((uint32_t)(0x10389664u));
  /* 103838ec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103838ed mov dword ptr [0x10389d28], eax */
  w32((uint32_t)(0x10389d28), (EAX));
  /* 103838f2 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103838f8u);
  /* 103838f8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103838fa call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383900u);
  /* 10383900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383903 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383905 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383907 je 0x10383916 */
  if (C.zf) goto L_10383916;
  /* 10383909 push 5 */
  push32((uint32_t)(0x5u));
  /* 1038390b call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10383911u);
  /* 10383911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383914 jmp 0x10383938 */
  goto L_10383938;
L_10383916:;
  /* 10383916 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383918 call edi */
  call_ind((uint32_t)(EDI), 0x1038391au);
  /* 1038391a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038391c push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10383921 call ebp */
  call_ind((uint32_t)(EBP), 0x10383923u);
  /* 10383923 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383925 call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x1038392bu);
  /* 1038392b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1038392d push 5 */
  push32((uint32_t)(0x5u));
  /* 1038392f call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10383935u);
  /* 10383935 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383938:;
  /* 10383938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038393a push 0xc */
  push32((uint32_t)(0xcu));
  /* 1038393c call edi */
  call_ind((uint32_t)(EDI), 0x1038393eu);
  /* 1038393e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383941:;
  /* 10383941 push 5 */
  push32((uint32_t)(0x5u));
  /* 10383943 call dword ptr [0x10388108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388108))), 0x10383949u);
  /* 10383949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038394c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038394e je 0x10383989 */
  if (C.zf) goto L_10383989;
  /* 10383950 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383952 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10383957 call ebp */
  call_ind((uint32_t)(EBP), 0x10383959u);
  /* 10383959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038395b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1038395d push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 10383962 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383964 call esi */
  call_ind((uint32_t)(ESI), 0x10383966u);
  /* 10383966 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383968 push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 1038396d call ebp */
  call_ind((uint32_t)(EBP), 0x1038396fu);
  /* 1038396f push 0 */
  push32((uint32_t)(0x0u));
  /* 10383971 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10383973 push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 10383978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038397a call esi */
  call_ind((uint32_t)(ESI), 0x1038397cu);
  /* 1038397c push 1 */
  push32((uint32_t)(0x1u));
  /* 1038397e push 6 */
  push32((uint32_t)(0x6u));
  /* 10383980 call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10383986u);
  /* 10383986 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383989:;
  /* 10383989 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1038398b call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383991u);
  /* 10383991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383994 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383996 jne 0x10383a93 */
  if (!C.zf) goto L_10383a93;
  /* 1038399c push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 103839a1 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103839a7u);
  /* 103839a7 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 103839ac push 0x10389f38 */
  push32((uint32_t)(0x10389f38u));
  /* 103839b1 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103839b5 call dword ptr [0x103880f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f8))), 0x103839bbu);
  /* 103839bb mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103839bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103839c2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103839c4 jne 0x10383a93 */
  if (!C.zf) goto L_10383a93;
  /* 103839ca push 1 */
  push32((uint32_t)(0x1u));
  /* 103839cc push 0xc */
  push32((uint32_t)(0xcu));
  /* 103839ce call edi */
  call_ind((uint32_t)(EDI), 0x103839d0u);
  /* 103839d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103839d2 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 103839d7 call ebp */
  call_ind((uint32_t)(EBP), 0x103839d9u);
  /* 103839d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103839db push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103839dd push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 103839e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103839e4 call esi */
  call_ind((uint32_t)(ESI), 0x103839e6u);
  /* 103839e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103839e8 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 103839ea push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 103839ef push 1 */
  push32((uint32_t)(0x1u));
  /* 103839f1 call esi */
  call_ind((uint32_t)(ESI), 0x103839f3u);
  /* 103839f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103839f5 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103839fa push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 103839ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a01 call esi */
  call_ind((uint32_t)(ESI), 0x10383a03u);
  /* 10383a03 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383a06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a08 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10383a0a push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 10383a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a11 call esi */
  call_ind((uint32_t)(ESI), 0x10383a13u);
  /* 10383a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a15 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10383a1a push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 10383a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a21 call esi */
  call_ind((uint32_t)(ESI), 0x10383a23u);
  /* 10383a23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a25 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10383a2a push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 10383a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a31 call esi */
  call_ind((uint32_t)(ESI), 0x10383a33u);
  /* 10383a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10383a37 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 10383a3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a3e call esi */
  call_ind((uint32_t)(ESI), 0x10383a40u);
  /* 10383a40 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383a43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a45 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10383a4a push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 10383a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a51 call esi */
  call_ind((uint32_t)(ESI), 0x10383a53u);
  /* 10383a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10383a57 push 0x10389e10 */
  push32((uint32_t)(0x10389e10u));
  /* 10383a5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a5e call esi */
  call_ind((uint32_t)(ESI), 0x10383a60u);
  /* 10383a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a62 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10383a67 push 0x10389e08 */
  push32((uint32_t)(0x10389e08u));
  /* 10383a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a6e call esi */
  call_ind((uint32_t)(ESI), 0x10383a70u);
  /* 10383a70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a72 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10383a77 push 0x10389e00 */
  push32((uint32_t)(0x10389e00u));
  /* 10383a7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a7e call esi */
  call_ind((uint32_t)(ESI), 0x10383a80u);
  /* 10383a80 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10383a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383a87 push 0x10389fd0 */
  push32((uint32_t)(0x10389fd0u));
  /* 10383a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383a8e call esi */
  call_ind((uint32_t)(ESI), 0x10383a90u);
  /* 10383a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383a93:;
  /* 10383a93 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10383a98 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383a9eu);
  /* 10383a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383aa3 jle 0x10383b06 */
  if ((C.zf||C.sf!=C.of)) goto L_10383b06;
  /* 10383aa5 push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 10383aaa call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383ab0u);
  /* 10383ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383ab5 jle 0x10383b06 */
  if ((C.zf||C.sf!=C.of)) goto L_10383b06;
  /* 10383ab7 push 6 */
  push32((uint32_t)(0x6u));
  /* 10383ab9 call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x10383abfu);
  /* 10383abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383ac2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383ac4 je 0x10383b06 */
  if (C.zf) goto L_10383b06;
  /* 10383ac6 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10383acb push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10383ad0 push 0x10389e00 */
  push32((uint32_t)(0x10389e00u));
  /* 10383ad5 push 0x1038a088 */
  push32((uint32_t)(0x1038a088u));
  /* 10383ada call dword ptr [0x10388124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388124))), 0x10383ae0u);
  /* 10383ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ae2 push 0x10389c08 */
  push32((uint32_t)(0x10389c08u));
  /* 10383ae7 call ebp */
  call_ind((uint32_t)(EBP), 0x10383ae9u);
  /* 10383ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383aeb push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10383af0 push 0x1038a088 */
  push32((uint32_t)(0x1038a088u));
  /* 10383af5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383af7 call esi */
  call_ind((uint32_t)(ESI), 0x10383af9u);
  /* 10383af9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10383afb push 6 */
  push32((uint32_t)(0x6u));
  /* 10383afd call dword ptr [0x103880e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880e8))), 0x10383b03u);
  /* 10383b03 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383b06:;
  /* 10383b06 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10383b08 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383b0eu);
  /* 10383b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383b11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383b13 je 0x10383b62 */
  if (C.zf) goto L_10383b62;
  /* 10383b15 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10383b1a call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383b20u);
  /* 10383b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383b25 jle 0x10383b62 */
  if ((C.zf||C.sf!=C.of)) goto L_10383b62;
  /* 10383b27 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10383b2c call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383b32u);
  /* 10383b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383b34 push 0x10389c00 */
  push32((uint32_t)(0x10389c00u));
  /* 10383b39 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10383b3d call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383b43u);
  /* 10383b43 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10383b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383b4a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10383b4c jne 0x10383b62 */
  if (!C.zf) goto L_10383b62;
  /* 10383b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10383b50 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10383b52 call edi */
  call_ind((uint32_t)(EDI), 0x10383b54u);
  /* 10383b54 push 0x1038965c */
  push32((uint32_t)(0x1038965cu));
  /* 10383b59 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10383b5fu);
  /* 10383b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383b62:;
  /* 10383b62 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383b64 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383b6au);
  /* 10383b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383b6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383b6f je 0x10383c08 */
  if (C.zf) goto L_10383c08;
  /* 10383b75 push 3 */
  push32((uint32_t)(0x3u));
  /* 10383b77 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383b7du);
  /* 10383b7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383b80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383b82 je 0x10383c08 */
  if (C.zf) goto L_10383c08;
  /* 10383b88 push 6 */
  push32((uint32_t)(0x6u));
  /* 10383b8a call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383b90u);
  /* 10383b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383b93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383b95 je 0x10383c08 */
  if (C.zf) goto L_10383c08;
  /* 10383b97 push 9 */
  push32((uint32_t)(0x9u));
  /* 10383b99 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383b9fu);
  /* 10383b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383ba2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383ba4 je 0x10383c08 */
  if (C.zf) goto L_10383c08;
  /* 10383ba6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10383ba8 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383baeu);
  /* 10383bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383bb1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383bb3 je 0x10383c08 */
  if (C.zf) goto L_10383c08;
  /* 10383bb5 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10383bba call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383bc0u);
  /* 10383bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383bc5 jle 0x10383c08 */
  if ((C.zf||C.sf!=C.of)) goto L_10383c08;
  /* 10383bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383bc9 push 0x10389f20 */
  push32((uint32_t)(0x10389f20u));
  /* 10383bce call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383bd4u);
  /* 10383bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383bd9 jle 0x10383c08 */
  if ((C.zf||C.sf!=C.of)) goto L_10383c08;
  /* 10383bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10383bdd push 0x10389f20 */
  push32((uint32_t)(0x10389f20u));
  /* 10383be2 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383be8u);
  /* 10383be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383beb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383bed jne 0x10383c08 */
  if (!C.zf) goto L_10383c08;
  /* 10383bef push eax */
  push32((uint32_t)(EAX));
  /* 10383bf0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383bf2 call edi */
  call_ind((uint32_t)(EDI), 0x10383bf4u);
  /* 10383bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383bf6 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10383bfb call ebp */
  call_ind((uint32_t)(EBP), 0x10383bfdu);
  /* 10383bfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10383bff call dword ptr [0x1038812c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038812c))), 0x10383c05u);
  /* 10383c05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383c08:;
  /* 10383c08 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383c0a call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383c10u);
  /* 10383c10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383c15 jne 0x10383c57 */
  if (!C.zf) goto L_10383c57;
  /* 10383c17 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10383c1c call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383c22u);
  /* 10383c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383c27 jle 0x10383c57 */
  if ((C.zf||C.sf!=C.of)) goto L_10383c57;
  /* 10383c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383c2b push 0x10389f20 */
  push32((uint32_t)(0x10389f20u));
  /* 10383c30 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383c36u);
  /* 10383c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383c3b jne 0x10383c57 */
  if (!C.zf) goto L_10383c57;
  /* 10383c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10383c3f push 0xe */
  push32((uint32_t)(0xeu));
  /* 10383c41 call edi */
  call_ind((uint32_t)(EDI), 0x10383c43u);
  /* 10383c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383c45 push 0x10389d48 */
  push32((uint32_t)(0x10389d48u));
  /* 10383c4a call ebp */
  call_ind((uint32_t)(EBP), 0x10383c4cu);
  /* 10383c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383c4e call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x10383c54u);
  /* 10383c54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383c57:;
  /* 10383c57 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10383c59 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383c5fu);
  /* 10383c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383c64 je 0x10383cb9 */
  if (C.zf) goto L_10383cb9;
  /* 10383c66 push 0x10389d58 */
  push32((uint32_t)(0x10389d58u));
  /* 10383c6b call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383c71u);
  /* 10383c71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383c76 jle 0x10383cb9 */
  if ((C.zf||C.sf!=C.of)) goto L_10383cb9;
  /* 10383c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383c7a push 0x10389f30 */
  push32((uint32_t)(0x10389f30u));
  /* 10383c7f call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383c85u);
  /* 10383c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383c8a jle 0x10383cb9 */
  if ((C.zf||C.sf!=C.of)) goto L_10383cb9;
  /* 10383c8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10383c8e push 0x10389f30 */
  push32((uint32_t)(0x10389f30u));
  /* 10383c93 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383c99u);
  /* 10383c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383c9e jne 0x10383cb9 */
  if (!C.zf) goto L_10383cb9;
  /* 10383ca0 push eax */
  push32((uint32_t)(EAX));
  /* 10383ca1 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10383ca3 call edi */
  call_ind((uint32_t)(EDI), 0x10383ca5u);
  /* 10383ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ca7 push 0x10389d58 */
  push32((uint32_t)(0x10389d58u));
  /* 10383cac call ebp */
  call_ind((uint32_t)(EBP), 0x10383caeu);
  /* 10383cae push 1 */
  push32((uint32_t)(0x1u));
  /* 10383cb0 call dword ptr [0x1038812c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038812c))), 0x10383cb6u);
  /* 10383cb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383cb9:;
  /* 10383cb9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10383cbb call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383cc1u);
  /* 10383cc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383cc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383cc6 jne 0x10383d08 */
  if (!C.zf) goto L_10383d08;
  /* 10383cc8 push 0x10389d58 */
  push32((uint32_t)(0x10389d58u));
  /* 10383ccd call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383cd3u);
  /* 10383cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383cd8 jle 0x10383d08 */
  if ((C.zf||C.sf!=C.of)) goto L_10383d08;
  /* 10383cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10383cdc push 0x10389f30 */
  push32((uint32_t)(0x10389f30u));
  /* 10383ce1 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383ce7u);
  /* 10383ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383cec jne 0x10383d08 */
  if (!C.zf) goto L_10383d08;
  /* 10383cee push 1 */
  push32((uint32_t)(0x1u));
  /* 10383cf0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10383cf2 call edi */
  call_ind((uint32_t)(EDI), 0x10383cf4u);
  /* 10383cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383cf6 push 0x10389d58 */
  push32((uint32_t)(0x10389d58u));
  /* 10383cfb call ebp */
  call_ind((uint32_t)(EBP), 0x10383cfdu);
  /* 10383cfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10383cff call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x10383d05u);
  /* 10383d05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383d08:;
  /* 10383d08 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10383d0a call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383d10u);
  /* 10383d10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d13 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383d15 je 0x10383d6a */
  if (C.zf) goto L_10383d6a;
  /* 10383d17 push 0x10389d68 */
  push32((uint32_t)(0x10389d68u));
  /* 10383d1c call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383d22u);
  /* 10383d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383d27 jle 0x10383d6a */
  if ((C.zf||C.sf!=C.of)) goto L_10383d6a;
  /* 10383d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383d2b push 0x10389f40 */
  push32((uint32_t)(0x10389f40u));
  /* 10383d30 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383d36u);
  /* 10383d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383d3b jle 0x10383d6a */
  if ((C.zf||C.sf!=C.of)) goto L_10383d6a;
  /* 10383d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10383d3f push 0x10389f40 */
  push32((uint32_t)(0x10389f40u));
  /* 10383d44 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383d4au);
  /* 10383d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383d4f jne 0x10383d6a */
  if (!C.zf) goto L_10383d6a;
  /* 10383d51 push eax */
  push32((uint32_t)(EAX));
  /* 10383d52 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10383d54 call edi */
  call_ind((uint32_t)(EDI), 0x10383d56u);
  /* 10383d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383d58 push 0x10389d68 */
  push32((uint32_t)(0x10389d68u));
  /* 10383d5d call ebp */
  call_ind((uint32_t)(EBP), 0x10383d5fu);
  /* 10383d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383d61 call dword ptr [0x1038812c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038812c))), 0x10383d67u);
  /* 10383d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383d6a:;
  /* 10383d6a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10383d6c call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383d72u);
  /* 10383d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383d77 jne 0x10383db9 */
  if (!C.zf) goto L_10383db9;
  /* 10383d79 push 0x10389d68 */
  push32((uint32_t)(0x10389d68u));
  /* 10383d7e call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383d84u);
  /* 10383d84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383d89 jle 0x10383db9 */
  if ((C.zf||C.sf!=C.of)) goto L_10383db9;
  /* 10383d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10383d8d push 0x10389f40 */
  push32((uint32_t)(0x10389f40u));
  /* 10383d92 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383d98u);
  /* 10383d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383d9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383d9d jne 0x10383db9 */
  if (!C.zf) goto L_10383db9;
  /* 10383d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383da1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10383da3 call edi */
  call_ind((uint32_t)(EDI), 0x10383da5u);
  /* 10383da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383da7 push 0x10389d68 */
  push32((uint32_t)(0x10389d68u));
  /* 10383dac call ebp */
  call_ind((uint32_t)(EBP), 0x10383daeu);
  /* 10383dae push 1 */
  push32((uint32_t)(0x1u));
  /* 10383db0 call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x10383db6u);
  /* 10383db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383db9:;
  /* 10383db9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10383dbb call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383dc1u);
  /* 10383dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383dc4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383dc6 je 0x10383e1b */
  if (C.zf) goto L_10383e1b;
  /* 10383dc8 push 0x10389d78 */
  push32((uint32_t)(0x10389d78u));
  /* 10383dcd call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383dd3u);
  /* 10383dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383dd8 jle 0x10383e1b */
  if ((C.zf||C.sf!=C.of)) goto L_10383e1b;
  /* 10383dda push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ddc push 0x10389f50 */
  push32((uint32_t)(0x10389f50u));
  /* 10383de1 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383de7u);
  /* 10383de7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383dec jle 0x10383e1b */
  if ((C.zf||C.sf!=C.of)) goto L_10383e1b;
  /* 10383dee push 1 */
  push32((uint32_t)(0x1u));
  /* 10383df0 push 0x10389f50 */
  push32((uint32_t)(0x10389f50u));
  /* 10383df5 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383dfbu);
  /* 10383dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383e00 jne 0x10383e1b */
  if (!C.zf) goto L_10383e1b;
  /* 10383e02 push eax */
  push32((uint32_t)(EAX));
  /* 10383e03 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10383e05 call edi */
  call_ind((uint32_t)(EDI), 0x10383e07u);
  /* 10383e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383e09 push 0x10389d78 */
  push32((uint32_t)(0x10389d78u));
  /* 10383e0e call ebp */
  call_ind((uint32_t)(EBP), 0x10383e10u);
  /* 10383e10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383e12 call dword ptr [0x1038812c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038812c))), 0x10383e18u);
  /* 10383e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383e1b:;
  /* 10383e1b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10383e1d call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383e23u);
  /* 10383e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383e26 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383e28 jne 0x10383e6a */
  if (!C.zf) goto L_10383e6a;
  /* 10383e2a push 0x10389d78 */
  push32((uint32_t)(0x10389d78u));
  /* 10383e2f call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383e35u);
  /* 10383e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383e3a jle 0x10383e6a */
  if ((C.zf||C.sf!=C.of)) goto L_10383e6a;
  /* 10383e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10383e3e push 0x10389f50 */
  push32((uint32_t)(0x10389f50u));
  /* 10383e43 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383e49u);
  /* 10383e49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383e4e jne 0x10383e6a */
  if (!C.zf) goto L_10383e6a;
  /* 10383e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383e52 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10383e54 call edi */
  call_ind((uint32_t)(EDI), 0x10383e56u);
  /* 10383e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383e58 push 0x10389d78 */
  push32((uint32_t)(0x10389d78u));
  /* 10383e5d call ebp */
  call_ind((uint32_t)(EBP), 0x10383e5fu);
  /* 10383e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383e61 call dword ptr [0x103880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880d4))), 0x10383e67u);
  /* 10383e67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383e6a:;
  /* 10383e6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10383e6c push 0x10389d80 */
  push32((uint32_t)(0x10389d80u));
  /* 10383e71 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383e77u);
  /* 10383e77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383e7c jle 0x10383ea7 */
  if ((C.zf||C.sf!=C.of)) goto L_10383ea7;
  /* 10383e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10383e80 push 0x10389fa8 */
  push32((uint32_t)(0x10389fa8u));
  /* 10383e85 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383e8bu);
  /* 10383e8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383e90 jle 0x10383ea7 */
  if ((C.zf||C.sf!=C.of)) goto L_10383ea7;
  /* 10383e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383e94 push 0x10389fa8 */
  push32((uint32_t)(0x10389fa8u));
  /* 10383e99 push 0x10389d80 */
  push32((uint32_t)(0x10389d80u));
  /* 10383e9e call dword ptr [0x1038813c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038813c))), 0x10383ea4u);
  /* 10383ea4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383ea7:;
  /* 10383ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383ea9 push 0x10389d98 */
  push32((uint32_t)(0x10389d98u));
  /* 10383eae call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383eb4u);
  /* 10383eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383eb9 jle 0x10383ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_10383ee4;
  /* 10383ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ebd push 0x10389fc0 */
  push32((uint32_t)(0x10389fc0u));
  /* 10383ec2 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10383ec8u);
  /* 10383ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383ecd jle 0x10383ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_10383ee4;
  /* 10383ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ed1 push 0x10389fc0 */
  push32((uint32_t)(0x10389fc0u));
  /* 10383ed6 push 0x10389d98 */
  push32((uint32_t)(0x10389d98u));
  /* 10383edb call dword ptr [0x1038813c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038813c))), 0x10383ee1u);
  /* 10383ee1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383ee4:;
  /* 10383ee4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10383ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ee8 call dword ptr [0x10388140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388140))), 0x10383eeeu);
  /* 10383eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383ef3 jg 0x10383f06 */
  if ((!C.zf&&C.sf==C.of)) goto L_10383f06;
  /* 10383ef5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10383ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383ef9 call dword ptr [0x10388140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388140))), 0x10383effu);
  /* 10383eff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383f04 jle 0x10383f78 */
  if ((C.zf||C.sf!=C.of)) goto L_10383f78;
L_10383f06:;
  /* 10383f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383f08 push 0x10389c28 */
  push32((uint32_t)(0x10389c28u));
  /* 10383f0d call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383f13u);
  /* 10383f13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383f16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383f18 jle 0x10383f78 */
  if ((C.zf||C.sf!=C.of)) goto L_10383f78;
  /* 10383f1a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10383f1c call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383f22u);
  /* 10383f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383f25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383f27 je 0x10383f78 */
  if (C.zf) goto L_10383f78;
  /* 10383f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f2b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10383f2d call edi */
  call_ind((uint32_t)(EDI), 0x10383f2fu);
  /* 10383f2f push 0x10389654 */
  push32((uint32_t)(0x10389654u));
  /* 10383f34 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10383f3au);
  /* 10383f3a mov ebx, dword ptr [0x10388174] */
  EBX = (r32((uint32_t)(0x10388174)));
  /* 10383f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f42 push 5 */
  push32((uint32_t)(0x5u));
  /* 10383f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f46 call ebx */
  call_ind((uint32_t)(EBX), 0x10383f48u);
  /* 10383f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f4a push 4 */
  push32((uint32_t)(0x4u));
  /* 10383f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f4e call ebx */
  call_ind((uint32_t)(EBX), 0x10383f50u);
  /* 10383f50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383f52 call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x10383f58u);
  /* 10383f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f5a push 0x10389c28 */
  push32((uint32_t)(0x10389c28u));
  /* 10383f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10383f61 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10383f67u);
  /* 10383f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383f69 call dword ptr [0x103880c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c0))), 0x10383f6fu);
  /* 10383f6f mov ebx, dword ptr [0x103880b0] */
  EBX = (r32((uint32_t)(0x103880b0)));
  /* 10383f75 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383f78:;
  /* 10383f78 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10383f7a call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383f80u);
  /* 10383f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383f83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383f85 jne 0x10383fa4 */
  if (!C.zf) goto L_10383fa4;
  /* 10383f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383f89 push 0x10389c28 */
  push32((uint32_t)(0x10389c28u));
  /* 10383f8e call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383f94u);
  /* 10383f94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383f99 jle 0x10383fa4 */
  if ((C.zf||C.sf!=C.of)) goto L_10383fa4;
  /* 10383f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10383f9d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10383f9f call edi */
  call_ind((uint32_t)(EDI), 0x10383fa1u);
  /* 10383fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383fa4:;
  /* 10383fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383fa6 push 0x10389c20 */
  push32((uint32_t)(0x10389c20u));
  /* 10383fab call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10383fb1u);
  /* 10383fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383fb6 jle 0x10383fda */
  if ((C.zf||C.sf!=C.of)) goto L_10383fda;
  /* 10383fb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383fba call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x10383fc0u);
  /* 10383fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10383fc2 push 0x10389c20 */
  push32((uint32_t)(0x10389c20u));
  /* 10383fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10383fc9 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10383fcfu);
  /* 10383fcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10383fd1 call dword ptr [0x103880c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c0))), 0x10383fd7u);
  /* 10383fd7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10383fda:;
  /* 10383fda push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10383fdc call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10383fe2u);
  /* 10383fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383fe5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10383fe7 je 0x10384014 */
  if (C.zf) goto L_10384014;
  /* 10383fe9 push 0x10389c20 */
  push32((uint32_t)(0x10389c20u));
  /* 10383fee call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10383ff4u);
  /* 10383ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10383ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10383ff9 jne 0x10384014 */
  if (!C.zf) goto L_10384014;
  /* 10383ffb push eax */
  push32((uint32_t)(EAX));
  /* 10383ffc push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10383ffe call edi */
  call_ind((uint32_t)(EDI), 0x10384000u);
  /* 10384000 push 0x1038964c */
  push32((uint32_t)(0x1038964cu));
  /* 10384005 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x1038400bu);
  /* 1038400b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038400e call dword ptr [0x10388138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388138))), 0x10384014u);
L_10384014:;
  /* 10384014 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10384016 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038401cu);
  /* 1038401c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038401f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384021 je 0x1038404e */
  if (C.zf) goto L_1038404e;
  /* 10384023 push 0x10389c38 */
  push32((uint32_t)(0x10389c38u));
  /* 10384028 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x1038402eu);
  /* 1038402e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384033 jne 0x1038404e */
  if (!C.zf) goto L_1038404e;
  /* 10384035 push eax */
  push32((uint32_t)(EAX));
  /* 10384036 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10384038 call edi */
  call_ind((uint32_t)(EDI), 0x1038403au);
  /* 1038403a push 0x10389644 */
  push32((uint32_t)(0x10389644u));
  /* 1038403f call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10384045u);
  /* 10384045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384048 call dword ptr [0x10388138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388138))), 0x1038404eu);
L_1038404e:;
  /* 1038404e push 0 */
  push32((uint32_t)(0x0u));
  /* 10384050 call ebx */
  call_ind((uint32_t)(EBX), 0x10384052u);
  /* 10384052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384055 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384058 jge 0x103840d5 */
  if ((C.sf==C.of)) goto L_103840d5;
  /* 1038405a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038405c push 0x10389ff0 */
  push32((uint32_t)(0x10389ff0u));
  /* 10384061 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10384067u);
  /* 10384067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038406a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038406c jle 0x10384083 */
  if ((C.zf||C.sf!=C.of)) goto L_10384083;
  /* 1038406e push 0 */
  push32((uint32_t)(0x0u));
  /* 10384070 push 0x10389ff0 */
  push32((uint32_t)(0x10389ff0u));
  /* 10384075 push 0x1038a010 */
  push32((uint32_t)(0x1038a010u));
  /* 1038407a call dword ptr [0x1038813c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038813c))), 0x10384080u);
  /* 10384080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10384083:;
  /* 10384083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384085 push 0x10389fd8 */
  push32((uint32_t)(0x10389fd8u));
  /* 1038408a call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x10384090u);
  /* 10384090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384095 jle 0x103840ac */
  if ((C.zf||C.sf!=C.of)) goto L_103840ac;
  /* 10384097 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384099 push 0x10389fd8 */
  push32((uint32_t)(0x10389fd8u));
  /* 1038409e push 0x1038a028 */
  push32((uint32_t)(0x1038a028u));
  /* 103840a3 call dword ptr [0x1038813c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038813c))), 0x103840a9u);
  /* 103840a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103840ac:;
  /* 103840ac push 0 */
  push32((uint32_t)(0x0u));
  /* 103840ae push 0x10389fe8 */
  push32((uint32_t)(0x10389fe8u));
  /* 103840b3 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x103840b9u);
  /* 103840b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103840bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103840be jle 0x103840d5 */
  if ((C.zf||C.sf!=C.of)) goto L_103840d5;
  /* 103840c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103840c2 push 0x10389fe8 */
  push32((uint32_t)(0x10389fe8u));
  /* 103840c7 push 0x1038a048 */
  push32((uint32_t)(0x1038a048u));
  /* 103840cc call dword ptr [0x1038813c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038813c))), 0x103840d2u);
  /* 103840d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103840d5:;
  /* 103840d5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103840d7 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103840ddu);
  /* 103840dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103840e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103840e2 je 0x10384133 */
  if (C.zf) goto L_10384133;
  /* 103840e4 push 0x1038a048 */
  push32((uint32_t)(0x1038a048u));
  /* 103840e9 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103840efu);
  /* 103840ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103840f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103840f4 jne 0x10384133 */
  if (!C.zf) goto L_10384133;
  /* 103840f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103840f8 call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x103840feu);
  /* 103840fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10384100 push 0x10389dc8 */
  push32((uint32_t)(0x10389dc8u));
  /* 10384105 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384107 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x1038410du);
  /* 1038410d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038410f push 1 */
  push32((uint32_t)(0x1u));
  /* 10384111 call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x10384117u);
  /* 10384117 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384119 push 0x1038a040 */
  push32((uint32_t)(0x1038a040u));
  /* 1038411e push 1 */
  push32((uint32_t)(0x1u));
  /* 10384120 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10384126u);
  /* 10384126 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384128 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038412a call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x10384130u);
  /* 10384130 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10384133:;
  /* 10384133 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10384135 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038413bu);
  /* 1038413b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038413e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384140 je 0x103841a4 */
  if (C.zf) goto L_103841a4;
  /* 10384142 push 0x10389dc8 */
  push32((uint32_t)(0x10389dc8u));
  /* 10384147 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x1038414du);
  /* 1038414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038414f push 0x10389dc8 */
  push32((uint32_t)(0x10389dc8u));
  /* 10384154 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 10384158 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x1038415eu);
  /* 1038415e mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10384162 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384165 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384167 jne 0x103841a4 */
  if (!C.zf) goto L_103841a4;
  /* 10384169 push 0x1038a040 */
  push32((uint32_t)(0x1038a040u));
  /* 1038416e call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10384174u);
  /* 10384174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384176 push 0x1038a040 */
  push32((uint32_t)(0x1038a040u));
  /* 1038417b mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 1038417f call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10384185u);
  /* 10384185 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10384189 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038418c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038418e jne 0x103841a4 */
  if (!C.zf) goto L_103841a4;
  /* 10384190 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384192 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10384194 call edi */
  call_ind((uint32_t)(EDI), 0x10384196u);
  /* 10384196 push 0x1038963c */
  push32((uint32_t)(0x1038963cu));
  /* 1038419b call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103841a1u);
  /* 103841a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103841a4:;
  /* 103841a4 mov eax, dword ptr [0x10389ed0] */
  EAX = (r32((uint32_t)(0x10389ed0)));
  /* 103841a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103841ab jne 0x10384214 */
  if (!C.zf) goto L_10384214;
  /* 103841ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103841af call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x103841b5u);
  /* 103841b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103841b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103841ba jne 0x10384214 */
  if (!C.zf) goto L_10384214;
  /* 103841bc mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 103841c2 mov eax, dword ptr [edx*4 + 0x10389f58] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10389f58)));
  /* 103841c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103841cb jne 0x10384214 */
  if (!C.zf) goto L_10384214;
  /* 103841cd push 0 */
  push32((uint32_t)(0x0u));
  /* 103841cf call ebx */
  call_ind((uint32_t)(EBX), 0x103841d1u);
  /* 103841d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103841d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103841d6 jle 0x10384214 */
  if ((C.zf||C.sf!=C.of)) goto L_10384214;
  /* 103841d8 mov ecx, dword ptr [0x10389d28] */
  ECX = (r32((uint32_t)(0x10389d28)));
  /* 103841de push 0x10389c10 */
  push32((uint32_t)(0x10389c10u));
  /* 103841e3 mov eax, 1 */
  EAX = (0x1u);
  /* 103841e8 push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 103841ed push 0x21 */
  push32((uint32_t)(0x21u));
  /* 103841ef mov dword ptr [0x10389ed0], eax */
  w32((uint32_t)(0x10389ed0), (EAX));
  /* 103841f4 mov dword ptr [ecx*4 + 0x10389f58], eax */
  w32((uint32_t)(ECX*4 + 0x10389f58), (EAX));
  /* 103841fb call 0x10381ba0 */
  push32(0x10384200u); f_10381ba0();
  /* 10384200 push 0x10389c10 */
  push32((uint32_t)(0x10389c10u));
  /* 10384205 push 0x10389c30 */
  push32((uint32_t)(0x10389c30u));
  /* 1038420a push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1038420c call 0x10381ba0 */
  push32(0x10384211u); f_10381ba0();
  /* 10384211 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10384214:;
  /* 10384214 cmp dword ptr [0x10389ed0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10389ed0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038421b jne 0x1038430c */
  if (!C.zf) goto L_1038430c;
  /* 10384221 mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 10384227 cmp dword ptr [edx*4 + 0x10389f58], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX*4 + 0x10389f58))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038422f jne 0x1038430c */
  if (!C.zf) goto L_1038430c;
  /* 10384235 push 7 */
  push32((uint32_t)(0x7u));
  /* 10384237 call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x1038423du);
  /* 1038423d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384240 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384242 je 0x1038430c */
  if (C.zf) goto L_1038430c;
  /* 10384248 mov ecx, dword ptr [0x10389d28] */
  ECX = (r32((uint32_t)(0x10389d28)));
  /* 1038424e push 0 */
  push32((uint32_t)(0x0u));
  /* 10384250 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10384251 push 0x10389c10 */
  push32((uint32_t)(0x10389c10u));
  /* 10384256 mov dword ptr [0x10389ed0], 2 */
  w32((uint32_t)(0x10389ed0), (0x2u));
  /* 10384260 mov dword ptr [0x10389d28], ecx */
  w32((uint32_t)(0x10389d28), (ECX));
  /* 10384266 call ebp */
  call_ind((uint32_t)(EBP), 0x10384268u);
  /* 10384268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038426a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1038426c push 0x10389f08 */
  push32((uint32_t)(0x10389f08u));
  /* 10384271 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384273 call esi */
  call_ind((uint32_t)(ESI), 0x10384275u);
  /* 10384275 push 2 */
  push32((uint32_t)(0x2u));
  /* 10384277 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 10384279 push 0x10389f00 */
  push32((uint32_t)(0x10389f00u));
  /* 1038427e push 1 */
  push32((uint32_t)(0x1u));
  /* 10384280 call esi */
  call_ind((uint32_t)(ESI), 0x10384282u);
  /* 10384282 push 2 */
  push32((uint32_t)(0x2u));
  /* 10384284 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10384289 push 0x10389ef8 */
  push32((uint32_t)(0x10389ef8u));
  /* 1038428e push 1 */
  push32((uint32_t)(0x1u));
  /* 10384290 call esi */
  call_ind((uint32_t)(ESI), 0x10384292u);
  /* 10384292 push 2 */
  push32((uint32_t)(0x2u));
  /* 10384294 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10384296 push 0x10389e38 */
  push32((uint32_t)(0x10389e38u));
  /* 1038429b push 1 */
  push32((uint32_t)(0x1u));
  /* 1038429d call esi */
  call_ind((uint32_t)(ESI), 0x1038429fu);
  /* 1038429f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103842a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103842a4 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 103842a9 push 0x10389e30 */
  push32((uint32_t)(0x10389e30u));
  /* 103842ae push 1 */
  push32((uint32_t)(0x1u));
  /* 103842b0 call esi */
  call_ind((uint32_t)(ESI), 0x103842b2u);
  /* 103842b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103842b4 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 103842b9 push 0x10389e28 */
  push32((uint32_t)(0x10389e28u));
  /* 103842be push 1 */
  push32((uint32_t)(0x1u));
  /* 103842c0 call esi */
  call_ind((uint32_t)(ESI), 0x103842c2u);
  /* 103842c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103842c4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103842c6 push 0x10389e20 */
  push32((uint32_t)(0x10389e20u));
  /* 103842cb push 1 */
  push32((uint32_t)(0x1u));
  /* 103842cd call esi */
  call_ind((uint32_t)(ESI), 0x103842cfu);
  /* 103842cf push 2 */
  push32((uint32_t)(0x2u));
  /* 103842d1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103842d6 push 0x10389e18 */
  push32((uint32_t)(0x10389e18u));
  /* 103842db push 1 */
  push32((uint32_t)(0x1u));
  /* 103842dd call esi */
  call_ind((uint32_t)(ESI), 0x103842dfu);
  /* 103842df add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103842e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103842e4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103842e6 push 0x10389e10 */
  push32((uint32_t)(0x10389e10u));
  /* 103842eb push 1 */
  push32((uint32_t)(0x1u));
  /* 103842ed call esi */
  call_ind((uint32_t)(ESI), 0x103842efu);
  /* 103842ef push 2 */
  push32((uint32_t)(0x2u));
  /* 103842f1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103842f3 push 0x10389e08 */
  push32((uint32_t)(0x10389e08u));
  /* 103842f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103842fa call esi */
  call_ind((uint32_t)(ESI), 0x103842fcu);
  /* 103842fc push 2 */
  push32((uint32_t)(0x2u));
  /* 103842fe push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10384300 push 0x10389fe8 */
  push32((uint32_t)(0x10389fe8u));
  /* 10384305 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384307 call esi */
  call_ind((uint32_t)(ESI), 0x10384309u);
  /* 10384309 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038430c:;
  /* 1038430c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1038430e call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10384314u);
  /* 10384314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384317 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384319 je 0x10384383 */
  if (C.zf) goto L_10384383;
  /* 1038431b push 0x1038a010 */
  push32((uint32_t)(0x1038a010u));
  /* 10384320 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10384326u);
  /* 10384326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038432b jne 0x10384383 */
  if (!C.zf) goto L_10384383;
  /* 1038432d push 1 */
  push32((uint32_t)(0x1u));
  /* 1038432f call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x10384335u);
  /* 10384335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384337 push 0x10389da0 */
  push32((uint32_t)(0x10389da0u));
  /* 1038433c push 1 */
  push32((uint32_t)(0x1u));
  /* 1038433e call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10384344u);
  /* 10384344 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384346 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384348 call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x1038434eu);
  /* 1038434e push 0 */
  push32((uint32_t)(0x0u));
  /* 10384350 push 0x1038a000 */
  push32((uint32_t)(0x1038a000u));
  /* 10384355 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384357 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x1038435du);
  /* 1038435d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038435f push 1 */
  push32((uint32_t)(0x1u));
  /* 10384361 call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x10384367u);
  /* 10384367 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384369 push 0x1038a008 */
  push32((uint32_t)(0x1038a008u));
  /* 1038436e push 1 */
  push32((uint32_t)(0x1u));
  /* 10384370 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10384376u);
  /* 10384376 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384378 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038437a call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x10384380u);
  /* 10384380 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10384383:;
  /* 10384383 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10384385 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038438bu);
  /* 1038438b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038438e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384390 je 0x1038441f */
  if (C.zf) goto L_1038441f;
  /* 10384396 push 0x10389da0 */
  push32((uint32_t)(0x10389da0u));
  /* 1038439b call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103843a1u);
  /* 103843a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103843a3 push 0x10389da0 */
  push32((uint32_t)(0x10389da0u));
  /* 103843a8 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103843ac call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x103843b2u);
  /* 103843b2 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103843b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103843b9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103843bb jne 0x1038441f */
  if (!C.zf) goto L_1038441f;
  /* 103843bd push 0x1038a000 */
  push32((uint32_t)(0x1038a000u));
  /* 103843c2 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103843c8u);
  /* 103843c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103843ca push 0x1038a000 */
  push32((uint32_t)(0x1038a000u));
  /* 103843cf mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103843d3 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x103843d9u);
  /* 103843d9 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103843dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103843e0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103843e2 jne 0x1038441f */
  if (!C.zf) goto L_1038441f;
  /* 103843e4 push 0x1038a008 */
  push32((uint32_t)(0x1038a008u));
  /* 103843e9 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103843efu);
  /* 103843ef push 0 */
  push32((uint32_t)(0x0u));
  /* 103843f1 push 0x1038a008 */
  push32((uint32_t)(0x1038a008u));
  /* 103843f6 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103843fa call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x10384400u);
  /* 10384400 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 10384404 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384407 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384409 jne 0x1038441f */
  if (!C.zf) goto L_1038441f;
  /* 1038440b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038440d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1038440f call edi */
  call_ind((uint32_t)(EDI), 0x10384411u);
  /* 10384411 push 0x10389634 */
  push32((uint32_t)(0x10389634u));
  /* 10384416 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x1038441cu);
  /* 1038441c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038441f:;
  /* 1038441f push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10384421 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10384427u);
  /* 10384427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038442a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038442c je 0x1038447d */
  if (C.zf) goto L_1038447d;
  /* 1038442e push 0x1038a028 */
  push32((uint32_t)(0x1038a028u));
  /* 10384433 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10384439u);
  /* 10384439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038443c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038443e jne 0x1038447d */
  if (!C.zf) goto L_1038447d;
  /* 10384440 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384442 call dword ptr [0x103880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880fc))), 0x10384448u);
  /* 10384448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038444a push 0x10389db8 */
  push32((uint32_t)(0x10389db8u));
  /* 1038444f push 1 */
  push32((uint32_t)(0x1u));
  /* 10384451 call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10384457u);
  /* 10384457 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384459 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038445b call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x10384461u);
  /* 10384461 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384463 push 0x1038a020 */
  push32((uint32_t)(0x1038a020u));
  /* 10384468 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038446a call dword ptr [0x1038810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038810c))), 0x10384470u);
  /* 10384470 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384472 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384474 call dword ptr [0x10388148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388148))), 0x1038447au);
  /* 1038447a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038447d:;
  /* 1038447d push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1038447f call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10384485u);
  /* 10384485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384488 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038448a je 0x103844ee */
  if (C.zf) goto L_103844ee;
  /* 1038448c push 0x10389db8 */
  push32((uint32_t)(0x10389db8u));
  /* 10384491 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10384497u);
  /* 10384497 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384499 push 0x10389db8 */
  push32((uint32_t)(0x10389db8u));
  /* 1038449e mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103844a2 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x103844a8u);
  /* 103844a8 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103844ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103844af cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103844b1 jne 0x103844ee */
  if (!C.zf) goto L_103844ee;
  /* 103844b3 push 0x1038a020 */
  push32((uint32_t)(0x1038a020u));
  /* 103844b8 call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x103844beu);
  /* 103844be push 0 */
  push32((uint32_t)(0x0u));
  /* 103844c0 push 0x1038a020 */
  push32((uint32_t)(0x1038a020u));
  /* 103844c5 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 103844c9 call dword ptr [0x103880f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880f0))), 0x103844cfu);
  /* 103844cf mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 103844d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103844d6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103844d8 jne 0x103844ee */
  if (!C.zf) goto L_103844ee;
  /* 103844da push 0 */
  push32((uint32_t)(0x0u));
  /* 103844dc push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103844de call edi */
  call_ind((uint32_t)(EDI), 0x103844e0u);
  /* 103844e0 push 0x1038962c */
  push32((uint32_t)(0x1038962cu));
  /* 103844e5 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103844ebu);
  /* 103844eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103844ee:;
  /* 103844ee mov eax, dword ptr [0x10389ed4] */
  EAX = (r32((uint32_t)(0x10389ed4)));
  /* 103844f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103844f5 jne 0x10384583 */
  if (!C.zf) goto L_10384583;
  /* 103844fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103844fd call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10384503u);
  /* 10384503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384506 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384508 jne 0x10384583 */
  if (!C.zf) goto L_10384583;
  /* 1038450a mov eax, dword ptr [0x10389d28] */
  EAX = (r32((uint32_t)(0x10389d28)));
  /* 1038450f mov ecx, dword ptr [eax*4 + 0x10389f58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10389f58)));
  /* 10384516 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10384518 jne 0x10384583 */
  if (!C.zf) goto L_10384583;
  /* 1038451a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038451c call ebx */
  call_ind((uint32_t)(EBX), 0x1038451eu);
  /* 1038451e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384523 jle 0x10384583 */
  if ((C.zf||C.sf!=C.of)) goto L_10384583;
  /* 10384525 mov ecx, dword ptr [0x10389d28] */
  ECX = (r32((uint32_t)(0x10389d28)));
  /* 1038452b push 0x10389c18 */
  push32((uint32_t)(0x10389c18u));
  /* 10384530 mov eax, 1 */
  EAX = (0x1u);
  /* 10384535 push 0x1038a070 */
  push32((uint32_t)(0x1038a070u));
  /* 1038453a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038453c mov dword ptr [0x10389ed4], eax */
  w32((uint32_t)(0x10389ed4), (EAX));
  /* 10384541 mov dword ptr [ecx*4 + 0x10389f58], eax */
  w32((uint32_t)(ECX*4 + 0x10389f58), (EAX));
  /* 10384548 call ebx */
  call_ind((uint32_t)(EBX), 0x1038454au);
  /* 1038454a lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 1038454d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384550 lea eax, [edx + edx + 0x2d] */
  EAX = ((uint32_t)(EDX + EDX*1 + 0x2d));
  /* 10384554 push eax */
  push32((uint32_t)(EAX));
  /* 10384555 call 0x10381ba0 */
  push32(0x1038455au); f_10381ba0();
  /* 1038455a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038455d push 0x10389c18 */
  push32((uint32_t)(0x10389c18u));
  /* 10384562 push 0x10389c30 */
  push32((uint32_t)(0x10389c30u));
  /* 10384567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384569 call ebx */
  call_ind((uint32_t)(EBX), 0x1038456bu);
  /* 1038456b lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 10384572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384575 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384577 add ecx, 0x19 */
  { uint32_t _a=(ECX),_b=(0x19u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1038457a push ecx */
  push32((uint32_t)(ECX));
  /* 1038457b call 0x10381ba0 */
  push32(0x10384580u); f_10381ba0();
  /* 10384580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10384583:;
  /* 10384583 cmp dword ptr [0x10389ed4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10389ed4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038458a jne 0x103845f5 */
  if (!C.zf) goto L_103845f5;
  /* 1038458c mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 10384592 cmp dword ptr [edx*4 + 0x10389f58], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX*4 + 0x10389f58))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038459a jne 0x103845f5 */
  if (!C.zf) goto L_103845f5;
  /* 1038459c push 7 */
  push32((uint32_t)(0x7u));
  /* 1038459e call dword ptr [0x10388114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388114))), 0x103845a4u);
  /* 103845a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103845a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103845a9 je 0x103845f5 */
  if (C.zf) goto L_103845f5;
  /* 103845ab mov edx, dword ptr [0x10389d28] */
  EDX = (r32((uint32_t)(0x10389d28)));
  /* 103845b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103845b3 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103845b4 push 0x10389c18 */
  push32((uint32_t)(0x10389c18u));
  /* 103845b9 mov dword ptr [0x10389ed4], 2 */
  w32((uint32_t)(0x10389ed4), (0x2u));
  /* 103845c3 mov dword ptr [0x10389d28], edx */
  w32((uint32_t)(0x10389d28), (EDX));
  /* 103845c9 call ebp */
  call_ind((uint32_t)(EBP), 0x103845cbu);
  /* 103845cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103845cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103845cf push 0x10389fa8 */
  push32((uint32_t)(0x10389fa8u));
  /* 103845d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103845d6 call esi */
  call_ind((uint32_t)(ESI), 0x103845d8u);
  /* 103845d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103845da push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103845dc push 0x10389ff0 */
  push32((uint32_t)(0x10389ff0u));
  /* 103845e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103845e3 call esi */
  call_ind((uint32_t)(ESI), 0x103845e5u);
  /* 103845e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103845e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103845e9 push 0x10389fd8 */
  push32((uint32_t)(0x10389fd8u));
  /* 103845ee push 1 */
  push32((uint32_t)(0x1u));
  /* 103845f0 call esi */
  call_ind((uint32_t)(ESI), 0x103845f2u);
  /* 103845f2 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103845f5:;
  /* 103845f5 mov esi, dword ptr [0x1038817c] */
  ESI = (r32((uint32_t)(0x1038817c)));
  /* 103845fb push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 103845fd call esi */
  call_ind((uint32_t)(ESI), 0x103845ffu);
  /* 103845ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384602 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384604 je 0x1038463d */
  if (C.zf) goto L_1038463d;
  /* 10384606 mov ebp, dword ptr [0x10388118] */
  EBP = (r32((uint32_t)(0x10388118)));
  /* 1038460c push 0x10389dd8 */
  push32((uint32_t)(0x10389dd8u));
  /* 10384611 call ebp */
  call_ind((uint32_t)(EBP), 0x10384613u);
  /* 10384613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384618 jne 0x10384643 */
  if (!C.zf) goto L_10384643;
  /* 1038461a push 0x1038a060 */
  push32((uint32_t)(0x1038a060u));
  /* 1038461f call ebp */
  call_ind((uint32_t)(EBP), 0x10384621u);
  /* 10384621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384626 jne 0x10384643 */
  if (!C.zf) goto L_10384643;
  /* 10384628 push eax */
  push32((uint32_t)(EAX));
  /* 10384629 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1038462b call edi */
  call_ind((uint32_t)(EDI), 0x1038462du);
  /* 1038462d push 0x10389624 */
  push32((uint32_t)(0x10389624u));
  /* 10384632 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10384638u);
  /* 10384638 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038463b jmp 0x10384643 */
  goto L_10384643;
L_1038463d:;
  /* 1038463d mov ebp, dword ptr [0x10388118] */
  EBP = (r32((uint32_t)(0x10388118)));
L_10384643:;
  /* 10384643 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10384645 call esi */
  call_ind((uint32_t)(ESI), 0x10384647u);
  /* 10384647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038464a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038464c je 0x1038467d */
  if (C.zf) goto L_1038467d;
  /* 1038464e push 0x10389de8 */
  push32((uint32_t)(0x10389de8u));
  /* 10384653 call ebp */
  call_ind((uint32_t)(EBP), 0x10384655u);
  /* 10384655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038465a jne 0x1038467d */
  if (!C.zf) goto L_1038467d;
  /* 1038465c push 0x1038a068 */
  push32((uint32_t)(0x1038a068u));
  /* 10384661 call ebp */
  call_ind((uint32_t)(EBP), 0x10384663u);
  /* 10384663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384668 jne 0x1038467d */
  if (!C.zf) goto L_1038467d;
  /* 1038466a push eax */
  push32((uint32_t)(EAX));
  /* 1038466b push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1038466d call edi */
  call_ind((uint32_t)(EDI), 0x1038466fu);
  /* 1038466f push 0x1038961c */
  push32((uint32_t)(0x1038961cu));
  /* 10384674 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x1038467au);
  /* 1038467a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038467d:;
  /* 1038467d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1038467f call esi */
  call_ind((uint32_t)(ESI), 0x10384681u);
  /* 10384681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384684 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384686 je 0x103846b8 */
  if (C.zf) goto L_103846b8;
  /* 10384688 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1038468a call esi */
  call_ind((uint32_t)(ESI), 0x1038468cu);
  /* 1038468c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038468f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384691 jne 0x103846b8 */
  if (!C.zf) goto L_103846b8;
  /* 10384693 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10384695 call esi */
  call_ind((uint32_t)(ESI), 0x10384697u);
  /* 10384697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038469a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038469c jne 0x103846b8 */
  if (!C.zf) goto L_103846b8;
  /* 1038469e push 0 */
  push32((uint32_t)(0x0u));
  /* 103846a0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 103846a2 call edi */
  call_ind((uint32_t)(EDI), 0x103846a4u);
  /* 103846a4 push 0x10389614 */
  push32((uint32_t)(0x10389614u));
  /* 103846a9 call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x103846afu);
  /* 103846af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103846b2 call dword ptr [0x1038814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038814c))), 0x103846b8u);
L_103846b8:;
  /* 103846b8 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103846ba call esi */
  call_ind((uint32_t)(ESI), 0x103846bcu);
  /* 103846bc mov esi, dword ptr [0x10388144] */
  ESI = (r32((uint32_t)(0x10388144)));
  /* 103846c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103846c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103846c7 je 0x1038476e */
  if (C.zf) goto L_1038476e;
  /* 103846cd push 0x10389db0 */
  push32((uint32_t)(0x10389db0u));
  /* 103846d2 call ebp */
  call_ind((uint32_t)(EBP), 0x103846d4u);
  /* 103846d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103846d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103846d9 jne 0x1038476e */
  if (!C.zf) goto L_1038476e;
  /* 103846df push eax */
  push32((uint32_t)(EAX));
  /* 103846e0 push 0x10389ff8 */
  push32((uint32_t)(0x10389ff8u));
  /* 103846e5 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x103846ebu);
  /* 103846eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103846ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103846f0 jle 0x1038476e */
  if ((C.zf||C.sf!=C.of)) goto L_1038476e;
  /* 103846f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103846f4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103846f6 call edi */
  call_ind((uint32_t)(EDI), 0x103846f8u);
  /* 103846f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103846fa call ebx */
  call_ind((uint32_t)(EBX), 0x103846fcu);
  /* 103846fc mov ecx, 6 */
  ECX = (0x6u);
  /* 10384701 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384703 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10384706 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10384709 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1038470b push eax */
  push32((uint32_t)(EAX));
  /* 1038470c push 0x1038960c */
  push32((uint32_t)(0x1038960cu));
  /* 10384711 call esi */
  call_ind((uint32_t)(ESI), 0x10384713u);
  /* 10384713 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384715 call ebx */
  call_ind((uint32_t)(EBX), 0x10384717u);
  /* 10384717 mov ecx, 6 */
  ECX = (0x6u);
  /* 1038471c mov ebp, dword ptr [0x10388100] */
  EBP = (r32((uint32_t)(0x10388100)));
  /* 10384722 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384724 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10384727 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1038472a shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1038472c push ecx */
  push32((uint32_t)(ECX));
  /* 1038472d push 1 */
  push32((uint32_t)(0x1u));
  /* 1038472f push 0 */
  push32((uint32_t)(0x0u));
  /* 10384731 call ebp */
  call_ind((uint32_t)(EBP), 0x10384733u);
  /* 10384733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384735 call ebx */
  call_ind((uint32_t)(EBX), 0x10384737u);
  /* 10384737 mov ecx, 7 */
  ECX = (0x7u);
  /* 1038473c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038473e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10384741 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10384744 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10384747 push edx */
  push32((uint32_t)(EDX));
  /* 10384748 push 5 */
  push32((uint32_t)(0x5u));
  /* 1038474a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038474c call ebp */
  call_ind((uint32_t)(EBP), 0x1038474eu);
  /* 1038474e push 0 */
  push32((uint32_t)(0x0u));
  /* 10384750 call ebx */
  call_ind((uint32_t)(EBX), 0x10384752u);
  /* 10384752 mov ecx, 7 */
  ECX = (0x7u);
  /* 10384757 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384759 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1038475c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1038475f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10384762 push eax */
  push32((uint32_t)(EAX));
  /* 10384763 push 4 */
  push32((uint32_t)(0x4u));
  /* 10384765 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384767 call ebp */
  call_ind((uint32_t)(EBP), 0x10384769u);
  /* 10384769 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038476c jmp 0x10384774 */
  goto L_10384774;
L_1038476e:;
  /* 1038476e mov ebp, dword ptr [0x10388100] */
  EBP = (r32((uint32_t)(0x10388100)));
L_10384774:;
  /* 10384774 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10384776 call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x1038477cu);
  /* 1038477c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038477f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384781 je 0x10384824 */
  if (C.zf) goto L_10384824;
  /* 10384787 push 0x10389dc0 */
  push32((uint32_t)(0x10389dc0u));
  /* 1038478c call dword ptr [0x10388118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388118))), 0x10384792u);
  /* 10384792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384797 jne 0x10384824 */
  if (!C.zf) goto L_10384824;
  /* 1038479d push eax */
  push32((uint32_t)(EAX));
  /* 1038479e push 0x10389fb8 */
  push32((uint32_t)(0x10389fb8u));
  /* 103847a3 call dword ptr [0x10388134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388134))), 0x103847a9u);
  /* 103847a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103847ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103847ae jle 0x10384824 */
  if ((C.zf||C.sf!=C.of)) goto L_10384824;
  /* 103847b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103847b2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103847b4 call edi */
  call_ind((uint32_t)(EDI), 0x103847b6u);
  /* 103847b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103847b8 call ebx */
  call_ind((uint32_t)(EBX), 0x103847bau);
  /* 103847ba mov ecx, 0xc */
  ECX = (0xcu);
  /* 103847bf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103847c1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103847c4 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103847c7 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103847c9 push ecx */
  push32((uint32_t)(ECX));
  /* 103847ca push 0x10389604 */
  push32((uint32_t)(0x10389604u));
  /* 103847cf call esi */
  call_ind((uint32_t)(ESI), 0x103847d1u);
  /* 103847d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103847d3 call ebx */
  call_ind((uint32_t)(EBX), 0x103847d5u);
  /* 103847d5 mov ecx, 0xc */
  ECX = (0xcu);
  /* 103847da sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103847dc lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103847df lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 103847e2 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 103847e4 push edx */
  push32((uint32_t)(EDX));
  /* 103847e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103847e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103847e9 call ebp */
  call_ind((uint32_t)(EBP), 0x103847ebu);
  /* 103847eb push 0 */
  push32((uint32_t)(0x0u));
  /* 103847ed call ebx */
  call_ind((uint32_t)(EBX), 0x103847efu);
  /* 103847ef mov ecx, 0xa */
  ECX = (0xau);
  /* 103847f4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103847f6 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103847f9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103847fc shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103847ff push eax */
  push32((uint32_t)(EAX));
  /* 10384800 push 5 */
  push32((uint32_t)(0x5u));
  /* 10384802 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384804 call ebp */
  call_ind((uint32_t)(EBP), 0x10384806u);
  /* 10384806 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384808 call ebx */
  call_ind((uint32_t)(EBX), 0x1038480au);
  /* 1038480a mov ecx, 0xa */
  ECX = (0xau);
  /* 1038480f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384811 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10384814 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10384817 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1038481a push ecx */
  push32((uint32_t)(ECX));
  /* 1038481b push 4 */
  push32((uint32_t)(0x4u));
  /* 1038481d push 0 */
  push32((uint32_t)(0x0u));
  /* 1038481f call ebp */
  call_ind((uint32_t)(EBP), 0x10384821u);
  /* 10384821 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10384824:;
  /* 10384824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384826 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384828 call dword ptr [0x10388140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388140))), 0x1038482eu);
  /* 1038482e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384831 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384836 jl 0x1038487d */
  if ((C.sf!=C.of)) goto L_1038487d;
  /* 10384838 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038483a call ebx */
  call_ind((uint32_t)(EBX), 0x1038483cu);
  /* 1038483c mov ecx, 0xa */
  ECX = (0xau);
  /* 10384841 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384843 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10384846 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 10384849 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1038484c push edx */
  push32((uint32_t)(EDX));
  /* 1038484d push 0x103895fc */
  push32((uint32_t)(0x103895fcu));
  /* 10384852 call esi */
  call_ind((uint32_t)(ESI), 0x10384854u);
  /* 10384854 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10384859 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038485b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038485d call ebp */
  call_ind((uint32_t)(EBP), 0x1038485fu);
  /* 1038485f push 0 */
  push32((uint32_t)(0x0u));
  /* 10384861 call ebx */
  call_ind((uint32_t)(EBX), 0x10384863u);
  /* 10384863 mov ecx, 0xa */
  ECX = (0xau);
  /* 10384868 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038486a lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1038486d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10384870 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10384873 push eax */
  push32((uint32_t)(EAX));
  /* 10384874 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384876 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384878 call ebp */
  call_ind((uint32_t)(EBP), 0x1038487au);
  /* 1038487a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038487d:;
  /* 1038487d push 2 */
  push32((uint32_t)(0x2u));
  /* 1038487f push 0 */
  push32((uint32_t)(0x0u));
  /* 10384881 call dword ptr [0x10388140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388140))), 0x10384887u);
  /* 10384887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038488a cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038488f jl 0x1038490c */
  if ((C.sf!=C.of)) goto L_1038490c;
  /* 10384891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384893 call ebx */
  call_ind((uint32_t)(EBX), 0x10384895u);
  /* 10384895 mov ecx, 0xa */
  ECX = (0xau);
  /* 1038489a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1038489d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038489f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103848a2 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103848a5 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103848a8 push ecx */
  push32((uint32_t)(ECX));
  /* 103848a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103848ab call ebx */
  call_ind((uint32_t)(EBX), 0x103848adu);
  /* 103848ad mov ecx, 0xa */
  ECX = (0xau);
  /* 103848b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103848b5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103848b7 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103848ba lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 103848bd shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 103848c0 push edx */
  push32((uint32_t)(EDX));
  /* 103848c1 push 0x103895f4 */
  push32((uint32_t)(0x103895f4u));
  /* 103848c6 call esi */
  call_ind((uint32_t)(ESI), 0x103848c8u);
  /* 103848c8 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 103848cd push 2 */
  push32((uint32_t)(0x2u));
  /* 103848cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103848d1 call ebp */
  call_ind((uint32_t)(EBP), 0x103848d3u);
  /* 103848d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103848d5 call ebx */
  call_ind((uint32_t)(EBX), 0x103848d7u);
  /* 103848d7 mov ecx, 0xa */
  ECX = (0xau);
  /* 103848dc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103848de lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103848e1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103848e4 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103848e7 push eax */
  push32((uint32_t)(EAX));
  /* 103848e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 103848ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103848ec call ebp */
  call_ind((uint32_t)(EBP), 0x103848eeu);
  /* 103848ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103848f0 call ebx */
  call_ind((uint32_t)(EBX), 0x103848f2u);
  /* 103848f2 mov ecx, 0xa */
  ECX = (0xau);
  /* 103848f7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103848f9 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103848fc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103848ff shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10384902 push ecx */
  push32((uint32_t)(ECX));
  /* 10384903 push 5 */
  push32((uint32_t)(0x5u));
  /* 10384905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384907 call ebp */
  call_ind((uint32_t)(EBP), 0x10384909u);
  /* 10384909 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038490c:;
  /* 1038490c push 0x21 */
  push32((uint32_t)(0x21u));
  /* 1038490e call dword ptr [0x1038817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038817c))), 0x10384914u);
  /* 10384914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384917 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384919 je 0x103849a1 */
  if (C.zf) goto L_103849a1;
  /* 1038491f call dword ptr [0x10388128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388128))), 0x10384925u);
  /* 10384925 cmp eax, 0x5ba0 */
  { uint32_t _a=(EAX),_b=(0x5ba0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038492a jle 0x103849a1 */
  if ((C.zf||C.sf!=C.of)) goto L_103849a1;
  /* 1038492c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038492e push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10384930 call edi */
  call_ind((uint32_t)(EDI), 0x10384932u);
  /* 10384932 push 0x103895ec */
  push32((uint32_t)(0x103895ecu));
  /* 10384937 call dword ptr [0x10388154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388154))), 0x1038493du);
  /* 1038493d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384940 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10384942 je 0x103849a1 */
  if (C.zf) goto L_103849a1;
  /* 10384944 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384946 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384948 call dword ptr [0x10388140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388140))), 0x1038494eu);
  /* 1038494e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384951 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384956 jge 0x1038496c */
  if ((C.sf==C.of)) goto L_1038496c;
  /* 10384958 push 0x103895e0 */
  push32((uint32_t)(0x103895e0u));
  /* 1038495d call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10384963u);
  /* 10384963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384966 pop edi */
  EDI = (pop32());
  /* 10384967 pop esi */
  ESI = (pop32());
  /* 10384968 pop ebp */
  EBP = (pop32());
  /* 10384969 pop ebx */
  EBX = (pop32());
  /* 1038496a pop ecx */
  ECX = (pop32());
  /* 1038496b ret  */
  ESPCHK(0x10381bc0u, _esp0);
  ESP += 4; return;
L_1038496c:;
  /* 1038496c push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 10384971 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384975 call ebp */
  call_ind((uint32_t)(EBP), 0x10384977u);
  /* 10384977 push 0x103895d4 */
  push32((uint32_t)(0x103895d4u));
  /* 1038497c call dword ptr [0x103880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880c8))), 0x10384982u);
  /* 10384982 mov esi, dword ptr [0x10388120] */
  ESI = (r32((uint32_t)(0x10388120)));
  /* 10384988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1038498a push 4 */
  push32((uint32_t)(0x4u));
  /* 1038498c push 0x10389fc8 */
  push32((uint32_t)(0x10389fc8u));
  /* 10384991 call esi */
  call_ind((uint32_t)(ESI), 0x10384993u);
  /* 10384993 push 2 */
  push32((uint32_t)(0x2u));
  /* 10384995 push 4 */
  push32((uint32_t)(0x4u));
  /* 10384997 push 0x10389fd0 */
  push32((uint32_t)(0x10389fd0u));
  /* 1038499c call esi */
  call_ind((uint32_t)(ESI), 0x1038499eu);
  /* 1038499e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103849a1:;
  /* 103849a1 pop edi */
  EDI = (pop32());
  /* 103849a2 pop esi */
  ESI = (pop32());
  /* 103849a3 pop ebp */
  EBP = (pop32());
  /* 103849a4 pop ebx */
  EBX = (pop32());
  /* 103849a5 pop ecx */
  ECX = (pop32());
  /* 103849a6 ret  */
  ESPCHK(0x10381bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049b0 @ 0x103849b0 (217 bytes, 57 insns) */
void f_103849b0(void) {
  FTRACE(0x103849b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103849b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103849b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103849b7 jne 0x10384a45 */
  if (!C.zf) goto L_10384a45;
  /* 103849bd call dword ptr [0x103880a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880a8))), 0x103849c3u);
  /* 103849c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103849c5 mov dword ptr [0x1038a0ec], eax */
  w32((uint32_t)(0x1038a0ec), (EAX));
  /* 103849ca call 0x103853e4 */
  push32(0x103849cfu); f_103853e4();
  /* 103849cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103849d1 pop ecx */
  ECX = (pop32());
  /* 103849d2 je 0x10384a10 */
  if (C.zf) goto L_10384a10;
  /* 103849d4 mov eax, dword ptr [0x1038a0ec] */
  EAX = (r32((uint32_t)(0x1038a0ec)));
  /* 103849d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103849db mov cl, byte ptr [0x1038a0ed] */
  CL = (r8((uint32_t)(0x1038a0ed)));
  /* 103849e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103849e6 shr dword ptr [0x1038a0ec], 0x10 */
  w32((uint32_t)(0x1038a0ec), (sh_shr((uint32_t)(r32((uint32_t)(0x1038a0ec))), (0x10u)&0x1f, 32)));
  /* 103849ed mov dword ptr [0x1038a0f4], eax */
  w32((uint32_t)(0x1038a0f4), (EAX));
  /* 103849f2 mov dword ptr [0x1038a0f8], ecx */
  w32((uint32_t)(0x1038a0f8), (ECX));
  /* 103849f8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103849fb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103849fd mov dword ptr [0x1038a0f0], eax */
  w32((uint32_t)(0x1038a0f0), (EAX));
  /* 10384a02 call 0x10384c77 */
  push32(0x10384a07u); f_10384c77();
  /* 10384a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384a09 jne 0x10384a14 */
  if (!C.zf) goto L_10384a14;
  /* 10384a0b call 0x10385420 */
  push32(0x10384a10u); f_10385420();
L_10384a10:;
  /* 10384a10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10384a12 jmp 0x10384a86 */
  goto L_10384a86;
L_10384a14:;
  /* 10384a14 call dword ptr [0x103880a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880a0))), 0x10384a1au);
  /* 10384a1a mov dword ptr [0x1038a658], eax */
  w32((uint32_t)(0x1038a658), (EAX));
  /* 10384a1f call 0x103852b2 */
  push32(0x10384a24u); f_103852b2();
  /* 10384a24 mov dword ptr [0x1038a0d8], eax */
  w32((uint32_t)(0x1038a0d8), (EAX));
  /* 10384a29 call 0x10384d9c */
  push32(0x10384a2eu); f_10384d9c();
  /* 10384a2e call 0x10385065 */
  push32(0x10384a33u); f_10385065();
  /* 10384a33 call 0x10384fac */
  push32(0x10384a38u); f_10384fac();
  /* 10384a38 call 0x10384b59 */
  push32(0x10384a3du); f_10384b59();
  /* 10384a3d inc dword ptr [0x1038a0d4] */
  { uint32_t _r=(r32((uint32_t)(0x1038a0d4)))+1; w32((uint32_t)(0x1038a0d4), (_r)); fl_inc(_r,32); }
  /* 10384a43 jmp 0x10384a83 */
  goto L_10384a83;
L_10384a45:;
  /* 10384a45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10384a47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384a49 jne 0x10384a77 */
  if (!C.zf) goto L_10384a77;
  /* 10384a4b cmp dword ptr [0x1038a0d4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1038a0d4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384a51 jle 0x10384a10 */
  if ((C.zf||C.sf!=C.of)) goto L_10384a10;
  /* 10384a53 dec dword ptr [0x1038a0d4] */
  { uint32_t _r=(r32((uint32_t)(0x1038a0d4)))-1; w32((uint32_t)(0x1038a0d4), (_r)); fl_dec(_r,32); }
  /* 10384a59 cmp dword ptr [0x1038a124], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1038a124))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384a5f jne 0x10384a66 */
  if (!C.zf) goto L_10384a66;
  /* 10384a61 call 0x10384b97 */
  push32(0x10384a66u); f_10384b97();
L_10384a66:;
  /* 10384a66 call 0x10384f58 */
  push32(0x10384a6bu); f_10384f58();
  /* 10384a6b call 0x10384ccb */
  push32(0x10384a70u); f_10384ccb();
  /* 10384a70 call 0x10385420 */
  push32(0x10384a75u); f_10385420();
  /* 10384a75 jmp 0x10384a83 */
  goto L_10384a83;
L_10384a77:;
  /* 10384a77 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384a7a jne 0x10384a83 */
  if (!C.zf) goto L_10384a83;
  /* 10384a7c push ecx */
  push32((uint32_t)(ECX));
  /* 10384a7d call 0x10384cfc */
  push32(0x10384a82u); f_10384cfc();
  /* 10384a82 pop ecx */
  ECX = (pop32());
L_10384a83:;
  /* 10384a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384a85 pop eax */
  EAX = (pop32());
L_10384a86:;
  /* 10384a86 ret 0xc */
  ESPCHK(0x103849b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10384a89 (157 bytes, 73 insns) */
void f_10384a89(void) {
  FTRACE(0x10384a89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384a89 push ebp */
  push32((uint32_t)(EBP));
  /* 10384a8a mov ebp, esp */
  EBP = (ESP);
  /* 10384a8c push ebx */
  push32((uint32_t)(EBX));
  /* 10384a8d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10384a90 push esi */
  push32((uint32_t)(ESI));
  /* 10384a91 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10384a94 push edi */
  push32((uint32_t)(EDI));
  /* 10384a95 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10384a98 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10384a9a jne 0x10384aa5 */
  if (!C.zf) goto L_10384aa5;
  /* 10384a9c cmp dword ptr [0x1038a0d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1038a0d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384aa3 jmp 0x10384acb */
  goto L_10384acb;
L_10384aa5:;
  /* 10384aa5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384aa8 je 0x10384aaf */
  if (C.zf) goto L_10384aaf;
  /* 10384aaa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384aad jne 0x10384ad1 */
  if (!C.zf) goto L_10384ad1;
L_10384aaf:;
  /* 10384aaf mov eax, dword ptr [0x1038a65c] */
  EAX = (r32((uint32_t)(0x1038a65c)));
  /* 10384ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384ab6 je 0x10384ac1 */
  if (C.zf) goto L_10384ac1;
  /* 10384ab8 push edi */
  push32((uint32_t)(EDI));
  /* 10384ab9 push esi */
  push32((uint32_t)(ESI));
  /* 10384aba push ebx */
  push32((uint32_t)(EBX));
  /* 10384abb call eax */
  call_ind((uint32_t)(EAX), 0x10384abdu);
  /* 10384abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384abf je 0x10384acd */
  if (C.zf) goto L_10384acd;
L_10384ac1:;
  /* 10384ac1 push edi */
  push32((uint32_t)(EDI));
  /* 10384ac2 push esi */
  push32((uint32_t)(ESI));
  /* 10384ac3 push ebx */
  push32((uint32_t)(EBX));
  /* 10384ac4 call 0x103849b0 */
  push32(0x10384ac9u); f_103849b0();
  /* 10384ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10384acb:;
  /* 10384acb jne 0x10384ad1 */
  if (!C.zf) goto L_10384ad1;
L_10384acd:;
  /* 10384acd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10384acf jmp 0x10384b1f */
  goto L_10384b1f;
L_10384ad1:;
  /* 10384ad1 push edi */
  push32((uint32_t)(EDI));
  /* 10384ad2 push esi */
  push32((uint32_t)(ESI));
  /* 10384ad3 push ebx */
  push32((uint32_t)(EBX));
  /* 10384ad4 call 0x10381000 */
  push32(0x10384ad9u); f_10381000();
  /* 10384ad9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384adc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10384adf jne 0x10384aed */
  if (!C.zf) goto L_10384aed;
  /* 10384ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384ae3 jne 0x10384b1c */
  if (!C.zf) goto L_10384b1c;
  /* 10384ae5 push edi */
  push32((uint32_t)(EDI));
  /* 10384ae6 push eax */
  push32((uint32_t)(EAX));
  /* 10384ae7 push ebx */
  push32((uint32_t)(EBX));
  /* 10384ae8 call 0x103849b0 */
  push32(0x10384aedu); f_103849b0();
L_10384aed:;
  /* 10384aed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10384aef je 0x10384af6 */
  if (C.zf) goto L_10384af6;
  /* 10384af1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384af4 jne 0x10384b1c */
  if (!C.zf) goto L_10384b1c;
L_10384af6:;
  /* 10384af6 push edi */
  push32((uint32_t)(EDI));
  /* 10384af7 push esi */
  push32((uint32_t)(ESI));
  /* 10384af8 push ebx */
  push32((uint32_t)(EBX));
  /* 10384af9 call 0x103849b0 */
  push32(0x10384afeu); f_103849b0();
  /* 10384afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384b00 jne 0x10384b05 */
  if (!C.zf) goto L_10384b05;
  /* 10384b02 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10384b05:;
  /* 10384b05 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384b09 je 0x10384b1c */
  if (C.zf) goto L_10384b1c;
  /* 10384b0b mov eax, dword ptr [0x1038a65c] */
  EAX = (r32((uint32_t)(0x1038a65c)));
  /* 10384b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384b12 je 0x10384b1c */
  if (C.zf) goto L_10384b1c;
  /* 10384b14 push edi */
  push32((uint32_t)(EDI));
  /* 10384b15 push esi */
  push32((uint32_t)(ESI));
  /* 10384b16 push ebx */
  push32((uint32_t)(EBX));
  /* 10384b17 call eax */
  call_ind((uint32_t)(EAX), 0x10384b19u);
  /* 10384b19 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10384b1c:;
  /* 10384b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10384b1f:;
  /* 10384b1f pop edi */
  EDI = (pop32());
  /* 10384b20 pop esi */
  ESI = (pop32());
  /* 10384b21 pop ebx */
  EBX = (pop32());
  /* 10384b22 pop ebp */
  EBP = (pop32());
  /* 10384b23 ret 0xc */
  ESPCHK(0x10384a89u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10384b26 (48 bytes, 15 insns) */
void f_10384b26(void) {
  FTRACE(0x10384b26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384b26 mov eax, dword ptr [0x1038a0e0] */
  EAX = (r32((uint32_t)(0x1038a0e0)));
  /* 10384b2b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384b2e je 0x10384b3d */
  if (C.zf) goto L_10384b3d;
  /* 10384b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384b32 jne 0x10384b42 */
  if (!C.zf) goto L_10384b42;
  /* 10384b34 cmp dword ptr [0x1038a0e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1038a0e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384b3b jne 0x10384b42 */
  if (!C.zf) goto L_10384b42;
L_10384b3d:;
  /* 10384b3d call 0x10385495 */
  push32(0x10384b42u); f_10385495();
L_10384b42:;
  /* 10384b42 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10384b46 call 0x103854ce */
  push32(0x10384b4bu); f_103854ce();
  /* 10384b4b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10384b50 call dword ptr [0x1038974c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038974c))), 0x10384b56u);
  /* 10384b56 pop ecx */
  ECX = (pop32());
  /* 10384b57 pop ecx */
  ECX = (pop32());
  /* 10384b58 ret  */
  ESPCHK(0x10384b26u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b59 @ 0x10384b59 (45 bytes, 12 insns) */
void f_10384b59(void) {
  FTRACE(0x10384b59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384b59 mov eax, dword ptr [0x1038a654] */
  EAX = (r32((uint32_t)(0x1038a654)));
  /* 10384b5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384b60 je 0x10384b64 */
  if (C.zf) goto L_10384b64;
  /* 10384b62 call eax */
  call_ind((uint32_t)(EAX), 0x10384b64u);
L_10384b64:;
  /* 10384b64 push 0x10389010 */
  push32((uint32_t)(0x10389010u));
  /* 10384b69 push 0x10389008 */
  push32((uint32_t)(0x10389008u));
  /* 10384b6e call 0x10384c5d */
  push32(0x10384b73u); f_10384c5d();
  /* 10384b73 push 0x10389004 */
  push32((uint32_t)(0x10389004u));
  /* 10384b78 push 0x10389000 */
  push32((uint32_t)(0x10389000u));
  /* 10384b7d call 0x10384c5d */
  push32(0x10384b82u); f_10384c5d();
  /* 10384b82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384b85 ret  */
  ESPCHK(0x10384b59u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10384b86 (17 bytes, 6 insns) */
void f_10384b86(void) {
  FTRACE(0x10384b86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384b88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384b8a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10384b8e call 0x10384ba6 */
  push32(0x10384b93u); f_10384ba6();
  /* 10384b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384b96 ret  */
  ESPCHK(0x10384b86u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b97 @ 0x10384b97 (15 bytes, 6 insns) */
void f_10384b97(void) {
  FTRACE(0x10384b97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384b97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10384b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10384b9d call 0x10384ba6 */
  push32(0x10384ba2u); f_10384ba6();
  /* 10384ba2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10384ba5 ret  */
  ESPCHK(0x10384b97u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba6 @ 0x10384ba6 (163 bytes, 53 insns) */
void f_10384ba6(void) {
  FTRACE(0x10384ba6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384ba6 push edi */
  push32((uint32_t)(EDI));
  /* 10384ba7 call 0x10384c4b */
  push32(0x10384bacu); f_10384c4b();
  /* 10384bac push 1 */
  push32((uint32_t)(0x1u));
  /* 10384bae pop edi */
  EDI = (pop32());
  /* 10384baf cmp dword ptr [0x1038a128], edi */
  { uint32_t _a=(r32((uint32_t)(0x1038a128))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384bb5 jne 0x10384bc8 */
  if (!C.zf) goto L_10384bc8;
  /* 10384bb7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10384bbb call dword ptr [0x103880a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103880a4))), 0x10384bc1u);
  /* 10384bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10384bc2 call dword ptr [0x10388098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388098))), 0x10384bc8u);
L_10384bc8:;
  /* 10384bc8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384bcd push ebx */
  push32((uint32_t)(EBX));
  /* 10384bce mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10384bd2 mov dword ptr [0x1038a124], edi */
  w32((uint32_t)(0x1038a124), (EDI));
  /* 10384bd8 mov byte ptr [0x1038a120], bl */
  w8((uint32_t)(0x1038a120), (BL));
  /* 10384bde jne 0x10384c1c */
  if (!C.zf) goto L_10384c1c;
  /* 10384be0 mov eax, dword ptr [0x1038a650] */
  EAX = (r32((uint32_t)(0x1038a650)));
  /* 10384be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384be7 je 0x10384c0b */
  if (C.zf) goto L_10384c0b;
  /* 10384be9 mov ecx, dword ptr [0x1038a64c] */
  ECX = (r32((uint32_t)(0x1038a64c)));
  /* 10384bef push esi */
  push32((uint32_t)(ESI));
  /* 10384bf0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10384bf3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384bf5 jb 0x10384c0a */
  if (C.cf) goto L_10384c0a;
L_10384bf7:;
  /* 10384bf7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10384bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384bfb je 0x10384bff */
  if (C.zf) goto L_10384bff;
  /* 10384bfd call eax */
  call_ind((uint32_t)(EAX), 0x10384bffu);
L_10384bff:;
  /* 10384bff sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384c02 cmp esi, dword ptr [0x1038a650] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1038a650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384c08 jae 0x10384bf7 */
  if (!C.cf) goto L_10384bf7;
L_10384c0a:;
  /* 10384c0a pop esi */
  ESI = (pop32());
L_10384c0b:;
  /* 10384c0b push 0x10389018 */
  push32((uint32_t)(0x10389018u));
  /* 10384c10 push 0x10389014 */
  push32((uint32_t)(0x10389014u));
  /* 10384c15 call 0x10384c5d */
  push32(0x10384c1au); f_10384c5d();
  /* 10384c1a pop ecx */
  ECX = (pop32());
  /* 10384c1b pop ecx */
  ECX = (pop32());
L_10384c1c:;
  /* 10384c1c push 0x10389020 */
  push32((uint32_t)(0x10389020u));
  /* 10384c21 push 0x1038901c */
  push32((uint32_t)(0x1038901cu));
  /* 10384c26 call 0x10384c5d */
  push32(0x10384c2bu); f_10384c5d();
  /* 10384c2b pop ecx */
  ECX = (pop32());
  /* 10384c2c pop ecx */
  ECX = (pop32());
  /* 10384c2d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10384c2f pop ebx */
  EBX = (pop32());
  /* 10384c30 je 0x10384c39 */
  if (C.zf) goto L_10384c39;
  /* 10384c32 call 0x10384c54 */
  push32(0x10384c37u); f_10384c54();
  /* 10384c37 pop edi */
  EDI = (pop32());
  /* 10384c38 ret  */
  ESPCHK(0x10384ba6u, _esp0);
  ESP += 4; return;
L_10384c39:;
  /* 10384c39 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10384c3d mov dword ptr [0x1038a128], edi */
  w32((uint32_t)(0x1038a128), (EDI));
  /* 10384c43 call dword ptr [0x1038809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038809c))), 0x10384c49u);
  /* 10384c49 pop edi */
  EDI = (pop32());
  /* 10384c4a ret  */
  ESPCHK(0x10384ba6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c4b @ 0x10384c4b (9 bytes, 4 insns) */
void f_10384c4b(void) {
  FTRACE(0x10384c4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384c4b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10384c4d call 0x103856b6 */
  push32(0x10384c52u); f_103856b6();
  /* 10384c52 pop ecx */
  ECX = (pop32());
  /* 10384c53 ret  */
  ESPCHK(0x10384c4bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c54 @ 0x10384c54 (9 bytes, 4 insns) */
void f_10384c54(void) {
  FTRACE(0x10384c54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384c54 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10384c56 call 0x10385717 */
  push32(0x10384c5bu); f_10385717();
  /* 10384c5b pop ecx */
  ECX = (pop32());
  /* 10384c5c ret  */
  ESPCHK(0x10384c54u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c5d @ 0x10384c5d (26 bytes, 12 insns) */
void f_10384c5d(void) {
  FTRACE(0x10384c5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384c5d push esi */
  push32((uint32_t)(ESI));
  /* 10384c5e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10384c62:;
  /* 10384c62 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384c66 jae 0x10384c75 */
  if (!C.cf) goto L_10384c75;
  /* 10384c68 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10384c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384c6c je 0x10384c70 */
  if (C.zf) goto L_10384c70;
  /* 10384c6e call eax */
  call_ind((uint32_t)(EAX), 0x10384c70u);
L_10384c70:;
  /* 10384c70 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10384c73 jmp 0x10384c62 */
  goto L_10384c62;
L_10384c75:;
  /* 10384c75 pop esi */
  ESI = (pop32());
  /* 10384c76 ret  */
  ESPCHK(0x10384c5du, _esp0);
  ESP += 4; return;
}

/* FUN_10004c77 @ 0x10384c77 (84 bytes, 32 insns) */
void f_10384c77(void) {
  FTRACE(0x10384c77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384c77 push esi */
  push32((uint32_t)(ESI));
  /* 10384c78 call 0x10385621 */
  push32(0x10384c7du); f_10385621();
  /* 10384c7d call dword ptr [0x10388094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388094))), 0x10384c83u);
  /* 10384c83 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384c86 mov dword ptr [0x10389750], eax */
  w32((uint32_t)(0x10389750), (EAX));
  /* 10384c8b je 0x10384cc7 */
  if (C.zf) goto L_10384cc7;
  /* 10384c8d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10384c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10384c91 call 0x1038572c */
  push32(0x10384c96u); f_1038572c();
  /* 10384c96 mov esi, eax */
  ESI = (EAX);
  /* 10384c98 pop ecx */
  ECX = (pop32());
  /* 10384c99 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10384c9b pop ecx */
  ECX = (pop32());
  /* 10384c9c je 0x10384cc7 */
  if (C.zf) goto L_10384cc7;
  /* 10384c9e push esi */
  push32((uint32_t)(ESI));
  /* 10384c9f push dword ptr [0x10389750] */
  push32((uint32_t)(r32((uint32_t)(0x10389750))));
  /* 10384ca5 call dword ptr [0x1038808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038808c))), 0x10384cabu);
  /* 10384cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384cad je 0x10384cc7 */
  if (C.zf) goto L_10384cc7;
  /* 10384caf push esi */
  push32((uint32_t)(ESI));
  /* 10384cb0 call 0x10384ce9 */
  push32(0x10384cb5u); f_10384ce9();
  /* 10384cb5 pop ecx */
  ECX = (pop32());
  /* 10384cb6 call dword ptr [0x10388090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388090))), 0x10384cbcu);
  /* 10384cbc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10384cc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10384cc2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10384cc4 pop eax */
  EAX = (pop32());
  /* 10384cc5 pop esi */
  ESI = (pop32());
  /* 10384cc6 ret  */
  ESPCHK(0x10384c77u, _esp0);
  ESP += 4; return;
L_10384cc7:;
  /* 10384cc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10384cc9 pop esi */
  ESI = (pop32());
  /* 10384cca ret  */
  ESPCHK(0x10384c77u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ccb @ 0x10384ccb (30 bytes, 8 insns) */
void f_10384ccb(void) {
  FTRACE(0x10384ccbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384ccb call 0x1038564a */
  push32(0x10384cd0u); f_1038564a();
  /* 10384cd0 mov eax, dword ptr [0x10389750] */
  EAX = (r32((uint32_t)(0x10389750)));
  /* 10384cd5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384cd8 je 0x10384ce8 */
  if (C.zf) goto L_10384ce8;
  /* 10384cda push eax */
  push32((uint32_t)(EAX));
  /* 10384cdb call dword ptr [0x10388084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388084))), 0x10384ce1u);
  /* 10384ce1 or dword ptr [0x10389750], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10389750)))|(0xffffffffu); w32((uint32_t)(0x10389750), (_r)); fl_logic(_r,32); }
L_10384ce8:;
  /* 10384ce8 ret  */
  ESPCHK(0x10384ccbu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce9 @ 0x10384ce9 (19 bytes, 4 insns) */
void f_10384ce9(void) {
  FTRACE(0x10384ce9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384ce9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10384ced mov dword ptr [eax + 0x50], 0x103898d0 */
  w32((uint32_t)(EAX + 0x50), (0x103898d0u));
  /* 10384cf4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10384cfb ret  */
  ESPCHK(0x10384ce9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cfc @ 0x10384cfc (160 bytes, 62 insns) */
void f_10384cfc(void) {
  FTRACE(0x10384cfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384cfc mov eax, dword ptr [0x10389750] */
  EAX = (r32((uint32_t)(0x10389750)));
  /* 10384d01 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384d04 je 0x10384d9b */
  if (C.zf) goto L_10384d9b;
  /* 10384d0a push esi */
  push32((uint32_t)(ESI));
  /* 10384d0b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10384d0f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10384d11 jne 0x10384d20 */
  if (!C.zf) goto L_10384d20;
  /* 10384d13 push eax */
  push32((uint32_t)(EAX));
  /* 10384d14 call dword ptr [0x10388088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388088))), 0x10384d1au);
  /* 10384d1a mov esi, eax */
  ESI = (EAX);
  /* 10384d1c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10384d1e je 0x10384d8c */
  if (C.zf) goto L_10384d8c;
L_10384d20:;
  /* 10384d20 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10384d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384d25 je 0x10384d2e */
  if (C.zf) goto L_10384d2e;
  /* 10384d27 push eax */
  push32((uint32_t)(EAX));
  /* 10384d28 call 0x103857b9 */
  push32(0x10384d2du); f_103857b9();
  /* 10384d2d pop ecx */
  ECX = (pop32());
L_10384d2e:;
  /* 10384d2e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10384d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384d33 je 0x10384d3c */
  if (C.zf) goto L_10384d3c;
  /* 10384d35 push eax */
  push32((uint32_t)(EAX));
  /* 10384d36 call 0x103857b9 */
  push32(0x10384d3bu); f_103857b9();
  /* 10384d3b pop ecx */
  ECX = (pop32());
L_10384d3c:;
  /* 10384d3c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10384d3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384d41 je 0x10384d4a */
  if (C.zf) goto L_10384d4a;
  /* 10384d43 push eax */
  push32((uint32_t)(EAX));
  /* 10384d44 call 0x103857b9 */
  push32(0x10384d49u); f_103857b9();
  /* 10384d49 pop ecx */
  ECX = (pop32());
L_10384d4a:;
  /* 10384d4a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10384d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384d4f je 0x10384d58 */
  if (C.zf) goto L_10384d58;
  /* 10384d51 push eax */
  push32((uint32_t)(EAX));
  /* 10384d52 call 0x103857b9 */
  push32(0x10384d57u); f_103857b9();
  /* 10384d57 pop ecx */
  ECX = (pop32());
L_10384d58:;
  /* 10384d58 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10384d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384d5d je 0x10384d66 */
  if (C.zf) goto L_10384d66;
  /* 10384d5f push eax */
  push32((uint32_t)(EAX));
  /* 10384d60 call 0x103857b9 */
  push32(0x10384d65u); f_103857b9();
  /* 10384d65 pop ecx */
  ECX = (pop32());
L_10384d66:;
  /* 10384d66 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10384d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384d6b je 0x10384d74 */
  if (C.zf) goto L_10384d74;
  /* 10384d6d push eax */
  push32((uint32_t)(EAX));
  /* 10384d6e call 0x103857b9 */
  push32(0x10384d73u); f_103857b9();
  /* 10384d73 pop ecx */
  ECX = (pop32());
L_10384d74:;
  /* 10384d74 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10384d77 cmp eax, 0x103898d0 */
  { uint32_t _a=(EAX),_b=(0x103898d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384d7c je 0x10384d85 */
  if (C.zf) goto L_10384d85;
  /* 10384d7e push eax */
  push32((uint32_t)(EAX));
  /* 10384d7f call 0x103857b9 */
  push32(0x10384d84u); f_103857b9();
  /* 10384d84 pop ecx */
  ECX = (pop32());
L_10384d85:;
  /* 10384d85 push esi */
  push32((uint32_t)(ESI));
  /* 10384d86 call 0x103857b9 */
  push32(0x10384d8bu); f_103857b9();
  /* 10384d8b pop ecx */
  ECX = (pop32());
L_10384d8c:;
  /* 10384d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10384d8e push dword ptr [0x10389750] */
  push32((uint32_t)(r32((uint32_t)(0x10389750))));
  /* 10384d94 call dword ptr [0x1038808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038808c))), 0x10384d9au);
  /* 10384d9a pop esi */
  ESI = (pop32());
L_10384d9b:;
  /* 10384d9b ret  */
  ESPCHK(0x10384cfcu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d9c @ 0x10384d9c (444 bytes, 150 insns) */
void f_10384d9c(void) {
  FTRACE(0x10384d9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384d9c push ebp */
  push32((uint32_t)(EBP));
  /* 10384d9d mov ebp, esp */
  EBP = (ESP);
  /* 10384d9f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10384da3 push esi */
  push32((uint32_t)(ESI));
  /* 10384da4 push edi */
  push32((uint32_t)(EDI));
  /* 10384da5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10384daa call 0x10385801 */
  push32(0x10384dafu); f_10385801();
  /* 10384daf mov esi, eax */
  ESI = (EAX);
  /* 10384db1 pop ecx */
  ECX = (pop32());
  /* 10384db2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10384db4 jne 0x10384dbe */
  if (!C.zf) goto L_10384dbe;
  /* 10384db6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10384db8 call 0x10384b26 */
  push32(0x10384dbdu); f_10384b26();
  /* 10384dbd pop ecx */
  ECX = (pop32());
L_10384dbe:;
  /* 10384dbe mov dword ptr [0x1038a540], esi */
  w32((uint32_t)(0x1038a540), (ESI));
  /* 10384dc4 mov dword ptr [0x1038a640], 0x20 */
  w32((uint32_t)(0x1038a640), (0x20u));
  /* 10384dce lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10384dd4:;
  /* 10384dd4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384dd6 jae 0x10384df6 */
  if (!C.cf) goto L_10384df6;
  /* 10384dd8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10384ddc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10384ddf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10384de3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10384de7 mov eax, dword ptr [0x1038a540] */
  EAX = (r32((uint32_t)(0x1038a540)));
  /* 10384dec add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10384def add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10384df4 jmp 0x10384dd4 */
  goto L_10384dd4;
L_10384df6:;
  /* 10384df6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10384df9 push eax */
  push32((uint32_t)(EAX));
  /* 10384dfa call dword ptr [0x1038807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038807c))), 0x10384e00u);
  /* 10384e00 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10384e05 je 0x10384edc */
  if (C.zf) goto L_10384edc;
  /* 10384e0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10384e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384e10 je 0x10384edc */
  if (C.zf) goto L_10384edc;
  /* 10384e16 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10384e18 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10384e1b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10384e1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10384e21 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10384e26 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384e28 jl 0x10384e2c */
  if ((C.sf!=C.of)) goto L_10384e2c;
  /* 10384e2a mov edi, eax */
  EDI = (EAX);
L_10384e2c:;
  /* 10384e2c cmp dword ptr [0x1038a640], edi */
  { uint32_t _a=(r32((uint32_t)(0x1038a640))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384e32 jge 0x10384e8a */
  if ((C.sf==C.of)) goto L_10384e8a;
  /* 10384e34 mov esi, 0x1038a544 */
  ESI = (0x1038a544u);
L_10384e39:;
  /* 10384e39 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10384e3e call 0x10385801 */
  push32(0x10384e43u); f_10385801();
  /* 10384e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384e45 pop ecx */
  ECX = (pop32());
  /* 10384e46 je 0x10384e84 */
  if (C.zf) goto L_10384e84;
  /* 10384e48 add dword ptr [0x1038a640], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1038a640))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1038a640), (_r)); fl_add(_a,_b,_r,32); }
  /* 10384e4f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10384e51 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10384e57:;
  /* 10384e57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384e59 jae 0x10384e77 */
  if (!C.cf) goto L_10384e77;
  /* 10384e5b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10384e5f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10384e62 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10384e66 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10384e6a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10384e6c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10384e6f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10384e75 jmp 0x10384e57 */
  goto L_10384e57;
L_10384e77:;
  /* 10384e77 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10384e7a cmp dword ptr [0x1038a640], edi */
  { uint32_t _a=(r32((uint32_t)(0x1038a640))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384e80 jl 0x10384e39 */
  if ((C.sf!=C.of)) goto L_10384e39;
  /* 10384e82 jmp 0x10384e8a */
  goto L_10384e8a;
L_10384e84:;
  /* 10384e84 mov edi, dword ptr [0x1038a640] */
  EDI = (r32((uint32_t)(0x1038a640)));
L_10384e8a:;
  /* 10384e8a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10384e8c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10384e8e jle 0x10384edc */
  if ((C.zf||C.sf!=C.of)) goto L_10384edc;
L_10384e90:;
  /* 10384e90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10384e93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10384e95 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384e98 je 0x10384ed2 */
  if (C.zf) goto L_10384ed2;
  /* 10384e9a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10384e9c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10384e9e je 0x10384ed2 */
  if (C.zf) goto L_10384ed2;
  /* 10384ea0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10384ea2 jne 0x10384eaf */
  if (!C.zf) goto L_10384eaf;
  /* 10384ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 10384ea5 call dword ptr [0x10388074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388074))), 0x10384eabu);
  /* 10384eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384ead je 0x10384ed2 */
  if (C.zf) goto L_10384ed2;
L_10384eaf:;
  /* 10384eaf mov ecx, esi */
  ECX = (ESI);
  /* 10384eb1 mov eax, esi */
  EAX = (ESI);
  /* 10384eb3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10384eb6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10384eb9 mov ecx, dword ptr [ecx*4 + 0x1038a540] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1038a540)));
  /* 10384ec0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10384ec3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10384ec6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10384ec9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10384ecb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10384ecd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10384ecf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10384ed2:;
  /* 10384ed2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10384ed6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10384ed7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10384ed8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384eda jl 0x10384e90 */
  if ((C.sf!=C.of)) goto L_10384e90;
L_10384edc:;
  /* 10384edc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10384ede:;
  /* 10384ede mov ecx, dword ptr [0x1038a540] */
  ECX = (r32((uint32_t)(0x1038a540)));
  /* 10384ee4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10384ee7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384eeb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10384eee jne 0x10384f3d */
  if (!C.zf) goto L_10384f3d;
  /* 10384ef0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10384ef2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10384ef6 jne 0x10384efd */
  if (!C.zf) goto L_10384efd;
  /* 10384ef8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10384efa pop eax */
  EAX = (pop32());
  /* 10384efb jmp 0x10384f07 */
  goto L_10384f07;
L_10384efd:;
  /* 10384efd mov eax, ebx */
  EAX = (EBX);
  /* 10384eff dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10384f00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10384f02 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10384f04 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10384f07:;
  /* 10384f07 push eax */
  push32((uint32_t)(EAX));
  /* 10384f08 call dword ptr [0x10388078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388078))), 0x10384f0eu);
  /* 10384f0e mov edi, eax */
  EDI = (EAX);
  /* 10384f10 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f13 je 0x10384f2c */
  if (C.zf) goto L_10384f2c;
  /* 10384f15 push edi */
  push32((uint32_t)(EDI));
  /* 10384f16 call dword ptr [0x10388074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388074))), 0x10384f1cu);
  /* 10384f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384f1e je 0x10384f2c */
  if (C.zf) goto L_10384f2c;
  /* 10384f20 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10384f25 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10384f27 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f2a jne 0x10384f32 */
  if (!C.zf) goto L_10384f32;
L_10384f2c:;
  /* 10384f2c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10384f30 jmp 0x10384f41 */
  goto L_10384f41;
L_10384f32:;
  /* 10384f32 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f35 jne 0x10384f41 */
  if (!C.zf) goto L_10384f41;
  /* 10384f37 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10384f3b jmp 0x10384f41 */
  goto L_10384f41;
L_10384f3d:;
  /* 10384f3d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10384f41:;
  /* 10384f41 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10384f42 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f45 jl 0x10384ede */
  if ((C.sf!=C.of)) goto L_10384ede;
  /* 10384f47 push dword ptr [0x1038a640] */
  push32((uint32_t)(r32((uint32_t)(0x1038a640))));
  /* 10384f4d call dword ptr [0x10388080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388080))), 0x10384f53u);
  /* 10384f53 pop edi */
  EDI = (pop32());
  /* 10384f54 pop esi */
  ESI = (pop32());
  /* 10384f55 pop ebx */
  EBX = (pop32());
  /* 10384f56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10384f57 ret  */
  ESPCHK(0x10384d9cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f58 @ 0x10384f58 (84 bytes, 33 insns) */
void f_10384f58(void) {
  FTRACE(0x10384f58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384f58 push ebx */
  push32((uint32_t)(EBX));
  /* 10384f59 push esi */
  push32((uint32_t)(ESI));
  /* 10384f5a push edi */
  push32((uint32_t)(EDI));
  /* 10384f5b mov esi, 0x1038a540 */
  ESI = (0x1038a540u);
L_10384f60:;
  /* 10384f60 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10384f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10384f64 je 0x10384f9d */
  if (C.zf) goto L_10384f9d;
  /* 10384f66 mov edi, eax */
  EDI = (EAX);
  /* 10384f68 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10384f6d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f6f jae 0x10384f92 */
  if (!C.cf) goto L_10384f92;
  /* 10384f71 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10384f74:;
  /* 10384f74 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f78 je 0x10384f81 */
  if (C.zf) goto L_10384f81;
  /* 10384f7a push ebx */
  push32((uint32_t)(EBX));
  /* 10384f7b call dword ptr [0x1038806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038806c))), 0x10384f81u);
L_10384f81:;
  /* 10384f81 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10384f83 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10384f86 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10384f8b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10384f8e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384f90 jb 0x10384f74 */
  if (C.cf) goto L_10384f74;
L_10384f92:;
  /* 10384f92 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10384f94 call 0x103857b9 */
  push32(0x10384f99u); f_103857b9();
  /* 10384f99 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10384f9c pop ecx */
  ECX = (pop32());
L_10384f9d:;
  /* 10384f9d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10384fa0 cmp esi, 0x1038a640 */
  { uint32_t _a=(ESI),_b=(0x1038a640u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384fa6 jl 0x10384f60 */
  if ((C.sf!=C.of)) goto L_10384f60;
  /* 10384fa8 pop edi */
  EDI = (pop32());
  /* 10384fa9 pop esi */
  ESI = (pop32());
  /* 10384faa pop ebx */
  EBX = (pop32());
  /* 10384fab ret  */
  ESPCHK(0x10384f58u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fac @ 0x10384fac (185 bytes, 71 insns) */
void f_10384fac(void) {
  FTRACE(0x10384facu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10384fac push ebx */
  push32((uint32_t)(EBX));
  /* 10384fad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10384faf cmp dword ptr [0x1038a648], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1038a648))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384fb5 push esi */
  push32((uint32_t)(ESI));
  /* 10384fb6 push edi */
  push32((uint32_t)(EDI));
  /* 10384fb7 jne 0x10384fbe */
  if (!C.zf) goto L_10384fbe;
  /* 10384fb9 call 0x10385dd3 */
  push32(0x10384fbeu); f_10385dd3();
L_10384fbe:;
  /* 10384fbe mov esi, dword ptr [0x1038a0d8] */
  ESI = (r32((uint32_t)(0x1038a0d8)));
  /* 10384fc4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10384fc6:;
  /* 10384fc6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10384fc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10384fca je 0x10384fde */
  if (C.zf) goto L_10384fde;
  /* 10384fcc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10384fce je 0x10384fd1 */
  if (C.zf) goto L_10384fd1;
  /* 10384fd0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10384fd1:;
  /* 10384fd1 push esi */
  push32((uint32_t)(ESI));
  /* 10384fd2 call 0x10385980 */
  push32(0x10384fd7u); f_10385980();
  /* 10384fd7 pop ecx */
  ECX = (pop32());
  /* 10384fd8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10384fdc jmp 0x10384fc6 */
  goto L_10384fc6;
L_10384fde:;
  /* 10384fde lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10384fe5 push eax */
  push32((uint32_t)(EAX));
  /* 10384fe6 call 0x10385801 */
  push32(0x10384febu); f_10385801();
  /* 10384feb mov esi, eax */
  ESI = (EAX);
  /* 10384fed pop ecx */
  ECX = (pop32());
  /* 10384fee cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10384ff0 mov dword ptr [0x1038a108], esi */
  w32((uint32_t)(0x1038a108), (ESI));
  /* 10384ff6 jne 0x10385000 */
  if (!C.zf) goto L_10385000;
  /* 10384ff8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10384ffa call 0x10384b26 */
  push32(0x10384fffu); f_10384b26();
  /* 10384fff pop ecx */
  ECX = (pop32());
L_10385000:;
  /* 10385000 mov edi, dword ptr [0x1038a0d8] */
  EDI = (r32((uint32_t)(0x1038a0d8)));
  /* 10385006 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385008 je 0x10385043 */
  if (C.zf) goto L_10385043;
  /* 1038500a push ebp */
  push32((uint32_t)(EBP));
L_1038500b:;
  /* 1038500b push edi */
  push32((uint32_t)(EDI));
  /* 1038500c call 0x10385980 */
  push32(0x10385011u); f_10385980();
  /* 10385011 mov ebp, eax */
  EBP = (EAX);
  /* 10385013 pop ecx */
  ECX = (pop32());
  /* 10385014 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10385015 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385018 je 0x1038503c */
  if (C.zf) goto L_1038503c;
  /* 1038501a push ebp */
  push32((uint32_t)(EBP));
  /* 1038501b call 0x10385801 */
  push32(0x10385020u); f_10385801();
  /* 10385020 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385022 pop ecx */
  ECX = (pop32());
  /* 10385023 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10385025 jne 0x1038502f */
  if (!C.zf) goto L_1038502f;
  /* 10385027 push 9 */
  push32((uint32_t)(0x9u));
  /* 10385029 call 0x10384b26 */
  push32(0x1038502eu); f_10384b26();
  /* 1038502e pop ecx */
  ECX = (pop32());
L_1038502f:;
  /* 1038502f push edi */
  push32((uint32_t)(EDI));
  /* 10385030 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10385032 call 0x10385890 */
  push32(0x10385037u); f_10385890();
  /* 10385037 pop ecx */
  ECX = (pop32());
  /* 10385038 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038503b pop ecx */
  ECX = (pop32());
L_1038503c:;
  /* 1038503c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038503e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385040 jne 0x1038500b */
  if (!C.zf) goto L_1038500b;
  /* 10385042 pop ebp */
  EBP = (pop32());
L_10385043:;
  /* 10385043 push dword ptr [0x1038a0d8] */
  push32((uint32_t)(r32((uint32_t)(0x1038a0d8))));
  /* 10385049 call 0x103857b9 */
  push32(0x1038504eu); f_103857b9();
  /* 1038504e pop ecx */
  ECX = (pop32());
  /* 1038504f mov dword ptr [0x1038a0d8], ebx */
  w32((uint32_t)(0x1038a0d8), (EBX));
  /* 10385055 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10385057 pop edi */
  EDI = (pop32());
  /* 10385058 pop esi */
  ESI = (pop32());
  /* 10385059 mov dword ptr [0x1038a644], 1 */
  w32((uint32_t)(0x1038a644), (0x1u));
  /* 10385063 pop ebx */
  EBX = (pop32());
  /* 10385064 ret  */
  ESPCHK(0x10384facu, _esp0);
  ESP += 4; return;
}

/* FUN_10005065 @ 0x10385065 (153 bytes, 62 insns) */
void f_10385065(void) {
  FTRACE(0x10385065u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385065 push ebp */
  push32((uint32_t)(EBP));
  /* 10385066 mov ebp, esp */
  EBP = (ESP);
  /* 10385068 push ecx */
  push32((uint32_t)(ECX));
  /* 10385069 push ecx */
  push32((uint32_t)(ECX));
  /* 1038506a push ebx */
  push32((uint32_t)(EBX));
  /* 1038506b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1038506d cmp dword ptr [0x1038a648], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1038a648))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385073 push esi */
  push32((uint32_t)(ESI));
  /* 10385074 push edi */
  push32((uint32_t)(EDI));
  /* 10385075 jne 0x1038507c */
  if (!C.zf) goto L_1038507c;
  /* 10385077 call 0x10385dd3 */
  push32(0x1038507cu); f_10385dd3();
L_1038507c:;
  /* 1038507c mov esi, 0x1038a12c */
  ESI = (0x1038a12cu);
  /* 10385081 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10385086 push esi */
  push32((uint32_t)(ESI));
  /* 10385087 push ebx */
  push32((uint32_t)(EBX));
  /* 10385088 call dword ptr [0x10388068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388068))), 0x1038508eu);
  /* 1038508e mov eax, dword ptr [0x1038a658] */
  EAX = (r32((uint32_t)(0x1038a658)));
  /* 10385093 mov dword ptr [0x1038a118], esi */
  w32((uint32_t)(0x1038a118), (ESI));
  /* 10385099 mov edi, esi */
  EDI = (ESI);
  /* 1038509b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038509d je 0x103850a1 */
  if (C.zf) goto L_103850a1;
  /* 1038509f mov edi, eax */
  EDI = (EAX);
L_103850a1:;
  /* 103850a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103850a4 push eax */
  push32((uint32_t)(EAX));
  /* 103850a5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 103850a8 push eax */
  push32((uint32_t)(EAX));
  /* 103850a9 push ebx */
  push32((uint32_t)(EBX));
  /* 103850aa push ebx */
  push32((uint32_t)(EBX));
  /* 103850ab push edi */
  push32((uint32_t)(EDI));
  /* 103850ac call 0x103850fe */
  push32(0x103850b1u); f_103850fe();
  /* 103850b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103850b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103850b7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 103850ba push eax */
  push32((uint32_t)(EAX));
  /* 103850bb call 0x10385801 */
  push32(0x103850c0u); f_10385801();
  /* 103850c0 mov esi, eax */
  ESI = (EAX);
  /* 103850c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103850c5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103850c7 jne 0x103850d1 */
  if (!C.zf) goto L_103850d1;
  /* 103850c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 103850cb call 0x10384b26 */
  push32(0x103850d0u); f_10384b26();
  /* 103850d0 pop ecx */
  ECX = (pop32());
L_103850d1:;
  /* 103850d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103850d4 push eax */
  push32((uint32_t)(EAX));
  /* 103850d5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 103850d8 push eax */
  push32((uint32_t)(EAX));
  /* 103850d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103850dc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 103850df push eax */
  push32((uint32_t)(EAX));
  /* 103850e0 push esi */
  push32((uint32_t)(ESI));
  /* 103850e1 push edi */
  push32((uint32_t)(EDI));
  /* 103850e2 call 0x103850fe */
  push32(0x103850e7u); f_103850fe();
  /* 103850e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103850ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103850ed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103850ee mov dword ptr [0x1038a100], esi */
  w32((uint32_t)(0x1038a100), (ESI));
  /* 103850f4 pop edi */
  EDI = (pop32());
  /* 103850f5 pop esi */
  ESI = (pop32());
  /* 103850f6 mov dword ptr [0x1038a0fc], eax */
  w32((uint32_t)(0x1038a0fc), (EAX));
  /* 103850fb pop ebx */
  EBX = (pop32());
  /* 103850fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103850fd ret  */
  ESPCHK(0x10385065u, _esp0);
  ESP += 4; return;
}

/* FUN_100050fe @ 0x103850fe (436 bytes, 187 insns) */
void f_103850fe(void) {
  FTRACE(0x103850feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103850fe push ebp */
  push32((uint32_t)(EBP));
  /* 103850ff mov ebp, esp */
  EBP = (ESP);
  /* 10385101 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10385104 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10385107 push ebx */
  push32((uint32_t)(EBX));
  /* 10385108 push esi */
  push32((uint32_t)(ESI));
  /* 10385109 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1038510c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1038510f push edi */
  push32((uint32_t)(EDI));
  /* 10385110 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10385113 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10385119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1038511c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1038511e je 0x10385128 */
  if (C.zf) goto L_10385128;
  /* 10385120 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10385122 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385125 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10385128:;
  /* 10385128 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038512b jne 0x10385171 */
  if (!C.zf) goto L_10385171;
L_1038512d:;
  /* 1038512d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10385130 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385131 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385134 je 0x1038515f */
  if (C.zf) goto L_1038515f;
  /* 10385136 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10385138 je 0x1038515f */
  if (C.zf) goto L_1038515f;
  /* 1038513a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1038513d test byte ptr [edx + 0x1038a421], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1038a421)))&(0x4u); fl_logic(_r,8); }
  /* 10385144 je 0x10385152 */
  if (C.zf) goto L_10385152;
  /* 10385146 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10385148 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1038514a je 0x10385152 */
  if (C.zf) goto L_10385152;
  /* 1038514c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1038514e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10385150 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10385151 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10385152:;
  /* 10385152 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10385154 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385156 je 0x1038512d */
  if (C.zf) goto L_1038512d;
  /* 10385158 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1038515a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1038515c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1038515d jmp 0x1038512d */
  goto L_1038512d;
L_1038515f:;
  /* 1038515f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10385161 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385163 je 0x10385169 */
  if (C.zf) goto L_10385169;
  /* 10385165 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10385168 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10385169:;
  /* 10385169 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038516c jne 0x103851b4 */
  if (!C.zf) goto L_103851b4;
  /* 1038516e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1038516f jmp 0x103851b4 */
  goto L_103851b4;
L_10385171:;
  /* 10385171 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10385173 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385175 je 0x1038517c */
  if (C.zf) goto L_1038517c;
  /* 10385177 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10385179 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1038517b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1038517c:;
  /* 1038517c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1038517e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1038517f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10385182 test byte ptr [ebx + 0x1038a421], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1038a421)))&(0x4u); fl_logic(_r,8); }
  /* 10385189 je 0x10385197 */
  if (C.zf) goto L_10385197;
  /* 1038518b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1038518d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1038518f je 0x10385196 */
  if (C.zf) goto L_10385196;
  /* 10385191 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10385193 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10385195 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10385196:;
  /* 10385196 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10385197:;
  /* 10385197 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038519a je 0x103851a5 */
  if (C.zf) goto L_103851a5;
  /* 1038519c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1038519e je 0x103851a9 */
  if (C.zf) goto L_103851a9;
  /* 103851a0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851a3 jne 0x10385171 */
  if (!C.zf) goto L_10385171;
L_103851a5:;
  /* 103851a5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103851a7 jne 0x103851ac */
  if (!C.zf) goto L_103851ac;
L_103851a9:;
  /* 103851a9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103851aa jmp 0x103851b4 */
  goto L_103851b4;
L_103851ac:;
  /* 103851ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103851ae je 0x103851b4 */
  if (C.zf) goto L_103851b4;
  /* 103851b0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_103851b4:;
  /* 103851b4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_103851b8:;
  /* 103851b8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851bb je 0x103852a1 */
  if (C.zf) goto L_103852a1;
L_103851c1:;
  /* 103851c1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103851c3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851c6 je 0x103851cd */
  if (C.zf) goto L_103851cd;
  /* 103851c8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851cb jne 0x103851d0 */
  if (!C.zf) goto L_103851d0;
L_103851cd:;
  /* 103851cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103851ce jmp 0x103851c1 */
  goto L_103851c1;
L_103851d0:;
  /* 103851d0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851d3 je 0x103852a1 */
  if (C.zf) goto L_103852a1;
  /* 103851d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103851db je 0x103851e5 */
  if (C.zf) goto L_103851e5;
  /* 103851dd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 103851df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103851e2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_103851e5:;
  /* 103851e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103851e8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_103851ea:;
  /* 103851ea mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 103851f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_103851f3:;
  /* 103851f3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851f6 jne 0x103851fc */
  if (!C.zf) goto L_103851fc;
  /* 103851f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103851f9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103851fa jmp 0x103851f3 */
  goto L_103851f3;
L_103851fc:;
  /* 103851fc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103851ff jne 0x1038522d */
  if (!C.zf) goto L_1038522d;
  /* 10385201 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10385204 jne 0x1038522b */
  if (!C.zf) goto L_1038522b;
  /* 10385206 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10385208 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038520b je 0x1038521a */
  if (C.zf) goto L_1038521a;
  /* 1038520d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385211 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10385214 jne 0x1038521a */
  if (!C.zf) goto L_1038521a;
  /* 10385216 mov eax, edx */
  EAX = (EDX);
  /* 10385218 jmp 0x1038521d */
  goto L_1038521d;
L_1038521a:;
  /* 1038521a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1038521d:;
  /* 1038521d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10385220 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10385222 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385225 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10385228 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1038522b:;
  /* 1038522b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1038522d:;
  /* 1038522d mov edx, ebx */
  EDX = (EBX);
  /* 1038522f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10385230 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10385232 je 0x10385242 */
  if (C.zf) goto L_10385242;
  /* 10385234 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10385235:;
  /* 10385235 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385237 je 0x1038523d */
  if (C.zf) goto L_1038523d;
  /* 10385239 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1038523c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1038523d:;
  /* 1038523d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1038523f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10385240 jne 0x10385235 */
  if (!C.zf) goto L_10385235;
L_10385242:;
  /* 10385242 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10385244 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10385246 je 0x10385292 */
  if (C.zf) goto L_10385292;
  /* 10385248 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038524c jne 0x10385258 */
  if (!C.zf) goto L_10385258;
  /* 1038524e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385251 je 0x10385292 */
  if (C.zf) goto L_10385292;
  /* 10385253 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385256 je 0x10385292 */
  if (C.zf) goto L_10385292;
L_10385258:;
  /* 10385258 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038525c je 0x1038528c */
  if (C.zf) goto L_1038528c;
  /* 1038525e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385260 je 0x1038527b */
  if (C.zf) goto L_1038527b;
  /* 10385262 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10385265 test byte ptr [ebx + 0x1038a421], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1038a421)))&(0x4u); fl_logic(_r,8); }
  /* 1038526c je 0x10385274 */
  if (C.zf) goto L_10385274;
  /* 1038526e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10385270 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10385271 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385272 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10385274:;
  /* 10385274 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10385276 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10385278 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10385279 jmp 0x1038528a */
  goto L_1038528a;
L_1038527b:;
  /* 1038527b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1038527e test byte ptr [edx + 0x1038a421], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1038a421)))&(0x4u); fl_logic(_r,8); }
  /* 10385285 je 0x1038528a */
  if (C.zf) goto L_1038528a;
  /* 10385287 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385288 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1038528a:;
  /* 1038528a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1038528c:;
  /* 1038528c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1038528d jmp 0x103851ea */
  goto L_103851ea;
L_10385292:;
  /* 10385292 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385294 je 0x1038529a */
  if (C.zf) goto L_1038529a;
  /* 10385296 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10385299 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1038529a:;
  /* 1038529a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1038529c jmp 0x103851b8 */
  goto L_103851b8;
L_103852a1:;
  /* 103852a1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103852a3 je 0x103852a8 */
  if (C.zf) goto L_103852a8;
  /* 103852a5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_103852a8:;
  /* 103852a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103852ab pop edi */
  EDI = (pop32());
  /* 103852ac pop esi */
  ESI = (pop32());
  /* 103852ad pop ebx */
  EBX = (pop32());
  /* 103852ae inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 103852b0 pop ebp */
  EBP = (pop32());
  /* 103852b1 ret  */
  ESPCHK(0x103850feu, _esp0);
  ESP += 4; return;
}

/* FUN_100052b2 @ 0x103852b2 (306 bytes, 132 insns) */
void f_103852b2(void) {
  FTRACE(0x103852b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103852b2 push ecx */
  push32((uint32_t)(ECX));
  /* 103852b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103852b4 mov eax, dword ptr [0x1038a230] */
  EAX = (r32((uint32_t)(0x1038a230)));
  /* 103852b9 push ebx */
  push32((uint32_t)(EBX));
  /* 103852ba push ebp */
  push32((uint32_t)(EBP));
  /* 103852bb mov ebp, dword ptr [0x10388054] */
  EBP = (r32((uint32_t)(0x10388054)));
  /* 103852c1 push esi */
  push32((uint32_t)(ESI));
  /* 103852c2 push edi */
  push32((uint32_t)(EDI));
  /* 103852c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103852c5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103852c7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103852c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103852cb jne 0x10385300 */
  if (!C.zf) goto L_10385300;
  /* 103852cd call ebp */
  call_ind((uint32_t)(EBP), 0x103852cfu);
  /* 103852cf mov esi, eax */
  ESI = (EAX);
  /* 103852d1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103852d3 je 0x103852e1 */
  if (C.zf) goto L_103852e1;
  /* 103852d5 mov dword ptr [0x1038a230], 1 */
  w32((uint32_t)(0x1038a230), (0x1u));
  /* 103852df jmp 0x10385309 */
  goto L_10385309;
L_103852e1:;
  /* 103852e1 call dword ptr [0x10388064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388064))), 0x103852e7u);
  /* 103852e7 mov edi, eax */
  EDI = (EAX);
  /* 103852e9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103852eb je 0x103853db */
  if (C.zf) goto L_103853db;
  /* 103852f1 mov dword ptr [0x1038a230], 2 */
  w32((uint32_t)(0x1038a230), (0x2u));
  /* 103852fb jmp 0x1038538f */
  goto L_1038538f;
L_10385300:;
  /* 10385300 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385303 jne 0x1038538a */
  if (!C.zf) goto L_1038538a;
L_10385309:;
  /* 10385309 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038530b jne 0x10385319 */
  if (!C.zf) goto L_10385319;
  /* 1038530d call ebp */
  call_ind((uint32_t)(EBP), 0x1038530fu);
  /* 1038530f mov esi, eax */
  ESI = (EAX);
  /* 10385311 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385313 je 0x103853db */
  if (C.zf) goto L_103853db;
L_10385319:;
  /* 10385319 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1038531c mov eax, esi */
  EAX = (ESI);
  /* 1038531e je 0x1038532e */
  if (C.zf) goto L_1038532e;
L_10385320:;
  /* 10385320 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385321 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385322 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10385325 jne 0x10385320 */
  if (!C.zf) goto L_10385320;
  /* 10385327 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385328 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385329 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1038532c jne 0x10385320 */
  if (!C.zf) goto L_10385320;
L_1038532e:;
  /* 1038532e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385330 mov edi, dword ptr [0x1038805c] */
  EDI = (r32((uint32_t)(0x1038805c)));
  /* 10385336 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10385338 push ebx */
  push32((uint32_t)(EBX));
  /* 10385339 push ebx */
  push32((uint32_t)(EBX));
  /* 1038533a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1038533b push ebx */
  push32((uint32_t)(EBX));
  /* 1038533c push ebx */
  push32((uint32_t)(EBX));
  /* 1038533d push eax */
  push32((uint32_t)(EAX));
  /* 1038533e push esi */
  push32((uint32_t)(ESI));
  /* 1038533f push ebx */
  push32((uint32_t)(EBX));
  /* 10385340 push ebx */
  push32((uint32_t)(EBX));
  /* 10385341 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10385345 call edi */
  call_ind((uint32_t)(EDI), 0x10385347u);
  /* 10385347 mov ebp, eax */
  EBP = (EAX);
  /* 10385349 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038534b je 0x1038537f */
  if (C.zf) goto L_1038537f;
  /* 1038534d push ebp */
  push32((uint32_t)(EBP));
  /* 1038534e call 0x10385801 */
  push32(0x10385353u); f_10385801();
  /* 10385353 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385355 pop ecx */
  ECX = (pop32());
  /* 10385356 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1038535a je 0x1038537f */
  if (C.zf) goto L_1038537f;
  /* 1038535c push ebx */
  push32((uint32_t)(EBX));
  /* 1038535d push ebx */
  push32((uint32_t)(EBX));
  /* 1038535e push ebp */
  push32((uint32_t)(EBP));
  /* 1038535f push eax */
  push32((uint32_t)(EAX));
  /* 10385360 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10385364 push esi */
  push32((uint32_t)(ESI));
  /* 10385365 push ebx */
  push32((uint32_t)(EBX));
  /* 10385366 push ebx */
  push32((uint32_t)(EBX));
  /* 10385367 call edi */
  call_ind((uint32_t)(EDI), 0x10385369u);
  /* 10385369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038536b jne 0x1038537b */
  if (!C.zf) goto L_1038537b;
  /* 1038536d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10385371 call 0x103857b9 */
  push32(0x10385376u); f_103857b9();
  /* 10385376 pop ecx */
  ECX = (pop32());
  /* 10385377 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1038537b:;
  /* 1038537b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1038537f:;
  /* 1038537f push esi */
  push32((uint32_t)(ESI));
  /* 10385380 call dword ptr [0x10388060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388060))), 0x10385386u);
  /* 10385386 mov eax, ebx */
  EAX = (EBX);
  /* 10385388 jmp 0x103853dd */
  goto L_103853dd;
L_1038538a:;
  /* 1038538a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038538d jne 0x103853db */
  if (!C.zf) goto L_103853db;
L_1038538f:;
  /* 1038538f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385391 jne 0x1038539f */
  if (!C.zf) goto L_1038539f;
  /* 10385393 call dword ptr [0x10388064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388064))), 0x10385399u);
  /* 10385399 mov edi, eax */
  EDI = (EAX);
  /* 1038539b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038539d je 0x103853db */
  if (C.zf) goto L_103853db;
L_1038539f:;
  /* 1038539f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103853a1 mov eax, edi */
  EAX = (EDI);
  /* 103853a3 je 0x103853af */
  if (C.zf) goto L_103853af;
L_103853a5:;
  /* 103853a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103853a6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103853a8 jne 0x103853a5 */
  if (!C.zf) goto L_103853a5;
  /* 103853aa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103853ab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103853ad jne 0x103853a5 */
  if (!C.zf) goto L_103853a5;
L_103853af:;
  /* 103853af sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103853b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103853b2 mov ebp, eax */
  EBP = (EAX);
  /* 103853b4 push ebp */
  push32((uint32_t)(EBP));
  /* 103853b5 call 0x10385801 */
  push32(0x103853bau); f_10385801();
  /* 103853ba mov esi, eax */
  ESI = (EAX);
  /* 103853bc pop ecx */
  ECX = (pop32());
  /* 103853bd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103853bf jne 0x103853c5 */
  if (!C.zf) goto L_103853c5;
  /* 103853c1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103853c3 jmp 0x103853d0 */
  goto L_103853d0;
L_103853c5:;
  /* 103853c5 push ebp */
  push32((uint32_t)(EBP));
  /* 103853c6 push edi */
  push32((uint32_t)(EDI));
  /* 103853c7 push esi */
  push32((uint32_t)(ESI));
  /* 103853c8 call 0x10385df0 */
  push32(0x103853cdu); f_10385df0();
  /* 103853cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103853d0:;
  /* 103853d0 push edi */
  push32((uint32_t)(EDI));
  /* 103853d1 call dword ptr [0x10388070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388070))), 0x103853d7u);
  /* 103853d7 mov eax, esi */
  EAX = (ESI);
  /* 103853d9 jmp 0x103853dd */
  goto L_103853dd;
L_103853db:;
  /* 103853db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103853dd:;
  /* 103853dd pop edi */
  EDI = (pop32());
  /* 103853de pop esi */
  ESI = (pop32());
  /* 103853df pop ebp */
  EBP = (pop32());
  /* 103853e0 pop ebx */
  EBX = (pop32());
  /* 103853e1 pop ecx */
  ECX = (pop32());
  /* 103853e2 pop ecx */
  ECX = (pop32());
  /* 103853e3 ret  */
  ESPCHK(0x103852b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e4 @ 0x103853e4 (60 bytes, 20 insns) */
void f_103853e4(void) {
  FTRACE(0x103853e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103853e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103853e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103853e8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103853ec push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103853f1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 103853f4 push eax */
  push32((uint32_t)(EAX));
  /* 103853f5 call dword ptr [0x10388058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388058))), 0x103853fbu);
  /* 103853fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103853fd mov dword ptr [0x1038a528], eax */
  w32((uint32_t)(0x1038a528), (EAX));
  /* 10385402 je 0x10385419 */
  if (C.zf) goto L_10385419;
  /* 10385404 call 0x10386125 */
  push32(0x10385409u); f_10386125();
  /* 10385409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038540b jne 0x1038541c */
  if (!C.zf) goto L_1038541c;
  /* 1038540d push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10385413 call dword ptr [0x10388050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388050))), 0x10385419u);
L_10385419:;
  /* 10385419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1038541b ret  */
  ESPCHK(0x103853e4u, _esp0);
  ESP += 4; return;
L_1038541c:;
  /* 1038541c push 1 */
  push32((uint32_t)(0x1u));
  /* 1038541e pop eax */
  EAX = (pop32());
  /* 1038541f ret  */
  ESPCHK(0x103853e4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005420 @ 0x10385420 (117 bytes, 38 insns) */
void f_10385420(void) {
  FTRACE(0x10385420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385420 push ebx */
  push32((uint32_t)(EBX));
  /* 10385421 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10385423 cmp dword ptr [0x1038a2e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1038a2e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385429 push ebp */
  push32((uint32_t)(EBP));
  /* 1038542a mov ebp, dword ptr [0x10388044] */
  EBP = (r32((uint32_t)(0x10388044)));
  /* 10385430 jle 0x10385476 */
  if ((C.zf||C.sf!=C.of)) goto L_10385476;
  /* 10385432 mov eax, dword ptr [0x1038a2ec] */
  EAX = (r32((uint32_t)(0x1038a2ec)));
  /* 10385437 push esi */
  push32((uint32_t)(ESI));
  /* 10385438 push edi */
  push32((uint32_t)(EDI));
  /* 10385439 mov edi, dword ptr [0x10388048] */
  EDI = (r32((uint32_t)(0x10388048)));
  /* 1038543f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10385442:;
  /* 10385442 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10385447 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1038544c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1038544e call edi */
  call_ind((uint32_t)(EDI), 0x10385450u);
  /* 10385450 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10385455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10385457 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10385459 call edi */
  call_ind((uint32_t)(EDI), 0x1038545bu);
  /* 1038545b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1038545e push 0 */
  push32((uint32_t)(0x0u));
  /* 10385460 push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10385466 call ebp */
  call_ind((uint32_t)(EBP), 0x10385468u);
  /* 10385468 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038546b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1038546c cmp ebx, dword ptr [0x1038a2e8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1038a2e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385472 jl 0x10385442 */
  if ((C.sf!=C.of)) goto L_10385442;
  /* 10385474 pop edi */
  EDI = (pop32());
  /* 10385475 pop esi */
  ESI = (pop32());
L_10385476:;
  /* 10385476 push dword ptr [0x1038a2ec] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2ec))));
  /* 1038547c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038547e push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10385484 call ebp */
  call_ind((uint32_t)(EBP), 0x10385486u);
  /* 10385486 push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 1038548c call dword ptr [0x10388050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388050))), 0x10385492u);
  /* 10385492 pop ebp */
  EBP = (pop32());
  /* 10385493 pop ebx */
  EBX = (pop32());
  /* 10385494 ret  */
  ESPCHK(0x10385420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005495 @ 0x10385495 (57 bytes, 18 insns) */
void f_10385495(void) {
  FTRACE(0x10385495u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385495 mov eax, dword ptr [0x1038a0e0] */
  EAX = (r32((uint32_t)(0x1038a0e0)));
  /* 1038549a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038549d je 0x103854ac */
  if (C.zf) goto L_103854ac;
  /* 1038549f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103854a1 jne 0x103854cd */
  if (!C.zf) goto L_103854cd;
  /* 103854a3 cmp dword ptr [0x1038a0e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1038a0e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103854aa jne 0x103854cd */
  if (!C.zf) goto L_103854cd;
L_103854ac:;
  /* 103854ac push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 103854b1 call 0x103854ce */
  push32(0x103854b6u); f_103854ce();
  /* 103854b6 mov eax, dword ptr [0x1038a234] */
  EAX = (r32((uint32_t)(0x1038a234)));
  /* 103854bb pop ecx */
  ECX = (pop32());
  /* 103854bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103854be je 0x103854c2 */
  if (C.zf) goto L_103854c2;
  /* 103854c0 call eax */
  call_ind((uint32_t)(EAX), 0x103854c2u);
L_103854c2:;
  /* 103854c2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 103854c7 call 0x103854ce */
  push32(0x103854ccu); f_103854ce();
  /* 103854cc pop ecx */
  ECX = (pop32());
L_103854cd:;
  /* 103854cd ret  */
  ESPCHK(0x10385495u, _esp0);
  ESP += 4; return;
}

/* FUN_100054ce @ 0x103854ce (339 bytes, 100 insns) */
void f_103854ce(void) {
  FTRACE(0x103854ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103854ce push ebp */
  push32((uint32_t)(EBP));
  /* 103854cf mov ebp, esp */
  EBP = (ESP);
  /* 103854d1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103854d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103854da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103854dc mov eax, 0x10389780 */
  EAX = (0x10389780u);
L_103854e1:;
  /* 103854e1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103854e3 je 0x103854f0 */
  if (C.zf) goto L_103854f0;
  /* 103854e5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103854e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103854e9 cmp eax, 0x10389810 */
  { uint32_t _a=(EAX),_b=(0x10389810u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103854ee jl 0x103854e1 */
  if ((C.sf!=C.of)) goto L_103854e1;
L_103854f0:;
  /* 103854f0 push esi */
  push32((uint32_t)(ESI));
  /* 103854f1 mov esi, ecx */
  ESI = (ECX);
  /* 103854f3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 103854f6 cmp edx, dword ptr [esi + 0x10389780] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10389780))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103854fc jne 0x1038561e */
  if (!C.zf) goto L_1038561e;
  /* 10385502 mov eax, dword ptr [0x1038a0e0] */
  EAX = (r32((uint32_t)(0x1038a0e0)));
  /* 10385507 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038550a je 0x103855f8 */
  if (C.zf) goto L_103855f8;
  /* 10385510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10385512 jne 0x10385521 */
  if (!C.zf) goto L_10385521;
  /* 10385514 cmp dword ptr [0x1038a0e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1038a0e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038551b je 0x103855f8 */
  if (C.zf) goto L_103855f8;
L_10385521:;
  /* 10385521 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385527 je 0x1038561e */
  if (C.zf) goto L_1038561e;
  /* 1038552d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10385533 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10385538 push eax */
  push32((uint32_t)(EAX));
  /* 10385539 push 0 */
  push32((uint32_t)(0x0u));
  /* 1038553b call dword ptr [0x10388068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388068))), 0x10385541u);
  /* 10385541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10385543 jne 0x10385558 */
  if (!C.zf) goto L_10385558;
  /* 10385545 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1038554b push 0x10388460 */
  push32((uint32_t)(0x10388460u));
  /* 10385550 push eax */
  push32((uint32_t)(EAX));
  /* 10385551 call 0x10385890 */
  push32(0x10385556u); f_10385890();
  /* 10385556 pop ecx */
  ECX = (pop32());
  /* 10385557 pop ecx */
  ECX = (pop32());
L_10385558:;
  /* 10385558 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1038555e push edi */
  push32((uint32_t)(EDI));
  /* 1038555f push eax */
  push32((uint32_t)(EAX));
  /* 10385560 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10385566 call 0x10385980 */
  push32(0x1038556bu); f_10385980();
  /* 1038556b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1038556c pop ecx */
  ECX = (pop32());
  /* 1038556d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385570 jbe 0x1038559b */
  if ((C.cf||C.zf)) goto L_1038559b;
  /* 10385572 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10385578 push eax */
  push32((uint32_t)(EAX));
  /* 10385579 call 0x10385980 */
  push32(0x1038557eu); f_10385980();
  /* 1038557e mov edi, eax */
  EDI = (EAX);
  /* 10385580 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10385586 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385589 push 3 */
  push32((uint32_t)(0x3u));
  /* 1038558b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038558d push 0x1038845c */
  push32((uint32_t)(0x1038845cu));
  /* 10385592 push edi */
  push32((uint32_t)(EDI));
  /* 10385593 call 0x10386a00 */
  push32(0x10385598u); f_10386a00();
  /* 10385598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1038559b:;
  /* 1038559b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103855a1 push 0x10388440 */
  push32((uint32_t)(0x10388440u));
  /* 103855a6 push eax */
  push32((uint32_t)(EAX));
  /* 103855a7 call 0x10385890 */
  push32(0x103855acu); f_10385890();
  /* 103855ac lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103855b2 push edi */
  push32((uint32_t)(EDI));
  /* 103855b3 push eax */
  push32((uint32_t)(EAX));
  /* 103855b4 call 0x103858a0 */
  push32(0x103855b9u); f_103858a0();
  /* 103855b9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103855bf push 0x1038843c */
  push32((uint32_t)(0x1038843cu));
  /* 103855c4 push eax */
  push32((uint32_t)(EAX));
  /* 103855c5 call 0x103858a0 */
  push32(0x103855cau); f_103858a0();
  /* 103855ca push dword ptr [esi + 0x10389784] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10389784))));
  /* 103855d0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103855d6 push eax */
  push32((uint32_t)(EAX));
  /* 103855d7 call 0x103858a0 */
  push32(0x103855dcu); f_103858a0();
  /* 103855dc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 103855e1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103855e7 push 0x10388414 */
  push32((uint32_t)(0x10388414u));
  /* 103855ec push eax */
  push32((uint32_t)(EAX));
  /* 103855ed call 0x1038696e */
  push32(0x103855f2u); f_1038696e();
  /* 103855f2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103855f5 pop edi */
  EDI = (pop32());
  /* 103855f6 jmp 0x1038561e */
  goto L_1038561e;
L_103855f8:;
  /* 103855f8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103855fb lea esi, [esi + 0x10389784] */
  ESI = ((uint32_t)(ESI + 0x10389784));
  /* 10385601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10385603 push eax */
  push32((uint32_t)(EAX));
  /* 10385604 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10385606 call 0x10385980 */
  push32(0x1038560bu); f_10385980();
  /* 1038560b pop ecx */
  ECX = (pop32());
  /* 1038560c push eax */
  push32((uint32_t)(EAX));
  /* 1038560d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1038560f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10385611 call dword ptr [0x10388078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388078))), 0x10385617u);
  /* 10385617 push eax */
  push32((uint32_t)(EAX));
  /* 10385618 call dword ptr [0x1038804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038804c))), 0x1038561eu);
L_1038561e:;
  /* 1038561e pop esi */
  ESI = (pop32());
  /* 1038561f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385620 ret  */
  ESPCHK(0x103854ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10005621 @ 0x10385621 (41 bytes, 12 insns) */
void f_10385621(void) {
  FTRACE(0x10385621u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385621 push esi */
  push32((uint32_t)(ESI));
  /* 10385622 mov esi, dword ptr [0x1038803c] */
  ESI = (r32((uint32_t)(0x1038803c)));
  /* 10385628 push dword ptr [0x10389854] */
  push32((uint32_t)(r32((uint32_t)(0x10389854))));
  /* 1038562e call esi */
  call_ind((uint32_t)(ESI), 0x10385630u);
  /* 10385630 push dword ptr [0x10389844] */
  push32((uint32_t)(r32((uint32_t)(0x10389844))));
  /* 10385636 call esi */
  call_ind((uint32_t)(ESI), 0x10385638u);
  /* 10385638 push dword ptr [0x10389834] */
  push32((uint32_t)(r32((uint32_t)(0x10389834))));
  /* 1038563e call esi */
  call_ind((uint32_t)(ESI), 0x10385640u);
  /* 10385640 push dword ptr [0x10389814] */
  push32((uint32_t)(r32((uint32_t)(0x10389814))));
  /* 10385646 call esi */
  call_ind((uint32_t)(ESI), 0x10385648u);
  /* 10385648 pop esi */
  ESI = (pop32());
  /* 10385649 ret  */
  ESPCHK(0x10385621u, _esp0);
  ESP += 4; return;
}

/* FUN_1000564a @ 0x1038564a (108 bytes, 34 insns) */
void f_1038564a(void) {
  FTRACE(0x1038564au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038564a push esi */
  push32((uint32_t)(ESI));
  /* 1038564b push edi */
  push32((uint32_t)(EDI));
  /* 1038564c mov edi, dword ptr [0x1038806c] */
  EDI = (r32((uint32_t)(0x1038806c)));
  /* 10385652 mov esi, 0x10389810 */
  ESI = (0x10389810u);
L_10385657:;
  /* 10385657 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10385659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038565b je 0x10385688 */
  if (C.zf) goto L_10385688;
  /* 1038565d cmp esi, 0x10389854 */
  { uint32_t _a=(ESI),_b=(0x10389854u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385663 je 0x10385688 */
  if (C.zf) goto L_10385688;
  /* 10385665 cmp esi, 0x10389844 */
  { uint32_t _a=(ESI),_b=(0x10389844u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038566b je 0x10385688 */
  if (C.zf) goto L_10385688;
  /* 1038566d cmp esi, 0x10389834 */
  { uint32_t _a=(ESI),_b=(0x10389834u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385673 je 0x10385688 */
  if (C.zf) goto L_10385688;
  /* 10385675 cmp esi, 0x10389814 */
  { uint32_t _a=(ESI),_b=(0x10389814u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038567b je 0x10385688 */
  if (C.zf) goto L_10385688;
  /* 1038567d push eax */
  push32((uint32_t)(EAX));
  /* 1038567e call edi */
  call_ind((uint32_t)(EDI), 0x10385680u);
  /* 10385680 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10385682 call 0x103857b9 */
  push32(0x10385687u); f_103857b9();
  /* 10385687 pop ecx */
  ECX = (pop32());
L_10385688:;
  /* 10385688 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038568b cmp esi, 0x103898d0 */
  { uint32_t _a=(ESI),_b=(0x103898d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385691 jl 0x10385657 */
  if ((C.sf!=C.of)) goto L_10385657;
  /* 10385693 push dword ptr [0x10389834] */
  push32((uint32_t)(r32((uint32_t)(0x10389834))));
  /* 10385699 call edi */
  call_ind((uint32_t)(EDI), 0x1038569bu);
  /* 1038569b push dword ptr [0x10389844] */
  push32((uint32_t)(r32((uint32_t)(0x10389844))));
  /* 103856a1 call edi */
  call_ind((uint32_t)(EDI), 0x103856a3u);
  /* 103856a3 push dword ptr [0x10389854] */
  push32((uint32_t)(r32((uint32_t)(0x10389854))));
  /* 103856a9 call edi */
  call_ind((uint32_t)(EDI), 0x103856abu);
  /* 103856ab push dword ptr [0x10389814] */
  push32((uint32_t)(r32((uint32_t)(0x10389814))));
  /* 103856b1 call edi */
  call_ind((uint32_t)(EDI), 0x103856b3u);
  /* 103856b3 pop edi */
  EDI = (pop32());
  /* 103856b4 pop esi */
  ESI = (pop32());
  /* 103856b5 ret  */
  ESPCHK(0x1038564au, _esp0);
  ESP += 4; return;
}

/* FUN_100056b6 @ 0x103856b6 (97 bytes, 37 insns) */
void f_103856b6(void) {
  FTRACE(0x103856b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103856b6 push ebp */
  push32((uint32_t)(EBP));
  /* 103856b7 mov ebp, esp */
  EBP = (ESP);
  /* 103856b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103856bc push esi */
  push32((uint32_t)(ESI));
  /* 103856bd cmp dword ptr [eax*4 + 0x10389810], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10389810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103856c5 lea esi, [eax*4 + 0x10389810] */
  ESI = ((uint32_t)(EAX*4 + 0x10389810));
  /* 103856cc jne 0x1038570c */
  if (!C.zf) goto L_1038570c;
  /* 103856ce push edi */
  push32((uint32_t)(EDI));
  /* 103856cf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103856d1 call 0x10385801 */
  push32(0x103856d6u); f_10385801();
  /* 103856d6 mov edi, eax */
  EDI = (EAX);
  /* 103856d8 pop ecx */
  ECX = (pop32());
  /* 103856d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103856db jne 0x103856e5 */
  if (!C.zf) goto L_103856e5;
  /* 103856dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103856df call 0x10384b26 */
  push32(0x103856e4u); f_10384b26();
  /* 103856e4 pop ecx */
  ECX = (pop32());
L_103856e5:;
  /* 103856e5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103856e7 call 0x103856b6 */
  push32(0x103856ecu); f_103856b6();
  /* 103856ec cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103856ef pop ecx */
  ECX = (pop32());
  /* 103856f0 push edi */
  push32((uint32_t)(EDI));
  /* 103856f1 jne 0x103856fd */
  if (!C.zf) goto L_103856fd;
  /* 103856f3 call dword ptr [0x1038803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038803c))), 0x103856f9u);
  /* 103856f9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103856fb jmp 0x10385703 */
  goto L_10385703;
L_103856fd:;
  /* 103856fd call 0x103857b9 */
  push32(0x10385702u); f_103857b9();
  /* 10385702 pop ecx */
  ECX = (pop32());
L_10385703:;
  /* 10385703 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10385705 call 0x10385717 */
  push32(0x1038570au); f_10385717();
  /* 1038570a pop ecx */
  ECX = (pop32());
  /* 1038570b pop edi */
  EDI = (pop32());
L_1038570c:;
  /* 1038570c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1038570e call dword ptr [0x10388038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388038))), 0x10385714u);
  /* 10385714 pop esi */
  ESI = (pop32());
  /* 10385715 pop ebp */
  EBP = (pop32());
  /* 10385716 ret  */
  ESPCHK(0x103856b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005717 @ 0x10385717 (21 bytes, 7 insns) */
void f_10385717(void) {
  FTRACE(0x10385717u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385717 push ebp */
  push32((uint32_t)(EBP));
  /* 10385718 mov ebp, esp */
  EBP = (ESP);
  /* 1038571a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1038571d push dword ptr [eax*4 + 0x10389810] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10389810))));
  /* 10385724 call dword ptr [0x10388040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388040))), 0x1038572au);
  /* 1038572a pop ebp */
  EBP = (pop32());
  /* 1038572b ret  */
  ESPCHK(0x10385717u, _esp0);
  ESP += 4; return;
}

/* FUN_1000572c @ 0x1038572c (141 bytes, 56 insns) */
void f_1038572c(void) {
  FTRACE(0x1038572cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038572c push ebx */
  push32((uint32_t)(EBX));
  /* 1038572d push esi */
  push32((uint32_t)(ESI));
  /* 1038572e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10385732 push edi */
  push32((uint32_t)(EDI));
  /* 10385733 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10385738 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038573b mov ebx, esi */
  EBX = (ESI);
  /* 1038573d ja 0x1038574c */
  if ((!C.cf&&!C.zf)) goto L_1038574c;
  /* 1038573f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385741 jne 0x10385746 */
  if (!C.zf) goto L_10385746;
  /* 10385743 push 1 */
  push32((uint32_t)(0x1u));
  /* 10385745 pop esi */
  ESI = (pop32());
L_10385746:;
  /* 10385746 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385749 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1038574c:;
  /* 1038574c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1038574e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385751 ja 0x1038578d */
  if ((!C.cf&&!C.zf)) goto L_1038578d;
  /* 10385753 cmp ebx, dword ptr [0x10389a60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10389a60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385759 ja 0x10385778 */
  if ((!C.cf&&!C.zf)) goto L_10385778;
  /* 1038575b push 9 */
  push32((uint32_t)(0x9u));
  /* 1038575d call 0x103856b6 */
  push32(0x10385762u); f_103856b6();
  /* 10385762 push ebx */
  push32((uint32_t)(EBX));
  /* 10385763 call 0x103864b9 */
  push32(0x10385768u); f_103864b9();
  /* 10385768 push 9 */
  push32((uint32_t)(0x9u));
  /* 1038576a mov edi, eax */
  EDI = (EAX);
  /* 1038576c call 0x10385717 */
  push32(0x10385771u); f_10385717();
  /* 10385771 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10385774 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10385776 jne 0x103857a3 */
  if (!C.zf) goto L_103857a3;
L_10385778:;
  /* 10385778 push esi */
  push32((uint32_t)(ESI));
  /* 10385779 push 8 */
  push32((uint32_t)(0x8u));
  /* 1038577b push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10385781 call dword ptr [0x10388034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388034))), 0x10385787u);
  /* 10385787 mov edi, eax */
  EDI = (EAX);
  /* 10385789 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1038578b jne 0x103857af */
  if (!C.zf) goto L_103857af;
L_1038578d:;
  /* 1038578d cmp dword ptr [0x1038a2ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1038a2ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385794 je 0x103857af */
  if (C.zf) goto L_103857af;
  /* 10385796 push esi */
  push32((uint32_t)(ESI));
  /* 10385797 call 0x10386b58 */
  push32(0x1038579cu); f_10386b58();
  /* 1038579c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038579e pop ecx */
  ECX = (pop32());
  /* 1038579f je 0x103857b5 */
  if (C.zf) goto L_103857b5;
  /* 103857a1 jmp 0x1038574c */
  goto L_1038574c;
L_103857a3:;
  /* 103857a3 push ebx */
  push32((uint32_t)(EBX));
  /* 103857a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103857a6 push edi */
  push32((uint32_t)(EDI));
  /* 103857a7 call 0x10386b00 */
  push32(0x103857acu); f_10386b00();
  /* 103857ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103857af:;
  /* 103857af mov eax, edi */
  EAX = (EDI);
L_103857b1:;
  /* 103857b1 pop edi */
  EDI = (pop32());
  /* 103857b2 pop esi */
  ESI = (pop32());
  /* 103857b3 pop ebx */
  EBX = (pop32());
  /* 103857b4 ret  */
  ESPCHK(0x1038572cu, _esp0);
  ESP += 4; return;
L_103857b5:;
  /* 103857b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103857b7 jmp 0x103857b1 */
  goto L_103857b1;
}

/* FUN_100057b9 @ 0x103857b9 (72 bytes, 29 insns) */
void f_103857b9(void) {
  FTRACE(0x103857b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103857b9 push esi */
  push32((uint32_t)(ESI));
  /* 103857ba mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 103857be test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103857c0 je 0x103857ff */
  if (C.zf) goto L_103857ff;
  /* 103857c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103857c4 call 0x103856b6 */
  push32(0x103857c9u); f_103856b6();
  /* 103857c9 push esi */
  push32((uint32_t)(ESI));
  /* 103857ca call 0x10386163 */
  push32(0x103857cfu); f_10386163();
  /* 103857cf pop ecx */
  ECX = (pop32());
  /* 103857d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103857d2 pop ecx */
  ECX = (pop32());
  /* 103857d3 je 0x103857e8 */
  if (C.zf) goto L_103857e8;
  /* 103857d5 push esi */
  push32((uint32_t)(ESI));
  /* 103857d6 push eax */
  push32((uint32_t)(EAX));
  /* 103857d7 call 0x1038618e */
  push32(0x103857dcu); f_1038618e();
  /* 103857dc push 9 */
  push32((uint32_t)(0x9u));
  /* 103857de call 0x10385717 */
  push32(0x103857e3u); f_10385717();
  /* 103857e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103857e6 pop esi */
  ESI = (pop32());
  /* 103857e7 ret  */
  ESPCHK(0x103857b9u, _esp0);
  ESP += 4; return;
L_103857e8:;
  /* 103857e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 103857ea call 0x10385717 */
  push32(0x103857efu); f_10385717();
  /* 103857ef pop ecx */
  ECX = (pop32());
  /* 103857f0 push esi */
  push32((uint32_t)(ESI));
  /* 103857f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103857f3 push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 103857f9 call dword ptr [0x10388044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388044))), 0x103857ffu);
L_103857ff:;
  /* 103857ff pop esi */
  ESI = (pop32());
  /* 10385800 ret  */
  ESPCHK(0x103857b9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10385801 (18 bytes, 6 insns) */
void f_10385801(void) {
  FTRACE(0x10385801u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385801 push dword ptr [0x1038a2ac] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2ac))));
  /* 10385807 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1038580b call 0x10385813 */
  push32(0x10385810u); f_10385813();
  /* 10385810 pop ecx */
  ECX = (pop32());
  /* 10385811 pop ecx */
  ECX = (pop32());
  /* 10385812 ret  */
  ESPCHK(0x10385801u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10385813 (44 bytes, 16 insns) */
void f_10385813(void) {
  FTRACE(0x10385813u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385813 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385818 ja 0x1038583c */
  if ((!C.cf&&!C.zf)) goto L_1038583c;
L_1038581a:;
  /* 1038581a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1038581e call 0x1038583f */
  push32(0x10385823u); f_1038583f();
  /* 10385823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10385825 pop ecx */
  ECX = (pop32());
  /* 10385826 jne 0x1038583e */
  if (!C.zf) goto L_1038583e;
  /* 10385828 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038582c je 0x1038583e */
  if (C.zf) goto L_1038583e;
  /* 1038582e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10385832 call 0x10386b58 */
  push32(0x10385837u); f_10386b58();
  /* 10385837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10385839 pop ecx */
  ECX = (pop32());
  /* 1038583a jne 0x1038581a */
  if (!C.zf) goto L_1038581a;
L_1038583c:;
  /* 1038583c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1038583e:;
  /* 1038583e ret  */
  ESPCHK(0x10385813u, _esp0);
  ESP += 4; return;
}

/* FUN_1000583f @ 0x1038583f (78 bytes, 30 insns) */
void f_1038583f(void) {
  FTRACE(0x1038583fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038583f push esi */
  push32((uint32_t)(ESI));
  /* 10385840 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10385844 cmp esi, dword ptr [0x10389a60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10389a60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038584a push edi */
  push32((uint32_t)(EDI));
  /* 1038584b ja 0x1038586e */
  if ((!C.cf&&!C.zf)) goto L_1038586e;
  /* 1038584d push 9 */
  push32((uint32_t)(0x9u));
  /* 1038584f call 0x103856b6 */
  push32(0x10385854u); f_103856b6();
  /* 10385854 push esi */
  push32((uint32_t)(ESI));
  /* 10385855 call 0x103864b9 */
  push32(0x1038585au); f_103864b9();
  /* 1038585a push 9 */
  push32((uint32_t)(0x9u));
  /* 1038585c mov edi, eax */
  EDI = (EAX);
  /* 1038585e call 0x10385717 */
  push32(0x10385863u); f_10385717();
  /* 10385863 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10385866 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10385868 je 0x1038586e */
  if (C.zf) goto L_1038586e;
  /* 1038586a mov eax, edi */
  EAX = (EDI);
  /* 1038586c jmp 0x1038588a */
  goto L_1038588a;
L_1038586e:;
  /* 1038586e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10385870 jne 0x10385875 */
  if (!C.zf) goto L_10385875;
  /* 10385872 push 1 */
  push32((uint32_t)(0x1u));
  /* 10385874 pop esi */
  ESI = (pop32());
L_10385875:;
  /* 10385875 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385878 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1038587b push esi */
  push32((uint32_t)(ESI));
  /* 1038587c push 0 */
  push32((uint32_t)(0x0u));
  /* 1038587e push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10385884 call dword ptr [0x10388034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388034))), 0x1038588au);
L_1038588a:;
  /* 1038588a pop edi */
  EDI = (pop32());
  /* 1038588b pop esi */
  ESI = (pop32());
  /* 1038588c ret  */
  ESPCHK(0x1038583fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005890 @ 0x10385890 (7 bytes, 3 insns) */
void f_10385890(void) {
  FTRACE(0x10385890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385890 push edi */
  push32((uint32_t)(EDI));
  /* 10385891 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10385895 jmp 0x10385901 */
  jmp_ind(0x10385901u); return;
}

/* FUN_100058a0 @ 0x103858a0 (224 bytes, 84 insns) */
void f_103858a0(void) {
  FTRACE(0x103858a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103858a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103858a4 push edi */
  push32((uint32_t)(EDI));
  /* 103858a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103858ab je 0x103858bc */
  if (C.zf) goto L_103858bc;
L_103858ad:;
  /* 103858ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103858af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103858b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103858b2 je 0x103858ef */
  if (C.zf) goto L_103858ef;
  /* 103858b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103858ba jne 0x103858ad */
  if (!C.zf) goto L_103858ad;
L_103858bc:;
  /* 103858bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103858be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103858c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103858c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103858c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103858ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103858cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103858d2 je 0x103858bc */
  if (C.zf) goto L_103858bc;
  /* 103858d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103858d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103858d9 je 0x103858fe */
  if (C.zf) goto L_103858fe;
  /* 103858db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103858dd je 0x103858f9 */
  if (C.zf) goto L_103858f9;
  /* 103858df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103858e4 je 0x103858f4 */
  if (C.zf) goto L_103858f4;
  /* 103858e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103858eb je 0x103858ef */
  if (C.zf) goto L_103858ef;
  /* 103858ed jmp 0x103858bc */
  goto L_103858bc;
L_103858ef:;
  /* 103858ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 103858f2 jmp 0x10385901 */
  goto L_10385901;
L_103858f4:;
  /* 103858f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 103858f7 jmp 0x10385901 */
  goto L_10385901;
L_103858f9:;
  /* 103858f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 103858fc jmp 0x10385901 */
  goto L_10385901;
L_103858fe:;
  /* 103858fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10385901:;
  /* 10385901 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10385905 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1038590b je 0x10385926 */
  if (C.zf) goto L_10385926;
L_1038590d:;
  /* 1038590d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1038590f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385910 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10385912 je 0x10385978 */
  if (C.zf) goto L_10385978;
  /* 10385914 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10385916 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10385917 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1038591d jne 0x1038590d */
  if (!C.zf) goto L_1038590d;
  /* 1038591f jmp 0x10385926 */
  goto L_10385926;
L_10385921:;
  /* 10385921 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10385923 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10385926:;
  /* 10385926 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1038592b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1038592d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1038592f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10385932 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10385934 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10385936 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10385939 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1038593e je 0x10385921 */
  if (C.zf) goto L_10385921;
  /* 10385940 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10385942 je 0x10385978 */
  if (C.zf) goto L_10385978;
  /* 10385944 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10385946 je 0x1038596f */
  if (C.zf) goto L_1038596f;
  /* 10385948 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1038594e je 0x10385962 */
  if (C.zf) goto L_10385962;
  /* 10385950 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10385956 je 0x1038595a */
  if (C.zf) goto L_1038595a;
  /* 10385958 jmp 0x10385921 */
  goto L_10385921;
L_1038595a:;
  /* 1038595a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1038595c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10385960 pop edi */
  EDI = (pop32());
  /* 10385961 ret  */
  ESPCHK(0x103858a0u, _esp0);
  ESP += 4; return;
L_10385962:;
  /* 10385962 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10385965 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10385969 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1038596d pop edi */
  EDI = (pop32());
  /* 1038596e ret  */
  ESPCHK(0x103858a0u, _esp0);
  ESP += 4; return;
L_1038596f:;
  /* 1038596f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10385972 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10385976 pop edi */
  EDI = (pop32());
  /* 10385977 ret  */
  ESPCHK(0x103858a0u, _esp0);
  ESP += 4; return;
L_10385978:;
  /* 10385978 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1038597a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1038597e pop edi */
  EDI = (pop32());
  /* 1038597f ret  */
  ESPCHK(0x103858a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10385980 (123 bytes, 44 insns) */
void f_10385980(void) {
  FTRACE(0x10385980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385980 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10385984 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1038598a je 0x103859a0 */
  if (C.zf) goto L_103859a0;
L_1038598c:;
  /* 1038598c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1038598e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1038598f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10385991 je 0x103859d3 */
  if (C.zf) goto L_103859d3;
  /* 10385993 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10385999 jne 0x1038598c */
  if (!C.zf) goto L_1038598c;
  /* 1038599b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103859a0:;
  /* 103859a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103859a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103859a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103859a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103859ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103859ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103859b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103859b6 je 0x103859a0 */
  if (C.zf) goto L_103859a0;
  /* 103859b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103859bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103859bd je 0x103859f1 */
  if (C.zf) goto L_103859f1;
  /* 103859bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103859c1 je 0x103859e7 */
  if (C.zf) goto L_103859e7;
  /* 103859c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103859c8 je 0x103859dd */
  if (C.zf) goto L_103859dd;
  /* 103859ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103859cf je 0x103859d3 */
  if (C.zf) goto L_103859d3;
  /* 103859d1 jmp 0x103859a0 */
  goto L_103859a0;
L_103859d3:;
  /* 103859d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 103859d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103859da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103859dc ret  */
  ESPCHK(0x10385980u, _esp0);
  ESP += 4; return;
L_103859dd:;
  /* 103859dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 103859e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103859e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103859e6 ret  */
  ESPCHK(0x10385980u, _esp0);
  ESP += 4; return;
L_103859e7:;
  /* 103859e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 103859ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103859ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103859f0 ret  */
  ESPCHK(0x10385980u, _esp0);
  ESP += 4; return;
L_103859f1:;
  /* 103859f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 103859f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103859f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103859fa ret  */
  ESPCHK(0x10385980u, _esp0);
  ESP += 4; return;
}

/* FUN_100059fb @ 0x103859fb (429 bytes, 143 insns) */
void f_103859fb(void) {
  FTRACE(0x103859fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103859fb push ebp */
  push32((uint32_t)(EBP));
  /* 103859fc mov ebp, esp */
  EBP = (ESP);
  /* 103859fe sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385a01 push ebx */
  push32((uint32_t)(EBX));
  /* 10385a02 push esi */
  push32((uint32_t)(ESI));
  /* 10385a03 push edi */
  push32((uint32_t)(EDI));
  /* 10385a04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10385a06 call 0x103856b6 */
  push32(0x10385a0bu); f_103856b6();
  /* 10385a0b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10385a0e call 0x10385ba8 */
  push32(0x10385a13u); f_10385ba8();
  /* 10385a13 mov ebx, eax */
  EBX = (EAX);
  /* 10385a15 pop ecx */
  ECX = (pop32());
  /* 10385a16 cmp ebx, dword ptr [0x1038a2f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1038a2f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385a1c pop ecx */
  ECX = (pop32());
  /* 10385a1d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10385a20 jne 0x10385a29 */
  if (!C.zf) goto L_10385a29;
L_10385a22:;
  /* 10385a22 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10385a24 jmp 0x10385b99 */
  goto L_10385b99;
L_10385a29:;
  /* 10385a29 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10385a2b je 0x10385b87 */
  if (C.zf) goto L_10385b87;
  /* 10385a31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10385a33 mov eax, 0x10389968 */
  EAX = (0x10389968u);
L_10385a38:;
  /* 10385a38 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385a3a je 0x10385ab0 */
  if (C.zf) goto L_10385ab0;
  /* 10385a3c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10385a3f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10385a40 cmp eax, 0x10389a58 */
  { uint32_t _a=(EAX),_b=(0x10389a58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385a45 jl 0x10385a38 */
  if ((C.sf!=C.of)) goto L_10385a38;
  /* 10385a47 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10385a4a push eax */
  push32((uint32_t)(EAX));
  /* 10385a4b push ebx */
  push32((uint32_t)(EBX));
  /* 10385a4c call dword ptr [0x1038802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038802c))), 0x10385a52u);
  /* 10385a52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10385a54 pop esi */
  ESI = (pop32());
  /* 10385a55 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385a57 jne 0x10385b7e */
  if (!C.zf) goto L_10385b7e;
  /* 10385a5d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10385a5f and dword ptr [0x1038a524], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1038a524)))&(0x0u); w32((uint32_t)(0x1038a524), (_r)); fl_logic(_r,32); }
  /* 10385a66 pop ecx */
  ECX = (pop32());
  /* 10385a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385a69 mov edi, 0x1038a420 */
  EDI = (0x1038a420u);
  /* 10385a6e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385a71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10385a73 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10385a74 mov dword ptr [0x1038a2f0], ebx */
  w32((uint32_t)(0x1038a2f0), (EBX));
  /* 10385a7a jbe 0x10385b6b */
  if ((C.cf||C.zf)) goto L_10385b6b;
  /* 10385a80 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385a84 je 0x10385b46 */
  if (C.zf) goto L_10385b46;
  /* 10385a8a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10385a8d:;
  /* 10385a8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10385a8f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10385a91 je 0x10385b46 */
  if (C.zf) goto L_10385b46;
  /* 10385a97 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10385a9b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10385a9e:;
  /* 10385a9e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385aa0 ja 0x10385b3a */
  if ((!C.cf&&!C.zf)) goto L_10385b3a;
  /* 10385aa6 or byte ptr [eax + 0x1038a421], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(0x4u); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385aad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385aae jmp 0x10385a9e */
  goto L_10385a9e;
L_10385ab0:;
  /* 10385ab0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10385ab4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10385ab6 pop ecx */
  ECX = (pop32());
  /* 10385ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385ab9 mov edi, 0x1038a420 */
  EDI = (0x1038a420u);
  /* 10385abe lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10385ac1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10385ac3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10385ac6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10385ac7 lea ebx, [esi + 0x10389978] */
  EBX = ((uint32_t)(ESI + 0x10389978));
L_10385acd:;
  /* 10385acd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385ad0 mov ecx, ebx */
  ECX = (EBX);
  /* 10385ad2 je 0x10385b00 */
  if (C.zf) goto L_10385b00;
L_10385ad4:;
  /* 10385ad4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10385ad7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10385ad9 je 0x10385b00 */
  if (C.zf) goto L_10385b00;
  /* 10385adb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10385ade movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10385ae1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385ae3 ja 0x10385af9 */
  if ((!C.cf&&!C.zf)) goto L_10385af9;
  /* 10385ae5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10385ae8 mov dl, byte ptr [edx + 0x10389960] */
  DL = (r8((uint32_t)(EDX + 0x10389960)));
L_10385aee:;
  /* 10385aee or byte ptr [eax + 0x1038a421], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(DL); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385af4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385af5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385af7 jbe 0x10385aee */
  if ((C.cf||C.zf)) goto L_10385aee;
L_10385af9:;
  /* 10385af9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385afa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385afb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385afe jne 0x10385ad4 */
  if (!C.zf) goto L_10385ad4;
L_10385b00:;
  /* 10385b00 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10385b03 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10385b06 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385b0a jb 0x10385acd */
  if (C.cf) goto L_10385acd;
  /* 10385b0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10385b0f mov dword ptr [0x1038a30c], 1 */
  w32((uint32_t)(0x1038a30c), (0x1u));
  /* 10385b19 push eax */
  push32((uint32_t)(EAX));
  /* 10385b1a mov dword ptr [0x1038a2f0], eax */
  w32((uint32_t)(0x1038a2f0), (EAX));
  /* 10385b1f call 0x10385bf2 */
  push32(0x10385b24u); f_10385bf2();
  /* 10385b24 lea esi, [esi + 0x1038996c] */
  ESI = ((uint32_t)(ESI + 0x1038996c));
  /* 10385b2a mov edi, 0x1038a300 */
  EDI = (0x1038a300u);
  /* 10385b2f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10385b30 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10385b31 pop ecx */
  ECX = (pop32());
  /* 10385b32 mov dword ptr [0x1038a524], eax */
  w32((uint32_t)(0x1038a524), (EAX));
  /* 10385b37 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10385b38 jmp 0x10385b8c */
  goto L_10385b8c;
L_10385b3a:;
  /* 10385b3a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385b3b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385b3c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10385b40 jne 0x10385a8d */
  if (!C.zf) goto L_10385a8d;
L_10385b46:;
  /* 10385b46 mov eax, esi */
  EAX = (ESI);
L_10385b48:;
  /* 10385b48 or byte ptr [eax + 0x1038a421], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(0x8u); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385b4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385b50 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385b55 jb 0x10385b48 */
  if (C.cf) goto L_10385b48;
  /* 10385b57 push ebx */
  push32((uint32_t)(EBX));
  /* 10385b58 call 0x10385bf2 */
  push32(0x10385b5du); f_10385bf2();
  /* 10385b5d pop ecx */
  ECX = (pop32());
  /* 10385b5e mov dword ptr [0x1038a524], eax */
  w32((uint32_t)(0x1038a524), (EAX));
  /* 10385b63 mov dword ptr [0x1038a30c], esi */
  w32((uint32_t)(0x1038a30c), (ESI));
  /* 10385b69 jmp 0x10385b72 */
  goto L_10385b72;
L_10385b6b:;
  /* 10385b6b and dword ptr [0x1038a30c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1038a30c)))&(0x0u); w32((uint32_t)(0x1038a30c), (_r)); fl_logic(_r,32); }
L_10385b72:;
  /* 10385b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385b74 mov edi, 0x1038a300 */
  EDI = (0x1038a300u);
  /* 10385b79 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10385b7a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10385b7b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10385b7c jmp 0x10385b8c */
  goto L_10385b8c;
L_10385b7e:;
  /* 10385b7e cmp dword ptr [0x1038a298], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1038a298))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385b85 je 0x10385b96 */
  if (C.zf) goto L_10385b96;
L_10385b87:;
  /* 10385b87 call 0x10385c25 */
  push32(0x10385b8cu); f_10385c25();
L_10385b8c:;
  /* 10385b8c call 0x10385c4e */
  push32(0x10385b91u); f_10385c4e();
  /* 10385b91 jmp 0x10385a22 */
  goto L_10385a22;
L_10385b96:;
  /* 10385b96 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10385b99:;
  /* 10385b99 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10385b9b call 0x10385717 */
  push32(0x10385ba0u); f_10385717();
  /* 10385ba0 pop ecx */
  ECX = (pop32());
  /* 10385ba1 mov eax, esi */
  EAX = (ESI);
  /* 10385ba3 pop edi */
  EDI = (pop32());
  /* 10385ba4 pop esi */
  ESI = (pop32());
  /* 10385ba5 pop ebx */
  EBX = (pop32());
  /* 10385ba6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385ba7 ret  */
  ESPCHK(0x103859fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba8 @ 0x10385ba8 (74 bytes, 15 insns) */
void f_10385ba8(void) {
  FTRACE(0x10385ba8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385ba8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10385bac and dword ptr [0x1038a298], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1038a298)))&(0x0u); w32((uint32_t)(0x1038a298), (_r)); fl_logic(_r,32); }
  /* 10385bb3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385bb6 jne 0x10385bc8 */
  if (!C.zf) goto L_10385bc8;
  /* 10385bb8 mov dword ptr [0x1038a298], 1 */
  w32((uint32_t)(0x1038a298), (0x1u));
  /* 10385bc2 jmp dword ptr [0x10388030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10388030)))); return;
L_10385bc8:;
  /* 10385bc8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385bcb jne 0x10385bdd */
  if (!C.zf) goto L_10385bdd;
  /* 10385bcd mov dword ptr [0x1038a298], 1 */
  w32((uint32_t)(0x1038a298), (0x1u));
  /* 10385bd7 jmp dword ptr [0x10388028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10388028)))); return;
L_10385bdd:;
  /* 10385bdd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385be0 jne 0x10385bf1 */
  if (!C.zf) goto L_10385bf1;
  /* 10385be2 mov eax, dword ptr [0x1038a2c8] */
  EAX = (r32((uint32_t)(0x1038a2c8)));
  /* 10385be7 mov dword ptr [0x1038a298], 1 */
  w32((uint32_t)(0x1038a298), (0x1u));
L_10385bf1:;
  /* 10385bf1 ret  */
  ESPCHK(0x10385ba8u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf2 @ 0x10385bf2 (51 bytes, 19 insns) */
void f_10385bf2(void) {
  FTRACE(0x10385bf2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385bf2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10385bf6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385bfb je 0x10385c1f */
  if (C.zf) goto L_10385c1f;
  /* 10385bfd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385c00 je 0x10385c19 */
  if (C.zf) goto L_10385c19;
  /* 10385c02 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385c05 je 0x10385c13 */
  if (C.zf) goto L_10385c13;
  /* 10385c07 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10385c08 je 0x10385c0d */
  if (C.zf) goto L_10385c0d;
  /* 10385c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385c0c ret  */
  ESPCHK(0x10385bf2u, _esp0);
  ESP += 4; return;
L_10385c0d:;
  /* 10385c0d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10385c12 ret  */
  ESPCHK(0x10385bf2u, _esp0);
  ESP += 4; return;
L_10385c13:;
  /* 10385c13 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10385c18 ret  */
  ESPCHK(0x10385bf2u, _esp0);
  ESP += 4; return;
L_10385c19:;
  /* 10385c19 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10385c1e ret  */
  ESPCHK(0x10385bf2u, _esp0);
  ESP += 4; return;
L_10385c1f:;
  /* 10385c1f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10385c24 ret  */
  ESPCHK(0x10385bf2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c25 @ 0x10385c25 (41 bytes, 17 insns) */
void f_10385c25(void) {
  FTRACE(0x10385c25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385c25 push edi */
  push32((uint32_t)(EDI));
  /* 10385c26 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10385c28 pop ecx */
  ECX = (pop32());
  /* 10385c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385c2b mov edi, 0x1038a420 */
  EDI = (0x1038a420u);
  /* 10385c30 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10385c32 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10385c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385c35 mov edi, 0x1038a300 */
  EDI = (0x1038a300u);
  /* 10385c3a mov dword ptr [0x1038a2f0], eax */
  w32((uint32_t)(0x1038a2f0), (EAX));
  /* 10385c3f mov dword ptr [0x1038a30c], eax */
  w32((uint32_t)(0x1038a30c), (EAX));
  /* 10385c44 mov dword ptr [0x1038a524], eax */
  w32((uint32_t)(0x1038a524), (EAX));
  /* 10385c49 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10385c4a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10385c4b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10385c4c pop edi */
  EDI = (pop32());
  /* 10385c4d ret  */
  ESPCHK(0x10385c25u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c4e @ 0x10385c4e (389 bytes, 124 insns) */
void f_10385c4e(void) {
  FTRACE(0x10385c4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385c4e push ebp */
  push32((uint32_t)(EBP));
  /* 10385c4f mov ebp, esp */
  EBP = (ESP);
  /* 10385c51 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385c57 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10385c5a push esi */
  push32((uint32_t)(ESI));
  /* 10385c5b push eax */
  push32((uint32_t)(EAX));
  /* 10385c5c push dword ptr [0x1038a2f0] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2f0))));
  /* 10385c62 call dword ptr [0x1038802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038802c))), 0x10385c68u);
  /* 10385c68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385c6b jne 0x10385d87 */
  if (!C.zf) goto L_10385d87;
  /* 10385c71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385c73 mov esi, 0x100 */
  ESI = (0x100u);
L_10385c78:;
  /* 10385c78 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10385c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385c80 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385c82 jb 0x10385c78 */
  if (C.cf) goto L_10385c78;
  /* 10385c84 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10385c87 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10385c8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10385c90 je 0x10385cc9 */
  if (C.zf) goto L_10385cc9;
  /* 10385c92 push ebx */
  push32((uint32_t)(EBX));
  /* 10385c93 push edi */
  push32((uint32_t)(EDI));
  /* 10385c94 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10385c97:;
  /* 10385c97 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10385c9a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10385c9d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385c9f ja 0x10385cbe */
  if ((!C.cf&&!C.zf)) goto L_10385cbe;
  /* 10385ca1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385ca3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10385caa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385cab mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10385cb0 mov ebx, ecx */
  EBX = (ECX);
  /* 10385cb2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385cb5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10385cb7 mov ecx, ebx */
  ECX = (EBX);
  /* 10385cb9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10385cbc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10385cbe:;
  /* 10385cbe inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10385cbf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10385cc0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10385cc3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10385cc5 jne 0x10385c97 */
  if (!C.zf) goto L_10385c97;
  /* 10385cc7 pop edi */
  EDI = (pop32());
  /* 10385cc8 pop ebx */
  EBX = (pop32());
L_10385cc9:;
  /* 10385cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10385ccb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10385cd1 push dword ptr [0x1038a524] */
  push32((uint32_t)(r32((uint32_t)(0x1038a524))));
  /* 10385cd7 push dword ptr [0x1038a2f0] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2f0))));
  /* 10385cdd push eax */
  push32((uint32_t)(EAX));
  /* 10385cde lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10385ce4 push esi */
  push32((uint32_t)(ESI));
  /* 10385ce5 push eax */
  push32((uint32_t)(EAX));
  /* 10385ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10385ce8 call 0x10386dc2 */
  push32(0x10385cedu); f_10386dc2();
  /* 10385ced push 0 */
  push32((uint32_t)(0x0u));
  /* 10385cef lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10385cf5 push dword ptr [0x1038a2f0] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2f0))));
  /* 10385cfb push esi */
  push32((uint32_t)(ESI));
  /* 10385cfc push eax */
  push32((uint32_t)(EAX));
  /* 10385cfd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10385d03 push esi */
  push32((uint32_t)(ESI));
  /* 10385d04 push eax */
  push32((uint32_t)(EAX));
  /* 10385d05 push esi */
  push32((uint32_t)(ESI));
  /* 10385d06 push dword ptr [0x1038a524] */
  push32((uint32_t)(r32((uint32_t)(0x1038a524))));
  /* 10385d0c call 0x10386b73 */
  push32(0x10385d11u); f_10386b73();
  /* 10385d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10385d13 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10385d19 push dword ptr [0x1038a2f0] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2f0))));
  /* 10385d1f push esi */
  push32((uint32_t)(ESI));
  /* 10385d20 push eax */
  push32((uint32_t)(EAX));
  /* 10385d21 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10385d27 push esi */
  push32((uint32_t)(ESI));
  /* 10385d28 push eax */
  push32((uint32_t)(EAX));
  /* 10385d29 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10385d2e push dword ptr [0x1038a524] */
  push32((uint32_t)(r32((uint32_t)(0x1038a524))));
  /* 10385d34 call 0x10386b73 */
  push32(0x10385d39u); f_10386b73();
  /* 10385d39 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10385d3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385d3e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10385d44:;
  /* 10385d44 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10385d47 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10385d4a je 0x10385d62 */
  if (C.zf) goto L_10385d62;
  /* 10385d4c or byte ptr [eax + 0x1038a421], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(0x10u); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385d53 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10385d5a:;
  /* 10385d5a mov byte ptr [eax + 0x1038a320], dl */
  w8((uint32_t)(EAX + 0x1038a320), (DL));
  /* 10385d60 jmp 0x10385d7e */
  goto L_10385d7e;
L_10385d62:;
  /* 10385d62 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10385d65 je 0x10385d77 */
  if (C.zf) goto L_10385d77;
  /* 10385d67 or byte ptr [eax + 0x1038a421], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(0x20u); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385d6e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10385d75 jmp 0x10385d5a */
  goto L_10385d5a;
L_10385d77:;
  /* 10385d77 and byte ptr [eax + 0x1038a320], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a320)))&(0x0u); w8((uint32_t)(EAX + 0x1038a320), (_r)); fl_logic(_r,8); }
L_10385d7e:;
  /* 10385d7e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385d7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385d80 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10385d81 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385d83 jb 0x10385d44 */
  if (C.cf) goto L_10385d44;
  /* 10385d85 jmp 0x10385dd0 */
  goto L_10385dd0;
L_10385d87:;
  /* 10385d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10385d89 mov esi, 0x100 */
  ESI = (0x100u);
L_10385d8e:;
  /* 10385d8e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385d91 jb 0x10385dac */
  if (C.cf) goto L_10385dac;
  /* 10385d93 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385d96 ja 0x10385dac */
  if ((!C.cf&&!C.zf)) goto L_10385dac;
  /* 10385d98 or byte ptr [eax + 0x1038a421], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(0x10u); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385d9f mov cl, al */
  CL = (AL);
  /* 10385da1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10385da4:;
  /* 10385da4 mov byte ptr [eax + 0x1038a320], cl */
  w8((uint32_t)(EAX + 0x1038a320), (CL));
  /* 10385daa jmp 0x10385dcb */
  goto L_10385dcb;
L_10385dac:;
  /* 10385dac cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385daf jb 0x10385dc4 */
  if (C.cf) goto L_10385dc4;
  /* 10385db1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385db4 ja 0x10385dc4 */
  if ((!C.cf&&!C.zf)) goto L_10385dc4;
  /* 10385db6 or byte ptr [eax + 0x1038a421], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a421)))|(0x20u); w8((uint32_t)(EAX + 0x1038a421), (_r)); fl_logic(_r,8); }
  /* 10385dbd mov cl, al */
  CL = (AL);
  /* 10385dbf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10385dc2 jmp 0x10385da4 */
  goto L_10385da4;
L_10385dc4:;
  /* 10385dc4 and byte ptr [eax + 0x1038a320], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1038a320)))&(0x0u); w8((uint32_t)(EAX + 0x1038a320), (_r)); fl_logic(_r,8); }
L_10385dcb:;
  /* 10385dcb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10385dcc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385dce jb 0x10385d8e */
  if (C.cf) goto L_10385d8e;
L_10385dd0:;
  /* 10385dd0 pop esi */
  ESI = (pop32());
  /* 10385dd1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385dd2 ret  */
  ESPCHK(0x10385c4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd3 @ 0x10385dd3 (28 bytes, 7 insns) */
void f_10385dd3(void) {
  FTRACE(0x10385dd3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385dd3 cmp dword ptr [0x1038a648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1038a648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385dda jne 0x10385dee */
  if (!C.zf) goto L_10385dee;
  /* 10385ddc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10385dde call 0x103859fb */
  push32(0x10385de3u); f_103859fb();
  /* 10385de3 pop ecx */
  ECX = (pop32());
  /* 10385de4 mov dword ptr [0x1038a648], 1 */
  w32((uint32_t)(0x1038a648), (0x1u));
L_10385dee:;
  /* 10385dee ret  */
  ESPCHK(0x10385dd3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x10385df0 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10385df0(void) {
  FTRACE(0x10385df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10385df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10385df1 mov ebp, esp */
  EBP = (ESP);
  /* 10385df3 push edi */
  push32((uint32_t)(EDI));
  /* 10385df4 push esi */
  push32((uint32_t)(ESI));
  /* 10385df5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10385df8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10385dfb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10385dfe mov eax, ecx */
  EAX = (ECX);
  /* 10385e00 mov edx, ecx */
  EDX = (ECX);
  /* 10385e02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10385e04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385e06 jbe 0x10385e10 */
  if ((C.cf||C.zf)) goto L_10385e10;
  /* 10385e08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385e0a jb 0x10385f88 */
  if (C.cf) goto L_10385f88;
L_10385e10:;
  /* 10385e10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10385e16 jne 0x10385e2c */
  if (!C.zf) goto L_10385e2c;
  /* 10385e18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385e1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10385e1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385e21 jb 0x10385e4c */
  if (C.cf) goto L_10385e4c;
  /* 10385e23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10385e25 jmp dword ptr [edx*4 + 0x10385f38] */
  switch (EDX) {
    case 0: goto L_10385f48;
    case 1: goto L_10385f50;
    case 2: goto L_10385f5c;
    case 3: goto L_10385f70;
    default: x86_unimpl("switch@0x10385e25 out of table"); return;
  }
L_10385e2c:;
  /* 10385e2c mov eax, edi */
  EAX = (EDI);
  /* 10385e2e mov edx, 3 */
  EDX = (0x3u);
  /* 10385e33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385e36 jb 0x10385e44 */
  if (C.cf) goto L_10385e44;
  /* 10385e38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10385e3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10385e3d jmp dword ptr [eax*4 + 0x10385e50] */
  switch (EAX) {
    case 1: goto L_10385e60;
    case 2: goto L_10385e8c;
    case 3: goto L_10385eb0;
    default: x86_unimpl("switch@0x10385e3d out of table"); return;
  }
L_10385e44:;
  /* 10385e44 jmp dword ptr [ecx*4 + 0x10385f48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10385f48)))); return;
  /* 10385e4b nop  */
  /* nop */
L_10385e4c:;
  /* 10385e4c jmp dword ptr [ecx*4 + 0x10385ecc] */
  switch (ECX) {
    case 0: goto L_10385f2f;
    case 1: goto L_10385f1c;
    case 2: goto L_10385f14;
    case 3: goto L_10385f0c;
    case 4: goto L_10385f04;
    case 5: goto L_10385efc;
    case 6: goto L_10385ef4;
    case 7: goto L_10385eec;
    default: x86_unimpl("switch@0x10385e4c out of table"); return;
  }
  /* 10385e53 nop  */
  /* nop */
L_10385e60:;
  /* 10385e60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10385e62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10385e64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10385e66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10385e69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10385e6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10385e6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385e72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10385e75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385e78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385e7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385e7e jb 0x10385e4c */
  if (C.cf) goto L_10385e4c;
  /* 10385e80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10385e82 jmp dword ptr [edx*4 + 0x10385f38] */
  switch (EDX) {
    case 0: goto L_10385f48;
    case 1: goto L_10385f50;
    case 2: goto L_10385f5c;
    case 3: goto L_10385f70;
    default: x86_unimpl("switch@0x10385e82 out of table"); return;
  }
  /* 10385e89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10385e8c:;
  /* 10385e8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10385e8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10385e90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10385e92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10385e95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385e98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10385e9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385e9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385ea1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385ea4 jb 0x10385e4c */
  if (C.cf) goto L_10385e4c;
  /* 10385ea6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10385ea8 jmp dword ptr [edx*4 + 0x10385f38] */
  switch (EDX) {
    case 0: goto L_10385f48;
    case 1: goto L_10385f50;
    case 2: goto L_10385f5c;
    case 3: goto L_10385f70;
    default: x86_unimpl("switch@0x10385ea8 out of table"); return;
  }
  /* 10385eaf nop  */
  /* nop */
L_10385eb0:;
  /* 10385eb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10385eb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10385eb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10385eb6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10385eb7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385eba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10385ebb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385ebe jb 0x10385e4c */
  if (C.cf) goto L_10385e4c;
  /* 10385ec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10385ec2 jmp dword ptr [edx*4 + 0x10385f38] */
  switch (EDX) {
    case 0: goto L_10385f48;
    case 1: goto L_10385f50;
    case 2: goto L_10385f5c;
    case 3: goto L_10385f70;
    default: x86_unimpl("switch@0x10385ec2 out of table"); return;
  }
  /* 10385ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10385eec:;
  /* 10385eec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10385ef0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10385ef4:;
  /* 10385ef4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10385ef8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10385efc:;
  /* 10385efc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10385f00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10385f04:;
  /* 10385f04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10385f08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10385f0c:;
  /* 10385f0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10385f10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10385f14:;
  /* 10385f14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10385f18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10385f1c:;
  /* 10385f1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10385f20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10385f24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10385f2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10385f2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10385f2f:;
  /* 10385f2f jmp dword ptr [edx*4 + 0x10385f38] */
  switch (EDX) {
    case 0: goto L_10385f48;
    case 1: goto L_10385f50;
    case 2: goto L_10385f5c;
    case 3: goto L_10385f70;
    default: x86_unimpl("switch@0x10385f2f out of table"); return;
  }
  /* 10385f36 mov edi, edi */
  EDI = (EDI);
L_10385f48:;
  /* 10385f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10385f4b pop esi */
  ESI = (pop32());
  /* 10385f4c pop edi */
  EDI = (pop32());
  /* 10385f4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385f4e ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 10385f4f nop  */
  /* nop */
L_10385f50:;
  /* 10385f50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10385f52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10385f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10385f57 pop esi */
  ESI = (pop32());
  /* 10385f58 pop edi */
  EDI = (pop32());
  /* 10385f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385f5a ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 10385f5b nop  */
  /* nop */
L_10385f5c:;
  /* 10385f5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10385f5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10385f60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10385f63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10385f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10385f69 pop esi */
  ESI = (pop32());
  /* 10385f6a pop edi */
  EDI = (pop32());
  /* 10385f6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385f6c ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 10385f6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10385f70:;
  /* 10385f70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10385f72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10385f74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10385f77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10385f7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10385f7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10385f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10385f83 pop esi */
  ESI = (pop32());
  /* 10385f84 pop edi */
  EDI = (pop32());
  /* 10385f85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10385f86 ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 10385f87 nop  */
  /* nop */
L_10385f88:;
  /* 10385f88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10385f8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10385f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10385f96 jne 0x10385fbc */
  if (!C.zf) goto L_10385fbc;
  /* 10385f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10385f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385fa1 jb 0x10385fb0 */
  if (C.cf) goto L_10385fb0;
  /* 10385fa3 std  */
  C.df=1;
  /* 10385fa4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10385fa6 cld  */
  C.df=0;
  /* 10385fa7 jmp dword ptr [edx*4 + 0x103860d0] */
  switch (EDX) {
    case 0: goto L_103860e0;
    case 1: goto L_103860e8;
    case 2: goto L_103860f8;
    case 3: goto L_1038610c;
    default: x86_unimpl("switch@0x10385fa7 out of table"); return;
  }
  /* 10385fae mov edi, edi */
  EDI = (EDI);
L_10385fb0:;
  /* 10385fb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10385fb2 jmp dword ptr [ecx*4 + 0x10386080] */
  switch (ECX) {
    case 0: goto L_103860c7;
    default: x86_unimpl("switch@0x10385fb2 out of table"); return;
  }
  /* 10385fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10385fbc:;
  /* 10385fbc mov eax, edi */
  EAX = (EDI);
  /* 10385fbe mov edx, 3 */
  EDX = (0x3u);
  /* 10385fc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385fc6 jb 0x10385fd4 */
  if (C.cf) goto L_10385fd4;
  /* 10385fc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10385fcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10385fcd jmp dword ptr [eax*4 + 0x10385fd8] */
  switch (EAX) {
    case 1: goto L_10385fe8;
    case 2: goto L_10386008;
    case 3: goto L_10386030;
    default: x86_unimpl("switch@0x10385fcd out of table"); return;
  }
L_10385fd4:;
  /* 10385fd4 jmp dword ptr [ecx*4 + 0x103860d0] */
  switch (ECX) {
    case 0: goto L_103860e0;
    case 1: goto L_103860e8;
    case 2: goto L_103860f8;
    case 3: goto L_1038610c;
    default: x86_unimpl("switch@0x10385fd4 out of table"); return;
  }
  /* 10385fdb nop  */
  /* nop */
L_10385fe8:;
  /* 10385fe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10385feb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10385fed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10385ff0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10385ff1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10385ff4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10385ff5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10385ff8 jb 0x10385fb0 */
  if (C.cf) goto L_10385fb0;
  /* 10385ffa std  */
  C.df=1;
  /* 10385ffb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10385ffd cld  */
  C.df=0;
  /* 10385ffe jmp dword ptr [edx*4 + 0x103860d0] */
  switch (EDX) {
    case 0: goto L_103860e0;
    case 1: goto L_103860e8;
    case 2: goto L_103860f8;
    case 3: goto L_1038610c;
    default: x86_unimpl("switch@0x10385ffe out of table"); return;
  }
  /* 10386005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10386008:;
  /* 10386008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038600b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1038600d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10386010 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10386013 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386016 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10386019 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038601c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038601f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386022 jb 0x10385fb0 */
  if (C.cf) goto L_10385fb0;
  /* 10386024 std  */
  C.df=1;
  /* 10386025 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10386027 cld  */
  C.df=0;
  /* 10386028 jmp dword ptr [edx*4 + 0x103860d0] */
  switch (EDX) {
    case 0: goto L_103860e0;
    case 1: goto L_103860e8;
    case 2: goto L_103860f8;
    case 3: goto L_1038610c;
    default: x86_unimpl("switch@0x10386028 out of table"); return;
  }
  /* 1038602f nop  */
  /* nop */
L_10386030:;
  /* 10386030 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10386033 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10386035 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10386038 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1038603b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1038603e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10386041 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386044 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10386047 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038604a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038604d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386050 jb 0x10385fb0 */
  if (C.cf) goto L_10385fb0;
  /* 10386056 std  */
  C.df=1;
  /* 10386057 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10386059 cld  */
  C.df=0;
  /* 1038605a jmp dword ptr [edx*4 + 0x103860d0] */
  switch (EDX) {
    case 0: goto L_103860e0;
    case 1: goto L_103860e8;
    case 2: goto L_103860f8;
    case 3: goto L_1038610c;
    default: x86_unimpl("switch@0x1038605a out of table"); return;
  }
  /* 10386061 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10386064 test byte ptr [eax + 0x38], ah */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x38)))&(AH); fl_logic(_r,8); }
  /* 10386067 adc byte ptr [eax + 0x60941038], cl */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x60941038))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + 0x60941038), (_r)); fl_add(_a,_b,_r,8); }
  /* 1038606e cmp byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386070 pushfd  */
  x86_unimpl("pushfd @ 0x10386070");
  /* 10386071 pushal  */
  x86_unimpl("pushal @ 0x10386071");
  /* 10386072 cmp byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386074 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10386075 pushal  */
  x86_unimpl("pushal @ 0x10386075");
  /* 10386076 cmp byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386078 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10386079 pushal  */
  x86_unimpl("pushal @ 0x10386079");
  /* 1038607a cmp byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038607c mov ah, 0x60 */
  AH = (0x60u);
  /* 1038607e cmp byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386084 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10386088 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1038608c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10386090 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10386094 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10386098 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1038609c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103860a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103860a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103860a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103860ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103860b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103860b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103860b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103860bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103860c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103860c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103860c7:;
  /* 103860c7 jmp dword ptr [edx*4 + 0x103860d0] */
  switch (EDX) {
    case 0: goto L_103860e0;
    case 1: goto L_103860e8;
    case 2: goto L_103860f8;
    case 3: goto L_1038610c;
    default: x86_unimpl("switch@0x103860c7 out of table"); return;
  }
  /* 103860ce mov edi, edi */
  EDI = (EDI);
L_103860e0:;
  /* 103860e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103860e3 pop esi */
  ESI = (pop32());
  /* 103860e4 pop edi */
  EDI = (pop32());
  /* 103860e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103860e6 ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 103860e7 nop  */
  /* nop */
L_103860e8:;
  /* 103860e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103860eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103860ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103860f1 pop esi */
  ESI = (pop32());
  /* 103860f2 pop edi */
  EDI = (pop32());
  /* 103860f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103860f4 ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 103860f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103860f8:;
  /* 103860f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103860fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103860fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10386101 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10386104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386107 pop esi */
  ESI = (pop32());
  /* 10386108 pop edi */
  EDI = (pop32());
  /* 10386109 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1038610a ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
  /* 1038610b nop  */
  /* nop */
L_1038610c:;
  /* 1038610c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038610f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10386112 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10386115 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10386118 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1038611b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1038611e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386121 pop esi */
  ESI = (pop32());
  /* 10386122 pop edi */
  EDI = (pop32());
  /* 10386123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10386124 ret  */
  ESPCHK(0x10385df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006125 @ 0x10386125 (62 bytes, 15 insns) */
void f_10386125(void) {
  FTRACE(0x10386125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386125 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1038612a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038612c push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10386132 call dword ptr [0x10388034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388034))), 0x10386138u);
  /* 10386138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038613a mov dword ptr [0x1038a2ec], eax */
  w32((uint32_t)(0x1038a2ec), (EAX));
  /* 1038613f jne 0x10386142 */
  if (!C.zf) goto L_10386142;
  /* 10386141 ret  */
  ESPCHK(0x10386125u, _esp0);
  ESP += 4; return;
L_10386142:;
  /* 10386142 and dword ptr [0x1038a2e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1038a2e4)))&(0x0u); w32((uint32_t)(0x1038a2e4), (_r)); fl_logic(_r,32); }
  /* 10386149 and dword ptr [0x1038a2e8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1038a2e8)))&(0x0u); w32((uint32_t)(0x1038a2e8), (_r)); fl_logic(_r,32); }
  /* 10386150 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386152 mov dword ptr [0x1038a2e0], eax */
  w32((uint32_t)(0x1038a2e0), (EAX));
  /* 10386157 mov dword ptr [0x1038a2d8], 0x10 */
  w32((uint32_t)(0x1038a2d8), (0x10u));
  /* 10386161 pop eax */
  EAX = (pop32());
  /* 10386162 ret  */
  ESPCHK(0x10386125u, _esp0);
  ESP += 4; return;
}

/* FUN_10006163 @ 0x10386163 (43 bytes, 14 insns) */
void f_10386163(void) {
  FTRACE(0x10386163u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386163 mov eax, dword ptr [0x1038a2e8] */
  EAX = (r32((uint32_t)(0x1038a2e8)));
  /* 10386168 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1038616b mov eax, dword ptr [0x1038a2ec] */
  EAX = (r32((uint32_t)(0x1038a2ec)));
  /* 10386170 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10386173:;
  /* 10386173 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386175 jae 0x1038618b */
  if (!C.cf) goto L_1038618b;
  /* 10386177 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1038617b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038617e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386184 jb 0x1038618d */
  if (C.cf) goto L_1038618d;
  /* 10386186 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386189 jmp 0x10386173 */
  goto L_10386173;
L_1038618b:;
  /* 1038618b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1038618d:;
  /* 1038618d ret  */
  ESPCHK(0x10386163u, _esp0);
  ESP += 4; return;
}

/* FUN_1000618e @ 0x1038618e (811 bytes, 264 insns) */
void f_1038618e(void) {
  FTRACE(0x1038618eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038618e push ebp */
  push32((uint32_t)(EBP));
  /* 1038618f mov ebp, esp */
  EBP = (ESP);
  /* 10386191 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10386197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1038619a push ebx */
  push32((uint32_t)(EBX));
  /* 1038619b push esi */
  push32((uint32_t)(ESI));
  /* 1038619c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1038619f mov esi, edx */
  ESI = (EDX);
  /* 103861a1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103861a4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 103861a7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103861aa push edi */
  push32((uint32_t)(EDI));
  /* 103861ab shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 103861ae mov ecx, esi */
  ECX = (ESI);
  /* 103861b0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 103861b3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103861b9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103861ba mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103861bd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103861c4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 103861c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103861ca mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 103861cd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 103861d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103861d3 jne 0x10386254 */
  if (!C.zf) goto L_10386254;
  /* 103861d5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103861d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103861da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103861db pop edi */
  EDI = (pop32());
  /* 103861dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103861df cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103861e1 jbe 0x103861e6 */
  if ((C.cf||C.zf)) goto L_103861e6;
  /* 103861e3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_103861e6:;
  /* 103861e6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 103861ea cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103861ee jne 0x10386238 */
  if (!C.zf) goto L_10386238;
  /* 103861f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103861f3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103861f6 jae 0x10386214 */
  if (!C.cf) goto L_10386214;
  /* 103861f8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 103861fd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 103861ff lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10386203 not edi */
  EDI = (~(EDI));
  /* 10386205 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10386209 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1038620b jne 0x10386238 */
  if (!C.zf) goto L_10386238;
  /* 1038620d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386210 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10386212 jmp 0x10386238 */
  goto L_10386238;
L_10386214:;
  /* 10386214 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386217 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1038621c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1038621e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10386221 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10386225 not edi */
  EDI = (~(EDI));
  /* 10386227 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1038622e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10386230 jne 0x10386238 */
  if (!C.zf) goto L_10386238;
  /* 10386232 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386235 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10386238:;
  /* 10386238 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1038623c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10386240 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10386243 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10386247 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1038624b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1038624e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10386251 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10386254:;
  /* 10386254 mov edi, ebx */
  EDI = (EBX);
  /* 10386256 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10386259 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1038625a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038625d jbe 0x10386262 */
  if ((C.cf||C.zf)) goto L_10386262;
  /* 1038625f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10386261 pop edi */
  EDI = (pop32());
L_10386262:;
  /* 10386262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10386265 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10386268 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1038626b jne 0x10386311 */
  if (!C.zf) goto L_10386311;
  /* 10386271 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386274 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10386277 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1038627a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1038627c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1038627f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386280 pop edx */
  EDX = (pop32());
  /* 10386281 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386283 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10386286 jbe 0x1038628d */
  if ((C.cf||C.zf)) goto L_1038628d;
  /* 10386288 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1038628b mov ecx, edx */
  ECX = (EDX);
L_1038628d:;
  /* 1038628d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386290 mov edi, ebx */
  EDI = (EBX);
  /* 10386292 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10386295 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10386298 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10386299 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038629b jbe 0x1038629f */
  if ((C.cf||C.zf)) goto L_1038629f;
  /* 1038629d mov edi, edx */
  EDI = (EDX);
L_1038629f:;
  /* 1038629f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103862a1 je 0x1038630e */
  if (C.zf) goto L_1038630e;
  /* 103862a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103862a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103862a9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103862ac jne 0x103862f6 */
  if (!C.zf) goto L_103862f6;
  /* 103862ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103862b1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103862b4 jae 0x103862d2 */
  if (!C.cf) goto L_103862d2;
  /* 103862b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103862bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103862bd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 103862c1 not edx */
  EDX = (~(EDX));
  /* 103862c3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103862c7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103862c9 jne 0x103862f6 */
  if (!C.zf) goto L_103862f6;
  /* 103862cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103862ce and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103862d0 jmp 0x103862f6 */
  goto L_103862f6;
L_103862d2:;
  /* 103862d2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103862d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103862da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103862dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103862df lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 103862e3 not edx */
  EDX = (~(EDX));
  /* 103862e5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 103862ec dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103862ee jne 0x103862f6 */
  if (!C.zf) goto L_103862f6;
  /* 103862f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103862f3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_103862f6:;
  /* 103862f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103862f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103862fc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 103862ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10386302 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10386305 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10386308 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1038630b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1038630e:;
  /* 1038630e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10386311:;
  /* 10386311 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386315 jne 0x10386320 */
  if (!C.zf) goto L_10386320;
  /* 10386317 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038631a je 0x103863a9 */
  if (C.zf) goto L_103863a9;
L_10386320:;
  /* 10386320 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10386323 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10386326 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10386329 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1038632c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1038632f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10386332 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10386335 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10386338 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1038633b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1038633e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10386341 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386344 jne 0x103863a9 */
  if (!C.zf) goto L_103863a9;
  /* 10386346 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1038634a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038634d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10386350 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10386352 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10386356 jae 0x1038637d */
  if (!C.cf) goto L_1038637d;
  /* 10386358 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038635c jne 0x1038636c */
  if (!C.zf) goto L_1038636c;
  /* 1038635e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10386363 mov ecx, edi */
  ECX = (EDI);
  /* 10386365 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10386367 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1038636a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1038636c:;
  /* 1038636c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10386371 mov ecx, edi */
  ECX = (EDI);
  /* 10386373 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10386375 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10386379 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1038637b jmp 0x103863a6 */
  goto L_103863a6;
L_1038637d:;
  /* 1038637d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386381 jne 0x10386393 */
  if (!C.zf) goto L_10386393;
  /* 10386383 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10386386 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1038638b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1038638d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386390 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10386393:;
  /* 10386393 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10386396 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1038639b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1038639d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 103863a4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_103863a6:;
  /* 103863a6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_103863a9:;
  /* 103863a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103863ac mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 103863ae mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 103863b2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 103863b4 jne 0x103864b4 */
  if (!C.zf) goto L_103864b4;
  /* 103863ba mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 103863bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103863c1 je 0x103864a6 */
  if (C.zf) goto L_103864a6;
  /* 103863c7 mov ecx, dword ptr [0x1038a2dc] */
  ECX = (r32((uint32_t)(0x1038a2dc)));
  /* 103863cd mov edi, dword ptr [0x10388048] */
  EDI = (r32((uint32_t)(0x10388048)));
  /* 103863d3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 103863d6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103863d9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 103863de push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103863e3 push ebx */
  push32((uint32_t)(EBX));
  /* 103863e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103863e5 call edi */
  call_ind((uint32_t)(EDI), 0x103863e7u);
  /* 103863e7 mov ecx, dword ptr [0x1038a2dc] */
  ECX = (r32((uint32_t)(0x1038a2dc)));
  /* 103863ed mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 103863f2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103863f7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103863f9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 103863fc mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 10386401 mov ecx, dword ptr [0x1038a2dc] */
  ECX = (r32((uint32_t)(0x1038a2dc)));
  /* 10386407 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1038640a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10386412 mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 10386417 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1038641a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1038641d mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 10386422 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10386425 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386429 jne 0x10386434 */
  if (!C.zf) goto L_10386434;
  /* 1038642b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1038642f mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
L_10386434:;
  /* 10386434 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386438 jne 0x103864a6 */
  if (!C.zf) goto L_103864a6;
  /* 1038643a push ebx */
  push32((uint32_t)(EBX));
  /* 1038643b push 0 */
  push32((uint32_t)(0x0u));
  /* 1038643d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10386440 call edi */
  call_ind((uint32_t)(EDI), 0x10386442u);
  /* 10386442 mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 10386447 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1038644a push 0 */
  push32((uint32_t)(0x0u));
  /* 1038644c push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 10386452 call dword ptr [0x10388044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388044))), 0x10386458u);
  /* 10386458 mov eax, dword ptr [0x1038a2e8] */
  EAX = (r32((uint32_t)(0x1038a2e8)));
  /* 1038645d mov edx, dword ptr [0x1038a2ec] */
  EDX = (r32((uint32_t)(0x1038a2ec)));
  /* 10386463 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10386466 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10386469 mov ecx, eax */
  ECX = (EAX);
  /* 1038646b mov eax, dword ptr [0x1038a2e4] */
  EAX = (r32((uint32_t)(0x1038a2e4)));
  /* 10386470 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386472 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10386476 push ecx */
  push32((uint32_t)(ECX));
  /* 10386477 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1038647a push ecx */
  push32((uint32_t)(ECX));
  /* 1038647b push eax */
  push32((uint32_t)(EAX));
  /* 1038647c call 0x10386f10 */
  push32(0x10386481u); f_10386f10();
  /* 10386481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386484 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10386487 dec dword ptr [0x1038a2e8] */
  { uint32_t _r=(r32((uint32_t)(0x1038a2e8)))-1; w32((uint32_t)(0x1038a2e8), (_r)); fl_dec(_r,32); }
  /* 1038648d cmp eax, dword ptr [0x1038a2e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1038a2e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386493 jbe 0x10386498 */
  if ((C.cf||C.zf)) goto L_10386498;
  /* 10386495 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10386498:;
  /* 10386498 mov ecx, dword ptr [0x1038a2ec] */
  ECX = (r32((uint32_t)(0x1038a2ec)));
  /* 1038649e mov dword ptr [0x1038a2e0], ecx */
  w32((uint32_t)(0x1038a2e0), (ECX));
  /* 103864a4 jmp 0x103864a9 */
  goto L_103864a9;
L_103864a6:;
  /* 103864a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_103864a9:;
  /* 103864a9 mov dword ptr [0x1038a2e4], eax */
  w32((uint32_t)(0x1038a2e4), (EAX));
  /* 103864ae mov dword ptr [0x1038a2dc], esi */
  w32((uint32_t)(0x1038a2dc), (ESI));
L_103864b4:;
  /* 103864b4 pop edi */
  EDI = (pop32());
  /* 103864b5 pop esi */
  ESI = (pop32());
  /* 103864b6 pop ebx */
  EBX = (pop32());
  /* 103864b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103864b8 ret  */
  ESPCHK(0x1038618eu, _esp0);
  ESP += 4; return;
}

/* FUN_100064b9 @ 0x103864b9 (777 bytes, 275 insns) */
void f_103864b9(void) {
  FTRACE(0x103864b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103864b9 push ebp */
  push32((uint32_t)(EBP));
  /* 103864ba mov ebp, esp */
  EBP = (ESP);
  /* 103864bc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103864bf mov eax, dword ptr [0x1038a2e8] */
  EAX = (r32((uint32_t)(0x1038a2e8)));
  /* 103864c4 mov edx, dword ptr [0x1038a2ec] */
  EDX = (r32((uint32_t)(0x1038a2ec)));
  /* 103864ca push ebx */
  push32((uint32_t)(EBX));
  /* 103864cb push esi */
  push32((uint32_t)(ESI));
  /* 103864cc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103864cf push edi */
  push32((uint32_t)(EDI));
  /* 103864d0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 103864d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103864d6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103864d9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 103864dc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 103864df mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103864e2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103864e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103864e6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103864e9 jge 0x103864f9 */
  if ((C.sf==C.of)) goto L_103864f9;
  /* 103864eb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 103864ee shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 103864f0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 103864f4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 103864f7 jmp 0x10386509 */
  goto L_10386509;
L_103864f9:;
  /* 103864f9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103864fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103864ff xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10386501 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10386503 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10386506 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10386509:;
  /* 10386509 mov eax, dword ptr [0x1038a2e0] */
  EAX = (r32((uint32_t)(0x1038a2e0)));
  /* 1038650e mov ebx, eax */
  EBX = (EAX);
  /* 10386510 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386512 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10386515 jae 0x10386530 */
  if (!C.cf) goto L_10386530;
L_10386517:;
  /* 10386517 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1038651a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1038651c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1038651f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10386521 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10386523 jne 0x10386530 */
  if (!C.zf) goto L_10386530;
  /* 10386525 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386528 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038652b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1038652e jb 0x10386517 */
  if (C.cf) goto L_10386517;
L_10386530:;
  /* 10386530 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386533 jne 0x103865ae */
  if (!C.zf) goto L_103865ae;
  /* 10386535 mov ebx, edx */
  EBX = (EDX);
L_10386537:;
  /* 10386537 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386539 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1038653c jae 0x10386553 */
  if (!C.cf) goto L_10386553;
  /* 1038653e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10386541 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10386543 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10386546 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10386548 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1038654a jne 0x10386551 */
  if (!C.zf) goto L_10386551;
  /* 1038654c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1038654f jmp 0x10386537 */
  goto L_10386537;
L_10386551:;
  /* 10386551 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10386553:;
  /* 10386553 jne 0x103865ae */
  if (!C.zf) goto L_103865ae;
L_10386555:;
  /* 10386555 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386558 jae 0x1038656b */
  if (!C.cf) goto L_1038656b;
  /* 1038655a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038655e jne 0x10386568 */
  if (!C.zf) goto L_10386568;
  /* 10386560 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386563 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10386566 jmp 0x10386555 */
  goto L_10386555;
L_10386568:;
  /* 10386568 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1038656b:;
  /* 1038656b jne 0x10386593 */
  if (!C.zf) goto L_10386593;
  /* 1038656d mov ebx, edx */
  EBX = (EDX);
L_1038656f:;
  /* 1038656f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386571 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10386574 jae 0x10386583 */
  if (!C.cf) goto L_10386583;
  /* 10386576 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038657a jne 0x10386581 */
  if (!C.zf) goto L_10386581;
  /* 1038657c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1038657f jmp 0x1038656f */
  goto L_1038656f;
L_10386581:;
  /* 10386581 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10386583:;
  /* 10386583 jne 0x10386593 */
  if (!C.zf) goto L_10386593;
  /* 10386585 call 0x103867c2 */
  push32(0x1038658au); f_103867c2();
  /* 1038658a mov ebx, eax */
  EBX = (EAX);
  /* 1038658c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1038658e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10386591 je 0x103865a7 */
  if (C.zf) goto L_103865a7;
L_10386593:;
  /* 10386593 push ebx */
  push32((uint32_t)(EBX));
  /* 10386594 call 0x10386873 */
  push32(0x10386599u); f_10386873();
  /* 10386599 pop ecx */
  ECX = (pop32());
  /* 1038659a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1038659d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1038659f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 103865a2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103865a5 jne 0x103865ae */
  if (!C.zf) goto L_103865ae;
L_103865a7:;
  /* 103865a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103865a9 jmp 0x103867bd */
  goto L_103867bd;
L_103865ae:;
  /* 103865ae mov dword ptr [0x1038a2e0], ebx */
  w32((uint32_t)(0x1038a2e0), (EBX));
  /* 103865b4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 103865b7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 103865b9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103865bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103865bf je 0x103865d5 */
  if (C.zf) goto L_103865d5;
  /* 103865c1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 103865c8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 103865cc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 103865cf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 103865d1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 103865d3 jne 0x1038660c */
  if (!C.zf) goto L_1038660c;
L_103865d5:;
  /* 103865d5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 103865db mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 103865de and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 103865e1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 103865e4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103865e8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 103865eb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 103865ed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 103865f0 jne 0x10386609 */
  if (!C.zf) goto L_10386609;
L_103865f2:;
  /* 103865f2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 103865f8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 103865fb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 103865fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386601 mov edi, esi */
  EDI = (ESI);
  /* 10386603 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10386605 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10386607 je 0x103865f2 */
  if (C.zf) goto L_103865f2;
L_10386609:;
  /* 10386609 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1038660c:;
  /* 1038660c mov ecx, edx */
  ECX = (EDX);
  /* 1038660e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10386610 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10386616 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1038661d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10386620 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10386624 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10386626 jne 0x10386635 */
  if (!C.zf) goto L_10386635;
  /* 10386628 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1038662f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10386631 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10386634 pop edi */
  EDI = (pop32());
L_10386635:;
  /* 10386635 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10386637 jl 0x1038663e */
  if ((C.sf!=C.of)) goto L_1038663e;
  /* 10386639 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1038663b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1038663c jmp 0x10386635 */
  goto L_10386635;
L_1038663e:;
  /* 1038663e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10386641 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10386645 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10386647 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038664a mov esi, ecx */
  ESI = (ECX);
  /* 1038664c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1038664f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10386652 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10386653 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386656 jle 0x1038665b */
  if ((C.zf||C.sf!=C.of)) goto L_1038665b;
  /* 10386658 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1038665a pop esi */
  ESI = (pop32());
L_1038665b:;
  /* 1038665b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038665d je 0x10386770 */
  if (C.zf) goto L_10386770;
  /* 10386663 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10386666 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386669 jne 0x103866cc */
  if (!C.zf) goto L_103866cc;
  /* 1038666b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038666e jge 0x1038669b */
  if ((C.sf==C.of)) goto L_1038669b;
  /* 10386670 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10386675 mov ecx, edi */
  ECX = (EDI);
  /* 10386677 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10386679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1038667c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10386680 not ebx */
  EBX = (~(EBX));
  /* 10386682 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10386685 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10386689 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1038668d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1038668f jne 0x103866c9 */
  if (!C.zf) goto L_103866c9;
  /* 10386691 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386694 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10386697 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10386699 jmp 0x103866cc */
  goto L_103866cc;
L_1038669b:;
  /* 1038669b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1038669e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 103866a3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 103866a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103866a8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 103866ac lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 103866b3 not ebx */
  EBX = (~(EBX));
  /* 103866b5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103866b7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 103866b9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 103866bc jne 0x103866c9 */
  if (!C.zf) goto L_103866c9;
  /* 103866be mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 103866c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103866c4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 103866c7 jmp 0x103866cc */
  goto L_103866cc;
L_103866c9:;
  /* 103866c9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_103866cc:;
  /* 103866cc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 103866cf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 103866d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103866d6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 103866d9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103866dc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 103866df mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 103866e2 je 0x1038677c */
  if (C.zf) goto L_1038677c;
  /* 103866e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103866eb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 103866ef lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 103866f2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 103866f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103866f8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103866fb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103866fe mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10386701 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10386704 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386707 jne 0x1038676d */
  if (!C.zf) goto L_1038676d;
  /* 10386709 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1038670d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386710 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10386713 jge 0x1038673e */
  if ((C.sf==C.of)) goto L_1038673e;
  /* 10386715 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10386717 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1038671b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1038671f jne 0x1038672c */
  if (!C.zf) goto L_1038672c;
  /* 10386721 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10386726 mov ecx, esi */
  ECX = (ESI);
  /* 10386728 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1038672a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1038672c:;
  /* 1038672c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10386731 mov ecx, esi */
  ECX = (ESI);
  /* 10386733 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10386735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10386738 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1038673c jmp 0x1038676d */
  goto L_1038676d;
L_1038673e:;
  /* 1038673e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10386740 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386744 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10386748 jne 0x10386757 */
  if (!C.zf) goto L_10386757;
  /* 1038674a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1038674d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10386752 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10386754 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10386757:;
  /* 10386757 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1038675a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10386761 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10386764 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10386769 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1038676b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1038676d:;
  /* 1038676d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10386770:;
  /* 10386770 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10386772 je 0x1038677f */
  if (C.zf) goto L_1038677f;
  /* 10386774 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10386776 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1038677a jmp 0x1038677f */
  goto L_1038677f;
L_1038677c:;
  /* 1038677c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1038677f:;
  /* 1038677f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10386782 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386784 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10386787 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10386789 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1038678d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10386790 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10386792 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10386794 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10386797 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10386799 jne 0x103867b5 */
  if (!C.zf) goto L_103867b5;
  /* 1038679b cmp ebx, dword ptr [0x1038a2e4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1038a2e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103867a1 jne 0x103867b5 */
  if (!C.zf) goto L_103867b5;
  /* 103867a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103867a6 cmp ecx, dword ptr [0x1038a2dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1038a2dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103867ac jne 0x103867b5 */
  if (!C.zf) goto L_103867b5;
  /* 103867ae and dword ptr [0x1038a2e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1038a2e4)))&(0x0u); w32((uint32_t)(0x1038a2e4), (_r)); fl_logic(_r,32); }
L_103867b5:;
  /* 103867b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103867b8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103867ba lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_103867bd:;
  /* 103867bd pop edi */
  EDI = (pop32());
  /* 103867be pop esi */
  ESI = (pop32());
  /* 103867bf pop ebx */
  EBX = (pop32());
  /* 103867c0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103867c1 ret  */
  ESPCHK(0x103864b9u, _esp0);
  ESP += 4; return;
}

/* FUN_100067c2 @ 0x103867c2 (177 bytes, 53 insns) */
void f_103867c2(void) {
  FTRACE(0x103867c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103867c2 mov eax, dword ptr [0x1038a2e8] */
  EAX = (r32((uint32_t)(0x1038a2e8)));
  /* 103867c7 mov ecx, dword ptr [0x1038a2d8] */
  ECX = (r32((uint32_t)(0x1038a2d8)));
  /* 103867cd push esi */
  push32((uint32_t)(ESI));
  /* 103867ce push edi */
  push32((uint32_t)(EDI));
  /* 103867cf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103867d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103867d3 jne 0x10386805 */
  if (!C.zf) goto L_10386805;
  /* 103867d5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 103867d9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103867dc push eax */
  push32((uint32_t)(EAX));
  /* 103867dd push dword ptr [0x1038a2ec] */
  push32((uint32_t)(r32((uint32_t)(0x1038a2ec))));
  /* 103867e3 push edi */
  push32((uint32_t)(EDI));
  /* 103867e4 push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 103867ea call dword ptr [0x10388020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388020))), 0x103867f0u);
  /* 103867f0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103867f2 je 0x10386855 */
  if (C.zf) goto L_10386855;
  /* 103867f4 add dword ptr [0x1038a2d8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1038a2d8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1038a2d8), (_r)); fl_add(_a,_b,_r,32); }
  /* 103867fb mov dword ptr [0x1038a2ec], eax */
  w32((uint32_t)(0x1038a2ec), (EAX));
  /* 10386800 mov eax, dword ptr [0x1038a2e8] */
  EAX = (r32((uint32_t)(0x1038a2e8)));
L_10386805:;
  /* 10386805 mov ecx, dword ptr [0x1038a2ec] */
  ECX = (r32((uint32_t)(0x1038a2ec)));
  /* 1038680b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10386810 push 8 */
  push32((uint32_t)(0x8u));
  /* 10386812 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10386815 push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 1038681b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1038681e call dword ptr [0x10388034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388034))), 0x10386824u);
  /* 10386824 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386826 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10386829 je 0x10386855 */
  if (C.zf) goto L_10386855;
  /* 1038682b push 4 */
  push32((uint32_t)(0x4u));
  /* 1038682d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10386832 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10386837 push edi */
  push32((uint32_t)(EDI));
  /* 10386838 call dword ptr [0x10388024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388024))), 0x1038683eu);
  /* 1038683e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386840 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10386843 jne 0x10386859 */
  if (!C.zf) goto L_10386859;
  /* 10386845 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10386848 push edi */
  push32((uint32_t)(EDI));
  /* 10386849 push dword ptr [0x1038a528] */
  push32((uint32_t)(r32((uint32_t)(0x1038a528))));
  /* 1038684f call dword ptr [0x10388044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388044))), 0x10386855u);
L_10386855:;
  /* 10386855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10386857 jmp 0x10386870 */
  goto L_10386870;
L_10386859:;
  /* 10386859 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1038685d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1038685f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10386862 inc dword ptr [0x1038a2e8] */
  { uint32_t _r=(r32((uint32_t)(0x1038a2e8)))+1; w32((uint32_t)(0x1038a2e8), (_r)); fl_inc(_r,32); }
  /* 10386868 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1038686b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1038686e mov eax, esi */
  EAX = (ESI);
L_10386870:;
  /* 10386870 pop edi */
  EDI = (pop32());
  /* 10386871 pop esi */
  ESI = (pop32());
  /* 10386872 ret  */
  ESPCHK(0x103867c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006873 @ 0x10386873 (251 bytes, 85 insns) */
void f_10386873(void) {
  FTRACE(0x10386873u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386873 push ebp */
  push32((uint32_t)(EBP));
  /* 10386874 mov ebp, esp */
  EBP = (ESP);
  /* 10386876 push ecx */
  push32((uint32_t)(ECX));
  /* 10386877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1038687a push ebx */
  push32((uint32_t)(EBX));
  /* 1038687b push esi */
  push32((uint32_t)(ESI));
  /* 1038687c push edi */
  push32((uint32_t)(EDI));
  /* 1038687d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10386880 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10386883 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10386885:;
  /* 10386885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386887 jl 0x1038688e */
  if ((C.sf!=C.of)) goto L_1038688e;
  /* 10386889 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1038688b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1038688c jmp 0x10386885 */
  goto L_10386885;
L_1038688e:;
  /* 1038688e mov eax, ebx */
  EAX = (EBX);
  /* 10386890 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10386892 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10386898 pop edx */
  EDX = (pop32());
  /* 10386899 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 103868a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103868a3:;
  /* 103868a3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 103868a6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 103868a9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103868ac dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 103868ad jne 0x103868a3 */
  if (!C.zf) goto L_103868a3;
  /* 103868af mov edi, ebx */
  EDI = (EBX);
  /* 103868b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103868b3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 103868b6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103868b9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103868be push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103868c3 push edi */
  push32((uint32_t)(EDI));
  /* 103868c4 call dword ptr [0x10388024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388024))), 0x103868cau);
  /* 103868ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103868cc jne 0x103868d6 */
  if (!C.zf) goto L_103868d6;
  /* 103868ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103868d1 jmp 0x10386969 */
  goto L_10386969;
L_103868d6:;
  /* 103868d6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 103868dc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103868de ja 0x1038691c */
  if ((!C.cf&&!C.zf)) goto L_1038691c;
  /* 103868e0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_103868e3:;
  /* 103868e3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 103868e7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 103868ee lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 103868f4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 103868fb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103868fd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10386903 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10386906 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10386910 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386915 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10386918 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038691a jbe 0x103868e3 */
  if ((C.cf||C.zf)) goto L_103868e3;
L_1038691c:;
  /* 1038691c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1038691f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10386922 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386927 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386929 pop edi */
  EDI = (pop32());
  /* 1038692a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1038692d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10386930 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10386933 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10386936 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10386939 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1038693e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10386945 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10386948 mov cl, al */
  CL = (AL);
  /* 1038694a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1038694c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1038694e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10386951 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10386954 jne 0x10386959 */
  if (!C.zf) goto L_10386959;
  /* 10386956 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10386959:;
  /* 10386959 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1038695e mov ecx, ebx */
  ECX = (EBX);
  /* 10386960 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10386962 not edx */
  EDX = (~(EDX));
  /* 10386964 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10386967 mov eax, ebx */
  EAX = (EBX);
L_10386969:;
  /* 10386969 pop edi */
  EDI = (pop32());
  /* 1038696a pop esi */
  ESI = (pop32());
  /* 1038696b pop ebx */
  EBX = (pop32());
  /* 1038696c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1038696d ret  */
  ESPCHK(0x10386873u, _esp0);
  ESP += 4; return;
}

/* FUN_1000696e @ 0x1038696e (137 bytes, 50 insns) */
void f_1038696e(void) {
  FTRACE(0x1038696eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038696e push ebx */
  push32((uint32_t)(EBX));
  /* 1038696f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10386971 cmp dword ptr [0x1038a29c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1038a29c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386977 push esi */
  push32((uint32_t)(ESI));
  /* 10386978 push edi */
  push32((uint32_t)(EDI));
  /* 10386979 jne 0x103869bd */
  if (!C.zf) goto L_103869bd;
  /* 1038697b push 0x103884a8 */
  push32((uint32_t)(0x103884a8u));
  /* 10386980 call dword ptr [0x10388014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388014))), 0x10386986u);
  /* 10386986 mov edi, eax */
  EDI = (EAX);
  /* 10386988 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038698a je 0x103869f3 */
  if (C.zf) goto L_103869f3;
  /* 1038698c mov esi, dword ptr [0x10388018] */
  ESI = (r32((uint32_t)(0x10388018)));
  /* 10386992 push 0x1038849c */
  push32((uint32_t)(0x1038849cu));
  /* 10386997 push edi */
  push32((uint32_t)(EDI));
  /* 10386998 call esi */
  call_ind((uint32_t)(ESI), 0x1038699au);
  /* 1038699a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1038699c mov dword ptr [0x1038a29c], eax */
  w32((uint32_t)(0x1038a29c), (EAX));
  /* 103869a1 je 0x103869f3 */
  if (C.zf) goto L_103869f3;
  /* 103869a3 push 0x1038848c */
  push32((uint32_t)(0x1038848cu));
  /* 103869a8 push edi */
  push32((uint32_t)(EDI));
  /* 103869a9 call esi */
  call_ind((uint32_t)(ESI), 0x103869abu);
  /* 103869ab push 0x10388478 */
  push32((uint32_t)(0x10388478u));
  /* 103869b0 push edi */
  push32((uint32_t)(EDI));
  /* 103869b1 mov dword ptr [0x1038a2a0], eax */
  w32((uint32_t)(0x1038a2a0), (EAX));
  /* 103869b6 call esi */
  call_ind((uint32_t)(ESI), 0x103869b8u);
  /* 103869b8 mov dword ptr [0x1038a2a4], eax */
  w32((uint32_t)(0x1038a2a4), (EAX));
L_103869bd:;
  /* 103869bd mov eax, dword ptr [0x1038a2a0] */
  EAX = (r32((uint32_t)(0x1038a2a0)));
  /* 103869c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103869c4 je 0x103869dc */
  if (C.zf) goto L_103869dc;
  /* 103869c6 call eax */
  call_ind((uint32_t)(EAX), 0x103869c8u);
  /* 103869c8 mov ebx, eax */
  EBX = (EAX);
  /* 103869ca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103869cc je 0x103869dc */
  if (C.zf) goto L_103869dc;
  /* 103869ce mov eax, dword ptr [0x1038a2a4] */
  EAX = (r32((uint32_t)(0x1038a2a4)));
  /* 103869d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103869d5 je 0x103869dc */
  if (C.zf) goto L_103869dc;
  /* 103869d7 push ebx */
  push32((uint32_t)(EBX));
  /* 103869d8 call eax */
  call_ind((uint32_t)(EAX), 0x103869dau);
  /* 103869da mov ebx, eax */
  EBX = (EAX);
L_103869dc:;
  /* 103869dc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 103869e0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 103869e4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 103869e8 push ebx */
  push32((uint32_t)(EBX));
  /* 103869e9 call dword ptr [0x1038a29c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038a29c))), 0x103869efu);
L_103869ef:;
  /* 103869ef pop edi */
  EDI = (pop32());
  /* 103869f0 pop esi */
  ESI = (pop32());
  /* 103869f1 pop ebx */
  EBX = (pop32());
  /* 103869f2 ret  */
  ESPCHK(0x1038696eu, _esp0);
  ESP += 4; return;
L_103869f3:;
  /* 103869f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103869f5 jmp 0x103869ef */
  goto L_103869ef;
}

/* _strncpy @ 0x10386a00 (254 bytes, 109 insns) */
void f_10386a00(void) {
  FTRACE(0x10386a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386a00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10386a04 push edi */
  push32((uint32_t)(EDI));
  /* 10386a05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10386a07 je 0x10386a83 */
  if (C.zf) goto L_10386a83;
  /* 10386a09 push esi */
  push32((uint32_t)(ESI));
  /* 10386a0a push ebx */
  push32((uint32_t)(EBX));
  /* 10386a0b mov ebx, ecx */
  EBX = (ECX);
  /* 10386a0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10386a11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10386a17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10386a1b jne 0x10386a24 */
  if (!C.zf) goto L_10386a24;
  /* 10386a1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386a20 jne 0x10386a91 */
  if (!C.zf) goto L_10386a91;
  /* 10386a22 jmp 0x10386a45 */
  goto L_10386a45;
L_10386a24:;
  /* 10386a24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10386a26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10386a27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386a29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10386a2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386a2b je 0x10386a52 */
  if (C.zf) goto L_10386a52;
  /* 10386a2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10386a2f je 0x10386a5a */
  if (C.zf) goto L_10386a5a;
  /* 10386a31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10386a37 jne 0x10386a24 */
  if (!C.zf) goto L_10386a24;
  /* 10386a39 mov ebx, ecx */
  EBX = (ECX);
  /* 10386a3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386a3e jne 0x10386a91 */
  if (!C.zf) goto L_10386a91;
L_10386a40:;
  /* 10386a40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10386a43 je 0x10386a52 */
  if (C.zf) goto L_10386a52;
L_10386a45:;
  /* 10386a45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10386a47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10386a48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386a4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10386a4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10386a4d je 0x10386a7e */
  if (C.zf) goto L_10386a7e;
  /* 10386a4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10386a50 jne 0x10386a45 */
  if (!C.zf) goto L_10386a45;
L_10386a52:;
  /* 10386a52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10386a56 pop ebx */
  EBX = (pop32());
  /* 10386a57 pop esi */
  ESI = (pop32());
  /* 10386a58 pop edi */
  EDI = (pop32());
  /* 10386a59 ret  */
  ESPCHK(0x10386a00u, _esp0);
  ESP += 4; return;
L_10386a5a:;
  /* 10386a5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10386a60 je 0x10386a74 */
  if (C.zf) goto L_10386a74;
L_10386a62:;
  /* 10386a62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386a64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10386a65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386a66 je 0x10386af6 */
  if (C.zf) goto L_10386af6;
  /* 10386a6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10386a72 jne 0x10386a62 */
  if (!C.zf) goto L_10386a62;
L_10386a74:;
  /* 10386a74 mov ebx, ecx */
  EBX = (ECX);
  /* 10386a76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386a79 jne 0x10386ae7 */
  if (!C.zf) goto L_10386ae7;
L_10386a7b:;
  /* 10386a7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386a7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10386a7e:;
  /* 10386a7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10386a7f jne 0x10386a7b */
  if (!C.zf) goto L_10386a7b;
  /* 10386a81 pop ebx */
  EBX = (pop32());
  /* 10386a82 pop esi */
  ESI = (pop32());
L_10386a83:;
  /* 10386a83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10386a87 pop edi */
  EDI = (pop32());
  /* 10386a88 ret  */
  ESPCHK(0x10386a00u, _esp0);
  ESP += 4; return;
L_10386a89:;
  /* 10386a89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10386a8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386a8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386a8f je 0x10386a40 */
  if (C.zf) goto L_10386a40;
L_10386a91:;
  /* 10386a91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10386a96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10386a98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386a9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10386a9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10386a9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10386aa1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386aa4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10386aa9 je 0x10386a89 */
  if (C.zf) goto L_10386a89;
  /* 10386aab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10386aad je 0x10386adb */
  if (C.zf) goto L_10386adb;
  /* 10386aaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10386ab1 je 0x10386ad1 */
  if (C.zf) goto L_10386ad1;
  /* 10386ab3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10386ab9 je 0x10386ac7 */
  if (C.zf) goto L_10386ac7;
  /* 10386abb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10386ac1 jne 0x10386a89 */
  if (!C.zf) goto L_10386a89;
  /* 10386ac3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10386ac5 jmp 0x10386adf */
  goto L_10386adf;
L_10386ac7:;
  /* 10386ac7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10386acd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10386acf jmp 0x10386adf */
  goto L_10386adf;
L_10386ad1:;
  /* 10386ad1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10386ad7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10386ad9 jmp 0x10386adf */
  goto L_10386adf;
L_10386adb:;
  /* 10386adb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10386add mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10386adf:;
  /* 10386adf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10386ae4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386ae5 je 0x10386af1 */
  if (C.zf) goto L_10386af1;
L_10386ae7:;
  /* 10386ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10386ae9:;
  /* 10386ae9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10386aeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386aee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386aef jne 0x10386ae9 */
  if (!C.zf) goto L_10386ae9;
L_10386af1:;
  /* 10386af1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10386af4 jne 0x10386a7b */
  if (!C.zf) goto L_10386a7b;
L_10386af6:;
  /* 10386af6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10386afa pop ebx */
  EBX = (pop32());
  /* 10386afb pop esi */
  ESI = (pop32());
  /* 10386afc pop edi */
  EDI = (pop32());
  /* 10386afd ret  */
  ESPCHK(0x10386a00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10386b00 (88 bytes, 40 insns) */
void f_10386b00(void) {
  FTRACE(0x10386b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386b00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10386b04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10386b08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10386b0a je 0x10386b53 */
  if (C.zf) goto L_10386b53;
  /* 10386b0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10386b0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10386b12 push edi */
  push32((uint32_t)(EDI));
  /* 10386b13 mov edi, ecx */
  EDI = (ECX);
  /* 10386b15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386b18 jb 0x10386b47 */
  if (C.cf) goto L_10386b47;
  /* 10386b1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10386b1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10386b1f je 0x10386b29 */
  if (C.zf) goto L_10386b29;
  /* 10386b21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10386b23:;
  /* 10386b23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386b25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10386b26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386b27 jne 0x10386b23 */
  if (!C.zf) goto L_10386b23;
L_10386b29:;
  /* 10386b29 mov ecx, eax */
  ECX = (EAX);
  /* 10386b2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10386b2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386b30 mov ecx, eax */
  ECX = (EAX);
  /* 10386b32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10386b35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386b37 mov ecx, edx */
  ECX = (EDX);
  /* 10386b39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10386b3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386b3f je 0x10386b47 */
  if (C.zf) goto L_10386b47;
  /* 10386b41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10386b43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10386b45 je 0x10386b4d */
  if (C.zf) goto L_10386b4d;
L_10386b47:;
  /* 10386b47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386b49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10386b4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10386b4b jne 0x10386b47 */
  if (!C.zf) goto L_10386b47;
L_10386b4d:;
  /* 10386b4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10386b51 pop edi */
  EDI = (pop32());
  /* 10386b52 ret  */
  ESPCHK(0x10386b00u, _esp0);
  ESP += 4; return;
L_10386b53:;
  /* 10386b53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10386b57 ret  */
  ESPCHK(0x10386b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b58 @ 0x10386b58 (27 bytes, 13 insns) */
void f_10386b58(void) {
  FTRACE(0x10386b58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386b58 mov eax, dword ptr [0x1038a2a8] */
  EAX = (r32((uint32_t)(0x1038a2a8)));
  /* 10386b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386b5f je 0x10386b70 */
  if (C.zf) goto L_10386b70;
  /* 10386b61 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10386b65 call eax */
  call_ind((uint32_t)(EAX), 0x10386b67u);
  /* 10386b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386b69 pop ecx */
  ECX = (pop32());
  /* 10386b6a je 0x10386b70 */
  if (C.zf) goto L_10386b70;
  /* 10386b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10386b6e pop eax */
  EAX = (pop32());
  /* 10386b6f ret  */
  ESPCHK(0x10386b58u, _esp0);
  ESP += 4; return;
L_10386b70:;
  /* 10386b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10386b72 ret  */
  ESPCHK(0x10386b58u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b73 @ 0x10386b73 (511 bytes, 193 insns) */
void f_10386b73(void) {
  FTRACE(0x10386b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386b73 push ebp */
  push32((uint32_t)(EBP));
  /* 10386b74 mov ebp, esp */
  EBP = (ESP);
  /* 10386b76 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10386b78 push 0x103884c0 */
  push32((uint32_t)(0x103884c0u));
  /* 10386b7d push 0x10387340 */
  push32((uint32_t)(0x10387340u));
  /* 10386b82 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10386b88 push eax */
  push32((uint32_t)(EAX));
  /* 10386b89 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10386b90 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386b93 push ebx */
  push32((uint32_t)(EBX));
  /* 10386b94 push esi */
  push32((uint32_t)(ESI));
  /* 10386b95 push edi */
  push32((uint32_t)(EDI));
  /* 10386b96 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10386b99 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10386b9b cmp dword ptr [0x1038a2d0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1038a2d0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386ba1 jne 0x10386be9 */
  if (!C.zf) goto L_10386be9;
  /* 10386ba3 push edi */
  push32((uint32_t)(EDI));
  /* 10386ba4 push edi */
  push32((uint32_t)(EDI));
  /* 10386ba5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386ba7 pop ebx */
  EBX = (pop32());
  /* 10386ba8 push ebx */
  push32((uint32_t)(EBX));
  /* 10386ba9 push 0x103884b8 */
  push32((uint32_t)(0x103884b8u));
  /* 10386bae mov esi, 0x100 */
  ESI = (0x100u);
  /* 10386bb3 push esi */
  push32((uint32_t)(ESI));
  /* 10386bb4 push edi */
  push32((uint32_t)(EDI));
  /* 10386bb5 call dword ptr [0x10388008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388008))), 0x10386bbbu);
  /* 10386bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386bbd je 0x10386bc7 */
  if (C.zf) goto L_10386bc7;
  /* 10386bbf mov dword ptr [0x1038a2d0], ebx */
  w32((uint32_t)(0x1038a2d0), (EBX));
  /* 10386bc5 jmp 0x10386be9 */
  goto L_10386be9;
L_10386bc7:;
  /* 10386bc7 push edi */
  push32((uint32_t)(EDI));
  /* 10386bc8 push edi */
  push32((uint32_t)(EDI));
  /* 10386bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 10386bca push 0x103884b4 */
  push32((uint32_t)(0x103884b4u));
  /* 10386bcf push esi */
  push32((uint32_t)(ESI));
  /* 10386bd0 push edi */
  push32((uint32_t)(EDI));
  /* 10386bd1 call dword ptr [0x1038800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038800c))), 0x10386bd7u);
  /* 10386bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386bd9 je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386bdf mov dword ptr [0x1038a2d0], 2 */
  w32((uint32_t)(0x1038a2d0), (0x2u));
L_10386be9:;
  /* 10386be9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386bec jle 0x10386bfe */
  if ((C.zf||C.sf!=C.of)) goto L_10386bfe;
  /* 10386bee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10386bf1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386bf4 call 0x10386d97 */
  push32(0x10386bf9u); f_10386d97();
  /* 10386bf9 pop ecx */
  ECX = (pop32());
  /* 10386bfa pop ecx */
  ECX = (pop32());
  /* 10386bfb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10386bfe:;
  /* 10386bfe mov eax, dword ptr [0x1038a2d0] */
  EAX = (r32((uint32_t)(0x1038a2d0)));
  /* 10386c03 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386c06 jne 0x10386c25 */
  if (!C.zf) goto L_10386c25;
  /* 10386c08 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10386c0b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10386c0e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10386c11 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386c14 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386c17 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10386c1a call dword ptr [0x1038800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038800c))), 0x10386c20u);
  /* 10386c20 jmp 0x10386d03 */
  goto L_10386d03;
L_10386c25:;
  /* 10386c25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386c28 jne 0x10386d01 */
  if (!C.zf) goto L_10386d01;
  /* 10386c2e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386c31 jne 0x10386c3b */
  if (!C.zf) goto L_10386c3b;
  /* 10386c33 mov eax, dword ptr [0x1038a2c8] */
  EAX = (r32((uint32_t)(0x1038a2c8)));
  /* 10386c38 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10386c3b:;
  /* 10386c3b push edi */
  push32((uint32_t)(EDI));
  /* 10386c3c push edi */
  push32((uint32_t)(EDI));
  /* 10386c3d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10386c40 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386c43 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10386c46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10386c48 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386c4a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10386c4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10386c4e push eax */
  push32((uint32_t)(EAX));
  /* 10386c4f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10386c52 call dword ptr [0x1038801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038801c))), 0x10386c58u);
  /* 10386c58 mov ebx, eax */
  EBX = (EAX);
  /* 10386c5a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10386c5d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386c5f je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386c65 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10386c68 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10386c6b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386c6e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10386c70 call 0x10387420 */
  push32(0x10386c75u); f_10387420();
  /* 10386c75 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10386c78 mov eax, esp */
  EAX = (ESP);
  /* 10386c7a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10386c7d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10386c81 jmp 0x10386c96 */
  goto L_10386c96;
  /* 10386c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386c85 pop eax */
  EAX = (pop32());
  /* 10386c86 ret  */
  ESPCHK(0x10386b73u, _esp0);
  ESP += 4; return;
  /* 10386c87 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10386c8a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10386c8c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10386c8f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10386c93 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10386c96:;
  /* 10386c96 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386c99 je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386c9b push ebx */
  push32((uint32_t)(EBX));
  /* 10386c9c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10386c9f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10386ca2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386ca5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386ca7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10386caa call dword ptr [0x1038801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038801c))), 0x10386cb0u);
  /* 10386cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386cb2 je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386cb4 push edi */
  push32((uint32_t)(EDI));
  /* 10386cb5 push edi */
  push32((uint32_t)(EDI));
  /* 10386cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10386cb7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10386cba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386cbd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10386cc0 call dword ptr [0x10388008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388008))), 0x10386cc6u);
  /* 10386cc6 mov esi, eax */
  ESI = (EAX);
  /* 10386cc8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10386ccb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386ccd je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386ccf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10386cd3 je 0x10386d15 */
  if (C.zf) goto L_10386d15;
  /* 10386cd5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386cd8 je 0x10386d90 */
  if (C.zf) goto L_10386d90;
  /* 10386cde cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386ce1 jg 0x10386d01 */
  if ((!C.zf&&C.sf==C.of)) goto L_10386d01;
  /* 10386ce3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10386ce6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10386ce9 push ebx */
  push32((uint32_t)(EBX));
  /* 10386cea push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10386ced push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386cf0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10386cf3 call dword ptr [0x10388008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388008))), 0x10386cf9u);
  /* 10386cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386cfb jne 0x10386d90 */
  if (!C.zf) goto L_10386d90;
L_10386d01:;
  /* 10386d01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10386d03:;
  /* 10386d03 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10386d06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10386d09 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10386d10 pop edi */
  EDI = (pop32());
  /* 10386d11 pop esi */
  ESI = (pop32());
  /* 10386d12 pop ebx */
  EBX = (pop32());
  /* 10386d13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10386d14 ret  */
  ESPCHK(0x10386b73u, _esp0);
  ESP += 4; return;
L_10386d15:;
  /* 10386d15 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10386d1c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10386d1f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386d22 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10386d24 call 0x10387420 */
  push32(0x10386d29u); f_10387420();
  /* 10386d29 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10386d2c mov ebx, esp */
  EBX = (ESP);
  /* 10386d2e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10386d31 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10386d35 jmp 0x10386d49 */
  goto L_10386d49;
  /* 10386d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386d39 pop eax */
  EAX = (pop32());
  /* 10386d3a ret  */
  ESPCHK(0x10386b73u, _esp0);
  ESP += 4; return;
  /* 10386d3b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10386d3e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10386d40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10386d42 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10386d46 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10386d49:;
  /* 10386d49 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386d4b je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386d4d push esi */
  push32((uint32_t)(ESI));
  /* 10386d4e push ebx */
  push32((uint32_t)(EBX));
  /* 10386d4f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10386d52 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10386d55 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386d58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10386d5b call dword ptr [0x10388008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388008))), 0x10386d61u);
  /* 10386d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386d63 je 0x10386d01 */
  if (C.zf) goto L_10386d01;
  /* 10386d65 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386d68 push edi */
  push32((uint32_t)(EDI));
  /* 10386d69 push edi */
  push32((uint32_t)(EDI));
  /* 10386d6a jne 0x10386d70 */
  if (!C.zf) goto L_10386d70;
  /* 10386d6c push edi */
  push32((uint32_t)(EDI));
  /* 10386d6d push edi */
  push32((uint32_t)(EDI));
  /* 10386d6e jmp 0x10386d76 */
  goto L_10386d76;
L_10386d70:;
  /* 10386d70 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10386d73 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10386d76:;
  /* 10386d76 push esi */
  push32((uint32_t)(ESI));
  /* 10386d77 push ebx */
  push32((uint32_t)(EBX));
  /* 10386d78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10386d7d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10386d80 call dword ptr [0x1038805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038805c))), 0x10386d86u);
  /* 10386d86 mov esi, eax */
  ESI = (EAX);
  /* 10386d88 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386d8a je 0x10386d01 */
  if (C.zf) goto L_10386d01;
L_10386d90:;
  /* 10386d90 mov eax, esi */
  EAX = (ESI);
  /* 10386d92 jmp 0x10386d03 */
  goto L_10386d03;
}

/* FUN_10006d97 @ 0x10386d97 (43 bytes, 20 insns) */
void f_10386d97(void) {
  FTRACE(0x10386d97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386d97 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10386d9b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10386d9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10386da1 push esi */
  push32((uint32_t)(ESI));
  /* 10386da2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10386da5 je 0x10386db4 */
  if (C.zf) goto L_10386db4;
L_10386da7:;
  /* 10386da7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386daa je 0x10386db4 */
  if (C.zf) goto L_10386db4;
  /* 10386dac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10386dad mov esi, ecx */
  ESI = (ECX);
  /* 10386daf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10386db0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10386db2 jne 0x10386da7 */
  if (!C.zf) goto L_10386da7;
L_10386db4:;
  /* 10386db4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10386db7 pop esi */
  ESI = (pop32());
  /* 10386db8 jne 0x10386dbf */
  if (!C.zf) goto L_10386dbf;
  /* 10386dba sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386dbe ret  */
  ESPCHK(0x10386d97u, _esp0);
  ESP += 4; return;
L_10386dbf:;
  /* 10386dbf mov eax, edx */
  EAX = (EDX);
  /* 10386dc1 ret  */
  ESPCHK(0x10386d97u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc2 @ 0x10386dc2 (318 bytes, 123 insns) */
void f_10386dc2(void) {
  FTRACE(0x10386dc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386dc2 push ebp */
  push32((uint32_t)(EBP));
  /* 10386dc3 mov ebp, esp */
  EBP = (ESP);
  /* 10386dc5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10386dc7 push 0x103884d8 */
  push32((uint32_t)(0x103884d8u));
  /* 10386dcc push 0x10387340 */
  push32((uint32_t)(0x10387340u));
  /* 10386dd1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10386dd7 push eax */
  push32((uint32_t)(EAX));
  /* 10386dd8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10386ddf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386de2 push ebx */
  push32((uint32_t)(EBX));
  /* 10386de3 push esi */
  push32((uint32_t)(ESI));
  /* 10386de4 push edi */
  push32((uint32_t)(EDI));
  /* 10386de5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10386de8 mov eax, dword ptr [0x1038a2d4] */
  EAX = (r32((uint32_t)(0x1038a2d4)));
  /* 10386ded xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10386def cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386df1 jne 0x10386e31 */
  if (!C.zf) goto L_10386e31;
  /* 10386df3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10386df6 push eax */
  push32((uint32_t)(EAX));
  /* 10386df7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386df9 pop esi */
  ESI = (pop32());
  /* 10386dfa push esi */
  push32((uint32_t)(ESI));
  /* 10386dfb push 0x103884b8 */
  push32((uint32_t)(0x103884b8u));
  /* 10386e00 push esi */
  push32((uint32_t)(ESI));
  /* 10386e01 call dword ptr [0x10388004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388004))), 0x10386e07u);
  /* 10386e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386e09 je 0x10386e0f */
  if (C.zf) goto L_10386e0f;
  /* 10386e0b mov eax, esi */
  EAX = (ESI);
  /* 10386e0d jmp 0x10386e2c */
  goto L_10386e2c;
L_10386e0f:;
  /* 10386e0f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10386e12 push eax */
  push32((uint32_t)(EAX));
  /* 10386e13 push esi */
  push32((uint32_t)(ESI));
  /* 10386e14 push 0x103884b4 */
  push32((uint32_t)(0x103884b4u));
  /* 10386e19 push esi */
  push32((uint32_t)(ESI));
  /* 10386e1a push ebx */
  push32((uint32_t)(EBX));
  /* 10386e1b call dword ptr [0x10388010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388010))), 0x10386e21u);
  /* 10386e21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10386e23 je 0x10386ef7 */
  if (C.zf) goto L_10386ef7;
  /* 10386e29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10386e2b pop eax */
  EAX = (pop32());
L_10386e2c:;
  /* 10386e2c mov dword ptr [0x1038a2d4], eax */
  w32((uint32_t)(0x1038a2d4), (EAX));
L_10386e31:;
  /* 10386e31 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386e34 jne 0x10386e5a */
  if (!C.zf) goto L_10386e5a;
  /* 10386e36 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10386e39 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386e3b jne 0x10386e42 */
  if (!C.zf) goto L_10386e42;
  /* 10386e3d mov eax, dword ptr [0x1038a2b8] */
  EAX = (r32((uint32_t)(0x1038a2b8)));
L_10386e42:;
  /* 10386e42 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10386e45 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386e48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386e4b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10386e4e push eax */
  push32((uint32_t)(EAX));
  /* 10386e4f call dword ptr [0x10388010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388010))), 0x10386e55u);
  /* 10386e55 jmp 0x10386ef9 */
  goto L_10386ef9;
L_10386e5a:;
  /* 10386e5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386e5d jne 0x10386ef7 */
  if (!C.zf) goto L_10386ef7;
  /* 10386e63 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386e66 jne 0x10386e70 */
  if (!C.zf) goto L_10386e70;
  /* 10386e68 mov eax, dword ptr [0x1038a2c8] */
  EAX = (r32((uint32_t)(0x1038a2c8)));
  /* 10386e6d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10386e70:;
  /* 10386e70 push ebx */
  push32((uint32_t)(EBX));
  /* 10386e71 push ebx */
  push32((uint32_t)(EBX));
  /* 10386e72 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386e75 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386e78 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10386e7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10386e7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386e7f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10386e82 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10386e83 push eax */
  push32((uint32_t)(EAX));
  /* 10386e84 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10386e87 call dword ptr [0x1038801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038801c))), 0x10386e8du);
  /* 10386e8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10386e90 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386e92 je 0x10386ef7 */
  if (C.zf) goto L_10386ef7;
  /* 10386e94 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10386e97 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10386e9a mov eax, edi */
  EAX = (EDI);
  /* 10386e9c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386e9f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10386ea1 call 0x10387420 */
  push32(0x10386ea6u); f_10387420();
  /* 10386ea6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10386ea9 mov esi, esp */
  ESI = (ESP);
  /* 10386eab mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10386eae push edi */
  push32((uint32_t)(EDI));
  /* 10386eaf push ebx */
  push32((uint32_t)(EBX));
  /* 10386eb0 push esi */
  push32((uint32_t)(ESI));
  /* 10386eb1 call 0x10386b00 */
  push32(0x10386eb6u); f_10386b00();
  /* 10386eb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10386eb9 jmp 0x10386ec6 */
  goto L_10386ec6;
  /* 10386ebb push 1 */
  push32((uint32_t)(0x1u));
  /* 10386ebd pop eax */
  EAX = (pop32());
  /* 10386ebe ret  */
  ESPCHK(0x10386dc2u, _esp0);
  ESP += 4; return;
  /* 10386ebf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10386ec2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10386ec4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10386ec6:;
  /* 10386ec6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10386eca cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386ecc je 0x10386ef7 */
  if (C.zf) goto L_10386ef7;
  /* 10386ece push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10386ed1 push esi */
  push32((uint32_t)(ESI));
  /* 10386ed2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10386ed5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10386ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10386eda push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10386edd call dword ptr [0x1038801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1038801c))), 0x10386ee3u);
  /* 10386ee3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386ee5 je 0x10386ef7 */
  if (C.zf) goto L_10386ef7;
  /* 10386ee7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10386eea push eax */
  push32((uint32_t)(EAX));
  /* 10386eeb push esi */
  push32((uint32_t)(ESI));
  /* 10386eec push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10386eef call dword ptr [0x10388004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10388004))), 0x10386ef5u);
  /* 10386ef5 jmp 0x10386ef9 */
  goto L_10386ef9;
L_10386ef7:;
  /* 10386ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10386ef9:;
  /* 10386ef9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10386efc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10386eff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10386f06 pop edi */
  EDI = (pop32());
  /* 10386f07 pop esi */
  ESI = (pop32());
  /* 10386f08 pop ebx */
  EBX = (pop32());
  /* 10386f09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10386f0a ret  */
  ESPCHK(0x10386dc2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x10386f10 (664 bytes, 261 insns) [15 switch table(s)] */
void f_10386f10(void) {
  FTRACE(0x10386f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10386f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10386f11 mov ebp, esp */
  EBP = (ESP);
  /* 10386f13 push edi */
  push32((uint32_t)(EDI));
  /* 10386f14 push esi */
  push32((uint32_t)(ESI));
  /* 10386f15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10386f18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10386f1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10386f1e mov eax, ecx */
  EAX = (ECX);
  /* 10386f20 mov edx, ecx */
  EDX = (ECX);
  /* 10386f22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386f24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386f26 jbe 0x10386f30 */
  if ((C.cf||C.zf)) goto L_10386f30;
  /* 10386f28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386f2a jb 0x103870a8 */
  if (C.cf) goto L_103870a8;
L_10386f30:;
  /* 10386f30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10386f36 jne 0x10386f4c */
  if (!C.zf) goto L_10386f4c;
  /* 10386f38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386f3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10386f3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386f41 jb 0x10386f6c */
  if (C.cf) goto L_10386f6c;
  /* 10386f43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10386f45 jmp dword ptr [edx*4 + 0x10387058] */
  switch (EDX) {
    case 0: goto L_10387068;
    case 1: goto L_10387070;
    case 2: goto L_1038707c;
    case 3: goto L_10387090;
    default: x86_unimpl("switch@0x10386f45 out of table"); return;
  }
L_10386f4c:;
  /* 10386f4c mov eax, edi */
  EAX = (EDI);
  /* 10386f4e mov edx, 3 */
  EDX = (0x3u);
  /* 10386f53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10386f56 jb 0x10386f64 */
  if (C.cf) goto L_10386f64;
  /* 10386f58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10386f5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10386f5d jmp dword ptr [eax*4 + 0x10386f70] */
  switch (EAX) {
    case 1: goto L_10386f80;
    case 2: goto L_10386fac;
    case 3: goto L_10386fd0;
    default: x86_unimpl("switch@0x10386f5d out of table"); return;
  }
L_10386f64:;
  /* 10386f64 jmp dword ptr [ecx*4 + 0x10387068] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10387068)))); return;
  /* 10386f6b nop  */
  /* nop */
L_10386f6c:;
  /* 10386f6c jmp dword ptr [ecx*4 + 0x10386fec] */
  switch (ECX) {
    case 0: goto L_1038704f;
    case 1: goto L_1038703c;
    case 2: goto L_10387034;
    case 3: goto L_1038702c;
    case 4: goto L_10387024;
    case 5: goto L_1038701c;
    case 6: goto L_10387014;
    case 7: goto L_1038700c;
    default: x86_unimpl("switch@0x10386f6c out of table"); return;
  }
  /* 10386f73 nop  */
  /* nop */
L_10386f80:;
  /* 10386f80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10386f82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10386f84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386f86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10386f89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10386f8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10386f8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386f92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10386f95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386f98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386f9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386f9e jb 0x10386f6c */
  if (C.cf) goto L_10386f6c;
  /* 10386fa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10386fa2 jmp dword ptr [edx*4 + 0x10387058] */
  switch (EDX) {
    case 0: goto L_10387068;
    case 1: goto L_10387070;
    case 2: goto L_1038707c;
    case 3: goto L_10387090;
    default: x86_unimpl("switch@0x10386fa2 out of table"); return;
  }
  /* 10386fa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10386fac:;
  /* 10386fac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10386fae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10386fb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386fb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10386fb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386fb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10386fbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386fbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10386fc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386fc4 jb 0x10386f6c */
  if (C.cf) goto L_10386f6c;
  /* 10386fc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10386fc8 jmp dword ptr [edx*4 + 0x10387058] */
  switch (EDX) {
    case 0: goto L_10387068;
    case 1: goto L_10387070;
    case 2: goto L_1038707c;
    case 3: goto L_10387090;
    default: x86_unimpl("switch@0x10386fc8 out of table"); return;
  }
  /* 10386fcf nop  */
  /* nop */
L_10386fd0:;
  /* 10386fd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10386fd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10386fd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10386fd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10386fd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10386fda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10386fdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10386fde jb 0x10386f6c */
  if (C.cf) goto L_10386f6c;
  /* 10386fe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10386fe2 jmp dword ptr [edx*4 + 0x10387058] */
  switch (EDX) {
    case 0: goto L_10387068;
    case 1: goto L_10387070;
    case 2: goto L_1038707c;
    case 3: goto L_10387090;
    default: x86_unimpl("switch@0x10386fe2 out of table"); return;
  }
  /* 10386fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1038700c:;
  /* 1038700c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10387010 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10387014:;
  /* 10387014 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10387018 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1038701c:;
  /* 1038701c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10387020 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10387024:;
  /* 10387024 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10387028 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1038702c:;
  /* 1038702c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10387030 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10387034:;
  /* 10387034 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10387038 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1038703c:;
  /* 1038703c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10387040 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10387044 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1038704b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1038704d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1038704f:;
  /* 1038704f jmp dword ptr [edx*4 + 0x10387058] */
  switch (EDX) {
    case 0: goto L_10387068;
    case 1: goto L_10387070;
    case 2: goto L_1038707c;
    case 3: goto L_10387090;
    default: x86_unimpl("switch@0x1038704f out of table"); return;
  }
  /* 10387056 mov edi, edi */
  EDI = (EDI);
L_10387068:;
  /* 10387068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1038706b pop esi */
  ESI = (pop32());
  /* 1038706c pop edi */
  EDI = (pop32());
  /* 1038706d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1038706e ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 1038706f nop  */
  /* nop */
L_10387070:;
  /* 10387070 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10387072 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10387074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387077 pop esi */
  ESI = (pop32());
  /* 10387078 pop edi */
  EDI = (pop32());
  /* 10387079 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1038707a ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 1038707b nop  */
  /* nop */
L_1038707c:;
  /* 1038707c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1038707e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10387080 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10387083 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10387086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387089 pop esi */
  ESI = (pop32());
  /* 1038708a pop edi */
  EDI = (pop32());
  /* 1038708b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1038708c ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 1038708d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10387090:;
  /* 10387090 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10387092 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10387094 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10387097 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1038709a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1038709d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103870a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103870a3 pop esi */
  ESI = (pop32());
  /* 103870a4 pop edi */
  EDI = (pop32());
  /* 103870a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103870a6 ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 103870a7 nop  */
  /* nop */
L_103870a8:;
  /* 103870a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103870ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103870b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103870b6 jne 0x103870dc */
  if (!C.zf) goto L_103870dc;
  /* 103870b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103870bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103870be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103870c1 jb 0x103870d0 */
  if (C.cf) goto L_103870d0;
  /* 103870c3 std  */
  C.df=1;
  /* 103870c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103870c6 cld  */
  C.df=0;
  /* 103870c7 jmp dword ptr [edx*4 + 0x103871f0] */
  switch (EDX) {
    case 0: goto L_10387200;
    case 1: goto L_10387208;
    case 2: goto L_10387218;
    case 3: goto L_1038722c;
    default: x86_unimpl("switch@0x103870c7 out of table"); return;
  }
  /* 103870ce mov edi, edi */
  EDI = (EDI);
L_103870d0:;
  /* 103870d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103870d2 jmp dword ptr [ecx*4 + 0x103871a0] */
  switch (ECX) {
    case 0: goto L_103871e7;
    default: x86_unimpl("switch@0x103870d2 out of table"); return;
  }
  /* 103870d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103870dc:;
  /* 103870dc mov eax, edi */
  EAX = (EDI);
  /* 103870de mov edx, 3 */
  EDX = (0x3u);
  /* 103870e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103870e6 jb 0x103870f4 */
  if (C.cf) goto L_103870f4;
  /* 103870e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103870eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103870ed jmp dword ptr [eax*4 + 0x103870f8] */
  switch (EAX) {
    case 1: goto L_10387108;
    case 2: goto L_10387128;
    case 3: goto L_10387150;
    default: x86_unimpl("switch@0x103870ed out of table"); return;
  }
L_103870f4:;
  /* 103870f4 jmp dword ptr [ecx*4 + 0x103871f0] */
  switch (ECX) {
    case 0: goto L_10387200;
    case 1: goto L_10387208;
    case 2: goto L_10387218;
    case 3: goto L_1038722c;
    default: x86_unimpl("switch@0x103870f4 out of table"); return;
  }
  /* 103870fb nop  */
  /* nop */
L_10387108:;
  /* 10387108 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038710b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1038710d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10387110 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10387111 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10387114 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10387115 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10387118 jb 0x103870d0 */
  if (C.cf) goto L_103870d0;
  /* 1038711a std  */
  C.df=1;
  /* 1038711b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1038711d cld  */
  C.df=0;
  /* 1038711e jmp dword ptr [edx*4 + 0x103871f0] */
  switch (EDX) {
    case 0: goto L_10387200;
    case 1: goto L_10387208;
    case 2: goto L_10387218;
    case 3: goto L_1038722c;
    default: x86_unimpl("switch@0x1038711e out of table"); return;
  }
  /* 10387125 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10387128:;
  /* 10387128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038712b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1038712d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10387130 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10387133 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10387136 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10387139 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038713c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038713f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10387142 jb 0x103870d0 */
  if (C.cf) goto L_103870d0;
  /* 10387144 std  */
  C.df=1;
  /* 10387145 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10387147 cld  */
  C.df=0;
  /* 10387148 jmp dword ptr [edx*4 + 0x103871f0] */
  switch (EDX) {
    case 0: goto L_10387200;
    case 1: goto L_10387208;
    case 2: goto L_10387218;
    case 3: goto L_1038722c;
    default: x86_unimpl("switch@0x10387148 out of table"); return;
  }
  /* 1038714f nop  */
  /* nop */
L_10387150:;
  /* 10387150 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10387153 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10387155 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10387158 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1038715b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1038715e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10387161 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10387164 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10387167 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038716a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1038716d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10387170 jb 0x103870d0 */
  if (C.cf) goto L_103870d0;
  /* 10387176 std  */
  C.df=1;
  /* 10387177 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10387179 cld  */
  C.df=0;
  /* 1038717a jmp dword ptr [edx*4 + 0x103871f0] */
  switch (EDX) {
    case 0: goto L_10387200;
    case 1: goto L_10387208;
    case 2: goto L_10387218;
    case 3: goto L_1038722c;
    default: x86_unimpl("switch@0x1038717a out of table"); return;
  }
  /* 10387181 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10387184 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10387185 jno 0x103871bf */
  if (!C.of) goto L_103871bf;
  /* 10387187 adc byte ptr [ecx + esi*2 + 0x71b41038], ch */
  { uint32_t _a=(r8((uint32_t)(ECX + ESI*2 + 0x71b41038))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + ESI*2 + 0x71b41038), (_r)); fl_add(_a,_b,_r,8); }
  /* 1038718e cmp byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10387190 mov esp, 0xc4103871 */
  ESP = (0xc4103871u);
  /* 10387195 jno 0x103871cf */
  if (!C.of) goto L_103871cf;
  /* 10387197 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10387199 jno 0x103871d3 */
  if (!C.of) goto L_103871d3;
  /* 1038719b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1038719d jno 0x103871d7 */
  if (!C.of) goto L_103871d7;
  /* 103871a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103871a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103871ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103871b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103871b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103871b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103871bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103871c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103871c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103871c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103871cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103871d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103871d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103871d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103871dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103871e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103871e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103871e7:;
  /* 103871e7 jmp dword ptr [edx*4 + 0x103871f0] */
  switch (EDX) {
    case 0: goto L_10387200;
    case 1: goto L_10387208;
    case 2: goto L_10387218;
    case 3: goto L_1038722c;
    default: x86_unimpl("switch@0x103871e7 out of table"); return;
  }
  /* 103871ee mov edi, edi */
  EDI = (EDI);
L_10387200:;
  /* 10387200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387203 pop esi */
  ESI = (pop32());
  /* 10387204 pop edi */
  EDI = (pop32());
  /* 10387205 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10387206 ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 10387207 nop  */
  /* nop */
L_10387208:;
  /* 10387208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038720b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1038720e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387211 pop esi */
  ESI = (pop32());
  /* 10387212 pop edi */
  EDI = (pop32());
  /* 10387213 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10387214 ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 10387215 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10387218:;
  /* 10387218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038721b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1038721e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10387221 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10387224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387227 pop esi */
  ESI = (pop32());
  /* 10387228 pop edi */
  EDI = (pop32());
  /* 10387229 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1038722a ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
  /* 1038722b nop  */
  /* nop */
L_1038722c:;
  /* 1038722c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1038722f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10387232 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10387235 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10387238 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1038723b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1038723e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387241 pop esi */
  ESI = (pop32());
  /* 10387242 pop edi */
  EDI = (pop32());
  /* 10387243 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10387244 ret  */
  ESPCHK(0x10386f10u, _esp0);
  ESP += 4; return;
L_103871bf: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103871bf (unresolved jump table)"); return;
L_103871cf: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103871cf (unresolved jump table)"); return;
L_103871d3: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103871d3 (unresolved jump table)"); return;
L_103871d7: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x103871d7 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x10387248 (32 bytes, 18 insns) */
void f_10387248(void) {
  FTRACE(0x10387248u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10387248 push ebp */
  push32((uint32_t)(EBP));
  /* 10387249 mov ebp, esp */
  EBP = (ESP);
  /* 1038724b push ebx */
  push32((uint32_t)(EBX));
  /* 1038724c push esi */
  push32((uint32_t)(ESI));
  /* 1038724d push edi */
  push32((uint32_t)(EDI));
  /* 1038724e push ebp */
  push32((uint32_t)(EBP));
  /* 1038724f push 0 */
  push32((uint32_t)(0x0u));
  /* 10387251 push 0 */
  push32((uint32_t)(0x0u));
  /* 10387253 push 0x10387260 */
  push32((uint32_t)(0x10387260u));
  /* 10387258 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1038725b call 0x10387450 */
  push32(0x10387260u); f_10387450();
  /* 10387260 pop ebp */
  EBP = (pop32());
  /* 10387261 pop edi */
  EDI = (pop32());
  /* 10387262 pop esi */
  ESI = (pop32());
  /* 10387263 pop ebx */
  EBX = (pop32());
  /* 10387264 mov esp, ebp */
  ESP = (EBP);
  /* 10387266 pop ebp */
  EBP = (pop32());
  /* 10387267 ret  */
  ESPCHK(0x10387248u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1038728a (104 bytes, 33 insns) */
void f_1038728a(void) {
  FTRACE(0x1038728au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038728a push ebx */
  push32((uint32_t)(EBX));
  /* 1038728b push esi */
  push32((uint32_t)(ESI));
  /* 1038728c push edi */
  push32((uint32_t)(EDI));
  /* 1038728d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10387291 push eax */
  push32((uint32_t)(EAX));
  /* 10387292 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10387294 push 0x10387268 */
  push32((uint32_t)(0x10387268u));
  /* 10387299 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 103872a0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_103872a7:;
  /* 103872a7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 103872ab mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 103872ae mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 103872b1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103872b4 je 0x103872e4 */
  if (C.zf) goto L_103872e4;
  /* 103872b6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103872ba je 0x103872e4 */
  if (C.zf) goto L_103872e4;
  /* 103872bc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 103872bf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 103872c2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 103872c6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 103872c9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103872ce jne 0x103872e2 */
  if (!C.zf) goto L_103872e2;
  /* 103872d0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103872d5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 103872d9 call 0x1038731e */
  push32(0x103872deu); f_1038731e();
  /* 103872de call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x103872e2u);
L_103872e2:;
  /* 103872e2 jmp 0x103872a7 */
  goto L_103872a7;
L_103872e4:;
  /* 103872e4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 103872eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103872ee pop edi */
  EDI = (pop32());
  /* 103872ef pop esi */
  ESI = (pop32());
  /* 103872f0 pop ebx */
  EBX = (pop32());
  /* 103872f1 ret  */
  ESPCHK(0x1038728au, _esp0);
  ESP += 4; return;
}

/* FUN_1000731e @ 0x1038731e (24 bytes, 10 insns) */
void f_1038731e(void) {
  FTRACE(0x1038731eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1038731e push ebx */
  push32((uint32_t)(EBX));
  /* 1038731f push ecx */
  push32((uint32_t)(ECX));
  /* 10387320 mov ebx, 0x10389a70 */
  EBX = (0x10389a70u);
  /* 10387325 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10387328 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1038732b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1038732e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10387331 pop ecx */
  ECX = (pop32());
  /* 10387332 pop ebx */
  EBX = (pop32());
  /* 10387333 ret 4 */
  ESPCHK(0x1038731eu, _esp0);
  ESP += 8; return;
}

/* FUN_100073fd @ 0x103873fd (27 bytes, 11 insns) */
void f_103873fd(void) {
  FTRACE(0x103873fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103873fd push ebp */
  push32((uint32_t)(EBP));
  /* 103873fe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10387402 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10387404 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10387407 push eax */
  push32((uint32_t)(EAX));
  /* 10387408 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1038740b push eax */
  push32((uint32_t)(EAX));
  /* 1038740c call 0x1038728a */
  push32(0x10387411u); f_1038728a();
  /* 10387411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10387414 pop ebp */
  EBP = (pop32());
  /* 10387415 ret 4 */
  ESPCHK(0x103873fdu, _esp0);
  ESP += 8; return;
}

/* FUN_10007420 @ 0x10387420 (47 bytes, 17 insns) */
void f_10387420(void) {
  FTRACE(0x10387420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10387420 push ecx */
  push32((uint32_t)(ECX));
  /* 10387421 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10387426 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1038742a jb 0x10387440 */
  if (C.cf) goto L_10387440;
L_1038742c:;
  /* 1038742c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10387432 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10387437 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10387439 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1038743e jae 0x1038742c */
  if (!C.cf) goto L_1038742c;
L_10387440:;
  /* 10387440 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10387442 mov eax, esp */
  EAX = (ESP);
  /* 10387444 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10387446 mov esp, ecx */
  ESP = (ECX);
  /* 10387448 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1038744a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1038744d push eax */
  push32((uint32_t)(EAX));
  /* 1038744e ret  */
  ESPCHK(0x10387420u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10387450 (6 bytes, 1 insns) */
void f_10387450(void) {
  FTRACE(0x10387450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10387450 jmp dword ptr [0x10388000] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10388000)))); return;
}

