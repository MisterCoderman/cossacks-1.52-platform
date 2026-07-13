#include "recomp.h"

/* FUN_10001000 @ 0x10261000 (18 bytes, 7 insns) */
void f_10261000(void) {
  FTRACE(0x10261000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10261004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10261005 jne 0x1026100c */
  if (!C.zf) goto L_1026100c;
  /* 10261007 call 0x10261012 */
  push32(0x1026100cu); f_10261012();
L_1026100c:;
  /* 1026100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1026100e pop eax */
  EAX = (pop32());
  /* 1026100f ret 0xc */
  ESPCHK(0x10261000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10261012 (552 bytes, 180 insns) */
void f_10261012(void) {
  FTRACE(0x10261012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261012 push ebx */
  push32((uint32_t)(EBX));
  /* 10261013 push ebp */
  push32((uint32_t)(EBP));
  /* 10261014 push esi */
  push32((uint32_t)(ESI));
  /* 10261015 mov esi, dword ptr [0x1026510c] */
  ESI = (r32((uint32_t)(0x1026510c)));
  /* 1026101b push edi */
  push32((uint32_t)(EDI));
  /* 1026101c push 0x10266188 */
  push32((uint32_t)(0x10266188u));
  /* 10261021 push 0x10266590 */
  push32((uint32_t)(0x10266590u));
  /* 10261026 call esi */
  call_ind((uint32_t)(ESI), 0x10261028u);
  /* 10261028 push 0x10266184 */
  push32((uint32_t)(0x10266184u));
  /* 1026102d push 0x10266598 */
  push32((uint32_t)(0x10266598u));
  /* 10261032 call esi */
  call_ind((uint32_t)(ESI), 0x10261034u);
  /* 10261034 push 0x10266180 */
  push32((uint32_t)(0x10266180u));
  /* 10261039 push 0x102665a0 */
  push32((uint32_t)(0x102665a0u));
  /* 1026103e call esi */
  call_ind((uint32_t)(ESI), 0x10261040u);
  /* 10261040 mov esi, dword ptr [0x10265110] */
  ESI = (r32((uint32_t)(0x10265110)));
  /* 10261046 push 0x1026617c */
  push32((uint32_t)(0x1026617cu));
  /* 1026104b push 0x102665b8 */
  push32((uint32_t)(0x102665b8u));
  /* 10261050 call esi */
  call_ind((uint32_t)(ESI), 0x10261052u);
  /* 10261052 push 0x10266178 */
  push32((uint32_t)(0x10266178u));
  /* 10261057 push 0x102665c0 */
  push32((uint32_t)(0x102665c0u));
  /* 1026105c call esi */
  call_ind((uint32_t)(ESI), 0x1026105eu);
  /* 1026105e mov esi, dword ptr [0x10265114] */
  ESI = (r32((uint32_t)(0x10265114)));
  /* 10261064 push 8 */
  push32((uint32_t)(0x8u));
  /* 10261066 push 0x102665a8 */
  push32((uint32_t)(0x102665a8u));
  /* 1026106b call esi */
  call_ind((uint32_t)(ESI), 0x1026106du);
  /* 1026106d push 8 */
  push32((uint32_t)(0x8u));
  /* 1026106f push 0x102665b0 */
  push32((uint32_t)(0x102665b0u));
  /* 10261074 call esi */
  call_ind((uint32_t)(ESI), 0x10261076u);
  /* 10261076 push 0x10266170 */
  push32((uint32_t)(0x10266170u));
  /* 1026107b push 0x102665d0 */
  push32((uint32_t)(0x102665d0u));
  /* 10261080 call dword ptr [0x10265118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265118))), 0x10261086u);
  /* 10261086 mov esi, dword ptr [0x1026511c] */
  ESI = (r32((uint32_t)(0x1026511c)));
  /* 1026108c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026108f push 0x1026615c */
  push32((uint32_t)(0x1026615cu));
  /* 10261094 push 0x10266538 */
  push32((uint32_t)(0x10266538u));
  /* 10261099 call esi */
  call_ind((uint32_t)(ESI), 0x1026109bu);
  /* 1026109b push 0x1026614c */
  push32((uint32_t)(0x1026614cu));
  /* 102610a0 push 0x10266548 */
  push32((uint32_t)(0x10266548u));
  /* 102610a5 call esi */
  call_ind((uint32_t)(ESI), 0x102610a7u);
  /* 102610a7 push 0x10266140 */
  push32((uint32_t)(0x10266140u));
  /* 102610ac push 0x10266558 */
  push32((uint32_t)(0x10266558u));
  /* 102610b1 call esi */
  call_ind((uint32_t)(ESI), 0x102610b3u);
  /* 102610b3 push 0x10266134 */
  push32((uint32_t)(0x10266134u));
  /* 102610b8 push 0x10266560 */
  push32((uint32_t)(0x10266560u));
  /* 102610bd call esi */
  call_ind((uint32_t)(ESI), 0x102610bfu);
  /* 102610bf push 0x10266124 */
  push32((uint32_t)(0x10266124u));
  /* 102610c4 push 0x10266568 */
  push32((uint32_t)(0x10266568u));
  /* 102610c9 call esi */
  call_ind((uint32_t)(ESI), 0x102610cbu);
  /* 102610cb push 0x10266110 */
  push32((uint32_t)(0x10266110u));
  /* 102610d0 push 0x10266570 */
  push32((uint32_t)(0x10266570u));
  /* 102610d5 call esi */
  call_ind((uint32_t)(ESI), 0x102610d7u);
  /* 102610d7 push 0x10266100 */
  push32((uint32_t)(0x10266100u));
  /* 102610dc push 0x10266578 */
  push32((uint32_t)(0x10266578u));
  /* 102610e1 call esi */
  call_ind((uint32_t)(ESI), 0x102610e3u);
  /* 102610e3 push 0x102660f0 */
  push32((uint32_t)(0x102660f0u));
  /* 102610e8 push 0x10266580 */
  push32((uint32_t)(0x10266580u));
  /* 102610ed call esi */
  call_ind((uint32_t)(ESI), 0x102610efu);
  /* 102610ef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102610f2 push 0x102660dc */
  push32((uint32_t)(0x102660dcu));
  /* 102610f7 push 0x10266588 */
  push32((uint32_t)(0x10266588u));
  /* 102610fc call esi */
  call_ind((uint32_t)(ESI), 0x102610feu);
  /* 102610fe push 0x102660c8 */
  push32((uint32_t)(0x102660c8u));
  /* 10261103 push 0x10266500 */
  push32((uint32_t)(0x10266500u));
  /* 10261108 call esi */
  call_ind((uint32_t)(ESI), 0x1026110au);
  /* 1026110a push 0x102660b8 */
  push32((uint32_t)(0x102660b8u));
  /* 1026110f push 0x10266508 */
  push32((uint32_t)(0x10266508u));
  /* 10261114 call esi */
  call_ind((uint32_t)(ESI), 0x10261116u);
  /* 10261116 push 0x102660a0 */
  push32((uint32_t)(0x102660a0u));
  /* 1026111b push 0x10266510 */
  push32((uint32_t)(0x10266510u));
  /* 10261120 call esi */
  call_ind((uint32_t)(ESI), 0x10261122u);
  /* 10261122 push 0x10266094 */
  push32((uint32_t)(0x10266094u));
  /* 10261127 push 0x10266518 */
  push32((uint32_t)(0x10266518u));
  /* 1026112c call esi */
  call_ind((uint32_t)(ESI), 0x1026112eu);
  /* 1026112e push 0x10266084 */
  push32((uint32_t)(0x10266084u));
  /* 10261133 push 0x10266520 */
  push32((uint32_t)(0x10266520u));
  /* 10261138 call esi */
  call_ind((uint32_t)(ESI), 0x1026113au);
  /* 1026113a push 0x10266078 */
  push32((uint32_t)(0x10266078u));
  /* 1026113f push 0x10266528 */
  push32((uint32_t)(0x10266528u));
  /* 10261144 call esi */
  call_ind((uint32_t)(ESI), 0x10261146u);
  /* 10261146 push 0x1026606c */
  push32((uint32_t)(0x1026606cu));
  /* 1026114b push 0x10266530 */
  push32((uint32_t)(0x10266530u));
  /* 10261150 call esi */
  call_ind((uint32_t)(ESI), 0x10261152u);
  /* 10261152 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10261155 mov ebp, 0x10266540 */
  EBP = (0x10266540u);
  /* 1026115a push 0x10266060 */
  push32((uint32_t)(0x10266060u));
  /* 1026115f push ebp */
  push32((uint32_t)(EBP));
  /* 10261160 call esi */
  call_ind((uint32_t)(ESI), 0x10261162u);
  /* 10261162 mov ebx, 0x10266550 */
  EBX = (0x10266550u);
  /* 10261167 push 0x10266050 */
  push32((uint32_t)(0x10266050u));
  /* 1026116c push ebx */
  push32((uint32_t)(EBX));
  /* 1026116d call esi */
  call_ind((uint32_t)(ESI), 0x1026116fu);
  /* 1026116f push 0x10266040 */
  push32((uint32_t)(0x10266040u));
  /* 10261174 push 0x102665c8 */
  push32((uint32_t)(0x102665c8u));
  /* 10261179 call esi */
  call_ind((uint32_t)(ESI), 0x1026117bu);
  /* 1026117b push 0x10266030 */
  push32((uint32_t)(0x10266030u));
  /* 10261180 push 0x102665d8 */
  push32((uint32_t)(0x102665d8u));
  /* 10261185 call esi */
  call_ind((uint32_t)(ESI), 0x10261187u);
  /* 10261187 mov esi, dword ptr [0x10265120] */
  ESI = (r32((uint32_t)(0x10265120)));
  /* 1026118d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1026118f push edi */
  push32((uint32_t)(EDI));
  /* 10261190 push 0x10266538 */
  push32((uint32_t)(0x10266538u));
  /* 10261195 push edi */
  push32((uint32_t)(EDI));
  /* 10261196 call esi */
  call_ind((uint32_t)(ESI), 0x10261198u);
  /* 10261198 push edi */
  push32((uint32_t)(EDI));
  /* 10261199 push 0x10266548 */
  push32((uint32_t)(0x10266548u));
  /* 1026119e push edi */
  push32((uint32_t)(EDI));
  /* 1026119f call esi */
  call_ind((uint32_t)(ESI), 0x102611a1u);
  /* 102611a1 push edi */
  push32((uint32_t)(EDI));
  /* 102611a2 push 0x10266558 */
  push32((uint32_t)(0x10266558u));
  /* 102611a7 push edi */
  push32((uint32_t)(EDI));
  /* 102611a8 call esi */
  call_ind((uint32_t)(ESI), 0x102611aau);
  /* 102611aa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102611ad push edi */
  push32((uint32_t)(EDI));
  /* 102611ae push 0x10266560 */
  push32((uint32_t)(0x10266560u));
  /* 102611b3 push edi */
  push32((uint32_t)(EDI));
  /* 102611b4 call esi */
  call_ind((uint32_t)(ESI), 0x102611b6u);
  /* 102611b6 push edi */
  push32((uint32_t)(EDI));
  /* 102611b7 push 0x10266568 */
  push32((uint32_t)(0x10266568u));
  /* 102611bc push edi */
  push32((uint32_t)(EDI));
  /* 102611bd call esi */
  call_ind((uint32_t)(ESI), 0x102611bfu);
  /* 102611bf push edi */
  push32((uint32_t)(EDI));
  /* 102611c0 push 0x10266570 */
  push32((uint32_t)(0x10266570u));
  /* 102611c5 push edi */
  push32((uint32_t)(EDI));
  /* 102611c6 call esi */
  call_ind((uint32_t)(ESI), 0x102611c8u);
  /* 102611c8 push edi */
  push32((uint32_t)(EDI));
  /* 102611c9 push 0x10266578 */
  push32((uint32_t)(0x10266578u));
  /* 102611ce push edi */
  push32((uint32_t)(EDI));
  /* 102611cf call esi */
  call_ind((uint32_t)(ESI), 0x102611d1u);
  /* 102611d1 push edi */
  push32((uint32_t)(EDI));
  /* 102611d2 push 0x10266580 */
  push32((uint32_t)(0x10266580u));
  /* 102611d7 push edi */
  push32((uint32_t)(EDI));
  /* 102611d8 call esi */
  call_ind((uint32_t)(ESI), 0x102611dau);
  /* 102611da push edi */
  push32((uint32_t)(EDI));
  /* 102611db push 0x10266588 */
  push32((uint32_t)(0x10266588u));
  /* 102611e0 push edi */
  push32((uint32_t)(EDI));
  /* 102611e1 call esi */
  call_ind((uint32_t)(ESI), 0x102611e3u);
  /* 102611e3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102611e6 push edi */
  push32((uint32_t)(EDI));
  /* 102611e7 push 0x10266500 */
  push32((uint32_t)(0x10266500u));
  /* 102611ec push edi */
  push32((uint32_t)(EDI));
  /* 102611ed call esi */
  call_ind((uint32_t)(ESI), 0x102611efu);
  /* 102611ef push edi */
  push32((uint32_t)(EDI));
  /* 102611f0 push 0x10266508 */
  push32((uint32_t)(0x10266508u));
  /* 102611f5 push edi */
  push32((uint32_t)(EDI));
  /* 102611f6 call esi */
  call_ind((uint32_t)(ESI), 0x102611f8u);
  /* 102611f8 push edi */
  push32((uint32_t)(EDI));
  /* 102611f9 push 0x10266510 */
  push32((uint32_t)(0x10266510u));
  /* 102611fe push edi */
  push32((uint32_t)(EDI));
  /* 102611ff call esi */
  call_ind((uint32_t)(ESI), 0x10261201u);
  /* 10261201 push edi */
  push32((uint32_t)(EDI));
  /* 10261202 push 0x10266518 */
  push32((uint32_t)(0x10266518u));
  /* 10261207 push edi */
  push32((uint32_t)(EDI));
  /* 10261208 call esi */
  call_ind((uint32_t)(ESI), 0x1026120au);
  /* 1026120a push edi */
  push32((uint32_t)(EDI));
  /* 1026120b push 0x10266520 */
  push32((uint32_t)(0x10266520u));
  /* 10261210 push edi */
  push32((uint32_t)(EDI));
  /* 10261211 call esi */
  call_ind((uint32_t)(ESI), 0x10261213u);
  /* 10261213 push edi */
  push32((uint32_t)(EDI));
  /* 10261214 push 0x10266528 */
  push32((uint32_t)(0x10266528u));
  /* 10261219 push edi */
  push32((uint32_t)(EDI));
  /* 1026121a call esi */
  call_ind((uint32_t)(ESI), 0x1026121cu);
  /* 1026121c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026121f push edi */
  push32((uint32_t)(EDI));
  /* 10261220 push 0x10266530 */
  push32((uint32_t)(0x10266530u));
  /* 10261225 push edi */
  push32((uint32_t)(EDI));
  /* 10261226 call esi */
  call_ind((uint32_t)(ESI), 0x10261228u);
  /* 10261228 push edi */
  push32((uint32_t)(EDI));
  /* 10261229 push ebp */
  push32((uint32_t)(EBP));
  /* 1026122a push edi */
  push32((uint32_t)(EDI));
  /* 1026122b call esi */
  call_ind((uint32_t)(ESI), 0x1026122du);
  /* 1026122d push edi */
  push32((uint32_t)(EDI));
  /* 1026122e push ebx */
  push32((uint32_t)(EBX));
  /* 1026122f push edi */
  push32((uint32_t)(EDI));
  /* 10261230 call esi */
  call_ind((uint32_t)(ESI), 0x10261232u);
  /* 10261232 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10261235 pop edi */
  EDI = (pop32());
  /* 10261236 pop esi */
  ESI = (pop32());
  /* 10261237 pop ebp */
  EBP = (pop32());
  /* 10261238 pop ebx */
  EBX = (pop32());
  /* 10261239 ret  */
  ESPCHK(0x10261012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x1026123a (908 bytes, 344 insns) */
void f_1026123a(void) {
  FTRACE(0x1026123au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026123a push ebx */
  push32((uint32_t)(EBX));
  /* 1026123b push ebp */
  push32((uint32_t)(EBP));
  /* 1026123c push esi */
  push32((uint32_t)(ESI));
  /* 1026123d push edi */
  push32((uint32_t)(EDI));
  /* 1026123e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10261240 call dword ptr [0x102650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650b0))), 0x10261246u);
  /* 10261246 mov ebx, dword ptr [0x102650b4] */
  EBX = (r32((uint32_t)(0x102650b4)));
  /* 1026124c xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1026124e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10261250 pop ecx */
  ECX = (pop32());
  /* 10261251 je 0x10261415 */
  if (C.zf) goto L_10261415;
  /* 10261257 push ebp */
  push32((uint32_t)(EBP));
  /* 10261258 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1026125a call dword ptr [0x102650b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650b8))), 0x10261260u);
  /* 10261260 push ebp */
  push32((uint32_t)(EBP));
  /* 10261261 push 0x102665b8 */
  push32((uint32_t)(0x102665b8u));
  /* 10261266 push 4 */
  push32((uint32_t)(0x4u));
  /* 10261268 push 0x102665c8 */
  push32((uint32_t)(0x102665c8u));
  /* 1026126d push 0x102665d0 */
  push32((uint32_t)(0x102665d0u));
  /* 10261272 push 0x102665a8 */
  push32((uint32_t)(0x102665a8u));
  /* 10261277 call dword ptr [0x102650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650bc))), 0x1026127du);
  /* 1026127d mov esi, dword ptr [0x102650c0] */
  ESI = (r32((uint32_t)(0x102650c0)));
  /* 10261283 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 10261288 push 3 */
  push32((uint32_t)(0x3u));
  /* 1026128a push 1 */
  push32((uint32_t)(0x1u));
  /* 1026128c call esi */
  call_ind((uint32_t)(ESI), 0x1026128eu);
  /* 1026128e mov edi, 0x1388 */
  EDI = (0x1388u);
  /* 10261293 push edi */
  push32((uint32_t)(EDI));
  /* 10261294 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261296 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261298 call esi */
  call_ind((uint32_t)(ESI), 0x1026129au);
  /* 1026129a push edi */
  push32((uint32_t)(EDI));
  /* 1026129b push ebp */
  push32((uint32_t)(EBP));
  /* 1026129c push 1 */
  push32((uint32_t)(0x1u));
  /* 1026129e call esi */
  call_ind((uint32_t)(ESI), 0x102612a0u);
  /* 102612a0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102612a3 push edi */
  push32((uint32_t)(EDI));
  /* 102612a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102612a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102612a8 call esi */
  call_ind((uint32_t)(ESI), 0x102612aau);
  /* 102612aa push edi */
  push32((uint32_t)(EDI));
  /* 102612ab push 5 */
  push32((uint32_t)(0x5u));
  /* 102612ad push 1 */
  push32((uint32_t)(0x1u));
  /* 102612af call esi */
  call_ind((uint32_t)(ESI), 0x102612b1u);
  /* 102612b1 push edi */
  push32((uint32_t)(EDI));
  /* 102612b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 102612b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102612b6 call esi */
  call_ind((uint32_t)(ESI), 0x102612b8u);
  /* 102612b8 push 0x102661cc */
  push32((uint32_t)(0x102661ccu));
  /* 102612bd call dword ptr [0x102650c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650c4))), 0x102612c3u);
  /* 102612c3 push ebp */
  push32((uint32_t)(EBP));
  /* 102612c4 call ebx */
  call_ind((uint32_t)(EBX), 0x102612c6u);
  /* 102612c6 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102612c9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102612cc push ebp */
  push32((uint32_t)(EBP));
  /* 102612cd jge 0x10261317 */
  if ((C.sf==C.of)) goto L_10261317;
  /* 102612cf call ebx */
  call_ind((uint32_t)(EBX), 0x102612d1u);
  /* 102612d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102612d2 push eax */
  push32((uint32_t)(EAX));
  /* 102612d3 push ebp */
  push32((uint32_t)(EBP));
  /* 102612d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102612d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102612d8 push 0x102661c4 */
  push32((uint32_t)(0x102661c4u));
  /* 102612dd push 1 */
  push32((uint32_t)(0x1u));
  /* 102612df call dword ptr [0x102650c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650c8))), 0x102612e5u);
  /* 102612e5 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 102612ea push 3 */
  push32((uint32_t)(0x3u));
  /* 102612ec push ebp */
  push32((uint32_t)(EBP));
  /* 102612ed call esi */
  call_ind((uint32_t)(ESI), 0x102612efu);
  /* 102612ef push edi */
  push32((uint32_t)(EDI));
  /* 102612f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102612f2 push ebp */
  push32((uint32_t)(EBP));
  /* 102612f3 call esi */
  call_ind((uint32_t)(ESI), 0x102612f5u);
  /* 102612f5 push edi */
  push32((uint32_t)(EDI));
  /* 102612f6 push ebp */
  push32((uint32_t)(EBP));
  /* 102612f7 push ebp */
  push32((uint32_t)(EBP));
  /* 102612f8 call esi */
  call_ind((uint32_t)(ESI), 0x102612fau);
  /* 102612fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102612fd push edi */
  push32((uint32_t)(EDI));
  /* 102612fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10261300 push ebp */
  push32((uint32_t)(EBP));
  /* 10261301 call esi */
  call_ind((uint32_t)(ESI), 0x10261303u);
  /* 10261303 push edi */
  push32((uint32_t)(EDI));
  /* 10261304 push 5 */
  push32((uint32_t)(0x5u));
  /* 10261306 push ebp */
  push32((uint32_t)(EBP));
  /* 10261307 call esi */
  call_ind((uint32_t)(ESI), 0x10261309u);
  /* 10261309 push edi */
  push32((uint32_t)(EDI));
  /* 1026130a push 4 */
  push32((uint32_t)(0x4u));
  /* 1026130c push ebp */
  push32((uint32_t)(EBP));
  /* 1026130d call esi */
  call_ind((uint32_t)(ESI), 0x1026130fu);
  /* 1026130f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10261312 jmp 0x102613a5 */
  goto L_102613a5;
L_10261317:;
  /* 10261317 call ebx */
  call_ind((uint32_t)(EBX), 0x10261319u);
  /* 10261319 push eax */
  push32((uint32_t)(EAX));
  /* 1026131a push ebp */
  push32((uint32_t)(EBP));
  /* 1026131b push 1 */
  push32((uint32_t)(0x1u));
  /* 1026131d push 2 */
  push32((uint32_t)(0x2u));
  /* 1026131f push 0x102661c4 */
  push32((uint32_t)(0x102661c4u));
  /* 10261324 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261326 call dword ptr [0x102650c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650c8))), 0x1026132cu);
  /* 1026132c push ebp */
  push32((uint32_t)(EBP));
  /* 1026132d call ebx */
  call_ind((uint32_t)(EBX), 0x1026132fu);
  /* 1026132f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10261331 pop ecx */
  ECX = (pop32());
  /* 10261332 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261334 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1026133a push ecx */
  push32((uint32_t)(ECX));
  /* 1026133b push 3 */
  push32((uint32_t)(0x3u));
  /* 1026133d push ebp */
  push32((uint32_t)(EBP));
  /* 1026133e call esi */
  call_ind((uint32_t)(ESI), 0x10261340u);
  /* 10261340 push ebp */
  push32((uint32_t)(EBP));
  /* 10261341 call ebx */
  call_ind((uint32_t)(EBX), 0x10261343u);
  /* 10261343 push 0xa */
  push32((uint32_t)(0xau));
  /* 10261345 pop edi */
  EDI = (pop32());
  /* 10261346 mov ecx, edi */
  ECX = (EDI);
  /* 10261348 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026134a imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10261350 push ecx */
  push32((uint32_t)(ECX));
  /* 10261351 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261353 push ebp */
  push32((uint32_t)(EBP));
  /* 10261354 call esi */
  call_ind((uint32_t)(ESI), 0x10261356u);
  /* 10261356 push ebp */
  push32((uint32_t)(EBP));
  /* 10261357 call ebx */
  call_ind((uint32_t)(EBX), 0x10261359u);
  /* 10261359 mov ecx, edi */
  ECX = (EDI);
  /* 1026135b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026135e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261360 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10261366 push ecx */
  push32((uint32_t)(ECX));
  /* 10261367 push ebp */
  push32((uint32_t)(EBP));
  /* 10261368 push ebp */
  push32((uint32_t)(EBP));
  /* 10261369 call esi */
  call_ind((uint32_t)(ESI), 0x1026136bu);
  /* 1026136b push ebp */
  push32((uint32_t)(EBP));
  /* 1026136c call ebx */
  call_ind((uint32_t)(EBX), 0x1026136eu);
  /* 1026136e mov ecx, edi */
  ECX = (EDI);
  /* 10261370 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261372 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10261378 push ecx */
  push32((uint32_t)(ECX));
  /* 10261379 push 2 */
  push32((uint32_t)(0x2u));
  /* 1026137b push ebp */
  push32((uint32_t)(EBP));
  /* 1026137c call esi */
  call_ind((uint32_t)(ESI), 0x1026137eu);
  /* 1026137e push ebp */
  push32((uint32_t)(EBP));
  /* 1026137f call ebx */
  call_ind((uint32_t)(EBX), 0x10261381u);
  /* 10261381 mov ecx, edi */
  ECX = (EDI);
  /* 10261383 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261385 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1026138b push ecx */
  push32((uint32_t)(ECX));
  /* 1026138c push 5 */
  push32((uint32_t)(0x5u));
  /* 1026138e push ebp */
  push32((uint32_t)(EBP));
  /* 1026138f call esi */
  call_ind((uint32_t)(ESI), 0x10261391u);
  /* 10261391 push ebp */
  push32((uint32_t)(EBP));
  /* 10261392 call ebx */
  call_ind((uint32_t)(EBX), 0x10261394u);
  /* 10261394 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261396 imul edi, edi, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDI)*(int64_t)(int32_t)(0x1f4u); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1026139c push edi */
  push32((uint32_t)(EDI));
  /* 1026139d push 4 */
  push32((uint32_t)(0x4u));
  /* 1026139f push ebp */
  push32((uint32_t)(EBP));
  /* 102613a0 call esi */
  call_ind((uint32_t)(ESI), 0x102613a2u);
  /* 102613a2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102613a5:;
  /* 102613a5 push ebp */
  push32((uint32_t)(EBP));
  /* 102613a6 call ebx */
  call_ind((uint32_t)(EBX), 0x102613a8u);
  /* 102613a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102613aa pop ecx */
  ECX = (pop32());
  /* 102613ab jne 0x102613de */
  if (!C.zf) goto L_102613de;
  /* 102613ad push ebp */
  push32((uint32_t)(EBP));
  /* 102613ae push 0x102665a0 */
  push32((uint32_t)(0x102665a0u));
  /* 102613b3 call dword ptr [0x102650cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650cc))), 0x102613b9u);
  /* 102613b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102613bb call dword ptr [0x102650d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650d0))), 0x102613c1u);
  /* 102613c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102613c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102613c5 push 0x102665c0 */
  push32((uint32_t)(0x102665c0u));
  /* 102613ca call dword ptr [0x102650d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650d4))), 0x102613d0u);
  /* 102613d0 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102613d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102613d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102613d9 call esi */
  call_ind((uint32_t)(ESI), 0x102613dbu);
  /* 102613db add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102613de:;
  /* 102613de push 0x10266598 */
  push32((uint32_t)(0x10266598u));
  /* 102613e3 call dword ptr [0x102650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650d8))), 0x102613e9u);
  /* 102613e9 mov esi, dword ptr [0x102650dc] */
  ESI = (r32((uint32_t)(0x102650dc)));
  /* 102613ef push 0x43 */
  push32((uint32_t)(0x43u));
  /* 102613f1 call esi */
  call_ind((uint32_t)(ESI), 0x102613f3u);
  /* 102613f3 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102613f5 call esi */
  call_ind((uint32_t)(ESI), 0x102613f7u);
  /* 102613f7 mov esi, dword ptr [0x102650e0] */
  ESI = (r32((uint32_t)(0x102650e0)));
  /* 102613fd mov edi, 0x10266188 */
  EDI = (0x10266188u);
  /* 10261402 push 0x102661bc */
  push32((uint32_t)(0x102661bcu));
  /* 10261407 push edi */
  push32((uint32_t)(EDI));
  /* 10261408 call esi */
  call_ind((uint32_t)(ESI), 0x1026140au);
  /* 1026140a push 0x102661b4 */
  push32((uint32_t)(0x102661b4u));
  /* 1026140f push edi */
  push32((uint32_t)(EDI));
  /* 10261410 call esi */
  call_ind((uint32_t)(ESI), 0x10261412u);
  /* 10261412 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10261415:;
  /* 10261415 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261417 call dword ptr [0x102650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650b0))), 0x1026141du);
  /* 1026141d mov edi, dword ptr [0x102650e4] */
  EDI = (r32((uint32_t)(0x102650e4)));
  /* 10261423 pop ecx */
  ECX = (pop32());
  /* 10261424 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10261426 je 0x102614b5 */
  if (C.zf) goto L_102614b5;
  /* 1026142c push ebp */
  push32((uint32_t)(EBP));
  /* 1026142d push 0x102665b8 */
  push32((uint32_t)(0x102665b8u));
  /* 10261432 call dword ptr [0x102650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650e8))), 0x10261438u);
  /* 10261438 pop ecx */
  ECX = (pop32());
  /* 10261439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026143b pop ecx */
  ECX = (pop32());
  /* 1026143c jle 0x102614b5 */
  if ((C.zf||C.sf!=C.of)) goto L_102614b5;
  /* 1026143e mov esi, dword ptr [0x102650b8] */
  ESI = (r32((uint32_t)(0x102650b8)));
  /* 10261444 push ebp */
  push32((uint32_t)(EBP));
  /* 10261445 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261447 call esi */
  call_ind((uint32_t)(ESI), 0x10261449u);
  /* 10261449 push ebp */
  push32((uint32_t)(EBP));
  /* 1026144a call ebx */
  call_ind((uint32_t)(EBX), 0x1026144cu);
  /* 1026144c push 6 */
  push32((uint32_t)(0x6u));
  /* 1026144e pop ecx */
  ECX = (pop32());
  /* 1026144f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261451 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10261457 push ecx */
  push32((uint32_t)(ECX));
  /* 10261458 push 0x102661ac */
  push32((uint32_t)(0x102661acu));
  /* 1026145d call dword ptr [0x102650ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650ec))), 0x10261463u);
  /* 10261463 push ebp */
  push32((uint32_t)(EBP));
  /* 10261464 call ebx */
  call_ind((uint32_t)(EBX), 0x10261466u);
  /* 10261466 push 6 */
  push32((uint32_t)(0x6u));
  /* 10261468 pop ecx */
  ECX = (pop32());
  /* 10261469 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026146b imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10261471 push ecx */
  push32((uint32_t)(ECX));
  /* 10261472 push 1 */
  push32((uint32_t)(0x1u));
  /* 10261474 push ebp */
  push32((uint32_t)(EBP));
  /* 10261475 call dword ptr [0x102650f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650f0))), 0x1026147bu);
  /* 1026147b push 4 */
  push32((uint32_t)(0x4u));
  /* 1026147d call edi */
  call_ind((uint32_t)(EDI), 0x1026147fu);
  /* 1026147f push ebp */
  push32((uint32_t)(EBP));
  /* 10261480 push 0x102665a8 */
  push32((uint32_t)(0x102665a8u));
  /* 10261485 call dword ptr [0x102650cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650cc))), 0x1026148bu);
  /* 1026148b push 4 */
  push32((uint32_t)(0x4u));
  /* 1026148d call dword ptr [0x102650d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650d0))), 0x10261493u);
  /* 10261493 push ebp */
  push32((uint32_t)(EBP));
  /* 10261494 push 0x102665b8 */
  push32((uint32_t)(0x102665b8u));
  /* 10261499 push 4 */
  push32((uint32_t)(0x4u));
  /* 1026149b push 0x102665d8 */
  push32((uint32_t)(0x102665d8u));
  /* 102614a0 push 0x102665d0 */
  push32((uint32_t)(0x102665d0u));
  /* 102614a5 push 0x102665b0 */
  push32((uint32_t)(0x102665b0u));
  /* 102614aa call dword ptr [0x102650bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650bc))), 0x102614b0u);
  /* 102614b0 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102614b3 jmp 0x102614bb */
  goto L_102614bb;
L_102614b5:;
  /* 102614b5 mov esi, dword ptr [0x102650b8] */
  ESI = (r32((uint32_t)(0x102650b8)));
L_102614bb:;
  /* 102614bb push 2 */
  push32((uint32_t)(0x2u));
  /* 102614bd call dword ptr [0x102650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650b0))), 0x102614c3u);
  /* 102614c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102614c5 pop ecx */
  ECX = (pop32());
  /* 102614c6 je 0x102614ee */
  if (C.zf) goto L_102614ee;
  /* 102614c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102614ca call dword ptr [0x102650f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650f4))), 0x102614d0u);
  /* 102614d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102614d2 pop ecx */
  ECX = (pop32());
  /* 102614d3 je 0x102614ee */
  if (C.zf) goto L_102614ee;
  /* 102614d5 push ebp */
  push32((uint32_t)(EBP));
  /* 102614d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102614d8 call esi */
  call_ind((uint32_t)(ESI), 0x102614dau);
  /* 102614da push 0x102661a4 */
  push32((uint32_t)(0x102661a4u));
  /* 102614df call dword ptr [0x102650c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650c4))), 0x102614e5u);
  /* 102614e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102614e8 call dword ptr [0x102650f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650f8))), 0x102614eeu);
L_102614ee:;
  /* 102614ee push 3 */
  push32((uint32_t)(0x3u));
  /* 102614f0 call dword ptr [0x102650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650b0))), 0x102614f6u);
  /* 102614f6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102614f8 pop ecx */
  ECX = (pop32());
  /* 102614f9 je 0x10261520 */
  if (C.zf) goto L_10261520;
  /* 102614fb push ebp */
  push32((uint32_t)(EBP));
  /* 102614fc call dword ptr [0x102650f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650f4))), 0x10261502u);
  /* 10261502 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10261504 pop ecx */
  ECX = (pop32());
  /* 10261505 je 0x10261520 */
  if (C.zf) goto L_10261520;
  /* 10261507 push ebp */
  push32((uint32_t)(EBP));
  /* 10261508 push 3 */
  push32((uint32_t)(0x3u));
  /* 1026150a call esi */
  call_ind((uint32_t)(ESI), 0x1026150cu);
  /* 1026150c push 0x1026619c */
  push32((uint32_t)(0x1026619cu));
  /* 10261511 call dword ptr [0x102650c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650c4))), 0x10261517u);
  /* 10261517 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026151a call dword ptr [0x102650fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650fc))), 0x10261520u);
L_10261520:;
  /* 10261520 push 4 */
  push32((uint32_t)(0x4u));
  /* 10261522 call dword ptr [0x102650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650b0))), 0x10261528u);
  /* 10261528 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1026152a pop ecx */
  ECX = (pop32());
  /* 1026152b je 0x102615c1 */
  if (C.zf) goto L_102615c1;
  /* 10261531 push 5 */
  push32((uint32_t)(0x5u));
  /* 10261533 push 0x102665c0 */
  push32((uint32_t)(0x102665c0u));
  /* 10261538 call dword ptr [0x102650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650e8))), 0x1026153eu);
  /* 1026153e pop ecx */
  ECX = (pop32());
  /* 1026153f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261541 pop ecx */
  ECX = (pop32());
  /* 10261542 jne 0x102615c1 */
  if (!C.zf) goto L_102615c1;
  /* 10261544 push ebp */
  push32((uint32_t)(EBP));
  /* 10261545 push 0x102665c0 */
  push32((uint32_t)(0x102665c0u));
  /* 1026154a call dword ptr [0x102650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650e8))), 0x10261550u);
  /* 10261550 pop ecx */
  ECX = (pop32());
  /* 10261551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261553 pop ecx */
  ECX = (pop32());
  /* 10261554 jle 0x102615c1 */
  if ((C.zf||C.sf!=C.of)) goto L_102615c1;
  /* 10261556 push ebp */
  push32((uint32_t)(EBP));
  /* 10261557 push 4 */
  push32((uint32_t)(0x4u));
  /* 10261559 call esi */
  call_ind((uint32_t)(ESI), 0x1026155bu);
  /* 1026155b push 5 */
  push32((uint32_t)(0x5u));
  /* 1026155d call edi */
  call_ind((uint32_t)(EDI), 0x1026155fu);
  /* 1026155f mov esi, dword ptr [0x10265100] */
  ESI = (r32((uint32_t)(0x10265100)));
  /* 10261565 push ebp */
  push32((uint32_t)(EBP));
  /* 10261566 push 0x10266590 */
  push32((uint32_t)(0x10266590u));
  /* 1026156b push 5 */
  push32((uint32_t)(0x5u));
  /* 1026156d call esi */
  call_ind((uint32_t)(ESI), 0x1026156fu);
  /* 1026156f mov edi, dword ptr [0x10265104] */
  EDI = (r32((uint32_t)(0x10265104)));
  /* 10261575 push ebp */
  push32((uint32_t)(EBP));
  /* 10261576 push 5 */
  push32((uint32_t)(0x5u));
  /* 10261578 call edi */
  call_ind((uint32_t)(EDI), 0x1026157au);
  /* 1026157a push ebp */
  push32((uint32_t)(EBP));
  /* 1026157b push 0x10266598 */
  push32((uint32_t)(0x10266598u));
  /* 10261580 push 5 */
  push32((uint32_t)(0x5u));
  /* 10261582 call esi */
  call_ind((uint32_t)(ESI), 0x10261584u);
  /* 10261584 push ebp */
  push32((uint32_t)(EBP));
  /* 10261585 push 5 */
  push32((uint32_t)(0x5u));
  /* 10261587 call edi */
  call_ind((uint32_t)(EDI), 0x10261589u);
  /* 10261589 mov esi, dword ptr [0x102650c4] */
  ESI = (r32((uint32_t)(0x102650c4)));
  /* 1026158f push 0x10266194 */
  push32((uint32_t)(0x10266194u));
  /* 10261594 call esi */
  call_ind((uint32_t)(ESI), 0x10261596u);
  /* 10261596 push ebp */
  push32((uint32_t)(EBP));
  /* 10261597 call ebx */
  call_ind((uint32_t)(EBX), 0x10261599u);
  /* 10261599 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026159e jne 0x102615a8 */
  if (!C.zf) goto L_102615a8;
  /* 102615a0 push 0x1026618c */
  push32((uint32_t)(0x1026618cu));
  /* 102615a5 call esi */
  call_ind((uint32_t)(ESI), 0x102615a7u);
  /* 102615a7 pop ecx */
  ECX = (pop32());
L_102615a8:;
  /* 102615a8 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 102615aa call dword ptr [0x102650dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650dc))), 0x102615b0u);
  /* 102615b0 mov esi, dword ptr [0x10265108] */
  ESI = (r32((uint32_t)(0x10265108)));
  /* 102615b6 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 102615b8 call esi */
  call_ind((uint32_t)(ESI), 0x102615bau);
  /* 102615ba push 0x44 */
  push32((uint32_t)(0x44u));
  /* 102615bc call esi */
  call_ind((uint32_t)(ESI), 0x102615beu);
  /* 102615be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102615c1:;
  /* 102615c1 pop edi */
  EDI = (pop32());
  /* 102615c2 pop esi */
  ESI = (pop32());
  /* 102615c3 pop ebp */
  EBP = (pop32());
  /* 102615c4 pop ebx */
  EBX = (pop32());
  /* 102615c5 ret  */
  ESPCHK(0x1026123au, _esp0);
  ESP += 4; return;
}

/* FUN_100015c6 @ 0x102615c6 (217 bytes, 57 insns) */
void f_102615c6(void) {
  FTRACE(0x102615c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102615c6 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102615ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102615cd jne 0x1026165b */
  if (!C.zf) goto L_1026165b;
  /* 102615d3 call dword ptr [0x10265068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265068))), 0x102615d9u);
  /* 102615d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102615db mov dword ptr [0x102665fc], eax */
  w32((uint32_t)(0x102665fc), (EAX));
  /* 102615e0 call 0x10261ffa */
  push32(0x102615e5u); f_10261ffa();
  /* 102615e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102615e7 pop ecx */
  ECX = (pop32());
  /* 102615e8 je 0x10261626 */
  if (C.zf) goto L_10261626;
  /* 102615ea mov eax, dword ptr [0x102665fc] */
  EAX = (r32((uint32_t)(0x102665fc)));
  /* 102615ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102615f1 mov cl, byte ptr [0x102665fd] */
  CL = (r8((uint32_t)(0x102665fd)));
  /* 102615f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102615fc shr dword ptr [0x102665fc], 0x10 */
  w32((uint32_t)(0x102665fc), (sh_shr((uint32_t)(r32((uint32_t)(0x102665fc))), (0x10u)&0x1f, 32)));
  /* 10261603 mov dword ptr [0x10266604], eax */
  w32((uint32_t)(0x10266604), (EAX));
  /* 10261608 mov dword ptr [0x10266608], ecx */
  w32((uint32_t)(0x10266608), (ECX));
  /* 1026160e shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10261611 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261613 mov dword ptr [0x10266600], eax */
  w32((uint32_t)(0x10266600), (EAX));
  /* 10261618 call 0x1026188d */
  push32(0x1026161du); f_1026188d();
  /* 1026161d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026161f jne 0x1026162a */
  if (!C.zf) goto L_1026162a;
  /* 10261621 call 0x10262036 */
  push32(0x10261626u); f_10262036();
L_10261626:;
  /* 10261626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10261628 jmp 0x1026169c */
  goto L_1026169c;
L_1026162a:;
  /* 1026162a call dword ptr [0x10265064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265064))), 0x10261630u);
  /* 10261630 mov dword ptr [0x10266b58], eax */
  w32((uint32_t)(0x10266b58), (EAX));
  /* 10261635 call 0x10261ec8 */
  push32(0x1026163au); f_10261ec8();
  /* 1026163a mov dword ptr [0x102665e8], eax */
  w32((uint32_t)(0x102665e8), (EAX));
  /* 1026163f call 0x102619b2 */
  push32(0x10261644u); f_102619b2();
  /* 10261644 call 0x10261c7b */
  push32(0x10261649u); f_10261c7b();
  /* 10261649 call 0x10261bc2 */
  push32(0x1026164eu); f_10261bc2();
  /* 1026164e call 0x1026176f */
  push32(0x10261653u); f_1026176f();
  /* 10261653 inc dword ptr [0x102665e4] */
  { uint32_t _r=(r32((uint32_t)(0x102665e4)))+1; w32((uint32_t)(0x102665e4), (_r)); fl_inc(_r,32); }
  /* 10261659 jmp 0x10261699 */
  goto L_10261699;
L_1026165b:;
  /* 1026165b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1026165d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026165f jne 0x1026168d */
  if (!C.zf) goto L_1026168d;
  /* 10261661 cmp dword ptr [0x102665e4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102665e4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261667 jle 0x10261626 */
  if ((C.zf||C.sf!=C.of)) goto L_10261626;
  /* 10261669 dec dword ptr [0x102665e4] */
  { uint32_t _r=(r32((uint32_t)(0x102665e4)))-1; w32((uint32_t)(0x102665e4), (_r)); fl_dec(_r,32); }
  /* 1026166f cmp dword ptr [0x10266634], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10266634))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261675 jne 0x1026167c */
  if (!C.zf) goto L_1026167c;
  /* 10261677 call 0x102617ad */
  push32(0x1026167cu); f_102617ad();
L_1026167c:;
  /* 1026167c call 0x10261b6e */
  push32(0x10261681u); f_10261b6e();
  /* 10261681 call 0x102618e1 */
  push32(0x10261686u); f_102618e1();
  /* 10261686 call 0x10262036 */
  push32(0x1026168bu); f_10262036();
  /* 1026168b jmp 0x10261699 */
  goto L_10261699;
L_1026168d:;
  /* 1026168d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261690 jne 0x10261699 */
  if (!C.zf) goto L_10261699;
  /* 10261692 push ecx */
  push32((uint32_t)(ECX));
  /* 10261693 call 0x10261912 */
  push32(0x10261698u); f_10261912();
  /* 10261698 pop ecx */
  ECX = (pop32());
L_10261699:;
  /* 10261699 push 1 */
  push32((uint32_t)(0x1u));
  /* 1026169b pop eax */
  EAX = (pop32());
L_1026169c:;
  /* 1026169c ret 0xc */
  ESPCHK(0x102615c6u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x1026169f (157 bytes, 73 insns) */
void f_1026169f(void) {
  FTRACE(0x1026169fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026169f push ebp */
  push32((uint32_t)(EBP));
  /* 102616a0 mov ebp, esp */
  EBP = (ESP);
  /* 102616a2 push ebx */
  push32((uint32_t)(EBX));
  /* 102616a3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102616a6 push esi */
  push32((uint32_t)(ESI));
  /* 102616a7 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102616aa push edi */
  push32((uint32_t)(EDI));
  /* 102616ab mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102616ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102616b0 jne 0x102616bb */
  if (!C.zf) goto L_102616bb;
  /* 102616b2 cmp dword ptr [0x102665e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102665e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102616b9 jmp 0x102616e1 */
  goto L_102616e1;
L_102616bb:;
  /* 102616bb cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102616be je 0x102616c5 */
  if (C.zf) goto L_102616c5;
  /* 102616c0 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102616c3 jne 0x102616e7 */
  if (!C.zf) goto L_102616e7;
L_102616c5:;
  /* 102616c5 mov eax, dword ptr [0x10266b5c] */
  EAX = (r32((uint32_t)(0x10266b5c)));
  /* 102616ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102616cc je 0x102616d7 */
  if (C.zf) goto L_102616d7;
  /* 102616ce push edi */
  push32((uint32_t)(EDI));
  /* 102616cf push esi */
  push32((uint32_t)(ESI));
  /* 102616d0 push ebx */
  push32((uint32_t)(EBX));
  /* 102616d1 call eax */
  call_ind((uint32_t)(EAX), 0x102616d3u);
  /* 102616d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102616d5 je 0x102616e3 */
  if (C.zf) goto L_102616e3;
L_102616d7:;
  /* 102616d7 push edi */
  push32((uint32_t)(EDI));
  /* 102616d8 push esi */
  push32((uint32_t)(ESI));
  /* 102616d9 push ebx */
  push32((uint32_t)(EBX));
  /* 102616da call 0x102615c6 */
  push32(0x102616dfu); f_102615c6();
  /* 102616df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102616e1:;
  /* 102616e1 jne 0x102616e7 */
  if (!C.zf) goto L_102616e7;
L_102616e3:;
  /* 102616e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102616e5 jmp 0x10261735 */
  goto L_10261735;
L_102616e7:;
  /* 102616e7 push edi */
  push32((uint32_t)(EDI));
  /* 102616e8 push esi */
  push32((uint32_t)(ESI));
  /* 102616e9 push ebx */
  push32((uint32_t)(EBX));
  /* 102616ea call 0x10261000 */
  push32(0x102616efu); f_10261000();
  /* 102616ef cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102616f2 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102616f5 jne 0x10261703 */
  if (!C.zf) goto L_10261703;
  /* 102616f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102616f9 jne 0x10261732 */
  if (!C.zf) goto L_10261732;
  /* 102616fb push edi */
  push32((uint32_t)(EDI));
  /* 102616fc push eax */
  push32((uint32_t)(EAX));
  /* 102616fd push ebx */
  push32((uint32_t)(EBX));
  /* 102616fe call 0x102615c6 */
  push32(0x10261703u); f_102615c6();
L_10261703:;
  /* 10261703 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261705 je 0x1026170c */
  if (C.zf) goto L_1026170c;
  /* 10261707 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026170a jne 0x10261732 */
  if (!C.zf) goto L_10261732;
L_1026170c:;
  /* 1026170c push edi */
  push32((uint32_t)(EDI));
  /* 1026170d push esi */
  push32((uint32_t)(ESI));
  /* 1026170e push ebx */
  push32((uint32_t)(EBX));
  /* 1026170f call 0x102615c6 */
  push32(0x10261714u); f_102615c6();
  /* 10261714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261716 jne 0x1026171b */
  if (!C.zf) goto L_1026171b;
  /* 10261718 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_1026171b:;
  /* 1026171b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026171f je 0x10261732 */
  if (C.zf) goto L_10261732;
  /* 10261721 mov eax, dword ptr [0x10266b5c] */
  EAX = (r32((uint32_t)(0x10266b5c)));
  /* 10261726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261728 je 0x10261732 */
  if (C.zf) goto L_10261732;
  /* 1026172a push edi */
  push32((uint32_t)(EDI));
  /* 1026172b push esi */
  push32((uint32_t)(ESI));
  /* 1026172c push ebx */
  push32((uint32_t)(EBX));
  /* 1026172d call eax */
  call_ind((uint32_t)(EAX), 0x1026172fu);
  /* 1026172f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10261732:;
  /* 10261732 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10261735:;
  /* 10261735 pop edi */
  EDI = (pop32());
  /* 10261736 pop esi */
  ESI = (pop32());
  /* 10261737 pop ebx */
  EBX = (pop32());
  /* 10261738 pop ebp */
  EBP = (pop32());
  /* 10261739 ret 0xc */
  ESPCHK(0x1026169fu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x1026173c (48 bytes, 15 insns) */
void f_1026173c(void) {
  FTRACE(0x1026173cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026173c mov eax, dword ptr [0x102665f0] */
  EAX = (r32((uint32_t)(0x102665f0)));
  /* 10261741 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261744 je 0x10261753 */
  if (C.zf) goto L_10261753;
  /* 10261746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261748 jne 0x10261758 */
  if (!C.zf) goto L_10261758;
  /* 1026174a cmp dword ptr [0x102665f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102665f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261751 jne 0x10261758 */
  if (!C.zf) goto L_10261758;
L_10261753:;
  /* 10261753 call 0x102620ab */
  push32(0x10261758u); f_102620ab();
L_10261758:;
  /* 10261758 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1026175c call 0x102620e4 */
  push32(0x10261761u); f_102620e4();
  /* 10261761 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10261766 call dword ptr [0x102661d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102661d4))), 0x1026176cu);
  /* 1026176c pop ecx */
  ECX = (pop32());
  /* 1026176d pop ecx */
  ECX = (pop32());
  /* 1026176e ret  */
  ESPCHK(0x1026173cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000176f @ 0x1026176f (45 bytes, 12 insns) */
void f_1026176f(void) {
  FTRACE(0x1026176fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026176f mov eax, dword ptr [0x10266b54] */
  EAX = (r32((uint32_t)(0x10266b54)));
  /* 10261774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261776 je 0x1026177a */
  if (C.zf) goto L_1026177a;
  /* 10261778 call eax */
  call_ind((uint32_t)(EAX), 0x1026177au);
L_1026177a:;
  /* 1026177a push 0x10266010 */
  push32((uint32_t)(0x10266010u));
  /* 1026177f push 0x10266008 */
  push32((uint32_t)(0x10266008u));
  /* 10261784 call 0x10261873 */
  push32(0x10261789u); f_10261873();
  /* 10261789 push 0x10266004 */
  push32((uint32_t)(0x10266004u));
  /* 1026178e push 0x10266000 */
  push32((uint32_t)(0x10266000u));
  /* 10261793 call 0x10261873 */
  push32(0x10261798u); f_10261873();
  /* 10261798 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026179b ret  */
  ESPCHK(0x1026176fu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1026179c (17 bytes, 6 insns) */
void f_1026179c(void) {
  FTRACE(0x1026179cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026179c push 0 */
  push32((uint32_t)(0x0u));
  /* 1026179e push 1 */
  push32((uint32_t)(0x1u));
  /* 102617a0 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102617a4 call 0x102617bc */
  push32(0x102617a9u); f_102617bc();
  /* 102617a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102617ac ret  */
  ESPCHK(0x1026179cu, _esp0);
  ESP += 4; return;
}

/* FUN_100017ad @ 0x102617ad (15 bytes, 6 insns) */
void f_102617ad(void) {
  FTRACE(0x102617adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102617ad push 1 */
  push32((uint32_t)(0x1u));
  /* 102617af push 0 */
  push32((uint32_t)(0x0u));
  /* 102617b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102617b3 call 0x102617bc */
  push32(0x102617b8u); f_102617bc();
  /* 102617b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102617bb ret  */
  ESPCHK(0x102617adu, _esp0);
  ESP += 4; return;
}

/* FUN_100017bc @ 0x102617bc (163 bytes, 53 insns) */
void f_102617bc(void) {
  FTRACE(0x102617bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102617bc push edi */
  push32((uint32_t)(EDI));
  /* 102617bd call 0x10261861 */
  push32(0x102617c2u); f_10261861();
  /* 102617c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102617c4 pop edi */
  EDI = (pop32());
  /* 102617c5 cmp dword ptr [0x10266638], edi */
  { uint32_t _a=(r32((uint32_t)(0x10266638))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102617cb jne 0x102617de */
  if (!C.zf) goto L_102617de;
  /* 102617cd push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102617d1 call dword ptr [0x10265074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265074))), 0x102617d7u);
  /* 102617d7 push eax */
  push32((uint32_t)(EAX));
  /* 102617d8 call dword ptr [0x10265070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265070))), 0x102617deu);
L_102617de:;
  /* 102617de cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102617e3 push ebx */
  push32((uint32_t)(EBX));
  /* 102617e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102617e8 mov dword ptr [0x10266634], edi */
  w32((uint32_t)(0x10266634), (EDI));
  /* 102617ee mov byte ptr [0x10266630], bl */
  w8((uint32_t)(0x10266630), (BL));
  /* 102617f4 jne 0x10261832 */
  if (!C.zf) goto L_10261832;
  /* 102617f6 mov eax, dword ptr [0x10266b50] */
  EAX = (r32((uint32_t)(0x10266b50)));
  /* 102617fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102617fd je 0x10261821 */
  if (C.zf) goto L_10261821;
  /* 102617ff mov ecx, dword ptr [0x10266b4c] */
  ECX = (r32((uint32_t)(0x10266b4c)));
  /* 10261805 push esi */
  push32((uint32_t)(ESI));
  /* 10261806 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10261809 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026180b jb 0x10261820 */
  if (C.cf) goto L_10261820;
L_1026180d:;
  /* 1026180d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1026180f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261811 je 0x10261815 */
  if (C.zf) goto L_10261815;
  /* 10261813 call eax */
  call_ind((uint32_t)(EAX), 0x10261815u);
L_10261815:;
  /* 10261815 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261818 cmp esi, dword ptr [0x10266b50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10266b50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026181e jae 0x1026180d */
  if (!C.cf) goto L_1026180d;
L_10261820:;
  /* 10261820 pop esi */
  ESI = (pop32());
L_10261821:;
  /* 10261821 push 0x10266018 */
  push32((uint32_t)(0x10266018u));
  /* 10261826 push 0x10266014 */
  push32((uint32_t)(0x10266014u));
  /* 1026182b call 0x10261873 */
  push32(0x10261830u); f_10261873();
  /* 10261830 pop ecx */
  ECX = (pop32());
  /* 10261831 pop ecx */
  ECX = (pop32());
L_10261832:;
  /* 10261832 push 0x10266020 */
  push32((uint32_t)(0x10266020u));
  /* 10261837 push 0x1026601c */
  push32((uint32_t)(0x1026601cu));
  /* 1026183c call 0x10261873 */
  push32(0x10261841u); f_10261873();
  /* 10261841 pop ecx */
  ECX = (pop32());
  /* 10261842 pop ecx */
  ECX = (pop32());
  /* 10261843 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10261845 pop ebx */
  EBX = (pop32());
  /* 10261846 je 0x1026184f */
  if (C.zf) goto L_1026184f;
  /* 10261848 call 0x1026186a */
  push32(0x1026184du); f_1026186a();
  /* 1026184d pop edi */
  EDI = (pop32());
  /* 1026184e ret  */
  ESPCHK(0x102617bcu, _esp0);
  ESP += 4; return;
L_1026184f:;
  /* 1026184f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10261853 mov dword ptr [0x10266638], edi */
  w32((uint32_t)(0x10266638), (EDI));
  /* 10261859 call dword ptr [0x1026506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026506c))), 0x1026185fu);
  /* 1026185f pop edi */
  EDI = (pop32());
  /* 10261860 ret  */
  ESPCHK(0x102617bcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001861 @ 0x10261861 (9 bytes, 4 insns) */
void f_10261861(void) {
  FTRACE(0x10261861u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261861 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10261863 call 0x102622cc */
  push32(0x10261868u); f_102622cc();
  /* 10261868 pop ecx */
  ECX = (pop32());
  /* 10261869 ret  */
  ESPCHK(0x10261861u, _esp0);
  ESP += 4; return;
}

/* FUN_1000186a @ 0x1026186a (9 bytes, 4 insns) */
void f_1026186a(void) {
  FTRACE(0x1026186au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026186a push 0xd */
  push32((uint32_t)(0xdu));
  /* 1026186c call 0x1026232d */
  push32(0x10261871u); f_1026232d();
  /* 10261871 pop ecx */
  ECX = (pop32());
  /* 10261872 ret  */
  ESPCHK(0x1026186au, _esp0);
  ESP += 4; return;
}

/* FUN_10001873 @ 0x10261873 (26 bytes, 12 insns) */
void f_10261873(void) {
  FTRACE(0x10261873u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261873 push esi */
  push32((uint32_t)(ESI));
  /* 10261874 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10261878:;
  /* 10261878 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026187c jae 0x1026188b */
  if (!C.cf) goto L_1026188b;
  /* 1026187e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10261880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261882 je 0x10261886 */
  if (C.zf) goto L_10261886;
  /* 10261884 call eax */
  call_ind((uint32_t)(EAX), 0x10261886u);
L_10261886:;
  /* 10261886 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261889 jmp 0x10261878 */
  goto L_10261878;
L_1026188b:;
  /* 1026188b pop esi */
  ESI = (pop32());
  /* 1026188c ret  */
  ESPCHK(0x10261873u, _esp0);
  ESP += 4; return;
}

/* FUN_1000188d @ 0x1026188d (84 bytes, 32 insns) */
void f_1026188d(void) {
  FTRACE(0x1026188du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026188d push esi */
  push32((uint32_t)(ESI));
  /* 1026188e call 0x10262237 */
  push32(0x10261893u); f_10262237();
  /* 10261893 call dword ptr [0x10265080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265080))), 0x10261899u);
  /* 10261899 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026189c mov dword ptr [0x102661d8], eax */
  w32((uint32_t)(0x102661d8), (EAX));
  /* 102618a1 je 0x102618dd */
  if (C.zf) goto L_102618dd;
  /* 102618a3 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102618a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102618a7 call 0x10262342 */
  push32(0x102618acu); f_10262342();
  /* 102618ac mov esi, eax */
  ESI = (EAX);
  /* 102618ae pop ecx */
  ECX = (pop32());
  /* 102618af test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102618b1 pop ecx */
  ECX = (pop32());
  /* 102618b2 je 0x102618dd */
  if (C.zf) goto L_102618dd;
  /* 102618b4 push esi */
  push32((uint32_t)(ESI));
  /* 102618b5 push dword ptr [0x102661d8] */
  push32((uint32_t)(r32((uint32_t)(0x102661d8))));
  /* 102618bb call dword ptr [0x1026507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026507c))), 0x102618c1u);
  /* 102618c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102618c3 je 0x102618dd */
  if (C.zf) goto L_102618dd;
  /* 102618c5 push esi */
  push32((uint32_t)(ESI));
  /* 102618c6 call 0x102618ff */
  push32(0x102618cbu); f_102618ff();
  /* 102618cb pop ecx */
  ECX = (pop32());
  /* 102618cc call dword ptr [0x10265078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265078))), 0x102618d2u);
  /* 102618d2 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102618d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102618d8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102618da pop eax */
  EAX = (pop32());
  /* 102618db pop esi */
  ESI = (pop32());
  /* 102618dc ret  */
  ESPCHK(0x1026188du, _esp0);
  ESP += 4; return;
L_102618dd:;
  /* 102618dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102618df pop esi */
  ESI = (pop32());
  /* 102618e0 ret  */
  ESPCHK(0x1026188du, _esp0);
  ESP += 4; return;
}

/* FUN_100018e1 @ 0x102618e1 (30 bytes, 8 insns) */
void f_102618e1(void) {
  FTRACE(0x102618e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102618e1 call 0x10262260 */
  push32(0x102618e6u); f_10262260();
  /* 102618e6 mov eax, dword ptr [0x102661d8] */
  EAX = (r32((uint32_t)(0x102661d8)));
  /* 102618eb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102618ee je 0x102618fe */
  if (C.zf) goto L_102618fe;
  /* 102618f0 push eax */
  push32((uint32_t)(EAX));
  /* 102618f1 call dword ptr [0x10265084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265084))), 0x102618f7u);
  /* 102618f7 or dword ptr [0x102661d8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x102661d8)))|(0xffffffffu); w32((uint32_t)(0x102661d8), (_r)); fl_logic(_r,32); }
L_102618fe:;
  /* 102618fe ret  */
  ESPCHK(0x102618e1u, _esp0);
  ESP += 4; return;
}

/* FUN_100018ff @ 0x102618ff (19 bytes, 4 insns) */
void f_102618ff(void) {
  FTRACE(0x102618ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102618ff mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10261903 mov dword ptr [eax + 0x50], 0x10266358 */
  w32((uint32_t)(EAX + 0x50), (0x10266358u));
  /* 1026190a mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10261911 ret  */
  ESPCHK(0x102618ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10001912 @ 0x10261912 (160 bytes, 62 insns) */
void f_10261912(void) {
  FTRACE(0x10261912u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261912 mov eax, dword ptr [0x102661d8] */
  EAX = (r32((uint32_t)(0x102661d8)));
  /* 10261917 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026191a je 0x102619b1 */
  if (C.zf) goto L_102619b1;
  /* 10261920 push esi */
  push32((uint32_t)(ESI));
  /* 10261921 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10261925 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261927 jne 0x10261936 */
  if (!C.zf) goto L_10261936;
  /* 10261929 push eax */
  push32((uint32_t)(EAX));
  /* 1026192a call dword ptr [0x10265000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265000))), 0x10261930u);
  /* 10261930 mov esi, eax */
  ESI = (EAX);
  /* 10261932 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261934 je 0x102619a2 */
  if (C.zf) goto L_102619a2;
L_10261936:;
  /* 10261936 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10261939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026193b je 0x10261944 */
  if (C.zf) goto L_10261944;
  /* 1026193d push eax */
  push32((uint32_t)(EAX));
  /* 1026193e call 0x102623cf */
  push32(0x10261943u); f_102623cf();
  /* 10261943 pop ecx */
  ECX = (pop32());
L_10261944:;
  /* 10261944 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10261947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261949 je 0x10261952 */
  if (C.zf) goto L_10261952;
  /* 1026194b push eax */
  push32((uint32_t)(EAX));
  /* 1026194c call 0x102623cf */
  push32(0x10261951u); f_102623cf();
  /* 10261951 pop ecx */
  ECX = (pop32());
L_10261952:;
  /* 10261952 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10261955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261957 je 0x10261960 */
  if (C.zf) goto L_10261960;
  /* 10261959 push eax */
  push32((uint32_t)(EAX));
  /* 1026195a call 0x102623cf */
  push32(0x1026195fu); f_102623cf();
  /* 1026195f pop ecx */
  ECX = (pop32());
L_10261960:;
  /* 10261960 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10261963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261965 je 0x1026196e */
  if (C.zf) goto L_1026196e;
  /* 10261967 push eax */
  push32((uint32_t)(EAX));
  /* 10261968 call 0x102623cf */
  push32(0x1026196du); f_102623cf();
  /* 1026196d pop ecx */
  ECX = (pop32());
L_1026196e:;
  /* 1026196e mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10261971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261973 je 0x1026197c */
  if (C.zf) goto L_1026197c;
  /* 10261975 push eax */
  push32((uint32_t)(EAX));
  /* 10261976 call 0x102623cf */
  push32(0x1026197bu); f_102623cf();
  /* 1026197b pop ecx */
  ECX = (pop32());
L_1026197c:;
  /* 1026197c mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 1026197f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261981 je 0x1026198a */
  if (C.zf) goto L_1026198a;
  /* 10261983 push eax */
  push32((uint32_t)(EAX));
  /* 10261984 call 0x102623cf */
  push32(0x10261989u); f_102623cf();
  /* 10261989 pop ecx */
  ECX = (pop32());
L_1026198a:;
  /* 1026198a mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1026198d cmp eax, 0x10266358 */
  { uint32_t _a=(EAX),_b=(0x10266358u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261992 je 0x1026199b */
  if (C.zf) goto L_1026199b;
  /* 10261994 push eax */
  push32((uint32_t)(EAX));
  /* 10261995 call 0x102623cf */
  push32(0x1026199au); f_102623cf();
  /* 1026199a pop ecx */
  ECX = (pop32());
L_1026199b:;
  /* 1026199b push esi */
  push32((uint32_t)(ESI));
  /* 1026199c call 0x102623cf */
  push32(0x102619a1u); f_102623cf();
  /* 102619a1 pop ecx */
  ECX = (pop32());
L_102619a2:;
  /* 102619a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102619a4 push dword ptr [0x102661d8] */
  push32((uint32_t)(r32((uint32_t)(0x102661d8))));
  /* 102619aa call dword ptr [0x1026507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026507c))), 0x102619b0u);
  /* 102619b0 pop esi */
  ESI = (pop32());
L_102619b1:;
  /* 102619b1 ret  */
  ESPCHK(0x10261912u, _esp0);
  ESP += 4; return;
}

/* FUN_100019b2 @ 0x102619b2 (444 bytes, 150 insns) */
void f_102619b2(void) {
  FTRACE(0x102619b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102619b2 push ebp */
  push32((uint32_t)(EBP));
  /* 102619b3 mov ebp, esp */
  EBP = (ESP);
  /* 102619b5 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102619b8 push ebx */
  push32((uint32_t)(EBX));
  /* 102619b9 push esi */
  push32((uint32_t)(ESI));
  /* 102619ba push edi */
  push32((uint32_t)(EDI));
  /* 102619bb push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102619c0 call 0x10262417 */
  push32(0x102619c5u); f_10262417();
  /* 102619c5 mov esi, eax */
  ESI = (EAX);
  /* 102619c7 pop ecx */
  ECX = (pop32());
  /* 102619c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102619ca jne 0x102619d4 */
  if (!C.zf) goto L_102619d4;
  /* 102619cc push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102619ce call 0x1026173c */
  push32(0x102619d3u); f_1026173c();
  /* 102619d3 pop ecx */
  ECX = (pop32());
L_102619d4:;
  /* 102619d4 mov dword ptr [0x10266a40], esi */
  w32((uint32_t)(0x10266a40), (ESI));
  /* 102619da mov dword ptr [0x10266b40], 0x20 */
  w32((uint32_t)(0x10266b40), (0x20u));
  /* 102619e4 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102619ea:;
  /* 102619ea cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102619ec jae 0x10261a0c */
  if (!C.cf) goto L_10261a0c;
  /* 102619ee and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102619f2 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102619f5 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102619f9 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102619fd mov eax, dword ptr [0x10266a40] */
  EAX = (r32((uint32_t)(0x10266a40)));
  /* 10261a02 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261a05 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261a0a jmp 0x102619ea */
  goto L_102619ea;
L_10261a0c:;
  /* 10261a0c lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10261a0f push eax */
  push32((uint32_t)(EAX));
  /* 10261a10 call dword ptr [0x1026509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026509c))), 0x10261a16u);
  /* 10261a16 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10261a1b je 0x10261af2 */
  if (C.zf) goto L_10261af2;
  /* 10261a21 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10261a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261a26 je 0x10261af2 */
  if (C.zf) goto L_10261af2;
  /* 10261a2c mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10261a2e lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10261a31 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10261a34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10261a37 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10261a3c cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261a3e jl 0x10261a42 */
  if ((C.sf!=C.of)) goto L_10261a42;
  /* 10261a40 mov edi, eax */
  EDI = (EAX);
L_10261a42:;
  /* 10261a42 cmp dword ptr [0x10266b40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10266b40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261a48 jge 0x10261aa0 */
  if ((C.sf==C.of)) goto L_10261aa0;
  /* 10261a4a mov esi, 0x10266a44 */
  ESI = (0x10266a44u);
L_10261a4f:;
  /* 10261a4f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10261a54 call 0x10262417 */
  push32(0x10261a59u); f_10262417();
  /* 10261a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261a5b pop ecx */
  ECX = (pop32());
  /* 10261a5c je 0x10261a9a */
  if (C.zf) goto L_10261a9a;
  /* 10261a5e add dword ptr [0x10266b40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10266b40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10266b40), (_r)); fl_add(_a,_b,_r,32); }
  /* 10261a65 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10261a67 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10261a6d:;
  /* 10261a6d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261a6f jae 0x10261a8d */
  if (!C.cf) goto L_10261a8d;
  /* 10261a71 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10261a75 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10261a78 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10261a7c mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10261a80 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10261a82 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261a85 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261a8b jmp 0x10261a6d */
  goto L_10261a6d;
L_10261a8d:;
  /* 10261a8d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261a90 cmp dword ptr [0x10266b40], edi */
  { uint32_t _a=(r32((uint32_t)(0x10266b40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261a96 jl 0x10261a4f */
  if ((C.sf!=C.of)) goto L_10261a4f;
  /* 10261a98 jmp 0x10261aa0 */
  goto L_10261aa0;
L_10261a9a:;
  /* 10261a9a mov edi, dword ptr [0x10266b40] */
  EDI = (r32((uint32_t)(0x10266b40)));
L_10261aa0:;
  /* 10261aa0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10261aa2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10261aa4 jle 0x10261af2 */
  if ((C.zf||C.sf!=C.of)) goto L_10261af2;
L_10261aa6:;
  /* 10261aa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10261aa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10261aab cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261aae je 0x10261ae8 */
  if (C.zf) goto L_10261ae8;
  /* 10261ab0 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10261ab2 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10261ab4 je 0x10261ae8 */
  if (C.zf) goto L_10261ae8;
  /* 10261ab6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10261ab8 jne 0x10261ac5 */
  if (!C.zf) goto L_10261ac5;
  /* 10261aba push ecx */
  push32((uint32_t)(ECX));
  /* 10261abb call dword ptr [0x10265098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265098))), 0x10261ac1u);
  /* 10261ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261ac3 je 0x10261ae8 */
  if (C.zf) goto L_10261ae8;
L_10261ac5:;
  /* 10261ac5 mov ecx, esi */
  ECX = (ESI);
  /* 10261ac7 mov eax, esi */
  EAX = (ESI);
  /* 10261ac9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10261acc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10261acf mov ecx, dword ptr [ecx*4 + 0x10266a40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10266a40)));
  /* 10261ad6 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10261ad9 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10261adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10261adf mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10261ae1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10261ae3 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10261ae5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10261ae8:;
  /* 10261ae8 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10261aec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10261aed inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10261aee cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261af0 jl 0x10261aa6 */
  if ((C.sf!=C.of)) goto L_10261aa6;
L_10261af2:;
  /* 10261af2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10261af4:;
  /* 10261af4 mov ecx, dword ptr [0x10266a40] */
  ECX = (r32((uint32_t)(0x10266a40)));
  /* 10261afa lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10261afd cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b01 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10261b04 jne 0x10261b53 */
  if (!C.zf) goto L_10261b53;
  /* 10261b06 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10261b08 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10261b0c jne 0x10261b13 */
  if (!C.zf) goto L_10261b13;
  /* 10261b0e push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10261b10 pop eax */
  EAX = (pop32());
  /* 10261b11 jmp 0x10261b1d */
  goto L_10261b1d;
L_10261b13:;
  /* 10261b13 mov eax, ebx */
  EAX = (EBX);
  /* 10261b15 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10261b16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10261b18 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261b1a add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10261b1d:;
  /* 10261b1d push eax */
  push32((uint32_t)(EAX));
  /* 10261b1e call dword ptr [0x10265094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265094))), 0x10261b24u);
  /* 10261b24 mov edi, eax */
  EDI = (EAX);
  /* 10261b26 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b29 je 0x10261b42 */
  if (C.zf) goto L_10261b42;
  /* 10261b2b push edi */
  push32((uint32_t)(EDI));
  /* 10261b2c call dword ptr [0x10265098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265098))), 0x10261b32u);
  /* 10261b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261b34 je 0x10261b42 */
  if (C.zf) goto L_10261b42;
  /* 10261b36 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10261b3b mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10261b3d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b40 jne 0x10261b48 */
  if (!C.zf) goto L_10261b48;
L_10261b42:;
  /* 10261b42 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10261b46 jmp 0x10261b57 */
  goto L_10261b57;
L_10261b48:;
  /* 10261b48 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b4b jne 0x10261b57 */
  if (!C.zf) goto L_10261b57;
  /* 10261b4d or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10261b51 jmp 0x10261b57 */
  goto L_10261b57;
L_10261b53:;
  /* 10261b53 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10261b57:;
  /* 10261b57 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10261b58 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b5b jl 0x10261af4 */
  if ((C.sf!=C.of)) goto L_10261af4;
  /* 10261b5d push dword ptr [0x10266b40] */
  push32((uint32_t)(r32((uint32_t)(0x10266b40))));
  /* 10261b63 call dword ptr [0x10265090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265090))), 0x10261b69u);
  /* 10261b69 pop edi */
  EDI = (pop32());
  /* 10261b6a pop esi */
  ESI = (pop32());
  /* 10261b6b pop ebx */
  EBX = (pop32());
  /* 10261b6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10261b6d ret  */
  ESPCHK(0x102619b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b6e @ 0x10261b6e (84 bytes, 33 insns) */
void f_10261b6e(void) {
  FTRACE(0x10261b6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261b6e push ebx */
  push32((uint32_t)(EBX));
  /* 10261b6f push esi */
  push32((uint32_t)(ESI));
  /* 10261b70 push edi */
  push32((uint32_t)(EDI));
  /* 10261b71 mov esi, 0x10266a40 */
  ESI = (0x10266a40u);
L_10261b76:;
  /* 10261b76 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10261b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261b7a je 0x10261bb3 */
  if (C.zf) goto L_10261bb3;
  /* 10261b7c mov edi, eax */
  EDI = (EAX);
  /* 10261b7e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261b83 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b85 jae 0x10261ba8 */
  if (!C.cf) goto L_10261ba8;
  /* 10261b87 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10261b8a:;
  /* 10261b8a cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261b8e je 0x10261b97 */
  if (C.zf) goto L_10261b97;
  /* 10261b90 push ebx */
  push32((uint32_t)(EBX));
  /* 10261b91 call dword ptr [0x102650a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650a0))), 0x10261b97u);
L_10261b97:;
  /* 10261b97 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10261b99 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261b9c add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261ba1 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10261ba4 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261ba6 jb 0x10261b8a */
  if (C.cf) goto L_10261b8a;
L_10261ba8:;
  /* 10261ba8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10261baa call 0x102623cf */
  push32(0x10261bafu); f_102623cf();
  /* 10261baf and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10261bb2 pop ecx */
  ECX = (pop32());
L_10261bb3:;
  /* 10261bb3 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261bb6 cmp esi, 0x10266b40 */
  { uint32_t _a=(ESI),_b=(0x10266b40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261bbc jl 0x10261b76 */
  if ((C.sf!=C.of)) goto L_10261b76;
  /* 10261bbe pop edi */
  EDI = (pop32());
  /* 10261bbf pop esi */
  ESI = (pop32());
  /* 10261bc0 pop ebx */
  EBX = (pop32());
  /* 10261bc1 ret  */
  ESPCHK(0x10261b6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bc2 @ 0x10261bc2 (185 bytes, 71 insns) */
void f_10261bc2(void) {
  FTRACE(0x10261bc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261bc2 push ebx */
  push32((uint32_t)(EBX));
  /* 10261bc3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10261bc5 cmp dword ptr [0x10266b48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10266b48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261bcb push esi */
  push32((uint32_t)(ESI));
  /* 10261bcc push edi */
  push32((uint32_t)(EDI));
  /* 10261bcd jne 0x10261bd4 */
  if (!C.zf) goto L_10261bd4;
  /* 10261bcf call 0x102629f3 */
  push32(0x10261bd4u); f_102629f3();
L_10261bd4:;
  /* 10261bd4 mov esi, dword ptr [0x102665e8] */
  ESI = (r32((uint32_t)(0x102665e8)));
  /* 10261bda xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10261bdc:;
  /* 10261bdc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10261bde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261be0 je 0x10261bf4 */
  if (C.zf) goto L_10261bf4;
  /* 10261be2 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261be4 je 0x10261be7 */
  if (C.zf) goto L_10261be7;
  /* 10261be6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10261be7:;
  /* 10261be7 push esi */
  push32((uint32_t)(ESI));
  /* 10261be8 call 0x102625a0 */
  push32(0x10261bedu); f_102625a0();
  /* 10261bed pop ecx */
  ECX = (pop32());
  /* 10261bee lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10261bf2 jmp 0x10261bdc */
  goto L_10261bdc;
L_10261bf4:;
  /* 10261bf4 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10261bfb push eax */
  push32((uint32_t)(EAX));
  /* 10261bfc call 0x10262417 */
  push32(0x10261c01u); f_10262417();
  /* 10261c01 mov esi, eax */
  ESI = (EAX);
  /* 10261c03 pop ecx */
  ECX = (pop32());
  /* 10261c04 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261c06 mov dword ptr [0x10266618], esi */
  w32((uint32_t)(0x10266618), (ESI));
  /* 10261c0c jne 0x10261c16 */
  if (!C.zf) goto L_10261c16;
  /* 10261c0e push 9 */
  push32((uint32_t)(0x9u));
  /* 10261c10 call 0x1026173c */
  push32(0x10261c15u); f_1026173c();
  /* 10261c15 pop ecx */
  ECX = (pop32());
L_10261c16:;
  /* 10261c16 mov edi, dword ptr [0x102665e8] */
  EDI = (r32((uint32_t)(0x102665e8)));
  /* 10261c1c cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261c1e je 0x10261c59 */
  if (C.zf) goto L_10261c59;
  /* 10261c20 push ebp */
  push32((uint32_t)(EBP));
L_10261c21:;
  /* 10261c21 push edi */
  push32((uint32_t)(EDI));
  /* 10261c22 call 0x102625a0 */
  push32(0x10261c27u); f_102625a0();
  /* 10261c27 mov ebp, eax */
  EBP = (EAX);
  /* 10261c29 pop ecx */
  ECX = (pop32());
  /* 10261c2a inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10261c2b cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261c2e je 0x10261c52 */
  if (C.zf) goto L_10261c52;
  /* 10261c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10261c31 call 0x10262417 */
  push32(0x10261c36u); f_10262417();
  /* 10261c36 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261c38 pop ecx */
  ECX = (pop32());
  /* 10261c39 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10261c3b jne 0x10261c45 */
  if (!C.zf) goto L_10261c45;
  /* 10261c3d push 9 */
  push32((uint32_t)(0x9u));
  /* 10261c3f call 0x1026173c */
  push32(0x10261c44u); f_1026173c();
  /* 10261c44 pop ecx */
  ECX = (pop32());
L_10261c45:;
  /* 10261c45 push edi */
  push32((uint32_t)(EDI));
  /* 10261c46 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10261c48 call 0x102624b0 */
  push32(0x10261c4du); f_102624b0();
  /* 10261c4d pop ecx */
  ECX = (pop32());
  /* 10261c4e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261c51 pop ecx */
  ECX = (pop32());
L_10261c52:;
  /* 10261c52 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261c54 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261c56 jne 0x10261c21 */
  if (!C.zf) goto L_10261c21;
  /* 10261c58 pop ebp */
  EBP = (pop32());
L_10261c59:;
  /* 10261c59 push dword ptr [0x102665e8] */
  push32((uint32_t)(r32((uint32_t)(0x102665e8))));
  /* 10261c5f call 0x102623cf */
  push32(0x10261c64u); f_102623cf();
  /* 10261c64 pop ecx */
  ECX = (pop32());
  /* 10261c65 mov dword ptr [0x102665e8], ebx */
  w32((uint32_t)(0x102665e8), (EBX));
  /* 10261c6b mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10261c6d pop edi */
  EDI = (pop32());
  /* 10261c6e pop esi */
  ESI = (pop32());
  /* 10261c6f mov dword ptr [0x10266b44], 1 */
  w32((uint32_t)(0x10266b44), (0x1u));
  /* 10261c79 pop ebx */
  EBX = (pop32());
  /* 10261c7a ret  */
  ESPCHK(0x10261bc2u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c7b @ 0x10261c7b (153 bytes, 62 insns) */
void f_10261c7b(void) {
  FTRACE(0x10261c7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261c7b push ebp */
  push32((uint32_t)(EBP));
  /* 10261c7c mov ebp, esp */
  EBP = (ESP);
  /* 10261c7e push ecx */
  push32((uint32_t)(ECX));
  /* 10261c7f push ecx */
  push32((uint32_t)(ECX));
  /* 10261c80 push ebx */
  push32((uint32_t)(EBX));
  /* 10261c81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10261c83 cmp dword ptr [0x10266b48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10266b48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261c89 push esi */
  push32((uint32_t)(ESI));
  /* 10261c8a push edi */
  push32((uint32_t)(EDI));
  /* 10261c8b jne 0x10261c92 */
  if (!C.zf) goto L_10261c92;
  /* 10261c8d call 0x102629f3 */
  push32(0x10261c92u); f_102629f3();
L_10261c92:;
  /* 10261c92 mov esi, 0x1026663c */
  ESI = (0x1026663cu);
  /* 10261c97 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10261c9c push esi */
  push32((uint32_t)(ESI));
  /* 10261c9d push ebx */
  push32((uint32_t)(EBX));
  /* 10261c9e call dword ptr [0x102650a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650a4))), 0x10261ca4u);
  /* 10261ca4 mov eax, dword ptr [0x10266b58] */
  EAX = (r32((uint32_t)(0x10266b58)));
  /* 10261ca9 mov dword ptr [0x10266628], esi */
  w32((uint32_t)(0x10266628), (ESI));
  /* 10261caf mov edi, esi */
  EDI = (ESI);
  /* 10261cb1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261cb3 je 0x10261cb7 */
  if (C.zf) goto L_10261cb7;
  /* 10261cb5 mov edi, eax */
  EDI = (EAX);
L_10261cb7:;
  /* 10261cb7 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10261cba push eax */
  push32((uint32_t)(EAX));
  /* 10261cbb lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10261cbe push eax */
  push32((uint32_t)(EAX));
  /* 10261cbf push ebx */
  push32((uint32_t)(EBX));
  /* 10261cc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10261cc1 push edi */
  push32((uint32_t)(EDI));
  /* 10261cc2 call 0x10261d14 */
  push32(0x10261cc7u); f_10261d14();
  /* 10261cc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10261cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10261ccd lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10261cd0 push eax */
  push32((uint32_t)(EAX));
  /* 10261cd1 call 0x10262417 */
  push32(0x10261cd6u); f_10262417();
  /* 10261cd6 mov esi, eax */
  ESI = (EAX);
  /* 10261cd8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10261cdb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261cdd jne 0x10261ce7 */
  if (!C.zf) goto L_10261ce7;
  /* 10261cdf push 8 */
  push32((uint32_t)(0x8u));
  /* 10261ce1 call 0x1026173c */
  push32(0x10261ce6u); f_1026173c();
  /* 10261ce6 pop ecx */
  ECX = (pop32());
L_10261ce7:;
  /* 10261ce7 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10261cea push eax */
  push32((uint32_t)(EAX));
  /* 10261ceb lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10261cee push eax */
  push32((uint32_t)(EAX));
  /* 10261cef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10261cf2 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10261cf5 push eax */
  push32((uint32_t)(EAX));
  /* 10261cf6 push esi */
  push32((uint32_t)(ESI));
  /* 10261cf7 push edi */
  push32((uint32_t)(EDI));
  /* 10261cf8 call 0x10261d14 */
  push32(0x10261cfdu); f_10261d14();
  /* 10261cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10261d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10261d03 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10261d04 mov dword ptr [0x10266610], esi */
  w32((uint32_t)(0x10266610), (ESI));
  /* 10261d0a pop edi */
  EDI = (pop32());
  /* 10261d0b pop esi */
  ESI = (pop32());
  /* 10261d0c mov dword ptr [0x1026660c], eax */
  w32((uint32_t)(0x1026660c), (EAX));
  /* 10261d11 pop ebx */
  EBX = (pop32());
  /* 10261d12 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10261d13 ret  */
  ESPCHK(0x10261c7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001d14 @ 0x10261d14 (436 bytes, 187 insns) */
void f_10261d14(void) {
  FTRACE(0x10261d14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261d14 push ebp */
  push32((uint32_t)(EBP));
  /* 10261d15 mov ebp, esp */
  EBP = (ESP);
  /* 10261d17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10261d1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10261d1d push ebx */
  push32((uint32_t)(EBX));
  /* 10261d1e push esi */
  push32((uint32_t)(ESI));
  /* 10261d1f and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10261d22 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10261d25 push edi */
  push32((uint32_t)(EDI));
  /* 10261d26 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10261d29 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10261d2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10261d32 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10261d34 je 0x10261d3e */
  if (C.zf) goto L_10261d3e;
  /* 10261d36 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10261d38 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261d3b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10261d3e:;
  /* 10261d3e cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261d41 jne 0x10261d87 */
  if (!C.zf) goto L_10261d87;
L_10261d43:;
  /* 10261d43 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10261d46 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261d47 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261d4a je 0x10261d75 */
  if (C.zf) goto L_10261d75;
  /* 10261d4c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10261d4e je 0x10261d75 */
  if (C.zf) goto L_10261d75;
  /* 10261d50 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10261d53 test byte ptr [edx + 0x10266921], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10266921)))&(0x4u); fl_logic(_r,8); }
  /* 10261d5a je 0x10261d68 */
  if (C.zf) goto L_10261d68;
  /* 10261d5c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261d5e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261d60 je 0x10261d68 */
  if (C.zf) goto L_10261d68;
  /* 10261d62 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261d64 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10261d66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10261d67 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10261d68:;
  /* 10261d68 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261d6a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261d6c je 0x10261d43 */
  if (C.zf) goto L_10261d43;
  /* 10261d6e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261d70 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10261d72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10261d73 jmp 0x10261d43 */
  goto L_10261d43;
L_10261d75:;
  /* 10261d75 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261d77 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261d79 je 0x10261d7f */
  if (C.zf) goto L_10261d7f;
  /* 10261d7b and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10261d7e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10261d7f:;
  /* 10261d7f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261d82 jne 0x10261dca */
  if (!C.zf) goto L_10261dca;
  /* 10261d84 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261d85 jmp 0x10261dca */
  goto L_10261dca;
L_10261d87:;
  /* 10261d87 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261d89 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261d8b je 0x10261d92 */
  if (C.zf) goto L_10261d92;
  /* 10261d8d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261d8f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10261d91 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10261d92:;
  /* 10261d92 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261d94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261d95 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10261d98 test byte ptr [ebx + 0x10266921], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10266921)))&(0x4u); fl_logic(_r,8); }
  /* 10261d9f je 0x10261dad */
  if (C.zf) goto L_10261dad;
  /* 10261da1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261da3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261da5 je 0x10261dac */
  if (C.zf) goto L_10261dac;
  /* 10261da7 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10261da9 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10261dab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10261dac:;
  /* 10261dac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10261dad:;
  /* 10261dad cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261db0 je 0x10261dbb */
  if (C.zf) goto L_10261dbb;
  /* 10261db2 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10261db4 je 0x10261dbf */
  if (C.zf) goto L_10261dbf;
  /* 10261db6 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261db9 jne 0x10261d87 */
  if (!C.zf) goto L_10261d87;
L_10261dbb:;
  /* 10261dbb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10261dbd jne 0x10261dc2 */
  if (!C.zf) goto L_10261dc2;
L_10261dbf:;
  /* 10261dbf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10261dc0 jmp 0x10261dca */
  goto L_10261dca;
L_10261dc2:;
  /* 10261dc2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261dc4 je 0x10261dca */
  if (C.zf) goto L_10261dca;
  /* 10261dc6 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10261dca:;
  /* 10261dca and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10261dce:;
  /* 10261dce cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261dd1 je 0x10261eb7 */
  if (C.zf) goto L_10261eb7;
L_10261dd7:;
  /* 10261dd7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261dd9 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261ddc je 0x10261de3 */
  if (C.zf) goto L_10261de3;
  /* 10261dde cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261de1 jne 0x10261de6 */
  if (!C.zf) goto L_10261de6;
L_10261de3:;
  /* 10261de3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261de4 jmp 0x10261dd7 */
  goto L_10261dd7;
L_10261de6:;
  /* 10261de6 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261de9 je 0x10261eb7 */
  if (C.zf) goto L_10261eb7;
  /* 10261def test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10261df1 je 0x10261dfb */
  if (C.zf) goto L_10261dfb;
  /* 10261df3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10261df5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10261df8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10261dfb:;
  /* 10261dfb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10261dfe inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10261e00:;
  /* 10261e00 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10261e07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10261e09:;
  /* 10261e09 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261e0c jne 0x10261e12 */
  if (!C.zf) goto L_10261e12;
  /* 10261e0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261e0f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10261e10 jmp 0x10261e09 */
  goto L_10261e09;
L_10261e12:;
  /* 10261e12 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261e15 jne 0x10261e43 */
  if (!C.zf) goto L_10261e43;
  /* 10261e17 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10261e1a jne 0x10261e41 */
  if (!C.zf) goto L_10261e41;
  /* 10261e1c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10261e1e cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261e21 je 0x10261e30 */
  if (C.zf) goto L_10261e30;
  /* 10261e23 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261e27 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10261e2a jne 0x10261e30 */
  if (!C.zf) goto L_10261e30;
  /* 10261e2c mov eax, edx */
  EAX = (EDX);
  /* 10261e2e jmp 0x10261e33 */
  goto L_10261e33;
L_10261e30:;
  /* 10261e30 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10261e33:;
  /* 10261e33 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10261e36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10261e38 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261e3b sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10261e3e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10261e41:;
  /* 10261e41 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10261e43:;
  /* 10261e43 mov edx, ebx */
  EDX = (EBX);
  /* 10261e45 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10261e46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10261e48 je 0x10261e58 */
  if (C.zf) goto L_10261e58;
  /* 10261e4a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10261e4b:;
  /* 10261e4b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261e4d je 0x10261e53 */
  if (C.zf) goto L_10261e53;
  /* 10261e4f mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10261e52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10261e53:;
  /* 10261e53 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261e55 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10261e56 jne 0x10261e4b */
  if (!C.zf) goto L_10261e4b;
L_10261e58:;
  /* 10261e58 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261e5a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10261e5c je 0x10261ea8 */
  if (C.zf) goto L_10261ea8;
  /* 10261e5e cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261e62 jne 0x10261e6e */
  if (!C.zf) goto L_10261e6e;
  /* 10261e64 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261e67 je 0x10261ea8 */
  if (C.zf) goto L_10261ea8;
  /* 10261e69 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261e6c je 0x10261ea8 */
  if (C.zf) goto L_10261ea8;
L_10261e6e:;
  /* 10261e6e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261e72 je 0x10261ea2 */
  if (C.zf) goto L_10261ea2;
  /* 10261e74 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261e76 je 0x10261e91 */
  if (C.zf) goto L_10261e91;
  /* 10261e78 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10261e7b test byte ptr [ebx + 0x10266921], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10266921)))&(0x4u); fl_logic(_r,8); }
  /* 10261e82 je 0x10261e8a */
  if (C.zf) goto L_10261e8a;
  /* 10261e84 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10261e86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10261e87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261e88 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10261e8a:;
  /* 10261e8a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10261e8c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10261e8e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10261e8f jmp 0x10261ea0 */
  goto L_10261ea0;
L_10261e91:;
  /* 10261e91 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10261e94 test byte ptr [edx + 0x10266921], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10266921)))&(0x4u); fl_logic(_r,8); }
  /* 10261e9b je 0x10261ea0 */
  if (C.zf) goto L_10261ea0;
  /* 10261e9d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261e9e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10261ea0:;
  /* 10261ea0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10261ea2:;
  /* 10261ea2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261ea3 jmp 0x10261e00 */
  goto L_10261e00;
L_10261ea8:;
  /* 10261ea8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10261eaa je 0x10261eb0 */
  if (C.zf) goto L_10261eb0;
  /* 10261eac and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10261eaf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10261eb0:;
  /* 10261eb0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10261eb2 jmp 0x10261dce */
  goto L_10261dce;
L_10261eb7:;
  /* 10261eb7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10261eb9 je 0x10261ebe */
  if (C.zf) goto L_10261ebe;
  /* 10261ebb and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10261ebe:;
  /* 10261ebe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10261ec1 pop edi */
  EDI = (pop32());
  /* 10261ec2 pop esi */
  ESI = (pop32());
  /* 10261ec3 pop ebx */
  EBX = (pop32());
  /* 10261ec4 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10261ec6 pop ebp */
  EBP = (pop32());
  /* 10261ec7 ret  */
  ESPCHK(0x10261d14u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec8 @ 0x10261ec8 (306 bytes, 132 insns) */
void f_10261ec8(void) {
  FTRACE(0x10261ec8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 10261ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 10261eca mov eax, dword ptr [0x10266740] */
  EAX = (r32((uint32_t)(0x10266740)));
  /* 10261ecf push ebx */
  push32((uint32_t)(EBX));
  /* 10261ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10261ed1 mov ebp, dword ptr [0x1026505c] */
  EBP = (r32((uint32_t)(0x1026505c)));
  /* 10261ed7 push esi */
  push32((uint32_t)(ESI));
  /* 10261ed8 push edi */
  push32((uint32_t)(EDI));
  /* 10261ed9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10261edb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10261edd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10261edf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261ee1 jne 0x10261f16 */
  if (!C.zf) goto L_10261f16;
  /* 10261ee3 call ebp */
  call_ind((uint32_t)(EBP), 0x10261ee5u);
  /* 10261ee5 mov esi, eax */
  ESI = (EAX);
  /* 10261ee7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261ee9 je 0x10261ef7 */
  if (C.zf) goto L_10261ef7;
  /* 10261eeb mov dword ptr [0x10266740], 1 */
  w32((uint32_t)(0x10266740), (0x1u));
  /* 10261ef5 jmp 0x10261f1f */
  goto L_10261f1f;
L_10261ef7:;
  /* 10261ef7 call dword ptr [0x10265060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265060))), 0x10261efdu);
  /* 10261efd mov edi, eax */
  EDI = (EAX);
  /* 10261eff cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261f01 je 0x10261ff1 */
  if (C.zf) goto L_10261ff1;
  /* 10261f07 mov dword ptr [0x10266740], 2 */
  w32((uint32_t)(0x10266740), (0x2u));
  /* 10261f11 jmp 0x10261fa5 */
  goto L_10261fa5;
L_10261f16:;
  /* 10261f16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261f19 jne 0x10261fa0 */
  if (!C.zf) goto L_10261fa0;
L_10261f1f:;
  /* 10261f1f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261f21 jne 0x10261f2f */
  if (!C.zf) goto L_10261f2f;
  /* 10261f23 call ebp */
  call_ind((uint32_t)(EBP), 0x10261f25u);
  /* 10261f25 mov esi, eax */
  ESI = (EAX);
  /* 10261f27 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261f29 je 0x10261ff1 */
  if (C.zf) goto L_10261ff1;
L_10261f2f:;
  /* 10261f2f cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10261f32 mov eax, esi */
  EAX = (ESI);
  /* 10261f34 je 0x10261f44 */
  if (C.zf) goto L_10261f44;
L_10261f36:;
  /* 10261f36 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261f37 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261f38 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10261f3b jne 0x10261f36 */
  if (!C.zf) goto L_10261f36;
  /* 10261f3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261f3e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261f3f cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10261f42 jne 0x10261f36 */
  if (!C.zf) goto L_10261f36;
L_10261f44:;
  /* 10261f44 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261f46 mov edi, dword ptr [0x1026508c] */
  EDI = (r32((uint32_t)(0x1026508c)));
  /* 10261f4c sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10261f4e push ebx */
  push32((uint32_t)(EBX));
  /* 10261f4f push ebx */
  push32((uint32_t)(EBX));
  /* 10261f50 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261f51 push ebx */
  push32((uint32_t)(EBX));
  /* 10261f52 push ebx */
  push32((uint32_t)(EBX));
  /* 10261f53 push eax */
  push32((uint32_t)(EAX));
  /* 10261f54 push esi */
  push32((uint32_t)(ESI));
  /* 10261f55 push ebx */
  push32((uint32_t)(EBX));
  /* 10261f56 push ebx */
  push32((uint32_t)(EBX));
  /* 10261f57 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10261f5b call edi */
  call_ind((uint32_t)(EDI), 0x10261f5du);
  /* 10261f5d mov ebp, eax */
  EBP = (EAX);
  /* 10261f5f cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261f61 je 0x10261f95 */
  if (C.zf) goto L_10261f95;
  /* 10261f63 push ebp */
  push32((uint32_t)(EBP));
  /* 10261f64 call 0x10262417 */
  push32(0x10261f69u); f_10262417();
  /* 10261f69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261f6b pop ecx */
  ECX = (pop32());
  /* 10261f6c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10261f70 je 0x10261f95 */
  if (C.zf) goto L_10261f95;
  /* 10261f72 push ebx */
  push32((uint32_t)(EBX));
  /* 10261f73 push ebx */
  push32((uint32_t)(EBX));
  /* 10261f74 push ebp */
  push32((uint32_t)(EBP));
  /* 10261f75 push eax */
  push32((uint32_t)(EAX));
  /* 10261f76 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10261f7a push esi */
  push32((uint32_t)(ESI));
  /* 10261f7b push ebx */
  push32((uint32_t)(EBX));
  /* 10261f7c push ebx */
  push32((uint32_t)(EBX));
  /* 10261f7d call edi */
  call_ind((uint32_t)(EDI), 0x10261f7fu);
  /* 10261f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10261f81 jne 0x10261f91 */
  if (!C.zf) goto L_10261f91;
  /* 10261f83 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10261f87 call 0x102623cf */
  push32(0x10261f8cu); f_102623cf();
  /* 10261f8c pop ecx */
  ECX = (pop32());
  /* 10261f8d mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10261f91:;
  /* 10261f91 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10261f95:;
  /* 10261f95 push esi */
  push32((uint32_t)(ESI));
  /* 10261f96 call dword ptr [0x10265088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265088))), 0x10261f9cu);
  /* 10261f9c mov eax, ebx */
  EAX = (EBX);
  /* 10261f9e jmp 0x10261ff3 */
  goto L_10261ff3;
L_10261fa0:;
  /* 10261fa0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261fa3 jne 0x10261ff1 */
  if (!C.zf) goto L_10261ff1;
L_10261fa5:;
  /* 10261fa5 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261fa7 jne 0x10261fb5 */
  if (!C.zf) goto L_10261fb5;
  /* 10261fa9 call dword ptr [0x10265060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265060))), 0x10261fafu);
  /* 10261faf mov edi, eax */
  EDI = (EAX);
  /* 10261fb1 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261fb3 je 0x10261ff1 */
  if (C.zf) goto L_10261ff1;
L_10261fb5:;
  /* 10261fb5 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261fb7 mov eax, edi */
  EAX = (EDI);
  /* 10261fb9 je 0x10261fc5 */
  if (C.zf) goto L_10261fc5;
L_10261fbb:;
  /* 10261fbb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261fbc cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261fbe jne 0x10261fbb */
  if (!C.zf) goto L_10261fbb;
  /* 10261fc0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261fc1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10261fc3 jne 0x10261fbb */
  if (!C.zf) goto L_10261fbb;
L_10261fc5:;
  /* 10261fc5 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10261fc7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10261fc8 mov ebp, eax */
  EBP = (EAX);
  /* 10261fca push ebp */
  push32((uint32_t)(EBP));
  /* 10261fcb call 0x10262417 */
  push32(0x10261fd0u); f_10262417();
  /* 10261fd0 mov esi, eax */
  ESI = (EAX);
  /* 10261fd2 pop ecx */
  ECX = (pop32());
  /* 10261fd3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10261fd5 jne 0x10261fdb */
  if (!C.zf) goto L_10261fdb;
  /* 10261fd7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10261fd9 jmp 0x10261fe6 */
  goto L_10261fe6;
L_10261fdb:;
  /* 10261fdb push ebp */
  push32((uint32_t)(EBP));
  /* 10261fdc push edi */
  push32((uint32_t)(EDI));
  /* 10261fdd push esi */
  push32((uint32_t)(ESI));
  /* 10261fde call 0x10262a10 */
  push32(0x10261fe3u); f_10262a10();
  /* 10261fe3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10261fe6:;
  /* 10261fe6 push edi */
  push32((uint32_t)(EDI));
  /* 10261fe7 call dword ptr [0x102650a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650a8))), 0x10261fedu);
  /* 10261fed mov eax, esi */
  EAX = (ESI);
  /* 10261fef jmp 0x10261ff3 */
  goto L_10261ff3;
L_10261ff1:;
  /* 10261ff1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10261ff3:;
  /* 10261ff3 pop edi */
  EDI = (pop32());
  /* 10261ff4 pop esi */
  ESI = (pop32());
  /* 10261ff5 pop ebp */
  EBP = (pop32());
  /* 10261ff6 pop ebx */
  EBX = (pop32());
  /* 10261ff7 pop ecx */
  ECX = (pop32());
  /* 10261ff8 pop ecx */
  ECX = (pop32());
  /* 10261ff9 ret  */
  ESPCHK(0x10261ec8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ffa @ 0x10261ffa (60 bytes, 20 insns) */
void f_10261ffa(void) {
  FTRACE(0x10261ffau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10261ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10261ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 10261ffe cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262002 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10262007 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1026200a push eax */
  push32((uint32_t)(EAX));
  /* 1026200b call dword ptr [0x10265054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265054))), 0x10262011u);
  /* 10262011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262013 mov dword ptr [0x10266a28], eax */
  w32((uint32_t)(0x10266a28), (EAX));
  /* 10262018 je 0x1026202f */
  if (C.zf) goto L_1026202f;
  /* 1026201a call 0x10262d45 */
  push32(0x1026201fu); f_10262d45();
  /* 1026201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262021 jne 0x10262032 */
  if (!C.zf) goto L_10262032;
  /* 10262023 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 10262029 call dword ptr [0x10265058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265058))), 0x1026202fu);
L_1026202f:;
  /* 1026202f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10262031 ret  */
  ESPCHK(0x10261ffau, _esp0);
  ESP += 4; return;
L_10262032:;
  /* 10262032 push 1 */
  push32((uint32_t)(0x1u));
  /* 10262034 pop eax */
  EAX = (pop32());
  /* 10262035 ret  */
  ESPCHK(0x10261ffau, _esp0);
  ESP += 4; return;
}

/* FUN_10002036 @ 0x10262036 (117 bytes, 38 insns) */
void f_10262036(void) {
  FTRACE(0x10262036u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262036 push ebx */
  push32((uint32_t)(EBX));
  /* 10262037 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10262039 cmp dword ptr [0x102667f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102667f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026203f push ebp */
  push32((uint32_t)(EBP));
  /* 10262040 mov ebp, dword ptr [0x1026504c] */
  EBP = (r32((uint32_t)(0x1026504c)));
  /* 10262046 jle 0x1026208c */
  if ((C.zf||C.sf!=C.of)) goto L_1026208c;
  /* 10262048 mov eax, dword ptr [0x102667fc] */
  EAX = (r32((uint32_t)(0x102667fc)));
  /* 1026204d push esi */
  push32((uint32_t)(ESI));
  /* 1026204e push edi */
  push32((uint32_t)(EDI));
  /* 1026204f mov edi, dword ptr [0x10265050] */
  EDI = (r32((uint32_t)(0x10265050)));
  /* 10262055 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10262058:;
  /* 10262058 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1026205d push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10262062 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10262064 call edi */
  call_ind((uint32_t)(EDI), 0x10262066u);
  /* 10262066 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1026206b push 0 */
  push32((uint32_t)(0x0u));
  /* 1026206d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1026206f call edi */
  call_ind((uint32_t)(EDI), 0x10262071u);
  /* 10262071 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10262074 push 0 */
  push32((uint32_t)(0x0u));
  /* 10262076 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026207c call ebp */
  call_ind((uint32_t)(EBP), 0x1026207eu);
  /* 1026207e add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262081 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10262082 cmp ebx, dword ptr [0x102667f8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102667f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262088 jl 0x10262058 */
  if ((C.sf!=C.of)) goto L_10262058;
  /* 1026208a pop edi */
  EDI = (pop32());
  /* 1026208b pop esi */
  ESI = (pop32());
L_1026208c:;
  /* 1026208c push dword ptr [0x102667fc] */
  push32((uint32_t)(r32((uint32_t)(0x102667fc))));
  /* 10262092 push 0 */
  push32((uint32_t)(0x0u));
  /* 10262094 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026209a call ebp */
  call_ind((uint32_t)(EBP), 0x1026209cu);
  /* 1026209c push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 102620a2 call dword ptr [0x10265058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265058))), 0x102620a8u);
  /* 102620a8 pop ebp */
  EBP = (pop32());
  /* 102620a9 pop ebx */
  EBX = (pop32());
  /* 102620aa ret  */
  ESPCHK(0x10262036u, _esp0);
  ESP += 4; return;
}

/* FUN_100020ab @ 0x102620ab (57 bytes, 18 insns) */
void f_102620ab(void) {
  FTRACE(0x102620abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102620ab mov eax, dword ptr [0x102665f0] */
  EAX = (r32((uint32_t)(0x102665f0)));
  /* 102620b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102620b3 je 0x102620c2 */
  if (C.zf) goto L_102620c2;
  /* 102620b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102620b7 jne 0x102620e3 */
  if (!C.zf) goto L_102620e3;
  /* 102620b9 cmp dword ptr [0x102665f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102665f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102620c0 jne 0x102620e3 */
  if (!C.zf) goto L_102620e3;
L_102620c2:;
  /* 102620c2 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 102620c7 call 0x102620e4 */
  push32(0x102620ccu); f_102620e4();
  /* 102620cc mov eax, dword ptr [0x10266744] */
  EAX = (r32((uint32_t)(0x10266744)));
  /* 102620d1 pop ecx */
  ECX = (pop32());
  /* 102620d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102620d4 je 0x102620d8 */
  if (C.zf) goto L_102620d8;
  /* 102620d6 call eax */
  call_ind((uint32_t)(EAX), 0x102620d8u);
L_102620d8:;
  /* 102620d8 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102620dd call 0x102620e4 */
  push32(0x102620e2u); f_102620e4();
  /* 102620e2 pop ecx */
  ECX = (pop32());
L_102620e3:;
  /* 102620e3 ret  */
  ESPCHK(0x102620abu, _esp0);
  ESP += 4; return;
}

/* FUN_100020e4 @ 0x102620e4 (339 bytes, 100 insns) */
void f_102620e4(void) {
  FTRACE(0x102620e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102620e4 push ebp */
  push32((uint32_t)(EBP));
  /* 102620e5 mov ebp, esp */
  EBP = (ESP);
  /* 102620e7 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102620ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102620f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102620f2 mov eax, 0x10266208 */
  EAX = (0x10266208u);
L_102620f7:;
  /* 102620f7 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102620f9 je 0x10262106 */
  if (C.zf) goto L_10262106;
  /* 102620fb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102620fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102620ff cmp eax, 0x10266298 */
  { uint32_t _a=(EAX),_b=(0x10266298u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262104 jl 0x102620f7 */
  if ((C.sf!=C.of)) goto L_102620f7;
L_10262106:;
  /* 10262106 push esi */
  push32((uint32_t)(ESI));
  /* 10262107 mov esi, ecx */
  ESI = (ECX);
  /* 10262109 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1026210c cmp edx, dword ptr [esi + 0x10266208] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10266208))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262112 jne 0x10262234 */
  if (!C.zf) goto L_10262234;
  /* 10262118 mov eax, dword ptr [0x102665f0] */
  EAX = (r32((uint32_t)(0x102665f0)));
  /* 1026211d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262120 je 0x1026220e */
  if (C.zf) goto L_1026220e;
  /* 10262126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262128 jne 0x10262137 */
  if (!C.zf) goto L_10262137;
  /* 1026212a cmp dword ptr [0x102665f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102665f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262131 je 0x1026220e */
  if (C.zf) goto L_1026220e;
L_10262137:;
  /* 10262137 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026213d je 0x10262234 */
  if (C.zf) goto L_10262234;
  /* 10262143 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10262149 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1026214e push eax */
  push32((uint32_t)(EAX));
  /* 1026214f push 0 */
  push32((uint32_t)(0x0u));
  /* 10262151 call dword ptr [0x102650a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102650a4))), 0x10262157u);
  /* 10262157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262159 jne 0x1026216e */
  if (!C.zf) goto L_1026216e;
  /* 1026215b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10262161 push 0x10265400 */
  push32((uint32_t)(0x10265400u));
  /* 10262166 push eax */
  push32((uint32_t)(EAX));
  /* 10262167 call 0x102624b0 */
  push32(0x1026216cu); f_102624b0();
  /* 1026216c pop ecx */
  ECX = (pop32());
  /* 1026216d pop ecx */
  ECX = (pop32());
L_1026216e:;
  /* 1026216e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10262174 push edi */
  push32((uint32_t)(EDI));
  /* 10262175 push eax */
  push32((uint32_t)(EAX));
  /* 10262176 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 1026217c call 0x102625a0 */
  push32(0x10262181u); f_102625a0();
  /* 10262181 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10262182 pop ecx */
  ECX = (pop32());
  /* 10262183 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262186 jbe 0x102621b1 */
  if ((C.cf||C.zf)) goto L_102621b1;
  /* 10262188 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1026218e push eax */
  push32((uint32_t)(EAX));
  /* 1026218f call 0x102625a0 */
  push32(0x10262194u); f_102625a0();
  /* 10262194 mov edi, eax */
  EDI = (EAX);
  /* 10262196 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1026219c sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026219f push 3 */
  push32((uint32_t)(0x3u));
  /* 102621a1 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102621a3 push 0x102653fc */
  push32((uint32_t)(0x102653fcu));
  /* 102621a8 push edi */
  push32((uint32_t)(EDI));
  /* 102621a9 call 0x10263620 */
  push32(0x102621aeu); f_10263620();
  /* 102621ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102621b1:;
  /* 102621b1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102621b7 push 0x102653e0 */
  push32((uint32_t)(0x102653e0u));
  /* 102621bc push eax */
  push32((uint32_t)(EAX));
  /* 102621bd call 0x102624b0 */
  push32(0x102621c2u); f_102624b0();
  /* 102621c2 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102621c8 push edi */
  push32((uint32_t)(EDI));
  /* 102621c9 push eax */
  push32((uint32_t)(EAX));
  /* 102621ca call 0x102624c0 */
  push32(0x102621cfu); f_102624c0();
  /* 102621cf lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102621d5 push 0x102653dc */
  push32((uint32_t)(0x102653dcu));
  /* 102621da push eax */
  push32((uint32_t)(EAX));
  /* 102621db call 0x102624c0 */
  push32(0x102621e0u); f_102624c0();
  /* 102621e0 push dword ptr [esi + 0x1026620c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1026620c))));
  /* 102621e6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102621ec push eax */
  push32((uint32_t)(EAX));
  /* 102621ed call 0x102624c0 */
  push32(0x102621f2u); f_102624c0();
  /* 102621f2 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 102621f7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102621fd push 0x102653b4 */
  push32((uint32_t)(0x102653b4u));
  /* 10262202 push eax */
  push32((uint32_t)(EAX));
  /* 10262203 call 0x1026358e */
  push32(0x10262208u); f_1026358e();
  /* 10262208 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026220b pop edi */
  EDI = (pop32());
  /* 1026220c jmp 0x10262234 */
  goto L_10262234;
L_1026220e:;
  /* 1026220e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10262211 lea esi, [esi + 0x1026620c] */
  ESI = ((uint32_t)(ESI + 0x1026620c));
  /* 10262217 push 0 */
  push32((uint32_t)(0x0u));
  /* 10262219 push eax */
  push32((uint32_t)(EAX));
  /* 1026221a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1026221c call 0x102625a0 */
  push32(0x10262221u); f_102625a0();
  /* 10262221 pop ecx */
  ECX = (pop32());
  /* 10262222 push eax */
  push32((uint32_t)(EAX));
  /* 10262223 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10262225 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10262227 call dword ptr [0x10265094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265094))), 0x1026222du);
  /* 1026222d push eax */
  push32((uint32_t)(EAX));
  /* 1026222e call dword ptr [0x10265048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265048))), 0x10262234u);
L_10262234:;
  /* 10262234 pop esi */
  ESI = (pop32());
  /* 10262235 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262236 ret  */
  ESPCHK(0x102620e4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002237 @ 0x10262237 (41 bytes, 12 insns) */
void f_10262237(void) {
  FTRACE(0x10262237u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262237 push esi */
  push32((uint32_t)(ESI));
  /* 10262238 mov esi, dword ptr [0x10265044] */
  ESI = (r32((uint32_t)(0x10265044)));
  /* 1026223e push dword ptr [0x102662dc] */
  push32((uint32_t)(r32((uint32_t)(0x102662dc))));
  /* 10262244 call esi */
  call_ind((uint32_t)(ESI), 0x10262246u);
  /* 10262246 push dword ptr [0x102662cc] */
  push32((uint32_t)(r32((uint32_t)(0x102662cc))));
  /* 1026224c call esi */
  call_ind((uint32_t)(ESI), 0x1026224eu);
  /* 1026224e push dword ptr [0x102662bc] */
  push32((uint32_t)(r32((uint32_t)(0x102662bc))));
  /* 10262254 call esi */
  call_ind((uint32_t)(ESI), 0x10262256u);
  /* 10262256 push dword ptr [0x1026629c] */
  push32((uint32_t)(r32((uint32_t)(0x1026629c))));
  /* 1026225c call esi */
  call_ind((uint32_t)(ESI), 0x1026225eu);
  /* 1026225e pop esi */
  ESI = (pop32());
  /* 1026225f ret  */
  ESPCHK(0x10262237u, _esp0);
  ESP += 4; return;
}

/* FUN_10002260 @ 0x10262260 (108 bytes, 34 insns) */
void f_10262260(void) {
  FTRACE(0x10262260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262260 push esi */
  push32((uint32_t)(ESI));
  /* 10262261 push edi */
  push32((uint32_t)(EDI));
  /* 10262262 mov edi, dword ptr [0x102650a0] */
  EDI = (r32((uint32_t)(0x102650a0)));
  /* 10262268 mov esi, 0x10266298 */
  ESI = (0x10266298u);
L_1026226d:;
  /* 1026226d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1026226f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262271 je 0x1026229e */
  if (C.zf) goto L_1026229e;
  /* 10262273 cmp esi, 0x102662dc */
  { uint32_t _a=(ESI),_b=(0x102662dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262279 je 0x1026229e */
  if (C.zf) goto L_1026229e;
  /* 1026227b cmp esi, 0x102662cc */
  { uint32_t _a=(ESI),_b=(0x102662ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262281 je 0x1026229e */
  if (C.zf) goto L_1026229e;
  /* 10262283 cmp esi, 0x102662bc */
  { uint32_t _a=(ESI),_b=(0x102662bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262289 je 0x1026229e */
  if (C.zf) goto L_1026229e;
  /* 1026228b cmp esi, 0x1026629c */
  { uint32_t _a=(ESI),_b=(0x1026629cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262291 je 0x1026229e */
  if (C.zf) goto L_1026229e;
  /* 10262293 push eax */
  push32((uint32_t)(EAX));
  /* 10262294 call edi */
  call_ind((uint32_t)(EDI), 0x10262296u);
  /* 10262296 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10262298 call 0x102623cf */
  push32(0x1026229du); f_102623cf();
  /* 1026229d pop ecx */
  ECX = (pop32());
L_1026229e:;
  /* 1026229e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102622a1 cmp esi, 0x10266358 */
  { uint32_t _a=(ESI),_b=(0x10266358u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102622a7 jl 0x1026226d */
  if ((C.sf!=C.of)) goto L_1026226d;
  /* 102622a9 push dword ptr [0x102662bc] */
  push32((uint32_t)(r32((uint32_t)(0x102662bc))));
  /* 102622af call edi */
  call_ind((uint32_t)(EDI), 0x102622b1u);
  /* 102622b1 push dword ptr [0x102662cc] */
  push32((uint32_t)(r32((uint32_t)(0x102662cc))));
  /* 102622b7 call edi */
  call_ind((uint32_t)(EDI), 0x102622b9u);
  /* 102622b9 push dword ptr [0x102662dc] */
  push32((uint32_t)(r32((uint32_t)(0x102662dc))));
  /* 102622bf call edi */
  call_ind((uint32_t)(EDI), 0x102622c1u);
  /* 102622c1 push dword ptr [0x1026629c] */
  push32((uint32_t)(r32((uint32_t)(0x1026629c))));
  /* 102622c7 call edi */
  call_ind((uint32_t)(EDI), 0x102622c9u);
  /* 102622c9 pop edi */
  EDI = (pop32());
  /* 102622ca pop esi */
  ESI = (pop32());
  /* 102622cb ret  */
  ESPCHK(0x10262260u, _esp0);
  ESP += 4; return;
}

/* FUN_100022cc @ 0x102622cc (97 bytes, 37 insns) */
void f_102622cc(void) {
  FTRACE(0x102622ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102622cc push ebp */
  push32((uint32_t)(EBP));
  /* 102622cd mov ebp, esp */
  EBP = (ESP);
  /* 102622cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102622d2 push esi */
  push32((uint32_t)(ESI));
  /* 102622d3 cmp dword ptr [eax*4 + 0x10266298], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10266298))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102622db lea esi, [eax*4 + 0x10266298] */
  ESI = ((uint32_t)(EAX*4 + 0x10266298));
  /* 102622e2 jne 0x10262322 */
  if (!C.zf) goto L_10262322;
  /* 102622e4 push edi */
  push32((uint32_t)(EDI));
  /* 102622e5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102622e7 call 0x10262417 */
  push32(0x102622ecu); f_10262417();
  /* 102622ec mov edi, eax */
  EDI = (EAX);
  /* 102622ee pop ecx */
  ECX = (pop32());
  /* 102622ef test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102622f1 jne 0x102622fb */
  if (!C.zf) goto L_102622fb;
  /* 102622f3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102622f5 call 0x1026173c */
  push32(0x102622fau); f_1026173c();
  /* 102622fa pop ecx */
  ECX = (pop32());
L_102622fb:;
  /* 102622fb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102622fd call 0x102622cc */
  push32(0x10262302u); f_102622cc();
  /* 10262302 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262305 pop ecx */
  ECX = (pop32());
  /* 10262306 push edi */
  push32((uint32_t)(EDI));
  /* 10262307 jne 0x10262313 */
  if (!C.zf) goto L_10262313;
  /* 10262309 call dword ptr [0x10265044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265044))), 0x1026230fu);
  /* 1026230f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10262311 jmp 0x10262319 */
  goto L_10262319;
L_10262313:;
  /* 10262313 call 0x102623cf */
  push32(0x10262318u); f_102623cf();
  /* 10262318 pop ecx */
  ECX = (pop32());
L_10262319:;
  /* 10262319 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1026231b call 0x1026232d */
  push32(0x10262320u); f_1026232d();
  /* 10262320 pop ecx */
  ECX = (pop32());
  /* 10262321 pop edi */
  EDI = (pop32());
L_10262322:;
  /* 10262322 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10262324 call dword ptr [0x10265040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265040))), 0x1026232au);
  /* 1026232a pop esi */
  ESI = (pop32());
  /* 1026232b pop ebp */
  EBP = (pop32());
  /* 1026232c ret  */
  ESPCHK(0x102622ccu, _esp0);
  ESP += 4; return;
}

/* FUN_1000232d @ 0x1026232d (21 bytes, 7 insns) */
void f_1026232d(void) {
  FTRACE(0x1026232du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026232d push ebp */
  push32((uint32_t)(EBP));
  /* 1026232e mov ebp, esp */
  EBP = (ESP);
  /* 10262330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262333 push dword ptr [eax*4 + 0x10266298] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10266298))));
  /* 1026233a call dword ptr [0x1026503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026503c))), 0x10262340u);
  /* 10262340 pop ebp */
  EBP = (pop32());
  /* 10262341 ret  */
  ESPCHK(0x1026232du, _esp0);
  ESP += 4; return;
}

/* FUN_10002342 @ 0x10262342 (141 bytes, 56 insns) */
void f_10262342(void) {
  FTRACE(0x10262342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262342 push ebx */
  push32((uint32_t)(EBX));
  /* 10262343 push esi */
  push32((uint32_t)(ESI));
  /* 10262344 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10262348 push edi */
  push32((uint32_t)(EDI));
  /* 10262349 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1026234e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262351 mov ebx, esi */
  EBX = (ESI);
  /* 10262353 ja 0x10262362 */
  if ((!C.cf&&!C.zf)) goto L_10262362;
  /* 10262355 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10262357 jne 0x1026235c */
  if (!C.zf) goto L_1026235c;
  /* 10262359 push 1 */
  push32((uint32_t)(0x1u));
  /* 1026235b pop esi */
  ESI = (pop32());
L_1026235c:;
  /* 1026235c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1026235f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10262362:;
  /* 10262362 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10262364 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262367 ja 0x102623a3 */
  if ((!C.cf&&!C.zf)) goto L_102623a3;
  /* 10262369 cmp ebx, dword ptr [0x102664e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102664e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026236f ja 0x1026238e */
  if ((!C.cf&&!C.zf)) goto L_1026238e;
  /* 10262371 push 9 */
  push32((uint32_t)(0x9u));
  /* 10262373 call 0x102622cc */
  push32(0x10262378u); f_102622cc();
  /* 10262378 push ebx */
  push32((uint32_t)(EBX));
  /* 10262379 call 0x102630d9 */
  push32(0x1026237eu); f_102630d9();
  /* 1026237e push 9 */
  push32((uint32_t)(0x9u));
  /* 10262380 mov edi, eax */
  EDI = (EAX);
  /* 10262382 call 0x1026232d */
  push32(0x10262387u); f_1026232d();
  /* 10262387 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026238a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1026238c jne 0x102623b9 */
  if (!C.zf) goto L_102623b9;
L_1026238e:;
  /* 1026238e push esi */
  push32((uint32_t)(ESI));
  /* 1026238f push 8 */
  push32((uint32_t)(0x8u));
  /* 10262391 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 10262397 call dword ptr [0x10265038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265038))), 0x1026239du);
  /* 1026239d mov edi, eax */
  EDI = (EAX);
  /* 1026239f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102623a1 jne 0x102623c5 */
  if (!C.zf) goto L_102623c5;
L_102623a3:;
  /* 102623a3 cmp dword ptr [0x102667bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102667bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102623aa je 0x102623c5 */
  if (C.zf) goto L_102623c5;
  /* 102623ac push esi */
  push32((uint32_t)(ESI));
  /* 102623ad call 0x10263778 */
  push32(0x102623b2u); f_10263778();
  /* 102623b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102623b4 pop ecx */
  ECX = (pop32());
  /* 102623b5 je 0x102623cb */
  if (C.zf) goto L_102623cb;
  /* 102623b7 jmp 0x10262362 */
  goto L_10262362;
L_102623b9:;
  /* 102623b9 push ebx */
  push32((uint32_t)(EBX));
  /* 102623ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102623bc push edi */
  push32((uint32_t)(EDI));
  /* 102623bd call 0x10263720 */
  push32(0x102623c2u); f_10263720();
  /* 102623c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102623c5:;
  /* 102623c5 mov eax, edi */
  EAX = (EDI);
L_102623c7:;
  /* 102623c7 pop edi */
  EDI = (pop32());
  /* 102623c8 pop esi */
  ESI = (pop32());
  /* 102623c9 pop ebx */
  EBX = (pop32());
  /* 102623ca ret  */
  ESPCHK(0x10262342u, _esp0);
  ESP += 4; return;
L_102623cb:;
  /* 102623cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102623cd jmp 0x102623c7 */
  goto L_102623c7;
}

/* FUN_100023cf @ 0x102623cf (72 bytes, 29 insns) */
void f_102623cf(void) {
  FTRACE(0x102623cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102623cf push esi */
  push32((uint32_t)(ESI));
  /* 102623d0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102623d4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102623d6 je 0x10262415 */
  if (C.zf) goto L_10262415;
  /* 102623d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102623da call 0x102622cc */
  push32(0x102623dfu); f_102622cc();
  /* 102623df push esi */
  push32((uint32_t)(ESI));
  /* 102623e0 call 0x10262d83 */
  push32(0x102623e5u); f_10262d83();
  /* 102623e5 pop ecx */
  ECX = (pop32());
  /* 102623e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102623e8 pop ecx */
  ECX = (pop32());
  /* 102623e9 je 0x102623fe */
  if (C.zf) goto L_102623fe;
  /* 102623eb push esi */
  push32((uint32_t)(ESI));
  /* 102623ec push eax */
  push32((uint32_t)(EAX));
  /* 102623ed call 0x10262dae */
  push32(0x102623f2u); f_10262dae();
  /* 102623f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102623f4 call 0x1026232d */
  push32(0x102623f9u); f_1026232d();
  /* 102623f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102623fc pop esi */
  ESI = (pop32());
  /* 102623fd ret  */
  ESPCHK(0x102623cfu, _esp0);
  ESP += 4; return;
L_102623fe:;
  /* 102623fe push 9 */
  push32((uint32_t)(0x9u));
  /* 10262400 call 0x1026232d */
  push32(0x10262405u); f_1026232d();
  /* 10262405 pop ecx */
  ECX = (pop32());
  /* 10262406 push esi */
  push32((uint32_t)(ESI));
  /* 10262407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10262409 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026240f call dword ptr [0x1026504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026504c))), 0x10262415u);
L_10262415:;
  /* 10262415 pop esi */
  ESI = (pop32());
  /* 10262416 ret  */
  ESPCHK(0x102623cfu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10262417 (18 bytes, 6 insns) */
void f_10262417(void) {
  FTRACE(0x10262417u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262417 push dword ptr [0x102667bc] */
  push32((uint32_t)(r32((uint32_t)(0x102667bc))));
  /* 1026241d push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10262421 call 0x10262429 */
  push32(0x10262426u); f_10262429();
  /* 10262426 pop ecx */
  ECX = (pop32());
  /* 10262427 pop ecx */
  ECX = (pop32());
  /* 10262428 ret  */
  ESPCHK(0x10262417u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10262429 (44 bytes, 16 insns) */
void f_10262429(void) {
  FTRACE(0x10262429u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262429 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026242e ja 0x10262452 */
  if ((!C.cf&&!C.zf)) goto L_10262452;
L_10262430:;
  /* 10262430 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10262434 call 0x10262455 */
  push32(0x10262439u); f_10262455();
  /* 10262439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026243b pop ecx */
  ECX = (pop32());
  /* 1026243c jne 0x10262454 */
  if (!C.zf) goto L_10262454;
  /* 1026243e cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262442 je 0x10262454 */
  if (C.zf) goto L_10262454;
  /* 10262444 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10262448 call 0x10263778 */
  push32(0x1026244du); f_10263778();
  /* 1026244d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026244f pop ecx */
  ECX = (pop32());
  /* 10262450 jne 0x10262430 */
  if (!C.zf) goto L_10262430;
L_10262452:;
  /* 10262452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10262454:;
  /* 10262454 ret  */
  ESPCHK(0x10262429u, _esp0);
  ESP += 4; return;
}

/* FUN_10002455 @ 0x10262455 (78 bytes, 30 insns) */
void f_10262455(void) {
  FTRACE(0x10262455u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262455 push esi */
  push32((uint32_t)(ESI));
  /* 10262456 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1026245a cmp esi, dword ptr [0x102664e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102664e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262460 push edi */
  push32((uint32_t)(EDI));
  /* 10262461 ja 0x10262484 */
  if ((!C.cf&&!C.zf)) goto L_10262484;
  /* 10262463 push 9 */
  push32((uint32_t)(0x9u));
  /* 10262465 call 0x102622cc */
  push32(0x1026246au); f_102622cc();
  /* 1026246a push esi */
  push32((uint32_t)(ESI));
  /* 1026246b call 0x102630d9 */
  push32(0x10262470u); f_102630d9();
  /* 10262470 push 9 */
  push32((uint32_t)(0x9u));
  /* 10262472 mov edi, eax */
  EDI = (EAX);
  /* 10262474 call 0x1026232d */
  push32(0x10262479u); f_1026232d();
  /* 10262479 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026247c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1026247e je 0x10262484 */
  if (C.zf) goto L_10262484;
  /* 10262480 mov eax, edi */
  EAX = (EDI);
  /* 10262482 jmp 0x102624a0 */
  goto L_102624a0;
L_10262484:;
  /* 10262484 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10262486 jne 0x1026248b */
  if (!C.zf) goto L_1026248b;
  /* 10262488 push 1 */
  push32((uint32_t)(0x1u));
  /* 1026248a pop esi */
  ESI = (pop32());
L_1026248b:;
  /* 1026248b add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1026248e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10262491 push esi */
  push32((uint32_t)(ESI));
  /* 10262492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10262494 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026249a call dword ptr [0x10265038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265038))), 0x102624a0u);
L_102624a0:;
  /* 102624a0 pop edi */
  EDI = (pop32());
  /* 102624a1 pop esi */
  ESI = (pop32());
  /* 102624a2 ret  */
  ESPCHK(0x10262455u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b0 @ 0x102624b0 (7 bytes, 3 insns) */
void f_102624b0(void) {
  FTRACE(0x102624b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102624b0 push edi */
  push32((uint32_t)(EDI));
  /* 102624b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102624b5 jmp 0x10262521 */
  jmp_ind(0x10262521u); return;
}

/* FUN_100024c0 @ 0x102624c0 (224 bytes, 84 insns) */
void f_102624c0(void) {
  FTRACE(0x102624c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102624c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102624c4 push edi */
  push32((uint32_t)(EDI));
  /* 102624c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102624cb je 0x102624dc */
  if (C.zf) goto L_102624dc;
L_102624cd:;
  /* 102624cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102624cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102624d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102624d2 je 0x1026250f */
  if (C.zf) goto L_1026250f;
  /* 102624d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102624da jne 0x102624cd */
  if (!C.zf) goto L_102624cd;
L_102624dc:;
  /* 102624dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102624de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102624e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102624e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102624e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102624ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102624ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102624f2 je 0x102624dc */
  if (C.zf) goto L_102624dc;
  /* 102624f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102624f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102624f9 je 0x1026251e */
  if (C.zf) goto L_1026251e;
  /* 102624fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102624fd je 0x10262519 */
  if (C.zf) goto L_10262519;
  /* 102624ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10262504 je 0x10262514 */
  if (C.zf) goto L_10262514;
  /* 10262506 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1026250b je 0x1026250f */
  if (C.zf) goto L_1026250f;
  /* 1026250d jmp 0x102624dc */
  goto L_102624dc;
L_1026250f:;
  /* 1026250f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10262512 jmp 0x10262521 */
  goto L_10262521;
L_10262514:;
  /* 10262514 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10262517 jmp 0x10262521 */
  goto L_10262521;
L_10262519:;
  /* 10262519 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1026251c jmp 0x10262521 */
  goto L_10262521;
L_1026251e:;
  /* 1026251e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10262521:;
  /* 10262521 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10262525 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1026252b je 0x10262546 */
  if (C.zf) goto L_10262546;
L_1026252d:;
  /* 1026252d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1026252f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10262530 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10262532 je 0x10262598 */
  if (C.zf) goto L_10262598;
  /* 10262534 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10262536 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10262537 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1026253d jne 0x1026252d */
  if (!C.zf) goto L_1026252d;
  /* 1026253f jmp 0x10262546 */
  goto L_10262546;
L_10262541:;
  /* 10262541 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10262543 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10262546:;
  /* 10262546 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1026254b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1026254d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1026254f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10262552 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10262554 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10262556 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262559 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1026255e je 0x10262541 */
  if (C.zf) goto L_10262541;
  /* 10262560 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10262562 je 0x10262598 */
  if (C.zf) goto L_10262598;
  /* 10262564 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10262566 je 0x1026258f */
  if (C.zf) goto L_1026258f;
  /* 10262568 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1026256e je 0x10262582 */
  if (C.zf) goto L_10262582;
  /* 10262570 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10262576 je 0x1026257a */
  if (C.zf) goto L_1026257a;
  /* 10262578 jmp 0x10262541 */
  goto L_10262541;
L_1026257a:;
  /* 1026257a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1026257c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10262580 pop edi */
  EDI = (pop32());
  /* 10262581 ret  */
  ESPCHK(0x102624c0u, _esp0);
  ESP += 4; return;
L_10262582:;
  /* 10262582 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10262585 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10262589 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1026258d pop edi */
  EDI = (pop32());
  /* 1026258e ret  */
  ESPCHK(0x102624c0u, _esp0);
  ESP += 4; return;
L_1026258f:;
  /* 1026258f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10262592 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10262596 pop edi */
  EDI = (pop32());
  /* 10262597 ret  */
  ESPCHK(0x102624c0u, _esp0);
  ESP += 4; return;
L_10262598:;
  /* 10262598 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1026259a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1026259e pop edi */
  EDI = (pop32());
  /* 1026259f ret  */
  ESPCHK(0x102624c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102625a0 (123 bytes, 44 insns) */
void f_102625a0(void) {
  FTRACE(0x102625a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102625a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102625a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102625aa je 0x102625c0 */
  if (C.zf) goto L_102625c0;
L_102625ac:;
  /* 102625ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102625ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102625af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102625b1 je 0x102625f3 */
  if (C.zf) goto L_102625f3;
  /* 102625b3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102625b9 jne 0x102625ac */
  if (!C.zf) goto L_102625ac;
  /* 102625bb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102625c0:;
  /* 102625c0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102625c2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102625c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102625c9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102625cc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102625ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102625d1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102625d6 je 0x102625c0 */
  if (C.zf) goto L_102625c0;
  /* 102625d8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102625db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102625dd je 0x10262611 */
  if (C.zf) goto L_10262611;
  /* 102625df test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102625e1 je 0x10262607 */
  if (C.zf) goto L_10262607;
  /* 102625e3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102625e8 je 0x102625fd */
  if (C.zf) goto L_102625fd;
  /* 102625ea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102625ef je 0x102625f3 */
  if (C.zf) goto L_102625f3;
  /* 102625f1 jmp 0x102625c0 */
  goto L_102625c0;
L_102625f3:;
  /* 102625f3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102625f6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102625fa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102625fc ret  */
  ESPCHK(0x102625a0u, _esp0);
  ESP += 4; return;
L_102625fd:;
  /* 102625fd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10262600 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10262604 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262606 ret  */
  ESPCHK(0x102625a0u, _esp0);
  ESP += 4; return;
L_10262607:;
  /* 10262607 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1026260a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1026260e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262610 ret  */
  ESPCHK(0x102625a0u, _esp0);
  ESP += 4; return;
L_10262611:;
  /* 10262611 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10262614 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10262618 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026261a ret  */
  ESPCHK(0x102625a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000261b @ 0x1026261b (429 bytes, 143 insns) */
void f_1026261b(void) {
  FTRACE(0x1026261bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026261b push ebp */
  push32((uint32_t)(EBP));
  /* 1026261c mov ebp, esp */
  EBP = (ESP);
  /* 1026261e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262621 push ebx */
  push32((uint32_t)(EBX));
  /* 10262622 push esi */
  push32((uint32_t)(ESI));
  /* 10262623 push edi */
  push32((uint32_t)(EDI));
  /* 10262624 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10262626 call 0x102622cc */
  push32(0x1026262bu); f_102622cc();
  /* 1026262b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1026262e call 0x102627c8 */
  push32(0x10262633u); f_102627c8();
  /* 10262633 mov ebx, eax */
  EBX = (EAX);
  /* 10262635 pop ecx */
  ECX = (pop32());
  /* 10262636 cmp ebx, dword ptr [0x10266800] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10266800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026263c pop ecx */
  ECX = (pop32());
  /* 1026263d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10262640 jne 0x10262649 */
  if (!C.zf) goto L_10262649;
L_10262642:;
  /* 10262642 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10262644 jmp 0x102627b9 */
  goto L_102627b9;
L_10262649:;
  /* 10262649 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1026264b je 0x102627a7 */
  if (C.zf) goto L_102627a7;
  /* 10262651 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10262653 mov eax, 0x102663e8 */
  EAX = (0x102663e8u);
L_10262658:;
  /* 10262658 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026265a je 0x102626d0 */
  if (C.zf) goto L_102626d0;
  /* 1026265c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1026265f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10262660 cmp eax, 0x102664d8 */
  { uint32_t _a=(EAX),_b=(0x102664d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262665 jl 0x10262658 */
  if ((C.sf!=C.of)) goto L_10262658;
  /* 10262667 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1026266a push eax */
  push32((uint32_t)(EAX));
  /* 1026266b push ebx */
  push32((uint32_t)(EBX));
  /* 1026266c call dword ptr [0x10265034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265034))), 0x10262672u);
  /* 10262672 push 1 */
  push32((uint32_t)(0x1u));
  /* 10262674 pop esi */
  ESI = (pop32());
  /* 10262675 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262677 jne 0x1026279e */
  if (!C.zf) goto L_1026279e;
  /* 1026267d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1026267f and dword ptr [0x10266a24], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10266a24)))&(0x0u); w32((uint32_t)(0x10266a24), (_r)); fl_logic(_r,32); }
  /* 10262686 pop ecx */
  ECX = (pop32());
  /* 10262687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10262689 mov edi, 0x10266920 */
  EDI = (0x10266920u);
  /* 1026268e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262691 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10262693 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10262694 mov dword ptr [0x10266800], ebx */
  w32((uint32_t)(0x10266800), (EBX));
  /* 1026269a jbe 0x1026278b */
  if ((C.cf||C.zf)) goto L_1026278b;
  /* 102626a0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102626a4 je 0x10262766 */
  if (C.zf) goto L_10262766;
  /* 102626aa lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102626ad:;
  /* 102626ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102626af test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102626b1 je 0x10262766 */
  if (C.zf) goto L_10262766;
  /* 102626b7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102626bb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102626be:;
  /* 102626be cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102626c0 ja 0x1026275a */
  if ((!C.cf&&!C.zf)) goto L_1026275a;
  /* 102626c6 or byte ptr [eax + 0x10266921], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(0x4u); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 102626cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102626ce jmp 0x102626be */
  goto L_102626be;
L_102626d0:;
  /* 102626d0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102626d4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102626d6 pop ecx */
  ECX = (pop32());
  /* 102626d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102626d9 mov edi, 0x10266920 */
  EDI = (0x10266920u);
  /* 102626de lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102626e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102626e3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102626e6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102626e7 lea ebx, [esi + 0x102663f8] */
  EBX = ((uint32_t)(ESI + 0x102663f8));
L_102626ed:;
  /* 102626ed cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102626f0 mov ecx, ebx */
  ECX = (EBX);
  /* 102626f2 je 0x10262720 */
  if (C.zf) goto L_10262720;
L_102626f4:;
  /* 102626f4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102626f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102626f9 je 0x10262720 */
  if (C.zf) goto L_10262720;
  /* 102626fb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102626fe movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10262701 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262703 ja 0x10262719 */
  if ((!C.cf&&!C.zf)) goto L_10262719;
  /* 10262705 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10262708 mov dl, byte ptr [edx + 0x102663e0] */
  DL = (r8((uint32_t)(EDX + 0x102663e0)));
L_1026270e:;
  /* 1026270e or byte ptr [eax + 0x10266921], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(DL); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 10262714 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10262715 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262717 jbe 0x1026270e */
  if ((C.cf||C.zf)) goto L_1026270e;
L_10262719:;
  /* 10262719 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1026271a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1026271b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1026271e jne 0x102626f4 */
  if (!C.zf) goto L_102626f4;
L_10262720:;
  /* 10262720 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10262723 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262726 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026272a jb 0x102626ed */
  if (C.cf) goto L_102626ed;
  /* 1026272c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1026272f mov dword ptr [0x1026681c], 1 */
  w32((uint32_t)(0x1026681c), (0x1u));
  /* 10262739 push eax */
  push32((uint32_t)(EAX));
  /* 1026273a mov dword ptr [0x10266800], eax */
  w32((uint32_t)(0x10266800), (EAX));
  /* 1026273f call 0x10262812 */
  push32(0x10262744u); f_10262812();
  /* 10262744 lea esi, [esi + 0x102663ec] */
  ESI = ((uint32_t)(ESI + 0x102663ec));
  /* 1026274a mov edi, 0x10266810 */
  EDI = (0x10266810u);
  /* 1026274f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10262750 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10262751 pop ecx */
  ECX = (pop32());
  /* 10262752 mov dword ptr [0x10266a24], eax */
  w32((uint32_t)(0x10266a24), (EAX));
  /* 10262757 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10262758 jmp 0x102627ac */
  goto L_102627ac;
L_1026275a:;
  /* 1026275a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1026275b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1026275c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10262760 jne 0x102626ad */
  if (!C.zf) goto L_102626ad;
L_10262766:;
  /* 10262766 mov eax, esi */
  EAX = (ESI);
L_10262768:;
  /* 10262768 or byte ptr [eax + 0x10266921], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(0x8u); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 1026276f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10262770 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262775 jb 0x10262768 */
  if (C.cf) goto L_10262768;
  /* 10262777 push ebx */
  push32((uint32_t)(EBX));
  /* 10262778 call 0x10262812 */
  push32(0x1026277du); f_10262812();
  /* 1026277d pop ecx */
  ECX = (pop32());
  /* 1026277e mov dword ptr [0x10266a24], eax */
  w32((uint32_t)(0x10266a24), (EAX));
  /* 10262783 mov dword ptr [0x1026681c], esi */
  w32((uint32_t)(0x1026681c), (ESI));
  /* 10262789 jmp 0x10262792 */
  goto L_10262792;
L_1026278b:;
  /* 1026278b and dword ptr [0x1026681c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1026681c)))&(0x0u); w32((uint32_t)(0x1026681c), (_r)); fl_logic(_r,32); }
L_10262792:;
  /* 10262792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10262794 mov edi, 0x10266810 */
  EDI = (0x10266810u);
  /* 10262799 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1026279a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1026279b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1026279c jmp 0x102627ac */
  goto L_102627ac;
L_1026279e:;
  /* 1026279e cmp dword ptr [0x102667a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102667a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102627a5 je 0x102627b6 */
  if (C.zf) goto L_102627b6;
L_102627a7:;
  /* 102627a7 call 0x10262845 */
  push32(0x102627acu); f_10262845();
L_102627ac:;
  /* 102627ac call 0x1026286e */
  push32(0x102627b1u); f_1026286e();
  /* 102627b1 jmp 0x10262642 */
  goto L_10262642;
L_102627b6:;
  /* 102627b6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102627b9:;
  /* 102627b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102627bb call 0x1026232d */
  push32(0x102627c0u); f_1026232d();
  /* 102627c0 pop ecx */
  ECX = (pop32());
  /* 102627c1 mov eax, esi */
  EAX = (ESI);
  /* 102627c3 pop edi */
  EDI = (pop32());
  /* 102627c4 pop esi */
  ESI = (pop32());
  /* 102627c5 pop ebx */
  EBX = (pop32());
  /* 102627c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102627c7 ret  */
  ESPCHK(0x1026261bu, _esp0);
  ESP += 4; return;
}

/* FUN_100027c8 @ 0x102627c8 (74 bytes, 15 insns) */
void f_102627c8(void) {
  FTRACE(0x102627c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102627c8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102627cc and dword ptr [0x102667a8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102667a8)))&(0x0u); w32((uint32_t)(0x102667a8), (_r)); fl_logic(_r,32); }
  /* 102627d3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102627d6 jne 0x102627e8 */
  if (!C.zf) goto L_102627e8;
  /* 102627d8 mov dword ptr [0x102667a8], 1 */
  w32((uint32_t)(0x102667a8), (0x1u));
  /* 102627e2 jmp dword ptr [0x1026502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1026502c)))); return;
L_102627e8:;
  /* 102627e8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102627eb jne 0x102627fd */
  if (!C.zf) goto L_102627fd;
  /* 102627ed mov dword ptr [0x102667a8], 1 */
  w32((uint32_t)(0x102667a8), (0x1u));
  /* 102627f7 jmp dword ptr [0x10265030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10265030)))); return;
L_102627fd:;
  /* 102627fd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262800 jne 0x10262811 */
  if (!C.zf) goto L_10262811;
  /* 10262802 mov eax, dword ptr [0x102667d8] */
  EAX = (r32((uint32_t)(0x102667d8)));
  /* 10262807 mov dword ptr [0x102667a8], 1 */
  w32((uint32_t)(0x102667a8), (0x1u));
L_10262811:;
  /* 10262811 ret  */
  ESPCHK(0x102627c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002812 @ 0x10262812 (51 bytes, 19 insns) */
void f_10262812(void) {
  FTRACE(0x10262812u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262812 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10262816 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026281b je 0x1026283f */
  if (C.zf) goto L_1026283f;
  /* 1026281d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262820 je 0x10262839 */
  if (C.zf) goto L_10262839;
  /* 10262822 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262825 je 0x10262833 */
  if (C.zf) goto L_10262833;
  /* 10262827 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10262828 je 0x1026282d */
  if (C.zf) goto L_1026282d;
  /* 1026282a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1026282c ret  */
  ESPCHK(0x10262812u, _esp0);
  ESP += 4; return;
L_1026282d:;
  /* 1026282d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10262832 ret  */
  ESPCHK(0x10262812u, _esp0);
  ESP += 4; return;
L_10262833:;
  /* 10262833 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10262838 ret  */
  ESPCHK(0x10262812u, _esp0);
  ESP += 4; return;
L_10262839:;
  /* 10262839 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1026283e ret  */
  ESPCHK(0x10262812u, _esp0);
  ESP += 4; return;
L_1026283f:;
  /* 1026283f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10262844 ret  */
  ESPCHK(0x10262812u, _esp0);
  ESP += 4; return;
}

/* FUN_10002845 @ 0x10262845 (41 bytes, 17 insns) */
void f_10262845(void) {
  FTRACE(0x10262845u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262845 push edi */
  push32((uint32_t)(EDI));
  /* 10262846 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10262848 pop ecx */
  ECX = (pop32());
  /* 10262849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1026284b mov edi, 0x10266920 */
  EDI = (0x10266920u);
  /* 10262850 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10262852 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10262853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10262855 mov edi, 0x10266810 */
  EDI = (0x10266810u);
  /* 1026285a mov dword ptr [0x10266800], eax */
  w32((uint32_t)(0x10266800), (EAX));
  /* 1026285f mov dword ptr [0x1026681c], eax */
  w32((uint32_t)(0x1026681c), (EAX));
  /* 10262864 mov dword ptr [0x10266a24], eax */
  w32((uint32_t)(0x10266a24), (EAX));
  /* 10262869 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1026286a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1026286b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1026286c pop edi */
  EDI = (pop32());
  /* 1026286d ret  */
  ESPCHK(0x10262845u, _esp0);
  ESP += 4; return;
}

/* FUN_1000286e @ 0x1026286e (389 bytes, 124 insns) */
void f_1026286e(void) {
  FTRACE(0x1026286eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026286e push ebp */
  push32((uint32_t)(EBP));
  /* 1026286f mov ebp, esp */
  EBP = (ESP);
  /* 10262871 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262877 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1026287a push esi */
  push32((uint32_t)(ESI));
  /* 1026287b push eax */
  push32((uint32_t)(EAX));
  /* 1026287c push dword ptr [0x10266800] */
  push32((uint32_t)(r32((uint32_t)(0x10266800))));
  /* 10262882 call dword ptr [0x10265034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265034))), 0x10262888u);
  /* 10262888 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026288b jne 0x102629a7 */
  if (!C.zf) goto L_102629a7;
  /* 10262891 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10262893 mov esi, 0x100 */
  ESI = (0x100u);
L_10262898:;
  /* 10262898 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1026289f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102628a0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102628a2 jb 0x10262898 */
  if (C.cf) goto L_10262898;
  /* 102628a4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 102628a7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102628ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102628b0 je 0x102628e9 */
  if (C.zf) goto L_102628e9;
  /* 102628b2 push ebx */
  push32((uint32_t)(EBX));
  /* 102628b3 push edi */
  push32((uint32_t)(EDI));
  /* 102628b4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102628b7:;
  /* 102628b7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102628ba movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102628bd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102628bf ja 0x102628de */
  if ((!C.cf&&!C.zf)) goto L_102628de;
  /* 102628c1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102628c3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102628ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102628cb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102628d0 mov ebx, ecx */
  EBX = (ECX);
  /* 102628d2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102628d5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102628d7 mov ecx, ebx */
  ECX = (EBX);
  /* 102628d9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102628dc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102628de:;
  /* 102628de inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102628df inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102628e0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102628e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102628e5 jne 0x102628b7 */
  if (!C.zf) goto L_102628b7;
  /* 102628e7 pop edi */
  EDI = (pop32());
  /* 102628e8 pop ebx */
  EBX = (pop32());
L_102628e9:;
  /* 102628e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102628eb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102628f1 push dword ptr [0x10266a24] */
  push32((uint32_t)(r32((uint32_t)(0x10266a24))));
  /* 102628f7 push dword ptr [0x10266800] */
  push32((uint32_t)(r32((uint32_t)(0x10266800))));
  /* 102628fd push eax */
  push32((uint32_t)(EAX));
  /* 102628fe lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10262904 push esi */
  push32((uint32_t)(ESI));
  /* 10262905 push eax */
  push32((uint32_t)(EAX));
  /* 10262906 push 1 */
  push32((uint32_t)(0x1u));
  /* 10262908 call 0x102639e2 */
  push32(0x1026290du); f_102639e2();
  /* 1026290d push 0 */
  push32((uint32_t)(0x0u));
  /* 1026290f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10262915 push dword ptr [0x10266800] */
  push32((uint32_t)(r32((uint32_t)(0x10266800))));
  /* 1026291b push esi */
  push32((uint32_t)(ESI));
  /* 1026291c push eax */
  push32((uint32_t)(EAX));
  /* 1026291d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10262923 push esi */
  push32((uint32_t)(ESI));
  /* 10262924 push eax */
  push32((uint32_t)(EAX));
  /* 10262925 push esi */
  push32((uint32_t)(ESI));
  /* 10262926 push dword ptr [0x10266a24] */
  push32((uint32_t)(r32((uint32_t)(0x10266a24))));
  /* 1026292c call 0x10263793 */
  push32(0x10262931u); f_10263793();
  /* 10262931 push 0 */
  push32((uint32_t)(0x0u));
  /* 10262933 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10262939 push dword ptr [0x10266800] */
  push32((uint32_t)(r32((uint32_t)(0x10266800))));
  /* 1026293f push esi */
  push32((uint32_t)(ESI));
  /* 10262940 push eax */
  push32((uint32_t)(EAX));
  /* 10262941 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10262947 push esi */
  push32((uint32_t)(ESI));
  /* 10262948 push eax */
  push32((uint32_t)(EAX));
  /* 10262949 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1026294e push dword ptr [0x10266a24] */
  push32((uint32_t)(r32((uint32_t)(0x10266a24))));
  /* 10262954 call 0x10263793 */
  push32(0x10262959u); f_10263793();
  /* 10262959 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1026295c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1026295e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10262964:;
  /* 10262964 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10262967 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1026296a je 0x10262982 */
  if (C.zf) goto L_10262982;
  /* 1026296c or byte ptr [eax + 0x10266921], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(0x10u); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 10262973 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1026297a:;
  /* 1026297a mov byte ptr [eax + 0x10266820], dl */
  w8((uint32_t)(EAX + 0x10266820), (DL));
  /* 10262980 jmp 0x1026299e */
  goto L_1026299e;
L_10262982:;
  /* 10262982 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10262985 je 0x10262997 */
  if (C.zf) goto L_10262997;
  /* 10262987 or byte ptr [eax + 0x10266921], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(0x20u); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 1026298e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10262995 jmp 0x1026297a */
  goto L_1026297a;
L_10262997:;
  /* 10262997 and byte ptr [eax + 0x10266820], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266820)))&(0x0u); w8((uint32_t)(EAX + 0x10266820), (_r)); fl_logic(_r,8); }
L_1026299e:;
  /* 1026299e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1026299f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102629a0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102629a1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629a3 jb 0x10262964 */
  if (C.cf) goto L_10262964;
  /* 102629a5 jmp 0x102629f0 */
  goto L_102629f0;
L_102629a7:;
  /* 102629a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102629a9 mov esi, 0x100 */
  ESI = (0x100u);
L_102629ae:;
  /* 102629ae cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629b1 jb 0x102629cc */
  if (C.cf) goto L_102629cc;
  /* 102629b3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629b6 ja 0x102629cc */
  if ((!C.cf&&!C.zf)) goto L_102629cc;
  /* 102629b8 or byte ptr [eax + 0x10266921], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(0x10u); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 102629bf mov cl, al */
  CL = (AL);
  /* 102629c1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102629c4:;
  /* 102629c4 mov byte ptr [eax + 0x10266820], cl */
  w8((uint32_t)(EAX + 0x10266820), (CL));
  /* 102629ca jmp 0x102629eb */
  goto L_102629eb;
L_102629cc:;
  /* 102629cc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629cf jb 0x102629e4 */
  if (C.cf) goto L_102629e4;
  /* 102629d1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629d4 ja 0x102629e4 */
  if ((!C.cf&&!C.zf)) goto L_102629e4;
  /* 102629d6 or byte ptr [eax + 0x10266921], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266921)))|(0x20u); w8((uint32_t)(EAX + 0x10266921), (_r)); fl_logic(_r,8); }
  /* 102629dd mov cl, al */
  CL = (AL);
  /* 102629df sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102629e2 jmp 0x102629c4 */
  goto L_102629c4;
L_102629e4:;
  /* 102629e4 and byte ptr [eax + 0x10266820], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10266820)))&(0x0u); w8((uint32_t)(EAX + 0x10266820), (_r)); fl_logic(_r,8); }
L_102629eb:;
  /* 102629eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102629ec cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629ee jb 0x102629ae */
  if (C.cf) goto L_102629ae;
L_102629f0:;
  /* 102629f0 pop esi */
  ESI = (pop32());
  /* 102629f1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102629f2 ret  */
  ESPCHK(0x1026286eu, _esp0);
  ESP += 4; return;
}

/* FUN_100029f3 @ 0x102629f3 (28 bytes, 7 insns) */
void f_102629f3(void) {
  FTRACE(0x102629f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102629f3 cmp dword ptr [0x10266b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10266b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102629fa jne 0x10262a0e */
  if (!C.zf) goto L_10262a0e;
  /* 102629fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102629fe call 0x1026261b */
  push32(0x10262a03u); f_1026261b();
  /* 10262a03 pop ecx */
  ECX = (pop32());
  /* 10262a04 mov dword ptr [0x10266b48], 1 */
  w32((uint32_t)(0x10266b48), (0x1u));
L_10262a0e:;
  /* 10262a0e ret  */
  ESPCHK(0x102629f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x10262a10 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10262a10(void) {
  FTRACE(0x10262a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10262a11 mov ebp, esp */
  EBP = (ESP);
  /* 10262a13 push edi */
  push32((uint32_t)(EDI));
  /* 10262a14 push esi */
  push32((uint32_t)(ESI));
  /* 10262a15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10262a18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10262a1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10262a1e mov eax, ecx */
  EAX = (ECX);
  /* 10262a20 mov edx, ecx */
  EDX = (ECX);
  /* 10262a22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262a24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262a26 jbe 0x10262a30 */
  if ((C.cf||C.zf)) goto L_10262a30;
  /* 10262a28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262a2a jb 0x10262ba8 */
  if (C.cf) goto L_10262ba8;
L_10262a30:;
  /* 10262a30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10262a36 jne 0x10262a4c */
  if (!C.zf) goto L_10262a4c;
  /* 10262a38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262a3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10262a3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262a41 jb 0x10262a6c */
  if (C.cf) goto L_10262a6c;
  /* 10262a43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262a45 jmp dword ptr [edx*4 + 0x10262b58] */
  switch (EDX) {
    case 0: goto L_10262b68;
    case 1: goto L_10262b70;
    case 2: goto L_10262b7c;
    case 3: goto L_10262b90;
    default: x86_unimpl("switch@0x10262a45 out of table"); return;
  }
L_10262a4c:;
  /* 10262a4c mov eax, edi */
  EAX = (EDI);
  /* 10262a4e mov edx, 3 */
  EDX = (0x3u);
  /* 10262a53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262a56 jb 0x10262a64 */
  if (C.cf) goto L_10262a64;
  /* 10262a58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10262a5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262a5d jmp dword ptr [eax*4 + 0x10262a70] */
  switch (EAX) {
    case 1: goto L_10262a80;
    case 2: goto L_10262aac;
    case 3: goto L_10262ad0;
    default: x86_unimpl("switch@0x10262a5d out of table"); return;
  }
L_10262a64:;
  /* 10262a64 jmp dword ptr [ecx*4 + 0x10262b68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10262b68)))); return;
  /* 10262a6b nop  */
  /* nop */
L_10262a6c:;
  /* 10262a6c jmp dword ptr [ecx*4 + 0x10262aec] */
  switch (ECX) {
    case 0: goto L_10262b4f;
    case 1: goto L_10262b3c;
    case 2: goto L_10262b34;
    case 3: goto L_10262b2c;
    case 4: goto L_10262b24;
    case 5: goto L_10262b1c;
    case 6: goto L_10262b14;
    case 7: goto L_10262b0c;
    default: x86_unimpl("switch@0x10262a6c out of table"); return;
  }
  /* 10262a73 nop  */
  /* nop */
L_10262a80:;
  /* 10262a80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10262a82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10262a84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10262a86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10262a89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10262a8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10262a8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262a92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10262a95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262a98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262a9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262a9e jb 0x10262a6c */
  if (C.cf) goto L_10262a6c;
  /* 10262aa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262aa2 jmp dword ptr [edx*4 + 0x10262b58] */
  switch (EDX) {
    case 0: goto L_10262b68;
    case 1: goto L_10262b70;
    case 2: goto L_10262b7c;
    case 3: goto L_10262b90;
    default: x86_unimpl("switch@0x10262aa2 out of table"); return;
  }
  /* 10262aa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10262aac:;
  /* 10262aac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10262aae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10262ab0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10262ab2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10262ab5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262ab8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10262abb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262abe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262ac1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ac4 jb 0x10262a6c */
  if (C.cf) goto L_10262a6c;
  /* 10262ac6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262ac8 jmp dword ptr [edx*4 + 0x10262b58] */
  switch (EDX) {
    case 0: goto L_10262b68;
    case 1: goto L_10262b70;
    case 2: goto L_10262b7c;
    case 3: goto L_10262b90;
    default: x86_unimpl("switch@0x10262ac8 out of table"); return;
  }
  /* 10262acf nop  */
  /* nop */
L_10262ad0:;
  /* 10262ad0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10262ad2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10262ad4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10262ad6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10262ad7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262ada inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10262adb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ade jb 0x10262a6c */
  if (C.cf) goto L_10262a6c;
  /* 10262ae0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262ae2 jmp dword ptr [edx*4 + 0x10262b58] */
  switch (EDX) {
    case 0: goto L_10262b68;
    case 1: goto L_10262b70;
    case 2: goto L_10262b7c;
    case 3: goto L_10262b90;
    default: x86_unimpl("switch@0x10262ae2 out of table"); return;
  }
  /* 10262ae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10262b0c:;
  /* 10262b0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10262b10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10262b14:;
  /* 10262b14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10262b18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10262b1c:;
  /* 10262b1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10262b20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10262b24:;
  /* 10262b24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10262b28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10262b2c:;
  /* 10262b2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10262b30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10262b34:;
  /* 10262b34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10262b38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10262b3c:;
  /* 10262b3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10262b40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10262b44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10262b4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262b4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10262b4f:;
  /* 10262b4f jmp dword ptr [edx*4 + 0x10262b58] */
  switch (EDX) {
    case 0: goto L_10262b68;
    case 1: goto L_10262b70;
    case 2: goto L_10262b7c;
    case 3: goto L_10262b90;
    default: x86_unimpl("switch@0x10262b4f out of table"); return;
  }
  /* 10262b56 mov edi, edi */
  EDI = (EDI);
L_10262b68:;
  /* 10262b68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262b6b pop esi */
  ESI = (pop32());
  /* 10262b6c pop edi */
  EDI = (pop32());
  /* 10262b6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262b6e ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262b6f nop  */
  /* nop */
L_10262b70:;
  /* 10262b70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10262b72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10262b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262b77 pop esi */
  ESI = (pop32());
  /* 10262b78 pop edi */
  EDI = (pop32());
  /* 10262b79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262b7a ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262b7b nop  */
  /* nop */
L_10262b7c:;
  /* 10262b7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10262b7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10262b80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10262b83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10262b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262b89 pop esi */
  ESI = (pop32());
  /* 10262b8a pop edi */
  EDI = (pop32());
  /* 10262b8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262b8c ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262b8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10262b90:;
  /* 10262b90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10262b92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10262b94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10262b97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10262b9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10262b9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10262ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262ba3 pop esi */
  ESI = (pop32());
  /* 10262ba4 pop edi */
  EDI = (pop32());
  /* 10262ba5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262ba6 ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262ba7 nop  */
  /* nop */
L_10262ba8:;
  /* 10262ba8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10262bac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10262bb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10262bb6 jne 0x10262bdc */
  if (!C.zf) goto L_10262bdc;
  /* 10262bb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262bbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10262bbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262bc1 jb 0x10262bd0 */
  if (C.cf) goto L_10262bd0;
  /* 10262bc3 std  */
  C.df=1;
  /* 10262bc4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262bc6 cld  */
  C.df=0;
  /* 10262bc7 jmp dword ptr [edx*4 + 0x10262cf0] */
  switch (EDX) {
    case 0: goto L_10262d00;
    case 1: goto L_10262d08;
    case 2: goto L_10262d18;
    case 3: goto L_10262d2c;
    default: x86_unimpl("switch@0x10262bc7 out of table"); return;
  }
  /* 10262bce mov edi, edi */
  EDI = (EDI);
L_10262bd0:;
  /* 10262bd0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10262bd2 jmp dword ptr [ecx*4 + 0x10262ca0] */
  switch (ECX) {
    case 0: goto L_10262ce7;
    default: x86_unimpl("switch@0x10262bd2 out of table"); return;
  }
  /* 10262bd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10262bdc:;
  /* 10262bdc mov eax, edi */
  EAX = (EDI);
  /* 10262bde mov edx, 3 */
  EDX = (0x3u);
  /* 10262be3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262be6 jb 0x10262bf4 */
  if (C.cf) goto L_10262bf4;
  /* 10262be8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10262beb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262bed jmp dword ptr [eax*4 + 0x10262bf8] */
  switch (EAX) {
    case 1: goto L_10262c08;
    case 2: goto L_10262c28;
    case 3: goto L_10262c50;
    default: x86_unimpl("switch@0x10262bed out of table"); return;
  }
L_10262bf4:;
  /* 10262bf4 jmp dword ptr [ecx*4 + 0x10262cf0] */
  switch (ECX) {
    case 0: goto L_10262d00;
    case 1: goto L_10262d08;
    case 2: goto L_10262d18;
    case 3: goto L_10262d2c;
    default: x86_unimpl("switch@0x10262bf4 out of table"); return;
  }
  /* 10262bfb nop  */
  /* nop */
L_10262c08:;
  /* 10262c08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10262c0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10262c0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10262c10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10262c11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262c14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10262c15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262c18 jb 0x10262bd0 */
  if (C.cf) goto L_10262bd0;
  /* 10262c1a std  */
  C.df=1;
  /* 10262c1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262c1d cld  */
  C.df=0;
  /* 10262c1e jmp dword ptr [edx*4 + 0x10262cf0] */
  switch (EDX) {
    case 0: goto L_10262d00;
    case 1: goto L_10262d08;
    case 2: goto L_10262d18;
    case 3: goto L_10262d2c;
    default: x86_unimpl("switch@0x10262c1e out of table"); return;
  }
  /* 10262c25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10262c28:;
  /* 10262c28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10262c2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10262c2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10262c30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10262c33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262c36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10262c39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262c3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262c3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262c42 jb 0x10262bd0 */
  if (C.cf) goto L_10262bd0;
  /* 10262c44 std  */
  C.df=1;
  /* 10262c45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262c47 cld  */
  C.df=0;
  /* 10262c48 jmp dword ptr [edx*4 + 0x10262cf0] */
  switch (EDX) {
    case 0: goto L_10262d00;
    case 1: goto L_10262d08;
    case 2: goto L_10262d18;
    case 3: goto L_10262d2c;
    default: x86_unimpl("switch@0x10262c48 out of table"); return;
  }
  /* 10262c4f nop  */
  /* nop */
L_10262c50:;
  /* 10262c50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10262c53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10262c55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10262c58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10262c5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10262c5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10262c61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10262c64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10262c67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262c6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262c6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262c70 jb 0x10262bd0 */
  if (C.cf) goto L_10262bd0;
  /* 10262c76 std  */
  C.df=1;
  /* 10262c77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10262c79 cld  */
  C.df=0;
  /* 10262c7a jmp dword ptr [edx*4 + 0x10262cf0] */
  switch (EDX) {
    case 0: goto L_10262d00;
    case 1: goto L_10262d08;
    case 2: goto L_10262d18;
    case 3: goto L_10262d2c;
    default: x86_unimpl("switch@0x10262c7a out of table"); return;
  }
  /* 10262c81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10262c84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10262c85 sub al, 0x26 */
  { uint32_t _a=(AL),_b=(0x26u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10262c87 adc byte ptr [esp + ebp + 0x2cb41026], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + EBP*1 + 0x2cb41026))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EBP*1 + 0x2cb41026), (_r)); fl_add(_a,_b,_r,8); }
  /* 10262c8e adc byte ptr es:[esp + ebp + 0x2cc41026], bh */
  { uint32_t _a=(r8((uint32_t)(ESP + EBP*1 + 0x2cc41026))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EBP*1 + 0x2cc41026), (_r)); fl_add(_a,_b,_r,8); }
  /* 10262c96 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10262c99 sub al, 0x26 */
  { uint32_t _a=(AL),_b=(0x26u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10262c9b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10262c9d sub al, 0x26 */
  { uint32_t _a=(AL),_b=(0x26u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10262ca4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10262ca8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10262cac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10262cb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10262cb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10262cb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10262cbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10262cc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10262cc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10262cc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10262ccc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10262cd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10262cd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10262cd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10262cdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10262ce3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10262ce5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10262ce7:;
  /* 10262ce7 jmp dword ptr [edx*4 + 0x10262cf0] */
  switch (EDX) {
    case 0: goto L_10262d00;
    case 1: goto L_10262d08;
    case 2: goto L_10262d18;
    case 3: goto L_10262d2c;
    default: x86_unimpl("switch@0x10262ce7 out of table"); return;
  }
  /* 10262cee mov edi, edi */
  EDI = (EDI);
L_10262d00:;
  /* 10262d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262d03 pop esi */
  ESI = (pop32());
  /* 10262d04 pop edi */
  EDI = (pop32());
  /* 10262d05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262d06 ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262d07 nop  */
  /* nop */
L_10262d08:;
  /* 10262d08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10262d0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10262d0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262d11 pop esi */
  ESI = (pop32());
  /* 10262d12 pop edi */
  EDI = (pop32());
  /* 10262d13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262d14 ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262d15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10262d18:;
  /* 10262d18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10262d1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10262d1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10262d21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10262d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262d27 pop esi */
  ESI = (pop32());
  /* 10262d28 pop edi */
  EDI = (pop32());
  /* 10262d29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262d2a ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
  /* 10262d2b nop  */
  /* nop */
L_10262d2c:;
  /* 10262d2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10262d2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10262d32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10262d35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10262d38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10262d3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10262d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262d41 pop esi */
  ESI = (pop32());
  /* 10262d42 pop edi */
  EDI = (pop32());
  /* 10262d43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10262d44 ret  */
  ESPCHK(0x10262a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d45 @ 0x10262d45 (62 bytes, 15 insns) */
void f_10262d45(void) {
  FTRACE(0x10262d45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262d45 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10262d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10262d4c push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 10262d52 call dword ptr [0x10265038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265038))), 0x10262d58u);
  /* 10262d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262d5a mov dword ptr [0x102667fc], eax */
  w32((uint32_t)(0x102667fc), (EAX));
  /* 10262d5f jne 0x10262d62 */
  if (!C.zf) goto L_10262d62;
  /* 10262d61 ret  */
  ESPCHK(0x10262d45u, _esp0);
  ESP += 4; return;
L_10262d62:;
  /* 10262d62 and dword ptr [0x102667f4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102667f4)))&(0x0u); w32((uint32_t)(0x102667f4), (_r)); fl_logic(_r,32); }
  /* 10262d69 and dword ptr [0x102667f8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102667f8)))&(0x0u); w32((uint32_t)(0x102667f8), (_r)); fl_logic(_r,32); }
  /* 10262d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10262d72 mov dword ptr [0x102667f0], eax */
  w32((uint32_t)(0x102667f0), (EAX));
  /* 10262d77 mov dword ptr [0x102667e8], 0x10 */
  w32((uint32_t)(0x102667e8), (0x10u));
  /* 10262d81 pop eax */
  EAX = (pop32());
  /* 10262d82 ret  */
  ESPCHK(0x10262d45u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d83 @ 0x10262d83 (43 bytes, 14 insns) */
void f_10262d83(void) {
  FTRACE(0x10262d83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262d83 mov eax, dword ptr [0x102667f8] */
  EAX = (r32((uint32_t)(0x102667f8)));
  /* 10262d88 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10262d8b mov eax, dword ptr [0x102667fc] */
  EAX = (r32((uint32_t)(0x102667fc)));
  /* 10262d90 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10262d93:;
  /* 10262d93 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262d95 jae 0x10262dab */
  if (!C.cf) goto L_10262dab;
  /* 10262d97 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10262d9b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262d9e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262da4 jb 0x10262dad */
  if (C.cf) goto L_10262dad;
  /* 10262da6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262da9 jmp 0x10262d93 */
  goto L_10262d93;
L_10262dab:;
  /* 10262dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10262dad:;
  /* 10262dad ret  */
  ESPCHK(0x10262d83u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dae @ 0x10262dae (811 bytes, 264 insns) */
void f_10262dae(void) {
  FTRACE(0x10262daeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10262dae push ebp */
  push32((uint32_t)(EBP));
  /* 10262daf mov ebp, esp */
  EBP = (ESP);
  /* 10262db1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262db4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10262db7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262dba push ebx */
  push32((uint32_t)(EBX));
  /* 10262dbb push esi */
  push32((uint32_t)(ESI));
  /* 10262dbc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10262dbf mov esi, edx */
  ESI = (EDX);
  /* 10262dc1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262dc4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10262dc7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262dca push edi */
  push32((uint32_t)(EDI));
  /* 10262dcb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10262dce mov ecx, esi */
  ECX = (ESI);
  /* 10262dd0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10262dd3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10262dd9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10262dda mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10262ddd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10262de4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10262de7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10262dea mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10262ded test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10262df0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10262df3 jne 0x10262e74 */
  if (!C.zf) goto L_10262e74;
  /* 10262df5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10262df8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10262dfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10262dfb pop edi */
  EDI = (pop32());
  /* 10262dfc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10262dff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262e01 jbe 0x10262e06 */
  if ((C.cf||C.zf)) goto L_10262e06;
  /* 10262e03 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10262e06:;
  /* 10262e06 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10262e0a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262e0e jne 0x10262e58 */
  if (!C.zf) goto L_10262e58;
  /* 10262e10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10262e13 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262e16 jae 0x10262e34 */
  if (!C.cf) goto L_10262e34;
  /* 10262e18 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10262e1d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10262e1f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10262e23 not edi */
  EDI = (~(EDI));
  /* 10262e25 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10262e29 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10262e2b jne 0x10262e58 */
  if (!C.zf) goto L_10262e58;
  /* 10262e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262e30 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10262e32 jmp 0x10262e58 */
  goto L_10262e58;
L_10262e34:;
  /* 10262e34 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262e37 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10262e3c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10262e3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10262e41 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10262e45 not edi */
  EDI = (~(EDI));
  /* 10262e47 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10262e4e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10262e50 jne 0x10262e58 */
  if (!C.zf) goto L_10262e58;
  /* 10262e52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262e55 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10262e58:;
  /* 10262e58 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10262e5c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10262e60 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10262e63 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10262e67 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10262e6b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262e6e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10262e71 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10262e74:;
  /* 10262e74 mov edi, ebx */
  EDI = (EBX);
  /* 10262e76 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10262e79 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10262e7a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262e7d jbe 0x10262e82 */
  if ((C.cf||C.zf)) goto L_10262e82;
  /* 10262e7f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10262e81 pop edi */
  EDI = (pop32());
L_10262e82:;
  /* 10262e82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10262e85 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10262e88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10262e8b jne 0x10262f31 */
  if (!C.zf) goto L_10262f31;
  /* 10262e91 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10262e94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10262e97 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10262e9a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10262e9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10262e9f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10262ea0 pop edx */
  EDX = (pop32());
  /* 10262ea1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ea3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10262ea6 jbe 0x10262ead */
  if ((C.cf||C.zf)) goto L_10262ead;
  /* 10262ea8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10262eab mov ecx, edx */
  ECX = (EDX);
L_10262ead:;
  /* 10262ead add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262eb0 mov edi, ebx */
  EDI = (EBX);
  /* 10262eb2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10262eb5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10262eb8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10262eb9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ebb jbe 0x10262ebf */
  if ((C.cf||C.zf)) goto L_10262ebf;
  /* 10262ebd mov edi, edx */
  EDI = (EDX);
L_10262ebf:;
  /* 10262ebf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ec1 je 0x10262f2e */
  if (C.zf) goto L_10262f2e;
  /* 10262ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10262ec6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10262ec9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ecc jne 0x10262f16 */
  if (!C.zf) goto L_10262f16;
  /* 10262ece mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10262ed1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262ed4 jae 0x10262ef2 */
  if (!C.cf) goto L_10262ef2;
  /* 10262ed6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10262edb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10262edd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10262ee1 not edx */
  EDX = (~(EDX));
  /* 10262ee3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10262ee7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10262ee9 jne 0x10262f16 */
  if (!C.zf) goto L_10262f16;
  /* 10262eeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262eee and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10262ef0 jmp 0x10262f16 */
  goto L_10262f16;
L_10262ef2:;
  /* 10262ef2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262ef5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10262efa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10262efc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10262eff lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10262f03 not edx */
  EDX = (~(EDX));
  /* 10262f05 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10262f0c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10262f0e jne 0x10262f16 */
  if (!C.zf) goto L_10262f16;
  /* 10262f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262f13 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10262f16:;
  /* 10262f16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10262f19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10262f1c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10262f1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10262f22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10262f25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10262f28 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10262f2b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10262f2e:;
  /* 10262f2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10262f31:;
  /* 10262f31 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262f35 jne 0x10262f40 */
  if (!C.zf) goto L_10262f40;
  /* 10262f37 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262f3a je 0x10262fc9 */
  if (C.zf) goto L_10262fc9;
L_10262f40:;
  /* 10262f40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10262f43 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10262f46 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10262f49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10262f4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10262f4f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10262f52 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10262f55 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10262f58 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10262f5b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10262f5e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10262f61 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262f64 jne 0x10262fc9 */
  if (!C.zf) goto L_10262fc9;
  /* 10262f66 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10262f6a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10262f6d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10262f70 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10262f72 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10262f76 jae 0x10262f9d */
  if (!C.cf) goto L_10262f9d;
  /* 10262f78 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10262f7c jne 0x10262f8c */
  if (!C.zf) goto L_10262f8c;
  /* 10262f7e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10262f83 mov ecx, edi */
  ECX = (EDI);
  /* 10262f85 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10262f87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262f8a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10262f8c:;
  /* 10262f8c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10262f91 mov ecx, edi */
  ECX = (EDI);
  /* 10262f93 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10262f95 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10262f99 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10262f9b jmp 0x10262fc6 */
  goto L_10262fc6;
L_10262f9d:;
  /* 10262f9d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10262fa1 jne 0x10262fb3 */
  if (!C.zf) goto L_10262fb3;
  /* 10262fa3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10262fa6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10262fab shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10262fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10262fb0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10262fb3:;
  /* 10262fb3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10262fb6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10262fbb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10262fbd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10262fc4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10262fc6:;
  /* 10262fc6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10262fc9:;
  /* 10262fc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10262fcc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10262fce mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10262fd2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10262fd4 jne 0x102630d4 */
  if (!C.zf) goto L_102630d4;
  /* 10262fda mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10262fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10262fe1 je 0x102630c6 */
  if (C.zf) goto L_102630c6;
  /* 10262fe7 mov ecx, dword ptr [0x102667ec] */
  ECX = (r32((uint32_t)(0x102667ec)));
  /* 10262fed mov edi, dword ptr [0x10265050] */
  EDI = (r32((uint32_t)(0x10265050)));
  /* 10262ff3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10262ff6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10262ff9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10262ffe push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10263003 push ebx */
  push32((uint32_t)(EBX));
  /* 10263004 push ecx */
  push32((uint32_t)(ECX));
  /* 10263005 call edi */
  call_ind((uint32_t)(EDI), 0x10263007u);
  /* 10263007 mov ecx, dword ptr [0x102667ec] */
  ECX = (r32((uint32_t)(0x102667ec)));
  /* 1026300d mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10263012 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10263017 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10263019 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1026301c mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10263021 mov ecx, dword ptr [0x102667ec] */
  ECX = (r32((uint32_t)(0x102667ec)));
  /* 10263027 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1026302a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10263032 mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10263037 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1026303a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1026303d mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10263042 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10263045 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10263049 jne 0x10263054 */
  if (!C.zf) goto L_10263054;
  /* 1026304b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1026304f mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
L_10263054:;
  /* 10263054 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263058 jne 0x102630c6 */
  if (!C.zf) goto L_102630c6;
  /* 1026305a push ebx */
  push32((uint32_t)(EBX));
  /* 1026305b push 0 */
  push32((uint32_t)(0x0u));
  /* 1026305d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10263060 call edi */
  call_ind((uint32_t)(EDI), 0x10263062u);
  /* 10263062 mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10263067 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1026306a push 0 */
  push32((uint32_t)(0x0u));
  /* 1026306c push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 10263072 call dword ptr [0x1026504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026504c))), 0x10263078u);
  /* 10263078 mov eax, dword ptr [0x102667f8] */
  EAX = (r32((uint32_t)(0x102667f8)));
  /* 1026307d mov edx, dword ptr [0x102667fc] */
  EDX = (r32((uint32_t)(0x102667fc)));
  /* 10263083 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10263086 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10263089 mov ecx, eax */
  ECX = (EAX);
  /* 1026308b mov eax, dword ptr [0x102667f4] */
  EAX = (r32((uint32_t)(0x102667f4)));
  /* 10263090 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263092 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10263096 push ecx */
  push32((uint32_t)(ECX));
  /* 10263097 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1026309a push ecx */
  push32((uint32_t)(ECX));
  /* 1026309b push eax */
  push32((uint32_t)(EAX));
  /* 1026309c call 0x10263b30 */
  push32(0x102630a1u); f_10263b30();
  /* 102630a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102630a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102630a7 dec dword ptr [0x102667f8] */
  { uint32_t _r=(r32((uint32_t)(0x102667f8)))-1; w32((uint32_t)(0x102667f8), (_r)); fl_dec(_r,32); }
  /* 102630ad cmp eax, dword ptr [0x102667f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102667f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102630b3 jbe 0x102630b8 */
  if ((C.cf||C.zf)) goto L_102630b8;
  /* 102630b5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102630b8:;
  /* 102630b8 mov ecx, dword ptr [0x102667fc] */
  ECX = (r32((uint32_t)(0x102667fc)));
  /* 102630be mov dword ptr [0x102667f0], ecx */
  w32((uint32_t)(0x102667f0), (ECX));
  /* 102630c4 jmp 0x102630c9 */
  goto L_102630c9;
L_102630c6:;
  /* 102630c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_102630c9:;
  /* 102630c9 mov dword ptr [0x102667f4], eax */
  w32((uint32_t)(0x102667f4), (EAX));
  /* 102630ce mov dword ptr [0x102667ec], esi */
  w32((uint32_t)(0x102667ec), (ESI));
L_102630d4:;
  /* 102630d4 pop edi */
  EDI = (pop32());
  /* 102630d5 pop esi */
  ESI = (pop32());
  /* 102630d6 pop ebx */
  EBX = (pop32());
  /* 102630d7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102630d8 ret  */
  ESPCHK(0x10262daeu, _esp0);
  ESP += 4; return;
}

/* FUN_100030d9 @ 0x102630d9 (777 bytes, 275 insns) */
void f_102630d9(void) {
  FTRACE(0x102630d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102630d9 push ebp */
  push32((uint32_t)(EBP));
  /* 102630da mov ebp, esp */
  EBP = (ESP);
  /* 102630dc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102630df mov eax, dword ptr [0x102667f8] */
  EAX = (r32((uint32_t)(0x102667f8)));
  /* 102630e4 mov edx, dword ptr [0x102667fc] */
  EDX = (r32((uint32_t)(0x102667fc)));
  /* 102630ea push ebx */
  push32((uint32_t)(EBX));
  /* 102630eb push esi */
  push32((uint32_t)(ESI));
  /* 102630ec lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102630ef push edi */
  push32((uint32_t)(EDI));
  /* 102630f0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102630f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102630f6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102630f9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 102630fc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 102630ff mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10263102 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10263105 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10263106 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263109 jge 0x10263119 */
  if ((C.sf==C.of)) goto L_10263119;
  /* 1026310b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1026310e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10263110 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10263114 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10263117 jmp 0x10263129 */
  goto L_10263129;
L_10263119:;
  /* 10263119 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1026311c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1026311f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10263121 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10263123 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10263126 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10263129:;
  /* 10263129 mov eax, dword ptr [0x102667f0] */
  EAX = (r32((uint32_t)(0x102667f0)));
  /* 1026312e mov ebx, eax */
  EBX = (EAX);
  /* 10263130 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263132 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10263135 jae 0x10263150 */
  if (!C.cf) goto L_10263150;
L_10263137:;
  /* 10263137 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1026313a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1026313c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1026313f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10263141 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10263143 jne 0x10263150 */
  if (!C.zf) goto L_10263150;
  /* 10263145 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263148 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026314b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1026314e jb 0x10263137 */
  if (C.cf) goto L_10263137;
L_10263150:;
  /* 10263150 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263153 jne 0x102631ce */
  if (!C.zf) goto L_102631ce;
  /* 10263155 mov ebx, edx */
  EBX = (EDX);
L_10263157:;
  /* 10263157 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263159 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1026315c jae 0x10263173 */
  if (!C.cf) goto L_10263173;
  /* 1026315e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10263161 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10263163 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10263166 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10263168 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1026316a jne 0x10263171 */
  if (!C.zf) goto L_10263171;
  /* 1026316c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1026316f jmp 0x10263157 */
  goto L_10263157;
L_10263171:;
  /* 10263171 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10263173:;
  /* 10263173 jne 0x102631ce */
  if (!C.zf) goto L_102631ce;
L_10263175:;
  /* 10263175 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263178 jae 0x1026318b */
  if (!C.cf) goto L_1026318b;
  /* 1026317a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026317e jne 0x10263188 */
  if (!C.zf) goto L_10263188;
  /* 10263180 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263183 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10263186 jmp 0x10263175 */
  goto L_10263175;
L_10263188:;
  /* 10263188 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1026318b:;
  /* 1026318b jne 0x102631b3 */
  if (!C.zf) goto L_102631b3;
  /* 1026318d mov ebx, edx */
  EBX = (EDX);
L_1026318f:;
  /* 1026318f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263191 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10263194 jae 0x102631a3 */
  if (!C.cf) goto L_102631a3;
  /* 10263196 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026319a jne 0x102631a1 */
  if (!C.zf) goto L_102631a1;
  /* 1026319c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1026319f jmp 0x1026318f */
  goto L_1026318f;
L_102631a1:;
  /* 102631a1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102631a3:;
  /* 102631a3 jne 0x102631b3 */
  if (!C.zf) goto L_102631b3;
  /* 102631a5 call 0x102633e2 */
  push32(0x102631aau); f_102633e2();
  /* 102631aa mov ebx, eax */
  EBX = (EAX);
  /* 102631ac test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102631ae mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102631b1 je 0x102631c7 */
  if (C.zf) goto L_102631c7;
L_102631b3:;
  /* 102631b3 push ebx */
  push32((uint32_t)(EBX));
  /* 102631b4 call 0x10263493 */
  push32(0x102631b9u); f_10263493();
  /* 102631b9 pop ecx */
  ECX = (pop32());
  /* 102631ba mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 102631bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 102631bf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102631c2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102631c5 jne 0x102631ce */
  if (!C.zf) goto L_102631ce;
L_102631c7:;
  /* 102631c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102631c9 jmp 0x102633dd */
  goto L_102633dd;
L_102631ce:;
  /* 102631ce mov dword ptr [0x102667f0], ebx */
  w32((uint32_t)(0x102667f0), (EBX));
  /* 102631d4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102631d7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102631d9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102631dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102631df je 0x102631f5 */
  if (C.zf) goto L_102631f5;
  /* 102631e1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102631e8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102631ec and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102631ef and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102631f1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102631f3 jne 0x1026322c */
  if (!C.zf) goto L_1026322c;
L_102631f5:;
  /* 102631f5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 102631fb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 102631fe and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10263201 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10263204 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10263208 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1026320b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1026320d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10263210 jne 0x10263229 */
  if (!C.zf) goto L_10263229;
L_10263212:;
  /* 10263212 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10263218 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1026321b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1026321e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263221 mov edi, esi */
  EDI = (ESI);
  /* 10263223 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10263225 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10263227 je 0x10263212 */
  if (C.zf) goto L_10263212;
L_10263229:;
  /* 10263229 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1026322c:;
  /* 1026322c mov ecx, edx */
  ECX = (EDX);
  /* 1026322e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10263230 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10263236 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1026323d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10263240 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10263244 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10263246 jne 0x10263255 */
  if (!C.zf) goto L_10263255;
  /* 10263248 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1026324f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10263251 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10263254 pop edi */
  EDI = (pop32());
L_10263255:;
  /* 10263255 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10263257 jl 0x1026325e */
  if ((C.sf!=C.of)) goto L_1026325e;
  /* 10263259 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1026325b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1026325c jmp 0x10263255 */
  goto L_10263255;
L_1026325e:;
  /* 1026325e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10263261 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10263265 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10263267 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026326a mov esi, ecx */
  ESI = (ECX);
  /* 1026326c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1026326f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10263272 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10263273 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263276 jle 0x1026327b */
  if ((C.zf||C.sf!=C.of)) goto L_1026327b;
  /* 10263278 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1026327a pop esi */
  ESI = (pop32());
L_1026327b:;
  /* 1026327b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026327d je 0x10263390 */
  if (C.zf) goto L_10263390;
  /* 10263283 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10263286 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263289 jne 0x102632ec */
  if (!C.zf) goto L_102632ec;
  /* 1026328b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026328e jge 0x102632bb */
  if ((C.sf==C.of)) goto L_102632bb;
  /* 10263290 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10263295 mov ecx, edi */
  ECX = (EDI);
  /* 10263297 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10263299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1026329c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102632a0 not ebx */
  EBX = (~(EBX));
  /* 102632a2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102632a5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 102632a9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 102632ad dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102632af jne 0x102632e9 */
  if (!C.zf) goto L_102632e9;
  /* 102632b1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102632b4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102632b7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102632b9 jmp 0x102632ec */
  goto L_102632ec;
L_102632bb:;
  /* 102632bb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102632be mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102632c3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102632c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102632c8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102632cc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102632d3 not ebx */
  EBX = (~(EBX));
  /* 102632d5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102632d7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102632d9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102632dc jne 0x102632e9 */
  if (!C.zf) goto L_102632e9;
  /* 102632de mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102632e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102632e4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102632e7 jmp 0x102632ec */
  goto L_102632ec;
L_102632e9:;
  /* 102632e9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102632ec:;
  /* 102632ec mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102632ef mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102632f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102632f6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102632f9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102632fc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102632ff mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10263302 je 0x1026339c */
  if (C.zf) goto L_1026339c;
  /* 10263308 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1026330b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1026330f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10263312 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10263315 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10263318 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1026331b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1026331e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10263321 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10263324 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263327 jne 0x1026338d */
  if (!C.zf) goto L_1026338d;
  /* 10263329 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1026332d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263330 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10263333 jge 0x1026335e */
  if ((C.sf==C.of)) goto L_1026335e;
  /* 10263335 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10263337 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1026333b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1026333f jne 0x1026334c */
  if (!C.zf) goto L_1026334c;
  /* 10263341 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10263346 mov ecx, esi */
  ECX = (ESI);
  /* 10263348 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1026334a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1026334c:;
  /* 1026334c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10263351 mov ecx, esi */
  ECX = (ESI);
  /* 10263353 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10263355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10263358 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1026335c jmp 0x1026338d */
  goto L_1026338d;
L_1026335e:;
  /* 1026335e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10263360 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10263364 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10263368 jne 0x10263377 */
  if (!C.zf) goto L_10263377;
  /* 1026336a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1026336d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10263372 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10263374 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10263377:;
  /* 10263377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1026337a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10263381 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10263384 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10263389 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1026338b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1026338d:;
  /* 1026338d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10263390:;
  /* 10263390 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10263392 je 0x1026339f */
  if (C.zf) goto L_1026339f;
  /* 10263394 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10263396 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1026339a jmp 0x1026339f */
  goto L_1026339f;
L_1026339c:;
  /* 1026339c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1026339f:;
  /* 1026339f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102633a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102633a4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 102633a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102633a9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 102633ad mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102633b0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102633b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102633b4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102633b7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102633b9 jne 0x102633d5 */
  if (!C.zf) goto L_102633d5;
  /* 102633bb cmp ebx, dword ptr [0x102667f4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102667f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102633c1 jne 0x102633d5 */
  if (!C.zf) goto L_102633d5;
  /* 102633c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102633c6 cmp ecx, dword ptr [0x102667ec] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102667ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102633cc jne 0x102633d5 */
  if (!C.zf) goto L_102633d5;
  /* 102633ce and dword ptr [0x102667f4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102667f4)))&(0x0u); w32((uint32_t)(0x102667f4), (_r)); fl_logic(_r,32); }
L_102633d5:;
  /* 102633d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102633d8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102633da lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102633dd:;
  /* 102633dd pop edi */
  EDI = (pop32());
  /* 102633de pop esi */
  ESI = (pop32());
  /* 102633df pop ebx */
  EBX = (pop32());
  /* 102633e0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102633e1 ret  */
  ESPCHK(0x102630d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100033e2 @ 0x102633e2 (177 bytes, 53 insns) */
void f_102633e2(void) {
  FTRACE(0x102633e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102633e2 mov eax, dword ptr [0x102667f8] */
  EAX = (r32((uint32_t)(0x102667f8)));
  /* 102633e7 mov ecx, dword ptr [0x102667e8] */
  ECX = (r32((uint32_t)(0x102667e8)));
  /* 102633ed push esi */
  push32((uint32_t)(ESI));
  /* 102633ee push edi */
  push32((uint32_t)(EDI));
  /* 102633ef xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102633f1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102633f3 jne 0x10263425 */
  if (!C.zf) goto L_10263425;
  /* 102633f5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102633f9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102633fc push eax */
  push32((uint32_t)(EAX));
  /* 102633fd push dword ptr [0x102667fc] */
  push32((uint32_t)(r32((uint32_t)(0x102667fc))));
  /* 10263403 push edi */
  push32((uint32_t)(EDI));
  /* 10263404 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026340a call dword ptr [0x10265024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265024))), 0x10263410u);
  /* 10263410 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263412 je 0x10263475 */
  if (C.zf) goto L_10263475;
  /* 10263414 add dword ptr [0x102667e8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102667e8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102667e8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1026341b mov dword ptr [0x102667fc], eax */
  w32((uint32_t)(0x102667fc), (EAX));
  /* 10263420 mov eax, dword ptr [0x102667f8] */
  EAX = (r32((uint32_t)(0x102667f8)));
L_10263425:;
  /* 10263425 mov ecx, dword ptr [0x102667fc] */
  ECX = (r32((uint32_t)(0x102667fc)));
  /* 1026342b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10263430 push 8 */
  push32((uint32_t)(0x8u));
  /* 10263432 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10263435 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026343b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1026343e call dword ptr [0x10265038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265038))), 0x10263444u);
  /* 10263444 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263446 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10263449 je 0x10263475 */
  if (C.zf) goto L_10263475;
  /* 1026344b push 4 */
  push32((uint32_t)(0x4u));
  /* 1026344d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10263452 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10263457 push edi */
  push32((uint32_t)(EDI));
  /* 10263458 call dword ptr [0x10265028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265028))), 0x1026345eu);
  /* 1026345e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263460 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10263463 jne 0x10263479 */
  if (!C.zf) goto L_10263479;
  /* 10263465 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10263468 push edi */
  push32((uint32_t)(EDI));
  /* 10263469 push dword ptr [0x10266a28] */
  push32((uint32_t)(r32((uint32_t)(0x10266a28))));
  /* 1026346f call dword ptr [0x1026504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026504c))), 0x10263475u);
L_10263475:;
  /* 10263475 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10263477 jmp 0x10263490 */
  goto L_10263490;
L_10263479:;
  /* 10263479 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1026347d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1026347f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10263482 inc dword ptr [0x102667f8] */
  { uint32_t _r=(r32((uint32_t)(0x102667f8)))+1; w32((uint32_t)(0x102667f8), (_r)); fl_inc(_r,32); }
  /* 10263488 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1026348b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1026348e mov eax, esi */
  EAX = (ESI);
L_10263490:;
  /* 10263490 pop edi */
  EDI = (pop32());
  /* 10263491 pop esi */
  ESI = (pop32());
  /* 10263492 ret  */
  ESPCHK(0x102633e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003493 @ 0x10263493 (251 bytes, 85 insns) */
void f_10263493(void) {
  FTRACE(0x10263493u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263493 push ebp */
  push32((uint32_t)(EBP));
  /* 10263494 mov ebp, esp */
  EBP = (ESP);
  /* 10263496 push ecx */
  push32((uint32_t)(ECX));
  /* 10263497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1026349a push ebx */
  push32((uint32_t)(EBX));
  /* 1026349b push esi */
  push32((uint32_t)(ESI));
  /* 1026349c push edi */
  push32((uint32_t)(EDI));
  /* 1026349d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102634a0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102634a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102634a5:;
  /* 102634a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102634a7 jl 0x102634ae */
  if ((C.sf!=C.of)) goto L_102634ae;
  /* 102634a9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102634ab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102634ac jmp 0x102634a5 */
  goto L_102634a5;
L_102634ae:;
  /* 102634ae mov eax, ebx */
  EAX = (EBX);
  /* 102634b0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102634b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102634b8 pop edx */
  EDX = (pop32());
  /* 102634b9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102634c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102634c3:;
  /* 102634c3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102634c6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102634c9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102634cc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102634cd jne 0x102634c3 */
  if (!C.zf) goto L_102634c3;
  /* 102634cf mov edi, ebx */
  EDI = (EBX);
  /* 102634d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102634d3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102634d6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102634d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102634de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102634e3 push edi */
  push32((uint32_t)(EDI));
  /* 102634e4 call dword ptr [0x10265028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265028))), 0x102634eau);
  /* 102634ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102634ec jne 0x102634f6 */
  if (!C.zf) goto L_102634f6;
  /* 102634ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102634f1 jmp 0x10263589 */
  goto L_10263589;
L_102634f6:;
  /* 102634f6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102634fc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102634fe ja 0x1026353c */
  if ((!C.cf&&!C.zf)) goto L_1026353c;
  /* 10263500 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10263503:;
  /* 10263503 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10263507 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1026350e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10263514 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1026351b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1026351d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10263523 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10263526 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10263530 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263535 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10263538 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026353a jbe 0x10263503 */
  if ((C.cf||C.zf)) goto L_10263503;
L_1026353c:;
  /* 1026353c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1026353f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10263542 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263547 push 1 */
  push32((uint32_t)(0x1u));
  /* 10263549 pop edi */
  EDI = (pop32());
  /* 1026354a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1026354d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10263550 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10263553 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10263556 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10263559 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1026355e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10263565 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10263568 mov cl, al */
  CL = (AL);
  /* 1026356a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1026356c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1026356e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263571 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10263574 jne 0x10263579 */
  if (!C.zf) goto L_10263579;
  /* 10263576 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10263579:;
  /* 10263579 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1026357e mov ecx, ebx */
  ECX = (EBX);
  /* 10263580 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10263582 not edx */
  EDX = (~(EDX));
  /* 10263584 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10263587 mov eax, ebx */
  EAX = (EBX);
L_10263589:;
  /* 10263589 pop edi */
  EDI = (pop32());
  /* 1026358a pop esi */
  ESI = (pop32());
  /* 1026358b pop ebx */
  EBX = (pop32());
  /* 1026358c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1026358d ret  */
  ESPCHK(0x10263493u, _esp0);
  ESP += 4; return;
}

/* FUN_1000358e @ 0x1026358e (137 bytes, 50 insns) */
void f_1026358e(void) {
  FTRACE(0x1026358eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026358e push ebx */
  push32((uint32_t)(EBX));
  /* 1026358f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10263591 cmp dword ptr [0x102667ac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102667ac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263597 push esi */
  push32((uint32_t)(ESI));
  /* 10263598 push edi */
  push32((uint32_t)(EDI));
  /* 10263599 jne 0x102635dd */
  if (!C.zf) goto L_102635dd;
  /* 1026359b push 0x10265448 */
  push32((uint32_t)(0x10265448u));
  /* 102635a0 call dword ptr [0x1026501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026501c))), 0x102635a6u);
  /* 102635a6 mov edi, eax */
  EDI = (EAX);
  /* 102635a8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102635aa je 0x10263613 */
  if (C.zf) goto L_10263613;
  /* 102635ac mov esi, dword ptr [0x10265020] */
  ESI = (r32((uint32_t)(0x10265020)));
  /* 102635b2 push 0x1026543c */
  push32((uint32_t)(0x1026543cu));
  /* 102635b7 push edi */
  push32((uint32_t)(EDI));
  /* 102635b8 call esi */
  call_ind((uint32_t)(ESI), 0x102635bau);
  /* 102635ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102635bc mov dword ptr [0x102667ac], eax */
  w32((uint32_t)(0x102667ac), (EAX));
  /* 102635c1 je 0x10263613 */
  if (C.zf) goto L_10263613;
  /* 102635c3 push 0x1026542c */
  push32((uint32_t)(0x1026542cu));
  /* 102635c8 push edi */
  push32((uint32_t)(EDI));
  /* 102635c9 call esi */
  call_ind((uint32_t)(ESI), 0x102635cbu);
  /* 102635cb push 0x10265418 */
  push32((uint32_t)(0x10265418u));
  /* 102635d0 push edi */
  push32((uint32_t)(EDI));
  /* 102635d1 mov dword ptr [0x102667b0], eax */
  w32((uint32_t)(0x102667b0), (EAX));
  /* 102635d6 call esi */
  call_ind((uint32_t)(ESI), 0x102635d8u);
  /* 102635d8 mov dword ptr [0x102667b4], eax */
  w32((uint32_t)(0x102667b4), (EAX));
L_102635dd:;
  /* 102635dd mov eax, dword ptr [0x102667b0] */
  EAX = (r32((uint32_t)(0x102667b0)));
  /* 102635e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102635e4 je 0x102635fc */
  if (C.zf) goto L_102635fc;
  /* 102635e6 call eax */
  call_ind((uint32_t)(EAX), 0x102635e8u);
  /* 102635e8 mov ebx, eax */
  EBX = (EAX);
  /* 102635ea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102635ec je 0x102635fc */
  if (C.zf) goto L_102635fc;
  /* 102635ee mov eax, dword ptr [0x102667b4] */
  EAX = (r32((uint32_t)(0x102667b4)));
  /* 102635f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102635f5 je 0x102635fc */
  if (C.zf) goto L_102635fc;
  /* 102635f7 push ebx */
  push32((uint32_t)(EBX));
  /* 102635f8 call eax */
  call_ind((uint32_t)(EAX), 0x102635fau);
  /* 102635fa mov ebx, eax */
  EBX = (EAX);
L_102635fc:;
  /* 102635fc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10263600 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10263604 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10263608 push ebx */
  push32((uint32_t)(EBX));
  /* 10263609 call dword ptr [0x102667ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x102667ac))), 0x1026360fu);
L_1026360f:;
  /* 1026360f pop edi */
  EDI = (pop32());
  /* 10263610 pop esi */
  ESI = (pop32());
  /* 10263611 pop ebx */
  EBX = (pop32());
  /* 10263612 ret  */
  ESPCHK(0x1026358eu, _esp0);
  ESP += 4; return;
L_10263613:;
  /* 10263613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10263615 jmp 0x1026360f */
  goto L_1026360f;
}

/* _strncpy @ 0x10263620 (254 bytes, 109 insns) */
void f_10263620(void) {
  FTRACE(0x10263620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263620 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10263624 push edi */
  push32((uint32_t)(EDI));
  /* 10263625 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10263627 je 0x102636a3 */
  if (C.zf) goto L_102636a3;
  /* 10263629 push esi */
  push32((uint32_t)(ESI));
  /* 1026362a push ebx */
  push32((uint32_t)(EBX));
  /* 1026362b mov ebx, ecx */
  EBX = (ECX);
  /* 1026362d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10263631 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10263637 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1026363b jne 0x10263644 */
  if (!C.zf) goto L_10263644;
  /* 1026363d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263640 jne 0x102636b1 */
  if (!C.zf) goto L_102636b1;
  /* 10263642 jmp 0x10263665 */
  goto L_10263665;
L_10263644:;
  /* 10263644 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263646 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10263647 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263649 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1026364a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1026364b je 0x10263672 */
  if (C.zf) goto L_10263672;
  /* 1026364d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1026364f je 0x1026367a */
  if (C.zf) goto L_1026367a;
  /* 10263651 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10263657 jne 0x10263644 */
  if (!C.zf) goto L_10263644;
  /* 10263659 mov ebx, ecx */
  EBX = (ECX);
  /* 1026365b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1026365e jne 0x102636b1 */
  if (!C.zf) goto L_102636b1;
L_10263660:;
  /* 10263660 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10263663 je 0x10263672 */
  if (C.zf) goto L_10263672;
L_10263665:;
  /* 10263665 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263667 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10263668 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1026366a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1026366b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1026366d je 0x1026369e */
  if (C.zf) goto L_1026369e;
  /* 1026366f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10263670 jne 0x10263665 */
  if (!C.zf) goto L_10263665;
L_10263672:;
  /* 10263672 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10263676 pop ebx */
  EBX = (pop32());
  /* 10263677 pop esi */
  ESI = (pop32());
  /* 10263678 pop edi */
  EDI = (pop32());
  /* 10263679 ret  */
  ESPCHK(0x10263620u, _esp0);
  ESP += 4; return;
L_1026367a:;
  /* 1026367a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10263680 je 0x10263694 */
  if (C.zf) goto L_10263694;
L_10263682:;
  /* 10263682 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263684 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10263685 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10263686 je 0x10263716 */
  if (C.zf) goto L_10263716;
  /* 1026368c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10263692 jne 0x10263682 */
  if (!C.zf) goto L_10263682;
L_10263694:;
  /* 10263694 mov ebx, ecx */
  EBX = (ECX);
  /* 10263696 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263699 jne 0x10263707 */
  if (!C.zf) goto L_10263707;
L_1026369b:;
  /* 1026369b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1026369d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1026369e:;
  /* 1026369e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1026369f jne 0x1026369b */
  if (!C.zf) goto L_1026369b;
  /* 102636a1 pop ebx */
  EBX = (pop32());
  /* 102636a2 pop esi */
  ESI = (pop32());
L_102636a3:;
  /* 102636a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102636a7 pop edi */
  EDI = (pop32());
  /* 102636a8 ret  */
  ESPCHK(0x10263620u, _esp0);
  ESP += 4; return;
L_102636a9:;
  /* 102636a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102636ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102636ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102636af je 0x10263660 */
  if (C.zf) goto L_10263660;
L_102636b1:;
  /* 102636b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102636b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102636b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102636ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102636bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102636bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102636c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102636c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102636c9 je 0x102636a9 */
  if (C.zf) goto L_102636a9;
  /* 102636cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102636cd je 0x102636fb */
  if (C.zf) goto L_102636fb;
  /* 102636cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102636d1 je 0x102636f1 */
  if (C.zf) goto L_102636f1;
  /* 102636d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102636d9 je 0x102636e7 */
  if (C.zf) goto L_102636e7;
  /* 102636db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102636e1 jne 0x102636a9 */
  if (!C.zf) goto L_102636a9;
  /* 102636e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102636e5 jmp 0x102636ff */
  goto L_102636ff;
L_102636e7:;
  /* 102636e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102636ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102636ef jmp 0x102636ff */
  goto L_102636ff;
L_102636f1:;
  /* 102636f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102636f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102636f9 jmp 0x102636ff */
  goto L_102636ff;
L_102636fb:;
  /* 102636fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102636fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102636ff:;
  /* 102636ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10263704 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10263705 je 0x10263711 */
  if (C.zf) goto L_10263711;
L_10263707:;
  /* 10263707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10263709:;
  /* 10263709 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1026370b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1026370e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1026370f jne 0x10263709 */
  if (!C.zf) goto L_10263709;
L_10263711:;
  /* 10263711 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10263714 jne 0x1026369b */
  if (!C.zf) goto L_1026369b;
L_10263716:;
  /* 10263716 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1026371a pop ebx */
  EBX = (pop32());
  /* 1026371b pop esi */
  ESI = (pop32());
  /* 1026371c pop edi */
  EDI = (pop32());
  /* 1026371d ret  */
  ESPCHK(0x10263620u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10263720 (88 bytes, 40 insns) */
void f_10263720(void) {
  FTRACE(0x10263720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263720 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10263724 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10263728 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1026372a je 0x10263773 */
  if (C.zf) goto L_10263773;
  /* 1026372c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1026372e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10263732 push edi */
  push32((uint32_t)(EDI));
  /* 10263733 mov edi, ecx */
  EDI = (ECX);
  /* 10263735 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263738 jb 0x10263767 */
  if (C.cf) goto L_10263767;
  /* 1026373a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1026373c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1026373f je 0x10263749 */
  if (C.zf) goto L_10263749;
  /* 10263741 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10263743:;
  /* 10263743 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263745 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10263746 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10263747 jne 0x10263743 */
  if (!C.zf) goto L_10263743;
L_10263749:;
  /* 10263749 mov ecx, eax */
  ECX = (EAX);
  /* 1026374b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1026374e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263750 mov ecx, eax */
  ECX = (EAX);
  /* 10263752 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10263755 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263757 mov ecx, edx */
  ECX = (EDX);
  /* 10263759 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1026375c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1026375f je 0x10263767 */
  if (C.zf) goto L_10263767;
  /* 10263761 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10263763 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10263765 je 0x1026376d */
  if (C.zf) goto L_1026376d;
L_10263767:;
  /* 10263767 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263769 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1026376a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1026376b jne 0x10263767 */
  if (!C.zf) goto L_10263767;
L_1026376d:;
  /* 1026376d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10263771 pop edi */
  EDI = (pop32());
  /* 10263772 ret  */
  ESPCHK(0x10263720u, _esp0);
  ESP += 4; return;
L_10263773:;
  /* 10263773 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10263777 ret  */
  ESPCHK(0x10263720u, _esp0);
  ESP += 4; return;
}

/* FUN_10003778 @ 0x10263778 (27 bytes, 13 insns) */
void f_10263778(void) {
  FTRACE(0x10263778u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263778 mov eax, dword ptr [0x102667b8] */
  EAX = (r32((uint32_t)(0x102667b8)));
  /* 1026377d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026377f je 0x10263790 */
  if (C.zf) goto L_10263790;
  /* 10263781 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10263785 call eax */
  call_ind((uint32_t)(EAX), 0x10263787u);
  /* 10263787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10263789 pop ecx */
  ECX = (pop32());
  /* 1026378a je 0x10263790 */
  if (C.zf) goto L_10263790;
  /* 1026378c push 1 */
  push32((uint32_t)(0x1u));
  /* 1026378e pop eax */
  EAX = (pop32());
  /* 1026378f ret  */
  ESPCHK(0x10263778u, _esp0);
  ESP += 4; return;
L_10263790:;
  /* 10263790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10263792 ret  */
  ESPCHK(0x10263778u, _esp0);
  ESP += 4; return;
}

/* FUN_10003793 @ 0x10263793 (511 bytes, 193 insns) */
void f_10263793(void) {
  FTRACE(0x10263793u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263793 push ebp */
  push32((uint32_t)(EBP));
  /* 10263794 mov ebp, esp */
  EBP = (ESP);
  /* 10263796 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10263798 push 0x10265460 */
  push32((uint32_t)(0x10265460u));
  /* 1026379d push 0x10263f60 */
  push32((uint32_t)(0x10263f60u));
  /* 102637a2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102637a8 push eax */
  push32((uint32_t)(EAX));
  /* 102637a9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102637b0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102637b3 push ebx */
  push32((uint32_t)(EBX));
  /* 102637b4 push esi */
  push32((uint32_t)(ESI));
  /* 102637b5 push edi */
  push32((uint32_t)(EDI));
  /* 102637b6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102637b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102637bb cmp dword ptr [0x102667e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x102667e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102637c1 jne 0x10263809 */
  if (!C.zf) goto L_10263809;
  /* 102637c3 push edi */
  push32((uint32_t)(EDI));
  /* 102637c4 push edi */
  push32((uint32_t)(EDI));
  /* 102637c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102637c7 pop ebx */
  EBX = (pop32());
  /* 102637c8 push ebx */
  push32((uint32_t)(EBX));
  /* 102637c9 push 0x10265458 */
  push32((uint32_t)(0x10265458u));
  /* 102637ce mov esi, 0x100 */
  ESI = (0x100u);
  /* 102637d3 push esi */
  push32((uint32_t)(ESI));
  /* 102637d4 push edi */
  push32((uint32_t)(EDI));
  /* 102637d5 call dword ptr [0x10265010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265010))), 0x102637dbu);
  /* 102637db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102637dd je 0x102637e7 */
  if (C.zf) goto L_102637e7;
  /* 102637df mov dword ptr [0x102667e0], ebx */
  w32((uint32_t)(0x102667e0), (EBX));
  /* 102637e5 jmp 0x10263809 */
  goto L_10263809;
L_102637e7:;
  /* 102637e7 push edi */
  push32((uint32_t)(EDI));
  /* 102637e8 push edi */
  push32((uint32_t)(EDI));
  /* 102637e9 push ebx */
  push32((uint32_t)(EBX));
  /* 102637ea push 0x10265454 */
  push32((uint32_t)(0x10265454u));
  /* 102637ef push esi */
  push32((uint32_t)(ESI));
  /* 102637f0 push edi */
  push32((uint32_t)(EDI));
  /* 102637f1 call dword ptr [0x10265014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265014))), 0x102637f7u);
  /* 102637f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102637f9 je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 102637ff mov dword ptr [0x102667e0], 2 */
  w32((uint32_t)(0x102667e0), (0x2u));
L_10263809:;
  /* 10263809 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026380c jle 0x1026381e */
  if ((C.zf||C.sf!=C.of)) goto L_1026381e;
  /* 1026380e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10263811 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10263814 call 0x102639b7 */
  push32(0x10263819u); f_102639b7();
  /* 10263819 pop ecx */
  ECX = (pop32());
  /* 1026381a pop ecx */
  ECX = (pop32());
  /* 1026381b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1026381e:;
  /* 1026381e mov eax, dword ptr [0x102667e0] */
  EAX = (r32((uint32_t)(0x102667e0)));
  /* 10263823 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263826 jne 0x10263845 */
  if (!C.zf) goto L_10263845;
  /* 10263828 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1026382b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1026382e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10263831 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10263834 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10263837 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1026383a call dword ptr [0x10265014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265014))), 0x10263840u);
  /* 10263840 jmp 0x10263923 */
  goto L_10263923;
L_10263845:;
  /* 10263845 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263848 jne 0x10263921 */
  if (!C.zf) goto L_10263921;
  /* 1026384e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263851 jne 0x1026385b */
  if (!C.zf) goto L_1026385b;
  /* 10263853 mov eax, dword ptr [0x102667d8] */
  EAX = (r32((uint32_t)(0x102667d8)));
  /* 10263858 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1026385b:;
  /* 1026385b push edi */
  push32((uint32_t)(EDI));
  /* 1026385c push edi */
  push32((uint32_t)(EDI));
  /* 1026385d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10263860 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10263863 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10263866 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10263868 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1026386a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1026386d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1026386e push eax */
  push32((uint32_t)(EAX));
  /* 1026386f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10263872 call dword ptr [0x10265018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265018))), 0x10263878u);
  /* 10263878 mov ebx, eax */
  EBX = (EAX);
  /* 1026387a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1026387d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026387f je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 10263885 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10263888 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1026388b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1026388e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10263890 call 0x10264040 */
  push32(0x10263895u); f_10264040();
  /* 10263895 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10263898 mov eax, esp */
  EAX = (ESP);
  /* 1026389a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1026389d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102638a1 jmp 0x102638b6 */
  goto L_102638b6;
  /* 102638a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102638a5 pop eax */
  EAX = (pop32());
  /* 102638a6 ret  */
  ESPCHK(0x10263793u, _esp0);
  ESP += 4; return;
  /* 102638a7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102638aa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102638ac mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 102638af or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102638b3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102638b6:;
  /* 102638b6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102638b9 je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 102638bb push ebx */
  push32((uint32_t)(EBX));
  /* 102638bc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102638bf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102638c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102638c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102638c7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102638ca call dword ptr [0x10265018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265018))), 0x102638d0u);
  /* 102638d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102638d2 je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 102638d4 push edi */
  push32((uint32_t)(EDI));
  /* 102638d5 push edi */
  push32((uint32_t)(EDI));
  /* 102638d6 push ebx */
  push32((uint32_t)(EBX));
  /* 102638d7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102638da push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102638dd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102638e0 call dword ptr [0x10265010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265010))), 0x102638e6u);
  /* 102638e6 mov esi, eax */
  ESI = (EAX);
  /* 102638e8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102638eb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102638ed je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 102638ef test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102638f3 je 0x10263935 */
  if (C.zf) goto L_10263935;
  /* 102638f5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102638f8 je 0x102639b0 */
  if (C.zf) goto L_102639b0;
  /* 102638fe cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263901 jg 0x10263921 */
  if ((!C.zf&&C.sf==C.of)) goto L_10263921;
  /* 10263903 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10263906 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10263909 push ebx */
  push32((uint32_t)(EBX));
  /* 1026390a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1026390d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10263910 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10263913 call dword ptr [0x10265010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265010))), 0x10263919u);
  /* 10263919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1026391b jne 0x102639b0 */
  if (!C.zf) goto L_102639b0;
L_10263921:;
  /* 10263921 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10263923:;
  /* 10263923 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10263926 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10263929 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10263930 pop edi */
  EDI = (pop32());
  /* 10263931 pop esi */
  ESI = (pop32());
  /* 10263932 pop ebx */
  EBX = (pop32());
  /* 10263933 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263934 ret  */
  ESPCHK(0x10263793u, _esp0);
  ESP += 4; return;
L_10263935:;
  /* 10263935 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1026393c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1026393f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263942 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10263944 call 0x10264040 */
  push32(0x10263949u); f_10264040();
  /* 10263949 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1026394c mov ebx, esp */
  EBX = (ESP);
  /* 1026394e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10263951 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10263955 jmp 0x10263969 */
  goto L_10263969;
  /* 10263957 push 1 */
  push32((uint32_t)(0x1u));
  /* 10263959 pop eax */
  EAX = (pop32());
  /* 1026395a ret  */
  ESPCHK(0x10263793u, _esp0);
  ESP += 4; return;
  /* 1026395b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1026395e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10263960 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10263962 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10263966 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10263969:;
  /* 10263969 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026396b je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 1026396d push esi */
  push32((uint32_t)(ESI));
  /* 1026396e push ebx */
  push32((uint32_t)(EBX));
  /* 1026396f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10263972 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10263975 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10263978 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1026397b call dword ptr [0x10265010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265010))), 0x10263981u);
  /* 10263981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10263983 je 0x10263921 */
  if (C.zf) goto L_10263921;
  /* 10263985 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263988 push edi */
  push32((uint32_t)(EDI));
  /* 10263989 push edi */
  push32((uint32_t)(EDI));
  /* 1026398a jne 0x10263990 */
  if (!C.zf) goto L_10263990;
  /* 1026398c push edi */
  push32((uint32_t)(EDI));
  /* 1026398d push edi */
  push32((uint32_t)(EDI));
  /* 1026398e jmp 0x10263996 */
  goto L_10263996;
L_10263990:;
  /* 10263990 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10263993 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10263996:;
  /* 10263996 push esi */
  push32((uint32_t)(ESI));
  /* 10263997 push ebx */
  push32((uint32_t)(EBX));
  /* 10263998 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1026399d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102639a0 call dword ptr [0x1026508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026508c))), 0x102639a6u);
  /* 102639a6 mov esi, eax */
  ESI = (EAX);
  /* 102639a8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102639aa je 0x10263921 */
  if (C.zf) goto L_10263921;
L_102639b0:;
  /* 102639b0 mov eax, esi */
  EAX = (ESI);
  /* 102639b2 jmp 0x10263923 */
  goto L_10263923;
}

/* FUN_100039b7 @ 0x102639b7 (43 bytes, 20 insns) */
void f_102639b7(void) {
  FTRACE(0x102639b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102639b7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102639bb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102639bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102639c1 push esi */
  push32((uint32_t)(ESI));
  /* 102639c2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102639c5 je 0x102639d4 */
  if (C.zf) goto L_102639d4;
L_102639c7:;
  /* 102639c7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102639ca je 0x102639d4 */
  if (C.zf) goto L_102639d4;
  /* 102639cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102639cd mov esi, ecx */
  ESI = (ECX);
  /* 102639cf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102639d0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102639d2 jne 0x102639c7 */
  if (!C.zf) goto L_102639c7;
L_102639d4:;
  /* 102639d4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102639d7 pop esi */
  ESI = (pop32());
  /* 102639d8 jne 0x102639df */
  if (!C.zf) goto L_102639df;
  /* 102639da sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102639de ret  */
  ESPCHK(0x102639b7u, _esp0);
  ESP += 4; return;
L_102639df:;
  /* 102639df mov eax, edx */
  EAX = (EDX);
  /* 102639e1 ret  */
  ESPCHK(0x102639b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e2 @ 0x102639e2 (318 bytes, 123 insns) */
void f_102639e2(void) {
  FTRACE(0x102639e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102639e2 push ebp */
  push32((uint32_t)(EBP));
  /* 102639e3 mov ebp, esp */
  EBP = (ESP);
  /* 102639e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102639e7 push 0x10265478 */
  push32((uint32_t)(0x10265478u));
  /* 102639ec push 0x10263f60 */
  push32((uint32_t)(0x10263f60u));
  /* 102639f1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102639f7 push eax */
  push32((uint32_t)(EAX));
  /* 102639f8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102639ff sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263a02 push ebx */
  push32((uint32_t)(EBX));
  /* 10263a03 push esi */
  push32((uint32_t)(ESI));
  /* 10263a04 push edi */
  push32((uint32_t)(EDI));
  /* 10263a05 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10263a08 mov eax, dword ptr [0x102667e4] */
  EAX = (r32((uint32_t)(0x102667e4)));
  /* 10263a0d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10263a0f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263a11 jne 0x10263a51 */
  if (!C.zf) goto L_10263a51;
  /* 10263a13 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10263a16 push eax */
  push32((uint32_t)(EAX));
  /* 10263a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10263a19 pop esi */
  ESI = (pop32());
  /* 10263a1a push esi */
  push32((uint32_t)(ESI));
  /* 10263a1b push 0x10265458 */
  push32((uint32_t)(0x10265458u));
  /* 10263a20 push esi */
  push32((uint32_t)(ESI));
  /* 10263a21 call dword ptr [0x10265008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265008))), 0x10263a27u);
  /* 10263a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10263a29 je 0x10263a2f */
  if (C.zf) goto L_10263a2f;
  /* 10263a2b mov eax, esi */
  EAX = (ESI);
  /* 10263a2d jmp 0x10263a4c */
  goto L_10263a4c;
L_10263a2f:;
  /* 10263a2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10263a32 push eax */
  push32((uint32_t)(EAX));
  /* 10263a33 push esi */
  push32((uint32_t)(ESI));
  /* 10263a34 push 0x10265454 */
  push32((uint32_t)(0x10265454u));
  /* 10263a39 push esi */
  push32((uint32_t)(ESI));
  /* 10263a3a push ebx */
  push32((uint32_t)(EBX));
  /* 10263a3b call dword ptr [0x1026500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026500c))), 0x10263a41u);
  /* 10263a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10263a43 je 0x10263b17 */
  if (C.zf) goto L_10263b17;
  /* 10263a49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10263a4b pop eax */
  EAX = (pop32());
L_10263a4c:;
  /* 10263a4c mov dword ptr [0x102667e4], eax */
  w32((uint32_t)(0x102667e4), (EAX));
L_10263a51:;
  /* 10263a51 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263a54 jne 0x10263a7a */
  if (!C.zf) goto L_10263a7a;
  /* 10263a56 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10263a59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263a5b jne 0x10263a62 */
  if (!C.zf) goto L_10263a62;
  /* 10263a5d mov eax, dword ptr [0x102667c8] */
  EAX = (r32((uint32_t)(0x102667c8)));
L_10263a62:;
  /* 10263a62 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10263a65 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10263a68 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10263a6b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10263a6e push eax */
  push32((uint32_t)(EAX));
  /* 10263a6f call dword ptr [0x1026500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1026500c))), 0x10263a75u);
  /* 10263a75 jmp 0x10263b19 */
  goto L_10263b19;
L_10263a7a:;
  /* 10263a7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263a7d jne 0x10263b17 */
  if (!C.zf) goto L_10263b17;
  /* 10263a83 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263a86 jne 0x10263a90 */
  if (!C.zf) goto L_10263a90;
  /* 10263a88 mov eax, dword ptr [0x102667d8] */
  EAX = (r32((uint32_t)(0x102667d8)));
  /* 10263a8d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10263a90:;
  /* 10263a90 push ebx */
  push32((uint32_t)(EBX));
  /* 10263a91 push ebx */
  push32((uint32_t)(EBX));
  /* 10263a92 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10263a95 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10263a98 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10263a9b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10263a9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263a9f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10263aa2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10263aa3 push eax */
  push32((uint32_t)(EAX));
  /* 10263aa4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10263aa7 call dword ptr [0x10265018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265018))), 0x10263aadu);
  /* 10263aad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10263ab0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263ab2 je 0x10263b17 */
  if (C.zf) goto L_10263b17;
  /* 10263ab4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10263ab7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10263aba mov eax, edi */
  EAX = (EDI);
  /* 10263abc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263abf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10263ac1 call 0x10264040 */
  push32(0x10263ac6u); f_10264040();
  /* 10263ac6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10263ac9 mov esi, esp */
  ESI = (ESP);
  /* 10263acb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10263ace push edi */
  push32((uint32_t)(EDI));
  /* 10263acf push ebx */
  push32((uint32_t)(EBX));
  /* 10263ad0 push esi */
  push32((uint32_t)(ESI));
  /* 10263ad1 call 0x10263720 */
  push32(0x10263ad6u); f_10263720();
  /* 10263ad6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10263ad9 jmp 0x10263ae6 */
  goto L_10263ae6;
  /* 10263adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10263add pop eax */
  EAX = (pop32());
  /* 10263ade ret  */
  ESPCHK(0x102639e2u, _esp0);
  ESP += 4; return;
  /* 10263adf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10263ae2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10263ae4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10263ae6:;
  /* 10263ae6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10263aea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263aec je 0x10263b17 */
  if (C.zf) goto L_10263b17;
  /* 10263aee push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10263af1 push esi */
  push32((uint32_t)(ESI));
  /* 10263af2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10263af5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10263af8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10263afa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10263afd call dword ptr [0x10265018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265018))), 0x10263b03u);
  /* 10263b03 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263b05 je 0x10263b17 */
  if (C.zf) goto L_10263b17;
  /* 10263b07 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10263b0a push eax */
  push32((uint32_t)(EAX));
  /* 10263b0b push esi */
  push32((uint32_t)(ESI));
  /* 10263b0c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10263b0f call dword ptr [0x10265008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10265008))), 0x10263b15u);
  /* 10263b15 jmp 0x10263b19 */
  goto L_10263b19;
L_10263b17:;
  /* 10263b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10263b19:;
  /* 10263b19 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10263b1c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10263b1f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10263b26 pop edi */
  EDI = (pop32());
  /* 10263b27 pop esi */
  ESI = (pop32());
  /* 10263b28 pop ebx */
  EBX = (pop32());
  /* 10263b29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263b2a ret  */
  ESPCHK(0x102639e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10263b30 (664 bytes, 257 insns) [15 switch table(s)] */
void f_10263b30(void) {
  FTRACE(0x10263b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10263b31 mov ebp, esp */
  EBP = (ESP);
  /* 10263b33 push edi */
  push32((uint32_t)(EDI));
  /* 10263b34 push esi */
  push32((uint32_t)(ESI));
  /* 10263b35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10263b38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10263b3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10263b3e mov eax, ecx */
  EAX = (ECX);
  /* 10263b40 mov edx, ecx */
  EDX = (ECX);
  /* 10263b42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263b44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263b46 jbe 0x10263b50 */
  if ((C.cf||C.zf)) goto L_10263b50;
  /* 10263b48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263b4a jb 0x10263cc8 */
  if (C.cf) goto L_10263cc8;
L_10263b50:;
  /* 10263b50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10263b56 jne 0x10263b6c */
  if (!C.zf) goto L_10263b6c;
  /* 10263b58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263b5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10263b5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263b61 jb 0x10263b8c */
  if (C.cf) goto L_10263b8c;
  /* 10263b63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263b65 jmp dword ptr [edx*4 + 0x10263c78] */
  switch (EDX) {
    case 0: goto L_10263c88;
    case 1: goto L_10263c90;
    case 2: goto L_10263c9c;
    case 3: goto L_10263cb0;
    default: x86_unimpl("switch@0x10263b65 out of table"); return;
  }
L_10263b6c:;
  /* 10263b6c mov eax, edi */
  EAX = (EDI);
  /* 10263b6e mov edx, 3 */
  EDX = (0x3u);
  /* 10263b73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263b76 jb 0x10263b84 */
  if (C.cf) goto L_10263b84;
  /* 10263b78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10263b7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10263b7d jmp dword ptr [eax*4 + 0x10263b90] */
  switch (EAX) {
    case 1: goto L_10263ba0;
    case 2: goto L_10263bcc;
    case 3: goto L_10263bf0;
    default: x86_unimpl("switch@0x10263b7d out of table"); return;
  }
L_10263b84:;
  /* 10263b84 jmp dword ptr [ecx*4 + 0x10263c88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10263c88)))); return;
  /* 10263b8b nop  */
  /* nop */
L_10263b8c:;
  /* 10263b8c jmp dword ptr [ecx*4 + 0x10263c0c] */
  switch (ECX) {
    case 0: goto L_10263c6f;
    case 1: goto L_10263c5c;
    case 2: goto L_10263c54;
    case 3: goto L_10263c4c;
    case 4: goto L_10263c44;
    case 5: goto L_10263c3c;
    case 6: goto L_10263c34;
    case 7: goto L_10263c2c;
    default: x86_unimpl("switch@0x10263b8c out of table"); return;
  }
  /* 10263b93 nop  */
  /* nop */
L_10263ba0:;
  /* 10263ba0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10263ba2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263ba4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263ba6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10263ba9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10263bac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10263baf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263bb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10263bb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263bb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263bbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263bbe jb 0x10263b8c */
  if (C.cf) goto L_10263b8c;
  /* 10263bc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263bc2 jmp dword ptr [edx*4 + 0x10263c78] */
  switch (EDX) {
    case 0: goto L_10263c88;
    case 1: goto L_10263c90;
    case 2: goto L_10263c9c;
    case 3: goto L_10263cb0;
    default: x86_unimpl("switch@0x10263bc2 out of table"); return;
  }
  /* 10263bc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10263bcc:;
  /* 10263bcc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10263bce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263bd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263bd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10263bd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263bd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10263bdb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263bde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263be1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263be4 jb 0x10263b8c */
  if (C.cf) goto L_10263b8c;
  /* 10263be6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263be8 jmp dword ptr [edx*4 + 0x10263c78] */
  switch (EDX) {
    case 0: goto L_10263c88;
    case 1: goto L_10263c90;
    case 2: goto L_10263c9c;
    case 3: goto L_10263cb0;
    default: x86_unimpl("switch@0x10263be8 out of table"); return;
  }
  /* 10263bef nop  */
  /* nop */
L_10263bf0:;
  /* 10263bf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10263bf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263bf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263bf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10263bf7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263bfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10263bfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263bfe jb 0x10263b8c */
  if (C.cf) goto L_10263b8c;
  /* 10263c00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263c02 jmp dword ptr [edx*4 + 0x10263c78] */
  switch (EDX) {
    case 0: goto L_10263c88;
    case 1: goto L_10263c90;
    case 2: goto L_10263c9c;
    case 3: goto L_10263cb0;
    default: x86_unimpl("switch@0x10263c02 out of table"); return;
  }
  /* 10263c09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10263c2c:;
  /* 10263c2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10263c30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10263c34:;
  /* 10263c34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10263c38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10263c3c:;
  /* 10263c3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10263c40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10263c44:;
  /* 10263c44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10263c48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10263c4c:;
  /* 10263c4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10263c50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10263c54:;
  /* 10263c54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10263c58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10263c5c:;
  /* 10263c5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10263c60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10263c64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10263c6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263c6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10263c6f:;
  /* 10263c6f jmp dword ptr [edx*4 + 0x10263c78] */
  switch (EDX) {
    case 0: goto L_10263c88;
    case 1: goto L_10263c90;
    case 2: goto L_10263c9c;
    case 3: goto L_10263cb0;
    default: x86_unimpl("switch@0x10263c6f out of table"); return;
  }
  /* 10263c76 mov edi, edi */
  EDI = (EDI);
L_10263c88:;
  /* 10263c88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263c8b pop esi */
  ESI = (pop32());
  /* 10263c8c pop edi */
  EDI = (pop32());
  /* 10263c8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263c8e ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263c8f nop  */
  /* nop */
L_10263c90:;
  /* 10263c90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263c92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263c97 pop esi */
  ESI = (pop32());
  /* 10263c98 pop edi */
  EDI = (pop32());
  /* 10263c99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263c9a ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263c9b nop  */
  /* nop */
L_10263c9c:;
  /* 10263c9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263c9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263ca0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10263ca3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10263ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263ca9 pop esi */
  ESI = (pop32());
  /* 10263caa pop edi */
  EDI = (pop32());
  /* 10263cab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263cac ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263cad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10263cb0:;
  /* 10263cb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10263cb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10263cb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10263cb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10263cba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10263cbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10263cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263cc3 pop esi */
  ESI = (pop32());
  /* 10263cc4 pop edi */
  EDI = (pop32());
  /* 10263cc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263cc6 ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263cc7 nop  */
  /* nop */
L_10263cc8:;
  /* 10263cc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10263ccc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10263cd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10263cd6 jne 0x10263cfc */
  if (!C.zf) goto L_10263cfc;
  /* 10263cd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263cdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10263cde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263ce1 jb 0x10263cf0 */
  if (C.cf) goto L_10263cf0;
  /* 10263ce3 std  */
  C.df=1;
  /* 10263ce4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263ce6 cld  */
  C.df=0;
  /* 10263ce7 jmp dword ptr [edx*4 + 0x10263e10] */
  switch (EDX) {
    case 0: goto L_10263e20;
    case 1: goto L_10263e28;
    case 2: goto L_10263e38;
    case 3: goto L_10263e4c;
    default: x86_unimpl("switch@0x10263ce7 out of table"); return;
  }
  /* 10263cee mov edi, edi */
  EDI = (EDI);
L_10263cf0:;
  /* 10263cf0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10263cf2 jmp dword ptr [ecx*4 + 0x10263dc0] */
  switch (ECX) {
    case 0: goto L_10263e07;
    default: x86_unimpl("switch@0x10263cf2 out of table"); return;
  }
  /* 10263cf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10263cfc:;
  /* 10263cfc mov eax, edi */
  EAX = (EDI);
  /* 10263cfe mov edx, 3 */
  EDX = (0x3u);
  /* 10263d03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263d06 jb 0x10263d14 */
  if (C.cf) goto L_10263d14;
  /* 10263d08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10263d0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263d0d jmp dword ptr [eax*4 + 0x10263d18] */
  switch (EAX) {
    case 1: goto L_10263d28;
    case 2: goto L_10263d48;
    case 3: goto L_10263d70;
    default: x86_unimpl("switch@0x10263d0d out of table"); return;
  }
L_10263d14:;
  /* 10263d14 jmp dword ptr [ecx*4 + 0x10263e10] */
  switch (ECX) {
    case 0: goto L_10263e20;
    case 1: goto L_10263e28;
    case 2: goto L_10263e38;
    case 3: goto L_10263e4c;
    default: x86_unimpl("switch@0x10263d14 out of table"); return;
  }
  /* 10263d1b nop  */
  /* nop */
L_10263d28:;
  /* 10263d28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10263d2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10263d2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10263d30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10263d31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263d34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10263d35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263d38 jb 0x10263cf0 */
  if (C.cf) goto L_10263cf0;
  /* 10263d3a std  */
  C.df=1;
  /* 10263d3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263d3d cld  */
  C.df=0;
  /* 10263d3e jmp dword ptr [edx*4 + 0x10263e10] */
  switch (EDX) {
    case 0: goto L_10263e20;
    case 1: goto L_10263e28;
    case 2: goto L_10263e38;
    case 3: goto L_10263e4c;
    default: x86_unimpl("switch@0x10263d3e out of table"); return;
  }
  /* 10263d45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10263d48:;
  /* 10263d48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10263d4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10263d4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10263d50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10263d53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263d56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10263d59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263d5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263d5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263d62 jb 0x10263cf0 */
  if (C.cf) goto L_10263cf0;
  /* 10263d64 std  */
  C.df=1;
  /* 10263d65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263d67 cld  */
  C.df=0;
  /* 10263d68 jmp dword ptr [edx*4 + 0x10263e10] */
  switch (EDX) {
    case 0: goto L_10263e20;
    case 1: goto L_10263e28;
    case 2: goto L_10263e38;
    case 3: goto L_10263e4c;
    default: x86_unimpl("switch@0x10263d68 out of table"); return;
  }
  /* 10263d6f nop  */
  /* nop */
L_10263d70:;
  /* 10263d70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10263d73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10263d75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10263d78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10263d7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10263d7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10263d81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10263d84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10263d87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263d8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10263d8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263d90 jb 0x10263cf0 */
  if (C.cf) goto L_10263cf0;
  /* 10263d96 std  */
  C.df=1;
  /* 10263d97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10263d99 cld  */
  C.df=0;
  /* 10263d9a jmp dword ptr [edx*4 + 0x10263e10] */
  switch (EDX) {
    case 0: goto L_10263e20;
    case 1: goto L_10263e28;
    case 2: goto L_10263e38;
    case 3: goto L_10263e4c;
    default: x86_unimpl("switch@0x10263d9a out of table"); return;
  }
  /* 10263da1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10263da4 les edi, ptr [0x3dcc1026] */
  x86_unimpl("les @ 0x10263da4");
  /* 10263daa adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10263dad cmp eax, 0x3ddc1026 */
  { uint32_t _a=(EAX),_b=(0x3ddc1026u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263db2 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10263db5 cmp eax, 0x3dec1026 */
  { uint32_t _a=(EAX),_b=(0x3dec1026u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263dba adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10263dc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10263dc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10263dcc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10263dd0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10263dd4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10263dd8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10263ddc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10263de0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10263de4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10263de8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10263dec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10263df0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10263df4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10263df8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10263dfc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10263e03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10263e05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10263e07:;
  /* 10263e07 jmp dword ptr [edx*4 + 0x10263e10] */
  switch (EDX) {
    case 0: goto L_10263e20;
    case 1: goto L_10263e28;
    case 2: goto L_10263e38;
    case 3: goto L_10263e4c;
    default: x86_unimpl("switch@0x10263e07 out of table"); return;
  }
  /* 10263e0e mov edi, edi */
  EDI = (EDI);
L_10263e20:;
  /* 10263e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263e23 pop esi */
  ESI = (pop32());
  /* 10263e24 pop edi */
  EDI = (pop32());
  /* 10263e25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263e26 ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263e27 nop  */
  /* nop */
L_10263e28:;
  /* 10263e28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10263e2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10263e2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263e31 pop esi */
  ESI = (pop32());
  /* 10263e32 pop edi */
  EDI = (pop32());
  /* 10263e33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263e34 ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263e35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10263e38:;
  /* 10263e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10263e3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10263e3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10263e41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10263e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263e47 pop esi */
  ESI = (pop32());
  /* 10263e48 pop edi */
  EDI = (pop32());
  /* 10263e49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263e4a ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
  /* 10263e4b nop  */
  /* nop */
L_10263e4c:;
  /* 10263e4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10263e4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10263e52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10263e55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10263e58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10263e5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10263e5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263e61 pop esi */
  ESI = (pop32());
  /* 10263e62 pop edi */
  EDI = (pop32());
  /* 10263e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10263e64 ret  */
  ESPCHK(0x10263b30u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10263e68 (32 bytes, 18 insns) */
void f_10263e68(void) {
  FTRACE(0x10263e68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263e68 push ebp */
  push32((uint32_t)(EBP));
  /* 10263e69 mov ebp, esp */
  EBP = (ESP);
  /* 10263e6b push ebx */
  push32((uint32_t)(EBX));
  /* 10263e6c push esi */
  push32((uint32_t)(ESI));
  /* 10263e6d push edi */
  push32((uint32_t)(EDI));
  /* 10263e6e push ebp */
  push32((uint32_t)(EBP));
  /* 10263e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10263e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10263e73 push 0x10263e80 */
  push32((uint32_t)(0x10263e80u));
  /* 10263e78 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10263e7b call 0x10264070 */
  push32(0x10263e80u); f_10264070();
  /* 10263e80 pop ebp */
  EBP = (pop32());
  /* 10263e81 pop edi */
  EDI = (pop32());
  /* 10263e82 pop esi */
  ESI = (pop32());
  /* 10263e83 pop ebx */
  EBX = (pop32());
  /* 10263e84 mov esp, ebp */
  ESP = (EBP);
  /* 10263e86 pop ebp */
  EBP = (pop32());
  /* 10263e87 ret  */
  ESPCHK(0x10263e68u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10263eaa (104 bytes, 33 insns) */
void f_10263eaa(void) {
  FTRACE(0x10263eaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263eaa push ebx */
  push32((uint32_t)(EBX));
  /* 10263eab push esi */
  push32((uint32_t)(ESI));
  /* 10263eac push edi */
  push32((uint32_t)(EDI));
  /* 10263ead mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10263eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10263eb2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10263eb4 push 0x10263e88 */
  push32((uint32_t)(0x10263e88u));
  /* 10263eb9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10263ec0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10263ec7:;
  /* 10263ec7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10263ecb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10263ece mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10263ed1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263ed4 je 0x10263f04 */
  if (C.zf) goto L_10263f04;
  /* 10263ed6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263eda je 0x10263f04 */
  if (C.zf) goto L_10263f04;
  /* 10263edc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10263edf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10263ee2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10263ee6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10263ee9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10263eee jne 0x10263f02 */
  if (!C.zf) goto L_10263f02;
  /* 10263ef0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10263ef5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10263ef9 call 0x10263f3e */
  push32(0x10263efeu); f_10263f3e();
  /* 10263efe call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10263f02u);
L_10263f02:;
  /* 10263f02 jmp 0x10263ec7 */
  goto L_10263ec7;
L_10263f04:;
  /* 10263f04 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10263f0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10263f0e pop edi */
  EDI = (pop32());
  /* 10263f0f pop esi */
  ESI = (pop32());
  /* 10263f10 pop ebx */
  EBX = (pop32());
  /* 10263f11 ret  */
  ESPCHK(0x10263eaau, _esp0);
  ESP += 4; return;
}

/* FUN_10003f3e @ 0x10263f3e (24 bytes, 10 insns) */
void f_10263f3e(void) {
  FTRACE(0x10263f3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10263f3e push ebx */
  push32((uint32_t)(EBX));
  /* 10263f3f push ecx */
  push32((uint32_t)(ECX));
  /* 10263f40 mov ebx, 0x102664f0 */
  EBX = (0x102664f0u);
  /* 10263f45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10263f48 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10263f4b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10263f4e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10263f51 pop ecx */
  ECX = (pop32());
  /* 10263f52 pop ebx */
  EBX = (pop32());
  /* 10263f53 ret 4 */
  ESPCHK(0x10263f3eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000401d @ 0x1026401d (27 bytes, 11 insns) */
void f_1026401d(void) {
  FTRACE(0x1026401du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1026401d push ebp */
  push32((uint32_t)(EBP));
  /* 1026401e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10264022 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10264024 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10264027 push eax */
  push32((uint32_t)(EAX));
  /* 10264028 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1026402b push eax */
  push32((uint32_t)(EAX));
  /* 1026402c call 0x10263eaa */
  push32(0x10264031u); f_10263eaa();
  /* 10264031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10264034 pop ebp */
  EBP = (pop32());
  /* 10264035 ret 4 */
  ESPCHK(0x1026401du, _esp0);
  ESP += 8; return;
}

/* FUN_10004040 @ 0x10264040 (47 bytes, 17 insns) */
void f_10264040(void) {
  FTRACE(0x10264040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10264040 push ecx */
  push32((uint32_t)(ECX));
  /* 10264041 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10264046 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1026404a jb 0x10264060 */
  if (C.cf) goto L_10264060;
L_1026404c:;
  /* 1026404c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10264052 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10264057 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10264059 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1026405e jae 0x1026404c */
  if (!C.cf) goto L_1026404c;
L_10264060:;
  /* 10264060 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10264062 mov eax, esp */
  EAX = (ESP);
  /* 10264064 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10264066 mov esp, ecx */
  ESP = (ECX);
  /* 10264068 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1026406a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1026406d push eax */
  push32((uint32_t)(EAX));
  /* 1026406e ret  */
  ESPCHK(0x10264040u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10264070 (6 bytes, 1 insns) */
void f_10264070(void) {
  FTRACE(0x10264070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10264070 jmp dword ptr [0x10265004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10265004)))); return;
}

